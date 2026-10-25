// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1485d48bc FUN_1485d48bc body=144 status=ok
// SIG undefined FUN_1485d48bc(void)

undefined8 * FUN_1485d48bc(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  void *_Src;
  longlong *plVar5;
  
  puVar4 = (undefined8 *)*param_2;
  if (puVar4 == (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    iVar3 = *(int *)(puVar4 + 1);
    _Src = (void *)*puVar4;
    *(int *)(param_1 + 1) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_144721d4c(param_1,iVar3,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar3 << 4);
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



// FUNCTION 1485d494c FUN_1485d494c body=475 status=ok
// SIG undefined FUN_1485d494c(void)

void FUN_1485d494c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 local_4d;
  undefined8 local_4c;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_4c = 0x3f8000000000000a;
  uStack_44 = (uint)uStack_44._3_1_ << 0x18;
  uStack_40 = 0x3f80000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_4d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_4c;
  uStack_64 = local_4c._4_4_;
  iStack_60 = uStack_44;
  uStack_5c = (undefined4)uStack_40;
  local_58 = uStack_40._4_4_;
  FUN_1485d4b28(local_20,puVar4,&local_68,local_4d);
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d4b28 FUN_1485d4b28 body=614 status=ok
// SIG undefined FUN_1485d4b28(void)

void FUN_1485d4b28(longlong param_1,longlong *param_2,int *param_3,char param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong *local_b8;
  int *local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = param_2;
  local_b0 = param_3;
  FUN_1485d9e90(param_2);
  if (param_1 != 0) {
    uVar11 = (param_4 != '\x02') + 1;
    bVar6 = FUN_147a244ec(param_1);
    iVar5 = local_b0[2];
    if ((char)iVar5 == '\x02') {
      local_a8 = 0;
      uStack_a0 = 0;
      fVar14 = (float)local_b0[1] * (float)local_b0[1];
      fVar15 = 0.0001;
      if (0.0001 <= fVar14) {
        fVar15 = fVar14;
      }
      FUN_141266fc2(param_1,*(undefined1 *)((longlong)local_b0 + 9),fVar15);
      plVar4 = local_b8;
      if (bVar6 != 0) {
        uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)uStack_a0 + -1);
        FUN_140704026();
      }
      FUN_1407feed2(*plVar4,uStack_a0 & 0xffffffff,1);
      if (0 < (int)uStack_a0) {
        lVar7 = (ulonglong)(param_4 == '\0') << 3;
        uVar12 = (ulonglong)(uVar11 * 8);
        lVar8 = 8;
        lVar9 = 0;
        do {
          uVar1 = *(undefined8 *)(local_a8 + uVar12);
          lVar3 = *(longlong *)*plVar4;
          *(undefined8 *)(lVar3 + -8 + lVar8) = *(undefined8 *)(local_a8 + lVar7);
          *(undefined8 *)(lVar3 + lVar8) = uVar1;
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x10;
          lVar7 = lVar7 + 0x18;
          uVar12 = uVar12 + 0x18;
        } while (lVar9 < (int)uStack_a0);
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      iVar13 = 2;
      if (2 < *local_b0) {
        iVar13 = *local_b0;
      }
      fVar15 = *(float *)(param_1 + 0x68c);
      if (*(int *)(*local_b8 + 0xc) < iVar13) {
        FUN_1408652ee(*local_b8,iVar13);
      }
      iVar10 = 0;
      do {
        plVar4 = (longlong *)*local_b8;
        local_c8 = (char)iVar5 == '\0';
        FUN_147a1f6fc(param_1,&local_a8,
                      ((float)iVar10 / (float)(int)(iVar13 - (uint)(bVar6 ^ 1))) * fVar15,
                      *(undefined1 *)((longlong)local_b0 + 9));
        lVar7 = (&local_a8)[uVar11];
        lVar8 = (&local_a8)[param_4 == '\0'];
        iVar2 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
          FUN_14489624a(plVar4,iVar2);
        }
        lVar9 = *plVar4;
        *(longlong *)(lVar9 + (longlong)iVar2 * 0x10) = lVar8;
        *(longlong *)(lVar9 + 8 + (longlong)iVar2 * 0x10) = lVar7;
        iVar10 = iVar10 + 1;
      } while (iVar13 != iVar10);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d4d90 FUN_1485d4d90 body=227 status=ok
// SIG undefined FUN_1485d4d90(void)

void FUN_1485d4d90(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
  FUN_1485d4e74(&local_38);
  plVar3 = plStack_20;
  *param_3 = 0;
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



// FUNCTION 1485d4e74 FUN_1485d4e74 body=56 status=ok
// SIG undefined FUN_1485d4e74(void)

void FUN_1485d4e74(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x0001485d4ea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485d4eac FUN_1485d4eac body=227 status=ok
// SIG undefined FUN_1485d4eac(void)

void FUN_1485d4eac(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
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
  FUN_1485d4f90(&local_38);
  plVar3 = plStack_20;
  *param_3 = 0;
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



// FUNCTION 1485d4f90 FUN_1485d4f90 body=56 status=ok
// SIG undefined FUN_1485d4f90(void)

void FUN_1485d4f90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x0001485d4fbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485d4fc8 FUN_1485d4fc8 body=250 status=ok
// SIG undefined FUN_1485d4fc8(void)

void FUN_1485d4fc8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_60 = local_28;
  local_58 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1485d50c4(&local_50,&local_60);
  plVar3 = plStack_20;
  *(undefined8 *)(param_3 + 8) = local_30;
  param_3[4] = local_40;
  param_3[5] = uStack_3c;
  param_3[6] = uStack_38;
  param_3[7] = uStack_34;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d50c4 FUN_1485d50c4 body=109 status=ok
// SIG undefined FUN_1485d50c4(void)

undefined4 * FUN_1485d50c4(undefined4 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 8) == 0)) {
    uVar4 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
    *(ulonglong *)(param_1 + 4) = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
    *(undefined8 *)(param_1 + 6) = uVar4;
    uVar7 = DAT_14c8463f8._4_4_;
    uVar6 = (undefined4)DAT_14c8463f8;
    uVar5 = DAT_14c8463f0._4_4_;
    *param_1 = (undefined4)DAT_14c8463f0;
    param_1[1] = uVar5;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    FUN_1485d9faa(param_1);
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
  return param_1;
}



// FUNCTION 1485d5138 FUN_1485d5138 body=394 status=ok
// SIG undefined FUN_1485d5138(void)

void FUN_1485d5138(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_2d;
  undefined4 local_2c;
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
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  puVar4 = &local_2d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_28;
  local_48 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1485d52c4(&local_40,&local_50,local_2c,puVar4);
  plVar3 = plStack_20;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
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



// FUNCTION 1485d52c4 FUN_1485d52c4 body=199 status=ok
// SIG undefined FUN_1485d52c4(void)

undefined4 * FUN_1485d52c4(undefined4 *param_1,longlong *param_2,int param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 == 0) {
    *param_4 = 1;
  }
  else {
    bVar7 = *(int *)(*param_2 + 8) == 0;
    *param_4 = bVar7;
    if (!bVar7) {
      local_20 = *(uint *)((undefined8 *)*param_2 + 1);
      local_28 = *(undefined8 *)*param_2;
      FUN_1485eba4c(param_1,&local_28,
                    (param_3 % (int)local_20 >> 0x1f & local_20) + param_3 % (int)local_20);
      goto LAB_1485d52fb;
    }
  }
  uVar6 = DAT_14c8463f8._4_4_;
  uVar5 = (undefined4)DAT_14c8463f8;
  uVar4 = DAT_14c8463f0._4_4_;
  *param_1 = (undefined4)DAT_14c8463f0;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
LAB_1485d52fb:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d5394 FUN_1485d5394 body=394 status=ok
// SIG undefined FUN_1485d5394(void)

void FUN_1485d5394(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_2d;
  undefined4 local_2c;
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
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  puVar4 = &local_2d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_28;
  local_48 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1485d5520(&local_40,&local_50,local_2c,puVar4);
  plVar3 = plStack_20;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
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



// FUNCTION 1485d5520 FUN_1485d5520 body=131 status=ok
// SIG undefined FUN_1485d5520(void)

undefined4 * FUN_1485d5520(undefined4 *param_1,longlong *param_2,int param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*param_2 == 0) {
    *param_4 = 1;
    uVar7 = (undefined4)DAT_14c8463f0;
    uVar8 = DAT_14c8463f0._4_4_;
    uVar9 = (undefined4)DAT_14c8463f8;
    uVar10 = DAT_14c8463f8._4_4_;
  }
  else {
    bVar6 = *(int *)(*param_2 + 8) == 0;
    *param_4 = bVar6;
    uVar7 = (undefined4)DAT_14c8463f0;
    uVar8 = DAT_14c8463f0._4_4_;
    uVar9 = (undefined4)DAT_14c8463f8;
    uVar10 = DAT_14c8463f8._4_4_;
    if (!bVar6) {
      uVar4 = *(uint *)((longlong *)*param_2 + 1);
      param_3 = param_3 % (int)uVar4;
      puVar3 = (undefined4 *)
               (*(longlong *)*param_2 + (longlong)(int)((param_3 >> 0x1f & uVar4) + param_3) * 0x10)
      ;
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
    }
  }
  *param_1 = uVar7;
  param_1[1] = uVar8;
  param_1[2] = uVar9;
  param_1[3] = uVar10;
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



// FUNCTION 1485d55a4 FUN_1485d55a4 body=264 status=ok
// SIG undefined FUN_1485d55a4(void)

void FUN_1485d55a4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_38 + 8);
  }
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
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d56b4 FUN_1485d56b4 body=495 status=ok
// SIG undefined FUN_1485d56b4(void)

void FUN_1485d56b4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_61;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  puVar5 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    puVar5 = &local_48;
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_61 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_61);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_61);
  }
  puVar6 = &local_61;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_60;
  uStack_74 = uStack_5c;
  uStack_70 = uStack_58;
  uStack_6c = uStack_54;
  local_88 = *puVar5;
  puVar5 = &local_48;
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = puVar3;
  }
  local_80 = puVar5[1];
  if (local_80 != 0) {
    LOCK();
    *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
    UNLOCK();
  }
  FUN_1485d58a4(&local_88,local_4c,&local_78,puVar6);
  plVar4 = plStack_40;
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
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d58a4 FUN_1485d58a4 body=120 status=ok
// SIG undefined FUN_1485d58a4(void)

void FUN_1485d58a4(longlong *param_1,int param_2,undefined4 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  if (*param_1 == 0) {
    *param_4 = 1;
  }
  else {
    bVar9 = *(int *)(*param_1 + 8) == 0;
    *param_4 = bVar9;
    if (!bVar9) {
      uVar4 = *(uint *)((longlong *)*param_1 + 1);
      param_2 = param_2 % (int)uVar4;
      uVar6 = param_3[1];
      uVar7 = param_3[2];
      uVar8 = param_3[3];
      puVar3 = (undefined4 *)
               (*(longlong *)*param_1 + (longlong)(int)((param_2 >> 0x1f & uVar4) + param_2) * 0x10)
      ;
      *puVar3 = *param_3;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
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
                    /* WARNING: Could not recover jumptable at 0x0001485d590b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485d5926 FUN_1485d5926 body=556 status=ok
// SIG undefined FUN_1485d5926(void)

void FUN_1485d5926(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  int local_5c;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  plVar5 = &local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  local_68 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  uVar3 = FUN_1485d5b54(puVar4,&local_70,plVar5,local_5c != 0);
  *param_3 = uVar3;
  FUN_1485eb966(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d5b54 FUN_1485d5b54 body=852 status=ok
// SIG undefined FUN_1485d5b54(void)

int FUN_1485d5b54(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  double dVar5;
  undefined8 uVar6;
  uint uVar7;
  double *pdVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_c8 [32];
  void *local_a8;
  uint local_a0;
  undefined4 local_9c;
  void *local_98;
  uint local_90;
  undefined4 local_8c;
  void *local_88;
  ulonglong uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar12 = (longlong *)*param_1;
  if (plVar12 == (longlong *)0x0) {
    FUN_148568ea4(param_1,0);
    plVar12 = (longlong *)*param_1;
  }
  puVar3 = (undefined8 *)*param_2;
  iVar2 = (int)plVar12[1];
  *(uint *)(plVar12 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar12 + 0xc) < iVar2 + 1U) {
    FUN_148279fb6(plVar12,iVar2);
  }
  lVar15 = (longlong)iVar2 * 0x28 + *plVar12;
  local_88 = (void *)0x0;
  if (puVar3 == (undefined8 *)0x0) {
    uStack_80 = 0;
  }
  else {
    iVar10 = *(int *)(puVar3 + 1);
    pvVar4 = (void *)*puVar3;
    uStack_80 = CONCAT44(uStack_80._4_4_,iVar10);
    if ((longlong)iVar10 != 0) {
      FUN_144721d4c(&local_88,iVar10,0);
      memcpy(local_88,pvVar4,(longlong)iVar10 << 4);
      goto LAB_1485d5bef;
    }
  }
  uStack_80 = uStack_80 & 0xffffffff;
LAB_1485d5bef:
  FUN_148267e0c(lVar15,&local_88);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)(int)param_3[1] != 0) {
    plVar12 = (longlong *)*param_3;
    plVar13 = plVar12 + (longlong)(int)param_3[1] * 2;
    do {
      puVar3 = (undefined8 *)*plVar12;
      if (puVar3 != (undefined8 *)0x0) {
        local_98 = (void *)0x0;
        local_90 = *(uint *)(puVar3 + 1);
        lVar14 = (longlong)(int)local_90;
        pvVar4 = (void *)*puVar3;
        if (lVar14 == 0) {
          local_8c = 0;
LAB_1485d5cdf:
          local_a0 = 0;
LAB_1485d5cf0:
          local_a8 = (void *)0x0;
          local_9c = 0;
        }
        else {
          FUN_144721d4c(&local_98,local_90,0);
          memcpy(local_98,pvVar4,lVar14 << 4);
          uVar7 = local_90;
          pvVar4 = local_98;
          uVar11 = (ulonglong)local_90;
          if (param_4 != '\0') {
            if (local_90 != 0) {
              if (0 < (int)local_90) {
                iVar10 = local_90 - 1;
                pdVar8 = (double *)((longlong)local_98 + 8);
                dVar5 = 0.0;
                uVar9 = 0;
                do {
                  dVar5 = dVar5 + (*(double *)((longlong)local_98 + (longlong)iVar10 * 0x10) *
                                   *pdVar8 -
                                  pdVar8[-1] *
                                  *(double *)((longlong)local_98 + (longlong)iVar10 * 0x10 + 8));
                  iVar10 = (int)uVar9;
                  uVar9 = uVar9 + 1;
                  pdVar8 = pdVar8 + 2;
                } while (uVar11 != uVar9);
                if ((0.0 <= dVar5 * 0.5 != (bool)*(char *)(lVar15 + 0x10)) && (local_90 != 1)) {
                  lVar14 = uVar11 << 4;
                  uVar9 = 0;
                  do {
                    lVar14 = lVar14 + -0x10;
                    local_88 = *(void **)((longlong)local_98 + uVar9);
                    uStack_80 = ((longlong *)((longlong)local_98 + uVar9))[1];
                    uVar6 = ((undefined8 *)((longlong)local_98 + lVar14))[1];
                    *(undefined8 *)((longlong)local_98 + uVar9) =
                         *(undefined8 *)((longlong)local_98 + lVar14);
                    ((undefined8 *)((longlong)local_98 + uVar9))[1] = uVar6;
                    *(longlong *)((longlong)local_98 + lVar14) = (longlong)local_88;
                    ((longlong *)((longlong)local_98 + lVar14))[1] = uStack_80;
                    uVar9 = uVar9 + 0x10;
                  } while ((uVar11 * 8 & 0xfffffffffffffff0) != uVar9);
                }
                goto LAB_1485d5d63;
              }
              goto LAB_1485d5d78;
            }
            goto LAB_1485d5cdf;
          }
LAB_1485d5d63:
          local_a0 = local_90;
          if (local_90 == 0) goto LAB_1485d5cf0;
LAB_1485d5d78:
          local_a0 = local_90;
          local_a8 = (void *)0x0;
          FUN_144721d4c(&local_a8,local_90,0);
          memcpy(local_a8,pvVar4,(longlong)(int)uVar7 << 4);
        }
        FUN_148279580(lVar15,&local_a8,0,0);
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar12 = plVar12 + 2;
    } while (plVar12 != plVar13);
  }
  plVar12 = (longlong *)param_2[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar12 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 1485d5eaa FUN_1485d5eaa body=344 status=ok
// SIG undefined FUN_1485d5eaa(void)

void FUN_1485d5eaa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar4 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_1485d6004(puVar4,&local_48);
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d6004 FUN_1485d6004 body=99 status=ok
// SIG undefined FUN_1485d6004(void)

void FUN_1485d6004(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    FUN_148568ea4(param_1,0);
  }
  if (*param_2 != 0) {
    FUN_14847340a(*param_1);
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
                    /* WARNING: Could not recover jumptable at 0x0001485d6051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485d6068 FUN_1485d6068 body=248 status=ok
// SIG undefined FUN_1485d6068(void)

void FUN_1485d6068(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong *local_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar2 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485d6162(local_38,plVar2);
  FUN_1485d6284(param_3,local_38);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_1485eb966(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d6162 FUN_1485d6162 body=289 status=ok
// SIG undefined FUN_1485d6162(void)

longlong * FUN_1485d6162(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  void *_Src;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_148568ea4(0,0);
  lVar6 = param_2[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar2 = *param_2;
    lVar7 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar7);
      if (puVar3 != (undefined8 *)0x0) {
        plVar4 = (longlong *)*param_1;
        iVar1 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
          FUN_148279fb6(plVar4,iVar1);
        }
        lVar5 = *plVar4;
        local_58 = (void *)0x0;
        local_50 = *(int *)(puVar3 + 1);
        lVar8 = (longlong)local_50;
        _Src = (void *)*puVar3;
        if (lVar8 == 0) {
          local_4c = 0;
        }
        else {
          FUN_144721d4c(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar8 << 4);
        }
        FUN_148267e0c((longlong)iVar1 * 0x28 + lVar5,&local_58);
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)lVar6 * 0x10 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1485d6284 FUN_1485d6284 body=96 status=ok
// SIG undefined FUN_1485d6284(void)

undefined8 * FUN_1485d6284(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1485d62ea FUN_1485d62ea body=482 status=ok
// SIG undefined FUN_1485d62ea(void)

void FUN_1485d62ea(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  int local_4c;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_38;
  local_68 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_1485d64ce(local_60,&local_70,plVar3,local_4c != 0);
  FUN_1485d6284(param_3,local_60);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  FUN_1485eb966(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d64ce FUN_1485d64ce body=180 status=ok
// SIG undefined FUN_1485d64ce(void)

undefined8 *
FUN_1485d64ce(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_148568ea4(0,0);
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1485d5b54(param_1,&local_38,param_3,param_4);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d6592 FUN_1485d6592 body=812 status=ok
// SIG undefined FUN_1485d6592(void)

void FUN_1485d6592(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  int local_e0;
  undefined4 local_dc;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  int local_a0;
  undefined1 local_99;
  undefined8 local_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_90 = local_90 & 0xffffff00;
  uStack_88 = 0x4000000000000000;
  local_80 = CONCAT31(local_80._1_3_,1);
  uStack_78 = 0x3ff0000000000000;
  local_70 = 0x4024000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_99 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  puVar6 = &local_99;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_a0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  uVar5 = uStack_60;
  lVar4 = local_68;
  iVar3 = local_a0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar7 = (undefined4)local_98;
  local_d8 = local_90;
  uStack_d4 = uStack_8c;
  uStack_d0 = (undefined4)uStack_88;
  uStack_cc = uStack_88._4_4_;
  local_c8 = local_80;
  uStack_c4 = uStack_7c;
  uStack_c0 = (undefined4)uStack_78;
  uStack_bc = uStack_78._4_4_;
  local_b8 = local_70;
  local_e8 = 0;
  local_e0 = (int)uStack_60;
  if ((int)uStack_60 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1485eb9b0(&local_e8,uStack_60 & 0xffffffff);
    FUN_1485eba1a(local_e8,lVar4,uVar5 & 0xffffffff);
  }
  local_f0 = iVar3 != 0;
  local_f8 = puVar6;
  FUN_1485d68c0(local_b0,&local_e8,&local_d8,uVar7);
  FUN_1485d6284(param_3,local_b0);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a8 + 0x10))(local_a8);
      }
    }
  }
  FUN_1485eab14(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d68c0 FUN_1485d68c0 body=890 status=ok
// SIG undefined FUN_1485d68c0(void)

longlong *
FUN_1485d68c0(longlong *param_1,longlong *param_2,char *param_3,undefined8 param_4,char *param_5,
             char param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8 [2];
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  char local_67;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = 0;
  uStack_90 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_67 = '\x03';
  if ((byte)param_3[0x10] < 3) {
    local_67 = param_3[0x10] + 2;
  }
  local_68 = 2;
  if (*param_3 != '\x02') {
    local_68 = *param_3 == '\x01';
  }
  local_80 = *(undefined8 *)(param_3 + 8);
  local_78 = *(undefined8 *)(param_3 + 0x20);
  local_70 = *(undefined8 *)(param_3 + 0x18);
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  iVar13 = (int)param_2[1];
  local_d8 = param_1;
  local_88 = param_4;
  if (-1 < iVar13) {
    if (iVar13 != 0) {
      FUN_14481578e(&local_b8);
      iVar13 = (int)param_2[1];
      if (0 < iVar13) {
        lVar12 = 0;
        local_d0 = param_2;
        do {
          lVar16 = *param_2;
          lVar14 = *(longlong *)(lVar16 + lVar12 * 0x18);
          if (lVar14 != 0) {
            uVar11 = *(uint *)(lVar14 + 8);
            if ((ulonglong)uVar11 != 0) {
              if (0 < (int)uVar11) {
                lVar14 = 0;
                do {
                  uVar8 = uStack_a0;
                  lVar4 = **(longlong **)(lVar16 + lVar12 * 0x18);
                  lVar15 = (longlong)(int)uStack_a0;
                  uVar10 = (int)uStack_a0 + 1;
                  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar10);
                  if (uStack_a0._4_4_ < uVar10) {
                    FUN_14489624a(&local_a8,uVar8 & 0xffffffff);
                  }
                  puVar1 = (undefined4 *)(lVar4 + lVar14);
                  uVar3 = puVar1[1];
                  uVar6 = puVar1[2];
                  uVar7 = puVar1[3];
                  puVar2 = (undefined4 *)(local_a8 + lVar15 * 0x10);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar3;
                  puVar2[2] = uVar6;
                  puVar2[3] = uVar7;
                  lVar14 = lVar14 + 0x18;
                } while ((ulonglong)uVar11 * 0x18 != lVar14);
              }
              uVar8 = uStack_b0;
              lVar16 = (longlong)(int)uStack_b0;
              uVar10 = (int)uStack_b0 + 1;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar10);
              if (uStack_b0._4_4_ < uVar10) {
                FUN_1446f48e2(&local_b8,uVar8 & 0xffffffff);
              }
              *(uint *)(local_b8 + lVar16 * 4) = uVar11;
              iVar13 = (int)local_d0[1];
              param_2 = local_d0;
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar13);
      }
    }
    iVar13 = (int)uStack_b0;
    if (-1 < (int)uStack_b0) {
      if ((int)uStack_b0 != 0) {
        FUN_1485ebb5a(&local_98);
        if (0 < (int)uStack_b0) {
          lVar12 = 0;
          iVar13 = 0;
          do {
            uVar8 = uStack_90;
            uVar3 = *(undefined4 *)(local_b8 + lVar12 * 4);
            lVar16 = (longlong)iVar13 * 0x10 + local_a8;
            lVar14 = (longlong)(int)uStack_90;
            uVar11 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar11);
            if (uStack_90._4_4_ < uVar11) {
              FUN_148473738(&local_98,uVar8 & 0xffffffff);
            }
            *(longlong *)(local_98 + lVar14 * 0x10) = lVar16;
            *(undefined4 *)(local_98 + 8 + lVar14 * 0x10) = uVar3;
            iVar13 = iVar13 + *(int *)(local_b8 + lVar12 * 4);
            lVar12 = lVar12 + 1;
          } while (lVar12 < (int)uStack_b0);
        }
      }
      cVar9 = FUN_148268810(&local_98);
      *param_5 = cVar9;
      *local_d8 = 0;
      local_d8[1] = 0;
      FUN_148568ea4(local_d8,0);
      if ((param_6 == '\0') || (*param_5 != '\0')) {
        FUN_1485da0a6(*local_d8,&local_60);
      }
      else {
        lVar12 = param_2[1];
        if ((longlong)(int)lVar12 != 0) {
          lVar16 = *param_2;
          lVar14 = 0;
          do {
            if (*(longlong *)(lVar16 + lVar14) != 0) {
              plVar5 = (longlong *)*local_d8;
              FUN_1485da0f6(local_c8);
              iVar13 = (int)plVar5[1];
              *(uint *)(plVar5 + 1) = iVar13 + 1U;
              if (*(uint *)((longlong)plVar5 + 0xc) < iVar13 + 1U) {
                FUN_148279fb6(plVar5,iVar13);
              }
              FUN_148267e0c((longlong)iVar13 * 0x28 + *plVar5,local_c8);
              if (local_c8[0] != 0) {
                FUN_1400020a8();
              }
            }
            lVar14 = lVar14 + 0x18;
          } while ((longlong)(int)lVar12 * 0x18 != lVar14);
        }
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_14847346a(&local_98);
      FUN_1485eab14(*param_2,(int)param_2[1]);
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return local_d8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar13);
}



// FUNCTION 1485d6c48 FUN_1485d6c48 body=801 status=ok
// SIG undefined FUN_1485d6c48(void)

void FUN_1485d6c48(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 local_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  int local_a0;
  undefined1 local_99;
  undefined8 local_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  void *local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_90 = local_90 & 0xffffff00;
  uStack_88 = 0x4000000000000000;
  local_80 = CONCAT31(local_80._1_3_,1);
  uStack_78 = 0x3ff0000000000000;
  local_70 = 0x4024000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_99 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  puVar5 = &local_99;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_a0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  _Src = local_68;
  iVar3 = local_a0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = (undefined4)local_98;
  local_d8 = local_90;
  uStack_d4 = uStack_8c;
  uStack_d0 = (undefined4)uStack_88;
  uStack_cc = uStack_88._4_4_;
  local_c8 = local_80;
  uStack_c4 = uStack_7c;
  uStack_c0 = (undefined4)uStack_78;
  uStack_bc = uStack_78._4_4_;
  local_b8 = local_70;
  local_e8 = (void *)0x0;
  lVar4 = (longlong)(int)uStack_60;
  local_e0 = (int)uStack_60;
  if (lVar4 == 0) {
    local_dc = 0;
  }
  else {
    FUN_144721d4c(&local_e8,uStack_60 & 0xffffffff,0);
    memcpy(local_e8,_Src,lVar4 << 4);
  }
  local_f0 = iVar3 != 0;
  local_f8 = puVar5;
  FUN_1485d6f6a(local_b0,&local_e8,&local_d8,uVar6);
  FUN_1485d6284(param_3,local_b0);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a8 + 0x10))(local_a8);
      }
    }
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d6f6a FUN_1485d6f6a body=467 status=ok
// SIG undefined FUN_1485d6f6a(void)

longlong *
FUN_1485d6f6a(longlong *param_1,longlong *param_2,char *param_3,undefined8 param_4,char *param_5,
             char param_6)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  char local_67;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = (longlong *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_67 = '\x03';
  if ((byte)param_3[0x10] < 3) {
    local_67 = param_3[0x10] + 2;
  }
  local_68 = 2;
  if (*param_3 != '\x02') {
    local_68 = *param_3 == '\x01';
  }
  local_80 = *(undefined8 *)(param_3 + 8);
  local_78 = *(undefined8 *)(param_3 + 0x20);
  local_70 = *(undefined8 *)(param_3 + 0x18);
  lVar3 = param_2[1];
  lVar5 = *param_2;
  uStack_90 = 1;
  local_88 = param_4;
  FUN_148473738(&local_98,0);
  *local_98 = lVar5;
  *(int *)(local_98 + 1) = (int)lVar3;
  cVar4 = FUN_148268810(&local_98);
  *param_5 = cVar4;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_148568ea4(param_1,0);
  plVar2 = (longlong *)*param_1;
  if ((param_6 == '\0') || (*param_5 != '\0')) {
    FUN_1485da0a6(plVar2,&local_60);
  }
  else {
    local_a8 = (void *)0x0;
    local_a0 = (int)param_2[1];
    lVar5 = (longlong)local_a0;
    _Src = (void *)*param_2;
    if (lVar5 == 0) {
      local_9c = 0;
    }
    else {
      FUN_144721d4c(&local_a8,local_a0,0);
      memcpy(local_a8,_Src,lVar5 << 4);
    }
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_148279fb6(plVar2,iVar1);
    }
    FUN_148267e0c((longlong)iVar1 * 0x28 + *plVar2,&local_a8);
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_14847346a(&local_98);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d7144 FUN_1485d7144 body=389 status=ok
// SIG undefined FUN_1485d7144(void)

void FUN_1485d7144(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar5 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  local_48 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  uVar3 = FUN_1485d72ca(&local_50,puVar5,local_40);
  plVar4 = plStack_30;
  *param_3 = uVar3;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d72ca FUN_1485d72ca body=127 status=ok
// SIG undefined FUN_1485d72ca(void)

undefined8 FUN_1485d72ca(longlong *param_1,undefined1 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = (longlong *)*param_1;
  if ((((int)param_3 < 0 || plVar3 == (longlong *)0x0) || ((int)plVar3[1] <= (int)param_3)) ||
     ((ulonglong)param_3 * 0x28 + *plVar3 == 0)) {
    *param_2 = 0;
    uVar4 = 0;
  }
  else {
    *param_2 = 1;
    uVar4 = FUN_1483e7274();
  }
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
  return uVar4;
}



// FUNCTION 1485d7350 FUN_1485d7350 body=421 status=ok
// SIG undefined FUN_1485d7350(void)

void FUN_1485d7350(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar4 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_38;
  local_70 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_1485d74f6(&local_68,&local_78,puVar4,local_40);
  plVar3 = plStack_30;
  *(undefined8 *)(param_3 + 8) = local_48;
  param_3[4] = local_58;
  param_3[5] = uStack_54;
  param_3[6] = uStack_50;
  param_3[7] = uStack_4c;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
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
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d74f6 FUN_1485d74f6 body=246 status=ok
// SIG undefined FUN_1485d74f6(void)

double * FUN_1485d74f6(double *param_1,longlong *param_2,undefined1 *param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)*param_2;
  if ((((int)param_4 < 0 || plVar3 == (longlong *)0x0) || ((int)plVar3[1] <= (int)param_4)) ||
     (lVar9 = (ulonglong)param_4 * 0x28 + *plVar3, lVar9 == 0)) {
    bVar8 = 0;
    *param_3 = 0;
    dVar4 = (double)CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
    param_1[2] = (double)CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
    param_1[3] = dVar4;
    uVar7 = DAT_14c8463f8._4_4_;
    uVar6 = (undefined4)DAT_14c8463f8;
    uVar5 = DAT_14c8463f0._4_4_;
    *(undefined4 *)param_1 = (undefined4)DAT_14c8463f0;
    *(undefined4 *)((longlong)param_1 + 4) = uVar5;
    *(undefined4 *)(param_1 + 1) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
  }
  else {
    *param_3 = 1;
    FUN_14827a2a8(lVar9,&local_40);
    param_1[2] = local_30;
    param_1[3] = dStack_28;
    *param_1 = local_40;
    param_1[1] = dStack_38;
    bVar8 = -(dStack_38 <= dStack_28) & -(local_40 <= local_30) & 1;
  }
  *(byte *)(param_1 + 4) = bVar8;
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d75ee FUN_1485d75ee body=264 status=ok
// SIG undefined FUN_1485d75ee(void)

void FUN_1485d75ee(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_38 + 8);
  }
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
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d76fe FUN_1485d76fe body=387 status=ok
// SIG undefined FUN_1485d76fe(void)

void FUN_1485d76fe(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar5 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38;
  local_48 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_1485d7882(&local_50,puVar5,local_40);
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d7882 FUN_1485d7882 body=111 status=ok
// SIG undefined FUN_1485d7882(void)

undefined4 FUN_1485d7882(longlong *param_1,undefined1 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)*param_1;
  if ((((int)param_3 < 0 || plVar3 == (longlong *)0x0) || ((int)plVar3[1] <= (int)param_3)) ||
     (lVar5 = (ulonglong)param_3 * 0x28 + *plVar3, lVar5 == 0)) {
    *param_2 = 0;
    uVar4 = 0;
  }
  else {
    *param_2 = 1;
    uVar4 = *(undefined4 *)(lVar5 + 0x20);
  }
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
  return uVar4;
}



// FUNCTION 1485d78f2 FUN_1485d78f2 body=224 status=ok
// SIG undefined FUN_1485d78f2(void)

void FUN_1485d78f2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  uVar3 = FUN_1485d79d4(&local_38);
  plVar4 = plStack_20;
  *param_3 = uVar3;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d79d4 FUN_1485d79d4 body=125 status=ok
// SIG undefined FUN_1485d79d4(void)

double FUN_1485d79d4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  
  plVar3 = (longlong *)*param_1;
  dVar4 = 0.0;
  if ((plVar3 != (longlong *)0x0) && (dVar4 = 0.0, (longlong)(int)plVar3[1] != 0)) {
    lVar6 = *plVar3;
    lVar5 = (longlong)(int)plVar3[1] * 0x28;
    dVar4 = 0.0;
    do {
      dVar7 = (double)FUN_1483e7274(lVar6);
      dVar4 = dVar4 + dVar7;
      lVar6 = lVar6 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
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
  return dVar4;
}



// FUNCTION 1485d7a52 FUN_1485d7a52 body=250 status=ok
// SIG undefined FUN_1485d7a52(void)

void FUN_1485d7a52(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_60 = local_28;
  local_58 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1485d7b4e(&local_50,&local_60);
  plVar3 = plStack_20;
  *(undefined8 *)(param_3 + 8) = local_30;
  param_3[4] = local_40;
  param_3[5] = uStack_3c;
  param_3[6] = uStack_38;
  param_3[7] = uStack_34;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d7b4e FUN_1485d7b4e body=352 status=ok
// SIG undefined FUN_1485d7b4e(void)

undefined8 * FUN_1485d7b4e(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)*param_2;
  uVar10 = 0xffffffff;
  uVar11 = 0x7fefffff;
  uVar6 = 0xffffffff;
  uVar7 = 0xffefffff;
  if (plVar3 == (longlong *)0x0) {
    uVar8 = 0xffffffff;
    uVar9 = 0xffefffff;
    uVar12 = 0xffffffff;
    uVar13 = 0x7fefffff;
  }
  else {
    uVar8 = uVar6;
    uVar9 = uVar7;
    uVar12 = uVar10;
    uVar13 = uVar11;
    if ((longlong)(int)plVar3[1] != 0) {
      lVar4 = *plVar3;
      lVar5 = (longlong)(int)plVar3[1] * 0x28;
      uVar6 = 0xffffffff;
      uVar7 = 0xffefffff;
      uVar10 = 0xffffffff;
      uVar11 = 0x7fefffff;
      uVar8 = uVar6;
      uVar9 = uVar7;
      uVar12 = uVar10;
      uVar13 = uVar11;
      do {
        FUN_14827a2a8(lVar4,&local_90);
        if (local_90 <= (double)CONCAT44(uVar13,uVar12)) {
          uVar12 = SUB84(local_90,0);
          uVar13 = (undefined4)((ulonglong)local_90 >> 0x20);
        }
        if (local_88 <= (double)CONCAT44(uVar11,uVar10)) {
          uVar10 = SUB84(local_88,0);
          uVar11 = (undefined4)((ulonglong)local_88 >> 0x20);
        }
        if ((double)CONCAT44(uVar9,uVar8) <= local_80) {
          uVar8 = SUB84(local_80,0);
          uVar9 = (undefined4)((ulonglong)local_80 >> 0x20);
        }
        if ((double)CONCAT44(uVar7,uVar6) <= local_78) {
          uVar6 = SUB84(local_78,0);
          uVar7 = (undefined4)((ulonglong)local_78 >> 0x20);
        }
        lVar4 = lVar4 + 0x28;
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
    }
  }
  *param_1 = CONCAT44(uVar13,uVar12);
  param_1[1] = CONCAT44(uVar11,uVar10);
  param_1[2] = CONCAT44(uVar9,uVar8);
  param_1[3] = CONCAT44(uVar7,uVar6);
  *(byte *)(param_1 + 4) =
       -((double)CONCAT44(uVar13,uVar12) <= (double)CONCAT44(uVar9,uVar8)) &
       -((double)CONCAT44(uVar11,uVar10) <= (double)CONCAT44(uVar7,uVar6)) & 1;
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
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1485d7cb6 FUN_1485d7cb6 body=596 status=ok
// SIG undefined FUN_1485d7cb6(void)

void FUN_1485d7cb6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar4 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a7452c();
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  local_60 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_70 = local_48;
  local_78 = local_44;
  FUN_143be002a(&local_58,&local_68,puVar4,local_40);
  plVar3 = plStack_30;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
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
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d7f12 FUN_1485d7f12 body=462 status=ok
// SIG undefined FUN_1485d7f12(void)

void FUN_1485d7f12(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar5 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a7452c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_1485d80e2(&local_58,puVar5,local_40,local_44);
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d80e2 FUN_1485d80e2 body=88 status=ok
// SIG undefined FUN_1485d80e2(void)

undefined4 FUN_1485d80e2(longlong param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = FUN_143be02a5(param_1,param_3,param_4);
  if (lVar4 == 0) {
    *param_2 = 0;
    uVar5 = 0;
  }
  else {
    *param_2 = 1;
    uVar5 = *(undefined4 *)(lVar4 + 8);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1485d8140 FUN_1485d8140 body=572 status=ok
// SIG undefined FUN_1485d8140(void)

void FUN_1485d8140(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_49;
  longlong local_48 [3];
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48[2] = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
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
  plVar4 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_49 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  puVar3 = &local_49;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48[2];
  local_60 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_78 = local_54;
  FUN_1485d837e(&local_68,plVar4,puVar3,local_50);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d837e FUN_1485d837e body=106 status=ok
// SIG undefined FUN_1485d837e(void)

void FUN_1485d837e(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = FUN_143be02a5(param_1,param_4,param_5);
  if (lVar4 != 0) {
    *param_3 = 1;
    FUN_144721cf4(param_2,lVar4);
  }
  *param_3 = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001485d83db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485d83ee FUN_1485d83ee body=526 status=ok
// SIG undefined FUN_1485d83ee(void)

void FUN_1485d83ee(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar4 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a7452c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  local_60 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_78 = local_44;
  FUN_1485d85fe(local_58,&local_68,puVar4,local_40);
  FUN_1485d43a2(param_3,local_58);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d85fe FUN_1485d85fe body=125 status=ok
// SIG undefined FUN_1485d85fe(void)

undefined8 *
FUN_1485d85fe(undefined8 *param_1,longlong param_2,undefined1 *param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1485d9e90();
  lVar4 = FUN_143be02a5(param_2,param_4,param_5);
  if (lVar4 != 0) {
    *param_3 = 1;
    FUN_144721cf4(*param_1,lVar4);
  }
  *param_3 = 0;
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
  return param_1;
}



// FUNCTION 1485d867c FUN_1485d867c body=420 status=ok
// SIG undefined FUN_1485d867c(void)

void FUN_1485d867c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_58 = local_38;
  local_50 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_68 = local_28;
  local_60 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1485d8822(local_48,&local_68,&local_58);
  FUN_1485d6284(param_3,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d8822 FUN_1485d8822 body=237 status=ok
// SIG undefined FUN_1485d8822(void)

undefined8 * FUN_1485d8822(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_148568ea4(0,0);
  puVar5 = (undefined8 *)*param_2;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*param_3;
    if (puVar4 == (undefined8 *)0x0) {
      FUN_1485da046(*param_1);
      puVar4 = (undefined8 *)*param_3;
      puVar5 = (undefined8 *)*param_2;
    }
    local_30 = *puVar4;
    local_28 = *(undefined4 *)(puVar4 + 1);
    local_40 = *puVar5;
    local_38 = *(undefined4 *)(puVar5 + 1);
    FUN_148268667(&local_40,&local_30,*param_1);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d8910 FUN_1485d8910 body=420 status=ok
// SIG undefined FUN_1485d8910(void)

void FUN_1485d8910(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_58 = local_38;
  local_50 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_68 = local_28;
  local_60 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1485d8ab6(local_48,&local_68,&local_58);
  FUN_1485d6284(param_3,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d8ab6 FUN_1485d8ab6 body=211 status=ok
// SIG undefined FUN_1485d8ab6(void)

undefined8 * FUN_1485d8ab6(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_148568ea4(0,0);
  puVar3 = (undefined8 *)*param_2;
  if ((puVar3 != (undefined8 *)0x0) &&
     (puVar4 = (undefined8 *)*param_3, puVar4 != (undefined8 *)0x0)) {
    local_30 = *puVar4;
    local_28 = *(undefined4 *)(puVar4 + 1);
    local_40 = *puVar3;
    local_38 = *(undefined4 *)(puVar3 + 1);
    FUN_148268719(&local_40,&local_30,*param_1);
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
  plVar5 = (longlong *)param_3[1];
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d8b8a FUN_1485d8b8a body=420 status=ok
// SIG undefined FUN_1485d8b8a(void)

void FUN_1485d8b8a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_58 = local_38;
  local_50 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_68 = local_28;
  local_60 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1485d8d30(local_48,&local_68,&local_58);
  FUN_1485d6284(param_3,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d8d30 FUN_1485d8d30 body=211 status=ok
// SIG undefined FUN_1485d8d30(void)

undefined8 * FUN_1485d8d30(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_148568ea4(0,0);
  puVar3 = (undefined8 *)*param_2;
  if ((puVar3 != (undefined8 *)0x0) &&
     (puVar4 = (undefined8 *)*param_3, puVar4 != (undefined8 *)0x0)) {
    local_30 = *puVar4;
    local_28 = *(undefined4 *)(puVar4 + 1);
    local_40 = *puVar3;
    local_38 = *(undefined4 *)(puVar3 + 1);
    FUN_1482686c0(&local_40,&local_30,*param_1);
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
  plVar5 = (longlong *)param_3[1];
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d8e10 FUN_1485d8e10 body=751 status=ok
// SIG undefined FUN_1485d8e10(void)

void FUN_1485d8e10(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  int local_70;
  undefined1 local_69;
  undefined8 local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
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
  local_60 = local_60 & 0xffffff00;
  uStack_58 = 0x4000000000000000;
  local_50 = local_50 & 0xffffff00;
  uStack_48 = 0x3ff0000000000000;
  local_40 = 0x4024000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_69 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  puVar4 = &local_69;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_70 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_60;
  uStack_a4 = uStack_5c;
  uStack_a0 = (undefined4)uStack_58;
  uStack_9c = uStack_58._4_4_;
  local_98 = local_50;
  uStack_94 = uStack_4c;
  uStack_90 = (undefined4)uStack_48;
  uStack_8c = uStack_48._4_4_;
  local_88 = local_40;
  local_b8 = local_38;
  local_b0 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_c0 = local_70 != 0;
  local_c8 = puVar4;
  FUN_143be00c2(local_80,&local_b8,&local_a8,local_68);
  FUN_1485d6284(param_3,local_80);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d910c FUN_1485d910c body=751 status=ok
// SIG undefined FUN_1485d910c(void)

void FUN_1485d910c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  int local_70;
  undefined1 local_69;
  undefined8 local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
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
  local_60 = local_60 & 0xffffff00;
  uStack_58 = 0x4000000000000000;
  local_50 = local_50 & 0xffffff00;
  uStack_48 = 0x3ff0000000000000;
  local_40 = 0x4024000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_69 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  puVar4 = &local_69;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_70 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_60;
  uStack_a4 = uStack_5c;
  uStack_a0 = (undefined4)uStack_58;
  uStack_9c = uStack_58._4_4_;
  local_98 = local_50;
  uStack_94 = uStack_4c;
  uStack_90 = (undefined4)uStack_48;
  uStack_8c = uStack_48._4_4_;
  local_88 = local_40;
  local_b8 = local_38;
  local_b0 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_c0 = local_70 != 0;
  local_c8 = puVar4;
  FUN_143be01b2(local_80,&local_b8,&local_a8,local_68);
  FUN_1485d6284(param_3,local_80);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d9408 FUN_1485d9408 body=751 status=ok
// SIG undefined FUN_1485d9408(void)

void FUN_1485d9408(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  int local_70;
  undefined1 local_69;
  undefined8 local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
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
  local_60 = local_60 & 0xffffff00;
  uStack_58 = 0x4000000000000000;
  local_50 = local_50 & 0xffffff00;
  uStack_48 = 0x3ff0000000000000;
  local_40 = 0x4024000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_69 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  puVar4 = &local_69;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_70 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_60;
  uStack_a4 = uStack_5c;
  uStack_a0 = (undefined4)uStack_58;
  uStack_9c = uStack_58._4_4_;
  local_98 = local_50;
  uStack_94 = uStack_4c;
  uStack_90 = (undefined4)uStack_48;
  uStack_8c = uStack_48._4_4_;
  local_88 = local_40;
  local_b8 = local_38;
  local_b0 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_c0 = local_70 != 0;
  local_c8 = puVar4;
  FUN_1485d96f8(local_80,&local_b8,&local_a8,local_68);
  FUN_1485d6284(param_3,local_80);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d96f8 FUN_1485d96f8 body=254 status=ok
// SIG undefined FUN_1485d96f8(void)

undefined8 *
FUN_1485d96f8(undefined8 *param_1,longlong *param_2,char *param_3,undefined4 param_4,
             undefined1 *param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  char local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_148568ea4(0,0);
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
    local_58 = *(undefined8 *)(param_3 + 0x18);
    local_60 = *(undefined8 *)(param_3 + 0x20);
    local_70 = 2;
    if (*param_3 != '\x02') {
      local_70 = *param_3 == '\x01';
    }
    local_68 = param_3[0x10];
    local_78 = *(undefined8 *)(param_3 + 8);
    local_50 = *puVar3;
    local_48 = *(undefined4 *)(puVar3 + 1);
    uVar5 = FUN_148268fe5(param_4,&local_50,*param_1,param_6);
    *param_5 = uVar5;
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
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d9804 FUN_1485d9804 body=873 status=ok
// SIG undefined FUN_1485d9804(void)

void FUN_1485d9804(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 local_d8;
  undefined8 local_c8;
  longlong *local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  int local_78;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
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
  local_60 = local_60 & 0xffffff00;
  uStack_58 = 0x4000000000000000;
  local_50 = local_50 & 0xffffff00;
  uStack_48 = 0x3ff0000000000000;
  local_40 = 0x4024000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_71 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_71);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_71);
  }
  puVar4 = &local_71;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_78 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_60;
  uStack_b4 = uStack_5c;
  uStack_b0 = (undefined4)uStack_58;
  uStack_ac = uStack_58._4_4_;
  local_a8 = local_50;
  uStack_a4 = uStack_4c;
  uStack_a0 = (undefined4)uStack_48;
  uStack_9c = uStack_48._4_4_;
  local_98 = local_40;
  local_c8 = local_38;
  local_c0 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_d8 = local_78 != 0;
  local_e8 = local_70;
  local_e0 = puVar4;
  FUN_1485d9b6e(local_88,&local_c8,&local_b8,local_68);
  FUN_1485d6284(param_3,local_88);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d9b6e FUN_1485d9b6e body=280 status=ok
// SIG undefined FUN_1485d9b6e(void)

undefined8 *
FUN_1485d9b6e(undefined8 *param_1,longlong *param_2,char *param_3,undefined4 param_4,
             undefined8 param_5,undefined1 *param_6,undefined1 param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  char local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_148568ea4(0,0);
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
    local_60 = *(undefined8 *)(param_3 + 0x18);
    local_68 = *(undefined8 *)(param_3 + 0x20);
    local_78 = 2;
    if (*param_3 != '\x02') {
      local_78 = *param_3 == '\x01';
    }
    local_70 = param_3[0x10];
    local_80 = *(undefined8 *)(param_3 + 8);
    local_50 = *puVar3;
    local_48 = *(undefined4 *)(puVar3 + 1);
    local_88 = param_7;
    uVar5 = FUN_14826907f(param_4,param_5,&local_50,*param_1);
    *param_6 = uVar5;
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
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d9c8e FUN_1485d9c8e body=357 status=ok
// SIG undefined FUN_1485d9c8e(void)

void FUN_1485d9c8e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  int local_2c;
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
  local_50 = local_28;
  local_48 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_1485d9df4(local_40,&local_50,local_2c != 0);
  FUN_1485d6284(param_3,local_40);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d9df4 FUN_1485d9df4 body=151 status=ok
// SIG undefined FUN_1485d9df4(void)

undefined8 * FUN_1485d9df4(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_148568ea4(0,0);
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
    local_30 = *puVar3;
    local_28 = *(undefined4 *)(puVar3 + 1);
    FUN_14826852a(&local_30,*param_1,param_3);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485d9e90 FUN_1485d9e90 body=282 status=ok
// SIG undefined FUN_1485d9e90(void)

void FUN_1485d9e90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*param_1 != 0) goto LAB_1485d9ea0;
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14af3b810;
  plVar4[2] = 0;
  plVar4[3] = 0;
  if (plVar4 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar5 = (longlong *)param_1[1];
    if (plVar5 == (longlong *)0x0) goto LAB_1485d9ea0;
    param_1[1] = 0;
LAB_1485d9f13:
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
    if (plVar4 == (longlong *)0x0) goto LAB_1485d9ea0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar4 + 2);
    plVar5 = (longlong *)param_1[1];
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
      param_1[1] = (longlong)plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1485d9f13;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1485d9ea0:
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 8) = 0;
  if (-1 < *(int *)(lVar3 + 0xc)) {
    return;
  }
  FUN_1408652ee(lVar3,0);
  return;
}



// FUNCTION 1485d9faa FUN_1485d9faa body=156 status=ok
// SIG undefined FUN_1485d9faa(void)

void FUN_1485d9faa(double *param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  *(undefined1 *)(param_1 + 4) = 0;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_2;
    lVar5 = 0;
    bVar6 = false;
    do {
      if (bVar6) {
        dVar2 = *param_1;
        uVar7 = SUB84(dVar2,0);
        uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar9 = *(double *)(lVar3 + lVar5);
        if (dVar9 <= dVar2) {
          uVar7 = SUB84(dVar9,0);
          uVar8 = (undefined4)((ulonglong)dVar9 >> 0x20);
        }
        *param_1 = (double)CONCAT44(uVar8,uVar7);
        dVar2 = *(double *)(lVar3 + 8 + lVar5);
        dVar9 = param_1[1];
        if (dVar2 <= param_1[1]) {
          dVar9 = dVar2;
        }
        param_1[1] = dVar9;
        dVar2 = param_1[2];
        uVar7 = SUB84(dVar2,0);
        uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar9 = *(double *)(lVar3 + lVar5);
        if (dVar2 <= dVar9) {
          uVar7 = SUB84(dVar9,0);
          uVar8 = (undefined4)((ulonglong)dVar9 >> 0x20);
        }
        param_1[2] = (double)CONCAT44(uVar8,uVar7);
        dVar2 = param_1[3];
        uVar7 = SUB84(dVar2,0);
        uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar9 = *(double *)(lVar3 + 8 + lVar5);
        if (dVar2 <= dVar9) {
          uVar7 = SUB84(dVar9,0);
          uVar8 = (undefined4)((ulonglong)dVar9 >> 0x20);
        }
        param_1[3] = (double)CONCAT44(uVar8,uVar7);
      }
      else {
        pdVar1 = (double *)(lVar3 + lVar5);
        dVar2 = pdVar1[1];
        param_1[2] = *pdVar1;
        param_1[3] = dVar2;
        dVar2 = pdVar1[1];
        *param_1 = *pdVar1;
        param_1[1] = dVar2;
        *(undefined1 *)(param_1 + 4) = 1;
      }
      lVar5 = lVar5 + 0x10;
      bVar6 = true;
    } while ((longlong)(int)lVar4 * 0x10 != lVar5);
  }
  return;
}



// FUNCTION 1485da046 FUN_1485da046 body=95 status=ok
// SIG undefined FUN_1485da046(void)

undefined8 * FUN_1485da046(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148273bb4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1485ebae6(param_1,iVar1);
      FUN_14827a155(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1485da0a6 FUN_1485da0a6 body=80 status=ok
// SIG undefined FUN_1485da0a6(void)

longlong * FUN_1485da0a6(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_148273bb4(*param_1,(int)param_1[1]);
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



// FUNCTION 1485da0f6 FUN_1485da0f6 body=178 status=ok
// SIG undefined FUN_1485da0f6(void)

longlong * FUN_1485da0f6(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = (int)param_2[1];
  if (-1 < iVar3) {
    if (iVar3 != 0) {
      FUN_1408652ee(param_1);
      lVar6 = param_2[1];
      if ((longlong)(int)lVar6 != 0) {
        lVar4 = *param_2;
        lVar7 = 0;
        do {
          uVar1 = *(undefined8 *)(lVar4 + lVar7);
          uVar2 = *(undefined8 *)(lVar4 + 8 + lVar7);
          iVar3 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
            FUN_14489624a(param_1,iVar3);
          }
          lVar5 = *param_1;
          *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x10) = uVar1;
          *(undefined8 *)(lVar5 + 8 + (longlong)iVar3 * 0x10) = uVar2;
          lVar7 = lVar7 + 0x18;
        } while ((longlong)(int)lVar6 * 0x18 != lVar7);
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 1485da1aa FUN_1485da1aa body=244 status=ok
// SIG undefined FUN_1485da1aa(void)

void FUN_1485da1aa(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_38;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar3 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_1485da8f8(plVar3,&local_48);
  FUN_1485da2a0(param_3,&local_48);
  plVar3 = plStack_40;
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
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485da2a0 FUN_1485da2a0 body=107 status=ok
// SIG undefined FUN_1485da2a0(void)

undefined8 * FUN_1485da2a0(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1485da30c FUN_1485da30c body=259 status=ok
// SIG undefined FUN_1485da30c(void)

void FUN_1485da30c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_14858f506(&local_58,0);
  FUN_14070416c(local_58,plVar3);
  FUN_1485da2a0(param_3,&local_58);
  plVar3 = plStack_50;
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
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485da410 FUN_1485da410 body=306 status=ok
// SIG undefined FUN_1485da410(void)

void FUN_1485da410(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0;
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
  local_60 = local_38;
  local_58 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_50 = local_28;
  FUN_1485da544(&local_48);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485da544 FUN_1485da544 body=161 status=ok
// SIG undefined FUN_1485da544(void)

undefined8 * FUN_1485da544(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_20 = *(undefined1 *)(param_2 + 2);
  FUN_1485dac22(&local_30,param_1);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485da5e8 FUN_1485da5e8 body=306 status=ok
// SIG undefined FUN_1485da5e8(void)

void FUN_1485da5e8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0;
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
  local_60 = local_38;
  local_58 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_50 = local_28;
  FUN_1485da71c(&local_48);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485da71c FUN_1485da71c body=161 status=ok
// SIG undefined FUN_1485da71c(void)

undefined8 * FUN_1485da71c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_20 = *(undefined1 *)(param_2 + 2);
  FUN_1485dadd2(&local_30,param_1);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485da7c0 FUN_1485da7c0 body=310 status=ok
// SIG undefined FUN_1485da7c0(void)

void FUN_1485da7c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  plVar4 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485da8f8(plVar4,puVar3);
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
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



// FUNCTION 1485da8f8 FUN_1485da8f8 body=153 status=ok
// SIG undefined FUN_1485da8f8(void)

void FUN_1485da8f8(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  
  FUN_14858f506(param_2,0);
  iVar10 = (int)param_1[1];
  if (-1 < iVar10) {
    if (*(int *)(*param_2 + 0xc) < iVar10) {
      FUN_1447a8aa0();
      iVar10 = (int)param_1[1];
    }
    if (iVar10 != 0) {
      lVar4 = *param_1;
      lVar11 = 0;
      do {
        plVar5 = (longlong *)*param_2;
        iVar3 = (int)plVar5[1];
        *(uint *)(plVar5 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
          FUN_1403e3958(plVar5,iVar3);
        }
        lVar6 = *plVar5;
        puVar1 = (undefined4 *)(lVar4 + lVar11);
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        puVar2 = (undefined4 *)(lVar6 + (longlong)iVar3 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar3 * 0x18) = 0;
        lVar11 = lVar11 + 0x10;
      } while ((longlong)iVar10 * 0x10 != lVar11);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar10);
}



// FUNCTION 1485da992 FUN_1485da992 body=327 status=ok
// SIG undefined FUN_1485da992(void)

void FUN_1485da992(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48;
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
  plVar4 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar3 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14858f506(puVar3,0);
  FUN_14070416c(*puVar3,plVar4);
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485daada FUN_1485daada body=327 status=ok
// SIG undefined FUN_1485daada(void)

void FUN_1485daada(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_40;
  longlong local_38 [3];
  longlong *plStack_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[2] = 0;
  plStack_20 = (longlong *)0x0;
  local_18 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38[2];
  local_48 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  local_40 = local_18;
  FUN_1485dac22(&local_50,plVar3);
  if (local_38[0] != 0) {
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
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dac22 FUN_1485dac22 body=104 status=ok
// SIG undefined FUN_1485dac22(void)

void FUN_1485dac22(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1447a8aa0(param_2,0);
  }
  if (*param_1 != 0) {
    FUN_14070416c(param_2);
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001485dac7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485dac8a FUN_1485dac8a body=327 status=ok
// SIG undefined FUN_1485dac8a(void)

void FUN_1485dac8a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_40;
  longlong local_38 [3];
  longlong *plStack_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[2] = 0;
  plStack_20 = (longlong *)0x0;
  local_18 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_38[2];
  local_48 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  local_40 = local_18;
  FUN_1485dadd2(&local_50,plVar3);
  if (local_38[0] != 0) {
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
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dadd2 FUN_1485dadd2 body=226 status=ok
// SIG undefined FUN_1485dadd2(void)

void FUN_1485dadd2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1408652ee(param_2,0);
  }
  plVar10 = (longlong *)*param_1;
  if (plVar10 != (longlong *)0x0) {
    iVar11 = (int)plVar10[1];
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    if (*(int *)((longlong)param_2 + 0xc) < iVar11) {
      FUN_1408652ee(param_2);
      plVar10 = (longlong *)*param_1;
      iVar11 = (int)plVar10[1];
    }
    if (iVar11 != 0) {
      lVar6 = *plVar10;
      lVar12 = 0;
      do {
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_14489624a(param_2,iVar5);
        }
        puVar3 = (undefined4 *)(lVar6 + lVar12);
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        puVar4 = (undefined4 *)(*param_2 + (longlong)iVar5 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
        lVar12 = lVar12 + 0x18;
      } while ((longlong)iVar11 * 0x18 != lVar12);
    }
  }
  plVar10 = (longlong *)param_1[1];
  if (plVar10 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001485dae99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x10))(plVar10);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1485daeb6 FUN_1485daeb6 body=408 status=ok
// SIG undefined FUN_1485daeb6(void)

void FUN_1485daeb6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_4c;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_4c = 0x3f8000000000000a;
  uStack_44 = (uint)uStack_44._3_1_ << 0x18;
  uStack_40 = 0x3f80000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = uStack_40._4_4_;
  local_68 = (undefined4)local_4c;
  uStack_64 = local_4c._4_4_;
  iStack_60 = uStack_44;
  uStack_5c = (undefined4)uStack_40;
  FUN_1485db050(local_20,puVar4);
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485db050 FUN_1485db050 body=297 status=ok
// SIG undefined FUN_1485db050(void)

void FUN_1485db050(longlong param_1,longlong *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined **local_90;
  code *local_80;
  longlong **local_78;
  undefined1 local_69;
  undefined *local_68;
  undefined1 *local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  longlong *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14858f506(param_2,0);
  if (param_1 != 0) {
    cVar1 = FUN_147a244ec(param_1);
    if (cVar1 == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((longlong)param_3 + 10) == '\0';
    }
    *(bool *)(param_2 + 2) = bVar3;
    if ((char)param_3[2] == '\x02') {
      local_38 = (longlong *)0x0;
      uStack_30 = 0;
      local_48 = param_3[4];
      local_58 = *param_3;
      iStack_54 = param_3[1];
      iStack_50 = param_3[2];
      iStack_4c = param_3[3];
      FUN_1485dd7f7(param_1,&local_58,*param_2,&local_38);
      if (local_38 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      iVar2 = 2;
      if (2 < *param_3) {
        iVar2 = *param_3;
      }
      if (*(int *)(*param_2 + 0xc) < iVar2) {
        FUN_1447a8aa0();
      }
      local_60 = &local_69;
      local_90 = &local_68;
      local_68 = &DAT_143bee71a;
      local_78 = &local_38;
      local_80 = FUN_143bee69c;
      local_98 = 0;
      local_38 = param_2;
      FUN_1485dd545(param_1,param_3,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485db17a FUN_1485db17a body=536 status=ok
// SIG undefined FUN_1485db17a(void)

void FUN_1485db17a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  local_70 = local_38;
  local_78 = local_34;
  FUN_1485db394(local_50,&local_68,local_2c,local_30);
  FUN_1485da2a0(param_3,local_50);
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
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485db394 FUN_1485db394 body=363 status=ok
// SIG undefined FUN_1485db394(void)

longlong *
FUN_1485db394(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14858f506(param_1,0);
  *(undefined1 *)(param_1 + 2) = 0;
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0x3ff00000;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0x3ff00000;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0x3ff0000000000000;
  uStack_90 = 0;
  local_100 = param_6;
  local_108 = param_5;
  local_f8 = 1;
  FUN_1485dd1df(&local_80,&local_e8,param_3,param_4);
  plVar1 = (longlong *)*param_1;
  if (plVar1 == &local_80) {
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *plVar1 = local_80;
    *(undefined4 *)(plVar1 + 1) = local_78;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_74;
  }
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485db500 FUN_1485db500 body=682 status=ok
// SIG undefined FUN_1485db500(void)

void FUN_1485db500(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined8 local_118 [13];
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
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
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_94 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  local_98 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  uVar4 = local_8c;
  uVar3 = local_90;
  local_128 = local_94;
  local_120 = local_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar6 = local_88;
  puVar7 = local_118;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_1485db7ac(local_b0,local_118,uVar4,uVar3);
  FUN_1485da2a0(param_3,local_b0);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a8 + 0x10))(local_a8);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485db7ac FUN_1485db7ac body=301 status=ok
// SIG undefined FUN_1485db7ac(void)

longlong *
FUN_1485db7ac(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined8 local_d8 [13];
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14858f506(0,0);
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = local_d8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_f0 = param_6;
  local_f8 = param_5;
  local_e8 = 1;
  FUN_1485dd1df(&local_70,local_d8,param_3,param_4);
  plVar1 = (longlong *)*param_1;
  if (plVar1 == &local_70) {
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *plVar1 = local_70;
    *(undefined4 *)(plVar1 + 1) = local_68;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_64;
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485db8da FUN_1485db8da body=360 status=ok
// SIG undefined FUN_1485db8da(void)

void FUN_1485db8da(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_28;
  uStack_54 = uStack_24;
  uStack_50 = uStack_20;
  uStack_4c = uStack_1c;
  FUN_1485dba44(local_48,&local_58,local_2c,local_30);
  FUN_1485da2a0(param_3,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dba44 FUN_1485dba44 body=307 status=ok
// SIG undefined FUN_1485dba44(void)

longlong *
FUN_1485dba44(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined1 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14858f506(param_1,0);
  *(undefined1 *)(param_1 + 2) = 1;
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0x3ff00000;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  local_d8 = 0;
  local_e0 = 0x43b40000;
  local_e8 = 0;
  FUN_1485dd1df(&local_60,&local_c8,param_3,param_4);
  plVar1 = (longlong *)*param_1;
  if (plVar1 == &local_60) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *plVar1 = local_60;
    *(undefined4 *)(plVar1 + 1) = local_58;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_54;
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dbb78 FUN_1485dbb78 body=494 status=ok
// SIG undefined FUN_1485dbb78(void)

void FUN_1485dbb78(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108 [12];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined4 local_90;
  undefined4 local_8c;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
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
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  uVar4 = local_8c;
  uVar3 = local_90;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar6 = local_88;
  puVar7 = local_108;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_1485dbd68(local_a8,local_108,uVar4,uVar3);
  FUN_1485da2a0(param_3,local_a8);
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dbd68 FUN_1485dbd68 body=256 status=ok
// SIG undefined FUN_1485dbd68(void)

longlong *
FUN_1485dbd68(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined8 local_b8 [13];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14858f506(0,0);
  *(undefined1 *)(param_1 + 2) = 1;
  puVar3 = local_b8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_c8 = 0;
  local_d0 = 0x43b40000;
  local_d8 = 0;
  FUN_1485dd1df(&local_50,local_b8,param_3,param_4);
  plVar1 = (longlong *)*param_1;
  if (plVar1 == &local_50) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *plVar1 = local_50;
    *(undefined4 *)(plVar1 + 1) = local_48;
    *(undefined4 *)((longlong)plVar1 + 0xc) = local_44;
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dbe6a FUN_1485dbe6a body=373 status=ok
// SIG undefined FUN_1485dbe6a(void)

void FUN_1485dbe6a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_39;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_38;
  local_68 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_60 = local_28;
  FUN_1485dbfe0(local_58,&local_70,local_39);
  FUN_1485da2a0(param_3,local_58);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dbfe0 FUN_1485dbfe0 body=262 status=ok
// SIG undefined FUN_1485dbfe0(void)

longlong * FUN_1485dbfe0(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_14858f506(0,0);
  lVar5 = *param_2;
  if (lVar5 != 0) {
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    plVar4 = (longlong *)param_1[1];
    *param_1 = lVar5;
    param_1[1] = lVar3;
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
    lVar5 = (longlong)(int)((longlong *)*param_1)[1];
    if (lVar5 != 0) {
      lVar3 = *(longlong *)*param_1;
      lVar6 = 0;
      do {
        *(undefined8 *)(lVar3 + lVar6) =
             *(undefined8 *)(lVar3 + (ulonglong)(param_3 == '\0') * 8 + lVar6);
        *(undefined8 *)(lVar3 + 8 + lVar6) =
             *(undefined8 *)(lVar3 + (ulonglong)(param_3 != '\x02') * 8 + 8 + lVar6);
        *(undefined8 *)(lVar3 + 0x10 + lVar6) = 0;
        lVar6 = lVar6 + 0x18;
      } while (lVar5 * 0x18 != lVar6);
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



// FUNCTION 1485dc0e6 FUN_1485dc0e6 body=339 status=ok
// SIG undefined FUN_1485dc0e6(void)

void FUN_1485dc0e6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_68 = local_50;
  uStack_64 = uStack_4c;
  uStack_60 = uStack_48;
  uStack_5c = uStack_44;
  local_80 = local_38;
  local_78 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_70 = local_28;
  uVar4 = FUN_1485dc23a(&local_80,&local_68);
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dc23a FUN_1485dc23a body=193 status=ok
// SIG undefined FUN_1485dc23a(void)

ulonglong FUN_1485dc23a(longlong *param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  double *pdVar7;
  double dVar8;
  
  plVar3 = (longlong *)*param_1;
  uVar6 = 0xffffffff;
  if ((plVar3 != (longlong *)0x0) && (0 < (longlong)(int)plVar3[1])) {
    pdVar7 = (double *)(*plVar3 + 0x10);
    dVar8 = 1.79769313486232e+308;
    uVar5 = 0;
    do {
      dVar4 = (param_2[2] - *pdVar7) * (param_2[2] - *pdVar7) +
              (*param_2 - pdVar7[-2]) * (*param_2 - pdVar7[-2]) +
              (param_2[1] - pdVar7[-1]) * (param_2[1] - pdVar7[-1]);
      if (dVar4 < dVar8) {
        uVar6 = uVar5 & 0xffffffff;
        dVar8 = dVar4;
      }
      uVar5 = uVar5 + 1;
      pdVar7 = pdVar7 + 3;
    } while ((longlong)(int)plVar3[1] != uVar5);
  }
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
  return uVar6;
}



// FUNCTION 1485dc2fc FUN_1485dc2fc body=236 status=ok
// SIG undefined FUN_1485dc2fc(void)

void FUN_1485dc2fc(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0;
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
  local_50 = local_38;
  local_48 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_40 = local_28;
  uVar3 = FUN_1485dc3ea();
  plVar4 = plStack_30;
  *param_3 = uVar3;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dc3ea FUN_1485dc3ea body=272 status=ok
// SIG undefined FUN_1485dc3ea(void)

double FUN_1485dc3ea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  double *pdVar4;
  longlong *plVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  puVar3 = (undefined8 *)*param_1;
  dVar6 = 0.0;
  if ((puVar3 != (undefined8 *)0x0) && (lVar7 = (longlong)*(int *)(puVar3 + 1), 1 < lVar7)) {
    pdVar4 = (double *)*puVar3;
    lVar8 = 0x18;
    do {
      dVar9 = *(double *)((longlong)pdVar4 + lVar8 + -0x18) - *(double *)((longlong)pdVar4 + lVar8);
      dVar10 = *(double *)((longlong)pdVar4 + lVar8 + -0x10) -
               *(double *)((longlong)pdVar4 + lVar8 + 8);
      dVar11 = *(double *)((longlong)pdVar4 + lVar8 + -8) -
               *(double *)((longlong)pdVar4 + lVar8 + 0x10);
      dVar6 = dVar6 + SQRT(dVar11 * dVar11 + dVar9 * dVar9 + dVar10 * dVar10);
      lVar8 = lVar8 + 0x18;
    } while (lVar7 * 0x18 != lVar8);
    if (*(char *)(param_1 + 2) != '\0') {
      dVar6 = dVar6 + SQRT((pdVar4[2] - pdVar4[lVar7 * 3 + -1]) *
                           (pdVar4[2] - pdVar4[lVar7 * 3 + -1]) +
                           (*pdVar4 - pdVar4[lVar7 * 3 + -3]) * (*pdVar4 - pdVar4[lVar7 * 3 + -3]) +
                           (pdVar4[1] - pdVar4[lVar7 * 3 + -2]) *
                           (pdVar4[1] - pdVar4[lVar7 * 3 + -2]));
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
  return dVar6;
}



// FUNCTION 1485dc4fa FUN_1485dc4fa body=282 status=ok
// SIG undefined FUN_1485dc4fa(void)

void FUN_1485dc4fa(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
    if (1 < *(int *)(local_38 + 8)) {
      iVar4 = *(int *)(local_38 + 8);
    }
    iVar4 = iVar4 + -1;
  }
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
  plVar3 = plStack_30;
  *param_3 = iVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dc616 FUN_1485dc616 body=269 status=ok
// SIG undefined FUN_1485dc616(void)

void FUN_1485dc616(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = plStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  if (local_38 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_38 + 8);
  }
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
  plVar3 = plStack_30;
  *param_3 = uVar4;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dc72a FUN_1485dc72a body=426 status=ok
// SIG undefined FUN_1485dc72a(void)

void FUN_1485dc72a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  puVar4 = &local_3d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_38;
  local_68 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_60 = local_28;
  FUN_1485dc8d6(&local_58,&local_70,local_3c,puVar4);
  plVar3 = plStack_30;
  *(undefined8 *)(param_3 + 4) = local_48;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
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
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dc8d6 FUN_1485dc8d6 body=198 status=ok
// SIG undefined FUN_1485dc8d6(void)

undefined4 * FUN_1485dc8d6(undefined4 *param_1,longlong *param_2,int param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_4 = 0;
  if ((param_3 < 0 || *param_2 == 0) || (*(int *)(*param_2 + 8) <= param_3)) {
    *(undefined8 *)(param_1 + 4) = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar4 = DAT_14c8464e0._4_4_;
    *param_1 = (undefined4)DAT_14c8464e0;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
  }
  else {
    *param_4 = 1;
    local_28 = *(undefined8 *)*param_2;
    local_20 = *(undefined4 *)((undefined8 *)*param_2 + 1);
    if ((char)param_2[2] == '\x01') {
      FUN_148349c2d();
    }
    else {
      FUN_148349d01(param_1,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dc9a4 FUN_1485dc9a4 body=426 status=ok
// SIG undefined FUN_1485dc9a4(void)

void FUN_1485dc9a4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  puVar4 = &local_3d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_38;
  local_68 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_60 = local_28;
  FUN_1485dcb50(&local_58,&local_70,local_3c,puVar4);
  plVar3 = plStack_30;
  *(undefined8 *)(param_3 + 4) = local_48;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
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
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dcb50 FUN_1485dcb50 body=141 status=ok
// SIG undefined FUN_1485dcb50(void)

undefined4 * FUN_1485dcb50(undefined4 *param_1,longlong *param_2,uint param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *param_4 = 0;
  if (((int)param_3 < 0 || *param_2 == 0) || (*(int *)(*param_2 + 8) <= (int)param_3)) {
    *(undefined8 *)(param_1 + 4) = DAT_14c8464f0;
    uVar6 = (undefined4)DAT_14c8464e0;
    uVar7 = DAT_14c8464e0._4_4_;
    uVar8 = (undefined4)DAT_14c8464e8;
    uVar9 = DAT_14c8464e8._4_4_;
  }
  else {
    *param_4 = 1;
    lVar4 = *(longlong *)*param_2;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar4 + 0x10 + (ulonglong)param_3 * 0x18);
    puVar3 = (undefined4 *)(lVar4 + (ulonglong)param_3 * 0x18);
    uVar6 = *puVar3;
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
  }
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
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



// FUNCTION 1485dcbee FUN_1485dcbee body=844 status=ok
// SIG undefined FUN_1485dcbee(void)

void FUN_1485dcbee(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined1 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined8 local_148 [13];
  int local_dc;
  undefined8 local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_6c;
  undefined4 uStack_64;
  undefined8 uStack_60;
  longlong local_58 [6];
  
  local_58[5] = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_58[4] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 4);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar6 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
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
  plVar7 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_6c = 0x3f8000000000000a;
  uStack_64 = (uint)uStack_64._3_1_ << 0x18;
  uStack_60 = 0x3f80000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0x3ff00000;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  local_dc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_dc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_dc);
  }
  iVar1 = local_dc;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = local_148;
  puVar4 = local_d8;
  puVar5 = local_178;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  local_158 = uStack_60._4_4_;
  local_168 = (undefined4)local_6c;
  uStack_164 = local_6c._4_4_;
  iStack_160 = uStack_64;
  uStack_15c = (undefined4)uStack_60;
  local_170 = iVar1 != 0;
  uVar2 = FUN_1485dcf3c(local_58[4],plVar6,plVar7);
  *param_3 = uVar2;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[5] ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dcf3c FUN_1485dcf3c body=670 status=ok
// SIG undefined FUN_1485dcf3c(void)

ulonglong FUN_1485dcf3c(longlong param_1,longlong param_2,longlong param_3,int *param_4,
                       undefined8 param_5,undefined1 param_6)

{
  float fVar1;
  double dVar2;
  longlong *plVar3;
  undefined8 unaff_RBX;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 **local_f0;
  undefined *local_e8;
  longlong *local_e0;
  undefined1 *local_d8;
  undefined8 **local_d0;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  longlong local_a8 [2];
  longlong *local_98;
  ulonglong uStack_90;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  int *local_68;
  undefined8 local_60;
  undefined1 local_58;
  char local_57;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_1401a2688(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_140cb0586(param_3,0);
  }
  bVar6 = (char)param_4[2] == '\0';
  if ((char)param_4[2] == '\x02') {
    bVar6 = *(char *)((longlong)param_4 + 10) != '\x03';
  }
  if (param_1 != 0) {
    local_60 = param_5;
    local_58 = param_6;
    local_80 = param_1;
    local_78 = param_2;
    local_70 = param_3;
    local_68 = param_4;
    local_57 = bVar6;
    FUN_147a244ec(param_1);
    if ((char)param_4[2] == '\x02') {
      local_98 = (longlong *)0x0;
      uStack_90 = 0;
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_c8 = *param_4;
      iStack_c4 = param_4[1];
      iStack_c0 = param_4[2];
      iStack_bc = param_4[3];
      local_b8 = param_4[4];
      FUN_1485dd7f7(param_1,&local_c8,local_a8,&local_98);
      if ((int)uStack_90 < 0) {
LAB_1485dd1d3:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uStack_90 & 0xffffffff);
      }
      iVar4 = (int)uStack_90;
      if (*(int *)(param_2 + 0xc) < (int)uStack_90) {
        FUN_1401a2688(param_2);
        iVar4 = (int)uStack_90;
        if ((int)uStack_90 < 0) goto LAB_1485dd1d3;
      }
      if (*(int *)(param_3 + 0xc) < iVar4) {
        FUN_140cb0586(param_3);
        iVar4 = (int)uStack_90;
      }
      plVar3 = local_98;
      if (iVar4 != 0) {
        lVar5 = 0;
        do {
          dVar2 = *(double *)((longlong)plVar3 + lVar5);
          if (bVar6 == false) {
            fVar7 = (float)FUN_147a220aa(param_1,(float)dVar2);
          }
          else {
            fVar1 = *(float *)(param_1 + 0x68c);
            fVar7 = (float)FUN_147a21316(param_1);
            fVar7 = ((float)dVar2 * fVar1) / fVar7;
          }
          FUN_143be035e(&local_80,fVar7);
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar4 * 8 != lVar5);
      }
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      iVar4 = 2;
      if (2 < *param_4) {
        iVar4 = *param_4;
      }
      if (*(int *)(param_2 + 0xc) < iVar4) {
        FUN_1401a2688(param_2,iVar4);
      }
      if (*(int *)(param_3 + 0xc) < iVar4) {
        FUN_140cb0586(param_3,iVar4);
      }
      local_98 = &local_80;
      local_d0 = &local_98;
      local_f0 = &local_d8;
      local_d8 = &LAB_143bee71e;
      local_e0 = local_a8;
      local_e8 = &DAT_143bee71c;
      local_f8 = 1;
      FUN_1485dd545(param_1,param_4,0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar6) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dd1df FUN_1485dd1df body=628 status=ok
// SIG undefined FUN_1485dd1df(void)

longlong *
FUN_1485dd1df(longlong *param_1,double *param_2,float param_3,int param_4,float param_5,
             float param_6,byte param_7)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  iVar11 = 2;
  if (2 < param_4) {
    iVar11 = param_4;
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1447a8aa0(param_1,iVar11);
  iVar10 = iVar11 - (uint)param_7;
  dVar6 = 0.0;
  do {
    dVar13 = dVar6 * (((double)param_6 * 0.017453292519943295 -
                      (double)param_5 * 0.017453292519943295) / (double)iVar10) +
             (double)param_5 * 0.017453292519943295;
    dVar12 = sin(dVar13);
    dVar13 = cos(dVar13);
    dVar14 = dVar13 * (double)param_3 * param_2[8];
    dVar12 = dVar12 * (double)param_3 * param_2[9];
    dVar15 = param_2[10] * 0.0;
    dVar7 = *param_2;
    dVar8 = param_2[1];
    dVar9 = param_2[2];
    dVar13 = param_2[3];
    dVar16 = dVar12 * dVar7 - dVar14 * dVar8;
    dVar17 = dVar15 * dVar8 - dVar12 * dVar9;
    dVar18 = dVar14 * dVar9 - dVar7 * dVar15;
    dVar17 = dVar17 + dVar17;
    dVar18 = dVar18 + dVar18;
    dVar16 = dVar16 + dVar16;
    dVar1 = param_2[4];
    dVar5 = (dVar9 * dVar17 - dVar7 * dVar16) + param_2[3] * dVar18 + dVar12 + param_2[5];
    dVar12 = param_2[6];
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_1403e3958(param_1,iVar2);
    }
    lVar3 = *param_1;
    auVar4._8_4_ = SUB84(dVar5,0);
    auVar4._0_8_ = (dVar16 * dVar8 - dVar18 * dVar9) + dVar13 * dVar17 + dVar14 + dVar1;
    auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(lVar3 + (longlong)iVar2 * 0x18) = auVar4;
    *(double *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) =
         dVar16 * dVar13 + dVar15 + (dVar18 * dVar7 - dVar17 * dVar8) + dVar12;
    dVar6 = dVar6 + 1.0;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return param_1;
}



// FUNCTION 1485dd453 FUN_1485dd453 body=242 status=ok
// SIG undefined FUN_1485dd453(void)

undefined8 FUN_1485dd453(longlong param_1,float param_2,char param_3,char param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar6 [16];
  
  fVar1 = *(float *)(param_1 + 0x68c);
  if (param_4 == '\0') {
    if (fVar1 <= param_2) {
      param_2 = fVar1;
    }
    uVar5 = 0;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
  }
  else {
    fVar3 = (float)FUN_1447c7e44(param_2,fVar1);
    auVar6 = roundps(unaff_XMM7,ZEXT416((uint)(param_2 / fVar1)),1);
    auVar6._0_4_ = auVar6._0_4_ * fVar1;
    uVar5 = auVar6._0_8_;
    param_2 = (float)(~-(uint)(fVar3 < 0.0) & (uint)fVar3 |
                     (uint)(fVar1 + fVar3) & -(uint)(fVar3 < 0.0));
  }
  if (param_3 == '\0') {
    iVar2 = FUN_14349c81a(param_1);
    fVar4 = (float)FUN_147a1e56e(param_1,(param_2 / fVar1) * (float)iVar2);
    fVar1 = *(float *)(param_1 + 0x68c);
    fVar3 = (float)FUN_147a21316(param_1);
    fVar3 = (fVar4 * fVar1) / fVar3;
  }
  else {
    fVar3 = (float)FUN_147a21316();
    fVar3 = (float)FUN_147a220aa(param_1,(param_2 / fVar1) * fVar3);
  }
  return CONCAT44((int)((ulonglong)uVar5 >> 0x20),(float)uVar5 + fVar3);
}



// FUNCTION 1485dd545 FUN_1485dd545 body=689 status=ok
// SIG undefined FUN_1485dd545(void)

void FUN_1485dd545(longlong param_1,int *param_2,byte param_3,undefined8 *param_4,byte param_5,
                  undefined8 *param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_R15;
  ulonglong uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  char local_d1;
  longlong local_d0;
  float local_c8 [6];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d0 = param_1;
  if ((param_3 | param_5) == 1) {
    fVar10 = (float)param_2[3];
    fVar11 = (float)param_2[4];
    if (*(byte *)((longlong)param_2 + 10) < 2) {
      fVar9 = (float)FUN_147a21316(param_1);
      bVar8 = *(char *)((longlong)param_2 + 10) != '\0';
      if (bVar8) {
        fVar9 = fVar11;
      }
      fVar13 = 0.0;
      if (bVar8) {
        fVar13 = fVar10;
      }
      fVar11 = *(float *)(param_1 + 0x68c);
      fVar10 = (float)FUN_147a21316(param_1);
      fVar11 = fVar11 / fVar10;
      fVar10 = fVar13 * fVar11;
      fVar11 = fVar9 * fVar11;
    }
    bVar2 = FUN_147a244ec(param_1);
    local_d1 = (char)param_2[2];
    cVar1 = *(char *)((longlong)param_2 + 10);
    bVar2 = cVar1 != '\0' & bVar2;
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar2);
    if ((cVar1 != '\x03') != (local_d1 == '\0')) {
      uVar7 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),cVar1 != '\x03');
      fVar10 = (float)FUN_1485dd453(param_1,fVar10,uVar7 & 0xffffffff,uVar4 & 0xffffffff);
      fVar11 = (float)FUN_1485dd453(param_1,fVar11,uVar7 & 0xffffffff,uVar4 & 0xffffffff);
    }
    fVar9 = *(float *)(param_1 + 0x68c);
    fVar12 = fVar10;
    fVar13 = fVar11;
    if (bVar2 == 0) {
      fVar13 = fVar9;
      if (fVar11 <= fVar9) {
        fVar13 = fVar11;
      }
      fVar12 = 0.0;
      if (0.0 <= fVar10) {
        fVar12 = fVar10;
      }
    }
    fVar13 = fVar13 - fVar12;
    if (0.0 <= fVar13) {
      iVar6 = 2;
      if (2 < *param_2) {
        iVar6 = *param_2;
      }
      iVar5 = 1;
      if (fVar13 != 0.0) {
        iVar5 = iVar6;
      }
      if (NAN(fVar13)) {
        iVar5 = iVar6;
      }
      bVar3 = FUN_147a244ec(local_d0);
      cVar1 = *(char *)((longlong)param_2 + 10);
      iVar6 = 0;
      do {
        fVar10 = ((float)iVar6 / (float)(int)(iVar5 - (uint)(byte)(bVar3 ^ 1 | cVar1 != '\0'))) *
                 fVar13 + fVar12;
        if (bVar2 != 0) {
          fVar10 = (float)FUN_1447c7e44(fVar10,fVar9);
          fVar10 = (float)(~-(uint)(fVar10 < 0.0) & (uint)fVar10 |
                          (uint)(fVar9 + fVar10) & -(uint)(fVar10 < 0.0));
        }
        if (param_3 != 0) {
          local_e8 = local_d1 == '\0';
          FUN_147a1f6fc(local_d0,local_c8,fVar10,*(undefined1 *)((longlong)param_2 + 9));
          (*(code *)*param_4)(param_4[1],local_c8);
        }
        if (param_5 != 0) {
          local_c8[0] = fVar10;
          (*(code *)*param_6)(param_6[1],local_c8);
        }
        iVar6 = iVar6 + 1;
      } while (iVar5 != iVar6);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485dd7f7 FUN_1485dd7f7 body=308 status=ok
// SIG undefined FUN_1485dd7f7(void)

void FUN_1485dd7f7(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  bVar3 = FUN_147a244ec();
  bVar2 = *(byte *)(param_2 + 10);
  fVar5 = *(float *)(param_2 + 4) * *(float *)(param_2 + 4);
  fVar8 = 0.0001;
  if (0.0001 <= fVar5) {
    fVar8 = fVar5;
  }
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  if (bVar2 < 2) {
    uVar6 = FUN_147a21316(param_1);
    bVar4 = *(char *)(param_2 + 10) != '\0';
    if (bVar4) {
      uVar6 = uVar7;
    }
    uVar7 = 0;
    if (bVar4) {
      uVar7 = uVar1;
    }
    FUN_147a1b2ac(param_1,*(undefined1 *)(param_2 + 9),fVar8,uVar7,uVar6,param_3,param_4,bVar4);
  }
  else {
    FUN_147a1bfd0(param_1,*(undefined1 *)(param_2 + 9),fVar8,uVar1,uVar7,bVar2 == 2,param_3,param_4,
                  1);
  }
  if (((bVar2 == 0 & bVar3) != 0) && (*(int *)(param_3 + 8) != 0)) {
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + -1;
    FUN_140704026(param_3);
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + -1;
    FUN_140704066(param_4);
    return;
  }
  return;
}



// FUNCTION 1485dd950 FUN_1485dd950 body=858 status=ok
// SIG undefined FUN_1485dd950(void)

void FUN_1485dd950(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined4 local_c4;
  int local_c0;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar4 = local_4c;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_b9 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_c0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  iVar3 = local_c0;
  local_c4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  local_d0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  uVar5 = local_48;
  local_f8 = &local_b9;
  if (puVar2 != (undefined1 *)0x0) {
    local_f8 = puVar2;
  }
  puVar6 = &local_b8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar6 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f0 = iVar3 != 0;
  local_e0 = local_d0;
  local_e8 = local_c4;
  FUN_1485ddcac(local_40,local_48,iVar4 != 0,puVar6);
  *param_3 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485ddcac FUN_1485ddcac body=1573 status=ok
// SIG undefined FUN_1485ddcac(void)

longlong FUN_1485ddcac(longlong *param_1,longlong param_2,char param_3,longlong *param_4,
                      undefined1 *param_5,char param_6,undefined4 param_7,undefined8 param_8)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_408 [32];
  undefined1 local_3e8;
  undefined1 local_3e0;
  undefined8 *local_3d8;
  undefined1 local_3d0;
  undefined4 *local_3c8;
  undefined1 *local_3b8;
  wchar_t ***local_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  undefined1 local_390 [4];
  undefined1 local_38c [4];
  undefined8 local_388 [2];
  undefined8 local_378;
  wchar_t **local_340;
  longlong lStack_338;
  longlong local_330;
  longlong lStack_328;
  longlong local_320;
  longlong lStack_318;
  longlong local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  longlong local_2a0;
  undefined8 local_298;
  wchar_t *local_290;
  undefined4 local_288;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_408;
  *param_5 = 0;
  if (param_2 == 0) {
    local_290 = L"CopyCollisionMeshesFromObject_InvalidInput";
    local_288 = 0x2a;
    FUN_1446e940c(&local_340,&local_290);
    local_290 = L"UGeometryScriptLibrary_SceneUtilityFunctions";
    local_288 = 0x2c;
    FUN_1446e940c(local_38c,&local_290);
    FUN_140208bae(&local_290,local_38c,&local_340,
                  L"CopyCollisionMeshesFromObject: ToDynamicMesh is Null");
    FUN_143ba90d7(param_8,2,&local_290);
    if (local_290 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_290 + 0x10))();
    }
    goto LAB_1485ddfaf;
  }
  local_3e8 = 0;
  FUN_1411b354a(&local_290,0,0,0);
  FUN_146c03744(&local_290,*(undefined8 *)(param_2 + 0x98),1,0);
  if (param_6 == '\0') {
    if (param_1 != (longlong *)0x0) {
      lVar1 = FUN_144a3a302();
      if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) {
        lVar1 = FUN_1406d0862();
        if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
           (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
            != lVar1 + 0x30)) goto LAB_1485ddf1b;
        plVar2 = &DAT_14c846480;
        plVar3 = param_4;
        for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
          *plVar3 = *plVar2;
          plVar2 = plVar2 + 1;
          plVar3 = plVar3 + 1;
        }
        lVar1 = param_1[0x31];
      }
      else {
        plVar2 = param_1 + 0x48;
        plVar3 = param_4;
        for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
          *plVar3 = *plVar2;
          plVar2 = plVar2 + 1;
          plVar3 = plVar3 + 1;
        }
        lVar1 = (**(code **)(*param_1 + 0x7a0))(param_1);
      }
      if (lVar1 != 0) {
        local_2a0 = 0;
        local_298 = 0x200000000;
        uVar4 = (undefined4)DAT_14c846520;
        uVar5 = (undefined4)((ulonglong)DAT_14c846520 >> 0x20);
        local_3a8 = (undefined4)DAT_14c846510;
        uStack_3a4 = DAT_14c846510._4_4_;
        uStack_3a0 = (undefined4)DAT_14c846518;
        uStack_39c = DAT_14c846518._4_4_;
        if (param_3 != '\0') {
          local_3a8 = (undefined4)param_4[8];
          uStack_3a4 = *(undefined4 *)((longlong)param_4 + 0x44);
          uStack_3a0 = (undefined4)param_4[9];
          uStack_39c = *(undefined4 *)((longlong)param_4 + 0x4c);
          uVar4 = (undefined4)param_4[10];
          uVar5 = (undefined4)((ulonglong)param_4[10] >> 0x20);
          local_340 = (wchar_t **)*param_4;
          lStack_338 = param_4[1];
          local_330 = param_4[2];
          lStack_328 = param_4[3];
          local_320 = param_4[4];
          lStack_318 = param_4[5];
          local_310 = param_4[6];
          local_298 = 0x200000001;
          local_308 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
          uStack_300 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
          local_2f8 = DAT_14c846520;
        }
        local_3c8 = &local_3a8;
        local_398 = CONCAT44(uVar5,uVar4);
        local_3d8 = local_388;
        local_388[0] = 0;
        local_378 = 0;
        local_3e0 = 1;
        local_3e8 = 1;
        local_3d0 = 0;
        FUN_148508ef0(lVar1 + 0x38,&local_290,&local_340,param_7);
        goto LAB_1485de237;
      }
    }
LAB_1485ddf1b:
    local_340 = (wchar_t **)0x14af987e6;
    lStack_338._0_4_ = 0x29;
    FUN_1446e940c(local_38c,&local_340);
    local_340 = (wchar_t **)0x14af97f50;
    lStack_338 = CONCAT44(lStack_338._4_4_,0x2c);
    FUN_1446e940c(local_390,&local_340);
    FUN_140208bae(&local_340,local_390,local_38c,
                  L"CopyCollisionMeshesFromObject: BodySetup is null or Object type is not supported"
                 );
    FUN_143ba9449(param_8,2,&local_340);
LAB_1485ddf94:
    if (local_340 != (wchar_t **)0x0) {
      (**(code **)(*local_340 + 8))();
    }
  }
  else {
    if (param_1 == (longlong *)0x0) {
LAB_1485dddbd:
      local_340 = (wchar_t **)0x14af986e0;
      lStack_338._0_4_ = 0x31;
      FUN_1446e940c(local_38c,&local_340);
      local_340 = (wchar_t **)0x14af97f50;
      lStack_338 = CONCAT44(lStack_338._4_4_,0x2c);
      FUN_1446e940c(local_390,&local_340);
      FUN_140208bae(&local_340,local_390,local_38c,
                    L"CopyCollisionMeshesFromObject: Complex Collision Provider is not available for this object type"
                   );
      FUN_143ba90d7(param_8,2,&local_340);
      goto LAB_1485ddf94;
    }
    lVar1 = FUN_144a7a726();
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      lVar1 = FUN_1406d0862();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30)) {
        plVar2 = &DAT_14c846480;
        plVar3 = param_4;
        for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
          *plVar3 = *plVar2;
          plVar2 = plVar2 + 1;
          plVar3 = plVar3 + 1;
        }
        goto LAB_1485de177;
      }
      lVar1 = FUN_1411674f6();
      if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) goto LAB_1485dddbd;
      plVar2 = param_1 + 0x48;
      plVar3 = param_4;
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *plVar3 = *plVar2;
        plVar2 = plVar2 + 1;
        plVar3 = plVar3 + 1;
      }
    }
    else {
      plVar2 = param_1 + 0x48;
      plVar3 = param_4;
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *plVar3 = *plVar2;
        plVar2 = plVar2 + 1;
        plVar3 = plVar3 + 1;
      }
      param_1 = (longlong *)param_1[0xcc];
      if ((param_1 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(param_1);
      }
      else if (param_1 == (longlong *)0x0) goto LAB_1485dddbd;
LAB_1485de177:
      param_1 = param_1 + 0x19;
      if (param_1 == (longlong *)0x0) goto LAB_1485dddbd;
    }
    local_2a0 = 0;
    local_298 = 0x200000000;
    if (param_3 != '\0') {
      local_340 = (wchar_t **)*param_4;
      lStack_338 = param_4[1];
      local_330 = param_4[2];
      lStack_328 = param_4[3];
      local_320 = param_4[4];
      lStack_318 = param_4[5];
      local_308 = param_4[8];
      uStack_300 = param_4[9];
      local_2f8 = param_4[10];
      local_310 = param_4[6];
      local_298 = 0x200000001;
    }
    local_38c[0] = 0;
    local_3e0 = 1;
    local_3e8 = 1;
    FUN_14850928a(param_1,&local_290,&local_340);
LAB_1485de237:
    if (local_2a0 != 0) {
      FUN_1400020a8();
    }
    local_3b0 = &local_340;
    local_3b8 = &LAB_143bee72a;
    local_3e8 = 0;
    local_340 = &local_290;
    FUN_1484b20f8(param_2,&local_3b8,0,0);
    *param_5 = 1;
  }
  FUN_141082778(&local_290);
LAB_1485ddfaf:
  if ((local_70 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1485de2d8 FUN_1485de2d8 body=825 status=ok
// SIG undefined FUN_1485de2d8(void)

void FUN_1485de2d8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_50;
  undefined2 local_4c;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
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
  local_4c = 0x101;
  uStack_4a = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  iVar3 = local_50;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_b9 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_c8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  uVar4 = local_40;
  local_f0 = &local_b9;
  if (puVar2 != (undefined1 *)0x0) {
    local_f0 = puVar2;
  }
  local_f8 = &local_b8;
  if (puVar1 != (undefined8 *)0x0) {
    local_f8 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d8 = CONCAT44(uStack_48,CONCAT13(uStack_49,CONCAT12(uStack_4a,local_4c)));
  local_d0 = uStack_44;
  local_e8 = local_c8;
  FUN_1485de612(local_38,local_40,&local_d8,iVar3 != 0);
  *param_3 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485de612 FUN_1485de612 body=941 status=ok
// SIG undefined FUN_1485de612(void)

longlong FUN_1485de612(undefined8 param_1,longlong param_2,undefined1 *param_3,undefined4 param_4,
                      ulonglong param_5,undefined1 *param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_368 [32];
  ulonglong local_348;
  longlong **local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined1 local_320 [4];
  undefined1 local_31c [4];
  longlong *local_318 [2];
  undefined8 local_308;
  longlong *local_300;
  longlong *local_2f8;
  undefined4 local_2f0;
  longlong *local_2e8 [2];
  longlong *local_2d8;
  undefined4 local_2d0;
  byte local_2c4 [4];
  undefined4 local_2c0;
  undefined1 local_2bc;
  undefined1 local_2bb;
  undefined1 local_2ba;
  undefined1 local_2b9;
  undefined8 local_2b8;
  longlong *local_2b0;
  wchar_t **local_2a8;
  ulonglong *local_2a0;
  longlong local_298;
  undefined4 local_290;
  wchar_t *local_288;
  undefined4 local_280;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  *param_6 = 0;
  if (param_2 == 0) {
    local_288 = L"CopyMeshFromComponent_InvalidInput";
    local_280 = 0x22;
    FUN_1446e940c(&local_68,&local_288);
    local_288 = L"UGeometryScriptLibrary_SceneUtilityFunctions";
    local_280 = 0x2c;
    FUN_1446e940c(&local_298,&local_288);
    FUN_140208bae(&local_288,&local_298,&local_68,L"CopyMeshFromComponent: ToDynamicMesh is Null");
    FUN_143ba90d7(param_7,2,&local_288);
    if (local_288 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_288 + 0x10))();
    }
  }
  else {
    local_2bc = 0;
    local_2c0 = *(undefined4 *)(param_3 + 8);
    local_2c4[0] = 0;
    if ((byte)*(undefined4 *)(param_3 + 4) < 4) {
      local_2c4[0] = (byte)*(undefined4 *)(param_3 + 4);
    }
    local_2bb = *param_3;
    local_2ba = param_3[1];
    local_2b9 = param_3[2];
    local_348 = local_348 & 0xffffffffffffff00;
    FUN_1411b354a(&local_288,0,0,0);
    FUN_144a5dc74(&local_2d8);
    local_338 = 0;
    uStack_330 = 0;
    local_348 = param_5;
    local_340 = &local_2d8;
    cVar3 = FUN_1484ce32d(param_1,local_2c4,param_4,&local_288);
    if (cVar3 == '\0') {
      local_2f8 = local_2d8;
      if (local_2d8 != (longlong *)0x0) {
        (**(code **)(*local_2d8 + 8))();
      }
      local_2f0 = local_2d0;
      local_68 = L"CopyMeshFromComponent_ConversionError";
      local_60 = 0x25;
      FUN_1446e940c(local_31c,&local_68);
      local_68 = L"UGeometryScriptLibrary_SceneUtilityFunctions";
      local_60 = 0x2c;
      FUN_1446e940c(local_320,&local_68);
      FUN_140208bae(local_318,local_320,local_31c,L"CopyMeshFromComponent Error: {0}");
      FUN_14023409e(&local_308,local_318,1);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(local_58,&local_2f8);
      local_2a0 = &local_48;
      local_2a8 = &local_68;
      FUN_14010d304(&local_298);
      local_2b8 = local_308;
      local_2b0 = local_300;
      if (local_300 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_300 + 1) = (int)local_300[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_2e8,&local_2b8,&local_298);
      FUN_14007f2db(local_298,local_290);
      if (local_298 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      if (local_300 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_300 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_300)(local_300);
          LOCK();
          piVar2 = (int *)((longlong)local_300 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_300 + 0x10))(local_300);
          }
        }
      }
      if (local_2f8 != (longlong *)0x0) {
        (**(code **)(*local_2f8 + 0x10))();
      }
      FUN_143ba90d7(param_7,2,local_2e8);
      if (local_2e8[0] != (longlong *)0x0) {
        (**(code **)(*local_2e8[0] + 0x10))();
      }
      if (local_318[0] != (longlong *)0x0) {
        (**(code **)(*local_318[0] + 0x10))();
      }
    }
    else {
      FUN_1484b1fb6(param_2,&local_288);
      *param_6 = 1;
    }
    if (local_2d8 != (longlong *)0x0) {
      (**(code **)(*local_2d8 + 0x10))();
    }
    FUN_141082778(&local_288);
  }
  if ((local_48 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485de9c0 FUN_1485de9c0 body=46 status=ok
// SIG undefined FUN_1485de9c0(void)

void FUN_1485de9c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1409ffe1d();
  uVar1 = FUN_1484b7c6a(uVar1);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1485de9ee FUN_1485de9ee body=1278 status=ok
// SIG undefined FUN_1485de9ee(void)

void FUN_1485de9ee(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  undefined8 *local_108;
  undefined8 local_100;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined4 local_cc;
  longlong local_c8 [17];
  
  local_c8[0x10] = DAT_14c707940 ^ (ulonglong)auStack_148;
  puVar4 = (undefined8 *)(param_2 + 0x38);
  local_c8[0xe] = 0;
  local_c8[0xf] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8 + 0xe);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 0xe);
  }
  local_e8 = local_c8 + 0xe;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_e8 = *(longlong **)(param_2 + 0x38);
  }
  local_c8[0xc] = 0;
  local_c8[0xd] = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8 + 0xc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 0xc);
  }
  local_f0 = local_c8 + 0xc;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    local_f0 = *(longlong **)(param_2 + 0x38);
  }
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8 + 10);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 10);
  }
  plVar6 = local_c8 + 10;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_c8[8] = 0;
  local_c8[9] = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8 + 8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 8);
  }
  plVar7 = local_c8 + 8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_c8[6] = 0;
  local_c8[7] = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 6);
  }
  plVar5 = local_c8 + 6;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_c8[4] = 0;
  local_c8[5] = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 4);
  }
  plVar2 = local_c8 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_c8[2] = 0;
  local_c8[3] = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8 + 2);
  }
  plVar3 = local_c8 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_c8[0] = 0;
  local_c8[1] = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  plVar1 = local_c8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_d8 = 0x3ff0000000000000;
  local_d0 = 0;
  local_cc = 0x80;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  puVar4 = &local_d8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_100 = local_e0;
  local_128 = plVar5;
  local_120 = plVar2;
  local_118 = plVar3;
  local_110 = plVar1;
  local_108 = puVar4;
  FUN_1485deeee(local_e8,local_f0,plVar6,plVar7);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[4] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[6] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[8] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[10] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0xc] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0xe] != 0) {
    FUN_1400020a8();
  }
  if ((local_c8[0x10] ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485deeee FUN_1485deeee body=955 status=ok
// SIG undefined FUN_1485deeee(void)

void FUN_1485deeee(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,longlong param_8,
                  undefined8 *param_9,undefined8 param_10)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined1 auStack_c8 [44];
  undefined1 local_9c [4];
  wchar_t *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
    if (*(int *)(param_7 + 8) == *(int *)(param_8 + 8)) {
      if (*(int *)(param_4 + 8) == *(int *)(param_5 + 8)) {
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = (wchar_t *)0x0;
        uStack_90 = 0;
        local_68 = 0x3ff0000000000000;
        local_60 = 0;
        local_5c = 0x80;
        local_58 = 1;
        cVar1 = FUN_143be0c84();
        if (cVar1 == '\0') {
          local_48 = L"DetermineMeshOcclusion_InvalidSourceMesh";
          local_40 = 0x28;
          FUN_1446e940c(local_4c,&local_48);
          local_48 = L"UGeometryScriptLibrary_SceneUtilityFunctions";
          local_40 = 0x2c;
          FUN_1446e940c(local_9c,&local_48);
          pwVar2 = L"DetermineMeshOcclusion: SourceMeshes array contained null mesh";
LAB_1485df1b4:
          FUN_140208bae(&local_48,local_9c,local_4c,pwVar2);
          FUN_143ba90d7(param_10,2,&local_48);
          if (local_48 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_48 + 0x10))();
          }
        }
        else {
          cVar1 = FUN_143be0c84(param_7,param_8,&local_88);
          if (cVar1 == '\0') {
            local_48 = L"DetermineMeshOcclusion_InvalidOccludeMesh";
            local_40 = 0x29;
            FUN_1446e940c(local_4c,&local_48);
            local_48 = L"UGeometryScriptLibrary_SceneUtilityFunctions";
            local_40 = 0x2c;
            FUN_1446e940c(local_9c,&local_48);
            pwVar2 = L"DetermineMeshOcclusion: OccludeMeshes array contained null mesh";
            goto LAB_1485df1b4;
          }
          cVar1 = FUN_143be0c84(param_4,param_5,&local_78);
          if (cVar1 == '\0') {
            local_48 = L"DetermineMeshOcclusion_InvalidTransparentMesh";
            local_40 = 0x2d;
            FUN_1446e940c(local_4c,&local_48);
            local_48 = L"UGeometryScriptLibrary_SceneUtilityFunctions";
            local_40 = 0x2c;
            FUN_1446e940c(local_9c,&local_48);
            pwVar2 = L"DetermineMeshOcclusion: TransparentMeshes array contained null mesh";
            goto LAB_1485df1b4;
          }
          local_60 = *(undefined1 *)(param_9 + 1);
          local_68 = *param_9;
          local_5c = *(undefined4 *)((longlong)param_9 + 0xc);
          FUN_1482d2582(&local_98,param_3,param_6);
        }
        FUN_1485df4ee(&local_98);
        goto LAB_1485df032;
      }
      local_98 = L"DetermineMeshOcclusion_TransparentArrayMismatch";
      uStack_90._0_4_ = 0x2f;
      FUN_1446e940c(&local_48,&local_98);
      local_98 = L"UGeometryScriptLibrary_SceneUtilityFunctions";
      uStack_90 = CONCAT44(uStack_90._4_4_,0x2c);
      FUN_1446e940c(local_4c,&local_98);
      pwVar2 = 
      L"DetermineMeshOcclusion: TransparentMeshes and TransparentMeshTransforms arrays must have same length"
      ;
    }
    else {
      local_98 = L"DetermineMeshOcclusion_OccludeArrayMismatch";
      uStack_90._0_4_ = 0x2b;
      FUN_1446e940c(&local_48,&local_98);
      local_98 = L"UGeometryScriptLibrary_SceneUtilityFunctions";
      uStack_90 = CONCAT44(uStack_90._4_4_,0x2c);
      FUN_1446e940c(local_4c,&local_98);
      pwVar2 = 
      L"DetermineMeshOcclusion: OccludeMeshes and OccludeMeshTransforms arrays must have same length"
      ;
    }
  }
  else {
    local_98 = L"DetermineMeshOcclusion_SourceArrayMismatch";
    uStack_90._0_4_ = 0x2a;
    FUN_1446e940c(&local_48,&local_98);
    local_98 = L"UGeometryScriptLibrary_SceneUtilityFunctions";
    uStack_90 = CONCAT44(uStack_90._4_4_,0x2c);
    FUN_1446e940c(local_4c,&local_98);
    pwVar2 = 
    L"DetermineMeshOcclusion: SourceMeshes and SourceMeshTransforms arrays must have same length";
  }
  FUN_140208bae(&local_98,local_4c,&local_48,pwVar2);
  FUN_143ba90d7(param_10,2,&local_98);
  if (local_98 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_98 + 0x10))();
  }
LAB_1485df032:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485df2aa FUN_1485df2aa body=329 status=ok
// SIG undefined FUN_1485df2aa(void)

void FUN_1485df2aa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1485df3f4(local_20,plVar1,local_40);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485df3f4 FUN_1485df3f4 body=246 status=ok
// SIG undefined FUN_1485df3f4(void)

void FUN_1485df3f4(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 == (longlong *)0x0) {
    local_38 = L"SetComponentMaterialList_InvalidInput1";
    local_30 = 0x26;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"UGeometryScriptLibrary_SceneUtilityFunctions";
    local_30 = 0x2c;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,
                  L"SetComponentMaterialList: FromStaticMeshAsset is Null");
    FUN_143ba90d7(param_3,2,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
  }
  else if (0 < (int)param_2[1]) {
    uVar1 = 0;
    do {
      (**(code **)(*param_1 + 0x638))
                (param_1,uVar1 & 0xffffffff,*(undefined8 *)(*param_2 + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)(int)param_2[1]);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1485df4ee FUN_1485df4ee body=96 status=ok
// SIG undefined FUN_1485df4ee(void)

void FUN_1485df4ee(longlong *param_1)

{
  FUN_1482fdfd4(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1482fdfd4(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1482fdfd4(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1485df54e FUN_1485df54e body=368 status=ok
// SIG undefined FUN_1485df54e(void)

void FUN_1485df54e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_138 [32];
  undefined8 local_118 [12];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_89;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
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
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  uVar1 = local_89;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_88;
  puVar4 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1485df6c0(&local_b8,local_118,uVar1);
  param_3[4] = local_a8;
  param_3[5] = uStack_a4;
  param_3[6] = uStack_a0;
  param_3[7] = uStack_9c;
  *param_3 = local_b8;
  param_3[1] = uStack_b4;
  param_3[2] = uStack_b0;
  param_3[3] = uStack_ac;
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485df6c0 FUN_1485df6c0 body=357 status=ok
// SIG undefined FUN_1485df6c0(void)

void FUN_1485df6c0(double *param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = param_2[3];
  if (param_3 == '\x01') {
    dVar7 = dVar3 + dVar3;
    dVar6 = (dVar2 + dVar2) * dVar1 - dVar4 * dVar7;
    dVar4 = dVar2 * dVar7 + (dVar1 + dVar1) * dVar4;
    dVar7 = 1.0 - (dVar7 * dVar3 + dVar1 * (dVar1 + dVar1));
  }
  else if (param_3 == '\0') {
    dVar5 = dVar2 + dVar2;
    dVar6 = dVar3 + dVar3;
    dVar7 = dVar1 * dVar5 + dVar4 * dVar6;
    dVar4 = dVar1 * dVar6 - dVar5 * dVar4;
    dVar6 = 1.0 - (dVar6 * dVar3 + dVar5 * dVar2);
  }
  else {
    dVar6 = dVar1 * (dVar3 + dVar3) + dVar4 * (dVar2 + dVar2);
    dVar7 = (dVar3 + dVar3) * dVar2 - (dVar1 + dVar1) * dVar4;
    dVar4 = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
  }
  dVar1 = param_2[4];
  dVar2 = param_2[6];
  *param_1 = dVar6;
  dVar3 = param_2[5];
  param_1[1] = dVar7;
  param_1[2] = dVar4;
  param_1[3] = dVar3 * dVar7 + dVar1 * dVar6 + dVar2 * dVar4;
  return;
}



// FUNCTION 1485df826 FUN_1485df826 body=376 status=ok
// SIG undefined FUN_1485df826(void)

void FUN_1485df826(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_148 [32];
  undefined8 local_128 [13];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_89;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
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
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  uVar1 = local_89;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_88;
  puVar4 = local_128;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1485df9a0(&local_c0,local_128,uVar1);
  param_3[8] = local_a0;
  param_3[9] = uStack_9c;
  param_3[10] = uStack_98;
  param_3[0xb] = uStack_94;
  param_3[4] = local_b0;
  param_3[5] = uStack_ac;
  param_3[6] = uStack_a8;
  param_3[7] = uStack_a4;
  *param_3 = local_c0;
  param_3[1] = uStack_bc;
  param_3[2] = uStack_b8;
  param_3[3] = uStack_b4;
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485df9a0 FUN_1485df9a0 body=433 status=ok
// SIG undefined FUN_1485df9a0(void)

void FUN_1485df9a0(double *param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = *param_2;
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  dVar3 = param_2[3];
  if (param_3 == '\x01') {
    dVar6 = dVar2 + dVar2;
    dVar5 = (dVar1 + dVar1) * dVar7 - dVar3 * dVar6;
    dVar3 = dVar1 * dVar6 + (dVar7 + dVar7) * dVar3;
    dVar6 = 1.0 - (dVar6 * dVar2 + dVar7 * (dVar7 + dVar7));
  }
  else if (param_3 == '\0') {
    dVar4 = dVar1 + dVar1;
    dVar5 = dVar2 + dVar2;
    dVar6 = dVar7 * dVar4 + dVar3 * dVar5;
    dVar3 = dVar7 * dVar5 - dVar4 * dVar3;
    dVar5 = 1.0 - (dVar5 * dVar2 + dVar4 * dVar1);
  }
  else {
    dVar5 = dVar7 * (dVar2 + dVar2) + dVar3 * (dVar1 + dVar1);
    dVar6 = (dVar2 + dVar2) * dVar1 - (dVar7 + dVar7) * dVar3;
    dVar3 = 1.0 - ((dVar1 + dVar1) * dVar1 + dVar7 * (dVar7 + dVar7));
  }
  dVar1 = param_2[5];
  dVar7 = param_2[6];
  *param_1 = param_2[4];
  param_1[1] = dVar1;
  param_1[2] = dVar7;
  param_1[3] = dVar5;
  param_1[4] = dVar6;
  param_1[5] = dVar3;
  dVar7 = dVar3 * dVar3 + dVar5 * dVar5 + dVar6 * dVar6;
  if (9.99999993922529e-09 < dVar7) {
    dVar7 = 1.0 / SQRT(dVar7);
    param_1[3] = dVar5 * dVar7;
    param_1[4] = dVar6 * dVar7;
    param_1[5] = dVar7 * dVar3;
  }
  return;
}



// FUNCTION 1485dfb52 FUN_1485dfb52 body=368 status=ok
// SIG undefined FUN_1485dfb52(void)

void FUN_1485dfb52(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108 [12];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_89;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
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
  local_89 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  uVar1 = local_89;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_88;
  puVar4 = local_108;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1485dfcc4(&local_a8,local_108,uVar1);
  *(undefined8 *)(param_3 + 4) = local_98;
  *param_3 = local_a8;
  param_3[1] = uStack_a4;
  param_3[2] = uStack_a0;
  param_3[3] = uStack_9c;
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dfcc4 FUN_1485dfcc4 body=317 status=ok
// SIG undefined FUN_1485dfcc4(void)

void FUN_1485dfcc4(double *param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = param_2[3];
  if (param_3 == '\x01') {
    dVar7 = dVar3 + dVar3;
    dVar6 = (dVar2 + dVar2) * dVar1 - dVar4 * dVar7;
    dVar4 = dVar2 * dVar7 + (dVar1 + dVar1) * dVar4;
    dVar7 = 1.0 - (dVar7 * dVar3 + dVar1 * (dVar1 + dVar1));
  }
  else if (param_3 == '\0') {
    dVar5 = dVar2 + dVar2;
    dVar6 = dVar3 + dVar3;
    dVar7 = dVar1 * dVar5 + dVar4 * dVar6;
    dVar4 = dVar1 * dVar6 - dVar5 * dVar4;
    dVar6 = 1.0 - (dVar6 * dVar3 + dVar5 * dVar2);
  }
  else {
    dVar6 = dVar1 * (dVar3 + dVar3) + dVar4 * (dVar2 + dVar2);
    dVar7 = (dVar3 + dVar3) * dVar2 - (dVar1 + dVar1) * dVar4;
    dVar4 = 1.0 - ((dVar2 + dVar2) * dVar2 + dVar1 * (dVar1 + dVar1));
  }
  *param_1 = dVar6;
  param_1[1] = dVar7;
  param_1[2] = dVar4;
  return;
}



// FUNCTION 1485dfe08 FUN_1485dfe08 body=491 status=ok
// SIG undefined FUN_1485dfe08(void)

void FUN_1485dfe08(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8 [12];
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_e8 = local_60;
  uStack_e0 = uStack_58;
  local_d8 = local_50;
  local_108 = local_48;
  uStack_100 = uStack_40;
  local_f8 = local_38;
  local_128 = local_30;
  uStack_124 = uStack_2c;
  uStack_120 = uStack_28;
  uStack_11c = uStack_24;
  local_118 = local_20;
  local_138 = local_64 != 0;
  FUN_1485dfff4(local_c8);
  puVar2 = local_c8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485dfff4 FUN_1485dfff4 body=452 status=ok
// SIG undefined FUN_1485dfff4(void)

double * FUN_1485dfff4(double *param_1,double *param_2,double *param_3,double *param_4,byte param_5)

{
  double dVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double dStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0.0;
  dStack_68 = 0.0;
  local_60 = 0.0;
  uStack_58 = 1.0;
  local_88 = *param_2;
  dStack_80 = param_2[1];
  local_78 = param_2[2];
  local_38 = DAT_14c8463c8;
  local_48 = (double)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
  uStack_40 = (double)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
  FUN_146bfb7f2();
  dVar1 = param_3[2] * param_4[2] + *param_3 * *param_4 + param_3[1] * param_4[1];
  uVar2 = -(ulonglong)(-dVar1 <= dVar1);
  if ((double)(~uVar2 & (ulonglong)-dVar1 | (ulonglong)dVar1 & uVar2) < 0.999) {
    local_48 = local_70 * (local_60 + local_60) + uStack_58 * (dStack_68 + dStack_68);
    uStack_40 = (local_60 + local_60) * dStack_68 - (local_70 + local_70) * uStack_58;
    local_38 = 1.0 - ((dStack_68 + dStack_68) * dStack_68 + local_70 * (local_70 + local_70));
    FUN_1482ae2be(&local_88,param_5 ^ 1,param_4);
  }
  *param_1 = local_70;
  param_1[1] = dStack_68;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_60;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_60._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_58;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_58._4_4_;
  param_1[4] = local_88;
  param_1[5] = dStack_80;
  param_1[6] = local_78;
  param_1[7] = 0.0;
  param_1[8] = 1.0;
  param_1[9] = 1.0;
  param_1[10] = 1.0;
  param_1[0xb] = 0.0;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e01ba FUN_1485e01ba body=376 status=ok
// SIG undefined FUN_1485e01ba(void)

void FUN_1485e01ba(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_98;
  local_c8 = local_a8;
  uStack_c0 = uStack_a0;
  local_68 = local_80;
  local_78 = local_90;
  uStack_70 = uStack_88;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0x3ff0000000000000;
  local_28 = DAT_14c8463c8;
  local_38 = (undefined4)DAT_14c8463b8;
  uStack_34 = DAT_14c8463b8._4_4_;
  uStack_30 = (undefined4)DAT_14c8463c0;
  uStack_2c = DAT_14c8463c0._4_4_;
  FUN_146bfb7f2(&local_60);
  *param_3 = (undefined4)local_60;
  param_3[1] = local_60._4_4_;
  param_3[2] = (undefined4)uStack_58;
  param_3[3] = uStack_58._4_4_;
  param_3[4] = (undefined4)local_50;
  param_3[5] = local_50._4_4_;
  param_3[6] = (undefined4)uStack_48;
  param_3[7] = uStack_48._4_4_;
  *(undefined8 *)(param_3 + 8) = local_78;
  *(undefined8 *)(param_3 + 10) = uStack_70;
  *(undefined8 *)(param_3 + 0xc) = local_68;
  *(undefined8 *)(param_3 + 0xe) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(param_3 + 0x12) = 0x3ff0000000000000;
  *(undefined8 *)(param_3 + 0x14) = 0x3ff0000000000000;
  *(undefined8 *)(param_3 + 0x16) = 0;
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e033c FUN_1485e033c body=487 status=ok
// SIG undefined FUN_1485e033c(void)

void FUN_1485e033c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_38 = DAT_14c8464f0;
  local_48 = DAT_14c8464e0;
  uStack_40 = DAT_14c8464e8;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0x3ff0000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_88 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = CONCAT71(uStack_4f,local_50);
  local_a8 = local_60;
  uStack_a0 = uStack_58;
  local_b8 = local_70;
  uStack_b0 = uStack_68;
  local_c8 = local_80;
  uStack_c0 = uStack_78;
  local_f8 = (undefined4)local_48;
  uStack_f4 = local_48._4_4_;
  uStack_f0 = (undefined4)uStack_40;
  uStack_ec = uStack_40._4_4_;
  local_e8 = (undefined4)local_38;
  uStack_e4 = local_38._4_4_;
  uStack_e0 = (undefined4)uStack_30;
  uStack_dc = uStack_30._4_4_;
  local_d8 = (undefined4)uStack_28;
  uStack_d4 = uStack_28._4_4_;
  uStack_d0 = (undefined4)uStack_20;
  uStack_cc = uStack_20._4_4_;
  uVar1 = FUN_1485e0524(&local_f8,&local_c8,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e0524 FUN_1485e0524 body=162 status=ok
// SIG undefined FUN_1485e0524(void)

void FUN_1485e0524(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = 0x47efffffe0000000;
  if (*(char *)(param_2 + 6) == '\0') {
    local_38 = 0x7fefffffffffffff;
    uStack_30 = 0x7fefffffffffffff;
    local_28 = 0x7fefffffffffffff;
    local_20 = 0xffefffffffffffff;
    uStack_18 = 0xffefffffffffffff;
    local_10 = 0xffefffffffffffff;
  }
  else {
    local_28 = param_2[2];
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_10 = param_2[5];
    param_1 = *(undefined4 *)(param_2 + 3);
    local_20 = param_2[3];
    uStack_18 = param_2[4];
  }
  FUN_146bd8472(param_1,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e05c8 FUN_1485e05c8 body=451 status=ok
// SIG undefined FUN_1485e05c8(void)

void FUN_1485e05c8(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  dStack_80 = DAT_14c8464e8;
  local_70 = 0.0;
  dStack_68 = 0.0;
  local_60 = 1.0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = (local_90 - local_78) * local_60 +
          (local_a0 - local_88) * local_70 + (local_98 - dStack_80) * dStack_68;
  dVar2 = dStack_80;
  dVar3 = local_78;
  dVar1 = local_88;
  if (0.0 <= dVar4) {
    dVar3 = local_78 + local_60 * dVar4;
    dVar2 = dStack_80 + dStack_68 * dVar4;
    dVar1 = local_88 + local_70 * dVar4;
  }
  *param_3 = dVar1;
  param_3[1] = dVar2;
  param_3[2] = dVar3;
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e078c FUN_1485e078c body=965 status=ok
// SIG undefined FUN_1485e078c(void)

void FUN_1485e078c(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8 [6];
  undefined8 local_1a0;
  undefined8 local_198 [3];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_138 = DAT_14c8464f0;
  local_148 = DAT_14c8464e0;
  uStack_140 = DAT_14c8464e8;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0x3ff0000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_148);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_160);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_160);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_178);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_178);
  }
  local_180 = 0;
  puVar4 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_180);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_180);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_198);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_198);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_1a0 = 0;
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a0);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  *puVar4 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1b8);
  }
  puVar4 = &local_1a0;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = puVar5;
  }
  puVar5 = local_198;
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = puVar3;
  }
  puVar3 = &local_180;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar2 = local_1b8;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f0 = local_168;
  local_100 = local_178;
  uStack_f8 = uStack_170;
  local_108 = local_150;
  local_118 = local_160;
  uStack_110 = uStack_158;
  local_88 = 0xbff0000000000000;
  local_e8 = local_160;
  uStack_e0 = uStack_158;
  local_d8 = local_150;
  local_d0 = local_178;
  local_c8 = uStack_170;
  local_c0 = local_168;
  local_b8 = (undefined4)local_148;
  uStack_b4 = local_148._4_4_;
  uStack_b0 = (undefined4)uStack_140;
  uStack_ac = uStack_140._4_4_;
  local_a8 = (undefined4)local_138;
  uStack_a4 = local_138._4_4_;
  uStack_a0 = (undefined4)uStack_130;
  uStack_9c = uStack_130._4_4_;
  local_98 = (undefined4)uStack_128;
  uStack_94 = uStack_128._4_4_;
  uStack_90 = (undefined4)uStack_120;
  uStack_8c = uStack_120._4_4_;
  dVar6 = (double)FUN_1484fd030();
  if (dVar6 < 0.0) {
    dVar6 = sqrt(dVar6);
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  *puVar3 = local_48;
  puVar5[2] = local_50;
  *puVar5 = local_60;
  puVar5[1] = uStack_58;
  *puVar4 = local_68;
  *(undefined8 *)(puVar2 + 4) = local_70;
  *puVar2 = local_80;
  puVar2[1] = uStack_7c;
  puVar2[2] = uStack_78;
  puVar2[3] = uStack_74;
  *param_3 = dVar6;
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e0b52 FUN_1485e0b52 body=323 status=ok
// SIG undefined FUN_1485e0b52(void)

void FUN_1485e0b52(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = DAT_14c8464f0;
  local_48 = DAT_14c8464e0;
  dStack_40 = DAT_14c8464e8;
  local_30 = 0.0;
  dStack_28 = 0.0;
  local_20 = 1.0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (local_50 - local_38) * local_20 +
             (local_60 - local_48) * local_30 + (local_58 - dStack_40) * dStack_28;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e0c9c FUN_1485e0c9c body=543 status=ok
// SIG undefined FUN_1485e0c9c(void)

void FUN_1485e0c9c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = DAT_14c8464f0;
  local_68 = DAT_14c8464e0;
  dStack_60 = DAT_14c8464e8;
  local_50 = 0.0;
  dStack_48 = 0.0;
  local_40 = 1.0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_90 = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar3 = local_40 * local_78 + local_50 * local_88 + dStack_48 * local_80;
  uVar2 = -(ulonglong)(-dVar3 <= dVar3);
  dVar4 = (double)(~uVar2 & (ulonglong)-dVar3 | uVar2 & (ulonglong)dVar3);
  dVar5 = 0.0;
  if (1e-08 < dVar4) {
    dVar5 = (local_70 - (local_78 * local_58 + local_88 * local_68 + local_80 * dStack_60)) / dVar3;
  }
  pdVar1 = &local_90;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar1 = *(double **)(param_2 + 0x38);
  }
  *pdVar1 = dVar5;
  *(bool *)param_3 = 1e-08 < dVar4;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e0ebc FUN_1485e0ebc body=330 status=ok
// SIG undefined FUN_1485e0ebc(void)

void FUN_1485e0ebc(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = DAT_14c8464f0;
  local_48 = DAT_14c8464e0;
  dStack_40 = DAT_14c8464e8;
  local_30 = 0.0;
  dStack_28 = 0.0;
  local_20 = 1.0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_50 * local_30 + local_48;
  param_3[1] = dStack_28 * local_50 + dStack_40;
  param_3[2] = local_20 * local_50 + local_38;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e1008 FUN_1485e1008 body=369 status=ok
// SIG undefined FUN_1485e1008(void)

void FUN_1485e1008(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = DAT_14c8464f0;
  local_48 = DAT_14c8464e0;
  uStack_40 = DAT_14c8464e8;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0x3ff0000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  local_78 = local_60;
  uStack_70 = uStack_58;
  local_a8 = (undefined4)local_48;
  uStack_a4 = local_48._4_4_;
  uStack_a0 = (undefined4)uStack_40;
  uStack_9c = uStack_40._4_4_;
  local_98 = local_38;
  uStack_90 = uStack_30;
  local_88 = (undefined4)uStack_28;
  uStack_84 = uStack_28._4_4_;
  uStack_80 = (undefined4)uStack_20;
  uStack_7c = uStack_20._4_4_;
  dVar1 = (double)FUN_14844d5cc();
  if (dVar1 < 0.0) {
    dVar1 = sqrt(dVar1);
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e117a FUN_1485e117a body=1181 status=ok
// SIG undefined FUN_1485e117a(void)

void FUN_1485e117a(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined1 auStack_238 [40];
  undefined4 local_210 [6];
  undefined8 local_1f8 [3];
  undefined8 local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_198 = DAT_14c8464f0;
  local_1a8 = DAT_14c8464e0;
  uStack_1a0 = DAT_14c8464e8;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0x3ff0000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d8);
  }
  local_1e0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e0);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1f8);
  }
  puVar6 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_210);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_210);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar8 = local_1c8 - local_1b0;
  dVar2 = local_1d0 - local_1b8;
  dVar3 = local_1d8 - local_1c0;
  dVar4 = SQRT(dVar8 * dVar8 + dVar3 * dVar3 + dVar2 * dVar2);
  local_130 = 0.0;
  local_128 = 0.0;
  local_120 = 0.0;
  local_118 = 0.0;
  if (0.0 < dVar4) {
    local_120 = 1.0 / dVar4;
    local_130 = dVar3 * local_120;
    local_128 = dVar2 * local_120;
    local_120 = dVar8 * local_120;
    local_118 = dVar4 * 0.5;
  }
  local_148 = (local_1d8 + local_1c0) * 0.5;
  local_140 = (local_1d0 + local_1b8) * 0.5;
  local_138 = (local_1c8 + local_1b0) * 0.5;
  puVar5 = local_210;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_2 + 0x38);
  }
  puVar7 = local_1f8;
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = puVar6;
  }
  puVar6 = &local_1e0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar6 = puVar1;
  }
  local_110 = 0xbff0000000000000;
  local_178 = (undefined4)local_1a8;
  uStack_174 = local_1a8._4_4_;
  uStack_170 = (undefined4)uStack_1a0;
  uStack_16c = uStack_1a0._4_4_;
  local_168 = local_198;
  uStack_160 = uStack_190;
  local_158 = uStack_188;
  uStack_150 = uStack_180;
  dVar8 = (double)FUN_148519cb4();
  if (dVar8 < 0.0) {
    dVar8 = sqrt(dVar8);
  }
  else {
    dVar8 = SQRT(dVar8);
  }
  *puVar6 = local_f0;
  puVar7[2] = local_f8;
  *puVar7 = local_108;
  puVar7[1] = uStack_100;
  *(undefined8 *)(puVar5 + 4) = local_d8;
  *puVar5 = local_e8;
  puVar5[1] = uStack_e4;
  puVar5[2] = uStack_e0;
  puVar5[3] = uStack_dc;
  *param_3 = dVar8;
  if ((local_c0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e161e FUN_1485e161e body=760 status=ok
// SIG undefined FUN_1485e161e(void)

void FUN_1485e161e(undefined8 param_1,longlong param_2,char *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 local_40 [4];
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_68 = DAT_14c8464f0;
  local_78 = DAT_14c8464e0;
  uStack_70 = DAT_14c8464e8;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0x3ff0000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_a0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  puVar3 = &local_a0;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_a8 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  uVar1 = local_98;
  puVar4 = &local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_90;
  uStack_c0 = uStack_88;
  local_b8 = local_80;
  local_f8 = (undefined4)local_78;
  uStack_f4 = local_78._4_4_;
  uStack_f0 = (undefined4)uStack_70;
  uStack_ec = uStack_70._4_4_;
  local_e8 = (undefined4)local_68;
  uStack_e4 = local_68._4_4_;
  uStack_e0 = (undefined4)uStack_60;
  uStack_dc = uStack_60._4_4_;
  local_d8 = (undefined4)uStack_58;
  uStack_d4 = uStack_58._4_4_;
  uStack_d0 = (undefined4)uStack_50;
  uStack_cc = uStack_50._4_4_;
  *puVar4 = 0x47efffffe0000000;
  *puVar3 = 0x47efffffe0000000;
  local_108 = local_40;
  local_38 = 0x7fefffffffffffff;
  local_30 = 0xffefffffffffffff;
  cVar2 = FUN_1485e4181(&local_f8,&uStack_e0,&local_c8,uVar1);
  if (cVar2 != '\0') {
    uVar5 = (undefined4)local_38;
    uVar6 = (undefined4)((ulonglong)local_38 >> 0x20);
    *puVar3 = local_38;
    if (1 < local_3c) {
      uVar5 = (undefined4)local_30;
      uVar6 = (undefined4)((ulonglong)local_30 >> 0x20);
    }
    *puVar4 = CONCAT44(uVar6,uVar5);
  }
  *param_3 = cVar2;
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e1918 FUN_1485e1918 body=781 status=ok
// SIG undefined FUN_1485e1918(void)

void FUN_1485e1918(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double *pdVar10;
  double *pdVar11;
  ulonglong uVar12;
  undefined1 auStack_f8 [32];
  double local_d8 [3];
  double local_c0 [3];
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = DAT_14c8464f0;
  local_98 = DAT_14c8464e0;
  dStack_90 = DAT_14c8464e8;
  local_80 = 0.0;
  dStack_78 = 0.0;
  local_70 = 1.0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_a0 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a8 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  pdVar10 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  dVar9 = local_70;
  dVar8 = dStack_78;
  dVar7 = local_80;
  dVar6 = local_88;
  dVar5 = dStack_90;
  dVar4 = local_98;
  dVar3 = local_a8;
  pdVar11 = local_c0;
  if (pdVar10 != (double *)0x0) {
    pdVar11 = pdVar10;
  }
  pdVar10 = local_d8;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar10 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = local_a0 * local_70 + local_88;
  dVar2 = local_a0 * dStack_78 + dStack_90;
  *pdVar11 = local_a0 * local_80 + local_98;
  pdVar11[1] = dVar2;
  pdVar11[2] = dVar1;
  uVar12 = -(ulonglong)(dVar3 == 0.0);
  dVar3 = (double)(~uVar12 & (ulonglong)dVar3 | uVar12 & 0x47efffffe0000000);
  *pdVar10 = dVar3 * dVar7 + dVar4;
  pdVar10[1] = dVar8 * dVar3 + dVar5;
  pdVar10[2] = dVar9 * dVar3 + dVar6;
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e1c2e FUN_1485e1c2e body=655 status=ok
// SIG undefined FUN_1485e1c2e(void)

void FUN_1485e1c2e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_a8 = DAT_14c8464f0;
  local_b8 = DAT_14c8464e0;
  uStack_b0 = DAT_14c8464e8;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0x3ff0000000000000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0x3ff00000;
  uStack_d0 = 0;
  uStack_cc = 0x3ff00000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  local_11c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_188 = local_b8;
  uStack_180 = uStack_b0;
  local_178 = local_a8;
  uStack_170 = uStack_a0;
  local_168 = uStack_98;
  uStack_160 = uStack_90;
  local_80 = (undefined4)local_118;
  uStack_7c = local_118._4_4_;
  uStack_78 = (undefined4)uStack_110;
  uStack_74 = uStack_110._4_4_;
  local_70 = local_108;
  uStack_6c = uStack_104;
  uStack_68 = uStack_100;
  uStack_64 = uStack_fc;
  local_60 = (undefined4)local_f8;
  uStack_5c = local_f8._4_4_;
  uStack_58 = (undefined4)uStack_f0;
  uStack_54 = uStack_f0._4_4_;
  local_50 = local_e8;
  local_48 = local_d8;
  uStack_44 = uStack_d4;
  uStack_40 = uStack_d0;
  uStack_3c = uStack_cc;
  local_38 = local_c8;
  if (local_11c == 0) {
    FUN_1485e400a();
  }
  else {
    FUN_1485216d8(&local_80,&local_150,&local_188);
  }
  param_3[8] = local_130;
  param_3[9] = uStack_12c;
  param_3[10] = uStack_128;
  param_3[0xb] = uStack_124;
  param_3[4] = local_140;
  param_3[5] = uStack_13c;
  param_3[6] = uStack_138;
  param_3[7] = uStack_134;
  *param_3 = local_150;
  param_3[1] = uStack_14c;
  param_3[2] = uStack_148;
  param_3[3] = uStack_144;
  if ((local_30 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e1ec4 FUN_1485e1ec4 body=427 status=ok
// SIG undefined FUN_1485e1ec4(void)

void FUN_1485e1ec4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  double dVar1;
  undefined1 auStack_78 [44];
  int local_4c;
  double local_48;
  double local_40;
  double local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
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
  if ((local_4c == 0) &&
     (dVar1 = local_38 * local_38 + local_48 * local_48 + local_40 * local_40,
     9.99999993922529e-09 < dVar1)) {
    dVar1 = 1.0 / SQRT(dVar1);
    local_48 = local_48 * dVar1;
    local_40 = local_40 * dVar1;
    local_38 = local_38 * dVar1;
  }
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  *(double *)(param_3 + 6) = local_48;
  *(double *)(param_3 + 8) = local_40;
  *(double *)(param_3 + 10) = local_38;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e2070 FUN_1485e2070 body=460 status=ok
// SIG undefined FUN_1485e2070(void)

void FUN_1485e2070(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_80 - local_68;
  local_88 = local_88 - local_70;
  local_90 = local_90 - local_78;
  dVar2 = SQRT(local_80 * local_80 + local_90 * local_90 + local_88 * local_88);
  dVar3 = 0.0;
  dVar1 = 1.0;
  if ((dVar2 <= 0.0) || (dVar2 < 1.1920928955078125e-07)) {
    local_90 = 0.0;
  }
  else {
    dVar2 = 1.0 / dVar2;
    local_90 = local_90 * dVar2;
    dVar3 = local_88 * dVar2;
    dVar1 = dVar2 * local_80;
  }
  *param_3 = local_78;
  param_3[1] = local_70;
  param_3[2] = local_68;
  param_3[3] = local_90;
  param_3[4] = dVar3;
  param_3[5] = dVar1;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e2246 FUN_1485e2246 body=486 status=ok
// SIG undefined FUN_1485e2246(void)

void FUN_1485e2246(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_89 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  puVar1 = &local_89;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108 = local_88;
  uStack_100 = uStack_80;
  local_f8 = local_78;
  uStack_f0 = uStack_70;
  local_e8 = local_68;
  uStack_e0 = uStack_60;
  local_d8 = CONCAT71(uStack_57,local_58);
  local_148 = local_50;
  uStack_144 = uStack_4c;
  uStack_140 = uStack_48;
  uStack_13c = uStack_44;
  local_138 = local_40;
  uStack_134 = uStack_3c;
  uStack_130 = uStack_38;
  uStack_12c = uStack_34;
  local_128 = local_30;
  uStack_124 = uStack_2c;
  uStack_120 = uStack_28;
  uStack_11c = uStack_24;
  local_118 = CONCAT71(uStack_1f,local_20);
  FUN_1485e242e(&local_c8,&local_148,&local_108,puVar1);
  *(undefined8 *)(param_3 + 0xc) = local_98;
  param_3[8] = local_a8;
  param_3[9] = uStack_a4;
  param_3[10] = uStack_a0;
  param_3[0xb] = uStack_9c;
  param_3[4] = local_b8;
  param_3[5] = uStack_b4;
  param_3[6] = uStack_b0;
  param_3[7] = uStack_ac;
  *param_3 = local_c8;
  param_3[1] = uStack_c4;
  param_3[2] = uStack_c0;
  param_3[3] = uStack_bc;
  if ((local_18 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e242e FUN_1485e242e body=113 status=ok
// SIG undefined FUN_1485e242e(void)

undefined8 FUN_1485e242e(undefined8 param_1,double *param_2,double *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  if ((((param_3[3] <= *param_2 && *param_2 != param_3[3]) ||
       (param_2[3] <= *param_3 && *param_3 != param_2[3])) ||
      (param_3[4] <= param_2[1] && param_2[1] != param_3[4])) ||
     (((param_2[4] <= param_3[1] && param_3[1] != param_2[4] ||
       (param_3[5] <= param_2[2] && param_2[2] != param_3[5])) ||
      (param_2[5] <= param_3[2] && param_3[2] != param_2[5])))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *param_4 = uVar1;
  FUN_14730eb50(param_2,param_1);
  return param_1;
}



// FUNCTION 1485e24a6 FUN_1485e24a6 body=436 status=ok
// SIG undefined FUN_1485e24a6(void)

void FUN_1485e24a6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_69 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_69);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_69);
  }
  puVar1 = &local_69;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  local_98 = local_58;
  local_e8 = local_50;
  uStack_e4 = uStack_4c;
  uStack_e0 = uStack_48;
  uStack_dc = uStack_44;
  local_d8 = local_40;
  uStack_d4 = uStack_3c;
  uStack_d0 = uStack_38;
  uStack_cc = uStack_34;
  local_c8 = local_30;
  uStack_c4 = uStack_2c;
  uStack_c0 = uStack_28;
  uStack_bc = uStack_24;
  local_b8 = CONCAT71(uStack_1f,local_20);
  FUN_1485e265c(&local_88,&local_e8,&local_a8,puVar1);
  *(undefined8 *)(param_3 + 4) = local_78;
  *param_3 = local_88;
  param_3[1] = uStack_84;
  param_3[2] = uStack_80;
  param_3[3] = uStack_7c;
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e265c FUN_1485e265c body=193 status=ok
// SIG undefined FUN_1485e265c(void)

void FUN_1485e265c(double *param_1,double *param_2,double *param_3,undefined8 param_4)

{
  double dVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  dVar1 = *param_3;
  if ((((dVar1 < *param_2 || dVar1 == *param_2) || (param_2[3] <= dVar1)) ||
      (dVar1 = param_3[1], dVar1 < param_2[1] || dVar1 == param_2[1])) ||
     ((param_2[4] <= dVar1 || (dVar1 = param_3[2], dVar1 < param_2[2] || dVar1 == param_2[2])))) {
    bVar2 = false;
  }
  else {
    bVar2 = dVar1 < param_2[5];
  }
  *(bool *)param_4 = bVar2;
  param_1[2] = param_3[2];
  dVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = dVar1;
  dVar1 = *param_2;
  uVar3 = SUB84(dVar1,0);
  uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (*param_3 < dVar1) {
LAB_1485e26d6:
    *param_1 = (double)CONCAT44(uVar4,uVar3);
  }
  else {
    dVar1 = param_2[3];
    uVar3 = SUB84(dVar1,0);
    uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (dVar1 < *param_3) goto LAB_1485e26d6;
  }
  dVar1 = param_2[1];
  uVar3 = SUB84(dVar1,0);
  uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (dVar1 <= param_3[1]) {
    dVar1 = param_2[4];
    uVar3 = SUB84(dVar1,0);
    uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (param_3[1] <= dVar1) goto LAB_1485e26fb;
  }
  param_1[1] = (double)CONCAT44(uVar4,uVar3);
LAB_1485e26fb:
  dVar1 = param_2[2];
  uVar3 = SUB84(dVar1,0);
  uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (dVar1 <= param_3[2]) {
    dVar1 = param_2[5];
    uVar3 = SUB84(dVar1,0);
    uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (param_3[2] <= dVar1) {
      return;
    }
  }
  param_1[2] = (double)CONCAT44(uVar4,uVar3);
  return;
}



// FUNCTION 1485e271e FUN_1485e271e body=349 status=ok
// SIG undefined FUN_1485e271e(void)

void FUN_1485e271e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = CONCAT71(uStack_57,local_58);
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  local_b8 = local_78;
  uStack_b0 = uStack_70;
  local_c8 = local_88;
  uStack_c0 = uStack_80;
  local_108 = local_50;
  uStack_104 = uStack_4c;
  uStack_100 = uStack_48;
  uStack_fc = uStack_44;
  local_f8 = local_40;
  uStack_f4 = uStack_3c;
  uStack_f0 = uStack_38;
  uStack_ec = uStack_34;
  local_e8 = local_30;
  uStack_e4 = uStack_2c;
  uStack_e0 = uStack_28;
  uStack_dc = uStack_24;
  local_d8 = CONCAT71(uStack_1f,local_20);
  uVar1 = FUN_1485e287c();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e287c FUN_1485e287c body=487 status=ok
// SIG undefined FUN_1485e287c(void)

double FUN_1485e287c(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = ABS((param_1[2] + param_1[5]) * 0.5 - (param_2[2] + param_2[5]) * 0.5) -
          ((param_2[5] - param_2[2]) * 0.5 + (param_1[5] - param_1[2]) * 0.5);
  dVar3 = ABS((param_1[1] + param_1[4]) * 0.5 - (param_2[1] + param_2[4]) * 0.5) -
          ((param_2[4] - param_2[1]) * 0.5 + (param_1[4] - param_1[1]) * 0.5);
  dVar2 = ABS((*param_1 + param_1[3]) * 0.5 - (*param_2 + param_2[3]) * 0.5) -
          ((param_2[3] - *param_2) * 0.5 + (param_1[3] - *param_1) * 0.5);
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar1 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
  return SQRT((double)(~-(ulonglong)(dVar1 <= 0.0) & (ulonglong)dVar1));
}



// FUNCTION 1485e2a64 FUN_1485e2a64 body=473 status=ok
// SIG undefined FUN_1485e2a64(void)

void FUN_1485e2a64(undefined8 param_1,longlong param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_b8 [32];
  double local_98 [3];
  double local_80 [3];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  pdVar2 = local_80;
  if (pdVar1 != (double *)0x0) {
    pdVar2 = pdVar1;
  }
  pdVar1 = local_98;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar1 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar5 = (local_40 - local_58) * 0.5;
  dVar4 = (local_48 - local_60) * 0.5;
  dVar3 = (local_50 - local_68) * 0.5;
  *pdVar2 = local_68 + dVar3;
  pdVar2[1] = local_60 + dVar4;
  pdVar2[2] = local_58 + dVar5;
  *pdVar1 = dVar3 + dVar3;
  pdVar1[1] = dVar4 + dVar4;
  pdVar1[2] = dVar5 + dVar5;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e2c3e FUN_1485e2c3e body=345 status=ok
// SIG undefined FUN_1485e2c3e(void)

void FUN_1485e2c3e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [36];
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar2 = 7;
  if (local_54 < 7) {
    iVar2 = local_54;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  switch(iVar1) {
  case 3:
    local_50 = local_38;
    local_28 = local_40;
    break;
  case 4:
    local_50 = local_38;
  case 2:
    local_48 = local_30;
    local_28 = local_40;
    break;
  case 5:
    local_50 = local_38;
    break;
  case 7:
    local_50 = local_38;
  case 6:
    local_48 = local_30;
  }
  *param_3 = local_50;
  param_3[1] = local_48;
  param_3[2] = local_28;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e2d98 FUN_1485e2d98 body=406 status=ok
// SIG undefined FUN_1485e2d98(void)

void FUN_1485e2d98(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70 [28];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar1 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_50;
  uStack_c4 = uStack_4c;
  uStack_c0 = uStack_48;
  uStack_bc = uStack_44;
  local_b8 = local_40;
  uStack_b4 = uStack_3c;
  uStack_b0 = uStack_38;
  uStack_ac = uStack_34;
  local_a8 = local_30;
  uStack_a4 = uStack_2c;
  uStack_a0 = uStack_28;
  uStack_9c = uStack_24;
  local_98 = CONCAT71(uStack_1f,local_20);
  FUN_1485e2f30(&local_88,&local_c8,local_54,puVar1);
  *(undefined8 *)(param_3 + 4) = local_78;
  *param_3 = local_88;
  param_3[1] = uStack_84;
  param_3[2] = uStack_80;
  param_3[3] = uStack_7c;
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e2f30 FUN_1485e2f30 body=297 status=ok
// SIG undefined FUN_1485e2f30(void)

void FUN_1485e2f30(double *param_1,double *param_2,int param_3,undefined8 *param_4)

{
  double dVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  iVar2 = 5;
  if (param_3 < 5) {
    iVar2 = param_3;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  dVar5 = (param_2[1] + param_2[4]) * 0.5;
  dVar4 = (*param_2 + param_2[3]) * 0.5;
  if (iVar3 - 1U < 5) {
    dVar1 = (param_2[2] + param_2[5]) * 0.5;
    switch(iVar3) {
    case 1:
      *param_4 = 0;
      param_4[1] = 0;
      param_4[2] = 0x3ff0000000000000;
      dVar1 = param_2[5];
      break;
    case 2:
      *param_4 = 0;
      param_4[1] = 0xbff0000000000000;
      param_4[2] = 0;
      dVar5 = param_2[1];
      break;
    case 3:
      *param_4 = 0;
      param_4[1] = 0x3ff0000000000000;
      param_4[2] = 0;
      dVar5 = param_2[4];
      break;
    case 4:
      *param_4 = 0xbff0000000000000;
      param_4[1] = 0;
      param_4[2] = 0;
      dVar4 = *param_2;
      break;
    case 5:
      *param_4 = 0x3ff0000000000000;
      param_4[1] = 0;
      param_4[2] = 0;
      dVar4 = param_2[3];
    }
  }
  else {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0xbff0000000000000;
    dVar1 = param_2[2];
  }
  *param_1 = dVar4;
  param_1[1] = dVar5;
  param_1[2] = dVar1;
  return;
}



// FUNCTION 1485e305a FUN_1485e305a body=317 status=ok
// SIG undefined FUN_1485e305a(void)

void FUN_1485e305a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_58;
  local_88 = local_68;
  uStack_80 = uStack_60;
  local_c8 = local_50;
  uStack_c4 = uStack_4c;
  uStack_c0 = uStack_48;
  uStack_bc = uStack_44;
  local_b8 = local_40;
  uStack_b4 = uStack_3c;
  uStack_b0 = uStack_38;
  uStack_ac = uStack_34;
  local_a8 = local_30;
  uStack_a4 = uStack_2c;
  uStack_a0 = uStack_28;
  uStack_9c = uStack_24;
  local_98 = CONCAT71(uStack_1f,local_20);
  uVar1 = FUN_1485e3198();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e3198 FUN_1485e3198 body=153 status=ok
// SIG undefined FUN_1485e3198(void)

double FUN_1485e3198(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_2;
  dVar3 = *param_1;
  if (dVar3 <= dVar1) {
    dVar3 = param_1[3];
    dVar2 = 0.0;
    if (dVar1 <= dVar3) goto LAB_1485e31b2;
  }
  dVar2 = (dVar1 - dVar3) * (dVar1 - dVar3);
LAB_1485e31b2:
  dVar1 = param_2[1];
  dVar3 = param_1[1];
  if ((dVar1 < dVar3) || (dVar3 = param_1[4], dVar3 < dVar1)) {
    dVar2 = dVar2 + (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  dVar1 = param_2[2];
  dVar3 = param_1[2];
  if ((dVar1 < dVar3) || (dVar3 = param_1[5], dVar3 < dVar1)) {
    dVar2 = dVar2 + (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  return SQRT((double)(~-(ulonglong)(dVar2 <= 0.0) & (ulonglong)dVar2));
}



// FUNCTION 1485e3232 FUN_1485e3232 body=428 status=ok
// SIG undefined FUN_1485e3232(void)

void FUN_1485e3232(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  pdVar3 = *(double **)(param_2 + 0x38);
  local_68 = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  pdVar2 = &local_60;
  if (pdVar3 != (double *)0x0) {
    pdVar2 = pdVar3;
  }
  pdVar3 = &local_68;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar3 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = local_30 - local_48;
  dVar6 = (local_40 - local_58) * (local_38 - local_50);
  dVar5 = (local_40 - local_58) * dVar4;
  dVar1 = (local_38 - local_50) * dVar4;
  *pdVar3 = dVar1 + dVar1 + dVar6 + dVar6 + dVar5 + dVar5;
  *pdVar2 = dVar6 * dVar4;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e33e0 FUN_1485e33e0 body=352 status=ok
// SIG undefined FUN_1485e33e0(void)

void FUN_1485e33e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
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
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_68;
  uStack_b0 = uStack_60;
  local_a8 = local_58;
  local_f8 = local_50;
  uStack_f4 = uStack_4c;
  uStack_f0 = uStack_48;
  uStack_ec = uStack_44;
  local_e8 = local_40;
  uStack_e4 = uStack_3c;
  uStack_e0 = uStack_38;
  uStack_dc = uStack_34;
  local_d8 = local_30;
  uStack_d4 = uStack_2c;
  uStack_d0 = uStack_28;
  uStack_cc = uStack_24;
  local_c8 = CONCAT71(uStack_1f,local_20);
  FUN_1485e3542(&local_a0);
  *(undefined8 *)(param_3 + 0xc) = local_70;
  param_3[8] = local_80;
  param_3[9] = uStack_7c;
  param_3[10] = uStack_78;
  param_3[0xb] = uStack_74;
  param_3[4] = local_90;
  param_3[5] = uStack_8c;
  param_3[6] = uStack_88;
  param_3[7] = uStack_84;
  *param_3 = local_a0;
  param_3[1] = uStack_9c;
  param_3[2] = uStack_98;
  param_3[3] = uStack_94;
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e3542 FUN_1485e3542 body=196 status=ok
// SIG undefined FUN_1485e3542(void)

void FUN_1485e3542(double *param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  double dVar10;
  
  dVar10 = param_3[2];
  dVar2 = param_2[5];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_2[4];
  dVar6 = param_2[3];
  dVar7 = param_2[2];
  dVar8 = param_2[1];
  *param_1 = *param_2 - dVar3;
  param_1[1] = dVar8 - dVar4;
  param_1[2] = dVar7 - dVar10;
  param_1[3] = dVar6 + dVar3;
  param_1[4] = dVar5 + dVar4;
  param_1[5] = dVar2 + dVar10;
  *(undefined1 *)(param_1 + 6) = 1;
  lVar9 = -0x18;
  do {
    dVar10 = *(double *)((longlong)param_1 + lVar9 + 0x18);
    pdVar1 = (double *)((longlong)param_1 + lVar9 + 0x30);
    if (*pdVar1 <= dVar10 && dVar10 != *pdVar1) {
      dVar10 = (*(double *)((longlong)param_2 + lVar9 + 0x18) +
               *(double *)((longlong)param_2 + lVar9 + 0x30)) * 0.5;
      *(double *)((longlong)param_1 + lVar9 + 0x30) = dVar10;
      *(double *)((longlong)param_1 + lVar9 + 0x18) = dVar10;
    }
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0);
  return;
}



// FUNCTION 1485e3606 FUN_1485e3606 body=442 status=ok
// SIG undefined FUN_1485e3606(void)

void FUN_1485e3606(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_158 [13];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined7 uStack_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_b8;
  puVar3 = local_158;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_168 = CONCAT71(uStack_27,local_28);
  local_178 = local_38;
  uStack_174 = uStack_34;
  uStack_170 = uStack_30;
  uStack_16c = uStack_2c;
  local_188 = local_48;
  uStack_184 = uStack_44;
  uStack_180 = uStack_40;
  uStack_17c = uStack_3c;
  local_198 = local_58;
  uStack_194 = uStack_54;
  uStack_190 = uStack_50;
  uStack_18c = uStack_4c;
  FUN_144a1c3a2(&local_198,&local_f0);
  *(undefined8 *)(param_3 + 0xc) = local_c0;
  param_3[8] = local_d0;
  param_3[9] = uStack_cc;
  param_3[10] = uStack_c8;
  param_3[0xb] = uStack_c4;
  param_3[4] = local_e0;
  param_3[5] = uStack_dc;
  param_3[6] = uStack_d8;
  param_3[7] = uStack_d4;
  *param_3 = local_f0;
  param_3[1] = uStack_ec;
  param_3[2] = uStack_e8;
  param_3[3] = uStack_e4;
  if ((local_20 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e37c2 FUN_1485e37c2 body=362 status=ok
// SIG undefined FUN_1485e37c2(void)

void FUN_1485e37c2(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_68 - local_80;
  param_3[1] = local_60 - local_78;
  param_3[2] = local_58 - local_70;
  param_3[3] = local_80 + local_68;
  param_3[4] = local_78 + local_60;
  param_3[5] = local_70 + local_58;
  *(undefined1 *)(param_3 + 6) = 1;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e392e FUN_1485e392e body=421 status=ok
// SIG undefined FUN_1485e392e(void)

void FUN_1485e392e(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (double)(~-(ulonglong)(local_70 * 0.5 <= 0.0) & (ulonglong)(local_70 * 0.5));
  dVar2 = (double)(~-(ulonglong)(local_78 * 0.5 <= 0.0) & (ulonglong)(local_78 * 0.5));
  dVar3 = (double)(~-(ulonglong)(local_80 * 0.5 <= 0.0) & (ulonglong)(local_80 * 0.5));
  *param_3 = local_68 - dVar3;
  param_3[1] = local_60 - dVar2;
  param_3[2] = local_58 - dVar1;
  param_3[3] = local_68 + dVar3;
  param_3[4] = local_60 + dVar2;
  param_3[5] = local_58 + dVar1;
  *(undefined1 *)(param_3 + 6) = 1;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e3ada FUN_1485e3ada body=369 status=ok
// SIG undefined FUN_1485e3ada(void)

void FUN_1485e3ada(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined1 local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_90 <= local_40 &
             (local_58 <= local_78 && (local_98 <= local_48 && local_60 <= local_80)) &
             -(local_a0 <= local_50) & -(local_68 <= local_88);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e3c52 FUN_1485e3c52 body=399 status=ok
// SIG undefined FUN_1485e3c52(void)

void FUN_1485e3c52(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_68;
  uStack_80 = uStack_60;
  local_78 = local_58;
  local_c8 = local_50;
  uStack_c4 = uStack_4c;
  uStack_c0 = uStack_48;
  uStack_bc = uStack_44;
  local_b8 = local_40;
  uStack_b4 = uStack_3c;
  uStack_b0 = uStack_38;
  uStack_ac = uStack_34;
  local_a8 = local_30;
  uStack_a4 = uStack_2c;
  uStack_a0 = uStack_28;
  uStack_9c = uStack_24;
  local_98 = CONCAT71(uStack_1f,local_20);
  uVar1 = FUN_147dbab2a(&local_88,local_70 * local_70);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e3dee FUN_1485e3dee body=535 status=ok
// SIG undefined FUN_1485e3dee(void)

void FUN_1485e3dee(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  undefined1 auStack_c8 [36];
  int local_a4;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_a4 == 0) {
    bVar1 = local_90 < local_60 &
            (local_78 < local_90 && (local_98 < local_68 && local_80 < local_98)) &
            -(local_88 < local_a0 && local_a0 < local_70);
  }
  else {
    bVar1 = (local_90 <= local_60 &&
            (local_78 <= local_90 && (local_98 <= local_68 && local_80 <= local_98))) &
            -(local_88 <= local_a0 && local_a0 <= local_70);
  }
  *param_3 = bVar1;
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e400a FUN_1485e400a body=374 status=ok
// SIG undefined FUN_1485e400a(void)

undefined8 * FUN_1485e400a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146bcb256(param_1,&local_60);
  local_38 = *(double *)(param_1 + 0x48) * *(double *)(param_3 + 0x28);
  local_40 = *(double *)(param_1 + 0x40) * *(double *)(param_3 + 0x20);
  local_48 = *(double *)(param_1 + 0x38) * *(double *)(param_3 + 0x18);
  FUN_146bed047(&local_78,param_1);
  dVar2 = SQRT(local_68 * local_68 + local_78 * local_78 + local_70 * local_70);
  dVar1 = 1.0 / dVar2;
  if (0.0 < dVar2) {
    local_68 = local_68 * dVar1;
    local_70 = local_70 * dVar1;
  }
  else {
    local_68 = 0.0;
    local_70 = 0.0;
  }
  dVar2 = (double)(-(ulonglong)(0.0 < dVar2) & (ulonglong)(local_78 * dVar1));
  param_2[2] = local_50;
  *param_2 = local_60;
  param_2[1] = uStack_58;
  param_2[3] = dVar2;
  param_2[4] = local_70;
  param_2[5] = local_68;
  dVar1 = local_68 * local_68 + dVar2 * dVar2 + local_70 * local_70;
  if (9.99999993922529e-09 < dVar1) {
    dVar1 = 1.0 / SQRT(dVar1);
    param_2[3] = dVar2 * dVar1;
    param_2[4] = local_70 * dVar1;
    param_2[5] = local_68 * dVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e4181 FUN_1485e4181 body=76 status=ok
// SIG undefined FUN_1485e4181(void)

char FUN_1485e4181(void)

{
  char cVar1;
  char *in_stack_00000028;
  
  FUN_1485ebbb0();
  cVar1 = *in_stack_00000028;
  if (cVar1 == '\x01') {
    if (0.0 <= *(double *)(in_stack_00000028 + 0x10)) {
      if (*(double *)(in_stack_00000028 + 8) <= 0.0 && *(double *)(in_stack_00000028 + 8) != 0.0) {
        *(int *)(in_stack_00000028 + 4) = *(int *)(in_stack_00000028 + 4) + -1;
        *(double *)(in_stack_00000028 + 8) = *(double *)(in_stack_00000028 + 0x10);
      }
    }
    else {
      *in_stack_00000028 = '\0';
      in_stack_00000028[4] = '\0';
      in_stack_00000028[5] = '\0';
      in_stack_00000028[6] = '\0';
      in_stack_00000028[7] = '\0';
      cVar1 = '\0';
    }
  }
  return cVar1;
}



// FUNCTION 1485e41d4 FUN_1485e41d4 body=702 status=ok
// SIG undefined FUN_1485e41d4(void)

void FUN_1485e41d4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
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
  local_58 = CONCAT22(local_58._2_2_,0x100);
  uStack_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar4 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = uStack_38;
  local_a8 = local_28;
  local_a0 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  local_b8 = local_70;
  FUN_1485e4494(&local_a8,local_30,&local_98,puVar4);
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
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
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e4494 FUN_1485e4494 body=477 status=ok
// SIG undefined FUN_1485e4494(void)

void FUN_1485e4494(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  wchar_t *local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    local_88 = L"SampleTexture2DAtUVPositions_InvalidInput2";
    lStack_80._0_4_ = 0x2a;
    FUN_1446e940c(&local_48,&local_88);
    local_88 = L"UGeometryScriptLibrary_TextureMapFunctions";
    lStack_80 = CONCAT44(lStack_80._4_4_,0x2a);
    FUN_1446e940c(local_4c,&local_88);
    FUN_140208bae(&local_88,local_4c,&local_48,L"SampleTexture2DAtUVPositions: Texture is Null");
    FUN_143ba90d7(param_5,2,&local_88);
    if (local_88 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (wchar_t *)0x0;
    lStack_80 = 0;
    cVar4 = FUN_1484c23e9(param_2,&local_88,0);
    if (cVar4 == '\0') {
      local_48 = L"SampleTexture2DAtUVPositions_TexReadFailed";
      local_40 = 0x2a;
      FUN_1446e940c(local_4c,&local_48);
      local_48 = L"UGeometryScriptLibrary_TextureMapFunctions";
      local_40 = 0x2a;
      FUN_1446e940c(local_8c,&local_48);
      FUN_140208bae(&local_48,local_8c,local_4c,
                    L"SampleTexture2DAtUVPositions: Error reading source texture data. If using this function at Runtime, The Compression Settings type on the UTexture2D Asset must be set to VectorDisplacementmap (RGBA8)."
                   );
      FUN_143ba90d7(param_5,3,&local_48);
      if (local_48 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_48 + 0x10))();
      }
    }
    else {
      FUN_143be0d5c(&local_88,param_1,param_3,param_4);
    }
    if (lStack_80 != 0) {
      FUN_1400020a8();
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e4672 FUN_1485e4672 body=702 status=ok
// SIG undefined FUN_1485e4672(void)

void FUN_1485e4672(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
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
  local_58 = CONCAT22(local_58._2_2_,0x100);
  uStack_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar4 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_58;
  uStack_94 = uStack_54;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_78 = uStack_38;
  local_a8 = local_28;
  local_a0 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  local_b8 = local_70;
  FUN_1485e4932(&local_a8,local_30,&local_98,puVar4);
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
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
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e4932 FUN_1485e4932 body=747 status=ok
// SIG undefined FUN_1485e4932(void)

void FUN_1485e4932(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [4];
  undefined8 local_bc;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  wchar_t *local_90;
  longlong local_88 [4];
  longlong local_68;
  undefined1 local_5c [4];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == 0) {
    local_90 = L"SampleTextureRenderTarget2DAtUVPositions_InvalidInput";
    local_88[0]._0_4_ = 0x35;
    FUN_1446e940c(&local_58,&local_90);
    local_90 = L"UGeometryScriptLibrary_TextureMapFunctions";
    local_88[0] = CONCAT44(local_88[0]._4_4_,0x2a);
    FUN_1446e940c(local_5c,&local_90);
    FUN_140208bae(&local_90,local_5c,&local_58,
                  L"SampleTextureRenderTarget2DAtUVPositions: Texture is Null");
    uVar6 = 2;
  }
  else {
    lVar5 = thunk_FUN_1447b4020(param_2);
    if (lVar5 != 0) {
      local_88[0] = 0;
      local_88[1] = 0;
      local_88[2] = 0;
      local_90 = *(wchar_t **)(param_2 + 0x140);
      local_88[3] = (longlong)(int)local_90;
      local_68 = (longlong)local_90 >> 0x20;
      FUN_1483b251e(local_88,local_68 * local_88[3],1);
      local_98 = *(undefined8 *)(param_2 + 0x140);
      local_a0 = 0;
      local_bc = 0x300000006;
      local_b4 = 0;
      local_b0 = 0x467a0000;
      local_ac = 0;
      local_a8 = 0;
      cVar4 = FUN_147d7765c(lVar5 + 0x50,local_88[0]);
      if (cVar4 == '\0') {
        local_58 = L"SampleTextureRenderTarget2DAtUVPositions_GpuReadFailed";
        local_50 = 0x36;
        FUN_1446e940c(local_5c,&local_58);
        local_58 = L"UGeometryScriptLibrary_TextureMapFunctions";
        local_50 = 0x2a;
        FUN_1446e940c(local_c0,&local_58);
        FUN_140208bae(&local_58,local_c0,local_5c,
                      L"SampleTextureRenderTarget2DAtUVPositions: Error reading texture data from the GPU."
                     );
        FUN_143ba90d7(param_5,3,&local_58);
        if (local_58 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_58 + 0x10))();
        }
      }
      else {
        FUN_143be0d5c(&local_90,param_1,param_3,param_4);
      }
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_1485e4a09;
    }
    local_90 = L"SampleTextureRenderTarget2DAtUVPositions_NullResource";
    local_88[0]._0_4_ = 0x35;
    FUN_1446e940c(&local_58,&local_90);
    local_90 = L"UGeometryScriptLibrary_TextureMapFunctions";
    local_88[0] = CONCAT44(local_88[0]._4_4_,0x2a);
    FUN_1446e940c(local_5c,&local_90);
    FUN_140208bae(&local_90,local_5c,&local_58,
                  L"SampleTextureRenderTarget2DAtUVPositions: Render target resource is Null");
    uVar6 = 3;
  }
  FUN_143ba90d7(param_5,uVar6,&local_90);
  if (local_90 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x10))();
  }
LAB_1485e4a09:
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e4c22 FUN_1485e4c22 body=354 status=ok
// SIG undefined FUN_1485e4c22(void)

void FUN_1485e4c22(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
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
  local_58 = local_38;
  local_50 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_143be0fac(local_48,local_20,&local_58);
  FUN_1485e4d86(param_3,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e4d86 FUN_1485e4d86 body=96 status=ok
// SIG undefined FUN_1485e4d86(void)

undefined8 * FUN_1485e4d86(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1485e4de6 FUN_1485e4de6 body=331 status=ok
// SIG undefined FUN_1485e4de6(void)

void FUN_1485e4de6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *plStack_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar3 = plStack_20;
  plVar4 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar4 = (longlong *)*plVar4;
  if ((plVar4 != (longlong *)0x0) && (lVar2 = plVar4[1], 0 < (longlong)(int)lVar2)) {
    lVar5 = 0;
    do {
      *(double *)(*plVar4 + lVar5 * 8) = *(double *)(*plVar4 + lVar5 * 8) * local_18;
      lVar5 = lVar5 + 1;
    } while ((int)lVar2 != lVar5);
  }
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_20 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
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



// FUNCTION 1485e4f32 FUN_1485e4f32 body=354 status=ok
// SIG undefined FUN_1485e4f32(void)

void FUN_1485e4f32(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
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
  local_58 = local_38;
  local_50 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_143be105c(local_48,local_20,&local_58);
  FUN_1485e5096(param_3,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e5096 FUN_1485e5096 body=96 status=ok
// SIG undefined FUN_1485e5096(void)

undefined8 * FUN_1485e5096(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 1485e50f6 FUN_1485e50f6 body=288 status=ok
// SIG undefined FUN_1485e50f6(void)

void FUN_1485e50f6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143be1138((int)local_20,puVar4);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e5218 FUN_1485e5218 body=610 status=ok
// SIG undefined FUN_1485e5218(void)

void FUN_1485e5218(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  local_60 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_78 = local_28;
  local_70 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  local_88 = local_48;
  FUN_143be1194(local_58,&local_78,&local_68,local_40);
  FUN_1485e4d86(param_3,local_58);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
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
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e547c FUN_1485e547c body=526 status=ok
// SIG undefined FUN_1485e547c(void)

void FUN_1485e547c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
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
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_28;
  local_50 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_143be12a4(&local_58,puVar4,local_40,local_48);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e568c FUN_1485e568c body=514 status=ok
// SIG undefined FUN_1485e568c(void)

void FUN_1485e568c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_28;
  local_58 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  local_68 = local_40;
  FUN_143be132a(local_50,&local_60,local_30,local_38);
  FUN_1485e4d86(param_3,local_50);
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e5890 FUN_1485e5890 body=595 status=ok
// SIG undefined FUN_1485e5890(void)

void FUN_1485e5890(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [40];
  double local_70;
  ulonglong local_68;
  double local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  plVar6 = &local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_60 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  plVar4 = plStack_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar6 = (longlong *)*plVar6;
  if ((plVar6 != (longlong *)0x0) && (lVar3 = plVar6[1], 0 < (longlong)(int)lVar3)) {
    lVar5 = 0;
    do {
      dVar2 = *(double *)(*plVar6 + lVar5 * 8);
      uVar7 = -(ulonglong)(-dVar2 <= dVar2);
      uVar7 = -(ulonglong)
               (local_70 < (double)(~uVar7 & (ulonglong)-dVar2 | uVar7 & (ulonglong)dVar2));
      *(ulonglong *)(*plVar6 + lVar5 * 8) =
           ~uVar7 & local_68 | (ulonglong)(local_60 / dVar2) & uVar7;
      lVar5 = lVar5 + 1;
    } while ((int)lVar3 != lVar5);
  }
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_50 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e5ae4 FUN_1485e5ae4 body=509 status=ok
// SIG undefined FUN_1485e5ae4(void)

void FUN_1485e5ae4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_70 = local_28;
  local_68 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_143be143a(local_50,&local_70,&local_60,local_40);
  FUN_1485e4d86(param_3,local_50);
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
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
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e5ce2 FUN_1485e5ce2 body=442 status=ok
// SIG undefined FUN_1485e5ce2(void)

void FUN_1485e5ce2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
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
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_28;
  local_48 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_143be1538(&local_50,puVar4,local_40);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e5e9e FUN_1485e5e9e body=509 status=ok
// SIG undefined FUN_1485e5e9e(void)

void FUN_1485e5e9e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_70 = local_28;
  local_68 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_143be15b6(local_50,&local_70,&local_60,local_40);
  FUN_1485e5096(param_3,local_50);
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
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
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e609c FUN_1485e609c body=442 status=ok
// SIG undefined FUN_1485e609c(void)

void FUN_1485e609c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
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
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_28;
  local_48 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_143be16e0(&local_50,puVar4,local_40);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e6258 FUN_1485e6258 body=610 status=ok
// SIG undefined FUN_1485e6258(void)

void FUN_1485e6258(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  local_60 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_78 = local_28;
  local_70 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  local_88 = local_48;
  FUN_143be178c(local_58,&local_78,&local_68,local_40);
  FUN_1485e5096(param_3,local_58);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
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
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e64bc FUN_1485e64bc body=526 status=ok
// SIG undefined FUN_1485e64bc(void)

void FUN_1485e64bc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
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
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar4 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_28;
  local_50 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_143be18e6(&local_58,puVar4,local_40,local_48);
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
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e66cc FUN_1485e66cc body=420 status=ok
// SIG undefined FUN_1485e66cc(void)

void FUN_1485e66cc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_58 = local_38;
  local_50 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_68 = local_28;
  local_60 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_143be19c4(local_48,&local_68,&local_58);
  FUN_1485e5096(param_3,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e6872 FUN_1485e6872 body=420 status=ok
// SIG undefined FUN_1485e6872(void)

void FUN_1485e6872(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_58 = local_38;
  local_50 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_68 = local_28;
  local_60 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_143be1b18(local_48,&local_68,&local_58);
  FUN_1485e4d86(param_3,local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar1 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e6a1e FUN_1485e6a1e body=510 status=ok
// SIG undefined FUN_1485e6a1e(void)

void FUN_1485e6a1e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_128 [32];
  undefined8 local_108 [13];
  int local_9c;
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
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
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
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  bVar8 = local_9c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar6 = local_98;
  puVar7 = local_108;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_143be1c30(puVar5,local_108,bVar8);
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
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e6c1e FUN_1485e6c1e body=277 status=ok
// SIG undefined FUN_1485e6c1e(void)

void FUN_1485e6c1e(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  FUN_143be1ff8(local_38,&local_48);
  FUN_1485e4d86(param_3,local_38);
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



// FUNCTION 1485e6d34 FUN_1485e6d34 body=299 status=ok
// SIG undefined FUN_1485e6d34(void)

void FUN_1485e6d34(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar4 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  FUN_143be20c8(puVar4);
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



// FUNCTION 1485e6e60 FUN_1485e6e60 body=299 status=ok
// SIG undefined FUN_1485e6e60(void)

void FUN_1485e6e60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar4 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  FUN_143be219c(puVar4);
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e6f8c FUN_1485e6f8c body=514 status=ok
// SIG undefined FUN_1485e6f8c(void)

void FUN_1485e6f8c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_28;
  local_58 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  local_68 = local_40;
  FUN_143be224a(local_50,&local_60,local_30,local_38);
  FUN_1485e4d86(param_3,local_50);
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
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e7196 FUN_1485e7196 body=510 status=ok
// SIG undefined FUN_1485e7196(void)

void FUN_1485e7196(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_128 [32];
  undefined8 local_108 [13];
  int local_9c;
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
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
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
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  bVar8 = local_9c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar6 = local_98;
  puVar7 = local_108;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_143be233a(puVar5,local_108,bVar8);
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
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e73a4 FUN_1485e73a4 body=424 status=ok
// SIG undefined FUN_1485e73a4(void)

void FUN_1485e73a4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_78 [44];
  undefined8 local_4c;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
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
  local_44[0] = 0;
  local_40 = 0x40000000;
  local_3c = 0;
  local_38 = 0x2000000020;
  local_30 = 0x20;
  local_2c = 1;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_44);
  }
  local_4c = 0x3f800000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e75cc FUN_1485e75cc body=59 status=ok
// SIG undefined FUN_1485e75cc(void)

undefined8 FUN_1485e75cc(longlong *param_1)

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



// FUNCTION 1485e76ea FUN_1485e76ea body=59 status=ok
// SIG undefined FUN_1485e76ea(void)

undefined8 FUN_1485e76ea(longlong *param_1)

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



// FUNCTION 1485e7814 FUN_1485e7814 body=59 status=ok
// SIG undefined FUN_1485e7814(void)

undefined8 FUN_1485e7814(longlong *param_1)

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



// FUNCTION 1485e793c FUN_1485e793c body=59 status=ok
// SIG undefined FUN_1485e793c(void)

undefined8 FUN_1485e793c(longlong *param_1)

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



// FUNCTION 1485e7ad4 FUN_1485e7ad4 body=59 status=ok
// SIG undefined FUN_1485e7ad4(void)

undefined8 FUN_1485e7ad4(longlong *param_1)

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



// FUNCTION 1485e7bda FUN_1485e7bda body=59 status=ok
// SIG undefined FUN_1485e7bda(void)

undefined8 FUN_1485e7bda(longlong *param_1)

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



// FUNCTION 1485e7ce6 FUN_1485e7ce6 body=59 status=ok
// SIG undefined FUN_1485e7ce6(void)

undefined8 FUN_1485e7ce6(longlong *param_1)

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



// FUNCTION 1485e7dfe FUN_1485e7dfe body=59 status=ok
// SIG undefined FUN_1485e7dfe(void)

undefined8 FUN_1485e7dfe(longlong *param_1)

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



// FUNCTION 1485e7f34 FUN_1485e7f34 body=46 status=ok
// SIG undefined FUN_1485e7f34(void)

void FUN_1485e7f34(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x70) = 0;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_2 + 0x28);
  return;
}



// FUNCTION 1485e7f78 FUN_1485e7f78 body=86 status=ok
// SIG undefined FUN_1485e7f78(void)

undefined8 FUN_1485e7f78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar10);
      lVar2 = param_2 + 0x28 + lVar10;
      *(undefined4 *)(lVar2 + -8) = puVar1[8];
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      *(undefined4 *)(lVar2 + -0x18) = puVar1[4];
      *(undefined4 *)(lVar2 + -0x14) = uVar7;
      *(undefined4 *)(lVar2 + -0x10) = uVar8;
      *(undefined4 *)(lVar2 + -0xc) = uVar9;
      *(undefined4 *)(lVar2 + -0x28) = uVar3;
      *(undefined4 *)(lVar2 + -0x24) = uVar4;
      *(undefined4 *)(lVar2 + -0x20) = uVar5;
      *(undefined4 *)(lVar2 + -0x1c) = uVar6;
      FUN_140cae46a();
      lVar10 = lVar10 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1485e7ff6 FUN_1485e7ff6 body=59 status=ok
// SIG undefined FUN_1485e7ff6(void)

undefined8 FUN_1485e7ff6(longlong *param_1)

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



// FUNCTION 1485e803c FUN_1485e803c body=54 status=ok
// SIG undefined FUN_1485e803c(void)

void FUN_1485e803c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    *(undefined4 *)(param_2 + 0x70) = 0;
    if (*(longlong *)(param_2 + 0x68) != 0) {
      FUN_1400020a8();
    }
    FUN_144a6bfa8(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1485e813c FUN_1485e813c body=59 status=ok
// SIG undefined FUN_1485e813c(void)

undefined8 FUN_1485e813c(longlong *param_1)

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



// FUNCTION 1485e8242 FUN_1485e8242 body=59 status=ok
// SIG undefined FUN_1485e8242(void)

undefined8 FUN_1485e8242(longlong *param_1)

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



// FUNCTION 1485e8394 FUN_1485e8394 body=59 status=ok
// SIG undefined FUN_1485e8394(void)

undefined8 FUN_1485e8394(longlong *param_1)

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



// FUNCTION 1485e8536 FUN_1485e8536 body=59 status=ok
// SIG undefined FUN_1485e8536(void)

undefined8 FUN_1485e8536(longlong *param_1)

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



// FUNCTION 1485e8644 FUN_1485e8644 body=59 status=ok
// SIG undefined FUN_1485e8644(void)

undefined8 FUN_1485e8644(longlong *param_1)

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



// FUNCTION 1485e8774 FUN_1485e8774 body=46 status=ok
// SIG undefined FUN_1485e8774(void)

void FUN_1485e8774(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x60) = 0;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_2 + 0x18);
  return;
}



// FUNCTION 1485e87b8 FUN_1485e87b8 body=78 status=ok
// SIG undefined FUN_1485e87b8(void)

undefined1 FUN_1485e87b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(lVar2 + -8) = *(undefined1 *)(puVar1 + 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_140cae46a();
      lVar6 = lVar6 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1485e882e FUN_1485e882e body=59 status=ok
// SIG undefined FUN_1485e882e(void)

undefined8 FUN_1485e882e(longlong *param_1)

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



// FUNCTION 1485e8874 FUN_1485e8874 body=54 status=ok
// SIG undefined FUN_1485e8874(void)

void FUN_1485e8874(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    *(undefined4 *)(param_2 + 0x60) = 0;
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FUN_1400020a8();
    }
    FUN_144a6bfa8(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1485e8966 FUN_1485e8966 body=59 status=ok
// SIG undefined FUN_1485e8966(void)

undefined8 FUN_1485e8966(longlong *param_1)

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



// FUNCTION 1485e8a94 FUN_1485e8a94 body=59 status=ok
// SIG undefined FUN_1485e8a94(void)

undefined8 FUN_1485e8a94(longlong *param_1)

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



// FUNCTION 1485e8c2a FUN_1485e8c2a body=59 status=ok
// SIG undefined FUN_1485e8c2a(void)

undefined8 FUN_1485e8c2a(longlong *param_1)

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



// FUNCTION 1485e8d94 FUN_1485e8d94 body=59 status=ok
// SIG undefined FUN_1485e8d94(void)

undefined8 FUN_1485e8d94(longlong *param_1)

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



// FUNCTION 1485e8ea2 FUN_1485e8ea2 body=62 status=ok
// SIG undefined FUN_1485e8ea2(void)

undefined1 FUN_1485e8ea2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1405b70a4(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1485e8f08 FUN_1485e8f08 body=59 status=ok
// SIG undefined FUN_1485e8f08(void)

undefined8 FUN_1485e8f08(longlong *param_1)

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



// FUNCTION 1485e8f4e FUN_1485e8f4e body=37 status=ok
// SIG undefined FUN_1485e8f4e(void)

void FUN_1485e8f4e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1485e9008 FUN_1485e9008 body=60 status=ok
// SIG undefined FUN_1485e9008(void)

undefined1 FUN_1485e9008(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a67f5c(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 1485e906c FUN_1485e906c body=59 status=ok
// SIG undefined FUN_1485e906c(void)

undefined8 FUN_1485e906c(longlong *param_1)

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



// FUNCTION 1485e90b2 FUN_1485e90b2 body=37 status=ok
// SIG undefined FUN_1485e90b2(void)

void FUN_1485e90b2(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1485e9128 FUN_1485e9128 body=34 status=ok
// SIG undefined FUN_1485e9128(void)

void FUN_1485e9128(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0xc) = 2;
  return;
}



// FUNCTION 1485e914a FUN_1485e914a body=27 status=ok
// SIG undefined FUN_1485e914a(void)

void FUN_1485e914a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0xc) = 2;
  return;
}



// FUNCTION 1485e917e FUN_1485e917e body=39 status=ok
// SIG undefined FUN_1485e917e(void)

undefined8 FUN_1485e917e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1485e91ce FUN_1485e91ce body=59 status=ok
// SIG undefined FUN_1485e91ce(void)

undefined8 FUN_1485e91ce(longlong *param_1)

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



// FUNCTION 1485e9270 FUN_1485e9270 body=264 status=ok
// SIG undefined FUN_1485e9270(void)

void FUN_1485e9270(longlong *param_1,uint param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58 [2];
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[0] = 10;
  local_50 = 0;
  uStack_48 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = (undefined4)*param_1;
  uStack_74 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_70 = (undefined4)param_1[1];
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_88 = 4;
  FUN_146c85058(local_58,&local_78,&local_68,param_2);
  uVar4 = (uint)uStack_48;
  if ((int)param_2 < (int)(uint)uStack_48) {
    uVar4 = param_2;
  }
  FUN_1417247dc(param_3,(ulonglong)uVar4);
  if (0 < (int)uVar4) {
    uVar9 = 0;
    do {
      puVar8 = (undefined4 *)((longlong)*(int *)(local_50 + uVar9 * 4) * 0x18 + *param_1);
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1403e3958(param_3,iVar2);
      }
      lVar3 = *param_3;
      *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = *(undefined8 *)(puVar8 + 4);
      uVar5 = puVar8[1];
      uVar6 = puVar8[2];
      uVar7 = puVar8[3];
      puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
      *puVar1 = *puVar8;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      uVar9 = uVar9 + 1;
    } while (uVar4 != uVar9);
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e937a FUN_1485e937a body=1561 status=ok
// SIG undefined FUN_1485e937a(void)

void FUN_1485e937a(int *param_1,longlong *param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  double *pdVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_d8 [32];
  int *local_b8;
  int local_ac;
  longlong local_a8 [2];
  longlong local_98;
  undefined8 uStack_90;
  double *local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar12 = *(uint *)(param_2 + 1);
  uVar17 = (ulonglong)uVar12;
  if (uVar17 != 0) {
    local_88 = (double *)0x0;
    uStack_80 = 0;
    local_b8 = param_1;
    if (*(int *)(param_4 + 8) == 0) {
      local_98 = 0;
      uStack_90 = 0;
      FUN_144a127d2(&local_98,uVar17,1);
      if (0 < (int)uVar12) {
        uVar10 = 0;
        do {
          *(int *)(local_98 + uVar10 * 4) = (int)uVar10;
          uVar10 = uVar10 + 1;
        } while (uVar17 != uVar10);
      }
      if ((int)*(uint *)(param_2 + 1) < (int)param_3) {
        param_3 = *(uint *)(param_2 + 1);
      }
      if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(param_3);
      }
      if ((int)uStack_80._4_4_ < (int)param_3) {
        FUN_1447a8aa0(&local_88,param_3);
      }
      if (param_3 != 0) {
        lVar18 = (longlong)(int)uVar12;
        uVar12 = local_b8[1];
        uVar17 = 0;
        do {
          uVar10 = uStack_80;
          if (lVar18 < 1) {
            iVar8 = 0;
          }
          else {
            uVar12 = uVar12 * 0xbb38435 + 0x3619636b;
            iVar8 = (int)((float)(int)lVar18 * ((float)(uVar12 >> 9 | 0x3f800000) + -1.0));
          }
          lVar11 = (longlong)(iVar8 + (int)uVar17);
          uVar6 = *(undefined4 *)(local_98 + uVar17 * 4);
          *(undefined4 *)(local_98 + uVar17 * 4) = *(undefined4 *)(local_98 + lVar11 * 4);
          *(undefined4 *)(local_98 + lVar11 * 4) = uVar6;
          pdVar13 = (double *)((longlong)*(int *)(local_98 + uVar17 * 4) * 0x18 + *param_2);
          lVar11 = (longlong)(int)uStack_80;
          uVar9 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
          if (uStack_80._4_4_ < uVar9) {
            FUN_1403e3958(&local_88,uVar10 & 0xffffffff);
          }
          local_88[lVar11 * 3 + 2] = pdVar13[2];
          dVar4 = pdVar13[1];
          local_88[lVar11 * 3] = *pdVar13;
          (local_88 + lVar11 * 3)[1] = dVar4;
          uVar17 = uVar17 + 1;
          lVar18 = lVar18 + -1;
        } while (param_3 != uVar17);
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      param_1 = local_b8;
    }
    else {
      FUN_1483adaae(&local_88,param_4);
    }
    uVar17 = uStack_80;
    iVar8 = (int)uStack_80;
    uVar10 = uStack_80 & 0xffffffff;
    plVar1 = (longlong *)(param_1 + 2);
    local_98 = CONCAT44(local_98._4_4_,0xffffffff);
    FUN_1448156a8(plVar1,&local_98,(int)param_2[1]);
    plVar2 = (longlong *)(param_1 + 6);
    FUN_144a8c360(plVar2,uVar10,1);
    if (iVar8 != 0) {
      if (iVar8 == 1) {
        iVar8 = (int)param_2[1];
        if (0 < iVar8) {
          lVar18 = 0;
          do {
            *(undefined4 *)(*plVar1 + lVar18 * 4) = 0;
            lVar18 = lVar18 + 1;
            iVar8 = (int)param_2[1];
          } while (lVar18 < iVar8);
        }
        *(int *)*plVar2 = iVar8;
      }
      else {
        local_98 = 0;
        uStack_90 = 0;
        FUN_146ba0be8(&local_98,uVar17 & 0xffffffff,1);
        local_a8[0] = 0;
        local_a8[1] = 0;
        local_ac = *param_1;
        if (local_ac < 2) {
          local_ac = 1;
        }
        iVar8 = 0;
        do {
          bVar19 = iVar8 == 0;
          if (0 < (int)param_2[1]) {
            lVar18 = 0;
            do {
              lVar11 = *param_2;
              iVar15 = 0;
              if (1 < (longlong)(int)uStack_80) {
                dVar4 = *(double *)(lVar11 + lVar18 * 0x18);
                dVar5 = *(double *)(lVar11 + 8 + lVar18 * 0x18);
                dVar20 = *(double *)(lVar11 + 0x10 + lVar18 * 0x18);
                dVar21 = local_88[2] - dVar20;
                dVar22 = *local_88 - dVar4;
                dVar23 = local_88[1] - dVar5;
                dVar21 = dVar21 * dVar21 + dVar22 * dVar22 + dVar23 * dVar23;
                pdVar13 = local_88 + 5;
                uVar17 = 0;
                uVar10 = 1;
                do {
                  dVar23 = pdVar13[-2] - dVar4;
                  dVar24 = pdVar13[-1] - dVar5;
                  dVar22 = *pdVar13 - dVar20;
                  dVar22 = dVar22 * dVar22 + dVar23 * dVar23 + dVar24 * dVar24;
                  if (dVar22 < dVar21) {
                    uVar17 = uVar10 & 0xffffffff;
                    dVar21 = dVar22;
                  }
                  iVar15 = (int)uVar17;
                  uVar10 = uVar10 + 1;
                  pdVar13 = pdVar13 + 3;
                } while ((longlong)(int)uStack_80 != uVar10);
              }
              lVar16 = (longlong)iVar15;
              piVar3 = (int *)(*plVar2 + lVar16 * 4);
              *piVar3 = *piVar3 + 1;
              if (iVar8 != 0) {
                iVar14 = *(int *)(*plVar1 + lVar18 * 4);
                piVar3 = (int *)(*plVar2 + (longlong)iVar14 * 4);
                *piVar3 = *piVar3 + -1;
                bVar19 = (bool)(bVar19 | iVar14 != iVar15);
              }
              pdVar13 = (double *)(lVar11 + lVar18 * 0x18);
              *(int *)(*plVar1 + lVar18 * 4) = iVar15;
              *(double *)(local_98 + lVar16 * 0x18) =
                   *pdVar13 + *(double *)(local_98 + lVar16 * 0x18);
              *(double *)(local_98 + 8 + lVar16 * 0x18) =
                   pdVar13[1] + *(double *)(local_98 + 8 + lVar16 * 0x18);
              *(double *)(local_98 + 0x10 + lVar16 * 0x18) =
                   pdVar13[2] + *(double *)(local_98 + 0x10 + lVar16 * 0x18);
              lVar18 = lVar18 + 1;
            } while (lVar18 < (int)param_2[1]);
          }
          if (!bVar19) break;
          uVar17 = uStack_80 & 0xffffffff;
          if (0 < (int)uStack_80) {
            lVar18 = 0;
            bVar19 = false;
            do {
              iVar15 = *(int *)(*plVar2 + lVar18 * 4);
              if (iVar15 < 1) {
                if (!bVar19) {
                  FUN_144a127d2(local_a8,uVar17,0);
                  if (0 < (int)uStack_80) {
                    lVar11 = 0;
                    do {
                      *(int *)(local_a8[0] + lVar11 * 4) = (int)lVar11;
                      lVar11 = lVar11 + 1;
                    } while (lVar11 < (int)uStack_80);
                  }
                }
                piVar3 = local_b8;
                *(uint *)(local_a8[0] + -4 + (longlong)local_b8[8] * 4) = (uint)lVar18;
                iVar15 = local_b8[8];
                uVar12 = ~(uint)lVar18;
                iVar14 = iVar15 + uVar12;
                if (iVar14 != 0) {
                  if (0 < iVar14) {
                    iVar14 = 1;
                  }
                  memmove((void *)(*(longlong *)(local_b8 + 6) + lVar18 * 4),
                          (void *)(*(longlong *)(local_b8 + 6) + (longlong)(iVar15 - iVar14) * 4),
                          (longlong)iVar14 << 2);
                  iVar15 = piVar3[8];
                }
                piVar3[8] = iVar15 + -1;
                iVar15 = (int)uStack_80 + uVar12;
                if (iVar15 != 0) {
                  if (0 < iVar15) {
                    iVar15 = 1;
                  }
                  memmove(local_88 + lVar18 * 3,local_88 + (longlong)((int)uStack_80 - iVar15) * 3,
                          (longlong)iVar15 * 0x18);
                }
                uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_80 + -1);
                iVar15 = uVar12 + (int)uStack_90;
                if (iVar15 != 0) {
                  if (0 < iVar15) {
                    iVar15 = 1;
                  }
                  memmove((void *)(local_98 + lVar18 * 0x18),
                          (void *)(local_98 + (longlong)((int)uStack_90 - iVar15) * 0x18),
                          (longlong)iVar15 * 0x18);
                }
                uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + -1);
                bVar19 = true;
              }
              else {
                lVar11 = lVar18 * 0x18;
                dVar20 = 1.0 / (double)iVar15;
                dVar4 = *(double *)(local_98 + 0x10 + lVar11);
                dVar5 = *(double *)(local_98 + 8 + lVar11);
                local_88[lVar18 * 3] = dVar20 * *(double *)(local_98 + lVar11);
                local_88[lVar18 * 3 + 1] = dVar5 * dVar20;
                local_88[lVar18 * 3 + 2] = dVar4 * dVar20;
                *(undefined8 *)(local_98 + 0x10 + lVar11) = DAT_14c8464f0;
                uVar7 = DAT_14c8464e8;
                *(undefined8 *)(local_98 + lVar11) = DAT_14c8464e0;
                ((undefined8 *)(local_98 + lVar11))[1] = uVar7;
              }
              lVar18 = lVar18 + 1;
              uVar17 = (ulonglong)(int)uStack_80;
            } while (lVar18 < (longlong)uVar17);
            if ((bVar19) && (iVar15 = local_b8[4], (longlong)iVar15 != 0)) {
              lVar18 = *(longlong *)(local_b8 + 2);
              lVar11 = 0;
              do {
                *(undefined4 *)(lVar18 + lVar11) =
                     *(undefined4 *)(local_a8[0] + (longlong)*(int *)(lVar18 + lVar11) * 4);
                lVar11 = lVar11 + 4;
              } while ((longlong)iVar15 * 4 != lVar11);
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != local_ac);
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_88 != (double *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1485e9a74 FUN_1485e9a74 body=59 status=ok
// SIG undefined FUN_1485e9a74(void)

undefined8 FUN_1485e9a74(longlong *param_1)

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



// FUNCTION 1485e9bf8 FUN_1485e9bf8 body=59 status=ok
// SIG undefined FUN_1485e9bf8(void)

undefined8 FUN_1485e9bf8(longlong *param_1)

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



// FUNCTION 1485e9d4a FUN_1485e9d4a body=59 status=ok
// SIG undefined FUN_1485e9d4a(void)

undefined8 FUN_1485e9d4a(longlong *param_1)

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



// FUNCTION 1485e9e72 FUN_1485e9e72 body=59 status=ok
// SIG undefined FUN_1485e9e72(void)

undefined8 FUN_1485e9e72(longlong *param_1)

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



// FUNCTION 1485e9fa6 FUN_1485e9fa6 body=59 status=ok
// SIG undefined FUN_1485e9fa6(void)

undefined8 FUN_1485e9fa6(longlong *param_1)

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



// FUNCTION 1485ea048 FUN_1485ea048 body=102 status=ok
// SIG undefined FUN_1485ea048(void)

void FUN_1485ea048(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
  
  *param_1 = param_2;
  param_1[0x15] = 0;
  param_1[0x16] = 0x200000000;
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_3[4];
  uVar8 = param_3[5];
  uVar9 = param_3[8];
  uVar10 = param_3[9];
  uVar1 = param_3[10];
  uVar2 = param_3[6];
  *(undefined4 *)(param_1 + 0x16) = 1;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar2;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar1;
  return;
}



// FUNCTION 1485ea0ae FUN_1485ea0ae body=149 status=ok
// SIG undefined FUN_1485ea0ae(void)

void FUN_1485ea0ae(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb8)) {
      uVar5 = uVar4 / 0xb8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1485ea1f8 FUN_1485ea1f8 body=59 status=ok
// SIG undefined FUN_1485ea1f8(void)

undefined8 FUN_1485ea1f8(longlong *param_1)

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



// FUNCTION 1485ea29a FUN_1485ea29a body=744 status=ok
// SIG undefined FUN_1485ea29a(void)

void FUN_1485ea29a(uint *param_1,float *param_2,double *param_3,undefined8 *param_4)

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
  double dVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 in_XMM4 [16];
  undefined1 auVar33 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar34 [16];
  
  dVar13 = *param_3;
  if (0.0 <= dVar13) {
    uVar15 = *param_1;
    if (((dVar13 <= (double)(int)uVar15) && (dVar14 = param_3[1], 0.0 <= dVar14)) &&
       (uVar16 = param_1[1], dVar14 <= (double)(int)uVar16)) {
      auVar31._8_8_ = 0;
      auVar31._0_8_ = dVar14 + -0.5;
      auVar33 = roundsd(in_XMM4,auVar31,9);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = dVar13 + -0.5;
      auVar34 = roundsd(in_XMM5,auVar28,9);
      auVar30._0_8_ = dVar14 + 0.5;
      auVar30._8_8_ = 0;
      auVar31 = roundsd(auVar30,auVar30,9);
      auVar27._0_8_ = dVar13 + 0.5;
      auVar27._8_8_ = 0;
      auVar28 = roundsd(auVar27,auVar27,9);
      iVar21 = (int)auVar34._0_8_;
      iVar23 = (int)auVar33._0_8_;
      iVar25 = (int)auVar28._0_8_;
      dVar14 = (dVar14 + -0.5) - auVar33._0_8_;
      dVar13 = (dVar13 + -0.5) - auVar34._0_8_;
      if ((int)uVar15 <= iVar25) {
        iVar25 = 0;
      }
      iVar20 = 0;
      if ((int)auVar31._0_8_ < (int)uVar16) {
        iVar20 = (int)auVar31._0_8_;
      }
      lVar22 = (longlong)(int)((iVar23 >> 0x1f & uVar16) + iVar23) * (longlong)(int)uVar15 * 0x10 +
               *(longlong *)(param_1 + 2);
      lVar24 = (longlong)(int)((iVar21 >> 0x1f & uVar15) + iVar21) * 0x10;
      lVar18 = (longlong)iVar25 * 0x10;
      dVar32 = (DAT_14c846320 - dVar13) * (DAT_14c846328 - dVar14);
      fVar1 = *(float *)(lVar24 + 0xc + lVar22);
      fVar2 = *(float *)(lVar24 + 8 + lVar22);
      fVar3 = *(float *)(lVar24 + 4 + lVar22);
      lVar19 = (longlong)iVar20 * (longlong)(int)uVar15 * 0x10 + *(longlong *)(param_1 + 2);
      dVar29 = (DAT_14c846320 - dVar13) * dVar14;
      fVar4 = *(float *)(lVar24 + 0xc + lVar19);
      fVar5 = *(float *)(lVar24 + 8 + lVar19);
      fVar6 = *(float *)(lVar24 + 4 + lVar19);
      dVar26 = (DAT_14c846328 - dVar14) * dVar13;
      fVar7 = *(float *)(lVar18 + 0xc + lVar22);
      fVar8 = *(float *)(lVar18 + 8 + lVar22);
      fVar9 = *(float *)(lVar18 + 4 + lVar22);
      fVar10 = *(float *)(lVar18 + 0xc + lVar19);
      dVar13 = dVar13 * dVar14;
      fVar11 = *(float *)(lVar18 + 8 + lVar19);
      fVar12 = *(float *)(lVar18 + 4 + lVar19);
      *param_2 = (float)((double)*(float *)(lVar18 + lVar19) * dVar13) +
                 (float)((double)*(float *)(lVar18 + lVar22) * dVar26) +
                 (float)((double)*(float *)(lVar24 + lVar19) * dVar29) +
                 (float)((double)*(float *)(lVar24 + lVar22) * dVar32);
      param_2[1] = (float)((double)fVar12 * dVar13) +
                   (float)((double)fVar9 * dVar26) +
                   (float)((double)fVar6 * dVar29) + (float)((double)fVar3 * dVar32);
      param_2[2] = (float)((double)fVar11 * dVar13) +
                   (float)((double)fVar8 * dVar26) +
                   (float)((double)fVar5 * dVar29) + (float)((double)fVar2 * dVar32);
      param_2[3] = (float)((double)fVar10 * dVar13) +
                   (float)((double)fVar7 * dVar26) +
                   (float)((double)fVar4 * dVar29) + (float)((double)fVar1 * dVar32);
      return;
    }
  }
  uVar17 = param_4[1];
  *(undefined8 *)param_2 = *param_4;
  *(undefined8 *)(param_2 + 2) = uVar17;
  return;
}



// FUNCTION 1485ea582 FUN_1485ea582 body=733 status=ok
// SIG undefined FUN_1485ea582(void)

void FUN_1485ea582(int *param_1,float *param_2,double *param_3,undefined8 *param_4)

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
  double dVar13;
  double dVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 in_XMM4 [16];
  undefined1 auVar33 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar34 [16];
  
  dVar13 = *param_3;
  if (0.0 <= dVar13) {
    iVar15 = *param_1;
    if (((dVar13 <= (double)iVar15) && (dVar14 = param_3[1], 0.0 <= dVar14)) &&
       (dVar14 <= (double)param_1[1])) {
      auVar31._8_8_ = 0;
      auVar31._0_8_ = dVar14 + -0.5;
      auVar33 = roundsd(in_XMM4,auVar31,9);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = dVar13 + -0.5;
      auVar34 = roundsd(in_XMM5,auVar28,9);
      auVar30._0_8_ = dVar14 + 0.5;
      auVar30._8_8_ = 0;
      auVar31 = roundsd(auVar30,auVar30,9);
      auVar27._0_8_ = dVar13 + 0.5;
      auVar27._8_8_ = 0;
      auVar28 = roundsd(auVar27,auVar27,9);
      uVar24 = (uint)auVar34._0_8_;
      uVar21 = (uint)auVar33._0_8_;
      dVar14 = (dVar14 + -0.5) - auVar33._0_8_;
      dVar13 = (dVar13 + -0.5) - auVar34._0_8_;
      if ((int)uVar24 < 1) {
        uVar24 = 0;
      }
      uVar19 = 0;
      if (0 < (int)uVar21) {
        uVar19 = (ulonglong)uVar21;
      }
      iVar16 = (int)auVar28._0_8_;
      if (iVar15 + -1 < (int)auVar28._0_8_) {
        iVar16 = iVar15 + -1;
      }
      iVar22 = param_1[1] + -1;
      if ((int)auVar31._0_8_ <= iVar22) {
        iVar22 = (int)auVar31._0_8_;
      }
      lVar20 = uVar19 * (longlong)iVar15 * 0x10 + *(longlong *)(param_1 + 2);
      lVar25 = (ulonglong)uVar24 * 0x10;
      lVar18 = (longlong)iVar16 * 0x10;
      dVar32 = (DAT_14c846320 - dVar13) * (DAT_14c846328 - dVar14);
      fVar1 = *(float *)(lVar25 + 0xc + lVar20);
      fVar2 = *(float *)(lVar25 + 8 + lVar20);
      fVar3 = *(float *)(lVar25 + 4 + lVar20);
      lVar23 = (longlong)iVar22 * (longlong)iVar15 * 0x10 + *(longlong *)(param_1 + 2);
      dVar29 = (DAT_14c846320 - dVar13) * dVar14;
      fVar4 = *(float *)(lVar25 + 0xc + lVar23);
      fVar5 = *(float *)(lVar25 + 8 + lVar23);
      fVar6 = *(float *)(lVar25 + 4 + lVar23);
      dVar26 = (DAT_14c846328 - dVar14) * dVar13;
      fVar7 = *(float *)(lVar18 + 0xc + lVar20);
      fVar8 = *(float *)(lVar18 + 8 + lVar20);
      fVar9 = *(float *)(lVar18 + 4 + lVar20);
      fVar10 = *(float *)(lVar18 + 0xc + lVar23);
      dVar13 = dVar13 * dVar14;
      fVar11 = *(float *)(lVar18 + 8 + lVar23);
      fVar12 = *(float *)(lVar18 + 4 + lVar23);
      *param_2 = (float)((double)*(float *)(lVar18 + lVar23) * dVar13) +
                 (float)((double)*(float *)(lVar18 + lVar20) * dVar26) +
                 (float)((double)*(float *)(lVar25 + lVar23) * dVar29) +
                 (float)((double)*(float *)(lVar25 + lVar20) * dVar32);
      param_2[1] = (float)((double)fVar12 * dVar13) +
                   (float)((double)fVar9 * dVar26) +
                   (float)((double)fVar6 * dVar29) + (float)((double)fVar3 * dVar32);
      param_2[2] = (float)((double)fVar11 * dVar13) +
                   (float)((double)fVar8 * dVar26) +
                   (float)((double)fVar5 * dVar29) + (float)((double)fVar2 * dVar32);
      param_2[3] = (float)((double)fVar10 * dVar13) +
                   (float)((double)fVar7 * dVar26) +
                   (float)((double)fVar4 * dVar29) + (float)((double)fVar1 * dVar32);
      return;
    }
  }
  uVar17 = param_4[1];
  *(undefined8 *)param_2 = *param_4;
  *(undefined8 *)(param_2 + 2) = uVar17;
  return;
}



// FUNCTION 1485ea91c FUN_1485ea91c body=59 status=ok
// SIG undefined FUN_1485ea91c(void)

undefined8 FUN_1485ea91c(longlong *param_1)

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



// FUNCTION 1485eaa2a FUN_1485eaa2a body=59 status=ok
// SIG undefined FUN_1485eaa2a(void)

undefined8 FUN_1485eaa2a(longlong *param_1)

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



// FUNCTION 1485eaacb FUN_1485eaacb body=73 status=ok
// SIG undefined FUN_1485eaacb(void)

void FUN_1485eaacb(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1485eab14 FUN_1485eab14 body=73 status=ok
// SIG undefined FUN_1485eab14(void)

void FUN_1485eab14(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1485eab5e FUN_1485eab5e body=112 status=ok
// SIG undefined FUN_1485eab5e(void)

void FUN_1485eab5e(longlong param_1,uint param_2)

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



// FUNCTION 1485eabce FUN_1485eabce body=112 status=ok
// SIG undefined FUN_1485eabce(void)

void FUN_1485eabce(longlong param_1,uint param_2)

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



// FUNCTION 1485eac3e FUN_1485eac3e body=147 status=ok
// SIG undefined FUN_1485eac3e(void)

void FUN_1485eac3e(longlong param_1,int param_2)

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



// FUNCTION 1485eacd2 FUN_1485eacd2 body=147 status=ok
// SIG undefined FUN_1485eacd2(void)

void FUN_1485eacd2(longlong param_1,int param_2)

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



// FUNCTION 1485ead66 FUN_1485ead66 body=136 status=ok
// SIG undefined FUN_1485ead66(void)

undefined8 *
FUN_1485ead66(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14afa41b0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  lVar1 = *param_4;
  param_1[4] = lVar1;
  param_1[6] = 0;
  if (lVar1 != 0) {
    plVar2 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_4[2];
    }
    (**(code **)*plVar2)(plVar2,param_1 + 6);
  }
  param_1[0xc] = 0x3fb999999999999a;
  param_1[0xd] = 0;
  if (*param_4 != 0) {
    plVar2 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return param_1;
}



// FUNCTION 1485eadee FUN_1485eadee body=71 status=ok
// SIG undefined FUN_1485eadee(void)

undefined8 * FUN_1485eadee(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14afa41b0;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


