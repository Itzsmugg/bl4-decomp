// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14747d79e FUN_14747d79e body=127 status=ok
// SIG undefined FUN_14747d79e(void)

void FUN_14747d79e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  iVar3 = (int)param_1[1];
  lVar6 = (longlong)iVar3 * 0x10;
  if ((longlong)iVar3 != 0) {
    uVar5 = 0;
    do {
      if ((*(longlong *)(lVar4 + uVar5) == *param_2) &&
         (*(longlong *)(lVar4 + 8 + uVar5) == param_2[1])) {
        if ((int)(~uVar5 >> 4) != 0) {
          return;
        }
        break;
      }
      lVar1 = lVar4 + uVar5;
      uVar5 = uVar5 + 0x10;
    } while (lVar1 + 0x10 != lVar4 + lVar6);
  }
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_14747d81e(param_1);
    lVar4 = *param_1;
  }
  lVar1 = param_2[1];
  plVar2 = (longlong *)(lVar4 + lVar6);
  *plVar2 = *param_2;
  plVar2[1] = lVar1;
  return;
}



// FUNCTION 14747d81e FUN_14747d81e body=132 status=ok
// SIG undefined FUN_14747d81e(void)

void FUN_14747d81e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14747d8a4 FUN_14747d8a4 body=114 status=ok
// SIG undefined FUN_14747d8a4(void)

void FUN_14747d8a4(longlong *param_1,int param_2)

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



// FUNCTION 14747d916 FUN_14747d916 body=96 status=ok
// SIG undefined FUN_14747d916(void)

void FUN_14747d916(longlong param_1,int param_2)

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



// FUNCTION 14747d976 FUN_14747d976 body=114 status=ok
// SIG undefined FUN_14747d976(void)

void FUN_14747d976(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 14747d9e8 FUN_14747d9e8 body=946 status=ok
// SIG undefined FUN_14747d9e8(void)

void FUN_14747d9e8(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_3a8 [40];
  longlong *local_380;
  int local_374;
  longlong *local_370;
  longlong *local_368;
  undefined8 local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_358 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar15 + fVar15);
    plVar7 = &local_358;
    do {
      plVar9 = (longlong *)*plVar7;
      plVar10 = (longlong *)plVar7[1];
      local_374 = (int)plVar7[2];
      iVar4 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar9) >> 4);
      plVar11 = plVar10;
      plVar14 = plVar9;
      local_380 = plVar7;
      if (local_374 != 0) {
LAB_14747dac0:
        plVar7 = local_380;
        if (8 < (int)(iVar4 + 1U)) {
          uVar6 = (ulonglong)(iVar4 + 1U >> 1);
          lVar1 = plVar9[uVar6 * 2];
          lVar2 = (plVar9 + uVar6 * 2)[1];
          lVar3 = plVar9[1];
          plVar9[uVar6 * 2] = *plVar9;
          (plVar9 + uVar6 * 2)[1] = lVar3;
          local_58._0_4_ = (undefined4)lVar1;
          local_58._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
          uStack_50._0_4_ = (undefined4)lVar2;
          uStack_50._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
          *(undefined4 *)plVar9 = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar9 + 4) = local_58._4_4_;
          *(undefined4 *)(plVar9 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)plVar9 + 0xc) = uStack_50._4_4_;
          plVar13 = plVar11 + 2;
          plVar8 = plVar9;
          local_370 = plVar14;
          local_368 = plVar10;
          uStack_50 = lVar2;
          do {
            plVar7 = plVar8 + 2;
            plVar10 = plVar8 + 2;
            do {
              plVar8 = plVar10;
              plVar14 = plVar7;
              if (plVar11 < plVar8) break;
              puVar5 = &DAT_14caa8578;
              if (0 < *(int *)(*plVar9 + 0x10)) {
                puVar5 = *(undefined8 **)(*plVar9 + 8);
              }
              local_58 = *puVar5;
              puVar5 = &DAT_14caa8578;
              if (0 < *(int *)(*plVar8 + 0x10)) {
                puVar5 = *(undefined8 **)(*plVar8 + 8);
              }
              local_360 = *puVar5;
              iVar4 = FUN_144a78538(&local_58,&local_360);
              plVar7 = plVar14 + 2;
              plVar10 = plVar8 + 2;
            } while (-1 < iVar4);
            plVar7 = plVar13 + -4;
            do {
              plVar12 = plVar13;
              plVar10 = plVar7;
              plVar13 = plVar12 + -2;
              if (plVar13 <= plVar9) break;
              puVar5 = &DAT_14caa8578;
              if (0 < *(int *)(*plVar13 + 0x10)) {
                puVar5 = *(undefined8 **)(*plVar13 + 8);
              }
              local_58 = *puVar5;
              puVar5 = &DAT_14caa8578;
              if (0 < *(int *)(*plVar9 + 0x10)) {
                puVar5 = *(undefined8 **)(*plVar9 + 8);
              }
              local_360 = *puVar5;
              iVar4 = FUN_144a78538(&local_58,&local_360);
              plVar7 = plVar10 + -2;
            } while (-1 < iVar4);
            if (plVar13 < plVar8) goto LAB_14747dbfe;
            lVar1 = *plVar8;
            lVar2 = plVar8[1];
            lVar3 = plVar12[-1];
            *plVar8 = *plVar13;
            plVar8[1] = lVar3;
            local_58._0_4_ = (undefined4)lVar1;
            local_58._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
            uStack_50._0_4_ = (undefined4)lVar2;
            uStack_50._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
            *(undefined4 *)plVar13 = (undefined4)local_58;
            *(undefined4 *)((longlong)plVar12 + -0xc) = local_58._4_4_;
            *(undefined4 *)(plVar12 + -1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)plVar12 + -4) = uStack_50._4_4_;
            uStack_50 = lVar2;
          } while( true );
        }
        for (; local_380 = plVar7, plVar14 = plVar9, plVar10 = plVar9, plVar9 < plVar11;
            plVar11 = plVar11 + -2) {
          while (plVar10 = plVar10 + 2, plVar10 <= plVar11) {
            puVar5 = &DAT_14caa8578;
            if (0 < *(int *)(*plVar14 + 0x10)) {
              puVar5 = *(undefined8 **)(*plVar14 + 8);
            }
            local_58 = *puVar5;
            puVar5 = &DAT_14caa8578;
            if (0 < *(int *)(*plVar10 + 0x10)) {
              puVar5 = *(undefined8 **)(*plVar10 + 8);
            }
            local_360 = *puVar5;
            iVar4 = FUN_144a78538(&local_58,&local_360);
            if (iVar4 < 0) {
              plVar14 = plVar10;
            }
          }
          local_58 = *plVar14;
          uStack_50 = plVar14[1];
          lVar2 = local_58;
          lVar3 = uStack_50;
          lVar1 = plVar11[1];
          *plVar14 = *plVar11;
          plVar14[1] = lVar1;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)plVar11 = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar11 + 4) = local_58._4_4_;
          *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_50._4_4_;
          plVar7 = local_380;
          local_58 = lVar2;
          uStack_50 = lVar3;
        }
        goto LAB_14747dd71;
      }
LAB_14747dd8b:
      FUN_14747dd9b(plVar9);
      plVar7 = local_380;
LAB_14747dd71:
      plVar7 = plVar7 + -3;
    } while (&local_358 <= plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14747dbfe:
  local_58 = *plVar9;
  uStack_50 = plVar9[1];
  lVar2 = local_58;
  lVar3 = uStack_50;
  lVar1 = plVar12[-1];
  *plVar9 = *plVar13;
  plVar9[1] = lVar1;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)plVar13 = (undefined4)local_58;
  *(undefined4 *)((longlong)plVar12 + -0xc) = local_58._4_4_;
  *(undefined4 *)(plVar12 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)plVar12 + -4) = uStack_50._4_4_;
  local_374 = local_374 + -1;
  plVar12 = plVar12 + -4;
  local_58 = lVar2;
  uStack_50 = lVar3;
  if ((longlong)plVar10 - (longlong)local_370 < (longlong)local_368 - (longlong)plVar14) {
    plVar7 = local_380;
    if (plVar8 < plVar11) {
      *local_380 = (longlong)plVar8;
      local_380[1] = (longlong)plVar11;
      *(int *)(local_380 + 2) = local_374;
      plVar7 = local_380 + 3;
    }
    plVar14 = plVar9;
    if (plVar13 <= plVar9 + 2) goto LAB_14747dd71;
  }
  else {
    if (plVar9 + 2 < plVar13) {
      *local_380 = (longlong)plVar9;
      local_380[1] = (longlong)plVar12;
      *(int *)(local_380 + 2) = local_374;
      local_380 = local_380 + 3;
    }
    plVar7 = local_380;
    plVar10 = plVar11;
    plVar12 = plVar11;
    plVar9 = plVar8;
    if (plVar11 <= plVar8) goto LAB_14747dd71;
  }
  local_380 = plVar7;
  iVar4 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar14) >> 4);
  plVar11 = plVar12;
  if (local_374 == 0) goto LAB_14747dd8b;
  goto LAB_14747dac0;
}



// FUNCTION 14747dd9b FUN_14747dd9b body=749 status=ok
// SIG undefined FUN_14747dd9b(void)

void FUN_14747dd9b(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    iVar14 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar10 = iVar14;
joined_r0x00014747dde9:
    do {
      iVar6 = iVar14 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar11 = iVar14 * 2 + 2;
        iVar9 = iVar6;
        if (iVar11 < (int)param_2) {
          puVar7 = &DAT_14caa8578;
          if (0 < *(int *)(param_1[(longlong)iVar11 * 2] + 0x10)) {
            puVar7 = *(undefined8 **)(param_1[(longlong)iVar11 * 2] + 8);
          }
          local_58 = *puVar7;
          puVar7 = &DAT_14caa8578;
          if (0 < *(int *)(param_1[(longlong)iVar6 * 2] + 0x10)) {
            puVar7 = *(undefined8 **)(param_1[(longlong)iVar6 * 2] + 8);
          }
          local_60 = *puVar7;
          iVar5 = FUN_144a78538(&local_58,&local_60);
          iVar9 = iVar11;
          if (iVar5 < 0) {
            iVar9 = iVar6;
          }
        }
        plVar8 = &DAT_14caa8578;
        if (0 < *(int *)(param_1[(longlong)iVar14 * 2] + 0x10)) {
          plVar8 = *(longlong **)(param_1[(longlong)iVar14 * 2] + 8);
        }
        plVar12 = param_1 + (longlong)iVar9 * 2;
        local_58 = *plVar8;
        puVar7 = &DAT_14caa8578;
        if (0 < *(int *)(*plVar12 + 0x10)) {
          puVar7 = *(undefined8 **)(*plVar12 + 8);
        }
        local_60 = *puVar7;
        iVar6 = FUN_144a78538(&local_58,&local_60);
        if (iVar6 < 0) {
          plVar8 = param_1 + (longlong)iVar14 * 2;
          lVar2 = *plVar8;
          lVar3 = plVar8[1];
          lVar4 = plVar12[1];
          *plVar8 = *plVar12;
          plVar8[1] = lVar4;
          local_58._0_4_ = (undefined4)lVar2;
          local_58._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)lVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
          *(undefined4 *)plVar12 = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar12 + 4) = local_58._4_4_;
          *(undefined4 *)(plVar12 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_50._4_4_;
          iVar14 = iVar9;
          local_58 = lVar2;
          uStack_50 = lVar3;
          goto joined_r0x00014747dde9;
        }
      }
      bVar15 = iVar10 != 0;
      iVar14 = iVar10 + -1;
      iVar10 = iVar14;
    } while (bVar15);
    if (1 < (int)param_2) {
      uVar13 = (ulonglong)param_2 - 1;
      lVar2 = *param_1;
      lVar3 = param_1[1];
      lVar4 = (param_1 + uVar13 * 2)[1];
      *param_1 = param_1[uVar13 * 2];
      param_1[1] = lVar4;
      local_58._0_4_ = (undefined4)lVar2;
      local_58._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_50._0_4_ = (undefined4)lVar3;
      uStack_50._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      plVar8 = param_1 + uVar13 * 2;
      *(undefined4 *)plVar8 = (undefined4)local_58;
      *(undefined4 *)((longlong)plVar8 + 4) = local_58._4_4_;
      *(undefined4 *)(plVar8 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)plVar8 + 0xc) = uStack_50._4_4_;
      local_58 = lVar2;
      uStack_50 = lVar3;
      if (param_2 != 2) {
        do {
          iVar14 = 0;
          iVar6 = 1;
          iVar10 = 0;
          do {
            iVar14 = iVar14 + 2;
            iVar9 = iVar6;
            if ((longlong)iVar14 < (longlong)uVar13) {
              puVar7 = &DAT_14caa8578;
              if (0 < *(int *)(param_1[(longlong)iVar14 * 2] + 0x10)) {
                puVar7 = *(undefined8 **)(param_1[(longlong)iVar14 * 2] + 8);
              }
              local_58 = *puVar7;
              puVar7 = &DAT_14caa8578;
              if (0 < *(int *)(param_1[(longlong)iVar6 * 2] + 0x10)) {
                puVar7 = *(undefined8 **)(param_1[(longlong)iVar6 * 2] + 8);
              }
              local_60 = *puVar7;
              iVar11 = FUN_144a78538(&local_58,&local_60);
              iVar9 = iVar14;
              if (iVar11 < 0) {
                iVar9 = iVar6;
              }
            }
            puVar7 = &DAT_14caa8578;
            if (0 < *(int *)(param_1[(longlong)iVar10 * 2] + 0x10)) {
              puVar7 = *(undefined8 **)(param_1[(longlong)iVar10 * 2] + 8);
            }
            plVar8 = param_1 + (longlong)iVar9 * 2;
            local_58 = *puVar7;
            puVar7 = &DAT_14caa8578;
            if (0 < *(int *)(*plVar8 + 0x10)) {
              puVar7 = *(undefined8 **)(*plVar8 + 8);
            }
            local_60 = *puVar7;
            iVar14 = FUN_144a78538(&local_58,&local_60);
            if (-1 < iVar14) break;
            plVar12 = param_1 + (longlong)iVar10 * 2;
            lVar2 = *plVar12;
            lVar3 = plVar12[1];
            lVar4 = plVar8[1];
            *plVar12 = *plVar8;
            plVar12[1] = lVar4;
            local_58._0_4_ = (undefined4)lVar2;
            local_58._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
            uStack_50._0_4_ = (undefined4)lVar3;
            uStack_50._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
            *(undefined4 *)plVar8 = (undefined4)local_58;
            *(undefined4 *)((longlong)plVar8 + 4) = local_58._4_4_;
            *(undefined4 *)(plVar8 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)plVar8 + 0xc) = uStack_50._4_4_;
            iVar14 = iVar9 * 2;
            iVar6 = iVar9 * 2 + 1;
            uStack_50 = lVar3;
            iVar10 = iVar9;
          } while ((longlong)iVar6 < (longlong)uVar13);
          uVar1 = uVar13 - 1;
          lVar2 = *param_1;
          lVar3 = param_1[1];
          lVar4 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = lVar4;
          local_58._0_4_ = (undefined4)lVar2;
          local_58._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)lVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
          plVar8 = param_1 + uVar1 * 2;
          *(undefined4 *)plVar8 = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar8 + 4) = local_58._4_4_;
          *(undefined4 *)(plVar8 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uStack_50._4_4_;
          bVar15 = 2 < uVar13;
          uVar13 = uVar1;
          local_58 = lVar2;
          uStack_50 = lVar3;
        } while (bVar15);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14747e08a FUN_14747e08a body=83 status=ok
// SIG undefined FUN_14747e08a(void)

void FUN_14747e08a(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + 0xfffe0);
  FUN_14024d120(_Dst);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + 0xfffe);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar1 - param_2;
  return;
}



// FUNCTION 14747e0de FUN_14747e0de body=62 status=ok
// SIG undefined FUN_14747e0de(void)

void FUN_14747e0de(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14747e11c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14747e11c FUN_14747e11c body=93 status=ok
// SIG undefined FUN_14747e11c(void)

ulonglong FUN_14747e11c(uint param_1,uint param_2)

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



// FUNCTION 14747e17a FUN_14747e17a body=132 status=ok
// SIG undefined FUN_14747e17a(void)

void FUN_14747e17a(longlong param_1,int param_2)

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



// FUNCTION 14747e200 FUN_14747e200 body=31 status=ok
// SIG undefined FUN_14747e200(void)

undefined8 FUN_14747e200(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14747e23a FUN_14747e23a body=93 status=ok
// SIG undefined FUN_14747e23a(void)

void FUN_14747e23a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3e1c40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14747e298 FUN_14747e298 body=93 status=ok
// SIG undefined FUN_14747e298(void)

void FUN_14747e298(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3e1c40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14747e2f6 FUN_14747e2f6 body=126 status=ok
// SIG undefined FUN_14747e2f6(void)

void FUN_14747e2f6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a3e1c40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014747e365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14747e374 FUN_14747e374 body=35 status=ok
// SIG undefined FUN_14747e374(void)

void FUN_14747e374(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014747e393. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14747e398 FUN_14747e398 body=132 status=ok
// SIG undefined FUN_14747e398(void)

void FUN_14747e398(longlong param_1,int param_2)

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



// FUNCTION 14747e41e FUN_14747e41e body=114 status=ok
// SIG undefined FUN_14747e41e(void)

void FUN_14747e41e(longlong *param_1,int param_2)

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



// FUNCTION 14747e490 FUN_14747e490 body=122 status=ok
// SIG undefined FUN_14747e490(void)

void FUN_14747e490(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 14747e50a FUN_14747e50a body=132 status=ok
// SIG undefined FUN_14747e50a(void)

void FUN_14747e50a(longlong param_1,int param_2)

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



// FUNCTION 14747e590 FUN_14747e590 body=34 status=ok
// SIG undefined FUN_14747e590(void)

void FUN_14747e590(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a3e1d40;
  return;
}



// FUNCTION 14747e5b2 FUN_14747e5b2 body=31 status=ok
// SIG undefined FUN_14747e5b2(void)

undefined8 FUN_14747e5b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14747e5ee FUN_14747e5ee body=93 status=ok
// SIG undefined FUN_14747e5ee(void)

void FUN_14747e5ee(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3e1cd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14747e64c FUN_14747e64c body=126 status=ok
// SIG undefined FUN_14747e64c(void)

void FUN_14747e64c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a3e1cd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014747e6bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14747e6d6 FUN_14747e6d6 body=21 status=ok
// SIG undefined FUN_14747e6d6(void)

undefined8 FUN_14747e6d6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14747e6ec FUN_14747e6ec body=29 status=ok
// SIG undefined FUN_14747e6ec(void)

undefined8 FUN_14747e6ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14747e710 FUN_14747e710 body=321 status=ok
// SIG undefined FUN_14747e710(void)

void FUN_14747e710(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14327525a(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747e856 FUN_14747e856 body=144 status=ok
// SIG undefined FUN_14747e856(void)

longlong * FUN_14747e856(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar5 = (longlong *)FUN_14747fd62(param_1,param_3);
  if ((longlong)(int)plVar5[1] != 0) {
    plVar7 = (longlong *)*plVar5;
    plVar5 = plVar7 + (longlong)(int)plVar5[1] * 2;
    do {
      lVar6 = *plVar7;
      *param_2 = lVar6;
      lVar3 = plVar7[1];
      param_2[1] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
        lVar6 = *param_2;
      }
      if (*(longlong *)(lVar6 + 0x18) == param_4) {
        return param_2;
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
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar5);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14747e8e6 FUN_14747e8e6 body=94 status=ok
// SIG undefined FUN_14747e8e6(void)

undefined8 * FUN_14747e8e6(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *param_1 = &PTR_FUN_14a3e43c0;
  lVar1 = *param_2;
  param_1[0xb] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14747e95c FUN_14747e95c body=75 status=ok
// SIG undefined FUN_14747e95c(void)

void FUN_14747e95c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14747e9a8(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747e9a8 FUN_14747e9a8 body=341 status=ok
// SIG undefined FUN_14747e9a8(void)

void FUN_14747e9a8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  switchD_143c3d4dc::caseD_21();
  FUN_146fd52e5(param_2,param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x48) != 0) goto LAB_14747e9d2;
  plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a3e47d0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  *(undefined4 *)((longlong)plVar3 + 0x44) = 0x80;
  *(undefined4 *)(plVar3 + 9) = 0xffffffff;
  plVar3[2] = (longlong)&PTR_FUN_14a3e43c0;
  plVar3[0xd] = 0;
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x50);
    if (plVar4 == (longlong *)0x0) goto LAB_14747e9d2;
    *(undefined8 *)(param_1 + 0x50) = 0;
LAB_14747ea71:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14747e9d2;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x48) = plVar3 + 2;
    plVar4 = *(longlong **)(param_1 + 0x50);
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x50) = plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14747ea71;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14747e9d2:
                    /* WARNING: Could not recover jumptable at 0x00014747e9e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x40))(*(longlong **)(param_1 + 0x48),param_2);
  return;
}



// FUNCTION 14747eb02 FUN_14747eb02 body=358 status=ok
// SIG undefined FUN_14747eb02(void)

void FUN_14747eb02(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 0x48) != 0) goto LAB_14747eb18;
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a3e47d0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[0xb] = 0;
  plVar4[0xc] = 0;
  *(undefined4 *)((longlong)plVar4 + 0x44) = 0x80;
  *(undefined4 *)(plVar4 + 9) = 0xffffffff;
  plVar4[2] = (longlong)&PTR_FUN_14a3e43c0;
  plVar4[0xd] = 0;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0x10;
    plVar6 = *(longlong **)(param_1 + 0x50);
    if (plVar6 == (longlong *)0x0) goto LAB_14747eb18;
    *(undefined8 *)(param_1 + 0x50) = 0;
LAB_14747ebcf:
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
    if (plVar4 == (longlong *)0x0) goto LAB_14747eb18;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x48) = plVar4 + 2;
    plVar6 = *(longlong **)(param_1 + 0x50);
    if (plVar4 == plVar6) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x50) = plVar4;
      if (plVar6 != (longlong *)0x0) goto LAB_14747ebcf;
    }
  }
  LOCK();
  plVar6 = plVar4 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14747eb18:
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar5 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *param_2;
    }
  }
  *(longlong *)(lVar3 + 0x58) = lVar5;
  *(undefined2 *)(param_1 + 0x98) = 0x101;
  return;
}



// FUNCTION 14747ec68 FUN_14747ec68 body=7 status=ok
// SIG undefined FUN_14747ec68(void)

void FUN_14747ec68(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x98) = param_2;
  return;
}



// FUNCTION 14747ec70 FUN_14747ec70 body=7 status=ok
// SIG undefined FUN_14747ec70(void)

void FUN_14747ec70(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x99) = param_2;
  return;
}



// FUNCTION 14747ec78 FUN_14747ec78 body=354 status=ok
// SIG undefined FUN_14747ec78(void)

void FUN_14747ec78(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x48) != 0) goto LAB_14747ec8e;
  plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a3e47d0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  *(undefined4 *)((longlong)plVar3 + 0x44) = 0x80;
  *(undefined4 *)(plVar3 + 9) = 0xffffffff;
  plVar3[2] = (longlong)&PTR_FUN_14a3e43c0;
  plVar3[0xd] = 0;
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x50);
    if (plVar5 == (longlong *)0x0) goto LAB_14747ec8e;
    *(undefined8 *)(param_1 + 0x50) = 0;
LAB_14747ed41:
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
    if (plVar3 == (longlong *)0x0) goto LAB_14747ec8e;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x48) = plVar3 + 2;
    plVar5 = *(longlong **)(param_1 + 0x50);
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x50) = plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_14747ed41;
    }
  }
  LOCK();
  plVar5 = plVar3 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14747ec8e:
  lVar4 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0x58) = lVar4;
  *(undefined2 *)(param_1 + 0x98) = 0x101;
  return;
}



// FUNCTION 14747edda FUN_14747edda body=94 status=ok
// SIG undefined FUN_14747edda(void)

void FUN_14747edda(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(longlong *)(param_1 + 0x50) = lVar4;
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
  *(undefined2 *)(param_1 + 0x98) = 0x101;
  FUN_14282b7b8(param_1);
  return;
}



// FUNCTION 14747ee38 FUN_14747ee38 body=157 status=ok
// SIG undefined FUN_14747ee38(void)

void FUN_14747ee38(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  
  if (((*param_1 != 0) && (*param_2 != 0)) &&
     (lVar1 = FUN_144a87586(*(undefined8 *)(*param_1 + 0x10),*param_3), lVar1 != 0)) {
    lVar4 = *(longlong *)(lVar1 + 8);
    lVar2 = FUN_144a810c6();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) {
        return;
      }
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) {
      return;
    }
    if ((*(longlong *)(lVar1 + 0x70) == *(longlong *)(*param_2 + 0x10)) &&
       (plVar3 = (longlong *)((longlong)*(int *)(lVar1 + 0x44) + *param_1),
       plVar3 != (longlong *)0x0)) {
      *plVar3 = *param_2;
    }
  }
  return;
}



// FUNCTION 14747eed6 FUN_14747eed6 body=147 status=ok
// SIG undefined FUN_14747eed6(void)

void FUN_14747eed6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(local_20,L"DataflowAsset",1);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x58);
    if ((local_28 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  FUN_14747ee38(param_2,&local_28,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747ef6e FUN_14747ef6e body=209 status=ok
// SIG undefined FUN_14747ef6e(void)

void FUN_14747ef6e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14747eed6();
  FUN_1446f470e(local_20,L"AnimationAsset",1);
  local_28 = *(longlong *)(param_1 + 0xb0);
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14747ee38(param_2,&local_28,local_20);
  FUN_1446f470e(local_20,L"SkeletalMesh",1);
  local_30 = *(longlong *)(param_1 + 0xa8);
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14747ee38(param_2,&local_30,local_20);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747f060 FUN_14747f060 body=98 status=ok
// SIG undefined FUN_14747f060(void)

void FUN_14747f060(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147a7e53c(param_1,uVar1);
  FUN_1402ac1b3(uVar1,param_1 + 0x98);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747f0c4 FUN_14747f0c4 body=41 status=ok
// SIG undefined FUN_14747f0c4(void)

void FUN_14747f0c4(longlong param_1,undefined8 param_2)

{
  FUN_147a7e53c();
  FUN_1402ac1b3(param_2,param_1 + 0x98);
  return;
}



// FUNCTION 14747f0ee FUN_14747f0ee body=105 status=ok
// SIG undefined FUN_14747f0ee(void)

undefined8 FUN_14747f0ee(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4(&local_20,local_30);
  FUN_140233b1a(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747f158 FUN_14747f158 body=1003 status=ok
// SIG undefined FUN_14747f158(void)

void FUN_14747f158(uint param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  double *pdVar1;
  undefined4 *puVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_248 [32];
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [136];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar15 = (longlong)(int)param_1;
  if (*(char *)(*param_4 + lVar15) != '\0') goto LAB_14747f21b;
  if (((int)param_1 < 0) || (*(int *)(param_2 + 0x28) <= (int)param_1)) {
LAB_14747f1f6:
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + lVar15 * 0x60);
    puVar14 = (undefined8 *)(lVar15 * 0x60 + *param_3);
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *puVar14 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar14 = puVar14 + 1;
    }
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(param_2 + 0x20) + 8 + (ulonglong)param_1 * 0xc);
    if (uVar3 == param_1 || uVar3 == 0xffffffff) goto LAB_14747f1f6;
    FUN_14747f158(uVar3,param_2,param_3,param_4);
    lVar11 = *param_3;
    lVar8 = lVar15 * 0x60;
    lVar12 = *(longlong *)(param_2 + 0x30);
    dVar7 = *(double *)(lVar12 + lVar8);
    dVar4 = ((double *)(lVar12 + lVar8))[1];
    dVar5 = *(double *)(lVar12 + 0x10 + lVar8);
    pdVar1 = (double *)(lVar12 + 0x40 + lVar8);
    local_198 = *pdVar1;
    dVar9 = pdVar1[1];
    dVar10 = *(double *)(lVar12 + 0x50 + lVar8);
    dVar20 = dVar4 + dVar4;
    dVar16 = dVar5 + dVar5;
    dVar19 = dVar7 * (dVar7 + dVar7);
    local_1a8 = (1.0 - (dVar5 * dVar16 + dVar4 * dVar20)) * local_198;
    dVar5 = (1.0 - (dVar5 * dVar16 + dVar19)) * dVar9;
    local_158 = (1.0 - (dVar19 + dVar4 * dVar20)) * dVar10;
    dVar6 = *(double *)(lVar12 + lVar8) * dVar16;
    pdVar1 = (double *)(lVar12 + 0x18 + lVar8);
    dVar19 = *pdVar1;
    dVar17 = dVar16 * dVar19;
    dVar18 = (dVar7 + dVar7) * *pdVar1;
    dVar19 = dVar20 * dVar19;
    dStack_1a0 = (dVar20 * dVar7 + dVar17) * local_198;
    local_178 = (dVar16 * dVar4 + dVar18) * dVar9;
    local_198 = (dVar6 - dVar19) * local_198;
    dVar4 = (dVar16 * dVar4 - dVar18) * dVar10;
    uStack_190 = 0;
    local_188._8_4_ = SUB84(dVar5,0);
    local_188._0_8_ = (dVar20 * dVar7 - dVar17) * dVar9;
    local_188._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uStack_170 = 0;
    local_168._8_4_ = SUB84(dVar4,0);
    local_168._0_8_ = (dVar19 + dVar6) * dVar10;
    local_168._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    uStack_150 = 0;
    puVar13 = (undefined8 *)(lVar12 + 0x20 + lVar8);
    local_148 = *puVar13;
    uStack_140 = puVar13[1];
    local_138 = *(undefined8 *)(lVar12 + 0x30 + lVar8);
    uStack_130 = 0x3ff0000000000000;
    lVar12 = (longlong)(int)uVar3 * 0x60;
    dVar9 = *(double *)(lVar11 + lVar12);
    dVar6 = ((double *)(lVar11 + lVar12))[1];
    dVar4 = *(double *)(lVar11 + 0x10 + lVar12);
    pdVar1 = (double *)(lVar11 + 0x40 + lVar12);
    local_218 = *pdVar1;
    dVar10 = pdVar1[1];
    dVar16 = *(double *)(lVar11 + 0x50 + lVar12);
    dVar5 = dVar6 + dVar6;
    dVar17 = dVar4 + dVar4;
    dVar19 = dVar9 * (dVar9 + dVar9);
    local_228 = (1.0 - (dVar4 * dVar17 + dVar6 * dVar5)) * local_218;
    dVar4 = (1.0 - (dVar4 * dVar17 + dVar19)) * dVar10;
    local_1d8 = (1.0 - (dVar19 + dVar6 * dVar5)) * dVar16;
    dVar7 = *(double *)(lVar11 + lVar12) * dVar17;
    pdVar1 = (double *)(lVar11 + 0x18 + lVar12);
    dVar19 = *pdVar1;
    dVar18 = dVar17 * dVar19;
    dVar20 = (dVar9 + dVar9) * *pdVar1;
    dVar19 = dVar5 * dVar19;
    dStack_220 = (dVar5 * dVar9 + dVar18) * local_218;
    local_1f8 = (dVar17 * dVar6 + dVar20) * dVar10;
    local_218 = (dVar7 - dVar19) * local_218;
    dVar6 = (dVar17 * dVar6 - dVar20) * dVar16;
    uStack_210 = 0;
    local_208._8_4_ = SUB84(dVar4,0);
    local_208._0_8_ = (dVar5 * dVar9 - dVar18) * dVar10;
    local_208._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    uStack_1f0 = 0;
    local_1e8._8_4_ = SUB84(dVar6,0);
    local_1e8._0_8_ = (dVar19 + dVar7) * dVar16;
    local_1e8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uStack_1d0 = 0;
    puVar2 = (undefined4 *)(lVar11 + 0x20 + lVar12);
    local_1c8 = *puVar2;
    uStack_1c4 = puVar2[1];
    uStack_1c0 = puVar2[2];
    uStack_1bc = puVar2[3];
    local_1b8 = *(undefined8 *)(lVar11 + 0x30 + lVar12);
    uStack_1b0 = 0x3ff0000000000000;
    FUN_1447fea8d(local_128);
    FUN_1448ac920(lVar11 + lVar8,local_128);
  }
  *(undefined1 *)(*param_4 + lVar15) = 1;
LAB_14747f21b:
  if ((local_a0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747f544 FUN_14747f544 body=163 status=ok
// SIG undefined FUN_14747f544(void)

void FUN_14747f544(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  local_39 = 0;
  FUN_14475e60e(local_38,&local_39,*(undefined4 *)(param_1 + 0x28));
  FUN_140ee84a4(param_2,*(undefined4 *)(param_1 + 0x28),1);
  if (0 < *(int *)(param_1 + 0x28)) {
    uVar1 = *(int *)(param_1 + 0x28) + 1;
    do {
      FUN_14747f158(uVar1 - 2,param_1,param_2,local_38);
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747f5f4 FUN_14747f5f4 body=99 status=ok
// SIG undefined FUN_14747f5f4(void)

void FUN_14747f5f4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,uVar1);
  (**(code **)(**(longlong **)(param_1 + 0x88) + 8))(*(longlong **)(param_1 + 0x88),uVar1,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747f658 FUN_14747f658 body=46 status=ok
// SIG undefined FUN_14747f658(void)

void FUN_14747f658(longlong param_1,undefined8 param_2)

{
  switchD_143c3d4dc::caseD_21();
                    /* WARNING: Could not recover jumptable at 0x00014747f683. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x88) + 8))(*(longlong **)(param_1 + 0x88),param_2,param_1)
  ;
  return;
}



// FUNCTION 14747f686 FUN_14747f686 body=30 status=ok
// SIG undefined FUN_14747f686(void)

void FUN_14747f686(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_146fd4b64();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  FUN_1446e0b6e(param_1);
  return;
}



// FUNCTION 14747f6a4 FUN_14747f6a4 body=104 status=ok
// SIG undefined FUN_14747f6a4(void)

undefined8 FUN_14747f6a4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"TEngineContext",1);
  uVar1 = 1;
  if (local_28 != param_2) {
    uVar1 = FUN_14747f70e(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747f70e FUN_14747f70e body=118 status=ok
// SIG undefined FUN_14747f70e(void)

bool FUN_14747f70e(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_28,"FContextSingle",1);
  bVar1 = true;
  if (local_28 != param_2) {
    FUN_1446ddc76(&local_20,"FContext",1);
    bVar1 = local_20 == param_2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747f786 FUN_14747f786 body=38 status=ok
// SIG undefined FUN_14747f786(void)

undefined8 FUN_14747f786(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TEngineContext",1);
  return param_2;
}



// FUNCTION 14747f818 FUN_14747f818 body=94 status=ok
// SIG undefined FUN_14747f818(void)

void FUN_14747f818(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = DAT_14c99d1d8;
  FUN_146fd52e5(param_2);
  FUN_146fd4bac(param_1 + 8,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747f878 FUN_14747f878 body=94 status=ok
// SIG undefined FUN_14747f878(void)

void FUN_14747f878(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = DAT_14c99d1d8;
  FUN_146fd52e5(param_2);
  FUN_146fd4bac(param_1 + 8,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747f8d8 FUN_14747f8d8 body=73 status=ok
// SIG undefined FUN_14747f8d8(void)

undefined8 * FUN_14747f8d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a3e4770;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14747fec8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14747f922 FUN_14747f922 body=86 status=ok
// SIG undefined FUN_14747f922(void)

void FUN_14747f922(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 *local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_24;
  local_24 = param_2;
  local_18 = param_3;
  FUN_1474801dc(param_1 + 8,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747f9fe FUN_14747f9fe body=80 status=ok
// SIG undefined FUN_14747f9fe(void)

void FUN_14747f9fe(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(longlong *)(param_1 + 0x50) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014747fa43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14747fa4e FUN_14747fa4e body=52 status=ok
// SIG undefined FUN_14747fa4e(void)

void FUN_14747fa4e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *(longlong *)(param_1 + 0x58) = lVar1;
  return;
}



// FUNCTION 14747faaa FUN_14747faaa body=47 status=ok
// SIG undefined FUN_14747faaa(void)

void FUN_14747faaa(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14747faf0 FUN_14747faf0 body=67 status=ok
// SIG undefined FUN_14747faf0(void)

undefined1 FUN_14747faf0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 14747fb5c FUN_14747fb5c body=59 status=ok
// SIG undefined FUN_14747fb5c(void)

undefined8 FUN_14747fb5c(longlong *param_1)

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



// FUNCTION 14747fbfa FUN_14747fbfa body=51 status=ok
// SIG undefined FUN_14747fbfa(void)

void FUN_14747fbfa(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14747fcc0 FUN_14747fcc0 body=59 status=ok
// SIG undefined FUN_14747fcc0(void)

undefined8 FUN_14747fcc0(longlong *param_1)

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



// FUNCTION 14747fd62 FUN_14747fd62 body=231 status=ok
// SIG undefined FUN_14747fd62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14747fd62(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa86f8) && (FUN_144b3d300(&DAT_14caa86f8), DAT_14caa86f8 == -1)) {
    DAT_14caa86e8 = 0;
    _DAT_14caa86f0 = 0;
    atexit(FUN_143275724);
    _Init_thread_footer(&DAT_14caa86f8);
  }
  uVar1 = *param_2;
  iVar2 = FUN_144a788f7(uVar1 & 0xffffffff);
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar3 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x68);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U & iVar2 + (int)(uVar1 >> 0x20)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 0x20) == uVar1)
        goto LAB_14747fda3;
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_14747fda3:
  puVar5 = (undefined8 *)(lVar3 + 8);
  if (lVar3 == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  puVar4 = &DAT_14caa86e8;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = puVar5;
  }
  return puVar4;
}



// FUNCTION 14747fe4a FUN_14747fe4a body=85 status=ok
// SIG undefined FUN_14747fe4a(void)

bool FUN_14747fe4a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"FContext",1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20 == param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747fea2 FUN_14747fea2 body=38 status=ok
// SIG undefined FUN_14747fea2(void)

undefined8 FUN_14747fea2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FContext",1);
  return param_2;
}



// FUNCTION 14747fec8 FUN_14747fec8 body=54 status=ok
// SIG undefined FUN_14747fec8(void)

void FUN_14747fec8(longlong *param_1)

{
  FUN_14747fefe(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14747fefe FUN_14747fefe body=361 status=ok
// SIG undefined FUN_14747fefe(void)

void FUN_14747fefe(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
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
      puVar2 = *(undefined8 **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144727cd0(param_1,param_2);
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
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14748006a FUN_14748006a body=368 status=ok
// SIG undefined FUN_14748006a(void)

int FUN_14748006a(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
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
  FUN_146f44312(param_2);
  uVar3 = (longlong)(int)param_1[1] - (longlong)*(int *)((longlong)param_1 + 0x34);
  uVar2 = (uint)uVar3;
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar3);
    }
    FUN_146b7f620(param_2,uVar3 & 0xffffffff);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar1)) {
      *(int *)(param_2 + 0x48) = iVar1;
      FUN_1449809d4(param_2);
    }
  }
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_144980568(param_2,&local_40,(longlong)iStack_4c * 0x18 + *local_68,0);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474801dc FUN_1474801dc body=316 status=ok
// SIG undefined FUN_1474801dc(void)

undefined4 *
FUN_1474801dc(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146fda032(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  *local_48 = *(uint *)*param_3;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  *puVar1 = 0;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = *local_48;
  local_68 = param_4;
  cVar2 = FUN_146fda118(param_1,uVar4,local_48);
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
      local_48[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146fda258(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748031a FUN_14748031a body=57 status=ok
// SIG undefined FUN_14748031a(void)

void FUN_14748031a(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14a3e4770;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_14747fec8(param_1 + 0x18);
  return;
}



// FUNCTION 147480354 FUN_147480354 body=29 status=ok
// SIG undefined FUN_147480354(void)

undefined8 FUN_147480354(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147480372 FUN_147480372 body=34 status=ok
// SIG undefined FUN_147480372(void)

void FUN_147480372(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14a3e4860;
  return;
}



// FUNCTION 147480394 FUN_147480394 body=31 status=ok
// SIG undefined FUN_147480394(void)

undefined8 FUN_147480394(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474803d0 FUN_1474803d0 body=93 status=ok
// SIG undefined FUN_1474803d0(void)

void FUN_1474803d0(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a3e47f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14748042e FUN_14748042e body=123 status=ok
// SIG undefined FUN_14748042e(void)

void FUN_14748042e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14a3e47f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1474804b6 FUN_1474804b6 body=21 status=ok
// SIG undefined FUN_1474804b6(void)

undefined8 FUN_1474804b6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1474804cc FUN_1474804cc body=29 status=ok
// SIG undefined FUN_1474804cc(void)

undefined8 FUN_1474804cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14748050e FUN_14748050e body=238 status=ok
// SIG undefined FUN_14748050e(void)

void FUN_14748050e(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)*param_1)(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474805fe FUN_1474805fe body=239 status=ok
// SIG undefined FUN_1474805fe(void)

void FUN_1474805fe(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 8))(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474806f2 FUN_1474806f2 body=137 status=ok
// SIG undefined FUN_1474806f2(void)

undefined8 FUN_1474806f2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_30,"TSimulationContext",1);
  uVar1 = 1;
  if (local_30 != param_2) {
    FUN_1446ddc76(&local_28,"TEngineContext",1);
    uVar1 = 1;
    if (local_28 != param_2) {
      uVar1 = FUN_14747f70e(param_1,param_2);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748077c FUN_14748077c body=38 status=ok
// SIG undefined FUN_14748077c(void)

undefined8 FUN_14748077c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"TSimulationContext",1);
  return param_2;
}



// FUNCTION 1474807a2 FUN_1474807a2 body=147 status=ok
// SIG undefined FUN_1474807a2(void)

undefined8 * FUN_1474807a2(undefined8 *param_1)

{
  FUN_14747e8e6();
  *param_1 = &PTR_FUN_14a3e6d10;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 147480836 FUN_147480836 body=166 status=ok
// SIG undefined FUN_147480836(void)

void FUN_147480836(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3e6d10;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_14577537e(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_147482f62(param_1 + 0xd);
  *param_1 = &PTR_LAB_14a3e4770;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14747fec8(param_1 + 1);
  return;
}



// FUNCTION 1474808dc FUN_1474808dc body=698 status=ok
// SIG undefined FUN_1474808dc(void)

void FUN_1474808dc(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_50 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec);
  local_58 = (undefined1 *)0x0;
  local_4c = 0x80;
  uVar11 = local_50 + 0x1f;
  if (uVar11 < 0x20) goto LAB_147480944;
  if (uVar11 < 0xa0) {
    puVar8 = local_68;
LAB_147480b2d:
    uVar11 = uVar11 >> 3 & 0xfffffffc;
  }
  else {
    FUN_14499171c(local_68,0,uVar11 >> 5,4);
    local_4c = uVar11 & 0xffffffe0;
    puVar8 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar8 = local_68;
    }
    if (uVar11 < 0x120) goto LAB_147480b2d;
    uVar11 = (uVar11 >> 5) << 2;
  }
  memset(puVar8,0,(ulonglong)uVar11);
  iVar5 = local_50 + 0x1f;
  if (-1 < local_50) {
    iVar5 = local_50;
  }
  if (local_50 % 0x20 != 0) {
    puVar8 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar8 = local_68;
    }
    bVar7 = -(char)(local_50 % 0x20);
    *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
         (uint)(*(int *)(puVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar7 & 0x1f)) >> (bVar7 & 0x1f);
  }
LAB_147480944:
  FUN_147480b98(param_1,param_3,local_68);
  iVar5 = *(int *)(param_2 + 1);
  if (iVar5 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  iVar6 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar6,puVar9);
  iVar5 = FUN_147485602((longlong *)(param_1 + 0x68),uVar4,param_2);
  if (iVar5 != -1) {
    lVar10 = (longlong)iVar5 * 0x68 + *(longlong *)(param_1 + 0x68);
    plVar12 = (longlong *)(lVar10 + 0x10);
    if (plVar12 != (longlong *)0x0 && lVar10 != 0) {
      lVar1 = lVar10 + 0x20;
      local_88 = 0x100000000;
      local_78 = 0xffffffff;
      uStack_70 = 0;
      uStack_80 = lVar1;
      if (*(int *)(lVar10 + 0x38) == 0) {
        iVar5 = 0;
      }
      else {
        FUN_1449c0562(&local_88);
        iVar5 = *(int *)(lVar10 + 0x38);
      }
      local_a8 = (undefined4)local_88;
      uStack_a4 = local_88._4_4_;
      uStack_a0 = (undefined4)uStack_80;
      uStack_9c = uStack_80._4_4_;
      uStack_90 = CONCAT44(uStack_6c,uStack_70);
      local_98 = local_78;
      uVar2 = local_98;
      local_98._4_4_ = (int)((ulonglong)local_78 >> 0x20);
      iVar6 = local_98._4_4_;
      local_b0 = plVar12;
      if ((local_98._4_4_ != iVar5) || (local_98 = local_78, uStack_80 != lVar1)) {
        do {
          local_98 = uVar2;
          lVar10 = *(longlong *)(*local_b0 + (longlong)iVar6 * 0x10);
          if ((lVar10 != 0) && (cVar3 = FUN_147480d10(lVar10,local_68), cVar3 != '\0')) {
            iVar6 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar6 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar6 + 1U) {
              FUN_1474856ce(param_4,iVar6);
            }
            *(longlong *)(*param_4 + (longlong)iVar6 * 8) = lVar10;
          }
          local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
          FUN_1449c0562(&local_a8);
          iVar6 = local_98._4_4_;
          uVar2 = local_98;
        } while (local_b0 != plVar12 ||
                 (CONCAT44(uStack_9c,uStack_a0) != lVar1 || local_98._4_4_ != iVar5));
      }
    }
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147480b98 FUN_147480b98 body=376 status=ok
// SIG undefined FUN_147480b98(void)

void FUN_147480b98(longlong param_1,undefined8 *param_2,void *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  byte bVar5;
  void *pvVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  
  iVar10 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec);
  *(int *)((longlong)param_3 + 0x18) = iVar10;
  uVar11 = iVar10 + 0x1f;
  if (0x1f < uVar11) {
    uVar13 = uVar11 >> 5;
    if (*(int *)((longlong)param_3 + 0x1c) + 0x1fU >> 5 < uVar13) {
      FUN_14499171c(param_3,0,uVar13,4);
      *(uint *)((longlong)param_3 + 0x1c) = uVar11 & 0xffffffe0;
    }
    pvVar6 = *(void **)((longlong)param_3 + 0x10);
    if (*(void **)((longlong)param_3 + 0x10) == (void *)0x0) {
      pvVar6 = param_3;
    }
    if (uVar11 < 0x120) {
      uVar13 = uVar11 >> 3 & 0x3c;
    }
    else {
      uVar13 = uVar13 << 2;
    }
    memset(pvVar6,0,(ulonglong)uVar13);
    iVar10 = *(int *)((longlong)param_3 + 0x18);
    iVar9 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar9 = iVar10;
    }
    if (iVar10 % 0x20 != 0) {
      pvVar6 = *(void **)((longlong)param_3 + 0x10);
      if (*(void **)((longlong)param_3 + 0x10) == (void *)0x0) {
        pvVar6 = param_3;
      }
      bVar5 = -(char)(iVar10 % 0x20);
      *(uint *)((longlong)pvVar6 + (longlong)(iVar9 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar6 + (longlong)(iVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
           (bVar5 & 0x1f);
    }
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar8 = (undefined8 *)*param_2;
    lVar12 = (longlong)*(int *)(param_2 + 1) << 4;
    do {
      puVar7 = &DAT_149dfb77a;
      iVar10 = 0;
      if (*(int *)(puVar8 + 1) != 0) {
        puVar7 = (undefined2 *)*puVar8;
        iVar10 = *(int *)(puVar8 + 1) + -1;
      }
      uVar2 = FUN_144a49b4a(iVar10,puVar7);
      iVar10 = FUN_1412a630a((longlong *)(param_1 + 0xb8),uVar2,puVar8);
      if ((iVar10 != -1) &&
         (lVar3 = (longlong)iVar10 * 0x20 + *(longlong *)(param_1 + 0xb8),
         piVar4 = (int *)(lVar3 + 0x10), piVar4 != (int *)0x0 && lVar3 != 0)) {
        iVar10 = *piVar4;
        pvVar6 = *(void **)((longlong)param_3 + 0x10);
        if (*(void **)((longlong)param_3 + 0x10) == (void *)0x0) {
          pvVar6 = param_3;
        }
        iVar9 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar9 = iVar10;
        }
        puVar1 = (uint *)((longlong)pvVar6 + (longlong)(iVar9 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
      }
      puVar8 = puVar8 + 2;
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 147480d10 FUN_147480d10 body=142 status=ok
// SIG undefined FUN_147480d10(void)

bool FUN_147480d10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 local_39;
  undefined1 local_38 [16];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_20 = 0x8000000000;
  local_48 = &local_39;
  FUN_1400aa4bb(param_1 + 8,param_2,local_38,2);
  iVar1 = FUN_144b07aaa(local_38,0,0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147480da0 FUN_147480da0 body=128 status=ok
// SIG undefined FUN_147480da0(void)

void FUN_147480da0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_20 = param_3;
  uVar3 = FUN_144a49b4a(iVar2,puVar5);
  uVar4 = FUN_147485754(param_1 + 0x68,uVar3,param_2);
  FUN_147485e94(uVar4,local_24,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147480e22 FUN_147480e22 body=1580 status=ok
// SIG undefined FUN_147480e22(void)

void FUN_147480e22(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  void *pvVar14;
  longlong lVar15;
  undefined2 *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong *local_130;
  int local_128;
  int local_124;
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  int local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  uint uStack_c0;
  int iStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_70;
  int *piStack_68;
  ulonglong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar4 = (longlong *)(param_1 + 0xb8);
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
    FUN_146b184c0(plVar4);
    FUN_146b18604(plVar4);
  }
  local_130 = (longlong *)(param_1 + 0x68);
  local_88 = 0;
  uStack_80 = 0;
  local_120 = param_1 + 0x78;
  local_d8 = (longlong *)&DAT_100000000;
  local_c8 = 0xffffffff;
  uStack_c0 = 0;
  uStack_d0 = local_120;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar19 = 0;
  }
  else {
    FUN_1449c0562(&local_d8);
    iVar19 = *(int *)(param_1 + 0x90);
  }
  local_98 = local_c8;
  lVar5 = local_98;
  uStack_90 = uStack_c0;
  iStack_8c = iStack_bc;
  local_a8 = (undefined4)local_d8;
  uStack_a4 = local_d8._4_4_;
  uStack_a0 = (undefined4)uStack_d0;
  uStack_9c = uStack_d0._4_4_;
  local_b0 = local_130;
  local_98._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
  if ((local_98._4_4_ != iVar19) || (uStack_d0 != local_120)) {
    iVar9 = local_98._4_4_;
    local_128 = iVar19;
    local_110 = param_1;
    local_98 = lVar5;
    do {
      lVar20 = *local_b0;
      lVar5 = lVar20 + (longlong)iVar9 * 0x68;
      local_138 = lVar5 + 0x20;
      local_100 = (longlong *)0x100000000;
      uStack_f0._0_4_ = 0xffffffff;
      uStack_f0._4_4_ = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      local_f8 = local_138;
      if (*(int *)(lVar5 + 0x38) != 0) {
        FUN_1449c0562(&local_100);
      }
      lVar20 = lVar20 + (longlong)iVar9 * 0x68;
      local_118 = (longlong *)(lVar20 + 0x10);
      uStack_c0 = (uint)uStack_f0;
      iStack_bc = uStack_f0._4_4_;
      local_b8 = (uint)local_e8;
      local_b4 = local_e8._4_4_;
      uStack_d0 = (longlong)local_100;
      local_c8 = local_f8;
      iVar19 = *(int *)(lVar20 + 0x38);
      local_100 = (longlong *)CONCAT44(1 << ((byte)iVar19 & 0x1f),iVar19 >> 5);
      local_f8 = local_138;
      uStack_f0 = (int *)CONCAT44(iVar19,-1 << ((byte)iVar19 & 0x1f));
      local_e8 = CONCAT44(local_e8._4_4_,iVar19) & 0xffffffffffffffe0;
      local_d8 = local_118;
      if (*(int *)(lVar20 + 0x38) != iVar19) {
        FUN_1449c0562(&local_100);
        iVar19 = uStack_f0._4_4_;
      }
      local_138 = local_f8;
      local_124 = iVar19;
      if (iStack_bc == iVar19) goto LAB_14748137d;
      do {
        do {
          lVar5 = *(longlong *)(*local_d8 + (longlong)iStack_bc * 0x10);
          if (lVar5 != 0) {
            FUN_140250df4(&local_88);
            piVar1 = (int *)(lVar5 + 0x38);
            local_70 = 0x100000000;
            local_60 = 0xffffffff;
            uStack_58 = 0;
            piStack_68 = piVar1;
            if (*(int *)(lVar5 + 0x50) == 0) {
              iVar19 = 0;
            }
            else {
              FUN_1449c0562(&local_70);
              iVar19 = *(int *)(lVar5 + 0x50);
            }
            plVar2 = (longlong *)(lVar5 + 0x28);
            uStack_e0 = CONCAT44(uStack_54,uStack_58);
            local_e8 = local_60;
            uVar7 = local_e8;
            local_f8 = local_70;
            uStack_f0 = piStack_68;
            local_e8._4_4_ = (int)(local_60 >> 0x20);
            iVar9 = local_e8._4_4_;
            local_100 = plVar2;
            if ((local_e8._4_4_ != iVar19) || (local_e8 = uVar7, piStack_68 != piVar1)) {
              do {
                local_e8 = uVar7;
                lVar20 = *local_100;
                lVar11 = (longlong)iVar9;
                iVar9 = *(int *)(lVar20 + 8 + lVar11 * 0x18);
                puVar16 = &DAT_149dfb77a;
                if (iVar9 != 0) {
                  puVar16 = *(undefined2 **)(lVar20 + lVar11 * 0x18);
                }
                lVar20 = lVar20 + lVar11 * 0x18;
                iVar18 = iVar9 + -1;
                if (iVar9 == 0) {
                  iVar18 = 0;
                }
                uVar8 = FUN_144a49b4a(iVar18,puVar16);
                iVar9 = FUN_1412a630a(plVar4,uVar8,lVar20);
                lVar11 = local_110;
                if (iVar9 == -1) {
LAB_147481197:
                  local_104 = *(int *)(local_110 + 0xc0) - *(int *)(local_110 + 0xec);
                  piStack_68 = &local_104;
                  local_70 = lVar20;
                  FUN_146b18722(plVar4,&local_4c,&local_70,0);
                  lVar15 = *(longlong *)(lVar11 + 0xb8);
                  lVar12 = (longlong)local_4c << 5;
                }
                else {
                  lVar15 = *plVar4;
                  lVar12 = (longlong)iVar9 * 0x20;
                  if (lVar15 + lVar12 == 0) goto LAB_147481197;
                }
                uVar7 = uStack_80;
                lVar20 = (longlong)(int)uStack_80;
                uVar10 = (int)uStack_80 + 1;
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
                if (uStack_80._4_4_ < uVar10) {
                  FUN_1447808da(&local_88,uVar7 & 0xffffffff);
                }
                *(undefined4 *)(local_88 + lVar20 * 4) = *(undefined4 *)(lVar15 + lVar12 + 0x10);
                local_e8 = CONCAT44(local_e8._4_4_,(uint)local_e8 & ~local_f8._4_4_);
                FUN_1449c0562(&local_f8);
                iVar9 = local_e8._4_4_;
                uVar7 = local_e8;
              } while (local_100 != plVar2 || (uStack_f0 != piVar1 || local_e8._4_4_ != iVar19));
            }
            iVar19 = *(int *)(local_110 + 0xc0) - *(int *)(local_110 + 0xec);
            pvVar3 = (void *)(lVar5 + 8);
            *(int *)(lVar5 + 0x20) = iVar19;
            uVar10 = iVar19 + 0x1f;
            if (0x1f < uVar10) {
              uVar17 = uVar10 >> 5;
              if (*(int *)(lVar5 + 0x24) + 0x1fU >> 5 < uVar17) {
                FUN_14499171c(pvVar3,0,uVar17);
                *(uint *)(lVar5 + 0x24) = uVar10 & 0xffffffe0;
              }
              pvVar14 = *(void **)(lVar5 + 0x18);
              if (*(void **)(lVar5 + 0x18) == (void *)0x0) {
                pvVar14 = pvVar3;
              }
              if (uVar10 < 0x120) {
                uVar17 = uVar10 >> 3 & 0x3c;
              }
              else {
                uVar17 = uVar17 << 2;
              }
              memset(pvVar14,0,(ulonglong)uVar17);
              iVar19 = *(int *)(lVar5 + 0x20);
              iVar9 = iVar19 + 0x1f;
              if (-1 < iVar19) {
                iVar9 = iVar19;
              }
              if (iVar19 % 0x20 != 0) {
                pvVar14 = *(void **)(lVar5 + 0x18);
                if (*(void **)(lVar5 + 0x18) == (void *)0x0) {
                  pvVar14 = pvVar3;
                }
                bVar13 = -(char)(iVar19 % 0x20);
                *(uint *)((longlong)pvVar14 + (longlong)(iVar9 >> 5) * 4) =
                     (uint)(*(int *)((longlong)pvVar14 + (longlong)(iVar9 >> 5) * 4) <<
                           (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
              }
            }
            iVar19 = local_124;
            if ((longlong)(int)uStack_80 != 0) {
              lVar20 = 0;
              do {
                iVar9 = *(int *)(local_88 + lVar20);
                pvVar14 = *(void **)(lVar5 + 0x18);
                if (*(void **)(lVar5 + 0x18) == (void *)0x0) {
                  pvVar14 = pvVar3;
                }
                iVar18 = iVar9 + 0x1f;
                if (-1 < iVar9) {
                  iVar18 = iVar9;
                }
                puVar6 = (uint *)((longlong)pvVar14 + (longlong)(iVar18 >> 5) * 4);
                *puVar6 = *puVar6 | 1 << ((byte)iVar9 & 0x1f);
                lVar20 = lVar20 + 4;
              } while ((longlong)(int)uStack_80 * 4 != lVar20);
            }
          }
          uStack_c0 = uStack_c0 & ~uStack_d0._4_4_;
          FUN_1449c0562(&uStack_d0);
        } while (iStack_bc != iVar19);
LAB_14748137d:
      } while ((local_c8 != local_138) || (local_d8 != local_118));
      local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
      FUN_1449c0562(&local_a8);
      iVar9 = local_98._4_4_;
      lVar5 = local_98;
    } while (local_b0 != local_130 ||
             (CONCAT44(uStack_9c,uStack_a0) != local_120 || local_98._4_4_ != local_128));
  }
  local_98 = lVar5;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147481450 FUN_147481450 body=486 status=ok
// SIG undefined FUN_147481450(void)

void FUN_147481450(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_2;
  puVar7 = (ulonglong *)(**(code **)(*param_2 + 0x18))(param_2);
  uVar3 = *puVar7;
  local_30 = uVar3;
  if ((DAT_14c950c29 == 1) && (uVar3 != 0)) {
    FUN_1456cec3c(uVar3);
  }
  else if (uVar3 == 0) goto LAB_147481493;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(uVar3);
  }
  uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  lVar8 = FUN_147486764(param_1 + 0x40,uVar5 >> 0x10 ^ uVar5,&local_30);
  if (*(longlong *)(lVar8 + 0x50) == 0) {
    plVar9 = (longlong *)FUN_14001cc68(0x128,0x10);
    FUN_147487344(plVar9,&local_30);
    if (plVar9 == (longlong *)0x0) {
      *(undefined8 *)(lVar8 + 0x50) = 0x10;
      plVar12 = *(longlong **)(lVar8 + 0x58);
      if (plVar12 != (longlong *)0x0) {
        *(undefined8 *)(lVar8 + 0x58) = 0;
LAB_147481551:
        LOCK();
        plVar1 = plVar12 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (plVar9 != (longlong *)0x0) goto LAB_1474815ae;
      }
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      *(longlong **)(lVar8 + 0x50) = plVar9 + 2;
      plVar12 = *(longlong **)(lVar8 + 0x58);
      if (plVar9 == plVar12) {
        LOCK();
        plVar12 = plVar9 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      else {
        *(longlong **)(lVar8 + 0x58) = plVar9;
        if (plVar12 != (longlong *)0x0) goto LAB_147481551;
      }
LAB_1474815ae:
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  (**(code **)(*local_28 + 0x68))(local_28,&local_40);
  puVar11 = local_40;
  if (local_38 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  iVar4 = local_38 + -1;
  if (local_38 == 0) {
    iVar4 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar4,puVar11);
  uVar10 = FUN_1474873e6(lVar8,uVar6,&local_40);
  FUN_147487ba6(uVar10,local_44,&local_28);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_147481493:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147481638 FUN_147481638 body=403 status=ok
// SIG undefined FUN_147481638(void)

void FUN_147481638(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
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
  plVar1 = (longlong *)(param_1 + 0x40);
  lVar2 = param_1 + 0x50;
  local_68 = (undefined2 *)0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x68);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (int)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      iVar4 = iStack_74;
      lVar7 = *local_90;
      (**(code **)(*param_2 + 0x68))(param_2,&local_68);
      puVar6 = local_68;
      if ((int)uStack_60 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      plVar10 = (longlong *)((longlong)iVar4 * 0x70 + lVar7 + 8);
      uVar9 = 0;
      uVar5 = (ulonglong)((int)uStack_60 - 1);
      if ((int)uStack_60 == 0) {
        uVar5 = uVar9;
      }
      uVar3 = FUN_144a49b4a(uVar5,puVar6);
      iVar4 = FUN_14748746c(plVar10,uVar3,&local_68);
      if (iVar4 != -1) {
        uVar9 = (longlong)iVar4 * 0x68 + *plVar10;
      }
      lVar7 = uVar9 + 0x10;
      if (uVar9 == 0) {
        lVar7 = 0;
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (lVar7 != 0) {
        FUN_147481a54(lVar7,param_2);
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



// FUNCTION 1474817cc FUN_1474817cc body=300 status=ok
// SIG undefined FUN_1474817cc(void)

void FUN_1474817cc(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x40);
  lVar2 = param_1 + 0x50;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_68 = lVar2;
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    iVar3 = *(int *)(param_1 + 0x68);
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = plVar1;
  if ((iStack_5c != iVar3) || (uStack_68 != lVar2)) {
    do {
      FUN_1474818f9(*local_98 + (longlong)iStack_7c * 0x70,
                    *local_98 + (longlong)iStack_7c * 0x70 + 0x58,param_2,param_3);
      local_80 = local_80 & ~uStack_8c;
      FUN_1449c0562(&local_90);
    } while (local_98 != plVar1 || (CONCAT44(uStack_84,uStack_88) != lVar2 || iStack_7c != iVar3));
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474818f9 FUN_1474818f9 body=346 status=ok
// SIG undefined FUN_1474818f9(void)

void FUN_1474818f9(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 100) = param_3;
    *(undefined4 *)(lVar2 + 0x60) = param_4;
    lVar2 = *param_1;
    if (lVar2 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x88);
      plVar4 = *(longlong **)(lVar2 + 0x90);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (lVar3 != 0) {
        FUN_1446ddc76(&local_50,"FDataflowInvalidNode",1);
        plVar6 = (longlong *)FUN_14747fd62(lVar3,&local_50);
        lVar2 = plVar6[1];
        if ((longlong)(int)lVar2 != 0) {
          lVar8 = *plVar6;
          lVar7 = 0;
          do {
            uVar5 = *(undefined8 *)(lVar8 + lVar7);
            local_50 = FUN_146fd4b64();
            FUN_146fb58b4(uVar5,&local_50);
            lVar7 = lVar7 + 0x10;
          } while ((longlong)(int)lVar2 * 0x10 != lVar7);
        }
        FUN_1446ddc76(&local_50,"FDataflowExecutionNode",1);
        plVar6 = (longlong *)FUN_14747fd62(lVar3,&local_50);
        lVar2 = plVar6[1];
        if ((longlong)(int)lVar2 != 0) {
          lVar3 = *plVar6;
          lVar8 = 0;
          do {
            (**(code **)(*(longlong *)*param_2 + 0x50))
                      ((longlong *)*param_2,*(undefined8 *)(lVar3 + lVar8),0);
            lVar8 = lVar8 + 0x10;
          } while ((longlong)(int)lVar2 * 0x10 != lVar8);
        }
      }
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
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147481a54 FUN_147481a54 body=132 status=ok
// SIG undefined FUN_147481a54(void)

void FUN_147481a54(longlong *param_1,ulonglong param_2)

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
          FUN_147488092(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147481ad8 FUN_147481ad8 body=130 status=ok
// SIG undefined FUN_147481ad8(void)

void FUN_147481ad8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [36];
  ulonglong local_34;
  undefined4 local_2c;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1 + 0x198;
  local_34 = *(ulonglong *)(param_2 + 0x60) << 0x20 | *(ulonglong *)(param_2 + 0x60) >> 0x20;
  local_2c = 0;
  local_20 = 0xffffffff;
  local_18 = 0;
  lVar1 = FUN_146fb78aa();
  if (lVar1 != 0) {
    FUN_14748896c(lVar1,&local_34,param_2);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147481b5c FUN_147481b5c body=392 status=ok
// SIG undefined FUN_147481b5c(void)

void FUN_147481b5c(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = param_1 + 0x1a8;
  uVar3 = FUN_146fb4872(param_1,&local_68);
  puVar4 = (undefined8 *)FUN_147488bf8(uVar3,param_2,local_68);
  local_78 = (void *)0x0;
  local_70 = *(int *)(puVar4 + 1);
  lVar7 = (longlong)local_70;
  pvVar2 = (void *)*puVar4;
  if (lVar7 == 0) {
    local_6c = 0;
  }
  else {
    FUN_14748462e(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar7 << 3);
  }
  local_68 = param_1 + 0x198;
  local_60 = 0xffffffff;
  local_58 = 0;
  uVar3 = FUN_146fb4872(param_1,&local_68);
  puVar5 = (undefined4 *)FUN_147488fe4(uVar3,param_2,local_68);
  pvVar2 = local_78;
  lVar7 = (longlong)local_70;
  if (lVar7 != 0) {
    uVar1 = *puVar5;
    lVar8 = 0;
    do {
      if ((*(longlong *)((longlong)pvVar2 + lVar8) != 0) &&
         (plVar6 = (longlong *)FUN_147481ce6(), plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,uVar1);
      }
      lVar8 = lVar8 + 8;
    } while (lVar7 * 8 != lVar8);
  }
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = param_1 + 0x1a8;
  lVar7 = FUN_146fb78aa(param_1);
  if (lVar7 != 0) {
    FUN_1474892f6(lVar7,&local_78,param_2);
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147481ce6 FUN_147481ce6 body=111 status=ok
// SIG undefined FUN_147481ce6(void)

longlong * FUN_147481ce6(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  if (lVar1 != 0) {
    if (DAT_14caa87b0 == 0) {
      uVar2 = FUN_140fb740f();
      DAT_14caa87b0 = FUN_140002ddd(FUN_146329299,uVar2,L"DataflowPhysicsSolverProxy");
      if (DAT_14caa87b0 == 0) {
        return (longlong *)0x0;
      }
    }
    if ((*(int *)(DAT_14caa87b0 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caa87b0 + 0x38) * 8) ==
        DAT_14caa87b0 + 0x30)) {
      return param_1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 147481d56 FUN_147481d56 body=376 status=ok
// SIG undefined FUN_147481d56(void)

void FUN_147481d56(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
  if (DAT_14caa87b0 == 0) {
    uVar3 = FUN_140fb740f();
    DAT_14caa87b0 = FUN_140002ddd(FUN_146329299,uVar3,L"DataflowPhysicsSolverProxy");
  }
  local_88 = *(longlong *)(DAT_14caa87b0 + 0x18);
  FUN_1400021e4(&local_88,&local_60);
  FUN_1474808dc(param_2,&local_60,param_1 + 0x1a8,&local_78);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  lVar4 = local_78;
  local_88 = 0;
  uStack_80 = 0;
  lVar7 = (longlong)(int)uStack_70;
  if (lVar7 != 0) {
    lVar5 = 0;
    do {
      uVar1 = uStack_80;
      uVar3 = *(undefined8 *)(lVar4 + lVar5);
      lVar6 = (longlong)(int)uStack_80;
      uVar2 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
      if (uStack_80._4_4_ < uVar2) {
        FUN_1474893a8(&local_88,uVar1 & 0xffffffff);
      }
      *(undefined8 *)(local_88 + lVar6 * 8) = uVar3;
      lVar5 = lVar5 + 8;
    } while (lVar7 * 8 != lVar5);
  }
  local_60 = param_1 + 0x198;
  local_58 = 0xffffffff;
  local_50 = 0;
  lVar4 = FUN_146fb78aa(param_1);
  if (lVar4 != 0) {
    FUN_14748942e(lVar4,&local_88,param_2);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147481ed0 FUN_147481ed0 body=496 status=ok
// SIG undefined FUN_147481ed0(void)

void FUN_147481ed0(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = param_1 + 0x198;
  local_60 = 0xffffffff;
  local_58 = 0;
  uVar5 = FUN_146fb4872(param_1,&local_68);
  puVar6 = (undefined8 *)FUN_147488bf8(uVar5,param_2,local_68);
  local_78 = (void *)0x0;
  local_70 = *(int *)(puVar6 + 1);
  lVar7 = (longlong)local_70;
  pvVar1 = (void *)*puVar6;
  if (lVar7 == 0) {
    local_6c = 0;
    local_88 = 0;
    uStack_80 = 0;
  }
  else {
    FUN_14748462e(&local_78,local_70,0);
    memcpy(local_78,pvVar1,lVar7 << 3);
    local_88 = 0;
    uStack_80 = 0;
    if (local_70 != 0) {
      local_58 = 0;
      local_50 = 0x8000000000;
      FUN_147480b98(param_2,param_1 + 0x1b8);
      pvVar1 = local_78;
      lVar7 = (longlong)local_70;
      if (lVar7 != 0) {
        lVar8 = 0;
        do {
          lVar9 = *(longlong *)((longlong)pvVar1 + lVar8);
          if ((lVar9 != 0) &&
             (cVar3 = FUN_147480d10(lVar9,&local_68), uVar2 = uStack_80, cVar3 != '\0')) {
            uVar5 = *(undefined8 *)((longlong)pvVar1 + lVar8);
            lVar9 = (longlong)(int)uStack_80;
            uVar4 = (int)uStack_80 + 1;
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar4);
            if (uStack_80._4_4_ < uVar4) {
              FUN_1474893a8(&local_88,uVar2 & 0xffffffff);
            }
            *(undefined8 *)(local_88 + lVar9 * 8) = uVar5;
          }
          lVar8 = lVar8 + 8;
        } while (lVar7 * 8 != lVar8);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  local_68 = param_1 + 0x1a8;
  local_60 = 0xffffffff;
  local_58 = 0;
  lVar7 = FUN_146fb78aa(param_1);
  if (lVar7 != 0) {
    FUN_14748942e(lVar7,&local_88,param_2);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474820c2 FUN_1474820c2 body=174 status=ok
// SIG undefined FUN_1474820c2(void)

void FUN_1474820c2(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)(param_1 + 0x198);
  local_30 = 0xffffffff;
  local_28 = 0;
  uVar1 = FUN_146fb4872(param_1,&local_38);
  puVar2 = (undefined8 *)FUN_147488bf8(uVar1,param_2,local_38);
  local_38 = (void *)0x0;
  local_30 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_30;
  _Src = (void *)*puVar2;
  if (lVar3 != 0) {
    FUN_14748462e(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar3 << 3);
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147482172 FUN_147482172 body=38 status=ok
// SIG undefined FUN_147482172(void)

undefined8 FUN_147482172(undefined8 param_1,int param_2)

{
  FUN_147480836();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147482198 FUN_147482198 body=45 status=ok
// SIG undefined FUN_147482198(void)

longlong FUN_147482198(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145ab900a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474821ca FUN_1474821ca body=38 status=ok
// SIG undefined FUN_1474821ca(void)

undefined8 FUN_1474821ca(undefined8 param_1,int param_2)

{
  FUN_145b0865a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474821f4 FUN_1474821f4 body=55 status=ok
// SIG undefined FUN_1474821f4(void)

void FUN_1474821f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8708 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8708 = FUN_140002ddd(FUN_146328f27,uVar1,L"DataflowCollisionObjectProxy");
  }
  return;
}



// FUNCTION 147482234 FUN_147482234 body=38 status=ok
// SIG undefined FUN_147482234(void)

undefined8 FUN_147482234(undefined8 param_1,int param_2)

{
  FUN_145b0865a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14748225a FUN_14748225a body=55 status=ok
// SIG undefined FUN_14748225a(void)

void FUN_14748225a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8738 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8738 = FUN_140002ddd(FUN_146329077,uVar1,L"DataflowConstraintObjectProxy");
  }
  return;
}



// FUNCTION 147482292 FUN_147482292 body=38 status=ok
// SIG undefined FUN_147482292(void)

undefined8 FUN_147482292(undefined8 param_1,int param_2)

{
  FUN_145b0865a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474822b8 FUN_1474822b8 body=55 status=ok
// SIG undefined FUN_1474822b8(void)

void FUN_1474822b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8780 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8780 = FUN_140002ddd(FUN_1463291b1,uVar1,L"DataflowPhysicsObjectProxy");
  }
  return;
}



// FUNCTION 1474822f0 FUN_1474822f0 body=38 status=ok
// SIG undefined FUN_1474822f0(void)

undefined8 FUN_1474822f0(undefined8 param_1,int param_2)

{
  FUN_145b0865a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147482316 FUN_147482316 body=55 status=ok
// SIG undefined FUN_147482316(void)

void FUN_147482316(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa87b0 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa87b0 = FUN_140002ddd(FUN_146329299,uVar1,L"DataflowPhysicsSolverProxy");
  }
  return;
}



// FUNCTION 147482360 FUN_147482360 body=120 status=ok
// SIG undefined FUN_147482360(void)

undefined8 FUN_147482360(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14caa87b0 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa87b0 = FUN_140002ddd(FUN_146329299,uVar1,L"DataflowPhysicsSolverProxy");
  }
  local_18 = *(undefined8 *)(DAT_14caa87b0 + 0x18);
  FUN_1400021e4(&local_18,param_2);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14748248a FUN_14748248a body=74 status=ok
// SIG undefined FUN_14748248a(void)

undefined1 FUN_14748248a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_144a69486(param_2 + 8,param_3 + 8);
    }
    FUN_1410b2022(param_2 + 0x28,param_3 + 0x28);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 1474824fc FUN_1474824fc body=59 status=ok
// SIG undefined FUN_1474824fc(void)

undefined8 FUN_1474824fc(longlong *param_1)

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



// FUNCTION 147482542 FUN_147482542 body=34 status=ok
// SIG undefined FUN_147482542(void)

void FUN_147482542(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_145b0865a(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1474825b4 FUN_1474825b4 body=38 status=ok
// SIG undefined FUN_1474825b4(void)

undefined8 FUN_1474825b4(undefined8 param_1,int param_2)

{
  FUN_145b0865a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474825da FUN_1474825da body=55 status=ok
// SIG undefined FUN_1474825da(void)

void FUN_1474825da(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8878 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8878 = FUN_140002ddd(FUN_146328f56,uVar1,L"DataflowSimulationProxy");
  }
  return;
}



// FUNCTION 1474826c2 FUN_1474826c2 body=74 status=ok
// SIG undefined FUN_1474826c2(void)

undefined1 FUN_1474826c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_144a69486(param_2 + 8,param_3 + 8);
    }
    FUN_1410b2022(param_2 + 0x28,param_3 + 0x28);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 147482734 FUN_147482734 body=59 status=ok
// SIG undefined FUN_147482734(void)

undefined8 FUN_147482734(longlong *param_1)

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



// FUNCTION 14748277a FUN_14748277a body=34 status=ok
// SIG undefined FUN_14748277a(void)

void FUN_14748277a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_145b0865a(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 14748289c FUN_14748289c body=74 status=ok
// SIG undefined FUN_14748289c(void)

undefined1 FUN_14748289c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_144a69486(param_2 + 8,param_3 + 8);
    }
    FUN_1410b2022(param_2 + 0x28,param_3 + 0x28);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 14748290e FUN_14748290e body=59 status=ok
// SIG undefined FUN_14748290e(void)

undefined8 FUN_14748290e(longlong *param_1)

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



// FUNCTION 147482954 FUN_147482954 body=34 status=ok
// SIG undefined FUN_147482954(void)

void FUN_147482954(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_145b0865a(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147482a76 FUN_147482a76 body=74 status=ok
// SIG undefined FUN_147482a76(void)

undefined1 FUN_147482a76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_144a69486(param_2 + 8,param_3 + 8);
    }
    FUN_1410b2022(param_2 + 0x28,param_3 + 0x28);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 147482ae8 FUN_147482ae8 body=59 status=ok
// SIG undefined FUN_147482ae8(void)

undefined8 FUN_147482ae8(longlong *param_1)

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



// FUNCTION 147482b2e FUN_147482b2e body=34 status=ok
// SIG undefined FUN_147482b2e(void)

void FUN_147482b2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_145b0865a(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147482bfa FUN_147482bfa body=46 status=ok
// SIG undefined FUN_147482bfa(void)

void FUN_147482bfa(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x50) = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_2 + 8);
  return;
}



// FUNCTION 147482c3e FUN_147482c3e body=95 status=ok
// SIG undefined FUN_147482c3e(void)

undefined1 FUN_147482c3e(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    do {
      lVar1 = *(longlong *)(param_3 + -8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + -8);
        }
      }
      *param_2 = lVar1;
      FUN_1410b2022(param_2 + 1,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0xb;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147482cc6 FUN_147482cc6 body=59 status=ok
// SIG undefined FUN_147482cc6(void)

undefined8 FUN_147482cc6(longlong *param_1)

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



// FUNCTION 147482d0c FUN_147482d0c body=54 status=ok
// SIG undefined FUN_147482d0c(void)

void FUN_147482d0c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined4 *)(param_2 + 0x50) = 0;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(param_2 + 8);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147482e38 FUN_147482e38 body=74 status=ok
// SIG undefined FUN_147482e38(void)

undefined1 FUN_147482e38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      FUN_144a69486(param_2 + 8,param_3 + 8);
    }
    FUN_1410b2022(param_2 + 0x28,param_3 + 0x28);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 147482eaa FUN_147482eaa body=59 status=ok
// SIG undefined FUN_147482eaa(void)

undefined8 FUN_147482eaa(longlong *param_1)

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



// FUNCTION 147482ef0 FUN_147482ef0 body=34 status=ok
// SIG undefined FUN_147482ef0(void)

void FUN_147482ef0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_145b0865a(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147482f62 FUN_147482f62 body=52 status=ok
// SIG undefined FUN_147482f62(void)

void FUN_147482f62(longlong *param_1)

{
  FUN_147482f96();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147482f96 FUN_147482f96 body=303 status=ok
// SIG undefined FUN_147482f96(void)

void FUN_147482f96(longlong *param_1)

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
      FUN_1474830c6((longlong)iStack_4c * 0x68 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474830c6 FUN_1474830c6 body=69 status=ok
// SIG undefined FUN_1474830c6(void)

void FUN_1474830c6(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14748310c(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14748310c FUN_14748310c body=52 status=ok
// SIG undefined FUN_14748310c(void)

void FUN_14748310c(longlong *param_1)

{
  FUN_147483140();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147483140 FUN_147483140 body=89 status=ok
// SIG undefined FUN_147483140(void)

void FUN_147483140(longlong param_1)

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



// FUNCTION 1474831e8 FUN_1474831e8 body=59 status=ok
// SIG undefined FUN_1474831e8(void)

undefined8 FUN_1474831e8(longlong *param_1)

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



// FUNCTION 14748328a FUN_14748328a body=32 status=ok
// SIG undefined FUN_14748328a(void)

void FUN_14748328a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e88f0;
  return;
}



// FUNCTION 1474832aa FUN_1474832aa body=32 status=ok
// SIG undefined FUN_1474832aa(void)

void FUN_1474832aa(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e88f0;
  return;
}



// FUNCTION 1474832ee FUN_1474832ee body=63 status=ok
// SIG undefined FUN_1474832ee(void)

undefined1 FUN_1474832ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    param_3 = param_3 + 0x198;
    param_2 = param_2 + 0x198;
  }
  return 1;
}



// FUNCTION 147483356 FUN_147483356 body=59 status=ok
// SIG undefined FUN_147483356(void)

undefined8 FUN_147483356(longlong *param_1)

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



// FUNCTION 1474833a2 FUN_1474833a2 body=40 status=ok
// SIG undefined FUN_1474833a2(void)

void FUN_1474833a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 147483418 FUN_147483418 body=38 status=ok
// SIG undefined FUN_147483418(void)

undefined8 FUN_147483418(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14748343e FUN_14748343e body=125 status=ok
// SIG undefined FUN_14748343e(void)

void FUN_14748343e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_30,"TSimulationContext",1);
  cVar1 = (**(code **)(*param_2 + 8))(param_2,local_30);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x110))(param_1,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474834bc FUN_1474834bc body=228 status=ok
// SIG undefined FUN_1474834bc(void)

ulonglong FUN_1474834bc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FDataflowSimulationNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_147483551;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_147483551;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_147483551;
  }
  uVar2 = FUN_146fb9c5e(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_147483551:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1474835a4 FUN_1474835a4 body=32 status=ok
// SIG undefined FUN_1474835a4(void)

void FUN_1474835a4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e8b70;
  return;
}



// FUNCTION 1474835c4 FUN_1474835c4 body=32 status=ok
// SIG undefined FUN_1474835c4(void)

void FUN_1474835c4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e8b70;
  return;
}



// FUNCTION 147483608 FUN_147483608 body=63 status=ok
// SIG undefined FUN_147483608(void)

undefined1 FUN_147483608(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    param_3 = param_3 + 0x198;
    param_2 = param_2 + 0x198;
  }
  return 1;
}



// FUNCTION 147483670 FUN_147483670 body=59 status=ok
// SIG undefined FUN_147483670(void)

undefined8 FUN_147483670(longlong *param_1)

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



// FUNCTION 1474836bc FUN_1474836bc body=40 status=ok
// SIG undefined FUN_1474836bc(void)

void FUN_1474836bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 147483732 FUN_147483732 body=38 status=ok
// SIG undefined FUN_147483732(void)

undefined8 FUN_147483732(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147483758 FUN_147483758 body=228 status=ok
// SIG undefined FUN_147483758(void)

ulonglong FUN_147483758(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FDataflowInvalidNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1474837ed;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1474837ed;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1474837ed;
  }
  uVar2 = FUN_1474834bc(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1474837ed:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14748383e FUN_14748383e body=32 status=ok
// SIG undefined FUN_14748383e(void)

void FUN_14748383e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e8df0;
  return;
}



// FUNCTION 14748385e FUN_14748385e body=32 status=ok
// SIG undefined FUN_14748385e(void)

void FUN_14748385e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e8df0;
  return;
}



// FUNCTION 1474838a2 FUN_1474838a2 body=63 status=ok
// SIG undefined FUN_1474838a2(void)

undefined1 FUN_1474838a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    param_3 = param_3 + 0x198;
    param_2 = param_2 + 0x198;
  }
  return 1;
}



// FUNCTION 14748390a FUN_14748390a body=59 status=ok
// SIG undefined FUN_14748390a(void)

undefined8 FUN_14748390a(longlong *param_1)

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



// FUNCTION 147483956 FUN_147483956 body=40 status=ok
// SIG undefined FUN_147483956(void)

void FUN_147483956(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 1474839cc FUN_1474839cc body=38 status=ok
// SIG undefined FUN_1474839cc(void)

undefined8 FUN_1474839cc(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474839f2 FUN_1474839f2 body=228 status=ok
// SIG undefined FUN_1474839f2(void)

ulonglong FUN_1474839f2(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FDataflowExecutionNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_147483a87;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_147483a87;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_147483a87;
  }
  uVar2 = FUN_1474834bc(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_147483a87:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 147483b5c FUN_147483b5c body=59 status=ok
// SIG undefined FUN_147483b5c(void)

undefined8 FUN_147483b5c(longlong *param_1)

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



// FUNCTION 147483bfe FUN_147483bfe body=53 status=ok
// SIG undefined FUN_147483bfe(void)

void FUN_147483bfe(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e91e0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 147483c34 FUN_147483c34 body=53 status=ok
// SIG undefined FUN_147483c34(void)

void FUN_147483c34(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e91e0;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  return;
}



// FUNCTION 147483c8e FUN_147483c8e body=88 status=ok
// SIG undefined FUN_147483c8e(void)

undefined8 FUN_147483c8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    param_2 = param_2 + 0x1a8;
    param_3 = param_3 + 0x1a8;
  }
  return 1;
}



// FUNCTION 147483d0e FUN_147483d0e body=59 status=ok
// SIG undefined FUN_147483d0e(void)

undefined8 FUN_147483d0e(longlong *param_1)

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



// FUNCTION 147483d5a FUN_147483d5a body=40 status=ok
// SIG undefined FUN_147483d5a(void)

void FUN_147483d5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 147483dd0 FUN_147483dd0 body=38 status=ok
// SIG undefined FUN_147483dd0(void)

undefined8 FUN_147483dd0(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147483df6 FUN_147483df6 body=38 status=ok
// SIG undefined FUN_147483df6(void)

undefined8 FUN_147483df6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetSimulationTimeDataflowNode",1);
  return param_2;
}



// FUNCTION 147483e1c FUN_147483e1c body=38 status=ok
// SIG undefined FUN_147483e1c(void)

undefined8 FUN_147483e1c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetSimulationTime",1);
  return param_2;
}



// FUNCTION 147483e42 FUN_147483e42 body=38 status=ok
// SIG undefined FUN_147483e42(void)

undefined8 FUN_147483e42(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Physics|Common",1);
  return param_2;
}



// FUNCTION 147483e68 FUN_147483e68 body=89 status=ok
// SIG undefined FUN_147483e68(void)

undefined8 * FUN_147483e68(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_2 = 0;
  iVar1 = DAT_14caa85d8;
  _Src = DAT_14caa85d0;
  lVar2 = (longlong)DAT_14caa85d8;
  *(int *)(param_2 + 1) = DAT_14caa85d8;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
  }
  return param_2;
}



// FUNCTION 147483ec2 FUN_147483ec2 body=123 status=ok
// SIG undefined FUN_147483ec2(void)

void FUN_147483ec2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14caa8970 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8970 = FUN_140002ddd(FUN_14632998b,uVar1,L"GetSimulationTimeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14caa8970,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147483f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 147483f3e FUN_147483f3e body=93 status=ok
// SIG undefined FUN_147483f3e(void)

void FUN_147483f3e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14caa8970 == 0) {
    uVar2 = FUN_140fb740f();
    DAT_14caa8970 = FUN_140002ddd(FUN_14632998b,uVar2,L"GetSimulationTimeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14caa8970,param_1);
  return;
}



// FUNCTION 147483f9c FUN_147483f9c body=55 status=ok
// SIG undefined FUN_147483f9c(void)

void FUN_147483f9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8970 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8970 = FUN_140002ddd(FUN_14632998b,uVar1,L"GetSimulationTimeDataflowNode");
  }
  return;
}



// FUNCTION 147483fd4 FUN_147483fd4 body=228 status=ok
// SIG undefined FUN_147483fd4(void)

ulonglong FUN_147483fd4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FGetSimulationTimeDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_147484069;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_147484069;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_147484069;
  }
  uVar2 = FUN_147483758(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_147484069:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1474840ba FUN_1474840ba body=49 status=ok
// SIG undefined FUN_1474840ba(void)

void FUN_1474840ba(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e9490;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 1474840ec FUN_1474840ec body=49 status=ok
// SIG undefined FUN_1474840ec(void)

void FUN_1474840ec(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e9490;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 147484142 FUN_147484142 body=108 status=ok
// SIG undefined FUN_147484142(void)

undefined1 FUN_147484142(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_1474845d6(param_2 + 0x198,param_3 + 0x198);
    FUN_140bee9ec(param_2 + 0x1a8,param_3 + 0x1a8);
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 1474841d6 FUN_1474841d6 body=59 status=ok
// SIG undefined FUN_1474841d6(void)

undefined8 FUN_1474841d6(longlong *param_1)

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



// FUNCTION 147484222 FUN_147484222 body=40 status=ok
// SIG undefined FUN_147484222(void)

void FUN_147484222(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_147484582(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 147484298 FUN_147484298 body=38 status=ok
// SIG undefined FUN_147484298(void)

undefined8 FUN_147484298(undefined8 param_1,int param_2)

{
  FUN_147484582();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474842be FUN_1474842be body=38 status=ok
// SIG undefined FUN_1474842be(void)

undefined8 FUN_1474842be(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetPhysicsSolversDataflowNode",1);
  return param_2;
}



// FUNCTION 1474842e4 FUN_1474842e4 body=38 status=ok
// SIG undefined FUN_1474842e4(void)

undefined8 FUN_1474842e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetPhysicsSolvers",1);
  return param_2;
}



// FUNCTION 14748430a FUN_14748430a body=38 status=ok
// SIG undefined FUN_14748430a(void)

undefined8 FUN_14748430a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Physics|Solver",1);
  return param_2;
}



// FUNCTION 147484330 FUN_147484330 body=89 status=ok
// SIG undefined FUN_147484330(void)

undefined8 * FUN_147484330(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_2 = 0;
  iVar1 = DAT_14caa85d8;
  _Src = DAT_14caa85d0;
  lVar2 = (longlong)DAT_14caa85d8;
  *(int *)(param_2 + 1) = DAT_14caa85d8;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
  }
  return param_2;
}



// FUNCTION 14748438a FUN_14748438a body=123 status=ok
// SIG undefined FUN_14748438a(void)

void FUN_14748438a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14caa8988 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8988 = FUN_140002ddd(FUN_146329a21,uVar1,L"GetPhysicsSolversDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14caa8988,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147484402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 147484406 FUN_147484406 body=93 status=ok
// SIG undefined FUN_147484406(void)

void FUN_147484406(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14caa8988 == 0) {
    uVar2 = FUN_140fb740f();
    DAT_14caa8988 = FUN_140002ddd(FUN_146329a21,uVar2,L"GetPhysicsSolversDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14caa8988,param_1);
  return;
}



// FUNCTION 147484464 FUN_147484464 body=55 status=ok
// SIG undefined FUN_147484464(void)

void FUN_147484464(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa8988 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa8988 = FUN_140002ddd(FUN_146329a21,uVar1,L"GetPhysicsSolversDataflowNode");
  }
  return;
}



// FUNCTION 14748449c FUN_14748449c body=228 status=ok
// SIG undefined FUN_14748449c(void)

ulonglong FUN_14748449c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FGetPhysicsSolversDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_147484531;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_147484531;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_147484531;
  }
  uVar2 = FUN_147483758(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_147484531:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 147484582 FUN_147484582 body=83 status=ok
// SIG undefined FUN_147484582(void)

void FUN_147484582(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3e9490;
  FUN_1447a1747(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1474845d6 FUN_1474845d6 body=88 status=ok
// SIG undefined FUN_1474845d6(void)

undefined8 * FUN_1474845d6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14748462e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14748462e FUN_14748462e body=98 status=ok
// SIG undefined FUN_14748462e(void)

void FUN_14748462e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147484692 FUN_147484692 body=63 status=ok
// SIG undefined FUN_147484692(void)

void FUN_147484692(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e9750;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 1474846d2 FUN_1474846d2 body=63 status=ok
// SIG undefined FUN_1474846d2(void)

void FUN_1474846d2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e9750;
  param_2[0x33] = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 147484736 FUN_147484736 body=111 status=ok
// SIG undefined FUN_147484736(void)

undefined8 FUN_147484736(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    FUN_1474845d6(param_2 + 0x1a8,param_3 + 0x1a8);
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 1474847ce FUN_1474847ce body=59 status=ok
// SIG undefined FUN_1474847ce(void)

undefined8 FUN_1474847ce(longlong *param_1)

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



// FUNCTION 14748481a FUN_14748481a body=67 status=ok
// SIG undefined FUN_14748481a(void)

void FUN_14748481a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *param_2 = &PTR_FUN_14a3e9750;
    if (param_2[0x35] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x37) = 0;
  }
  return;
}



// FUNCTION 1474848ac FUN_1474848ac body=68 status=ok
// SIG undefined FUN_1474848ac(void)

undefined8 * FUN_1474848ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3e9750;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474848f0 FUN_1474848f0 body=38 status=ok
// SIG undefined FUN_1474848f0(void)

undefined8 FUN_1474848f0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FAdvancePhysicsSolversDataflowNode",1);
  return param_2;
}



// FUNCTION 147484916 FUN_147484916 body=38 status=ok
// SIG undefined FUN_147484916(void)

undefined8 FUN_147484916(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AdvancePhysicsSolvers",1);
  return param_2;
}



// FUNCTION 14748493c FUN_14748493c body=38 status=ok
// SIG undefined FUN_14748493c(void)

undefined8 FUN_14748493c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Physics|Solver",1);
  return param_2;
}



// FUNCTION 147484962 FUN_147484962 body=89 status=ok
// SIG undefined FUN_147484962(void)

undefined8 * FUN_147484962(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_2 = 0;
  iVar1 = DAT_14caa85d8;
  _Src = DAT_14caa85d0;
  lVar2 = (longlong)DAT_14caa85d8;
  *(int *)(param_2 + 1) = DAT_14caa85d8;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
  }
  return param_2;
}



// FUNCTION 1474849bc FUN_1474849bc body=123 status=ok
// SIG undefined FUN_1474849bc(void)

void FUN_1474849bc(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14caa89a0 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa89a0 = FUN_140002ddd(FUN_146329ab7,uVar1,L"AdvancePhysicsSolversDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14caa89a0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147484a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 147484a38 FUN_147484a38 body=93 status=ok
// SIG undefined FUN_147484a38(void)

void FUN_147484a38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14caa89a0 == 0) {
    uVar2 = FUN_140fb740f();
    DAT_14caa89a0 = FUN_140002ddd(FUN_146329ab7,uVar2,L"AdvancePhysicsSolversDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14caa89a0,param_1);
  return;
}



// FUNCTION 147484a96 FUN_147484a96 body=55 status=ok
// SIG undefined FUN_147484a96(void)

void FUN_147484a96(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa89a0 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa89a0 = FUN_140002ddd(FUN_146329ab7,uVar1,L"AdvancePhysicsSolversDataflowNode");
  }
  return;
}



// FUNCTION 147484ace FUN_147484ace body=228 status=ok
// SIG undefined FUN_147484ace(void)

ulonglong FUN_147484ace(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FAdvancePhysicsSolversDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_147484b63;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_147484b63;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_147484b63;
  }
  uVar2 = FUN_1474834bc(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_147484b63:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 147484bb4 FUN_147484bb4 body=56 status=ok
// SIG undefined FUN_147484bb4(void)

void FUN_147484bb4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e9a10;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 147484bec FUN_147484bec body=56 status=ok
// SIG undefined FUN_147484bec(void)

void FUN_147484bec(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e9a10;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 147484c48 FUN_147484c48 body=63 status=ok
// SIG undefined FUN_147484c48(void)

undefined1 FUN_147484c48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474850c0(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 147484cb0 FUN_147484cb0 body=59 status=ok
// SIG undefined FUN_147484cb0(void)

undefined8 FUN_147484cb0(longlong *param_1)

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



// FUNCTION 147484cfc FUN_147484cfc body=40 status=ok
// SIG undefined FUN_147484cfc(void)

void FUN_147484cfc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_14748505c(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 147484d72 FUN_147484d72 body=38 status=ok
// SIG undefined FUN_147484d72(void)

undefined8 FUN_147484d72(undefined8 param_1,int param_2)

{
  FUN_14748505c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147484d98 FUN_147484d98 body=38 status=ok
// SIG undefined FUN_147484d98(void)

undefined8 FUN_147484d98(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFilterSimulationProxiesDataflowNode",1);
  return param_2;
}



// FUNCTION 147484dbe FUN_147484dbe body=38 status=ok
// SIG undefined FUN_147484dbe(void)

undefined8 FUN_147484dbe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FilterSimulationProxies",1);
  return param_2;
}



// FUNCTION 147484de4 FUN_147484de4 body=38 status=ok
// SIG undefined FUN_147484de4(void)

undefined8 FUN_147484de4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Physics|Proxy",1);
  return param_2;
}



// FUNCTION 147484e0a FUN_147484e0a body=89 status=ok
// SIG undefined FUN_147484e0a(void)

undefined8 * FUN_147484e0a(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_2 = 0;
  iVar1 = DAT_14caa85d8;
  _Src = DAT_14caa85d0;
  lVar2 = (longlong)DAT_14caa85d8;
  *(int *)(param_2 + 1) = DAT_14caa85d8;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
  }
  return param_2;
}



// FUNCTION 147484e64 FUN_147484e64 body=123 status=ok
// SIG undefined FUN_147484e64(void)

void FUN_147484e64(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14caa89b8 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa89b8 = FUN_140002ddd(FUN_146329b4d,uVar1,L"FilterSimulationProxiesDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14caa89b8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147484edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 147484ee0 FUN_147484ee0 body=93 status=ok
// SIG undefined FUN_147484ee0(void)

void FUN_147484ee0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14caa89b8 == 0) {
    uVar2 = FUN_140fb740f();
    DAT_14caa89b8 = FUN_140002ddd(FUN_146329b4d,uVar2,L"FilterSimulationProxiesDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14caa89b8,param_1);
  return;
}



// FUNCTION 147484f3e FUN_147484f3e body=55 status=ok
// SIG undefined FUN_147484f3e(void)

void FUN_147484f3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa89b8 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa89b8 = FUN_140002ddd(FUN_146329b4d,uVar1,L"FilterSimulationProxiesDataflowNode");
  }
  return;
}



// FUNCTION 147484f76 FUN_147484f76 body=228 status=ok
// SIG undefined FUN_147484f76(void)

ulonglong FUN_147484f76(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FFilterSimulationProxiesDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_14748500b;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14748500b;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_14748500b;
  }
  uVar2 = FUN_1474834bc(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_14748500b:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14748505c FUN_14748505c body=100 status=ok
// SIG undefined FUN_14748505c(void)

void FUN_14748505c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3e9a10;
  FUN_1447a1747(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1474850c0 FUN_1474850c0 body=81 status=ok
// SIG undefined FUN_1474850c0(void)

longlong FUN_1474850c0(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_1474845d6(param_1 + 0x198,param_2 + 0x198);
  FUN_1474845d6(param_1 + 0x1a8,param_2 + 0x1a8);
  FUN_140bee9ec(param_1 + 0x1b8,param_2 + 0x1b8);
  return param_1;
}



// FUNCTION 147485112 FUN_147485112 body=42 status=ok
// SIG undefined FUN_147485112(void)

void FUN_147485112(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e9cf0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14748513c FUN_14748513c body=42 status=ok
// SIG undefined FUN_14748513c(void)

void FUN_14748513c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14a3e9cf0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  return;
}



// FUNCTION 14748518a FUN_14748518a body=105 status=ok
// SIG undefined FUN_14748518a(void)

undefined1 FUN_14748518a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_1474845d6(param_2 + 0x198,param_3 + 0x198);
    param_3 = param_3 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return 1;
}



// FUNCTION 14748521c FUN_14748521c body=59 status=ok
// SIG undefined FUN_14748521c(void)

undefined8 FUN_14748521c(longlong *param_1)

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



// FUNCTION 147485268 FUN_147485268 body=67 status=ok
// SIG undefined FUN_147485268(void)

void FUN_147485268(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x35) == '\x01') {
    *param_2 = &PTR_FUN_14a3e9cf0;
    if (param_2[0x33] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x35) = 0;
  }
  return;
}



// FUNCTION 1474852fa FUN_1474852fa body=68 status=ok
// SIG undefined FUN_1474852fa(void)

undefined8 * FUN_1474852fa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3e9cf0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14748533e FUN_14748533e body=38 status=ok
// SIG undefined FUN_14748533e(void)

undefined8 FUN_14748533e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FSimulationProxiesTerminalDataflowNode",1);
  return param_2;
}



// FUNCTION 147485364 FUN_147485364 body=38 status=ok
// SIG undefined FUN_147485364(void)

undefined8 FUN_147485364(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SimulationProxiesTerminal",1);
  return param_2;
}



// FUNCTION 14748538a FUN_14748538a body=38 status=ok
// SIG undefined FUN_14748538a(void)

undefined8 FUN_14748538a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Terminal|Proxy",1);
  return param_2;
}



// FUNCTION 1474853b0 FUN_1474853b0 body=89 status=ok
// SIG undefined FUN_1474853b0(void)

undefined8 * FUN_1474853b0(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_2 = 0;
  iVar1 = DAT_14caa85d8;
  _Src = DAT_14caa85d0;
  lVar2 = (longlong)DAT_14caa85d8;
  *(int *)(param_2 + 1) = DAT_14caa85d8;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,lVar2 * 2);
  }
  return param_2;
}



// FUNCTION 14748540a FUN_14748540a body=123 status=ok
// SIG undefined FUN_14748540a(void)

void FUN_14748540a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14caa89d0 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa89d0 = FUN_140002ddd(FUN_146329be3,uVar1,L"SimulationProxiesTerminalDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14caa89d0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147485482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 147485486 FUN_147485486 body=93 status=ok
// SIG undefined FUN_147485486(void)

void FUN_147485486(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14caa89d0 == 0) {
    uVar2 = FUN_140fb740f();
    DAT_14caa89d0 = FUN_140002ddd(FUN_146329be3,uVar2,L"SimulationProxiesTerminalDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14caa89d0,param_1);
  return;
}



// FUNCTION 1474854e4 FUN_1474854e4 body=55 status=ok
// SIG undefined FUN_1474854e4(void)

void FUN_1474854e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14caa89d0 == 0) {
    uVar1 = FUN_140fb740f();
    DAT_14caa89d0 = FUN_140002ddd(FUN_146329be3,uVar1,L"SimulationProxiesTerminalDataflowNode");
  }
  return;
}



// FUNCTION 14748551c FUN_14748551c body=228 status=ok
// SIG undefined FUN_14748551c(void)

ulonglong FUN_14748551c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_2;
  FUN_1400021e4(&local_30,&local_40);
  FUN_1446ddc76(local_58,"FSimulationProxiesTerminalDataflowNode",1);
  FUN_1400021e4(local_58,&local_50);
  pwVar5 = local_50;
  uVar4 = (undefined7)((ulonglong)local_58 >> 8);
  if (local_38 == local_48) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_38 < 2) goto LAB_1474855b1;
    iVar1 = wcscmp(local_40,local_50);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1474855b1;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_48 + local_38 == 1) goto LAB_1474855b1;
  }
  uVar2 = FUN_1474839f2(param_1,local_30);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_50;
LAB_1474855b1:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 147485602 FUN_147485602 body=203 status=ok
// SIG undefined FUN_147485602(void)

int FUN_147485602(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_14748564c:
      lVar10 = (longlong)iVar1 * 0x68;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_1474856c2;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1474856c2;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1474856b3;
    }
  }
  return -1;
LAB_1474856c2:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1474856b3:
  iVar1 = *(int *)(lVar4 + 0x60 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14748564c;
}



// FUNCTION 1474856ce FUN_1474856ce body=132 status=ok
// SIG undefined FUN_1474856ce(void)

void FUN_1474856ce(longlong param_1,int param_2)

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



// FUNCTION 147485754 FUN_147485754 body=133 status=ok
// SIG undefined FUN_147485754(void)

longlong FUN_147485754(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147485602();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x68;
    if (lVar3 + lVar2 != 0) goto LAB_14748578d;
  }
  local_30 = param_3;
  FUN_1474857da(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x68;
LAB_14748578d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474857da FUN_1474857da body=272 status=ok
// SIG undefined FUN_1474857da(void)

undefined4 * FUN_1474857da(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1474858ec(param_1,local_48);
  FUN_147485a38(param_4,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar1 = FUN_1474859ce(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x60) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
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
      FUN_147485cb6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474858ec FUN_1474858ec body=226 status=ok
// SIG undefined FUN_1474858ec(void)

int * FUN_1474858ec(longlong *param_1,int *param_2)

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



// FUNCTION 1474859ce FUN_1474859ce body=105 status=ok
// SIG undefined FUN_1474859ce(void)

undefined8 FUN_1474859ce(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_147485602(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x68 + *param_1);
    FUN_1474830c6(_Dst);
    memmove(_Dst,param_3,0x60);
    FUN_147485c42(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 147485a38 FUN_147485a38 body=149 status=ok
// SIG undefined FUN_147485a38(void)

undefined8 FUN_147485a38(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_147485ace(param_2,*param_1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14748310c(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147485ace FUN_147485ace body=101 status=ok
// SIG undefined FUN_147485ace(void)

undefined8 * FUN_147485ace(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_147485b34(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 147485b34 FUN_147485b34 body=123 status=ok
// SIG undefined FUN_147485b34(void)

undefined8 * FUN_147485b34(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147485bb0();
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



// FUNCTION 147485bb0 FUN_147485bb0 body=146 status=ok
// SIG undefined FUN_147485bb0(void)

longlong * FUN_147485bb0(longlong *param_1,longlong *param_2)

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



// FUNCTION 147485c42 FUN_147485c42 body=116 status=ok
// SIG undefined FUN_147485c42(void)

void FUN_147485c42(longlong *param_1,int param_2)

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



// FUNCTION 147485cb6 FUN_147485cb6 body=476 status=ok
// SIG undefined FUN_147485cb6(void)

void FUN_147485cb6(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x68;
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
        *(int *)(lVar3 + 100 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar11) =
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



// FUNCTION 147485e94 FUN_147485e94 body=312 status=ok
// SIG undefined FUN_147485e94(void)

undefined4 * FUN_147485e94(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_147485fce(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_1474860b4(param_1,uVar3,local_40,&local_4c);
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
      FUN_1474861a2(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147485fce FUN_147485fce body=229 status=ok
// SIG undefined FUN_147485fce(void)

int * FUN_147485fce(longlong *param_1,int *param_2)

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



// FUNCTION 1474860b4 FUN_1474860b4 body=124 status=ok
// SIG undefined FUN_1474860b4(void)

undefined8 FUN_1474860b4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147486130(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147486130 FUN_147486130 body=114 status=ok
// SIG undefined FUN_147486130(void)

void FUN_147486130(longlong *param_1,int param_2)

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


