// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144327c18 FUN_144327c18 body=269 status=ok
// SIG undefined FUN_144327c18(void)

undefined8 FUN_144327c18(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144327d1f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144327d1f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144327d1f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144327cd3;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144327d26(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_144327cd3;
    }
  }
  uVar6 = 0;
LAB_144327cd3:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144327d26 FUN_144327d26 body=428 status=ok
// SIG undefined FUN_144327d26(void)

void FUN_144327d26(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = *param_1;
  iVar2 = *(int *)(lVar9 + 0x118);
  *(uint *)(lVar9 + 0x118) = iVar2 + 1U;
  if (*(uint *)(lVar9 + 0x11c) < iVar2 + 1U) {
    FUN_141306894((longlong *)(lVar9 + 0x110),iVar2);
  }
  lVar11 = *(longlong *)(lVar9 + 0x110);
  lVar10 = (longlong)iVar2 * 0x38;
  puVar1 = (undefined8 *)(lVar11 + lVar10);
  *(undefined8 *)(lVar11 + lVar10) = 0;
  iVar2 = (int)param_1[2];
  pvVar3 = (void *)param_1[1];
  *(int *)(lVar11 + 8 + lVar10) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,pvVar3,(longlong)iVar2 * 2);
  }
  *(int *)(puVar1 + 6) = (int)param_1[7];
  lVar11 = param_1[3];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar10 = param_1[4];
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x2c);
  lVar12 = param_1[6];
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x34);
  *(int *)(puVar1 + 4) = (int)param_1[5];
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar6;
  *(int *)(puVar1 + 5) = (int)lVar12;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar7;
  *(int *)(puVar1 + 2) = (int)lVar11;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar4;
  *(int *)(puVar1 + 3) = (int)lVar10;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar5;
  local_68 = (void *)0x0;
  local_60 = (int)param_1[2];
  lVar11 = (longlong)local_60;
  pvVar3 = (void *)param_1[1];
  if (lVar11 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,pvVar3,lVar11 * 2);
  }
  local_38 = (undefined4)param_1[7];
  local_58 = (undefined4)param_1[3];
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_50 = (undefined4)param_1[4];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x24);
  local_48 = param_1[5];
  lStack_40 = param_1[6];
  lVar11 = *(longlong *)(lVar9 + 0xf0);
  lVar9 = (longlong)*(int *)(lVar9 + 0xf8);
  if (lVar9 == 0) {
    bVar8 = 1;
  }
  else {
    lVar12 = lVar9 * 0x50 + lVar11;
    lVar9 = lVar9 * 0x50;
    lVar10 = lVar11;
    do {
      bVar8 = FUN_140c3e654(lVar10 + 0x18,&local_68);
      lVar11 = lVar10;
      if (bVar8 != 0) break;
      lVar10 = lVar10 + 0x50;
      lVar9 = lVar9 + -0x50;
      lVar11 = lVar12;
    } while (lVar9 != 0);
    bVar8 = bVar8 ^ 1;
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((bVar8 == 0 && lVar11 != 0) && (*(longlong *)(lVar11 + 8) != 0)) {
    FUN_1413ea8d6();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144327ed4 FUN_144327ed4 body=72 status=ok
// SIG undefined FUN_144327ed4(void)

uint FUN_144327ed4(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    uVar5 = *(uint *)(lVar3 + 0xc);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar5 = *(uint *)(lVar3 + 0xc);
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
  return uVar5 & 0xffffff01;
}



// FUNCTION 144327f32 FUN_144327f32 body=12 status=ok
// SIG undefined FUN_144327f32(void)

void FUN_144327f32(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144327f3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144327f3e FUN_144327f3e body=29 status=ok
// SIG undefined FUN_144327f3e(void)

undefined8 FUN_144327f3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144327f5c FUN_144327f5c body=2207 status=ok
// SIG undefined FUN_144327f5c(void)

void FUN_144327f5c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
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
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  double local_d0;
  code *local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(byte *)((longlong)param_2 + 0x9c) & 1) != 0) {
    lVar1 = *param_1;
    cVar2 = (**(code **)(*param_2 + 0x4e8))(param_2);
    if (cVar2 != '\0') {
      if (DAT_14cad2858 == 0) {
        local_f0 = &local_c8;
        local_c8 = FUN_144a7958c;
        local_e0 = FUN_14081d0ea;
        local_e8 = &LAB_146395584;
        local_f8 = &LAB_147a0ba80;
        local_100 = &LAB_14575ccce;
        local_108 = L"Engine";
        local_110 = 0x40000000000;
        local_118 = 0x10000004;
        local_120 = 0x10;
        local_128 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      if (((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) !=
           DAT_14cad2858 + 0x30)) || ((int)param_2[0x13b] == 0)) {
        dVar13 = *(double *)(lVar1 + 0x128);
        dVar4 = *(double *)(lVar1 + 0x130);
        dVar19 = dVar13 + *(double *)(lVar1 + 0x140);
        dVar5 = dVar4 + *(double *)(lVar1 + 0x148);
        dVar18 = *(double *)(lVar1 + 0x138);
        dVar7 = dVar18 + *(double *)(lVar1 + 0x150);
        dVar3 = dVar13 - *(double *)(lVar1 + 0x140);
        dVar10 = dVar4 - *(double *)(lVar1 + 0x148);
        dVar8 = dVar18 - *(double *)(lVar1 + 0x150);
        dVar17 = dVar3;
        if (dVar19 <= dVar3) {
          dVar17 = dVar19;
        }
        dVar6 = dVar10;
        if (dVar5 <= dVar10) {
          dVar6 = dVar5;
        }
        dVar16 = dVar8;
        if (dVar7 <= dVar8) {
          dVar16 = dVar7;
        }
        if (dVar3 <= dVar19) {
          dVar3 = dVar19;
        }
        if (dVar10 <= dVar5) {
          dVar10 = dVar5;
        }
        if (dVar8 <= dVar7) {
          dVar8 = dVar7;
        }
        dVar5 = (double)param_2[0x2e];
        dVar7 = (double)param_2[0x2c];
        dVar19 = (double)param_2[0x2d];
        dVar9 = dVar7 - (double)param_2[0x2f];
        if (dVar9 <= dVar17) {
          dVar17 = dVar9;
        }
        if (dVar3 <= dVar9) {
          dVar3 = dVar9;
        }
        dVar9 = dVar19 - (double)param_2[0x30];
        if (dVar9 <= dVar6) {
          dVar6 = dVar9;
        }
        if (dVar10 <= dVar9) {
          dVar10 = dVar9;
        }
        dVar9 = dVar5 - (double)param_2[0x31];
        if (dVar9 <= dVar16) {
          dVar16 = dVar9;
        }
        if (dVar8 <= dVar9) {
          dVar8 = dVar9;
        }
        dVar9 = (double)param_2[0x2f] + dVar7;
        if (dVar9 <= dVar17) {
          dVar17 = dVar9;
        }
        if (dVar3 <= dVar9) {
          dVar3 = dVar9;
        }
        dVar9 = (double)param_2[0x30] + dVar19;
        if (dVar9 <= dVar6) {
          dVar6 = dVar9;
        }
        if (dVar10 <= dVar9) {
          dVar10 = dVar9;
        }
        dVar9 = (double)param_2[0x31] + dVar5;
        if (dVar9 <= dVar16) {
          dVar16 = dVar9;
        }
        if (dVar8 <= dVar9) {
          dVar8 = dVar9;
        }
        dVar8 = (dVar8 - dVar16) * 0.5;
        dVar10 = (dVar10 - dVar6) * 0.5;
        dVar3 = (dVar3 - dVar17) * 0.5;
        dVar6 = dVar6 + dVar10;
        dVar17 = dVar17 + dVar3;
        dVar16 = dVar16 + dVar8;
        dVar5 = SQRT((dVar5 - dVar16) * (dVar5 - dVar16) +
                     (dVar7 - dVar17) * (dVar7 - dVar17) + (dVar19 - dVar6) * (dVar19 - dVar6)) +
                (double)param_2[0x32];
        dVar13 = SQRT((dVar18 - dVar16) * (dVar18 - dVar16) +
                      (dVar13 - dVar17) * (dVar13 - dVar17) + (dVar4 - dVar6) * (dVar4 - dVar6)) +
                 *(double *)(lVar1 + 0x158);
        *(double *)(lVar1 + 0x128) = dVar17;
        *(double *)(lVar1 + 0x130) = dVar6;
        *(double *)(lVar1 + 0x138) = dVar16;
        *(double *)(lVar1 + 0x140) = dVar3;
        *(double *)(lVar1 + 0x148) = dVar10;
        *(double *)(lVar1 + 0x150) = dVar8;
        if (dVar13 <= dVar5) {
          dVar13 = dVar5;
        }
        dVar4 = SQRT(dVar8 * dVar8 + dVar3 * dVar3 + dVar10 * dVar10);
        if (dVar13 <= dVar4) {
          dVar4 = dVar13;
        }
      }
      else {
        dVar5 = (double)param_2[0x48];
        dVar7 = (double)param_2[0x49];
        dVar18 = (double)param_2[0x4a];
        dVar3 = (double)param_2[0x50];
        dVar19 = (double)param_2[0x51];
        dVar6 = (double)param_2[0x52];
        dVar10 = dVar7 + dVar7;
        dVar4 = dVar18 + dVar18;
        dVar13 = dVar5 * (dVar5 + dVar5);
        dVar11 = (1.0 - (dVar18 * dVar4 + dVar7 * dVar10)) * dVar3;
        dVar12 = (1.0 - (dVar18 * dVar4 + dVar13)) * dVar19;
        dVar16 = (1.0 - (dVar13 + dVar7 * dVar10)) * dVar6;
        dVar13 = (double)param_2[0x4b];
        dVar18 = dVar4 * dVar13;
        dVar17 = (dVar5 + dVar5) * (double)param_2[0x4b];
        dVar13 = dVar10 * dVar13;
        dVar14 = (dVar10 * dVar5 + dVar18) * dVar3;
        dVar15 = (dVar4 * dVar7 + dVar17) * dVar19;
        dVar8 = (dVar13 + (double)param_2[0x48] * dVar4) * dVar6;
        dVar3 = ((double)param_2[0x48] * dVar4 - dVar13) * dVar3;
        dVar19 = (dVar10 * dVar5 - dVar18) * dVar19;
        dVar6 = (dVar4 * dVar7 - dVar17) * dVar6;
        dVar13 = (double)param_2[0x144];
        dVar4 = (double)param_2[0x142];
        dVar18 = (double)param_2[0x143];
        dVar17 = (double)param_2[0x145];
        dVar5 = (double)param_2[0x146];
        dVar7 = (double)param_2[0x147];
        dVar20 = ABS(dVar8 * dVar7) + ABS(dVar19 * dVar5) + ABS(dVar11 * dVar17);
        dVar10 = ABS(dVar6 * (double)param_2[0x147]) +
                 ABS(dVar12 * (double)param_2[0x146]) + ABS(dVar14 * (double)param_2[0x145]);
        dVar17 = ABS(dVar16 * dVar7) + ABS(dVar15 * dVar5) + ABS(dVar3 * dVar17);
        dVar5 = dVar8 * dVar8 + dVar19 * dVar19 + dVar11 * dVar11;
        dVar7 = dVar6 * dVar6 + dVar12 * dVar12 + dVar14 * dVar14;
        dVar9 = dVar16 * dVar16 + dVar15 * dVar15 + dVar3 * dVar3;
        if (dVar5 <= dVar7) {
          dVar5 = dVar7;
        }
        if (dVar5 <= dVar9) {
          dVar5 = dVar9;
        }
        dVar7 = dVar13 * dVar8 + dVar18 * dVar19 + dVar4 * dVar11 + (double)param_2[0x4c];
        dVar8 = dVar13 * dVar6 + (double)param_2[0x143] * dVar12 + dVar4 * dVar14 +
                (double)param_2[0x4d];
        dVar13 = dVar13 * dVar16 + dVar18 * dVar15 + dVar4 * dVar3 + (double)param_2[0x4e];
        if (dVar5 < 0.0) {
          dVar5 = sqrt(dVar5);
        }
        else {
          dVar5 = SQRT(dVar5);
        }
        dVar4 = SQRT(dVar10 * dVar10 + dVar17 * dVar17 + dVar20 * dVar20);
        local_d0 = dVar5 * (double)param_2[0x148];
        if (dVar4 <= dVar5 * (double)param_2[0x148]) {
          local_d0 = dVar4;
        }
        dVar4 = *(double *)(lVar1 + 0x128);
        dVar18 = *(double *)(lVar1 + 0x130);
        dVar19 = dVar4 + *(double *)(lVar1 + 0x140);
        dVar6 = dVar18 + *(double *)(lVar1 + 0x148);
        dVar5 = *(double *)(lVar1 + 0x138);
        dVar16 = dVar5 + *(double *)(lVar1 + 0x150);
        dVar11 = dVar4 - *(double *)(lVar1 + 0x140);
        dVar12 = dVar18 - *(double *)(lVar1 + 0x148);
        dVar3 = dVar5 - *(double *)(lVar1 + 0x150);
        dVar9 = dVar11;
        if (dVar19 <= dVar11) {
          dVar9 = dVar19;
        }
        dVar14 = dVar12;
        if (dVar6 <= dVar12) {
          dVar14 = dVar6;
        }
        if (dVar11 <= dVar19) {
          dVar11 = dVar19;
        }
        dVar19 = dVar3;
        if (dVar16 <= dVar3) {
          dVar19 = dVar16;
        }
        if (dVar12 <= dVar6) {
          dVar12 = dVar6;
        }
        if (dVar3 <= dVar16) {
          dVar3 = dVar16;
        }
        dVar6 = dVar7 - dVar20;
        if (dVar6 <= dVar9) {
          dVar9 = dVar6;
        }
        if (dVar11 <= dVar6) {
          dVar11 = dVar6;
        }
        dVar6 = dVar8 - dVar10;
        if (dVar6 <= dVar14) {
          dVar14 = dVar6;
        }
        if (dVar12 <= dVar6) {
          dVar12 = dVar6;
        }
        dVar6 = dVar13 - dVar17;
        if (dVar6 <= dVar19) {
          dVar19 = dVar6;
        }
        if (dVar3 <= dVar6) {
          dVar3 = dVar6;
        }
        dVar17 = dVar13 + dVar17;
        dVar20 = dVar20 + dVar7;
        if (dVar20 <= dVar9) {
          dVar9 = dVar20;
        }
        if (dVar11 <= dVar20) {
          dVar11 = dVar20;
        }
        dVar10 = dVar10 + dVar8;
        if (dVar10 <= dVar14) {
          dVar14 = dVar10;
        }
        if (dVar12 <= dVar10) {
          dVar12 = dVar10;
        }
        if (dVar17 <= dVar19) {
          dVar19 = dVar17;
        }
        if (dVar3 <= dVar17) {
          dVar3 = dVar17;
        }
        dVar17 = (dVar3 - dVar19) * 0.5;
        dVar10 = (dVar12 - dVar14) * 0.5;
        dVar3 = (dVar11 - dVar9) * 0.5;
        dVar14 = dVar14 + dVar10;
        dVar9 = dVar9 + dVar3;
        dVar19 = dVar19 + dVar17;
        dVar18 = SQRT((dVar5 - dVar19) * (dVar5 - dVar19) +
                      (dVar4 - dVar9) * (dVar4 - dVar9) + (dVar18 - dVar14) * (dVar18 - dVar14)) +
                 *(double *)(lVar1 + 0x158);
        *(double *)(lVar1 + 0x128) = dVar9;
        *(double *)(lVar1 + 0x130) = dVar14;
        *(double *)(lVar1 + 0x138) = dVar19;
        *(double *)(lVar1 + 0x140) = dVar3;
        *(double *)(lVar1 + 0x148) = dVar10;
        *(double *)(lVar1 + 0x150) = dVar17;
        dVar13 = SQRT((dVar13 - dVar19) * (dVar13 - dVar19) +
                      (dVar7 - dVar9) * (dVar7 - dVar9) + (dVar8 - dVar14) * (dVar8 - dVar14)) +
                 local_d0;
        if (dVar18 <= dVar13) {
          dVar18 = dVar13;
        }
        dVar4 = SQRT(dVar17 * dVar17 + dVar3 * dVar3 + dVar10 * dVar10);
        if (dVar18 <= dVar4) {
          dVar4 = dVar18;
        }
      }
      *(double *)(lVar1 + 0x158) = dVar4;
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144328802 FUN_144328802 body=55 status=ok
// SIG undefined FUN_144328802(void)

void FUN_144328802(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14665ab9c(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 14432883a FUN_14432883a body=29 status=ok
// SIG undefined FUN_14432883a(void)

undefined8 FUN_14432883a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443289d6 FUN_1443289d6 body=93 status=ok
// SIG undefined FUN_1443289d6(void)

void FUN_1443289d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d8d20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144328a34 FUN_144328a34 body=93 status=ok
// SIG undefined FUN_144328a34(void)

void FUN_144328a34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9d8d20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144328a92 FUN_144328a92 body=126 status=ok
// SIG undefined FUN_144328a92(void)

void FUN_144328a92(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9d8d20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144328b01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144328b1e FUN_144328b1e body=270 status=ok
// SIG undefined FUN_144328b1e(void)

undefined8 FUN_144328b1e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144328c26;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144328c26;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144328c26:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144328bda;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0xab8))();
      uVar6 = 1;
      goto LAB_144328bda;
    }
  }
  uVar6 = 0;
LAB_144328bda:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144328c2d FUN_144328c2d body=30263 status=ok
// SIG undefined FUN_144328c2d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144328c2d(void)

{
  void *_Src;
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined1 local_b0;
  char *local_a8;
  int local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = "state_rem";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2b60 = (ulonglong)uVar2;
  local_a8 = "state_add";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2b68 = (ulonglong)uVar2;
  local_a8 = "state_remove_primary";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2b70 = (ulonglong)uVar2;
  local_a8 = "AssetRegistry";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2b78 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbe2b80,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1443134a8);
  _DAT_14cbe2b94 = 0;
  FUN_14052b5e0(&DAT_14cbe2b90,"character",0);
  _DAT_14cbe2ba0 = 0;
  FUN_14052b5e0(&DAT_14cbe2b9c,"profile",0);
  local_a8 = "entry_sets";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2ba8 = (ulonglong)uVar2;
  local_a8 = "entries";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2bb0 = (ulonglong)uVar2;
  local_a8 = "menu_title";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2bb8 = (ulonglong)uVar2;
  local_a8 = "actions";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2bc0 = (ulonglong)uVar2;
  local_a8 = "loc_text";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2bc8 = (ulonglong)uVar2;
  local_a8 = "desc_text";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2bd0 = (ulonglong)uVar2;
  local_a8 = "style";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2bd8 = (ulonglong)uVar2;
  local_a8 = "horizontal";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2be0 = (ulonglong)uVar2;
  local_a8 = "entry_set_default";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2be8 = (ulonglong)uVar2;
  local_a8 = "required_nexus_layer";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2bf0 = (ulonglong)uVar2;
  local_a8 = "tooltip_key";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2bf8 = (ulonglong)uVar2;
  local_a8 = "set_push";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2c00 = (ulonglong)uVar2;
  local_a8 = "exit_game";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2c08 = (ulonglong)uVar2;
  local_a8 = "back";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2c10 = (ulonglong)uVar2;
  local_a8 = "back_actions";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2c18 = (ulonglong)uVar2;
  _DAT_14cbe2c20 = 0;
  uRam000000014cbe2c28 = 0;
  _DAT_14cbe2c30 = 0;
  DAT_14cbe2c38 = 0;
  uRam000000014cbe2c40 = 0;
  FUN_1446ddda2(&DAT_14cbe2c20,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_1443134b9);
  local_a8 = "num_rows_override";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2c48 = (ulonglong)uVar2;
  local_a8 = "show_capacity_text";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2c50 = (ulonglong)uVar2;
  local_a8 = "num_columns_override";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2c58 = (ulonglong)uVar2;
  local_a8 = "sort_list_config";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2c60 = (ulonglong)uVar2;
  local_a8 = "filter_list_config";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2c68 = (ulonglong)uVar2;
  local_a8 = "default_sort_ident";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2c70 = (ulonglong)uVar2;
  local_a8 = "enable_filter";
  local_a0 = 0xd;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2c78 = (ulonglong)uVar2;
  local_a8 = "enable_sort";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2c80 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbe2c88,"backpack_item_grid");
  atexit((_func_5014 *)&LAB_1443134ca);
  FUN_1400b22c2(&DAT_14cbe2c98,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_1443134db);
  FUN_1400b22c2(&DAT_14cbe2ca8,"sort-dropdown");
  atexit((_func_5014 *)&LAB_1443134ec);
  FUN_1400b22c2(&DAT_14cbe2cb8,"filter-dropdown");
  atexit((_func_5014 *)&LAB_1443134fd);
  local_a8 = "ITEM_CARD";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2cc8 = (ulonglong)uVar2;
  local_a8 = "ITEM_CARD_COMPARE";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2cd0 = (ulonglong)uVar2;
  local_a8 = "MENU_FULL_BACKPACK";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2cd8 = (ulonglong)uVar2;
  local_a8 = "MENU_POPUP_BACKPACK";
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2ce0 = (ulonglong)uVar2;
  local_a8 = "MENU_PLAYER_STATS";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2ce8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbe2cf0,"filter-dropdown");
  atexit((_func_5014 *)&LAB_14431350e);
  FUN_1400b22c2(&DAT_14cbe2d00,"equip_slot_dropdown");
  atexit((_func_5014 *)&LAB_14431351f);
  FUN_1400b22c2(&DAT_14cbe2d10,"mark-dropdown");
  atexit((_func_5014 *)&LAB_144313530);
  FUN_1400b22c2(&DAT_14cbe2d20,"item-dropdown");
  atexit((_func_5014 *)&LAB_144313541);
  FUN_1400b22c2(&DAT_14cbe2d30,"sort-dropdown");
  atexit((_func_5014 *)&LAB_144313552);
  FUN_1400b22c2(&DAT_14cbe2d40,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_144313563);
  FUN_1400b22c2(&DAT_14cbe2d50,"Popup");
  atexit((_func_5014 *)&LAB_144313574);
  FUN_1400b22c2(&DAT_14cbe2d60,"Fullsize");
  atexit((_func_5014 *)&LAB_144313585);
  FUN_1400b22c2(&DAT_14cbe2d70,"EchoLogs");
  atexit((_func_5014 *)&LAB_144313596);
  FUN_1400b22c2(&DAT_14cbe2d80,"PlayerStats");
  atexit((_func_5014 *)&LAB_1443135a7);
  FUN_1400b22c2(&DAT_14cbe2d90,"RewardCenter");
  atexit((_func_5014 *)&LAB_1443135b8);
  FUN_140056680(&DAT_14cbe2da0,L"reset");
  atexit((_func_5014 *)&LAB_1443135c9);
  local_a8 = "add_on_activate";
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2db0 = (ulonglong)uVar2;
  local_a8 = "remove_on_deactivate";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2db8 = (ulonglong)uVar2;
  local_a8 = "filter_selected";
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2dc0 = (ulonglong)uVar2;
  local_a8 = "hide_messages_on_deactivate";
  local_a0 = 0x1b;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2dc8 = (ulonglong)uVar2;
  local_a8 = "drop_action_supported";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2dd0 = (ulonglong)uVar2;
  local_a8 = "equip_action_supported";
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2dd8 = (ulonglong)uVar2;
  local_a8 = "unequip_action_supported";
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2de0 = (ulonglong)uVar2;
  local_a8 = "compare_action_supported";
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2de8 = (ulonglong)uVar2;
  local_a8 = "mark_item_action_supported";
  local_a0 = 0x1a;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2df0 = (ulonglong)uVar2;
  local_a8 = "mark_multiple_items_supported";
  local_a0 = 0x1d;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2df8 = (ulonglong)uVar2;
  local_a8 = "remote_inventory_action_supported";
  local_a0 = 0x21;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e00 = (ulonglong)uVar2;
  local_a8 = "unequip_message_ident";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e08 = (ulonglong)uVar2;
  local_a8 = "equip_message_ident";
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e10 = (ulonglong)uVar2;
  local_a8 = "swap_message_ident";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e18 = (ulonglong)uVar2;
  local_a8 = "drop_message_ident";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e20 = (ulonglong)uVar2;
  local_a8 = "cant_equip_message_ident";
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e28 = (ulonglong)uVar2;
  local_a8 = "insufficient_space_error_ident";
  local_a0 = 0x1e;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e30 = (ulonglong)uVar2;
  local_a8 = "multiple_item_deposit_ident";
  local_a0 = 0x1b;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e38 = (ulonglong)uVar2;
  local_a8 = "deposit_message_ident";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e40 = (ulonglong)uVar2;
  local_a8 = "incomplete_deposit_ident";
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e48 = (ulonglong)uVar2;
  local_a8 = "backpack_class_html";
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e50 = (ulonglong)uVar2;
  local_a8 = "standin_config";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e58 = (ulonglong)uVar2;
  local_a8 = "player_standin_tag";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e60 = (ulonglong)uVar2;
  local_a8 = "echo_bot_standin_tag";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e68 = (ulonglong)uVar2;
  local_a8 = "sortable_numeric_stats";
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e70 = (ulonglong)uVar2;
  local_a8 = "escape_hold_supported";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e78 = (ulonglong)uVar2;
  local_a8 = "max_visible_items";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe2e80 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbe2e88,L"action_ui_drop_item");
  atexit((_func_5014 *)&LAB_1443135da);
  FUN_140056680(&DAT_14cbe2e98,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_1443135eb);
  FUN_140056680(&DAT_14cbe2ea8,L"action_ui_unequip_item");
  atexit((_func_5014 *)&LAB_1443135fc);
  FUN_140056680(&DAT_14cbe2eb8,L"action_ui_compare_item");
  atexit((_func_5014 *)&LAB_14431360d);
  FUN_140056680(&DAT_14cbe2ec8,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_14431361e);
  FUN_140056680(&DAT_14cbe2ed8,L"action_ui_set_item_flag");
  atexit((_func_5014 *)&LAB_14431362f);
  FUN_140056680(&DAT_14cbe2ee8,L"action_ui_remote_bank_deposit");
  atexit((_func_5014 *)&LAB_144313640);
  FUN_140056680(&DAT_14cbe2ef8,L"action_ui_mark_all_filtered");
  atexit((_func_5014 *)&LAB_144313651);
  FUN_140056680(&DAT_14cbe2f08,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_144313662);
  FUN_140056680(&DAT_14cbe2f18,L"action_ui_show_player_stats");
  atexit((_func_5014 *)&LAB_144313673);
  FUN_140056680(&DAT_14cbe2f28,L"action_ui_mark_hovered_as_junk");
  atexit((_func_5014 *)&LAB_144313684);
  FUN_140056680(&DAT_14cbe2f38,L"action_ui_open_reward_center");
  atexit((_func_5014 *)&LAB_144313695);
  FUN_140056680(&DAT_14cbe2f48,L"action_ui_select_slot_1");
  atexit((_func_5014 *)&LAB_1443136a6);
  FUN_140056680(&DAT_14cbe2f58,L"action_ui_select_slot_2");
  atexit((_func_5014 *)&LAB_1443136b7);
  FUN_140056680(&DAT_14cbe2f68,L"action_ui_select_slot_3");
  atexit((_func_5014 *)&LAB_1443136c8);
  FUN_140056680(&DAT_14cbe2f78,L"action_ui_select_slot_4");
  atexit((_func_5014 *)&LAB_1443136d9);
  FUN_140056680(&DAT_14cbe2f88,L"action_ui_copy_focused_item_serial_number");
  atexit((_func_5014 *)&LAB_1443136ea);
  FUN_140056680(&DAT_14cbe2f98,L"action_ui_menu_escape_hold");
  atexit((_func_5014 *)&LAB_1443136fb);
  FUN_140056680(&DAT_14cbe2fa8,L"action_ui_inspect_item");
  atexit((_func_5014 *)&LAB_14431370c);
  FUN_140056680(&DAT_14cbe2fb8,L"action_ui_flip_item_card");
  atexit((_func_5014 *)&LAB_14431371d);
  FUN_140056680(&DAT_14cbe2fc8,L"action_ui_open_all_rewards");
  atexit((_func_5014 *)&LAB_14431372e);
  FUN_140056680(&DAT_14cbe2fd8,L"SelectText");
  atexit((_func_5014 *)&LAB_14431373f);
  FUN_140056680(&DAT_14cbe2fe8,L"CompareHint");
  atexit((_func_5014 *)&LAB_144313750);
  FUN_140056680(&DAT_14cbe2ff8,L"EquipHint");
  atexit((_func_5014 *)&LAB_144313761);
  FUN_140056680(&DAT_14cbe3008,L"UnequipHint");
  atexit((_func_5014 *)&LAB_144313772);
  FUN_140056680(&DAT_14cbe3018,L"DropHint");
  atexit((_func_5014 *)&LAB_144313783);
  FUN_140056680(&DAT_14cbe3028,L"SetItemFlagHint");
  atexit((_func_5014 *)&LAB_144313794);
  FUN_140056680(&DAT_14cbe3038,L"ToggleJunkHint");
  atexit((_func_5014 *)&LAB_1443137a5);
  FUN_140056680(&DAT_14cbe3048,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_1443137b6);
  FUN_140056680(&DAT_14cbe3058,L"PlayerStatsHint");
  atexit((_func_5014 *)&LAB_1443137c7);
  FUN_140056680(&DAT_14cbe3068,L"SwapWeaponsHint");
  atexit((_func_5014 *)&LAB_1443137d8);
  FUN_140056680(&DAT_14cbe3078,L"BackText");
  atexit((_func_5014 *)&LAB_1443137e9);
  FUN_140056680(&DAT_14cbe3088,L"SellHint");
  atexit((_func_5014 *)&LAB_1443137fa);
  FUN_140056680(&DAT_14cbe3098,L"BuyHint");
  atexit((_func_5014 *)&LAB_14431380b);
  FUN_140056680(&DAT_14cbe30a8,L"ExitMenuHint");
  atexit((_func_5014 *)&LAB_14431381c);
  FUN_140056680(&DAT_14cbe30b8,L"OpenAllRewardsHint");
  atexit((_func_5014 *)&LAB_14431382d);
  FUN_1400b22c2(&DAT_14cbe30c8,"trash");
  atexit((_func_5014 *)&LAB_14431383e);
  FUN_1400b22c2(&DAT_14cbe30d8,"favorite");
  atexit((_func_5014 *)&LAB_14431384f);
  FUN_1400b22c2(&DAT_14cbe30e8,"bankdeposit");
  atexit((_func_5014 *)&LAB_144313860);
  FUN_1400b22c2(&DAT_14cbe30f8,"taggroup1");
  atexit((_func_5014 *)&LAB_144313871);
  FUN_1400b22c2(&DAT_14cbe3108,"taggroup2");
  atexit((_func_5014 *)&LAB_144313882);
  FUN_1400b22c2(&DAT_14cbe3118,"taggroup3");
  atexit((_func_5014 *)&LAB_144313893);
  FUN_1400b22c2(&DAT_14cbe3128,"taggroup4");
  atexit((_func_5014 *)&LAB_1443138a4);
  local_a8 = "trash";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3138 = (ulonglong)uVar2;
  local_a8 = "favorite";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3140 = (ulonglong)uVar2;
  local_a8 = "bankdeposit";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3148 = (ulonglong)uVar2;
  local_a8 = "taggroup1";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3150 = (ulonglong)uVar2;
  local_a8 = "taggroup2";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3158 = (ulonglong)uVar2;
  local_a8 = "taggroup3";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3160 = (ulonglong)uVar2;
  local_a8 = "taggroup4";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3168 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbe3170,"OpenBackpack");
  atexit((_func_5014 *)&LAB_1443138b5);
  FUN_1400b22c2(&DAT_14cbe3180,"CloseBackpack");
  atexit((_func_5014 *)&LAB_1443138c6);
  FUN_1400b22c2(&DAT_14cbe3190,"OpenPlayerStats");
  atexit((_func_5014 *)&LAB_1443138d7);
  FUN_1400b22c2(&DAT_14cbe31a0,"ClosePlayerStats");
  atexit((_func_5014 *)&LAB_1443138e8);
  FUN_1400b22c2(&DAT_14cbe31b0,"OpenRewardCenter");
  atexit((_func_5014 *)&LAB_1443138f9);
  FUN_1400b22c2(&DAT_14cbe31c0,"CloseRewardCenter");
  atexit((_func_5014 *)&LAB_14431390a);
  FUN_1400b22c2(&DAT_14cbe31d0,"CompareStart");
  atexit((_func_5014 *)&LAB_14431391b);
  FUN_1400b22c2(&DAT_14cbe31e0,"CompareStop");
  atexit((_func_5014 *)&LAB_14431392c);
  FUN_1400b22c2(&DAT_14cbe31f0,"UnequipItem");
  atexit((_func_5014 *)&LAB_14431393d);
  FUN_1400b22c2(&DAT_14cbe3200,"EquipItem");
  atexit((_func_5014 *)&LAB_14431394e);
  FUN_1400b22c2(&DAT_14cbe3210,"DropItem");
  atexit((_func_5014 *)&LAB_14431395f);
  FUN_1400b22c2(&DAT_14cbe3220,"MarkItem");
  atexit((_func_5014 *)&LAB_144313970);
  FUN_1400b22c2(&DAT_14cbe3230,"Error");
  atexit((_func_5014 *)&LAB_144313981);
  FUN_1400b22c2(&DAT_14cbe3240,"ElementUnfocused");
  atexit((_func_5014 *)&LAB_144313992);
  FUN_1400b22c2(&DAT_14cbe3250,"ElementFocused");
  atexit((_func_5014 *)&LAB_1443139a3);
  FUN_1400b22c2(&DAT_14cbe3260,"ElementClicked");
  atexit((_func_5014 *)&LAB_1443139b4);
  FUN_1400b22c2(&DAT_14cbe3270,"EscapeInput");
  atexit((_func_5014 *)&LAB_1443139c5);
  FUN_1400b22c2(&DAT_14cbe3280,"WeaponSlotFocused");
  atexit((_func_5014 *)&LAB_1443139d6);
  FUN_1400b22c2(&DAT_14cbe3290,"WeaponSlotUnfocused");
  atexit((_func_5014 *)&LAB_1443139e7);
  FUN_1400b22c2(&DAT_14cbe32a0,"GearSlotFocused");
  atexit((_func_5014 *)&LAB_1443139f8);
  FUN_1400b22c2(&DAT_14cbe32b0,"GearSlotUnfocused");
  atexit((_func_5014 *)&LAB_144313a09);
  FUN_1400b22c2(&DAT_14cbe32c0,"BackpackSlotFocused");
  atexit((_func_5014 *)&LAB_144313a1a);
  FUN_1400b22c2(&DAT_14cbe32d0,"BackpackSlotUnfocused");
  atexit((_func_5014 *)&LAB_144313a2b);
  FUN_1400b22c2(&DAT_14cbe32e0,"MarkItemBank");
  atexit((_func_5014 *)&LAB_144313a3c);
  FUN_1400b22c2(&DAT_14cbe32f0,"MarkItemTrash");
  atexit((_func_5014 *)&LAB_144313a4d);
  FUN_1400b22c2(&DAT_14cbe3300,"MarkItemFavorite");
  atexit((_func_5014 *)&LAB_144313a5e);
  FUN_1400b22c2(&DAT_14cbe3310,"ClickPistol");
  atexit((_func_5014 *)&LAB_144313a6f);
  FUN_1400b22c2(&DAT_14cbe3320,"ClickAssaultRifle");
  atexit((_func_5014 *)&LAB_144313a80);
  FUN_1400b22c2(&DAT_14cbe3330,"ClickSMG");
  atexit((_func_5014 *)&LAB_144313a91);
  FUN_1400b22c2(&DAT_14cbe3340,"ClickShotgun");
  atexit((_func_5014 *)&LAB_144313aa2);
  FUN_1400b22c2(&DAT_14cbe3350,"ClickSniper");
  atexit((_func_5014 *)&LAB_144313ab3);
  FUN_1400b22c2(&DAT_14cbe3360,"ClickRepKit");
  atexit((_func_5014 *)&LAB_144313ac4);
  FUN_1400b22c2(&DAT_14cbe3370,"ClickGrenade");
  atexit((_func_5014 *)&LAB_144313ad5);
  FUN_1400b22c2(&DAT_14cbe3380,"ClickHeavyWeapon");
  atexit((_func_5014 *)&LAB_144313ae6);
  FUN_1400b22c2(&DAT_14cbe3390,"ClickClassMod");
  atexit((_func_5014 *)&LAB_144313af7);
  FUN_1400b22c2(&DAT_14cbe33a0,"ClickGadget");
  atexit((_func_5014 *)&LAB_144313b08);
  FUN_1400b22c2(&DAT_14cbe33b0,"ClickEnhancement");
  atexit((_func_5014 *)&LAB_144313b19);
  FUN_1400b22c2(&DAT_14cbe33c0,"ClickShield");
  atexit((_func_5014 *)&LAB_144313b2a);
  FUN_1400b22c2(&DAT_14cbe33d0,"EquipPistol");
  atexit((_func_5014 *)&LAB_144313b3b);
  FUN_1400b22c2(&DAT_14cbe33e0,"EquipAssaultRifle");
  atexit((_func_5014 *)&LAB_144313b4c);
  FUN_1400b22c2(&DAT_14cbe33f0,"EquipSMG");
  atexit((_func_5014 *)&LAB_144313b5d);
  FUN_1400b22c2(&DAT_14cbe3400,"EquipShotgun");
  atexit((_func_5014 *)&LAB_144313b6e);
  FUN_1400b22c2(&DAT_14cbe3410,"EquipSniper");
  atexit((_func_5014 *)&LAB_144313b7f);
  FUN_1400b22c2(&DAT_14cbe3420,"EquipRepKit");
  atexit((_func_5014 *)&LAB_144313b90);
  FUN_1400b22c2(&DAT_14cbe3430,"EquipGrenade");
  atexit((_func_5014 *)&LAB_144313ba1);
  FUN_1400b22c2(&DAT_14cbe3440,"EquipHeavyWeapon");
  atexit((_func_5014 *)&LAB_144313bb2);
  FUN_1400b22c2(&DAT_14cbe3450,"EquipClassMod");
  atexit((_func_5014 *)&LAB_144313bc3);
  FUN_1400b22c2(&DAT_14cbe3460,"EquipGadget");
  atexit((_func_5014 *)&LAB_144313bd4);
  FUN_1400b22c2(&DAT_14cbe3470,"EquipEnhancement");
  atexit((_func_5014 *)&LAB_144313be5);
  FUN_1400b22c2(&DAT_14cbe3480,"EquipShield");
  atexit((_func_5014 *)&LAB_144313bf6);
  FUN_1400b22c2(&DAT_14cbe3490,"weapon");
  atexit((_func_5014 *)&LAB_144313c07);
  FUN_1400b22c2(&DAT_14cbe34a0,"weapon_ps");
  atexit((_func_5014 *)&LAB_144313c18);
  FUN_1400b22c2(&DAT_14cbe34b0,"weapon_ar");
  atexit((_func_5014 *)&LAB_144313c29);
  FUN_1400b22c2(&DAT_14cbe34c0,"weapon_sg");
  atexit((_func_5014 *)&LAB_144313c3a);
  FUN_1400b22c2(&DAT_14cbe34d0,"weapon_sr");
  atexit((_func_5014 *)&LAB_144313c4b);
  FUN_1400b22c2(&DAT_14cbe34e0,"weapon_sm");
  atexit((_func_5014 *)&LAB_144313c5c);
  FUN_1400b22c2(&DAT_14cbe34f0,"grenade_gadget");
  atexit((_func_5014 *)&LAB_144313c6d);
  FUN_1400b22c2(&DAT_14cbe3500,"shield");
  atexit((_func_5014 *)&LAB_144313c7e);
  FUN_1400b22c2(&DAT_14cbe3510,"heavy_weapon_gadget");
  atexit((_func_5014 *)&LAB_144313c8f);
  FUN_1400b22c2(&DAT_14cbe3520,"repair_kit");
  atexit((_func_5014 *)&LAB_144313ca0);
  FUN_1400b22c2(&DAT_14cbe3530,"classmod");
  atexit((_func_5014 *)&LAB_144313cb1);
  FUN_1400b22c2(&DAT_14cbe3540,"classmod_dark_siren");
  atexit((_func_5014 *)&LAB_144313cc2);
  FUN_1400b22c2(&DAT_14cbe3550,"classmod_exo_soldier");
  atexit((_func_5014 *)&LAB_144313cd3);
  FUN_1400b22c2(&DAT_14cbe3560,"classmod_gravitar");
  atexit((_func_5014 *)&LAB_144313ce4);
  FUN_1400b22c2(&DAT_14cbe3570,"classmod_paladin");
  atexit((_func_5014 *)&LAB_144313cf5);
  FUN_1400b22c2(&DAT_14cbe3580,"gadget");
  atexit((_func_5014 *)&LAB_144313d06);
  FUN_1400b22c2(&DAT_14cbe3590,"enhancement");
  atexit((_func_5014 *)&LAB_144313d17);
  FUN_140056680(&DAT_14cbe35a0,L"recent");
  atexit((_func_5014 *)&LAB_144313d28);
  FUN_140056680(&DAT_14cbe35b0,L"type");
  atexit((_func_5014 *)&LAB_144313d39);
  FUN_140056680(&DAT_14cbe35c0,L"level");
  atexit((_func_5014 *)&LAB_144313d4a);
  FUN_140056680(&DAT_14cbe35d0,L"base_name");
  atexit((_func_5014 *)&LAB_144313d5b);
  FUN_140056680(&DAT_14cbe35e0,L"first_letter");
  atexit((_func_5014 *)&LAB_144313d6c);
  FUN_140056680(&DAT_14cbe35f0,L"value");
  atexit((_func_5014 *)&LAB_144313d7d);
  FUN_140056680(&DAT_14cbe3600,L"rarity");
  atexit((_func_5014 *)&LAB_144313d8e);
  FUN_140056680(&DAT_14cbe3610,L"manufacturer");
  atexit((_func_5014 *)&LAB_144313d9f);
  _Src = DAT_14cbe2b80;
  DAT_14cbe3620 = (void *)0x0;
  lVar8 = (longlong)DAT_14cbe2b88;
  _DAT_14cbe3628 = DAT_14cbe2b88;
  if (lVar8 == 0) {
    _DAT_14cbe362c = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cbe3620,DAT_14cbe2b88,0);
    memcpy(DAT_14cbe3620,_Src,lVar8 * 2);
  }
  atexit((_func_5014 *)&LAB_144313db0);
  FUN_140056680(&DAT_14cbe3630,L"healing");
  atexit((_func_5014 *)&LAB_144313dc1);
  local_a8 = "cancel";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3640 = (ulonglong)uVar2;
  local_a8 = "partial";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3648 = (ulonglong)uVar2;
  local_a8 = "all";
  local_a0 = 3;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3650 = (ulonglong)uVar2;
  local_a8 = "basic";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3658 = (ulonglong)uVar2;
  local_a8 = "challenge";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3660 = (ulonglong)uVar2;
  local_a8 = "online";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3668 = (ulonglong)uVar2;
  local_a8 = "social";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3670 = (ulonglong)uVar2;
  local_a8 = "alert";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3678 = (ulonglong)uVar2;
  local_a8 = "photo_mode";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3680 = (ulonglong)uVar2;
  local_a8 = "generic_task";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3688 = (ulonglong)uVar2;
  local_a8 = "mission";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3690 = (ulonglong)uVar2;
  local_a8 = "mail";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3698 = (ulonglong)uVar2;
  local_a8 = "respawn";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe36a0 = (ulonglong)uVar2;
  local_a8 = "tutorial";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe36a8 = (ulonglong)uVar2;
  local_a8 = "special_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe36b0 = (ulonglong)uVar2;
  local_a8 = "generic_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe36b8 = (ulonglong)uVar2;
  local_a8 = "vault_card";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe36c0 = (ulonglong)uVar2;
  local_a8 = "ONLINE_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe36c8 = (ulonglong)uVar2;
  local_a8 = "INGAME_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe36d0 = (ulonglong)uVar2;
  local_a8 = "NOTIFICATION_MESSAGE";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe36d8 = (ulonglong)uVar2;
  local_a8 = "MENU_TUTORIAL_MESSAGE";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe36e0 = (ulonglong)uVar2;
  local_a8 = "collectible";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe36e8 = (ulonglong)uVar2;
  local_a8 = "Cash";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe36f0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_a8,&DAT_14cbe36f8);
  if (cVar1 == '\0') {
    _DAT_14cbe36f8 = 0;
    uRam000000014cbe3700 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&DAT_14cbe3708,"tint_siren");
  atexit((_func_5014 *)&LAB_144313dd2);
  FUN_1400b22c2(&DAT_14cbe3718,"tint_health");
  atexit((_func_5014 *)&LAB_144313de3);
  _DAT_14cbe3728 = 0x47efffffe0000000;
  _DAT_14cbe3730 = 0x47efffffe0000000;
  _DAT_14cbe3738 = 0x47efffffe0000000;
  _DAT_14cbe3740 = 0x47efffffe0000000;
  _DAT_14cbe3748 = 0x47efffffe0000000;
  _DAT_14cbe3750 = 0x47efffffe0000000;
  _DAT_14cbe3758 = 0x47efffffe0000000;
  _DAT_14cbe3760 = 0x47efffffe0000000;
  local_a8 = "bone";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe376c = 0;
  FUN_14052b5e0(&DAT_14cbe3768,"PlayerAwareness",0);
  _DAT_14cbe3778 = "PlayerAwareness";
  FUN_1446f470e(&DAT_14cbe3780,L"UNSET",1);
  local_a8 = "init";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "update";
  local_a0 = 6;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "config_update";
  local_a0 = 0xd;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "deinit";
  local_a0 = 6;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&DAT_14cbe3788,L"Party",1);
  FUN_1446f470e(&DAT_14cbe3790,&DAT_149e063b2,1);
  local_a8 = "state_remove_primary";
  local_a0 = 0x14;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3798 = (ulonglong)uVar2;
  local_a8 = "state_add_primary";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe37a0 = (ulonglong)uVar2;
  local_a8 = "state_add";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe37a8 = (ulonglong)uVar2;
  local_a8 = "state_rem";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe37b0 = (ulonglong)uVar2;
  local_a8 = "set_menu_state";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe37b8 = (ulonglong)uVar2;
  local_a8 = "set_active_options";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe37c0 = (ulonglong)uVar2;
  _DAT_14cbe37d0 = 0;
  _DAT_14cbe37d8 = FUN_146659dec;
  _DAT_14cbe37e0 = "menu_vending_machine";
  _DAT_14cbe37c8 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbe37c8;
  atexit((_func_5014 *)&LAB_144313df4);
  FUN_140056680(&DAT_14cbe37e8,L"action_ui_sell_all_filtered");
  atexit((_func_5014 *)&LAB_144313e00);
  FUN_140056680(&DAT_14cbe37f8,L"action_ui_sell_all_junk");
  atexit((_func_5014 *)&LAB_144313e11);
  FUN_140056680(&DAT_14cbe3808,L"action_ui_vendor_refill");
  atexit((_func_5014 *)&LAB_144313e22);
  FUN_1400b22c2(&DAT_14cbe3818,"BuyItem");
  atexit((_func_5014 *)&LAB_144313e33);
  FUN_1400b22c2(&DAT_14cbe3828,"SellItem");
  atexit((_func_5014 *)&LAB_144313e44);
  local_a8 = "escape";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3838 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbe3840,"restock");
  atexit((_func_5014 *)&LAB_144313e55);
  FUN_1400b22c2(&DAT_14cbe3850,"sell_junk");
  atexit((_func_5014 *)&LAB_144313e66);
  FUN_1400b22c2(&DAT_14cbe3860,"item-dropdown");
  atexit((_func_5014 *)&LAB_144313e77);
  FUN_1400b22c2(&DAT_14cbe3870,"sort-dropdown");
  atexit((_func_5014 *)&LAB_144313e88);
  FUN_1400b22c2(&DAT_14cbe3880,"filter-dropdown");
  atexit((_func_5014 *)&LAB_144313e99);
  local_a8 = "menu_state";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3890 = (ulonglong)uVar2;
  local_a8 = "focus_item_delay";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3898 = (ulonglong)uVar2;
  local_a8 = "label";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe38a0 = (ulonglong)uVar2;
  local_a8 = "icon";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe38a8 = (ulonglong)uVar2;
  local_a8 = "allowed";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe38b0 = (ulonglong)uVar2;
  local_a8 = "compare_window";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe38b8 = (ulonglong)uVar2;
  local_a8 = "buy_message_ident";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe38c0 = (ulonglong)uVar2;
  local_a8 = "sell_message_ident";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe38c8 = (ulonglong)uVar2;
  local_a8 = "sell_junk_message_ident";
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe38d0 = (ulonglong)uVar2;
  local_a8 = "full_backpack_message_ident";
  local_a0 = 0x1b;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe38d8 = (ulonglong)uVar2;
  local_a8 = "ammo_refill_message_ident";
  local_a0 = 0x19;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe38e0 = (ulonglong)uVar2;
  local_a8 = "health_refill_message_ident";
  local_a0 = 0x1b;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe38e8 = (ulonglong)uVar2;
  local_a8 = "insufficient_funds_message_ident";
  local_a0 = 0x20;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe38f0 = (ulonglong)uVar2;
  local_a8 = "cant_sell_favorite_ident";
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe38f8 = (ulonglong)uVar2;
  local_a8 = "cant_sell_bank_item_ident";
  local_a0 = 0x19;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3900 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbe3908,"vending_buy");
  atexit((_func_5014 *)&LAB_144313eaa);
  FUN_1400b22c2(&DAT_14cbe3918,"vending_sell");
  atexit((_func_5014 *)&LAB_144313ebb);
  FUN_1400b22c2(&DAT_14cbe3928,"vending_buy_back");
  atexit((_func_5014 *)&LAB_144313ecc);
  local_a8 = "cancel";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe3938 = (ulonglong)uVar2;
  local_a8 = "partial";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe3940 = (ulonglong)uVar2;
  local_a8 = "all";
  local_a0 = 3;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe3948 = (ulonglong)uVar2;
  local_a8 = "sub_entries";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3950 = (ulonglong)uVar2;
  local_a8 = "vending_buy";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe3958 = (ulonglong)uVar2;
  local_a8 = "vending_sell";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3960 = (ulonglong)uVar2;
  local_a8 = "vending_buy_back";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3968 = (ulonglong)uVar2;
  local_a8 = "entry_ident";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3970 = (ulonglong)uVar2;
  local_a8 = "subentry_ident";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3978 = (ulonglong)uVar2;
  local_a8 = "set_purchase_filter";
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe3980 = (ulonglong)uVar2;
  local_a8 = "set_menu_title";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe3988 = (ulonglong)uVar2;
  local_a8 = "set_menu_state";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe3990 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbe3998,&DAT_14b8ce6a8);
  atexit((_func_5014 *)&LAB_144316e23);
  FUN_1400b22c2(&DAT_14cbe39a8,&DAT_14b8ce6ac);
  atexit((_func_5014 *)&LAB_144316e34);
  FUN_1400b22c2(&DAT_14cbe39b8,"Buyback");
  atexit((_func_5014 *)&LAB_144316e45);
  _DAT_14cbe39d0 = 0;
  _DAT_14cbe39d8 = FUN_146659e54;
  _DAT_14cbe39e0 = "vending_nav_bar";
  _DAT_14cbe39c8 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbe39c8;
  atexit((_func_5014 *)&LAB_144316e56);
  local_a8 = "mark_list_config";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe39e8 = (ulonglong)uVar2;
  local_a8 = "display_empty_cells";
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe39f0 = (ulonglong)uVar2;
  local_a8 = "display_overflow_items";
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe39f8 = (ulonglong)uVar2;
  local_a8 = "display_equipped_items";
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3a00 = (ulonglong)uVar2;
  local_a8 = "sort_equipped_items";
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3a08 = (ulonglong)uVar2;
  local_a8 = "menu_title";
  local_a0 = 10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3a10 = (ulonglong)uVar2;
  local_a8 = "virtual_cell_count";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3a18 = (ulonglong)uVar2;
  local_a8 = "minimum_cell_count";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3a20 = (ulonglong)uVar2;
  local_a8 = "use_fake_cells";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe3a28 = (ulonglong)uVar2;
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe3a30,L"OakUI.Backpack.Filter.CountFilteredItems",&DAT_14cbe3a40,
                L"Whether the filter options should count items that are already excluded");
  atexit(FUN_144316e62);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe3a48,L"OakUI.Backpack.Filter.AlternateCounts",&DAT_14c764098,
                L"Whether the filter options should display alternate counts with a given category included"
               );
  atexit(FUN_144316ea7);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe3a58,L"OakUI.Backpack.Filter.DisableInvalidFilters",&DAT_14c764099,
                L"Whether filter options should be disabled if there are no items in the current filter that would match that option"
               );
  atexit(FUN_144316eec);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe3a68,L"OakUI.Backpack.Filter.DynamicallyPopulateFilters",&DAT_14c76409a,
                L"Whether filter options should be dynamically populated the way stat sorts are");
  atexit(FUN_144316f31);
  FUN_140056680(&DAT_14cbe3a78,L"trash");
  atexit((_func_5014 *)&LAB_144316f76);
  FUN_140056680(&DAT_14cbe3a88,L"favorite");
  atexit((_func_5014 *)&LAB_144316f87);
  FUN_140056680(&DAT_14cbe3a98,L"bank_deposit");
  atexit((_func_5014 *)&LAB_144316f98);
  FUN_140056680(&DAT_14cbe3aa8,L"anointed");
  atexit((_func_5014 *)&LAB_144316fa9);
  FUN_140056680(&DAT_14cbe3ab8,L"firmware");
  atexit((_func_5014 *)&LAB_144316fba);
  FUN_140056680(&DAT_14cbe3ac8,L"equipped");
  atexit((_func_5014 *)&LAB_144316fcb);
  FUN_140056680(&DAT_14cbe3ad8,L"unequipped");
  atexit((_func_5014 *)&LAB_144316fdc);
  FUN_140056680(&DAT_14cbe3ae8,L"taggroup1");
  atexit((_func_5014 *)&LAB_144316fed);
  FUN_140056680(&DAT_14cbe3af8,L"taggroup2");
  atexit((_func_5014 *)&LAB_144316ffe);
  FUN_140056680(&DAT_14cbe3b08,L"taggroup3");
  atexit((_func_5014 *)&LAB_14431700f);
  FUN_140056680(&DAT_14cbe3b18,L"taggroup4");
  atexit((_func_5014 *)&LAB_144317020);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe3b28,L"OakUI.Backpack.CanDropBankDeposit",&DAT_14cbe3b38,
                L"Whether the items flagged as bank deposit can be dropped");
  atexit(FUN_144317031);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe3b40,L"OakUI.Backpack.CanSellBankDeposit",&DAT_14cbe3b50,
                L"Whether the items flagged as bank deposit can be sold");
  atexit(FUN_144317076);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe3b58,L"OakUI.Backpack.CanDropFavorite",&DAT_14cbe3b68,
                L"Whether the items flagged as favorite can be dropped");
  atexit(FUN_1443170bb);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe3b70,L"OakUI.Backpack.CanSellFavorite",&DAT_14cbe3b80,
                L"Whether the items flagged as favorite can be sold");
  atexit(FUN_144317100);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe3b88,L"OakUI.Backpack.CanDropTagged",&DAT_14c76409b,
                L"Whether the items flagged as being in a tag group can be dropped");
  atexit(FUN_144317145);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe3b98,L"OakUI.Backpack.CanSellTagged",&DAT_14c76409c,
                L"Whether the items flagged as being in a tag group can be sold");
  atexit(FUN_14431718a);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe3ba8,L"OakUI.Backpack.CanDropTrash",&DAT_14c76409d,
                L"Whether the items flagged as trash can be dropped");
  atexit(FUN_1443171cf);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe3bb8,L"OakUI.Backpack.CanSellTrash",&DAT_14c76409e,
                L"Whether the items flagged as trash can be sold");
  atexit(FUN_144317214);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe3bd0,L"OakUI.Backpack.Filter.bEnablePips",&DAT_14cbe3bc8,
                L"Whether the filter options should show pips for new items");
  atexit(FUN_144319857);
  FUN_1400b22c2(&DAT_14cbe3be0,"#echo_logs_region_unknown");
  atexit((_func_5014 *)&LAB_144319e7a);
  iVar6 = DAT_14cbe3be8 + -1;
  if (DAT_14cbe3be8 == 0) {
    iVar6 = 0;
  }
  FUN_1446f82e2(&local_a8,iVar6,DAT_14cbe3be0,1);
  _DAT_14cbe3bf0 = local_a8;
  FUN_140056680(&DAT_14cbe3bf8,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_144319e8b);
  FUN_140056680(&DAT_14cbe3c08,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_144319e9c);
  FUN_140056680(&DAT_14cbe3c18,L"action_ui_echo_log_change_page");
  atexit((_func_5014 *)&LAB_144319ead);
  FUN_140056680(&DAT_14cbe3c28,L"PlayEchoLogText");
  atexit((_func_5014 *)&LAB_144319ebe);
  FUN_140056680(&DAT_14cbe3c38,L"StopEchoLogText");
  atexit((_func_5014 *)&LAB_144319ecf);
  FUN_140056680(&DAT_14cbe3c48,L"BackText");
  atexit((_func_5014 *)&LAB_144319ee0);
  FUN_140056680(&DAT_14cbe3c58,L"discovered");
  atexit((_func_5014 *)&LAB_144319ef1);
  FUN_140056680(&DAT_14cbe3c68,L"region");
  atexit((_func_5014 *)&LAB_144319f02);
  FUN_140056680(&DAT_14cbe3c78,L"type");
  atexit((_func_5014 *)&LAB_144319f13);
  local_b8 = 1;
  FUN_14153156c(&DAT_14cbe3c88,L"OakUI.EquipMenu.ForceEquipmentSlotsLocked",&DAT_14cbe3c98,
                L"Whether to show the EchoBot standin in the Popup Backpack");
  atexit(FUN_14431ca0e);
  local_b8 = 1;
  FUN_141471170(&DAT_14cbe3ca0,L"OakUI.Firmware.OverrideShowFirmware",&DAT_14c7640a0,
                L"-1: Default Behavior | 0: Always Hide | 1: Always Show");
  atexit(FUN_14431ca53);
  _DAT_14cbe3cb4 = 0;
  _DAT_14cbe3cb8 = 0;
  FUN_14052b5e0(&DAT_14cbe3cb0,"Missions",0);
  _DAT_14cbe3cc0 = 0;
  _DAT_14cbe3cc4 = 0;
  FUN_14052b5e0(&DAT_14cbe3cbc,"Timer",0);
  _DAT_14cbe3ccc = 0;
  _DAT_14cbe3cd0 = 0;
  FUN_14052b5e0(&DAT_14cbe3cc8,"Percent",0);
  _DAT_14cbe3cd8 = 0;
  uRam000000014cbe3ce0 = 0;
  _DAT_14cbe3ce8 = 0;
  DAT_14cbe3cf0 = 0;
  uRam000000014cbe3cf8 = 0;
  FUN_1446ddda2(&DAT_14cbe3cd8,"Character",0);
  atexit((_func_5014 *)&LAB_14431ca98);
  _DAT_14cbe3d00 = 0;
  uRam000000014cbe3d08 = 0;
  _DAT_14cbe3d10 = 0;
  DAT_14cbe3d18 = 0;
  uRam000000014cbe3d20 = 0;
  FUN_1446ddda2(&DAT_14cbe3d00,"Specialization",0);
  atexit((_func_5014 *)&LAB_14431caa9);
  _DAT_14cbe3d28 = 0;
  uRam000000014cbe3d30 = 0;
  _DAT_14cbe3d38 = 0;
  DAT_14cbe3d40 = 0;
  uRam000000014cbe3d48 = 0;
  FUN_1446ddda2(&DAT_14cbe3d28,&DAT_14b9d5546,0);
  atexit((_func_5014 *)&LAB_14431caba);
  _DAT_14cbe3d50 = 0;
  uRam000000014cbe3d58 = 0;
  _DAT_14cbe3d60 = 0;
  DAT_14cbe3d68 = 0;
  uRam000000014cbe3d70 = 0;
  FUN_1446ddda2(&DAT_14cbe3d50,"currency",0);
  atexit((_func_5014 *)&LAB_14431cacb);
  _DAT_14cbe3d78 = 0;
  uRam000000014cbe3d80 = 0;
  _DAT_14cbe3d88 = 0;
  DAT_14cbe3d90 = 0;
  uRam000000014cbe3d98 = 0;
  FUN_1446ddda2(&DAT_14cbe3d78,"golden_keys",0);
  atexit((_func_5014 *)&LAB_14431cadc);
  _DAT_14cbe3da0 = 0;
  uRam000000014cbe3da8 = 0;
  _DAT_14cbe3db0 = 0;
  DAT_14cbe3db8 = 0;
  uRam000000014cbe3dc0 = 0;
  FUN_1446ddda2(&DAT_14cbe3da0,"eridium",0);
  atexit((_func_5014 *)&LAB_14431caed);
  _DAT_14cbe3dc8 = 0;
  uRam000000014cbe3dd0 = 0;
  _DAT_14cbe3dd8 = 0;
  DAT_14cbe3de0 = 0;
  uRam000000014cbe3de8 = 0;
  FUN_1446ddda2(&DAT_14cbe3dc8,&DAT_14b6bcef8,0);
  atexit((_func_5014 *)&LAB_14431cafe);
  _DAT_14cbe3df0 = 0;
  uRam000000014cbe3df8 = 0;
  _DAT_14cbe3e00 = 0;
  DAT_14cbe3e08 = 0;
  uRam000000014cbe3e10 = 0;
  FUN_1446ddda2(&DAT_14cbe3df0,"backpack",0);
  atexit((_func_5014 *)&LAB_14431cb0f);
  _DAT_14cbe3e18 = 0;
  uRam000000014cbe3e20 = 0;
  _DAT_14cbe3e28 = 0;
  DAT_14cbe3e30 = 0;
  uRam000000014cbe3e38 = 0;
  FUN_1446ddda2(&DAT_14cbe3e18,&DAT_14b9d5557,0);
  atexit((_func_5014 *)&LAB_14431cb20);
  _DAT_14cbe3e40 = 0;
  uRam000000014cbe3e48 = 0;
  _DAT_14cbe3e50 = 0;
  DAT_14cbe3e58 = 0;
  uRam000000014cbe3e60 = 0;
  FUN_1446ddda2(&DAT_14cbe3e40,"bank_deposits",0);
  atexit((_func_5014 *)&LAB_14431cb31);
  _DAT_14cbe3e68 = 0;
  uRam000000014cbe3e70 = 0;
  _DAT_14cbe3e78 = 0;
  DAT_14cbe3e80 = 0;
  uRam000000014cbe3e88 = 0;
  FUN_1446ddda2(&DAT_14cbe3e68,"junk_items",0);
  atexit((_func_5014 *)&LAB_14431cb42);
  _DAT_14cbe3e90 = 0;
  uRam000000014cbe3e98 = 0;
  _DAT_14cbe3ea0 = 0;
  DAT_14cbe3ea8 = 0;
  uRam000000014cbe3eb0 = 0;
  FUN_1446ddda2(&DAT_14cbe3e90,"skills",0);
  atexit((_func_5014 *)&LAB_14431cb53);
  _DAT_14cbe3eb8 = 0;
  uRam000000014cbe3ec0 = 0;
  _DAT_14cbe3ec8 = 0;
  DAT_14cbe3ed0 = 0;
  uRam000000014cbe3ed8 = 0;
  FUN_1446ddda2(&DAT_14cbe3eb8,"specializations",0);
  atexit((_func_5014 *)&LAB_14431cb64);
  _DAT_14cbe3ee0 = 0;
  uRam000000014cbe3ee8 = 0;
  _DAT_14cbe3ef0 = 0;
  DAT_14cbe3ef8 = 0;
  uRam000000014cbe3f00 = 0;
  FUN_1446ddda2(&DAT_14cbe3ee0,"hover_button",0);
  atexit((_func_5014 *)&LAB_14431cb75);
  _DAT_14cbe3f08 = 0;
  uRam000000014cbe3f10 = 0;
  _DAT_14cbe3f18 = 0;
  DAT_14cbe3f20 = 0;
  uRam000000014cbe3f28 = 0;
  FUN_1446ddda2(&DAT_14cbe3f08,"hover_panel",0);
  atexit((_func_5014 *)&LAB_14431cb86);
  _DAT_14cbe3f30 = 0;
  uRam000000014cbe3f38 = 0;
  _DAT_14cbe3f40 = 0;
  DAT_14cbe3f48 = 0;
  uRam000000014cbe3f50 = 0;
  FUN_1446ddda2(&DAT_14cbe3f30,"detached_panel",0);
  atexit((_func_5014 *)&LAB_14431cb97);
  _DAT_14cbe3f58 = 0;
  uRam000000014cbe3f60 = 0;
  _DAT_14cbe3f68 = 0;
  DAT_14cbe3f70 = 0;
  uRam000000014cbe3f78 = 0;
  FUN_1446ddda2(&DAT_14cbe3f58,"nav_bar",0);
  atexit((_func_5014 *)&LAB_14431cba8);
  _DAT_14cbe3f80 = 0;
  uRam000000014cbe3f88 = 0;
  _DAT_14cbe3f90 = 0;
  DAT_14cbe3f98 = 0;
  uRam000000014cbe3fa0 = 0;
  FUN_1446ddda2(&DAT_14cbe3f80,"mission",0);
  atexit((_func_5014 *)&LAB_14431cbb9);
  _DAT_14cbe3fa8 = 0;
  uRam000000014cbe3fb0 = 0;
  _DAT_14cbe3fb8 = 0;
  DAT_14cbe3fc0 = 0;
  uRam000000014cbe3fc8 = 0;
  FUN_1446ddda2(&DAT_14cbe3fa8,"tokens",0);
  atexit((_func_5014 *)&LAB_14431cbca);
  _DAT_14cbe3fd0 = 0;
  uRam000000014cbe3fd8 = 0;
  _DAT_14cbe3fe0 = 0;
  DAT_14cbe3fe8 = 0;
  uRam000000014cbe3ff0 = 0;
  FUN_1446ddda2(&DAT_14cbe3fd0,"splitscreen",0);
  atexit((_func_5014 *)&LAB_14431cbdb);
  _DAT_14cbe3ff8 = 0;
  uRam000000014cbe4000 = 0;
  _DAT_14cbe4008 = 0;
  DAT_14cbe4010 = 0;
  uRam000000014cbe4018 = 0;
  FUN_1446ddda2(&DAT_14cbe3ff8,"LevelText",0);
  atexit((_func_5014 *)&LAB_14431cbec);
  local_a8 = "medium_backpack_threshold";
  local_a0 = 0x19;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4020 = (ulonglong)uVar2;
  local_a8 = "large_backpack_threshold";
  local_a0 = 0x18;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4028 = (ulonglong)uVar2;
  local_a8 = "medium_class_html";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4030 = (ulonglong)uVar2;
  local_a8 = "large_class_html";
  local_a0 = 0x10;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4038 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbe4040,&DAT_149e377fe);
  atexit((_func_5014 *)&LAB_14431cbfd);
  FUN_1400b22c2(&DAT_14cbe4050,"level");
  atexit((_func_5014 *)&LAB_14431cc0e);
  local_b8 = 0;
  FUN_141471170(&DAT_14cbe4060,L"OakUI.Rewards.BackpackClassOverride",&DAT_14cbe4070,
                L"0 - Default behavior. 1 - Always small. 2 - Always medium. 3 - Always large.");
  atexit(FUN_14431cc1f);
  _DAT_14cbe4080 = &LAB_14431d446;
  _DAT_14cbe4088 = 0x439c8000;
  DAT_14cbe408c = 1;
  DAT_14cbe4078 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe4078;
  atexit((_func_5014 *)&LAB_14431d44b);
  _DAT_14cbe40a0 = &LAB_14431d8df;
  _DAT_14cbe40a8 = 0x469c4000;
  DAT_14cbe40ac = 1;
  DAT_14cbe4098 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe4098;
  atexit((_func_5014 *)&LAB_14431d8e4);
  DAT_14cbe4118 = (longlong *)0x0;
  _DAT_14cbe4120 = 0;
  plVar5 = (longlong *)FUN_140595974(0x2d0,0);
  *plVar5 = (longlong)(plVar5 + 0x12);
  plVar5[0x12] = (longlong)(plVar5 + 0x24);
  plVar5[0x24] = (longlong)(plVar5 + 0x36);
  plVar5[0x36] = (longlong)(plVar5 + 0x48);
  DAT_14cbe4120 = DAT_14cbe4120 + 5;
  plVar5[0x48] = (longlong)DAT_14cbe4118;
  DAT_14cbe4118 = plVar5;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_144326bd6;
  local_a8 = &DAT_14011fc1e;
  FUN_14618d2aa(&local_a8);
  atexit((_func_5014 *)&LAB_14431d941);
  local_a8 = "Standard";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe41b0 = (ulonglong)uVar2;
  local_a8 = "PrologueSkip";
  local_a0 = 0xc;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe41b8 = (ulonglong)uVar2;
  local_a8 = "UltimateVaultHunterSkip";
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe41c0 = (ulonglong)uVar2;
  local_a8 = "SkipToDLC_Cowbell";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe41c8 = (ulonglong)uVar2;
  local_a8 = "SkipToDLC_Harmonica";
  local_a0 = 0x13;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe41d0 = (ulonglong)uVar2;
  DAT_14cbe4238 = 0;
  uRam000000014cbe4240 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_144326bdc;
  local_a8 = &DAT_14011fc1e;
  FUN_14610455c(&local_a8);
  atexit((_func_5014 *)&LAB_14431d96f);
  _DAT_14cbe42d8 = &LAB_14431d974;
  _DAT_14cbe42e0 = 0x439c8000;
  DAT_14cbe42e4 = 1;
  DAT_14cbe42d0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe42d0;
  atexit((_func_5014 *)&LAB_14431d979);
  local_a8 = "nexus";
  local_a0 = 5;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe42f0 = (ulonglong)uVar2;
  _DAT_14cbe4300 = &LAB_14431d9ad;
  _DAT_14cbe4308 = 0x439b0000;
  DAT_14cbe430c = 1;
  DAT_14cbe42f8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe42f8;
  atexit((_func_5014 *)&LAB_14431d9b2);
  DAT_14cbe4378 = 0;
  uRam000000014cbe4380 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_144326c18;
  local_a8 = &DAT_14011fc1e;
  FUN_146104cf2(&local_a8);
  atexit((_func_5014 *)&LAB_14431da0f);
  DAT_14cbe4470 = 0;
  uRam000000014cbe4478 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_144326c1e;
  local_a8 = &DAT_14011fc1e;
  FUN_146105488(&local_a8);
  atexit((_func_5014 *)&LAB_14431da3d);
  _DAT_14cbe4508 = &LAB_14431da42;
  _DAT_14cbe4510 = 0x44784000;
  DAT_14cbe4514 = 1;
  DAT_14cbe4500 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe4500;
  atexit((_func_5014 *)&LAB_14431da47);
  local_a8 = "common";
  local_a0 = 6;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe4520 = (ulonglong)uVar2;
  local_a8 = "playstation";
  local_a0 = 0xb;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4528 = (ulonglong)uVar2;
  local_a8 = "xbox";
  local_a0 = 4;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4530 = (ulonglong)uVar2;
  local_a8 = "profile";
  local_a0 = 7;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4540 = (ulonglong)uVar2;
  local_a8 = "ui";
  local_a0 = 2;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4548 = (ulonglong)uVar2;
  local_a8 = "subtitles";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4550 = (ulonglong)uVar2;
  DAT_14cbe4558._4_4_ = 0;
  DAT_14cbe4560 = 0;
  FUN_14052b5e0(&DAT_14cbe4558,&DAT_14b3fa4f8,0);
  DAT_14cbe4564._4_4_ = 0;
  DAT_14cbe456c = 0;
  FUN_14052b5e0(&DAT_14cbe4564,"speaker_color",0);
  DAT_14cbe4570._4_4_ = 0;
  DAT_14cbe4578 = 0;
  FUN_14052b5e0(&DAT_14cbe4570,"text_opacity",0);
  DAT_14cbe457c._4_4_ = 0;
  DAT_14cbe4584 = 0;
  FUN_14052b5e0(&DAT_14cbe457c,"text_color",0);
  DAT_14cbe4588._4_4_ = 0;
  DAT_14cbe4590 = 0;
  FUN_14052b5e0(&DAT_14cbe4588,"background_color",0);
  DAT_14cbe4594._4_4_ = 0;
  DAT_14cbe459c = 0;
  FUN_14052b5e0(&DAT_14cbe4594,"background_opacity",0);
  DAT_14cbe45a0._4_4_ = 0;
  DAT_14cbe45a8 = 0;
  FUN_14052b5e0(&DAT_14cbe45a0,"background_enabled",0);
  DAT_14cbe45ac._4_4_ = 0;
  DAT_14cbe45b4 = 0;
  FUN_14052b5e0(&DAT_14cbe45ac,"show_subtitle",0);
  DAT_14cbe45b8._4_4_ = 0;
  DAT_14cbe45c0 = 0;
  FUN_14052b5e0(&DAT_14cbe45b8,"show_speaker",0);
  DAT_14cbe45c4._4_4_ = 0;
  DAT_14cbe45cc = 0;
  FUN_14052b5e0(&DAT_14cbe45c4,"use_bold_text",0);
  _DAT_14cbe45d0 = 0xc1a00000;
  _DAT_14cbe45d4 = 0xc1c00000;
  _DAT_14cbe45d8 = 0x3e800000;
  _DAT_14cbe45dc = 0x3f000000;
  DAT_14cbe45e0._0_1_ = 0;
  DAT_14cbe45e0._1_1_ = 1;
  DAT_14cbe45e0._2_1_ = 0;
  _DAT_14cbe45e4 = 0x3e168e3f;
  _DAT_14cbe45e8 = 0x3f13dc59;
  _DAT_14cbe45ec = 0x3f6e1bc1;
  _DAT_14cbe45f0 = 0x3f800000;
  DAT_14cbe45f4 = 0x3f800000;
  DAT_14cbe45f8 = 0x3f800000;
  _DAT_14cbe45fc = 0x3f469c45;
  _DAT_14cbe4600 = 0x3f31a198;
  _DAT_14cbe4604 = 0x3f1e0147;
  _DAT_14cbe4608 = 0x3f800000;
  DAT_14cbe460c = 0x3f000000;
  DAT_14cbe4610._0_1_ = 1;
  _DAT_14cbe4614 = 0;
  _DAT_14cbe4618 = 0;
  _DAT_14cbe461c = 0;
  _DAT_14cbe4620 = 0x3f800000;
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
  DAT_14cbe4628 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*DAT_14c844840 + 8))();
    }
  }
  _DAT_14cbe4630 = 0;
  atexit((_func_5014 *)&LAB_14431e15f);
  DAT_14cbe4638 = 0x10000000200;
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe4640,L"OakUI.Thumbnails.CacheTextures",&DAT_14c7640a4,
                L"Whether to cache rendered thumbnail textures based on inventory serial number and texture size."
               );
  atexit(FUN_14431e173);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe4650,L"OakUI.Thumbnails.EnablePrerendering",&DAT_14cbe4660,
                L"Whether to allow systems to queue thumbnails before they are actually necessary.")
  ;
  atexit(FUN_14431e1b8);
  local_b8 = 0;
  FUN_1415c789c(&DAT_14cbe4668,L"OakUI.Thumbnails.RenderInterval",&DAT_14c7640a8,
                L"How long to wait between each render in seconds.");
  atexit(FUN_14431e1fd);
  local_b8 = 0;
  FUN_1415c789c(&DAT_14cbe4678,L"OakUI.Thumbnails.MinSweepInterval",&DAT_14c7640ac,
                L"Minimum wait between sweeps in seconds.");
  atexit(FUN_14431e242);
  local_b8 = 0;
  FUN_1415c789c(&DAT_14cbe4688,L"OakUI.Thumbnails.MaxSweepInterval",&DAT_14c7640b0,
                L"Maximum wait between sweeps in seconds.");
  atexit(FUN_14431e287);
  local_b8 = 0;
  FUN_141471170(&DAT_14cbe4698,L"OakUI.Thumbnails.TextureSizeX",&DAT_14cbe4638,
                L"Thumbnail Size - X Dimension");
  atexit(FUN_14431e2cc);
  local_b8 = 0;
  FUN_141471170(&DAT_14cbe46a8,L"OakUI.Thumbnails.TextureSizeY",0x14cbe463c,
                L"Thumbnail Size - Y Dimension");
  atexit(FUN_14431e311);
  local_b8 = 0;
  FUN_141471170(&DAT_14cbe46b8,L"OakUI.Thumbnails.MaxThumbnails",&DAT_14c7640b4,
                L"Maximum number of thumbnails that can be loaded before triggering a sweep.");
  atexit(FUN_14431e356);
  local_b8 = 0;
  FUN_141471170(&DAT_14cbe46c8,L"OakUI.Thumbnails.MaxConsecutiveRenders",&DAT_14c7640b8,
                L"Maximum number of thumbnails that can be rendered in a single Tick.");
  atexit(FUN_14431e39b);
  local_b8 = 0;
  FUN_1415c789c(&DAT_14cbe46d8,L"OakUI.Thumbnails.MaxTimeAllowedOnRenderAttempt",&DAT_14c7640bc,
                L"Maximum wait for a single thumbnail to be rendered.");
  atexit(FUN_14431e3e0);
  local_b8 = 0;
  FUN_1415c789c(&DAT_14cbe46e8,L"OakUI.Thumbnails.MaxTimeAllowedOnRenderRetry",&DAT_14c7640c0,
                L"Maximum wait for a single thumbnail retry.");
  atexit(FUN_14431e425);
  local_b8 = 0;
  FUN_141471170(&DAT_14cbe46f8,L"OakUI.Thumbnails.MaxRetryAttempt",&DAT_14c7640c4,
                L"Maximum retry attempt before we discard the render request");
  atexit(FUN_14431e46a);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a1e19d0;
  *(code **)(local_a8 + 0x18) = FUN_148eea997;
  local_b8 = 0;
  FUN_14156bb80(&DAT_14cbe4708,L"OakUI.Thumbnails.Regenerate",
                L"All thumbnails are expelled and regenerated.",&local_a8);
  if (local_a0 == 0) {
LAB_14432d0bb:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432d0bb;
  }
  atexit(FUN_14431e4af);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe4718,L"OakUI.Thumbnails.CacheLights",&DAT_14c7640c8,
                L"Whether to allow caching of light settings when rendering the same scene again.");
  atexit(FUN_14431e927);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe4728,L"OakUI.Thumbnails.PoolLights",&DAT_14c7640c9,
                L"Whether to reuse light components of the same type to avoid spawning new ones.");
  atexit(FUN_14431e96c);
  local_b8 = 0;
  FUN_14153156c(&DAT_14cbe4738,L"OakUI.Thumbnails.AllowComponentRecreationForPSOPrecaching",
                &DAT_14c7640ca,
                L"If true, always recreate the InventoryActor\'s components for each new thumbnail so that PSO precaching behaves correctly."
               );
  atexit(FUN_14431e9b1);
  local_a8._0_4_ = 5;
  local_b8 = 0;
  FUN_14078dbce(&DAT_14cbe4748,L"OakUI.Thumbnails.NumPreRenderItemThumbnails",&local_a8,
                L"Number of frames spent pre-rendering before the final weapon thumbnail is captured, giving time for the virtual texture to load."
               );
  atexit(FUN_14431e9f6);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,3);
  local_b8 = 0;
  FUN_14078dbce(&DAT_14cbe4760,L"OakUI.Thumbnails.NumPreRenderStandInThumbnails",&local_a8,
                L"Number of frames spent pre-rendering before the final stand-in thumbnail is captured, giving time for the virtual texture to load, lods to stream and animation to refresh."
               );
  atexit(FUN_14431ea3b);
  _DAT_14cbe4788 = &LAB_14431f12a;
  _DAT_14cbe4790 = 0x3f8193bc;
  DAT_14cbe4794 = 1;
  DAT_14cbe4780 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe4780;
  atexit((_func_5014 *)&LAB_14431f12f);
  DAT_14cbe4800 = 0;
  _DAT_14cbe4808 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1443287fc;
  local_a8 = &DAT_14011fc1e;
  FUN_14618d9a6(&local_a8);
  atexit((_func_5014 *)&LAB_14431f18c);
  _DAT_14cbe4894 = 0;
  FUN_14052b5e0(&DAT_14cbe4890,"profile",0);
  _DAT_14cbe48a0 = 0;
  FUN_14052b5e0(&DAT_14cbe489c,"input",0);
  _DAT_14cbe48ac = 0;
  FUN_14052b5e0(&DAT_14cbe48a8,"cursor",0);
  ram0x00014cbe48b8 = 0;
  FUN_14052b5e0(&DAT_14cbe48b4,"invert_x_axis",0);
  ram0x00014cbe48c4 = 0;
  FUN_14052b5e0(&DAT_14cbe48c0,"invert_y_axis",0);
  ram0x00014cbe48d0 = 0;
  FUN_14052b5e0(&DAT_14cbe48cc,"sensitivity",0);
  ram0x00014cbe48dc = 0;
  FUN_14052b5e0(&DAT_14cbe48d8,"friction_default",0);
  ram0x00014cbe48e8 = 0;
  FUN_14052b5e0(&DAT_14cbe48e4,"pc_scroll_sensitivity",0);
  ram0x00014cbe48f4 = 0;
  FUN_14052b5e0(&DAT_14cbe48f0,"max_idle_time",0);
  ram0x00014cbe4900 = 0;
  FUN_14052b5e0(&DAT_14cbe48fc,"show_idle_flash",0);
  local_a8 = "UpscalingMethod";
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4908 = (ulonglong)uVar2;
  local_a8 = "FrameGeneration";
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4910 = (ulonglong)uVar2;
  local_a8 = "Upscaling";
  local_a0 = 9;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4918 = (ulonglong)uVar2;
  local_a8 = "AntiAliasingMethod";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4920 = (ulonglong)uVar2;
  local_a8 = "WindowsTextureLODGroups";
  local_a0 = 0x17;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4928 = (ulonglong)uVar2;
  local_a8 = "Textures";
  local_a0 = 8;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4930 = (ulonglong)uVar2;
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_148eeaffe;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe4938,L"oak.togglestats",L"Toggles rendering the fps/unit stats.",&local_a8
               );
  if (local_a0 == 0) {
LAB_14432d563:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432d563;
  }
  atexit(FUN_14431f380);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14acb7cb0;
  *(code **)(local_a8 + 0x18) = FUN_14431f3c6;
  local_b8 = 0;
  FUN_141819a96(&DAT_14cbe4948,L"oak.ui.view.stateadd",
                L"Adds a ui state. args [State] [View Handle Index]",&local_a8);
  if (local_a0 == 0) {
LAB_14432d64f:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432d64f;
  }
  atexit(FUN_14431f703);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14acb7cb0;
  *(code **)(local_a8 + 0x18) = FUN_14431f748;
  local_b8 = 0;
  FUN_141819a96(&DAT_14cbe4958,L"oak.ui.view.stateaddwithtimer",
                L"Adds a ui state with a timer to remove said state after times elapsed. args [State] [View Handle Index] [Timer Amt In Sec]"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432d72d:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432d72d;
  }
  atexit(FUN_14431fad7);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14acb7cb0;
  *(code **)(local_a8 + 0x18) = FUN_14431fb1c;
  local_b8 = 0;
  FUN_141819a96(&DAT_14cbe4968,L"oak.ui.view.stateremove",
                L"Removes a ui state. args [State] [View Handle Index]",&local_a8);
  if (local_a0 == 0) {
LAB_14432d80b:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432d80b;
  }
  atexit(FUN_14431fe59);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14acb7cb0;
  *(code **)(local_a8 + 0x18) = FUN_14431fe9e;
  local_b8 = 0;
  FUN_141819a96(&DAT_14cbe4978,L"oak.ui.view.stateremoveaftertime",
                L"Removes a ui state after default time has elapsed. args [state] [View Handle Index]"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432d8e9:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432d8e9;
  }
  atexit(FUN_1443201de);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14acb7cb0;
  *(code **)(local_a8 + 0x18) = FUN_144320224;
  local_b8 = 0;
  FUN_141819a96(&DAT_14cbe4988,L"oak.ui.view.clearstatetimers",
                L"clears all timers on states thate are to be removed so they no longer get removed. args [View Handle Index]"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432d9c7:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432d9c7;
  }
  atexit(FUN_14432041b);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_148eeb190;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe4998,L"oak.ui.cursor.resetwithdefaults",
                L"Resets cursor settings to profile defaults.",&local_a8);
  if (local_a0 == 0) {
LAB_14432daa5:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432daa5;
  }
  atexit(FUN_144320460);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_1443204a6;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe49a8,L"oak.ui.cursor.setsensitivity",
                L"Sets the local player\'s cursor sensitivity as if they had changed it in the settings menu. args [New Cursor Sensitivity]"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432db83:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432db83;
  }
  atexit(FUN_14432057f);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_1443205c4;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe49b8,L"oak.ui.cursor.setinvertxaxis",
                L"Inverts the local player\'s cursor X axis as if they had changed it in the settings menu. args [Set Cursor Axis X Inversion]"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432dc61:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432dc61;
  }
  atexit(FUN_144320682);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_1443206c8;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe49c8,L"oak.ui.cursor.setinvertyaxis",
                L"Inverts the local player\'s cursor Y axis as if they had changed it in the settings menu. args [Set Cursor Axis Y Inversion]"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432dd3f:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432dd3f;
  }
  atexit(FUN_144320787);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_1443207cc;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe49d8,L"oak.ui.cursor.setscrollspeed",
                L"Sets the local player\'s cursor scroll speed as if they had changed it in the settings menu. args [Set Cursor Scroll Speed]"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432de1d:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432de1d;
  }
  atexit(FUN_1443208a5);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_148eeb386;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe49e8,L"oak.ui.testclosedcaption",L"Displays a test closed caption. text",
                &local_a8);
  if (local_a0 == 0) {
LAB_14432defb:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432defb;
  }
  atexit(FUN_1443208ea);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_148eeb41a;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe49f8,L"oak.ui.testsubtitle",
                L"Displays a test subtitle. args speaker, text, duration, hideSpeaker",&local_a8);
  if (local_a0 == 0) {
LAB_14432dfd9:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432dfd9;
  }
  atexit(FUN_14432092f);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_148eeb550;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe4a08,L"oak.ui.testsubtitlelines",
                L"Displays list of test subtitles. Speaker shown by default. args speaker, duration, {lines}"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432e0b7:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432e0b7;
  }
  atexit(FUN_144320974);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_148eeb6d8;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe4a18,L"oak.ui.testlootfeed",
                L"Feeds an empty test item of random rarity into loot feed. args, name",&local_a8);
  if (local_a0 == 0) {
LAB_14432e195:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432e195;
  }
  atexit(FUN_1443209b9);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_148eeb76c;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe4a28,L"oak.ui.testlootfeeddump",
                L"Feeds dummy items into queue for Loot Feed",&local_a8);
  if (local_a0 == 0) {
LAB_14432e273:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432e273;
  }
  atexit(FUN_1443209fe);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_148eeb7b8;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe4a38,L"oak.ui.displaylootfeedsorted",
                L"Display loot feed sorted, args sorted",&local_a8);
  if (local_a0 == 0) {
LAB_14432e351:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432e351;
  }
  atexit(FUN_144320a43);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_144320a88;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe4a48,L"oak.ui.cursor.setfrictiondefault",
                L"Sets the local player\'s default cursor friction as if they had changed it in the settings menu. args [New Cursor Friction Default]"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432e42f:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432e42f;
  }
  atexit(FUN_144320b61);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_144320ba6;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe4a58,L"oak.ui.cursor.setdeadzoneinner",
                L"Sets the local player\'s cursor inner deadzone as if they had changed it in the settings menu. args [New Cursor Inner Deadzone]"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432e50d:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432e50d;
  }
  atexit(FUN_144320c7f);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_144320cc4;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe4a68,L"oak.ui.cursor.setdeadzoneouter",
                L"Sets the local player\'s cursor outer deadzone as if they had changed it in the settings menu. args [New Cursor Outer Deadzone]"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432e5eb:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432e5eb;
  }
  atexit(FUN_144320d9d);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_144320de2;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe4a78,L"oak.ui.setpcscrollsensitivity",
                L"Sets the PC Scroll sensitivity value. Value is an int from 1 to 10. args [New Scroll Sensitivity]"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432e6c9:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432e6c9;
  }
  atexit(FUN_144320e8b);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_144320ed0;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe4a88,L"oak.ui.cursor.setmaxidletime",
                L"Sets the local player\'s cursor max idle time as if they had changed it in the settings menu. args [New Cursor Max Idle Time]"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432e7a7:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432e7a7;
  }
  atexit(FUN_144320fa9);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_144320fee;
  local_b8 = 0;
  FUN_14156bb10(&DAT_14cbe4a98,L"oak.ui.cursor.setshowidleflash",
                L"Sets the local player\'s cursor to flash if idle as if they had changed it in the settings menu. args [Show Idle Flash 0 or 1]"
                ,&local_a8);
  if (local_a0 == 0) {
LAB_14432e885:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432e885;
  }
  atexit(FUN_1443210ad);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14acb7cb0;
  *(code **)(local_a8 + 0x18) = FUN_1443210f2;
  local_b8 = 0;
  FUN_141819a96(&DAT_14cbe4aa8,L"oak.ui.options.setactivecategory",
                L"WIP args [Current Category Ident]",&local_a8);
  if (local_a0 == 0) {
LAB_14432e963:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14432e963;
  }
  atexit(FUN_144321387);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  *(longlong *)(local_a8 + 0x10) = lVar7;
  *(undefined ***)local_a8 = &PTR_FUN_14acb7cb0;
  *(code **)(local_a8 + 0x18) = FUN_1443213cc;
  local_b8 = 0;
  FUN_141819a96(&DAT_14cbe4ab8,L"oak.ui.options.updateitem",
                L"WIP args [RoleUniqueLabel] [InOptionIdentifier] [Value]",&local_a8);
  if (local_a0 != 0) {
    if (local_a8 == (char *)0x0) goto LAB_14432ea4f;
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_14432ea4f:
  atexit(FUN_1443216ba);
  _DAT_14cbe4acc = 0;
  FUN_14052b5e0(&DAT_14cbe4ac8,&DAT_14b9d8d88,0);
  _DAT_14cbe4ad8 = &DAT_14b9d8d88;
  _DAT_14cbe4ae0 = 0;
  uRam000000014cbe4ae8 = 0;
  _DAT_14cbe4af0 = 0;
  DAT_14cbe4af8 = 0;
  uRam000000014cbe4b00 = 0;
  FUN_1446ddda2(&DAT_14cbe4ae0,"oak.ui.crosshair_settings",0);
  atexit((_func_5014 *)&LAB_1443216ff);
  local_a8 = "crosshair_settings";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe4b08 = (ulonglong)uVar2;
  _DAT_14cbe4b14 = 0;
  FUN_14052b5e0(&DAT_14cbe4b10,&DAT_14b9d8d88,0);
  _DAT_14cbe4b20 = &DAT_14b9d8d88;
  _DAT_14cbe4b28 = 0;
  uRam000000014cbe4b30 = 0;
  _DAT_14cbe4b38 = 0;
  DAT_14cbe4b40 = 0;
  uRam000000014cbe4b48 = 0;
  FUN_1446ddda2(&DAT_14cbe4b28,"oak.ui.cursor_preferences",0);
  atexit((_func_5014 *)&LAB_144321710);
  local_a8 = "cursor_preferences";
  local_a0 = 0x12;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe4b50 = (ulonglong)uVar2;
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.State.IsReady";
  local_a0 = 0x19;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4b58,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.State.IsActive";
  local_a0 = 0x1a;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4b70,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.State.IsActive2";
  local_a0 = 0x1b;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4b88,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.State.IsOnCooldown";
  local_a0 = 0x1e;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4ba0,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.State.IsDisabled";
  local_a0 = 0x1c;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4bb8,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.State.CannotUse";
  local_a0 = 0x1b;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4bd0,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.State.IsVisible";
  local_a0 = 0x1b;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4be8,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.State.ShowCharges";
  local_a0 = 0x1d;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4c00,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Data.Cooldown";
  local_a0 = 0x19;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4c18,uVar4,uVar3,0);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Data.Duration";
  local_a0 = 0x19;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4c30,uVar4,uVar3,0);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Data.Resource";
  local_a0 = 0x19;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4c48,uVar4,uVar3,0);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Data.Charges";
  local_a0 = 0x18;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4c60,uVar4,uVar3,0);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Data.ChargesRegen";
  local_a0 = 0x1d;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4c78,uVar4,uVar3,0);
  local_a8 = "ActionSkill.Data.LowDurationThreshold";
  local_a0 = 0x25;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe4c90 = (ulonglong)uVar2;
  DAT_14cbe4c98 = 0;
  _DAT_14cbe4ca0 = DAT_14cb92fd0;
  DAT_14cb92fd0 = &DAT_14cbe4c90;
  local_a8 = "ActionSkill.Data.HoldDurationOverride";
  local_a0 = 0x25;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe4ca8 = (ulonglong)uVar2;
  DAT_14cbe4cb0 = 0;
  _DAT_14cbe4cb8 = DAT_14cb92fd0;
  DAT_14cb92fd0 = &DAT_14cbe4ca8;
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Alternate.State.ActivateAlternateMode";
  local_a0 = 0x31;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4cc0,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Alternate.State.IsReady";
  local_a0 = 0x23;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4cd8,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Alternate.State.IsActive";
  local_a0 = 0x24;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4cf0,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Alternate.State.IsOnCooldown";
  local_a0 = 0x28;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4d08,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Alternate.State.IsDisabled";
  local_a0 = 0x26;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = local_b8 & 0xffffff00;
  FUN_1410291be(&DAT_14cbe4d20,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Alternate.State.UseAltSkillIcon";
  local_a0 = 0x2b;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 1;
  FUN_1410291be(&DAT_14cbe4d38,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Alternate.State.ShowCharges";
  local_a0 = 0x27;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4d50,uVar4,uVar3,1);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Alternate.Data.Cooldown";
  local_a0 = 0x23;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4d68,uVar4,uVar3,0);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Alternate.Data.Duration";
  local_a0 = 0x23;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4d80,uVar4,uVar3,0);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Alternate.Data.Charges";
  local_a0 = 0x22;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4d98,uVar4,uVar3,0);
  local_a8 = "Action Skill";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkill.Alternate.Data.ChargesRegen";
  local_a0 = 0x27;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4db0,uVar4,uVar3,0);
  local_a8 = "ActionSkill.Alternate.Data.LowDurationThreshold";
  local_a0 = 0x2f;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe4dc8 = (ulonglong)uVar2;
  DAT_14cbe4dd0 = 0;
  _DAT_14cbe4dd8 = DAT_14cb92fd0;
  DAT_14cb92fd0 = &DAT_14cbe4dc8;
  local_a8 = "ActionSkill.Alternate.Data.HoldDurationOverride";
  local_a0 = 0x2f;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe4de0 = (ulonglong)uVar2;
  DAT_14cbe4de8 = 0;
  _DAT_14cbe4df0 = DAT_14cb92fd0;
  DAT_14cb92fd0 = &DAT_14cbe4de0;
  local_a8 = "Vault Hunter Bar";
  local_a0 = 0x10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "VaultHunterBar.Data.Value";
  local_a0 = 0x19;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4df8,uVar4,uVar3,0);
  local_a8 = "Vault Hunter Bar";
  local_a0 = 0x10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "VaultHunterBar.Data.NumSegments";
  local_a0 = 0x1f;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4e10,uVar4,uVar3,0);
  local_a8 = "VaultHunterBar.Data.LowValueThreshold";
  local_a0 = 0x25;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe4e28 = (ulonglong)uVar2;
  DAT_14cbe4e30 = 0;
  _DAT_14cbe4e38 = DAT_14cb92fd0;
  DAT_14cb92fd0 = &DAT_14cbe4e28;
  local_a8 = "Action Skill Screen Buttons";
  local_a0 = 0x1b;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkillScreenButtons.State.IsVisible";
  local_a0 = 0x28;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4e40,uVar4,uVar3,1);
  local_a8 = "Action Skill Screen Buttons";
  local_a0 = 0x1b;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkillScreenButtons.State.LeftChoiceSelected";
  local_a0 = 0x31;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4e58,uVar4,uVar3,1);
  local_a8 = "Action Skill Screen Buttons";
  local_a0 = 0x1b;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "ActionSkillScreenButtons.State.RightChoiceSelected";
  local_a0 = 0x32;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4e70,uVar4,uVar3,1);
  local_a8 = "Gadget";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "Gadget.State.IsReady";
  local_a0 = 0x14;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4e88,uVar4,uVar3,1);
  local_a8 = "Gadget";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "Gadget.State.IsActive";
  local_a0 = 0x15;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4ea0,uVar4,uVar3,1);
  local_a8 = "Gadget";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "Gadget.State.IsOnCooldown";
  local_a0 = 0x19;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4eb8,uVar4,uVar3,1);
  local_a8 = "Gadget";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "Gadget.State.IsDisabled";
  local_a0 = 0x17;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4ed0,uVar4,uVar3,1);
  local_a8 = "Gadget";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "Gadget.State.CannotUse";
  local_a0 = 0x16;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4ee8,uVar4,uVar3,1);
  local_a8 = "Gadget";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "Gadget.State.IsVisible";
  local_a0 = 0x16;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4f00,uVar4,uVar3,1);
  local_a8 = "Gadget";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "Gadget.Data.Cooldown";
  local_a0 = 0x14;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4f18,uVar4,uVar3,0);
  local_a8 = "Gadget";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "Gadget.Data.Charges";
  local_a0 = 0x13;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8._0_1_ = 0;
  FUN_1410291be(&DAT_14cbe4f30,uVar4,uVar3,0);
  local_a8 = "Gadget";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  local_a8 = "Gadget.Data.ChargesRegen";
  local_a0 = 0x18;
  local_9c = 0;
  uVar4 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  local_b8 = (uint)local_b8._1_3_ << 8;
  FUN_1410291be(&DAT_14cbe4f48,uVar4,uVar3,0);
  _DAT_14cbe4f68 = &LAB_144321721;
  _DAT_14cbe4f70 = 0x439d0000;
  DAT_14cbe4f74 = 1;
  DAT_14cbe4f60 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe4f60;
  atexit((_func_5014 *)&LAB_144321726);
  local_a8 = "audio_calibration";
  local_a0 = 0x11;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4f80 = (ulonglong)uVar2;
  local_a8 = "brightness_calibration";
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4f88 = (ulonglong)uVar2;
  local_a8 = "brightness_calibration_ftc";
  local_a0 = 0x1a;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4f90 = (ulonglong)uVar2;
  local_a8 = "safe_area_calibration";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4f98 = (ulonglong)uVar2;
  local_a8 = "options_accessibility";
  local_a0 = 0x15;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbe4fa0 = (ulonglong)uVar2;
  _DAT_14cbe4fac = 0;
  _DAT_14cbe4fb0 = 0;
  FUN_14052b5e0(&DAT_14cbe4fa8,&DAT_14b9d8d88,0);
  _DAT_14cbe4fb8 = &DAT_14b9d8d88;
  _DAT_14cbe4fc0 = 0;
  uRam000000014cbe4fc8 = 0;
  _DAT_14cbe4fd0 = 0;
  DAT_14cbe4fd8 = 0;
  uRam000000014cbe4fe0 = 0;
  FUN_1446ddda2(&DAT_14cbe4fc0,"oak.ui.first_time_calibration",0);
  atexit((_func_5014 *)&LAB_14432175a);
  local_a8 = "first_time_calibration";
  local_a0 = 0x16;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe4fe8 = (ulonglong)uVar2;
  _DAT_14cbe4ff0 = 0;
  uRam000000014cbe4ff8 = 0;
  _DAT_14cbe5000 = 0;
  DAT_14cbe5008 = 0;
  uRam000000014cbe5010 = 0;
  FUN_1446ddda2(&DAT_14cbe4ff0,"OptionsMenu_ApplySettingsHeader",0);
  atexit((_func_5014 *)&LAB_144321834);
  _DAT_14cbe5018 = 0;
  uRam000000014cbe5020 = 0;
  _DAT_14cbe5028 = 0;
  DAT_14cbe5030 = 0;
  uRam000000014cbe5038 = 0;
  FUN_1446ddda2(&DAT_14cbe5018,"OptionsMenu_ApplySettingsBody",0);
  atexit((_func_5014 *)&LAB_144321845);
  local_a8 = "font_scale_hud";
  local_a0 = 0xe;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe5040 = (ulonglong)uVar2;
  local_a8 = "font_scale_menu";
  local_a0 = 0xf;
  local_9c = 0;
  uVar2 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbe5048 = (ulonglong)uVar2;
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144330308 FUN_144330308 body=2482 status=ok
// SIG undefined FUN_144330308(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_144330308(longlong param_1)

{
  char *pcVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  char *pcVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong *plVar27;
  uint uVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  longlong local_380;
  longlong local_378;
  longlong *local_370;
  longlong *local_368;
  longlong *local_360;
  longlong local_358;
  longlong *local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (((((*(int *)(param_1 + 0x1c) != 0) && (uVar28 = *(uint *)(param_1 + 0x18), -1 < (int)uVar28))
       && ((int)uVar28 < DAT_14c9647dc)) &&
      ((plVar11 = (longlong *)
                  ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
       plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)(param_1 + 0x1c))))) &&
     (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar24 = *plVar11, lVar24 != 0)))) {
    local_378 = lVar24 + 0x2808;
    pcVar16 = *(char **)(param_1 + 0x20);
    if ((longlong)*(int *)(param_1 + 0x28) != 0) {
      pcVar1 = pcVar16 + (longlong)*(int *)(param_1 + 0x28) * 0x18;
      do {
        plVar11 = *(longlong **)(pcVar16 + 0x10);
        if (plVar11 != (longlong *)0x0) {
          iVar15 = (int)plVar11[1];
          do {
            if (iVar15 == 0) goto LAB_14433043c;
            LOCK();
            iVar5 = (int)plVar11[1];
            bVar29 = iVar15 == iVar5;
            if (bVar29) {
              *(int *)(plVar11 + 1) = iVar15 + 1;
              iVar5 = iVar15;
            }
            iVar15 = iVar5;
            UNLOCK();
          } while (!bVar29);
          lVar6 = *(longlong *)(pcVar16 + 8);
          if ((lVar6 != 0) && (*pcVar16 == '\x01')) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            local_358 = lVar6;
            local_350 = plVar11;
            lVar6 = FUN_144330cc0(local_378,&local_358);
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar21 = plVar11 + 1;
              *(int *)plVar21 = (int)*plVar21 + -1;
              UNLOCK();
              if ((int)*plVar21 == 0) {
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
            if (lVar6 != 0) {
              FUN_1407056f2(lVar6,local_378);
            }
            LOCK();
            plVar21 = plVar11 + 1;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)*plVar21 == 0) {
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
          LOCK();
          plVar21 = plVar11 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
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
LAB_14433043c:
        pcVar16 = pcVar16 + 0x18;
      } while (pcVar16 != pcVar1);
      pcVar16 = *(char **)(param_1 + 0x20);
    }
    iVar15 = *(int *)(param_1 + 0x2c);
    FUN_1414f1c7b(pcVar16);
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((iVar15 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      FUN_148ef9cfe(param_1 + 0x20);
    }
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      uVar28 = *(uint *)(lVar24 + 0x2938);
      lVar6 = (longlong)(int)uVar28;
      if (lVar6 != 0) {
        plVar11 = *(longlong **)(lVar24 + 0x2930);
        bVar29 = true;
        if ((*plVar11 != 0) && (plVar11[1] != 0)) {
          bVar29 = *(int *)(plVar11[1] + 8) < 1;
        }
        plVar21 = plVar11 + 3;
        uVar26 = 0;
        uVar7 = 0;
        local_380 = lVar24;
LAB_14433050d:
        do {
          if ((int)(uVar7 + 1) < (int)uVar28) {
            lVar12 = (longlong)(int)uVar7;
            lVar24 = lVar12 + 2;
            plVar8 = plVar21 + lVar12 * 2;
            bVar3 = true;
            lVar17 = -1;
            do {
              iVar15 = (int)lVar17;
              if ((plVar8[-1] == 0) || (*plVar8 == 0)) {
                if (!bVar29) {
                  uVar18 = uVar7 - iVar15;
                  iVar15 = -iVar15;
                  goto LAB_1443305b5;
                }
              }
              else if ((bool)(*(int *)(*plVar8 + 8) < 1 ^ bVar29)) {
                uVar18 = uVar7 - iVar15;
                break;
              }
              bVar3 = lVar24 < lVar6;
              lVar17 = lVar17 + -1;
              lVar24 = lVar24 + 1;
              plVar8 = plVar8 + 2;
              uVar18 = uVar28;
            } while (lVar12 - lVar6 != lVar17);
          }
          else {
            bVar3 = false;
            uVar18 = uVar7 + 1;
          }
          iVar15 = uVar18 - uVar7;
          if (bVar29) {
            FUN_14128eda1(plVar11 + (longlong)(int)uVar7 * 2);
            bVar29 = false;
            uVar7 = uVar18;
            if (!bVar3) break;
            goto LAB_14433050d;
          }
LAB_1443305b5:
          if (uVar26 != uVar7) {
            local_388 = plVar21;
            memmove(plVar11 + (longlong)(int)uVar26 * 2,plVar11 + (longlong)(int)uVar7 * 2,
                    (longlong)iVar15 << 4);
            plVar21 = local_388;
          }
          uVar26 = uVar26 + iVar15;
          bVar29 = true;
          uVar7 = uVar18;
        } while (bVar3);
        lVar24 = local_380;
        *(uint *)(local_380 + 0x2938) = uVar26;
        if (1 < (int)uVar26) {
          lVar6 = *(longlong *)(local_380 + 0x2930);
          memset(local_348,0,0x2f0);
          local_350 = (longlong *)((ulonglong)uVar26 * 0x10 + lVar6 + -0x10);
          local_358 = lVar6;
          fVar30 = logf((float)(int)uVar26);
          local_348[0] = (int)(longlong)(fVar30 + fVar30);
          plVar11 = &local_358;
          do {
            plVar8 = (longlong *)*plVar11;
            plVar22 = (longlong *)plVar11[1];
            iVar15 = (int)plVar11[2];
            iVar5 = (int)((ulonglong)((longlong)plVar22 - (longlong)plVar8) >> 4);
            uVar28 = iVar5 + 1;
            plVar21 = plVar22;
            plVar27 = plVar8;
            if (iVar15 != 0) {
LAB_144330681:
              if (8 < (int)uVar28) {
                lVar24 = plVar27[(ulonglong)(uVar28 >> 1) * 2];
                lVar6 = (plVar27 + (ulonglong)(uVar28 >> 1) * 2)[1];
                lVar12 = plVar27[1];
                plVar27[(ulonglong)(uVar28 >> 1) * 2] = *plVar27;
                (plVar27 + (ulonglong)(uVar28 >> 1) * 2)[1] = lVar12;
                local_58._0_4_ = (undefined4)lVar24;
                local_58._4_4_ = (undefined4)((ulonglong)lVar24 >> 0x20);
                uStack_50._0_4_ = (undefined4)lVar6;
                uStack_50._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
                *(undefined4 *)plVar27 = (undefined4)local_58;
                *(undefined4 *)((longlong)plVar27 + 4) = local_58._4_4_;
                *(undefined4 *)(plVar27 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)plVar27 + 0xc) = uStack_50._4_4_;
                plVar13 = plVar27;
                local_370 = plVar21 + 2;
                local_368 = plVar8;
                local_58 = lVar24;
                uStack_50 = lVar6;
                do {
                  plVar8 = plVar13 + 2;
                  plVar13 = plVar13 + 2;
                  do {
                    plVar14 = plVar13;
                    plVar9 = plVar8;
                    if (plVar21 < plVar14) break;
                    cVar4 = FUN_144339bea(plVar27,plVar14);
                    plVar8 = plVar9 + 2;
                    plVar13 = plVar14 + 2;
                  } while (cVar4 == '\0');
                  plVar8 = local_370 + -4;
                  plVar10 = local_370;
                  local_388 = plVar14;
                  local_360 = plVar9;
                  do {
                    plVar13 = plVar10;
                    plVar9 = plVar8;
                    plVar10 = plVar13 + -2;
                    if (plVar10 <= plVar27) break;
                    cVar4 = FUN_144339bea(plVar10,plVar27);
                    plVar8 = plVar9 + -2;
                  } while (cVar4 == '\0');
                  if (plVar10 < local_388) goto LAB_14433075c;
                  lVar24 = *local_388;
                  lVar6 = local_388[1];
                  lVar12 = plVar13[-1];
                  *local_388 = *plVar10;
                  local_388[1] = lVar12;
                  local_58._0_4_ = (undefined4)lVar24;
                  local_58._4_4_ = (undefined4)((ulonglong)lVar24 >> 0x20);
                  uStack_50._0_4_ = (undefined4)lVar6;
                  uStack_50._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
                  *(undefined4 *)plVar10 = (undefined4)local_58;
                  *(undefined4 *)((longlong)plVar13 + -0xc) = local_58._4_4_;
                  *(undefined4 *)(plVar13 + -1) = (undefined4)uStack_50;
                  *(undefined4 *)((longlong)plVar13 + -4) = uStack_50._4_4_;
                  plVar13 = local_388;
                  local_370 = plVar10;
                  local_58 = lVar24;
                  uStack_50 = lVar6;
                } while( true );
              }
              for (; plVar22 = plVar27, plVar8 = plVar27, plVar27 < plVar21; plVar21 = plVar21 + -2)
              {
                while (plVar13 = plVar22, plVar8 = plVar8 + 2, plVar8 <= plVar21) {
                  cVar4 = FUN_144339bea(plVar13,plVar8);
                  plVar22 = plVar8;
                  if (cVar4 == '\0') {
                    plVar22 = plVar13;
                  }
                }
                local_58 = *plVar13;
                uStack_50 = plVar13[1];
                lVar12 = local_58;
                lVar17 = uStack_50;
                lVar6 = plVar21[1];
                *plVar13 = *plVar21;
                plVar13[1] = lVar6;
                local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                *(undefined4 *)plVar21 = (undefined4)local_58;
                *(undefined4 *)((longlong)plVar21 + 4) = local_58._4_4_;
                *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_50._4_4_;
                local_58 = lVar12;
                uStack_50 = lVar17;
              }
              goto LAB_144330882;
            }
LAB_14433089e:
            local_388 = plVar27;
            lVar24 = local_380;
            if (uVar28 != 0) {
              iVar15 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
              iVar5 = iVar15;
joined_r0x0001443308bf:
              do {
                iVar20 = iVar15 * 2 + 1;
                if (iVar20 < (int)uVar28) {
                  iVar19 = iVar15 * 2 + 2;
                  if ((iVar19 < (int)uVar28) &&
                     (cVar4 = FUN_144339bea(local_388 + (longlong)iVar19 * 2,
                                            local_388 + (longlong)iVar20 * 2), cVar4 == '\0')) {
                    iVar20 = iVar19;
                  }
                  plVar8 = local_388 + (longlong)iVar15 * 2;
                  plVar21 = local_388 + (longlong)iVar20 * 2;
                  cVar4 = FUN_144339bea(plVar8,plVar21);
                  if (cVar4 != '\0') {
                    local_58 = *plVar8;
                    uStack_50 = plVar8[1];
                    lVar6 = local_58;
                    lVar12 = uStack_50;
                    lVar24 = plVar21[1];
                    *plVar8 = *plVar21;
                    plVar8[1] = lVar24;
                    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
                    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                    *(undefined4 *)plVar21 = (undefined4)local_58;
                    *(undefined4 *)((longlong)plVar21 + 4) = local_58._4_4_;
                    *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_50;
                    *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_50._4_4_;
                    iVar15 = iVar20;
                    local_58 = lVar6;
                    uStack_50 = lVar12;
                    goto joined_r0x0001443308bf;
                  }
                }
                bVar29 = iVar5 != 0;
                iVar15 = iVar5 + -1;
                iVar5 = iVar15;
              } while (bVar29);
              lVar24 = local_380;
              if (1 < (int)uVar28) {
                uVar23 = (ulonglong)uVar28 - 1;
                local_58 = *local_388;
                uStack_50 = local_388[1];
                lVar12 = local_58;
                lVar17 = uStack_50;
                lVar6 = (local_388 + uVar23 * 2)[1];
                *local_388 = local_388[uVar23 * 2];
                local_388[1] = lVar6;
                local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                plVar21 = local_388 + uVar23 * 2;
                *(undefined4 *)plVar21 = (undefined4)local_58;
                *(undefined4 *)((longlong)plVar21 + 4) = local_58._4_4_;
                *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_50._4_4_;
                local_58 = lVar12;
                uStack_50 = lVar17;
                if (uVar28 != 2) {
                  do {
                    iVar15 = 0;
                    iVar20 = 1;
                    iVar5 = 0;
                    do {
                      iVar15 = iVar15 + 2;
                      iVar19 = iVar20;
                      if (((longlong)iVar15 < (longlong)uVar23) &&
                         (cVar4 = FUN_144339bea(local_388 + (longlong)iVar15 * 2,
                                                local_388 + (longlong)iVar20 * 2), cVar4 == '\0')) {
                        iVar19 = iVar15;
                      }
                      plVar21 = local_388 + (longlong)iVar5 * 2;
                      plVar8 = local_388 + (longlong)iVar19 * 2;
                      cVar4 = FUN_144339bea(plVar21,plVar8);
                      if (cVar4 == '\0') break;
                      lVar24 = *plVar21;
                      lVar6 = plVar21[1];
                      lVar12 = plVar8[1];
                      *plVar21 = *plVar8;
                      plVar21[1] = lVar12;
                      local_58._0_4_ = (undefined4)lVar24;
                      local_58._4_4_ = (undefined4)((ulonglong)lVar24 >> 0x20);
                      uStack_50._0_4_ = (undefined4)lVar6;
                      uStack_50._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
                      *(undefined4 *)plVar8 = (undefined4)local_58;
                      *(undefined4 *)((longlong)plVar8 + 4) = local_58._4_4_;
                      *(undefined4 *)(plVar8 + 1) = (undefined4)uStack_50;
                      *(undefined4 *)((longlong)plVar8 + 0xc) = uStack_50._4_4_;
                      iVar15 = iVar19 * 2;
                      iVar20 = iVar19 * 2 + 1;
                      local_58 = lVar24;
                      uStack_50 = lVar6;
                      iVar5 = iVar19;
                    } while ((longlong)iVar20 < (longlong)uVar23);
                    uVar25 = uVar23 - 1;
                    local_58 = *local_388;
                    uStack_50 = local_388[1];
                    lVar6 = local_58;
                    lVar12 = uStack_50;
                    lVar24 = (local_388 + uVar25 * 2)[1];
                    *local_388 = local_388[uVar25 * 2];
                    local_388[1] = lVar24;
                    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
                    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                    plVar21 = local_388 + uVar25 * 2;
                    *(undefined4 *)plVar21 = (undefined4)local_58;
                    *(undefined4 *)((longlong)plVar21 + 4) = local_58._4_4_;
                    *(undefined4 *)(plVar21 + 1) = (undefined4)uStack_50;
                    *(undefined4 *)((longlong)plVar21 + 0xc) = uStack_50._4_4_;
                    bVar29 = 2 < uVar23;
                    lVar24 = local_380;
                    uVar23 = uVar25;
                    local_58 = lVar6;
                    uStack_50 = lVar12;
                  } while (bVar29);
                }
              }
            }
LAB_144330882:
            plVar11 = plVar11 + -3;
          } while (&local_358 <= plVar11);
          uVar26 = *(uint *)(lVar24 + 0x2938);
        }
        if (0 < (int)uVar26) {
          uVar23 = (ulonglong)uVar26;
          do {
            uVar25 = uVar23 - 1;
            if (uVar23 < 0xb) {
              lVar6 = *(longlong *)(lVar24 + 0x2930);
              local_358 = 0;
              plVar11 = *(longlong **)(lVar6 + 8 + uVar25 * 0x10);
              local_350 = plVar11;
              if (plVar11 == (longlong *)0x0) {
LAB_144330be0:
                lVar6 = FUN_144330d56(local_378,&local_358);
              }
              else {
                iVar15 = (int)plVar11[1];
                do {
                  if (iVar15 == 0) {
                    local_350 = (longlong *)0x0;
                    goto LAB_144330be0;
                  }
                  LOCK();
                  iVar5 = (int)plVar11[1];
                  bVar29 = iVar15 == iVar5;
                  if (bVar29) {
                    *(int *)(plVar11 + 1) = iVar15 + 1;
                    iVar5 = iVar15;
                  }
                  iVar15 = iVar5;
                  UNLOCK();
                } while (!bVar29);
                if (plVar11 == (longlong *)0x0) goto LAB_144330be0;
                local_358 = *(longlong *)(lVar6 + uVar25 * 0x10);
                lVar6 = FUN_144330d56(local_378,&local_358);
                LOCK();
                plVar21 = plVar11 + 1;
                *(int *)plVar21 = (int)*plVar21 + -1;
                UNLOCK();
                if ((int)*plVar21 == 0) {
                  (**(code **)*plVar11)(plVar11);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar11 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  lVar24 = local_380;
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar11 + 0x10))(plVar11);
                    lVar24 = local_380;
                  }
                }
              }
              if (lVar6 != 0) {
                FUN_14106acbe(lVar6,local_378,uVar23 & 0xffffffff);
              }
            }
            else {
              lVar24 = *(longlong *)(lVar24 + 0x2930);
              local_358 = 0;
              plVar11 = *(longlong **)(lVar24 + 8 + uVar25 * 0x10);
              local_350 = plVar11;
              if (plVar11 == (longlong *)0x0) {
LAB_144330c23:
                lVar6 = FUN_144330cc0(local_378,&local_358);
              }
              else {
                iVar15 = (int)plVar11[1];
                do {
                  if (iVar15 == 0) {
                    local_350 = (longlong *)0x0;
                    goto LAB_144330c23;
                  }
                  LOCK();
                  iVar5 = (int)plVar11[1];
                  bVar29 = iVar15 == iVar5;
                  if (bVar29) {
                    *(int *)(plVar11 + 1) = iVar15 + 1;
                    iVar5 = iVar15;
                  }
                  iVar15 = iVar5;
                  UNLOCK();
                } while (!bVar29);
                if (plVar11 == (longlong *)0x0) goto LAB_144330c23;
                local_358 = *(longlong *)(lVar24 + uVar25 * 0x10);
                lVar6 = FUN_144330cc0(local_378,&local_358);
                LOCK();
                plVar21 = plVar11 + 1;
                *(int *)plVar21 = (int)*plVar21 + -1;
                UNLOCK();
                if ((int)*plVar21 == 0) {
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
              lVar24 = local_380;
              if (lVar6 != 0) {
                FUN_14106abe8(lVar6,local_378);
              }
            }
            bVar29 = 1 < (longlong)uVar23;
            uVar23 = uVar25;
          } while (bVar29);
        }
      }
      if (*(longlong *)(lVar24 + 0x2918) != 0) {
        FUN_1441ee296(*(longlong *)(lVar24 + 0x2918),*(undefined4 *)(lVar24 + 0x2938));
      }
      *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14433075c:
  local_58 = *plVar27;
  uStack_50 = plVar27[1];
  lVar6 = local_58;
  lVar12 = uStack_50;
  lVar24 = plVar13[-1];
  *plVar27 = *plVar10;
  plVar27[1] = lVar24;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)plVar10 = (undefined4)local_58;
  *(undefined4 *)((longlong)plVar13 + -0xc) = local_58._4_4_;
  *(undefined4 *)(plVar13 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)plVar13 + -4) = uStack_50._4_4_;
  iVar15 = iVar15 + -1;
  lVar24 = local_380;
  local_58 = lVar6;
  uStack_50 = lVar12;
  if ((longlong)plVar9 - (longlong)local_368 < (longlong)plVar22 - (longlong)local_360) {
    if (local_388 < plVar21) {
      *plVar11 = (longlong)local_388;
      plVar11[1] = (longlong)plVar21;
      *(int *)(plVar11 + 2) = iVar15;
      plVar11 = plVar11 + 3;
    }
    plVar8 = plVar27;
    plVar21 = plVar9;
    plVar13 = plVar13 + -4;
    if (plVar10 <= plVar27 + 2) goto LAB_144330882;
  }
  else {
    if (plVar27 + 2 < plVar10) {
      *plVar11 = (longlong)plVar27;
      plVar11[1] = (longlong)(plVar13 + -4);
      *(int *)(plVar11 + 2) = iVar15;
      plVar11 = plVar11 + 3;
    }
    plVar8 = local_360;
    plVar13 = plVar21;
    plVar27 = local_388;
    if (plVar21 <= local_388) goto LAB_144330882;
  }
  local_388 = plVar27;
  iVar5 = (int)((ulonglong)((longlong)plVar21 - (longlong)plVar8) >> 4);
  uVar28 = iVar5 + 1;
  plVar22 = plVar21;
  plVar21 = plVar13;
  plVar27 = local_388;
  if (iVar15 == 0) goto LAB_14433089e;
  goto LAB_144330681;
}



// FUNCTION 144330cc0 FUN_144330cc0 body=149 status=ok
// SIG undefined FUN_144330cc0(void)

longlong FUN_144330cc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((longlong)*(int *)(param_1 + 0x120) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x118);
    lVar8 = (longlong)*(int *)(param_1 + 0x120) * 0x78 + lVar6;
    do {
      plVar3 = *(longlong **)(lVar6 + 0x70);
      if (plVar3 == (longlong *)0x0) {
LAB_144330d21:
        lVar9 = *param_2;
        lVar7 = 0;
      }
      else {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_144330d21;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar10 = iVar5 == iVar4;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar10);
        lVar7 = *(longlong *)(lVar6 + 0x68);
        lVar9 = *param_2;
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
      if (lVar7 == lVar9) {
        return lVar6;
      }
      lVar6 = lVar6 + 0x78;
    } while (lVar6 != lVar8);
  }
  return 0;
}



// FUNCTION 144330d56 FUN_144330d56 body=556 status=ok
// SIG undefined FUN_144330d56(void)

longlong FUN_144330d56(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_2 != 0) {
    lVar5 = FUN_144330cc0();
    if (lVar5 != 0) goto LAB_144330eb4;
    iVar4 = *(int *)(param_1 + 0x120);
    if ((longlong)iVar4 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x118);
      lVar6 = (longlong)iVar4 * 0x78;
      do {
        if (((*(longlong *)(lVar5 + 0x68) == 0) || (*(longlong *)(lVar5 + 0x70) == 0)) ||
           (*(int *)(*(longlong *)(lVar5 + 0x70) + 8) < 1)) {
          if (lVar5 != 0) goto LAB_144330ddc;
          break;
        }
        lVar5 = lVar5 + 0x78;
        lVar6 = lVar6 + -0x78;
      } while (lVar6 != 0);
      if (9 < iVar4) goto LAB_144330eb2;
    }
    lVar5 = FUN_145730c10(param_1 + 0x118);
    FUN_1407058ce(param_1);
    FUN_140705914(param_1);
    *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
    if (lVar5 != 0) {
LAB_144330ddc:
      lVar6 = *param_2;
      plVar2 = *(longlong **)(lVar5 + 0x70);
      if (plVar2 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        iVar4 = (int)plVar2[1];
        lVar8 = 0;
        do {
          if (iVar4 == 0) goto LAB_144330def;
          LOCK();
          iVar3 = (int)plVar2[1];
          bVar9 = iVar4 == iVar3;
          if (bVar9) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
            iVar3 = iVar4;
          }
          iVar4 = iVar3;
          UNLOCK();
        } while (!bVar9);
        lVar8 = *(longlong *)(lVar5 + 0x68);
        LOCK();
        plVar7 = plVar2 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
LAB_144330def:
      if (lVar6 != lVar8) {
        *(longlong *)(lVar5 + 0x68) = *param_2;
        plVar2 = (longlong *)param_2[1];
        plVar7 = *(longlong **)(lVar5 + 0x70);
        if (plVar7 != plVar2) {
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
            UNLOCK();
            plVar7 = *(longlong **)(lVar5 + 0x70);
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
          *(longlong **)(lVar5 + 0x70) = plVar2;
        }
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_48 = 0;
        *(undefined2 *)(lVar5 + 0x10) = 0;
        if (*(char *)(lVar5 + 0x18) == '\x01') {
          *(undefined1 *)(lVar5 + 0x18) = 0;
        }
        *(undefined8 *)(lVar5 + 0x20) = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(undefined8 *)(lVar5 + 0x30) = 0;
        if (*(longlong *)(lVar5 + 0x38) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(lVar5 + 0x38) = 0;
        *(undefined8 *)(lVar5 + 0x40) = 0;
        param_2 = (longlong *)*param_2;
        if (param_2 != (longlong *)0x0) {
          (**(code **)(*param_2 + 8))(param_2,lVar5 + 0x10);
          *(undefined1 *)(lVar5 + 0xc) = 1;
        }
        FUN_140705884(param_1,lVar5);
      }
      FUN_1407056f2(lVar5,param_1);
      goto LAB_144330eb4;
    }
  }
LAB_144330eb2:
  lVar5 = 0;
LAB_144330eb4:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14433100c FUN_14433100c body=4410 status=ok
// SIG undefined FUN_14433100c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14433100c(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  code ****ppppcVar10;
  code ***pppcVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_148 [32];
  code ****local_128;
  code ***local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  code *local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  code ****ppppcStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 *local_a8;
  code ***local_a0;
  code ****local_98;
  code ***local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  code ***local_78;
  code ****local_70;
  code ***local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((((((*(int *)(param_1 + 0x240) == 0) && (*(int *)(param_1 + 0x44) != 0)) &&
        (uVar4 = *(uint *)(param_1 + 0x40), -1 < (int)uVar4)) &&
       (((int)uVar4 < DAT_14c9647dc &&
        (plVar15 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar15 != (longlong *)0x0)))) && ((int)plVar15[2] == *(int *)(param_1 + 0x44))) &&
     ((((*(uint *)(plVar15 + 1) & 0x10200000) == 0 && (lVar5 = *plVar15, lVar5 != 0)) &&
      ((*(longlong *)(lVar5 + 0x88) != 0 &&
       ((*(longlong **)(lVar5 + 0x90) != (longlong *)0x0 &&
        (plVar15 = (longlong *)(**(code **)(**(longlong **)(lVar5 + 0x90) + 8))(),
        plVar15 != (longlong *)0x0)))))))) {
    if (DAT_14cba8288 == 0) {
      local_f0 = &local_c8;
      local_c8 = FUN_141864c34;
      local_e0 = FUN_14081d0ea;
      local_e8 = &LAB_1464cee30;
      local_f8 = &LAB_148bfac22;
      local_100 = &LAB_140f21842;
      local_108 = L"Game";
      local_110 = 0;
      local_118 = 0x10000004;
      local_120 = (code ***)CONCAT44(local_120._4_4_,0x10);
      local_128 = (code ****)CONCAT44(local_128._4_4_,0x9cd0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(plVar15[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar15[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) {
      lVar5 = (**(code **)(*plVar15 + 0x5d8))(plVar15);
      if (lVar5 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_f0 = &local_c8;
          local_c8 = FUN_141030f22;
          local_e0 = FUN_14081d0ea;
          local_e8 = &LAB_1459f2e4c;
          local_f8 = &LAB_148c39de3;
          local_100 = &LAB_1457a9eb2;
          local_108 = L"Game";
          local_110 = 0;
          local_118 = 0x10000004;
          local_120 = (code ***)CONCAT44(local_120._4_4_,0x10);
          local_128 = (code ****)CONCAT44(local_128._4_4_,0x3de0);
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          uVar12 = *(ulonglong *)(lVar5 + 0x430);
          uVar16 = 0;
          uVar17 = uVar16;
          if (uVar12 != 0) {
            if (DAT_14cae9568 == 0) {
              local_f0 = &local_c8;
              local_c8 = FUN_1417de738;
              local_e0 = (code *)&LAB_145893408;
              local_e8 = &LAB_1458cbbd2;
              local_f8 = &LAB_147ba21f1;
              local_100 = &LAB_1463e9233;
              local_108 = L"Engine";
              local_110 = 0;
              local_118 = 0x1000000c;
              local_120 = (code ***)CONCAT44(local_120._4_4_,8);
              local_128 = (code ****)CONCAT44(local_128._4_4_,0x2b8);
              FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568);
              uVar12 = *(ulonglong *)(lVar5 + 0x430);
              uVar17 = 0;
              if (uVar12 == 0) goto LAB_1443318ec;
            }
            uVar17 = uVar16;
            if (((DAT_14cae9568 != 0) && (lVar5 = *(longlong *)(uVar12 + 0x10), lVar5 != 0)) &&
               (uVar17 = 0, *(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar5 + 0x38))) {
              uVar4 = (uint)(uVar12 >> 4);
              if (*(longlong *)
                   (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
                  DAT_14cae9568 + 0x30) {
                uVar4 = 0;
              }
              uVar17 = (ulonglong)uVar4;
            }
          }
LAB_1443318ec:
          uVar4 = ((uint)(uVar17 >> 0x10) ^ (uint)uVar17) * -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          *(uint *)(param_1 + 0x240) = uVar4 >> 0x10 ^ uVar4;
          goto LAB_144331049;
        }
      }
      if (*(longlong *)(param_1 + 0x248) == 0) {
        local_70 = (code ****)FUN_148eef800;
        local_68 = (code ***)((ulonglong)local_68 & 0xffffffff00000000);
        FUN_148efa948(&local_c8,param_1);
        if (((int)ppppcStack_c0 == 0) || ((code ***)local_c8 == (code ***)0x0)) {
LAB_144332112:
          if ((int)ppppcStack_c0 != 0) {
            if ((code ***)local_c8 == (code ***)0x0) goto LAB_144331049;
            (***(code ***)local_c8)(local_c8,0);
            FUN_1446efa72(&local_c8,0,0,0x10);
            goto LAB_144331e23;
          }
        }
        else {
          cVar2 = (*(*(code ***)local_c8)[6])();
          if (cVar2 == '\0') {
            goto LAB_144332112;
          }
          plVar9 = plVar15 + 0x240;
          if (*(int *)((longlong)plVar15 + 0x1214) < 1) {
            iVar14 = (int)plVar15[0x241];
            iVar3 = (int)plVar15[0x242] + -1;
            *(int *)(plVar15 + 0x242) = iVar3;
            if (iVar3 <= iVar14) {
              iVar3 = iVar14;
              if (0 < iVar14) {
                iVar19 = 0;
                do {
                  if (((*(int *)(*plVar9 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                      (plVar18 = *(longlong **)(*plVar9 + (longlong)iVar19 * 0x10),
                      plVar18 == (longlong *)0x0)) ||
                     (cVar2 = (**(code **)(*plVar18 + 0x28))(), cVar2 != '\0')) {
                    FUN_14005b288(plVar9,iVar19);
                    FUN_14005b248(plVar9);
                  }
                  else {
                    iVar19 = iVar19 + 1;
                  }
                  iVar3 = (int)plVar15[0x241];
                } while (iVar19 < iVar3);
              }
              iVar19 = 2;
              if (2 < iVar3 * 2) {
                iVar19 = iVar3 * 2;
              }
              *(int *)(plVar15 + 0x242) = iVar19;
              if ((iVar19 < iVar14) && (*(int *)((longlong)plVar15 + 0x120c) != iVar3)) {
                FUN_14045812c();
              }
            }
          }
          if (((int)ppppcStack_c0 != 0) && ((code ***)local_c8 != (code ***)0x0)) {
            (*(*(code ***)local_c8)[7])(local_c8,&local_70);
          }
          iVar14 = (int)plVar15[0x241];
          *(uint *)(plVar15 + 0x241) = iVar14 + 1U;
          if (*(uint *)((longlong)plVar15 + 0x120c) < iVar14 + 1U) {
            FUN_1447a71f6(plVar9,iVar14);
          }
          lVar5 = *plVar9;
          lVar7 = (longlong)iVar14 * 0x10;
          *(undefined8 *)(lVar5 + lVar7) = 0;
          *(undefined4 *)(lVar5 + 8 + lVar7) = 0;
          *(code **)(lVar5 + lVar7) = local_c8;
          local_c8 = (code *)0x0;
          *(int *)(lVar5 + 8 + lVar7) = (int)ppppcStack_c0;
LAB_144331e23:
          ppppcStack_c0 = (code ****)((ulonglong)ppppcStack_c0 & 0xffffffff00000000);
        }
        if ((code ***)local_c8 != (code ***)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_144331049:
  FUN_143ebcdfa(param_1);
  if ((((*(int *)(param_1 + 0x44) == 0) || (uVar4 = *(uint *)(param_1 + 0x40), (int)uVar4 < 0)) ||
      (DAT_14c9647dc <= (int)uVar4)) ||
     (((plVar15 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar15 == (longlong *)0x0 || ((int)plVar15[2] != *(int *)(param_1 + 0x44))) ||
      (((*(uint *)(plVar15 + 1) & 0x10200000) != 0 || (lVar5 = *plVar15, lVar5 == 0))))))
  goto LAB_1443310c1;
  lVar7 = *(longlong *)(param_1 + 0x30);
  lVar8 = *(longlong *)(lVar7 + 0x10);
  if (lVar8 == 0) {
    uVar6 = FUN_14656c012();
    lVar8 = FUN_14477b664(uVar6);
    *(longlong *)(lVar7 + 0x10) = lVar8;
  }
  if (*(longlong *)(lVar7 + 0x18) == 0) {
    if ((lVar8 == 0) || (*(longlong *)(lVar7 + 8) == 0)) goto LAB_1443310c1;
    plVar15 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar15 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar2 == '\0')) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      goto LAB_1443310c1;
    }
    uVar6 = (**(code **)(*plVar15 + 0x110))(plVar15);
    lVar8 = FUN_144aff482(uVar6,(longlong *)(lVar7 + 8));
    *(longlong *)(lVar7 + 0x18) = lVar8;
    if (lVar8 == 0) goto LAB_1443310c1;
  }
  plVar15 = *(longlong **)(param_1 + 0x30);
  if (plVar15 != (longlong *)0x0) {
    lVar7 = (**(code **)(*plVar15 + 8))(plVar15);
    lVar8 = FUN_1465ffe02();
    if (((((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30)) &&
        ((*(longlong *)(lVar5 + 0x88) != 0 && (*(longlong **)(lVar5 + 0x90) != (longlong *)0x0))))
       && (lVar7 = (**(code **)(**(longlong **)(lVar5 + 0x90) + 8))(), lVar7 != 0)) {
      if (DAT_14cba8288 == 0) {
        local_f0 = &local_c8;
        local_c8 = FUN_141864c34;
        local_e0 = FUN_14081d0ea;
        local_e8 = &LAB_1464cee30;
        local_f8 = &LAB_148bfac22;
        local_100 = &LAB_140f21842;
        local_108 = L"Game";
        local_110 = 0;
        local_118 = 0x10000004;
        local_120 = (code ***)CONCAT44(local_120._4_4_,0x10);
        local_128 = (code ****)CONCAT44(local_128._4_4_,0x9cd0);
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        plVar9 = (longlong *)(**(code **)(*(longlong *)(lVar7 + 0x3a20) + 0x10))(lVar7 + 0x3a20);
        if ((longlong)(int)plVar15[0xd] != 0) {
          puVar21 = (undefined8 *)plVar15[0xc];
          puVar20 = puVar21 + (longlong)(int)plVar15[0xd] * 5;
          plVar18 = (longlong *)(param_1 + 0x2a0);
          local_d0 = param_1 + 0x2d8;
          local_d8 = plVar18;
          do {
            cVar2 = FUN_1418b9bea(param_1,*puVar21,0);
            if ((cVar2 != '\0') && (lVar7 = FUN_14011c2be(puVar21 + 1), lVar7 != 0)) {
              local_128 = (code ****)CONCAT71(local_128._1_7_,1);
              FUN_143ebdc9c(param_1,&local_a0,*puVar21,puVar21[1]);
              local_c8 = (code *)0x0;
              ppppcStack_c0 = (code ****)0x0;
              local_ac = 0xff;
              local_b0 = 0;
              local_b8 = 0;
              FUN_14493679e(plVar9,&local_c8,lVar7,0);
              if (((ppppcStack_c0 != (code ****)0x0) &&
                  (((local_c8._4_4_ != 0 && (-1 < (int)(uint)local_c8)) &&
                   ((int)(uint)local_c8 < DAT_14c9647dc)))) &&
                 (((lVar7 = (ulonglong)(((uint)local_c8 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_c8 >> 0x10) * 8),
                   lVar7 != 0 && (*(int *)(lVar7 + 0x10) == local_c8._4_4_)) &&
                  ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
                if ((*ppppcStack_c0)[2] == (code **)&LAB_1447a1f2e) {
                  ppppcVar10 = ppppcStack_c0 + 0xd9;
                }
                else {
                  ppppcVar10 = (code ****)(*(code *)(*ppppcStack_c0)[2])();
                }
                cVar2 = FUN_14486eb0e(ppppcVar10,&local_c8);
                if (cVar2 != '\0') {
                  FUN_1459654b4(param_1,&local_c8,puVar21,local_a0);
                  goto LAB_1443317e8;
                }
              }
              if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0x2d4)) {
                uVar4 = (uint)((ulonglong)local_a0 >> 0x10);
                uVar13 = (uint)local_a0 & 0xffff;
                lVar7 = *(longlong *)(param_1 + 0x2e0);
                if (*(longlong *)(param_1 + 0x2e0) == 0) {
                  lVar7 = local_d0;
                }
                iVar14 = *(int *)(lVar7 + (ulonglong)
                                          (*(int *)(param_1 + 0x2e8) - 1U &
                                          (int)((ulonglong)local_a0 >> 0x20) +
                                          ((uint)local_a0 << 0x10 | uVar13) +
                                          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4)) * 4);
                if (iVar14 != -1) {
                  do {
                    if (*(code ****)(*plVar18 + (longlong)iVar14 * 0x18) == local_a0)
                    goto LAB_1443317e8;
                    iVar14 = *(int *)(*plVar18 + (longlong)iVar14 * 0x18 + 0x10);
                  } while (iVar14 != -1);
                }
              }
              local_90 = (code ***)FUN_144332148;
              local_88 = 0;
              local_128 = &local_a0;
              local_80 = puVar21;
              FUN_148ef9dce(&local_70,param_1,&local_90,&local_80);
              local_78 = (code ***)0x0;
              if (((int)local_68 == 0) || (local_70 == (code ****)0x0)) {
LAB_144331847:
                plVar18 = local_d8;
                if ((int)local_68 == 0) goto LAB_1443317a4;
                if (local_70 != (code ****)0x0) {
                  (*(code *)**local_70)(local_70,0);
                  FUN_1446efa72(&local_70,0,0,0x10);
                  goto LAB_144331791;
                }
              }
              else {
                cVar2 = (*(code *)(*local_70)[6])();
                if (cVar2 == '\0') {
                  goto LAB_144331847;
                }
                if (*(int *)((longlong)plVar9 + 0x14) < 1) {
                  iVar14 = (int)plVar9[1];
                  iVar3 = (int)plVar9[2] + -1;
                  *(int *)(plVar9 + 2) = iVar3;
                  if (iVar3 <= iVar14) {
                    iVar3 = iVar14;
                    if (0 < iVar14) {
                      iVar19 = 0;
                      do {
                        if (((*(int *)(*plVar9 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                            (plVar18 = *(longlong **)(*plVar9 + (longlong)iVar19 * 0x10),
                            plVar18 == (longlong *)0x0)) ||
                           (cVar2 = (**(code **)(*plVar18 + 0x28))(), cVar2 != '\0')) {
                          FUN_14005b288(plVar9,iVar19);
                          FUN_14005b248(plVar9);
                        }
                        else {
                          iVar19 = iVar19 + 1;
                        }
                        iVar3 = (int)plVar9[1];
                      } while (iVar19 < iVar3);
                    }
                    iVar19 = iVar3 * 2;
                    if (iVar19 < 3) {
                      iVar19 = 2;
                    }
                    *(int *)(plVar9 + 2) = iVar19;
                    if ((iVar19 < iVar14) && (*(int *)((longlong)plVar9 + 0xc) != iVar3)) {
                      FUN_14045812c(plVar9);
                    }
                  }
                }
                plVar18 = local_d8;
                if ((int)local_68 == 0) {
                  pppcVar11 = (code ***)0x0;
                }
                else {
                  pppcVar11 = (code ***)0x0;
                  if (local_70 != (code ****)0x0) {
                    (*(code *)(*local_70)[7])();
                    pppcVar11 = local_90;
                  }
                }
                lVar7 = plVar9[1];
                uVar4 = (int)lVar7 + 1;
                *(uint *)(plVar9 + 1) = uVar4;
                local_78 = pppcVar11;
                if (*(uint *)((longlong)plVar9 + 0xc) < uVar4) {
                  FUN_1447a71f6(plVar9);
                }
                lVar8 = *plVar9;
                lVar7 = (longlong)(int)lVar7 * 0x10;
                *(undefined8 *)(lVar8 + lVar7) = 0;
                *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
                *(code *****)(lVar8 + lVar7) = local_70;
                local_70 = (code ****)0x0;
                *(int *)(lVar8 + 8 + lVar7) = (int)local_68;
LAB_144331791:
                local_68 = (code ***)((ulonglong)local_68 & 0xffffffff00000000);
LAB_1443317a4:
                if (local_70 != (code ****)0x0) {
                  FUN_1400020a8();
                }
              }
              local_70 = &local_a0;
              local_68 = (code ***)&local_78;
              FUN_1413f0b32(plVar18,&local_90,&local_70,0);
            }
LAB_1443317e8:
            puVar21 = puVar21 + 5;
          } while (puVar21 != puVar20);
        }
        if ((longlong)(int)plVar15[0xf] != 0) {
          puVar20 = (undefined8 *)plVar15[0xe];
          puVar21 = puVar20 + (longlong)(int)plVar15[0xf] * 3;
          local_d0 = param_1 + 0x378;
          do {
            cVar2 = FUN_1418b9bea(param_1,*puVar20,0);
            if ((cVar2 != '\0') &&
               (((*(int *)((longlong)puVar20 + 0xc) != 0 || *(int *)(puVar20 + 1) != 0) ||
                *(int *)(puVar20 + 2) != 0) || *(int *)((longlong)puVar20 + 0x14) != 0)) {
              local_c8 = (code *)0x0;
              ppppcStack_c0 = (code ****)0x0;
              FUN_1407c869a(puVar20 + 1,&local_c8,0);
              pppcVar11 = (code ***)&DAT_149dfb77a;
              if ((int)ppppcStack_c0 != 0) {
                pppcVar11 = (code ***)local_c8;
              }
              FUN_1446f470e(&local_80,pppcVar11,1);
              local_128 = (code ****)CONCAT71(local_128._1_7_,1);
              FUN_143ebdc9c(param_1,&local_78,*puVar20,local_80);
              if ((code ***)local_c8 != (code ***)0x0) {
                FUN_1400020a8();
              }
              FUN_1458b427c(lVar5,&local_90);
              if (local_90 != (code ***)0x0) {
                if (*(int *)(param_1 + 0x348) != *(int *)(param_1 + 0x374)) {
                  uVar4 = (uint)((ulonglong)local_78 >> 0x10);
                  uVar13 = (uint)local_78 & 0xffff;
                  lVar7 = *(longlong *)(param_1 + 0x380);
                  if (*(longlong *)(param_1 + 0x380) == 0) {
                    lVar7 = local_d0;
                  }
                  iVar14 = *(int *)(lVar7 + (ulonglong)
                                            (*(int *)(param_1 + 0x388) - 1U &
                                            (int)((ulonglong)local_78 >> 0x20) +
                                            ((uint)local_78 << 0x10 | uVar13) +
                                            (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4)) * 4);
                  if (iVar14 != -1) {
                    lVar7 = *(longlong *)(param_1 + 0x340);
                    do {
                      if (*(code ****)(lVar7 + (longlong)iVar14 * 0x20) == local_78)
                      goto LAB_144331c99;
                      iVar14 = *(int *)((longlong)iVar14 * 0x20 + lVar7 + 0x18);
                    } while (iVar14 != -1);
                  }
                }
                local_98 = (code ****)0x0;
                pppcVar11 = local_90 + 0x10;
                local_70 = (code ****)FUN_14103c7e0;
                local_68 = (code ***)((ulonglong)local_68 & 0xffffffff00000000);
                local_128 = &local_78;
                local_a8 = puVar20;
                FUN_14665cfb4(&local_c8,param_1,&local_70,&local_a8);
                FUN_145ac72f0(pppcVar11,&local_70,&local_c8);
                if ((int)ppppcStack_c0 == 0) {
LAB_144331b5b:
                  if ((code ***)local_c8 != (code ***)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if ((code ***)local_c8 != (code ***)0x0) {
                  (***(code ***)local_c8)(local_c8,0);
                  FUN_1446efa72(&local_c8,0,0,0x10);
                  ppppcStack_c0 = (code ****)((ulonglong)ppppcStack_c0 & 0xffffffff00000000);
                  goto LAB_144331b5b;
                }
                local_a0 = (code ***)local_70;
                pppcVar11 = local_90 + 0x13;
                local_70 = (code ****)FUN_14103c7e0;
                local_68 = (code ***)((ulonglong)local_68 & 0xffffffff00000000);
                local_128 = &local_78;
                local_a8 = puVar20;
                FUN_14665cfb4(&local_c8,param_1,&local_70,&local_a8);
                FUN_145ac72f0(pppcVar11,&local_70,&local_c8);
                if ((int)ppppcStack_c0 == 0) {
LAB_144331c30:
                  if ((code ***)local_c8 != (code ***)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if ((code ***)local_c8 != (code ***)0x0) {
                  (***(code ***)local_c8)(local_c8,0);
                  FUN_1446efa72(&local_c8,0,0,0x10);
                  ppppcStack_c0 = (code ****)((ulonglong)ppppcStack_c0 & 0xffffffff00000000);
                  goto LAB_144331c30;
                }
                local_98 = local_70;
                local_c8 = (code *)&local_78;
                ppppcStack_c0 = &local_a0;
                FUN_1461a188c((longlong *)(param_1 + 0x340),&local_70);
LAB_144331c99:
                plVar15 = (longlong *)CONCAT44(uStack_84,local_88);
                if (plVar15 == (longlong *)0x0) {
                  fVar22 = (float)*(int *)((longlong)local_90 + 0xe4);
                  fVar23 = 0.0;
                  if (*(int *)((longlong)local_90 + 0xe4) != 0) {
                    fVar23 = (float)*(int *)((longlong)local_90 + 0xec) / fVar22;
                  }
                  local_120 = local_78;
                  local_128 = (code ****)CONCAT44(local_128._4_4_,0x3f800000);
                  FUN_14044025c(param_1,(float)*(int *)((longlong)local_90 + 0xec),fVar22,fVar23);
                }
                else {
                  LOCK();
                  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                  UNLOCK();
                  fVar22 = (float)*(int *)((longlong)local_90 + 0xe4);
                  fVar23 = 0.0;
                  if (*(int *)((longlong)local_90 + 0xe4) != 0) {
                    fVar23 = (float)*(int *)((longlong)local_90 + 0xec) / fVar22;
                  }
                  local_120 = local_78;
                  local_128 = (code ****)CONCAT44(local_128._4_4_,0x3f800000);
                  FUN_14044025c(param_1,(float)*(int *)((longlong)local_90 + 0xec),fVar22,fVar23);
                  LOCK();
                  plVar9 = plVar15 + 1;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)*plVar9 == 0) {
                    (**(code **)*plVar15)(plVar15);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar15 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                }
              }
              plVar15 = (longlong *)CONCAT44(uStack_84,local_88);
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                plVar9 = plVar15 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
                  (**(code **)*plVar15)(plVar15);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar15 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar15 + 0x10))(plVar15);
                  }
                }
              }
            }
            puVar20 = puVar20 + 3;
          } while (puVar20 != puVar21);
        }
      }
    }
  }
LAB_1443310c1:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144332148 FUN_144332148 body=979 status=ok
// SIG undefined FUN_144332148(void)

void FUN_144332148(longlong param_1,uint *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar8 = *(longlong **)(param_2 + 2);
  if (((((plVar8 != (longlong *)0x0) && (param_2[1] != 0)) && (uVar1 = *param_2, -1 < (int)uVar1))
      && (((int)uVar1 < DAT_14c9647dc &&
          (lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar9 != 0)))) &&
     ((*(uint *)(lVar9 + 0x10) == param_2[1] && ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
    if (*(code **)(*plVar8 + 0x10) == (code *)&LAB_1447a1f2e) {
      plVar8 = plVar8 + 0xd9;
    }
    else {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x10))();
    }
    cVar3 = FUN_14486eb0e(plVar8,param_2);
    if ((((cVar3 != '\0') && (lVar9 = FUN_14008e0ae(param_2), param_3 != 0)) &&
        ((*(longlong *)(lVar9 + 0x10) != 0 &&
         (((*(int *)(param_1 + 0x44) != 0 && (uVar1 = *(uint *)(param_1 + 0x40), -1 < (int)uVar1))
          && ((int)uVar1 < DAT_14c9647dc)))))) &&
       (((plVar8 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x44))) &&
        (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
         (((lVar9 = *plVar8, lVar9 != 0 && (*(longlong *)(lVar9 + 0x88) != 0)) &&
          ((*(longlong **)(lVar9 + 0x90) != (longlong *)0x0 &&
           (lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x90) + 8))(), lVar9 != 0)))))))))) {
      if (DAT_14cba8288 == 0) {
        local_70 = &local_50;
        local_50 = FUN_141864c34;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_1464cee30;
        local_78 = &LAB_148bfac22;
        local_80 = &LAB_140f21842;
        local_88 = &DAT_149e063b2;
        local_90 = 0;
        local_98 = 0x10000004;
        local_a0 = 0x10;
        local_a8 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        lVar4 = FUN_14008e0ae(param_2);
        puVar2 = *(undefined4 **)(*(longlong *)(lVar4 + 0x10) + 8);
        puVar10 = &DAT_14c9485f0;
        if (puVar2 != (undefined4 *)0x0) {
          puVar10 = puVar2;
        }
        if (DAT_14c947fe0 == 0) {
          lVar4 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar4);
          DAT_14c947fe0 = lVar4;
        }
        FUN_140045924(DAT_14c947fe0,&local_50,puVar10,1);
        if (local_50 == *(code **)(param_3 + 8)) {
          if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0x2d4)) {
            uVar1 = (uint)((ulonglong)param_4 >> 0x10);
            uVar6 = (uint)param_4 & 0xffff;
            lVar4 = param_1 + 0x2d8;
            if (*(longlong *)(param_1 + 0x2e0) != 0) {
              lVar4 = *(longlong *)(param_1 + 0x2e0);
            }
            iVar7 = *(int *)(lVar4 + (ulonglong)
                                     (*(int *)(param_1 + 0x2e8) - 1U &
                                     (int)((ulonglong)param_4 >> 0x20) +
                                     ((uint)param_4 << 0x10 | uVar6) +
                                     (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
            if (iVar7 != -1) {
              do {
                plVar8 = (longlong *)(*(longlong *)(param_1 + 0x2a0) + (longlong)iVar7 * 0x18);
                if (*plVar8 == param_4) {
                  plVar11 = plVar8 + 1;
                  if (plVar11 != (longlong *)0x0 && plVar8 != (longlong *)0x0) {
                    uVar5 = (**(code **)(*(longlong *)(lVar9 + 0x3a20) + 0x10))(lVar9 + 0x3a20);
                    if (*plVar11 != 0) {
                      FUN_14480f766(uVar5);
                    }
                    *plVar11 = 0;
                    FUN_1411c2656((longlong *)(param_1 + 0x2a0),param_4);
                  }
                  break;
                }
                iVar7 = (int)plVar8[2];
              } while (iVar7 != -1);
            }
          }
          FUN_1459654b4(param_1,param_2,param_3,param_4);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14433251c FUN_14433251c body=1914 status=ok
// SIG undefined FUN_14433251c(void)

void FUN_14433251c(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_138 [32];
  uint local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  code *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((((((*(int *)(param_1 + 0x44) == 0) || (uVar3 = *(uint *)(param_1 + 0x40), (int)uVar3 < 0)) ||
        (DAT_14c9647dc <= (int)uVar3)) ||
       ((plVar11 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_1 + 0x44))))) ||
      ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) || (lVar4 = *plVar11, lVar4 == 0)) {
LAB_144332be6:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_138);
  }
  plVar11 = *(longlong **)(param_1 + 0x30);
  if (plVar11 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar11 + 8))(plVar11);
    lVar7 = FUN_1465ffe02();
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
         lVar7 + 0x30 &&
        (((*(longlong *)(lVar4 + 0x88) != 0 && (*(longlong **)(lVar4 + 0x90) != (longlong *)0x0)) &&
         (lVar6 = (**(code **)(**(longlong **)(lVar4 + 0x90) + 8))(), lVar6 != 0)))))) {
      if (DAT_14cba8288 == 0) {
        local_e0 = &local_a8;
        local_a8 = FUN_141864c34;
        local_d0 = FUN_14081d0ea;
        local_d8 = &LAB_1464cee30;
        local_e8 = &LAB_148bfac22;
        local_f0 = &LAB_140f21842;
        local_f8 = &DAT_149e063b2;
        local_100 = 0;
        local_108 = 0x10000004;
        local_110 = 0x10;
        local_118 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        local_c8 = (**(code **)(*(longlong *)(lVar6 + 0x3a20) + 0x10))(lVar6 + 0x3a20);
        if ((longlong)(int)plVar11[0xd] != 0) {
          plVar14 = (longlong *)plVar11[0xc];
          plVar15 = plVar14 + (longlong)(int)plVar11[0xd] * 5;
          local_b8 = (longlong *)(param_1 + 0x250);
          local_b0 = param_1 + 0x288;
          local_c0 = (longlong *)(param_1 + 0x2a0);
          do {
            if ((*plVar14 != 0) && (lVar6 = FUN_14011c2be(plVar14 + 1), lVar6 != 0)) {
              local_118 = local_118 & 0xffffff00;
              FUN_143ebdc9c(param_1,&local_88,*plVar14,plVar14[1]);
              if (*(int *)(param_1 + 600) != *(int *)(param_1 + 0x284)) {
                uVar3 = (uint)((ulonglong)local_88 >> 0x10);
                uVar9 = (uint)local_88 & 0xffff;
                lVar7 = *(longlong *)(param_1 + 0x290);
                if (*(longlong *)(param_1 + 0x290) == 0) {
                  lVar7 = local_b0;
                }
                iVar10 = *(int *)(lVar7 + (ulonglong)
                                          (*(int *)(param_1 + 0x298) - 1U &
                                          (int)((ulonglong)local_88 >> 0x20) +
                                          ((uint)local_88 << 0x10 | uVar9) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
                if (iVar10 != -1) {
                  do {
                    puVar2 = (undefined8 *)(*local_b8 + (longlong)iVar10 * 0x18);
                    if ((undefined2 *)*puVar2 == local_88) {
                      plVar13 = puVar2 + 1;
                      if (plVar13 != (longlong *)0x0 && puVar2 != (undefined8 *)0x0) {
                        local_a8 = (code *)0x0;
                        plStack_a0 = (longlong *)0x0;
                        local_8c = 0xff;
                        local_90 = 0;
                        local_98 = 0;
                        FUN_14493679e(local_c8,&local_a8,lVar6,0);
                        if ((((plStack_a0 != (longlong *)0x0) && (local_a8._4_4_ != 0)) &&
                            (-1 < (int)(uint)local_a8)) &&
                           ((((int)(uint)local_a8 < DAT_14c9647dc &&
                             (lVar6 = (ulonglong)(((uint)local_a8 & 0xffff) * 0x18) +
                                      *(longlong *)
                                       (DAT_14c9647c8 + (ulonglong)((uint)local_a8 >> 0x10) * 8),
                             lVar6 != 0)) &&
                            ((*(int *)(lVar6 + 0x10) == local_a8._4_4_ &&
                             ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))))) {
                          if (*(code **)(*plStack_a0 + 0x10) == (code *)&LAB_1447a1f2e) {
                            plVar8 = plStack_a0 + 0xd9;
                          }
                          else {
                            plVar8 = (longlong *)(**(code **)(*plStack_a0 + 0x10))();
                          }
                          cVar5 = FUN_14486eb0e(plVar8,&local_a8);
                          if ((cVar5 != '\0') && (lVar6 = FUN_14008e0ae(&local_a8), *plVar13 != 0))
                          {
                            FUN_14480f766(lVar6 + 0x138);
                          }
                        }
                        *plVar13 = 0;
                        FUN_1411c2656(local_b8,local_88);
                      }
                      break;
                    }
                    iVar10 = *(int *)(puVar2 + 2);
                  } while (iVar10 != -1);
                }
              }
              if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0x2d4)) {
                uVar3 = (uint)((ulonglong)local_88 >> 0x10);
                uVar9 = (uint)local_88 & 0xffff;
                lVar6 = *(longlong *)(param_1 + 0x2e0);
                if (*(longlong *)(param_1 + 0x2e0) == 0) {
                  lVar6 = param_1 + 0x2d8;
                }
                iVar10 = *(int *)(lVar6 + (ulonglong)
                                          (*(int *)(param_1 + 0x2e8) - 1U &
                                          (int)((ulonglong)local_88 >> 0x20) +
                                          ((uint)local_88 << 0x10 | uVar9) +
                                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
                if (iVar10 != -1) {
                  do {
                    puVar2 = (undefined8 *)(*local_c0 + (longlong)iVar10 * 0x18);
                    if ((undefined2 *)*puVar2 == local_88) {
                      plVar13 = puVar2 + 1;
                      if (plVar13 != (longlong *)0x0 && puVar2 != (undefined8 *)0x0) {
                        if (*plVar13 != 0) {
                          FUN_14480f766(local_c8);
                        }
                        *plVar13 = 0;
                        FUN_1411c2656(local_c0,local_88);
                      }
                      break;
                    }
                    iVar10 = *(int *)(puVar2 + 2);
                  } while (iVar10 != -1);
                }
              }
            }
            plVar14 = plVar14 + 5;
          } while (plVar14 != plVar15);
        }
        if ((longlong)(int)plVar11[0xf] != 0) {
          plVar15 = (longlong *)plVar11[0xe];
          plVar11 = plVar15 + (longlong)(int)plVar11[0xf] * 3;
          do {
            if ((*plVar15 != 0) &&
               (((*(int *)((longlong)plVar15 + 0xc) != 0 || (int)plVar15[1] != 0) ||
                (int)plVar15[2] != 0) || *(int *)((longlong)plVar15 + 0x14) != 0)) {
              FUN_1458b427c(lVar4,&local_a8,plVar15 + 1);
              if (local_a8 != (code *)0x0) {
                local_88 = (undefined2 *)0x0;
                uStack_80 = 0;
                FUN_1407c869a(plVar15 + 1,&local_88,0);
                puVar12 = &DAT_149dfb77a;
                if ((int)uStack_80 != 0) {
                  puVar12 = local_88;
                }
                FUN_1446f470e(&local_70,puVar12,1);
                local_118 = local_118 & 0xffffff00;
                FUN_143ebdc9c(param_1,&local_68,*plVar15,local_70);
                if (local_88 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (*(int *)(param_1 + 0x348) != *(int *)(param_1 + 0x374)) {
                  uVar3 = (uint)((ulonglong)local_68 >> 0x10);
                  uVar9 = (uint)local_68 & 0xffff;
                  lVar6 = *(longlong *)(param_1 + 0x380);
                  if (*(longlong *)(param_1 + 0x380) == 0) {
                    lVar6 = param_1 + 0x378;
                  }
                  iVar10 = *(int *)(lVar6 + (ulonglong)
                                            (*(int *)(param_1 + 0x388) - 1U &
                                            (int)((ulonglong)local_68 >> 0x20) +
                                            ((uint)local_68 << 0x10 | uVar9) +
                                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
                  if (iVar10 != -1) {
                    lVar6 = *(longlong *)(param_1 + 0x340);
                    do {
                      lVar7 = lVar6 + (longlong)iVar10 * 0x20;
                      if (*(longlong *)(lVar6 + (longlong)iVar10 * 0x20) == local_68) {
                        if ((longlong *)(lVar7 + 8) != (longlong *)0x0 && lVar7 != 0) {
                          if (*(longlong *)(lVar7 + 8) != 0) {
                            FUN_14480f766(local_a8 + 0x80);
                          }
                          *(undefined8 *)(lVar7 + 8) = 0;
                          if (*(longlong *)(lVar7 + 0x10) != 0) {
                            FUN_14480f766(local_a8 + 0x98);
                          }
                          *(undefined8 *)(lVar7 + 0x10) = 0;
                          FUN_145db03c0((longlong *)(param_1 + 0x340),local_68);
                        }
                        break;
                      }
                      iVar10 = *(int *)(lVar7 + 0x18);
                    } while (iVar10 != -1);
                  }
                }
              }
              plVar14 = plStack_a0;
              if (plStack_a0 != (longlong *)0x0) {
                LOCK();
                plVar13 = plStack_a0 + 1;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)*plVar13 == 0) {
                  (**(code **)*plStack_a0)(plStack_a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                  }
                }
              }
            }
            plVar15 = plVar15 + 3;
          } while (plVar15 != plVar11);
        }
        goto LAB_144332be6;
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144332cba FUN_144332cba body=137 status=ok
// SIG undefined FUN_144332cba(void)

undefined8 FUN_144332cba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x240) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_1448d5e3c(&local_28,param_1 + 0x240);
    uVar3 = *(undefined8 *)(local_28 + 0x2b0);
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144332dc8 FUN_144332dc8 body=421 status=ok
// SIG undefined FUN_144332dc8(void)

longlong FUN_144332dc8(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  uVar2 = DAT_14cb91d78;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
    lVar3 = *param_2;
    uVar1 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    lVar6 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x1e0);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x1e8) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x1a0);
      iVar8 = iVar5;
      do {
        if (*(longlong *)(lVar6 + (longlong)iVar8 * 0x18) == lVar3) goto LAB_144332f04;
        iVar8 = *(int *)(lVar6 + (longlong)iVar8 * 0x18 + 0x10);
      } while (iVar8 != -1);
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_1400021e4(param_2,local_68);
  FUN_1403de9f2(local_68,&local_58,&DAT_149e0635c,1);
  if ((longlong)(int)uStack_50 == 0) {
    lVar3 = 0;
  }
  else {
    FUN_14000bbd8(local_48,local_58 + (longlong)(int)uStack_50 * 0x10 + -0x10,0);
    lVar3 = FUN_144837462(uVar2,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  goto LAB_144332f4c;
  while (iVar5 = (int)plVar4[2], iVar5 != -1) {
LAB_144332f04:
    plVar4 = (longlong *)(lVar6 + (longlong)iVar5 * 0x18);
    if (*plVar4 == lVar3) goto LAB_144332f48;
  }
  plVar4 = (longlong *)0x0;
LAB_144332f48:
  lVar3 = plVar4[1];
LAB_144332f4c:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 144332f6e FUN_144332f6e body=491 status=ok
// SIG undefined FUN_144332f6e(void)

undefined4 FUN_144332f6e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_1;
  if ((longlong)(int)param_2[1] != 0) {
    lVar5 = *param_2;
    lVar4 = (longlong)(int)param_2[1] << 3;
    lVar7 = 0;
    local_a8 = lVar4;
    local_a0 = lVar5;
    do {
      local_80 = *(longlong *)(lVar5 + lVar7);
      if (*(longlong *)(local_80 + 0x18) == 0) {
        puVar3 = *(undefined4 **)(local_80 + 8);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = &DAT_14c9485f0;
        }
        local_98 = (undefined2 *)0x0;
        uStack_90 = 0;
        FUN_1400b2348(puVar3,&local_98,1);
        puVar6 = &DAT_149dfb77a;
        if ((int)uStack_90 != 0) {
          puVar6 = local_98;
        }
        FUN_140002266(&local_78,L"UI.State.%s",puVar6);
        iVar2 = (int)local_70 + -1;
        if ((int)local_70 == 0) {
          iVar2 = 0;
        }
        FUN_1446f82e2(&local_68,iVar2,local_78,1);
        lVar5 = local_68;
        if (DAT_14caa8580 == 0) {
          FUN_140608a9e();
        }
        FUN_1400702d4(DAT_14caa8580,&local_68,lVar5,0);
        if (local_78 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar4 = local_a8;
        lVar5 = local_a0;
        if (local_68 != 0) {
          local_78 = &local_68;
          local_70 = &local_80;
          FUN_144339d98(param_1 + 0x1a0,&local_98,&local_78);
          lVar4 = local_a8;
          lVar5 = local_a0;
        }
      }
      else {
        local_78 = (longlong *)(local_80 + 0x18);
        local_70 = &local_80;
        FUN_144339d98(param_1 + 0x1a0,&local_98,&local_78);
      }
      lVar7 = lVar7 + 8;
    } while (lVar4 != lVar7);
  }
  LOCK();
  uVar1 = *(undefined4 *)(local_b0 + 0x128);
  *(undefined4 *)(local_b0 + 0x128) = 1;
  UNLOCK();
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14433316b FUN_14433316b body=69 status=ok
// SIG undefined FUN_14433316b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14433316b(void)

{
  _DAT_14cbe54b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443331ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe54c0,1);
  return;
}



// FUNCTION 1443331b0 FUN_1443331b0 body=69 status=ok
// SIG undefined FUN_1443331b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443331b0(void)

{
  _DAT_14cbe54d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443331f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe54d8,1);
  return;
}



// FUNCTION 1443331f6 FUN_1443331f6 body=797 status=ok
// SIG undefined FUN_1443331f6(void)

void FUN_1443331f6(longlong *param_1)

{
  PSRWLOCK pRVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char *pcVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_138 [32];
  undefined1 **local_118;
  undefined4 local_110;
  undefined1 local_108;
  char *local_100;
  char **local_f8;
  undefined1 *local_f0;
  longlong local_e8 [2];
  undefined1 *local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [4];
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *param_1;
  if (*(longlong *)(lVar4 + 0x28) == 0) goto LAB_144333379;
  plVar7 = (longlong *)FUN_140161f86(lVar4);
  lVar8 = *plVar7;
  pRVar1 = (PSRWLOCK)(lVar8 + 0xa0);
  AcquireSRWLockShared(pRVar1);
  FUN_1403ca8ec(*(longlong *)(lVar4 + 0x28) + 0xd98,lVar8 + 0x80);
  ReleaseSRWLockShared(pRVar1);
  plVar7 = (longlong *)FUN_140161f86(lVar4);
  lVar8 = *plVar7;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0xa0));
  *(int *)(lVar8 + 0x98) = *(int *)(lVar8 + 0x98) + 1;
  if (DAT_14caa8578 == *(longlong *)(lVar8 + 0x80)) {
    if (*(int *)(lVar8 + 0x88) == 0) {
      iVar10 = 1;
      goto LAB_1443332ad;
    }
  }
  else {
    iVar10 = *(int *)(lVar8 + 0x88) + 1;
LAB_1443332ad:
    *(longlong *)(lVar8 + 0x80) = DAT_14caa8578;
    *(int *)(lVar8 + 0x88) = iVar10;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0xa0));
  lVar8 = FUN_1402735c8();
  lVar8 = FUN_1402d1dc0(lVar8 + 0x9f0);
  if (lVar8 != 0) {
    plVar7 = (longlong *)FUN_140161f86(lVar4);
    lVar9 = *plVar7;
    pRVar1 = (PSRWLOCK)(lVar9 + 0xa0);
    AcquireSRWLockShared(pRVar1);
    lVar9 = *(longlong *)(lVar9 + 0x90);
    ReleaseSRWLockShared(pRVar1);
    if (lVar9 == 0) {
      plVar7 = (longlong *)FUN_140161f86(lVar4);
      lVar9 = *plVar7;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar9 + 0xa0));
      *(int *)(lVar9 + 0x98) = *(int *)(lVar9 + 0x98) + 1;
      if (*(longlong *)(lVar9 + 0x90) != lVar8) {
        if ((*(longlong *)(lVar9 + 0x90) != 0) && (DAT_14c872a72 == '\0')) {
          FUN_140113f48();
        }
        FUN_1401924dc(lVar8);
        *(longlong *)(lVar9 + 0x90) = lVar8;
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar9 + 0xa0));
    }
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0xa70);
    if (lVar4 != 0) {
      FUN_140691b73();
      FUN_140691bc1();
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar8);
      }
      lVar9 = FUN_1402735c8();
      uVar2 = *(undefined4 *)(lVar9 + 0xa18);
      FUN_1446f470e(&local_c8,L"MENU_OPENED_PARTICLE",1);
      pcVar5 = local_c8;
      lVar9 = FUN_1402735c8();
      uVar3 = *(undefined4 *)(lVar9 + 0xa1c);
      local_c8 = "Duration";
      local_c0 = 8;
      local_bc = local_bc & 0xffffff00;
      uVar6 = FUN_14001a6c0(&local_c8,1);
      local_c8 = (char *)(ulonglong)uVar6;
      local_58 = DAT_14c8464f0;
      local_68 = (undefined4)DAT_14c8464e0;
      uStack_64 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
      uStack_60 = (undefined4)DAT_14c8464e8;
      uStack_5c = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
      local_c0 = CONCAT22(local_c0._2_2_,1);
      local_bc = 0;
      local_b4 = CONCAT44(local_68,uStack_6c);
      uStack_ac = uStack_64;
      local_a0 = DAT_14c8464f0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_f0 = local_70;
      local_f8 = &local_c8;
      local_b8 = uVar3;
      uStack_a8 = uStack_60;
      uStack_a4 = uStack_5c;
      FUN_14665cbc6(local_e8);
      local_118 = &local_d8;
      local_d8 = &DAT_4030000000000000;
      local_d0 = 0x4022000000000000;
      local_100 = pcVar5;
      local_108 = 4;
      local_110 = uVar2;
      FUN_140ec5250(lVar4,lVar8,0x42e,local_e8);
      if (local_e8[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_144333379:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144333514 FUN_144333514 body=44 status=ok
// SIG undefined FUN_144333514(void)

void FUN_144333514(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_140ae0922();
  FUN_1463cd9b8(*(undefined8 *)(param_1 + 0x28),0);
  return;
}



// FUNCTION 144333640 FUN_144333640 body=139 status=ok
// SIG undefined FUN_144333640(void)

void FUN_144333640(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143eb3526();
  lVar1 = FUN_14101baae(param_1);
  if (lVar1 != 0) {
    lVar2 = FUN_14030d4a0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14665b330(lVar1 + 0x418,local_20,param_1);
      FUN_14594332c(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443336cc FUN_1443336cc body=174 status=ok
// SIG undefined FUN_1443336cc(void)

void FUN_1443336cc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1457102ae();
  FUN_145dab248(param_1 + 0x188,&local_20,param_1);
  FUN_1405e645c(param_1);
  lVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar2 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = *(longlong *)(lVar1 + 0x2c8);
      if (lVar2 == 0) goto LAB_144333711;
    }
    FUN_145727b2c(lVar2 + 0x2e8,&local_20,param_1,FUN_145d1a536);
    *(undefined8 *)(param_1 + 0x228) = local_20;
  }
LAB_144333711:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144333842 FUN_144333842 body=887 status=ok
// SIG undefined FUN_144333842(void)

void FUN_144333842(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 uVar12;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_70;
  longlong *local_60 [2];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((((*(int *)(param_1 + 0x34) == 0) || (uVar3 = *(uint *)(param_1 + 0x30), (int)uVar3 < 0)) ||
        (DAT_14c9647dc <= (int)uVar3)) ||
       ((plVar10 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0x34))))) ||
      (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
       ((*plVar10 == 0 || (lVar7 = FUN_14101baae(), lVar7 == 0)))))) ||
     ((*(longlong *)(param_1 + 0x2f8) != 0 ||
      ((plVar10 = (longlong *)FUN_140489acc(), plVar10 == (longlong *)0x0 ||
       (cVar6 = (**(code **)(*plVar10 + 0x410))(plVar10), cVar6 == '\0')))))) goto LAB_1443338df;
  plVar10 = (longlong *)(param_1 + 0x2f8);
  lVar8 = *plVar10;
  if (lVar8 == 0) {
    lVar8 = FUN_14001cc68(0x58,0x10);
    FUN_148a00c7c(lVar8);
    plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14b9db690;
    plVar9[2] = lVar8;
    *(longlong *)(param_1 + 0x2f8) = lVar8;
    plVar4 = *(longlong **)(param_1 + 0x300);
    if (plVar9 == plVar4) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar9 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar4 = plVar9;
          goto joined_r0x0001443339bb;
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x300) = plVar9;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar4 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x0001443339bb:
          if (iVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
    lVar8 = *plVar10;
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x50) != 2) {
        FUN_1446efa72((longlong *)(lVar8 + 0x48),0,2,0x10);
        *(undefined4 *)(lVar8 + 0x50) = 2;
      }
      puVar5 = *(undefined8 **)(lVar8 + 0x48);
      *puVar5 = &PTR_LAB_14b9db720;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      puVar5[2] = lVar11;
      *puVar5 = &PTR_FUN_14b9db6b0;
      puVar5[3] = param_1;
      lVar8 = *(longlong *)(param_1 + 0x2f8);
      if (lVar8 != 0) goto LAB_144333aad;
    }
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x300);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x300) = 0;
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5);
        LOCK();
        piVar1 = (int *)((longlong)puVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  else {
LAB_144333aad:
    uVar12 = 0;
    if (*(longlong *)(param_1 + 0x288) != 0) {
      uVar12 = *(undefined1 *)(*(longlong *)(param_1 + 0x288) + 0x128);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = &PTR_FUN_149e19310;
      DAT_14c844840[2] = 0xffffffffffffffff;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    local_49 = 0;
    FUN_140009b9a(local_60,param_2);
    local_70 = 0;
    local_78 = &DAT_14c844840;
    FUN_148a00d4c(lVar8,local_60,uVar12,&local_49);
    if (local_60[0] != (longlong *)0x0) {
      (**(code **)(*local_60[0] + 0x10))();
    }
    FUN_148a00cca(plVar10,*(undefined4 *)(lVar7 + 0xe0));
  }
LAB_1443338df:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144333cb6 FUN_144333cb6 body=1549 status=ok
// SIG undefined FUN_144333cb6(void)

void FUN_144333cb6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_138 [32];
  code **local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8 [2];
  longlong local_e8;
  undefined8 local_d8;
  longlong *local_c0;
  longlong *local_a8;
  ulonglong uStack_a0;
  code *local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_2 != 0) {
    lVar4 = FUN_1407f4df8();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      local_98 = FUN_146140f5a;
      uStack_90._0_4_ = 0;
      local_118 = &local_98;
      FUN_145ef1122(param_1,param_2,&DAT_14cb92d10,param_1);
      local_98 = FUN_146141368;
      uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
      local_118 = &local_98;
      FUN_145ef1122(param_1,param_2,&DAT_14cb92d18,param_1);
    }
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = (code *)0x0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    uVar9 = (uint)((ulonglong)DAT_14cbe5b08 >> 0x10);
    uVar7 = (uint)DAT_14cbe5b08 & 0xffff;
    lVar4 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x118);
    }
    iVar8 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x120) - 1U &
                             (int)((ulonglong)DAT_14cbe5b08 >> 0x20) +
                             ((uint)DAT_14cbe5b08 << 0x10 | uVar7) +
                             (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar8 * 0x18);
        if (*plVar2 == DAT_14cbe5b08) {
          plVar11 = plVar2 + 1;
          if (plVar11 != (longlong *)0x0 && plVar2 != (longlong *)0x0) {
            iVar8 = *(int *)(*(longlong *)(param_1 + 0x1a8) + 0xec);
            if (*plVar11 == 0) {
              uVar12 = 0;
              uVar5 = 0;
            }
            else {
              uVar9 = *(uint *)(*plVar11 + 0xc);
              uVar12 = (ulonglong)uVar9;
              if ((int)uVar9 < DAT_14c9647dc) {
                lVar4 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
              }
              else {
                lVar4 = 0;
              }
              uVar5 = (ulonglong)*(uint *)(lVar4 + 0x10);
              if (*(uint *)(lVar4 + 0x10) == 0) {
                LOCK();
                iVar3 = DAT_14c964868 + 1;
                UNLOCK();
                uVar9 = DAT_14c964868 + 1;
                bVar14 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar3;
                if (bVar14) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar9);
                }
                LOCK();
                uVar7 = *(uint *)(lVar4 + 0x10);
                bVar14 = uVar7 == 0;
                if (bVar14) {
                  *(uint *)(lVar4 + 0x10) = uVar9;
                  uVar7 = 0;
                }
                UNLOCK();
                if (bVar14) {
                  uVar7 = uVar9;
                }
                uVar5 = (ulonglong)uVar7;
              }
            }
            FUN_14143058a(param_1,uVar12 | uVar5 << 0x20,iVar8 + 2);
            lVar4 = *plVar11;
            if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x38) != 0)) {
              lVar13 = (longlong)*(int *)(lVar4 + 0x38) * 0x50;
              lVar4 = *(longlong *)(lVar4 + 0x30) + 0x28;
              do {
                FUN_14113bfae(&local_98,local_f8,lVar4,0);
                lVar4 = lVar4 + 0x50;
                lVar13 = lVar13 + -0x50;
              } while (lVar13 != 0);
            }
          }
          break;
        }
        iVar8 = (int)plVar2[2];
      } while (iVar8 != -1);
    }
  }
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    uVar9 = (uint)((ulonglong)DAT_14cbe5b10 >> 0x10);
    uVar7 = (uint)DAT_14cbe5b10 & 0xffff;
    lVar4 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x118);
    }
    iVar8 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x120) - 1U &
                             (int)((ulonglong)DAT_14cbe5b10 >> 0x20) +
                             ((uint)DAT_14cbe5b10 << 0x10 | uVar7) +
                             (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar8 * 0x18);
        if (*plVar2 == DAT_14cbe5b10) {
          if (plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) {
            local_a8 = (longlong *)0x0;
            uStack_a0 = 0;
            FUN_14113bbde(&DAT_14c966da0);
            lVar4 = plVar2[1];
            FUN_1405b824a(local_f8,*(undefined8 *)(lVar4 + 0x30));
            if (lVar4 != 0) {
              FUN_14064b284(lVar4,local_d8);
              if ((longlong)(int)uStack_a0 != 0) {
                plVar2 = local_a8 + (longlong)(int)uStack_a0 * 3;
                plVar11 = local_a8;
                do {
                  lVar13 = *plVar11;
                  if ((int)uStack_90 != local_64) {
                    uVar9 = (uint)((ulonglong)lVar13 >> 0x10);
                    uVar7 = (uint)lVar13 & 0xffff;
                    puVar6 = local_58;
                    if (local_58 == (undefined1 *)0x0) {
                      puVar6 = local_60;
                    }
                    for (iVar8 = *(int *)(puVar6 + (ulonglong)
                                                   (local_50 - 1U &
                                                   (int)((ulonglong)lVar13 >> 0x20) +
                                                   ((uint)lVar13 << 0x10 | uVar7) +
                                                   (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar7 >> 4))
                                                   * 4); iVar8 != -1;
                        iVar8 = *(int *)(local_98 + (longlong)iVar8 * 0x20 + 0x18)) {
                      if (*(longlong *)(local_98 + (longlong)iVar8 * 0x20) == lVar13)
                      goto LAB_144334077;
                    }
                  }
                  local_108 = plVar11[1];
                  local_100 = plVar11[2];
                  if (local_100 != 0) {
                    LOCK();
                    *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
                    UNLOCK();
                  }
                  local_110 = lVar13;
                  FUN_14181c380(lVar4,local_d8,&local_110);
LAB_144334077:
                  plVar11 = plVar11 + 3;
                } while (plVar11 != plVar2);
              }
              iVar8 = *(int *)(*(longlong *)(param_1 + 0x1a8) + 0xec);
              uVar9 = *(uint *)(lVar4 + 0xc);
              if ((int)uVar9 < DAT_14c9647dc) {
                lVar4 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
              }
              else {
                lVar4 = 0;
              }
              iVar3 = *(int *)(lVar4 + 0x10);
              if (*(int *)(lVar4 + 0x10) == 0) {
                LOCK();
                iVar3 = DAT_14c964868 + 1;
                UNLOCK();
                iVar10 = DAT_14c964868 + 1;
                bVar14 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar3;
                if (bVar14) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar10);
                }
                LOCK();
                iVar3 = *(int *)(lVar4 + 0x10);
                bVar14 = iVar3 == 0;
                if (bVar14) {
                  *(int *)(lVar4 + 0x10) = iVar10;
                  iVar3 = 0;
                }
                UNLOCK();
                if (bVar14) {
                  iVar3 = iVar10;
                }
              }
              FUN_14143058a(param_1,CONCAT44(iVar3,uVar9),iVar8 + 1);
            }
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_c0 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar1 = (int *)((longlong)local_c0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_c0 + 0x10))(local_c0);
                }
              }
            }
            if (local_e8 != 0) {
              FUN_1400020a8();
            }
            if (local_f8[0] != 0) {
              FUN_1400020a8();
            }
            FUN_144a65a1e(local_a8,uStack_a0 & 0xffffffff);
            if (local_a8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar8 = (int)plVar2[2];
      } while (iVar8 != -1);
    }
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1405535a6(&local_98);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443342c4 FUN_1443342c4 body=769 status=ok
// SIG undefined FUN_1443342c4(void)

void FUN_1443342c4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  
  if (param_2 != 0) {
    lVar4 = FUN_1407f4df8();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      FUN_140b4b272(param_1,param_2);
    }
  }
  iVar2 = *(int *)(param_1 + 0xe0);
  iVar6 = *(int *)(param_1 + 0x10c);
  if (iVar2 != iVar6) {
    uVar7 = (uint)((ulonglong)DAT_14cbe5b08 >> 0x10);
    uVar8 = (uint)DAT_14cbe5b08 & 0xffff;
    lVar4 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(param_1 + 0x118) == 0) {
      lVar4 = param_1 + 0x110;
    }
    iVar9 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x120) - 1U &
                             (int)((ulonglong)DAT_14cbe5b08 >> 0x20) +
                             ((uint)DAT_14cbe5b08 << 0x10 | uVar8) +
                             (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar9 * 0x18);
        if (*plVar1 == DAT_14cbe5b08) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            lVar4 = plVar1[1];
            if (lVar4 == 0) {
              uVar10 = 0;
              uVar5 = 0;
            }
            else {
              uVar7 = *(uint *)(lVar4 + 0xc);
              uVar10 = (ulonglong)uVar7;
              if ((int)uVar7 < DAT_14c9647dc) {
                lVar4 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              }
              else {
                lVar4 = 0;
              }
              uVar5 = (ulonglong)*(uint *)(lVar4 + 0x10);
              if (*(uint *)(lVar4 + 0x10) == 0) {
                LOCK();
                iVar2 = DAT_14c964868 + 1;
                UNLOCK();
                uVar7 = DAT_14c964868 + 1;
                bVar11 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar2;
                if (bVar11) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar7);
                }
                LOCK();
                uVar8 = *(uint *)(lVar4 + 0x10);
                bVar11 = uVar8 == 0;
                if (bVar11) {
                  *(uint *)(lVar4 + 0x10) = uVar7;
                  uVar8 = 0;
                }
                UNLOCK();
                if (bVar11) {
                  uVar8 = uVar7;
                }
                uVar5 = (ulonglong)uVar8;
              }
            }
            FUN_1412e3bcc(param_1,uVar10 | uVar5 << 0x20);
            iVar2 = *(int *)(param_1 + 0xe0);
            iVar6 = *(int *)(param_1 + 0x10c);
          }
          break;
        }
        iVar9 = (int)plVar1[2];
      } while (iVar9 != -1);
    }
    if (iVar2 != iVar6) {
      uVar7 = (uint)((ulonglong)DAT_14cbe5b10 >> 0x10);
      uVar8 = (uint)DAT_14cbe5b10 & 0xffff;
      lVar4 = param_1 + 0x110;
      if (*(longlong *)(param_1 + 0x118) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x118);
      }
      iVar2 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x120) - 1U &
                               (int)((ulonglong)DAT_14cbe5b10 >> 0x20) +
                               ((uint)DAT_14cbe5b10 << 0x10 | uVar8) +
                               (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar2 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar2 * 0x18);
          if (*plVar1 == DAT_14cbe5b10) {
            if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
              lVar4 = plVar1[1];
              if (lVar4 == 0) {
                uVar7 = 0;
                uVar5 = 0;
              }
              else {
                uVar7 = *(uint *)(lVar4 + 0xc);
                if ((int)uVar7 < DAT_14c9647dc) {
                  lVar4 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                }
                else {
                  lVar4 = 0;
                }
                uVar5 = (ulonglong)*(uint *)(lVar4 + 0x10);
                if (*(uint *)(lVar4 + 0x10) == 0) {
                  LOCK();
                  iVar2 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar8 = DAT_14c964868 + 1;
                  bVar11 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar2;
                  if (bVar11) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar8);
                  }
                  LOCK();
                  uVar3 = *(uint *)(lVar4 + 0x10);
                  bVar11 = uVar3 == 0;
                  if (bVar11) {
                    *(uint *)(lVar4 + 0x10) = uVar8;
                    uVar3 = 0;
                  }
                  UNLOCK();
                  if (bVar11) {
                    uVar3 = uVar8;
                  }
                  uVar5 = (ulonglong)uVar3;
                }
              }
              FUN_1412e3bcc(param_1,(ulonglong)uVar7 | uVar5 << 0x20);
            }
            break;
          }
          iVar2 = (int)plVar1[2];
        } while (iVar2 != -1);
      }
    }
  }
  FUN_140b4b21c(param_1,param_2);
  return;
}



// FUNCTION 144334698 FUN_144334698 body=358 status=ok
// SIG undefined FUN_144334698(void)

undefined8 * FUN_144334698(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b81ba00;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1446ddda2(&local_58,&DAT_14b9d8d88,0);
  FUN_1404e49fa(param_1 + 5,&local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = DAT_14cbe5c08;
  local_68 = DAT_14cbe5c00;
  FUN_1448075d0(&local_58);
  FUN_1404e49fa(param_1 + 10,&local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a97f4(&local_58,&DAT_14cbe5c18);
  if (DAT_14c947fe0 == 0) {
    lVar1 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar1);
    DAT_14c947fe0 = lVar1;
  }
  FUN_140045924(DAT_14c947fe0,&local_68,&local_58,1);
  param_1[0x10] = local_68;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = DAT_14cbe5c40;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144334800 FUN_144334800 body=366 status=ok
// SIG undefined FUN_144334800(void)

void FUN_144334800(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((byte *)*param_4 != (byte *)0x0) && ((*(byte *)*param_4 & 3) != 0)) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1400f6f32(lVar1);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
        lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
        if (lVar1 != 0) {
          if (DAT_14cbadd90 == 0) {
            local_40 = &local_20;
            local_20 = FUN_141030f22;
            local_30 = FUN_14081d0ea;
            local_38 = &LAB_1459f2e4c;
            local_48 = &LAB_148c39de3;
            local_50 = &LAB_1457a9eb2;
            local_58 = &DAT_149e063b2;
            local_60 = 0;
            local_68 = 0x10000004;
            local_70 = 0x10;
            local_78 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
            lVar1 = FUN_148ef429e(lVar1);
            if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
            }
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144334984 FUN_144334984 body=366 status=ok
// SIG undefined FUN_144334984(void)

undefined8 FUN_144334984(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_1400f6f32(lVar1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
      lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
      if (lVar1 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_40 = &local_28;
          local_28 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_1459f2e4c;
          local_48 = &LAB_148c39de3;
          local_50 = &LAB_1457a9eb2;
          local_58 = &DAT_149e063b2;
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 0x10;
          local_78 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          lVar1 = FUN_148ef429e(lVar1);
          if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144334b78 FUN_144334b78 body=69 status=ok
// SIG undefined FUN_144334b78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144334b78(void)

{
  _DAT_14cbe5fc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144334bba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe5fd0,1);
  return;
}



// FUNCTION 144334bbd FUN_144334bbd body=69 status=ok
// SIG undefined FUN_144334bbd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144334bbd(void)

{
  _DAT_14cbe5fe0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144334bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe5fe8,1);
  return;
}



// FUNCTION 144334c02 FUN_144334c02 body=69 status=ok
// SIG undefined FUN_144334c02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144334c02(void)

{
  _DAT_14cbe5ff8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144334c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe6000,1);
  return;
}



// FUNCTION 144334c48 FUN_144334c48 body=42 status=ok
// SIG undefined FUN_144334c48(void)

void FUN_144334c48(longlong param_1)

{
  FUN_143d6c9de(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0xc0));
  FUN_148ef4668(param_1,0);
  return;
}



// FUNCTION 144334c72 FUN_144334c72 body=183 status=ok
// SIG undefined FUN_144334c72(void)

undefined8 * FUN_144334c72(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0xffffffff;
  uStack_44 = 0xffffffff;
  uStack_40 = 0xffffffff;
  uStack_3c = 0xffffffff;
  local_58 = 0xffffffff;
  uStack_54 = 0xffffffff;
  uStack_50 = 0xffffffff;
  uStack_4c = 0xffffffff;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  (**(code **)(*DAT_14ca83900 + 400))(DAT_14ca83900,&local_58);
  uVar1 = CONCAT44(uStack_54,local_58) + 0xfffff;
  uVar3 = CONCAT44(uStack_54,local_58) + 0x1ffffe;
  if (-1 < (longlong)uVar1) {
    uVar3 = uVar1;
  }
  fVar5 = (float)(uVar3 >> 0x14 & 0xffffffff);
  lVar2 = 0xc;
  do {
    lVar4 = lVar2;
    if (lVar4 + 0xc == 0x3c) break;
    lVar2 = lVar4 + 0xc;
  } while (*(float *)(&DAT_14cbe5f34 + lVar4) <= fVar5 &&
           fVar5 != *(float *)(&DAT_14cbe5f34 + lVar4));
  *param_1 = *(undefined8 *)(lVar4 + 0x14cbe5f2c);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144334d2a FUN_144334d2a body=788 status=ok
// SIG undefined FUN_144334d2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144334d2a(longlong param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined4 uStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_144334f97;
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_144334f97;
    }
    local_58 = (undefined1  [8])0x14ae43c40;
    uStack_50 = 8;
    fStack_4c = (float)((uint)fStack_4c & 0xffffff00);
    uVar3 = FUN_14001a6c0(local_58,1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    plVar6 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar3);
  }
  else {
LAB_144334f97:
    local_58 = (undefined1  [8])0x14ae43c40;
    uStack_50 = 8;
    fStack_4c = (float)((uint)fStack_4c & 0xffffff00);
    uVar3 = FUN_14001a6c0(local_58,1);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    plVar6 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3);
  }
  lVar7 = (**(code **)(*plVar6 + 0x50))(plVar6);
  if (DAT_14cb9acd0 != 0) {
    if ((longlong)*(int *)(lVar7 + 200) != 0) {
      lVar8 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xc0) + lVar8) == DAT_14cb9acd0) goto LAB_144334e5b;
        lVar8 = lVar8 + 8;
      } while ((longlong)*(int *)(lVar7 + 200) * 8 != lVar8);
    }
    if ((longlong)*(int *)(lVar7 + 0xd8) != 0) {
      lVar8 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xd0) + lVar8) == DAT_14cb9acd0) goto LAB_144334e5b;
        lVar8 = lVar8 + 8;
      } while ((longlong)*(int *)(lVar7 + 0xd8) * 8 != lVar8);
    }
  }
LAB_144334e3c:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144334e5b:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe600c) {
    FUN_144b3d300(&DAT_14cbe600c);
    if (DAT_14cbe600c == -1) {
      FUN_141292270(param_1,local_58);
      DAT_14cbe6008 = local_58._4_4_;
      _Init_thread_footer(&DAT_14cbe600c);
    }
  }
  local_38 = _DAT_14cbe5f84;
  uStack_30 = uRam000000014cbe5f8c;
  local_48 = _DAT_14cbe5f74;
  uStack_40 = _DAT_14cbe5f7c;
  local_58._4_4_ = uRam000000014cbe5f68;
  local_58._0_4_ = _DAT_14cbe5f64;
  uStack_50 = _DAT_14cbe5f6c;
  fStack_4c = _DAT_14cbe5f70;
  fVar1 = *(float *)(param_1 + 0xe4);
  lVar7 = 0;
  do {
    lVar8 = lVar7;
    if (lVar8 + 0xc == 0x30) break;
    lVar7 = lVar8 + 0xc;
  } while (*(float *)((longlong)&fStack_4c + lVar8) <= fVar1 &&
           fVar1 != *(float *)((longlong)&fStack_4c + lVar8));
  FUN_148ef43a6(&local_60,DAT_14cbe6008,fVar1,*(undefined4 *)(local_58 + lVar8));
  *(undefined8 *)(param_1 + 0x2d4) = local_60;
  *(undefined8 *)(param_1 + 0x2cc) = *(undefined8 *)(local_58 + lVar8 + 4);
  goto LAB_144334e3c;
}



// FUNCTION 144335072 FUN_144335072 body=515 status=ok
// SIG undefined FUN_144335072(void)

void FUN_144335072(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148b6560c();
  uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar4 = FUN_140334a94(param_2,uVar3);
  if ((param_2 != 0) && (lVar4 == 0)) {
    uVar3 = FUN_145b85602();
    lVar4 = FUN_144718840(param_2,uVar3);
    if (lVar4 != 0) {
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b59d840;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_48[2] = lVar5;
      *local_48 = &PTR_FUN_14b9dbfa0;
      local_48[3] = 0;
      iVar6 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_48 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar6 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar7 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar6 = *(int *)(lVar8 + 0x10);
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(lVar8 + 0x10) = iVar7;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar6 = iVar7;
          }
        }
      }
      *(int *)((longlong)puVar2 + 0x1c) = iVar6;
      puVar2[4] = param_1;
      FUN_148b5dd48(lVar4 + 8,local_50,&local_48);
      if (local_40 != 0) {
        if (local_48 == (undefined8 *)0x0) goto LAB_1443350b9;
        (**(code **)*local_48)(local_48,0);
        FUN_1446efa72(&local_48,0,0,0x10);
        local_40 = 0;
      }
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1443350b9:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144335276 FUN_144335276 body=143 status=ok
// SIG undefined FUN_144335276(void)

void FUN_144335276(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0xa0) != 0)) {
    FUN_148b5c21c();
  }
  puVar1 = (undefined8 *)(param_1 + 0xb0);
  lVar3 = FUN_14433c21e(puVar1);
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_14433c21e(puVar1);
    (**(code **)(*plVar4 + 0x2c0))(plVar4);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    if (*(int *)(param_1 + 0xd4) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 200),0);
    }
    puVar2 = *(undefined2 **)(param_1 + 200);
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  return;
}



// FUNCTION 144335306 FUN_144335306 body=277 status=ok
// SIG undefined FUN_144335306(void)

void FUN_144335306(longlong param_1)

{
  longlong lVar1;
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
  undefined1 *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_143fd209c();
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cae9568 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1417de738;
      local_20 = &LAB_145893408;
      local_28 = &LAB_1458cbbd2;
      local_38 = &LAB_147ba21f1;
      local_40 = &LAB_1463e9233;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x1000000c;
      local_60 = 8;
      local_68 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) == DAT_14cae9568 + 0x30)) goto LAB_144335357;
  }
  lVar1 = 0;
LAB_144335357:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_14427aa18(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14433541c FUN_14433541c body=42 status=ok
// SIG undefined FUN_14433541c(void)

void FUN_14433541c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    while (**(longlong **)(lVar1 + 0x38) != 0) {
      FUN_1400f3090(lVar1);
    }
  }
  return;
}



// FUNCTION 144335446 FUN_144335446 body=370 status=ok
// SIG undefined FUN_144335446(void)

undefined8 * FUN_144335446(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_14007ca06();
  FUN_143fb2e62(param_1,uVar2);
  *param_1 = &PTR_FUN_14b88bb10;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    local_30 = "CultureSettings";
    local_28 = 0xf;
    local_24 = 0;
    uVar1 = FUN_14001a6c0(&local_30,1);
    local_30 = (char *)(ulonglong)uVar1;
    FUN_1443355ba(param_1,&local_30,&DAT_14cbd9740,1);
    local_30 = "HUDIndicators";
    local_28 = 0xd;
    local_24 = 0;
    uVar1 = FUN_14001a6c0(&local_30,1);
    local_30 = (char *)(ulonglong)uVar1;
    FUN_144335698(param_1,&local_30,&DAT_14cbd9748,1);
    local_30 = "HUDTakedownTimer";
    local_28 = 0x10;
    local_24 = 0;
    uVar1 = FUN_14001a6c0(&local_30,1);
    local_30 = (char *)(ulonglong)uVar1;
    FUN_144335776(param_1,&local_30,&DAT_14cbd9758,1);
    local_30 = "SplitScreen";
    local_28 = 0xb;
    local_24 = 0;
    uVar1 = FUN_14001a6c0(&local_30,1);
    local_30 = (char *)(ulonglong)uVar1;
    FUN_144335854(param_1,&local_30,&DAT_14cbd9750,1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443355ba FUN_1443355ba body=221 status=ok
// SIG undefined FUN_1443355ba(void)

void FUN_1443355ba(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  uVar2 = FUN_14406ef98();
  local_68 = 1;
  local_60 = param_4;
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2);
  if (lVar3 != 0) {
    FUN_1401924dc(lVar3);
    FUN_1401924dc(lVar3);
  }
  local_40 = &local_50;
  local_50 = lVar3;
  local_48 = param_3;
  FUN_14433c39c(param_1 + 0x28,local_34,&local_48,0);
  if (local_50 != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    local_50 = 0;
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144335698 FUN_144335698 body=221 status=ok
// SIG undefined FUN_144335698(void)

void FUN_144335698(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  uVar2 = FUN_14406f144();
  local_68 = 1;
  local_60 = param_4;
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2);
  if (lVar3 != 0) {
    FUN_1401924dc(lVar3);
    FUN_1401924dc(lVar3);
  }
  local_40 = &local_50;
  local_50 = lVar3;
  local_48 = param_3;
  FUN_14433c39c(param_1 + 0x28,local_34,&local_48,0);
  if (local_50 != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    local_50 = 0;
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144335776 FUN_144335776 body=221 status=ok
// SIG undefined FUN_144335776(void)

void FUN_144335776(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  uVar2 = FUN_14406fc1e();
  local_68 = 1;
  local_60 = param_4;
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2);
  if (lVar3 != 0) {
    FUN_1401924dc(lVar3);
    FUN_1401924dc(lVar3);
  }
  local_40 = &local_50;
  local_50 = lVar3;
  local_48 = param_3;
  FUN_14433c39c(param_1 + 0x28,local_34,&local_48,0);
  if (local_50 != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    local_50 = 0;
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144335854 FUN_144335854 body=221 status=ok
// SIG undefined FUN_144335854(void)

void FUN_144335854(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *param_2;
  uVar2 = FUN_14406f5b4();
  local_68 = 1;
  local_60 = param_4;
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2);
  if (lVar3 != 0) {
    FUN_1401924dc(lVar3);
    FUN_1401924dc(lVar3);
  }
  local_40 = &local_50;
  local_50 = lVar3;
  local_48 = param_3;
  FUN_14433c39c(param_1 + 0x28,local_34,&local_48,0);
  if (local_50 != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    local_50 = 0;
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144335932 FUN_144335932 body=113 status=ok
// SIG undefined FUN_144335932(void)

undefined8 * FUN_144335932(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_145d0286c(param_1,uVar1);
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_14b88bdb0;
  param_1[5] = &PTR_FUN_14b88c090;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 2;
  FUN_140056680(param_1 + 0x11,&DAT_149dfb77a);
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 1443359a4 FUN_1443359a4 body=814 status=ok
// SIG undefined FUN_1443359a4(void)

void FUN_1443359a4(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0xa0) != 0) goto LAB_144335be0;
  lVar5 = FUN_140d5712e();
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  plVar8 = local_50;
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_50[2] = lVar6;
  *local_50 = (longlong)&PTR_FUN_14b9dc010;
  local_50[3] = 0;
  iVar7 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar7 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar7 = *(int *)(lVar10 + 0x10);
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(lVar10 + 0x10) = iVar4;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar7 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar8 + 0x1c) = iVar7;
  plVar8[4] = (longlong)FUN_144335cd4;
  *(undefined4 *)(plVar8 + 5) = 0;
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_50 + 0x30))(), cVar3 == '\0')) {
    if (local_48 == 0) {
      uVar11 = 0;
      goto LAB_144335bc8;
    }
    if (local_50 != (longlong *)0x0) {
      uVar11 = 0;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_144335bbb;
    }
    uVar11 = 0;
  }
  else {
    plVar8 = (longlong *)(lVar5 + 8);
    if (*(int *)(lVar5 + 0x1c) < 1) {
      iVar7 = *(int *)(lVar5 + 0x10);
      iVar4 = *(int *)(lVar5 + 0x18) + -1;
      *(int *)(lVar5 + 0x18) = iVar4;
      if (iVar4 <= iVar7) {
        iVar4 = iVar7;
        if (0 < iVar7) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar8 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar8 + (longlong)iVar9 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar8,iVar9);
              FUN_14005b248(plVar8);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar4 = *(int *)(lVar5 + 0x10);
          } while (iVar9 < iVar4);
        }
        iVar9 = 2;
        if (2 < iVar4 * 2) {
          iVar9 = iVar4 * 2;
        }
        *(int *)(lVar5 + 0x18) = iVar9;
        if ((iVar9 < iVar7) && (*(int *)(lVar5 + 0x14) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    uVar11 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar11 = local_40;
    }
    iVar7 = *(int *)(lVar5 + 0x10);
    *(uint *)(lVar5 + 0x10) = iVar7 + 1U;
    if (*(uint *)(lVar5 + 0x14) < iVar7 + 1U) {
      FUN_1447a71f6(plVar8,iVar7);
    }
    lVar10 = *plVar8;
    lVar5 = (longlong)iVar7 * 0x10;
    *(undefined8 *)(lVar10 + lVar5) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar5) = 0;
    *(longlong **)(lVar10 + lVar5) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar10 + 8 + lVar5) = local_48;
LAB_144335bbb:
    local_48 = 0;
LAB_144335bc8:
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = uVar11;
  FUN_144335cd4(param_1);
LAB_144335be0:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144335cd4 FUN_144335cd4 body=485 status=ok
// SIG undefined FUN_144335cd4(void)

void FUN_144335cd4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  ushort uVar9;
  ulonglong uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_140d5712e();
  lVar7 = *(longlong *)(lVar5 + 0x38);
  plVar3 = *(longlong **)(lVar5 + 0x40);
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
  local_50 = (void *)0x0;
  local_48 = *(int *)(lVar7 + 0x80);
  lVar5 = (longlong)local_48;
  _Src = *(void **)(lVar7 + 0x78);
  if (lVar5 == 0) {
    local_44 = 0;
    cVar8 = *(char *)(lVar7 + 0xd8);
    iVar6 = *(int *)(param_1 + 0x90);
    iVar4 = 0;
    if (iVar6 != 0) goto LAB_144335dff;
LAB_144335e06:
    if (*(char *)(param_1 + 0x98) == cVar8) goto LAB_144335e0e;
LAB_144335e71:
    local_38 = DAT_14cbb6278;
    local_40 = DAT_14cbb6270;
    *(char *)(param_1 + 0x98) = cVar8;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
    cVar8 = *(char *)(param_1 + 0x98);
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar5 * 2);
    cVar8 = *(char *)(lVar7 + 0xd8);
    iVar6 = *(int *)(param_1 + 0x90);
    iVar4 = local_48;
    if (iVar6 == local_48) {
      if (1 < local_48) {
        lVar7 = 0;
        while( true ) {
          uVar9 = *(ushort *)(*(longlong *)(param_1 + 0x88) + lVar7);
          uVar10 = (ulonglong)uVar9;
          uVar11 = *(ushort *)((longlong)local_50 + lVar7);
          if (uVar9 != uVar11) break;
          if (uVar9 == 0) goto LAB_144335e06;
LAB_144335daf:
          lVar7 = lVar7 + 2;
        }
        if ((uVar11 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar11;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar12]) goto LAB_144335daf;
        }
        if (uVar9 != uVar11) goto LAB_144335e40;
      }
      goto LAB_144335e06;
    }
LAB_144335dff:
    if (iVar6 + iVar4 == 1) goto LAB_144335e06;
LAB_144335e40:
    local_38 = DAT_14cbb6268;
    local_40 = DAT_14cbb6260;
    FUN_144335efa(param_1,param_1 + 0x88,&local_50);
    if (*(char *)(param_1 + 0x98) != cVar8) goto LAB_144335e71;
  }
  FUN_148efe06c(param_1 + 0x70,param_1 + 0x88,
                (uint)CONCAT71((int7)((ulonglong)_Src >> 8),cVar8) & 0xffffff01);
LAB_144335e0e:
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144335eba FUN_144335eba body=64 status=ok
// SIG undefined FUN_144335eba(void)

void FUN_144335eba(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    lVar1 = FUN_140d5712e();
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_14480f766(lVar1 + 8);
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 144335efa FUN_144335efa body=278 status=ok
// SIG undefined FUN_144335efa(void)

undefined8 FUN_144335efa(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = (int)param_2[1];
  iVar2 = (int)param_3[1];
  if (iVar1 == iVar2) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_2 + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar7 = *(ushort *)(*param_3 + lVar4);
        if (uVar5 != uVar7) break;
        if (uVar5 == 0) goto LAB_144335fc3;
LAB_144335f58:
        lVar4 = lVar4 + 2;
      }
      if ((uVar7 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar8 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_144335f58;
      }
      if (uVar5 != uVar7) goto LAB_144335f84;
    }
  }
  else if (iVar1 + iVar2 != 1) {
LAB_144335f84:
    if (param_2 != param_3) {
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) == 0 && iVar2 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_2,iVar2,*(int *)((longlong)param_2 + 0xc));
        if (iVar2 != 0) {
          memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
        }
      }
    }
    local_38 = *(undefined4 *)(param_4 + 1);
    local_40 = *param_4;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
    uVar3 = 1;
    goto LAB_144335fef;
  }
LAB_144335fc3:
  uVar3 = 0;
LAB_144335fef:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144336012 FUN_144336012 body=89 status=ok
// SIG undefined FUN_144336012(void)

undefined8 * FUN_144336012(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x90);
  _Src = *(void **)(param_1 + 0x88);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 14433606c FUN_14433606c body=543 status=ok
// SIG undefined FUN_14433606c(void)

void FUN_14433606c(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_1[0x12] != 0) || (lVar3 = (**(code **)(*param_1 + 0x2c8))(), lVar3 == 0)) ||
     (lVar3 = FUN_143eab90e(lVar3), lVar3 == 0)) goto LAB_1443360b1;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar2 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b47b1f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_50[2] = lVar4;
  *local_50 = &PTR_FUN_14b9dc080;
  local_50[3] = 0;
  iVar5 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar7;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar5;
  puVar2[4] = FUN_14433628c;
  *(undefined4 *)(puVar2 + 5) = 0;
  FUN_145aa2ff8(lVar3 + 0x110,&local_58,&local_50);
  if (local_48 == 0) {
LAB_1443361f3:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1443361f3;
  }
  param_1[0x12] = local_58;
  FUN_14433628c(param_1,lVar3 + 0x40,1);
LAB_1443360b1:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14433628c FUN_14433628c body=526 status=ok
// SIG undefined FUN_14433628c(void)

void FUN_14433628c(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1417955f0(param_2,local_40,0);
  if (DAT_14cbd9720 != 0) {
    lVar4 = *param_2;
    iVar1 = (int)param_2[1];
    if ((longlong)iVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar4 + lVar3) == DAT_14cbd9720) goto LAB_1443363c7;
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 << 3 != lVar3);
    }
    if ((longlong)(int)param_2[3] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar3) == DAT_14cbd9720) goto LAB_1443363c7;
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar3);
    }
  }
  if (DAT_14cbd9728 != 0) {
    lVar4 = *param_2;
    iVar1 = (int)param_2[1];
    if ((longlong)iVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar4 + lVar3) == DAT_14cbd9728) goto LAB_1443363c7;
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 << 3 != lVar3);
    }
    if ((longlong)(int)param_2[3] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar3) == DAT_14cbd9728) goto LAB_1443363c7;
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar3);
    }
  }
  if (DAT_14cbd9730 != 0) {
    lVar4 = *param_2;
    iVar1 = (int)param_2[1];
    if ((longlong)iVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar4 + lVar3) == DAT_14cbd9730) goto LAB_1443363c7;
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 << 3 != lVar3);
    }
    if ((longlong)(int)param_2[3] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar3) == DAT_14cbd9730) goto LAB_1443363c7;
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar3);
    }
  }
  cVar2 = '\0';
  goto LAB_144336419;
LAB_144336417:
  cVar2 = '\x01';
  goto LAB_144336419;
LAB_1443363c7:
  cVar2 = '\x02';
  if (DAT_14cbd9728 != 0) {
    if (iVar1 != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar4 + lVar3) == DAT_14cbd9728) goto LAB_144336417;
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
    if ((longlong)(int)param_2[3] != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(param_2[2] + lVar4) == DAT_14cbd9728) goto LAB_144336417;
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)param_2[3] * 8 != lVar4);
    }
  }
LAB_144336419:
  if (*(char *)(param_1 + 0x88) == cVar2) {
    if (param_3 == '\0') goto LAB_14433646d;
  }
  else {
    local_28 = DAT_14cbb62b8;
    local_30 = DAT_14cbb62b0;
    *(char *)(param_1 + 0x88) = cVar2;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28,&local_30);
    cVar2 = *(char *)(param_1 + 0x88);
  }
  FUN_14433d3ca(param_1 + 0x70,cVar2);
LAB_14433646d:
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14433649c FUN_14433649c body=88 status=ok
// SIG undefined FUN_14433649c(void)

void FUN_14433649c(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x12] != 0) {
    lVar1 = (**(code **)(*param_1 + 0x2c8))();
    if (lVar1 != 0) {
      lVar1 = FUN_143eab90e(lVar1);
      if ((lVar1 != 0) && (param_1[0x12] != 0)) {
        FUN_14480f766(lVar1 + 0x110);
      }
    }
    param_1[0x12] = 0;
  }
  return;
}



// FUNCTION 1443364f4 FUN_1443364f4 body=262 status=ok
// SIG undefined FUN_1443364f4(void)

void FUN_1443364f4(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x70) = *param_2;
  *(undefined4 *)(param_1 + 0x7c) = param_3;
  *(undefined4 *)(param_1 + 0x80) = param_4;
  local_68 = *param_5;
  local_60 = *(undefined4 *)(param_5 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_5 + 0xc);
  uStack_58 = *(undefined4 *)(param_5 + 2);
  uStack_54 = *(undefined4 *)((longlong)param_5 + 0x14);
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_5 + 4);
  lVar1 = (longlong)local_48;
  _Src = (void *)param_5[3];
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  local_38 = DAT_14cbb62f8;
  local_40 = DAT_14cbb62f0;
  FUN_144336666(param_1,param_1 + 0x88,&local_68);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_5[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443365fc FUN_1443365fc body=105 status=ok
// SIG undefined FUN_1443365fc(void)

void FUN_1443365fc(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = DAT_14cbb62f0;
  local_18 = DAT_14cbb62f8;
  FUN_144336666(param_1,param_1 + 0x88,param_2);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144336666 FUN_144336666 body=348 status=ok
// SIG undefined FUN_144336666(void)

undefined8
FUN_144336666(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2[1] == param_3[1]) && (param_2[2] == param_3[2])) {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 == *(int *)(param_3 + 4)) {
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar7 = *(ushort *)(param_2[3] + lVar6);
          uVar8 = (ulonglong)uVar7;
          uVar9 = *(ushort *)(param_3[3] + lVar6);
          if (uVar7 != uVar9) break;
          if (uVar7 == 0) goto LAB_14433675b;
LAB_144336785:
          lVar6 = lVar6 + 2;
        }
        if ((uVar9 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar10 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_144336785;
        }
        if (uVar7 != uVar9) goto LAB_144336698;
      }
    }
    else if (*(int *)(param_3 + 4) + iVar1 != 1) goto LAB_144336698;
LAB_14433675b:
    uVar5 = 0;
  }
  else {
LAB_144336698:
    *param_2 = *param_3;
    uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar3 = *(undefined4 *)(param_3 + 2);
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
    *(undefined4 *)(param_2 + 2) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 4);
      _Src = (void *)param_3[3];
      *(int *)(param_2 + 4) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_2 + 0x24) == 0) {
        *(undefined4 *)((longlong)param_2 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(param_2 + 3,iVar1,*(int *)((longlong)param_2 + 0x24));
        if (iVar1 != 0) {
          memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
        }
      }
    }
    local_40 = *(undefined4 *)(param_4 + 1);
    local_48 = *param_4;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
    uVar5 = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1443367c4 FUN_1443367c4 body=1630 status=ok
// SIG undefined FUN_1443367c4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1443367c4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  bool bVar20;
  float fVar21;
  undefined1 auStack_378 [32];
  longlong *local_358;
  int local_34c;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  iVar6 = *(int *)(param_1 + 0x80);
  if (1 < (longlong)iVar6) {
    lVar1 = *(longlong *)(param_1 + 0x78);
    memset(local_338,0,0x2f0);
    local_340 = lVar1 + (longlong)iVar6 * 8 + -8;
    local_348 = lVar1;
    fVar21 = logf((float)iVar6);
    local_338[0] = (int)(longlong)(fVar21 + fVar21);
    plVar17 = &local_348;
    do {
      plVar16 = (longlong *)*plVar17;
      plVar13 = (longlong *)plVar17[1];
      iVar6 = (int)plVar17[2];
      iVar7 = (int)((ulonglong)((longlong)plVar13 - (longlong)plVar16) >> 3);
      uVar19 = (ulonglong)(iVar7 + 1);
      local_358 = plVar17;
      if (iVar6 != 0) {
LAB_14433686a:
        plVar17 = local_358;
        if (8 < (int)(uint)uVar19) {
          uVar18 = (uint)uVar19 >> 1;
          lVar1 = plVar16[uVar18];
          plVar16[uVar18] = *plVar16;
          *plVar16 = lVar1;
          plVar15 = plVar13 + 1;
          bVar4 = DAT_14c950c29;
          local_34c = iVar6;
          plVar3 = plVar16;
joined_r0x00014433689b:
          plVar3 = plVar3 + 1;
          plVar8 = plVar15;
          bVar5 = DAT_14c950c29;
          if (plVar3 <= plVar13) goto LAB_144336937;
          goto joined_r0x0001443368a9;
        }
        for (; local_358 = plVar17, plVar3 = plVar16, bVar4 = DAT_14c950c29, plVar15 = plVar16,
            plVar16 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar17 = plVar3, plVar15 = plVar15 + 1, plVar15 <= plVar13) {
            lVar1 = *plVar15;
            if (lVar1 != 0 && (~bVar4 & 1) == 0) {
              FUN_1456cec3c(lVar1);
              bVar4 = DAT_14c950c29;
            }
            lVar2 = *plVar17;
            if (lVar2 != 0 && (~bVar4 & 1) == 0) {
              FUN_1456cec3c(lVar2);
              bVar4 = DAT_14c950c29;
            }
            plVar3 = plVar17;
            if (((lVar1 != 0) && (lVar2 != 0)) &&
               (plVar3 = plVar15,
               *(float *)(lVar1 + 0x80) < *(float *)(lVar2 + 0x80) ||
               *(float *)(lVar1 + 0x80) == *(float *)(lVar2 + 0x80))) {
              plVar3 = plVar17;
            }
          }
          lVar1 = *plVar17;
          *plVar17 = *plVar13;
          *plVar13 = lVar1;
          plVar17 = local_358;
        }
        goto LAB_144336de3;
      }
LAB_144336a7b:
      iVar6 = (int)uVar19;
      plVar17 = local_358;
      if (iVar6 != 0) {
        iVar7 = (iVar7 - (iVar7 + -1 >> 0x1f)) + -1 >> 1;
        iVar14 = iVar7;
joined_r0x000144336a9d:
        do {
          iVar12 = iVar7 * 2 + 1;
          if (iVar12 < iVar6) {
            iVar10 = iVar7 * 2 + 2;
            iVar11 = iVar12;
            if (iVar10 < iVar6) {
              lVar1 = plVar16[iVar12];
              if (lVar1 != 0 && DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar1);
              }
              lVar2 = plVar16[iVar10];
              if ((lVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                FUN_1456cec3c(lVar2);
              }
              iVar11 = iVar10;
              if (((lVar1 != 0) && (lVar2 != 0)) &&
                 (iVar11 = iVar12,
                 *(float *)(lVar1 + 0x80) < *(float *)(lVar2 + 0x80) ||
                 *(float *)(lVar1 + 0x80) == *(float *)(lVar2 + 0x80))) {
                iVar11 = iVar10;
              }
            }
            lVar1 = plVar16[iVar11];
            if (lVar1 != 0 && DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar1);
            }
            lVar2 = plVar16[iVar7];
            if ((lVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
              FUN_1456cec3c(lVar2);
            }
            if (((lVar1 != 0) && (lVar2 != 0)) &&
               (*(float *)(lVar2 + 0x80) <= *(float *)(lVar1 + 0x80) &&
                *(float *)(lVar1 + 0x80) != *(float *)(lVar2 + 0x80))) {
              lVar1 = plVar16[iVar7];
              plVar16[iVar7] = plVar16[iVar11];
              plVar16[iVar11] = lVar1;
              iVar7 = iVar11;
              goto joined_r0x000144336a9d;
            }
          }
          plVar17 = local_358;
          bVar20 = iVar14 != 0;
          iVar7 = iVar14 + -1;
          iVar14 = iVar7;
        } while (bVar20);
        if (1 < iVar6) {
          lVar1 = *plVar16;
          *plVar16 = plVar16[uVar19 - 1];
          plVar16[uVar19 - 1] = lVar1;
          if (iVar6 != 2) {
            do {
              uVar9 = uVar19 - 1;
              iVar6 = 0;
              iVar14 = 1;
              iVar7 = 0;
              do {
                iVar6 = iVar6 + 2;
                iVar12 = iVar14;
                if ((longlong)iVar6 < (longlong)uVar9) {
                  lVar1 = plVar16[iVar14];
                  if (lVar1 != 0 && DAT_14c950c29 == 1) {
                    FUN_1456cec3c(lVar1);
                  }
                  lVar2 = plVar16[iVar6];
                  if ((lVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                    FUN_1456cec3c(lVar2);
                  }
                  iVar12 = iVar6;
                  if (((lVar1 != 0) && (lVar2 != 0)) &&
                     (iVar12 = iVar14,
                     *(float *)(lVar1 + 0x80) < *(float *)(lVar2 + 0x80) ||
                     *(float *)(lVar1 + 0x80) == *(float *)(lVar2 + 0x80))) {
                    iVar12 = iVar6;
                  }
                }
                lVar1 = plVar16[iVar12];
                if (lVar1 != 0 && DAT_14c950c29 == 1) {
                  FUN_1456cec3c(lVar1);
                }
                lVar2 = plVar16[iVar7];
                if ((lVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                  FUN_1456cec3c(lVar2);
                }
                if (((lVar1 == 0) || (lVar2 == 0)) ||
                   (*(float *)(lVar1 + 0x80) < *(float *)(lVar2 + 0x80) ||
                    *(float *)(lVar1 + 0x80) == *(float *)(lVar2 + 0x80))) break;
                lVar1 = plVar16[iVar7];
                plVar16[iVar7] = plVar16[iVar12];
                plVar16[iVar12] = lVar1;
                iVar6 = iVar12 * 2;
                iVar14 = iVar12 * 2 + 1;
                iVar7 = iVar12;
              } while ((longlong)iVar14 < (longlong)uVar9);
              lVar1 = *plVar16;
              *plVar16 = plVar16[uVar19 - 2];
              plVar16[uVar19 - 2] = lVar1;
              uVar19 = uVar9;
            } while (2 < uVar9);
          }
        }
      }
LAB_144336de3:
      plVar17 = plVar17 + -3;
    } while (&local_348 <= plVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_144336937:
  lVar1 = *plVar3;
  if (lVar1 != 0 && (~bVar4 & 1) == 0) {
    FUN_1456cec3c(lVar1);
    bVar4 = DAT_14c950c29;
  }
  lVar2 = *plVar16;
  if (lVar2 != 0 && (~bVar4 & 1) == 0) {
    FUN_1456cec3c(lVar2);
    bVar4 = DAT_14c950c29;
  }
  if ((lVar1 == 0 || lVar2 == 0) ||
     (bVar5 = DAT_14c950c29,
     *(float *)(lVar1 + 0x80) < *(float *)(lVar2 + 0x80) ||
     *(float *)(lVar1 + 0x80) == *(float *)(lVar2 + 0x80))) goto joined_r0x00014433689b;
joined_r0x0001443368a9:
  do {
    plVar15 = plVar8 + -1;
    if (plVar15 <= plVar16) goto LAB_1443369ba;
    lVar1 = *plVar16;
    if (lVar1 != 0 && (~bVar5 & 1) == 0) {
      FUN_1456cec3c(lVar1);
      bVar5 = DAT_14c950c29;
    }
    lVar2 = *plVar15;
    if (lVar2 != 0 && (~bVar5 & 1) == 0) {
      FUN_1456cec3c(lVar2);
      bVar5 = DAT_14c950c29;
    }
    plVar8 = plVar15;
  } while (((lVar1 == 0) || (lVar2 == 0)) ||
          (*(float *)(lVar1 + 0x80) < *(float *)(lVar2 + 0x80) ||
           *(float *)(lVar1 + 0x80) == *(float *)(lVar2 + 0x80)));
  plVar8 = plVar15 + 1;
LAB_1443369ba:
  if (plVar3 <= plVar15) {
    lVar1 = *plVar3;
    *plVar3 = *plVar15;
    *plVar15 = lVar1;
    bVar4 = DAT_14c950c29;
    goto joined_r0x00014433689b;
  }
  lVar1 = *plVar16;
  *plVar16 = *plVar15;
  *plVar15 = lVar1;
  iVar6 = local_34c + -1;
  plVar8 = plVar8 + -2;
  if ((longlong)plVar8 - (longlong)plVar16 < (longlong)plVar13 - (longlong)plVar3) {
    if (plVar3 < plVar13) {
      *local_358 = (longlong)plVar3;
      local_358[1] = (longlong)plVar13;
      *(int *)(local_358 + 2) = iVar6;
      local_358 = local_358 + 3;
    }
    plVar17 = local_358;
    if (plVar15 <= plVar16 + 1) goto LAB_144336de3;
  }
  else {
    plVar17 = local_358;
    if (plVar16 + 1 < plVar15) {
      *local_358 = (longlong)plVar16;
      local_358[1] = (longlong)plVar8;
      *(int *)(local_358 + 2) = iVar6;
      plVar17 = local_358 + 3;
    }
    plVar8 = plVar13;
    plVar16 = plVar3;
    if (plVar13 <= plVar3) goto LAB_144336de3;
  }
  local_358 = plVar17;
  iVar7 = (int)((ulonglong)((longlong)plVar8 - (longlong)plVar16) >> 3);
  uVar19 = (ulonglong)(iVar7 + 1);
  plVar13 = plVar8;
  if (iVar6 == 0) goto LAB_144336a7b;
  goto LAB_14433686a;
}



// FUNCTION 144336e24 FUN_144336e24 body=382 status=ok
// SIG undefined FUN_144336e24(void)

void FUN_144336e24(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = FUN_144336fa3();
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar2 == 0) goto LAB_144336f47;
  }
  else {
    FUN_1456cec3c(lVar2);
  }
  local_88 = *param_5;
  local_80 = *(undefined4 *)(param_5 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_5 + 0xc);
  uStack_78 = *(undefined4 *)(param_5 + 2);
  uStack_74 = *(undefined4 *)((longlong)param_5 + 0x14);
  local_70 = (void *)0x0;
  local_68 = *(int *)(param_5 + 4);
  lVar3 = (longlong)local_68;
  _Src = (void *)param_5[3];
  if (lVar3 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,_Src,lVar3 * 2);
  }
  local_90 = *(undefined4 *)(param_2 + 1);
  local_98 = *param_2;
  local_a8 = &local_88;
  FUN_1443364f4(lVar2,&local_98,param_3,param_4);
  iVar1 = *(int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
    FUN_14433d4ca((longlong *)(param_1 + 0x78),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 8) = lVar2;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(lVar2);
  }
LAB_144336f47:
  if (param_5[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144336fa3 FUN_144336fa3 body=175 status=ok
// SIG undefined FUN_144336fa3(void)

undefined8 FUN_144336fa3(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14406f95e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144337054 FUN_144337054 body=262 status=ok
// SIG undefined FUN_144337054(void)

void FUN_144337054(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x84) < 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_14433d624(param_1 + 0x78,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if ((*(float *)(param_1 + 0x70) != 0.0) || (NAN(*(float *)(param_1 + 0x70)))) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    local_18 = DAT_14cbb6298;
    local_20 = DAT_14cbb6290;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((*(float *)(param_1 + 0x74) != 1.0) || (NAN(*(float *)(param_1 + 0x74)))) {
    *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
    local_18 = DAT_14cbb62a8;
    local_20 = DAT_14cbb62a0;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if (*(char *)(param_1 + 0x90) == '\0') {
    *(undefined1 *)(param_1 + 0x90) = 1;
    local_18 = DAT_14cbb6328;
    local_20 = DAT_14cbb6320;
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(param_1 + 0x28);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14433715c FUN_14433715c body=752 status=ok
// SIG undefined FUN_14433715c(void)

undefined8 FUN_14433715c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  code *local_90;
  int local_88;
  longlong *local_80;
  undefined4 local_68 [2];
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar6 = *param_2;
  if (lVar6 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_b0 = &local_90;
      local_90 = FUN_141030f22;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_1459f2e4c;
      local_b8 = &LAB_148c39de3;
      local_c0 = &LAB_1457a9eb2;
      local_c8 = &DAT_149e063b2;
      local_d0 = 0;
      local_d8 = 0x10000004;
      local_e0 = 0x10;
      local_e8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (*(longlong *)(lVar6 + 0x3db8) != 0)) {
      lVar5 = FUN_148ef9008();
      if ((lVar5 != 0) && (plVar2 = *(longlong **)(lVar6 + 0xc30), plVar2 != (longlong *)0x0)) {
        lVar6 = FUN_1457b1050(lVar5);
        if (lVar6 != 0) {
          local_90 = (code *)((ulonglong)local_90 & 0xffffffffffffff00);
          local_68[0] = 0;
          FUN_1456bb102(&local_90,*param_2);
          FUN_1448729ea(param_1 + 0x20,local_60,&local_90);
          iVar4 = FUN_1405d5f74(local_60);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar10 = local_60;
            if (0x18 < local_48) {
              ppppuVar10 = (undefined8 ****)local_60[0];
            }
            (*pcVar3)(ppppuVar10);
          }
          if (0x18 < local_48) {
            FUN_1400020a8(local_60[0]);
          }
          FUN_1448173f8(local_68);
          if (((char)local_90 == '\x03') && (local_80 != (longlong *)0x0)) {
            LOCK();
            piVar7 = (int *)((longlong)local_80 + 0xc);
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (*piVar7 == 0) {
              (**(code **)(*local_80 + 0x10))();
            }
          }
          iVar4 = (int)((float)iVar4 * *(float *)((longlong)param_2 + 0x1c));
          if (0 < iVar4) {
            piVar7 = &DAT_14c9485f0;
            if (*(int **)(lVar6 + 8) != (int *)0x0) {
              piVar7 = *(int **)(lVar6 + 8);
            }
            if (((*piVar7 == 0) || (iVar1 = piVar7[1], iVar1 == 0)) || (*piVar7 == DAT_14c948000)) {
LAB_14433742b:
              local_88 = DAT_14c948620;
              local_90 = DAT_14c948618;
            }
            else {
              if ((iVar1 < 2) && (piVar7[9] < 1)) {
                puVar8 = (ulonglong *)(piVar7 + 2);
              }
              else {
                puVar8 = *(ulonglong **)(piVar7 + 6);
              }
              if (iVar1 < 1) goto LAB_14433742b;
              local_88 = (int)puVar8[1];
              local_90 = (code *)*puVar8;
            }
            uVar9 = (**(code **)(*plVar2 + 0x2a8))(plVar2);
            local_e8 = CONCAT31(local_e8._1_3_,1);
            FUN_14105a17e(plVar2,&local_90,iVar4,uVar9);
            uVar9 = 1;
            goto LAB_1443371c5;
          }
        }
      }
    }
  }
  uVar9 = 0;
LAB_1443371c5:
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14433744e FUN_14433744e body=362 status=ok
// SIG undefined FUN_14433744e(void)

undefined8 FUN_14433744e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (*(longlong *)(lVar1 + 0x3db8) != 0)) {
      lVar3 = FUN_148ef9008();
      if (lVar3 != 0) {
        lVar3 = FUN_140e448c6(lVar3);
        if (lVar3 != 0) {
          iVar2 = FUN_148ef9168(param_1,lVar1,lVar3,param_2);
          if (0 < iVar2) {
            FUN_1441f03d2(lVar1,lVar3,iVar2);
            uVar4 = 1;
            goto LAB_1443374b3;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_1443374b3:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443375f2 FUN_1443375f2 body=468 status=ok
// SIG undefined FUN_1443375f2(void)

void FUN_1443375f2(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = -1;
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    iVar3 = FUN_1408966e4();
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  lVar4 = FUN_141218c3a(param_1);
  lVar5 = FUN_148ef9008(param_1);
  if ((((!bVar2 || param_2 == 0) || (lVar4 == 0)) || (iVar3 != param_3)) ||
     ((lVar5 == 0 || (*(longlong *)(param_2 + 8) == 0)))) goto LAB_144337753;
  lVar6 = FUN_141526668(lVar5);
  lVar5 = FUN_14156016c(lVar5);
  plVar1 = *(longlong **)(param_2 + 8);
  if (lVar6 == 0) {
LAB_1443376f5:
    if (lVar5 == 0) goto LAB_144337753;
    puVar8 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(lVar5 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    FUN_140045924(DAT_14c947fe0,&local_58,puVar8,1);
    if (*plVar1 != local_58) goto LAB_144337753;
  }
  else {
    puVar8 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(lVar6 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar6 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar6);
      DAT_14c947fe0 = lVar6;
    }
    FUN_140045924(DAT_14c947fe0,&local_50,puVar8,1);
    if (*plVar1 != local_50) goto LAB_1443376f5;
    uVar7 = 0;
  }
  FUN_1440cb0fd(param_1,lVar4,uVar7,param_2);
LAB_144337753:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443377da FUN_1443377da body=489 status=ok
// SIG undefined FUN_1443377da(void)

void FUN_1443377da(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) goto LAB_14433781d;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0 || (longlong)*(int *)(param_1 + 0x80) == 0) goto LAB_14433781d;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  plVar8 = *(longlong **)(param_1 + 0x78);
  lVar7 = (longlong)*(int *)(param_1 + 0x80) * 0xe8;
  lVar6 = 0;
  lVar9 = 0;
  lVar4 = 0;
  do {
    lVar2 = FUN_140e44844(plVar8);
    if (lVar2 != 0) {
      uVar3 = FUN_14144d9c6(lVar2);
      cVar1 = FUN_14125be1e(lVar5,uVar3);
      if (cVar1 != '\0') {
        lVar9 = *plVar8;
        local_58 = lVar9;
        uVar3 = FUN_14477b664(plVar8[1]);
        lVar4 = FUN_14477b664(uVar3);
        lVar6 = plVar8[2];
        lStack_50 = lVar4;
        local_48 = lVar6;
      }
    }
    plVar8 = plVar8 + 0x1d;
    lVar7 = lVar7 + -0xe8;
  } while (lVar7 != 0);
  if (lVar4 == 0) {
    uVar3 = FUN_141218768();
    lVar4 = FUN_14477b664(uVar3);
    lStack_50 = lVar4;
  }
  if (lVar6 == 0) {
    local_48 = 0;
    if ((lVar9 != 0) && (lVar4 != 0)) {
      plVar8 = *(longlong **)(lVar4 + 0xb8);
      if (plVar8 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar8 + 0x108))(plVar8);
        if (cVar1 != '\0') {
          uVar3 = (**(code **)(*plVar8 + 0x110))(plVar8);
          local_48 = FUN_144aff482(uVar3,&local_58);
          if (local_48 != 0) goto LAB_144337995;
          goto LAB_144337945;
        }
      }
      local_48 = 0;
    }
LAB_144337945:
    lVar5 = FUN_14620a5eb();
    if (local_58 != *(longlong *)(lVar5 + 0x38)) {
      local_48 = 0;
    }
    if (lStack_50 != *(longlong *)(lVar5 + 0x40)) {
      local_48 = 0;
    }
    local_58 = *(longlong *)(lVar5 + 0x38);
    uVar3 = FUN_14477b664();
    lStack_50 = FUN_14477b664(uVar3);
    local_48 = *(longlong *)(lVar5 + 0x48);
  }
LAB_144337995:
  FUN_1414fdd70(param_1,&local_58,1);
  FUN_145c3ffa8(param_1 + 0x30,param_1);
LAB_14433781d:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443379c4 FUN_1443379c4 body=129 status=ok
// SIG undefined FUN_1443379c4(void)

void FUN_1443379c4(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1414fdd70(param_1,param_2,0);
  cVar1 = FUN_14665cb84(param_1);
  if (cVar1 == '\0') {
    local_38 = *param_2;
    uVar2 = FUN_14477b664(param_2[1]);
    local_30 = FUN_14477b664(uVar2);
    local_28 = param_2[2];
    FUN_14409b618(param_1,&local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144337a46 FUN_144337a46 body=563 status=ok
// SIG undefined FUN_144337a46(void)

void FUN_144337a46(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined **ppuVar12;
  
  if (*(longlong *)(param_1 + 0x90) == 0) {
    uVar8 = FUN_141218768();
    uVar8 = FUN_14477b664(uVar8);
    *(undefined8 *)(param_1 + 0x90) = uVar8;
  }
  lVar9 = param_2[1];
  if (lVar9 == 0) {
    lVar9 = FUN_141218768();
  }
  lVar1 = *param_2;
  lVar9 = FUN_14477b664(lVar9);
  iVar7 = 0;
  iVar6 = 0;
  if ((lVar9 != 0) && (plVar2 = *(longlong **)(lVar9 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar10 = *plVar2;
    pcVar3 = *(code **)(lVar10 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar3)(plVar2);
      iVar6 = 0;
      if (cVar5 == '\0') goto LAB_144337b08;
      lVar10 = *plVar2;
    }
    pcVar3 = *(code **)(lVar10 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar6 = FUN_144aff48c(ppuVar12);
  }
LAB_144337b08:
  lVar10 = *(longlong *)(param_1 + 0x88);
  lVar4 = *(longlong *)(param_1 + 0x90);
  if ((lVar4 != 0) && (plVar2 = *(longlong **)(lVar4 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar11 = *plVar2;
    pcVar3 = *(code **)(lVar11 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar3)(plVar2);
      if (cVar5 == '\0') goto LAB_144337b76;
      lVar11 = *plVar2;
    }
    pcVar3 = *(code **)(lVar11 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar7 = FUN_144aff48c(ppuVar12);
  }
LAB_144337b76:
  if ((iVar7 == iVar6) && (lVar10 == lVar1)) {
    if (lVar4 == lVar9) {
      return;
    }
    if ((lVar9 != 0) && (lVar4 != 0)) {
      iVar6 = *(int *)(lVar9 + 0x38);
      iVar7 = *(int *)(lVar4 + 0x38);
      if ((iVar6 <= iVar7) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == lVar9 + 0x30)) {
        return;
      }
      if ((iVar7 <= iVar6) &&
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) == lVar4 + 0x30)) {
        return;
      }
    }
  }
  FUN_1414fdd70(param_1,param_2,0);
  return;
}



// FUNCTION 144337c7a FUN_144337c7a body=559 status=ok
// SIG undefined FUN_144337c7a(void)

void FUN_144337c7a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined **ppuVar12;
  
  if (*(longlong *)(param_1 + 0x90) == 0) {
    uVar8 = FUN_141218768();
    uVar8 = FUN_14477b664(uVar8);
    *(undefined8 *)(param_1 + 0x90) = uVar8;
  }
  lVar9 = param_2[1];
  if (lVar9 == 0) {
    lVar9 = FUN_141218768();
  }
  lVar1 = *param_2;
  lVar9 = FUN_14477b664(lVar9);
  iVar7 = 0;
  iVar6 = 0;
  if ((lVar9 != 0) && (plVar2 = *(longlong **)(lVar9 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar10 = *plVar2;
    pcVar3 = *(code **)(lVar10 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar3)(plVar2);
      iVar6 = 0;
      if (cVar5 == '\0') goto LAB_144337d35;
      lVar10 = *plVar2;
    }
    pcVar3 = *(code **)(lVar10 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar6 = FUN_144aff48c(ppuVar12);
  }
LAB_144337d35:
  lVar10 = *(longlong *)(param_1 + 0x88);
  lVar4 = *(longlong *)(param_1 + 0x90);
  if ((lVar4 != 0) && (plVar2 = *(longlong **)(lVar4 + 0xb8), plVar2 != (longlong *)0x0)) {
    lVar11 = *plVar2;
    pcVar3 = *(code **)(lVar11 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar3)(plVar2);
      if (cVar5 == '\0') goto LAB_144337da4;
      lVar11 = *plVar2;
    }
    pcVar3 = *(code **)(lVar11 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar3)(plVar2);
    }
    iVar7 = FUN_144aff48c(ppuVar12);
  }
LAB_144337da4:
  if ((iVar7 == iVar6) && (lVar10 == lVar1)) {
    if (lVar4 == lVar9) {
      return;
    }
    if ((lVar9 != 0) && (lVar4 != 0)) {
      iVar6 = *(int *)(lVar9 + 0x38);
      iVar7 = *(int *)(lVar4 + 0x38);
      if ((iVar6 <= iVar7) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == lVar9 + 0x30)) {
        return;
      }
      if ((iVar7 <= iVar6) &&
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) == lVar4 + 0x30)) {
        return;
      }
    }
  }
  FUN_1414fdd70(param_1,param_1 + 0x88,0);
  return;
}



// FUNCTION 144337eaa FUN_144337eaa body=1388 status=ok
// SIG undefined FUN_144337eaa(void)

void FUN_144337eaa(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_148 [36];
  int local_124;
  longlong *local_120;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  int local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  longlong local_90;
  undefined4 local_88;
  longlong local_80;
  ulonglong local_78;
  int local_70;
  longlong *local_68;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar5 = param_2[1];
  local_80 = param_3;
  if (lVar5 == 0) {
    uVar4 = FUN_141218768();
    lVar5 = FUN_14477b664(uVar4);
    param_2[1] = lVar5;
  }
  lVar7 = param_2[2];
  if (lVar7 == 0) {
    if ((lVar5 == 0) || (*param_2 == 0)) goto LAB_144337fc1;
    plVar15 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar15 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar2 == '\0')) {
      param_2[2] = 0;
      goto LAB_144337fc1;
    }
    uVar4 = (**(code **)(*plVar15 + 0x110))(plVar15);
    lVar7 = FUN_144aff482(uVar4,param_2);
    param_2[2] = lVar7;
    if (lVar7 == 0) goto LAB_144337fc1;
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x78);
    lVar14 = (longlong)*(int *)(param_1 + 0x80) * 0xe8;
    do {
      lVar6 = FUN_140e44844(lVar5);
      if (lVar6 == lVar7) {
        if (lVar5 != 0) {
          uVar4 = FUN_14144d9c6(lVar7);
          if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
            uVar13 = *(undefined8 *)(param_1 + 0x20);
          }
          else {
            uVar13 = 0;
          }
          cVar2 = FUN_14125be1e(uVar13,uVar4);
          if ((((cVar2 != '\0') && (lVar14 = FUN_1457b1050(lVar7), lVar14 != 0)) &&
              ((*(uint *)(param_1 + 8) & 0x10) == 0)) &&
             ((*(longlong *)(param_1 + 0x20) != 0 &&
              (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xc30), lVar6 != 0)))) {
            if ((longlong)*(int *)(lVar5 + 0x20) == 0) goto LAB_14433803f;
            plVar15 = *(longlong **)(lVar5 + 0x18);
            lVar8 = (longlong)*(int *)(lVar5 + 0x20) * 0xc;
            goto LAB_144338030;
          }
        }
        break;
      }
      lVar5 = lVar5 + 0xe8;
      lVar14 = lVar14 + -0xe8;
    } while (lVar14 != 0);
  }
  goto LAB_144337fc1;
  while( true ) {
    plVar15 = (longlong *)((longlong)plVar15 + 0xc);
    lVar8 = lVar8 + -0xc;
    if (lVar8 == 0) break;
LAB_144338030:
    if (*plVar15 == param_3) goto LAB_144338042;
  }
LAB_14433803f:
  plVar15 = (longlong *)0x0;
LAB_144338042:
  piVar9 = (int *)FUN_148e1e77e(lVar7,&local_80);
  if ((plVar15 == (longlong *)0x0) || (piVar9 == (int *)0x0)) goto LAB_144337fc1;
  piVar10 = *(int **)(lVar14 + 8);
  if (piVar10 == (int *)0x0) {
    piVar10 = &DAT_14c9485f0;
  }
  if (((*piVar10 == 0) || (iVar1 = piVar10[1], iVar1 == 0)) || (*piVar10 == DAT_14c948000)) {
LAB_1443381a9:
    local_b0 = DAT_14c948620;
    local_b8 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar10[9] < 1)) {
      puVar11 = (ulonglong *)(piVar10 + 2);
    }
    else {
      puVar11 = *(ulonglong **)(piVar10 + 6);
    }
    if (iVar1 < 1) goto LAB_1443381a9;
    local_b0 = (int)puVar11[1];
    local_b8 = *puVar11;
  }
  uVar12 = FUN_140b4e694(lVar6,&local_b8);
  if (uVar12 < (ulonglong)(longlong)*piVar9) goto LAB_144337fc1;
  cVar2 = FUN_14665cb84(param_1);
  lVar7 = local_80;
  if (cVar2 == '\0') {
    local_110 = *param_2;
    uVar4 = FUN_14477b664(param_2[1]);
    local_108 = FUN_14477b664(uVar4);
    local_100 = param_2[2];
    FUN_148cbaa1e(param_1,&local_110,lVar7);
    goto LAB_144337fc1;
  }
  local_124 = (int)plVar15[1];
  local_120 = (longlong *)(piVar9 + 0x10);
  local_118 = (longlong *)(piVar9 + 2);
  if (local_124 != 0) {
    local_118 = local_120;
  }
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar7 = *(longlong *)(param_1 + 0x20), lVar7 != 0))
  {
    uVar4 = (**(code **)(*(longlong *)(lVar7 + 0x9a8) + 0x10))(lVar7 + 0x9a8);
  }
  else {
    uVar4 = 0;
  }
  FUN_14105c148(&local_b8,uVar4);
  if (local_124 == 0) {
    local_e0 = DAT_14cbe6250;
    uStack_d8 = &DAT_3f800000ffffffff;
    local_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar4 = 0;
    }
    local_78 = local_78 & 0xffffffffffffff00;
    local_50[0] = 0;
    FUN_1456bb102(&local_78,uVar4);
    uVar3 = FUN_14575fee6(local_120,&local_78,0xffffffff);
    uStack_d8 = (undefined1 *)CONCAT44(uStack_d8._4_4_,uVar3);
    FUN_1448173f8(local_50);
    if (((char)local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
      LOCK();
      piVar10 = (int *)((longlong)local_68 + 0xc);
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    local_a8 = (undefined4)local_e0;
    uStack_a4 = local_e0._4_4_;
    uStack_a0 = (undefined4)uStack_d8;
    uStack_9c = uStack_d8._4_4_;
    local_98 = local_d0;
    FUN_1459ff440(&local_90,&local_c8);
    FUN_140de863f(local_c8,uStack_c0 & 0xffffffff);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
  cVar2 = (**(code **)(*local_118 + 0x20))(local_118,&local_b8);
  if (cVar2 != '\0') {
    piVar10 = &DAT_14c9485f0;
    if (*(int **)(lVar14 + 8) != (int *)0x0) {
      piVar10 = *(int **)(lVar14 + 8);
    }
    if (((*piVar10 == 0) || (iVar1 = piVar10[1], iVar1 == 0)) || (*piVar10 == DAT_14c948000)) {
LAB_1443383e8:
      local_70 = DAT_14c948620;
      local_78 = DAT_14c948618;
    }
    else {
      if ((iVar1 < 2) && (piVar10[9] < 1)) {
        puVar11 = (ulonglong *)(piVar10 + 2);
      }
      else {
        puVar11 = *(ulonglong **)(piVar10 + 6);
      }
      if (iVar1 < 1) goto LAB_1443383e8;
      local_70 = (int)puVar11[1];
      local_78 = *puVar11;
    }
    FUN_1461ea678(lVar6,&local_78,*piVar9);
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    FUN_148ce0c87(param_1,lVar5,piVar9,plVar15);
    lVar5 = local_80;
    local_f8 = *param_2;
    uVar4 = FUN_14477b664(param_2[1]);
    local_f0 = FUN_14477b664(uVar4);
    local_e8 = param_2[2];
    FUN_148cba686(param_1,&local_f8,lVar5);
  }
  FUN_140de863f(local_90,local_88);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
LAB_144337fc1:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144338418 FUN_144338418 body=358 status=ok
// SIG undefined FUN_144338418(void)

void FUN_144338418(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_2[1];
  local_38 = param_3;
  if (lVar3 == 0) {
    uVar2 = FUN_141218768();
    lVar3 = FUN_14477b664(uVar2);
    param_2[1] = lVar3;
  }
  lVar5 = param_2[2];
  if (lVar5 == 0) {
    if ((lVar3 == 0) || (*param_2 == 0)) goto LAB_1443384fa;
    plVar7 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar1 == '\0')) {
      param_2[2] = 0;
      goto LAB_1443384fa;
    }
    uVar2 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar5 = FUN_144aff482(uVar2,param_2);
    param_2[2] = lVar5;
    if (lVar5 == 0) goto LAB_1443384fa;
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x78);
    lVar6 = (longlong)*(int *)(param_1 + 0x80) * 0xe8;
    do {
      lVar4 = FUN_140e44844(lVar3);
      if (lVar4 == lVar5) {
        if (lVar3 != 0) {
          if ((longlong)*(int *)(lVar3 + 0x20) == 0) goto LAB_144338541;
          plVar7 = *(longlong **)(lVar3 + 0x18);
          lVar6 = (longlong)*(int *)(lVar3 + 0x20) * 0xc;
          goto LAB_144338532;
        }
        break;
      }
      lVar3 = lVar3 + 0xe8;
      lVar6 = lVar6 + -0xe8;
    } while (lVar6 != 0);
  }
LAB_1443384fa:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    plVar7 = (longlong *)((longlong)plVar7 + 0xc);
    lVar6 = lVar6 + -0xc;
    if (lVar6 == 0) break;
LAB_144338532:
    if (*plVar7 == param_3) goto LAB_144338544;
  }
LAB_144338541:
  plVar7 = (longlong *)0x0;
LAB_144338544:
  lVar5 = FUN_148e1e77e(lVar5,&local_38);
  if ((plVar7 != (longlong *)0x0) && (lVar5 != 0)) {
    FUN_148efe86a(param_1 + 0x48,lVar3,lVar5,plVar7);
  }
  goto LAB_1443384fa;
}



// FUNCTION 144338580 FUN_144338580 body=1034 status=ok
// SIG undefined FUN_144338580(void)

void FUN_144338580(longlong param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  int *piVar13;
  longlong lVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 *puStack_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = param_2[1];
  if (lVar7 == 0) {
    uVar6 = FUN_141218768();
    lVar7 = FUN_14477b664(uVar6);
    param_2[1] = lVar7;
  }
  lVar9 = param_2[2];
  if (lVar9 == 0) {
    if ((lVar7 == 0) || (*param_2 == 0)) goto LAB_14433868f;
    plVar2 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
      param_2[2] = 0;
      goto LAB_14433868f;
    }
    uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar9 = FUN_144aff482(uVar6,param_2);
    param_2[2] = lVar9;
    if (lVar9 == 0) goto LAB_14433868f;
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x78);
    lVar14 = (longlong)*(int *)(param_1 + 0x80) * 0xe8;
    do {
      lVar8 = FUN_140e44844(lVar7);
      if (lVar8 == lVar9) {
        if (lVar7 != 0) {
          uVar6 = FUN_14144d9c6(lVar9);
          if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
            uVar12 = *(undefined8 *)(param_1 + 0x20);
          }
          else {
            uVar12 = 0;
          }
          cVar4 = FUN_14125be1e(uVar12,uVar6);
          if (((((cVar4 != '\0') && (lVar14 = FUN_1457b1050(lVar9), lVar14 != 0)) &&
               ((*(uint *)(param_1 + 8) & 0x10) == 0)) &&
              ((*(longlong *)(param_1 + 0x20) != 0 &&
               (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xc30), lVar8 != 0)))) &&
             ((-1 < (int)param_3 && ((int)param_3 < *(int *)(lVar9 + 0xd0))))) {
            piVar13 = (int *)((ulonglong)param_3 * 0x20 + *(longlong *)(lVar9 + 200));
            piVar10 = *(int **)(lVar14 + 8);
            if (piVar10 == (int *)0x0) {
              piVar10 = &DAT_14c9485f0;
            }
            local_78 = DAT_14c948618;
            iVar3 = DAT_14c948620;
            if (((*piVar10 != 0) && (iVar1 = piVar10[1], iVar1 != 0)) && (*piVar10 != DAT_14c948000)
               ) {
              if ((iVar1 < 2) && (piVar10[9] < 1)) {
                piVar10 = piVar10 + 2;
              }
              else {
                piVar10 = *(int **)(piVar10 + 6);
              }
              if (0 < iVar1) {
                local_78 = *(undefined8 *)piVar10;
                iVar3 = piVar10[2];
              }
            }
            puStack_70 = (undefined1 *)CONCAT44(puStack_70._4_4_,iVar3);
            uVar11 = FUN_140b4e694(lVar8,&local_78);
            if ((ulonglong)(longlong)*piVar13 <= uVar11) {
              cVar4 = FUN_14665cb84(param_1);
              if (cVar4 == '\0') {
                local_c0 = *param_2;
                uVar6 = FUN_14477b664(param_2[1]);
                local_b8 = FUN_14477b664(uVar6);
                local_b0 = param_2[2];
                FUN_148cba85e(param_1,&local_c0,param_3);
              }
              else if ((((*(uint *)(param_1 + 8) & 0x10) == 0) &&
                       (lVar9 = *(longlong *)(param_1 + 0x20), lVar9 != 0)) &&
                      (local_c8 = (**(code **)(*(longlong *)(lVar9 + 0x9a8) + 0x10))(lVar9 + 0x9a8),
                      local_c8 != 0)) {
                local_78 = 0;
                local_68 = 0;
                puStack_70 = &DAT_3f800000ffffffff;
                local_60 = 0;
                uStack_58 = 0;
                local_88 = FUN_140de867c(piVar13);
                local_90 = local_88 + 0x18;
                if (local_88 == 0) {
                  local_90 = 0;
                }
                local_80 = 0;
                uVar5 = FUN_14164c0ba(local_c8,&local_90,&local_78);
                local_c8 = CONCAT71(local_c8._1_7_,uVar5);
                FUN_140de863f(local_60,uStack_58 & 0xffffffff);
                if (local_60 != 0) {
                  FUN_1400020a8();
                }
                if ((char)local_c8 != '\0') {
                  piVar10 = &DAT_14c9485f0;
                  if (*(int **)(lVar14 + 8) != (int *)0x0) {
                    piVar10 = *(int **)(lVar14 + 8);
                  }
                  local_78 = DAT_14c948618;
                  iVar3 = DAT_14c948620;
                  if (((*piVar10 != 0) && (iVar1 = piVar10[1], iVar1 != 0)) &&
                     (*piVar10 != DAT_14c948000)) {
                    if ((iVar1 < 2) && (piVar10[9] < 1)) {
                      piVar10 = piVar10 + 2;
                    }
                    else {
                      piVar10 = *(int **)(piVar10 + 6);
                    }
                    if (0 < iVar1) {
                      local_78 = *(undefined8 *)piVar10;
                      iVar3 = piVar10[2];
                    }
                  }
                  puStack_70 = (undefined1 *)CONCAT44(puStack_70._4_4_,iVar3);
                  FUN_1461ea678(lVar8,&local_78,*piVar13);
                  FUN_148ce1050(param_1,lVar7,piVar13);
                  local_a8 = *param_2;
                  uVar6 = FUN_14477b664(param_2[1]);
                  local_a0 = FUN_14477b664(uVar6);
                  local_98 = param_2[2];
                  FUN_148cba4c6(param_1,&local_a8,param_3);
                }
              }
            }
          }
        }
        break;
      }
      lVar7 = lVar7 + 0xe8;
      lVar14 = lVar14 + -0xe8;
    } while (lVar14 != 0);
  }
LAB_14433868f:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14433898c FUN_14433898c body=273 status=ok
// SIG undefined FUN_14433898c(void)

void FUN_14433898c(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_141218768();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar6 = param_2[2];
  if (lVar6 == 0) {
    if (lVar4 == 0) {
      return;
    }
    if (*param_2 == 0) {
      return;
    }
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_2[2] = 0;
      return;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar6 = FUN_144aff482(uVar3,param_2);
    param_2[2] = lVar6;
    if (lVar6 == 0) {
      return;
    }
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x78);
    lVar7 = (longlong)*(int *)(param_1 + 0x80) * 0xe8;
    do {
      lVar5 = FUN_140e44844(lVar4);
      if (lVar5 == lVar6) {
        if (lVar4 == 0) {
          return;
        }
        if ((int)param_3 < 0) {
          return;
        }
        if (*(int *)(lVar6 + 0xd0) <= (int)param_3) {
          return;
        }
        FUN_148efe92c(param_1 + 0x60,lVar4,(ulonglong)param_3 * 0x20 + *(longlong *)(lVar6 + 200));
        return;
      }
      lVar4 = lVar4 + 0xe8;
      lVar7 = lVar7 + -0xe8;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144338b92 FUN_144338b92 body=60 status=ok
// SIG undefined FUN_144338b92(void)

void FUN_144338b92(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_141900498();
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x3db8) != 0)) && (*param_3 != 1)) {
    FUN_145c3fc4a(*(longlong *)(lVar1 + 0x3db8),param_4);
    return;
  }
  return;
}



// FUNCTION 144338bce FUN_144338bce body=1790 status=ok
// SIG undefined FUN_144338bce(void)

undefined8
FUN_144338bce(byte param_1,undefined8 param_2,int *param_3,undefined8 param_4,longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte *pbVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  undefined7 uVar10;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined4 *puVar16;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 *local_d0;
  byte *local_c8;
  longlong *plStack_c0;
  byte *local_b8;
  longlong *plStack_b0;
  byte *local_a8;
  longlong *plStack_a0;
  byte *local_98;
  longlong *plStack_90;
  undefined4 local_7c;
  undefined *local_78;
  byte **local_70;
  undefined1 local_64 [36];
  
  local_64._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar7 = FUN_141900498();
  if ((lVar7 == 0) || (lVar14 = *(longlong *)(lVar7 + 0x3db8), lVar14 == 0)) {
    bVar6 = 0;
    uVar10 = 0;
    goto LAB_144338c2a;
  }
  if (((*param_3 == 2) && (lVar7 = FUN_14665cb84(lVar14), (char)lVar7 == '\0')) ||
     (*(char *)(lVar14 + 0xac) != '\x01')) {
    uVar10 = (undefined7)((ulonglong)lVar7 >> 8);
    bVar6 = 1;
    param_1 = 0;
    goto LAB_144338c2a;
  }
  FUN_1414fdb4a(lVar14,*(undefined4 *)(lVar14 + 0xa0),*(undefined4 *)(lVar14 + 0xa4));
  if (((byte *)*param_5 == (byte *)0x0) || ((*(byte *)*param_5 & 3) == 0)) {
    FUN_14009b010(param_5,3,0);
  }
  lVar7 = *(longlong *)(lVar14 + 0x90);
  if (lVar7 == 0) {
    uVar8 = FUN_141218768();
    lVar7 = FUN_14477b664(uVar8);
    *(longlong *)(lVar14 + 0x90) = lVar7;
  }
  lVar9 = *(longlong *)(lVar14 + 0x98);
  puVar16 = &DAT_14c9485f0;
  if (lVar9 == 0) {
    if ((lVar7 != 0) && (*(longlong *)(lVar14 + 0x88) != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
        *(undefined8 *)(lVar14 + 0x98) = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar9 = FUN_144aff482(uVar8,(longlong *)(lVar14 + 0x88));
        *(longlong *)(lVar14 + 0x98) = lVar9;
        if (lVar9 != 0) goto LAB_144338d3a;
      }
    }
  }
  else {
LAB_144338d3a:
    if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
      puVar16 = *(undefined4 **)(lVar9 + 8);
    }
  }
  pbVar4 = (byte *)*param_5;
  if ((pbVar4 != (byte *)0x0) && ((~*pbVar4 & 3) == 0)) {
    lVar7 = *(longlong *)(pbVar4 + 8);
    local_70 = &local_a8;
    local_a8 = (byte *)CONCAT44(local_a8._4_4_,1);
    local_78 = &DAT_14cbe61b0;
    FUN_14049fede(lVar7 + 0x18,&local_98,&local_78,0);
    lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x18) + 0x28 + (longlong)(int)local_98 * 0x40);
    if (lVar7 != 0) {
      FUN_1402afb64(lVar7,puVar16);
    }
  }
  FUN_14884389e(param_5,&DAT_14cbe61d8,lVar14 + 0xa0);
  FUN_14884389e(param_5,&DAT_14cbe6200,lVar14 + 0xa4);
  local_b8 = (byte *)0x0;
  plStack_b0 = (longlong *)0x0;
  FUN_14009b010(&local_b8,2,0);
  puVar11 = &DAT_14c9a1270;
  if ((local_b8 != (byte *)0x0) && ((*local_b8 & 2) != 0)) {
    puVar11 = *(undefined8 **)(local_b8 + 8);
  }
  iVar13 = *(int *)(lVar14 + 0x80);
  if (iVar13 < 0) {
LAB_1443392b5:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  if (*(int *)((longlong)puVar11 + 0x14) < iVar13) {
    FUN_14009b4be();
    iVar13 = *(int *)(lVar14 + 0x80);
  }
  if (iVar13 != 0) {
    puVar11 = *(undefined8 **)(lVar14 + 0x78);
    local_d0 = puVar11 + (longlong)iVar13 * 0x1d;
    do {
      local_c8 = (byte *)0x0;
      plStack_c0 = (longlong *)0x0;
      FUN_14009b010(&local_c8,3,0);
      if ((local_c8 == (byte *)0x0) || ((*local_c8 & 3) == 0)) {
        FUN_14009b010(&local_c8,3,0);
        local_98 = (byte *)*puVar11;
        if (local_c8 != (byte *)0x0) goto LAB_144338eb2;
      }
      else {
        local_98 = (byte *)*puVar11;
LAB_144338eb2:
        if ((~*local_c8 & 3) == 0) {
          lVar7 = *(longlong *)(local_c8 + 8);
          local_64._0_4_ = 1;
          local_78 = &DAT_14cbe60c8;
          local_70 = (byte **)local_64;
          FUN_14049fede(lVar7 + 0x18,&local_a8,&local_78,0);
          lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x18) + 0x28 + (longlong)(int)local_a8 * 0x40)
          ;
          if (lVar7 != 0) {
            FUN_1401269d0(lVar7,&local_98);
          }
        }
      }
      local_98 = (byte *)0x0;
      plStack_90 = (longlong *)0x0;
      FUN_14009b010(&local_98,2,0);
      puVar12 = &DAT_14c9a1270;
      if ((local_98 != (byte *)0x0) && (puVar12 = &DAT_14c9a1270, (*local_98 & 2) != 0)) {
        puVar12 = *(undefined8 **)(local_98 + 8);
      }
      iVar13 = *(int *)(puVar11 + 4);
      if (iVar13 < 0) goto LAB_1443392b5;
      if (*(int *)((longlong)puVar12 + 0x14) < iVar13) {
        FUN_14009b4be();
        iVar13 = *(int *)(puVar11 + 4);
      }
      if (iVar13 == 0) {
        bVar15 = false;
      }
      else {
        lVar7 = puVar11[3];
        lVar14 = (longlong)iVar13 * 0xc;
        bVar15 = false;
        do {
          local_a8 = (byte *)0x0;
          plStack_a0 = (longlong *)0x0;
          FUN_14009b010(&local_a8,3,0);
          if ((local_a8 == (byte *)0x0) || (bVar6 = *local_a8, (bVar6 & 3) == 0)) {
            FUN_14009b010(&local_a8,3,0);
            if (local_a8 != (byte *)0x0) {
              bVar6 = *local_a8;
              goto LAB_144338fca;
            }
          }
          else {
LAB_144338fca:
            if ((~bVar6 & 3) == 0) {
              lVar9 = *(longlong *)(local_a8 + 8);
              local_7c = 1;
              local_78 = &DAT_14cbe60c8;
              local_70 = (byte **)&local_7c;
              FUN_14049fede(lVar9 + 0x18,local_64,&local_78,0);
              lVar9 = *(longlong *)
                       (*(longlong *)(lVar9 + 0x18) + 0x28 + (longlong)(int)local_64._0_4_ * 0x40);
              if (lVar9 != 0) {
                FUN_1401269d0(lVar9,lVar7);
              }
            }
          }
          if (*(int *)(lVar7 + 8) != 0) {
            if ((local_a8 != (byte *)0x0) && ((~*local_a8 & 3) == 0)) {
              lVar9 = *(longlong *)(local_a8 + 8);
              local_7c = 1;
              local_78 = &DAT_14cbe60f0;
              local_70 = (byte **)&local_7c;
              FUN_14049fede(lVar9 + 0x18,local_64,&local_78,0);
              lVar9 = *(longlong *)
                       (*(longlong *)(lVar9 + 0x18) + 0x28 + (longlong)(int)local_64._0_4_ * 0x40);
              if (lVar9 != 0) {
                FUN_1406114f4(lVar9,*(undefined4 *)(lVar7 + 8));
              }
            }
            bVar15 = true;
            if (local_98 != (byte *)0x0) {
              local_d8 = 0;
              FUN_140141db6(local_98,&local_a8);
            }
          }
          plVar3 = plStack_a0;
          if (plStack_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_a0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_a0)(plStack_a0);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          lVar7 = lVar7 + 0xc;
          lVar14 = lVar14 + -0xc;
        } while (lVar14 != 0);
      }
      puVar12 = &DAT_14c9a1270;
      if ((local_98 != (byte *)0x0) && (puVar12 = &DAT_14c9a1270, (*local_98 & 2) != 0)) {
        puVar12 = *(undefined8 **)(local_98 + 8);
      }
      if ((*(int *)(puVar12 + 2) != 0) && (local_c8 != (byte *)0x0)) {
        local_d8 = 0;
        FUN_14014191c(local_c8,&DAT_14cbe6168,&local_98);
      }
      plVar3 = plStack_90;
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_90 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      bVar6 = FUN_1418ffdea(puVar11 + 5,&DAT_14cbe6118,&local_c8);
      cVar5 = FUN_1418ffdea(puVar11 + 0x11,&DAT_14cbe6140);
      if (((cVar5 != '\0') || (bVar15 || (bVar6 & 1) != 0)) && (local_b8 != (byte *)0x0)) {
        local_d8 = 0;
        FUN_140141db6(local_b8,&local_c8);
      }
      plVar3 = plStack_c0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      puVar11 = puVar11 + 0x1d;
    } while (puVar11 != local_d0);
  }
  puVar11 = &DAT_14c9a1270;
  if ((local_b8 != (byte *)0x0) && ((*local_b8 & 2) != 0)) {
    puVar11 = *(undefined8 **)(local_b8 + 8);
  }
  if ((*(int *)(puVar11 + 2) != 0) && (*param_5 != 0)) {
    local_d8 = 0;
    puVar11 = (undefined8 *)FUN_14014191c(*param_5,&DAT_14cbe6228,&local_b8,0);
  }
  plVar3 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar11 = (undefined8 *)(**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        puVar11 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  uVar10 = (undefined7)((ulonglong)puVar11 >> 8);
  bVar6 = 1;
  param_1 = 1;
LAB_144338c2a:
  if ((local_64._4_8_ ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar10,bVar6 & param_1);
}



// FUNCTION 1443393a4 FUN_1443393a4 body=297 status=ok
// SIG undefined FUN_1443393a4(void)

void FUN_1443393a4(undefined8 param_1,longlong param_2,char param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != '\0') {
    if ((param_2 != 0) && (DAT_14cbadd90 == 0)) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443394e8 FUN_1443394e8 body=297 status=ok
// SIG undefined FUN_1443394e8(void)

void FUN_1443394e8(undefined8 param_1,longlong param_2,char param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != '\0') {
    if ((param_2 != 0) && (DAT_14cbadd90 == 0)) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14433962c FUN_14433962c body=297 status=ok
// SIG undefined FUN_14433962c(void)

void FUN_14433962c(undefined8 param_1,longlong param_2,char param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != '\0') {
    if ((param_2 != 0) && (DAT_14cbadd90 == 0)) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144339770 FUN_144339770 body=297 status=ok
// SIG undefined FUN_144339770(void)

void FUN_144339770(undefined8 param_1,longlong param_2,char param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != '\0') {
    if ((param_2 != 0) && (DAT_14cbadd90 == 0)) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443398b2 FUN_1443398b2 body=288 status=ok
// SIG undefined FUN_1443398b2(void)

void FUN_1443398b2(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_144339902;
  }
  param_2 = 0;
LAB_144339902:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_148efeb3c(param_1 + 0x18,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443399d4 FUN_1443399d4 body=288 status=ok
// SIG undefined FUN_1443399d4(void)

void FUN_1443399d4(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_144339a24;
  }
  param_2 = 0;
LAB_144339a24:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_148efeb3c(param_1 + 0x48,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144339afa FUN_144339afa body=55 status=ok
// SIG undefined FUN_144339afa(void)

void FUN_144339afa(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong in_R9;
  
  plVar3 = *(longlong **)(in_R9 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000144339b2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144339b32 FUN_144339b32 body=68 status=ok
// SIG undefined FUN_144339b32(void)

undefined8 * FUN_144339b32(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9daed0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144339b7a FUN_144339b7a body=83 status=ok
// SIG undefined FUN_144339b7a(void)

undefined8 FUN_144339b7a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 144339bea FUN_144339bea body=428 status=ok
// SIG undefined FUN_144339bea(void)

ulonglong FUN_144339bea(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  undefined1 auStack_b8 [32];
  undefined2 local_98 [2];
  float local_94;
  char local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined2 local_60 [2];
  float local_5c;
  char local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong lStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar7 = (longlong *)param_1[1];
  if (plVar7 == (longlong *)0x0) {
LAB_144339c26:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar3 = (int)plVar7[1];
    do {
      if (iVar3 == 0) goto LAB_144339c26;
      LOCK();
      iVar2 = (int)plVar7[1];
      bVar10 = iVar3 == iVar2;
      if (bVar10) {
        *(int *)(plVar7 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar10);
  }
  plVar4 = (longlong *)0x0;
  if (plVar7 != (longlong *)0x0) {
    plVar4 = (longlong *)*param_1;
  }
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
LAB_144339c4f:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar3 = (int)plVar8[1];
    do {
      if (iVar3 == 0) goto LAB_144339c4f;
      LOCK();
      iVar2 = (int)plVar8[1];
      bVar10 = iVar3 == iVar2;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar10);
  }
  plVar9 = (longlong *)0x0;
  if (plVar8 != (longlong *)0x0) {
    plVar9 = (longlong *)*param_2;
  }
  local_60[0] = 0;
  local_58 = '\0';
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  lStack_38 = 0;
  local_30 = 0;
  local_98[0] = 0;
  local_90 = '\0';
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4,local_60);
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9,local_98);
  }
  uVar6 = (undefined7)((ulonglong)plVar4 >> 8);
  if ((byte)local_60[0] == (byte)local_98[0]) {
    if (local_58 == '\0') {
      local_5c = 3.4028235e+38;
    }
    fVar11 = 3.4028235e+38;
    if (local_90 != '\0') {
      fVar11 = local_94;
    }
    if ((local_5c != fVar11) || (NAN(local_5c) || NAN(fVar11))) {
      uVar5 = CONCAT71(uVar6,local_5c < fVar11);
    }
    else {
      uVar5 = CONCAT71(uVar6,(int)plVar4[4] < (int)plVar9[4]);
    }
  }
  else {
    uVar5 = CONCAT71(uVar6,(byte)local_60[0] < (byte)local_98[0]);
  }
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  if (lStack_38 != 0) {
    FUN_1400020a8();
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
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
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 144339d98 FUN_144339d98 body=1824 status=ok
// SIG undefined FUN_144339d98(void)

void FUN_144339d98(longlong *param_1,int *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  uint *puVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar22 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_14482b872(param_1,iVar22);
    }
    iVar16 = (int)param_1[5];
    if (iVar16 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar3 = iVar16 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar8 = iVar16 + 1;
    iVar9 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar9 = iVar16;
    }
    if (iVar9 >> 5 == iVar3) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar16) {
        iVar3 = iVar16;
        if (iVar16 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar15 = iVar16 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar4 = 4;
            if (4 < uVar15) {
              uVar4 = uVar15;
            }
          }
          else {
            uVar4 = uVar15 + (uVar15 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar4 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar18 = (uint)(uVar6 + 0xf);
              if (uVar4 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar13 = (ulonglong)(uVar18 & 0xfffffff0);
                if (uVar13 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar18 >> 4];
                  uVar17 = 0x32;
                  if (0x32 < bVar7) {
                    uVar17 = (ulonglong)bVar7;
                  }
                  uVar20 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0) goto LAB_14433a3b3;
                    lVar10 = uVar17 + 1 + uVar20;
                    uVar20 = uVar20 - 1;
                  } while (lVar10 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar13 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar3 = (int)param_1[5];
            }
          }
LAB_14433a3b3:
          iVar5 = (int)(uVar6 >> 2);
          iVar8 = -0x20;
          if ((int)uVar15 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar11,iVar3);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar3 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar3 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar11;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar3 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar10 = (longlong)iVar22;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar16 & 0x1f;
    puVar24 = (uint *)((longlong)plVar11 + (longlong)(iVar9 >> 5) * 4);
    *puVar24 = *puVar24 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar10 = (longlong)iVar22;
    iVar16 = *(int *)(*param_1 + 4 + lVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar16;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar16 * 0x18) = 0xffffffff;
    }
  }
  uVar4 = 1 << ((byte)iVar22 & 0x1f);
  puVar24 = (uint *)(param_1 + 2);
  uVar15 = 1;
  puVar12 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar12 = puVar24;
  }
  iVar16 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar16 = iVar22;
  }
  puVar12[iVar16 >> 5] = puVar12[iVar16 >> 5] | uVar4;
  plVar11 = (longlong *)(*param_1 + lVar10 * 0x18);
  plVar14 = (longlong *)param_3[1];
  lVar10 = *(longlong *)*param_3;
  *plVar11 = lVar10;
  plVar11[1] = *plVar14;
  *(undefined4 *)(plVar11 + 2) = 0xffffffff;
  uVar18 = (uint)((ulonglong)lVar10 >> 0x10);
  uVar23 = (uint)lVar10 & 0xffff;
  uVar18 = ((uint)lVar10 << 0x10 | uVar23) + (int)((ulonglong)lVar10 >> 0x20) +
           (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar23 >> 4);
  uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar23) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & uVar18) * 4);
    if (iVar3 != -1) {
      do {
        plVar14 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        if (*plVar14 == lVar10) {
          lVar10 = plVar11[1];
          *plVar14 = *plVar11;
          plVar14[1] = lVar10;
          lVar10 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar10 + (longlong)(int)param_1[6] * 0x18) = iVar22;
          }
          puVar1 = (undefined4 *)(lVar10 + (longlong)iVar22 * 0x18);
          *puVar1 = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar19 = 0xffffffff;
          }
          else {
            uVar19 = (undefined4)param_1[6];
          }
          puVar1[1] = uVar19;
          *(int *)(param_1 + 6) = iVar22;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          if ((uint *)param_1[4] != (uint *)0x0) {
            puVar24 = (uint *)param_1[4];
          }
          puVar24[iVar16 >> 5] = puVar24[iVar16 >> 5] & ~uVar4;
          iVar22 = iVar3;
          goto LAB_14433a260;
        }
        iVar3 = (int)plVar14[2];
      } while (iVar3 != -1);
    }
  }
  if (3 < uVar23) {
    uVar6 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
    lVar10 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar10 & 0x1f);
  }
  if (((int)uVar23 < 1) || ((int)uVar15 <= (int)param_1[9])) {
    uVar18 = (int)param_1[9] - 1U & uVar18;
    *(uint *)((longlong)plVar11 + 0x14) = uVar18;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 2) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4) =
         iVar22;
    goto LAB_14433a260;
  }
  *(uint *)(param_1 + 9) = uVar15;
  plVar11 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar11,0,0,4);
    uVar15 = *(uint *)(param_1 + 9);
  }
  if (uVar15 == 0) goto LAB_14433a260;
  plVar14 = param_1 + 7;
  if (uVar15 == 1) {
    if (*plVar11 != 0) {
      FUN_1446efa72(plVar11,0,0,4);
    }
LAB_144339fd4:
    uVar4 = 0;
    do {
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar14;
      }
      *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
           0xffffffff;
      uVar4 = uVar4 + 1;
    } while (uVar15 != uVar4);
  }
  else {
    FUN_1446efa72(plVar11,0,uVar15,4);
    if (0 < (int)uVar15) goto LAB_144339fd4;
  }
  iVar16 = (int)param_1[5];
  if (iVar16 == 0) {
    uVar6 = 0;
    uVar13 = 1;
    iVar8 = 0;
    iVar3 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar24;
    }
    uVar15 = *puVar12;
    if (uVar15 == 0) {
      iVar3 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar3 = iVar16 + -1;
      }
      uVar6 = 0;
      uVar13 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar13 = uVar6;
      }
      iVar8 = 0;
      do {
        if (uVar13 == uVar6) goto LAB_14433a260;
        iVar8 = iVar8 + 0x20;
        uVar15 = puVar12[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar6 = 0;
      iVar8 = 0;
    }
    uVar13 = (ulonglong)(-uVar15 & uVar15);
    uVar17 = uVar13 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar3 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar3) {
      iVar3 = iVar16;
    }
  }
  if (iVar3 < iVar16) {
    uVar15 = 0xffffffff;
    do {
      lVar10 = *param_1;
      lVar21 = (longlong)iVar3;
      uVar2 = *(undefined8 *)(lVar10 + lVar21 * 0x18);
      uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar18 = (uint)uVar2 & 0xffff;
      uVar17 = (longlong)
               (int)(((uint)uVar2 << 0x10 | uVar18) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar18 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar16 = (int)uVar17;
      *(int *)(lVar10 + 0x14 + lVar21 * 0x18) = iVar16;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar14;
      }
      *(undefined4 *)(lVar10 + 0x10 + lVar21 * 0x18) =
           *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar17) * 4);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar14;
      }
      *(int *)((longlong)plVar11 + ((longlong)iVar16 & (longlong)(int)param_1[9] - 1U) * 4) = iVar3;
      uVar15 = ~(uint)uVar13 & uVar15;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar24;
      }
      iVar16 = (int)param_1[5];
      iVar3 = (int)uVar6;
      lVar10 = (longlong)iVar3;
      uVar4 = puVar12[lVar10] & uVar15;
      if (uVar4 == 0) {
        iVar9 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar9 = iVar16 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar5 = iVar9;
        if (iVar9 < iVar3) {
          iVar5 = iVar3;
        }
        if (iVar9 <= iVar3) break;
        lVar21 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar4 = puVar12[lVar10 + lVar21 + 1];
          if (uVar4 != 0) break;
          lVar21 = lVar21 + 1;
          if (iVar5 - lVar10 == lVar21) goto LAB_14433a260;
        }
        uVar6 = (ulonglong)(iVar3 + (int)lVar21 + 1);
        uVar15 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar17 = uVar13 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar3 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar16);
  }
LAB_14433a260:
  *param_2 = iVar22;
  return;
}



// FUNCTION 14433a4b8 FUN_14433a4b8 body=29 status=ok
// SIG undefined FUN_14433a4b8(void)

undefined8 FUN_14433a4b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433a654 FUN_14433a654 body=93 status=ok
// SIG undefined FUN_14433a654(void)

void FUN_14433a654(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9db2b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14433a6b2 FUN_14433a6b2 body=93 status=ok
// SIG undefined FUN_14433a6b2(void)

void FUN_14433a6b2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9db2b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14433a710 FUN_14433a710 body=126 status=ok
// SIG undefined FUN_14433a710(void)

void FUN_14433a710(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9db2b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014433a77f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433a798 FUN_14433a798 body=269 status=ok
// SIG undefined FUN_14433a798(void)

undefined8 FUN_14433a798(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14433a89f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14433a89f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14433a89f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14433a853;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1443331f6(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14433a853;
    }
  }
  uVar6 = 0;
LAB_14433a853:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14433a8f8 FUN_14433a8f8 body=305 status=ok
// SIG undefined FUN_14433a8f8(void)

void FUN_14433a8f8(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  lVar7 = (longlong)(int)param_1[1];
  if (lVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    uVar8 = lVar7 + 1;
    lVar7 = lVar7 * 0x10 + -8;
    bVar5 = 0;
    do {
      if ((*(int *)(*param_1 + lVar7) == 0) ||
         (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 == (longlong *)0x0)) {
LAB_14433a96b:
        bVar5 = 1;
      }
      else {
        local_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        cVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_48);
        if (cVar3 == '\0') goto LAB_14433a96b;
      }
      uVar8 = uVar8 - 1;
      lVar7 = lVar7 + -0x10;
    } while (1 < uVar8);
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0x14) = iVar1 + -1;
    if ((bool)(bVar5 & iVar1 < 2)) {
      iVar1 = (int)param_1[1];
      iVar4 = iVar1;
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*param_1 + (longlong)iVar6 * 0x10), plVar2 == (longlong *)0x0
              )) || (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(param_1,iVar6);
            FUN_14005b248(param_1);
          }
          else {
            iVar6 = iVar6 + 1;
          }
          iVar4 = (int)param_1[1];
        } while (iVar6 < iVar4);
      }
      iVar6 = 2;
      if (2 < iVar4 * 2) {
        iVar6 = iVar4 * 2;
      }
      *(int *)(param_1 + 2) = iVar6;
      if ((iVar6 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
        FUN_14045812c(param_1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14433aa2a FUN_14433aa2a body=29 status=ok
// SIG undefined FUN_14433aa2a(void)

undefined8 FUN_14433aa2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433aa5c FUN_14433aa5c body=93 status=ok
// SIG undefined FUN_14433aa5c(void)

void FUN_14433aa5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9db720;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9db6b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14433aaba FUN_14433aaba body=93 status=ok
// SIG undefined FUN_14433aaba(void)

void FUN_14433aaba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9db720;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9db6b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14433ab18 FUN_14433ab18 body=126 status=ok
// SIG undefined FUN_14433ab18(void)

void FUN_14433ab18(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b9db720;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9db6b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014433ab87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433aba0 FUN_14433aba0 body=20 status=ok
// SIG undefined FUN_14433aba0(void)

undefined1 FUN_14433aba0(longlong param_1)

{
  FUN_148ef2186(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14433abb4 FUN_14433abb4 body=130 status=ok
// SIG undefined FUN_14433abb4(void)

undefined4
FUN_14433abb4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_148efc218(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14433ac44 FUN_14433ac44 body=29 status=ok
// SIG undefined FUN_14433ac44(void)

undefined8 FUN_14433ac44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433ac76 FUN_14433ac76 body=91 status=ok
// SIG undefined FUN_14433ac76(void)

void FUN_14433ac76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9db930;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14433acd2 FUN_14433acd2 body=91 status=ok
// SIG undefined FUN_14433acd2(void)

void FUN_14433acd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9db930;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14433ad2e FUN_14433ad2e body=124 status=ok
// SIG undefined FUN_14433ad2e(void)

void FUN_14433ad2e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9db930;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014433ad9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433adaa FUN_14433adaa body=69 status=ok
// SIG undefined FUN_14433adaa(void)

bool FUN_14433adaa(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  
  plVar2 = DAT_14cb0d2b0;
  cVar1 = *(char *)(param_1 + 0x18);
  if (DAT_14cb0d2b0 == (longlong *)0x0) {
    cVar3 = '\0';
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x180))(param_2);
    cVar3 = (**(code **)(*plVar2 + 0x3c0))(plVar2,uVar4);
  }
  return cVar3 == cVar1;
}



// FUNCTION 14433adf0 FUN_14433adf0 body=53 status=ok
// SIG undefined FUN_14433adf0(void)

undefined8 FUN_14433adf0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0x180))(param_2);
    (**(code **)(*plVar1 + 0x3c0))(plVar1,uVar2);
  }
  return 1;
}



// FUNCTION 14433ae26 FUN_14433ae26 body=29 status=ok
// SIG undefined FUN_14433ae26(void)

undefined8 FUN_14433ae26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433ae58 FUN_14433ae58 body=91 status=ok
// SIG undefined FUN_14433ae58(void)

void FUN_14433ae58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9db9a0;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14433aeb4 FUN_14433aeb4 body=91 status=ok
// SIG undefined FUN_14433aeb4(void)

void FUN_14433aeb4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9db9a0;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14433af10 FUN_14433af10 body=124 status=ok
// SIG undefined FUN_14433af10(void)

void FUN_14433af10(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9db9a0;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014433af7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433af96 FUN_14433af96 body=20 status=ok
// SIG undefined FUN_14433af96(void)

undefined1 FUN_14433af96(longlong param_1)

{
  FUN_14433afaa(param_1 + 0x18);
  return 1;
}



// FUNCTION 14433afaa FUN_14433afaa body=358 status=ok
// SIG undefined FUN_14433afaa(void)

undefined8 FUN_14433afaa(byte *param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  bool bVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  plVar1 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb0d2b0 == (longlong *)0x0) {
    bVar2 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_2 + 0x180))(param_2);
    bVar2 = (**(code **)(*plVar1 + 0x3c0))(plVar1,uVar3);
  }
  if ((param_2[0xf] != 0) &&
     (plVar1 = *(longlong **)(param_2[0xf] + 0x80), plVar1 != (longlong *)0x0)) {
    if (DAT_14cb5e538 == 0) {
      local_40 = &local_28;
      local_28 = &LAB_1417c5d06;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1417ad04a;
      local_48 = &LAB_1486a7af7;
      local_50 = &LAB_1464e1631;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
        DAT_14cb5e538 + 0x30)) {
      uVar3 = (**(code **)(*plVar1 + 0x498))(plVar1);
      bVar5 = (char)uVar3 != '\x05';
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      goto LAB_14433b035;
    }
  }
  bVar5 = false;
  uVar4 = 0;
LAB_14433b035:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71(uVar4,*param_1 == (bVar2 & bVar5));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14433b112 FUN_14433b112 body=29 status=ok
// SIG undefined FUN_14433b112(void)

undefined8 FUN_14433b112(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433b144 FUN_14433b144 body=85 status=ok
// SIG undefined FUN_14433b144(void)

void FUN_14433b144(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dba10;
  return;
}



// FUNCTION 14433b19a FUN_14433b19a body=85 status=ok
// SIG undefined FUN_14433b19a(void)

void FUN_14433b19a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b5407d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dba10;
  return;
}



// FUNCTION 14433b1f0 FUN_14433b1f0 body=118 status=ok
// SIG undefined FUN_14433b1f0(void)

void FUN_14433b1f0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b5407d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dba10;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014433b257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433b26c FUN_14433b26c body=16 status=ok
// SIG undefined FUN_14433b26c(void)

undefined1 FUN_14433b26c(void)

{
  FUN_14433b27c();
  return 1;
}



// FUNCTION 14433b27c FUN_14433b27c body=683 status=ok
// SIG undefined FUN_14433b27c(void)

undefined8 FUN_14433b27c(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte extraout_AL;
  undefined4 uVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined7 uVar10;
  undefined7 extraout_var;
  undefined8 uVar9;
  byte bVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 == 0) {
    uVar9 = 0;
    goto LAB_14433b3f2;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_14433b480;
    }
    local_30 = "CommonUI";
    local_28 = 8;
    local_24 = 0;
    uVar4 = FUN_14001a6c0(&local_30,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar7 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar4);
  }
  else {
LAB_14433b480:
    local_30 = "CommonUI";
    local_28 = 8;
    local_24 = 0;
    uVar4 = FUN_14001a6c0(&local_30,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar7 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar4);
  }
  lVar8 = (**(code **)(*plVar7 + 0x50))(plVar7);
  lVar3 = DAT_14cb0d2b0;
  if (DAT_14cb9ad60 == 0) {
LAB_14433b3a9:
    bVar13 = false;
  }
  else {
    if ((longlong)*(int *)(lVar8 + 200) != 0) {
      lVar12 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar8 + 0xc0) + lVar12) == DAT_14cb9ad60) {
          bVar13 = true;
          goto LAB_14433b3af;
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)*(int *)(lVar8 + 200) * 8 != lVar12);
    }
    piVar1 = (int *)(lVar8 + 0xd8);
    if ((longlong)*piVar1 == 0) goto LAB_14433b3a9;
    lVar8 = *(longlong *)(lVar8 + 0xd0);
    lVar12 = 0;
    do {
      bVar13 = *(longlong *)(lVar8 + lVar12) == DAT_14cb9ad60;
      if (bVar13) break;
      bVar14 = (longlong)*piVar1 * 8 + -8 != lVar12;
      lVar12 = lVar12 + 8;
    } while (bVar14);
  }
LAB_14433b3af:
  plVar7 = *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
  if (plVar7 == (longlong *)0x0) {
    lVar8 = FUN_145876474(DAT_14cb0d2b0);
    plVar7 = *(longlong **)(lVar3 + 0x2c8);
  }
  uVar10 = (undefined7)((ulonglong)lVar8 >> 8);
  if ((bVar13 && plVar7 != (longlong *)0x0) && (*(char *)((longlong)plVar7 + 0x10c) == '\x01')) {
    (**(code **)(*plVar7 + 0x330))(plVar7);
    bVar11 = extraout_AL;
    uVar10 = extraout_var;
  }
  else {
    bVar11 = 0;
  }
  uVar9 = CONCAT71(uVar10,plVar7 != (longlong *)0x0 & bVar11);
LAB_14433b3f2:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14433b528 FUN_14433b528 body=29 status=ok
// SIG undefined FUN_14433b528(void)

undefined8 FUN_14433b528(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433b55a FUN_14433b55a body=85 status=ok
// SIG undefined FUN_14433b55a(void)

void FUN_14433b55a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dba80;
  return;
}



// FUNCTION 14433b5b0 FUN_14433b5b0 body=85 status=ok
// SIG undefined FUN_14433b5b0(void)

void FUN_14433b5b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dba80;
  return;
}



// FUNCTION 14433b606 FUN_14433b606 body=118 status=ok
// SIG undefined FUN_14433b606(void)

void FUN_14433b606(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dba80;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014433b66d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433b682 FUN_14433b682 body=16 status=ok
// SIG undefined FUN_14433b682(void)

undefined1 FUN_14433b682(void)

{
  FUN_14433b692();
  return 1;
}



// FUNCTION 14433b692 FUN_14433b692 body=841 status=ok
// SIG undefined FUN_14433b692(void)

void FUN_14433b692(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_38;
  int local_30;
  char *local_28;
  undefined4 local_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar2 != 2)) {
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_14433b916;
    }
    local_28 = "CommonUI";
    local_20 = 8;
    uStack_1c = uStack_1c & 0xffffff00;
    uVar3 = FUN_14001a6c0(&local_28,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar6 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar3);
  }
  else {
LAB_14433b916:
    local_28 = "CommonUI";
    local_20 = 8;
    uStack_1c = uStack_1c & 0xffffff00;
    uVar3 = FUN_14001a6c0(&local_28,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar6 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar3);
  }
  lVar7 = (**(code **)(*plVar6 + 0x50))(plVar6);
  if (DAT_14cb9acd0 != 0) {
    if ((longlong)*(int *)(lVar7 + 200) != 0) {
      lVar9 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xc0) + lVar9) == DAT_14cb9acd0) goto LAB_14433b7ad;
        lVar9 = lVar9 + 8;
      } while ((longlong)*(int *)(lVar7 + 200) * 8 != lVar9);
    }
    if ((longlong)*(int *)(lVar7 + 0xd8) != 0) {
      lVar9 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar7 + 0xd0) + lVar9) == DAT_14cb9acd0) goto LAB_14433b7ad;
        lVar9 = lVar9 + 8;
      } while ((longlong)*(int *)(lVar7 + 0xd8) * 8 != lVar9);
    }
  }
LAB_14433b89a:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14433b7ad:
  uVar8 = FUN_1401cb356();
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_149e02020;
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
  local_38[2] = lVar9;
  *local_38 = &PTR_FUN_14b9dbb20;
  local_48 = 0;
  FUN_1405f67fc(uVar8,&local_28,&local_38,L"RunSyntheticBenchmark");
  plVar6 = (longlong *)CONCAT44(uStack_1c,local_20);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_14433b89a;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_14433b89a;
}



// FUNCTION 14433b9dc FUN_14433b9dc body=29 status=ok
// SIG undefined FUN_14433b9dc(void)

undefined8 FUN_14433b9dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433ba0e FUN_14433ba0e body=85 status=ok
// SIG undefined FUN_14433ba0e(void)

void FUN_14433ba0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbb20;
  return;
}



// FUNCTION 14433ba64 FUN_14433ba64 body=85 status=ok
// SIG undefined FUN_14433ba64(void)

void FUN_14433ba64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbb20;
  return;
}



// FUNCTION 14433baba FUN_14433baba body=118 status=ok
// SIG undefined FUN_14433baba(void)

void FUN_14433baba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dbb20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014433bb21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433bb30 FUN_14433bb30 body=16 status=ok
// SIG undefined FUN_14433bb30(void)

undefined8 FUN_14433bb30(void)

{
  FUN_14433bb50();
  return 0;
}



// FUNCTION 14433bb40 FUN_14433bb40 body=16 status=ok
// SIG undefined FUN_14433bb40(void)

undefined1 FUN_14433bb40(void)

{
  FUN_14433bb50();
  return 1;
}



// FUNCTION 14433bb50 FUN_14433bb50 body=140 status=ok
// SIG undefined FUN_14433bb50(void)

void FUN_14433bb50(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = DAT_14cb0d2b0;
  if ((DAT_14cb0d2b0 != 0) && (DAT_14c872bd8 == '\0')) {
    plVar2 = *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
    if (plVar2 == (longlong *)0x0) {
      FUN_145876474(DAT_14cb0d2b0);
      plVar2 = *(longlong **)(lVar1 + 0x2c8);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
    }
    if ((*(float *)(plVar2 + 0x1c) <= 0.0) || (*(float *)((longlong)plVar2 + 0xe4) <= 0.0)) {
      FUN_148ef4668(plVar2,0);
      (**(code **)(*plVar2 + 0x2a0))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00014433bbbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2e8))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14433bbdc FUN_14433bbdc body=29 status=ok
// SIG undefined FUN_14433bbdc(void)

undefined8 FUN_14433bbdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433bc0e FUN_14433bc0e body=85 status=ok
// SIG undefined FUN_14433bc0e(void)

void FUN_14433bc0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbb90;
  return;
}



// FUNCTION 14433bc64 FUN_14433bc64 body=85 status=ok
// SIG undefined FUN_14433bc64(void)

void FUN_14433bc64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbb90;
  return;
}



// FUNCTION 14433bcba FUN_14433bcba body=118 status=ok
// SIG undefined FUN_14433bcba(void)

void FUN_14433bcba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dbb90;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014433bd21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433bd36 FUN_14433bd36 body=16 status=ok
// SIG undefined FUN_14433bd36(void)

undefined1 FUN_14433bd36(void)

{
  FUN_14433bd46();
  return 1;
}



// FUNCTION 14433bd46 FUN_14433bd46 body=125 status=ok
// SIG undefined FUN_14433bd46(void)

void FUN_14433bd46(void)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    plVar3 = *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
    if (plVar3 == (longlong *)0x0) {
      FUN_145876474(DAT_14cb0d2b0);
      plVar3 = *(longlong **)(lVar2 + 0x2c8);
      if (plVar3 == (longlong *)0x0) {
        return;
      }
    }
    lVar2 = FUN_145a8e1b8();
    iVar1 = *(int *)(lVar2 + 0x38);
    if ((iVar1 <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
      FUN_148ef4668(plVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
                    /* WARNING: Could not recover jumptable at 0x00014433bdaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x2a0))(plVar3,0);
      return;
    }
  }
  return;
}



// FUNCTION 14433bdc4 FUN_14433bdc4 body=31 status=ok
// SIG undefined FUN_14433bdc4(void)

undefined8 FUN_14433bdc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433bde4 FUN_14433bde4 body=29 status=ok
// SIG undefined FUN_14433bde4(void)

undefined8 FUN_14433bde4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433bf80 FUN_14433bf80 body=93 status=ok
// SIG undefined FUN_14433bf80(void)

void FUN_14433bf80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b59d840;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbfa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14433bfde FUN_14433bfde body=93 status=ok
// SIG undefined FUN_14433bfde(void)

void FUN_14433bfde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b59d840;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dbfa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14433c03c FUN_14433c03c body=126 status=ok
// SIG undefined FUN_14433c03c(void)

void FUN_14433c03c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b59d840;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dbfa0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014433c0ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433c0bc FUN_14433c0bc body=352 status=ok
// SIG undefined FUN_14433c0bc(void)

bool FUN_14433c0bc(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14433c1b3;
    }
    bVar6 = false;
    FUN_140192332((uint *)(param_1 + 0x18),&local_30,0);
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar2 = *(uint *)(param_1 + 0x18);
      bVar6 = false;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x1c))) {
          bVar6 = false;
        }
        else {
          bVar6 = (*(uint *)(lVar5 + 8) & 0x10200000) == 0;
        }
      }
    }
    if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    goto LAB_14433c18c;
  }
LAB_14433c1b3:
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    bVar6 = false;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14433c18c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c))) {
      bVar6 = (*(uint *)(lVar5 + 8) & 0x10200000) == 0;
      goto LAB_14433c18c;
    }
  }
  bVar6 = false;
LAB_14433c18c:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 14433c21e FUN_14433c21e body=382 status=ok
// SIG undefined FUN_14433c21e(void)

longlong FUN_14433c21e(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] != 0) && (uVar3 = *param_1, -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc))
      && ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar5 = *plVar6, lVar5 != 0))))
  goto LAB_14433c270;
  if (*(longlong *)(param_1 + 2) == 0) {
    return 0;
  }
  lVar5 = FUN_140007850();
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  if ((lVar5 == 0) || (cVar2 == '\0')) {
    if (lVar5 == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      return 0;
    }
    uVar3 = *(uint *)(lVar5 + 0xc);
LAB_14433c303:
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar8 = uVar3 == 0;
      if (bVar8) {
        *(uint *)(lVar4 + 0x10) = uVar7;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar3 = uVar7;
      }
    }
    param_1[1] = uVar3;
  }
  else {
    uVar3 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) goto LAB_14433c303;
  }
  if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
    return 0;
  }
LAB_14433c270:
  lVar4 = FUN_1405e2bf2();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 14433c39c FUN_14433c39c body=1860 status=ok
// SIG undefined FUN_14433c39c(void)

void FUN_14433c39c(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  uint uVar25;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar20 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar20) {
      FUN_14482b872(param_1,iVar20);
    }
    iVar24 = (int)param_1[5];
    if (iVar24 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar24 + 0x1e;
      if (-1 < iVar24 + -1) {
        iVar11 = iVar24 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar17 = param_1 + 2;
    iVar12 = iVar24 + 1;
    iVar16 = iVar24 + 0x1f;
    if (-1 < iVar24) {
      iVar16 = iVar24;
    }
    if (iVar16 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar24) {
        iVar11 = iVar24;
        if (iVar24 + 0x20U < 0xa0) {
          iVar12 = 0x80;
        }
        else {
          uVar19 = iVar24 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar25 = 4;
            if (4 < uVar19) {
              uVar25 = uVar19;
            }
          }
          else {
            uVar25 = uVar19 + (uVar19 * 3 >> 3) + 0x10;
          }
          uVar15 = (ulonglong)(uVar25 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar6 = (uint)(uVar15 + 0xf);
              if (uVar25 < 0x1ffd) {
                uVar15 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
              }
              else {
                uVar18 = (ulonglong)(uVar6 & 0xfffffff0);
                if (uVar18 < 0x7ff1) {
                  bVar10 = (&DAT_14c841e00)[uVar6 >> 4];
                  uVar21 = 0x32;
                  if (0x32 < bVar10) {
                    uVar21 = (ulonglong)bVar10;
                  }
                  uVar22 = 0x32 - (ulonglong)bVar10;
                  do {
                    uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar22 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar22 & 0xffffffff] & 0xf) == 0) goto LAB_14433c9df;
                    lVar8 = uVar21 + 1 + uVar22;
                    uVar22 = uVar22 - 1;
                  } while (lVar8 != 0x33);
                }
                uVar15 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar15 = (ulonglong)DAT_14c841df8;
                }
                uVar15 = -uVar15 & (uVar18 + uVar15) - 1;
              }
            }
            else {
              uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
              iVar11 = (int)param_1[5];
            }
          }
LAB_14433c9df:
          iVar7 = (int)(uVar15 >> 2);
          iVar12 = -0x20;
          if ((int)uVar19 <= iVar7) {
            iVar12 = iVar7 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar17,iVar11);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar11 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar11 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar17;
        }
        bVar10 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar11 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar24 & 0x1f;
    puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar16 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar20 = (int)param_1[6];
    lVar8 = (longlong)iVar20;
    iVar24 = *(int *)(*param_1 + 4 + lVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar24;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar24 * 0x18) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 2);
  uVar19 = 1 << ((byte)iVar20 & 0x1f);
  puVar9 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar9 = puVar2;
  }
  iVar24 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar24 = iVar20;
  }
  puVar9[iVar24 >> 5] = puVar9[iVar24 >> 5] | uVar19;
  plVar17 = (longlong *)(*param_1 + lVar8 * 0x18);
  plVar14 = (longlong *)param_3[1];
  *plVar17 = *(longlong *)*param_3;
  plVar17[1] = *plVar14;
  *plVar14 = 0;
  *(undefined4 *)(plVar17 + 2) = 0xffffffff;
  lVar8 = *plVar17;
  uVar25 = (uint)((ulonglong)lVar8 >> 0x10);
  uVar6 = (uint)lVar8 & 0xffff;
  uVar25 = ((uint)lVar8 << 0x10 | uVar6) + (int)((ulonglong)lVar8 >> 0x20) +
           (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar6 >> 4);
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & uVar25) * 4);
    if (iVar11 != -1) {
      do {
        plVar14 = (longlong *)(*param_1 + (longlong)iVar11 * 0x18);
        if (*plVar14 == lVar8) {
          if (plVar14[1] != 0) {
            if (DAT_14c872a72 == '\0') {
              FUN_140113f48();
            }
            plVar14[1] = 0;
          }
          uVar13 = *(undefined4 *)((longlong)plVar17 + 4);
          lVar8 = plVar17[1];
          uVar4 = *(undefined4 *)((longlong)plVar17 + 0xc);
          *(int *)plVar14 = (int)*plVar17;
          *(undefined4 *)((longlong)plVar14 + 4) = uVar13;
          *(int *)(plVar14 + 1) = (int)lVar8;
          *(undefined4 *)((longlong)plVar14 + 0xc) = uVar4;
          lVar8 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar8 + (longlong)(int)param_1[6] * 0x18) = iVar20;
          }
          puVar1 = (undefined4 *)(lVar8 + (longlong)iVar20 * 0x18);
          *puVar1 = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar13 = 0xffffffff;
          }
          else {
            uVar13 = (undefined4)param_1[6];
          }
          puVar1[1] = uVar13;
          *(int *)(param_1 + 6) = iVar20;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          puVar9 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar9 = puVar2;
          }
          puVar9[iVar24 >> 5] = puVar9[iVar24 >> 5] & ~uVar19;
          cVar5 = '\x01';
          goto LAB_14433c565;
        }
        iVar11 = (int)plVar14[2];
      } while (iVar11 != -1);
    }
  }
  cVar5 = '\0';
  iVar11 = iVar20;
LAB_14433c565:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar5;
  }
  if (cVar5 != '\0') goto LAB_14433c6e3;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar19 = 1;
  if (3 < uVar6) {
    uVar15 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar6 < 1) || ((int)uVar19 <= (int)param_1[9])) {
    uVar25 = (int)param_1[9] - 1U & uVar25;
    *(uint *)((longlong)plVar17 + 0x14) = uVar25;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(plVar17 + 2) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar25) * 4);
    plVar17 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar17 = param_1 + 7;
    }
    *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar25) * 4) =
         iVar11;
    goto LAB_14433c6e3;
  }
  *(uint *)(param_1 + 9) = uVar19;
  plVar17 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar17,0,0,4);
    uVar19 = *(uint *)(param_1 + 9);
  }
  if (uVar19 == 0) goto LAB_14433c6e3;
  plVar14 = param_1 + 7;
  if (uVar19 == 1) {
    if (*plVar17 != 0) {
      FUN_1446efa72(plVar17,0,0,4);
    }
LAB_14433c5ea:
    uVar25 = 0;
    do {
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = plVar14;
      }
      *(undefined4 *)((longlong)plVar17 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar25) * 4) =
           0xffffffff;
      uVar25 = uVar25 + 1;
    } while (uVar19 != uVar25);
  }
  else {
    FUN_1446efa72(plVar17,0,uVar19,4);
    if (0 < (int)uVar19) goto LAB_14433c5ea;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar15 = 0;
    uVar18 = 1;
    iVar12 = 0;
    iVar24 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar2;
    }
    uVar19 = *puVar9;
    if (uVar19 == 0) {
      iVar24 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar24 = iVar20 + -1;
      }
      uVar15 = 0;
      uVar18 = (ulonglong)(uint)(iVar24 >> 5);
      if (iVar24 >> 5 < 1) {
        uVar18 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar18 == uVar15) goto LAB_14433c6e3;
        iVar12 = iVar12 + 0x20;
        uVar19 = puVar9[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar18 = (ulonglong)(-uVar19 & uVar19);
    uVar21 = uVar18 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar24 = (iVar12 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar24) {
      iVar24 = iVar20;
    }
  }
  if (iVar24 < iVar20) {
    uVar19 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar23 = (longlong)iVar24;
      uVar3 = *(undefined8 *)(lVar8 + lVar23 * 0x18);
      uVar25 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar6 = (uint)uVar3 & 0xffff;
      uVar21 = (longlong)
               (int)(((uint)uVar3 << 0x10 | uVar6) + (int)((ulonglong)uVar3 >> 0x20) +
                     (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar6 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar20 = (int)uVar21;
      *(int *)(lVar8 + 0x14 + lVar23 * 0x18) = iVar20;
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = plVar14;
      }
      *(undefined4 *)(lVar8 + 0x10 + lVar23 * 0x18) =
           *(undefined4 *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = plVar14;
      }
      *(int *)((longlong)plVar17 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar24
      ;
      uVar19 = ~(uint)uVar18 & uVar19;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar2;
      }
      iVar20 = (int)param_1[5];
      iVar24 = (int)uVar15;
      lVar8 = (longlong)iVar24;
      uVar25 = puVar9[lVar8] & uVar19;
      if (uVar25 == 0) {
        iVar16 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar16 = iVar20 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar7 = iVar16;
        if (iVar16 < iVar24) {
          iVar7 = iVar24;
        }
        if (iVar16 <= iVar24) break;
        lVar23 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar25 = puVar9[lVar8 + lVar23 + 1];
          if (uVar25 != 0) break;
          lVar23 = lVar23 + 1;
          if (iVar7 - lVar8 == lVar23) goto LAB_14433c6e3;
        }
        uVar15 = (ulonglong)(iVar24 + (int)lVar23 + 1);
        uVar19 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar25 & uVar25);
      uVar21 = uVar18 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar24 = (iVar12 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar24 < iVar20);
  }
LAB_14433c6e3:
  *param_2 = iVar11;
  return;
}



// FUNCTION 14433cae0 FUN_14433cae0 body=29 status=ok
// SIG undefined FUN_14433cae0(void)

undefined8 FUN_14433cae0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433cc86 FUN_14433cc86 body=101 status=ok
// SIG undefined FUN_14433cc86(void)

void FUN_14433cc86(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dc010;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14433ccec FUN_14433ccec body=101 status=ok
// SIG undefined FUN_14433ccec(void)

void FUN_14433ccec(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9dc010;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14433cd52 FUN_14433cd52 body=134 status=ok
// SIG undefined FUN_14433cd52(void)

void FUN_14433cd52(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dc010;
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
                    /* WARNING: Could not recover jumptable at 0x00014433cdc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433ce34 FUN_14433ce34 body=275 status=ok
// SIG undefined FUN_14433ce34(void)

undefined8 FUN_14433ce34(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14433cf41;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14433cf41;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14433cf41:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14433cef5;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_14433cef5;
    }
  }
  uVar6 = 0;
LAB_14433cef5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14433cf48 FUN_14433cf48 body=29 status=ok
// SIG undefined FUN_14433cf48(void)

undefined8 FUN_14433cf48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433d0ee FUN_14433d0ee body=101 status=ok
// SIG undefined FUN_14433d0ee(void)

void FUN_14433d0ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b1f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dc080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14433d154 FUN_14433d154 body=101 status=ok
// SIG undefined FUN_14433d154(void)

void FUN_14433d154(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b47b1f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dc080;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14433d1ba FUN_14433d1ba body=134 status=ok
// SIG undefined FUN_14433d1ba(void)

void FUN_14433d1ba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b47b1f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dc080;
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
                    /* WARNING: Could not recover jumptable at 0x00014433d231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433d2a2 FUN_14433d2a2 body=295 status=ok
// SIG undefined FUN_14433d2a2(void)

undefined8 FUN_14433d2a2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14433d3c2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14433d3c2;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_14433d3c2:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14433d373;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_14433d373;
    }
  }
  uVar6 = 0;
LAB_14433d373:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14433d3ca FUN_14433d3ca body=256 status=ok
// SIG undefined FUN_14433d3ca(void)

void FUN_14433d3ca(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  lVar7 = (longlong)(int)param_1[1];
  if (lVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    uVar8 = lVar7 + 1;
    lVar7 = lVar7 * 0x10 + -8;
    bVar5 = 0;
    do {
      if (((*(int *)(*param_1 + lVar7) == 0) ||
          (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar3 == '\0')) {
        bVar5 = 1;
      }
      uVar8 = uVar8 - 1;
      lVar7 = lVar7 + -0x10;
    } while (1 < uVar8);
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0x14) = iVar1 + -1;
    if ((bool)(bVar5 & iVar1 < 2)) {
      iVar1 = (int)param_1[1];
      iVar4 = iVar1;
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*param_1 + (longlong)iVar6 * 0x10), plVar2 == (longlong *)0x0
              )) || (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(param_1,iVar6);
            FUN_14005b248(param_1);
          }
          else {
            iVar6 = iVar6 + 1;
          }
          iVar4 = (int)param_1[1];
        } while (iVar6 < iVar4);
      }
      iVar6 = 2;
      if (2 < iVar4 * 2) {
        iVar6 = iVar4 * 2;
      }
      *(int *)(param_1 + 2) = iVar6;
      if ((iVar6 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
        FUN_14045812c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14433d4ca FUN_14433d4ca body=346 status=ok
// SIG undefined FUN_14433d4ca(void)

void FUN_14433d4ca(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14433d55c;
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
LAB_14433d55c:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14433d624 FUN_14433d624 body=308 status=ok
// SIG undefined FUN_14433d624(void)

void FUN_14433d624(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14433d68a;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14433d68a:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 14433d758 FUN_14433d758 body=55 status=ok
// SIG undefined FUN_14433d758(void)

void FUN_14433d758(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14665d394(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 14433d8d0 FUN_14433d8d0 body=29 status=ok
// SIG undefined FUN_14433d8d0(void)

undefined8 FUN_14433d8d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433da76 FUN_14433da76 body=93 status=ok
// SIG undefined FUN_14433da76(void)

void FUN_14433da76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dc2b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14433dad4 FUN_14433dad4 body=93 status=ok
// SIG undefined FUN_14433dad4(void)

void FUN_14433dad4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dc2b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14433db32 FUN_14433db32 body=126 status=ok
// SIG undefined FUN_14433db32(void)

void FUN_14433db32(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b982290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dc2b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014433dba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433dc0e FUN_14433dc0e body=288 status=ok
// SIG undefined FUN_14433dc0e(void)

undefined8 FUN_14433dc0e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14433dd27;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14433dd27;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_14433dd27:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14433dcd8;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3);
      uVar6 = 1;
      goto LAB_14433dcd8;
    }
  }
  uVar6 = 0;
LAB_14433dcd8:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14433dd8a FUN_14433dd8a body=29 status=ok
// SIG undefined FUN_14433dd8a(void)

undefined8 FUN_14433dd8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433df26 FUN_14433df26 body=93 status=ok
// SIG undefined FUN_14433df26(void)

void FUN_14433df26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dc400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14433df84 FUN_14433df84 body=93 status=ok
// SIG undefined FUN_14433df84(void)

void FUN_14433df84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dc400;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14433dfe2 FUN_14433dfe2 body=126 status=ok
// SIG undefined FUN_14433dfe2(void)

void FUN_14433dfe2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dc400;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014433e051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433e060 FUN_14433e060 body=48 status=ok
// SIG undefined FUN_14433e060(void)

void FUN_14433e060(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (((int)plVar1[1] != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*plVar1 + 0x60))();
  }
  FUN_1447cd2ec(plVar1 + 2,0);
  return;
}



// FUNCTION 14433e090 FUN_14433e090 body=295 status=ok
// SIG undefined FUN_14433e090(void)

undefined8 FUN_14433e090(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14433e1b1;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_14433e1b1;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar8 = local_28;
  }
  else {
LAB_14433e1b1:
    lVar8 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14433e165;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      if (((int)plVar3[1] != 0) && ((longlong *)*plVar3 != (longlong *)0x0)) {
        (**(code **)(*(longlong *)*plVar3 + 0x60))();
      }
      FUN_1447cd2ec(plVar3 + 2,0);
      uVar7 = 1;
      goto LAB_14433e165;
    }
  }
  uVar7 = 0;
LAB_14433e165:
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14433e1b8 FUN_14433e1b8 body=29 status=ok
// SIG undefined FUN_14433e1b8(void)

undefined8 FUN_14433e1b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14433e354 FUN_14433e354 body=93 status=ok
// SIG undefined FUN_14433e354(void)

void FUN_14433e354(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dc470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14433e3b2 FUN_14433e3b2 body=93 status=ok
// SIG undefined FUN_14433e3b2(void)

void FUN_14433e3b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dc470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14433e410 FUN_14433e410 body=126 status=ok
// SIG undefined FUN_14433e410(void)

void FUN_14433e410(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dc470;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014433e47f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14433e48e FUN_14433e48e body=49 status=ok
// SIG undefined FUN_14433e48e(void)

void FUN_14433e48e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
  }
  FUN_1447cd2ec(lVar1 + 0x30,0);
  return;
}



// FUNCTION 14433e4c0 FUN_14433e4c0 body=296 status=ok
// SIG undefined FUN_14433e4c0(void)

undefined8 FUN_14433e4c0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14433e5e2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14433e5e2;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar7 = local_28;
  }
  else {
LAB_14433e5e2:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14433e596;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      if ((*(int *)(lVar5 + 0x28) != 0) && (*(longlong **)(lVar5 + 0x20) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(lVar5 + 0x20) + 0x60))();
      }
      FUN_1447cd2ec(lVar5 + 0x30,0);
      uVar6 = 1;
      goto LAB_14433e596;
    }
  }
  uVar6 = 0;
LAB_14433e596:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14433e5e9 FUN_14433e5e9 body=12695 status=ok
// SIG undefined FUN_14433e5e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14433e5e9(void)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = "AssetRegistry";
  local_78 = (undefined4 *)CONCAT35(local_78._5_3_,0xd);
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5050 = (ulonglong)uVar4;
  _DAT_14cbe5058 = 0x47efffffe0000000;
  _DAT_14cbe5060 = 0x47efffffe0000000;
  _DAT_14cbe5068 = 0x47efffffe0000000;
  _DAT_14cbe5070 = 0x47efffffe0000000;
  _DAT_14cbe5078 = 0x47efffffe0000000;
  _DAT_14cbe5080 = 0x47efffffe0000000;
  _DAT_14cbe5088 = 0x47efffffe0000000;
  _DAT_14cbe5090 = 0x47efffffe0000000;
  _DAT_14cbe50a0 = &LAB_144330268;
  _DAT_14cbe50a8 = 0x439c8000;
  DAT_14cbe50ac = 1;
  DAT_14cbe5098 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe5098;
  atexit((_func_5014 *)&LAB_14433026d);
  _DAT_14cbe50c0 = &LAB_1443302a1;
  _DAT_14cbe50c8 = 0x44572000;
  DAT_14cbe50cc = 1;
  DAT_14cbe50b8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe50b8;
  atexit((_func_5014 *)&LAB_1443302a6);
  FUN_1400b22c2(&local_80,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar3 = FUN_140b10a34(&local_80,&DAT_14cbe50d8);
  if (cVar3 == '\0') {
    _DAT_14cbe50d8 = 0;
    uRam000000014cbe50e0 = 0;
  }
  if (local_80 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_80 = &DAT_14b6040ec;
  local_78._0_5_ = 4;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe50e8 = (ulonglong)uVar4;
  FUN_1400b22c2(&DAT_14cbe50f0,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1443302da);
  local_80 = &DAT_14a19662d;
  local_78._0_5_ = 4;
  FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5104 = 0;
  FUN_14052b5e0(&DAT_14cbe5100,"PlayerAwareness",0);
  _DAT_14cbe5110 = "PlayerAwareness";
  local_80 = "basic";
  local_78._0_5_ = 5;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5118 = (ulonglong)uVar4;
  local_80 = "challenge";
  local_78._0_5_ = 9;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5120 = (ulonglong)uVar4;
  local_80 = "online";
  local_78._0_5_ = 6;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5128 = (ulonglong)uVar4;
  local_80 = "social";
  local_78._0_5_ = 6;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5130 = (ulonglong)uVar4;
  local_80 = "alert";
  local_78._0_5_ = 5;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5138 = (ulonglong)uVar4;
  local_80 = "photo_mode";
  local_78._0_5_ = 10;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5140 = (ulonglong)uVar4;
  local_80 = "generic_task";
  local_78._0_5_ = 0xc;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5148 = (ulonglong)uVar4;
  local_80 = "mission";
  local_78._0_5_ = 7;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5150 = (ulonglong)uVar4;
  local_80 = &DAT_14b604134;
  local_78._0_5_ = 4;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5158 = (ulonglong)uVar4;
  local_80 = "respawn";
  local_78._0_5_ = 7;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5160 = (ulonglong)uVar4;
  local_80 = "tutorial";
  local_78._0_5_ = 8;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5168 = (ulonglong)uVar4;
  local_80 = "special_notification";
  local_78._0_5_ = 0x14;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5170 = (ulonglong)uVar4;
  local_80 = "generic_notification";
  local_78._0_5_ = 0x14;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5178 = (ulonglong)uVar4;
  local_80 = "vault_card";
  local_78._0_5_ = 10;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5180 = (ulonglong)uVar4;
  local_80 = "ONLINE_MESSAGE";
  local_78._0_5_ = 0xe;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5188 = (ulonglong)uVar4;
  local_80 = "INGAME_MESSAGE";
  local_78._0_5_ = 0xe;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5190 = (ulonglong)uVar4;
  local_80 = "NOTIFICATION_MESSAGE";
  local_78._0_5_ = 0x14;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5198 = (ulonglong)uVar4;
  local_80 = "MENU_TUTORIAL_MESSAGE";
  local_78._0_5_ = 0x15;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe51a0 = (ulonglong)uVar4;
  local_80 = "collectible";
  local_78._0_5_ = 0xb;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe51a8 = (ulonglong)uVar4;
  FUN_1446f470e(&DAT_14cbe51b0,L"UNSET",1);
  local_80 = &DAT_14b3f27c8;
  local_78._0_5_ = 4;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe51b8 = (ulonglong)uVar4;
  local_80 = "update";
  local_78._0_5_ = 6;
  FUN_14001a6c0(&local_80,1);
  local_80 = "config_update";
  local_78._0_5_ = 0xd;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe51c0 = (ulonglong)uVar4;
  local_80 = "deinit";
  local_78._0_5_ = 6;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe51c8 = (ulonglong)uVar4;
  FUN_1446f470e(&DAT_14cbe51d0,L"Party",1);
  FUN_1446f470e(&DAT_14cbe51d8,&DAT_149e063b2);
  _DAT_14cbe5260 = 0;
  FUN_14052b5e0(&DAT_14cbe525c,"character");
  _DAT_14cbe526c = 0;
  FUN_14052b5e0(&DAT_14cbe5268,"profile");
  ram0x00014cbe527c = 0;
  FUN_14052b5e0(&DAT_14cbe5278,&DAT_14b81bd00);
  _DAT_14cbe5288 = &DAT_14b81bd00;
  _DAT_14cbe5290 = 0;
  uRam000000014cbe5298 = 0;
  _DAT_14cbe52a0 = 0;
  DAT_14cbe52a8 = 0;
  uRam000000014cbe52b0 = 0;
  FUN_1446ddda2(&DAT_14cbe5290,"oak.ui.pips.character");
  atexit((_func_5014 *)&LAB_144330f83);
  ram0x00014cbe52bc = 0;
  FUN_14052b5e0(&DAT_14cbe52b8,&DAT_14b81bd00,0);
  _DAT_14cbe52c8 = &DAT_14b81bd00;
  _DAT_14cbe52d0 = 0;
  uRam000000014cbe52d8 = 0;
  _DAT_14cbe52e0 = 0;
  DAT_14cbe52e8 = 0;
  uRam000000014cbe52f0 = 0;
  FUN_1446ddda2(&DAT_14cbe52d0,"oak.ui.pips.profile",0);
  atexit((_func_5014 *)&LAB_144330f94);
  ram0x00014cbe52fc = 0;
  FUN_14052b5e0(&DAT_14cbe52f8,"deep_freeze_pips");
  _DAT_14cbe5308 = "deep_freeze_pips";
  _DAT_14cbe5310 = 0;
  uRam000000014cbe5318 = 0;
  _DAT_14cbe5320 = 0;
  DAT_14cbe5328 = 0;
  uRam000000014cbe5330 = 0;
  FUN_1446ddda2(&DAT_14cbe5310,"oak.ui.pips.deep_freeze",0);
  atexit((_func_5014 *)&LAB_144330fa5);
  ram0x00014cbe533c = 0;
  FUN_14052b5e0(&DAT_14cbe5338,"ui_screen_data");
  _DAT_14cbe5348 = "ui_screen_data";
  _DAT_14cbe5350 = 0;
  uRam000000014cbe5358 = 0;
  _DAT_14cbe5360 = 0;
  DAT_14cbe5368 = 0;
  uRam000000014cbe5370 = 0;
  FUN_1446ddda2(&DAT_14cbe5350,"oak.ui_screen_data",0);
  atexit((_func_5014 *)&LAB_144330fb6);
  local_80 = &DAT_14b4871e8;
  local_78._0_5_ = 3;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5378 = (ulonglong)uVar4;
  local_80 = "Sight";
  local_78._0_5_ = 5;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5380 = (ulonglong)uVar4;
  local_80 = "TargetLock";
  local_78._0_5_ = 10;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5388 = (ulonglong)uVar4;
  FUN_140056680(&DAT_14cbe5390,L"GoreStump_");
  atexit((_func_5014 *)&LAB_144330fc7);
  FUN_140056680(&DAT_14cbe53a0,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_144330fd8);
  FUN_140056680(&DAT_14cbe53b0,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_144330fe9);
  FUN_140056680(&DAT_14cbe53c0,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144330ffa);
  FUN_1446f470e(&DAT_14cbe53d0,L"LIMB_GORED",1);
  _DAT_14cbe53d8 = 0x4072c00000000000;
  _DAT_14cbe53e0 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbe53e8,L"body",1);
  FUN_1446f470e(&DAT_14cbe53f0,L"title_card");
  _DAT_14cbe5400 = &LAB_144332d44;
  _DAT_14cbe5408 = 0x46273000;
  DAT_14cbe540c = 1;
  DAT_14cbe53f8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe53f8;
  atexit((_func_5014 *)&LAB_144332d49);
  ram0x00014cbe541c = 0;
  FUN_14052b5e0(&DAT_14cbe5418,&DAT_14b9d8d88);
  _DAT_14cbe5428 = &DAT_14b9d8d88;
  _DAT_14cbe5430 = 0;
  uRam000000014cbe5438 = 0;
  _DAT_14cbe5440 = 0;
  DAT_14cbe5448 = 0;
  uRam000000014cbe5450 = 0;
  FUN_1446ddda2(&DAT_14cbe5430,"oak.ui.sort_and_filter",0);
  atexit((_func_5014 *)&LAB_144332d7d);
  local_80 = "sort_and_filter";
  local_78._0_5_ = 0xf;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5458 = (ulonglong)uVar4;
  _DAT_14cbe5468 = &LAB_144332d8e;
  _DAT_14cbe5470 = 0x46273400;
  DAT_14cbe5474 = 1;
  DAT_14cbe5460 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe5460;
  atexit((_func_5014 *)&LAB_144332d93);
  FUN_140056680(&DAT_14cbe5480,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_14433315a);
  local_80 = "Standard";
  local_78._0_5_ = 8;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5490 = (ulonglong)uVar4;
  local_80 = "PrologueSkip";
  local_78._0_5_ = 0xc;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5498 = (ulonglong)uVar4;
  local_80 = "UltimateVaultHunterSkip";
  local_78._0_5_ = 0x17;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe54a0 = (ulonglong)uVar4;
  local_80 = "SkipToDLC_Cowbell";
  local_78._0_5_ = 0x11;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe54a8 = (ulonglong)uVar4;
  local_80 = "SkipToDLC_Harmonica";
  local_78._0_5_ = 0x13;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe54b0 = (ulonglong)uVar4;
  local_80 = (char *)((ulonglong)local_80 & 0xffffffffffffff00);
  local_b8._0_4_ = 1;
  FUN_140bd5914(&DAT_14cbe54b8,L"OakUI.StatusMenu.DontPauseGameEver",&local_80,
                L"If true, dont pause the game in any menus.");
  atexit(FUN_14433316b);
  local_80 = (char *)((ulonglong)local_80 & 0xffffffffffffff00);
  local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,1);
  FUN_140bd5914(&DAT_14cbe54d0,L"OakUI.StatusMenu.WaitForScreenParticlesToLoad",&local_80,
                L"If true, force screen particles to perform synchronous loads.");
  atexit(FUN_1443331b0);
  DAT_14cbe54e8._4_4_ = 0;
  DAT_14cbe54f0 = 0;
  FUN_14052b5e0(&DAT_14cbe54e8,"last_visited_status_menu_id");
  DAT_14cbe54f8._4_4_ = 0;
  DAT_14cbe5500 = 0;
  FUN_14052b5e0(&DAT_14cbe54f8,&DAT_14b9d8d88);
  _DAT_14cbe5508 = &DAT_14b9d8d88;
  _DAT_14cbe5510 = 0;
  uRam000000014cbe5518 = 0;
  _DAT_14cbe5520 = 0;
  DAT_14cbe5528 = 0;
  uRam000000014cbe5530 = 0;
  FUN_1446ddda2(&DAT_14cbe5510,"oak.ui.subtitles");
  atexit((_func_5014 *)&LAB_144333540);
  local_80 = "subtitles";
  local_78._0_5_ = 9;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5538 = (ulonglong)uVar4;
  _DAT_14cbe5544 = 0;
  _DAT_14cbe5548 = 0;
  FUN_14052b5e0(&DAT_14cbe5540,"profile");
  _DAT_14cbe5550 = 0;
  _DAT_14cbe5554 = 0;
  FUN_14052b5e0(&DAT_14cbe554c,"input");
  _DAT_14cbe555c = 0;
  _DAT_14cbe5560 = 0;
  FUN_14052b5e0(&DAT_14cbe5558,"cursor");
  _DAT_14cbe5568 = 0;
  _DAT_14cbe556c = 0;
  FUN_14052b5e0(&DAT_14cbe5564,"invert_x_axis");
  _DAT_14cbe5574 = 0;
  _DAT_14cbe5578 = 0;
  FUN_14052b5e0(&DAT_14cbe5570,"invert_y_axis");
  _DAT_14cbe5580 = 0;
  _DAT_14cbe5584 = 0;
  FUN_14052b5e0(&DAT_14cbe557c,"sensitivity");
  _DAT_14cbe558c = 0;
  _DAT_14cbe5590 = 0;
  FUN_14052b5e0(&DAT_14cbe5588,"friction_default");
  _DAT_14cbe5598 = 0;
  _DAT_14cbe559c = 0;
  FUN_14052b5e0(&DAT_14cbe5594,"pc_scroll_sensitivity");
  _DAT_14cbe55a4 = 0;
  _DAT_14cbe55a8 = 0;
  FUN_14052b5e0(&DAT_14cbe55a0,"max_idle_time");
  _DAT_14cbe55b0 = 0;
  _DAT_14cbe55b4 = 0;
  FUN_14052b5e0(&DAT_14cbe55ac,"show_idle_flash");
  DAT_14cbe55b8._4_4_ = 0;
  DAT_14cbe55c0 = 0;
  FUN_14052b5e0(&DAT_14cbe55b8,&DAT_14b9d8d88);
  _DAT_14cbe55c8 = &DAT_14b9d8d88;
  _DAT_14cbe55d0 = 0;
  uRam000000014cbe55d8 = 0;
  _DAT_14cbe55e0 = 0;
  DAT_14cbe55e8 = 0;
  uRam000000014cbe55f0 = 0;
  FUN_1446ddda2(&DAT_14cbe55d0,"oak.ui.tutorials");
  atexit((_func_5014 *)&LAB_144333551);
  local_80 = "tutorials";
  local_78._0_5_ = 9;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe55f8 = (ulonglong)uVar4;
  DAT_14cbe5600._4_4_ = 0;
  DAT_14cbe5608 = 0;
  FUN_14052b5e0(&DAT_14cbe5600,&DAT_14b9d8d88);
  _DAT_14cbe5610 = &DAT_14b9d8d88;
  _DAT_14cbe5618 = 0;
  uRam000000014cbe5620 = 0;
  _DAT_14cbe5628 = 0;
  DAT_14cbe5630 = 0;
  uRam000000014cbe5638 = 0;
  FUN_1446ddda2(&DAT_14cbe5618,"oak.ui.user_preferences");
  atexit((_func_5014 *)&LAB_144333562);
  local_80 = "user_preferences";
  local_78._0_5_ = 0x10;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5640 = (ulonglong)uVar4;
  FUN_1400b22c2(&DAT_14cbe5648,"hover");
  atexit((_func_5014 *)&LAB_144333573);
  FUN_1400b22c2(&DAT_14cbe5658,"press");
  atexit((_func_5014 *)&LAB_144333584);
  FUN_1400b22c2(&DAT_14cbe5668,"popup");
  atexit((_func_5014 *)&LAB_144333595);
  FUN_1400b22c2(&DAT_14cbe5678,"scroll");
  atexit((_func_5014 *)&LAB_1443335a6);
  FUN_1400b22c2(&DAT_14cbe5688,"invisible");
  atexit((_func_5014 *)&LAB_1443335b7);
  FUN_1400b22c2(&DAT_14cbe5698,&DAT_14b82978f);
  atexit((_func_5014 *)&LAB_1443335c8);
  FUN_1400b22c2(&DAT_14cbe56a8,"idle_flash");
  atexit((_func_5014 *)&LAB_1443335d9);
  FUN_1400b22c2(&DAT_14cbe56b8,&DAT_149e62dd2);
  atexit((_func_5014 *)&LAB_1443335ea);
  FUN_1400b22c2(&DAT_14cbe56c8,"GBX-BUTTON");
  atexit((_func_5014 *)&LAB_1443335fb);
  FUN_1400b22c2(&DAT_14cbe56d8,"GBX-DROPDOWN");
  atexit((_func_5014 *)&LAB_14433360c);
  FUN_1400b22c2(&DAT_14cbe56e8,"GBX-SLIDER");
  atexit((_func_5014 *)&LAB_14433361d);
  FUN_1400b22c2(&DAT_14cbe56f8,"GBX-TEXT-INPUT");
  atexit((_func_5014 *)&LAB_14433362e);
  local_80 = "UpscalingMethod";
  local_78._0_5_ = 0xf;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5708 = (ulonglong)uVar4;
  local_80 = "FrameGeneration";
  local_78._0_5_ = 0xf;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5710 = (ulonglong)uVar4;
  local_80 = "Upscaling";
  local_78._0_5_ = 9;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5718 = (ulonglong)uVar4;
  local_80 = "AntiAliasingMethod";
  local_78._0_5_ = 0x12;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5720 = (ulonglong)uVar4;
  local_80 = "WindowsTextureLODGroups";
  local_78._0_5_ = 0x17;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5728 = (ulonglong)uVar4;
  local_80 = "Textures";
  local_78._0_5_ = 8;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5730 = (ulonglong)uVar4;
  DAT_14cbe5738._4_4_ = 0;
  DAT_14cbe5740 = 0;
  FUN_14052b5e0(&DAT_14cbe5738,"safe_area");
  DAT_14cbe5744._4_4_ = 0;
  DAT_14cbe574c = 0;
  FUN_14052b5e0(&DAT_14cbe5744,"horizontal_ratio");
  DAT_14cbe5750._4_4_ = 0;
  DAT_14cbe5758 = 0;
  FUN_14052b5e0(&DAT_14cbe5750,"vertical_ratio");
  DAT_14cbe575c._4_4_ = 0;
  DAT_14cbe5764 = 0;
  FUN_14052b5e0(&DAT_14cbe575c,"font_scaling");
  DAT_14cbe5768._4_4_ = 0;
  DAT_14cbe5770 = 0;
  FUN_14052b5e0(&DAT_14cbe5768,&DAT_14b9cd974);
  DAT_14cbe5774._4_4_ = 0;
  DAT_14cbe577c = 0;
  FUN_14052b5e0(&DAT_14cbe5774,&DAT_14b9d935a);
  DAT_14cbe5780._4_4_ = 0;
  DAT_14cbe5788 = 0;
  FUN_14052b5e0(&DAT_14cbe5780,"color_blind_mode");
  DAT_14cbe578c._4_4_ = 0;
  DAT_14cbe5794 = 0;
  FUN_14052b5e0(&DAT_14cbe578c,"high_contrast_mode");
  DAT_14cbe5798._4_4_ = 0;
  DAT_14cbe57a0 = 0;
  FUN_14052b5e0(&DAT_14cbe5798,&DAT_14b9d935a);
  DAT_14cbe57a4._4_4_ = 0;
  DAT_14cbe57ac = 0;
  FUN_14052b5e0(&DAT_14cbe57a4,"crosshair");
  local_80 = "state_rem";
  local_78._0_5_ = 9;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe57b0 = (ulonglong)uVar4;
  local_80 = "state_add";
  local_78._0_5_ = 9;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe57b8 = (ulonglong)uVar4;
  local_80 = "state_remove_primary";
  local_78._0_5_ = 0x14;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe57c0 = (ulonglong)uVar4;
  local_80 = "entry_sets";
  local_78._0_5_ = 10;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe57c8 = (ulonglong)uVar4;
  local_80 = "entries";
  local_78._0_5_ = 7;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe57d0 = (ulonglong)uVar4;
  local_80 = "menu_title";
  local_78._0_5_ = 10;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe57d8 = (ulonglong)uVar4;
  local_80 = "actions";
  local_78._0_5_ = 7;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe57e0 = (ulonglong)uVar4;
  local_80 = "loc_text";
  local_78._0_5_ = 8;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe57e8 = (ulonglong)uVar4;
  local_80 = "desc_text";
  local_78._0_5_ = 9;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe57f0 = (ulonglong)uVar4;
  local_80 = "style";
  local_78._0_5_ = 5;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe57f8 = (ulonglong)uVar4;
  local_80 = "horizontal";
  local_78._0_5_ = 10;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5800 = (ulonglong)uVar4;
  local_80 = "entry_set_default";
  local_78._0_5_ = 0x11;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5808 = (ulonglong)uVar4;
  local_80 = "required_nexus_layer";
  local_78._0_5_ = 0x14;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5810 = (ulonglong)uVar4;
  local_80 = "tooltip_key";
  local_78._0_5_ = 0xb;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5818 = (ulonglong)uVar4;
  local_80 = "set_push";
  local_78._0_5_ = 8;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5820 = (ulonglong)uVar4;
  local_80 = "exit_game";
  local_78._0_5_ = 9;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5828 = (ulonglong)uVar4;
  local_80 = &DAT_14b473723;
  local_78._0_5_ = 4;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5830 = (ulonglong)uVar4;
  local_80 = "back_actions";
  local_78 = (undefined4 *)CONCAT35(local_78._5_3_,0xc);
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5838 = (ulonglong)uVar4;
  _DAT_14cbe5848 = 0;
  _DAT_14cbe5850 = FUN_145c41e72;
  _DAT_14cbe5858 = "dialog_box";
  _DAT_14cbe5840 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbe5840;
  atexit((_func_5014 *)&LAB_14433377b);
  FUN_140056680(&DAT_14cbe5860,L"region_dropdown");
  atexit((_func_5014 *)&LAB_144333787);
  FUN_140056680(&DAT_14cbe5870,L"country_dropdown");
  atexit((_func_5014 *)&LAB_144333798);
  FUN_140056680(&DAT_14cbe5880,L"ElementClicked");
  atexit((_func_5014 *)&LAB_1443337a9);
  FUN_140056680(&DAT_14cbe5890,L"EscapeInput");
  atexit((_func_5014 *)&LAB_1443337ba);
  FUN_140056680(&DAT_14cbe58a0,L"month_text_input");
  atexit((_func_5014 *)&LAB_1443337cb);
  FUN_140056680(&DAT_14cbe58b0,L"day_text_input");
  atexit((_func_5014 *)&LAB_1443337dc);
  FUN_140056680(&DAT_14cbe58c0,L"year_text_input");
  atexit((_func_5014 *)&LAB_1443337ed);
  local_70 = L"date_invalid";
  _DAT_14cbe58d0 = 0;
  uRam000000014cbe58d8 = 0;
  _DAT_14cbe58e0 = 0;
  DAT_14cbe58e8 = 0;
  uRam000000014cbe58f0 = 0;
  local_80 = (char *)&local_70;
  local_78 = local_68;
  FUN_14584f768(&DAT_14cbe58d0,&local_80,0);
  atexit((_func_5014 *)&LAB_1443337fe);
  local_70 = L"TemplateDateMonthText";
  _DAT_14cbe58f8 = 0;
  uRam000000014cbe5900 = 0;
  _DAT_14cbe5908 = 0;
  DAT_14cbe5910 = 0;
  uRam000000014cbe5918 = 0;
  local_80 = (char *)&local_70;
  local_78 = local_68;
  FUN_14584f768(&DAT_14cbe58f8,&local_80,0);
  atexit((_func_5014 *)&LAB_14433380f);
  local_70 = L"TemplateDateDayText";
  _DAT_14cbe5920 = 0;
  uRam000000014cbe5928 = 0;
  _DAT_14cbe5930 = 0;
  DAT_14cbe5938 = 0;
  uRam000000014cbe5940 = 0;
  local_80 = (char *)&local_70;
  local_78 = local_68;
  FUN_14584f768(&DAT_14cbe5920,&local_80,0);
  atexit((_func_5014 *)&LAB_144333820);
  local_70 = L"TemplateDateYearText";
  _DAT_14cbe5948 = 0;
  uRam000000014cbe5950 = 0;
  _DAT_14cbe5958 = 0;
  DAT_14cbe5960 = 0;
  uRam000000014cbe5968 = 0;
  local_80 = (char *)&local_70;
  local_78 = local_68;
  FUN_14584f768(&DAT_14cbe5948,&local_80,0);
  atexit((_func_5014 *)&LAB_144333831);
  FUN_1446f470e(&DAT_14cbe5970,L"focus",1);
  FUN_1446f470e(&DAT_14cbe5978,L"confirm");
  FUN_140056680(&DAT_14cbe5980,L"available");
  atexit((_func_5014 *)&LAB_144333bd4);
  FUN_140056680(&DAT_14cbe5990,L"synced");
  atexit((_func_5014 *)&LAB_144333be5);
  FUN_140056680(&DAT_14cbe59a0,L"offline");
  atexit((_func_5014 *)&LAB_144333bf6);
  FUN_140056680(&DAT_14cbe59b0,L"incompatible");
  atexit((_func_5014 *)&LAB_144333c07);
  FUN_140056680(&DAT_14cbe59c0,L"conflict");
  atexit((_func_5014 *)&LAB_144333c18);
  _DAT_14cbe59d0 = 0;
  uRam000000014cbe59d8 = 0;
  _DAT_14cbe59e0 = 0;
  DAT_14cbe59e8 = 0;
  uRam000000014cbe59f0 = 0;
  FUN_1446ddda2(&DAT_14cbe59d0,"MainMenuVersionText",0);
  atexit((_func_5014 *)&LAB_144333c29);
  _DAT_14cbe59f8 = 0;
  uRam000000014cbe5a00 = 0;
  _DAT_14cbe5a08 = 0;
  DAT_14cbe5a10 = 0;
  uRam000000014cbe5a18 = 0;
  FUN_1446ddda2(&DAT_14cbe59f8,"MainMenuVersionUpdateReadyText",0);
  atexit((_func_5014 *)&LAB_144333c3a);
  local_80 = "state_remove_primary";
  local_78._0_5_ = 0x14;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5a20 = (ulonglong)uVar4;
  local_80 = "state_add_primary";
  local_78._0_5_ = 0x11;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5a28 = (ulonglong)uVar4;
  local_80 = "state_add";
  local_78._0_5_ = 9;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5a30 = (ulonglong)uVar4;
  local_80 = "state_rem";
  local_78._0_5_ = 9;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5a38 = (ulonglong)uVar4;
  local_80 = "set_menu_state";
  local_78._0_5_ = 0xe;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5a40 = (ulonglong)uVar4;
  local_80 = "set_active_options";
  local_78._0_5_ = 0x12;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5a48 = (ulonglong)uVar4;
  _DAT_14cbe5a58 = 0;
  _DAT_14cbe5a60 = FUN_14665bcb0;
  _DAT_14cbe5a68 = "menu_lan";
  _DAT_14cbe5a50 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbe5a50;
  atexit((_func_5014 *)&LAB_144333c4b);
  local_80 = "toast_message";
  local_78._0_5_ = 0xd;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5a88 = (ulonglong)uVar4;
  local_80 = "toast_error";
  local_78._0_5_ = 0xb;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5a90 = (ulonglong)uVar4;
  _DAT_14cbe5aa0 = 0;
  _DAT_14cbe5aa8 = FUN_14665bf58;
  _DAT_14cbe5ab0 = "oak_menu_base";
  _DAT_14cbe5a98 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbe5a98;
  atexit((_func_5014 *)&LAB_144333c6b);
  _DAT_14cbe5ac0 = 0;
  _DAT_14cbe5ac8 = FUN_145cd63f0;
  _DAT_14cbe5ad0 = "menu_tutorial_message";
  _DAT_14cbe5ab8 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbe5ab8;
  atexit((_func_5014 *)&LAB_144333c77);
  FUN_1400b22c2(&DAT_14cbe5ad8,"SkipPrompt");
  atexit((_func_5014 *)&LAB_144333c83);
  FUN_1400b22c2(&DAT_14cbe5ae8,"ContinuePrompt");
  atexit((_func_5014 *)&LAB_144333c94);
  FUN_1400b22c2(&DAT_14cbe5af8,"CompletePrompt");
  atexit((_func_5014 *)&LAB_144333ca5);
  local_80 = "context_ui_menu_tutorial";
  local_78._0_5_ = 0x18;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5b08 = (ulonglong)uVar4;
  local_80 = "context_ui_menu_tutorial_catchall";
  local_78._0_5_ = 0x21;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5b10 = (ulonglong)uVar4;
  local_80 = "action_ui_menu_tutorial_catchall";
  local_78._0_5_ = 0x20;
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe5b18 = (ulonglong)uVar4;
  FUN_1400b22c2(&DAT_14cbe5b20,"tint_siren");
  atexit((_func_5014 *)&LAB_1443345c5);
  FUN_1400b22c2(&DAT_14cbe5b30,"tint_health");
  atexit((_func_5014 *)&LAB_1443345d6);
  FUN_1400b22c2(&DAT_14cbe5b40,"UseRepairKit");
  atexit((_func_5014 *)&LAB_1443345e7);
  FUN_1400b22c2(&DAT_14cbe5b50,"FailToUseRepairKit");
  atexit((_func_5014 *)&LAB_1443345f8);
  FUN_1400b22c2(&DAT_14cbe5b60,"StartReadyCountdownRepairKit");
  atexit((_func_5014 *)&LAB_144334609);
  FUN_1400b22c2(&DAT_14cbe5b70,"TickReadyCountdownOneRepairKit");
  atexit((_func_5014 *)&LAB_14433461a);
  FUN_1400b22c2(&DAT_14cbe5b80,"TickReadyCountdownTwoRepairKit");
  atexit((_func_5014 *)&LAB_14433462b);
  FUN_1400b22c2(&DAT_14cbe5b90,"TickReadyCountdownThreeRepairKit");
  atexit((_func_5014 *)&LAB_14433463c);
  FUN_1400b22c2(&DAT_14cbe5ba0,"ReadyToUseRepairKit");
  atexit((_func_5014 *)&LAB_14433464d);
  FUN_1400b22c2(&DAT_14cbe5bb0,"GainChargeRepairKit");
  atexit((_func_5014 *)&LAB_14433465e);
  _DAT_14cbe5bc8 = 0;
  _DAT_14cbe5bd0 = FUN_14665c07c;
  _DAT_14cbe5bd8 = "repairkit";
  _DAT_14cbe5bc0 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbe5bc0;
  atexit((_func_5014 *)&LAB_14433466f);
  _DAT_14cbe5be8 = 0;
  _DAT_14cbe5bf0 = FUN_14665c148;
  _DAT_14cbe5bf8 = "menu_cursor_playground";
  _DAT_14cbe5be0 = DAT_14cb92a30;
  DAT_14cb92a30 = &DAT_14cbe5be0;
  atexit((_func_5014 *)&LAB_14433467b);
  DAT_14cbe5c00._4_4_ = 0;
  DAT_14cbe5c08 = 0;
  FUN_14052b5e0(&DAT_14cbe5c00,&DAT_14b9d8d88,0);
  _DAT_14cbe5c10 = &DAT_14b9d8d88;
  _DAT_14cbe5c18 = 0;
  uRam000000014cbe5c20 = 0;
  _DAT_14cbe5c28 = 0;
  DAT_14cbe5c30 = 0;
  uRam000000014cbe5c38 = 0;
  FUN_1446ddda2(&DAT_14cbe5c18,"oak.ui.bigmap_data");
  atexit((_func_5014 *)&LAB_144334687);
  local_80 = "ui_bigmap_data";
  local_78._0_5_ = 0xe;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5c40 = (ulonglong)uVar4;
  _DAT_14cbe5c4c = 0;
  _DAT_14cbe5c50 = 0;
  FUN_14052b5e0(&DAT_14cbe5c48,&DAT_14b9d8d88,0);
  _DAT_14cbe5c58 = &DAT_14b9d8d88;
  _DAT_14cbe5c60 = 0;
  uRam000000014cbe5c68 = 0;
  _DAT_14cbe5c70 = 0;
  DAT_14cbe5c78 = 0;
  uRam000000014cbe5c80 = 0;
  FUN_1446ddda2(&DAT_14cbe5c60,"oak.ui.contentwarning_data");
  atexit((_func_5014 *)&LAB_144334b0b);
  local_80 = "contentwarning_data";
  local_78._0_5_ = 0x13;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5c88 = (ulonglong)uVar4;
  DAT_14cbe5c90._4_4_ = 0;
  DAT_14cbe5c98 = 0;
  FUN_14052b5e0(&DAT_14cbe5c90,&DAT_14b9d8d88,0);
  _DAT_14cbe5ca0 = &DAT_14b9d8d88;
  _DAT_14cbe5ca8 = 0;
  uRam000000014cbe5cb0 = 0;
  _DAT_14cbe5cb8 = 0;
  DAT_14cbe5cc0 = 0;
  uRam000000014cbe5cc8 = 0;
  FUN_1446ddda2(&DAT_14cbe5ca8,"oak.ui.dlc_data");
  atexit((_func_5014 *)&LAB_144334b1c);
  local_80 = "ui_dlc_data";
  local_78._0_5_ = 0xb;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5cd0 = (ulonglong)uVar4;
  DAT_14cbe5cd8._4_4_ = 0;
  DAT_14cbe5ce0 = 0;
  FUN_14052b5e0(&DAT_14cbe5cd8,&DAT_14b9d8d88,0);
  _DAT_14cbe5ce8 = &DAT_14b9d8d88;
  _DAT_14cbe5cf0 = 0;
  uRam000000014cbe5cf8 = 0;
  _DAT_14cbe5d00 = 0;
  DAT_14cbe5d08 = 0;
  uRam000000014cbe5d10 = 0;
  FUN_1446ddda2(&DAT_14cbe5cf0,"oak.ui.eula_data");
  atexit((_func_5014 *)&LAB_144334b2d);
  local_80 = "eula_data";
  local_78._0_5_ = 9;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5d18 = (ulonglong)uVar4;
  DAT_14cbe5d20._4_4_ = 0;
  DAT_14cbe5d28 = 0;
  FUN_14052b5e0(&DAT_14cbe5d20,&DAT_14b9d8d88,0);
  _DAT_14cbe5d30 = &DAT_14b9d8d88;
  _DAT_14cbe5d38 = 0;
  uRam000000014cbe5d40 = 0;
  _DAT_14cbe5d48 = 0;
  DAT_14cbe5d50 = 0;
  uRam000000014cbe5d58 = 0;
  FUN_1446ddda2(&DAT_14cbe5d38,"oak.ui.news_data");
  atexit((_func_5014 *)&LAB_144334b3e);
  local_80 = "news_data";
  local_78._0_5_ = 9;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5d60 = (ulonglong)uVar4;
  DAT_14cbe5d68._4_4_ = 0;
  DAT_14cbe5d70 = 0;
  FUN_14052b5e0(&DAT_14cbe5d68,&DAT_14b9d8d88,0);
  _DAT_14cbe5d78 = &DAT_14b9d8d88;
  _DAT_14cbe5d80 = 0;
  uRam000000014cbe5d88 = 0;
  _DAT_14cbe5d90 = 0;
  DAT_14cbe5d98 = 0;
  uRam000000014cbe5da0 = 0;
  FUN_1446ddda2(&DAT_14cbe5d80,"oak.ui.progression_data");
  atexit((_func_5014 *)&LAB_144334b4f);
  local_80 = "ui_progression_data";
  local_78._0_5_ = 0x13;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe5da8 = (ulonglong)uVar4;
  _DAT_14cbe5db4 = 0;
  _DAT_14cbe5db8 = 0;
  FUN_14052b5e0(&DAT_14cbe5db0,"volume_overall",0);
  _DAT_14cbe5dc0 = 0;
  _DAT_14cbe5dc4 = 0;
  FUN_14052b5e0(&DAT_14cbe5dbc,"volume_music",0);
  _DAT_14cbe5dcc = 0;
  _DAT_14cbe5dd0 = 0;
  FUN_14052b5e0(&DAT_14cbe5dc8,"volume_sfx",0);
  _DAT_14cbe5dd8 = 0;
  _DAT_14cbe5ddc = 0;
  FUN_14052b5e0(&DAT_14cbe5dd4,"volume_dialog",0);
  _DAT_14cbe5de4 = 0;
  _DAT_14cbe5de8 = 0;
  FUN_14052b5e0(&DAT_14cbe5de0,"PlayInBackground",0);
  _DAT_14cbe5df0 = 0;
  _DAT_14cbe5df4 = 0;
  FUN_14052b5e0(&DAT_14cbe5dec,"MuteHitNotifies",0);
  _DAT_14cbe5dfc = 0;
  _DAT_14cbe5e00 = 0;
  FUN_14052b5e0(&DAT_14cbe5df8,"audio_preset",0);
  _DAT_14cbe5e08 = 0;
  _DAT_14cbe5e0c = 0;
  FUN_14052b5e0(&DAT_14cbe5e04,"force_mono",0);
  _DAT_14cbe5e14 = 0;
  _DAT_14cbe5e18 = 0;
  FUN_14052b5e0(&DAT_14cbe5e10,"use_controller_speaker",0);
  _DAT_14cbe5e20 = 0;
  _DAT_14cbe5e24 = 0;
  FUN_14052b5e0(&DAT_14cbe5e1c,"menu_music_volume",0);
  _DAT_14cbe5e2c = 0;
  _DAT_14cbe5e30 = 0;
  FUN_14052b5e0(&DAT_14cbe5e28,"game_music_volume",0);
  _DAT_14cbe5e38 = 0;
  _DAT_14cbe5e3c = 0;
  FUN_14052b5e0(&DAT_14cbe5e34,"cinematic_music_volume",0);
  _DAT_14cbe5e44 = 0;
  _DAT_14cbe5e48 = 0;
  FUN_14052b5e0(&DAT_14cbe5e40,"boss_music_trim",0);
  _DAT_14cbe5e50 = 0;
  _DAT_14cbe5e54 = 0;
  FUN_14052b5e0(&DAT_14cbe5e4c,"player_weapons_trim",0);
  _DAT_14cbe5e5c = 0;
  _DAT_14cbe5e60 = 0;
  FUN_14052b5e0(&DAT_14cbe5e58,"explosions_trim",0);
  _DAT_14cbe5e68 = 0;
  _DAT_14cbe5e6c = 0;
  FUN_14052b5e0(&DAT_14cbe5e64,"ui_trim",0);
  _DAT_14cbe5e74 = 0;
  _DAT_14cbe5e78 = 0;
  FUN_14052b5e0(&DAT_14cbe5e70,"outgoing_damage_trim",0);
  _DAT_14cbe5e80 = 0;
  _DAT_14cbe5e84 = 0;
  FUN_14052b5e0(&DAT_14cbe5e7c,"incoming_damage_trim",0);
  _DAT_14cbe5e8c = 0;
  _DAT_14cbe5e90 = 0;
  FUN_14052b5e0(&DAT_14cbe5e88,"player_voice_volume",0);
  _DAT_14cbe5e98 = 0;
  _DAT_14cbe5e9c = 0;
  FUN_14052b5e0(&DAT_14cbe5e94,"player_efforts_trim",0);
  _DAT_14cbe5ea4 = 0;
  _DAT_14cbe5ea8 = 0;
  FUN_14052b5e0(&DAT_14cbe5ea0,"player_callouts_trim",0);
  _DAT_14cbe5eb0 = 0;
  _DAT_14cbe5eb4 = 0;
  FUN_14052b5e0(&DAT_14cbe5eac,"player_idle_lines_trim",0);
  _DAT_14cbe5ebc = 0;
  _DAT_14cbe5ec0 = 0;
  FUN_14052b5e0(&DAT_14cbe5eb8,"combat_voice_volume",0);
  _DAT_14cbe5ec8 = 0;
  _DAT_14cbe5ecc = 0;
  FUN_14052b5e0(&DAT_14cbe5ec4,"claptrap_volume",0);
  _DAT_14cbe5ed4 = 0;
  _DAT_14cbe5ed8 = 0;
  FUN_14052b5e0(&DAT_14cbe5ed0,"eq_mode",0);
  _DAT_14cbe5ee0 = 0;
  _DAT_14cbe5ee4 = 0;
  FUN_14052b5e0(&DAT_14cbe5edc,"audio_language",0);
  FUN_140056680(&local_70,&DAT_149dfb77a);
  local_80 = "Platform.Trait.UIEngoodificationDefaultOn";
  local_78._0_5_ = 0x29;
  uVar5 = FUN_14001a6c0(&local_80,1);
  local_80 = "OakGame";
  local_78 = (undefined4 *)CONCAT35(local_78._5_3_,7);
  uVar6 = FUN_14001a6c0(&local_80,1);
  local_b0 = 0;
  local_b8 = &local_70;
  FUN_14125750c(&DAT_14cbe5ee8,0,uVar6,uVar5);
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_144334b60);
  FUN_140056680(&local_70,&DAT_149dfb77a);
  local_80 = "Platform.Trait.UIEngoodificationOptionEnabled";
  local_78._0_5_ = 0x2d;
  uVar5 = FUN_14001a6c0(&local_80,1);
  local_80 = "OakGame";
  local_78 = (undefined4 *)CONCAT35(local_78._5_3_,7);
  uVar6 = FUN_14001a6c0(&local_80,1);
  local_b0 = 0;
  local_b8 = &local_70;
  FUN_14125750c(&DAT_14cbe5ef0,0,uVar6,uVar5);
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  atexit((_func_5014 *)&LAB_144334b6c);
  local_80._0_4_ = 0x3ea8f5c3;
  FUN_1446f470e((longlong)&local_80 + 4,L"UltraPerformance",1);
  local_70._0_4_ = 0x3f000000;
  FUN_1446f470e((longlong)&local_70 + 4,L"Performance",1);
  local_8c = 0x3f147ae1;
  FUN_1446f470e(&uStack_88,L"Balanced",1);
  local_98 = 0x3f28f5c3;
  FUN_1446f470e(&uStack_94,L"Quality",1);
  local_a4 = 0x3f800000;
  FUN_1446f470e(&uStack_a0,L"FullResolution",1);
  _DAT_14cbe5ef8 = CONCAT44(uStack_a0,local_a4);
  DAT_14cbe5efc._4_4_ = local_9c;
  _DAT_14cbe5f04 = CONCAT44(uStack_94,local_98);
  DAT_14cbe5f08._4_4_ = local_90;
  _DAT_14cbe5f10 = CONCAT44(uStack_88,local_8c);
  _DAT_14cbe5f18 = local_84;
  _DAT_14cbe5f1c = (undefined4)local_70;
  DAT_14cbe5f1c_4 = local_70._4_4_;
  _DAT_14cbe5f24 = local_68[0];
  _DAT_14cbe5f30 = (int)local_78;
  _DAT_14cbe5f28 = (undefined4)local_80;
  DAT_14cbe5f28_4 = local_80._4_4_;
  local_80._0_4_ = 0x465ac000;
  FUN_1446f470e((longlong)&local_80 + 4,L"veryhigh",1);
  local_70._0_4_ = 0x462be000;
  FUN_1446f470e((longlong)&local_70 + 4,L"high",1);
  local_8c = 0x46147000;
  FUN_1446f470e(&uStack_88,L"medium",1);
  local_98 = 0x45fa0000;
  FUN_1446f470e(&uStack_94,&DAT_14b9d9816,1);
  _DAT_14cbe5f34 = CONCAT44(uStack_94,local_98);
  DAT_14cbe5f38._4_4_ = local_90;
  _DAT_14cbe5f40 = CONCAT44(uStack_88,local_8c);
  DAT_14cbe5f44._4_4_ = local_84;
  DAT_14cbe5f4c = (undefined4)local_70;
  DAT_14cbe5f4c_4 = local_70._4_4_;
  _DAT_14cbe5f54 = local_68[0];
  _DAT_14cbe5f58 = (undefined4)local_80;
  DAT_14cbe5f58_4 = local_80._4_4_;
  _DAT_14cbe5f60 = (int)local_78;
  local_80._0_4_ = 0x44c80000;
  FUN_1446f470e((longlong)&local_80 + 4,L"veryhigh",1);
  local_70._0_4_ = 0x446b0000;
  FUN_1446f470e((longlong)&local_70 + 4,L"high",1);
  local_8c = 0x444d0000;
  FUN_1446f470e(&uStack_88,L"medium",1);
  local_98 = 0x442f0000;
  FUN_1446f470e(&uStack_94,&DAT_14b9d9816,1);
  _DAT_14cbe5f64 = CONCAT44(uStack_94,local_98);
  _DAT_14cbe5f6c = local_90;
  _DAT_14cbe5f70 = CONCAT44(uStack_88,local_8c);
  _DAT_14cbe5f78 = local_84;
  _DAT_14cbe5f7c = (undefined4)local_70;
  DAT_14cbe5f7c_4 = local_70._4_4_;
  _DAT_14cbe5f84 = local_68[0];
  _DAT_14cbe5f88 = (undefined4)local_80;
  DAT_14cbe5f88_4 = local_80._4_4_;
  _DAT_14cbe5f90 = (int)local_78;
  local_80._0_4_ = 0x452f0000;
  FUN_1446f470e((longlong)&local_80 + 4,L"veryhigh",1);
  local_70 = (wchar_t *)CONCAT44(local_70._4_4_,0x44f3c000);
  FUN_1446f470e((longlong)&local_70 + 4,L"high",1);
  local_8c = 0x44cf8000;
  FUN_1446f470e(&uStack_88,L"medium",1);
  local_98 = 0x44b18000;
  FUN_1446f470e(&uStack_94,&DAT_14b9d9816,1);
  _DAT_14cbe5f94 = CONCAT44(uStack_94,local_98);
  _DAT_14cbe5f9c = local_90;
  _DAT_14cbe5fa0 = CONCAT44(uStack_88,local_8c);
  _DAT_14cbe5fa8 = local_84;
  _DAT_14cbe5fac = local_70;
  _DAT_14cbe5fb4 = local_68[0];
  _DAT_14cbe5fb8 = (undefined4)local_80;
  DAT_14cbe5fb8_4 = local_80._4_4_;
  _DAT_14cbe5fc0 = (int)local_78;
  local_80._0_4_ = 0x3f000000;
  local_b8 = (undefined8 *)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14cbe5fc8,L"OakUIGameUserSettings.BenchmarkResolutionScaling",&local_80,
                L"The game performance scaling with resolution. 1 means going from 1080p to 4k results in 4x the gpu frame time, 0 means going from 1080p to 4k results in the same gpu frame time"
               );
  atexit(FUN_144334b78);
  local_80 = (char *)CONCAT44(local_80._4_4_,0x5a);
  local_b8 = (undefined8 *)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cbe5fe0,L"OakUIGameUserSettings.HighRefreshRateThreshold",&local_80,
                L"The display minimum max refresh rate necessary to be considered high refresh rate."
               );
  atexit(FUN_144334bbd);
  local_80 = (char *)0x0;
  local_78 = (undefined4 *)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_1446efa72(&local_80,0,2,0x10);
  local_78._0_4_ = 2;
  *(undefined ***)local_80 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  *(longlong *)((longlong)local_80 + 0x10) = lVar8;
  *(undefined ***)local_80 = &PTR_FUN_14b9dbb90;
  local_b8 = (undefined8 *)((ulonglong)local_b8 & 0xffffffff00000000);
  FUN_14152bcb8(&DAT_14cbe5ff8,L"OakUIGameUserSettings.RunBenchmark",
                L"Runs the benchmark to define adequate presets and apply them.",&local_80);
  if ((int)local_78 != 0) {
    if (local_80 == (char *)0x0) goto LAB_144341257;
    (*(code *)**(undefined8 **)local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78._0_4_ = 0;
  }
  if (local_80 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_144341257:
  atexit(FUN_144334c02);
  _DAT_14cbe6028 = 0;
  uRam000000014cbe6030 = 0;
  _DAT_14cbe6038 = 0;
  DAT_14cbe6040 = 0;
  uRam000000014cbe6048 = 0;
  FUN_1446ddda2(&DAT_14cbe6028,"ProceedPromptGenericTitle",0);
  atexit((_func_5014 *)&LAB_144335050);
  _DAT_14cbe6050 = 0;
  uRam000000014cbe6058 = 0;
  _DAT_14cbe6060 = 0;
  DAT_14cbe6068 = 0;
  uRam000000014cbe6070 = 0;
  FUN_1446ddda2(&DAT_14cbe6050,"ProceedPromptGenericBody",0);
  atexit((_func_5014 *)&LAB_144335061);
  _DAT_14cbe6198 = &LAB_1443375b9;
  _DAT_14cbe61a0 = 0x45036000;
  DAT_14cbe61a4 = 1;
  DAT_14cbe6190 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe6190;
  atexit((_func_5014 *)&LAB_1443375be);
  local_80 = "VaultCards";
  local_78._0_5_ = 10;
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe6250 = (ulonglong)uVar4;
  DAT_14cbe6258 = 0;
  atexit((_func_5014 *)&LAB_144338a9d);
  _DAT_14cbe6228 = 0;
  uRam000000014cbe6230 = 0;
  _DAT_14cbe6238 = 0;
  DAT_14cbe6240 = 0;
  uRam000000014cbe6248 = 0;
  FUN_1446ddda2(&DAT_14cbe6228,"vault_cards",0);
  atexit((_func_5014 *)&LAB_144338ab5);
  _DAT_14cbe61b0 = 0;
  uRam000000014cbe61b8 = 0;
  _DAT_14cbe61c0 = 0;
  DAT_14cbe61c8 = 0;
  uRam000000014cbe61d0 = 0;
  FUN_1446ddda2(&DAT_14cbe61b0,"activated_card",0);
  atexit((_func_5014 *)&LAB_144338ac6);
  _DAT_14cbe60c8 = 0;
  uRam000000014cbe60d0 = 0;
  _DAT_14cbe60d8 = 0;
  DAT_14cbe60e0 = 0;
  uRam000000014cbe60e8 = 0;
  FUN_1446ddda2(&DAT_14cbe60c8,&DAT_14acb8ea6,0);
  atexit((_func_5014 *)&LAB_144338ad7);
  _DAT_14cbe60f0 = 0;
  uRam000000014cbe60f8 = 0;
  _DAT_14cbe6100 = 0;
  DAT_14cbe6108 = 0;
  uRam000000014cbe6110 = 0;
  FUN_1446ddda2(&DAT_14cbe60f0,"count",0);
  atexit((_func_5014 *)&LAB_144338ae8);
  _DAT_14cbe6168 = 0;
  uRam000000014cbe6170 = 0;
  _DAT_14cbe6178 = 0;
  DAT_14cbe6180 = 0;
  uRam000000014cbe6188 = 0;
  FUN_1446ddda2(&DAT_14cbe6168,"inv_items",0);
  atexit((_func_5014 *)&LAB_144338af9);
  _DAT_14cbe61d8 = 0;
  uRam000000014cbe61e0 = 0;
  _DAT_14cbe61e8 = 0;
  DAT_14cbe61f0 = 0;
  uRam000000014cbe61f8 = 0;
  FUN_1446ddda2(&DAT_14cbe61d8,"day_reset_key",0);
  atexit((_func_5014 *)&LAB_144338b0a);
  _DAT_14cbe6200 = 0;
  uRam000000014cbe6208 = 0;
  _DAT_14cbe6210 = 0;
  DAT_14cbe6218 = 0;
  uRam000000014cbe6220 = 0;
  FUN_1446ddda2(&DAT_14cbe6200,"week_reset_key",0);
  atexit((_func_5014 *)&LAB_144338b1b);
  _DAT_14cbe6118 = 0;
  uRam000000014cbe6120 = 0;
  _DAT_14cbe6128 = 0;
  DAT_14cbe6130 = 0;
  uRam000000014cbe6138 = 0;
  FUN_1446ddda2(&DAT_14cbe6118,"challenges_daily",0);
  atexit((_func_5014 *)&LAB_144338b2c);
  _DAT_14cbe6140 = 0;
  uRam000000014cbe6148 = 0;
  _DAT_14cbe6150 = 0;
  DAT_14cbe6158 = 0;
  uRam000000014cbe6160 = 0;
  FUN_1446ddda2(&DAT_14cbe6140,"challenges_weekly",0);
  atexit((_func_5014 *)&LAB_144338b3d);
  _DAT_14cbe6078 = 0;
  uRam000000014cbe6080 = 0;
  _DAT_14cbe6088 = 0;
  DAT_14cbe6090 = 0;
  uRam000000014cbe6098 = 0;
  FUN_1446ddda2(&DAT_14cbe6078,"active",0);
  atexit((_func_5014 *)&LAB_144338b4e);
  _DAT_14cbe60a0 = 0;
  uRam000000014cbe60a8 = 0;
  _DAT_14cbe60b0 = 0;
  DAT_14cbe60b8 = 0;
  uRam000000014cbe60c0 = 0;
  FUN_1446ddda2(&DAT_14cbe60a0,"picked",0);
  atexit((_func_5014 *)&LAB_144338b5f);
  local_80 = "vault_cards";
  local_78 = (undefined4 *)CONCAT35(local_78._5_3_,0xb);
  uVar4 = FUN_14001a6c0(&local_80,1);
  DAT_14cbe62c0 = (ulonglong)uVar4;
  _DAT_14cbe62c8 = 0;
  uRam000000014cbe62d0 = 0;
  _DAT_14cbe62d8 = 0;
  DAT_14cbe62e0 = 0;
  uRam000000014cbe62e8 = 0;
  FUN_1446ddda2(&DAT_14cbe62c8,"vault_cards",0);
  atexit((_func_5014 *)&LAB_144338b70);
  _DAT_14cbe62f0 = 0;
  uRam000000014cbe62f8 = 0;
  _DAT_14cbe6300 = 0;
  DAT_14cbe6308 = 0;
  uRam000000014cbe6310 = 0;
  FUN_1446ddda2(&DAT_14cbe62f0,"oak.vault_cards",0);
  atexit((_func_5014 *)&LAB_144338b81);
  FUN_1462a3428(&DAT_14cbe6318,&LAB_144339331,"tracker_location",&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_144339336);
  plVar7 = (longlong *)FUN_145d889d0();
  iVar1 = (int)plVar7[1];
  *(uint *)(plVar7 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar7 + 0xc) < iVar1 + 1U) {
    FUN_140ca86cc(plVar7,iVar1);
  }
  *(char **)(*plVar7 + (longlong)iVar1 * 8) = "tracker_location";
  _DAT_14cbe634c = 0;
  FUN_14052b5e0(&DAT_14cbe6348,"State",0);
  local_80 = "TrackerObjects";
  local_78 = (undefined4 *)CONCAT35(local_78._5_3_,0xe);
  uVar4 = FUN_14001a6c0(&local_80,1);
  _DAT_14cbe6358 = (ulonglong)uVar4;
  _DAT_14cbe6368 = &LAB_14433936a;
  _DAT_14cbe6370 = 0x447a0000;
  DAT_14cbe6374 = 1;
  DAT_14cbe6360 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe6360;
  atexit((_func_5014 *)&LAB_14433936f);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14434179e FUN_14434179e body=9017 status=ok
// SIG undefined FUN_14434179e(void)

void FUN_14434179e(longlong param_1,float param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  double *pdVar25;
  ulonglong uVar26;
  byte bVar27;
  int iVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined4 *puVar33;
  ulonglong uVar34;
  int iVar35;
  longlong lVar36;
  longlong *plVar37;
  bool bVar38;
  undefined4 uVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined4 uVar49;
  undefined1 auStack_278 [32];
  uint local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined2 *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  undefined8 *local_220;
  undefined1 *local_218;
  code *local_210;
  longlong *local_208;
  byte local_1f9;
  longlong local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  undefined4 local_1cc;
  longlong *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  longlong local_198;
  ulonglong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  undefined4 *local_168;
  uint local_160;
  int local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  longlong *local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined1 local_11c [4];
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  longlong local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  plVar1 = (longlong *)(param_1 + -0x30);
  lVar18 = FUN_141900771();
  if (0.0 < *(float *)(param_1 + 0x288)) {
    param_2 = *(float *)(param_1 + 0x288) - param_2;
    fVar40 = 0.0;
    if (0.0 <= param_2) {
      fVar40 = param_2;
    }
    *(float *)(param_1 + 0x288) = fVar40;
  }
  plVar19 = (longlong *)FUN_1400b465c(plVar1);
  if (plVar19 != (longlong *)0x0) {
    if (DAT_14cb5e538 == 0) {
      local_220 = &local_118;
      local_118 = &LAB_1417c5d06;
      local_210 = FUN_14081d0ea;
      local_218 = &LAB_1417ad04a;
      local_228 = &LAB_1486a7af7;
      local_230 = &LAB_1464e1631;
      local_238 = &DAT_149e063b2;
      local_240 = 0;
      local_248 = 0x1000000c;
      local_250 = 8;
      local_258 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
    }
    if ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(plVar19[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
        DAT_14cb5e538 + 0x30)) {
      if (*(code **)(*plVar19 + 0x498) == (code *)&LAB_14015c36e) {
        cVar10 = (char)plVar19[0x42];
      }
      else {
        cVar10 = (**(code **)(*plVar19 + 0x498))(plVar19);
      }
      if (cVar10 != '\b') goto LAB_14434395d;
    }
  }
  lVar20 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if (lVar20 == 0) goto LAB_14434395d;
  if ((*(char *)(param_1 + 0x240) != '\0') ||
     (*(int *)(param_1 + 0x1f8) == *(int *)(param_1 + 0x224))) {
    uVar21 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(plVar1);
    FUN_140fb8846(plVar1,uVar21);
    FUN_14039e5fe(plVar1);
    if (*(int *)(param_1 + 0x1f8) == *(int *)(param_1 + 0x224)) goto LAB_14434395d;
  }
  iVar12 = *(int *)(param_1 + 0x170);
  *(int *)(param_1 + 0x170) = (iVar12 + 1) % *(int *)(param_1 + 200);
  local_1e0 = (longlong)(iVar12 % *(int *)(param_1 + 200));
  plVar19 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + local_1e0 * 8);
  if ((plVar19 == (longlong *)0x0) || (lVar22 = *plVar19, lVar22 == 0)) goto LAB_14434395d;
  puVar33 = *(undefined4 **)(lVar22 + 8);
  if (puVar33 == (undefined4 *)0x0) {
    puVar33 = &DAT_14c9485f0;
  }
  local_1f8 = lVar22;
  if (DAT_14c947fe0 == 0) {
    lVar22 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar22);
    DAT_14c947fe0 = lVar22;
  }
  local_1f9 = 1;
  FUN_140045924(DAT_14c947fe0,&local_128,puVar33,1);
  lVar22 = FUN_1406f612e(lVar20);
  if (lVar22 == 0) {
    local_1cc = 0;
  }
  else {
    if (*(longlong *)(local_1f8 + 0x100) == 0) {
LAB_144341a31:
      local_1cc = 0;
    }
    else {
      FUN_1446dcdd4(&local_118,local_1f8 + 0x100);
      if (DAT_14cbc5818 == 0) {
        lVar23 = 0;
      }
      else {
        lVar23 = FUN_144837462(DAT_14cbc5818,&local_118);
      }
      if (local_100 != 0) {
        FUN_1400020a8();
      }
      if (lVar23 == 0) goto LAB_144341a31;
      local_1cc = FUN_1411e55f8(lVar22,lVar23);
    }
    if (*(longlong *)(local_1f8 + 0xf8) != 0) {
      FUN_1446dcdd4(&local_118,local_1f8 + 0xf8);
      if (DAT_14cbc5818 == 0) {
        lVar23 = 0;
      }
      else {
        lVar23 = FUN_144837462(DAT_14cbc5818,&local_118);
      }
      if (local_100 != 0) {
        FUN_1400020a8();
      }
      if (lVar23 != 0) {
        local_1f9 = FUN_1411e55f8(lVar22,lVar23);
        local_1f9 = local_1f9 ^ 1;
      }
    }
  }
  local_138 = (longlong *)0x0;
  uStack_130 = 0;
  iVar12 = *(int *)(lVar20 + 0x238);
  if (0 < iVar12) {
    lVar22 = 0;
    do {
      uVar26 = uStack_130;
      iVar14 = *(int *)(*(longlong *)(lVar20 + 0x230) + 4 + lVar22 * 8);
      if ((((((iVar14 != 0) &&
             (uVar11 = *(uint *)(*(longlong *)(lVar20 + 0x230) + lVar22 * 8), -1 < (int)uVar11)) &&
            ((int)uVar11 < DAT_14c9647dc)) &&
           ((plVar19 = (longlong *)
                       ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
            plVar19 != (longlong *)0x0 && ((int)plVar19[2] == iVar14)))) &&
          ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)) &&
         ((*plVar19 != 0 && (lVar23 = *(longlong *)(*plVar19 + 0x3d0), lVar23 != 0)))) {
        lVar36 = (longlong)(int)uStack_130;
        uVar11 = (int)uStack_130 + 1;
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar11);
        if (uStack_130._4_4_ < uVar11) {
          FUN_141886378(&local_138,uVar26 & 0xffffffff);
        }
        local_138[lVar36] = lVar23;
        iVar12 = *(int *)(lVar20 + 0x238);
      }
      lVar22 = lVar22 + 1;
    } while ((int)lVar22 < iVar12);
    if ((longlong)(int)uStack_130 != 0) {
      plVar19 = local_138 + (int)uStack_130;
      local_1f0 = (longlong *)(param_1 + 0xd0);
      local_1c8 = (longlong *)(param_1 + 0x120);
      local_168 = (undefined4 *)(local_1f8 + 0x80);
      local_1c0 = param_1 + 8;
      local_1b8 = param_1 + 0x270;
      local_180 = lVar18 + 0x20;
      local_188 = lVar18 + 0xe0;
      local_198 = lVar18 + 0x50;
      local_1a0 = lVar18 + 0xb0;
      local_1d8 = param_1 + 0xe0;
      local_170 = param_1 + 0x108;
      local_178 = param_1 + 0x158;
      lVar20 = local_1f8;
      lVar22 = local_1e0;
      plVar37 = local_138;
      local_1e8 = plVar19;
      local_1b0 = lVar18;
      local_1a8 = plVar1;
      do {
        plVar1 = (longlong *)*plVar37;
        plVar24 = (longlong *)(**(code **)(*plVar1 + 0x5d8))(plVar1);
        if (plVar24 != (longlong *)0x0) {
          uVar11 = *(uint *)((longlong)plVar24 + 0xc);
          if ((int)uVar11 < DAT_14c9647dc) {
            lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
          }
          else {
            lVar18 = 0;
          }
          uVar15 = *(uint *)(lVar18 + 0x10);
          local_208 = plVar24;
          if (*(uint *)(lVar18 + 0x10) == 0) {
            LOCK();
            iVar12 = DAT_14c964868 + 1;
            UNLOCK();
            uVar30 = DAT_14c964868 + 1;
            bVar38 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar12;
            if (bVar38) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar30);
            }
            LOCK();
            uVar15 = *(uint *)(lVar18 + 0x10);
            bVar38 = uVar15 == 0;
            if (bVar38) {
              *(uint *)(lVar18 + 0x10) = uVar30;
              uVar15 = 0;
            }
            UNLOCK();
            lVar20 = local_1f8;
            if (bVar38) {
              uVar15 = uVar30;
            }
          }
          local_118 = (undefined1 *)CONCAT44(uVar15,uVar11);
          iVar12 = FUN_1400ff362(local_1f0,uVar11 ^ uVar15,&local_118);
          if (iVar12 == -1) {
            uVar11 = *(uint *)((longlong)local_208 + 0xc);
            if ((int)uVar11 < DAT_14c9647dc) {
              lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
            }
            else {
              lVar18 = 0;
            }
            uVar15 = *(uint *)(lVar18 + 0x10);
            if (*(uint *)(lVar18 + 0x10) == 0) {
              LOCK();
              iVar12 = DAT_14c964868 + 1;
              UNLOCK();
              uVar30 = DAT_14c964868 + 1;
              bVar38 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar12;
              if (bVar38) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar30);
              }
              LOCK();
              uVar15 = *(uint *)(lVar18 + 0x10);
              bVar38 = uVar15 == 0;
              if (bVar38) {
                *(uint *)(lVar18 + 0x10) = uVar30;
                uVar15 = 0;
              }
              UNLOCK();
              if (bVar38) {
                uVar15 = uVar30;
              }
            }
            if (*(int *)(param_1 + 0x104) == 0) {
              iVar12 = *(int *)(param_1 + 0xd8);
              *(int *)(param_1 + 0xd8) = iVar12 + 1;
              if (*(int *)(param_1 + 0xdc) == iVar12) {
                FUN_140171ad2(local_1f0,iVar12);
              }
              iVar14 = *(int *)(param_1 + 0xf8);
              if (iVar14 == 0) {
                iVar13 = -1;
              }
              else {
                iVar13 = iVar14 + 0x1e;
                if (-1 < iVar14 + -1) {
                  iVar13 = iVar14 + -1;
                }
                iVar13 = iVar13 >> 5;
              }
              iVar28 = iVar14 + 1;
              iVar35 = iVar14 + 0x1f;
              if (-1 < iVar14) {
                iVar35 = iVar14;
              }
              if (iVar35 >> 5 == iVar13) {
                *(int *)(param_1 + 0xf8) = iVar28;
              }
              else {
                if (*(int *)(param_1 + 0xfc) <= iVar14) {
                  iVar13 = iVar14;
                  if (iVar14 + 0x20U < 0xa0) {
                    iVar28 = 0x80;
                  }
                  else {
                    uVar30 = iVar14 + 0x20U >> 5;
                    if (*(int *)(param_1 + 0xfc) + 0x1fU < 0xa0) {
                      uVar31 = 4;
                      if (4 < uVar30) {
                        uVar31 = uVar30;
                      }
                    }
                    else {
                      uVar31 = uVar30 + (uVar30 * 3 >> 3) + 0x10;
                    }
                    uVar26 = (ulonglong)(uVar31 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar16 = (uint)(uVar26 + 0xf);
                        if (uVar31 < 0x1ffd) {
                          uVar26 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar26 + 0xf >> 4]];
                        }
                        else {
                          uVar29 = (ulonglong)(uVar16 & 0xfffffff0);
                          if (uVar29 < 0x7ff1) {
                            bVar27 = (&DAT_14c841e00)[uVar16 >> 4];
                            uVar32 = 0x32;
                            if (0x32 < bVar27) {
                              uVar32 = (ulonglong)bVar27;
                            }
                            uVar34 = 0x32 - (ulonglong)bVar27;
                            do {
                              uVar26 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar34 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar34 & 0xffffffff] & 0xf) == 0)
                              goto LAB_1443431bf;
                              lVar18 = uVar32 + 1 + uVar34;
                              uVar34 = uVar34 - 1;
                            } while (lVar18 != 0x33);
                          }
                          uVar26 = (ulonglong)DAT_14c841df8;
                          if (DAT_14c841df8 < 0x11) {
                            uVar26 = 0x10;
                          }
                          uVar26 = -uVar26 & (uVar29 + uVar26) - 1;
                        }
                      }
                      else {
                        local_190 = (ulonglong)uVar30;
                        uVar26 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar26,0);
                        uVar30 = (uint)local_190;
                        iVar13 = *(int *)(param_1 + 0xf8);
                      }
                    }
LAB_1443431bf:
                    iVar17 = (int)(uVar26 >> 2);
                    iVar28 = iVar17 << 5;
                    if (iVar17 < (int)uVar30) {
                      iVar28 = -0x20;
                    }
                  }
                  *(int *)(param_1 + 0xfc) = iVar28;
                  FUN_1446efbd8(local_1d8,iVar13);
                  iVar28 = *(int *)(param_1 + 0xf8) + 1;
                }
                iVar13 = iVar28 + 0x1f;
                if (-1 < iVar28) {
                  iVar13 = iVar28;
                }
                *(int *)(param_1 + 0xf8) = iVar28;
                if (iVar28 % 0x20 != 0) {
                  lVar18 = *(longlong *)(param_1 + 0xf0);
                  if (*(longlong *)(param_1 + 0xf0) == 0) {
                    lVar18 = local_1d8;
                  }
                  bVar27 = -(char)(iVar28 % 0x20);
                  *(uint *)(lVar18 + (longlong)(iVar13 >> 5) * 4) =
                       (uint)(*(int *)(lVar18 + (longlong)(iVar13 >> 5) * 4) << (bVar27 & 0x1f)) >>
                       (bVar27 & 0x1f);
                }
              }
              lVar18 = (longlong)iVar12;
              lVar20 = *(longlong *)(param_1 + 0xf0);
              if (*(longlong *)(param_1 + 0xf0) == 0) {
                lVar20 = local_1d8;
              }
              bVar27 = (byte)iVar14 & 0x1f;
              puVar2 = (uint *)(lVar20 + (longlong)(iVar35 >> 5) * 4);
              *puVar2 = *puVar2 & (-2 << bVar27 | 0xfffffffeU >> 0x20 - bVar27);
            }
            else {
              iVar12 = *(int *)(param_1 + 0x100);
              lVar18 = (longlong)iVar12;
              iVar14 = *(int *)(*(longlong *)(param_1 + 0xd0) + 4 + lVar18 * 0x14);
              *(int *)(param_1 + 0x100) = iVar14;
              iVar13 = *(int *)(param_1 + 0x104) + -1;
              *(int *)(param_1 + 0x104) = iVar13;
              if (iVar13 != 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar14 * 0x14) =
                     0xffffffff;
              }
            }
            iVar14 = 1;
            lVar20 = *(longlong *)(param_1 + 0xf0);
            if (*(longlong *)(param_1 + 0xf0) == 0) {
              lVar20 = local_1d8;
            }
            iVar13 = iVar12 + 0x1f;
            if (-1 < iVar12) {
              iVar13 = iVar12;
            }
            puVar2 = (uint *)(lVar20 + (longlong)(iVar13 >> 5) * 4);
            *puVar2 = *puVar2 | 1 << ((byte)iVar12 & 0x1f);
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0xd0) + lVar18 * 0x14);
            *puVar3 = CONCAT44(uVar15,uVar11);
            puVar3[1] = 0xffffffffffffffff;
            if (*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0x104) == 1) {
              uVar30 = 1;
            }
            else {
              local_118 = (undefined1 *)CONCAT44(uVar15,uVar11);
              iVar13 = FUN_1400ff362(local_1f0,uVar11 ^ uVar15,&local_118);
              lVar22 = local_1e0;
              if (iVar13 != -1) {
                lVar18 = *local_1f0;
                uVar21 = *puVar3;
                *(undefined4 *)(lVar18 + (longlong)iVar13 * 0x14 + 8) = *(undefined4 *)(puVar3 + 1);
                *(undefined8 *)(lVar18 + (longlong)iVar13 * 0x14) = uVar21;
                FUN_148f026c0(local_1f0,iVar12);
                lVar20 = local_1f8;
                plVar19 = local_1e8;
                goto LAB_144341f2c;
              }
              uVar30 = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0x104);
              if (3 < uVar30) {
                uVar26 = (ulonglong)(uVar30 & 0xfffffffe) + 0xf;
                lVar18 = 0x3f;
                if (uVar26 != 0) {
                  for (; uVar26 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar14 = 1 << ((byte)lVar18 & 0x1f);
              }
            }
            lVar22 = local_1e0;
            if (((int)uVar30 < 1) || (iVar14 <= *(int *)(param_1 + 0x118))) {
              uVar11 = *(int *)(param_1 + 0x118) - 1U & (uVar11 ^ uVar15);
              *(uint *)(puVar3 + 2) = uVar11;
              lVar18 = *(longlong *)(param_1 + 0x110);
              if (*(longlong *)(param_1 + 0x110) == 0) {
                lVar18 = local_170;
              }
              *(undefined4 *)((longlong)puVar3 + 0xc) =
                   *(undefined4 *)
                    (lVar18 + ((longlong)*(int *)(param_1 + 0x118) - 1U & (longlong)(int)uVar11) * 4
                    );
              lVar18 = *(longlong *)(param_1 + 0x110);
              if (*(longlong *)(param_1 + 0x110) == 0) {
                lVar18 = local_170;
              }
              *(int *)(lVar18 + ((longlong)*(int *)(param_1 + 0x118) - 1U & (longlong)(int)uVar11) *
                                4) = iVar12;
              lVar20 = local_1f8;
              plVar19 = local_1e8;
            }
            else {
              *(int *)(param_1 + 0x118) = iVar14;
              FUN_14665e030(local_1f0);
              lVar20 = local_1f8;
              plVar19 = local_1e8;
            }
          }
LAB_144341f2c:
          uVar11 = *(uint *)((longlong)local_208 + 0xc);
          if ((int)uVar11 < DAT_14c9647dc) {
            lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
          }
          else {
            lVar18 = 0;
          }
          uVar15 = *(uint *)(lVar18 + 0x10);
          if (*(uint *)(lVar18 + 0x10) == 0) {
            LOCK();
            iVar12 = DAT_14c964868 + 1;
            UNLOCK();
            uVar30 = DAT_14c964868 + 1;
            bVar38 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar12;
            if (bVar38) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar30);
            }
            LOCK();
            uVar15 = *(uint *)(lVar18 + 0x10);
            bVar38 = uVar15 == 0;
            if (bVar38) {
              *(uint *)(lVar18 + 0x10) = uVar30;
              uVar15 = 0;
            }
            UNLOCK();
            lVar20 = local_1f8;
            if (bVar38) {
              uVar15 = uVar30;
            }
          }
          local_118 = (undefined1 *)CONCAT44(uVar15,uVar11);
          iVar12 = FUN_14120f730(local_1c8,uVar11 ^ uVar15,&local_118);
          if (iVar12 == -1) {
            uVar11 = *(uint *)((longlong)local_208 + 0xc);
            if ((int)uVar11 < DAT_14c9647dc) {
              lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
            }
            else {
              lVar18 = 0;
            }
            uVar15 = *(uint *)(lVar18 + 0x10);
            if (*(uint *)(lVar18 + 0x10) == 0) {
              LOCK();
              iVar12 = DAT_14c964868 + 1;
              UNLOCK();
              uVar30 = DAT_14c964868 + 1;
              bVar38 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar12;
              if (bVar38) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar30);
              }
              LOCK();
              uVar15 = *(uint *)(lVar18 + 0x10);
              bVar38 = uVar15 == 0;
              if (bVar38) {
                *(uint *)(lVar18 + 0x10) = uVar30;
                uVar15 = 0;
              }
              UNLOCK();
              if (bVar38) {
                uVar15 = uVar30;
              }
            }
            plVar19 = local_1c8;
            FUN_141901314(local_1c8,&local_118);
            puVar3 = uStack_110;
            *uStack_110 = CONCAT44(uVar15,uVar11);
            uStack_110[1] = 0;
            *(undefined4 *)(uStack_110 + 2) = 0xffffffff;
            local_158 = (uint *)CONCAT44(local_158._4_4_,(undefined4)local_118);
            cVar10 = FUN_14120f6aa(plVar19,uVar11 ^ uVar15,uStack_110,&local_158);
            plVar19 = local_1e8;
            lVar20 = local_1f8;
            if (cVar10 == '\0') {
              uVar30 = *(int *)(param_1 + 0x128) - *(int *)(param_1 + 0x154);
              iVar12 = 1;
              if (3 < uVar30) {
                uVar26 = (ulonglong)(uVar30 & 0xfffffffe) + 0xf;
                lVar18 = 0x3f;
                if (uVar26 != 0) {
                  for (; uVar26 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar12 = 1 << ((byte)lVar18 & 0x1f);
              }
              if (((int)uVar30 < 1) || (iVar12 <= *(int *)(param_1 + 0x168))) {
                uVar11 = *(int *)(param_1 + 0x168) - 1U & (uVar11 ^ uVar15);
                *(uint *)((longlong)puVar3 + 0x14) = uVar11;
                lVar18 = *(longlong *)(param_1 + 0x160);
                if (*(longlong *)(param_1 + 0x160) == 0) {
                  lVar18 = local_178;
                }
                *(undefined4 *)(puVar3 + 2) =
                     *(undefined4 *)
                      (lVar18 + ((longlong)*(int *)(param_1 + 0x168) - 1U & (longlong)(int)uVar11) *
                                4);
                lVar18 = *(longlong *)(param_1 + 0x160);
                if (*(longlong *)(param_1 + 0x160) == 0) {
                  lVar18 = local_178;
                }
                *(undefined4 *)
                 (lVar18 + ((longlong)*(int *)(param_1 + 0x168) - 1U & (longlong)(int)uVar11) * 4) =
                     (undefined4)local_158;
              }
              else {
                *(int *)(param_1 + 0x168) = iVar12;
                FUN_14665e1ee(local_1c8);
                lVar20 = local_1f8;
              }
            }
          }
          lVar18 = plVar1[0x39];
          if (lVar18 == 0) {
            uVar41 = SUB84(DAT_14c8464f0,0);
            uVar49 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            pdVar25 = (double *)&DAT_14c8464e0;
          }
          else {
            pdVar25 = (double *)(lVar18 + 0x260);
            uVar41 = (undefined4)*(undefined8 *)(lVar18 + 0x270);
            uVar49 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x270) >> 0x20);
          }
          dVar5 = *(double *)(lVar20 + 0x18) - *pdVar25;
          dVar9 = *(double *)(lVar20 + 0x20) - pdVar25[1];
          dVar4 = *(double *)(lVar20 + 0x28);
          lVar23 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar22 * 8);
          iVar12 = *(int *)(lVar23 + 0xc);
          if ((((iVar12 == 0) || (uVar11 = *(uint *)(lVar23 + 8), (int)uVar11 < 0)) ||
              (DAT_14c9647dc <= (int)uVar11)) ||
             (((plVar24 = (longlong *)
                          ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
               plVar24 == (longlong *)0x0 || ((int)plVar24[2] != iVar12)) ||
              ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)))) {
            local_108 = *(double *)(local_168 + 4);
            uVar39 = *local_168;
            uVar42 = local_168[1];
            uVar43 = local_168[2];
            uVar44 = local_168[3];
LAB_144342194:
            local_118 = (undefined1 *)CONCAT44(uVar42,uVar39);
            uStack_110 = (undefined8 *)CONCAT44(uVar44,uVar43);
          }
          else {
            if ((*(uint *)(plVar24 + 1) & 0x10200000) == 0) {
              lVar23 = *plVar24;
            }
            else {
              lVar23 = 0;
            }
            lVar23 = *(longlong *)(lVar23 + 0x1c8);
            if (lVar23 == 0) {
              local_108 = DAT_14c8464f0;
              uVar39 = (undefined4)DAT_14c8464e0;
              uVar42 = DAT_14c8464e0._4_4_;
              uVar43 = (undefined4)DAT_14c8464e8;
              uVar44 = DAT_14c8464e8._4_4_;
              goto LAB_144342194;
            }
            local_118 = *(undefined1 **)(lVar23 + 0x260);
            uStack_110 = *(undefined8 **)(lVar23 + 0x268);
            local_108 = *(double *)(lVar23 + 0x270);
          }
          dVar8 = local_108;
          lVar23 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar22 * 8);
          if (((*(double *)(lVar23 + 0x48) != (double)local_118) ||
              (NAN(*(double *)(lVar23 + 0x48)) || NAN((double)local_118))) ||
             ((*(double *)(lVar23 + 0x50) != (double)uStack_110 ||
              (NAN(*(double *)(lVar23 + 0x50)) || NAN((double)uStack_110))))) {
LAB_1443421dc:
            *(double *)(lVar23 + 0x58) = local_108;
            *(undefined4 *)(lVar23 + 0x48) = (undefined4)local_118;
            *(undefined4 *)(lVar23 + 0x4c) = local_118._4_4_;
            *(undefined4 *)(lVar23 + 0x50) = (undefined4)uStack_110;
            *(undefined4 *)(lVar23 + 0x54) = uStack_110._4_4_;
            lVar18 = plVar1[0x39];
          }
          else if ((*(double *)(lVar23 + 0x58) != local_108) ||
                  (NAN(*(double *)(lVar23 + 0x58)) || NAN(local_108))) goto LAB_1443421dc;
          if (lVar18 == 0) {
            uVar39 = SUB84(DAT_14c8464f0,0);
            uVar42 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            pdVar25 = (double *)&DAT_14c8464e0;
          }
          else {
            uVar39 = (undefined4)*(undefined8 *)(lVar18 + 0x270);
            uVar42 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x270) >> 0x20);
            pdVar25 = (double *)(lVar18 + 0x260);
          }
          dVar6 = (double)local_118 - *pdVar25;
          dVar7 = (double)uStack_110 - pdVar25[1];
          if ((((*(char *)(lVar20 + 0x41) == '\x01') &&
               (lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar22 * 8),
               *(char *)(lVar18 + 0x61) == '\0')) && (*(int *)(lVar18 + 0xc) != 0)) &&
             (((uVar11 = *(uint *)(lVar18 + 8), -1 < (int)uVar11 && ((int)uVar11 < DAT_14c9647dc))
              && ((plVar24 = (longlong *)
                             ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                  plVar24 != (longlong *)0x0 &&
                  (((int)plVar24[2] == *(int *)(lVar18 + 0xc) &&
                   ((*(uint *)(plVar24 + 1) & 0x10200000) == 0)))))))) {
            if ((*(uint *)(plVar24 + 1) & 0x10200000) == 0) {
              lVar18 = *plVar24;
            }
            else {
              lVar18 = 0;
            }
            cVar10 = (**(code **)(*(longlong *)(lVar18 + 0x1aa0) + 0x10))(lVar18 + 0x1aa0);
            lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar22 * 8);
            if (cVar10 == '\0') {
              if (*(char *)(lVar18 + 0x68) == '\0') {
                *(undefined1 *)(lVar18 + 0x68) = 1;
              }
              lVar18 = plVar1[0x39];
              if (lVar18 == 0) {
                pdVar25 = (double *)&DAT_14c8464e0;
                dVar46 = DAT_14c8464f0;
              }
              else {
                pdVar25 = (double *)(lVar18 + 0x260);
                dVar46 = *(double *)(lVar18 + 0x270);
              }
              dVar46 = dVar46 - *(double *)(lVar20 + 0x90);
              dVar48 = *pdVar25 - *(double *)(lVar20 + 0x80);
              dVar47 = pdVar25[1] - *(double *)(lVar20 + 0x88);
              if (dVar46 * dVar46 + dVar47 * dVar47 + dVar48 * dVar48 <=
                  (double)(*(float *)(lVar20 + 0x34) * *(float *)(lVar20 + 0x34) * 0.25))
              goto LAB_144342533;
            }
            else {
              if ((*(int *)(lVar18 + 0xc) == 0) || (uVar11 = *(uint *)(lVar18 + 8), (int)uVar11 < 0)
                 ) {
LAB_1443430c0:
                lVar23 = 0;
              }
              else {
                lVar23 = 0;
                if ((int)uVar11 < DAT_14c9647dc) {
                  plVar24 = (longlong *)
                            ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
                  if (((plVar24 == (longlong *)0x0) || ((int)plVar24[2] != *(int *)(lVar18 + 0xc)))
                     || ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)) goto LAB_1443430c0;
                  lVar23 = *plVar24;
                }
              }
              lVar23 = (**(code **)(*(longlong *)(lVar23 + 0x1aa0) + 0x20))(lVar23 + 0x1aa0);
              FUN_14053c150(lVar23);
              lVar18 = plVar1[0x39];
              if (lVar18 == 0) {
                local_148 = DAT_14c8464f0;
                local_158 = (uint *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_150 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              }
              else {
                local_158 = *(uint **)(lVar18 + 0x260);
                uStack_150 = *(longlong *)(lVar18 + 0x268);
                local_148 = *(double *)(lVar18 + 0x270);
              }
              local_258 = local_258 & 0xffffff00;
              cVar10 = FUN_144a65b9e(lVar23 + 0x2c0,&local_158,&local_118,0);
              if (cVar10 != '\0') {
LAB_144342533:
                FUN_144343ad8(local_1a8,&local_128,1);
              }
            }
          }
          lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar22 * 8);
          if (*(char *)(lVar18 + 0x60) == '\0' && local_1f9 == 0) {
            FUN_148efed08(local_1a8,&local_128,1);
            lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar22 * 8);
          }
          if (((*(char *)(lVar18 + 0x61) == '\0') && (*(char *)(lVar18 + 0x60) == '\x01')) &&
             (cVar10 = (**(code **)(*local_208 + 0x6c8))(), plVar1 = local_1c8, cVar10 != '\0')) {
            if ((char)local_1cc == '\0') {
              uVar11 = *(uint *)((longlong)local_208 + 0xc);
              if ((int)uVar11 < DAT_14c9647dc) {
                lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
              }
              else {
                lVar18 = 0;
              }
              uVar15 = *(uint *)(lVar18 + 0x10);
              if (*(uint *)(lVar18 + 0x10) == 0) {
                LOCK();
                iVar12 = DAT_14c964868 + 1;
                UNLOCK();
                uVar30 = DAT_14c964868 + 1;
                bVar38 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar12;
                if (bVar38) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar30);
                }
                LOCK();
                uVar15 = *(uint *)(lVar18 + 0x10);
                bVar38 = uVar15 == 0;
                if (bVar38) {
                  *(uint *)(lVar18 + 0x10) = uVar30;
                  uVar15 = 0;
                }
                UNLOCK();
                lVar20 = local_1f8;
                if (bVar38) {
                  uVar15 = uVar30;
                }
              }
              local_158 = (uint *)CONCAT44(uVar15,uVar11);
              iVar12 = FUN_14120f730(plVar1,uVar11 ^ uVar15,&local_158);
              plVar24 = local_1f0;
              if (iVar12 == -1) {
                lVar18 = 0;
              }
              else {
                lVar18 = (longlong)iVar12 * 0x18 + *plVar1;
              }
              plVar1 = *(longlong **)(lVar18 + 8);
              if (plVar1 != (longlong *)0x0) {
                if (*plVar1 == 0) goto LAB_1443425ab;
                uVar11 = *(uint *)((longlong)local_208 + 0xc);
                if ((int)uVar11 < DAT_14c9647dc) {
                  lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                }
                else {
                  lVar18 = 0;
                }
                uVar15 = *(uint *)(lVar18 + 0x10);
                if (*(uint *)(lVar18 + 0x10) == 0) {
                  LOCK();
                  iVar12 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar30 = DAT_14c964868 + 1;
                  bVar38 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar12;
                  if (bVar38) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar30);
                  }
                  LOCK();
                  uVar15 = *(uint *)(lVar18 + 0x10);
                  bVar38 = uVar15 == 0;
                  if (bVar38) {
                    *(uint *)(lVar18 + 0x10) = uVar30;
                    uVar15 = 0;
                  }
                  UNLOCK();
                  if (bVar38) {
                    uVar15 = uVar30;
                  }
                }
                local_158 = (uint *)CONCAT44(uVar15,uVar11);
                iVar12 = FUN_1400ff362(plVar24,uVar11 ^ uVar15,&local_158);
                plVar19 = local_1e8;
                if (iVar12 == -1) {
                  lVar18 = 0;
                }
                else {
                  lVar18 = (longlong)iVar12 * 0x14 + *plVar24;
                }
                lVar20 = local_1f8;
                if (*(int *)(lVar18 + 8) != -1) {
                  puVar33 = *(undefined4 **)(*plVar1 + 8);
                  if (puVar33 == (undefined4 *)0x0) {
                    puVar33 = &DAT_14c9485f0;
                  }
                  if (DAT_14c947fe0 == 0) {
                    lVar18 = FUN_14001cc68(0x140,0x10);
                    FUN_1456b2032(lVar18);
                    DAT_14c947fe0 = lVar18;
                  }
                  FUN_140045924(DAT_14c947fe0,&local_158,puVar33,1);
                  lVar20 = local_1f8;
                  if (local_158 != (uint *)local_128) goto LAB_1443425ab;
                }
              }
              plVar1 = local_1f0;
              uVar11 = *(uint *)((longlong)local_208 + 0xc);
              if ((int)uVar11 < DAT_14c9647dc) {
                lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
              }
              else {
                lVar18 = 0;
              }
              uVar15 = *(uint *)(lVar18 + 0x10);
              if (*(uint *)(lVar18 + 0x10) == 0) {
                LOCK();
                iVar12 = DAT_14c964868 + 1;
                UNLOCK();
                uVar30 = DAT_14c964868 + 1;
                bVar38 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar12;
                if (bVar38) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar30);
                }
                LOCK();
                uVar15 = *(uint *)(lVar18 + 0x10);
                bVar38 = uVar15 == 0;
                if (bVar38) {
                  *(uint *)(lVar18 + 0x10) = uVar30;
                  uVar15 = 0;
                }
                UNLOCK();
                lVar20 = local_1f8;
                if (bVar38) {
                  uVar15 = uVar30;
                }
              }
              local_158 = (uint *)CONCAT44(uVar15,uVar11);
              iVar12 = FUN_1400ff362(plVar1,uVar11 ^ uVar15,&local_158);
              if (iVar12 == -1) {
                lVar18 = 0;
              }
              else {
                lVar18 = (longlong)iVar12 * 0x14 + *plVar1;
              }
              iVar12 = *(int *)(lVar18 + 8);
              uVar11 = *(uint *)((longlong)local_208 + 0xc);
              if ((int)uVar11 < DAT_14c9647dc) {
                lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
              }
              else {
                lVar18 = 0;
              }
              uVar15 = *(uint *)(lVar18 + 0x10);
              if (*(uint *)(lVar18 + 0x10) == 0) {
                LOCK();
                iVar14 = DAT_14c964868 + 1;
                UNLOCK();
                uVar30 = DAT_14c964868 + 1;
                bVar38 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar14;
                if (bVar38) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar30);
                }
                LOCK();
                uVar15 = *(uint *)(lVar18 + 0x10);
                bVar38 = uVar15 == 0;
                if (bVar38) {
                  *(uint *)(lVar18 + 0x10) = uVar30;
                  uVar15 = 0;
                }
                UNLOCK();
                lVar20 = local_1f8;
                if (bVar38) {
                  uVar15 = uVar30;
                }
              }
              plVar1 = local_1f0;
              local_158 = (uint *)CONCAT44(uVar15,uVar11);
              iVar14 = FUN_1400ff362(local_1f0,uVar11 ^ uVar15,&local_158);
              if (iVar14 == -1) {
                lVar18 = 0;
              }
              else {
                lVar18 = (longlong)iVar14 * 0x14 + *plVar1;
              }
              dVar4 = dVar4 - (double)CONCAT44(uVar49,uVar41);
              fVar40 = (float)(dVar4 * dVar4 + dVar9 * dVar9 + dVar5 * dVar5);
              fVar45 = *(float *)(lVar20 + 0x30) * *(float *)(lVar20 + 0x30);
              if ((-1 < *(int *)(lVar18 + 8)) || (fVar45 < fVar40)) {
                if (fVar45 < fVar40) {
                  uVar11 = *(uint *)((longlong)local_208 + 0xc);
                  if ((int)uVar11 < DAT_14c9647dc) {
                    lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                  }
                  else {
                    lVar18 = 0;
                  }
                  uVar15 = *(uint *)(lVar18 + 0x10);
                  if (*(uint *)(lVar18 + 0x10) == 0) {
                    LOCK();
                    iVar14 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar30 = DAT_14c964868 + 1;
                    bVar38 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar14;
                    if (bVar38) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar30);
                    }
                    LOCK();
                    uVar15 = *(uint *)(lVar18 + 0x10);
                    bVar38 = uVar15 == 0;
                    if (bVar38) {
                      *(uint *)(lVar18 + 0x10) = uVar30;
                      uVar15 = 0;
                    }
                    UNLOCK();
                    lVar20 = local_1f8;
                    plVar19 = local_1e8;
                    lVar22 = local_1e0;
                    if (bVar38) {
                      uVar15 = uVar30;
                    }
                  }
                  plVar24 = local_1f0;
                  local_158 = (uint *)CONCAT44(uVar15,uVar11);
                  iVar14 = FUN_1400ff362(local_1f0,uVar11 ^ uVar15,&local_158);
                  plVar1 = local_208;
                  if (iVar14 == -1) {
                    lVar18 = 0;
                  }
                  else {
                    lVar18 = (longlong)iVar14 * 0x14 + *plVar24;
                  }
                  *(undefined4 *)(lVar18 + 8) = 0xffffffff;
                  FUN_148ef978e(local_1c0,local_208,1);
                  uVar11 = *(uint *)((longlong)plVar1 + 0xc);
                  if ((int)uVar11 < DAT_14c9647dc) {
                    lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                  }
                  else {
                    lVar18 = 0;
                  }
                  uVar15 = *(uint *)(lVar18 + 0x10);
                  if (*(uint *)(lVar18 + 0x10) == 0) {
                    LOCK();
                    iVar14 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar30 = DAT_14c964868 + 1;
                    bVar38 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar14;
                    if (bVar38) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar30);
                    }
                    LOCK();
                    uVar15 = *(uint *)(lVar18 + 0x10);
                    bVar38 = uVar15 == 0;
                    if (bVar38) {
                      *(uint *)(lVar18 + 0x10) = uVar30;
                      uVar15 = 0;
                    }
                    UNLOCK();
                    lVar20 = local_1f8;
                    plVar19 = local_1e8;
                    lVar22 = local_1e0;
                    if (bVar38) {
                      uVar15 = uVar30;
                    }
                  }
                  plVar1 = local_1c8;
                  local_158 = (uint *)CONCAT44(uVar15,uVar11);
                  iVar14 = FUN_14120f730(local_1c8,uVar11 ^ uVar15,&local_158);
                  if (iVar14 == -1) {
                    lVar18 = 0;
                  }
                  else {
                    lVar18 = (longlong)iVar14 * 0x18 + *plVar1;
                  }
                  *(undefined8 *)(lVar18 + 8) = 0;
                  if (iVar12 != -1) {
                    fVar40 = *(float *)(param_1 + 0x288);
                    lVar18 = local_188;
                    goto joined_r0x0001443430f1;
                  }
                }
              }
              else {
                uVar11 = *(uint *)((longlong)local_208 + 0xc);
                if ((int)uVar11 < DAT_14c9647dc) {
                  lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                }
                else {
                  lVar18 = 0;
                }
                lVar20 = lVar22;
                uVar15 = *(uint *)(lVar18 + 0x10);
                if (*(uint *)(lVar18 + 0x10) == 0) {
                  LOCK();
                  iVar14 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar30 = DAT_14c964868 + 1;
                  bVar38 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar14;
                  if (bVar38) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar30);
                  }
                  LOCK();
                  uVar15 = *(uint *)(lVar18 + 0x10);
                  bVar38 = uVar15 == 0;
                  if (bVar38) {
                    *(uint *)(lVar18 + 0x10) = uVar30;
                    uVar15 = 0;
                  }
                  UNLOCK();
                  plVar19 = local_1e8;
                  lVar20 = local_1e0;
                  if (bVar38) {
                    uVar15 = uVar30;
                  }
                }
                plVar24 = local_1f0;
                local_158 = (uint *)CONCAT44(uVar15,uVar11);
                iVar14 = FUN_1400ff362(local_1f0,uVar11 ^ uVar15,&local_158);
                lVar18 = local_1c0;
                plVar1 = local_208;
                if (iVar14 == -1) {
                  lVar22 = 0;
                }
                else {
                  lVar22 = (longlong)iVar14 * 0x14 + *plVar24;
                }
                *(undefined4 *)(lVar22 + 8) = 0;
                FUN_148ef9728(local_1c0,local_208,iVar12 != 0);
                FUN_1443398b2(lVar18,plVar1,
                              *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar20 * 8));
                lVar18 = *(longlong *)(param_1 + 0xc0);
                local_15c = 0;
                local_160 = *(uint *)((longlong)plVar1 + 0xc);
                if ((int)local_160 < DAT_14c9647dc) {
                  lVar23 = (ulonglong)((local_160 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_160 >> 0x10) * 8);
                }
                else {
                  lVar23 = 0;
                }
                lVar22 = lVar20;
                iVar14 = *(int *)(lVar23 + 0x10);
                if (*(int *)(lVar23 + 0x10) == 0) {
                  LOCK();
                  iVar14 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar13 = DAT_14c964868 + 1;
                  bVar38 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar14;
                  if (bVar38) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar13);
                  }
                  LOCK();
                  iVar14 = *(int *)(lVar23 + 0x10);
                  bVar38 = iVar14 == 0;
                  if (bVar38) {
                    *(int *)(lVar23 + 0x10) = iVar13;
                    iVar14 = 0;
                  }
                  UNLOCK();
                  plVar19 = local_1e8;
                  lVar22 = local_1e0;
                  if (bVar38) {
                    iVar14 = iVar13;
                  }
                }
                local_158 = &local_160;
                local_15c = iVar14;
                uStack_150 = lVar20 * 8 + lVar18;
                FUN_148f027a4(local_1c8,local_11c,&local_158);
                lVar20 = local_1f8;
                if (iVar12 != 0) {
                  fVar40 = *(float *)(param_1 + 0x288);
                  lVar18 = local_180;
joined_r0x0001443430f1:
                  if (fVar40 <= 0.0) {
                    FUN_148efebeb(local_208,lVar18,&local_118,local_1b8);
                    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(local_1b0 + 0x140);
                  }
                }
              }
              uVar11 = *(uint *)((longlong)local_208 + 0xc);
              if ((int)uVar11 < DAT_14c9647dc) {
                lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
              }
              else {
                lVar18 = 0;
              }
              uVar15 = *(uint *)(lVar18 + 0x10);
              if (*(uint *)(lVar18 + 0x10) == 0) {
                LOCK();
                iVar14 = DAT_14c964868 + 1;
                UNLOCK();
                uVar30 = DAT_14c964868 + 1;
                bVar38 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar14;
                if (bVar38) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar30);
                }
                LOCK();
                uVar15 = *(uint *)(lVar18 + 0x10);
                bVar38 = uVar15 == 0;
                if (bVar38) {
                  *(uint *)(lVar18 + 0x10) = uVar30;
                  uVar15 = 0;
                }
                UNLOCK();
                lVar20 = local_1f8;
                if (bVar38) {
                  uVar15 = uVar30;
                }
              }
              plVar1 = local_1f0;
              local_158 = (uint *)CONCAT44(uVar15,uVar11);
              iVar14 = FUN_1400ff362(local_1f0,uVar11 ^ uVar15,&local_158);
              if (iVar14 == -1) {
                lVar18 = 0;
              }
              else {
                lVar18 = (longlong)iVar14 * 0x14 + *plVar1;
              }
              if (-1 < *(int *)(lVar18 + 8)) {
                dVar8 = dVar8 - (double)CONCAT44(uVar42,uVar39);
                fVar40 = (float)(dVar8 * dVar8 + dVar7 * dVar7 + dVar6 * dVar6);
                if (fVar40 <= *(float *)(lVar20 + 0x34) * *(float *)(lVar20 + 0x34)) {
                  uVar11 = *(uint *)((longlong)local_208 + 0xc);
                  if ((int)uVar11 < DAT_14c9647dc) {
                    lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                  }
                  else {
                    lVar18 = 0;
                  }
                  uVar15 = *(uint *)(lVar18 + 0x10);
                  if (*(uint *)(lVar18 + 0x10) == 0) {
                    LOCK();
                    iVar14 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar30 = DAT_14c964868 + 1;
                    bVar38 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar14;
                    if (bVar38) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar30);
                    }
                    LOCK();
                    uVar15 = *(uint *)(lVar18 + 0x10);
                    bVar38 = uVar15 == 0;
                    if (bVar38) {
                      *(uint *)(lVar18 + 0x10) = uVar30;
                      uVar15 = 0;
                    }
                    UNLOCK();
                    lVar20 = local_1f8;
                    if (bVar38) {
                      uVar15 = uVar30;
                    }
                  }
                  plVar1 = local_1f0;
                  local_158 = (uint *)CONCAT44(uVar15,uVar11);
                  iVar14 = FUN_1400ff362(local_1f0,uVar11 ^ uVar15,&local_158);
                  if (iVar14 == -1) {
                    lVar18 = 0;
                  }
                  else {
                    lVar18 = (longlong)iVar14 * 0x14 + *plVar1;
                  }
                  *(undefined4 *)(lVar18 + 8) = 1;
                  FUN_1443393a4(local_1c0,local_208,iVar12 != 1);
                  if (iVar12 != 1) {
                    fVar40 = *(float *)(param_1 + 0x288);
                    lVar18 = local_198;
joined_r0x000144342bbd:
                    if (fVar40 <= 0.0) {
                      FUN_148efebeb(local_208,lVar18,&local_118,local_1b8);
                      uVar41 = *(undefined4 *)(local_1b0 + 0x140);
LAB_14434300f:
                      *(undefined4 *)(param_1 + 0x288) = uVar41;
                    }
                  }
                }
                else if (fVar40 <= *(float *)(lVar20 + 0x38) * *(float *)(lVar20 + 0x38)) {
                  uVar11 = *(uint *)((longlong)local_208 + 0xc);
                  if ((int)uVar11 < DAT_14c9647dc) {
                    lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                  }
                  else {
                    lVar18 = 0;
                  }
                  uVar15 = *(uint *)(lVar18 + 0x10);
                  if (*(uint *)(lVar18 + 0x10) == 0) {
                    LOCK();
                    iVar14 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar30 = DAT_14c964868 + 1;
                    bVar38 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar14;
                    if (bVar38) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar30);
                    }
                    LOCK();
                    uVar15 = *(uint *)(lVar18 + 0x10);
                    bVar38 = uVar15 == 0;
                    if (bVar38) {
                      *(uint *)(lVar18 + 0x10) = uVar30;
                      uVar15 = 0;
                    }
                    UNLOCK();
                    lVar20 = local_1f8;
                    plVar19 = local_1e8;
                    lVar22 = local_1e0;
                    if (bVar38) {
                      uVar15 = uVar30;
                    }
                  }
                  plVar1 = local_1f0;
                  local_158 = (uint *)CONCAT44(uVar15,uVar11);
                  iVar14 = FUN_1400ff362(local_1f0,uVar11 ^ uVar15,&local_158);
                  if (iVar14 == -1) {
                    lVar18 = 0;
                  }
                  else {
                    lVar18 = (longlong)iVar14 * 0x14 + *plVar1;
                  }
                  *(undefined4 *)(lVar18 + 8) = 2;
                  FUN_1443394e8(local_1c0,local_208,iVar12 != 2);
                  if ((iVar12 != 2) && (*(float *)(param_1 + 0x288) <= 0.0)) {
                    lVar18 = local_1b0 + 0x80;
                    if (iVar12 < 2) {
                      lVar18 = local_198;
                    }
LAB_144342fed:
                    lVar23 = local_1b0;
                    FUN_148efebeb(local_208,lVar18,&local_118,local_1b8);
                    uVar41 = *(undefined4 *)(lVar23 + 0x140);
                    goto LAB_14434300f;
                  }
                }
                else {
                  uVar11 = *(uint *)((longlong)local_208 + 0xc);
                  if (fVar40 <= *(float *)(lVar20 + 0x3c) * *(float *)(lVar20 + 0x3c)) {
                    if ((int)uVar11 < DAT_14c9647dc) {
                      lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                    }
                    else {
                      lVar18 = 0;
                    }
                    uVar15 = *(uint *)(lVar18 + 0x10);
                    if (*(uint *)(lVar18 + 0x10) == 0) {
                      LOCK();
                      iVar14 = DAT_14c964868 + 1;
                      UNLOCK();
                      uVar30 = DAT_14c964868 + 1;
                      bVar38 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar14;
                      if (bVar38) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,uVar30);
                      }
                      LOCK();
                      uVar15 = *(uint *)(lVar18 + 0x10);
                      bVar38 = uVar15 == 0;
                      if (bVar38) {
                        *(uint *)(lVar18 + 0x10) = uVar30;
                        uVar15 = 0;
                      }
                      UNLOCK();
                      lVar20 = local_1f8;
                      plVar19 = local_1e8;
                      lVar22 = local_1e0;
                      if (bVar38) {
                        uVar15 = uVar30;
                      }
                    }
                    plVar1 = local_1f0;
                    local_158 = (uint *)CONCAT44(uVar15,uVar11);
                    iVar14 = FUN_1400ff362(local_1f0,uVar11 ^ uVar15,&local_158);
                    if (iVar14 == -1) {
                      lVar18 = 0;
                    }
                    else {
                      lVar18 = (longlong)iVar14 * 0x14 + *plVar1;
                    }
                    *(undefined4 *)(lVar18 + 8) = 3;
                    FUN_14433962c(local_1c0,local_208,iVar12 != 3);
                    if ((iVar12 != 3) && (*(float *)(param_1 + 0x288) <= 0.0)) {
                      lVar18 = local_1b0 + 0x80;
                      if (iVar12 < 1) {
                        lVar18 = local_1a0;
                      }
                      goto LAB_144342fed;
                    }
                  }
                  else {
                    if ((int)uVar11 < DAT_14c9647dc) {
                      lVar18 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                    }
                    else {
                      lVar18 = 0;
                    }
                    uVar15 = *(uint *)(lVar18 + 0x10);
                    if (*(uint *)(lVar18 + 0x10) == 0) {
                      LOCK();
                      iVar14 = DAT_14c964868 + 1;
                      UNLOCK();
                      uVar30 = DAT_14c964868 + 1;
                      bVar38 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar14;
                      if (bVar38) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,uVar30);
                      }
                      LOCK();
                      uVar15 = *(uint *)(lVar18 + 0x10);
                      bVar38 = uVar15 == 0;
                      if (bVar38) {
                        *(uint *)(lVar18 + 0x10) = uVar30;
                        uVar15 = 0;
                      }
                      UNLOCK();
                      lVar20 = local_1f8;
                      plVar19 = local_1e8;
                      lVar22 = local_1e0;
                      if (bVar38) {
                        uVar15 = uVar30;
                      }
                    }
                    plVar1 = local_1f0;
                    local_158 = (uint *)CONCAT44(uVar15,uVar11);
                    iVar14 = FUN_1400ff362(local_1f0,uVar11 ^ uVar15,&local_158);
                    if (iVar14 == -1) {
                      lVar18 = 0;
                    }
                    else {
                      lVar18 = (longlong)iVar14 * 0x14 + *plVar1;
                    }
                    *(undefined4 *)(lVar18 + 8) = 0;
                    FUN_144339770(local_1c0,local_208,iVar12 != 0);
                    if (iVar12 != 0) {
                      fVar40 = *(float *)(param_1 + 0x288);
                      lVar18 = local_1a0;
                      goto joined_r0x000144342bbd;
                    }
                  }
                }
              }
            }
            else {
              FUN_144343ad8(local_1a8,&local_128,1);
            }
          }
        }
LAB_1443425ab:
        plVar37 = plVar37 + 1;
      } while (plVar37 != plVar19);
    }
    if (local_138 != (longlong *)0x0) {
      FUN_1400020a8(local_138);
    }
  }
LAB_14434395d:
  if ((local_f0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144343ad8 FUN_144343ad8 body=682 status=ok
// SIG undefined FUN_144343ad8(void)

void FUN_144343ad8(longlong *param_1,undefined8 param_2,byte param_3,float param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined1 auStack_128 [44];
  float local_fc;
  undefined1 local_f8 [12];
  undefined1 local_ec [4];
  undefined8 local_e8;
  uint local_e0;
  float local_dc;
  longlong local_d8 [2];
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined2 local_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_dc = param_4;
  plVar2 = (longlong *)FUN_1403a1726();
  if (plVar2 != (longlong *)0x0) {
    cVar1 = FUN_1401144ce(plVar2 + 2);
    if (cVar1 != '\0') {
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_78 = plVar2[2];
      local_70 = (undefined4)plVar2[3];
      FUN_1447715ec(&local_68,plVar2 + 4);
      local_d8[0] = DAT_14cbe7060;
      FUN_1401533ba(local_f8,local_d8,1);
      FUN_144928d62(&local_68,5,local_f8);
      local_ec[0] = 1;
      local_e0 = (uint)param_3;
      puVar8 = &DAT_14cb7c580;
      if (param_3 != 0) {
        puVar8 = &DAT_14cb7c588;
      }
      local_e8 = *puVar8;
      if ((((param_3 != 0) && (lVar3 = *plVar2, lVar3 != 0)) && (*(char *)(lVar3 + 0x41) == '\x01'))
         && (*(char *)(lVar3 + 0x109) == '\x01')) {
        FUN_1446dcdd4(local_d8,(longlong)plVar2 + 0x6c);
        if (DAT_14cbc5818 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = FUN_144837462(DAT_14cbc5818,local_d8);
        }
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
        if (lVar3 != 0) {
          uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
          lVar5 = FUN_1406f612e(uVar4);
          if (lVar5 != 0) {
            lVar6 = FUN_14148eec0(lVar5,lVar3);
            if (lVar6 != 0) {
              FUN_148cfbba0(lVar5,lVar6,
                            *(undefined4 *)
                             (*(longlong *)(lVar3 + 0x498) +
                             (longlong)(*(int *)(lVar3 + 0x4a0) + -1) * 0x50));
            }
          }
        }
      }
      lVar3 = (**(code **)(*param_1 + 0x180))();
      if (lVar3 != 0) {
        local_d8[0] = 0;
        local_c8 = (longlong *)0x0;
        local_98 = 0;
        uStack_90 = 0;
        uStack_8e = 0;
        uStack_80 = 0;
        local_fc = (float)*(double *)(lVar3 + 0x6d0);
        pfVar7 = &local_fc;
        if (param_4 != -1.0) {
          pfVar7 = &local_dc;
        }
        if (NAN(param_4)) {
          pfVar7 = &local_dc;
        }
        local_88 = SUB82(pfVar7,0);
        uStack_86 = (undefined6)((ulonglong)pfVar7 >> 0x10);
        lVar3 = FUN_140149a73(lVar3,0);
        if (lVar3 != 0) {
          FUN_140bc53f1(&local_78,local_ec,lVar3,local_d8);
          if (local_d8[0] != 0) {
            plVar2 = local_c8;
            if (local_c8 == (longlong *)0x0) {
              plVar2 = local_b8;
            }
            (**(code **)(*plVar2 + 0x10))();
          }
        }
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144343d88 FUN_144343d88 body=289 status=ok
// SIG undefined FUN_144343d88(void)

void FUN_144343d88(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  int local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_1;
  if (((*(longlong *)(lVar2 + 0x18) == 0) || (*(longlong *)(lVar2 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(lVar2 + 0x20) + 8) < 1)) {
    uVar4 = FUN_1401cb356();
    FUN_148f02088(&local_48,lVar2);
    local_58 = 0;
    FUN_1405f67fc(uVar4,&local_38,&local_48,L"FOakVaultTrackableState.InitVaultTracking");
    *(undefined8 *)(lVar2 + 0x18) = local_38;
    local_38 = 0;
    plVar3 = *(longlong **)(lVar2 + 0x20);
    *(longlong **)(lVar2 + 0x20) = local_30;
    local_30 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
    }
    if (local_40 != 0) {
      if (local_48 == (undefined8 *)0x0) goto LAB_144343db9;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      local_40 = 0;
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144343db9:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144343ec2 FUN_144343ec2 body=444 status=ok
// SIG undefined FUN_144343ec2(void)

undefined8 * FUN_144343ec2(undefined8 param_1,undefined8 *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  int local_68 [6];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_148eff532(param_4);
  if (cVar2 == '\0') {
    local_78 = DAT_14cb8dd60;
    local_70 = DAT_14cb8dd68;
    FUN_1448075d0(local_68);
    iVar1 = *param_3;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (iVar1 != local_68[0]) {
      FUN_1489af54e(param_1,param_2,param_3,param_4);
      goto LAB_144343fed;
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
    *puVar3 = &PTR_FUN_14b0703c0;
    FUN_1447a97f4(puVar3 + 1,param_3);
    FUN_1447a97f4(puVar3 + 6,param_4);
    *(undefined1 *)(puVar3 + 0xb) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x5c) = 0;
    *(undefined8 *)((longlong)puVar3 + 100) = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0x4ade3d;
    *puVar3 = &PTR_FUN_14b9dc9d0;
    puVar3[0x11] = 0;
    *(undefined4 *)(puVar3 + 0x12) = 0xffffffff;
    *(undefined1 *)((longlong)puVar3 + 0x94) = 0;
    *(undefined1 *)(puVar3 + 0x14) = 0;
    *param_2 = puVar3;
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar4[1] = &DAT_100000001;
    ppuVar5 = &PTR_LAB_14b9dce70;
  }
  else {
    puVar3 = (undefined8 *)FUN_14001cc68(0x1b8,0x10);
    FUN_14587b022(puVar3,param_3,param_4);
    *param_2 = puVar3;
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar4[1] = &DAT_100000001;
    ppuVar5 = &PTR_LAB_14b9dce50;
  }
  *puVar4 = ppuVar5;
  puVar4[2] = puVar3;
  param_2[1] = puVar4;
LAB_144343fed:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144344080 FUN_144344080 body=319 status=ok
// SIG undefined FUN_144344080(void)

undefined8 * FUN_144344080(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  plVar2 = *(longlong **)(param_1 + 0x160);
  plVar3 = *(longlong **)(param_1 + 0x168);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  bVar4 = true;
  if (plVar2 != (longlong *)0x0) {
    lVar10 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar11 = FUN_144053ffa();
    if ((((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
         lVar11 + 0x30)) && ((char)plVar2[0xb] == '\x03')) {
      *param_2 = &PTR_FUN_14b0703c0;
      FUN_1447a97f4(param_2 + 1,plVar2 + 1);
      FUN_1447a97f4(param_2 + 6,plVar2 + 6);
      uVar5 = *(undefined4 *)((longlong)plVar2 + 0x5c);
      lVar9 = plVar2[0xc];
      uVar6 = *(undefined4 *)((longlong)plVar2 + 100);
      lVar10 = plVar2[0xd];
      lVar11 = plVar2[0xe];
      uVar7 = *(undefined8 *)((longlong)plVar2 + 0x74);
      uVar8 = *(undefined8 *)((longlong)plVar2 + 0x7c);
      *(int *)(param_2 + 0xb) = (int)plVar2[0xb];
      *(undefined4 *)((longlong)param_2 + 0x5c) = uVar5;
      *(int *)(param_2 + 0xc) = (int)lVar9;
      *(undefined4 *)((longlong)param_2 + 100) = uVar6;
      param_2[0xd] = lVar10;
      param_2[0xe] = lVar11;
      *(undefined8 *)((longlong)param_2 + 0x74) = uVar7;
      *(undefined8 *)((longlong)param_2 + 0x7c) = uVar8;
      *param_2 = &PTR_FUN_14b9dc9d0;
      param_2[0x11] = plVar2[0x11];
      *(undefined8 *)((longlong)param_2 + 0x8d) = *(undefined8 *)((longlong)plVar2 + 0x8d);
      lVar10 = plVar2[0x14];
      *(char *)(param_2 + 0x14) = (char)lVar10;
      if ((char)lVar10 == '\x01') {
        param_2[0x13] = plVar2[0x13];
      }
      *(undefined1 *)(param_2 + 0x15) = 1;
      bVar4 = false;
    }
  }
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
  if (bVar4) {
    *(undefined1 *)(param_2 + 0x15) = 0;
  }
  return param_2;
}



// FUNCTION 1443441e1 FUN_1443441e1 body=69 status=ok
// SIG undefined FUN_1443441e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443441e1(void)

{
  _DAT_14cbe6968 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144344223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe6970,1);
  return;
}



// FUNCTION 144344226 FUN_144344226 body=69 status=ok
// SIG undefined FUN_144344226(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144344226(void)

{
  _DAT_14cbe6980 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144344268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe6988,1);
  return;
}



// FUNCTION 14434426b FUN_14434426b body=69 status=ok
// SIG undefined FUN_14434426b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14434426b(void)

{
  _DAT_14cbe6998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443442ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe69a0,1);
  return;
}



// FUNCTION 1443442b0 FUN_1443442b0 body=674 status=ok
// SIG undefined FUN_1443442b0(void)

bool FUN_1443442b0(undefined8 param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  void *_Src;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  ulonglong uStack_58;
  void *local_50;
  ulonglong uStack_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((((*(int *)(param_3 + 4) < 2 && *(int *)(param_3 + 0x24) < 1) ||
         (*(int *)(param_3 + 4) != 4)) ||
        (piVar2 = *(int **)(param_3 + 0x18), *piVar2 != DAT_14cb8dd18)) ||
       ((piVar2[2] != DAT_14cb8dd20 || (piVar2[6] != DAT_14cb8dd48)))) ||
      (piVar2[8] != DAT_14cb8dd4c._4_4_)) ||
     (((piVar2[3] != DAT_14cb8dd30 || (piVar2[5] != DAT_14cb8dd38)) &&
      ((piVar2[3] != DAT_14cbe6758 || (piVar2[5] != DAT_14cbe6760)))))) {
    bVar8 = false;
    goto LAB_1443443fa;
  }
  FUN_1408226d0(piVar2 + 9,&local_60,1);
  cVar6 = FUN_140c540b4(&local_60,&DAT_14b9dc810,2,1);
  if (cVar6 == '\0') {
LAB_14434441d:
    bVar8 = false;
  }
  else {
    cVar6 = FUN_1405b43cc(&local_60);
    if (cVar6 == '\0') goto LAB_14434441d;
    if ((piVar2[3] == DAT_14cbe6758) && (piVar2[5] == DAT_14cbe6760)) {
      FUN_1408226d0(&DAT_14cbe6758,&local_70,1);
      _Src = local_60;
      uVar4 = uStack_68;
      iVar3 = (int)uStack_68;
      if ((int)uStack_68 < 2) {
        local_50 = (void *)0x0;
        uStack_48 = CONCAT44(uStack_48._4_4_,(int)uStack_58);
        if ((longlong)(int)uStack_58 == 0) {
          uStack_48 = uStack_58 & 0xffffffff;
        }
        else {
          FUN_1446dd670(&local_50,uStack_58 & 0xffffffff,0);
          memcpy(local_50,_Src,(longlong)(int)uStack_58 * 2);
        }
      }
      else {
        iVar7 = (int)uStack_58 + -1;
        if ((int)uStack_58 == 0) {
          iVar7 = 0;
        }
        local_50 = local_70;
        iVar5 = uStack_68._4_4_;
        local_70 = (void *)0x0;
        uStack_68 = 0;
        uStack_48 = uVar4;
        iVar1 = iVar7 + iVar3;
        if (iVar1 < iVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar7);
        }
        if (iVar5 < iVar1) {
          FUN_1446f8c06(&local_50);
        }
        FUN_1400020e8(&local_50,local_60,iVar7);
      }
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_60 = local_50;
      uStack_58 = uStack_48;
      local_50 = (void *)0x0;
      uStack_48 = 0;
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_14000bbd8(&local_50,&local_60,0);
    FUN_1404e49fa(param_4,&local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    bVar8 = false;
    if ((*param_4 != 0) && (param_4[1] != 0)) {
      bVar8 = *param_4 != DAT_14c948000;
    }
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1443443fa:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144344554 FUN_144344554 body=401 status=ok
// SIG undefined FUN_144344554(void)

undefined4
FUN_144344554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_1400b2348(param_3,&local_48,1);
  FUN_1408226d0(&DAT_14cbe6758,&local_58,1);
  iVar4 = local_50 + -1;
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
    iVar4 = 0;
  }
  cVar1 = FUN_140c540b4(&local_48,puVar3,iVar4,1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = FUN_1405b43cc(&local_48);
  if ((char)uVar2 != '\0') {
    FUN_1447715ec(param_4,&DAT_14c9485f0);
    FUN_144928d62(param_4,0,&DAT_14cb8dd18);
    puVar5 = &DAT_14cb8dd30;
    if (cVar1 != '\0') {
      puVar5 = &DAT_14cbe6758;
    }
    FUN_144928d62(param_4,1,puVar5);
    FUN_144928d62(param_4,2,&DAT_14cb8dd48);
    puVar3 = &DAT_149dfb77a;
    if ((int)uStack_40 != 0) {
      puVar3 = local_48;
    }
    FUN_140002266(&local_58,L"c_%ls",puVar3);
    puVar3 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar3 = local_58;
    }
    FUN_1446f470e(&local_60,puVar3,1);
    FUN_1402b5374(param_4,3,local_60);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443446e6 FUN_1443446e6 body=229 status=ok
// SIG undefined FUN_1443446e6(void)

undefined8 * FUN_1443446e6(undefined8 param_1,undefined8 *param_2,short *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_3 < 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xffff;
  lVar1 = FUN_140b9fe48(param_1,param_3,&local_58);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if ((DAT_14cbe6834 == DAT_14c948034) && (DAT_14cbe6830 != DAT_14c948030)) {
      FUN_14011791e(&local_38,DAT_14cbe6830,DAT_14cbe6834 >> 0x20);
      DAT_14cbe6834 = local_38;
    }
    FUN_1416b4a92(lVar1,param_2,&local_58,&DAT_14cbe6834);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443447ce FUN_1443447ce body=69 status=ok
// SIG undefined FUN_1443447ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1443447ce(void)

{
  _DAT_14cbe69b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144344810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbe69b8,1);
  return;
}



// FUNCTION 144344814 FUN_144344814 body=129 status=ok
// SIG undefined FUN_144344814(void)

undefined8 * FUN_144344814(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0703c0;
  FUN_1447a97f4(param_1 + 1,&DAT_14c9485f0);
  FUN_1447a97f4(param_1 + 6,&DAT_14c9485f0);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x4ade3d;
  *param_1 = &PTR_FUN_14b9dc9d0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 144344896 FUN_144344896 body=1400 status=ok
// SIG undefined FUN_144344896(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144344896(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_58;
  uint local_48 [6];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_143e5f0e4();
  local_68 = DAT_14cb8dd20;
  local_70 = _DAT_14cb8dd18;
  FUN_1448075d0(local_48);
  pbVar7 = (byte *)*param_3;
  puVar10 = &DAT_14c9a1308;
  if (pbVar7 != (byte *)0x0) {
    if ((*pbVar7 & 2) == 0) {
      plVar5 = &DAT_14c9a1288;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(pbVar7 + 8) + 0x18);
    }
    puVar10 = &DAT_14c9a1308;
    if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
      plVar8 = plVar5 + 8;
      if ((longlong *)plVar5[9] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar5[9];
      }
      iVar11 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar5[10] - 1U & local_48[0]) * 4);
      puVar10 = &DAT_14c9a1308;
      if (iVar11 != -1) {
        do {
          lVar1 = *plVar5 + (longlong)iVar11 * 0x40;
          if (*(uint *)(*plVar5 + (longlong)iVar11 * 0x40) == local_48[0]) {
            puVar10 = &DAT_14c9a1308;
            if (lVar1 == 0) goto LAB_14434497f;
            puVar4 = (undefined8 *)(lVar1 + 0x28);
            puVar10 = &DAT_14c9a1308;
            if ((puVar4 == (undefined8 *)0x0) ||
               (((byte *)*puVar4 != (byte *)0x0 &&
                (puVar10 = puVar4, (*(byte *)*puVar4 & 0x40) == 0)))) goto LAB_14434497f;
            break;
          }
          iVar11 = *(int *)(lVar1 + 0x38);
        } while (iVar11 != -1);
        puVar10 = &DAT_14c9a1308;
      }
    }
  }
LAB_14434497f:
  local_78 = DAT_14cb8dd38;
  local_80 = _DAT_14cb8dd30;
  FUN_1448075d0(&local_70);
  pbVar7 = (byte *)*puVar10;
  if (pbVar7 != (byte *)0x0) {
    if ((*pbVar7 & 2) == 0) {
      plVar5 = &DAT_14c9a1288;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(pbVar7 + 8) + 0x18);
    }
    if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
      plVar8 = plVar5 + 8;
      if ((longlong *)plVar5[9] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar5[9];
      }
      iVar11 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar5[10] - 1U & (uint)local_70) * 4);
      if (iVar11 != -1) {
        do {
          lVar1 = *plVar5 + (longlong)iVar11 * 0x40;
          if (*(uint *)(*plVar5 + (longlong)iVar11 * 0x40) == (uint)local_70) {
            if ((((lVar1 != 0) &&
                 (puVar10 = (undefined8 *)(lVar1 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
            goto LAB_144344a20;
            break;
          }
          iVar11 = *(int *)(lVar1 + 0x38);
        } while (iVar11 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_144344a20:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  pbVar7 = (byte *)*puVar10;
  if ((pbVar7 != (byte *)0x0) && ((*pbVar7 & 0x6b) == 3)) {
    lVar1 = *(longlong *)(pbVar7 + 8);
    puVar4 = &DAT_14c9a1308;
    if (*(int *)(lVar1 + 0x28) != *(int *)(lVar1 + 0x54)) {
      lVar6 = lVar1 + 0x58;
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        lVar6 = *(longlong *)(lVar1 + 0x60);
      }
      iVar11 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar1 + 0x68) - 1U & DAT_14cb78700) * 4);
      puVar4 = &DAT_14c9a1308;
      if (iVar11 != -1) {
        do {
          lVar6 = *(longlong *)(lVar1 + 0x18) + (longlong)iVar11 * 0x40;
          if (*(uint *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar11 * 0x40) == DAT_14cb78700) {
            puVar4 = &DAT_14c9a1308;
            if (lVar6 == 0) goto LAB_144344add;
            puVar9 = (undefined8 *)(lVar6 + 0x28);
            puVar4 = &DAT_14c9a1308;
            if ((puVar9 == (undefined8 *)0x0) ||
               (((byte *)*puVar9 != (byte *)0x0 && (puVar4 = puVar9, (*(byte *)*puVar9 & 0x40) == 0)
                ))) goto LAB_144344add;
            break;
          }
          iVar11 = *(int *)(lVar6 + 0x38);
        } while (iVar11 != -1);
        puVar4 = &DAT_14c9a1308;
      }
    }
LAB_144344add:
    uVar3 = FUN_143d1c4a2(puVar4);
    *(undefined4 *)(param_1 + 0x88) = uVar3;
    pbVar7 = (byte *)*puVar10;
    if (pbVar7 != (byte *)0x0) {
      if ((*pbVar7 & 2) == 0) {
        plVar5 = &DAT_14c9a1288;
      }
      else {
        plVar5 = (longlong *)(*(longlong *)(pbVar7 + 8) + 0x18);
      }
      if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
        plVar8 = plVar5 + 8;
        if ((longlong *)plVar5[9] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar5[9];
        }
        iVar11 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar5[10] - 1U & DAT_14cb89d18) * 4);
        if (iVar11 != -1) {
          do {
            lVar1 = *plVar5 + (longlong)iVar11 * 0x40;
            if (*(uint *)(*plVar5 + (longlong)iVar11 * 0x40) == DAT_14cb89d18) {
              if ((((lVar1 != 0) &&
                   (puVar4 = (undefined8 *)(lVar1 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar4 != (byte *)0x0)) && ((*(byte *)*puVar4 & 0x40) == 0))
              goto LAB_144344b6d;
              break;
            }
            iVar11 = *(int *)(lVar1 + 0x38);
          } while (iVar11 != -1);
        }
      }
    }
    puVar4 = &DAT_14c9a1308;
LAB_144344b6d:
    pbVar2 = (byte *)*puVar4;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x6b) == 3)) {
      lVar1 = *(longlong *)(pbVar2 + 8);
      if (*(int *)(lVar1 + 0x28) != *(int *)(lVar1 + 0x54)) {
        lVar6 = lVar1 + 0x58;
        if (*(longlong *)(lVar1 + 0x60) != 0) {
          lVar6 = *(longlong *)(lVar1 + 0x60);
        }
        iVar11 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar1 + 0x68) - 1U & DAT_14cb89d40) * 4);
        if (iVar11 != -1) {
          do {
            lVar6 = *(longlong *)(lVar1 + 0x18) + (longlong)iVar11 * 0x40;
            if (*(uint *)(*(longlong *)(lVar1 + 0x18) + (longlong)iVar11 * 0x40) == DAT_14cb89d40) {
              if (((lVar6 != 0) &&
                  (puVar4 = (undefined8 *)(lVar6 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                 (((byte *)*puVar4 != (byte *)0x0 && ((*(byte *)*puVar4 & 0x40) == 0))))
              goto LAB_144344c01;
              break;
            }
            iVar11 = *(int *)(lVar6 + 0x38);
          } while (iVar11 != -1);
        }
      }
      puVar4 = &DAT_14c9a1308;
LAB_144344c01:
      if (((byte *)*puVar4 != (byte *)0x0) && ((*(byte *)*puVar4 & 0x6b) == 3)) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cbe69e8) {
          FUN_144b3d300(&DAT_14cbe69e8);
          if (DAT_14cbe69e8 == -1) {
            _DAT_14cbe69c0 = 0;
            uRam000000014cbe69c8 = 0;
            _DAT_14cbe69d0 = 0;
            DAT_14cbe69d8 = 0;
            uRam000000014cbe69e0 = 0;
            FUN_1446ddda2(&DAT_14cbe69c0,"EchoTokenProgressPoints",0);
            atexit((_func_5014 *)&LAB_144344e0f);
            _Init_thread_footer(&DAT_14cbe69e8);
          }
        }
        pbVar7 = (byte *)*puVar4;
        if (pbVar7 != (byte *)0x0) {
          if ((*pbVar7 & 2) == 0) {
            plVar5 = &DAT_14c9a1288;
          }
          else {
            plVar5 = (longlong *)(*(longlong *)(pbVar7 + 8) + 0x18);
          }
          if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
            plVar8 = plVar5 + 8;
            if ((longlong *)plVar5[9] != (longlong *)0x0) {
              plVar8 = (longlong *)plVar5[9];
            }
            iVar11 = *(int *)((longlong)plVar8 +
                             (ulonglong)((int)plVar5[10] - 1U & DAT_14cbe69c0) * 4);
            if (iVar11 != -1) {
              do {
                lVar1 = *plVar5 + (longlong)iVar11 * 0x40;
                if (*(uint *)(*plVar5 + (longlong)iVar11 * 0x40) == DAT_14cbe69c0) {
                  if ((((lVar1 != 0) &&
                       (puVar4 = (undefined8 *)(lVar1 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                      ((byte *)*puVar4 != (byte *)0x0)) && ((*(byte *)*puVar4 & 0x40) == 0))
                  goto LAB_144344cca;
                  break;
                }
                iVar11 = *(int *)(lVar1 + 0x38);
              } while (iVar11 != -1);
            }
          }
        }
        puVar4 = &DAT_14c9a1308;
LAB_144344cca:
        uVar3 = FUN_140e1edd4(puVar4,0);
        *(undefined4 *)(param_1 + 0x8c) = uVar3;
        pbVar7 = (byte *)*puVar10;
      }
    }
    if (pbVar7 == (byte *)0x0) {
      puVar10 = &DAT_14c9a1308;
    }
    else {
      puVar10 = (undefined8 *)FUN_1446e60f4(pbVar7,&DAT_14cb89640);
    }
    if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 0x6b) == 3)) {
      uVar3 = FUN_1441fe11a(puVar10);
      *(undefined4 *)(param_1 + 0x90) = uVar3;
    }
  }
  if ((*(char *)(param_1 + 0x94) != '\0') || (*(char *)(param_1 + 0xa0) == '\0')) {
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x70);
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144344e64 FUN_144344e64 body=1344 status=ok
// SIG undefined FUN_144344e64(void)

undefined8 FUN_144344e64(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)FUN_1400e8a68(param_3);
  plVar4 = (longlong *)FUN_14020958c(param_3);
  plVar5 = (longlong *)FUN_1447262c2(param_3);
  if (plVar5 == (longlong *)0x0) {
LAB_144344edb:
    plVar5 = (longlong *)0x0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
        DAT_14cbadd90 + 0x30)) goto LAB_144344edb;
  }
  lVar6 = FUN_1447262c2(param_3);
  if (lVar6 == 0) {
LAB_144344f0d:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_140b96ea6();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_144344f0d;
  }
  if (plVar3 != (longlong *)0x0 && plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*plVar3 + 0x5d8))(plVar3);
    if (plVar5 != (longlong *)0x0) {
      if (DAT_14cbadd90 == 0) {
        local_60 = &local_48;
        local_48 = FUN_141030f22;
        local_50 = FUN_14081d0ea;
        local_58 = &LAB_1459f2e4c;
        local_68 = &LAB_148c39de3;
        local_70 = &LAB_1457a9eb2;
        local_78 = &DAT_149e063b2;
        local_80 = 0;
        local_88 = 0x10000004;
        local_90 = 0x10;
        local_98 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
          DAT_14cbadd90 + 0x30)) goto LAB_144344f61;
    }
    plVar5 = (longlong *)0x0;
  }
LAB_144344f61:
  if (plVar4 == (longlong *)0x0 && plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar3 + 0x5f8))(plVar3);
    if (plVar4 != (longlong *)0x0) {
      lVar7 = FUN_1402095ca();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)) goto LAB_144344fac;
    }
    plVar4 = (longlong *)0x0;
LAB_144345075:
    if ((plVar5 != (longlong *)0x0) && (plVar4 == (longlong *)0x0)) {
      plVar4 = (longlong *)plVar5[0x733];
      if ((plVar4 == (longlong *)0x0) ||
         ((bVar1 = *(byte *)((longlong)plVar4 + 0x65), (bVar1 & 2) != 0 ||
          ((*(byte *)(plVar4 + 0x69) & 2) != 0)))) {
        plVar4 = (longlong *)(**(code **)(*plVar5 + 0x5f8))(plVar5);
        if (plVar4 != (longlong *)0x0) {
          lVar6 = FUN_1402095ca();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
              == lVar6 + 0x30)) goto LAB_1443450cd;
        }
      }
      else {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(plVar4);
          plVar4 = (longlong *)plVar5[0x733];
          if (plVar4 == (longlong *)0x0) goto LAB_144345126;
          bVar1 = *(byte *)((longlong)plVar4 + 0x65);
        }
        if (((bVar1 & 2) == 0) && ((*(byte *)(plVar4 + 0x69) & 2) == 0)) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(plVar4);
          }
          goto LAB_1443450cd;
        }
      }
LAB_144345126:
      if (*(char *)((longlong)plVar5 + 0x3995) != '\x01') goto LAB_144345217;
      FUN_140a9b590(plVar5 + 0x722,&local_48,1);
      if (local_40 == 0) {
        uVar8 = FUN_14037df6e();
        local_40 = FUN_14477b664(uVar8);
      }
      if (local_38 == (longlong *)0x0) {
        local_38 = (longlong *)0x0;
        if ((local_40 != 0) && (local_38 = (longlong *)0x0, local_48 != (code *)0x0)) {
          plVar4 = *(longlong **)(local_40 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar2 == '\0')) {
            local_38 = (longlong *)0x0;
          }
          else {
            uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
            local_38 = (longlong *)FUN_144aff482(uVar8,&local_48);
          }
        }
      }
      goto LAB_1443451c4;
    }
    if (plVar4 != (longlong *)0x0) goto LAB_1443450cd;
    if (plVar5 != (longlong *)0x0) goto LAB_144345126;
    if ((lVar6 == 0) || (local_38 = *(longlong **)(lVar6 + 0x3f0), local_38 == (longlong *)0x0))
    goto LAB_144345217;
    lVar6 = (**(code **)(*local_38 + 8))(local_38);
    lVar7 = FUN_14037df6e();
    if ((lVar7 == 0) ||
       ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
         lVar7 + 0x30)))) goto LAB_144345217;
  }
  else {
LAB_144344fac:
    if ((plVar5 != (longlong *)0x0) || (plVar4 == (longlong *)0x0)) goto LAB_144345075;
    lVar6 = (**(code **)(*plVar4 + 0x5d8))(plVar4);
    if ((lVar6 != 0) && (DAT_14cbadd90 == 0)) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
LAB_1443450cd:
    if (plVar4[0x2e2] == 0) goto LAB_144345217;
    local_38 = (longlong *)plVar4[0x340];
LAB_1443451c4:
    if (local_38 == (longlong *)0x0) {
LAB_144345217:
      uVar8 = 0;
      goto LAB_144345219;
    }
  }
  uVar8 = CONCAT71((int7)((ulonglong)local_38[0x20] >> 8),
                   local_38[0x20] == *(longlong *)(param_1 + 0x10));
LAB_144345219:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1443453de FUN_1443453de body=41 status=ok
// SIG undefined FUN_1443453de(void)

void FUN_1443453de(void)

{
  DAT_14cbe6ae0 = 0;
  if (DAT_14cbe6ad8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69c2c();
  return;
}



// FUNCTION 144345445 FUN_144345445 body=41 status=ok
// SIG undefined FUN_144345445(void)

void FUN_144345445(void)

{
  DAT_14cbe6bf0 = 0;
  if (DAT_14cbe6be8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69cca();
  return;
}



// FUNCTION 1443454c4 FUN_1443454c4 body=41 status=ok
// SIG undefined FUN_1443454c4(void)

void FUN_1443454c4(void)

{
  DAT_14cbe6e50 = 0;
  if (DAT_14cbe6e48 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69d68();
  return;
}



// FUNCTION 1443454f2 FUN_1443454f2 body=160 status=ok
// SIG undefined FUN_1443454f2(void)

longlong FUN_1443454f2(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar2 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xd8);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & param_2 & 0xff) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x98);
      iVar3 = iVar1;
      do {
        if (*(char *)(lVar2 + (longlong)iVar3 * 0xa0) == (char)param_2) {
          goto LAB_144345563;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0xa0 + lVar2 + 0x98);
      } while (iVar3 != -1);
    }
  }
  goto LAB_144345503;
  while (iVar1 = *(int *)(param_1 + 0x98), param_1 = 0, iVar1 != -1) {
LAB_144345563:
    param_1 = lVar2 + (longlong)iVar1 * 0xa0;
    if (*(char *)(lVar2 + (longlong)iVar1 * 0xa0) == (char)param_2) break;
  }
LAB_144345503:
  return param_1 + 8;
}



// FUNCTION 144345652 FUN_144345652 body=318 status=ok
// SIG undefined FUN_144345652(void)

void FUN_144345652(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_1 + 0xa0)) {
    FUN_14053d8da(param_1 + 0x98,1);
  }
  FUN_1411cf6d8(param_1,&local_38,1);
  if ((local_38 == 0 || local_30 != 0) && (local_38 == 0 || local_30 == 0)) goto LAB_144345747;
  FUN_1411cf6d8(param_1,&local_38,1);
  if (local_30 == 0) {
    uVar4 = FUN_140aff5aa();
    local_30 = FUN_14477b664(uVar4);
  }
  if (local_28 == 0) {
    if (((local_38 == 0) || (local_30 == 0)) ||
       (plVar1 = *(longlong **)(local_30 + 0xb8), plVar1 == (longlong *)0x0)) goto LAB_144345747;
    cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar3 == '\0') goto LAB_144345747;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_28 = FUN_144aff482(uVar4,&local_38);
    if (local_28 == 0) goto LAB_144345747;
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x65) & 2) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0xf48);
  }
  FUN_145812cc0(local_28,param_1 + 0x98,uVar4);
LAB_144345747:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144345792 FUN_144345792 body=91 status=ok
// SIG undefined FUN_144345792(void)

undefined8 * FUN_144345792(undefined8 *param_1,int param_2)

{
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  *param_1 = &PTR_FUN_14b0703c0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144345856 FUN_144345856 body=1937 status=ok
// SIG undefined FUN_144345856(void)

void FUN_144345856(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *_Src;
  void *_Dst;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  undefined1 auStack_108 [40];
  ulonglong local_e0;
  undefined8 local_d8;
  undefined1 local_cc [4];
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_2 + 0x10a) == '\0') {
    lVar4 = *(longlong *)(*param_1 + 8);
    puVar22 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar22 = *(undefined4 **)(param_2 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar12 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar12);
      DAT_14c947fe0 = lVar12;
    }
    FUN_140045924(DAT_14c947fe0,&local_d8,puVar22,1);
    plVar1 = (longlong *)(lVar4 + 0xa0);
    iVar14 = *(int *)(lVar4 + 0xa8);
    iVar23 = *(int *)(lVar4 + 0xd4);
    if (iVar14 != iVar23) {
      lVar12 = *(longlong *)(param_2 + 0x98);
      uVar9 = (uint)((ulonglong)lVar12 >> 0x10);
      uVar19 = (uint)lVar12 & 0xffff;
      lVar16 = lVar4 + 0xd8;
      if (*(longlong *)(lVar4 + 0xe0) != 0) {
        lVar16 = *(longlong *)(lVar4 + 0xe0);
      }
      iVar8 = *(int *)(lVar16 + (ulonglong)
                                (*(int *)(lVar4 + 0xe8) - 1U &
                                (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar19) +
                                (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar19 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          if (*(longlong *)(*plVar1 + (longlong)iVar8 * 0x60) == lVar12) goto LAB_144345994;
          iVar8 = *(int *)((longlong)iVar8 * 0x60 + *plVar1 + 0x58);
        } while (iVar8 != -1);
      }
    }
    local_c8 = (longlong *)(param_2 + 0x98);
    FUN_145afa76a(plVar1,local_cc);
    lVar12 = *(longlong *)(param_2 + 0x98);
    iVar14 = *(int *)(lVar4 + 0xa8);
    iVar23 = *(int *)(lVar4 + 0xd4);
LAB_144345994:
    if (iVar14 != iVar23) {
      uVar9 = (uint)((ulonglong)lVar12 >> 0x10);
      uVar19 = (uint)lVar12 & 0xffff;
      lVar16 = lVar4 + 0xd8;
      if (*(longlong *)(lVar4 + 0xe0) != 0) {
        lVar16 = *(longlong *)(lVar4 + 0xe0);
      }
      iVar14 = *(int *)(lVar16 + (ulonglong)
                                 (*(int *)(lVar4 + 0xe8) - 1U &
                                 (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar19)
                                 + (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar19 >> 4)) * 4);
      if (iVar14 != -1) {
        do {
          lVar16 = *plVar1 + (longlong)iVar14 * 0x60;
          if (*(longlong *)(*plVar1 + (longlong)iVar14 * 0x60) == lVar12) goto LAB_144345a0e;
          iVar14 = *(int *)(lVar16 + 0x58);
        } while (iVar14 != -1);
      }
    }
    lVar16 = 0;
LAB_144345a0e:
    plVar1 = (longlong *)(lVar16 + 8);
    if (*(int *)(lVar16 + 0x3c) == 0) {
      iVar14 = *(int *)(lVar16 + 0x10);
      *(int *)(lVar16 + 0x10) = iVar14 + 1;
      if (*(int *)(lVar16 + 0x14) == iVar14) {
        FUN_140f20a84(plVar1,iVar14);
      }
      iVar23 = *(int *)(lVar16 + 0x30);
      if (iVar23 == 0) {
        iVar8 = -1;
      }
      else {
        iVar8 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar8 = iVar23 + -1;
        }
        iVar8 = iVar8 >> 5;
      }
      lVar20 = lVar16 + 0x18;
      iVar15 = iVar23 + 1;
      iVar25 = iVar23 + 0x1f;
      if (-1 < iVar23) {
        iVar25 = iVar23;
      }
      if (iVar25 >> 5 == iVar8) {
        *(int *)(lVar16 + 0x30) = iVar15;
      }
      else {
        if (*(int *)(lVar16 + 0x34) <= iVar23) {
          iVar8 = iVar23;
          if (iVar23 + 0x20U < 0xa0) {
            iVar15 = 0x80;
          }
          else {
            uVar9 = iVar23 + 0x20U >> 5;
            if (*(int *)(lVar16 + 0x34) + 0x1fU < 0xa0) {
              uVar19 = 4;
              if (4 < uVar9) {
                uVar19 = uVar9;
              }
            }
            else {
              uVar19 = uVar9 + (uVar9 * 3 >> 3) + 0x10;
            }
            uVar17 = (ulonglong)(uVar19 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar10 = (uint)(uVar17 + 0xf);
                if (uVar19 < 0x1ffd) {
                  uVar17 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar17 + 0xf >> 4]];
                }
                else {
                  uVar18 = (ulonglong)(uVar10 & 0xfffffff0);
                  if (uVar18 < 0x7ff1) {
                    bVar13 = (&DAT_14c841e00)[uVar10 >> 4];
                    uVar21 = 0x32;
                    if (0x32 < bVar13) {
                      uVar21 = (ulonglong)bVar13;
                    }
                    uVar24 = 0x32 - (ulonglong)bVar13;
                    do {
                      uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar24 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar24 & 0xffffffff] & 0xf) == 0) goto LAB_144345e6f;
                      lVar12 = uVar21 + 1 + uVar24;
                      uVar24 = uVar24 - 1;
                    } while (lVar12 != 0x33);
                  }
                  uVar17 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar17 = (ulonglong)DAT_14c841df8;
                  }
                  uVar17 = -uVar17 & (uVar18 + uVar17) - 1;
                }
              }
              else {
                local_e0 = (ulonglong)uVar9;
                uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                uVar9 = (uint)local_e0;
                iVar8 = *(int *)(lVar16 + 0x30);
              }
            }
LAB_144345e6f:
            iVar11 = (int)(uVar17 >> 2);
            iVar15 = -0x20;
            if ((int)uVar9 <= iVar11) {
              iVar15 = iVar11 << 5;
            }
          }
          *(int *)(lVar16 + 0x34) = iVar15;
          FUN_1446efbd8(lVar20,iVar8);
          iVar15 = *(int *)(lVar16 + 0x30) + 1;
        }
        iVar8 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar8 = iVar15;
        }
        *(int *)(lVar16 + 0x30) = iVar15;
        if (iVar15 % 0x20 != 0) {
          lVar12 = *(longlong *)(lVar16 + 0x28);
          if (*(longlong *)(lVar16 + 0x28) == 0) {
            lVar12 = lVar20;
          }
          bVar13 = -(char)(iVar15 % 0x20);
          *(uint *)(lVar12 + (longlong)(iVar8 >> 5) * 4) =
               (uint)(*(int *)(lVar12 + (longlong)(iVar8 >> 5) * 4) << (bVar13 & 0x1f)) >>
               (bVar13 & 0x1f);
        }
      }
      lVar12 = (longlong)iVar14;
      if (*(longlong *)(lVar16 + 0x28) != 0) {
        lVar20 = *(longlong *)(lVar16 + 0x28);
      }
      bVar13 = (byte)iVar23 & 0x1f;
      puVar2 = (uint *)(lVar20 + (longlong)(iVar25 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
    }
    else {
      iVar14 = *(int *)(lVar16 + 0x38);
      lVar12 = (longlong)iVar14;
      iVar23 = *(int *)(*(longlong *)(lVar16 + 8) + 4 + lVar12 * 0x90);
      *(int *)(lVar16 + 0x38) = iVar23;
      iVar8 = *(int *)(lVar16 + 0x3c) + -1;
      *(int *)(lVar16 + 0x3c) = iVar8;
      if (iVar8 != 0) {
        *(undefined4 *)(*(longlong *)(lVar16 + 8) + (longlong)iVar23 * 0x90) = 0xffffffff;
      }
    }
    lVar20 = lVar16 + 0x18;
    if (*(longlong *)(lVar16 + 0x28) != 0) {
      lVar20 = *(longlong *)(lVar16 + 0x28);
    }
    iVar23 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar23 = iVar14;
    }
    puVar2 = (uint *)(lVar20 + (longlong)(iVar23 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar14 & 0x1f);
    _Src = (longlong *)(*(longlong *)(lVar16 + 8) + lVar12 * 0x90);
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    lStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = (longlong *)0x0;
    uStack_c0 = 0;
    local_68 = 0x200000001;
    uStack_5c = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    lVar12 = *(longlong *)(lVar16 + 8) + 0x18 + lVar12 * 0x90;
    *(undefined8 *)(lVar12 + -0x18) = local_d8;
    *(undefined8 *)(lVar12 + -0x10) = 0;
    *(undefined8 *)(lVar12 + -8) = 0;
    FUN_14014e938(lVar12,&local_b8);
    *(ulonglong *)(lVar12 + 0x65) =
         CONCAT17((undefined1)uStack_4c,CONCAT43(uStack_50,uStack_54._1_3_));
    *(undefined4 *)(lVar12 + 0x58) = uStack_60;
    *(undefined4 *)(lVar12 + 0x5c) = uStack_5c;
    *(undefined4 *)(lVar12 + 0x60) = local_58;
    *(undefined4 *)(lVar12 + 100) = uStack_54;
    *(undefined4 *)(lVar12 + 0x48) = (undefined4)uStack_70;
    *(undefined4 *)(lVar12 + 0x4c) = uStack_70._4_4_;
    *(undefined4 *)(lVar12 + 0x50) = (undefined4)local_68;
    *(undefined4 *)(lVar12 + 0x54) = local_68._4_4_;
    *(undefined4 *)(lVar12 + 0x38) = (undefined4)uStack_80;
    *(undefined4 *)(lVar12 + 0x3c) = uStack_80._4_4_;
    *(undefined4 *)(lVar12 + 0x40) = (undefined4)local_78;
    *(undefined4 *)(lVar12 + 0x44) = local_78._4_4_;
    if (lStack_90 != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(_Src + 0x11) = 0xffffffff;
    lVar12 = *_Src;
    uVar9 = (uint)((ulonglong)lVar12 >> 0x10);
    uVar19 = (uint)lVar12 & 0xffff;
    uVar9 = ((uint)lVar12 << 0x10 | uVar19) + (int)((ulonglong)lVar12 >> 0x20) +
            (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar19 >> 4);
    uVar19 = *(int *)(lVar16 + 0x10) - *(int *)(lVar16 + 0x3c);
    if ((uVar19 != 0) && (uVar19 != 1)) {
      lVar20 = lVar16 + 0x40;
      if (*(longlong *)(lVar16 + 0x48) != 0) {
        lVar20 = *(longlong *)(lVar16 + 0x48);
      }
      iVar23 = *(int *)(lVar20 + (ulonglong)(*(int *)(lVar16 + 0x50) - 1U & uVar9) * 4);
      if (iVar23 != -1) {
        do {
          _Dst = (void *)(*plVar1 + (longlong)iVar23 * 0x90);
          if (*(longlong *)(*plVar1 + (longlong)iVar23 * 0x90) == lVar12) {
            if (*(longlong *)((longlong)_Dst + 0x40) != 0) {
              FUN_1400020a8();
            }
            memmove(_Dst,_Src,0x88);
            FUN_148f02b6a(plVar1,iVar14);
            iVar14 = iVar23;
            goto LAB_144345c8e;
          }
          iVar23 = *(int *)((longlong)_Dst + 0x88);
        } while (iVar23 != -1);
      }
    }
    if (uVar19 < 4) {
      iVar23 = 1;
    }
    else {
      uVar17 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar23 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar19 < 1) || (iVar23 <= *(int *)(lVar16 + 0x50))) {
      uVar9 = *(int *)(lVar16 + 0x50) - 1U & uVar9;
      *(uint *)((longlong)_Src + 0x8c) = uVar9;
      lVar12 = *(longlong *)(lVar16 + 0x48);
      if (*(longlong *)(lVar16 + 0x48) == 0) {
        lVar12 = lVar16 + 0x40;
      }
      *(undefined4 *)(_Src + 0x11) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(lVar16 + 0x50) - 1U & (longlong)(int)uVar9) * 4);
      lVar12 = *(longlong *)(lVar16 + 0x48);
      if (*(longlong *)(lVar16 + 0x48) == 0) {
        lVar12 = lVar16 + 0x40;
      }
      *(int *)(lVar12 + ((longlong)*(int *)(lVar16 + 0x50) - 1U & (longlong)(int)uVar9) * 4) =
           iVar14;
    }
    else {
      *(int *)(lVar16 + 0x50) = iVar23;
      FUN_1419014f0(plVar1);
    }
LAB_144345c8e:
    lVar12 = *plVar1 + (longlong)iVar14 * 0x90;
    *(longlong *)(lVar12 + 8) = param_2;
    uVar5 = *(undefined4 *)(param_2 + 0x84);
    uVar6 = *(undefined4 *)(param_2 + 0x88);
    uVar7 = *(undefined4 *)(param_2 + 0x8c);
    *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(lVar12 + 0x54) = uVar5;
    *(undefined4 *)(lVar12 + 0x58) = uVar6;
    *(undefined4 *)(lVar12 + 0x5c) = uVar7;
    *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)(param_2 + 0x90);
    *(undefined4 *)(lVar12 + 0x6c) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined1 *)(lVar12 + 0x69) = 0;
    *(undefined1 *)(lVar12 + 0x68) = *(undefined1 *)(param_2 + 0x40);
    *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(param_2 + 0xb0);
    FUN_1447715ec(lVar12 + 0x28,param_2 + 0xb8);
    *(undefined8 *)(lVar12 + 0x74) = *(undefined8 *)(param_2 + 0x100);
    *(undefined8 *)(lVar12 + 0x7c) = *(undefined8 *)(param_2 + 0xf8);
    cVar3 = *(char *)(param_2 + 0x108);
    *(char *)(lVar12 + 0x84) = cVar3;
    if (cVar3 == '\x01') {
      FUN_144a13f80(lVar4 + 0x1a8,&local_c8,&local_d8,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144345fe8 FUN_144345fe8 body=31 status=ok
// SIG undefined FUN_144345fe8(void)

undefined8 FUN_144345fe8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14434606e FUN_14434606e body=29 status=ok
// SIG undefined FUN_14434606e(void)

undefined8 FUN_14434606e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14434608c FUN_14434608c body=29 status=ok
// SIG undefined FUN_14434608c(void)

undefined8 FUN_14434608c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443460be FUN_1443460be body=85 status=ok
// SIG undefined FUN_1443460be(void)

void FUN_1443460be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dcf70;
  return;
}



// FUNCTION 144346114 FUN_144346114 body=85 status=ok
// SIG undefined FUN_144346114(void)

void FUN_144346114(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a177500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dcf70;
  return;
}



// FUNCTION 14434616a FUN_14434616a body=118 status=ok
// SIG undefined FUN_14434616a(void)

void FUN_14434616a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a177500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dcf70;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443461d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443461e0 FUN_1443461e0 body=59 status=ok
// SIG undefined FUN_1443461e0(void)

void FUN_1443461e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_14434625a();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14434621c FUN_14434621c body=61 status=ok
// SIG undefined FUN_14434621c(void)

undefined8 FUN_14434621c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_14434625a();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14434625a FUN_14434625a body=363 status=ok
// SIG undefined FUN_14434625a(void)

void FUN_14434625a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x1f0);
  if (lVar2 != 0) {
    if (DAT_14cb5e538 == 0) {
      local_30 = &local_18;
      local_18 = &LAB_1417c5d06;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1417ad04a;
      local_38 = &LAB_1486a7af7;
      local_40 = &LAB_1464e1631;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x1000000c;
      local_60 = 8;
      local_68 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
      lVar2 = *(longlong *)(lVar1 + 0x1f0);
      if (lVar2 == 0) goto LAB_1443462b6;
    }
    if (((((DAT_14cb5e538 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
         (*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8)
          == DAT_14cb5e538 + 0x30 && (*(longlong *)(lVar2 + 0x1e0) != 0)))) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x1e0) + 0x30), lVar1 != 0)) {
      lVar2 = FUN_14130c5c8();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
      }
    }
  }
LAB_1443462b6:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443463dc FUN_1443463dc body=76 status=ok
// SIG undefined FUN_1443463dc(void)

void FUN_1443463dc(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  param_1 = (longlong *)*param_1;
  puVar2 = *(undefined4 **)(param_2 + 8);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14014a81a(param_1,iVar1);
  }
  puVar3 = &DAT_14c9485f0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
  }
  FUN_1447a97f4((longlong)iVar1 * 0x28 + *param_1,puVar3);
  return;
}



// FUNCTION 14434642e FUN_14434642e body=248 status=ok
// SIG undefined FUN_14434642e(void)

uint FUN_14434642e(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_1400b2348(param_2,&local_48,1);
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_1400b2348(param_1,&local_58,1);
  puVar5 = local_48;
  if ((int)uStack_40 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    puVar3 = local_58;
  }
  lVar6 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar3 + lVar6);
    uVar4 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar5 + lVar6);
    uVar7 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1443464b9;
      }
      uVar4 = uVar4 - uVar7;
      goto LAB_1443464e2;
    }
    if (uVar1 == 0) break;
LAB_1443464b9:
    lVar6 = lVar6 + 2;
  }
  uVar4 = 0;
LAB_1443464e2:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8(local_58);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144346528 FUN_144346528 body=29 status=ok
// SIG undefined FUN_144346528(void)

undefined8 FUN_144346528(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443466c4 FUN_1443466c4 body=93 status=ok
// SIG undefined FUN_1443466c4(void)

void FUN_1443466c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dcfe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144346722 FUN_144346722 body=93 status=ok
// SIG undefined FUN_144346722(void)

void FUN_144346722(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dcfe0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144346780 FUN_144346780 body=126 status=ok
// SIG undefined FUN_144346780(void)

void FUN_144346780(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dcfe0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443467ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443467fe FUN_1443467fe body=48 status=ok
// SIG undefined FUN_1443467fe(void)

void FUN_1443467fe(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (((int)plVar1[1] != 0) && ((longlong *)*plVar1 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*plVar1 + 0x60))();
  }
  FUN_1447cd2ec(plVar1 + 2,0);
  return;
}



// FUNCTION 14434682e FUN_14434682e body=295 status=ok
// SIG undefined FUN_14434682e(void)

undefined8 FUN_14434682e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14434694f;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_14434694f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar8 = local_28;
  }
  else {
LAB_14434694f:
    lVar8 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144346903;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      if (((int)plVar3[1] != 0) && ((longlong *)*plVar3 != (longlong *)0x0)) {
        (**(code **)(*(longlong *)*plVar3 + 0x60))();
      }
      FUN_1447cd2ec(plVar3 + 2,0);
      uVar7 = 1;
      goto LAB_144346903;
    }
  }
  uVar7 = 0;
LAB_144346903:
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144346956 FUN_144346956 body=29 status=ok
// SIG undefined FUN_144346956(void)

undefined8 FUN_144346956(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144346af2 FUN_144346af2 body=93 status=ok
// SIG undefined FUN_144346af2(void)

void FUN_144346af2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dd050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144346b50 FUN_144346b50 body=93 status=ok
// SIG undefined FUN_144346b50(void)

void FUN_144346b50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dd050;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144346bae FUN_144346bae body=126 status=ok
// SIG undefined FUN_144346bae(void)

void FUN_144346bae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dd050;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144346c1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144346c2c FUN_144346c2c body=49 status=ok
// SIG undefined FUN_144346c2c(void)

void FUN_144346c2c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((*(int *)(lVar1 + 0x28) != 0) && (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x60))();
  }
  FUN_1447cd2ec(lVar1 + 0x30,0);
  return;
}



// FUNCTION 144346c5e FUN_144346c5e body=296 status=ok
// SIG undefined FUN_144346c5e(void)

undefined8 FUN_144346c5e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144346d80;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144346d80;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar7 = local_28;
  }
  else {
LAB_144346d80:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144346d34;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      if ((*(int *)(lVar5 + 0x28) != 0) && (*(longlong **)(lVar5 + 0x20) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(lVar5 + 0x20) + 0x60))();
      }
      FUN_1447cd2ec(lVar5 + 0x30,0);
      uVar6 = 1;
      goto LAB_144346d34;
    }
  }
  uVar6 = 0;
LAB_144346d34:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144346d88 FUN_144346d88 body=29 status=ok
// SIG undefined FUN_144346d88(void)

undefined8 FUN_144346d88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144346f24 FUN_144346f24 body=93 status=ok
// SIG undefined FUN_144346f24(void)

void FUN_144346f24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dd130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144346f82 FUN_144346f82 body=93 status=ok
// SIG undefined FUN_144346f82(void)

void FUN_144346f82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dd130;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144346fe0 FUN_144346fe0 body=126 status=ok
// SIG undefined FUN_144346fe0(void)

void FUN_144346fe0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dd130;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014434704f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144347068 FUN_144347068 body=266 status=ok
// SIG undefined FUN_144347068(void)

undefined8 FUN_144347068(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14434716c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14434716c;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14434716c:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144347113;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14573ba00(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144347113;
    }
  }
  uVar6 = 0;
LAB_144347113:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14434719e FUN_14434719e body=87 status=ok
// SIG undefined FUN_14434719e(void)

void FUN_14434719e(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  if (param_2 < iVar1) {
    do {
      uVar2 = (longlong)param_2 % (longlong)*(int *)(param_1 + 0x2c);
      uVar3 = -(int)uVar2;
      uVar4 = (ulonglong)uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = uVar2 & 0xffffffff;
      }
      if (param_2 == *(int *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar4 * 0x70)) {
        (**(code **)(*param_3 + 0x28))(param_3,*(longlong *)(param_1 + 0x10) + uVar4 * 0x70);
        *(undefined4 *)(param_3 + 2) = 0xffffffff;
      }
      param_2 = param_2 + 1;
    } while (iVar1 != param_2);
  }
  return;
}



// FUNCTION 1443471f6 FUN_1443471f6 body=282 status=ok
// SIG undefined FUN_1443471f6(void)

void FUN_1443471f6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar1 = (int *)(param_1 + 0x2c);
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,piVar1,4);
    }
    else {
      FUN_14572512c(param_2,piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  iVar2 = *piVar1;
  iVar4 = FUN_141901aea();
  if (iVar2 <= iVar4) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_140bed800(param_1 + 0x10,*(undefined4 *)(param_1 + 0x2c),1);
    }
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x10);
      lVar7 = (longlong)*(int *)(param_1 + 0x18) * 0x70;
      do {
        local_39 = 0;
        lVar5 = FUN_1418d31aa();
        if ((*(byte *)(lVar5 + 0xb1) & 4) != 0) {
          local_48 = lVar6;
          (**(code **)(**(longlong **)(lVar5 + 0xb8) + 0x40))
                    (*(longlong **)(lVar5 + 0xb8),param_2,param_3,&local_39);
        }
        lVar6 = lVar6 + 0x70;
        lVar7 = lVar7 + -0x70;
      } while (lVar7 != 0);
    }
    if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 144347326 FUN_144347326 body=69 status=ok
// SIG undefined FUN_144347326(void)

void FUN_144347326(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + lVar1) + 0x30))
                (*(longlong *)(param_1 + 0x10) + lVar1,param_2);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x70;
    } while (lVar2 < *(int *)(param_1 + 0x2c));
  }
  return;
}



// FUNCTION 14434738c FUN_14434738c body=291 status=ok
// SIG undefined FUN_14434738c(void)

void FUN_14434738c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar1 = (int *)(param_1 + 0x2c);
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,piVar1,4);
    }
    else {
      FUN_14572512c(param_2,piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  iVar2 = *piVar1;
  iVar4 = FUN_141901dda();
  if (iVar2 <= iVar4) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_140df7f36(param_1 + 0x10,*(undefined4 *)(param_1 + 0x2c),1);
    }
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x10);
      lVar7 = (longlong)*(int *)(param_1 + 0x18) * 0xb0;
      do {
        local_39 = 0;
        lVar5 = FUN_1418d31e4();
        if ((*(byte *)(lVar5 + 0xb1) & 4) != 0) {
          local_48 = lVar6;
          (**(code **)(**(longlong **)(lVar5 + 0xb8) + 0x40))
                    (*(longlong **)(lVar5 + 0xb8),param_2,param_3,&local_39);
        }
        lVar6 = lVar6 + 0xb0;
        lVar7 = lVar7 + -0xb0;
      } while (lVar7 != 0);
    }
    if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1443474e4 FUN_1443474e4 body=29 status=ok
// SIG undefined FUN_1443474e4(void)

undefined8 FUN_1443474e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144347680 FUN_144347680 body=93 status=ok
// SIG undefined FUN_144347680(void)

void FUN_144347680(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dd790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443476de FUN_1443476de body=93 status=ok
// SIG undefined FUN_1443476de(void)

void FUN_1443476de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dd790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14434773c FUN_14434773c body=126 status=ok
// SIG undefined FUN_14434773c(void)

void FUN_14434773c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dd790;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443477ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443477c4 FUN_1443477c4 body=266 status=ok
// SIG undefined FUN_1443477c4(void)

undefined8 FUN_1443477c4(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1443478c8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1443478c8;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1443478c8:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14434786f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148f018de(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_14434786f;
    }
  }
  uVar6 = 0;
LAB_14434786f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443478d0 FUN_1443478d0 body=99 status=ok
// SIG undefined FUN_1443478d0(void)

void FUN_1443478d0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0x990);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1a0) != 0)) {
    FUN_148f00ce6(lVar1,*(undefined4 *)param_1[1],*(undefined4 *)param_1[2],param_1[3],
                  *(undefined4 *)param_1[4],*(undefined4 *)(*(longlong *)param_1[5] + 0x180));
  }
  return;
}



// FUNCTION 144347934 FUN_144347934 body=92 status=ok
// SIG undefined FUN_144347934(void)

void FUN_144347934(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (((*(longlong *)(*param_1 + 0x990) != 0) &&
      (lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x990) + 0x1a0), lVar3 != 0)) &&
     (0 < *(int *)(lVar3 + 0xf0))) {
    puVar1 = (undefined8 *)param_1[1];
    puVar2 = *(undefined8 **)(lVar3 + 0xe8);
    *puVar2 = *puVar1;
    lVar3 = 9;
    puVar4 = puVar1;
    puVar5 = puVar2;
    while( true ) {
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      *puVar5 = *puVar4;
    }
    FUN_145bf769c(puVar2 + 10,puVar1 + 10);
    return;
  }
  return;
}



// FUNCTION 144347990 FUN_144347990 body=29 status=ok
// SIG undefined FUN_144347990(void)

undefined8 FUN_144347990(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144347b2c FUN_144347b2c body=93 status=ok
// SIG undefined FUN_144347b2c(void)

void FUN_144347b2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dd820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144347b8a FUN_144347b8a body=93 status=ok
// SIG undefined FUN_144347b8a(void)

void FUN_144347b8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9dd820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144347be8 FUN_144347be8 body=126 status=ok
// SIG undefined FUN_144347be8(void)

void FUN_144347be8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9dd820;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144347c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144347c66 FUN_144347c66 body=78 status=ok
// SIG undefined FUN_144347c66(void)

void FUN_144347c66(longlong param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = DAT_14cbe7020;
  FUN_1400bc8c2(*(longlong *)(param_1 + 0x20) + 0xa8);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144347cb6 FUN_144347cb6 body=286 status=ok
// SIG undefined FUN_144347cb6(void)

undefined8 FUN_144347cb6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144347dce;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144347dce;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar7 = local_28;
  }
  else {
LAB_144347dce:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144347d82;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      local_28 = DAT_14cbe7020;
      FUN_1400bc8c2(*(longlong *)(param_1 + 0x20) + 0xa8);
      uVar6 = 1;
      goto LAB_144347d82;
    }
  }
  uVar6 = 0;
LAB_144347d82:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144347dd6 FUN_144347dd6 body=42 status=ok
// SIG undefined FUN_144347dd6(void)

undefined8 FUN_144347dd6(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = FUN_141360fc6();
    uVar2 = FUN_1448093f4(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144347e00 FUN_144347e00 body=1736 status=ok
// SIG undefined FUN_144347e00(void)

void FUN_144347e00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  longlong lVar15;
  undefined8 *puVar16;
  double *pdVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  undefined4 local_310;
  undefined4 *local_308;
  double *local_300;
  undefined1 *local_2f8;
  undefined4 local_2e8;
  undefined8 local_2e4;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined1 local_2b8 [32];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248;
  longlong *local_238;
  uint uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8;
  undefined2 uStack_1d7;
  undefined1 uStack_1d5;
  undefined4 uStack_1d4;
  undefined1 local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8;
  undefined4 local_1c4;
  undefined2 local_1c0;
  longlong local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  longlong local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined **local_148;
  longlong local_140;
  byte local_128;
  undefined4 local_c4;
  undefined4 local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x90);
  if ((((lVar2 == 0) || ((*(byte *)(lVar2 + 0x65) & 2) != 0)) ||
      (lVar2 = *(longlong *)(lVar2 + 0xf48), lVar2 == 0)) ||
     (lVar13 = FUN_140a9a328(lVar1), lVar13 == 0)) goto LAB_144347e63;
  plVar3 = *(longlong **)(lVar1 + 0x88);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x330))(plVar3,1);
    FUN_14665deb2(lVar1);
    lVar15 = *(longlong *)(lVar1 + 0x88);
    if (((*(byte *)(lVar15 + 0x65) & 2) == 0) && ((*(byte *)(lVar15 + 0x348) & 2) == 0)) {
      dVar14 = (double)(**(code **)(*(longlong *)(lVar15 + 0x440) + 0x28))(lVar15 + 0x440);
      lVar15 = *(longlong *)(lVar1 + 0x88);
      if (*(longlong *)((longlong)dVar14 + 0xd8) != 0) {
        lVar19 = *(longlong *)(lVar15 + 0x1c8);
        if (lVar19 == 0) {
          local_1f8 = DAT_14c8464f0;
          local_208 = DAT_14c8464e0;
          dStack_200 = DAT_14c8464e8;
          local_228 = DAT_14c8464f8;
          uStack_220 = DAT_14c846500;
          local_218 = DAT_14c846508;
        }
        else {
          local_208 = *(double *)(lVar19 + 0x260);
          dStack_200 = *(double *)(lVar19 + 0x268);
          local_1f8 = *(double *)(lVar19 + 0x270);
          pcVar6 = *(code **)(lVar19 + 0x240);
          dVar7 = *(double *)(lVar19 + 0x248);
          dVar8 = *(double *)(lVar19 + 0x250);
          dVar9 = *(double *)(lVar19 + 600);
          pdVar17 = *(double **)(lVar19 + 0x228);
          local_168 = pcVar6;
          uStack_160 = dVar7;
          local_158 = dVar8;
          dStack_150 = dVar9;
          if (pdVar17 == (double *)0x0) {
            lVar15 = 0x40;
            pdVar17 = (double *)FUN_14001cc68(0x40,0x10);
            dVar14 = DAT_14c8463d8;
            *pdVar17 = DAT_14c8463d0;
            pdVar17[1] = dVar14;
            dVar14 = DAT_14c8463e8;
            pdVar17[2] = DAT_14c8463e0;
            pdVar17[3] = dVar14;
            dVar14 = DAT_14c846500;
            pdVar17[4] = DAT_14c8464f8;
            pdVar17[5] = dVar14;
            dVar14 = DAT_14c846508;
            pdVar17[6] = DAT_14c846508;
            *(double **)(lVar19 + 0x228) = pdVar17;
          }
          auVar4._8_4_ = (int)-(ulonglong)(dVar7 != pdVar17[1]);
          auVar4._0_8_ = -(ulonglong)((double)pcVar6 != *pdVar17);
          auVar4._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar17[1]) >> 0x20);
          iVar12 = movmskpd(SUB84(dVar14,0),auVar4);
          auVar5._8_4_ = (int)-(ulonglong)(dVar9 != pdVar17[3]);
          auVar5._0_8_ = -(ulonglong)(dVar8 != pdVar17[2]);
          auVar5._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar17[3]) >> 0x20);
          uVar18 = movmskpd((int)lVar15,auVar5);
          if ((uVar18 & 0x3fffffff) != 0 || iVar12 != 0) {
            pdVar17[2] = local_158;
            pdVar17[3] = dStack_150;
            *(undefined4 *)pdVar17 = (undefined4)local_168;
            *(undefined4 *)((longlong)pdVar17 + 4) = local_168._4_4_;
            *(undefined4 *)(pdVar17 + 1) = (undefined4)uStack_160;
            *(undefined4 *)((longlong)pdVar17 + 0xc) = uStack_160._4_4_;
            FUN_1448052ee(&local_168,&local_1e8);
            pdVar17[6] = (double)CONCAT44(uStack_1d4,
                                          CONCAT13(uStack_1d5,CONCAT21(uStack_1d7,local_1d8)));
            pdVar17[4] = local_1e8;
            pdVar17[5] = dStack_1e0;
          }
          local_218 = pdVar17[6];
          local_228 = pdVar17[4];
          uStack_220 = pdVar17[5];
        }
        local_238 = (longlong *)0x0;
        uStack_230 = 1;
        uStack_22c = 0;
        FUN_1447d05f2(&local_238,0);
        uVar18 = uStack_230;
        *local_238 = lVar2;
        lVar15 = *(longlong *)(lVar1 + 0x88);
        lVar19 = (longlong)(int)uStack_230;
        uStack_230 = uStack_230 + 1;
        if (uStack_22c < uStack_230) {
          FUN_1447d05f2(&local_238,uVar18);
        }
        local_238[lVar19] = lVar15;
        cVar10 = FUN_1461ac73c(*(undefined8 *)(lVar1 + 0x88),&local_208,&local_228);
        if (cVar10 != '\0') {
          local_248 = local_218;
          local_258 = (undefined4)local_228;
          uStack_254 = local_228._4_4_;
          uStack_250 = (undefined4)uStack_220;
          uStack_24c = uStack_220._4_4_;
          lVar15 = *(longlong *)(*(longlong *)(lVar1 + 0x88) + 0x1c8);
          if (lVar15 != 0) {
            local_158 = local_1f8 - *(double *)(lVar15 + 0x270);
            uStack_160 = dStack_200 - *(double *)(lVar15 + 0x268);
            local_168 = (code *)(local_208 - *(double *)(lVar15 + 0x260));
            local_308 = (undefined4 *)CONCAT71(local_308._1_7_,1);
            local_310 = 0;
            local_318 = (undefined8 *)0x0;
            FUN_1407fd932(lVar15,&local_168,&local_258,0);
          }
        }
        lVar15 = FUN_140a9b4e8(lVar1);
        if (((lVar15 == 0) ||
            (plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x88) + 0x1c8), plVar3 == (longlong *)0x0
            )) || ((*(longlong *)(&DAT_00006850 + lVar2) == 0 ||
                   (*(longlong *)(*(longlong *)(&DAT_00006850 + lVar2) + 0x110) == 0)))) {
          if (cVar10 == '\0') goto LAB_144348441;
        }
        else {
          (**(code **)(*plVar3 + 0x4a8))(plVar3,local_2b8,*(undefined8 *)(lVar15 + 0x178),0);
          local_280 = 0;
          memset(&local_168,0,0x100);
          local_98 = 0xffffffff;
          local_c4 = 0xffffffff;
          local_168 = (code *)CONCAT44(0x3f800000,(undefined4)local_168);
          local_1c4 = 0;
          local_1c0 = 0x101;
          local_198 = 0;
          local_190 = 0x800000000;
          local_178 = 0;
          local_16c = 4;
          local_1d8 = 0;
          local_1cc = 0;
          local_1e8 = 0.0;
          dStack_1e0 = 0.0;
          uStack_1d7 = 1;
          uStack_1d5 = 0;
          local_1c8 = 0;
          uStack_1d4 = 0x1000000;
          local_1d0 = 1;
          local_188 = *(undefined4 *)(lVar2 + 0xc);
          local_170 = 1;
          if (*(longlong *)(lVar1 + 0x88) != 0) {
            local_184 = *(undefined4 *)(*(longlong *)(lVar1 + 0x88) + 0xc);
            local_170 = 2;
          }
          local_2d8 = local_298;
          uStack_2d0 = uStack_290;
          local_2c8 = local_288;
          local_2e4 = *(undefined8 *)(lVar1 + 0x210);
          local_2e8 = 3;
          local_310 = (**(code **)(**(longlong **)(*(longlong *)(&DAT_00006850 + lVar2) + 0x110) +
                                  0x580))();
          local_2f8 = &DAT_14cad0f10;
          local_300 = &local_1e8;
          local_318 = &DAT_14c8463d0;
          local_308 = &local_2e8;
          cVar11 = FUN_14021655c(lVar13,&local_168,lVar1 + 0x1e0,&local_2d8);
          if (local_178 != 0) {
            FUN_1400020a8();
          }
          if (local_198 != 0) {
            FUN_1400020a8();
          }
          if (cVar11 != '\0' || cVar10 != '\x01') {
LAB_144348441:
            (**(code **)(**(longlong **)(lVar1 + 0x88) + 0x5c8))(*(longlong **)(lVar1 + 0x88),0);
          }
        }
        if (local_238 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar15 = *(longlong *)(lVar1 + 0x88);
      }
    }
    if ((((*(byte *)(lVar15 + 0x65) & 2) == 0) && ((*(byte *)(lVar15 + 0x348) & 2) == 0)) &&
       (lVar15 = (**(code **)(*(longlong *)(lVar15 + 0x440) + 0x28))(lVar15 + 0x440),
       *(longlong *)(lVar15 + 0xd8) != 0)) {
      *(undefined1 *)(lVar1 + 0x170) = 3;
      if (*(longlong *)(lVar13 + 0x1f0) == 0) {
        puVar16 = (undefined8 *)(lVar13 + 0x458);
      }
      else {
        puVar16 = (undefined8 *)(*(longlong *)(lVar13 + 0x1f0) + 0xf0);
      }
      local_168 = FUN_144348512;
      local_158 = 0.0;
      local_148 = &PTR_LAB_14b9dd920;
      local_128 = 3;
      local_140 = lVar1;
      FUN_14016fdb0(*puVar16,&local_1e8,&local_168);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_128])(&local_168);
      goto LAB_144347e63;
    }
  }
  FUN_14583ea82(lVar2,0);
  FUN_1465e6db0(*(undefined8 *)(lVar1 + 0x90),0xf);
  FUN_1405e47c6(lVar2,*(undefined1 *)(lVar1 + 0x218));
  *(undefined1 *)(lVar1 + 0x170) = 0;
LAB_144347e63:
  if ((local_60 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443484f4 FUN_1443484f4 body=29 status=ok
// SIG undefined FUN_1443484f4(void)

undefined8 FUN_1443484f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144348512 FUN_144348512 body=331 status=ok
// SIG undefined FUN_144348512(void)

void FUN_144348512(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x90);
  if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 0x65) & 2) == 0)) &&
      (lVar2 = *(longlong *)(lVar2 + 0xf48), lVar2 != 0)) && (*(longlong *)(lVar1 + 0x88) != 0)) {
    lVar5 = FUN_140a9a328(lVar1);
    if (lVar5 != 0) {
      cVar4 = FUN_1459061ba(lVar1,0);
      plVar3 = *(longlong **)(lVar1 + 0x88);
      if (cVar4 == '\0') {
        (**(code **)(*plVar3 + 0x5c8))(plVar3,0);
        FUN_14583ea82(lVar2,0);
        FUN_1405e47c6(lVar2,*(undefined1 *)(lVar1 + 0x218));
        *(undefined1 *)(lVar1 + 0x170) = 0;
      }
      else {
        FUN_140c7ce82(plVar3,1);
        lVar2 = *(longlong *)(lVar1 + 0x88);
        lVar5 = *(longlong *)(lVar1 + 0x90);
        if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar5);
        }
        *(longlong *)(lVar2 + 0x1708) = lVar5;
        FUN_1440ba9c4(*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(lVar1 + 0x90));
        lVar2 = *(longlong *)(lVar1 + 0x88);
        FUN_1411cf6d8(lVar1,local_38,1);
        FUN_14597db2c(lVar2 + 0x538,local_38);
        FUN_1457996ca(lVar2);
        *(undefined1 *)(lVar1 + 0x170) = 0;
        FUN_14045978a(*(undefined8 *)(lVar1 + 0x88));
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144348688 FUN_144348688 body=29 status=ok
// SIG undefined FUN_144348688(void)

undefined8 FUN_144348688(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


