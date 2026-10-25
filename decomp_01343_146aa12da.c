// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146aa12da FUN_146aa12da body=169 status=ok
// SIG undefined FUN_146aa12da(void)

void FUN_146aa12da(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  local_20 = *(undefined4 *)(param_2 + 0x1b0);
  local_1c = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  FUN_146aa1384(param_1 + 0x1f8);
  *(undefined1 *)(param_1 + 0x1e4) = *(undefined1 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1b8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_146a24854(param_1 + 0x1e8,param_2 + 0x1c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa1384 FUN_146aa1384 body=136 status=ok
// SIG undefined FUN_146aa1384(void)

void FUN_146aa1384(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)(param_1 + 0x20) + iVar1;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_1 + 0x24) < iVar2) {
    FUN_146ac62e8(param_1 + 0x18);
    iVar1 = (int)param_2[1];
  }
  lVar4 = *param_2;
  uVar3 = 0;
  if (iVar1 != 0) {
    lVar5 = (longlong)iVar1 * 0x50;
    do {
      FUN_146a6aad8(param_1,lVar4);
      lVar4 = lVar4 + 0x50;
      lVar5 = lVar5 + -0x50;
    } while (lVar5 != 0);
    uVar3 = (undefined4)param_2[1];
    lVar4 = *param_2;
  }
  FUN_146ac6347(lVar4,uVar3);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146aa140e FUN_146aa140e body=114 status=ok
// SIG undefined FUN_146aa140e(void)

undefined8 FUN_146aa140e(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if ((*(int *)(param_1 + 0x1f0) != 0) && (*(longlong **)(param_1 + 0x1e8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x1f0) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x1e8);
      }
      uVar2 = (**(code **)(*plVar4 + 0x58))();
      *(uint *)(param_1 + 0x1e0) = uVar2;
      goto LAB_146aa1459;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x1e0);
LAB_146aa1459:
  if (((int)uVar2 < 0) || (*(int *)(param_1 + 0x218) <= (int)uVar2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x210) + (ulonglong)uVar2 * 8);
  }
  return uVar3;
}



// FUNCTION 146aa1480 FUN_146aa1480 body=104 status=ok
// SIG undefined FUN_146aa1480(void)

ulonglong FUN_146aa1480(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0xffffffff;
  if (0 < (longlong)*(int *)(param_1 + 0x218)) {
    uVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x210) + uVar4 * 8) + 0x10) ==
          *param_2) {
        uVar5 = uVar4 & 0xffffffff;
        break;
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)*(int *)(param_1 + 0x218) != uVar4);
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
  return uVar5;
}



// FUNCTION 146aa14e8 FUN_146aa14e8 body=515 status=ok
// SIG undefined FUN_146aa14e8(void)

ulonglong FUN_146aa14e8(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  int local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar6 = (ulonglong)(int)param_1[0x43];
  uVar9 = 0xffffffff;
  if ((longlong)uVar6 < 1) goto LAB_146aa163c;
  if (*(longlong *)(*(longlong *)param_1[0x42] + 0x10) == *param_2) {
    uVar12 = 0;
    uVar9 = 0;
  }
  else {
    uVar12 = 0;
    do {
      if (uVar6 - 1 == uVar12) goto LAB_146aa163c;
      lVar3 = uVar12 + 1;
      uVar12 = uVar12 + 1;
    } while (*(longlong *)(((longlong *)param_1[0x42])[lVar3] + 0x10) != *param_2);
    uVar9 = 0xffffffff;
    if (uVar12 < uVar6) {
      uVar9 = uVar12 & 0xffffffff;
    }
  }
  plVar10 = param_1 + 0x3f;
  plVar2 = param_1 + 0x3c;
  local_80 = param_1 + 0x3d;
  iVar11 = (int)uVar12;
  if (((int)param_1[0x3e] == 0) || ((longlong *)*local_80 == (longlong *)0x0)) {
LAB_146aa159a:
    iVar5 = (int)*plVar2;
    uVar8 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),iVar5 == iVar11);
    if (iVar5 == iVar11) {
      FUN_140163244(param_1,8);
    }
    if (iVar11 <= iVar5 && 0 < iVar5) {
      local_60 = iVar5 + -1;
      local_5c = 1;
      local_58 = 0;
      uStack_50 = 0;
      *(undefined1 *)((longlong)param_1 + 0x1e4) = 1;
      *(int *)plVar2 = local_60;
      local_78 = plVar10;
      FUN_144a450dc(local_80,&local_58);
      plVar10 = local_78;
      FUN_1449db362(&local_58);
    }
  }
  else {
    cVar4 = (**(code **)(*(longlong *)*local_80 + 0x30))();
    if (cVar4 == '\0') {
      if ((((int)param_1[0x3e] != 0) && ((longlong *)*local_80 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*(longlong *)*local_80 + 0x30))(), cVar4 != '\0')) {
        if ((int)param_1[0x3e] == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)*local_80;
        }
        iVar5 = (**(code **)(*plVar7 + 0x58))();
        *(int *)plVar2 = iVar5;
      }
      goto LAB_146aa159a;
    }
    uVar8 = 0;
  }
  FUN_146aa16ec(plVar10,uVar12 & 0xffffffff);
  local_70 = *param_2;
  local_68 = param_2[1];
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x248))(param_1,uVar12 & 0xffffffff,&local_70,uVar8);
LAB_146aa163c:
  plVar10 = (longlong *)param_2[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar10 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 146aa16ec FUN_146aa16ec body=67 status=ok
// SIG undefined FUN_146aa16ec(void)

void FUN_146aa16ec(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8) = 0;
  FUN_146ac6394(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146aa1725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146aa1730 FUN_146aa1730 body=214 status=ok
// SIG undefined FUN_146aa1730(void)

void FUN_146aa1730(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  int local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  piVar1 = (int *)(param_1 + 0x1e0);
  plVar2 = (longlong *)(param_1 + 0x1e8);
  if ((*(int *)(param_1 + 0x1f0) != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x1f0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)*plVar2;
      }
      iVar4 = (**(code **)(*plVar6 + 0x58))();
      *piVar1 = iVar4;
    }
  }
  if (*piVar1 != param_2) {
    FUN_140163244(param_1,8);
    lVar5 = FUN_146aa140e(param_1);
    if (lVar5 != 0) {
      FUN_14287b374(param_1,*(undefined8 *)(lVar5 + 0x10));
    }
    local_3c = 1;
    local_38 = 0;
    uStack_30 = 0;
    *(undefined1 *)(param_1 + 0x1e4) = 1;
    *piVar1 = param_2;
    local_40 = param_2;
    FUN_144a450dc(plVar2,&local_38);
    FUN_1449db362(&local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa1808 FUN_146aa1808 body=84 status=ok
// SIG undefined FUN_146aa1808(void)

bool FUN_146aa1808(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_146aa140e();
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0x10);
    plVar3 = *(longlong **)(lVar4 + 0x18);
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
  }
  return lVar5 == param_2;
}



// FUNCTION 146aa185c FUN_146aa185c body=2562 status=ok
// SIG undefined FUN_146aa185c(void)

void FUN_146aa185c(longlong param_1,float *param_2,byte *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  float *pfVar11;
  undefined8 uVar12;
  byte bVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  float *local_1d8;
  undefined8 local_1c8;
  float local_1c0;
  float local_1bc;
  longlong local_1b8;
  byte *local_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  float local_180;
  float fStack_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined2 local_150;
  undefined1 uStack_14e;
  undefined5 uStack_14d;
  float local_148;
  float local_144;
  float local_140;
  undefined8 local_13c;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  byte local_11c;
  undefined2 local_11b;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  char local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1a8 = DAT_14c846320;
  dStack_1a0 = DAT_14c846328;
  local_198 = 1;
  local_190 = 0;
  uStack_188 = 0;
  local_1b8 = param_1;
  local_1b0 = param_3;
  lVar8 = FUN_146aa140e();
  if (lVar8 == 0) goto LAB_146aa1eef;
  lVar18 = *(longlong *)(lVar8 + 0x10);
  bVar5 = *(byte *)(lVar18 + 0x39);
  if ((*local_1b0 & bVar5) != 0) {
    fVar26 = *(float *)(lVar8 + 0x28);
    fVar22 = *(float *)(lVar8 + 0x30);
    fVar21 = fVar26;
    fVar25 = fVar22;
    if (DAT_14c96b1e0 != '\x01') {
      fVar21 = fVar22;
      fVar25 = fVar26;
    }
    fVar27 = *(float *)(lVar8 + 0x2c);
    fVar2 = *(float *)(lVar8 + 0x34);
    fVar24 = (float)local_1a8;
    fVar3 = *param_2;
    fVar26 = fVar26 + fVar22;
    iVar7 = *(int *)(lVar8 + 0x38);
    if (DAT_14c96b1e0 != '\x01') {
      if (iVar7 == 0) goto LAB_146aa1a2a;
LAB_146aa19cc:
      pfVar11 = (float *)&DAT_14c84635c;
      if ((*(byte *)(lVar18 + 0x31) & 0x20) != 0) {
        pfVar11 = (float *)(lVar18 + 0x168);
      }
      fVar26 = fVar3 - fVar26;
      local_180 = *pfVar11 * fVar24;
      if (fVar26 <= *pfVar11 * fVar24) {
        local_180 = fVar26;
      }
      if (local_180 <= 0.0) {
        local_180 = 0.0;
      }
      if (iVar7 != 1) {
        if (iVar7 == 3) goto LAB_146aa19bb;
        if (iVar7 == 2) {
          fVar25 = (fVar25 + (fVar3 - local_180) * 0.5) - fVar21;
        }
        else {
          local_180 = fVar26 * fVar24;
          if (local_180 <= 0.0) {
            local_180 = 0.0;
          }
        }
      }
    }
    else if (iVar7 == 0) {
LAB_146aa1a2a:
      local_180 = (fVar3 - fVar26) * fVar24;
      if (local_180 <= 0.0) {
        local_180 = 0.0;
      }
    }
    else if (iVar7 == 3) {
      pfVar11 = (float *)&DAT_14c84635c;
      if ((*(byte *)(lVar18 + 0x31) & 0x20) != 0) {
        pfVar11 = (float *)(lVar18 + 0x168);
      }
      local_180 = fVar24 * *pfVar11;
      if (fVar3 - fVar26 <= fVar24 * *pfVar11) {
        local_180 = fVar3 - fVar26;
      }
      fVar25 = fVar22;
      if (local_180 <= 0.0) {
        local_180 = 0.0;
      }
    }
    else {
      if (iVar7 != 1) goto LAB_146aa19cc;
      pfVar11 = (float *)&DAT_14c84635c;
      if ((*(byte *)(lVar18 + 0x31) & 0x20) != 0) {
        pfVar11 = (float *)(lVar18 + 0x168);
      }
      local_180 = fVar24 * *pfVar11;
      if (fVar3 - fVar26 <= fVar24 * *pfVar11) {
        local_180 = fVar3 - fVar26;
      }
      if (local_180 <= 0.0) {
        local_180 = 0.0;
      }
LAB_146aa19bb:
      fVar25 = (fVar3 - local_180) - fVar21;
    }
    fVar26 = param_2[1];
    iVar7 = *(int *)(lVar8 + 0x3c);
    fVar22 = fVar26 - (fVar27 + fVar2);
    if (iVar7 == 0) {
LAB_146aa1ab7:
      fStack_17c = fVar22 * (float)dStack_1a0;
      if (fStack_17c <= 0.0) {
        fStack_17c = 0.0;
      }
    }
    else {
      puVar14 = &DAT_14c84635c;
      if ((*(byte *)(lVar18 + 0x31) & 0x20) != 0) {
        puVar14 = (undefined8 *)(lVar18 + 0x168);
      }
      fStack_17c = *(float *)((longlong)puVar14 + 4) * (float)dStack_1a0;
      if (fVar22 <= fStack_17c) {
        fStack_17c = fVar22;
      }
      if (fStack_17c <= 0.0) {
        fStack_17c = 0.0;
      }
      if (iVar7 != 1) {
        if (iVar7 == 3) {
          fVar27 = (fVar26 - fStack_17c) - fVar2;
        }
        else {
          if (iVar7 != 2) goto LAB_146aa1ab7;
          fVar27 = (fVar27 + (fVar26 - fStack_17c) * 0.5) - fVar2;
        }
      }
    }
    local_174 = 0x3f800000;
    uVar12 = CONCAT44(fVar27,fVar25);
    local_100 = *(char *)(lVar18 + 0x198);
    local_170 = uVar12;
    if (DAT_14c96b1e0 == '\0') {
      if (local_100 == '\0') goto LAB_146aa1b18;
      local_108 = *(ulonglong *)(lVar18 + 400);
      local_118 = *(undefined8 *)(lVar18 + 0x180);
      uStack_110 = *(undefined8 *)(lVar18 + 0x188);
LAB_146aa200f:
      fVar26 = (float)*(double *)(lVar18 + 0x170);
      if (DAT_14c96b1e0 != '\0') {
        fVar26 = (0.5 - fVar26) + 0.5;
      }
      local_168 = CONCAT44((float)*(double *)(lVar18 + 0x178),fVar26);
      local_1e8 = &local_168;
      local_1d8 = param_2 + 7;
      local_158 = *(undefined8 *)(param_2 + 3);
      local_15c = param_2[2];
      local_1e0 = &local_15c;
      FUN_146978c22(&local_150,&local_180,&local_174,&local_118);
      lVar18 = *(longlong *)(lVar8 + 0x10);
      plVar17 = *(longlong **)(lVar8 + 0x18);
      fVar20 = local_134;
      fVar23 = local_130;
      fVar24 = local_120;
      fVar25 = local_124;
      fVar21 = local_128;
      fVar22 = local_12c;
      bVar13 = local_11c;
      fVar26 = local_148;
      if (plVar17 == (longlong *)0x0) {
        uVar9 = CONCAT53(uStack_14d,CONCAT12(uStack_14e,local_150));
        local_15c._0_3_ = CONCAT12(local_119,local_11b);
      }
      else {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        uVar9 = CONCAT53(uStack_14d,CONCAT12(uStack_14e,local_150));
        local_1bc = local_140;
        local_15c._0_3_ = CONCAT12(local_119,local_11b);
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar17 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        local_1c0 = local_144;
        if ((int)*plVar10 == 0) {
          local_1c8 = uVar9;
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          uVar9 = local_1c8;
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            uVar9 = local_1c8;
          }
          goto LAB_146aa1c83;
        }
      }
      local_1bc = local_140;
      local_1c0 = local_144;
    }
    else {
      if (local_100 != '\0') {
        local_118 = *(undefined8 *)(lVar18 + 0x180);
        uStack_110 = *(undefined8 *)(lVar18 + 0x188);
        local_108 = *(ulonglong *)(lVar18 + 400) ^ 0x80000000;
        goto LAB_146aa200f;
      }
LAB_146aa1b18:
      bVar13 = *(byte *)(param_2 + 0xd);
      fVar26 = param_2[2];
      fVar22 = param_2[7];
      uVar9 = CONCAT44(fStack_17c,local_180);
      fVar21 = param_2[8];
      fVar2 = param_2[10];
      fVar3 = param_2[9];
      fVar24 = param_2[0xc];
      fVar4 = param_2[0xb];
      local_1bc = fVar27 * fVar26 + param_2[4];
      local_1c0 = fVar25 * fVar26 + param_2[3];
      plVar17 = *(longlong **)(lVar8 + 0x18);
      fVar23 = fVar21;
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        local_15c = (float)CONCAT22(CONCAT11(local_15c._3_1_,uStack_14e),local_150);
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar17 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          local_1c8 = CONCAT44(local_1c8._4_4_,fVar21);
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          fVar23 = (float)local_1c8;
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            fVar23 = (float)local_1c8;
          }
        }
      }
      local_13c = uVar12;
      fVar20 = fVar22 + fVar3 * 0.0;
      fVar23 = fVar23 + fVar2 * 0.0;
      fVar24 = fVar25 * fVar21 + fVar27 * fVar2 + fVar24;
      fVar25 = fVar25 * fVar22 + fVar27 * fVar3 + fVar4;
      fVar21 = fVar21 * 0.0 + fVar2;
      fVar22 = fVar22 * 0.0 + fVar3;
      bVar13 = bVar13 & 1;
    }
LAB_146aa1c83:
    if ((*local_1b0 & bVar5) == 0) {
      if (plVar17 != (longlong *)0x0) goto LAB_146aa1d94;
    }
    else {
      pbVar15 = local_1b0 + 8;
      iVar7 = *(int *)(local_1b0 + 0x130);
      lVar16 = (longlong)iVar7;
      *(uint *)(local_1b0 + 0x130) = iVar7 + 1U;
      if (*(uint *)(local_1b0 + 0x134) < iVar7 + 1U) {
        local_1c8 = local_13c;
        FUN_14022ed06(pbVar15,iVar7);
        local_13c = local_1c8;
      }
      if (*(byte **)(local_1b0 + 0x128) != (byte *)0x0) {
        pbVar15 = *(byte **)(local_1b0 + 0x128);
      }
      *(undefined8 *)(pbVar15 + lVar16 * 0x48) = uVar9;
      *(float *)(pbVar15 + lVar16 * 0x48 + 8) = fVar26;
      *(float *)(pbVar15 + lVar16 * 0x48 + 0xc) = local_1c0;
      *(float *)(pbVar15 + lVar16 * 0x48 + 0x10) = local_1bc;
      *(undefined8 *)(pbVar15 + lVar16 * 0x48 + 0x14) = local_13c;
      *(float *)(pbVar15 + lVar16 * 0x48 + 0x1c) = fVar20;
      *(float *)(pbVar15 + lVar16 * 0x48 + 0x20) = fVar23;
      *(float *)(pbVar15 + lVar16 * 0x48 + 0x24) = fVar22;
      *(float *)(pbVar15 + lVar16 * 0x48 + 0x28) = fVar21;
      *(float *)(pbVar15 + lVar16 * 0x48 + 0x2c) = fVar25;
      *(float *)(pbVar15 + lVar16 * 0x48 + 0x30) = fVar24;
      pbVar15[lVar16 * 0x48 + 0x34] = bVar13;
      *(undefined2 *)(pbVar15 + lVar16 * 0x48 + 0x35) = (undefined2)local_15c;
      pbVar15[lVar16 * 0x48 + 0x37] = local_15c._2_1_;
      *(longlong *)(pbVar15 + lVar16 * 0x48 + 0x38) = lVar18;
      *(longlong **)(pbVar15 + lVar16 * 0x48 + 0x40) = plVar17;
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
LAB_146aa1d94:
        LOCK();
        plVar10 = plVar17 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
    }
  }
  plVar17 = *(longlong **)(local_1b8 + 0x250);
  if (plVar17 == (longlong *)0x0) {
LAB_146aa1e08:
    lVar16 = *(longlong *)(lVar8 + 0x10);
    lVar18 = 0;
  }
  else {
    iVar7 = (int)plVar17[1];
    do {
      if (iVar7 == 0) goto LAB_146aa1e08;
      LOCK();
      iVar6 = (int)plVar17[1];
      bVar19 = iVar7 == iVar6;
      if (bVar19) {
        *(int *)(plVar17 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar19);
    lVar18 = *(longlong *)(local_1b8 + 0x248);
    lVar16 = *(longlong *)(lVar8 + 0x10);
    LOCK();
    plVar10 = plVar17 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if (lVar18 != lVar16) {
    *(undefined8 *)(local_1b8 + 0x248) = *(undefined8 *)(lVar8 + 0x10);
    plVar17 = *(longlong **)(lVar8 + 0x18);
    plVar10 = *(longlong **)(local_1b8 + 0x250);
    if (plVar10 != plVar17) {
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
        UNLOCK();
        plVar10 = *(longlong **)(local_1b8 + 0x250);
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
      *(longlong **)(local_1b8 + 0x250) = plVar17;
    }
    lVar8 = *(longlong *)(DAT_14c98e618 + 200);
    plVar17 = *(longlong **)(DAT_14c98e618 + 0xd0);
    if (plVar17 == (longlong *)0x0) {
      *(undefined1 *)(lVar8 + 0x88) = 1;
    }
    else {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      *(undefined1 *)(lVar8 + 0x88) = 1;
      LOCK();
      plVar10 = plVar17 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
LAB_146aa1eef:
  FUN_1449db362(&local_190);
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146aa2260 FUN_146aa2260 body=122 status=ok
// SIG undefined FUN_146aa2260(void)

double * FUN_146aa2260(undefined8 param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  float *pfVar7;
  
  lVar6 = FUN_146aa140e();
  dVar5 = DAT_14c8463f8;
  if ((lVar6 == 0) ||
     (lVar4 = *(longlong *)(lVar6 + 0x10), *(char *)(lVar4 + 0x39) == DAT_14c96b1e1)) {
    *param_2 = DAT_14c8463f0;
    param_2[1] = dVar5;
  }
  else {
    fVar1 = *(float *)(lVar6 + 0x2c);
    fVar2 = *(float *)(lVar6 + 0x34);
    pfVar7 = (float *)&DAT_14c84635c;
    if ((*(byte *)(lVar4 + 0x31) & 0x20) != 0) {
      pfVar7 = (float *)(lVar4 + 0x168);
    }
    fVar3 = pfVar7[1];
    *param_2 = (double)(*(float *)(lVar6 + 0x28) + *(float *)(lVar6 + 0x30) + *pfVar7);
    param_2[1] = (double)(fVar1 + fVar2 + fVar3);
  }
  return param_2;
}



// FUNCTION 146aa22e2 FUN_146aa22e2 body=262 status=ok
// SIG undefined FUN_146aa22e2(void)

void FUN_146aa22e2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f168f0;
  plVar3 = (longlong *)param_1[0x52];
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
  plVar3 = (longlong *)param_1[0x50];
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
  plVar3 = (longlong *)param_1[0x4e];
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
  plVar3 = (longlong *)param_1[0x4c];
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
  FUN_1449db362(param_1 + 0x48);
  plVar3 = (longlong *)param_1[0x47];
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
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146aa23e8 FUN_146aa23e8 body=184 status=ok
// SIG undefined FUN_146aa23e8(void)

undefined1 * FUN_146aa23e8(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_14151e938();
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x38))();
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
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa24a2 FUN_146aa24a2 body=216 status=ok
// SIG undefined FUN_146aa24a2(void)

undefined * FUN_146aa24a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined *puVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x230) == 0) {
    puVar5 = &DAT_14c98f210;
  }
  else {
    FUN_14151e938(*(longlong *)(param_1 + 0x230),local_28);
    puVar5 = &DAT_14c98f420;
    if (*(char *)(param_1 + 0x250) == '\x01') {
      cVar4 = FUN_14154d6ea(*(undefined8 *)(param_1 + 0x230));
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)(param_1 + 600);
        puVar5 = &DAT_14c98f370;
        if ((((*(byte *)(lVar3 + 0x33b) & 2) == 0) && (*(char *)(lVar3 + 0x360) == '\0')) &&
           (puVar5 = &DAT_14c98f210, *(char *)(lVar3 + 0x3b) != '\0')) {
          puVar5 = &DAT_14c98f2c0;
        }
      }
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa257c FUN_146aa257c body=295 status=ok
// SIG undefined FUN_146aa257c(void)

undefined1 * FUN_146aa257c(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x230) == 0) goto LAB_146aa2649;
  FUN_14151e938();
  if (local_30 != (longlong *)0x0) {
    iVar3 = (**(code **)(*local_30 + 0x68))();
    if (((iVar3 != 2) && (*(int *)(param_1 + 0x248) != 0)) &&
       (*(longlong **)(param_1 + 0x240) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x240) + 0x30))();
      if (cVar2 != '\0') {
        if (*(int *)(param_1 + 0x248) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(param_1 + 0x240);
        }
        (**(code **)(*plVar4 + 0x58))();
        goto LAB_146aa2622;
      }
    }
    cVar2 = (**(code **)(*local_30 + 0x70))();
    if (cVar2 == '\0') {
      (**(code **)(*local_30 + 0x40))();
    }
    else {
      (**(code **)(*local_30 + 0x48))();
    }
  }
LAB_146aa2622:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
LAB_146aa2649:
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa26a4 FUN_146aa26a4 body=365 status=ok
// SIG undefined FUN_146aa26a4(void)

undefined * FUN_146aa26a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x230) == 0) {
    puVar7 = &DAT_14c98f580;
    goto LAB_146aa2772;
  }
  FUN_14151e938(*(longlong *)(param_1 + 0x230),&local_28);
  if ((local_28 == (longlong *)0x0) ||
     ((cVar3 = (**(code **)(*local_28 + 0x70))(), cVar3 == '\0' &&
      (iVar4 = (**(code **)(*local_28 + 0x68))(), iVar4 == 2)))) {
    puVar7 = &DAT_14c98f790;
    if ((*(char *)(param_1 + 0x251) == '\x01') &&
       (cVar3 = FUN_14154d6f6(*(undefined8 *)(param_1 + 0x230)), cVar3 != '\0')) {
      lVar5 = *(longlong *)(param_1 + 0x268);
      puVar7 = &DAT_14c98f6e0;
      if (((*(byte *)(lVar5 + 0x33b) & 2) == 0) && (*(char *)(lVar5 + 0x360) == '\0')) {
        puVar6 = &DAT_14c98f630;
        puVar7 = &DAT_14c98f580;
        goto LAB_146aa2761;
      }
    }
  }
  else {
    puVar7 = &DAT_14c98f790;
    if ((*(char *)(param_1 + 0x251) == '\x01') &&
       (cVar3 = FUN_14154d6f6(*(undefined8 *)(param_1 + 0x230)), cVar3 != '\0')) {
      lVar5 = *(longlong *)(param_1 + 0x268);
      puVar7 = &DAT_14c98fa50;
      if (((*(byte *)(lVar5 + 0x33b) & 2) == 0) && (*(char *)(lVar5 + 0x360) == '\0')) {
        puVar6 = &DAT_14c98f9a0;
        puVar7 = &DAT_14c98f8f0;
LAB_146aa2761:
        if (*(char *)(lVar5 + 0x3b) != '\0') {
          puVar7 = puVar6;
        }
      }
    }
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
LAB_146aa2772:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
}



// FUNCTION 146aa2812 FUN_146aa2812 body=163 status=ok
// SIG undefined FUN_146aa2812(void)

undefined1 * FUN_146aa2812(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (DAT_14c75ef6c == '\x01') {
    if ((DAT_14c98f1f0 == (longlong *)0x0 || DAT_14c98f1f8 == 0) ||
       (cVar1 = (**(code **)(*DAT_14c98f1f0 + 0x30))(), cVar1 == '\0')) {
      if (*(longlong *)(param_1 + 0x230) != 0) {
        FUN_14698158e();
      }
    }
    else {
      plVar2 = DAT_14c98f1f0;
      if (DAT_14c98f1f8 == 0) {
        plVar2 = (longlong *)0x0;
      }
      (**(code **)(*plVar2 + 0x58))();
    }
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146aa28b6 FUN_146aa28b6 body=198 status=ok
// SIG undefined FUN_146aa28b6(void)

undefined * FUN_146aa28b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x230) == 0) {
    puVar4 = &DAT_14c98fc60;
  }
  else {
    FUN_14151e938(*(longlong *)(param_1 + 0x230),local_28);
    if (*(char *)(param_1 + 0x252) == '\x01') {
      lVar3 = *(longlong *)(param_1 + 0x278);
      puVar4 = &DAT_14c98fdc0;
      if ((((*(byte *)(lVar3 + 0x33b) & 2) == 0) && (*(char *)(lVar3 + 0x360) == '\0')) &&
         (puVar4 = &DAT_14c98fc60, *(char *)(lVar3 + 0x3b) != '\0')) {
        puVar4 = &DAT_14c98fd10;
      }
    }
    else {
      puVar4 = &DAT_14c98fe70;
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar4;
}



// FUNCTION 146aa297e FUN_146aa297e body=12 status=ok
// SIG undefined FUN_146aa297e(void)

void FUN_146aa297e(longlong param_1)

{
  FUN_145ab3cb8(param_1 + 0x1e0);
  return;
}



// FUNCTION 146aa298a FUN_146aa298a body=29 status=ok
// SIG undefined FUN_146aa298a(void)

void FUN_146aa298a(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x228) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x228) = param_2;
  FUN_14156c56c(param_1 + 0x1f8,1);
  return;
}



// FUNCTION 146aa29a8 FUN_146aa29a8 body=29 status=ok
// SIG undefined FUN_146aa29a8(void)

void FUN_146aa29a8(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x22c) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x22c) = param_2;
  FUN_14156c56c(param_1 + 0x1f8,1);
  return;
}



// FUNCTION 146aa29c6 FUN_146aa29c6 body=153 status=ok
// SIG undefined FUN_146aa29c6(void)

void FUN_146aa29c6(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined1 *)(param_2 + 4);
  local_30 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  local_28 = param_2[8];
  param_2[8] = 0;
  if (*(longlong *)(param_1 + 0x200) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x200) + 8);
  }
  FUN_145ab400a(param_1 + 0x218,uVar1,&local_48);
  FUN_1449db362(&local_30);
  FUN_1449db362(param_2 + 6);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa2ad4 FUN_146aa2ad4 body=1519 status=ok
// SIG undefined FUN_146aa2ad4(void)

void FUN_146aa2ad4(longlong param_1,float *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  undefined1 uVar4;
  int iVar5;
  float *pfVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  float *local_160;
  float *local_158;
  float local_148;
  float fStack_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  char local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(byte *)(param_1 + 0x39) & *param_3) == 0) goto LAB_146aa2ee1;
  fStack_114 = *(float *)(param_1 + 0x218);
  fStack_110 = *(float *)(param_1 + 0x21c);
  fVar9 = *(float *)(param_1 + 0x220);
  fVar3 = *(float *)(param_1 + 0x224);
  fVar12 = *param_2;
  iVar5 = *(int *)(param_1 + 0x228);
  fVar11 = fVar12 - (fStack_114 + fVar9);
  if (iVar5 == 0) {
LAB_146aa2bc6:
    local_148 = fVar11;
    if (fVar11 <= 0.0) {
      local_148 = 0.0;
    }
  }
  else {
    pfVar6 = (float *)&DAT_14c84635c;
    if ((*(byte *)(*(longlong *)(param_1 + 0x208) + 0x31) & 0x20) != 0) {
      pfVar6 = (float *)(*(longlong *)(param_1 + 0x208) + 0x168);
    }
    local_148 = *pfVar6;
    if (fVar11 <= *pfVar6) {
      local_148 = fVar11;
    }
    if (local_148 <= 0.0) {
      local_148 = 0.0;
    }
    if (iVar5 != 1) {
      if (iVar5 == 3) {
        fStack_114 = (fVar12 - local_148) - fVar9;
      }
      else {
        if (iVar5 != 2) goto LAB_146aa2bc6;
        fStack_114 = (fStack_114 + (fVar12 - local_148) * 0.5) - fVar9;
      }
    }
  }
  fVar9 = param_2[1];
  iVar5 = *(int *)(param_1 + 0x22c);
  if (iVar5 == 0) {
    fStack_144 = fVar9 - (fStack_110 + fVar3);
    if (fStack_144 <= 0.0) {
      fStack_144 = 0.0;
    }
    local_f0 = *(longlong *)(param_1 + 0x208);
  }
  else {
    local_f0 = *(longlong *)(param_1 + 0x208);
    puVar8 = &DAT_14c84635c;
    if ((*(byte *)(local_f0 + 0x31) & 0x20) != 0) {
      puVar8 = (undefined8 *)(local_f0 + 0x168);
    }
    fVar12 = fVar9 - (fStack_110 + fVar3);
    fStack_144 = *(float *)((longlong)puVar8 + 4);
    if (fVar12 <= *(float *)((longlong)puVar8 + 4)) {
      fStack_144 = fVar12;
    }
    if (fStack_144 <= 0.0) {
      fStack_144 = 0.0;
    }
    if (iVar5 != 1) {
      if (iVar5 == 3) {
        fStack_110 = (fVar9 - fStack_144) - fVar3;
      }
      else if (iVar5 == 2) {
        fStack_110 = (fStack_110 + (fVar9 - fStack_144) * 0.5) - fVar3;
      }
      else {
        fStack_144 = fVar12;
        if (fVar12 <= 0.0) {
          fStack_144 = 0.0;
        }
      }
    }
  }
  local_13c = 0x3f800000;
  local_138 = CONCAT44(fStack_110,fStack_114);
  local_90 = *(char *)(local_f0 + 0x198);
  if (DAT_14c96b1e0 == '\0') {
    if (local_90 == '\0') goto LAB_146aa2cae;
    local_98 = *(ulonglong *)(local_f0 + 400);
    local_a8 = *(undefined8 *)(local_f0 + 0x180);
    uStack_a0 = *(undefined8 *)(local_f0 + 0x188);
LAB_146aa2f9f:
    fVar9 = (float)*(double *)(local_f0 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar9 = (0.5 - fVar9) + 0.5;
    }
    local_130 = CONCAT44((float)*(double *)(local_f0 + 0x178),fVar9);
    local_168 = &local_130;
    local_158 = param_2 + 7;
    local_128 = param_2[2];
    local_160 = &local_128;
    fStack_124 = (float)*(undefined8 *)(param_2 + 3);
    fStack_120 = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
    FUN_146978c22(&local_e0,&local_148,&local_13c,&local_a8);
    local_f0 = *(longlong *)(param_1 + 0x208);
    plVar7 = *(longlong **)(param_1 + 0x210);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_f8 = local_b0;
      local_108 = CONCAT44(uStack_bc,local_c0);
      uStack_100 = CONCAT44(uStack_b4,uStack_b8);
      local_118 = local_d0;
      fStack_114 = fStack_cc;
      fStack_110 = fStack_c8;
      fStack_10c = fStack_c4;
      local_128 = local_e0;
      fStack_124 = fStack_dc;
      fStack_120 = fStack_d8;
      fStack_11c = fStack_d4;
      goto LAB_146aa2dd5;
    }
    local_f8 = local_b0;
    local_108 = CONCAT44(uStack_bc,local_c0);
    uStack_100 = CONCAT44(uStack_b4,uStack_b8);
    local_118 = local_d0;
    fStack_114 = fStack_cc;
    fStack_110 = fStack_c8;
    fStack_10c = fStack_c4;
    local_128 = local_e0;
    fStack_124 = fStack_dc;
    fStack_120 = fStack_d8;
    fStack_11c = fStack_d4;
LAB_146aa2e97:
    local_e8 = (longlong *)0x0;
  }
  else {
    if (local_90 != '\0') {
      local_a8 = *(undefined8 *)(local_f0 + 0x180);
      uStack_a0 = *(undefined8 *)(local_f0 + 0x188);
      local_98 = *(ulonglong *)(local_f0 + 400) ^ 0x80000000;
      goto LAB_146aa2f9f;
    }
LAB_146aa2cae:
    uVar4 = *(undefined1 *)(param_2 + 0xd);
    fStack_120 = param_2[2];
    fStack_10c = param_2[7];
    fVar9 = param_2[8];
    fVar3 = param_2[10];
    fVar12 = param_2[9];
    fVar11 = fStack_114 * fVar9 + fStack_110 * fVar3 + param_2[0xc];
    fVar10 = fStack_114 * fStack_10c + fStack_110 * fVar12 + param_2[0xb];
    fVar13 = fVar9 * 0.0 + fVar3;
    fVar14 = fStack_10c * 0.0 + fVar12;
    fVar9 = fVar3 * 0.0 + fVar9;
    fStack_10c = fVar12 * 0.0 + fStack_10c;
    local_118 = fStack_110 * fStack_120 + param_2[4];
    fStack_11c = fStack_114 * fStack_120 + param_2[3];
    plVar7 = *(longlong **)(param_1 + 0x210);
    local_128 = local_148;
    fStack_124 = fStack_144;
    if (plVar7 == (longlong *)0x0) {
      local_108 = CONCAT44(fVar14,fVar9);
      uStack_100 = CONCAT44(fVar10,fVar13);
      local_f8 = CONCAT35(local_f8._5_3_,CONCAT14(uVar4,fVar11)) & 0xffffff01ffffffff;
      goto LAB_146aa2e97;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_108 = CONCAT44(fVar14,fVar9);
    uStack_100 = CONCAT44(fVar10,fVar13);
    local_f8 = CONCAT17(local_e0._2_1_,CONCAT25((undefined2)local_e0,CONCAT14(uVar4,fVar11))) &
               0xffffff01ffffffff;
LAB_146aa2dd5:
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_e8 = plVar7;
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
  }
  FUN_1402018be(param_3,&local_128);
  plVar7 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_146aa2ee1:
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146aa30cc FUN_146aa30cc body=321 status=ok
// SIG undefined FUN_146aa30cc(void)

undefined4
FUN_146aa30cc(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,char param_8)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  longlong *plStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_170 [8];
  undefined1 local_168 [56];
  undefined8 local_130 [29];
  undefined1 *local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_170[0] = DAT_14c96b238;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x400000000;
  local_38 = 0;
  (**(code **)(*param_1 + 0x238))(param_1,param_3,local_170);
  if (0 < (int)local_40) {
    puVar1 = local_168;
    puVar2 = local_130;
    if (local_48 != (undefined1 *)0x0) {
      puVar2 = (undefined8 *)(local_48 + 0x38);
      puVar1 = local_48;
    }
    if (param_8 == '\0') {
      local_1b0 = 0;
    }
    else {
      local_1b0 = *(undefined1 *)((longlong)param_1 + 0x3a);
    }
    local_1a8 = *param_2;
    uStack_1a4 = param_2[1];
    uStack_1a0 = param_2[2];
    uStack_19c = param_2[3];
    local_198 = param_2[4];
    uStack_194 = param_2[5];
    local_188 = param_2[8];
    uStack_184 = param_2[9];
    uStack_180 = param_2[10];
    uStack_17c = param_2[0xb];
    local_1b8 = param_7;
    local_1c0 = param_6;
    local_1c8 = param_5;
    plStack_190 = param_1;
    param_6 = FUN_14016eaf2(*puVar2,&local_1a8,puVar1,param_4);
  }
  FUN_144715780(local_168);
  if ((local_30 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return param_6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa320e FUN_146aa320e body=164 status=ok
// SIG undefined FUN_146aa320e(void)

undefined1 * FUN_146aa320e(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x230) != 0) {
    iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x230) + 0x510) + 0x68))();
    if (((iVar3 != 2) && (*(int *)(param_1 + 0x248) != 0)) &&
       (*(longlong **)(param_1 + 0x240) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x240) + 0x30))();
      if (cVar2 != '\0') {
        if (*(int *)(param_1 + 0x248) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(param_1 + 0x240);
        }
        (**(code **)(*plVar4 + 0x58))();
        uVar1 = 1;
        goto LAB_146aa323a;
      }
    }
  }
  uVar1 = 0;
LAB_146aa323a:
  *param_2 = uVar1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146aa32b2 FUN_146aa32b2 body=55 status=ok
// SIG undefined FUN_146aa32b2(void)

char FUN_146aa32b2(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x230) == 0) {
    cVar1 = '\n';
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x230) + 0x510) + 0x68))();
    cVar1 = (iVar2 == 2) * '\x05' + '\x05';
  }
  return cVar1;
}



// FUNCTION 146aa32ea FUN_146aa32ea body=188 status=ok
// SIG undefined FUN_146aa32ea(void)

undefined8 * FUN_146aa32ea(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f16c20;
  *(undefined4 *)(param_1 + 0x3c) = 0x42c80000;
  FUN_140a5808e(param_1 + 0x3c,param_1);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 1;
  FUN_140a5808e((longlong)param_1 + 0x1e4,param_1);
  FUN_1446f470e(&local_20,L"Slots",1);
  param_1[0x3e] = param_1;
  param_1[0x3f] = local_20;
  param_1[0x3d] = &PTR_LAB_149f175a0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa33a8 FUN_146aa33a8 body=197 status=ok
// SIG undefined FUN_146aa33a8(void)

undefined8 FUN_146aa33a8(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  local_20[4] = 0;
  *local_20 = &PTR_FUN_149edb640;
  local_20[1] = 0;
  local_20[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  local_20[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  *local_20 = &PTR_FUN_149f19ea8;
  local_20[4] = &PTR_LAB_149f19eb0;
  *(undefined1 *)((longlong)local_20 + 0x44) = 0;
  *(undefined2 *)(local_20 + 9) = 0;
  FUN_146aa346e(param_2,&local_20,param_1 + 0x1e8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa346e FUN_146aa346e body=101 status=ok
// SIG undefined FUN_146aa346e(void)

longlong * FUN_146aa346e(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5b) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = param_3;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return param_1;
}



// FUNCTION 146aa34d4 FUN_146aa34d4 body=76 status=ok
// SIG undefined FUN_146aa34d4(void)

ulonglong FUN_146aa34d4(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (0 < (longlong)*(int *)(param_1 + 0x208)) {
    uVar1 = 0;
    do {
      if (*param_2 ==
          *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x200) + uVar1 * 8) + 0x10)) {
        FUN_146ac6bd2(param_1 + 0x200,uVar1 & 0xffffffff);
        return uVar1 & 0xffffffff;
      }
      uVar1 = uVar1 + 1;
    } while ((longlong)*(int *)(param_1 + 0x208) != uVar1);
  }
  return 0xffffffff;
}



// FUNCTION 146aa3520 FUN_146aa3520 body=250 status=ok
// SIG undefined FUN_146aa3520(void)

void FUN_146aa3520(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146a84c3e(param_1 + 0x1e0,param_1,param_2 + 0x1b8);
  uVar1 = *(undefined4 *)(param_2 + 0x1ec);
  uVar2 = *(undefined4 *)(param_2 + 0x1f0);
  uVar3 = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x214) = uVar1;
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  *(undefined4 *)(param_1 + 0x21c) = uVar3;
  *(undefined1 *)(param_1 + 0x220) = *(undefined1 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_2 + 0x1fc);
  FUN_146a9fd62(param_1 + 0x1e4,param_1,param_2 + 0x1d0);
  local_28 = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  local_20 = *(undefined4 *)(param_2 + 0x1b0);
  local_1c = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  FUN_146aa361c(param_1 + 0x1e8);
  if (*(char *)(param_1 + 0x220) == '\x01') {
    bVar4 = *(byte *)(param_1 + 0x38) | 4;
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x38) & 0xfb;
  }
  *(byte *)(param_1 + 0x38) = bVar4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_144a88240(param_1 + 0x18,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 146aa361c FUN_146aa361c body=136 status=ok
// SIG undefined FUN_146aa361c(void)

void FUN_146aa361c(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)(param_1 + 0x20) + iVar1;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_1 + 0x24) < iVar2) {
    FUN_146ac6d26(param_1 + 0x18);
    iVar1 = (int)param_2[1];
  }
  lVar4 = *param_2;
  uVar3 = 0;
  if (iVar1 != 0) {
    lVar5 = (longlong)iVar1 * 0x60;
    do {
      FUN_146ac6ccc(param_1,lVar4);
      lVar4 = lVar4 + 0x60;
      lVar5 = lVar5 + -0x60;
    } while (lVar5 != 0);
    uVar3 = (undefined4)param_2[1];
    lVar4 = *param_2;
  }
  FUN_146ac6f60(lVar4,uVar3);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146aa36a6 FUN_146aa36a6 body=109 status=ok
// SIG undefined FUN_146aa36a6(void)

void FUN_146aa36a6(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)(param_1 + 0x220) == '\x01') {
    if (*(int *)(param_1 + 0x224) == 1) {
      local_10 = *param_2;
    }
    else {
      local_10 = *param_2;
    }
    FUN_146a769fe(param_1 + 0x1e0,param_1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa3714 FUN_146aa3714 body=173 status=ok
// SIG undefined FUN_146aa3714(void)

longlong * FUN_146aa3714(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = DAT_14c8463f8;
  param_1[2] = DAT_14c8463f0;
  param_1[3] = lVar1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  uVar3 = *(uint *)(param_2 + 0x208);
  if ((longlong)(int)uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_146ac702a(param_1 + 6,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if (((int)param_1[0xf] == 0) || ((int)param_1[0xf] < iVar2)) {
      *(int *)(param_1 + 0xf) = iVar2;
      FUN_146ac71bc(param_1 + 6);
    }
  }
  return param_1;
}



// FUNCTION 146aa37c6 FUN_146aa37c6 body=1030 status=ok
// SIG undefined FUN_146aa37c6(void)

void FUN_146aa37c6(longlong *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  double *pdVar7;
  longlong lVar8;
  float *pfVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_7c;
  int *local_78;
  undefined8 *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_7c = 0;
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x208) < 1) {
    iVar6 = -1;
  }
  else {
    pdVar1 = (double *)(param_1 + 3);
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar8 + 0x200) + (longlong)local_7c * 8);
      if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x39) != DAT_14c96b1e1) {
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_88 = 0;
        local_78 = &local_7c;
        local_70 = &local_a8;
        FUN_146ac7360(param_1 + 6,&local_64,&local_78);
        if ((int)param_1[5] == -1) {
          *(int *)(param_1 + 5) = local_7c;
        }
        else if (local_7c != (int)param_1[5]) {
          lVar8 = *param_1;
          if (*(int *)(lVar8 + 0x224) == 0) {
            param_1[2] = (longlong)(*(double *)(lVar8 + 0x210) + (double)param_1[2]);
            *(float *)((longlong)param_1 + 0x24) =
                 (float)((double)*(float *)((longlong)param_1 + 0x24) + *(double *)(lVar8 + 0x210));
          }
          else {
            *pdVar1 = *(double *)(lVar8 + 0x218) + *pdVar1;
          }
        }
        lVar8 = param_1[6] + (longlong)local_64 * 0x38;
        pdVar11 = (double *)(lVar8 + 8);
        pfVar9 = (float *)(*(longlong *)(lVar4 + 0x10) + 0x168);
        if ((*(byte *)(*(longlong *)(lVar4 + 0x10) + 0x31) & 0x20) == 0) {
          pfVar9 = (float *)&DAT_14c84635c;
        }
        dVar14 = (double)(*(float *)(lVar4 + 0x2c) + *(float *)(lVar4 + 0x34) + pfVar9[1]);
        dVar16 = (double)(*(float *)(lVar4 + 0x28) + *(float *)(lVar4 + 0x30) + *pfVar9);
        dVar15 = (double)param_1[2];
        *pdVar11 = dVar15;
        dVar3 = (double)param_1[3];
        *(double *)(lVar8 + 0x10) = dVar3;
        pdVar12 = (double *)(lVar8 + 0x18);
        *(double *)(lVar8 + 0x18) = dVar16;
        pdVar2 = (double *)(lVar8 + 0x20);
        *(double *)(lVar8 + 0x20) = dVar14;
        lVar5 = *param_1;
        if (*(int *)(lVar5 + 0x224) == 1) {
          if (*(char *)(lVar4 + 0x49) == '\0') {
            fVar13 = *(float *)(lVar5 + 0x1e0);
            if ((*(char *)(lVar4 + 0x44) != '\x01') || (*(float *)(lVar4 + 0x40) <= fVar13)) {
              if (fVar13 < (float)(dVar3 + dVar14)) goto LAB_146aa3952;
            }
            else {
              if (local_7c == (int)param_1[5]) {
                dVar15 = *pdVar1;
              }
              else {
                FUN_146aa3bce(param_1,local_7c + -1);
                *(int *)(param_1 + 5) = local_7c;
                *pdVar11 = (double)param_1[2];
                dVar15 = (double)param_1[3];
                *(double *)(lVar8 + 0x10) = dVar15;
                fVar13 = *(float *)(*param_1 + 0x1e0);
              }
              *pdVar2 = (double)fVar13 - dVar15;
            }
          }
          else {
LAB_146aa3952:
            if (local_7c != (int)param_1[5]) {
              FUN_146aa3bce(param_1,local_7c + -1);
              *(int *)(param_1 + 5) = local_7c;
              *pdVar11 = (double)param_1[2];
              *(longlong *)(lVar8 + 0x10) = param_1[3];
            }
          }
          fVar13 = *(float *)(param_1 + 4);
          if ((double)fVar13 <= *pdVar12) {
            fVar13 = (float)*pdVar12;
          }
          pdVar11 = (double *)(lVar8 + 0x10);
          *(float *)(param_1 + 4) = fVar13;
          pdVar7 = pdVar1;
          pdVar12 = pdVar2;
        }
        else {
          if (*(char *)(lVar4 + 0x49) == '\0') {
            fVar13 = *(float *)(lVar5 + 0x1e0);
            if ((*(char *)(lVar4 + 0x44) != '\x01') || (*(float *)(lVar4 + 0x40) <= fVar13)) {
              if (fVar13 < (float)(dVar15 + dVar16)) goto LAB_146aa398e;
            }
            else {
              if (local_7c != (int)param_1[5]) {
                FUN_146aa3bce(param_1,local_7c + -1);
                *(int *)(param_1 + 5) = local_7c;
                *pdVar11 = (double)param_1[2];
                *(longlong *)(lVar8 + 0x10) = param_1[3];
                fVar13 = *(float *)(*param_1 + 0x1e0);
              }
              *pdVar12 = (double)fVar13 - (double)param_1[2];
            }
          }
          else {
LAB_146aa398e:
            if (local_7c != (int)param_1[5]) {
              FUN_146aa3bce(param_1,local_7c + -1);
              *(int *)(param_1 + 5) = local_7c;
              *pdVar11 = (double)param_1[2];
              *(longlong *)(lVar8 + 0x10) = param_1[3];
            }
          }
          fVar13 = *(float *)(param_1 + 4);
          if ((double)fVar13 <= *pdVar2) {
            fVar13 = (float)*pdVar2;
          }
          *(float *)(param_1 + 4) = fVar13;
          *(float *)((longlong)param_1 + 0x24) =
               (float)((double)*(float *)((longlong)param_1 + 0x24) + *pdVar12);
          pdVar7 = (double *)(param_1 + 2);
        }
        *pdVar7 = *pdVar11 + *pdVar12;
        lVar8 = *param_1;
      }
      iVar10 = local_7c + 1;
      iVar6 = local_7c;
      local_7c = iVar10;
    } while (iVar10 < *(int *)(lVar8 + 0x208));
  }
  if ((int)param_1[5] != -1) {
    FUN_146aa3bce(param_1,iVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146aa3bce FUN_146aa3bce body=558 status=ok
// SIG undefined FUN_146aa3bce(void)

void FUN_146aa3bce(longlong *param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  double *pdVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  double dVar11;
  
  iVar10 = (int)param_1[5];
  lVar7 = (longlong)iVar10;
  uVar8 = param_2;
  if (iVar10 <= (int)param_2) {
    lVar6 = (longlong)(int)param_2 + 1;
    do {
      uVar8 = param_2;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(*(longlong *)(*param_1 + 0x200) + -8 + lVar6 * 8) + 0x10) + 0x39
                   ) != DAT_14c96b1e1) break;
      param_2 = param_2 - 1;
      lVar6 = lVar6 + -1;
      uVar8 = iVar10 - 1;
    } while (lVar7 < lVar6);
  }
  if (((-1 < (int)uVar8) && (lVar6 = *param_1, (int)uVar8 < *(int *)(lVar6 + 0x208))) &&
     (*(char *)(*(longlong *)(*(longlong *)(lVar6 + 0x200) + (ulonglong)uVar8 * 8) + 0x48) == '\x01'
     )) {
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar6 + 0x1e0);
  }
  if (iVar10 <= (int)uVar8) {
    iVar10 = 0;
    cVar1 = DAT_14c96b1e1;
    do {
      lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x200) + lVar7 * 8);
      if (*(char *)(*(longlong *)(lVar6 + 0x10) + 0x39) != cVar1) {
        if ((int)param_1[7] != *(int *)((longlong)param_1 + 100)) {
          plVar2 = (longlong *)param_1[0xe];
          if ((longlong *)param_1[0xe] == (longlong *)0x0) {
            plVar2 = param_1 + 0xd;
          }
          iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[0xf] - 1U & (uint)lVar7) * 4)
          ;
          if (iVar4 != -1) {
            do {
              lVar9 = param_1[6] + (longlong)iVar4 * 0x38;
              if (*(uint *)(param_1[6] + (longlong)iVar4 * 0x38) == (uint)lVar7) goto LAB_146aa3cc7;
              iVar4 = *(int *)(lVar9 + 0x30);
            } while (iVar4 != -1);
          }
        }
        lVar9 = 0;
LAB_146aa3cc7:
        *(int *)(lVar9 + 0x2c) = iVar10;
        *(undefined4 *)(lVar9 + 0x28) = *(undefined4 *)((longlong)param_1 + 0x24);
        if ((lVar7 == (int)uVar8) && (*(char *)(lVar6 + 0x48) == '\x01')) {
          uVar5 = (ulonglong)(*(int *)(*param_1 + 0x224) == 1);
          *(double *)(lVar9 + 0x18 + uVar5 * 8) =
               (double)*(float *)(*param_1 + 0x1e0) - *(double *)(lVar9 + 8 + uVar5 * 8);
        }
        *(double *)(lVar9 + 0x18 + (ulonglong)(*(int *)(*param_1 + 0x224) != 1) * 8) =
             (double)*(float *)(param_1 + 4);
        if (DAT_14c96b1e0 == '\x01') {
          *(double *)(lVar9 + 8) =
               ((double)*(float *)(*param_1 + 0x1e0) - *(double *)(lVar9 + 8)) -
               *(double *)(lVar9 + 0x18);
        }
        iVar10 = iVar10 + 1;
        (**(code **)param_1[1])(((undefined8 *)param_1[1])[1]);
        cVar1 = DAT_14c96b1e1;
      }
      lVar7 = lVar7 + 1;
    } while (uVar8 + 1 != (int)lVar7);
  }
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x224) == 1) {
    pdVar3 = (double *)(param_1 + 2);
    param_1[3] = 0;
    dVar11 = (double)*(float *)(param_1 + 4) + *(double *)(lVar7 + 0x210);
  }
  else {
    param_1[2] = 0;
    dVar11 = (double)*(float *)(param_1 + 4) + *(double *)(lVar7 + 0x218);
    pdVar3 = (double *)(param_1 + 3);
  }
  *pdVar3 = dVar11 + *pdVar3;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  return;
}



// FUNCTION 146aa3dfc FUN_146aa3dfc body=118 status=ok
// SIG undefined FUN_146aa3dfc(void)

void FUN_146aa3dfc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 local_90 [48];
  undefined1 local_60 [64];
  longlong local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146aa3714(local_90,param_1,param_2);
  FUN_146aa37c6(local_90);
  local_18 = 0;
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  FUN_146aa7bf6(local_60);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa3e74 FUN_146aa3e74 body=119 status=ok
// SIG undefined FUN_146aa3e74(void)

void FUN_146aa3e74(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  code *local_20;
  longlong *local_18;
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_c = *(undefined4 *)(param_1 + 0x1e4);
  local_38 = &local_c;
  local_40 = &local_10;
  local_10 = 0;
  local_18 = &local_48;
  local_20 = FUN_142905dd8;
  local_48 = param_1;
  local_30 = param_2;
  local_28 = param_3;
  FUN_146aa3dfc();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa3eec FUN_146aa3eec body=12 status=ok
// SIG undefined FUN_146aa3eec(void)

void FUN_146aa3eec(longlong param_1)

{
  FUN_146aa3ef8(param_1 + 0x1e8);
  return;
}



// FUNCTION 146aa3ef8 FUN_146aa3ef8 body=170 status=ok
// SIG undefined FUN_146aa3ef8(void)

void FUN_146aa3ef8(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  local_20 = *(undefined4 *)(param_1 + 0x20);
  local_1c = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_146aa7bc1(0,0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_146ac6d26(param_1 + 0x18,0);
  }
  FUN_146ac767c(&local_28);
  FUN_146ac76b2(param_1 + 0x18,&local_28);
  FUN_146aa7bc1(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa3fa4 FUN_146aa3fa4 body=96 status=ok
// SIG undefined FUN_146aa3fa4(void)

undefined4 * FUN_146aa3fa4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined1 *local_20;
  undefined4 **local_18;
  ulonglong local_10;
  
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = (undefined4)DAT_14c8463f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  local_18 = &local_28;
  local_20 = &LAB_14290649e;
  local_28 = param_2;
  FUN_146aa3dfc();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa400e FUN_146aa400e body=54 status=ok
// SIG undefined FUN_146aa400e(void)

void FUN_146aa400e(longlong param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((((*(double *)(param_1 + 0x210) == *param_2) &&
       (!NAN(*(double *)(param_1 + 0x210)) && !NAN(*param_2))) &&
      (*(double *)(param_1 + 0x218) == param_2[1])) &&
     (!NAN(*(double *)(param_1 + 0x218)) && !NAN(param_2[1]))) {
    return;
  }
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x210) = uVar1;
  *(undefined4 *)(param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x218) = uVar3;
  *(undefined4 *)(param_1 + 0x21c) = uVar4;
  FUN_140163244(uVar1,1);
  return;
}



// FUNCTION 146aa4044 FUN_146aa4044 body=43 status=ok
// SIG undefined FUN_146aa4044(void)

void FUN_146aa4044(longlong param_1,longlong param_2)

{
  FUN_140a5e0d2(param_1 + 0x1e0,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 146aa4070 FUN_146aa4070 body=80 status=ok
// SIG undefined FUN_146aa4070(void)

void FUN_146aa4070(longlong param_1,char param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x220) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x220) = param_2;
  if (param_2 == '\0') {
    bVar1 = *(byte *)(param_1 + 0x38) & 0xfb;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x38) | 4;
  }
  *(byte *)(param_1 + 0x38) = bVar1;
  FUN_144a88240(param_1 + 0x18,param_1);
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146aa40c0 FUN_146aa40c0 body=22 status=ok
// SIG undefined FUN_146aa40c0(void)

void FUN_146aa40c0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x224) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x224) = param_2;
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146aa40d6 FUN_146aa40d6 body=43 status=ok
// SIG undefined FUN_146aa40d6(void)

void FUN_146aa40d6(longlong param_1,longlong param_2)

{
  FUN_146aa0bf6(param_1 + 0x1e4,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 146aa4102 FUN_146aa4102 body=995 status=ok
// SIG undefined FUN_146aa4102(void)

void FUN_146aa4102(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_398 [32];
  undefined1 *local_378;
  undefined1 local_369;
  undefined8 local_368;
  undefined8 local_360;
  undefined1 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  longlong *local_338;
  undefined8 local_330;
  longlong *local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined2 local_2f8 [4];
  undefined8 local_2f0;
  undefined4 local_2e8;
  code *local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined2 local_298 [4];
  undefined1 local_290 [416];
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 local_e0 [128];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_398;
  local_2e0 = FUN_146aa44e6;
  local_2d8 = 0;
  FUN_146ac7702(local_298,param_1);
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 1;
  local_2b0 = 0;
  local_2a8 = 0;
  FUN_140a51be2(&local_2b0,local_298);
  FUN_1449db362(local_298);
  FUN_140a51d16(param_1 + 0x230,param_1,&local_2c8);
  FUN_1449db362(&local_2b0);
  FUN_14692f10e(local_298,0,0x3e19999a,0);
  FUN_146980d02(param_1 + 0x288,local_298);
  FUN_1402bc42a(local_298);
  FUN_14020e58a(param_1,&local_2e0);
  FUN_146aa451a(&local_2e0,local_298);
  *(undefined2 *)(param_1 + 0x270) = local_298[0];
  FUN_144a450dc(param_1 + 0x278,local_290);
  FUN_1449db362(local_290);
  plVar4 = (longlong *)CONCAT44(uStack_2d4,local_2d8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  local_2e0 = FUN_146aa4590;
  local_2d8 = 0;
  FUN_146ac7bd0(local_298,param_1);
  local_2f8[0] = 0x119;
  local_2f0 = 0;
  local_2e8 = 0;
  FUN_140fe25fc(&local_2f0,local_298);
  FUN_1449db362(local_298);
  FUN_14020e622(param_1,local_2f8);
  *(undefined1 **)(param_1 + 0x228) = &DAT_200000002;
  local_320 = 0x40400000;
  uStack_31c = 0;
  uStack_318 = 0x40400000;
  uStack_314 = 0;
  local_310 = 1;
  local_308 = 0;
  uStack_300 = 0;
  uVar3 = FUN_140a58d14(param_1 + 0x218);
  FUN_140a53334(local_298);
  plVar4 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_368,"Icons.Error",1);
  local_360 = (**(code **)(*plVar4 + 0x50))(plVar4,local_368,0,0);
  local_358 = 1;
  local_350 = 0;
  uStack_348 = 0;
  local_e8 = 1;
  local_f0 = local_360;
  FUN_144a450dc(local_e0,&local_350);
  FUN_1449db362(&local_350);
  local_2e0 = FUN_146aa46b8;
  local_2d8 = 0;
  FUN_146aa45ea(local_298,param_1);
  local_378 = &local_369;
  FUN_140a554b8(&local_2e0,"SImage",".\\Runtime/Slate/Private/Widgets/Notifications/SErrorHint.cpp",
                0x15);
  FUN_146aa46ec(&local_2e0,param_1 + 0x2f8);
  FUN_140a52c70(&local_2e0,&local_340,local_298);
  local_330 = local_340;
  local_328 = local_338;
  if (local_338 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_338 + 1) = (int)local_338[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(uVar3,&local_330);
  plVar4 = local_328;
  if (local_328 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_328 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_328)(local_328);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_338 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_338 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_338)(local_338);
      LOCK();
      piVar1 = (int *)((longlong)local_338 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_338 + 0x10))(local_338);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_2d4,local_2d8);
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
  FUN_140a55a86(local_298);
  (*(code *)**(undefined8 **)(param_1 + 0x268))(param_1 + 0x268,param_2 + 0x1a8);
  if ((local_60 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa44e6 FUN_146aa44e6 body=51 status=ok
// SIG undefined FUN_146aa44e6(void)

undefined8 * FUN_146aa44e6(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_14692f614(param_1 + 0x288);
  *param_2 = 0x3ff0000000000000;
  param_2[1] = (double)fVar1;
  return param_2;
}



// FUNCTION 146aa451a FUN_146aa451a body=118 status=ok
// SIG undefined FUN_146aa451a(void)

undefined2 * FUN_146aa451a(longlong *param_1,undefined2 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146aa4568;
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
    lVar4 = *param_1;
    if (lVar4 != 0) {
      FUN_1469b4b32(param_1[2],param_2,lVar4);
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
    if (lVar4 != 0) {
      return param_2;
    }
  }
LAB_146aa4568:
  *param_2 = 0x19;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  return param_2;
}



// FUNCTION 146aa4590 FUN_146aa4590 body=89 status=ok
// SIG undefined FUN_146aa4590(void)

undefined1 * FUN_146aa4590(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + 0x268) + 0x10))(param_1 + 0x268);
  if (cVar1 == '\0') {
    puVar2 = &DAT_14c96b23b;
  }
  else if (*(char *)(param_1 + 0x271) == '\x01') {
    puVar2 = (undefined1 *)FUN_140a51b6e(param_1 + 0x270);
  }
  else {
    puVar2 = &DAT_14c96b238;
  }
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 146aa45ea FUN_146aa45ea body=205 status=ok
// SIG undefined FUN_146aa45ea(void)

longlong FUN_146aa45ea(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_146ac809e(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1,&local_50);
  *(undefined1 *)(param_1 + 0x10) = local_40;
  FUN_144a450dc(param_1 + 0x18,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa46b8 FUN_146aa46b8 body=52 status=ok
// SIG undefined FUN_146aa46b8(void)

longlong * FUN_146aa46b8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x308);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x310);
  return param_2;
}



// FUNCTION 146aa46ec FUN_146aa46ec body=134 status=ok
// SIG undefined FUN_146aa46ec(void)

undefined8 * FUN_146aa46ec(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000146aa4743;
    }
    param_2[1] = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000146aa4743:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 146aa4772 FUN_146aa4772 body=303 status=ok
// SIG undefined FUN_146aa4772(void)

void FUN_146aa4772(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)(param_1 + 0xa0);
  cVar6 = FUN_144a7c5f6(plVar2);
  if ((cVar6 != '\0') && (cVar6 = FUN_144a7c5f6(param_2), cVar6 == '\0')) {
    local_30 = *(longlong **)(param_1 + -600);
    if (local_30 == (longlong *)0x0) {
      local_30 = (longlong *)0x0;
      local_38 = 0;
    }
    else {
      iVar7 = (int)local_30[1];
      local_38 = 0;
      do {
        if (iVar7 == 0) {
          local_30 = (longlong *)0x0;
          goto LAB_146aa4846;
        }
        LOCK();
        iVar5 = (int)local_30[1];
        bVar8 = iVar7 == iVar5;
        if (bVar8) {
          *(int *)(local_30 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar8);
      local_38 = *(undefined8 *)(param_1 + -0x260);
    }
LAB_146aa4846:
    local_48 = 1;
    FUN_14692f220(param_1 + 0x20,&local_38,0,0);
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
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
  plVar3 = (longlong *)*param_2;
  plVar4 = (longlong *)*plVar2;
  if (plVar4 != plVar3) {
    *plVar2 = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(int *)(param_1 + 0xa8) = (int)param_2[1];
  FUN_14697e8c0(param_1 + -0x268,plVar2);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146aa48a2 FUN_146aa48a2 body=91 status=ok
// SIG undefined FUN_146aa48a2(void)

void FUN_146aa48a2(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140009b9a(local_28);
  (**(code **)*param_1)(param_1,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa48fe FUN_146aa48fe body=23 status=ok
// SIG undefined FUN_146aa48fe(void)

byte FUN_146aa48fe(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_144a7c5f6(param_1 + 0xa0);
  return bVar1 ^ 1;
}



// FUNCTION 146aa4916 FUN_146aa4916 body=138 status=ok
// SIG undefined FUN_146aa4916(void)

undefined8 * FUN_146aa4916(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + -600);
  if (plVar3 == (longlong *)0x0) {
LAB_146aa498f:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146aa498f;
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
    uVar4 = *(undefined8 *)(param_1 + -0x260);
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
    *param_2 = uVar4;
    param_2[1] = plVar3;
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
  return param_2;
}



// FUNCTION 146aa49a0 FUN_146aa49a0 body=1500 status=ok
// SIG undefined FUN_146aa49a0(void)

void FUN_146aa49a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined1 auStack_9b8 [32];
  undefined1 *local_998;
  undefined1 local_989;
  undefined8 local_988;
  longlong *local_980;
  undefined2 local_970;
  undefined8 local_968;
  undefined4 local_960;
  undefined1 local_958 [96];
  undefined1 local_8f8;
  undefined8 local_8f0;
  undefined4 local_8e8;
  undefined8 local_8e0;
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  uint local_8c8;
  undefined1 local_8c4;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8a8;
  longlong *local_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined1 local_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 local_868;
  undefined1 local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined4 local_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  undefined1 uStack_834;
  undefined8 local_830;
  undefined4 local_828;
  undefined2 local_818 [4];
  undefined8 local_810;
  undefined4 local_808;
  code *local_800;
  undefined4 local_7f8 [116];
  undefined1 auStack_628 [96];
  undefined1 local_5c8;
  undefined1 local_5c0 [48];
  undefined4 local_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined4 uStack_584;
  uint local_580;
  undefined1 local_57c;
  undefined1 local_578 [232];
  undefined2 local_490;
  undefined1 local_488 [248];
  code *local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined1 *local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 local_1c0;
  undefined1 auStack_1b8 [80];
  undefined8 local_168;
  undefined1 local_160;
  undefined1 local_158 [136];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined1 local_b8 [88];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_9b8;
  FUN_14692f10e(&local_800,0,0x3e19999a,0);
  FUN_146980d02(param_1 + 0x348,&local_800);
  FUN_1402bc42a(&local_800);
  FUN_14020e58a(param_1,&local_390);
  FUN_146aa451a(&local_390,&local_800);
  *(undefined2 *)(param_1 + 800) = local_800._0_2_;
  FUN_144a450dc(param_1 + 0x328,local_7f8);
  FUN_1449db362(local_7f8);
  plVar5 = (longlong *)CONCAT44(uStack_384,local_388);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  local_390 = FUN_146aa4f7e;
  local_388 = 0;
  FUN_146ac8580(&local_800,param_1,&local_390);
  local_818[0] = 0x119;
  local_810 = 0;
  local_808 = 0;
  FUN_140fe25fc(&local_810,&local_800);
  FUN_1449db362(&local_800);
  FUN_14020e622(param_1,local_818);
  FUN_140a562d0(&local_390);
  local_848 = *(undefined4 *)(param_2 + 0x1b8);
  uStack_844 = *(undefined4 *)(param_2 + 0x1bc);
  uStack_840 = *(undefined4 *)(param_2 + 0x1c0);
  uVar4 = *(undefined8 *)(param_2 + 0x1c5);
  uStack_83c._0_1_ = (undefined1)*(undefined4 *)(param_2 + 0x1c4);
  uStack_83c._1_3_ = (undefined3)uVar4;
  uStack_838 = (undefined4)((ulonglong)uVar4 >> 0x18);
  uStack_834 = (undefined1)((ulonglong)uVar4 >> 0x38);
  local_830 = 0;
  local_828 = 0;
  FUN_140a5aaa0(&local_830,param_2 + 0x1d0);
  local_c0 = uStack_838;
  local_d0 = local_848;
  uStack_cc = uStack_844;
  uStack_c8 = uStack_840;
  uStack_c4 = uStack_83c;
  local_bc = uStack_834;
  FUN_144a450dc(local_b8,&local_830);
  FUN_1449db362(&local_830);
  plVar5 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_870,"ErrorReporting.Box",1);
  local_868 = (**(code **)(*plVar5 + 0x50))(plVar5,local_870,0,0);
  local_860 = 1;
  local_858 = 0;
  uStack_850 = 0;
  local_160 = 1;
  local_168 = local_868;
  FUN_144a450dc(local_158,&local_858);
  FUN_1449db362(&local_858);
  local_800 = FUN_146aa50a0;
  local_7f8[0] = 0;
  FUN_146aa4fe8(&local_390,param_1,&local_800);
  local_1d8 = &DAT_200000002;
  local_898 = 0x40400000;
  uStack_890 = 0x40400000;
  local_888 = 1;
  local_880 = 0;
  uStack_878 = 0;
  local_1c0 = 1;
  local_1d0 = 0x40400000;
  uStack_1cc = 0;
  uStack_1c8 = 0x40400000;
  uStack_1c4 = 0;
  FUN_144a450dc(auStack_1b8,&local_880);
  FUN_1449db362(&local_880);
  FUN_140a570d8(&local_800);
  plVar5 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_8e0,"ErrorReporting.ForegroundColor",1);
  local_998 = (undefined1 *)0x0;
  puVar6 = (undefined4 *)(**(code **)(*plVar5 + 0x38))(plVar5,local_8e0,0,&DAT_14c75ed64);
  local_8d8 = *puVar6;
  uStack_8d4 = puVar6[1];
  uStack_8d0 = puVar6[2];
  uStack_8cc = puVar6[3];
  local_8c8 = local_8c8 & 0xffffff00;
  local_8c4 = 1;
  local_8c0 = 0;
  uStack_8b8 = 0;
  local_580 = local_8c8;
  local_57c = 1;
  local_590 = local_8d8;
  uStack_58c = uStack_8d4;
  uStack_588 = uStack_8d0;
  uStack_584 = uStack_8cc;
  FUN_144a450dc(local_578,&local_8c0);
  FUN_1449db362(&local_8c0);
  FUN_144a87366(local_958,param_2 + 0x1e0);
  local_8f8 = *(undefined1 *)(param_2 + 0x240);
  local_8f0 = 0;
  local_8e8 = 0;
  FUN_140a5d470(&local_8f0,param_2 + 0x248);
  FUN_1412cc59c(auStack_628,local_958);
  local_5c8 = local_8f8;
  FUN_144a450dc(local_5c0,&local_8f0);
  FUN_141515cba(local_958);
  local_970 = *(undefined2 *)(param_2 + 600);
  local_968 = 0;
  local_960 = 0;
  FUN_14096c7c0(&local_968,param_2 + 0x260);
  local_490 = local_970;
  FUN_144a450dc(local_488,&local_968);
  FUN_1449db362(&local_968);
  local_998 = &local_989;
  FUN_140a54526(&local_988,"STextBlock",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SErrorText.cpp",0x15);
  if (local_980 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_980 + 1) = (int)local_980[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x340);
  *(undefined8 *)(param_1 + 0x338) = local_988;
  *(longlong **)(param_1 + 0x340) = local_980;
  if (plVar5 != (longlong *)0x0) {
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
  FUN_140a52852(&local_988,&local_8a8,&local_800);
  plVar2 = local_1e0;
  plVar5 = local_8a0;
  if (local_8a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_8a0 + 1) = (int)local_8a0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_8a0 + 1) = (int)local_8a0[1] + 1;
    UNLOCK();
  }
  local_1e8 = local_8a8;
  local_1e0 = local_8a0;
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_140a5a2ee(param_1,&local_390);
  if (plVar5 != (longlong *)0x0) {
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
  if (local_8a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_8a0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_8a0)(local_8a0);
      LOCK();
      piVar1 = (int *)((longlong)local_8a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_8a0 + 0x10))(local_8a0);
      }
    }
  }
  if (local_980 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_980 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_980)(local_980);
      LOCK();
      piVar1 = (int *)((longlong)local_980 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_980 + 0x10))(local_980);
      }
    }
  }
  FUN_140a59ae6(&local_800);
  FUN_140a59028(&local_390);
  (*(code *)**(undefined8 **)(param_1 + 0x2a0))(param_1 + 0x2a0,param_2 + 0x1a8);
  if ((local_60 ^ (ulonglong)auStack_9b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa4f7e FUN_146aa4f7e body=105 status=ok
// SIG undefined FUN_146aa4f7e(void)

undefined1 * FUN_146aa4f7e(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x338);
  if ((*(byte *)(lVar1 + 0x5dc) & 1) != 0) {
    FUN_145ab0088(lVar1 + 0x1e0,lVar1,0);
  }
  cVar2 = FUN_144a7c5f6(lVar1 + 0x1e0);
  if (cVar2 == '\0') {
    puVar3 = (undefined1 *)FUN_140a51b6e(param_1 + 800);
  }
  else {
    puVar3 = &DAT_14c96b1e1;
  }
  *param_2 = *puVar3;
  return param_2;
}



// FUNCTION 146aa4fe8 FUN_146aa4fe8 body=183 status=ok
// SIG undefined FUN_146aa4fe8(void)

longlong FUN_146aa4fe8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146ac8a4e(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a51be2(&local_30,local_58);
  *(undefined1 *)(param_1 + 600) = local_38;
  *(undefined4 *)(param_1 + 0x248) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x24c) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x250) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x254) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x260,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa50a0 FUN_146aa50a0 body=51 status=ok
// SIG undefined FUN_146aa50a0(void)

undefined8 * FUN_146aa50a0(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_14692f614(param_1 + 0x348);
  *param_2 = 0x3ff0000000000000;
  param_2[1] = (double)fVar1;
  return param_2;
}



// FUNCTION 146aa50d4 FUN_146aa50d4 body=324 status=ok
// SIG undefined FUN_146aa50d4(void)

void FUN_146aa50d4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong *local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x98);
  if ((*(byte *)(lVar3 + 0x5dc) & 1) != 0) {
    FUN_145ab0088(lVar3 + 0x1e0,lVar3);
  }
  cVar7 = FUN_144a7c5f6(lVar3 + 0x1e0);
  if ((cVar7 != '\0') && (cVar7 = FUN_144a7c5f6(param_2), cVar7 == '\0')) {
    local_28 = *(longlong **)(param_1 + -0x290);
    if (local_28 == (longlong *)0x0) {
      local_28 = (longlong *)0x0;
      local_30 = 0;
    }
    else {
      iVar8 = (int)local_28[1];
      local_30 = 0;
      do {
        if (iVar8 == 0) {
          local_28 = (longlong *)0x0;
          goto LAB_146aa51bf;
        }
        LOCK();
        iVar6 = (int)local_28[1];
        bVar9 = iVar8 == iVar6;
        if (bVar9) {
          *(int *)(local_28 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar9);
      local_30 = *(undefined8 *)(param_1 + -0x298);
    }
LAB_146aa51bf:
    local_68 = 1;
    FUN_14692f220(param_1 + 0xa8,&local_30,0,0);
    plVar5 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  local_58 = (longlong *)*param_2;
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  local_50 = (undefined4)param_2[1];
  local_48 = 1;
  local_40 = 0;
  uStack_38 = 0;
  FUN_140a5cace(uVar4);
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146aa521a FUN_146aa521a body=91 status=ok
// SIG undefined FUN_146aa521a(void)

void FUN_146aa521a(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140009b9a(local_28);
  (**(code **)*param_1)(param_1,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa5276 FUN_146aa5276 body=62 status=ok
// SIG undefined FUN_146aa5276(void)

byte FUN_146aa5276(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  if ((*(byte *)(lVar1 + 0x5dc) & 1) != 0) {
    FUN_145ab0088(lVar1 + 0x1e0,lVar1,0);
  }
  bVar2 = FUN_144a7c5f6(lVar1 + 0x1e0);
  return bVar2 ^ 1;
}



// FUNCTION 146aa52b4 FUN_146aa52b4 body=138 status=ok
// SIG undefined FUN_146aa52b4(void)

undefined8 * FUN_146aa52b4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + -0x290);
  if (plVar3 == (longlong *)0x0) {
LAB_146aa532d:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146aa532d;
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
    uVar4 = *(undefined8 *)(param_1 + -0x298);
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
    *param_2 = uVar4;
    param_2[1] = plVar3;
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
  return param_2;
}



// FUNCTION 146aa533e FUN_146aa533e body=948 status=ok
// SIG undefined FUN_146aa533e(void)

void FUN_146aa533e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  float *pfVar10;
  undefined1 auStack_478 [32];
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined1 local_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined1 local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined1 uStack_3e4;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined1 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined8 local_398;
  undefined1 local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined1 local_368 [424];
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198;
  undefined1 local_190 [80];
  undefined8 local_140;
  undefined1 local_138;
  undefined1 local_130 [56];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8;
  undefined1 local_e0 [16];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_90 [88];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_478;
  plVar8 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_370,"NotificationList.Watermark",1);
  uVar9 = (**(code **)(*plVar8 + 0x50))(plVar8,local_370,0,0);
  *(undefined8 *)(param_1 + 0x2a0) = uVar9;
  plVar8 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_378,"NotificationList.ItemBackground_Border",1);
  uVar9 = (**(code **)(*plVar8 + 0x50))(plVar8,local_378,0,0);
  *(undefined8 *)(param_1 + 0x2a8) = uVar9;
  FUN_140cbdc98(param_1,1);
  if ((char)DAT_14c98dea8 == '\x01') {
    pfVar10 = (float *)FUN_1400c06fe(&DAT_14c98de98);
  }
  else {
    pfVar10 = (float *)&DAT_14c98de98;
  }
  fVar3 = pfVar10[3];
  fVar4 = pfVar10[2];
  fVar5 = pfVar10[1];
  *(float *)(param_1 + 0x2b0) = *pfVar10 * 1.15;
  *(float *)(param_1 + 0x2b4) = fVar5 * 1.15;
  *(float *)(param_1 + 0x2b8) = fVar4 * 1.15;
  *(float *)(param_1 + 700) = fVar3;
  FUN_140a562d0(local_368);
  local_398 = FUN_141319416();
  local_390 = 1;
  local_388 = 0;
  uStack_380 = 0;
  local_138 = 1;
  local_140 = local_398;
  FUN_144a450dc(local_130,&local_388);
  FUN_1449db362(&local_388);
  local_3b8 = *(undefined1 *)(param_2 + 0x1b8);
  local_3c8 = *(undefined4 *)(param_2 + 0x1a8);
  uStack_3c4 = *(undefined4 *)(param_2 + 0x1ac);
  uStack_3c0 = *(undefined4 *)(param_2 + 0x1b0);
  uStack_3bc = *(undefined4 *)(param_2 + 0x1b4);
  local_3b0 = 0;
  local_3a8 = 0;
  FUN_140a58be0(&local_3b0,param_2 + 0x1c0);
  local_198 = local_3b8;
  local_1a8 = local_3c8;
  uStack_1a4 = uStack_3c4;
  uStack_1a0 = uStack_3c0;
  uStack_19c = uStack_3bc;
  FUN_144a450dc(local_190,&local_3b0);
  FUN_1449db362(&local_3b0);
  uStack_3e8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x205) >> 0x18);
  uStack_3e4 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x205) >> 0x38);
  local_3f8 = *(undefined4 *)(param_2 + 0x1f8);
  uStack_3f4 = *(undefined4 *)(param_2 + 0x1fc);
  uStack_3f0 = *(undefined4 *)(param_2 + 0x200);
  uStack_3ec = *(undefined4 *)(param_2 + 0x204);
  local_3e0 = 0;
  local_3d8 = 0;
  FUN_140a5aaa0(&local_3e0,param_2 + 0x210);
  local_98 = uStack_3e8;
  local_a8 = local_3f8;
  uStack_a4 = uStack_3f4;
  uStack_a0 = uStack_3f0;
  uStack_9c = uStack_3ec;
  local_94 = uStack_3e4;
  FUN_144a450dc(local_90,&local_3e0);
  FUN_1449db362(&local_3e0);
  local_418 = *(undefined1 *)(param_2 + 0x1e0);
  local_428 = *(undefined4 *)(param_2 + 0x1d0);
  uStack_424 = *(undefined4 *)(param_2 + 0x1d4);
  uStack_420 = *(undefined4 *)(param_2 + 0x1d8);
  uStack_41c = *(undefined4 *)(param_2 + 0x1dc);
  local_410 = 0;
  local_408 = 0;
  FUN_140a5c51c(&local_410,param_2 + 0x1e8);
  local_c0 = local_418;
  local_d0 = local_428;
  uStack_cc = uStack_424;
  uStack_c8 = uStack_420;
  uStack_c4 = uStack_41c;
  FUN_144a450dc(local_b8,&local_410);
  FUN_1449db362(&local_410);
  local_448 = *(undefined1 *)(param_2 + 0x230);
  local_458 = *(undefined4 *)(param_2 + 0x220);
  uStack_454 = *(undefined4 *)(param_2 + 0x224);
  uStack_450 = *(undefined4 *)(param_2 + 0x228);
  uStack_44c = *(undefined4 *)(param_2 + 0x22c);
  local_440 = 0;
  local_438 = 0;
  FUN_140a51be2(&local_440,param_2 + 0x238);
  local_e8 = local_448;
  local_f8 = local_458;
  uStack_f4 = uStack_454;
  uStack_f0 = uStack_450;
  uStack_ec = uStack_44c;
  FUN_144a450dc(local_e0,&local_440);
  FUN_1449db362(&local_440);
  plVar7 = local_1b8;
  local_1c0 = *(undefined8 *)(param_2 + 0x248);
  plVar8 = *(longlong **)(param_2 + 0x250);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar8 + 8) = *(int *)((longlong)plVar8 + 8) + 1;
    UNLOCK();
  }
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar6 = (undefined8 *)*local_1b8;
      local_1b8 = plVar8;
      (*(code *)*puVar6)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar8 = local_1b8;
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        plVar8 = local_1b8;
      }
    }
  }
  local_1b8 = plVar8;
  FUN_140a5a2ee(param_1,local_368);
  FUN_140a59028(local_368);
  if ((local_38 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa56f4 FUN_146aa56f4 body=1116 status=ok
// SIG undefined FUN_146aa56f4(void)

void FUN_146aa56f4(longlong param_1,undefined8 param_2,undefined8 *param_3,float *param_4,
                  undefined8 param_5,int param_6,float *param_7,undefined1 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  uint uVar10;
  float *pfVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  float *local_130;
  float *local_128;
  undefined1 local_120;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint local_f8;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  float local_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined8 local_ac;
  byte local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(longlong *)(param_1 + 0x2a0) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x2a0) + 0x1c) != '\0')) {
    fVar13 = *(float *)((longlong)param_3 + 4) * 2.5;
    if (220.0 <= fVar13) {
      fVar13 = 220.0;
    }
    lVar12 = *(longlong *)(param_1 + 0x2a8);
    pfVar11 = (float *)(lVar12 + 8);
    cVar9 = *(char *)(lVar12 + 0x18);
    local_110 = param_2;
    if (cVar9 != '\0') {
      if (cVar9 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
        lVar12 = *(longlong *)(param_1 + 0x2a8);
      }
      else if (cVar9 == '\x03') {
        pfVar11 = param_7 + 8;
      }
      else {
        pfVar11 = param_7 + 4;
      }
    }
    if (fVar13 <= 130.0) {
      fVar13 = 130.0;
    }
    fStack_fc = pfVar11[3] * param_7[3];
    fStack_100 = pfVar11[2] * param_7[2];
    fStack_104 = pfVar11[1] * param_7[1];
    local_108 = *pfVar11 * *param_7;
    local_130 = &local_108;
    local_c4 = *param_3;
    local_d8 = *(undefined8 *)((longlong)param_3 + 0xc);
    local_d0 = *(float *)(param_3 + 1);
    local_cc = 0;
    local_bc = *(float *)((longlong)param_3 + 0x1c);
    fStack_b8 = *(float *)(param_3 + 4);
    fStack_b4 = *(float *)((longlong)param_3 + 0x24);
    fStack_b0 = *(float *)(param_3 + 5);
    local_ac = *(undefined8 *)((longlong)param_3 + 0x2c);
    local_a4 = *(char *)((longlong)param_3 + 0x34) * '\x02' & 2;
    local_138 = local_138 & 0xffffffffffffff00;
    FUN_140239bd2(param_5,param_6,&local_d8,lVar12);
    fStack_fc = param_4[3] + -2.0;
    fStack_100 = param_4[2] + -2.0;
    fStack_104 = param_4[1] + 2.0;
    local_108 = *param_4 + 2.0;
    pfVar11 = &local_108;
    FUN_1428665c2(&local_d8,pfVar11);
    FUN_1400d7f4c(param_5,&local_d8);
    fVar1 = *(float *)(param_1 + 700);
    fVar2 = param_7[3];
    fVar3 = *(float *)(param_1 + 0x2b8);
    fVar4 = param_7[2];
    fVar5 = *(float *)(param_1 + 0x2b4);
    fVar6 = param_7[1];
    fVar7 = *(float *)(param_1 + 0x2b0);
    fVar8 = *param_7;
    local_f8 = *(uint *)(param_1 + 0x280);
    local_108 = *(float *)(param_1 + 0x270);
    fStack_104 = (float)*(undefined4 *)(param_1 + 0x274);
    fStack_100 = (float)*(undefined4 *)(param_1 + 0x278);
    fStack_fc = (float)*(undefined4 *)(param_1 + 0x27c);
    uVar10 = *(uint *)(param_1 + 0x280) & 0xff;
    if (uVar10 != 0) {
      if (uVar10 == 1) {
        pfVar11 = (float *)FUN_1400c06fe(&local_108);
      }
      else if (uVar10 == 3) {
        pfVar11 = param_7 + 8;
      }
      else {
        pfVar11 = param_7 + 4;
      }
    }
    local_dc = fVar1 * fVar2 * pfVar11[3];
    local_e0 = fVar3 * fVar4 * pfVar11[2];
    local_e4 = fVar5 * fVar6 * pfVar11[1];
    local_e8 = fVar7 * fVar8 * *pfVar11;
    local_130 = &local_e8;
    local_d0 = *(float *)(param_3 + 1);
    fVar1 = *(float *)((longlong)param_3 + 0x1c);
    local_d8 = CONCAT44(*(float *)(param_3 + 2) + local_d0 * 4.0,
                        local_d0 * 4.0 + *(float *)((longlong)param_3 + 0xc));
    fVar2 = *(float *)(param_3 + 4);
    fVar3 = *(float *)(param_3 + 5);
    fStack_b0 = fVar2 * 0.0 + fVar3;
    fStack_b8 = fVar3 * 0.0 + fVar2;
    fVar4 = *(float *)((longlong)param_3 + 0x24);
    local_c4 = CONCAT44(fVar13,fVar13);
    fStack_b4 = fVar1 * 0.0 + fVar4;
    local_bc = fVar4 * 0.0 + fVar1;
    local_cc = 0;
    local_ac = CONCAT44(fVar2 * 4.0 + fVar3 * 4.0 + *(float *)(param_3 + 6),
                        fVar1 * 4.0 + fVar4 * 4.0 + *(float *)((longlong)param_3 + 0x2c));
    local_a4 = local_a4 & 0xfc | *(char *)((longlong)param_3 + 0x34) * '\x02' & 2U;
    local_138 = local_138 & 0xffffffffffffff00;
    FUN_140239bd2(param_5,param_6 + 1,&local_d8,*(undefined8 *)(param_1 + 0x2a0));
    FUN_14171ebf2(param_5);
    param_2 = local_110;
  }
  local_120 = param_8;
  local_128 = param_7;
  local_130 = (float *)CONCAT44(local_130._4_4_,param_6 + 2);
  local_138 = param_5;
  FUN_14023976a(param_1,param_2,param_3,param_4);
  if ((local_a0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa5b52 FUN_146aa5b52 body=2541 status=ok
// SIG undefined FUN_146aa5b52(void)

undefined8 * FUN_146aa5b52(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_488 [32];
  longlong *local_468;
  undefined4 local_460;
  undefined1 local_458;
  undefined8 local_450;
  undefined4 local_448;
  longlong *local_440;
  undefined4 local_438;
  undefined1 local_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined2 local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined8 local_400;
  int local_3f8;
  undefined4 local_3f4;
  longlong *local_3f0;
  undefined4 local_3e8;
  undefined1 local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  longlong *local_3c8;
  undefined4 local_3c0;
  undefined1 local_3b8;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined1 local_391;
  undefined1 local_390 [8];
  longlong *local_388;
  undefined4 local_378;
  undefined1 local_374;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  undefined1 local_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined1 local_344;
  undefined8 local_340;
  undefined8 uStack_338;
  longlong local_330;
  longlong local_328;
  longlong *local_320;
  longlong *local_318;
  undefined1 local_310 [8];
  undefined1 local_308 [416];
  undefined4 local_168;
  undefined1 local_164;
  undefined1 local_160 [16];
  undefined4 local_150;
  undefined1 local_14c;
  undefined1 local_148 [16];
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_130 [16];
  undefined4 local_120;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined1 local_f2;
  undefined4 local_f0;
  undefined2 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [56];
  undefined1 local_98 [56];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_488;
  lVar5 = FUN_1413f66b6();
  if (*(char *)(lVar5 + 0x68) == '\x01') {
    if (*param_3 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c98ffd0) && (FUN_144b3d300(&DAT_14c98ffd0), DAT_14c98ffd0 == -1))
      {
        plVar6 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
        if (plVar6 == (longlong *)0x0) {
          plVar6 = DAT_14c96b350;
        }
        FUN_1446ddc76(&local_3a0,"UnrealCircle.Thick",1);
        DAT_14c98ffc8 = (**(code **)(*plVar6 + 0x50))(plVar6,local_3a0,0,0);
        _Init_thread_footer(&DAT_14c98ffd0);
      }
      FUN_146aa6710(local_310);
      local_3c8 = (longlong *)param_3[2];
      if (local_3c8 != (longlong *)0x0) {
        (**(code **)(*local_3c8 + 8))();
      }
      local_3c0 = (undefined4)param_3[3];
      local_3b8 = (undefined1)param_3[4];
      local_3b0 = 0;
      local_3a8 = 0;
      FUN_1413a4324(&local_3b0,param_3 + 5);
      FUN_146aa67f4(local_310,&local_3c8);
      local_3f0 = (longlong *)param_3[7];
      if (local_3f0 != (longlong *)0x0) {
        (**(code **)(*local_3f0 + 8))();
      }
      local_3e8 = (undefined4)param_3[8];
      local_3e0 = (undefined1)param_3[9];
      local_3d8 = 0;
      local_3d0 = 0;
      FUN_1413a4324(&local_3d8,param_3 + 10);
      FUN_146aa684a(local_310,&local_3f0);
      local_400 = 0;
      iVar4 = (int)param_3[0xd];
      lVar5 = param_3[0xc];
      local_3f8 = iVar4;
      if (iVar4 == 0) {
        local_3f4 = 0;
      }
      else {
        FUN_146aa7ce4(&local_400,iVar4,0);
        FUN_146aa7d5a(local_400,lVar5,iVar4);
      }
      FUN_146aa68a0(local_310,&local_400);
      local_108 = param_3[0xe];
      if (param_3[0xe] == 0) {
        local_108 = DAT_14c98ffc8;
      }
      local_100 = (undefined4)param_3[0xf];
      local_f8 = (undefined4)param_3[0x10];
      local_fc = *(undefined4 *)((longlong)param_3 + 0x7c);
      local_f4 = *(undefined1 *)((longlong)param_3 + 0x84);
      local_f3 = *(undefined1 *)((longlong)param_3 + 0x85);
      local_f2 = *(undefined1 *)((longlong)param_3 + 0x86);
      local_f0 = (undefined4)param_3[0x11];
      local_418 = (undefined2)param_3[0x12];
      local_410 = 0;
      local_408 = 0;
      FUN_1469eaea6(&local_410,param_3 + 0x13);
      local_e8 = local_418;
      FUN_144a450dc(local_e0,&local_410);
      FUN_1449db362(&local_410);
      FUN_146a75c0a(local_d0,param_3 + 0x15);
      local_440 = (longlong *)param_3[0x17];
      if (local_440 != (longlong *)0x0) {
        (**(code **)(*local_440 + 8))();
      }
      local_438 = (undefined4)param_3[0x18];
      local_430 = (undefined1)param_3[0x19];
      local_428 = 0;
      local_420 = 0;
      FUN_1413a4324(&local_428,param_3 + 0x1a);
      FUN_146aa68da(local_310,&local_440);
      FUN_14009d848(local_98,param_3 + 0x1c);
      local_468 = (longlong *)param_3[0x1e];
      if (local_468 != (longlong *)0x0) {
        (**(code **)(*local_468 + 8))();
      }
      local_460 = (undefined4)param_3[0x1f];
      local_458 = (undefined1)param_3[0x20];
      local_450 = 0;
      local_448 = 0;
      FUN_1413a4324(&local_450,param_3 + 0x21);
      FUN_146aa6930(local_310,&local_468);
      FUN_146acc8b6(local_390,0x331,&local_391);
      FUN_146aa6986(local_390,&local_320,local_310);
      if (local_318 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_318 + 1) = (int)local_318[1] + 1;
        UNLOCK();
        if (local_318 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_318 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_318)(local_318);
            LOCK();
            piVar1 = (int *)((longlong)local_318 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_318 + 0x10))(local_318);
            }
          }
        }
      }
      if (local_388 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_388 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_388)(local_388);
          LOCK();
          piVar1 = (int *)((longlong)local_388 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_388 + 0x10))(local_388);
          }
        }
      }
      FUN_146aa69fa(local_310);
      plVar6 = local_318;
      plVar9 = local_320;
    }
    else {
      FUN_146aa6540(local_310);
      local_330 = *param_3;
      local_328 = param_3[1];
      if (local_328 != 0) {
        LOCK();
        *(int *)(local_328 + 8) = *(int *)(local_328 + 8) + 1;
        UNLOCK();
      }
      FUN_146aa65b2(local_310,&local_330);
      local_348 = (undefined4)param_3[0xf];
      local_344 = 1;
      local_340 = 0;
      uStack_338 = 0;
      local_164 = 1;
      local_168 = local_348;
      FUN_144a450dc(local_160,&local_340);
      FUN_1449db362(&local_340);
      local_360 = (undefined4)param_3[0x10];
      local_35c = 1;
      local_358 = 0;
      uStack_350 = 0;
      local_134 = 1;
      local_138 = local_360;
      FUN_144a450dc(local_130,&local_358);
      FUN_1449db362(&local_358);
      local_378 = *(undefined4 *)((longlong)param_3 + 0x7c);
      local_374 = 1;
      local_370 = 0;
      uStack_368 = 0;
      local_14c = 1;
      local_150 = local_378;
      FUN_144a450dc(local_148,&local_370);
      FUN_1449db362(&local_370);
      local_120 = (undefined4)param_3[0x11];
      FUN_146ac8f1c(local_390,&local_391);
      FUN_146aa6638(local_390,&local_320,local_310);
      if (local_318 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_318 + 1) = (int)local_318[1] + 1;
        UNLOCK();
        if (local_318 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_318 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_318)(local_318);
            LOCK();
            piVar1 = (int *)((longlong)local_318 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_318 + 0x10))(local_318);
            }
          }
        }
      }
      if (local_388 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_388 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_388)(local_388);
          LOCK();
          piVar1 = (int *)((longlong)local_388 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_388 + 0x10))(local_388);
          }
        }
      }
      FUN_146aa66ac(local_310);
      plVar6 = local_318;
      plVar9 = local_320;
    }
    plVar8 = *(longlong **)(param_1 + 0x10);
    bVar2 = true;
    if (plVar8 == (longlong *)0x0) {
LAB_146aa6309:
      lVar5 = 0;
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar8[1];
      do {
        if (iVar4 == 0) goto LAB_146aa6309;
        LOCK();
        iVar3 = (int)plVar8[1];
        bVar10 = iVar4 == iVar3;
        if (bVar10) {
          *(int *)(plVar8 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar10);
      lVar5 = *(longlong *)(param_1 + 8);
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      bVar2 = false;
    }
    plVar9[0x4d] = lVar5;
    plVar7 = (longlong *)plVar9[0x4e];
    if (plVar7 != plVar8) {
      if (!bVar2) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)plVar9[0x4e];
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
      plVar9[0x4e] = (longlong)plVar8;
    }
    if (!bVar2) {
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    FUN_140767c14(*(undefined8 *)(param_1 + 0x268),local_310,0xffffffff);
    lVar5 = FUN_145aaf900(local_308);
    *(undefined4 *)(lVar5 + 0x40) = 3;
    *(undefined1 *)(lVar5 + 0x44) = 1;
    if (plVar6 == (longlong *)0x0) {
      local_388 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      local_388 = plVar6;
    }
    FUN_145aaf878(lVar5,local_390);
    plVar8 = local_388;
    if (local_388 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_388 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_388)(local_388);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_140767802(local_310);
    FUN_146aa6ace(plVar9,(char)param_3[0x25]);
    if (*(char *)((longlong)param_3 + 0x8c) == '\x01') {
      (**(code **)(*plVar9 + 0x280))(plVar9);
    }
  }
  else {
    FUN_146aa6710(local_310);
    FUN_146acc8b6(local_390,0x357,&local_391);
    FUN_146aa6986(local_390,&local_320,local_310);
    if (local_318 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_318 + 1) = (int)local_318[1] + 1;
      UNLOCK();
      if (local_318 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_318 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_318)(local_318);
          LOCK();
          piVar1 = (int *)((longlong)local_318 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_318 + 0x10))(local_318);
          }
        }
      }
    }
    plVar6 = local_388;
    if (local_388 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_388 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_388)(local_388);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_146aa69fa(local_310);
    plVar6 = local_318;
    plVar9 = local_320;
  }
  if (plVar6 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0x290) = plVar9;
    plVar8 = *(longlong **)(param_1 + 0x298);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x298) = 0;
LAB_146aa5d96:
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      if (plVar6 != (longlong *)0x0) goto LAB_146aa5db8;
    }
    *param_2 = plVar9;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x290) = plVar9;
    plVar8 = *(longlong **)(param_1 + 0x298);
    if (plVar6 == plVar8) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x298) = plVar6;
      if (plVar8 != (longlong *)0x0) goto LAB_146aa5d96;
    }
LAB_146aa5db8:
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = plVar9;
    param_2[1] = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146aa6540 FUN_146aa6540 body=113 status=ok
// SIG undefined FUN_146aa6540(void)

longlong FUN_146aa6540(longlong param_1)

{
  FUN_140a5071c();
  *(undefined4 *)(param_1 + 0x1a8) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0x40000000;
  *(undefined1 *)(param_1 + 0x1c4) = 1;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  return param_1;
}



// FUNCTION 146aa65b2 FUN_146aa65b2 body=133 status=ok
// SIG undefined FUN_146aa65b2(void)

longlong FUN_146aa65b2(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x1f8) = uVar3;
  *(longlong *)(param_1 + 0x200) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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



// FUNCTION 146aa6638 FUN_146aa6638 body=115 status=ok
// SIG undefined FUN_146aa6638(void)

longlong * FUN_146aa6638(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146aca29a(*param_1,param_3);
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



// FUNCTION 146aa66ac FUN_146aa66ac body=100 status=ok
// SIG undefined FUN_146aa66ac(void)

void FUN_146aa66ac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x200);
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
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1c8);
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146aa6710 FUN_146aa6710 body=228 status=ok
// SIG undefined FUN_146aa6710(void)

longlong FUN_146aa6710(longlong param_1)

{
  FUN_140a5071c();
  FUN_144a5dc74(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  FUN_144a5dc74(param_1 + 0x1d0);
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0x400000003f000000;
  *(undefined4 *)(param_1 + 0x218) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x220) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x23c) = 0;
  *(undefined8 *)(param_1 + 0x244) = 0;
  FUN_144a5dc74(param_1 + 0x250);
  *(undefined1 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x274) = 0;
  *(undefined8 *)(param_1 + 0x27c) = 0;
  FUN_144a5dc74(param_1 + 0x288);
  *(undefined1 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  return param_1;
}



// FUNCTION 146aa67f4 FUN_146aa67f4 body=86 status=ok
// SIG undefined FUN_146aa67f4(void)

longlong FUN_146aa67f4(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x1a8);
  *(char *)(param_1 + 0x1b8) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x1c0,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146aa684a FUN_146aa684a body=86 status=ok
// SIG undefined FUN_146aa684a(void)

longlong FUN_146aa684a(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x1d0);
  *(char *)(param_1 + 0x1e0) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x1e8,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146aa68a0 FUN_146aa68a0 body=58 status=ok
// SIG undefined FUN_146aa68a0(void)

longlong FUN_146aa68a0(longlong param_1,longlong *param_2)

{
  FUN_146aa7c84(param_1 + 0x1f8);
  FUN_1469b2129(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146aa68da FUN_146aa68da body=86 status=ok
// SIG undefined FUN_146aa68da(void)

longlong FUN_146aa68da(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x250);
  *(char *)(param_1 + 0x260) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x268,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146aa6930 FUN_146aa6930 body=86 status=ok
// SIG undefined FUN_146aa6930(void)

longlong FUN_146aa6930(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x288);
  *(char *)(param_1 + 0x298) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x2a0,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146aa6986 FUN_146aa6986 body=115 status=ok
// SIG undefined FUN_146aa6986(void)

longlong * FUN_146aa6986(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146accb44(*param_1,param_3);
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



// FUNCTION 146aa69fa FUN_146aa69fa body=212 status=ok
// SIG undefined FUN_146aa69fa(void)

void FUN_146aa69fa(longlong param_1)

{
  FUN_1449db362(param_1 + 0x2a0);
  if (*(longlong **)(param_1 + 0x288) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x288) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x278);
  FUN_1449db362(param_1 + 0x268);
  if (*(longlong **)(param_1 + 0x250) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x250) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x230);
  FUN_1469b2129(*(undefined8 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x200));
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x1e8);
  if (*(longlong **)(param_1 + 0x1d0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x1c0);
  if (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146aa6ace FUN_146aa6ace body=854 status=ok
// SIG undefined FUN_146aa6ace(void)

void FUN_146aa6ace(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_88;
  longlong *local_80;
  undefined1 local_78;
  undefined1 local_77;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = DAT_14c96b238;
  local_77 = 1;
  local_70 = 0;
  uStack_68 = 0;
  FUN_14020e622();
  local_80 = *(longlong **)(param_1 + 0x10);
  if (local_80 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
    local_88 = 0;
  }
  else {
    iVar6 = (int)local_80[1];
    local_88 = 0;
    do {
      if (iVar6 == 0) {
        local_80 = (longlong *)0x0;
        goto LAB_146aa6b2d;
      }
      LOCK();
      iVar4 = (int)local_80[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(local_80 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar9);
    local_88 = *(undefined8 *)(param_1 + 8);
  }
LAB_146aa6b2d:
  FUN_14285ff5a(&local_f8);
  lVar3 = param_1 + 0x368;
  FUN_146980d02(lVar3,&local_f8);
  FUN_1402bc42a(&local_f8);
  if (((*(int *)(param_1 + 0x2d8) != 0) && (*(longlong **)(param_1 + 0x2d0) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x30))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x2d8) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(param_1 + 0x2d0);
    }
    uVar10 = (**(code **)(*plVar8 + 0x58))();
    *(undefined4 *)(param_1 + 0x2c8) = uVar10;
  }
  local_108 = 0;
  FUN_14692f186(lVar3,&local_f8,0,*(undefined4 *)(param_1 + 0x2c8));
  *(undefined4 *)(param_1 + 0x3d8) = local_f8;
  *(undefined4 *)(param_1 + 0x3dc) = uStack_f4;
  *(undefined4 *)(param_1 + 0x3e0) = uStack_f0;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_ec;
  local_108 = 1;
  FUN_14692f220(lVar3,&local_88,0,0);
  FUN_14692f10e(&local_f8,0,0x3f800000,0);
  FUN_146980d02(param_1 + 0x488,&local_f8);
  FUN_1402bc42a(&local_f8);
  local_108 = 1;
  FUN_14692f220(param_1 + 0x488,&local_88,1,0);
  FUN_14285ff5a(&local_f8);
  lVar3 = param_1 + 1000;
  FUN_146980d02(lVar3,&local_f8);
  FUN_1402bc42a(&local_f8);
  local_108 = 2;
  FUN_14692f186(lVar3,&local_f8,0x3e4ccccd,0x3e99999a);
  *(undefined4 *)(param_1 + 0x458) = local_f8;
  *(undefined4 *)(param_1 + 0x45c) = uStack_f4;
  *(undefined4 *)(param_1 + 0x460) = uStack_f0;
  *(undefined4 *)(param_1 + 0x464) = uStack_ec;
  local_108 = 0;
  FUN_14692f186(lVar3,&local_f8,0,0x3e4ccccd);
  *(undefined4 *)(param_1 + 0x468) = local_f8;
  *(undefined4 *)(param_1 + 0x46c) = uStack_f4;
  *(undefined4 *)(param_1 + 0x470) = uStack_f0;
  *(undefined4 *)(param_1 + 0x474) = uStack_ec;
  local_108 = 2;
  FUN_14692f186(lVar3,&local_f8,0x3f000000,0x3f0ccccd);
  *(undefined4 *)(param_1 + 0x478) = local_f8;
  *(undefined4 *)(param_1 + 0x47c) = uStack_f4;
  *(undefined4 *)(param_1 + 0x480) = uStack_f0;
  *(undefined4 *)(param_1 + 0x484) = uStack_ec;
  local_108 = 1;
  FUN_14692f220(lVar3,&local_88,0,0);
  if (((*(int *)(param_1 + 0x2d8) != 0) && (*(longlong **)(param_1 + 0x2d0) != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x30))(), cVar5 != '\0')) {
    if (*(int *)(param_1 + 0x2d8) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(param_1 + 0x2d0);
    }
    uVar10 = (**(code **)(*plVar8 + 0x58))();
    *(undefined4 *)(param_1 + 0x2c8) = uVar10;
  }
  if (((param_2 == '\x01' && 0.0001 < *(float *)(param_1 + 0x2c8)) &&
      (*(int *)(param_1 + 0x568) == -1)) && (cVar5 = FUN_1469a8300(DAT_14c98e618), cVar5 == '\0')) {
    uVar7 = FUN_14171dbb4();
    FUN_14692fd52(uVar7,&local_f8);
    *(undefined4 *)(param_1 + 0x568) = local_f8;
  }
  plVar8 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146aa6e26 FUN_146aa6e26 body=169 status=ok
// SIG undefined FUN_146aa6e26(void)

void FUN_146aa6e26(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x278) == 0) || (*(longlong *)(param_1 + 0x280) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x280) + 8) < 1)) {
    uVar3 = *(undefined8 *)(param_1 + 0x268);
    local_20 = *param_2;
    local_18 = (longlong *)param_2[1];
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    FUN_1469779b4(uVar3,&local_20);
    plVar4 = local_18;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
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
  else {
    *(undefined1 *)(param_1 + 0x288) = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa6ed0 FUN_146aa6ed0 body=394 status=ok
// SIG undefined FUN_146aa6ed0(void)

void FUN_146aa6ed0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_238 [32];
  undefined1 *local_218;
  undefined1 local_209;
  undefined8 local_208;
  longlong *local_200;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0 [440];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *(undefined1 *)(param_1 + 0x288) = 0;
  FUN_1407679b0(local_1d0);
  local_218 = &local_209;
  FUN_14076837c(&local_208,"SVerticalBox",
                ".\\Runtime/Slate/Private/Widgets/Notifications/SNotificationList.cpp",0x377);
  if (local_200 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_200 + 1) = (int)local_200[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = local_208;
  *(longlong **)(param_1 + 0x270) = local_200;
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
  FUN_14076784c(&local_208,&local_1f0,local_1d0);
  local_1e0 = local_1f0;
  local_1d8 = local_1e8;
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_1e0);
  plVar3 = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1d8)(local_1d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar2 = (int *)((longlong)local_1e8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1e8 + 0x10))(local_1e8);
      }
    }
  }
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_200 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar2 = (int *)((longlong)local_200 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_200 + 0x10))(local_200);
      }
    }
  }
  FUN_14149255e(local_1d0);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa705c FUN_146aa705c body=38 status=ok
// SIG undefined FUN_146aa705c(void)

undefined8 FUN_146aa705c(undefined8 param_1,int param_2)

{
  FUN_146a84a5a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa7088 FUN_146aa7088 body=79 status=ok
// SIG undefined FUN_146aa7088(void)

undefined8 * FUN_146aa7088(undefined8 *param_1,int param_2)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa70d8 FUN_146aa70d8 body=21 status=ok
// SIG undefined FUN_146aa70d8(void)

undefined8 * FUN_146aa70d8(void)

{
  FUN_145b26214();
  return &DAT_14c990018;
}



// FUNCTION 146aa70ee FUN_146aa70ee body=63 status=ok
// SIG undefined FUN_146aa70ee(void)

undefined8 * FUN_146aa70ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa712e FUN_146aa712e body=63 status=ok
// SIG undefined FUN_146aa712e(void)

undefined8 * FUN_146aa712e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f14520;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa716e FUN_146aa716e body=38 status=ok
// SIG undefined FUN_146aa716e(void)

undefined8 FUN_146aa716e(undefined8 param_1,int param_2)

{
  FUN_1414c05ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa7194 FUN_146aa7194 body=63 status=ok
// SIG undefined FUN_146aa7194(void)

undefined8 * FUN_146aa7194(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f149b0;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa71d4 FUN_146aa71d4 body=63 status=ok
// SIG undefined FUN_146aa71d4(void)

undefined8 * FUN_146aa71d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa7214 FUN_146aa7214 body=38 status=ok
// SIG undefined FUN_146aa7214(void)

undefined8 FUN_146aa7214(undefined8 param_1,int param_2)

{
  FUN_142902706();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa723a FUN_146aa723a body=21 status=ok
// SIG undefined FUN_146aa723a(void)

undefined8 * FUN_146aa723a(void)

{
  FUN_145a5ea32();
  return &DAT_14c9900d8;
}



// FUNCTION 146aa7250 FUN_146aa7250 body=38 status=ok
// SIG undefined FUN_146aa7250(void)

undefined8 FUN_146aa7250(undefined8 param_1,int param_2)

{
  FUN_1429064d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa7276 FUN_146aa7276 body=38 status=ok
// SIG undefined FUN_146aa7276(void)

undefined8 FUN_146aa7276(undefined8 param_1,int param_2)

{
  FUN_145bfe4ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa729c FUN_146aa729c body=38 status=ok
// SIG undefined FUN_146aa729c(void)

undefined8 FUN_146aa729c(undefined8 param_1,int param_2)

{
  FUN_145bfd3f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa72c2 FUN_146aa72c2 body=38 status=ok
// SIG undefined FUN_146aa72c2(void)

undefined8 FUN_146aa72c2(undefined8 param_1,int param_2)

{
  FUN_146a9631e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa72e8 FUN_146aa72e8 body=38 status=ok
// SIG undefined FUN_146aa72e8(void)

undefined8 FUN_146aa72e8(undefined8 param_1,int param_2)

{
  FUN_140c057ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa730e FUN_146aa730e body=38 status=ok
// SIG undefined FUN_146aa730e(void)

undefined8 FUN_146aa730e(undefined8 param_1,int param_2)

{
  FUN_142903802();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa7334 FUN_146aa7334 body=38 status=ok
// SIG undefined FUN_146aa7334(void)

undefined8 FUN_146aa7334(undefined8 param_1,int param_2)

{
  FUN_142903844();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa735a FUN_146aa735a body=21 status=ok
// SIG undefined FUN_146aa735a(void)

undefined8 * FUN_146aa735a(void)

{
  FUN_146281bdc();
  return &DAT_14c9901d8;
}



// FUNCTION 146aa7370 FUN_146aa7370 body=38 status=ok
// SIG undefined FUN_146aa7370(void)

undefined8 FUN_146aa7370(undefined8 param_1,int param_2)

{
  FUN_142903886();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa73b8 FUN_146aa73b8 body=56 status=ok
// SIG undefined FUN_146aa73b8(void)

void FUN_146aa73b8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146aa73e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146aa73f0 FUN_146aa73f0 body=38 status=ok
// SIG undefined FUN_146aa73f0(void)

undefined8 FUN_146aa73f0(undefined8 param_1,int param_2)

{
  FUN_146aa22e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa7416 FUN_146aa7416 body=38 status=ok
// SIG undefined FUN_146aa7416(void)

undefined8 FUN_146aa7416(undefined8 param_1,int param_2)

{
  FUN_1429039b8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa743c FUN_146aa743c body=21 status=ok
// SIG undefined FUN_146aa743c(void)

undefined8 * FUN_146aa743c(void)

{
  FUN_146281c8c();
  return &DAT_14c990218;
}



// FUNCTION 146aa7452 FUN_146aa7452 body=38 status=ok
// SIG undefined FUN_146aa7452(void)

undefined8 FUN_146aa7452(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa7480 FUN_146aa7480 body=130 status=ok
// SIG undefined FUN_146aa7480(void)

void FUN_146aa7480(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa7504 FUN_146aa7504 body=42 status=ok
// SIG undefined FUN_146aa7504(void)

longlong FUN_146aa7504(longlong param_1,int param_2)

{
  FUN_140cc7538(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa75ac FUN_146aa75ac body=42 status=ok
// SIG undefined FUN_146aa75ac(void)

longlong FUN_146aa75ac(longlong param_1,int param_2)

{
  FUN_140cc7538(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa7671 FUN_146aa7671 body=52 status=ok
// SIG undefined FUN_146aa7671(void)

void FUN_146aa7671(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146aa7741 FUN_146aa7741 body=52 status=ok
// SIG undefined FUN_146aa7741(void)

void FUN_146aa7741(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146aa7776 FUN_146aa7776 body=52 status=ok
// SIG undefined FUN_146aa7776(void)

void FUN_146aa7776(longlong *param_1)

{
  FUN_146aa77aa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146aa77aa FUN_146aa77aa body=89 status=ok
// SIG undefined FUN_146aa77aa(void)

void FUN_146aa77aa(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 146aa793b FUN_146aa793b body=52 status=ok
// SIG undefined FUN_146aa793b(void)

void FUN_146aa793b(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146aa7a0b FUN_146aa7a0b body=52 status=ok
// SIG undefined FUN_146aa7a0b(void)

void FUN_146aa7a0b(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146aa7aa8 FUN_146aa7aa8 body=42 status=ok
// SIG undefined FUN_146aa7aa8(void)

longlong FUN_146aa7aa8(longlong param_1,int param_2)

{
  FUN_140cc7538(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa7ad2 FUN_146aa7ad2 body=42 status=ok
// SIG undefined FUN_146aa7ad2(void)

longlong FUN_146aa7ad2(longlong param_1,int param_2)

{
  FUN_140cc7538(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa7afc FUN_146aa7afc body=42 status=ok
// SIG undefined FUN_146aa7afc(void)

longlong FUN_146aa7afc(longlong param_1,int param_2)

{
  FUN_140cc7538(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa7bc1 FUN_146aa7bc1 body=52 status=ok
// SIG undefined FUN_146aa7bc1(void)

void FUN_146aa7bc1(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146aa7bf6 FUN_146aa7bf6 body=52 status=ok
// SIG undefined FUN_146aa7bf6(void)

void FUN_146aa7bf6(longlong *param_1)

{
  FUN_146aa7c2a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146aa7c2a FUN_146aa7c2a body=89 status=ok
// SIG undefined FUN_146aa7c2a(void)

void FUN_146aa7c2a(longlong param_1)

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



// FUNCTION 146aa7c84 FUN_146aa7c84 body=95 status=ok
// SIG undefined FUN_146aa7c84(void)

undefined8 * FUN_146aa7c84(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1469b2129(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146aa7ce4(param_1,iVar1);
      FUN_146aa7d5a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146aa7ce4 FUN_146aa7ce4 body=118 status=ok
// SIG undefined FUN_146aa7ce4(void)

void FUN_146aa7ce4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x88,8);
    iVar2 = (int)(uVar1 / 0x88);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x88,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146aa7d5a FUN_146aa7d5a body=60 status=ok
// SIG undefined FUN_146aa7d5a(void)

void FUN_146aa7d5a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146a48e40(param_1,param_2);
    param_1 = param_1 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return;
}



// FUNCTION 146aa7d96 FUN_146aa7d96 body=72 status=ok
// SIG undefined FUN_146aa7d96(void)

bool FUN_146aa7d96(char *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  
  FUN_1400b73c8(param_2,param_1);
  cVar1 = *param_1;
  cVar2 = *param_3;
  if (cVar1 != cVar2) {
    *param_1 = cVar2;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return cVar1 != cVar2;
}



// FUNCTION 146aa7dde FUN_146aa7dde body=156 status=ok
// SIG undefined FUN_146aa7dde(void)

bool FUN_146aa7dde(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_146aa7e7c(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa7e7c FUN_146aa7e7c body=169 status=ok
// SIG undefined FUN_146aa7e7c(void)

void FUN_146aa7e7c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149f13570;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_140a52b3c(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_140eee99e(param_2,param_1,0,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa7f26 FUN_146aa7f26 body=38 status=ok
// SIG undefined FUN_146aa7f26(void)

undefined8 FUN_146aa7f26(undefined8 param_1,int param_2)

{
  FUN_140cc7538();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa7f4c FUN_146aa7f4c body=130 status=ok
// SIG undefined FUN_146aa7f4c(void)

void FUN_146aa7f4c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa7fd0 FUN_146aa7fd0 body=130 status=ok
// SIG undefined FUN_146aa7fd0(void)

void FUN_146aa7fd0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa8062 FUN_146aa8062 body=371 status=ok
// SIG undefined FUN_146aa8062(void)

longlong *
FUN_146aa8062(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x8d0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f175f0;
  plVar1 = plVar4 + 2;
  FUN_146aa81d6(plVar1,0);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_146ab6d8a(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146aa8169;
    param_1[1] = 0;
LAB_146aa812c:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146aa8169;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_146aa8169;
      goto LAB_146aa812c;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146aa8169;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_146aa8169:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x8c0;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa81d6 FUN_146aa81d6 body=690 status=ok
// SIG undefined FUN_146aa81d6(void)

undefined8 * FUN_146aa81d6(undefined8 *param_1)

{
  FUN_146af608e();
  *param_1 = &PTR_FUN_149f17610;
  param_1[0x4d] = &PTR_FUN_149f178f0;
  param_1[0x9b] = &PTR_LAB_149f17910;
  param_1[0x9c] = param_1;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = param_1;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7a4) = 0;
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d4) = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  *(undefined1 *)(param_1 + 0xfe) = 2;
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0x105] = 0;
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined2 *)(param_1 + 0x109) = 0x101;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x867) = 0;
  *(undefined1 *)((longlong)param_1 + 0x869) = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x87c) = 0;
  param_1[0x116] = 0;
  *(undefined8 *)((longlong)param_1 + 0x88d) = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined1 *)(param_1 + 0x115) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) | 4;
  return param_1;
}



// FUNCTION 146aa8488 FUN_146aa8488 body=9 status=ok
// SIG undefined FUN_146aa8488(void)

void FUN_146aa8488(longlong param_1)

{
  FUN_146aac586(param_1 + 0x10);
  return;
}



// FUNCTION 146aa8492 FUN_146aa8492 body=29 status=ok
// SIG undefined FUN_146aa8492(void)

undefined8 FUN_146aa8492(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa84b0 FUN_146aa84b0 body=38 status=ok
// SIG undefined FUN_146aa84b0(void)

undefined8 FUN_146aa84b0(undefined8 param_1,int param_2)

{
  FUN_146aac586();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aa84d6 FUN_146aa84d6 body=133 status=ok
// SIG undefined FUN_146aa84d6(void)

char * FUN_146aa84d6(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_1 + 0x840) != 0) && (*(longlong **)(param_1 + 0x838) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x840) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x838);
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3,param_4);
    if (*param_2 != '\0') {
      return param_2;
    }
    FUN_14493db24(param_2);
  }
  FUN_146aacdb2(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 146aa855c FUN_146aa855c body=348 status=ok
// SIG undefined FUN_146aa855c(void)

undefined1 * FUN_146aa855c(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x864) == '\x01') {
    if (((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0))
       || (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))(), cVar4 == '\0')) {
      iVar5 = *(int *)(param_1 + 0x390);
    }
    else {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x398);
      }
      iVar5 = (**(code **)(*plVar6 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar5;
    }
    if (iVar5 != 0) {
      lVar3 = *(longlong *)(param_4 + 0x40);
      plVar6 = *(longlong **)(param_4 + 0x50);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if ((lVar3 == DAT_14c966e98) && ((*(ushort *)(param_4 + 8) & 0xc) == 0)) {
        bVar7 = (*(ushort *)(param_4 + 8) & 3) == 0;
      }
      else {
        bVar7 = false;
      }
      if (plVar6 != (longlong *)0x0) {
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
      if (bVar7) {
        plVar6 = (longlong *)(param_1 + 0x4d8);
        iVar5 = (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x70))(plVar6);
        if (0 < iVar5) {
          (**(code **)(*plVar6 + 0x30))(plVar6);
          (**(code **)(*plVar6 + 0x40))(plVar6);
        }
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        return param_2;
      }
    }
  }
  FUN_146af49bc(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 146aa86b8 FUN_146aa86b8 body=298 status=ok
// SIG undefined FUN_146aa86b8(void)

undefined8 FUN_146aa86b8(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  
  if (*(char *)(param_1 + 0x864) != '\x01') goto LAB_146aa87a7;
  if ((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) {
LAB_146aa8721:
    iVar6 = *(int *)(param_1 + 0x390);
  }
  else {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar4 == '\0') goto LAB_146aa8721;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x398);
    }
    iVar6 = (**(code **)(*plVar7 + 0x58))();
    *(int *)(param_1 + 0x390) = iVar6;
  }
  if (iVar6 != 0) {
    lVar3 = *(longlong *)(param_4 + 0x40);
    plVar7 = *(longlong **)(param_4 + 0x50);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if ((lVar3 == DAT_14c966fa0) && ((*(byte *)(param_4 + 8) & 0xf) == 0)) {
      bVar5 = FUN_146af41be(param_1);
      bVar5 = bVar5 ^ 1;
    }
    else {
      bVar5 = 0;
    }
    if (plVar7 != (longlong *)0x0) {
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
    }
    if (bVar5 != 0) {
      plVar7 = (longlong *)(param_1 + 0x4d8);
      iVar6 = (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x70))(plVar7);
      if (0 < iVar6) {
        (**(code **)(*plVar7 + 0x30))(plVar7);
        (**(code **)(*plVar7 + 0x40))(plVar7,2);
      }
    }
  }
LAB_146aa87a7:
  FUN_146af4b8a(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 146aa87e2 FUN_146aa87e2 body=709 status=ok
// SIG undefined FUN_146aa87e2(void)

undefined8 FUN_146aa87e2(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60;
  int local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)param_1[0x116];
  if (((plVar4 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x866) == '\x01')) &&
     ((*(char *)((longlong)param_1 + 0x865) != '\0' || (*(char *)(param_4 + 0x21) != '\x01')))) {
    (**(code **)(*plVar4 + 8))(plVar4,&local_60);
    iVar6 = (**(code **)(*param_1 + 0x268))(param_1);
    lVar5 = param_1[0xea];
    if (lVar5 == 0) {
      iVar11 = -1;
    }
    else {
      plVar4 = (longlong *)param_1[0xeb];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      iVar11 = -1;
      if ((longlong)local_58 != 0) {
        lVar7 = 0;
        iVar8 = 0;
        do {
          iVar11 = iVar8;
          if (*(longlong *)(local_60 + lVar7) == lVar5) break;
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 0x10;
          iVar11 = -1;
        } while ((longlong)local_58 * 0x10 != lVar7);
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
    }
    cVar3 = *(char *)(param_4 + 0x20);
    iVar8 = *(int *)((longlong)param_1 + 0x3ec);
    if ((cVar3 == '\x02' && iVar8 == 1) || (cVar3 == '\0' && iVar8 == 0)) {
      uVar10 = (ulonglong)(uint)(iVar11 - iVar6);
    }
    else {
      if ((cVar3 != '\x03' || iVar8 != 1) && (cVar3 != '\x01' || iVar8 != 0)) goto LAB_146aa882f;
      uVar9 = iVar11 + iVar6;
      uVar10 = (ulonglong)uVar9;
      if (0 < local_58 && (local_58 <= (int)uVar9 || (int)uVar9 < 0)) {
        fVar12 = (float)local_58 / (float)iVar6;
        fVar13 = (float)(iVar11 + 1) / (float)iVar6;
        if ((int)ROUND(-0.5 - (fVar12 + fVar12)) >> 1 < (int)ROUND(-0.5 - (fVar13 + fVar13)) >> 1) {
          uVar9 = local_58 - 1;
        }
        uVar10 = (ulonglong)uVar9;
      }
    }
    iVar6 = (int)uVar10;
    if (((-1 < iVar6) && (iVar6 < local_58)) && (*(char *)((longlong)param_1 + 0x3e9) == '\x01')) {
      local_88 = iVar11 <= iVar6;
      FUN_146aad986(param_1,&local_50,uVar10 * 0x10 + local_60);
      if (local_50 != -1) {
        (**(code **)(*param_1 + 0x2d8))(param_1,&local_50,param_4);
        local_78 = 0;
        uStack_70 = 0;
        FUN_146a35cca(param_2);
        if ((local_50 != -1) && (local_48 != (longlong *)0x0)) {
          LOCK();
          plVar4 = local_48 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
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
        goto LAB_146aa8840;
      }
    }
  }
LAB_146aa882f:
  FUN_145bff8f6(param_1,param_2,param_3,param_4);
LAB_146aa8840:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146aa8aa8 FUN_146aa8aa8 body=451 status=ok
// SIG undefined FUN_146aa8aa8(void)

longlong * FUN_146aa8aa8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_146aa8ae6:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_146aa8ae6;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
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
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar3;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_146aadb3a(lVar6,&local_48,0xc);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_146aa8c25;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_146aa8c25;
LAB_146aa8b88:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_146aa8c25;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar6 + 8) = lVar6;
    if (*(longlong **)(lVar6 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_146aa8b88;
      *(longlong **)(lVar6 + 0x10) = plVar7;
    }
  }
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_146aa8c25:
  if (!bVar9) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146aa8c6c FUN_146aa8c6c body=83 status=ok
// SIG undefined FUN_146aa8c6c(void)

undefined1 FUN_146aa8c6c(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x858) != 0) && (*(longlong **)(param_1 + 0x850) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x850) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x858) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x850);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x848) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x848);
}



// FUNCTION 146aa8cc0 FUN_146aa8cc0 body=203 status=ok
// SIG undefined FUN_146aa8cc0(void)

undefined8 FUN_146aa8cc0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c990268) {
    FUN_144b3d300(&DAT_14c990268);
    if (DAT_14c990268 == -1) {
      FUN_140056680(&DAT_14c990258,L"List");
      atexit((_func_5014 *)&LAB_142903f34);
      _Init_thread_footer(&DAT_14c990268);
    }
  }
  FUN_140009b9a(local_28,&DAT_14c990258);
  FUN_14023423e(param_2,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa8d8c FUN_146aa8d8c body=50 status=ok
// SIG undefined FUN_146aa8d8c(void)

void FUN_146aa8d8c(longlong *param_1)

{
  FUN_146aae03c(param_1 + 0x9c);
  FUN_146aae03c(param_1 + 0xb6);
                    /* WARNING: Could not recover jumptable at 0x000146aa8db7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x240))(param_1);
  return;
}



// FUNCTION 146aa8dbe FUN_146aa8dbe body=1859 status=ok
// SIG undefined FUN_146aa8dbe(void)

void FUN_146aa8dbe(longlong *param_1,undefined8 param_2,float param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  char cVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined1 local_15c [4];
  float local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar13 = (double)param_1[0x5e];
  if ((param_4 != '\x01') ||
     (((0.0 <= param_3 || (9.999999747378752e-05 <= dVar13)) &&
      ((param_3 <= 0.0 || ((char)param_1[0x66] == '\0')))))) {
    fVar18 = ABS(param_3);
    if ((dVar13 != 0.0) || (NAN(dVar13))) {
      cVar6 = '\0';
    }
    else {
      cVar6 = (char)param_1[0x66];
    }
    uVar9 = (uint)(double)param_1[0x5d];
    if (param_4 == '\0') {
      cVar4 = FUN_1469ffeec((longlong)param_1 + 0x4c4,-(dVar13 == 0.0) & 1,(char)param_1[0x66]);
      if (cVar4 != '\0') {
        fVar18 = (float)FUN_1469ffd82((longlong)param_1 + 0x4c4,param_2);
        if ((fVar18 != 0.0) || (NAN(fVar18))) {
          FUN_146af42a2(param_1);
        }
        goto LAB_146aa9195;
      }
    }
    if (cVar6 == '\0') {
      plVar5 = (longlong *)param_1[0x116];
      if (plVar5 == (longlong *)0x0) {
        local_100 = 0;
        local_f8 = 0;
      }
      else {
        (**(code **)(*plVar5 + 8))(plVar5,&local_100);
        if (0 < (int)local_f8) {
          do {
            if ((((fVar18 == 0.0) && (!NAN(fVar18))) || ((int)uVar9 < 0)) ||
               ((int)local_f8 <= (int)uVar9)) break;
            if (*(longlong *)(local_100 + (ulonglong)uVar9 * 0x10) == 0) {
              uVar9 = uVar9 + 1;
              iVar7 = 2;
            }
            else {
              puVar8 = (undefined8 *)(local_100 + (ulonglong)uVar9 * 0x10);
              FUN_146aad6fc(param_1 + 0x9c,&local_110,puVar8);
              if (local_110 == (longlong *)0x0) {
                local_130 = *puVar8;
                local_128 = puVar8[1];
                if (local_128 != 0) {
                  LOCK();
                  *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
                  UNLOCK();
                }
                (**(code **)(*param_1 + 0x2c0))(param_1,&local_120,&local_130);
                plVar5 = local_108;
                plVar1 = local_118;
                local_110 = local_120;
                if (local_118 == (longlong *)0x0) {
                  if (local_108 != (longlong *)0x0) {
                    local_108 = (longlong *)0x0;
LAB_146aa94bf:
                    local_110 = local_120;
                    LOCK();
                    plVar1 = plVar5 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plVar5)(plVar5);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar5 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar7 = *piVar2;
                      UNLOCK();
joined_r0x000146aa94ab:
                      if (iVar7 == 0) {
                        (**(code **)(*plVar5 + 0x10))(plVar5);
                      }
                    }
                  }
                }
                else {
                  LOCK();
                  *(int *)(local_118 + 1) = (int)local_118[1] + 1;
                  UNLOCK();
                  if (local_118 == local_108) {
                    LOCK();
                    plVar5 = local_118 + 1;
                    *(int *)plVar5 = (int)*plVar5 + -1;
                    UNLOCK();
                    if ((int)*plVar5 == 0) {
                      (**(code **)*local_118)(local_118);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar1 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar7 = *piVar2;
                      UNLOCK();
                      plVar5 = plVar1;
                      goto joined_r0x000146aa94ab;
                    }
                  }
                  else {
                    bVar10 = local_108 != (longlong *)0x0;
                    local_108 = local_118;
                    if (bVar10) goto LAB_146aa94bf;
                  }
                }
                plVar5 = local_118;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_118 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_118)(local_118);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar5 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                    }
                  }
                }
                (**(code **)(*local_110 + 0x10))(local_110,uVar9);
                local_140 = local_110;
                local_138 = local_108;
                if (local_108 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_108 + 1) = (int)local_108[1] + 1;
                  UNLOCK();
                }
                local_150 = *puVar8;
                local_148 = puVar8[1];
                if (local_148 != 0) {
                  LOCK();
                  *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
                  UNLOCK();
                }
                FUN_146aaee40(param_1 + 0x9c,&local_150,&local_140);
                (**(code **)(*local_110 + 0x58))(local_110,&local_120);
                FUN_1405d299c(local_120);
                plVar5 = local_118;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_118 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_118)(local_118);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar5 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                    }
                  }
                }
              }
              (**(code **)(*local_110 + 0x58))(local_110,&local_120);
              plVar5 = local_120 + 0x2d;
              if ((*(byte *)((longlong)local_120 + 0x31) & 0x20) == 0) {
                plVar5 = &DAT_14c84635c;
              }
              local_168 = *plVar5;
              FUN_146af3580(local_15c,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_168);
              plVar5 = local_118;
              if (local_118 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_118 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_118)(local_118);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar5 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
              }
              plVar5 = local_108;
              if (param_3 <= 0.0) {
                auVar15 = roundss(ZEXT816(0),ZEXT416((uint)(float)dVar13),0xb);
                fVar17 = (float)dVar13 - auVar15._0_4_;
                fVar12 = ABS(fVar17);
                dVar3 = dVar13 + -1.0;
                if (1e-08 < fVar12) {
                  dVar3 = dVar13;
                }
                uVar11 = -(uint)(fVar12 <= 1e-08);
                fVar12 = (float)(uVar11 & 0x3f800000 | ~uVar11 & (uint)fVar17) * local_158;
                if (fVar18 <= fVar12) {
                  if ((fVar18 != fVar12) || (NAN(fVar18) || NAN(fVar12))) {
                    dVar13 = (double)((fVar12 - fVar18) / local_158 + (float)(int)dVar3);
                    goto LAB_146aa909d;
                  }
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = dVar3;
                  auVar15 = roundpd(auVar15,auVar15,3);
                  dVar13 = auVar15._0_8_;
                  iVar7 = 3;
                }
                else {
                  if (uVar9 == 0) {
                    iVar7 = 3;
                    dVar13 = 0.0;
                    uVar9 = 0;
                    goto LAB_146aa90a2;
                  }
                  fVar18 = fVar18 - fVar12;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = dVar3;
                  auVar15 = roundpd(auVar16,auVar16,3);
                  dVar13 = auVar15._0_8_;
                  uVar9 = uVar9 - 1;
                  iVar7 = 0;
                }
                dVar13 = dVar3 - (dVar3 - dVar13);
              }
              else {
                auVar14._8_8_ = 0;
                auVar14._0_8_ = dVar13;
                auVar15 = roundpd(auVar14,auVar14,3);
                fVar12 = (float)((auVar15._0_8_ - dVar13) + 1.0) * local_158;
                if (fVar18 <= fVar12) {
                  if ((fVar18 != fVar12) || (NAN(fVar18) || NAN(fVar12))) {
                    dVar13 = (double)(int)dVar13 + (1.0 - (double)((fVar12 - fVar18) / local_158));
                  }
                  else {
                    dVar13 = (double)(int)dVar13 + 1.0;
                  }
                }
                else {
                  if (uVar9 != local_f8) {
                    fVar18 = fVar18 - fVar12;
                    dVar13 = (double)(int)dVar13 + 1.0;
                    uVar9 = uVar9 + 1;
                    iVar7 = 0;
                    goto LAB_146aa90a2;
                  }
                  dVar13 = (double)(int)uVar9;
                }
LAB_146aa909d:
                iVar7 = 3;
              }
LAB_146aa90a2:
              if (local_108 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_108 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_108)(local_108);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar5 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
              }
            }
          } while (iVar7 != 3);
        }
      }
      (**(code **)(*param_1 + 600))(param_1,(float)dVar13);
    }
  }
LAB_146aa9195:
  if ((local_f0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa9502 FUN_146aa9502 body=750 status=ok
// SIG undefined FUN_146aa9502(void)

void FUN_146aa9502(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_138 [44];
  undefined1 local_10c [4];
  ulonglong local_108;
  longlong *local_100;
  longlong local_f8;
  int local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  int local_b4;
  longlong local_a8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(int *)(param_1 + 0x270) != 2) {
    plVar3 = *(longlong **)(param_1 + 0x8b0);
    if (plVar3 == (longlong *)0x0) {
      (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x30))(param_1 + 0x4d8);
    }
    else {
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      (**(code **)(*plVar3 + 8))(plVar3,&local_f8);
      if (0 < local_f0) {
        lVar7 = 8;
        lVar8 = 0;
        do {
          uVar4 = *(ulonglong *)(local_f8 + -8 + lVar7);
          plVar3 = *(longlong **)(local_f8 + lVar7);
          local_108 = uVar4;
          local_e8 = uVar4;
          local_e0 = plVar3;
          if (plVar3 == (longlong *)0x0) {
            local_100 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            local_100 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
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
            }
          }
          uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          iVar6 = FUN_146aafeaa((longlong *)(param_1 + 0x700),uVar5 >> 0x10 ^ uVar5,&local_108);
          plVar3 = local_100;
          if (iVar6 == -1) {
            lVar9 = 0;
          }
          else {
            lVar9 = (longlong)iVar6 * 0x18 + *(longlong *)(param_1 + 0x700);
          }
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_100 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (lVar9 != 0) {
            FUN_146aaff8e(&local_98,local_10c,&local_e8,0);
          }
          plVar3 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_e0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x10;
        } while (lVar8 < local_f0);
      }
      FUN_146aafbb4(param_1 + 0x700,&local_e8,&local_98);
      iVar6 = (int)local_e0;
      FUN_146aafe30(param_1 + 0x700,&local_98);
      local_a0 = 0;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_146aac844(&local_e8);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_146aac844(&local_98);
      if (iVar6 <= local_b4) goto LAB_146aa9569;
    }
    (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x40))(param_1 + 0x4d8,3);
  }
LAB_146aa9569:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146aa97f2 FUN_146aa97f2 body=1026 status=ok
// SIG undefined FUN_146aa97f2(void)

double * FUN_146aa97f2(longlong param_1,double *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  double dVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined8 uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  double *local_100;
  undefined8 local_f8;
  undefined1 local_ec [4];
  float local_e8;
  longlong local_e0;
  uint local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_146af6b36();
  lVar1 = param_1 + 0x4e0;
  FUN_146ab0be2(lVar1);
  plVar4 = *(longlong **)(param_1 + 0x8b0);
  if ((plVar4 == (longlong *)0x0) ||
     ((**(code **)(*plVar4 + 8))(plVar4,&local_e0), (int)local_d8 < 1)) {
    *(undefined8 *)((longlong)param_2 + 9) = 0;
    *(undefined8 *)((longlong)param_2 + 0x11) = 0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    goto LAB_146aa9a54;
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = *(ulonglong *)(param_1 + 0x2e8);
  auVar19 = roundpd(auVar19,auVar19,1);
  uVar5 = local_d8 - 1;
  if ((int)auVar19._0_8_ < (int)(local_d8 - 1)) {
    uVar5 = (int)auVar19._0_8_;
  }
  uVar11 = 0;
  if (0 < (int)uVar5) {
    uVar11 = uVar5;
  }
  uVar2 = *(undefined4 *)(param_3 + 1);
  local_f8 = *param_3;
  FUN_146af3580(local_ec,*(undefined4 *)(param_1 + 0x3ec));
  uVar8 = (ulonglong)local_d8;
  if ((int)uVar11 < (int)local_d8) {
    uVar15 = (ulonglong)uVar11;
    lVar13 = uVar15 << 4;
    fVar25 = 0.0;
    lVar12 = 0;
    fVar24 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    bVar9 = false;
    uVar14 = uVar15;
    local_100 = param_2;
    do {
      if (*(longlong *)(local_e0 + lVar13) == 0) {
        bVar10 = false;
      }
      else {
        local_108 = uVar2;
        uVar17 = FUN_146ab086a(param_1,local_e0 + lVar13,uVar14 & 0xffffffff,uVar11);
        fVar16 = (float)uVar17;
        if (lVar12 == 0) {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *(ulonglong *)(param_1 + 0x2e8);
          auVar19 = roundpd(auVar21,auVar21,3);
          dVar18 = *(double *)(param_1 + 0x2e8) - auVar19._0_8_;
          if (dVar18 <= 0.0) {
            dVar18 = 0.0;
          }
          fVar23 = 1.0 - (float)dVar18;
          fVar20 = local_e8 / (fVar16 * fVar23);
          fVar27 = fVar16;
          if (fVar23 <= fVar20) {
            fVar20 = fVar23;
          }
        }
        else if (fVar26 + fVar16 <= local_e8) {
          fVar20 = 1.0;
        }
        else {
          fVar20 = (local_e8 - fVar26) / fVar16;
        }
        fVar25 = fVar25 + fVar20;
        auVar22._8_4_ = (int)extraout_XMM0_Qb;
        auVar22._0_8_ = uVar17;
        auVar22._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
        if (lVar12 == 0) {
          auVar22._0_4_ = fVar16 * fVar25;
        }
        fVar26 = fVar26 + auVar22._0_4_;
        uVar8 = (ulonglong)(int)local_d8;
        bVar9 = (longlong)(uVar8 - 1) <= (longlong)uVar14;
        fVar24 = fVar24 + fVar16;
        bVar10 = local_e8 + 0.001 <= fVar26 || lVar12 == 0 && local_e8 <= fVar26;
      }
      param_2 = local_100;
      uVar7 = (uint)uVar8;
      if (bVar10) break;
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + -1;
      lVar13 = lVar13 + 0x10;
    } while ((int)uVar14 < (int)uVar7);
    if (bVar10 || bVar9 != true) {
      dVar18 = (double)fVar25;
      goto LAB_146aa9ad9;
    }
    dVar3 = (double)((fVar24 - local_e8) / fVar27) + (double)(int)uVar11;
    if ((0 < (int)uVar5) && (fVar24 < local_e8)) {
      lVar12 = uVar15 << 4;
      fVar27 = local_e8;
      do {
        lVar12 = lVar12 + -0x10;
        if (*(longlong *)(local_e0 + lVar12) != 0) {
          local_108 = uVar2;
          fVar25 = (float)FUN_146ab086a(param_1,local_e0 + lVar12,uVar15 - 1 & 0xffffffff,uVar11);
          fVar24 = fVar24 + fVar25;
          fVar27 = local_e8;
          if ((0.0 < fVar25) && (local_e8 < fVar24)) {
            dVar3 = (double)((fVar24 - local_e8) / fVar25) + (double)(int)(uVar15 - 1);
          }
        }
        uVar7 = local_d8;
      } while ((1 < uVar15) && (uVar15 = uVar15 - 1, fVar24 < fVar27));
    }
    dVar18 = (double)(int)uVar7 - dVar3;
    uVar6 = 1;
  }
  else {
    fVar24 = 0.0;
    dVar18 = 0.0;
LAB_146aa9ad9:
    dVar3 = *(double *)(param_1 + 0x2e8);
    uVar6 = 0;
  }
  *param_2 = dVar3;
  param_2[1] = (double)fVar24;
  param_2[2] = dVar18;
  *(undefined1 *)(param_2 + 3) = uVar6;
LAB_146aa9a54:
  FUN_146aae0f8(lVar1);
  FUN_142903f46(lVar1);
  if ((local_d0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa9bf6 FUN_146aa9bf6 body=81 status=ok
// SIG undefined FUN_146aa9bf6(void)

undefined4 FUN_146aa9bf6(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x8b0);
  if (plVar1 == (longlong *)0x0) {
    local_18 = 0;
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa9c48 FUN_146aa9c48 body=2128 status=ok
// SIG undefined FUN_146aa9c48(void)

undefined1 FUN_146aa9c48(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  double dVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined1 uVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  float local_f4;
  float local_f0;
  undefined1 local_ec [4];
  float local_e8;
  undefined1 local_e0 [4];
  float local_dc;
  undefined1 local_d4 [4];
  float local_d0;
  undefined1 local_c8 [4];
  float local_c4;
  undefined1 local_bc [4];
  float local_b8;
  float local_b0;
  float fStack_ac;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  int local_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar3 = (longlong *)param_1[0x116];
  if ((plVar3 != (longlong *)0x0) && (param_1[0xf9] != 0)) {
    (**(code **)(*plVar3 + 8))(plVar3,&local_90);
    lVar8 = param_1[0xf9];
    plVar3 = (longlong *)param_1[0xfa];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    iVar9 = -1;
    if ((longlong)local_88 != 0) {
      lVar10 = 0;
      iVar11 = 0;
      do {
        iVar9 = iVar11;
        if (*(longlong *)(local_90 + lVar10) == lVar8) break;
        iVar11 = iVar11 + 1;
        lVar10 = lVar10 + 0x10;
        iVar9 = -1;
      } while ((longlong)local_88 * 0x10 != lVar10);
    }
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
    if (iVar9 != -1) {
      fVar13 = (float)(**(code **)(*param_1 + 0x260))(param_1);
      dVar5 = (double)fVar13;
      if (((fVar13 == 0.0) && (!NAN(fVar13))) && (cVar7 = FUN_146af5c6c(param_1), cVar7 != '\0')) {
        dVar5 = (double)param_1[100];
        if ((dVar5 == 0.0) && (!NAN(dVar5))) {
          uVar12 = 1;
          goto LAB_146aa9fb4;
        }
      }
      FUN_146af65f2(param_1);
      dVar20 = (double)param_1[0x5d];
      auVar15._0_8_ = dVar5 + dVar20;
      auVar15._8_8_ = 0;
      auVar21 = roundpd(in_XMM2,auVar15,1);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = param_1[0x5d];
      auVar16 = roundpd(auVar15,auVar16,2);
      dVar14 = auVar16._0_8_;
      dVar19 = (double)(int)(auVar21._0_8_ - dVar14);
      if (*(char *)((longlong)param_1 + 0x869) == '\x01') {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_1[0x5d];
        auVar16 = roundpd(auVar16,auVar4,1);
        dVar14 = auVar16._0_8_;
        auVar18._0_8_ = dVar20 + dVar19;
        auVar18._8_8_ = 0;
        auVar16 = roundpd(auVar18,auVar18,2);
        dVar20 = auVar16._0_8_;
      }
      else {
        auVar21._0_8_ = dVar20 + dVar19;
        auVar21._8_8_ = 0;
        auVar16 = roundpd(auVar21,auVar21,1);
        dVar20 = auVar16._0_8_;
      }
      dVar19 = (double)iVar9;
      cVar7 = (char)param_1[0xfe];
      if ((dVar19 < dVar14) || (dVar20 < dVar19)) {
        if (cVar7 == '\0') {
          if (dVar20 < dVar19) goto LAB_146aa9e15;
        }
        else if (cVar7 == '\x03') {
LAB_146aa9e15:
          dVar19 = dVar19 - (dVar5 + -1.0);
        }
        else if (cVar7 == '\x02') {
          dVar19 = dVar19 + dVar5 * -0.5;
        }
LAB_146aa9e25:
        dVar20 = 0.0;
        if (0.0 <= (double)local_88 - dVar5) {
          dVar20 = (double)local_88 - dVar5;
        }
        if (dVar20 <= dVar19) {
          dVar19 = dVar20;
        }
        if (dVar19 <= 0.0) {
          dVar19 = 0.0;
        }
        FUN_146af48d8(param_1,(float)dVar19);
      }
      else {
        if (cVar7 == '\x01') goto LAB_146aa9e25;
        if (cVar7 == '\x03') goto LAB_146aa9e15;
        if (*(char *)((longlong)param_1 + 0x869) != '\0') {
          (**(code **)(param_1[0x9b] + 0xd8))
                    (param_1 + 0x9b,&local_a0,(longlong)iVar9 * 0x10 + local_90);
          if (local_a0 != (longlong *)0x0) {
            (**(code **)(*local_a0 + 0x58))(local_a0,&local_b0);
            plVar3 = local_a8;
            lVar8 = CONCAT44(fStack_ac,local_b0);
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_a8 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            fVar13 = (float)DAT_14c8463f8 * *(float *)(lVar8 + 0xd4);
            fVar17 = (float)DAT_14c8463f0 * *(float *)(lVar8 + 0xd0);
            fStack_ac = *(float *)(lVar8 + 0xf0) * fVar17 + *(float *)(lVar8 + 0xf8) * fVar13 +
                        *(float *)(lVar8 + 0x100);
            local_b0 = fVar17 * *(float *)(lVar8 + 0xec) + fVar13 * *(float *)(lVar8 + 0xf4) +
                       *(float *)(lVar8 + 0xfc);
            FUN_146af3580(local_bc,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
            fStack_ac = param_2[8] * (float)DAT_14c8463f0 * *param_2 +
                        param_2[10] * (float)DAT_14c8463f8 * param_2[1] + param_2[0xc];
            local_b0 = (float)DAT_14c8463f0 * *param_2 * param_2[7] +
                       (float)DAT_14c8463f8 * param_2[1] * param_2[9] + param_2[0xb];
            FUN_146af3580(local_c8,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
            if (local_c4 <= local_b8) {
              dVar19 = (double)param_1[0x5e];
              fStack_ac = *(float *)(lVar8 + 0xf0) * *(float *)(lVar8 + 0xd0) +
                          *(float *)(lVar8 + 0xf8) * *(float *)(lVar8 + 0xd4) +
                          *(float *)(lVar8 + 0x100);
              local_b0 = *(float *)(lVar8 + 0xd0) * *(float *)(lVar8 + 0xec) +
                         *(float *)(lVar8 + 0xd4) * *(float *)(lVar8 + 0xf4) +
                         *(float *)(lVar8 + 0xfc);
              FUN_146af3580(local_d4,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
              fStack_ac = param_2[8] * *param_2 + param_2[10] * param_2[1] + param_2[0xc];
              local_b0 = *param_2 * param_2[7] + param_2[1] * param_2[9] + param_2[0xb];
              FUN_146af3580(local_e0,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_b0);
              if (local_dc < local_d0) {
                if ((longlong)(int)param_1[0xb2] == 0) {
                  fVar13 = 0.0;
                }
                else {
                  lVar8 = param_1[0xb1];
                  fVar17 = local_d0 - local_dc;
                  lVar10 = (longlong)(int)param_1[0xb2] * 0x10;
                  fVar13 = 0.0;
                  do {
                    lVar10 = lVar10 + -0x10;
                    FUN_146aad6fc(param_1 + 0x9c,&local_108,lVar8);
                    (**(code **)(*local_108 + 0x58))(local_108,&local_b0);
                    lVar6 = CONCAT44(fStack_ac,local_b0);
                    local_f0 = *(float *)(lVar6 + 0xf0) * *(float *)(lVar6 + 0xd0) +
                               *(float *)(lVar6 + 0xf8) * *(float *)(lVar6 + 0xd4);
                    local_f4 = *(float *)(lVar6 + 0xd0) * *(float *)(lVar6 + 0xec) +
                               *(float *)(lVar6 + 0xd4) * *(float *)(lVar6 + 0xf4);
                    FUN_146af3580(local_ec,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_f4);
                    plVar3 = local_a8;
                    if (local_a8 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_a8 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*local_a8)(local_a8);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar3 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar3 + 0x10))(plVar3);
                        }
                      }
                    }
                    plVar3 = local_100;
                    if (local_100 != (longlong *)0x0) {
                      LOCK();
                      plVar1 = local_100 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        (**(code **)*local_100)(local_100);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar3 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar3 + 0x10))(plVar3);
                        }
                      }
                    }
                    fVar13 = fVar13 + (float)(~-(uint)(fVar17 <= local_e8) & 0x3f800000 |
                                             (uint)(fVar17 / local_e8) & -(uint)(fVar17 <= local_e8)
                                             );
                    if (fVar17 <= local_e8) break;
                    lVar8 = lVar8 + 0x10;
                    fVar17 = fVar17 - local_e8;
                  } while (lVar10 != 0);
                }
                dVar19 = 0.0;
                if ((char)param_1[0x5a] == '\0') {
                  dVar19 = (double)*(float *)(param_1 + 0x10c);
                }
                dVar19 = (double)fVar13 + (double)param_1[0x5e] + dVar19;
              }
            }
            else {
              dVar19 = dVar19 - (double)*(float *)(param_1 + 0x10c);
            }
            FUN_146af48d8(param_1,(float)dVar19);
          }
          plVar3 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_98 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
      }
      FUN_146af42a2(param_1);
      lVar8 = param_1[0xf9];
      lVar10 = param_1[0xfa];
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_1[0xfd];
      param_1[0xfc] = lVar8;
      param_1[0xfd] = lVar10;
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
    }
    param_1[0xf9] = 0;
    plVar3 = (longlong *)param_1[0xfa];
    if (plVar3 != (longlong *)0x0) {
      param_1[0xfa] = 0;
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
  }
  plVar3 = (longlong *)param_1[0xfc];
  if (plVar3 == (longlong *)0x0) {
    uVar12 = 2;
  }
  else {
    uVar12 = 0;
    if ((char)param_1[0x5b] == '\x01') {
      local_98 = (longlong *)param_1[0xfd];
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      local_a0 = plVar3;
      (**(code **)(param_1[0x9b] + 0xd8))(param_1 + 0x9b,&local_90,&local_a0);
      plVar3 = (longlong *)CONCAT44(uStack_84,local_88);
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
      plVar3 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      uVar12 = local_90 == 0;
    }
  }
LAB_146aa9fb4:
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 146aaa49a FUN_146aaa49a body=581 status=ok
// SIG undefined FUN_146aaa49a(void)

void FUN_146aaa49a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x7e0);
  if (lVar3 != 0) {
    local_20 = *(longlong **)(param_1 + 0x7e8);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    local_28 = lVar3;
    FUN_146aad6fc(param_1 + 0x4e0,&local_38,&local_28);
    if (local_38 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0x869) == '\x01') {
        if (local_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_20 + 1) = (int)local_20[1] + 1;
          UNLOCK();
        }
        plVar4 = *(longlong **)(param_1 + 0x758);
        *(longlong *)(param_1 + 0x750) = local_28;
        *(longlong **)(param_1 + 0x758) = local_20;
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
        (**(code **)(*local_38 + 0x58))(local_38,&local_58);
        local_48 = local_58;
        local_40 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        FUN_146af6ffc(param_1,*(undefined4 *)(param_1 + 0x7d8),&local_48,0);
        plVar4 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_50 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
      }
      local_68 = local_28;
      local_60 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_146ab0c3e(param_1 + 0x6e0,&local_68,&local_38);
    }
    *(undefined1 *)(param_1 + 0x869) = 0;
    *(undefined8 *)(param_1 + 0x7e0) = 0;
    plVar4 = *(longlong **)(param_1 + 0x7e8);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x7e8) = 0;
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
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aaa6fe FUN_146aaa6fe body=1284 status=ok
// SIG undefined FUN_146aaa6fe(void)

undefined8 * FUN_146aaa6fe(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_808 [32];
  undefined8 **local_7e8;
  undefined8 local_7d8;
  longlong *plStack_7d0;
  undefined8 *local_7c8;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 local_7a1;
  wchar_t *local_7a0;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined1 local_788 [4];
  undefined1 local_784 [4];
  longlong *local_780 [2];
  undefined1 local_770 [16];
  undefined1 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  longlong *local_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong local_720;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_808;
  if (((*(int *)(param_1 + 0x6a8) == 0) || (*(longlong **)(param_1 + 0x6a0) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x6a0) + 0x30))(), cVar5 == '\0')) {
    FUN_146a878da(&local_2b8);
    FUN_140a570d8(&local_728);
    local_7a0 = L"OnGeneratePinnedRowNotAssignedMessage";
    local_798 = 0x25;
    FUN_1446e940c(local_784,&local_7a0);
    local_7a0 = L"SListView";
    local_798 = 9;
    FUN_1446e940c(local_788,&local_7a0);
    FUN_140208bae(local_780,local_788,local_784,L"OnGeneratePinnedRow() not assigned.");
    FUN_14023423e(local_770,local_780);
    local_760 = 1;
    local_758 = 0;
    uStack_750 = 0;
    uVar8 = FUN_140a54906(&local_728,local_770);
    local_7e8 = (undefined8 **)&local_7a1;
    FUN_140a54526(&local_7a0,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x666)
    ;
    FUN_140a52852(&local_7a0,&local_748,uVar8);
    plVar9 = local_58;
    plVar3 = local_740;
    if (local_740 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
    }
    local_60 = local_748;
    local_58 = local_740;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
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
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_146aaaa0f:
      local_7d8 = 0;
      plStack_7d0 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_146aaaa0f;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      local_7d8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_7d0 = plVar9;
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
    local_7c8 = &local_7d8;
    local_7e8 = &local_7c8;
    FUN_146ab0daa(local_7c0,"STableRow<ItemType>",
                  "Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x663);
    FUN_146ab0d2c(local_7c0,&local_738,&local_2b8);
    if (local_7b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_7b8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_7b8)(local_7b8);
        LOCK();
        piVar1 = (int *)((longlong)local_7b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7b8 + 0x10))(local_7b8);
        }
      }
    }
    plVar9 = plStack_7d0;
    if (plStack_7d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_7d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_7d0)(plStack_7d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_740 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_740 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_740)(local_740);
        LOCK();
        piVar1 = (int *)((longlong)local_740 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_740 + 0x10))(local_740);
        }
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_794,local_798);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_780[0] != (longlong *)0x0) {
      (**(code **)(*local_780[0] + 0x10))();
    }
    FUN_140a59ae6(&local_728);
    FUN_146a87af6(&local_2b8);
    *param_2 = local_738;
    param_2[1] = local_730;
    if (local_730 == (longlong *)0x0) goto LAB_146aaa856;
    LOCK();
    *(int *)(local_730 + 1) = (int)local_730[1] + 1;
    UNLOCK();
    if (local_730 == (longlong *)0x0) goto LAB_146aaa856;
    LOCK();
    plVar3 = local_730 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146aaa856;
    (**(code **)*local_730)(local_730);
    LOCK();
    piVar1 = (int *)((longlong)local_730 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_146aaa856;
    lVar7 = *local_730;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_146aaa7b4:
      local_2b8 = 0;
      plStack_2b0 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_146aaa7b4;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_2b8 = uVar8;
      plStack_2b0 = plVar3;
    }
    plVar3 = plStack_2b0;
    local_728 = *param_3;
    local_720 = param_3[1];
    if (local_720 != 0) {
      LOCK();
      *(int *)(local_720 + 8) = *(int *)(local_720 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x6a8) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x6a0);
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,param_2,&local_728,&local_2b8);
    plVar9 = plStack_2b0;
    if (plStack_2b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2b0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_2b0)(plStack_2b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (bVar10) goto LAB_146aaa856;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_146aaa856;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_146aaa856;
    lVar7 = *plVar3;
    local_730 = plVar3;
  }
  (**(code **)(lVar7 + 0x10))(local_730);
LAB_146aaa856:
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_808) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146aaac04 FUN_146aaac04 body=1284 status=ok
// SIG undefined FUN_146aaac04(void)

undefined8 * FUN_146aaac04(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_808 [32];
  undefined8 **local_7e8;
  undefined8 local_7d8;
  longlong *plStack_7d0;
  undefined8 *local_7c8;
  undefined1 local_7c0 [8];
  longlong *local_7b8;
  undefined1 local_7a1;
  wchar_t *local_7a0;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined1 local_788 [4];
  undefined1 local_784 [4];
  longlong *local_780 [2];
  undefined1 local_770 [16];
  undefined1 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  longlong *local_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong local_720;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_808;
  if (((*(int *)(param_1 + 0x698) == 0) || (*(longlong **)(param_1 + 0x690) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x690) + 0x30))(), cVar5 == '\0')) {
    FUN_146a878da(&local_2b8);
    FUN_140a570d8(&local_728);
    local_7a0 = L"OnGenerateWidgetNotAssignedMessage";
    local_798 = 0x22;
    FUN_1446e940c(local_784,&local_7a0);
    local_7a0 = L"SListView";
    local_798 = 9;
    FUN_1446e940c(local_788,&local_7a0);
    FUN_140208bae(local_780,local_788,local_784,L"OnGenerateWidget() not assigned.");
    FUN_14023423e(local_770,local_780);
    local_760 = 1;
    local_758 = 0;
    uStack_750 = 0;
    uVar8 = FUN_140a54906(&local_728,local_770);
    local_7e8 = (undefined8 **)&local_7a1;
    FUN_140a54526(&local_7a0,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x682)
    ;
    FUN_140a52852(&local_7a0,&local_748,uVar8);
    plVar9 = local_58;
    plVar3 = local_740;
    if (local_740 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_740 + 1) = (int)local_740[1] + 1;
      UNLOCK();
    }
    local_60 = local_748;
    local_58 = local_740;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
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
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_146aaaf15:
      local_7d8 = 0;
      plStack_7d0 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_146aaaf15;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      local_7d8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_7d0 = plVar9;
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
    local_7c8 = &local_7d8;
    local_7e8 = &local_7c8;
    FUN_146ab0daa(local_7c0,"STableRow<ItemType>",
                  "Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x67f);
    FUN_146ab0d2c(local_7c0,&local_738,&local_2b8);
    if (local_7b8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_7b8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_7b8)(local_7b8);
        LOCK();
        piVar1 = (int *)((longlong)local_7b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7b8 + 0x10))(local_7b8);
        }
      }
    }
    plVar9 = plStack_7d0;
    if (plStack_7d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_7d0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_7d0)(plStack_7d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_740 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_740 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_740)(local_740);
        LOCK();
        piVar1 = (int *)((longlong)local_740 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_740 + 0x10))(local_740);
        }
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_794,local_798);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_780[0] != (longlong *)0x0) {
      (**(code **)(*local_780[0] + 0x10))();
    }
    FUN_140a59ae6(&local_728);
    FUN_146a87af6(&local_2b8);
    *param_2 = local_738;
    param_2[1] = local_730;
    if (local_730 == (longlong *)0x0) goto LAB_146aaad5c;
    LOCK();
    *(int *)(local_730 + 1) = (int)local_730[1] + 1;
    UNLOCK();
    if (local_730 == (longlong *)0x0) goto LAB_146aaad5c;
    LOCK();
    plVar3 = local_730 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146aaad5c;
    (**(code **)*local_730)(local_730);
    LOCK();
    piVar1 = (int *)((longlong)local_730 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_146aaad5c;
    lVar7 = *local_730;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_146aaacba:
      local_2b8 = 0;
      plStack_2b0 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_146aaacba;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_2b8 = uVar8;
      plStack_2b0 = plVar3;
    }
    plVar3 = plStack_2b0;
    local_728 = *param_3;
    local_720 = param_3[1];
    if (local_720 != 0) {
      LOCK();
      *(int *)(local_720 + 8) = *(int *)(local_720 + 8) + 1;
      UNLOCK();
    }
    if (*(int *)(param_1 + 0x698) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x690);
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,param_2,&local_728,&local_2b8);
    plVar9 = plStack_2b0;
    if (plStack_2b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2b0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_2b0)(plStack_2b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (bVar10) goto LAB_146aaad5c;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_146aaad5c;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_146aaad5c;
    lVar7 = *plVar3;
    local_730 = plVar3;
  }
  (**(code **)(lVar7 + 0x10))(local_730);
LAB_146aaad5c:
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_808) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146aab10c FUN_146aab10c body=32 status=ok
// SIG undefined FUN_146aab10c(void)

undefined8 FUN_146aab10c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SListView");
  return param_2;
}



// FUNCTION 146aab12c FUN_146aab12c body=561 status=ok
// SIG undefined FUN_146aab12c(void)

void FUN_146aab12c(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146ab63d2(param_1,&local_38,param_2);
  if (local_38 == -1) goto LAB_146aab1d8;
  if ((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) {
LAB_146aab19f:
    iVar6 = *(int *)(param_1 + 0x390);
  }
  else {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar5 == '\0') goto LAB_146aab19f;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x398);
    }
    iVar6 = (**(code **)(*plVar7 + 0x58))();
    *(int *)(param_1 + 0x390) = iVar6;
  }
  if (iVar6 != 0) {
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)(param_1 + 0x758);
    *(longlong *)(param_1 + 0x750) = local_38;
    *(longlong **)(param_1 + 0x758) = local_30;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    uVar4 = *(undefined4 *)(param_3 + 0xc);
    local_48 = local_38;
    local_40 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_146ab671e(param_1,&local_48,uVar4);
    if ((iVar6 == 3) && (uVar3 = *(ushort *)(param_3 + 8), (uVar3 & 0xf) != 0)) {
      if ((uVar3 & 3) == 0) {
        local_68 = local_38;
        local_60 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x28))
                  ((longlong *)(param_1 + 0x4d8),&local_68,1,1);
      }
      else {
        if ((uVar3 & 0xc) == 0) {
          (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x30))(param_1 + 0x4d8);
        }
        local_58 = local_38;
        local_50 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x38))
                  ((longlong *)(param_1 + 0x4d8),&local_58);
      }
      (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x40))(param_1 + 0x4d8,1);
    }
    else {
      local_78 = local_38;
      local_70 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      FUN_146ab67a4(param_1,&local_78,1);
    }
  }
  if ((local_38 != -1) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
LAB_146aab1d8:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aab370 FUN_146aab370 body=339 status=ok
// SIG undefined FUN_146aab370(void)

ulonglong FUN_146aab370(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)(param_1 + 0x228);
  uVar7 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_38 = uVar7;
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_30 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_146aafeaa(plVar6,uVar4 >> 0x10 ^ uVar4,&local_38);
  plVar2 = local_30;
  if (iVar5 == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),(longlong)iVar5 * 0x18 + *plVar6 != 0);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aab4c4 FUN_146aab4c4 body=150 status=ok
// SIG undefined FUN_146aab4c4(void)

ulonglong FUN_146aab4c4(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((*(int *)(param_1 + 0x338) != 0) && (*(longlong **)(param_1 + 0x330) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x30))();
    if (cVar1 != '\0') {
      local_30 = *param_2;
      local_28 = param_2[1];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x338) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x330);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      uVar4 = (ulonglong)uVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aab55c FUN_146aab55c body=339 status=ok
// SIG undefined FUN_146aab55c(void)

ulonglong FUN_146aab55c(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)(param_1 + 0x298);
  uVar7 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_38 = uVar7;
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_30 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
  uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar5 = FUN_146aafeaa(plVar6,uVar4 >> 0x10 ^ uVar4,&local_38);
  plVar2 = local_30;
  if (iVar5 == -1) {
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),(longlong)iVar5 * 0x18 + *plVar6 != 0);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aab6b0 FUN_146aab6b0 body=948 status=ok
// SIG undefined FUN_146aab6b0(void)

void FUN_146aab6b0(longlong *param_1,longlong *param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined4 local_100;
  undefined8 local_f0;
  longlong *local_e8;
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [80];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((int)param_1[-0x27] == 0) || ((longlong *)param_1[-0x28] == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))(), cVar6 == '\0')) {
    iVar7 = (int)param_1[-0x29];
  }
  else {
    if ((int)param_1[-0x27] == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)param_1[-0x28];
    }
    iVar7 = (**(code **)(*plVar8 + 0x58))();
    *(int *)(param_1 + -0x29) = iVar7;
  }
  if (iVar7 == 0) goto LAB_146aab722;
  if (param_3 == '\0') {
    local_40 = *param_2;
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_146ab6a98(param_1 + 0x45,&local_40);
  }
  else {
    FUN_146aaff8e(param_1 + 0x45,local_b0,param_2,0);
  }
  if (param_4 == '\0') {
    if ((((int)param_1[-0x27] == 0) || ((longlong *)param_1[-0x28] == (longlong *)0x0)) ||
       (cVar6 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))(), cVar6 == '\0')) {
      iVar7 = (int)param_1[-0x29];
    }
    else {
      if ((int)param_1[-0x27] == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)param_1[-0x28];
      }
      iVar7 = (**(code **)(*plVar8 + 0x58))();
      *(int *)(param_1 + -0x29) = iVar7;
    }
    if (iVar7 == 1) goto LAB_146aab7c7;
    if (((int)param_1[-0x27] != 0) && ((longlong *)param_1[-0x28] != (longlong *)0x0)) {
      cVar6 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))();
      if (cVar6 == '\0') {
        iVar7 = (int)param_1[-0x29];
      }
      else {
        if ((int)param_1[-0x27] == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)param_1[-0x28];
        }
        iVar7 = (**(code **)(*plVar8 + 0x58))();
        *(int *)(param_1 + -0x29) = iVar7;
      }
    }
    if (iVar7 == 2) goto LAB_146aab7c7;
  }
  else {
LAB_146aab7c7:
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)param_1[0x50];
    param_1[0x4f] = lVar3;
    param_1[0x50] = lVar4;
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
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)param_1[0x52];
    param_1[0x51] = lVar3;
    param_1[0x52] = lVar4;
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
  }
  FUN_1469ffd58(param_1 + -0x24,0);
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,&local_50,param_2);
    if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x58))(local_50,&local_60);
      uVar5 = *(undefined8 *)(DAT_14c968098 + 200);
      plVar8 = *(longlong **)(DAT_14c968098 + 0xd0);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      FUN_14171d2aa(local_c8,1);
      FUN_14171d2aa(local_e0,0);
      local_f0 = local_60;
      local_e8 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      local_100 = 0;
      local_108 = local_c8;
      FUN_14171f2ba(local_b0,&local_f0,0,local_e0);
      FUN_1428785ec(uVar5,local_b0);
      FUN_1417211dc(local_b0);
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
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_58 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_48 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
LAB_146aab722:
  plVar8 = (longlong *)param_2[1];
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
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146aaba66 FUN_146aaba66 body=44 status=ok
// SIG undefined FUN_146aaba66(void)

void FUN_146aaba66(longlong param_1)

{
  FUN_146ab680a(param_1 + 0x228,0);
  FUN_1469ffd58(param_1 + -0x120,0);
  return;
}



// FUNCTION 146aaba92 FUN_146aaba92 body=627 status=ok
// SIG undefined FUN_146aaba92(void)

void FUN_146aaba92(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  uint local_60;
  undefined1 local_5c [4];
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(int *)(param_1 + -0x138) == 0) || (*(longlong **)(param_1 + -0x140) == (longlong *)0x0))
     || (cVar2 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))(), cVar2 == '\0')) {
    iVar3 = *(int *)(param_1 + -0x148);
  }
  else {
    if (*(int *)(param_1 + -0x138) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + -0x140);
    }
    iVar3 = (**(code **)(*plVar5 + 0x58))();
    *(int *)(param_1 + -0x148) = iVar3;
  }
  if (iVar3 == 0) goto LAB_146aabb36;
  plVar5 = *(longlong **)(param_1 + 0x3d8);
  if (plVar5 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
  }
  else {
    (**(code **)(*plVar5 + 8))(plVar5,&local_58);
    if (local_50 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x288);
      uVar8 = 0;
      if (lVar11 != 0) {
        plVar5 = *(longlong **)(param_1 + 0x290);
        if (plVar5 == (longlong *)0x0) {
LAB_146aabc81:
          uVar8 = 0;
          plVar7 = local_58;
          do {
            if (*plVar7 == lVar11) goto LAB_146aabca4;
            plVar7 = plVar7 + 2;
            uVar8 = uVar8 + 1;
          } while (plVar7 != local_58 + (longlong)local_50 * 2);
          uVar8 = 0xffffffff;
LAB_146aabca4:
          if (plVar5 == (longlong *)0x0) goto LAB_146aabbb0;
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          uVar8 = 0xffffffff;
          if (local_50 != 0) goto LAB_146aabc81;
        }
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
LAB_146aabbb0:
      uVar6 = 0xffffffff;
      if ((longlong)local_50 != 0) {
        lVar11 = 0;
        uVar4 = 0;
        do {
          uVar6 = uVar4;
          if (*(longlong *)((longlong)local_58 + lVar11) == *param_2) break;
          uVar4 = uVar4 + 1;
          lVar11 = lVar11 + 0x10;
          uVar6 = 0xffffffff;
        } while ((longlong)local_50 << 4 != lVar11);
      }
      uVar4 = local_50 - 1;
      if ((int)uVar4 <= (int)uVar8) {
        uVar8 = uVar4;
      }
      uVar9 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar9 = 0;
      }
      uVar8 = (uint)uVar9;
      if ((int)uVar6 < (int)uVar4) {
        uVar4 = uVar6;
      }
      uVar6 = 0;
      if (0 < (int)uVar4) {
        uVar6 = uVar4;
      }
      iVar3 = uVar8 - uVar6;
      if (iVar3 != 0) {
        lVar11 = (ulonglong)((int)uVar8 < (int)uVar4) * 2 + -1;
        lVar10 = uVar9 << 4;
        local_60 = uVar6;
        do {
          FUN_146aaff8e(param_1 + 0x228,local_5c,(longlong)local_58 + lVar10,0);
          lVar10 = lVar10 + lVar11 * 0x10;
          iVar3 = iVar3 + (int)lVar11;
          uVar8 = local_60;
        } while (iVar3 != 0);
      }
      FUN_146aaff8e(param_1 + 0x228,local_5c,local_58 + (ulonglong)uVar8 * 2,0);
    }
  }
  FUN_1469ffd58(param_1 + -0x120,0);
LAB_146aabb36:
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146aabd06 FUN_146aabd06 body=391 status=ok
// SIG undefined FUN_146aabd06(void)

void FUN_146aabd06(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + -0x138) == 0) || (*(longlong **)(param_1 + -0x140) == (longlong *)0x0)) {
LAB_146aabd60:
    iVar4 = *(int *)(param_1 + -0x148);
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))();
    if (cVar3 == '\0') goto LAB_146aabd60;
    if (*(int *)(param_1 + -0x138) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + -0x140);
    }
    iVar4 = (**(code **)(*plVar6 + 0x58))();
    *(int *)(param_1 + -0x148) = iVar4;
  }
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x328) != 0)) {
    plVar6 = (longlong *)(param_1 + 800);
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      cVar3 = (**(code **)(*(longlong *)*plVar6 + 0x30))();
      if (cVar3 != '\0') {
        if (*(int *)(param_1 + 0x25c) < *(int *)(param_1 + 0x230)) {
          local_40 = param_1 + 0x238;
          local_48 = 0x100000000;
          local_38 = 0xffffffff;
          local_30 = 0;
          if (*(int *)(param_1 + 0x250) == 0) {
            lVar5 = 0;
          }
          else {
            FUN_1449c0562(&local_48);
            lVar5 = (longlong)local_38._4_4_;
          }
          local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x228) + lVar5 * 0x18);
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 8 + lVar5 * 0x18);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            local_50 = plVar2;
            FUN_146a87fc0(plVar6,&local_58,param_2);
            LOCK();
            plVar6 = plVar2 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
            goto LAB_146aabd8c;
          }
        }
        else {
          local_58 = 0;
        }
        local_50 = (longlong *)0x0;
        FUN_146a87fc0(plVar6,&local_58,param_2);
      }
    }
  }
LAB_146aabd8c:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aabfda FUN_146aabfda body=56 status=ok
// SIG undefined FUN_146aabfda(void)

void FUN_146aabfda(undefined8 param_1,longlong param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000146aac007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146aac012 FUN_146aac012 body=56 status=ok
// SIG undefined FUN_146aac012(void)

void FUN_146aac012(undefined8 param_1,longlong param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000146aac03f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146aac060 FUN_146aac060 body=155 status=ok
// SIG undefined FUN_146aac060(void)

void FUN_146aac060(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    local_28 = *param_2;
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_146ab6a98(param_1 + 0x298,&local_28);
  }
  else {
    FUN_146aaff8e(param_1 + 0x298,local_14,param_2,0);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aac118 FUN_146aac118 body=82 status=ok
// SIG undefined FUN_146aac118(void)

void FUN_146aac118(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x280))(param_1 + -0x4d8,param_3);
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
                    /* WARNING: Could not recover jumptable at 0x000146aac15f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146aac16a FUN_146aac16a body=138 status=ok
// SIG undefined FUN_146aac16a(void)

undefined4 FUN_146aac16a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_146ab6cf0(param_1 + 0x340,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aac1f6 FUN_146aac1f6 body=138 status=ok
// SIG undefined FUN_146aac1f6(void)

undefined4 FUN_146aac1f6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_146ab6cf0(param_1 + 0x350,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aac282 FUN_146aac282 body=83 status=ok
// SIG undefined FUN_146aac282(void)

undefined4 FUN_146aac282(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + -0x138) != 0) && (*(longlong **)(param_1 + -0x140) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + -0x138) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + -0x140);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(param_1 + -0x148) = uVar2;
    }
  }
  return *(undefined4 *)(param_1 + -0x148);
}



// FUNCTION 146aac2ea FUN_146aac2ea body=343 status=ok
// SIG undefined FUN_146aac2ea(void)

longlong * FUN_146aac2ea(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_146a8766c(param_2,*(int *)(param_1 + 0x230) - *(int *)(param_1 + 0x25c));
  local_40 = param_1 + 0x238;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x250) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = (longlong *)(param_1 + 0x228);
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      puVar4 = (undefined8 *)((longlong)iStack_54 * 0x18 + *local_70);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_145c1cf0e(param_2,iVar1);
      }
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *puVar4;
      lVar3 = puVar4[1];
      *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146aac442 FUN_146aac442 body=176 status=ok
// SIG undefined FUN_146aac442(void)

longlong * FUN_146aac442(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146aad6fc(param_1 + 8,&local_38);
  if (local_38 == 0) {
    FUN_146aad6fc(param_1 + 0xd8,param_2,param_3);
  }
  else {
    *param_2 = local_38;
    param_2[1] = (longlong)local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
  }
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aac4fc FUN_146aac4fc body=138 status=ok
// SIG undefined FUN_146aac4fc(void)

undefined8 * FUN_146aac4fc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + -0x4c8);
  if (plVar3 == (longlong *)0x0) {
LAB_146aac575:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146aac575;
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
    uVar4 = *(undefined8 *)(param_1 + -0x4d0);
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
    *param_2 = uVar4;
    param_2[1] = plVar3;
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
  return param_2;
}



// FUNCTION 146aac586 FUN_146aac586 body=544 status=ok
// SIG undefined FUN_146aac586(void)

void FUN_146aac586(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_149f17610;
  param_1[0x4d] = &PTR_FUN_149f178f0;
  param_1[0x9b] = &PTR_LAB_149f17910;
  puVar3 = (undefined8 *)param_1[0x116];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_1449db362(param_1 + 0x113);
  FUN_1449db362(param_1 + 0x110);
  FUN_1449db362(param_1 + 0x10a);
  FUN_1449db362(param_1 + 0x107);
  FUN_1449db362(param_1 + 0x105);
  FUN_1449db362(param_1 + 0x103);
  FUN_1449db362(param_1 + 0x101);
  FUN_1449db362(param_1 + 0xff);
  plVar4 = (longlong *)param_1[0xfd];
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
  plVar4 = (longlong *)param_1[0xfa];
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
  *(undefined4 *)(param_1 + 0xf7) = 0;
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  FUN_146aac844(param_1 + 0xee);
  plVar4 = (longlong *)param_1[0xed];
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
  plVar4 = (longlong *)param_1[0xeb];
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
  *(undefined4 *)(param_1 + 0xe9) = 0;
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  FUN_146aac844(param_1 + 0xe0);
  FUN_1449db362(param_1 + 0xde);
  FUN_1449db362(param_1 + 0xdc);
  FUN_1449db362(param_1 + 0xda);
  FUN_1449db362(param_1 + 0xd8);
  FUN_1449db362(param_1 + 0xd6);
  FUN_1449db362(param_1 + 0xd4);
  FUN_1449db362(param_1 + 0xd2);
  FUN_1449db362(param_1 + 0xd0);
  FUN_146aac7a6(param_1 + 0xb6);
  FUN_146aac7a6(param_1 + 0x9c);
  FUN_146af62c8(param_1);
  return;
}



// FUNCTION 146aac7a6 FUN_146aac7a6 body=157 status=ok
// SIG undefined FUN_146aac7a6(void)

void FUN_146aac7a6(longlong param_1)

{
  FUN_145cf7175(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_145cf7175(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_146aac9fe(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_146aacbb8(param_1 + 8);
  return;
}



// FUNCTION 146aac844 FUN_146aac844 body=54 status=ok
// SIG undefined FUN_146aac844(void)

void FUN_146aac844(longlong *param_1)

{
  FUN_146aac87a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146aac87a FUN_146aac87a body=386 status=ok
// SIG undefined FUN_146aac87a(void)

void FUN_146aac87a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
      plVar4 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
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
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144727cd0(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
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



// FUNCTION 146aac9fe FUN_146aac9fe body=54 status=ok
// SIG undefined FUN_146aac9fe(void)

void FUN_146aac9fe(longlong *param_1)

{
  FUN_146aaca34(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146aaca34 FUN_146aaca34 body=386 status=ok
// SIG undefined FUN_146aaca34(void)

void FUN_146aaca34(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
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
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
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



// FUNCTION 146aacbb8 FUN_146aacbb8 body=54 status=ok
// SIG undefined FUN_146aacbb8(void)

void FUN_146aacbb8(longlong *param_1)

{
  FUN_146aacbee(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146aacbee FUN_146aacbee body=350 status=ok
// SIG undefined FUN_146aacbee(void)

void FUN_146aacbee(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
      FUN_146aacd4e((longlong)iStack_54 * 0x28 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_140549ad6(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
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



// FUNCTION 146aacd4e FUN_146aacd4e body=100 status=ok
// SIG undefined FUN_146aacd4e(void)

void FUN_146aacd4e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146aacda6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146aacdb2 FUN_146aacdb2 body=2377 status=ok
// SIG undefined FUN_146aacdb2(void)

undefined1 *
FUN_146aacdb2(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong unaff_R13;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong *)param_1[0x116] == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
  }
  else {
    (**(code **)(*(longlong *)param_1[0x116] + 8))();
    if ((0 < local_50) && ((*(byte *)(param_4 + 8) & 0x30) == 0)) {
      lVar9 = *(longlong *)(param_4 + 0x20);
      plVar12 = *(longlong **)(param_4 + 0x30);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        unaff_R13 = DAT_14c964e48;
        UNLOCK();
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (lVar9 == unaff_R13) goto LAB_146aace5e;
        lVar9 = *(longlong *)(param_4 + 0x20);
        plVar12 = *(longlong **)(param_4 + 0x30);
        if (plVar12 == (longlong *)0x0) goto LAB_146aacf55;
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        unaff_R13 = DAT_14c964e30;
        UNLOCK();
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
        if (lVar9 != unaff_R13) goto LAB_146aad0c5;
LAB_146aacf69:
        lVar9 = (longlong)(local_50 + -1);
LAB_146aacf76:
        lVar11 = local_58[lVar9 * 2];
        plVar12 = (longlong *)local_58[lVar9 * 2 + 1];
LAB_146aace6d:
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        if (lVar11 == 0) {
          uVar10 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
          goto LAB_146aacf93;
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_68 = lVar11;
        local_60 = plVar12;
        (**(code **)(*param_1 + 0x2d8))(param_1,&local_68,param_4);
        plVar6 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_60 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
LAB_146aad019:
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar12 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        goto LAB_146aacf17;
      }
      if (lVar9 == DAT_14c964e48) {
LAB_146aace5e:
        lVar11 = *local_58;
        plVar12 = (longlong *)local_58[1];
        goto LAB_146aace6d;
      }
LAB_146aacf55:
      if (lVar9 == DAT_14c964e30) goto LAB_146aacf69;
LAB_146aad0c5:
      lVar9 = *(longlong *)(param_4 + 0x20);
      plVar12 = *(longlong **)(param_4 + 0x30);
      if (plVar12 == (longlong *)0x0) {
        if (lVar9 != DAT_14c964e00) {
LAB_146aad29d:
          if (lVar9 != DAT_14c964e18) goto LAB_146aad350;
LAB_146aad2aa:
          lVar9 = param_1[0xea];
          if (lVar9 == 0) {
            iVar5 = 0;
          }
          else {
            plVar12 = (longlong *)param_1[0xeb];
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            iVar5 = -1;
            if ((longlong)local_50 != 0) {
              lVar11 = 0;
              iVar8 = 0;
              do {
                iVar5 = iVar8;
                if (*(longlong *)((longlong)local_58 + lVar11) == lVar9) break;
                iVar8 = iVar8 + 1;
                lVar11 = lVar11 + 0x10;
                iVar5 = -1;
              } while ((longlong)local_50 * 0x10 != lVar11);
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar6 = plVar12 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
          }
          fVar14 = (float)(**(code **)(*param_1 + 0x260))(param_1);
          iVar8 = (**(code **)(*param_1 + 0x268))(param_1);
          iVar8 = (int)fVar14 - (int)fVar14 % iVar8;
          if (local_50 - iVar8 <= iVar5) goto LAB_146aacf69;
          lVar9 = (longlong)(iVar8 + iVar5);
          goto LAB_146aacf76;
        }
LAB_146aad10a:
        lVar9 = param_1[0xea];
        if (lVar9 == 0) {
          iVar5 = 0;
        }
        else {
          plVar12 = (longlong *)param_1[0xeb];
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          iVar5 = -1;
          if ((longlong)local_50 != 0) {
            lVar11 = 0;
            iVar8 = 0;
            do {
              iVar5 = iVar8;
              if (*(longlong *)((longlong)local_58 + lVar11) == lVar9) break;
              iVar8 = iVar8 + 1;
              lVar11 = lVar11 + 0x10;
              iVar5 = -1;
            } while ((longlong)local_50 * 0x10 != lVar11);
          }
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar12 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
        }
        fVar14 = (float)(**(code **)(*param_1 + 0x260))(param_1);
        iVar8 = (**(code **)(*param_1 + 0x268))(param_1);
        iVar8 = (int)fVar14 - (int)fVar14 % iVar8;
        if (iVar8 <= iVar5) {
          lVar9 = (longlong)(iVar5 - iVar8);
          goto LAB_146aacf76;
        }
        goto LAB_146aace5e;
      }
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      unaff_R13 = DAT_14c964e00;
      UNLOCK();
      LOCK();
      plVar6 = plVar12 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if (lVar9 == unaff_R13) goto LAB_146aad10a;
      lVar9 = *(longlong *)(param_4 + 0x20);
      plVar12 = *(longlong **)(param_4 + 0x30);
      if (plVar12 == (longlong *)0x0) goto LAB_146aad29d;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      unaff_R13 = DAT_14c964e18;
      UNLOCK();
      LOCK();
      plVar6 = plVar12 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if (lVar9 == unaff_R13) goto LAB_146aad2aa;
LAB_146aad350:
      uVar10 = 0;
      plVar12 = (longlong *)0x0;
LAB_146aacf93:
      if ((*(char *)((longlong)param_1 + 0x867) == '\x01') && (param_1[0xea] != 0)) {
        lVar9 = *(longlong *)(param_4 + 0x20);
        plVar6 = *(longlong **)(param_4 + 0x30);
        lVar11 = DAT_14c964de8;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          lVar11 = DAT_14c964de8;
          UNLOCK();
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          local_c0 = uVar10;
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            uVar10 = local_c0;
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              uVar10 = local_c0;
            }
          }
        }
        if (lVar9 != lVar11) goto LAB_146aacffa;
        local_68 = param_1[0xea];
        local_60 = (longlong *)param_1[0xeb];
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        if ((*(byte *)(param_4 + 8) & 0xc) == 0) {
          if ((((int)param_1[0x74] == 0) || ((longlong *)param_1[0x73] == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(*(longlong *)param_1[0x73] + 0x30))(), cVar2 == '\0')) {
            iVar5 = (int)param_1[0x72];
          }
          else {
            if ((int)param_1[0x74] == 0) {
              plVar6 = (longlong *)0x0;
            }
            else {
              plVar6 = (longlong *)param_1[0x73];
            }
            iVar5 = (**(code **)(*plVar6 + 0x58))();
            *(int *)(param_1 + 0x72) = iVar5;
          }
          if (iVar5 == 2) goto LAB_146aad4d0;
          plVar6 = param_1 + 0x9b;
          cVar2 = (**(code **)(param_1[0x9b] + 0x10))(plVar6,&local_68);
          if (cVar2 == '\0') {
            local_88 = local_68;
            local_80 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            (**(code **)(*plVar6 + 0x28))(plVar6,&local_88,1,1);
            goto LAB_146aad522;
          }
          bVar13 = false;
        }
        else {
LAB_146aad4d0:
          plVar6 = param_1 + 0x9b;
          uVar4 = (**(code **)(param_1[0x9b] + 0x10))(plVar6,&local_68);
          local_78 = local_68;
          local_70 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          (**(code **)(*plVar6 + 0x28))(plVar6,&local_78,uVar4 ^ 1,1);
LAB_146aad522:
          (**(code **)(param_1[0x9b] + 0x40))(param_1 + 0x9b,0);
          bVar13 = true;
        }
        lVar9 = param_1[0xea];
        lVar11 = param_1[0xeb];
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        plVar6 = (longlong *)param_1[0xed];
        param_1[0xec] = lVar9;
        param_1[0xed] = lVar11;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        FUN_146aad6fc(param_1 + 0x9c,&local_98,&local_68);
        if (local_98 == 0) {
          uVar3 = *(undefined4 *)(param_4 + 0xc);
          local_a8 = local_68;
          local_a0 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          FUN_146a8779c(param_1,&local_a8,uVar3);
        }
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_90 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_90)(local_90);
            LOCK();
            piVar1 = (int *)((longlong)local_90 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_90 + 0x10))(local_90);
            }
          }
        }
        plVar6 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_60 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (bVar13) goto LAB_146aad019;
      }
      else {
LAB_146aacffa:
        if ((*(ushort *)(param_4 + 8) & 0xc) != 0 && (*(ushort *)(param_4 + 8) & 0x33) == 0) {
          lVar9 = *(longlong *)(param_4 + 0x20);
          plVar6 = *(longlong **)(param_4 + 0x30);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          if (lVar9 == DAT_14c966f88) {
            if ((((int)param_1[0x74] != 0) && ((longlong *)param_1[0x73] != (longlong *)0x0)) &&
               (cVar2 = (**(code **)(*(longlong *)param_1[0x73] + 0x30))(), cVar2 != '\0')) {
              if ((int)param_1[0x74] == 0) {
                plVar7 = (longlong *)0x0;
              }
              else {
                plVar7 = (longlong *)param_1[0x73];
              }
              uVar3 = (**(code **)(*plVar7 + 0x58))();
              *(undefined4 *)(param_1 + 0x72) = uVar3;
            }
            bVar13 = (int)param_1[0x72] == 3;
          }
          else {
            bVar13 = false;
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar6 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          if (bVar13) {
            plVar6 = param_1 + 0x9b;
            (**(code **)(param_1[0x9b] + 0x30))(plVar6);
            if (0 < local_50) {
              lVar11 = 8;
              lVar9 = 0;
              do {
                local_b8 = *(undefined8 *)((longlong)local_58 + lVar11 + -8);
                local_b0 = *(longlong *)((longlong)local_58 + lVar11);
                if (local_b0 != 0) {
                  LOCK();
                  *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
                  UNLOCK();
                }
                (**(code **)(*plVar6 + 0x28))(plVar6,&local_b8,1,0);
                lVar9 = lVar9 + 1;
                lVar11 = lVar11 + 0x10;
              } while (lVar9 < local_50);
            }
            (**(code **)(*plVar6 + 0x40))(plVar6);
            goto LAB_146aad019;
          }
        }
        if ((char)uVar10 != '\0') goto LAB_146aad019;
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar12 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
  }
  FUN_146af5694(param_1,param_2,param_3,param_4);
LAB_146aacf17:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146aad6fc FUN_146aad6fc body=421 status=ok
// SIG undefined FUN_146aad6fc(void)

undefined8 * FUN_146aad6fc(longlong param_1,undefined8 *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *param_3;
  plVar5 = (longlong *)param_3[1];
  local_40 = uVar4;
  if (plVar5 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_38 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  iVar7 = FUN_146aad8a2((longlong *)(param_1 + 8),uVar6 >> 0x10 ^ uVar6,&local_40);
  plVar3 = local_38;
  if (iVar7 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 8);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (lVar8 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *(undefined8 *)(lVar8 + 0x10);
    lVar8 = *(longlong *)(lVar8 + 0x18);
    param_2[1] = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aad8a2 FUN_146aad8a2 body=228 status=ok
// SIG undefined FUN_146aad8a2(void)

int FUN_146aad8a2(longlong *param_1,uint param_2,longlong *param_3)

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
      lVar5 = *(longlong *)(*param_1 + lVar8 * 0x28);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8 * 0x28);
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
      iVar3 = *(int *)(*param_1 + 0x20 + lVar8 * 0x28);
    }
  }
  return -1;
}



// FUNCTION 146aad986 FUN_146aad986 body=435 status=ok
// SIG undefined FUN_146aad986(void)

undefined8 *
FUN_146aad986(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,byte param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *param_3;
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (((*(int *)(param_1 + 0x810) == 0) || (*(longlong **)(param_1 + 0x808) == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x30))(), cVar3 == '\0')) {
LAB_146aadab3:
    *param_2 = uVar5;
    param_2[1] = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_146aadae3;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x8b0);
    if (plVar4 == (longlong *)0x0) {
      local_68 = 0;
      local_60 = 0;
    }
    else {
      (**(code **)(*plVar4 + 8))(plVar4,&local_68);
    }
    plVar4 = plVar6;
    while( true ) {
      plVar6 = plVar4;
      param_4 = param_4 + (param_5 - 1 | 1);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x810) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x808);
      }
      local_58 = uVar5;
      local_50 = plVar6;
      cVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,&local_58);
      if (cVar3 != '\0') goto LAB_146aadab3;
      if (((int)param_4 < 0) || (local_60 <= (int)param_4)) break;
      uVar5 = *(undefined8 *)(local_68 + (ulonglong)param_4 * 0x10);
      plVar4 = *(longlong **)(local_68 + 8 + (ulonglong)param_4 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)();
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))();
          }
        }
      }
    }
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    if (plVar6 == (longlong *)0x0) goto LAB_146aadae3;
  }
  LOCK();
  plVar4 = plVar6 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_146aadae3:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146aadb3a FUN_146aadb3a body=140 status=ok
// SIG undefined FUN_146aadb3a(void)

undefined8 * FUN_146aadb3a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28);
  *param_1 = &PTR_FUN_149f17a00;
  param_1[0xd] = &PTR_FUN_149f17af0;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aadbc8 FUN_146aadbc8 body=38 status=ok
// SIG undefined FUN_146aadbc8(void)

undefined8 FUN_146aadbc8(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146aadbf4 FUN_146aadbf4 body=877 status=ok
// SIG undefined FUN_146aadbf4(void)

longlong * FUN_146aadbf4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar10 = *(longlong **)(param_1 + -0x48), plVar10 != (longlong *)0x0)) &&
     (0 < (int)plVar10[1])) {
    lVar9 = 0;
    iVar8 = (int)plVar10[1];
    do {
      iVar7 = iVar8;
      if (iVar7 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_146aadcac;
      }
      LOCK();
      iVar8 = (int)plVar10[1];
      bVar11 = iVar7 == iVar8;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
        iVar8 = iVar7;
      }
      UNLOCK();
    } while (!bVar11);
    lVar9 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
LAB_146aadcac:
    FUN_146a38fda(param_2,*(int *)(lVar9 + 0x708) - *(int *)(lVar9 + 0x734));
    local_60 = (longlong *)(lVar9 + 0x710);
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(lVar9 + 0x728) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_78 = local_58;
    uVar6 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = (longlong *)(lVar9 + 0x700);
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar6;
      do {
        FUN_146aad6fc(lVar9 + 0x4e0,&local_68,(longlong)iVar8 * 0x18 + *local_90);
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x58))(local_68,&local_b0);
          plVar1 = local_a8;
          local_a0 = local_b0;
          local_98 = local_a8;
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
            UNLOCK();
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_a8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
          }
          FUN_146974758(&local_b0,&local_a0);
          plVar1 = local_a8;
          lVar5 = local_b0;
          if (local_a8 == (longlong *)0x0) {
            if (local_b0 != 0) goto LAB_146aade40;
          }
          else {
            LOCK();
            *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
            UNLOCK();
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_a8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            if (lVar5 != 0) {
LAB_146aade40:
              iVar8 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                FUN_14697b806(param_2,iVar8);
              }
              lVar4 = *param_2;
              *(longlong *)(lVar4 + (longlong)iVar8 * 0x10) = lVar5;
              *(longlong **)(lVar4 + 8 + (longlong)iVar8 * 0x10) = plVar1;
              if (plVar1 == (longlong *)0x0) goto LAB_146aade8c;
              LOCK();
              *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
              UNLOCK();
            }
            LOCK();
            plVar3 = plVar1 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar1)(plVar1);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
LAB_146aade8c:
          plVar1 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_98 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
        }
        plVar1 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_60 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
    local_78 = uVar6;
    if (iVar7 != 0) {
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146aadf62 FUN_146aadf62 body=213 status=ok
// SIG undefined FUN_146aadf62(void)

ulonglong FUN_146aadf62(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar9 = *(longlong **)(param_1 + -0x48), plVar9 == (longlong *)0x0)) || ((int)plVar9[1] < 1)
     ) {
    uVar8 = 0;
  }
  else {
    lVar7 = 0;
    iVar4 = (int)plVar9[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_146aadfcb;
      }
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar10 = iVar3 == iVar4;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar10);
    lVar7 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
LAB_146aadfcb:
    if (((*(int *)(lVar7 + 0x3a0) != 0) && (*(longlong **)(lVar7 + 0x398) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(lVar7 + 0x398) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(lVar7 + 0x3a0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar7 + 0x398);
      }
      uVar5 = (**(code **)(*plVar6 + 0x58))();
      *(undefined4 *)(lVar7 + 0x390) = uVar5;
    }
    uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),*(int *)(lVar7 + 0x390) == 3);
    if (iVar3 != 0) {
      LOCK();
      plVar6 = plVar9 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  return uVar8 & 0xffffffff;
}



// FUNCTION 146aae03c FUN_146aae03c body=92 status=ok
// SIG undefined FUN_146aae03c(void)

void FUN_146aae03c(longlong param_1)

{
  FUN_146aae098(param_1 + 0xc0,param_1 + 0xa8);
  FUN_145cf7175(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_146ab8eb4(param_1 + 0xa8,0);
  }
  FUN_146aae0f8(param_1);
  return;
}



// FUNCTION 146aae098 FUN_146aae098 body=95 status=ok
// SIG undefined FUN_146aae098(void)

undefined8 * FUN_146aae098(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145cf7175(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146aae5d2(param_1,iVar1);
      FUN_146aae634(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146aae0f8 FUN_146aae0f8 body=1241 status=ok
// SIG undefined FUN_146aae0f8(void)

void FUN_146aae0f8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  longlong *local_88;
  undefined2 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = param_1 + 0x18;
  if (0 < (int)param_1[0x19]) {
    plVar1 = param_1 + 1;
    local_d0 = param_1 + 0xb;
    local_c0 = param_1 + 3;
    lVar11 = 0;
    do {
      plVar8 = *(longlong **)(*local_c8 + lVar11 * 0x10);
      plVar9 = *(longlong **)(*local_c8 + 8 + lVar11 * 0x10);
      local_b8 = plVar8;
      local_78 = plVar8;
      local_70 = plVar9;
      if (plVar9 == (longlong *)0x0) {
LAB_146aae1a2:
        local_b0 = (longlong *)0x0;
        bVar4 = true;
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        if (plVar9 == (longlong *)0x0) goto LAB_146aae1a2;
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_b0 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar3 = (int *)((longlong)plVar9 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        bVar4 = false;
      }
      uVar6 = ((uint)((ulonglong)plVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar8 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      iVar7 = FUN_146aad8a2(plVar1,uVar6 >> 0x10 ^ uVar6,&local_b8);
      plVar8 = local_b0;
      if (iVar7 == -1) {
        lVar10 = 0;
      }
      else {
        lVar10 = (longlong)iVar7 * 0x28 + *plVar1;
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_b0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (!bVar4) {
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      plVar8 = local_70;
      if (lVar10 == 0) {
        if ((local_78 == (longlong *)0x0) &&
           (plVar8 = (longlong *)FUN_146aae662(local_d0,&local_78), plVar8 != (longlong *)0x0)) {
          local_68 = (longlong *)&DAT_100000000;
          local_60 = local_c0;
          local_58 = 0xffffffff;
          local_50 = 0;
          if ((int)param_1[6] != 0) {
            FUN_1449c0562(&local_68);
          }
          local_a0 = local_58;
          uVar5 = local_a0;
          local_98 = local_50;
          local_94 = local_4c;
          local_b0 = local_68;
          local_a8 = local_60;
          local_80 = 0;
          local_a0._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          bVar4 = local_a0._4_4_ < (int)local_60[3];
          iVar7 = local_a0._4_4_;
          local_b8 = plVar1;
          local_a0 = uVar5;
          local_90 = plVar1;
          local_88 = plVar1;
          if (bVar4) {
            do {
              if (*(longlong *)(*local_b8 + 0x10 + (longlong)iVar7 * 0x28) == *plVar8) {
                FUN_146aae8e0(local_90);
                local_80 = CONCAT11(local_80._1_1_,1);
                goto LAB_146aae504;
              }
              local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
              FUN_1449c0562(&local_b0);
              iVar7 = local_a0._4_4_;
            } while (local_a0._4_4_ < (int)local_a8[3]);
            if ((local_80 & 1) != 0) {
LAB_146aae504:
              if (local_80._1_1_ == '\x01') {
                FUN_146aaebe0(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
              }
            }
          }
          FUN_146aae9e6(local_d0,*plVar8);
        }
      }
      else {
        local_68 = *(longlong **)(lVar10 + 0x10);
        local_60 = *(longlong **)(lVar10 + 0x18);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        if (local_70 == (longlong *)0x0) {
          local_b8 = local_78;
          local_b0 = (longlong *)0x0;
          FUN_146aae75c(plVar1,&local_b8);
        }
        else {
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
          local_b8 = local_78;
          local_b0 = local_70;
          LOCK();
          *(int *)(local_70 + 1) = (int)local_70[1] + 1;
          UNLOCK();
          FUN_146aae75c(plVar1,&local_b8);
          LOCK();
          plVar9 = plVar8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        FUN_146aae9e6(local_d0,local_68);
        if (*param_1 != 0) {
          (**(code **)(*local_68 + 8))();
          if ((*(int *)(*param_1 + 0x6d8) != 0) &&
             (plVar8 = *(longlong **)(*param_1 + 0x6d0), plVar8 != (longlong *)0x0)) {
            (**(code **)(*plVar8 + 0x60))(plVar8,&local_68);
          }
        }
        plVar8 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_60 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      plVar8 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_70 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x19]);
  }
  iVar7 = *(int *)((longlong)param_1 + 0xcc);
  FUN_145cf7175(param_1[0x18]);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((iVar7 < 0) && (*(int *)((longlong)param_1 + 0xcc) != 0)) {
    FUN_146ab8eb4(local_c8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146aae5d2 FUN_146aae5d2 body=98 status=ok
// SIG undefined FUN_146aae5d2(void)

void FUN_146aae5d2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146aae634 FUN_146aae634 body=45 status=ok
// SIG undefined FUN_146aae634(void)

void FUN_146aae634(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146aae662 FUN_146aae662 body=248 status=ok
// SIG undefined FUN_146aae662(void)

longlong FUN_146aae662(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x20) == *param_2) {
        lVar1 = *local_60 + (longlong)iStack_44 * 0x20;
        goto LAB_146aae738;
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  lVar1 = 0;
LAB_146aae738:
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aae75c FUN_146aae75c body=387 status=ok
// SIG undefined FUN_146aae75c(void)

undefined8 FUN_146aae75c(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  
  uVar9 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar8 = *param_2;
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
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
    uVar5 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar8 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
    iVar6 = *(int *)((longlong)plVar7 + uVar8 * 4);
    if (iVar6 != -1) {
      puVar10 = (ulonglong *)((longlong)plVar7 + uVar8 * 4);
      do {
        puVar11 = (ulonglong *)((longlong)iVar6 * 0x28 + *param_1);
        uVar8 = *param_2;
        plVar7 = (longlong *)param_2[1];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        uVar3 = *puVar11;
        plVar4 = (longlong *)puVar11[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
        if (uVar3 == uVar8) {
          FUN_146aae8e0(param_1,(int)*puVar10);
          uVar9 = 1;
          goto LAB_146aae779;
        }
        iVar6 = (int)puVar11[4];
        puVar10 = puVar11 + 4;
      } while (iVar6 != -1);
      uVar9 = 0;
    }
  }
LAB_146aae779:
  plVar7 = (longlong *)param_2[1];
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
  return uVar9;
}



// FUNCTION 146aae8e0 FUN_146aae8e0 body=123 status=ok
// SIG undefined FUN_146aae8e0(void)

void FUN_146aae8e0(longlong *param_1,int param_2)

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
  FUN_146aacd4e((longlong)param_2 * 0x28 + *param_1);
  FUN_146aae95c(param_1,param_2,1);
  return;
}



// FUNCTION 146aae95c FUN_146aae95c body=138 status=ok
// SIG undefined FUN_146aae95c(void)

void FUN_146aae95c(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146aae9e6 FUN_146aae9e6 body=154 status=ok
// SIG undefined FUN_146aae9e6(void)

undefined8 FUN_146aae9e6(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_146aaea80(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146aaea80 FUN_146aaea80 body=96 status=ok
// SIG undefined FUN_146aaea80(void)

void FUN_146aaea80(longlong *param_1,int param_2)

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
  FUN_146aaeae0(param_1,param_2,1);
  return;
}



// FUNCTION 146aaeae0 FUN_146aaeae0 body=117 status=ok
// SIG undefined FUN_146aaeae0(void)

void FUN_146aaeae0(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 0x10);
    iVar4 = param_3;
    do {
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_146aaeb56(param_1,param_2,param_3);
  return;
}



// FUNCTION 146aaeb56 FUN_146aaeb56 body=138 status=ok
// SIG undefined FUN_146aaeb56(void)

void FUN_146aaeb56(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 146aaebe0 FUN_146aaebe0 body=79 status=ok
// SIG undefined FUN_146aaebe0(void)

undefined8 FUN_146aaebe0(longlong param_1,uint param_2,char param_3)

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
    FUN_146aaec30(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 146aaec30 FUN_146aaec30 body=527 status=ok
// SIG undefined FUN_146aaec30(void)

void FUN_146aaec30(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar4 + lVar6 * 0x28);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar6 * 0x28);
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
        lVar4 = lVar4 + lVar6 * 0x28;
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar4 + 0x24) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
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



// FUNCTION 146aaee40 FUN_146aaee40 body=669 status=ok
// SIG undefined FUN_146aaee40(void)

void FUN_146aaee40(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong *local_60;
  ulonglong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar4 = (ulonglong *)*param_2;
  puVar5 = (ulonglong *)param_2[1];
  plVar9 = param_1 + 1;
  local_60 = puVar4;
  if (puVar5 == (ulonglong *)0x0) {
    local_58 = (ulonglong *)0x0;
  }
  else {
    LOCK();
    *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
    UNLOCK();
    local_58 = puVar5;
    if (puVar5 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
      UNLOCK();
      LOCK();
      puVar2 = puVar5 + 1;
      *(int *)puVar2 = (int)*puVar2 + -1;
      UNLOCK();
      if ((int)*puVar2 == 0) {
        (**(code **)*puVar5)(puVar5);
        LOCK();
        piVar3 = (int *)((longlong)puVar5 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*puVar5 + 0x10))(puVar5);
        }
      }
    }
  }
  uVar10 = ((uint)((ulonglong)puVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar4 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  iVar11 = FUN_146aad8a2(plVar9,uVar10 >> 0x10 ^ uVar10,&local_60);
  puVar4 = local_58;
  bVar12 = true;
  if (iVar11 != -1) {
    bVar12 = (longlong)iVar11 * 0x28 + *plVar9 == 0;
  }
  if (local_58 != (ulonglong *)0x0) {
    LOCK();
    puVar2 = local_58 + 1;
    *(int *)puVar2 = (int)*puVar2 + -1;
    UNLOCK();
    if ((int)*puVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)puVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*puVar4 + 0x10))(puVar4);
      }
    }
  }
  if (puVar5 != (ulonglong *)0x0) {
    LOCK();
    puVar4 = puVar5 + 1;
    *(int *)puVar4 = (int)*puVar4 + -1;
    UNLOCK();
    if ((int)*puVar4 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar3 = (int *)((longlong)puVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*puVar5 + 0x10))(puVar5);
      }
    }
  }
  if (bVar12) {
    local_60 = param_2;
    local_58 = param_3;
    FUN_146aaf164(plVar9,&local_68,&local_60,0);
    local_68 = *param_3;
    local_60 = &local_68;
    local_58 = param_2;
    FUN_146aaf4fc(param_1 + 0xb,local_4c,&local_60,0);
    (*(code *)**(undefined8 **)*param_3)();
    uVar6 = *param_1;
    local_78 = *param_2;
    local_70 = param_2[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    FUN_146aaf0de(uVar6,&local_78,param_3);
  }
  local_60 = param_2;
  FUN_146aafaa2(param_1 + 0x18);
  iVar11 = *(int *)(param_1 + 0x16);
  *(uint *)(param_1 + 0x16) = iVar11 + 1U;
  if (*(uint *)((longlong)param_1 + 0xb4) < iVar11 + 1U) {
    FUN_145c1cf0e(param_1 + 0x15,iVar11);
  }
  lVar7 = param_1[0x15];
  *(ulonglong *)(lVar7 + (longlong)iVar11 * 0x10) = *param_2;
  uVar8 = param_2[1];
  *(ulonglong *)(lVar7 + 8 + (longlong)iVar11 * 0x10) = uVar8;
  if (uVar8 != 0) {
    LOCK();
    *(int *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1;
    UNLOCK();
    plVar9 = (longlong *)param_2[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar3 = (int *)((longlong)plVar9 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aaf0de FUN_146aaf0de body=132 status=ok
// SIG undefined FUN_146aaf0de(void)

void FUN_146aaf0de(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_146aafa08(param_1 + 0x680,&local_20);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aaf164 FUN_146aaf164 body=430 status=ok
// SIG undefined FUN_146aaf164(void)

undefined4 *
FUN_146aaf164(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146aaf314(param_1,local_50);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (ulonglong *)param_3[1];
  *local_48 = *puVar3;
  uVar8 = puVar3[1];
  local_48[1] = uVar8;
  if (uVar8 != 0) {
    LOCK();
    *(int *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1;
    UNLOCK();
  }
  local_48[2] = *puVar4;
  uVar8 = puVar4[1];
  local_48[3] = uVar8;
  if (uVar8 != 0) {
    LOCK();
    *(int *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_48 + 4) = 0xffffffff;
  local_54 = local_50[0];
  uVar8 = *local_48;
  plVar5 = (longlong *)local_48[1];
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
  uVar7 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  local_68 = param_4;
  cVar6 = FUN_146aaf3fa(param_1,uVar7,local_48,&local_54);
  if (cVar6 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar9) {
      uVar8 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_48 + 0x24) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 4) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_146aaec30(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aaf314 FUN_146aaf314 body=230 status=ok
// SIG undefined FUN_146aaf314(void)

int * FUN_146aaf314(longlong *param_1,int *param_2)

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



// FUNCTION 146aaf3fa FUN_146aaf3fa body=256 status=ok
// SIG undefined FUN_146aaf3fa(void)

void FUN_146aaf3fa(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined1 uVar12;
  int iVar13;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    local_40 = (longlong *)param_3[1];
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    iVar13 = FUN_146aad8a2(param_1,param_2,&local_48);
    plVar11 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (iVar13 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x28);
      FUN_146aacd4e(puVar3);
      uVar4 = *(undefined4 *)param_3;
      uVar5 = *(undefined4 *)((longlong)param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 1);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar9 = *(undefined4 *)(param_3 + 3);
      uVar10 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar8;
      puVar3[6] = uVar9;
      puVar3[7] = uVar10;
      *puVar3 = uVar4;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      FUN_146aae95c(param_1,*param_4,1);
      *param_4 = iVar13;
      uVar12 = 1;
      goto LAB_146aaf42a;
    }
  }
  uVar12 = 0;
LAB_146aaf42a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar12;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aaf4fc FUN_146aaf4fc body=361 status=ok
// SIG undefined FUN_146aaf4fc(void)

undefined4 *
FUN_146aaf4fc(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146aaf666(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar5 = *(ulonglong *)*param_3;
  *local_40 = uVar5;
  local_40[1] = *puVar1;
  uVar2 = puVar1[1];
  local_40[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar5 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_58 = param_4;
  cVar3 = FUN_146aaf74c(param_1,uVar4,local_40);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_146aaf82a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aaf666 FUN_146aaf666 body=229 status=ok
// SIG undefined FUN_146aaf666(void)

int * FUN_146aaf666(longlong *param_1,int *param_2)

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



// FUNCTION 146aaf74c FUN_146aaf74c body=221 status=ok
// SIG undefined FUN_146aaf74c(void)

void FUN_146aaf74c(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          plVar9 = *(longlong **)(puVar3 + 4);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_146aaeb56(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_146aaf7c2;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_146aaf7c2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 146aaf82a FUN_146aaf82a body=477 status=ok
// SIG undefined FUN_146aaf82a(void)

void FUN_146aaf82a(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 146aafa08 FUN_146aafa08 body=152 status=ok
// SIG undefined FUN_146aafa08(void)

ulonglong FUN_146aafa08(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte unaff_BL;
  byte bVar4;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[1] == 0) || (param_1 = (longlong *)*param_1, param_1 == (longlong *)0x0)) {
    bVar4 = 0;
    uVar5 = 0;
  }
  else {
    local_30 = *param_2;
    local_28 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    unaff_BL = (**(code **)(*param_1 + 0x60))();
    uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
    bVar4 = 1;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar4 & unaff_BL) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aafaa2 FUN_146aafaa2 body=273 status=ok
// SIG undefined FUN_146aafaa2(void)

int FUN_146aafaa2(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar13 = 0;
    bVar12 = *plVar1 == *(longlong *)*param_2;
    iVar3 = 0;
    do {
      lVar10 = (longlong)iVar3;
      iVar8 = iVar3 + 1;
      if (iVar3 + 1 < iVar6) {
        iVar8 = iVar6;
      }
      plVar9 = plVar1 + lVar10 * 2 + 2;
      iVar4 = iVar3;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar5 = iVar8;
        if (lVar7 <= lVar11) break;
        lVar2 = *plVar9;
        iVar4 = iVar4 + 1;
        plVar9 = plVar9 + 2;
        iVar5 = iVar4;
      } while (bVar12 == (lVar2 == *(longlong *)*param_2));
      iVar8 = iVar5 - iVar3;
      if (bVar12 == false) {
        if (iVar13 != iVar3) {
          memmove(plVar1 + (longlong)iVar13 * 2,plVar1 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar13 = iVar13 + iVar8;
      }
      else {
        FUN_145cf7175(plVar1 + lVar10 * 2,iVar8);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar3 = iVar5;
    } while (lVar11 < lVar7);
    *(int *)(param_1 + 1) = iVar13;
    iVar6 = iVar6 - iVar13;
  }
  return iVar6;
}



// FUNCTION 146aafbb4 FUN_146aafbb4 body=634 status=ok
// SIG undefined FUN_146aafbb4(void)

undefined8 * FUN_146aafbb4(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar6 != 0) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar6);
    }
    FUN_146ab05e4(param_2,uVar6);
    iVar5 = 1;
    if (3 < uVar6) {
      uVar6 = (uVar6 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar5)) {
      *(int *)(param_2 + 9) = iVar5;
      FUN_146ab03d4(param_2);
    }
  }
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      uVar3 = *(ulonglong *)(*local_90 + (longlong)iStack_74 * 0x18);
      plVar4 = *(longlong **)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      local_a0 = uVar3;
      local_98 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      uVar6 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      iVar5 = FUN_146aafeaa(param_3,uVar6 >> 0x10 ^ uVar6,&local_a0);
      plVar4 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (iVar5 == -1) {
        FUN_146aaff8e(param_2,&local_68,(longlong)iStack_74 * 0x18 + *local_90,0);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146aafe30 FUN_146aafe30 body=122 status=ok
// SIG undefined FUN_146aafe30(void)

longlong FUN_146aafe30(longlong param_1,longlong param_2)

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
    FUN_146ab0790(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146aafeaa FUN_146aafeaa body=228 status=ok
// SIG undefined FUN_146aafeaa(void)

int FUN_146aafeaa(longlong *param_1,uint param_2,longlong *param_3)

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



// FUNCTION 146aaff8e FUN_146aaff8e body=439 status=ok
// SIG undefined FUN_146aaff8e(void)

undefined4 *
FUN_146aaff8e(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146ab0146(param_1,local_50);
  uVar7 = *param_3;
  *local_48 = uVar7;
  uVar3 = param_3[1];
  local_48[1] = uVar3;
  if (uVar3 == 0) {
    *(undefined4 *)(local_48 + 2) = 0xffffffff;
    local_54 = local_50[0];
  }
  else {
    LOCK();
    *(int *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)local_48[1];
    *(undefined4 *)(local_48 + 2) = 0xffffffff;
    local_54 = local_50[0];
    uVar7 = *local_48;
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
  uVar6 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  local_68 = param_4;
  cVar5 = FUN_146ab022c(param_1,uVar6,local_48,&local_54);
  if (cVar5 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_48 + 0x14) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_146ab03d4(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ab0146 FUN_146ab0146 body=230 status=ok
// SIG undefined FUN_146ab0146(void)

int * FUN_146ab0146(longlong *param_1,int *param_2)

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



// FUNCTION 146ab022c FUN_146ab022c body=285 status=ok
// SIG undefined FUN_146ab022c(void)

void FUN_146ab022c(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int iVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_50 = *param_3;
    local_48 = (longlong *)param_3[1];
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    iVar9 = FUN_146aafeaa(param_1,param_2,&local_50);
    plVar4 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (iVar9 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x18);
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
      FUN_146ab034a(param_1,*param_4,1);
      *param_4 = iVar9;
      uVar8 = 1;
      goto LAB_146ab025e;
    }
  }
  uVar8 = 0;
LAB_146ab025e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ab034a FUN_146ab034a body=138 status=ok
// SIG undefined FUN_146ab034a(void)

void FUN_146ab034a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146ab03d4 FUN_146ab03d4 body=527 status=ok
// SIG undefined FUN_146ab03d4(void)

void FUN_146ab03d4(longlong *param_1)

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



// FUNCTION 146ab05e4 FUN_146ab05e4 body=426 status=ok
// SIG undefined FUN_146ab05e4(void)

void FUN_146ab05e4(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x18 + -0x14);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
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
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 146ab0790 FUN_146ab0790 body=218 status=ok
// SIG undefined FUN_146ab0790(void)

longlong * FUN_146ab0790(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146aac87a(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 8 + lVar5);
          *(longlong *)(lVar4 + 8 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x10 + lVar5) = *(undefined8 *)(lVar2 + 0x10 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 146ab086a FUN_146ab086a body=887 status=ok
// SIG undefined FUN_146ab086a(void)

undefined4
FUN_146ab086a(longlong *param_1,undefined8 *param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  bool bVar7;
  undefined1 auStack_d8 [32];
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_146aad6fc(param_1 + 0x9c,&local_60,param_2);
  if (local_60 != (longlong *)0x0) goto LAB_146ab0956;
  local_80 = *param_2;
  local_78 = param_2[1];
  if (local_78 != 0) {
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_70,&local_80);
  plVar1 = local_58;
  plVar2 = local_68;
  local_60 = local_70;
  if (local_68 == (longlong *)0x0) {
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)0x0;
LAB_146ab0b9f:
      local_60 = local_70;
      LOCK();
      plVar2 = plVar1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x000146ab0b8b:
        if (iVar4 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    if (local_68 == local_58) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar1 = plVar2;
        goto joined_r0x000146ab0b8b;
      }
    }
    else {
      bVar7 = local_58 != (longlong *)0x0;
      local_58 = local_68;
      if (bVar7) goto LAB_146ab0b9f;
    }
  }
  plVar1 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_146ab0956:
  (**(code **)(*local_60 + 0x10))(local_60,param_3);
  local_90 = local_60;
  local_88 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  local_a0 = *param_2;
  local_98 = param_2[1];
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  FUN_146aaee40(param_1 + 0x9c,&local_a0,&local_90);
  (**(code **)(*local_60 + 0x58))(local_60,&local_70);
  *(byte *)(local_70 + 6) = *(byte *)(local_70 + 6) | 0x80;
  FUN_1405d299c(local_70,param_5);
  if (param_3 < param_4) {
    local_b0 = local_60;
    local_a8 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_146af67c8(param_1,&local_b0);
  }
  else {
    local_b0 = local_60;
    local_a8 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_146af6a2a(param_1,&local_b0);
  }
  plVar1 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_a8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((*(byte *)((longlong)local_70 + 0x39) & 0x19) == 0) {
    local_b4 = (float)DAT_14c8463f8;
    local_b8 = (float)DAT_14c8463f0;
  }
  else {
    pfVar6 = (float *)&DAT_14c84635c;
    if ((*(byte *)((longlong)local_70 + 0x31) & 0x20) != 0) {
      pfVar6 = (float *)(local_70 + 0x2d);
    }
    local_b8 = *pfVar6;
    local_b4 = pfVar6[1];
  }
  FUN_146af3580(&local_b0,*(undefined4 *)((longlong)param_1 + 0x3ec));
  uVar5 = local_b0._4_4_;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)local_68 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ab0be2 FUN_146ab0be2 body=91 status=ok
// SIG undefined FUN_146ab0be2(void)

void FUN_146ab0be2(longlong param_1)

{
  FUN_146aae098(param_1 + 0xc0,param_1 + 0xa8);
  FUN_145cf7175(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) == 0) {
    return;
  }
  FUN_146ab8eb4(param_1 + 0xa8,0);
  return;
}



// FUNCTION 146ab0c3e FUN_146ab0c3e body=152 status=ok
// SIG undefined FUN_146ab0c3e(void)

ulonglong FUN_146ab0c3e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte unaff_BL;
  byte bVar4;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[1] == 0) || (param_1 = (longlong *)*param_1, param_1 == (longlong *)0x0)) {
    bVar4 = 0;
    uVar5 = 0;
  }
  else {
    local_30 = *param_2;
    local_28 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    unaff_BL = (**(code **)(*param_1 + 0x60))();
    uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
    bVar4 = 1;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar4 & unaff_BL) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ab0cd8 FUN_146ab0cd8 body=84 status=ok
// SIG undefined FUN_146ab0cd8(void)

undefined8 FUN_146ab0cd8(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)puVar3[1];
  *puVar3 = uVar4;
  puVar3[1] = lVar5;
  if (plVar6 != (longlong *)0x0) {
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
  return *param_1;
}



// FUNCTION 146ab0d2c FUN_146ab0d2c body=125 status=ok
// SIG undefined FUN_146ab0d2c(void)

longlong * FUN_146ab0d2c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  FUN_146ab54a0(param_1[2],*param_1,param_3);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146ab0daa FUN_146ab0daa body=373 status=ok
// SIG undefined FUN_146ab0daa(void)

longlong *
FUN_146ab0daa(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x390,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f17b10;
  plVar1 = plVar4 + 2;
  FUN_146ab0f20(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_146ab53f4(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_146ab0eaf;
    param_1[1] = 0;
LAB_146ab0e72:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146ab0eaf;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_146ab0eaf;
      goto LAB_146ab0e72;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146ab0eaf;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_146ab0eaf:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x380;
  FUN_140a52e78(*param_1 + 8,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ab0f20 FUN_146ab0f20 body=202 status=ok
// SIG undefined FUN_146ab0f20(void)

undefined8 * FUN_146ab0f20(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_149f0e360;
  FUN_140a55e66(param_1 + 1);
  *param_1 = &PTR_LAB_149f17b30;
  param_1[1] = &PTR_FUN_149f17bd0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined1 *)((longlong)param_1 + 700) = 1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b) = 2;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 4;
  return param_1;
}



// FUNCTION 146ab0fea FUN_146ab0fea body=9 status=ok
// SIG undefined FUN_146ab0fea(void)

void FUN_146ab0fea(longlong param_1)

{
  FUN_146abc724(param_1 + 0x10);
  return;
}



// FUNCTION 146ab0ff4 FUN_146ab0ff4 body=29 status=ok
// SIG undefined FUN_146ab0ff4(void)

undefined8 FUN_146ab0ff4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ab1026 FUN_146ab1026 body=149 status=ok
// SIG undefined FUN_146ab1026(void)

byte FUN_146ab1026(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146ab1062;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_146ab1062:
  lVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar6);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  return lVar6 != 0 & (byte)plVar9;
}



// FUNCTION 146ab10bc FUN_146ab10bc body=248 status=ok
// SIG undefined FUN_146ab10bc(void)

void FUN_146ab10bc(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146ab110b;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_146ab110b:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,puVar7);
    local_38 = *puVar7;
    local_30 = puVar7[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar9 + 0x50))(plVar9,&local_38,uVar6 ^ 1);
  }
  if (!bVar2) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ab11b6 FUN_146ab11b6 body=149 status=ok
// SIG undefined FUN_146ab11b6(void)

byte FUN_146ab11b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146ab11f2;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_146ab11f2:
  lVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9,lVar6);
    plVar9 = (longlong *)(uVar7 & 0xffffffff);
  }
  if (!bVar3) {
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
  return lVar6 != 0 & (byte)plVar9;
}



// FUNCTION 146ab124c FUN_146ab124c body=124 status=ok
// SIG undefined FUN_146ab124c(void)

undefined4 FUN_146ab124c(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_146ab1285;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_146ab1285:
  uVar5 = (**(code **)(*plVar7 + 0x88))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return uVar5;
}



// FUNCTION 146ab12c8 FUN_146ab12c8 body=124 status=ok
// SIG undefined FUN_146ab12c8(void)

undefined1 FUN_146ab12c8(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_146ab1302;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar5 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_146ab1302:
  uVar4 = (**(code **)(*plVar7 + 0x68))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return uVar4;
}



// FUNCTION 146ab1344 FUN_146ab1344 body=144 status=ok
// SIG undefined FUN_146ab1344(void)

longlong FUN_146ab1344(longlong param_1,longlong param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_146ab1380;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_146ab1380:
  uVar5 = (**(code **)(*plVar7 + 0x90))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_144a69486(param_2,uVar5);
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_2;
}



// FUNCTION 146ab13d4 FUN_146ab13d4 body=126 status=ok
// SIG undefined FUN_146ab13d4(void)

undefined4 FUN_146ab13d4(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_146ab140e;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_146ab140e:
  uVar5 = (**(code **)(*plVar7 + 0x98))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return uVar5;
}



// FUNCTION 146ab1452 FUN_146ab1452 body=154 status=ok
// SIG undefined FUN_146ab1452(void)

longlong * FUN_146ab1452(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
LAB_146ab14db:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_146ab14db;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x10) + -8;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = 0;
    }
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
    lVar6 = lVar7 + 8;
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    *param_2 = lVar6;
    param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 146ab1550 FUN_146ab1550 body=248 status=ok
// SIG undefined FUN_146ab1550(void)

void FUN_146ab1550(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146ab159f;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_146ab159f:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,puVar7);
    local_38 = *puVar7;
    local_30 = puVar7[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,&local_38,uVar6 ^ 1);
  }
  if (!bVar2) {
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ab1658 FUN_146ab1658 body=114 status=ok
// SIG undefined FUN_146ab1658(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146ab1658(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x2b0);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0xb8))();
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146ab16c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(_DAT_00000000 + 0xb8))(0);
  return uVar7;
}



// FUNCTION 146ab16ca FUN_146ab16ca body=1489 status=ok
// SIG undefined FUN_146ab16ca(void)

void FUN_146ab16ca(longlong param_1,uint param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_6d8 [32];
  longlong **local_6b8;
  longlong local_6b0;
  undefined1 local_6a1;
  undefined1 local_6a0 [8];
  longlong *local_698;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined1 local_678;
  undefined8 local_670;
  undefined4 local_668;
  undefined4 local_660;
  undefined1 local_65c;
  undefined8 local_658;
  undefined8 uStack_650;
  longlong local_648;
  longlong *plStack_640;
  longlong *local_630;
  undefined8 local_628;
  longlong *local_620;
  undefined2 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  longlong *local_5f0;
  undefined8 local_5e8;
  longlong *local_5e0;
  undefined8 local_5d8;
  longlong *local_5d0;
  undefined8 local_5c8;
  longlong *local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined1 local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined1 local_590 [192];
  undefined1 local_4d0 [424];
  undefined8 local_328;
  undefined1 local_318 [24];
  undefined1 local_300 [16];
  undefined2 local_2f0;
  undefined1 auStack_2e8 [16];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  *(undefined8 *)(param_1 + 0x368) = *param_4;
  plVar6 = (longlong *)param_4[1];
  plVar8 = *(longlong **)(param_1 + 0x370);
  if (plVar8 != plVar6) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar6;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (param_2 < 2) {
    local_5a8 = *(undefined1 *)(param_3 + 4);
    local_5b8 = *param_3;
    uStack_5b4 = param_3[1];
    uStack_5b0 = param_3[2];
    uStack_5ac = param_3[3];
    local_5a0 = 0;
    local_598 = 0;
    FUN_140a58be0(&local_5a0,param_3 + 6);
    uVar4 = FUN_140a58d14(param_1 + 0x220,&local_5b8);
    FUN_140a58896(uVar4,param_4);
    lVar5 = param_1 + 0x200;
  }
  else {
    FUN_140a5296a(local_218);
    FUN_140a50426(local_2d8);
    lVar5 = FUN_140a52578(local_2d8);
    *(undefined4 *)(lVar5 + 0x40) = 3;
    *(undefined1 *)(lVar5 + 0x44) = 1;
    *(undefined4 *)(lVar5 + 0x48) = 0;
    *(undefined1 *)(lVar5 + 0x4c) = 1;
    FUN_146a2b81a(local_4d0);
    local_328 = *(undefined8 *)(param_1 + 0x2d0);
    local_610 = CONCAT11(1,*(undefined1 *)(param_1 + 0x37c));
    local_608 = 0;
    uStack_600 = 0;
    local_2f0 = local_610;
    FUN_144a450dc(auStack_2e8,&local_608);
    FUN_1449db362(&local_608);
    plVar6 = *(longlong **)(param_1 + 0x18);
    if (plVar6 == (longlong *)0x0) {
LAB_146ab18a2:
      local_648 = 0;
      plStack_640 = (longlong *)0x0;
    }
    else {
      iVar3 = (int)plVar6[1];
      do {
        if (iVar3 == 0) goto LAB_146ab18a2;
        LOCK();
        iVar2 = (int)plVar6[1];
        bVar9 = iVar3 == iVar2;
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar3 + 1;
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
        UNLOCK();
      } while (!bVar9);
      local_648 = *(longlong *)(param_1 + 0x10) + -8;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        local_648 = 0;
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plStack_640 = plVar6;
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    local_630 = &local_648;
    local_6b8 = &local_630;
    FUN_146ab43c2(&local_628,"SExpanderArrow","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",
                  0xca);
    if (local_620 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_620 + 1) = (int)local_620[1] + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x2d8) = local_628;
    *(longlong **)(param_1 + 0x2e0) = local_620;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_146ab434a(&local_628,&local_5f8,local_4d0);
    local_5e8 = local_5f8;
    local_5e0 = local_5f0;
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5f0 + 1) = (int)local_5f0[1] + 1;
      UNLOCK();
    }
    local_6b0 = param_1 + 0x1e8;
    uVar4 = FUN_140a4fe8e(lVar5,&local_5e8);
    uVar4 = FUN_140a52392(local_218,uVar4);
    FUN_140a50426(local_590);
    local_660 = 0x3f800000;
    local_65c = 1;
    local_658 = 0;
    uStack_650 = 0;
    plVar6 = (longlong *)FUN_140a5475a(local_590);
    lVar5 = *plVar6;
    local_688 = *param_3;
    uStack_684 = param_3[1];
    uStack_680 = param_3[2];
    uStack_67c = param_3[3];
    local_678 = *(undefined1 *)(param_3 + 4);
    local_670 = 0;
    local_668 = 0;
    FUN_140a58be0(&local_670,param_3 + 6);
    *(undefined1 *)(plVar6 + 5) = local_678;
    *(undefined4 *)(plVar6 + 3) = local_688;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_684;
    *(undefined4 *)(plVar6 + 4) = uStack_680;
    *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_67c;
    FUN_144a450dc(plVar6 + 6,&local_670);
    FUN_1449db362(&local_670);
    uVar7 = FUN_146a07044(plVar6,param_4);
    uVar4 = FUN_140a52392(uVar4,uVar7);
    local_6b8 = (longlong **)&local_6a1;
    FUN_140a541dc(local_6a0,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",
                  0xc3);
    FUN_140a50ec6(local_6a0,&local_5d8,uVar4);
    local_5c8 = local_5d8;
    local_5c0 = local_5d0;
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5d0 + 1) = (int)local_5d0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(local_6b0,&local_5c8);
    plVar6 = local_5c0;
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5c0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5d0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5d0)(local_5d0);
        LOCK();
        piVar1 = (int *)((longlong)local_5d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5d0 + 0x10))(local_5d0);
        }
      }
    }
    if (local_698 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_698 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_698)(local_698);
        LOCK();
        piVar1 = (int *)((longlong)local_698 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_698 + 0x10))(local_698);
        }
      }
    }
    FUN_140a509a6(local_590);
    plVar6 = local_5e0;
    if (local_5e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5e0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5e0)(local_5e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5f0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5f0)(local_5f0);
        LOCK();
        piVar1 = (int *)((longlong)local_5f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5f0 + 0x10))(local_5f0);
        }
      }
    }
    if (local_620 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_620 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_620)(local_620);
        LOCK();
        piVar1 = (int *)((longlong)local_620 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_620 + 0x10))(local_620);
        }
      }
    }
    plVar6 = plStack_640;
    if (plStack_640 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_640 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_640)(plStack_640);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_1449db362(auStack_2e8);
    FUN_1449db362(local_300);
    FUN_1449db362(local_318);
    FUN_140a4ff8c(local_4d0);
    FUN_140a509a6(local_2d8);
    FUN_145ab33da(local_218);
  }
  *(longlong *)(param_1 + 0x360) = lVar5;
  if ((local_60 ^ (ulonglong)auStack_6d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ab1c9c FUN_146ab1c9c body=1060 status=ok
// SIG undefined FUN_146ab1c9c(void)

int FUN_146ab1c9c(longlong param_1,int param_2,undefined8 param_3,ulonglong *param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,float *param_8)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  float *local_110;
  float *local_108;
  undefined4 local_100;
  float *local_f8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  ulonglong local_b4;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar13 = *(longlong **)(param_1 + 0x2b0);
  bVar8 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_146ab1d1f;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar16 = iVar10 == iVar9;
      if (bVar16) {
        *(int *)(plVar13 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar16);
    plVar14 = *(longlong **)(param_1 + 0x2a8);
    bVar8 = false;
  }
LAB_146ab1d1f:
  lVar15 = 0x890;
  if (param_2 == 2) {
    lVar15 = 0x940;
  }
  lVar12 = 0x7e0;
  if (param_2 != 0) {
    lVar12 = lVar15;
  }
  lVar12 = lVar12 + *(longlong *)(param_1 + 0x2c8);
  iVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
  if (iVar10 == 1) {
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_110 = &local_e4;
    local_b4 = *param_4;
    local_c8 = *(undefined8 *)((longlong)param_4 + 0xc);
    local_c0 = *(float *)(param_4 + 1);
    local_bc = 0;
    local_ac = *(float *)((longlong)param_4 + 0x1c);
    fStack_a8 = *(float *)(param_4 + 4);
    fStack_a4 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = *(float *)(param_4 + 5);
    local_9c = *(undefined8 *)((longlong)param_4 + 0x2c);
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_118 = 0;
    FUN_140239bd2(param_6,param_7,&local_c8,lVar12);
  }
  else {
    uVar7 = *param_4;
    fVar20 = (float)(uVar7 >> 0x20) * 0.5;
    fVar19 = (float)uVar7 * 0.5;
    fVar18 = fVar20 - fVar19;
    fVar17 = fVar19 - fVar20;
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_f8 = &local_e4;
    local_108 = &local_d4;
    local_cc = 1;
    local_c0 = *(float *)(param_4 + 1);
    fVar2 = *(float *)((longlong)param_4 + 0x1c);
    local_c8 = CONCAT44(fVar18 * local_c0 + *(float *)(param_4 + 2),
                        fVar17 * local_c0 + *(float *)((longlong)param_4 + 0xc));
    local_b4 = uVar7 << 0x20 | uVar7 >> 0x20;
    fVar3 = *(float *)(param_4 + 4);
    fVar4 = *(float *)(param_4 + 5);
    fVar5 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = fVar3 * 0.0 + fVar4;
    fStack_a4 = fVar2 * 0.0 + fVar5;
    fStack_a8 = fVar4 * 0.0 + fVar3;
    local_ac = fVar5 * 0.0 + fVar2;
    local_bc = 0;
    local_9c = CONCAT44(fVar17 * fVar3 + fVar18 * fVar4 + *(float *)(param_4 + 6),
                        fVar17 * fVar2 + fVar18 * fVar5 + *(float *)((longlong)param_4 + 0x2c));
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_100 = 0;
    local_110 = (float *)CONCAT44(local_110._4_4_,0xbfc90fdb);
    local_118 = 0;
    local_d4 = fVar20;
    local_d0 = fVar19;
    FUN_14695471e(param_6,param_7,&local_c8,lVar12);
  }
  if (!bVar8) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_7 + 1;
}



// FUNCTION 146ab20c2 FUN_146ab20c2 body=216 status=ok
// SIG undefined FUN_146ab20c2(void)

void FUN_146ab20c2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x368) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0x370);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar2;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1456f28da(param_1 + 8,&local_30);
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ab219c FUN_146ab219c body=802 status=ok
// SIG undefined FUN_146ab219c(void)

longlong FUN_146ab219c(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_88 [47];
  char local_59;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar13 = (longlong *)param_1[0x56];
  bVar3 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar8 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_146ab21f6;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar15 = iVar8 == iVar9;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      UNLOCK();
    } while (!bVar15);
    plVar14 = (longlong *)param_1[0x55];
    bVar3 = false;
  }
LAB_146ab21f6:
  (**(code **)(*plVar14 + 0xe8))(plVar14,&local_58);
  cVar4 = (**(code **)(*local_58 + 0x198))();
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_50 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  cVar5 = (**(code **)(*plVar14 + 0x68))(plVar14,(int)param_1[0x57]);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c990274) && (FUN_144b3d300(&DAT_14c990274), DAT_14c990274 == -1)) {
    FUN_1446ddc76(&DAT_14c99026c,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_14c990274);
  }
  plVar10 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = DAT_14c96b350;
  }
  lVar12 = 0;
  (**(code **)(*plVar10 + 0x50))(plVar10,DAT_14c99026c,0,0);
  lVar11 = (**(code **)(*plVar14 + 0x48))(plVar14,param_1);
  if (lVar11 == 0) goto LAB_146ab23bb;
  local_59 = cVar4;
  cVar4 = (**(code **)(*plVar14 + 0x10))(plVar14,lVar11);
  cVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,lVar11);
  iVar8 = (**(code **)(*param_1 + 0x78))(param_1);
  uVar2 = *(uint *)(param_1 + 0x57);
  if (cVar4 == '\0') {
    if (cVar6 == '\0') goto LAB_146ab2365;
    lVar12 = param_1[0x59];
    if (local_59 == '\0') {
      if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0xaa0;
        goto LAB_146ab23bb;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
      lVar12 = lVar12 + 0x9f0;
      goto LAB_146ab23bb;
    }
    if ((uVar2 & 1) != 0) goto LAB_146ab23b4;
  }
  else {
    if (*(char *)((longlong)param_1 + 700) == '\x01') {
      lVar12 = param_1[0x59];
      if (local_59 == '\0') {
        if (*(char *)((longlong)param_1 + 0x43) == '\0') {
          lVar12 = lVar12 + 0x2d0;
        }
        else {
          lVar12 = lVar12 + 0x220;
        }
      }
      else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0x170;
      }
      else {
        lVar12 = lVar12 + 0xc0;
      }
      goto LAB_146ab23bb;
    }
LAB_146ab2365:
    if (((cVar5 != '\0') && (*(char *)(param_1[0x59] + 0x380) == '\x01')) &&
       (iVar9 = (**(code **)(*param_1 + 0x38))(param_1), iVar9 == 0)) {
      if (*(char *)((longlong)param_1 + 0x43) == '\x01') {
        lVar12 = param_1[0x59] + 0x440;
      }
      else {
        lVar12 = param_1[0x59] + 0x390;
      }
      goto LAB_146ab23bb;
    }
    bVar7 = iVar8 != 0 & *(byte *)((longlong)param_1 + 0x43);
    lVar12 = param_1[0x59];
    if ((uVar2 & 1) != 0) {
      if (bVar7 == 0) {
        lVar12 = lVar12 + 0x700;
        goto LAB_146ab23bb;
      }
LAB_146ab23b4:
      lVar12 = lVar12 + 0x650;
      goto LAB_146ab23bb;
    }
    if (bVar7 == 0) {
      lVar12 = lVar12 + 0x5a0;
      goto LAB_146ab23bb;
    }
  }
  lVar12 = lVar12 + 0x4f0;
LAB_146ab23bb:
  if (!bVar3) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar12;
}



// FUNCTION 146ab24c0 FUN_146ab24c0 body=45 status=ok
// SIG undefined FUN_146ab24c0(void)

longlong FUN_146ab24c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_146abc724(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ab24ee FUN_146ab24ee body=1300 status=ok
// SIG undefined FUN_146ab24ee(void)

undefined1 * FUN_146ab24ee(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  undefined4 uVar12;
  undefined8 unaff_RBP;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_1a8 [36];
  undefined4 local_184;
  longlong local_180;
  longlong local_178;
  longlong *plStack_170;
  undefined1 local_168 [16];
  longlong local_158;
  longlong *plStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar13 = *(longlong **)(param_1 + 0x2a8);
  uVar12 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_146ab2550;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    plVar14 = *(longlong **)(param_1 + 0x2a0);
    uVar12 = 0;
  }
LAB_146ab2550:
  *(undefined2 *)(param_1 + 0x370) = 0;
  lVar10 = *(longlong *)(param_4 + 0x40);
  plVar3 = *(longlong **)(param_4 + 0x50);
  local_180 = param_4;
  if (plVar3 == (longlong *)0x0) {
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
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
  if (((lVar10 != lVar4) ||
      (iVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x78))((longlong *)(param_1 + -8)),
      iVar6 == 0)) ||
     (puVar8 = (undefined8 *)(**(code **)(*plVar14 + 0x48))(plVar14), puVar8 == (undefined8 *)0x0))
  {
    cVar11 = (char)uVar12;
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_146ab2796;
  }
  local_184 = uVar12;
  uVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  if (iVar6 == 3) {
    if ((*(ushort *)(local_180 + 8) & 3) == 0) {
      if ((*(ushort *)(local_180 + 8) & 0xc) == 0) goto LAB_146ab2675;
      local_120 = *puVar8;
      local_118 = puVar8[1];
      if (local_118 != 0) {
        LOCK();
        *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar14 + 0x28))(plVar14,&local_120,uVar7 ^ 1,1);
    }
    else {
      local_110 = *puVar8;
      local_108 = puVar8[1];
      if (local_108 != 0) {
        LOCK();
        *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar14 + 0x38))(plVar14);
    }
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
LAB_146ab2675:
  if ((((char)uVar7 == '\0') || (*(char *)(param_1 + 0x373) != '\0')) &&
     (*(char *)(param_1 + 0x370) == '\0')) {
    (**(code **)(*plVar14 + 0x30))(plVar14);
    local_130 = *puVar8;
    local_128 = puVar8[1];
    if (local_128 != 0) {
      LOCK();
      *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_130,1,1);
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
  local_100[0] = 1;
  local_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  memset(local_d8,0,0x88);
  local_50 = 0x20702;
  local_4c = 0;
  local_148 = (undefined4)DAT_14c966e98;
  uStack_144 = DAT_14c966e98._4_4_;
  uStack_140 = (undefined4)DAT_14c966ea0;
  uStack_13c = DAT_14c966ea0._4_4_;
  local_138 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_146ab27f0:
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
    bVar15 = true;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_146ab27f0;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
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
    local_158 = lVar10 + 8;
    if (lVar10 == 0) {
      local_158 = 0;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    bVar15 = false;
    plStack_150 = plVar3;
  }
  plVar3 = plStack_150;
  uVar9 = FUN_1407c9a0c(local_100,&local_158,&local_148);
  (**(code **)(*plVar14 + 0xe8))(plVar14,local_168);
  uVar9 = FUN_140592b68(uVar9,local_168,0,0);
  plVar14 = *(longlong **)(param_1 + 0x10);
  if (plVar14 == (longlong *)0x0) {
LAB_146ab28ad:
    local_178 = 0;
    plStack_170 = (longlong *)0x0;
    bVar16 = true;
  }
  else {
    iVar6 = (int)plVar14[1];
    do {
      if (iVar6 == 0) goto LAB_146ab28ad;
      LOCK();
      iVar5 = (int)plVar14[1];
      bVar16 = iVar6 == iVar5;
      if (bVar16) {
        *(int *)(plVar14 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar16);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    local_178 = lVar10 + 8;
    if (lVar10 == 0) {
      local_178 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    bVar16 = false;
    plStack_170 = plVar14;
  }
  plVar14 = plStack_170;
  uVar9 = FUN_140592a6e(uVar9,&local_178);
  FUN_1403d4c6e(param_2,uVar9);
  if (!bVar16) {
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  plVar14 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (!bVar15) {
    LOCK();
    plVar14 = plVar3 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_14493db24(local_100);
  cVar11 = (char)local_184;
LAB_146ab2796:
  if (cVar11 == '\0') {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146ab2a04 FUN_146ab2a04 body=1907 status=ok
// SIG undefined FUN_146ab2a04(void)

undefined1 * FUN_146ab2a04(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1b8 [36];
  undefined4 local_194;
  undefined1 *local_190;
  longlong *local_188;
  float *local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar16 = *(longlong **)(param_1 + 0x2a8);
  local_190 = param_2;
  local_180 = param_3;
  if (plVar16 == (longlong *)0x0) {
    local_194 = (undefined4)CONCAT71((int7)(local_80 >> 8),1);
LAB_146ab2acb:
    plVar12 = (longlong *)0x0;
    plVar15 = (longlong *)0x0;
    plVar16 = (longlong *)0x0;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(plVar16 + 1);
    do {
      uVar8 = (uint)uVar10;
      if (uVar8 == 0) {
        local_194 = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
        goto LAB_146ab2acb;
      }
      LOCK();
      uVar3 = *(uint *)(plVar16 + 1);
      if (uVar8 == uVar3) {
        *(uint *)(plVar16 + 1) = uVar8 + 1;
      }
      else {
        uVar10 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar8 != uVar3);
    plVar15 = *(longlong **)(param_1 + 0x2a0);
    plVar12 = plVar15 + -0x9b;
    if (plVar15 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
    }
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar16 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      local_194 = 0;
    }
    else {
      local_194 = 0;
    }
  }
  local_188 = (longlong *)(param_1 + -8);
  lVar14 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  if (plVar4 == (longlong *)0x0) {
    if (lVar14 == DAT_14c966e98) goto LAB_146ab2b3d;
LAB_146ab2deb:
    puVar13 = local_190;
    if ((lVar14 != DAT_14c966fa0) || (cVar6 = FUN_146af41be(plVar12), cVar6 != '\0'))
    goto LAB_146ab2f31;
LAB_146ab2e6f:
    iVar9 = (**(code **)(*local_188 + 0x78))();
    if ((2 < iVar9 - 1U) ||
       (puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15),
       puVar11 == (undefined8 *)0x0)) goto LAB_146ab2f31;
    cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar11);
    if (cVar6 == '\0') {
      (**(code **)(*plVar15 + 0x30))(plVar15);
      local_168 = *puVar11;
      local_160 = puVar11[1];
      if (local_160 != 0) {
        LOCK();
        *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar15 + 0x28))(plVar15,&local_168,1,1);
      (**(code **)(*plVar15 + 0x40))(plVar15,2);
    }
    local_178 = *puVar11;
    local_170 = puVar11[1];
    if (local_170 != 0) {
      LOCK();
      *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar15 + 0xa0))(plVar15,&local_178,param_4);
    *puVar13 = 1;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c966e98;
    UNLOCK();
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
    puVar13 = local_190;
    if (lVar14 != lVar5) {
      lVar14 = *(longlong *)(param_4 + 0x40);
      plVar4 = *(longlong **)(param_4 + 0x50);
      if (plVar4 == (longlong *)0x0) goto LAB_146ab2deb;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (lVar14 == DAT_14c966fa0) {
        cVar6 = FUN_146af41be(plVar12);
        puVar13 = local_190;
        LOCK();
        plVar12 = plVar4 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        if (cVar6 == '\0') goto LAB_146ab2e6f;
      }
      else {
        LOCK();
        plVar12 = plVar4 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      goto LAB_146ab2f31;
    }
LAB_146ab2b3d:
    local_138 = local_138 & 0xffffffffffffff00;
    local_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    memset(local_110,0,0x88);
    puVar13 = local_190;
    local_88 = 0x20702;
    local_100 = 0;
    uStack_f8 = 0;
    local_84 = 1;
    FUN_1403d4c6e(local_190);
    FUN_14493db24(&local_138);
    if (*(char *)(param_1 + 0x370) == '\x01') {
      local_138 = CONCAT71(local_138._1_7_,1);
      local_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      memset(local_110,0,0x88);
      puVar13 = local_190;
      local_88 = 0x20702;
      local_100 = 0;
      uStack_f8 = 0;
      local_84 = 1;
      FUN_1402c17c2(local_190,&local_138);
      FUN_14493db24(&local_138);
    }
    fVar18 = local_180[8] * 0.0;
    fVar19 = local_180[7] * 0.0;
    fVar17 = local_180[10] * 0.0;
    fVar20 = local_180[9] * 0.0;
    local_138 = CONCAT44(fVar17 + fVar18 + local_180[0xc],fVar20 + fVar19 + local_180[0xb]);
    local_130 = CONCAT44(*local_180 * local_180[8] + fVar17,*local_180 * local_180[7] + fVar20);
    uStack_128 = CONCAT44(local_180[10] * local_180[1] + fVar18,local_180[1] * local_180[9] + fVar19
                         );
    cVar6 = FUN_1402b2a42();
    cVar7 = FUN_140591fd6(param_1);
    if (cVar7 != '\0') {
      if ((cVar6 != '\0') && (*(char *)(param_1 + 0x371) == '\0')) {
        iVar9 = (**(code **)(*local_188 + 0x78))();
        if (iVar9 == 3) {
          if ((((*(char *)(param_1 + 0x370) == '\0') && ((*(byte *)(param_4 + 8) & 0xf) == 0)) &&
              (puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15,local_188),
              puVar11 != (undefined8 *)0x0)) &&
             ((cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar11), cVar6 != '\0' &&
              (iVar9 = (**(code **)(*plVar15 + 0x70))(plVar15), 1 < iVar9)))) {
            (**(code **)(*plVar15 + 0x30))(plVar15);
            local_148 = *puVar11;
            local_140 = puVar11[1];
            if (local_140 != 0) {
              LOCK();
              *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
              UNLOCK();
            }
            (**(code **)(*plVar15 + 0x28))(plVar15,&local_148,1,1);
            (**(code **)(*plVar15 + 0x40))(plVar15);
            goto LAB_146ab306e;
          }
        }
        else if (iVar9 == 2) {
          if (*(char *)(param_1 + 0x370) == '\0') {
            (**(code **)(*plVar15 + 0x30))(plVar15);
            (**(code **)(*plVar15 + 0x40))(plVar15);
          }
LAB_146ab306e:
          local_138 = CONCAT71(local_138._1_7_,1);
          local_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          memset(local_110,0,0x88);
          puVar13 = local_190;
          local_88 = 0x20702;
          local_100 = 0;
          uStack_f8 = 0;
          local_84 = 1;
          FUN_1402c17c2(local_190,&local_138);
          FUN_14493db24(&local_138);
        }
      }
      puVar11 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15,local_188);
      if (puVar11 != (undefined8 *)0x0) {
        local_158 = *puVar11;
        local_150 = puVar11[1];
        if (local_150 != 0) {
          LOCK();
          *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar15 + 0xa8))(plVar15);
        if (cVar6 != '\0') {
          local_138 = CONCAT71(local_138._1_7_,1);
          local_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          memset(local_110,0,0x88);
          puVar13 = local_190;
          local_88 = 0x20702;
          local_100 = 0;
          uStack_f8 = 0;
          local_84 = 1;
          FUN_1402c17c2(local_190,&local_138);
          FUN_14493db24(&local_138);
        }
      }
      if (((*(char *)(param_1 + 0x370) == '\x01') && (*(char *)(param_1 + 0x371) == '\0')) &&
         (*(int *)(param_1 + 0x2b8) == 0)) {
        (**(code **)(*plVar15 + 0x40))(plVar15,2);
      }
      goto LAB_146ab2f63;
    }
    FUN_14493db24(puVar13);
LAB_146ab2f31:
    *puVar13 = 0;
  }
  puVar13[0x20] = 0;
  *(undefined8 *)(puVar13 + 8) = 0;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  memset(puVar13 + 0x28,0,0x88);
  *(undefined4 *)(puVar13 + 0xb0) = 0x20702;
  puVar13[0xb4] = 0;
LAB_146ab2f63:
  if ((char)local_194 == '\0') {
    LOCK();
    plVar12 = plVar16 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    LOCK();
    plVar12 = plVar16 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar13;
}



// FUNCTION 146ab3178 FUN_146ab3178 body=426 status=ok
// SIG undefined FUN_146ab3178(void)

undefined1 * FUN_146ab3178(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_4 + 0x40);
  plVar9 = *(longlong **)(param_4 + 0x50);
  lVar4 = DAT_14c966e98;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    lVar4 = DAT_14c966e98;
    UNLOCK();
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (lVar2 == lVar4) {
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = true;
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      plVar10 = (longlong *)0x0;
      do {
        if (iVar7 == 0) {
          plVar9 = (longlong *)0x0;
          goto LAB_146ab3220;
        }
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar11 = iVar7 == iVar5;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar11);
      plVar10 = *(longlong **)(param_1 + 0x2a0);
      bVar3 = false;
    }
LAB_146ab3220:
    puVar8 = (undefined8 *)(**(code **)(*plVar10 + 0x48))(plVar10);
    if (puVar8 != (undefined8 *)0x0) {
      local_48 = *puVar8;
      local_40 = puVar8[1];
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      cVar6 = (**(code **)(*plVar10 + 0xb0))(plVar10);
      if (cVar6 == '\0') {
        (**(code **)(*(longlong *)(param_1 + -8) + 0x28))((longlong *)(param_1 + -8));
      }
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
    }
    if (!bVar3) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    if (puVar8 != (undefined8 *)0x0) goto LAB_146ab32f5;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146ab32f5:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}


