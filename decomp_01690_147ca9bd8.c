// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147ca9bd8 FUN_147ca9bd8 body=243 status=ok
// SIG undefined FUN_147ca9bd8(void)

bool FUN_147ca9bd8(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  int local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_144a8054c();
  local_40 = *param_1;
  local_38 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_38 = 0;
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,&local_50);
    if (&local_50 == param_2) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_50;
      local_50 = 0;
      *(undefined4 *)(param_2 + 1) = local_48;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_44;
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_30 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca9ccc FUN_147ca9ccc body=243 status=ok
// SIG undefined FUN_147ca9ccc(void)

bool FUN_147ca9ccc(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  int local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_144a8054c();
  local_40 = *param_1;
  local_38 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_38 = 0;
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x30))(local_30,&local_50);
    if (&local_50 == param_2) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_50;
      local_50 = 0;
      *(undefined4 *)(param_2 + 1) = local_48;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_44;
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_30 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca9dc0 FUN_147ca9dc0 body=243 status=ok
// SIG undefined FUN_147ca9dc0(void)

bool FUN_147ca9dc0(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  int local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_144a8054c();
  local_40 = *param_1;
  local_38 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_38 = 0;
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x38))(local_30,&local_50);
    if (&local_50 == param_2) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_50;
      local_50 = 0;
      *(undefined4 *)(param_2 + 1) = local_48;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_44;
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return local_30 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca9eb4 FUN_147ca9eb4 body=174 status=ok
// SIG undefined FUN_147ca9eb4(void)

bool FUN_147ca9eb4(undefined8 *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_144a8054c();
  local_38 = *param_1;
  local_30 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_30 = 0;
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_28);
  if (local_28 != (longlong *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*local_28 + 0x98))(local_28);
    *param_2 = *puVar3;
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ca9f64 FUN_147ca9f64 body=182 status=ok
// SIG undefined FUN_147ca9f64(void)

bool FUN_147ca9f64(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_144a8054c();
  local_38 = *param_1;
  local_30 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_30 = 0;
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_28);
  if (local_28 != (longlong *)0x0) {
    lVar3 = (**(code **)(*local_28 + 0x98))(local_28);
    FUN_144a787a6(param_2,lVar3 + 8);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147caa01c FUN_147caa01c body=182 status=ok
// SIG undefined FUN_147caa01c(void)

bool FUN_147caa01c(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_144a8054c();
  local_38 = *param_1;
  local_30 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_30 = 0;
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_28);
  if (local_28 != (longlong *)0x0) {
    lVar3 = (**(code **)(*local_28 + 0x98))(local_28);
    FUN_144a787a6(param_2,lVar3 + 0x28);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147caa0d4 FUN_147caa0d4 body=185 status=ok
// SIG undefined FUN_147caa0d4(void)

bool FUN_147caa0d4(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_144a8054c();
  local_38 = *param_1;
  local_30 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_30 = 0;
  }
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_28);
  if (local_28 != (longlong *)0x0) {
    lVar3 = (**(code **)(*local_28 + 0x98))(local_28);
    FUN_144a787a6(param_2,lVar3 + 0xa8);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147caa18e FUN_147caa18e body=101 status=ok
// SIG undefined FUN_147caa18e(void)

undefined4 FUN_147caa18e(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  cVar1 = FUN_147ca9dc0();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_146871b6a(local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147caa1f4 FUN_147caa1f4 body=119 status=ok
// SIG undefined FUN_147caa1f4(void)

undefined8 * FUN_147caa1f4(undefined8 *param_1)

{
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x10;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0xffffffffffffffff;
  param_1[0x26] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 0x42000000;
  *(byte *)((longlong)param_1 + 0x13c) = *(byte *)((longlong)param_1 + 0x13c) & 0xf0;
  param_1[0x28] = 0x41000000;
  param_1[0x29] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  return param_1;
}



// FUNCTION 147caa26c FUN_147caa26c body=201 status=ok
// SIG undefined FUN_147caa26c(void)

void FUN_147caa26c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = DAT_14c846338;
  *param_1 = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0xc) = DAT_14c846330;
  *(undefined4 *)(param_1 + 4) = DAT_14c846338;
  param_1[3] = DAT_14c846330;
  *(undefined8 *)((longlong)param_1 + 0x24) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_14c846338;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (*(int *)((longlong)param_1 + 0xfc) != 0) {
    FUN_1479ccbf2(param_1 + 6,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0xffffffffffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0x42000000;
  param_1[0x28] = 0x41000000;
  param_1[0x29] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  return;
}



// FUNCTION 147caa336 FUN_147caa336 body=338 status=ok
// SIG undefined FUN_147caa336(void)

float FUN_147caa336(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar3 = 0.0;
  if (2 < (longlong)*(int *)(param_1 + 0xf8)) {
    pfVar1 = (float *)(param_1 + 0x30);
    if (*(float **)(param_1 + 0xf0) != (float *)0x0) {
      pfVar1 = *(float **)(param_1 + 0xf0);
    }
    lVar2 = 0;
    fVar6 = pfVar1[3] - *pfVar1;
    fVar5 = pfVar1[4] - pfVar1[1];
    fVar7 = pfVar1[5] - pfVar1[2];
    do {
      fVar9 = *(float *)((longlong)pfVar1 + lVar2 + 0x20) - pfVar1[2];
      fVar11 = *(float *)((longlong)pfVar1 + lVar2 + 0x1c) - pfVar1[1];
      fVar10 = *(float *)((longlong)pfVar1 + lVar2 + 0x18) - *pfVar1;
      fVar4 = fVar6 * fVar11 - fVar10 * fVar5;
      fVar8 = fVar7 * fVar10 - fVar9 * fVar6;
      fVar6 = fVar5 * fVar9 - fVar11 * fVar7;
      fVar3 = fVar3 + SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar8 * fVar8) * 0.5;
      lVar2 = lVar2 + 0xc;
      fVar6 = fVar10;
      fVar5 = fVar11;
      fVar7 = fVar9;
    } while ((longlong)*(int *)(param_1 + 0xf8) * 0xc + -0x18 != lVar2);
  }
  return fVar3;
}



// FUNCTION 147caa488 FUN_147caa488 body=215 status=ok
// SIG undefined FUN_147caa488(void)

undefined4 * FUN_147caa488(undefined4 *param_1,undefined4 *param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte bVar19;
  longlong lVar20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_147cbe2ac(param_1 + 0xc,param_2 + 0xc);
  param_1[0x40] = param_2[0x40];
  lVar20 = *(longlong *)(param_2 + 0x42);
  if (DAT_14c950c29 == 1) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x42);
    }
  }
  bVar19 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x42) = lVar20;
  lVar20 = *(longlong *)(param_2 + 0x44);
  if ((bVar19 & 1) != 0) {
    if (lVar20 == 0) {
      lVar20 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar20 = *(longlong *)(param_2 + 0x44);
    }
  }
  *(longlong *)(param_1 + 0x44) = lVar20;
  uVar12 = *(undefined8 *)(param_2 + 0x48);
  uVar13 = *(undefined8 *)(param_2 + 0x4a);
  uVar14 = *(undefined8 *)(param_2 + 0x4c);
  uVar15 = *(undefined8 *)(param_2 + 0x4e);
  uVar16 = *(undefined8 *)(param_2 + 0x50);
  uVar17 = *(undefined8 *)(param_2 + 0x51);
  uVar18 = *(undefined8 *)(param_2 + 0x53);
  *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_2 + 0x46);
  *(undefined8 *)(param_1 + 0x48) = uVar12;
  *(undefined8 *)(param_1 + 0x4a) = uVar13;
  *(undefined8 *)(param_1 + 0x4c) = uVar14;
  *(undefined8 *)(param_1 + 0x4e) = uVar15;
  *(undefined8 *)(param_1 + 0x50) = uVar16;
  *(undefined8 *)(param_1 + 0x51) = uVar17;
  *(undefined8 *)(param_1 + 0x53) = uVar18;
  return param_1;
}



// FUNCTION 147caa560 FUN_147caa560 body=1733 status=ok
// SIG undefined FUN_147caa560(void)

undefined8
FUN_147caa560(undefined8 *param_1,double *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  bool bVar16;
  longlong *plVar17;
  int iVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  uint uVar26;
  float *pfVar27;
  longlong *plVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_188 [40];
  undefined8 *local_160;
  undefined8 *local_158;
  longlong *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  longlong *local_138;
  code *local_130;
  code **local_128;
  longlong local_120;
  byte local_118;
  undefined8 local_110;
  undefined1 local_101;
  code *local_100;
  undefined1 *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_128 = &local_100;
  local_130 = FUN_140036a08;
  local_160 = param_3;
  local_158 = param_4;
  lVar11 = FUN_144a773aa(&local_130,&DAT_14c7585d0);
  local_130 = (code *)(lVar11 + 0x10);
  local_128 = *(code ***)(lVar11 + 0x10);
  local_120 = *(longlong *)(lVar11 + 0x20);
  local_118 = 0;
  local_110 = *(undefined8 *)(lVar11 + 0x28);
  *(code ***)(lVar11 + 0x28) = &local_130;
  *(int *)(lVar11 + 0x30) = *(int *)(lVar11 + 0x30) + 1;
  lVar11 = -1;
  if (-1 < (longlong)*(int *)(param_1 + 0x1f)) {
    lVar11 = (longlong)*(int *)(param_1 + 0x1f) * 4;
  }
  local_f8 = &local_101;
  local_100 = FUN_140036a08;
  lVar12 = FUN_144a773aa(&local_100,&DAT_14c7585d0);
  puVar1 = (ulonglong *)(lVar12 + 0x10);
  puVar19 = (undefined4 *)(*(longlong *)(lVar12 + 0x10) + 0xfU & 0xfffffffffffffff0);
  uVar20 = lVar11 + (longlong)puVar19;
  if (*(ulonglong *)(lVar12 + 0x18) < uVar20) {
    FUN_140023dd8(puVar1,(int)lVar11 + 0x10);
    puVar19 = (undefined4 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    uVar20 = lVar11 + (longlong)puVar19;
  }
  *puVar1 = uVar20;
  if (0 < *(int *)(param_1 + 0x1f)) {
    lVar11 = 0;
    bVar16 = true;
    bVar10 = false;
    puVar22 = puVar19;
LAB_147caa6e7:
    lVar12 = lVar11 * 3 + 2;
    puVar23 = puVar22;
    do {
      puVar22 = puVar23 + 1;
      pfVar27 = (float *)param_1[0x1e];
      if ((float *)param_1[0x1e] == (float *)0x0) {
        pfVar27 = (float *)(param_1 + 6);
      }
      fVar29 = (float)(((double)pfVar27[lVar12] * param_2[2] +
                       (double)pfVar27[lVar12 + -2] * *param_2 +
                       (double)pfVar27[lVar12 + -1] * param_2[1]) - param_2[3]);
      if (0.0 <= fVar29) {
        *puVar23 = 0;
        if (0.25 < fVar29) goto LAB_147caa784;
      }
      else {
        *puVar23 = 1;
        if (fVar29 < -0.25) {
          bVar10 = true;
        }
      }
      lVar11 = lVar11 + 1;
      uVar26 = *(uint *)(param_1 + 0x1f);
      lVar12 = lVar12 + 3;
      puVar23 = puVar22;
      if ((int)uVar26 <= lVar11) {
        if (!bVar16) {
          if (!bVar10) goto LAB_147caa7ab;
          goto LAB_147caa8e9;
        }
        uVar21 = 2;
        if (bVar10) goto LAB_147caa7d0;
        break;
      }
    } while( true );
  }
  uVar21 = 0;
  goto LAB_147caa7d0;
LAB_147caa784:
  lVar11 = lVar11 + 1;
  uVar26 = *(uint *)(param_1 + 0x1f);
  bVar16 = false;
  if ((int)uVar26 <= lVar11) goto code_r0x000147caa799;
  goto LAB_147caa6e7;
code_r0x000147caa799:
  if (bVar10) {
LAB_147caa8e9:
    uVar21 = 3;
    if (local_160 != (undefined8 *)0x0) {
      puVar24 = local_158;
      puVar25 = local_160;
      if (0 < (int)uVar26) {
        puVar15 = local_160 + 6;
        local_138 = local_160 + 0x1e;
        local_140 = local_158 + 6;
        plVar28 = local_158 + 0x1e;
        pfVar27 = (float *)(param_1 + 6);
        if ((float *)param_1[0x1e] != (float *)0x0) {
          pfVar27 = (float *)param_1[0x1e];
        }
        lVar11 = 0;
        pfVar13 = pfVar27 + (ulonglong)uVar26 * 3 + -3;
        iVar18 = puVar19[(ulonglong)uVar26 - 1];
        local_150 = plVar28;
        local_148 = puVar15;
        do {
          iVar8 = puVar19[lVar11];
          if (iVar8 == iVar18) {
            plVar17 = plVar28;
            if (iVar18 == 0) goto LAB_147caaad6;
LAB_147caa961:
            puVar14 = local_140;
            iVar18 = *(int *)(puVar24 + 0x1f);
            *(uint *)(puVar24 + 0x1f) = iVar18 + 1U;
            plVar28 = plVar17;
            if (*(uint *)((longlong)puVar24 + 0xfc) < iVar18 + 1U) {
              FUN_1479ccacc(local_140,iVar18);
              puVar15 = local_148;
              plVar17 = local_150;
              puVar24 = local_158;
              puVar25 = local_160;
              plVar28 = local_150;
            }
          }
          else {
            dVar4 = param_2[3];
            dVar5 = param_2[2];
            dVar6 = param_2[1];
            dVar7 = *param_2;
            fVar29 = pfVar27[2];
            fVar32 = pfVar13[2];
            fVar2 = *pfVar27;
            fVar3 = pfVar27[1];
            fVar31 = *pfVar13;
            fVar33 = pfVar13[1];
            iVar9 = *(int *)(puVar25 + 0x1f);
            lVar12 = (longlong)iVar9;
            *(uint *)(puVar25 + 0x1f) = iVar9 + 1U;
            if (*(uint *)((longlong)puVar25 + 0xfc) < iVar9 + 1U) {
              FUN_1479ccacc(puVar15,iVar9);
              puVar15 = local_148;
              puVar24 = local_158;
              puVar25 = local_160;
              plVar28 = local_150;
            }
            fVar30 = ((float)dVar4 -
                     (fVar32 * (float)dVar5 + fVar31 * (float)dVar7 + fVar33 * (float)dVar6)) /
                     ((float)dVar5 * (fVar29 - fVar32) +
                     (float)dVar7 * (fVar2 - fVar31) + (float)dVar6 * (fVar3 - fVar33));
            fVar32 = (fVar29 - fVar32) * fVar30 + fVar32;
            fVar33 = (fVar3 - fVar33) * fVar30 + fVar33;
            fVar31 = fVar30 * (fVar2 - fVar31) + fVar31;
            puVar14 = (undefined8 *)*local_138;
            if ((undefined8 *)*local_138 == (undefined8 *)0x0) {
              puVar14 = puVar15;
            }
            *(float *)((longlong)puVar14 + lVar12 * 0xc) = fVar31;
            *(float *)((longlong)puVar14 + lVar12 * 0xc + 4) = fVar33;
            *(float *)((longlong)puVar14 + lVar12 * 0xc + 8) = fVar32;
            iVar9 = *(int *)(puVar24 + 0x1f);
            lVar12 = (longlong)iVar9;
            *(uint *)(puVar24 + 0x1f) = iVar9 + 1U;
            if (*(uint *)((longlong)puVar24 + 0xfc) < iVar9 + 1U) {
              FUN_1479ccacc(local_140,iVar9);
              puVar15 = local_148;
              puVar24 = local_158;
              puVar25 = local_160;
              plVar28 = local_150;
            }
            puVar14 = (undefined8 *)*plVar28;
            if ((undefined8 *)*plVar28 == (undefined8 *)0x0) {
              puVar14 = local_140;
            }
            *(float *)((longlong)puVar14 + lVar12 * 0xc) = fVar31;
            *(float *)((longlong)puVar14 + lVar12 * 0xc + 4) = fVar33;
            *(float *)((longlong)puVar14 + lVar12 * 0xc + 8) = fVar32;
            plVar17 = plVar28;
            if (iVar18 == 0) goto LAB_147caa961;
LAB_147caaad6:
            iVar18 = *(int *)(puVar25 + 0x1f);
            *(uint *)(puVar25 + 0x1f) = iVar18 + 1U;
            plVar17 = local_138;
            puVar14 = puVar15;
            if (*(uint *)((longlong)puVar25 + 0xfc) < iVar18 + 1U) {
              FUN_1479ccacc(puVar15,iVar18);
              puVar15 = local_148;
              plVar17 = local_138;
              puVar24 = local_158;
              puVar25 = local_160;
              plVar28 = local_150;
              puVar14 = local_148;
            }
          }
          if ((undefined8 *)*plVar17 != (undefined8 *)0x0) {
            puVar14 = (undefined8 *)*plVar17;
          }
          *(float *)((longlong)puVar14 + (longlong)iVar18 * 0xc + 8) = pfVar27[2];
          *(undefined8 *)((longlong)puVar14 + (longlong)iVar18 * 0xc) = *(undefined8 *)pfVar27;
          lVar11 = lVar11 + 1;
          pfVar13 = pfVar27;
          pfVar27 = pfVar27 + 3;
          iVar18 = iVar8;
        } while ((int)lVar11 < *(int *)(param_1 + 0x1f));
      }
      *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(param_1 + 1);
      *puVar25 = *param_1;
      *(undefined8 *)((longlong)puVar25 + 0xc) = *(undefined8 *)((longlong)param_1 + 0xc);
      *(undefined4 *)((longlong)puVar25 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(undefined4 *)(puVar25 + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(param_1 + 1);
      *puVar24 = *param_1;
      *(undefined8 *)((longlong)puVar24 + 0xc) = *(undefined8 *)((longlong)param_1 + 0xc);
      *(undefined4 *)((longlong)puVar24 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(undefined4 *)(puVar24 + 0x20) = *(undefined4 *)(param_1 + 0x20);
      uVar21 = 3;
    }
  }
  else {
LAB_147caa7ab:
    uVar21 = 1;
  }
LAB_147caa7d0:
  if (local_118 == 0) {
    local_118 = 1;
    *(int *)(local_130 + 0x20) = *(int *)(local_130 + 0x20) + -1;
    if (local_120 != *(longlong *)(local_130 + 0x10)) {
      FUN_14004673c();
    }
    *(code ***)local_130 = local_128;
    *(undefined8 *)(local_130 + 0x18) = local_110;
    local_128 = (code **)0x0;
  }
  if ((local_118 & 1) == 0) {
    local_118 = 1;
    *(int *)(local_130 + 0x20) = *(int *)(local_130 + 0x20) + -1;
    if (local_120 != *(longlong *)(local_130 + 0x10)) {
      FUN_14004673c();
    }
    *(code ***)local_130 = local_128;
    *(undefined8 *)(local_130 + 0x18) = local_110;
  }
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar21;
}



// FUNCTION 147caac26 FUN_147caac26 body=486 status=ok
// SIG undefined FUN_147caac26(void)

undefined4 FUN_147caac26(longlong param_1,float *param_2,float *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_338 [32];
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  longlong local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_338;
  uVar2 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_9c = 0x10;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0xffffffff;
  uStack_6c = 0xffffffff;
  uStack_68 = 0xffffffff;
  uStack_64 = 0;
  local_60 = 0x42000000;
  local_58 = 0x41000000;
  uStack_54 = 0;
  uStack_50 = 0x3f800000;
  uStack_4c = 0x3f800000;
  local_48 = 0x3f800000;
  local_208 = 0;
  local_200 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_1fc = 0x10;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0xffffffff;
  uStack_1cc = 0xffffffff;
  uStack_1c8 = 0xffffffff;
  uStack_1c4 = 0;
  local_1c0 = 0x42000000;
  local_1b8 = 0x41000000;
  uStack_1b4 = 0;
  uStack_1b0 = 0x3f800000;
  uStack_1ac = 0x3f800000;
  local_1a8 = 0x3f800000;
  FUN_147caa26c(&local_198);
  FUN_147caa26c(&local_2f8);
  local_308 = (double)param_2[2];
  local_310 = (double)param_2[1];
  local_318 = (double)*param_2;
  local_300 = (double)param_3[2] * local_308 +
              (double)*param_3 * local_318 + (double)param_3[1] * local_310;
  iVar1 = FUN_147caa560(param_1,&local_318,&local_198,&local_2f8);
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      FUN_147caa488(param_1,&local_198);
    }
    uVar2 = *(undefined4 *)(param_1 + 0xf8);
  }
  if (local_208 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147caae0e FUN_147caae0e body=329 status=ok
// SIG undefined FUN_147caae0e(void)

undefined4 * FUN_147caae0e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
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
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte bVar21;
  undefined4 *puVar22;
  undefined4 *_Src;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = param_2[9];
  uVar12 = param_2[10];
  uVar13 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar11;
  param_1[10] = uVar12;
  param_1[0xb] = uVar13;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  iVar1 = param_2[0x3e];
  puVar22 = *(undefined4 **)(param_2 + 0x3c);
  param_1[0x3e] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x3f] = 0x10;
  }
  else {
    _Src = param_2 + 0xc;
    if (puVar22 != (undefined4 *)0x0) {
      _Src = puVar22;
    }
    FUN_147bd0aca(param_1 + 0xc,iVar1,0);
    puVar22 = *(undefined4 **)(param_1 + 0x3c);
    if (*(undefined4 **)(param_1 + 0x3c) == (undefined4 *)0x0) {
      puVar22 = param_1 + 0xc;
    }
    memcpy(puVar22,_Src,(longlong)iVar1 * 0xc);
  }
  param_1[0x40] = param_2[0x40];
  lVar2 = *(longlong *)(param_2 + 0x42);
  *(longlong *)(param_1 + 0x42) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar21 = DAT_14c950c29;
  lVar2 = *(longlong *)(param_2 + 0x44);
  *(longlong *)(param_1 + 0x44) = lVar2;
  if ((lVar2 != 0 & bVar21) == 1) {
    FUN_1456cec3c();
  }
  uVar14 = *(undefined8 *)(param_2 + 0x46);
  uVar15 = *(undefined8 *)(param_2 + 0x48);
  uVar16 = *(undefined8 *)(param_2 + 0x4a);
  uVar17 = *(undefined8 *)(param_2 + 0x4c);
  uVar18 = *(undefined8 *)(param_2 + 0x4e);
  uVar19 = *(undefined8 *)(param_2 + 0x50);
  uVar20 = *(undefined8 *)(param_2 + 0x53);
  *(undefined8 *)(param_1 + 0x51) = *(undefined8 *)(param_2 + 0x51);
  *(undefined8 *)(param_1 + 0x53) = uVar20;
  *(undefined8 *)(param_1 + 0x4e) = uVar18;
  *(undefined8 *)(param_1 + 0x50) = uVar19;
  *(undefined8 *)(param_1 + 0x4a) = uVar16;
  *(undefined8 *)(param_1 + 0x4c) = uVar17;
  *(undefined8 *)(param_1 + 0x46) = uVar14;
  *(undefined8 *)(param_1 + 0x48) = uVar15;
  return param_1;
}



// FUNCTION 147caaf58 FUN_147caaf58 body=525 status=ok
// SIG undefined FUN_147caaf58(void)

void FUN_147caaf58(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_1e8 [32];
  uint local_1c8;
  uint local_1c4;
  undefined **local_1c0;
  longlong *local_1b8;
  undefined ***local_1b0;
  undefined8 **local_1a8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1a8 = &local_1b0;
  local_1c0 = &PTR_FUN_149e37810;
  local_1b0 = &local_1c0;
  local_1b8 = param_2;
  switchD_143c3d4dc::caseD_20();
  plVar1 = (longlong *)(param_1 + 0x28);
  if (((*(byte *)(param_2 + 5) & 1) != 0) && ((int)param_2[8] < 0x1d9)) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_1 + 0x30) * 0x158,
               (longlong)*(int *)(param_1 + 0x34) * 0x158);
    local_1c8 = *(uint *)(param_1 + 0x30);
    puVar4 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar2) {
      local_1c4 = local_1c8;
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1c4,4);
      }
      else {
        FUN_14572512c(param_2,&local_1c4);
      }
    }
    else {
      local_1c4 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar2;
    }
    puVar4 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1c8,4);
      }
      else {
        FUN_14572512c(param_2,&local_1c8);
      }
    }
    else {
      local_1c8 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar2;
    }
    local_1c0 = (undefined **)0x0;
    (**(code **)(*param_2 + 0x150))(param_2);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_147cab176(plVar1);
      lVar5 = (longlong)(int)local_1c4;
      iVar3 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar3 + local_1c4;
      if ((uint)(*(int *)(param_1 + 0x34) - iVar3) < local_1c4) {
        FUN_147cc1620(plVar1);
      }
      memset((void *)((longlong)iVar3 * 0x158 + *plVar1),0,lVar5 * 0x158);
    }
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar5 = 0;
      lVar6 = 0;
      do {
        FUN_147bc9b62(param_2,*(longlong *)(param_1 + 0x28) + lVar5);
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x158;
      } while (lVar6 < *(int *)(param_1 + 0x30));
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_1e8);
  }
  if ((local_30 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    FUN_147cc1466(param_2,plVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cab176 FUN_147cab176 body=68 status=ok
// SIG undefined FUN_147cab176(void)

void FUN_147cab176(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145b24e95(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147cc16b4(param_1,param_2);
  return;
}



// FUNCTION 147cab1bc FUN_147cab1bc body=192 status=ok
// SIG undefined FUN_147cab1bc(void)

void FUN_147cab1bc(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  int local_a8;
  int local_a4;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = *param_2;
  local_b8 = *(undefined4 *)(param_2 + 1);
  FUN_147cab27d(&local_b0,&local_c0);
  FUN_1408e3634(param_1,local_a4,param_3);
  if (0 < local_a4) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      uVar3 = (ulonglong)(uint)(*(int *)(param_1 + 0x30) * (int)lVar2);
      *(undefined4 *)(lVar1 + 8 + uVar3) = *(undefined4 *)(local_b0 + 8 + local_a8 * lVar2);
      *(undefined8 *)(lVar1 + uVar3) = *(undefined8 *)(local_b0 + local_a8 * lVar2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < local_a4);
  }
  FUN_147cab400(&local_b0);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cab27d FUN_147cab27d body=298 status=ok
// SIG undefined FUN_147cab27d(void)

longlong * FUN_147cab27d(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  param_1[0xe] = 0;
  param_1[0xf] = 0x100000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar1 = (int)param_2[1];
  if (0 < iVar1) {
    lVar6 = *param_2;
    *param_1 = lVar6;
    *(undefined4 *)(param_1 + 1) = 0x74;
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    param_1[2] = lVar6 + 0xc;
    *(undefined4 *)(param_1 + 3) = 0x74;
    *(int *)((longlong)param_1 + 0x1c) = iVar1;
    param_1[4] = lVar6 + 0x18;
    *(undefined4 *)(param_1 + 5) = 0x74;
    *(int *)((longlong)param_1 + 0x2c) = iVar1;
    param_1[6] = lVar6 + 0x24;
    *(undefined4 *)(param_1 + 7) = 0x74;
    *(int *)((longlong)param_1 + 0x3c) = iVar1;
    lVar6 = 0x30;
    do {
      lVar3 = param_2[1];
      lVar2 = *param_2;
      iVar1 = (int)param_1[0xf];
      lVar5 = (longlong)iVar1;
      *(uint *)(param_1 + 0xf) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x7c) < iVar1 + 1U) {
        FUN_147cbe370(param_1 + 0xc,iVar1);
      }
      plVar4 = (longlong *)param_1[0xe];
      if ((longlong *)param_1[0xe] == (longlong *)0x0) {
        plVar4 = param_1 + 0xc;
      }
      plVar4[lVar5 * 2] = lVar2 + lVar6;
      *(undefined4 *)(plVar4 + lVar5 * 2 + 1) = 0x74;
      *(int *)((longlong)plVar4 + lVar5 * 0x10 + 0xc) = (int)lVar3;
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x70);
    lVar6 = param_2[1];
    param_1[0x10] = *param_2 + 0x70;
    *(undefined4 *)(param_1 + 0x11) = 0x74;
    *(int *)((longlong)param_1 + 0x8c) = (int)lVar6;
    FUN_147cbe327(param_1);
  }
  return param_1;
}



// FUNCTION 147cab3a8 FUN_147cab3a8 body=88 status=ok
// SIG undefined FUN_147cab3a8(void)

void FUN_147cab3a8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  FUN_1408e3634(param_1,*(undefined4 *)((longlong)param_2 + 0xc));
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    lVar3 = 0;
    do {
      lVar1 = *param_2;
      lVar4 = (int)param_2[1] * lVar3;
      lVar2 = *(longlong *)(param_1 + 0x28);
      uVar5 = (ulonglong)(uint)(*(int *)(param_1 + 0x30) * (int)lVar3);
      *(undefined4 *)(lVar2 + 8 + uVar5) = *(undefined4 *)(lVar1 + 8 + lVar4);
      *(undefined8 *)(lVar2 + uVar5) = *(undefined8 *)(lVar1 + lVar4);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)((longlong)param_2 + 0xc));
  }
  return;
}



// FUNCTION 147cab400 FUN_147cab400 body=62 status=ok
// SIG undefined FUN_147cab400(void)

void FUN_147cab400(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147cab43e FUN_147cab43e body=64 status=ok
// SIG undefined FUN_147cab43e(void)

void FUN_147cab43e(longlong param_1,longlong param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  if (*(int *)(param_2 + 0x34) != 0) {
    FUN_1408e3634();
    memcpy(*(void **)(param_1 + 0x28),*(void **)(param_2 + 0x28),
           (ulonglong)(uint)(*(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30)));
    return;
  }
  return;
}



// FUNCTION 147cab47e FUN_147cab47e body=326 status=ok
// SIG undefined FUN_147cab47e(void)

void FUN_147cab47e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  lVar2 = local_58;
  uVar1 = local_5c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_58 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_58);
  }
  uVar3 = uStack_50;
  local_40 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  local_38 = uVar3;
  FUN_145bd965a(param_1 + 0x3d0,&local_40,uVar1);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cab5e4 FUN_147cab5e4 body=167 status=ok
// SIG undefined FUN_147cab5e4(void)

undefined8 * FUN_147cab5e4(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  memset(param_1 + 2,0,0x90);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0x44);
  lVar1 = -0x10;
  do {
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x20) =
         *(undefined4 *)((longlong)param_2 + lVar1 + 0x20);
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x50) =
         *(undefined4 *)((longlong)param_2 + lVar1 + 0x30);
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x80) =
         *(undefined4 *)((longlong)param_2 + lVar1 + 0x40);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 147cab68b FUN_147cab68b body=243 status=ok
// SIG undefined FUN_147cab68b(void)

longlong * FUN_147cab68b(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_1447712aa();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0xc),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_147cc1723(param_1,param_2 + 0x10);
  FUN_147cc1723(param_1,param_2 + 0x20);
  FUN_147cc1723(param_1,param_2 + 0x30);
  iVar2 = (int)param_1[8];
  if (0x159 < iVar2) {
    FUN_1400751dc(param_1,param_2 + 0x40);
    iVar2 = (int)param_1[8];
  }
  if (0x127 < iVar2) {
    puVar3 = (undefined4 *)(param_2 + 0x44);
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar3,4);
      }
      else {
        FUN_14572512c(param_1,puVar3);
      }
    }
    else {
      *puVar3 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  return param_1;
}



// FUNCTION 147cab77e FUN_147cab77e body=232 status=ok
// SIG undefined FUN_147cab77e(void)

longlong * FUN_147cab77e(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  FUN_1447712aa();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0xc),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  uVar2 = FUN_147a3a7b3(param_1,param_2 + 0x10);
  uVar2 = FUN_147a3a7b3(uVar2,param_2 + 0x40);
  FUN_147a3a7b3(uVar2,param_2 + 0x70);
  FUN_1400751dc(param_1,param_2 + 0xa0);
  puVar3 = (undefined4 *)(param_2 + 0xa4);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar3,4);
    }
    else {
      FUN_14572512c(param_1,puVar3);
    }
  }
  else {
    *puVar3 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 147cab866 FUN_147cab866 body=84 status=ok
// SIG undefined FUN_147cab866(void)

undefined1 * FUN_147cab866(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x38] = 0;
  FUN_147cab8ba(param_1 + 0x40,&DAT_14c8464e0,0);
  FUN_147cab8ba(param_1 + 0xf0,&DAT_14c8464e0,0);
  return param_1;
}



// FUNCTION 147cab8ba FUN_147cab8ba body=217 status=ok
// SIG undefined FUN_147cab8ba(void)

undefined8 * FUN_147cab8ba(undefined8 *param_1,undefined8 *param_2,double param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = 0;
  param_1[4] = param_3;
  param_1[5] = param_3;
  param_1[6] = param_3;
  param_1[7] = 0;
  param_1[10] = 0;
  dVar4 = param_3 * 0.5 * 1.0625;
  param_1[8] = dVar4;
  param_1[9] = param_3 - dVar4;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_3 * 0.0005053442362742975;
  FUN_147cc178e(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x11);
  *(uint *)(param_1 + 0x11) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x8c) < iVar3 + 1U) {
    FUN_147cc1866(param_1 + 0x10,iVar3);
  }
  puVar1 = (undefined8 *)(param_1[0x10] + (longlong)iVar3 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 147cab994 FUN_147cab994 body=100 status=ok
// SIG undefined FUN_147cab994(void)

void FUN_147cab994(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_147cbec08(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147cab9f8 FUN_147cab9f8 body=1730 status=ok
// SIG undefined FUN_147cab9f8(void)

longlong * FUN_147cab9f8(longlong *param_1,byte *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  ulonglong *puVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cb60);
  if ((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      if ((*(byte *)(param_1 + 5) & 4) == 0) goto LAB_147cabaeb;
      piVar4 = *(int **)param_1[1];
      if ((int *)((undefined8 *)param_1[1])[1] < piVar4 + 1) {
        local_98 = CONCAT44(local_98._4_4_,(uint)*param_2);
        (**(code **)(*param_1 + 0x170))(param_1,&local_98,4);
        if (1 < (uint)local_98) {
          FUN_14572541c(param_1);
        }
        *param_2 = (uint)local_98 != 0;
        if ((uint)local_98 == 0) goto LAB_147cabaeb;
      }
      else {
        *param_2 = *piVar4 != 0;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        if ((*param_2 & 1) == 0) goto LAB_147cabaeb;
      }
      FUN_140119d96(param_1,param_2 + 8);
      uVar8 = local_c8._4_4_;
      local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
      puVar5 = (ulonglong *)param_1[1];
      puVar2 = (undefined4 *)*puVar5 + 1;
      if ((undefined4 *)puVar5[1] < puVar2) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_c8,4);
        }
        else {
          FUN_14572512c(param_1,&local_c8);
        }
      }
      else {
        local_c8 = CONCAT44(uVar8,*(undefined4 *)*puVar5);
        *puVar5 = (ulonglong)puVar2;
      }
      local_9c = 9;
      puVar5 = (ulonglong *)param_1[1];
      puVar2 = (undefined4 *)*puVar5 + 1;
      if ((undefined4 *)puVar5[1] < puVar2) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_9c,4);
        }
        else {
          FUN_14572512c(param_1);
        }
      }
      else {
        local_9c = *(undefined4 *)*puVar5;
        *puVar5 = (ulonglong)puVar2;
      }
      local_98 = 0;
      uStack_90 = 0;
      lVar12 = param_1[0xd];
      if ((((lVar12 == 0) || (*(longlong *)(lVar12 + 0x10) == 0)) ||
          (cVar6 = (**(code **)(**(longlong **)(lVar12 + 8) + 0xb8))(), cVar6 != '\0')) &&
         ((longlong)*(int *)(param_2 + 200) != 0)) {
        plVar10 = *(longlong **)(param_2 + 0xc0);
        plVar14 = plVar10 + (longlong)*(int *)(param_2 + 200) * 2;
        do {
          if ((longlong)(int)plVar10[1] != 0) {
            puVar11 = (undefined8 *)*plVar10;
            puVar9 = puVar11 + (longlong)(int)plVar10[1] * 0x16;
            do {
              lVar12 = (longlong)(int)uStack_90;
              uVar8 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
              if (uStack_90._4_4_ < uVar8) {
                FUN_147cbec34(&local_98);
              }
              puVar3 = (undefined8 *)(local_98 + lVar12 * 0xb0);
              memset(puVar3 + 2,0,0x90);
              *puVar3 = *puVar11;
              *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar11 + 1);
              *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)((longlong)puVar11 + 0xc);
              memcpy(puVar3 + 2,puVar11 + 2,0x90);
              *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)(puVar11 + 0x14);
              *(undefined4 *)((longlong)puVar3 + 0xa4) = *(undefined4 *)((longlong)puVar11 + 0xa4);
              puVar11 = puVar11 + 0x16;
            } while (puVar11 != puVar9);
          }
          plVar10 = plVar10 + 2;
        } while (plVar10 != plVar14);
      }
      FUN_147cc18e2(param_1);
      local_b8 = 0;
      uStack_b0 = 0;
      lVar12 = param_1[0xd];
      if ((((lVar12 == 0) || (*(longlong *)(lVar12 + 0x10) == 0)) ||
          (cVar6 = (**(code **)(**(longlong **)(lVar12 + 8) + 0xb8))(), cVar6 != '\0')) &&
         ((longlong)*(int *)(param_2 + 0x178) != 0)) {
        plVar10 = *(longlong **)(param_2 + 0x170);
        plVar14 = plVar10 + (longlong)*(int *)(param_2 + 0x178) * 2;
        do {
          if ((longlong)(int)plVar10[1] != 0) {
            puVar11 = (undefined8 *)*plVar10;
            puVar9 = puVar11 + (longlong)(int)plVar10[1] * 0x16;
            do {
              lVar12 = (longlong)(int)uStack_b0;
              uVar8 = (int)uStack_b0 + 1;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
              if (uStack_b0._4_4_ < uVar8) {
                FUN_147cbec34(&local_b8);
              }
              puVar3 = (undefined8 *)(local_b8 + lVar12 * 0xb0);
              memset(puVar3 + 2,0,0x90);
              *puVar3 = *puVar11;
              *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar11 + 1);
              *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)((longlong)puVar11 + 0xc);
              memcpy(puVar3 + 2,puVar11 + 2,0x90);
              *(undefined4 *)(puVar3 + 0x14) = *(undefined4 *)(puVar11 + 0x14);
              *(undefined4 *)((longlong)puVar3 + 0xa4) = *(undefined4 *)((longlong)puVar11 + 0xa4);
              puVar11 = puVar11 + 0x16;
            } while (puVar11 != puVar9);
          }
          plVar10 = plVar10 + 2;
        } while (plVar10 != plVar14);
      }
      FUN_147cc18e2(param_1,&local_b8);
      lVar12 = local_98;
      if (local_b8 != 0) {
        FUN_1400020a8();
        lVar12 = local_98;
      }
    }
    else {
      puVar5 = (ulonglong *)param_1[1];
      puVar1 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar1) {
        local_98 = (ulonglong)local_98._4_4_ << 0x20;
        (**(code **)(*param_1 + 0x170))(param_1,&local_98,4);
        uVar8 = (uint)local_98;
        if (1 < (uint)local_98) {
          FUN_14572541c(param_1);
          uVar8 = (uint)local_98;
        }
      }
      else {
        uVar8 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      if (uVar8 == 0) goto LAB_147cabaeb;
      local_68 = 0;
      FUN_140119d96(param_1);
      local_9c = 0;
      puVar5 = (ulonglong *)param_1[1];
      puVar2 = (undefined4 *)*puVar5 + 1;
      if ((undefined4 *)puVar5[1] < puVar2) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_9c,4);
        }
        else {
          FUN_14572512c(param_1,&local_9c);
        }
      }
      else {
        local_9c = *(undefined4 *)*puVar5;
        *puVar5 = (ulonglong)puVar2;
      }
      FUN_1436555c6(param_2,&local_98);
      local_a0 = 4;
      iVar7 = FUN_1448332aa(param_1,&DAT_149e3cb60);
      if (0 < iVar7) {
        puVar5 = (ulonglong *)param_1[1];
        puVar2 = (undefined4 *)*puVar5 + 1;
        if ((undefined4 *)puVar5[1] < puVar2) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_a0,4);
          }
          else {
            FUN_14572512c(param_1,&local_a0);
          }
        }
        else {
          local_a0 = *(undefined4 *)*puVar5;
          *puVar5 = (ulonglong)puVar2;
        }
      }
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_1436557de(param_1,local_a0);
      cVar6 = FUN_1449277db(DAT_14c760db4);
      if ((cVar6 != '\0') && (0 < (int)uStack_b0)) {
        lVar12 = 0;
        lVar13 = 0;
        do {
          FUN_147cac2ce(param_2 + 0x40,local_b8 + lVar12);
          lVar13 = lVar13 + 1;
          lVar12 = lVar12 + 0xb0;
        } while (lVar13 < (int)uStack_b0);
      }
      local_c8 = 0;
      uStack_c0 = 0;
      if (0x127 < (int)param_1[8]) {
        FUN_1436557de(param_1,local_a0,&local_c8);
      }
      cVar6 = FUN_1449277db(DAT_14c760db4);
      if ((cVar6 == '\0') && (0 < (int)uStack_c0)) {
        lVar12 = 0;
        lVar13 = 0;
        do {
          FUN_147cac2ce(param_2 + 0xf0,local_c8 + lVar12);
          lVar13 = lVar13 + 1;
          lVar12 = lVar12 + 0xb0;
        } while (lVar13 < (int)uStack_c0);
      }
      FUN_14365595a(param_2);
      lVar12 = local_b8;
      if (local_c8 != 0) {
        FUN_1400020a8();
        lVar12 = local_b8;
      }
    }
    if (lVar12 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar12 = (longlong)
             ((*(int *)(param_2 + 0x17c) + *(int *)(param_2 + 0xcc)) * 0x10 +
              (*(int *)(param_2 + 0x15c) + *(int *)(param_2 + 0xac)) * 8 +
             (*(int *)(*(longlong *)(param_2 + 0x150) + 4) +
             *(int *)(*(longlong *)(param_2 + 0xa0) + 4)) * 0xb0);
    (**(code **)(*param_1 + 0x10))(param_1,lVar12,lVar12);
  }
LAB_147cabaeb:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147cac0bb FUN_147cac0bb body=262 status=ok
// SIG undefined FUN_147cac0bb(void)

longlong * FUN_147cac0bb(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_44 = (uint)(*param_2 != 0);
    (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    uVar3 = local_44;
    if (1 < local_44) {
      FUN_14572541c(param_1);
      uVar3 = local_44;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (uVar3 != 0) {
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      puVar4 = (undefined1 *)*param_2;
    }
    else {
      puVar4 = (undefined1 *)FUN_14001cc68(0x1a0,0x10);
      *puVar4 = 0;
      puVar4[0x38] = 0;
      FUN_147cab8ba(puVar4 + 0x40,&DAT_14c8464e0,0);
      FUN_147cab8ba(puVar4 + 0xf0,&DAT_14c8464e0,0);
      *param_2 = (longlong)puVar4;
    }
    FUN_147cab9f8(param_1,puVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cac1c2 FUN_147cac1c2 body=268 status=ok
// SIG undefined FUN_147cac1c2(void)

undefined8 * FUN_147cac1c2(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_2;
  puVar3 = param_1;
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == param_2) {
    FUN_147cbefa8(param_1 + 0x10,param_2 + 0x10);
  }
  else {
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    param_1[0xc] = param_2[0xc];
    param_2[0xc] = 0;
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
    param_2[0xd] = 0;
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    param_1[0xe] = param_2[0xe];
    param_2[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
    param_2[0xf] = 0;
    FUN_147cbefa8(param_1 + 0x10,param_2 + 0x10);
    if (param_1[0x12] != 0) {
      FUN_1400020a8();
    }
    param_1[0x12] = param_2[0x12];
    param_2[0x12] = 0;
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
    param_2[0x13] = 0;
  }
  param_1[0x14] = param_2[0x14];
  return param_1;
}



// FUNCTION 147cac2ce FUN_147cac2ce body=183 status=ok
// SIG undefined FUN_147cac2ce(void)

void FUN_147cac2ce(undefined8 param_1,float *param_2)

{
  undefined1 auStack_98 [32];
  float *local_78;
  longlong *local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  double local_38;
  undefined8 local_30;
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = local_28;
  local_28[0] = 0;
  local_28[1] = 0;
  local_58 = (double)param_2[2];
  local_60 = (double)param_2[1];
  local_68 = (double)*param_2;
  local_50 = 0;
  local_48 = (double)param_2[3];
  local_30 = 0;
  local_78 = param_2;
  local_40 = local_48;
  local_38 = local_48;
  FUN_147cc1b38(SUB84(local_48,0),0,param_1);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cac386 FUN_147cac386 body=243 status=ok
// SIG undefined FUN_147cac386(void)

void FUN_147cac386(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 1) {
    FUN_147cc2106(param_1 + 0x60);
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  iVar3 = *(int *)(param_1 + 0x8c);
  FUN_147cbec08(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((iVar3 < 1) && (*(int *)(param_1 + 0x8c) != 1)) {
    FUN_147cc2196(plVar1);
  }
  if (*(int *)(param_1 + 0x9c) < 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_14480809c(param_1 + 0x90,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(int *)(param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_14480809c(param_1 + 0x70,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  FUN_147cc178e(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar3 + 1U) {
    FUN_147cc1866(plVar1,iVar3);
  }
  puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar3 * 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}



// FUNCTION 147cac47a FUN_147cac47a body=238 status=ok
// SIG undefined FUN_147cac47a(void)

void FUN_147cac47a(undefined8 *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  double *local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  double local_28;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)*param_1 == '\x01') {
    local_58 = param_2[2] - (double)param_1[5];
    local_60 = param_2[1] - (double)param_1[4];
    local_68 = *param_2 - (double)param_1[3];
    local_70 = &local_28;
    local_50 = 0;
    local_48 = DAT_14c8464e0;
    uStack_40 = DAT_14c8464e8;
    local_38 = DAT_14c8464f0;
    local_30 = 0;
    local_98 = &local_90;
    local_90 = param_5;
    local_88 = param_6;
    local_80 = param_4;
    local_78 = param_3;
    local_28 = local_68;
    local_20 = local_60;
    local_18 = local_58;
    FUN_143660210(param_1[2],0,param_1[2],&local_68);
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cac56a FUN_147cac56a body=1189 status=ok
// SIG undefined FUN_147cac56a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cac56a(undefined8 *param_1,double *param_2,int *param_3,int *param_4,int *param_5,
                  longlong *param_6,longlong *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  longlong lVar33;
  int iVar34;
  longlong lVar35;
  int iVar36;
  longlong lVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  float fVar41;
  undefined1 auStack_178 [32];
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(char *)*param_1 == '\x01') {
    dStack_110 = param_2[3];
    local_108 = param_2[4];
    dStack_100 = param_2[5];
    local_f8 = *(undefined4 *)(param_2 + 6);
    uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_f0 = *(undefined4 *)(param_2 + 7);
    uStack_ec = *(undefined4 *)((longlong)param_2 + 0x3c);
    local_148 = param_2[2] - (double)param_1[5];
    local_150 = param_2[1] - (double)param_1[4];
    local_158 = *param_2 - (double)param_1[3];
    local_128 = local_158;
    dStack_120 = local_150;
    local_118 = local_148;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cafa778) {
      FUN_144b3d300(&DAT_14cafa778);
      if (DAT_14cafa778 == -1) {
        DAT_14cafa768 = 0;
        _DAT_14cafa770 = 0;
        atexit((_func_5014 *)&LAB_1436559d6);
        _Init_thread_footer(&DAT_14cafa778);
      }
    }
    uVar30 = DAT_14cafa774;
    _DAT_14cafa770 = (ulonglong)DAT_14cafa774 << 0x20;
    if ((int)uVar30 < 100) {
      FUN_147cc2222();
    }
    FUN_14366085e(param_1[2],0,param_1[2],&local_128);
    if (0 < DAT_14cafa770) {
      iVar5 = param_4[1];
      iVar6 = param_5[2];
      iVar7 = param_5[1];
      iVar8 = *param_4;
      local_130 = (double)CONCAT44(uStack_f4,local_f8);
      local_148 = local_148 - local_130;
      local_140 = dStack_100;
      local_150 = local_150 - dStack_100;
      local_138 = local_108;
      local_158 = local_158 - local_108;
      iVar34 = *param_3;
      iVar36 = param_3[1];
      iVar9 = *param_5;
      iVar32 = param_3[2];
      lVar33 = 0;
      iVar31 = DAT_14cafa770;
      do {
        if (0 < iVar32) {
          pfVar10 = *(float **)(DAT_14cafa768 + lVar33 * 8);
          fVar41 = pfVar10[3] * pfVar10[3];
          fVar3 = pfVar10[1];
          fVar4 = *pfVar10;
          dVar13 = (double)iVar34;
          dVar40 = (double)iVar36;
          dVar14 = (double)iVar32;
          dVar12 = local_148 - (double)pfVar10[2];
          iVar31 = 0;
          do {
            if (0 < iVar36) {
              iVar32 = 0;
              dVar15 = local_150 - (double)fVar3;
              do {
                if (0 < iVar34) {
                  iVar36 = 0;
                  dVar16 = local_158 - (double)fVar4;
                  do {
                    fVar38 = (float)(dVar12 * dVar12 + dVar16 * dVar16 + dVar15 * dVar15);
                    if (fVar38 < fVar41) {
                      fVar39 = fVar38 * (-1.0 / (fVar41 * fVar41)) + 1.0 / fVar41;
                      fVar38 = pfVar10[5];
                      fVar17 = pfVar10[6];
                      fVar18 = pfVar10[7];
                      fVar19 = pfVar10[0x10];
                      fVar20 = pfVar10[0x11];
                      fVar21 = pfVar10[0x12];
                      fVar22 = pfVar10[0x13];
                      fVar23 = pfVar10[0x1c];
                      fVar24 = pfVar10[0x1d];
                      fVar25 = pfVar10[0x1e];
                      fVar26 = pfVar10[0x1f];
                      lVar11 = *param_7;
                      lVar35 = (longlong)
                               ((param_4[1] * iVar31 + iVar32) * *param_4 +
                                (iVar5 * iVar6 + iVar7) * iVar8 + iVar9 + iVar36);
                      lVar37 = lVar35 * 0x30;
                      pfVar1 = (float *)(lVar11 + lVar37);
                      fVar27 = pfVar1[1];
                      fVar28 = pfVar1[2];
                      fVar29 = pfVar1[3];
                      pfVar2 = (float *)(lVar11 + lVar37);
                      *pfVar2 = pfVar10[4] * fVar39 + *pfVar1;
                      pfVar2[1] = fVar38 * fVar39 + fVar27;
                      pfVar2[2] = fVar17 * fVar39 + fVar28;
                      pfVar2[3] = fVar18 * fVar39 + fVar29;
                      pfVar1 = (float *)(lVar11 + 0x10 + lVar37);
                      fVar38 = pfVar1[1];
                      fVar17 = pfVar1[2];
                      fVar18 = pfVar1[3];
                      pfVar2 = (float *)(lVar11 + 0x10 + lVar37);
                      *pfVar2 = fVar19 * fVar39 + *pfVar1;
                      pfVar2[1] = fVar20 * fVar39 + fVar38;
                      pfVar2[2] = fVar21 * fVar39 + fVar17;
                      pfVar2[3] = fVar22 * fVar39 + fVar18;
                      pfVar1 = (float *)(lVar11 + 0x20 + lVar37);
                      fVar38 = pfVar1[1];
                      fVar17 = pfVar1[2];
                      fVar18 = pfVar1[3];
                      pfVar2 = (float *)(lVar11 + 0x20 + lVar37);
                      *pfVar2 = fVar39 * fVar23 + *pfVar1;
                      pfVar2[1] = fVar39 * fVar24 + fVar38;
                      pfVar2[2] = fVar39 * fVar25 + fVar17;
                      pfVar2[3] = fVar39 * fVar26 + fVar18;
                      *(float *)(*param_6 + lVar35 * 4) = fVar39 + *(float *)(*param_6 + lVar35 * 4)
                      ;
                      iVar34 = *param_3;
                    }
                    dVar16 = dVar16 + local_108 / dVar13 + local_108 / dVar13;
                    iVar36 = iVar36 + 1;
                  } while (iVar36 < iVar34);
                  iVar36 = param_3[1];
                }
                dVar15 = dVar15 + dStack_100 / dVar40 + dStack_100 / dVar40;
                iVar32 = iVar32 + 1;
              } while (iVar32 < iVar36);
              iVar32 = param_3[2];
            }
            dVar12 = dVar12 + local_130 / dVar14 + local_130 / dVar14;
            iVar31 = iVar31 + 1;
          } while (iVar31 < iVar32);
          iVar31 = DAT_14cafa770;
        }
        lVar33 = lVar33 + 1;
      } while (lVar33 < iVar31);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147caca10 FUN_147caca10 body=495 status=ok
// SIG undefined FUN_147caca10(void)

void FUN_147caca10(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong *local_c8;
  longlong *local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x88);
  if (lVar3 != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x80);
    local_c0 = plVar2 + lVar3 * 2;
    do {
      lVar3 = plVar2[1];
      local_c8 = plVar2;
      if ((longlong)(int)lVar3 != 0) {
        lVar1 = *plVar2;
        lVar4 = 0;
        do {
          if (param_3 == '\0') {
            local_98 = *(float *)(lVar1 + 0x70 + lVar4) * 3.5449078 * 0.089793555;
            local_9c = *(float *)(lVar1 + 0x40 + lVar4) * 3.5449078 * 0.089793555;
            local_a0 = *(float *)(lVar1 + 0x10 + lVar4) * 3.5449078 * 0.089793555;
            local_94 = 0x3db7e5af;
          }
          else {
            local_a0 = *(float *)(lVar1 + 0xa4 + lVar4);
            local_94 = 0x3f800000;
            local_9c = local_a0;
            local_98 = local_a0;
          }
          local_a8 = (double)*(float *)(lVar1 + 8 + lVar4) + *(double *)(param_1 + 0x28);
          local_b0 = (double)*(float *)(lVar1 + 4 + lVar4) + *(double *)(param_1 + 0x20);
          local_b8 = (double)*(float *)(lVar1 + lVar4) + *(double *)(param_1 + 0x18);
          local_d8 = 0;
          (**(code **)(*param_2 + 0x40))(param_2,&local_b8,&local_a0,0x41200000);
          lVar4 = lVar4 + 0xb0;
        } while ((longlong)(int)lVar3 * 0xb0 - lVar4 != 0);
      }
      plVar2 = local_c8 + 2;
    } while (plVar2 != local_c0);
  }
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cacc00 FUN_147cacc00 body=320 status=ok
// SIG undefined FUN_147cacc00(void)

uint FUN_147cacc00(longlong param_1,double *param_2)

{
  double *pdVar1;
  uint uVar2;
  
  pdVar1 = *(double **)(param_1 + 0x10);
  if (pdVar1 == (double *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = -(uint)(((param_2[1] - param_2[4] <= pdVar1[1] + pdVar1[5] &&
                     pdVar1[1] - pdVar1[5] <= param_2[1] + param_2[4]) &&
                    (*param_2 - param_2[3] <= *pdVar1 + pdVar1[4] &&
                    *pdVar1 - pdVar1[4] <= *param_2 + param_2[3])) &&
                   (param_2[2] - param_2[5] <= pdVar1[2] + pdVar1[6] &&
                   pdVar1[2] - pdVar1[6] <= param_2[2] + param_2[5]));
  }
  return uVar2 & 0xffffff01;
}



// FUNCTION 147cacd44 FUN_147cacd44 body=210 status=ok
// SIG undefined FUN_147cacd44(void)

longlong FUN_147cacd44(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  uint local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined4 local_4a;
  undefined1 local_46;
  undefined1 local_45;
  undefined2 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = 1;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_58 = 0;
  local_4a = 0x1010001;
  local_46 = 2;
  local_44 = 0xff00;
  local_40 = 0;
  uStack_38 = L"VolumetricLightmap";
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  local_54 = *param_2;
  local_4c = *(undefined2 *)(param_2 + 1);
  local_45 = param_3;
  FUN_144a8af26(param_1,&local_78);
  *(undefined4 *)(param_1 + 0x38) = local_40;
  *(undefined4 *)(param_1 + 0x3c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_38;
  *(undefined4 *)(param_1 + 0x44) = uStack_38._4_4_;
  *(undefined4 *)(param_1 + 0x48) = (undefined4)local_30;
  *(undefined4 *)(param_1 + 0x4c) = local_30._4_4_;
  *(undefined4 *)(param_1 + 0x50) = (undefined4)uStack_28;
  *(undefined4 *)(param_1 + 0x54) = uStack_28._4_4_;
  *(undefined8 *)(param_1 + 0x58) = local_20;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cace17 FUN_147cace17 body=263 status=ok
// SIG undefined FUN_147cace17(void)

longlong FUN_147cace17(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140077068(param_1,param_2 + 8);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  }
  uVar2 = FUN_141165238();
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    if ((*(byte *)(param_1 + 0x28) & 4) == 0) goto LAB_147cace5d;
    FUN_1414aa4be(uVar2,local_48,*(undefined1 *)(param_2 + 0x1c));
    FUN_14029eeae(local_48,&local_38);
    FUN_14021219d(param_1,&local_38);
  }
  else {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_14021219d(param_1,&local_38);
    puVar3 = local_38;
    if ((int)uStack_30 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_40,puVar3,1);
    uVar1 = FUN_141715768(uVar2,local_40,0);
    *(undefined1 *)(param_2 + 0x1c) = uVar1;
    FUN_147cacf1f(param_2);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_147cace5d:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147cacf1f FUN_147cacf1f body=102 status=ok
// SIG undefined FUN_147cacf1f(void)

void FUN_147cacf1f(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x1c) == '\x02') {
    if (0 < *(int *)(param_1 + 0x10) / DAT_14c873488) {
      lVar4 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 8);
        uVar1 = *(undefined1 *)(lVar3 + lVar4 * 4);
        uVar2 = *(undefined1 *)(lVar3 + 3 + lVar4 * 4);
        *(undefined1 *)(lVar3 + lVar4 * 4) = *(undefined1 *)(lVar3 + 2 + lVar4 * 4);
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 1 + lVar4 * 4) =
             *(undefined1 *)(lVar3 + 1 + lVar4 * 4);
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 2 + lVar4 * 4) = uVar1;
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 3 + lVar4 * 4) = uVar2;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 0x10) / DAT_14c873488);
    }
    *(undefined1 *)(param_1 + 0x1c) = 0x25;
  }
  return;
}



// FUNCTION 147cacf85 FUN_147cacf85 body=196 status=ok
// SIG undefined FUN_147cacf85(void)

longlong * FUN_147cacf85(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_24 = (uint)(*param_2 != 0);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    uVar3 = local_24;
    if (1 < local_24) {
      FUN_14572541c(param_1);
      uVar3 = local_24;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (uVar3 != 0) {
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      lVar4 = *param_2;
    }
    else {
      lVar4 = FUN_14001cc68(0x330,0x10);
      FUN_147cad04a(lVar4);
      *param_2 = lVar4;
    }
    FUN_14365636b(param_1,lVar4);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cad04a FUN_147cad04a body=353 status=ok
// SIG undefined FUN_147cad04a(void)

void FUN_147cad04a(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14aa51ac0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xb] = &PTR_FUN_14aa581e0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6d) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = &PTR_FUN_14aa581e0;
  *(undefined8 *)((longlong)param_1 + 0xb5) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  lVar2 = 0xf8;
  do {
    *(undefined ***)((longlong)param_1 + lVar2 + -0x20) = &PTR_FUN_14aa581e0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0xb) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    *(undefined1 *)((longlong)param_1 + lVar2 + 0x10) = 0;
    lVar2 = lVar2 + 0x38;
  } while (lVar2 != 0x248);
  param_1[0x45] = &PTR_FUN_14aa581e0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23d) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = &PTR_FUN_14aa581e0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x275) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x53] = &PTR_FUN_14aa597b0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x57] = &PTR_FUN_14aa5a670;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  return;
}



// FUNCTION 147cad1ac FUN_147cad1ac body=366 status=ok
// SIG undefined FUN_147cad1ac(void)

void FUN_147cad1ac(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) == 5) {
    uVar2 = DAT_14c760db4;
  }
  if ((int)uVar2 < 3) {
    if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  iVar3 = *(int *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x50)) {
    iVar3 = *(int *)(param_1 + 0x50);
  }
  if (iVar3 < *(int *)(param_1 + 0x54)) {
    iVar3 = *(int *)(param_1 + 0x54);
  }
  if (0 < iVar3) {
    local_38 = *(undefined4 *)(param_1 + 0x54);
    local_40 = *(undefined8 *)(param_1 + 0x4c);
    FUN_1436559e8(param_1 + 0x58);
  }
  iVar3 = *(int *)(param_1 + 0x94);
  if (*(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x98)) {
    iVar3 = *(int *)(param_1 + 0x98);
  }
  if (iVar3 < *(int *)(param_1 + 0x9c)) {
    iVar3 = *(int *)(param_1 + 0x9c);
  }
  if (0 < iVar3) {
    puVar1 = (undefined8 *)(param_1 + 0x94);
    local_48 = *(undefined4 *)(param_1 + 0x9c);
    local_50 = *puVar1;
    FUN_1436559e8(param_1 + 0xa0);
    lVar4 = 0;
    do {
      local_58 = *(undefined4 *)(param_1 + 0x9c);
      local_60 = *puVar1;
      FUN_1436559e8(param_1 + 0xd8 + lVar4,&local_60);
      lVar4 = lVar4 + 0x38;
    } while (lVar4 != 0x150);
    if (0 < *(int *)(param_1 + 0x238)) {
      local_68 = *(undefined4 *)(param_1 + 0x9c);
      local_70 = *puVar1;
      FUN_1436559e8(param_1 + 0x228);
    }
    local_78 = *(undefined4 *)(param_1 + 0x9c);
    local_80 = *puVar1;
    FUN_1436559e8(param_1 + 0x260);
  }
  FUN_147cad332(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 147cad332 FUN_147cad332 body=1719 status=ok
// SIG undefined FUN_147cad332(void)

void FUN_147cad332(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  void *_Src;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_6f8 [32];
  undefined *local_6d8;
  undefined1 *local_6d0;
  undefined8 *local_6c8;
  longlong local_6c0;
  int local_6b4;
  int local_6b0;
  int local_6ac;
  void *local_6a8;
  undefined8 uStack_6a0;
  undefined ***local_698;
  undefined4 local_690;
  undefined8 local_688;
  undefined4 local_680;
  undefined8 local_678;
  undefined4 local_670;
  undefined1 local_668 [504];
  undefined8 local_470;
  undefined4 local_468;
  undefined1 local_460 [472];
  undefined8 uStack_288;
  undefined4 auStack_280 [2];
  undefined8 uStack_278;
  undefined1 auStack_270 [8];
  undefined1 local_268 [8];
  undefined4 local_260 [2];
  undefined **local_258;
  undefined8 local_250;
  undefined1 auStack_248 [8];
  undefined1 uStack_240;
  uint uStack_23f;
  undefined3 uStack_23b;
  undefined4 uStack_238;
  undefined4 local_234;
  undefined8 uStack_230;
  undefined1 local_228;
  undefined8 local_220;
  undefined4 local_218;
  longlong local_210;
  undefined1 local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined1 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined1 local_1b8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_6f8;
  if (DAT_14caff0d8 == '\x01') {
    if ((DAT_14caff068 != 0) || (*(longlong *)(param_1 + 0x248) == 0)) goto LAB_147cad5ce;
    local_680 = DAT_14caff0c0;
    local_688 = DAT_14caff0b8;
    FUN_143655dba(&DAT_14caff048);
    FUN_143656188(&DAT_14caff048);
  }
  else {
    DAT_14cafeebc = (byte)DAT_14c760db4;
    DAT_14caff0dc = *(int *)(param_1 + 0x90) + 1;
    local_670 = *(undefined4 *)(param_1 + 0x9c);
    local_678 = *(undefined8 *)(param_1 + 0x94);
    FUN_147cafc6a(&local_678,param_1 + 0xa0);
    DAT_14caff0d8 = '\x01';
  }
  local_258 = (undefined **)0xffffffffffffffff;
  local_250 = CONCAT44(local_250._4_4_,0xffffffff);
  auStack_248._0_5_ = (undefined5)DAT_14cafeee0;
  stack0xfffffffffffffdbd = CONCAT13(1,(int3)((ulonglong)DAT_14cafeee0 >> 0x28));
  uStack_23f = uStack_23f & 0xffffff;
  uStack_23b = 0;
  uStack_238 = 0x70;
  local_234 = 0;
  local_228 = 0;
  local_220 = 0xffffffffffffffff;
  local_218 = 0xffffffff;
  local_210 = DAT_14caff068;
  local_208 = 1;
  local_204 = 0x7000000000;
  local_1fc = 0;
  local_1f0 = 0;
  local_1e8 = 0xffffffffffffffff;
  local_1e0 = 0xffffffff;
  local_1d8 = DAT_14caff0a0;
  local_1d0 = 1;
  local_1cc = 0x7000000000;
  local_1c4 = 0;
  local_1b8 = 0;
  lVar9 = 200;
  do {
    *(undefined8 *)(auStack_270 + lVar9) = 0;
    *(undefined8 *)((longlong)local_260 + lVar9 + -8) = 0;
    *(undefined8 *)((longlong)local_260 + lVar9) = 0;
    *(undefined8 *)((longlong)&local_258 + lVar9) = 0;
    *(undefined8 *)((longlong)&local_250 + lVar9) = 0;
    *(undefined8 *)(auStack_248 + lVar9) = 0;
    *(undefined8 *)((longlong)&uStack_278 + lVar9) = 0xffffffffffffffff;
    *(undefined4 *)(auStack_270 + lVar9) = 0xffffffff;
    *(undefined4 *)((longlong)&local_258 + lVar9) = 0;
    lVar9 = lVar9 + 0x38;
  } while (lVar9 != 0x218);
  lVar9 = 0xd8;
  do {
    uVar5 = *(undefined8 *)(lVar9 + 0x14cafee40);
    *(undefined8 *)((longlong)&uStack_288 + lVar9) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)auStack_280 + lVar9) = 0xffffffff;
    *(undefined8 *)((longlong)&uStack_278 + lVar9) = uVar5;
    auStack_270[lVar9] = 1;
    *(undefined8 *)(auStack_270 + lVar9 + 4) = 0x7000000000;
    *(undefined4 *)((longlong)local_260 + lVar9 + -4) = 0;
    if (*(char *)((longlong)&local_258 + lVar9) == '\x01') {
      *(undefined1 *)((longlong)&local_258 + lVar9) = 0;
    }
    lVar9 = lVar9 + 0x38;
  } while (lVar9 != 0x228);
  local_698 = &local_258;
  local_690 = 9;
  FUN_144760590(&DAT_14ca85100);
  lVar9 = 0x1f0;
  do {
    if (*(char *)((longlong)&local_258 + lVar9) == '\x01') {
      *(undefined1 *)((longlong)&local_258 + lVar9) = 0;
    }
    lVar9 = lVar9 + -0x38;
  } while (lVar9 != -8);
LAB_147cad5ce:
  iVar10 = 0;
  if ((longlong)DAT_14caff0d0 != 0) {
    lVar9 = 0;
    iVar10 = 0;
    do {
      iVar10 = iVar10 + *(int *)((longlong)DAT_14caff0c8 + lVar9 + 8);
      lVar9 = lVar9 + 0x10;
    } while ((longlong)DAT_14caff0d0 * 0x10 != lVar9);
  }
  iVar1 = *(int *)(param_1 + 0x94);
  iVar2 = *(int *)(param_1 + 0x98);
  iVar3 = *(int *)(param_1 + 0x9c);
  local_6a8 = (void *)0x0;
  uStack_6a0 = 0;
  local_258 = &PTR_FUN_14aa581e0;
  local_250 = 0;
  auStack_248._0_5_ = 0;
  stack0xfffffffffffffdbd = 0;
  uStack_23f = 0;
  uStack_238 = 0;
  local_234 = 0;
  uStack_230 = 0;
  local_228 = 0;
  lVar9 = 0x58;
  do {
    *(undefined ***)((longlong)&uStack_278 + lVar9) = &PTR_FUN_14aa581e0;
    *(undefined8 *)(auStack_270 + lVar9) = 0;
    *(undefined8 *)((longlong)local_260 + lVar9 + -8) = 0;
    *(undefined8 *)((longlong)local_260 + lVar9 + -3) = 0;
    *(undefined8 *)((longlong)&local_258 + lVar9) = 0;
    *(undefined8 *)((longlong)&local_250 + lVar9) = 0;
    auStack_248[lVar9] = 0;
    lVar9 = lVar9 + 0x38;
  } while (lVar9 != 0x1a8);
  iVar10 = (iVar2 * iVar1 * iVar3) / (DAT_14caff0dc * DAT_14caff0dc * DAT_14caff0dc) + iVar10;
  local_d0 = &PTR_FUN_14aa581e0;
  local_c8 = 0;
  uStack_c0 = 0;
  lVar9 = 0;
  uStack_bb = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_98 = &PTR_FUN_14aa581e0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_83 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_6b4 = 0x100;
  if (iVar10 < 0x100) {
    local_6b4 = iVar10;
  }
  iVar10 = (iVar10 + local_6b4 + -1) / local_6b4;
  local_6b0 = 0x100;
  if (iVar10 < 0x100) {
    local_6b0 = iVar10;
  }
  iVar10 = (iVar10 + local_6b0 + -1) / local_6b0;
  local_6ac = 0x100;
  if (iVar10 < 0x100) {
    local_6ac = iVar10;
  }
  local_6b4 = local_6b4 * DAT_14caff0dc;
  local_6b0 = local_6b0 * DAT_14caff0dc;
  local_6ac = local_6ac * DAT_14caff0dc;
  local_6c0 = param_1;
  FUN_147cafdd8(&local_258,&local_6b4,&DAT_14cafeec0);
  local_6c8 = local_60;
  lVar12 = 0;
  iVar10 = 0;
  do {
    if (DAT_14caff0d0 <= lVar12) break;
    FUN_147cbf49a(local_460,&local_258);
    local_268 = (undefined1  [8])*local_6c8;
    local_260[0] = *(undefined4 *)(local_6c8 + 1);
    uVar8 = (uint)DAT_14cafeebc;
    if (DAT_14cafeebc == 5) {
      uVar8 = DAT_14c760db4;
    }
    local_6d8 = &DAT_14cafeec0;
    local_6d0 = local_460;
    FUN_147caff2d(uVar8,*(undefined4 *)((longlong)DAT_14caff0c8 + lVar9 + 0xc),iVar10,
                  *(undefined4 *)((longlong)DAT_14caff0c8 + lVar9 + 8));
    uVar6 = uStack_6a0;
    uVar5 = *(undefined8 *)((longlong)DAT_14caff0c8 + lVar9);
    uVar4 = *(undefined4 *)((longlong)DAT_14caff0c8 + lVar9 + 8);
    lVar11 = (longlong)(int)uStack_6a0;
    uVar8 = (int)uStack_6a0 + 1;
    uStack_6a0 = CONCAT44(uStack_6a0._4_4_,uVar8);
    if (uStack_6a0._4_4_ < uVar8) {
      FUN_147cc44ba(&local_6a8,uVar6 & 0xffffffff);
    }
    lVar11 = lVar11 * 0x10;
    *(undefined8 *)((longlong)local_6a8 + lVar11) = uVar5;
    *(undefined4 *)((longlong)local_6a8 + lVar11 + 8) = uVar4;
    *(int *)((longlong)local_6a8 + lVar11 + 0xc) = iVar10;
    iVar10 = iVar10 + *(int *)((longlong)DAT_14caff0c8 + lVar9 + 8);
    lVar12 = lVar12 + 1;
    lVar9 = lVar9 + 0x10;
  } while (lVar12 != 0x7fffffff);
  lVar9 = local_6c0;
  uVar6 = (longlong)
          (*(int *)(local_6c0 + 0x98) * *(int *)(local_6c0 + 0x94) * *(int *)(local_6c0 + 0x9c)) /
          (longlong)(DAT_14caff0dc * DAT_14caff0dc * DAT_14caff0dc);
  FUN_147cbf49a(local_668,&local_258);
  local_470 = *local_6c8;
  local_468 = *(undefined4 *)(local_6c8 + 1);
  uVar8 = (uint)DAT_14cafeebc;
  if (DAT_14cafeebc == 5) {
    uVar8 = DAT_14c760db4;
  }
  local_6d8 = local_668;
  FUN_147cb03e1(uVar8,iVar10,uVar6 & 0xffffffff,lVar9 + 0xa0);
  uVar7 = uStack_6a0;
  lVar12 = (longlong)(int)uStack_6a0;
  uVar8 = (int)uStack_6a0 + 1;
  uStack_6a0 = CONCAT44(uStack_6a0._4_4_,uVar8);
  if (uStack_6a0._4_4_ < uVar8) {
    FUN_147cc44ba(&local_6a8,uVar7 & 0xffffffff);
  }
  _Src = local_6a8;
  lVar12 = lVar12 * 0x10;
  *(longlong *)((longlong)local_6a8 + lVar12) = lVar9;
  *(int *)((longlong)local_6a8 + lVar12 + 8) = (int)uVar6;
  *(int *)((longlong)local_6a8 + lVar12 + 0xc) = iVar10;
  *(int *)(lVar9 + 0x2f8) = iVar10;
  iVar10 = (int)uStack_6a0;
  lVar9 = (longlong)(int)uStack_6a0;
  DAT_14caff0d0 = (int)uStack_6a0;
  if ((int)uStack_6a0 == 0 && DAT_14caff0d4 == 0) {
    DAT_14caff0d4 = 0;
  }
  else {
    FUN_147cc4540(&DAT_14caff0c8,uStack_6a0 & 0xffffffff);
    if (iVar10 != 0) {
      memcpy(DAT_14caff0c8,_Src,lVar9 << 4);
    }
  }
  FUN_147cbf4fc(&DAT_14cafeec0,&local_258);
  DAT_14caff0b8 = *local_6c8;
  DAT_14caff0c0 = *(undefined4 *)(local_6c8 + 1);
  FUN_1412117b0(&local_258);
  if (local_6a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_6f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cad9ea FUN_147cad9ea body=419 status=ok
// SIG undefined FUN_147cad9ea(void)

void FUN_147cad9ea(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = 0x58;
  do {
    lVar3 = *(longlong *)(param_1 + lVar4);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + lVar4) = 0;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = lVar4 + 0x38;
  } while (lVar4 != 0x1a8);
  lVar4 = *(longlong *)(param_1 + 0x1a8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x1e0);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = 0x60;
  do {
    lVar3 = *(longlong *)(param_1 + lVar4);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + lVar4) = 0;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = lVar4 + 0x38;
  } while (lVar4 != 0x1b0);
  lVar4 = *(longlong *)(param_1 + 0x1b0);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x1e8);
  if (lVar4 != 0) {
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147cadb96 FUN_147cadb96 body=159 status=ok
// SIG undefined FUN_147cadb96(void)

void FUN_147cadb96(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) == 5) {
    uVar3 = DAT_14c760db4;
  }
  if ((int)uVar3 < 3) {
    return;
  }
  FUN_147cadc36(&DAT_14cafeeb0,param_1);
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    LOCK();
    puVar1 = (uint *)(lVar2 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    LOCK();
    puVar1 = (uint *)(lVar2 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_147cad9ea(param_1 + 0xa0);
  return;
}



// FUNCTION 147cadc36 FUN_147cadc36 body=1261 status=ok
// SIG undefined FUN_147cadc36(void)

void FUN_147cadc36(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  void **ppvVar4;
  void *_Src;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_6e8 [32];
  longlong local_6c8;
  undefined1 *local_6c0;
  undefined8 *local_6b0;
  undefined8 *local_6a8;
  void **local_6a0;
  longlong local_698;
  longlong local_690;
  int local_684;
  int local_680;
  int local_67c;
  void *local_678;
  undefined8 uStack_670;
  undefined1 local_660 [504];
  undefined8 local_468 [2];
  undefined1 local_458 [488];
  undefined8 auStack_270 [2];
  undefined8 uStack_25b;
  undefined **local_250 [2];
  undefined5 uStack_240;
  undefined3 uStack_23b;
  undefined5 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 local_220;
  undefined **local_c8;
  undefined8 local_c0;
  undefined5 uStack_b8;
  undefined3 uStack_b3;
  undefined5 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_6e8;
  lVar10 = (longlong)*(int *)(param_1 + 0x220);
  if (lVar10 == 0) {
LAB_147cadca1:
    if ((local_48 ^ (ulonglong)auStack_6e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x218);
  lVar9 = lVar10 << 4;
  iVar15 = 1;
  plVar13 = plVar2;
  while (*plVar13 != param_2) {
    plVar13 = plVar13 + 2;
    iVar15 = iVar15 + 1;
    lVar9 = lVar9 + -0x10;
    if (lVar9 == 0) goto LAB_147cadca1;
  }
  if (plVar13 == (longlong *)0x0) goto LAB_147cadca1;
  lVar9 = 0;
  uVar6 = 0;
  do {
    if (*(longlong *)((longlong)plVar2 + lVar9) != param_2) {
      uVar6 = uVar6 + *(int *)((longlong)plVar2 + lVar9 + 8);
    }
    lVar9 = lVar9 + 0x10;
  } while (lVar10 * 0x10 != lVar9);
  local_678 = (void *)0x0;
  uStack_670 = 0;
  local_250[0] = &PTR_FUN_14aa581e0;
  local_250[1] = (undefined **)0x0;
  uStack_240 = 0;
  uStack_23b = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  lVar10 = 0x58;
  do {
    *(undefined ***)((longlong)auStack_270 + lVar10) = &PTR_FUN_14aa581e0;
    *(undefined8 *)((longlong)auStack_270 + lVar10 + 8) = 0;
    *(undefined8 *)(&stack0xfffffffffffffda0 + lVar10) = 0;
    *(undefined8 *)((longlong)&uStack_25b + lVar10) = 0;
    *(undefined8 *)((longlong)local_250 + lVar10) = 0;
    *(undefined8 *)((longlong)local_250 + lVar10 + 8) = 0;
    *(undefined1 *)((longlong)&uStack_240 + lVar10) = 0;
    lVar10 = lVar10 + 0x38;
  } while (lVar10 != 0x1a8);
  local_c8 = &PTR_FUN_14aa581e0;
  local_c0 = 0;
  uStack_b8 = 0;
  iVar11 = 0;
  uStack_b3 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = &PTR_FUN_14aa581e0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7b = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_6a0 = (void **)(param_1 + 0x218);
  if ((int)uVar6 < 1) {
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  else {
    uVar14 = 0x100;
    if (uVar6 < 0x100) {
      uVar14 = uVar6;
    }
    uVar7 = ((uVar6 + uVar14) - 1) / uVar14;
    uVar6 = 0x100;
    if (uVar7 < 0x100) {
      uVar6 = uVar7;
    }
    iVar8 = (int)(uVar7 + uVar6 + -1) / (int)uVar6;
    local_67c = 0x100;
    if (iVar8 < 0x100) {
      local_67c = iVar8;
    }
    iVar8 = *(int *)(param_1 + 0x22c);
    local_684 = uVar14 * iVar8;
    local_680 = uVar6 * iVar8;
    local_67c = local_67c * iVar8;
    local_698 = param_1 + 0x10;
    FUN_147cafdd8(local_250);
    if (0 < (int)(iVar15 - 1U)) {
      local_6b0 = (undefined8 *)&stack0xfffffffffffffda0;
      local_6a8 = &local_58;
      local_690 = (ulonglong)(iVar15 - 1U) << 4;
      lVar10 = 0;
      lVar9 = 0;
      iVar11 = 0;
      do {
        if (*(int *)(param_1 + 0x220) <= lVar9) break;
        FUN_147cbf49a(local_458,local_250);
        *local_6b0 = *local_6a8;
        *(undefined4 *)(local_6b0 + 1) = *(undefined4 *)(local_6a8 + 1);
        uVar6 = (uint)*(byte *)(param_1 + 0xc);
        if (*(byte *)(param_1 + 0xc) == 5) {
          uVar6 = DAT_14c760db4;
        }
        local_6c8 = local_698;
        local_6c0 = local_458;
        FUN_147caff2d(uVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x218) + 0xc + lVar10),iVar11,
                      *(undefined4 *)(*(longlong *)(param_1 + 0x218) + 8 + lVar10));
        uVar5 = uStack_670;
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x218) + lVar10);
        uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x218) + 8 + lVar10);
        lVar12 = (longlong)(int)uStack_670;
        uVar6 = (int)uStack_670 + 1;
        uStack_670 = CONCAT44(uStack_670._4_4_,uVar6);
        if (uStack_670._4_4_ < uVar6) {
          FUN_147cc44ba(&local_678,uVar5 & 0xffffffff);
        }
        lVar12 = lVar12 * 0x10;
        *(undefined8 *)((longlong)local_678 + lVar12) = uVar3;
        *(undefined4 *)((longlong)local_678 + lVar12 + 8) = uVar1;
        *(int *)((longlong)local_678 + lVar12 + 0xc) = iVar11;
        iVar11 = iVar11 + *(int *)((longlong)*local_6a0 + lVar10 + 8);
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while (local_690 != lVar10);
    }
    if (iVar15 < *(int *)(param_1 + 0x220)) {
      local_6b0 = local_468;
      local_6a8 = &local_58;
      lVar10 = (longlong)iVar15;
      lVar9 = lVar10 << 4;
      do {
        FUN_147cbf49a(local_660,local_250);
        *local_6b0 = *local_6a8;
        *(undefined4 *)(local_6b0 + 1) = *(undefined4 *)(local_6a8 + 1);
        uVar6 = (uint)*(byte *)(param_1 + 0xc);
        if (*(byte *)(param_1 + 0xc) == 5) {
          uVar6 = DAT_14c760db4;
        }
        local_6c8 = local_698;
        local_6c0 = local_660;
        FUN_147caff2d(uVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x218) + 0xc + lVar9),iVar11,
                      *(undefined4 *)(*(longlong *)(param_1 + 0x218) + 8 + lVar9));
        uVar5 = uStack_670;
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x218) + lVar9);
        uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x218) + 8 + lVar9);
        lVar12 = (longlong)(int)uStack_670;
        uVar6 = (int)uStack_670 + 1;
        uStack_670 = CONCAT44(uStack_670._4_4_,uVar6);
        if (uStack_670._4_4_ < uVar6) {
          FUN_147cc44ba(&local_678,uVar5 & 0xffffffff);
        }
        lVar12 = lVar12 * 0x10;
        *(undefined8 *)((longlong)local_678 + lVar12) = uVar3;
        *(undefined4 *)((longlong)local_678 + lVar12 + 8) = uVar1;
        *(int *)((longlong)local_678 + lVar12 + 0xc) = iVar11;
        FUN_147cae1f8(*(undefined8 *)(*(longlong *)(param_1 + 0x218) + lVar9),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x218) + 0xc + lVar9),iVar11);
        iVar11 = iVar11 + *(int *)(*(longlong *)(param_1 + 0x218) + 8 + lVar9);
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 0x10;
      } while (lVar10 < *(int *)(param_1 + 0x220));
    }
  }
  _Src = local_678;
  ppvVar4 = local_6a0;
  if (local_6a0 != &local_678) {
    iVar15 = (int)uStack_670;
    lVar10 = (longlong)(int)uStack_670;
    *(int *)(param_1 + 0x220) = (int)uStack_670;
    if ((int)uStack_670 == 0 && *(int *)(param_1 + 0x224) == 0) {
      *(undefined4 *)(param_1 + 0x224) = 0;
    }
    else {
      FUN_147cc4540(local_6a0,uStack_670 & 0xffffffff);
      if (iVar15 != 0) {
        memcpy(*ppvVar4,_Src,lVar10 << 4);
      }
    }
  }
  FUN_147cbf4fc(param_1 + 0x10,local_250);
  *(undefined8 *)(param_1 + 0x208) = local_58;
  *(undefined4 *)(param_1 + 0x210) = local_50;
  FUN_1412117b0(local_250);
  if (local_678 != (void *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_147cadca1;
}



// FUNCTION 147cae124 FUN_147cae124 body=212 status=ok
// SIG undefined FUN_147cae124(void)

void FUN_147cae124(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x2d8);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x2e0);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x2e8);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x2f0);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147cae1f8 FUN_147cae1f8 body=1118 status=ok
// SIG undefined FUN_147cae1f8(void)

void FUN_147cae1f8(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_148 [40];
  int local_120;
  undefined4 local_11c;
  undefined8 *local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_88;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(undefined4 *)(param_1 + 0x2f8) = param_3;
  iVar7 = *(int *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x50)) {
    iVar7 = *(int *)(param_1 + 0x50);
  }
  if (iVar7 < *(int *)(param_1 + 0x54)) {
    iVar7 = *(int *)(param_1 + 0x54);
  }
  local_11c = param_2;
  if (iVar7 < 1) {
    FUN_143656672(param_1);
    iVar7 = *(int *)(param_1 + 0x308);
    if ((longlong)iVar7 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x300);
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar8);
        if (*(longlong *)(lVar3 + 0x78) != 0) {
          uVar5 = (uint)*(byte *)(param_1 + 0xc);
          if (*(byte *)(param_1 + 0xc) == 5) {
            uVar5 = DAT_14c760db4;
          }
          uVar6 = FUN_144b1c618(*(undefined2 *)(&DAT_14ca85070 + (longlong)(int)uVar5 * 2));
          FUN_145e63346();
          FUN_1448e935e(uVar6,&local_80,&DAT_14cafab88,0);
          FUN_145e63346();
          local_c8 = (undefined8 *)CONCAT44(uStack_7c,local_80);
          uStack_c0 = uStack_78;
          uStack_bc = uStack_74;
          iVar1 = *(int *)(param_1 + 0x2a8);
          local_b8 = CONCAT44(*(undefined4 *)(param_1 + 0x2f8),iVar1);
          local_a8 = *(undefined8 *)(lVar3 + 0x80);
          local_b0 = *(undefined8 *)(param_1 + 0x2e0);
          iVar9 = iVar1 + 0x7e;
          if (-1 < iVar1 + 0x3f) {
            iVar9 = iVar1 + 0x3f;
          }
          FUN_145e635b4();
          uStack_7c = 1;
          uStack_78 = 1;
          local_80 = iVar9 >> 6;
          FUN_147cc39f6(&local_c8,&local_b8,&local_80);
          local_70 = *(undefined8 *)(lVar3 + 0x80);
          local_80 = -1;
          uStack_7c = 0xffffffff;
          uStack_78 = 0xffffffff;
          local_68 = 3;
          local_64 = 0x7000000000;
          local_5c = 0;
          local_50 = 0;
          local_100 = 1;
          local_108 = &local_80;
          FUN_144760590(&DAT_14ca85100,&local_108,0);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar7 * 8 != lVar8);
    }
    FUN_147cae124(param_1);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x90) + 1;
    local_120 = (*(int *)(param_1 + 0x98) * *(int *)(param_1 + 0x94) * *(int *)(param_1 + 0x9c)) /
                (iVar7 * iVar7 * iVar7);
    iVar7 = *(int *)(param_1 + 0x308);
    if ((longlong)iVar7 != 0) {
      local_118 = (undefined8 *)(param_1 + 0x4c);
      lVar2 = *(longlong *)(param_1 + 0x300);
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar8);
        if (*(longlong *)(lVar3 + 0x78) != 0) {
          uVar5 = (uint)*(byte *)(param_1 + 0xc);
          if (*(byte *)(param_1 + 0xc) == 5) {
            uVar5 = DAT_14c760db4;
          }
          local_110 = lVar3 + 0x58;
          uVar6 = FUN_144b1c618(*(undefined2 *)(&DAT_14ca85070 + (longlong)(int)uVar5 * 2));
          FUN_145e9a98a();
          FUN_1448e935e(uVar6,&local_80,&DAT_14cafacb0,0);
          FUN_145e9a98a();
          local_d8 = local_80;
          uStack_d4 = uStack_7c;
          uStack_d0 = uStack_78;
          uStack_cc = uStack_74;
          FUN_147cae658(&local_80,lVar3 + 0x58);
          local_e8 = *local_118;
          local_e0 = *(undefined4 *)(local_118 + 1);
          FUN_143655dba(&local_80,&local_e8);
          FUN_143656188(&local_80);
          local_108 = (int *)CONCAT44(local_11c,local_120);
          local_100 = *(undefined4 *)(param_1 + 0x2f8);
          local_f8 = *(undefined8 *)(lVar3 + 0x78);
          local_f0 = local_58;
          iVar1 = *(int *)(param_1 + 0x54) + 3;
          iVar9 = *(int *)(param_1 + 0x54) + 6;
          if (-1 < iVar1) {
            iVar9 = iVar1;
          }
          iVar1 = *(int *)(param_1 + 0x50) + 3;
          iVar4 = *(int *)(param_1 + 0x50) + 6;
          if (-1 < iVar1) {
            iVar4 = iVar1;
          }
          iVar1 = *(int *)(param_1 + 0x4c) + 3;
          iVar10 = *(int *)(param_1 + 0x4c) + 6;
          if (-1 < iVar1) {
            iVar10 = iVar1;
          }
          FUN_145e9abf8();
          local_b8 = CONCAT44(iVar4 >> 2,iVar10 >> 2);
          local_b0._0_4_ = iVar9 >> 2;
          FUN_147cc37a5(&local_d8,&local_108,&local_b8);
          FUN_147cae6f6(local_110,&local_80);
          local_b8 = 0xffffffffffffffff;
          local_b0 = CONCAT44(local_b0._4_4_,0xffffffff);
          local_a8 = local_58;
          local_a0 = 3;
          local_9c = 0x7000000000;
          local_94 = 0;
          local_88 = 0;
          uStack_c0 = 1;
          local_c8 = &local_b8;
          FUN_144760590(&DAT_14ca85100,&local_c8,0);
          FUN_141211852(&local_80);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar7 * 8 != lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cae658 FUN_147cae658 body=158 status=ok
// SIG undefined FUN_147cae658(void)

undefined8 * FUN_147cae658(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14aa581e0;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  _Src = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1);
  }
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(param_2 + 0x28);
  param_1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 147cae6f6 FUN_147cae6f6 body=165 status=ok
// SIG undefined FUN_147cae6f6(void)

longlong FUN_147cae6f6(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1447a122a(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  lVar3 = *(longlong *)(param_2 + 0x20);
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 0x20) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  lVar3 = *(longlong *)(param_2 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 0x28) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  return param_1;
}



// FUNCTION 147cae79c FUN_147cae79c body=2312 status=ok
// SIG undefined FUN_147cae79c(void)

void FUN_147cae79c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  size_t _Size;
  longlong lVar24;
  undefined1 auStack_138 [40];
  longlong *local_110;
  int *local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8 [2];
  longlong local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_88;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar24 = param_1[0x60];
  iVar13 = (int)param_1[0x61];
  lVar20 = (longlong)iVar13;
  if (lVar20 != 0) {
    uVar16 = 0;
    do {
      if (*(longlong *)(lVar24 + uVar16) == param_2) {
        if ((int)(~uVar16 >> 3) != 0) goto LAB_147caee71;
        break;
      }
      uVar16 = uVar16 + 8;
    } while (lVar20 * 8 - uVar16 != 0);
  }
  plVar1 = param_1 + 0x60;
  iVar15 = *(int *)((longlong)param_1 + 0x4c);
  if (*(int *)((longlong)param_1 + 0x4c) < (int)param_1[10]) {
    iVar15 = (int)param_1[10];
  }
  if (iVar15 < *(int *)((longlong)param_1 + 0x54)) {
    iVar15 = *(int *)((longlong)param_1 + 0x54);
  }
  if (iVar15 < 1) {
    uVar18 = (uint)*(byte *)((longlong)param_1 + 0xc);
    if (*(byte *)((longlong)param_1 + 0xc) == 5) {
      uVar18 = DAT_14c760db4;
    }
    if ((int)uVar18 < 3) {
      if (0 < *(int *)(param_2 + 0x68)) {
        *(uint *)(param_1 + 0x61) = iVar13 + 1U;
        if (*(uint *)((longlong)param_1 + 0x30c) < iVar13 + 1U) {
          FUN_147cc3c48(plVar1,iVar13);
          lVar24 = *plVar1;
        }
        *(longlong *)(lVar24 + lVar20 * 8) = param_2;
        lVar24 = *(longlong *)(param_2 + 800);
        uVar18 = *(uint *)(param_2 + 0x328);
        lVar20 = (longlong)(int)uVar18;
        if (lVar20 != 0) {
          lVar19 = lVar20 * 8;
          uVar16 = 0;
          lVar17 = 0;
          do {
            if (*(longlong *)(lVar24 + uVar16 * 8) == 0) {
              if ((int)uVar16 != -1) {
                lVar20 = lVar17 >> 0x20;
                goto LAB_147caef29;
              }
              break;
            }
            lVar17 = lVar17 + 0x100000000;
            uVar16 = uVar16 + 1;
            lVar19 = lVar19 + -8;
          } while (lVar19 != 0);
        }
        plVar1 = (longlong *)(param_2 + 800);
        *(uint *)(param_2 + 0x328) = uVar18 + 1;
        if (*(uint *)(param_2 + 0x32c) < uVar18 + 1) {
          FUN_147cc3c48(plVar1,uVar18);
          lVar24 = *plVar1;
        }
        *(undefined8 *)(lVar24 + lVar20 * 8) = 0;
        lVar24 = *plVar1;
        uVar16 = (ulonglong)uVar18;
LAB_147caef29:
        *(longlong **)(lVar24 + lVar20 * 8) = param_1;
        iVar13 = (int)param_1[0x12] + 1;
        iVar15 = *(int *)((longlong)param_1 + 0x94) / iVar13;
        iVar13 = (int)param_1[0x13] / iVar13;
        if (0 < (int)param_1[0x55]) {
          lVar24 = 8;
          uVar21 = 0;
          do {
            uVar18 = (int)uVar21 >> 0x1f;
            uVar3 = (ulonglong)uVar18 << 0x20 | uVar21 & 0xffffffff;
            uVar4 = (longlong)uVar3 / (longlong)iVar15;
            uVar2 = param_1[0x54];
            uVar22 = (longlong)param_1 + ((longlong)uVar2 >> 0x18) + 0x2a0;
            if ((uVar2 & 1) == 0) {
              uVar22 = uVar2;
            }
            lVar17 = (longlong)*(int *)(param_2 + 0x4c) *
                     ((longlong)*(int *)(param_2 + 0x50) * (longlong)*(int *)(uVar22 + lVar24) +
                     (longlong)*(int *)((uVar22 - 4) + lVar24)) +
                     (longlong)*(int *)((uVar22 - 8) + lVar24);
            lVar19 = (longlong)(int)lVar17 *
                     (longlong)
                     *(int *)((longlong)&DAT_14c873428 +
                             (ulonglong)((uint)*(byte *)(param_2 + 0x74) * 0x30));
            lVar20 = *(longlong *)(param_2 + 0x60);
            *(char *)(lVar20 + lVar19) = (char)((longlong)uVar3 % (longlong)iVar15);
            *(char *)(lVar20 + 1 + lVar19) =
                 (char)((longlong)
                        ((ulonglong)(uint)((int)uVar4 >> 0x1f) << 0x20 | uVar4 & 0xffffffff) %
                       (longlong)iVar13);
            *(char *)(lVar20 + 2 + lVar19) =
                 (char)((longlong)((ulonglong)uVar18 << 0x20 | uVar21 & 0xffffffff) /
                       (longlong)(iVar13 * iVar15));
            *(undefined1 *)(lVar20 + 3 + lVar19) = 1;
            *(char *)(*(longlong *)(param_2 + 0x310) + lVar17) = (char)uVar16;
            uVar21 = uVar21 + 1;
            lVar24 = lVar24 + 0xc;
          } while ((longlong)uVar21 < (longlong)(int)param_1[0x55]);
        }
      }
    }
    else if (*(longlong *)(param_2 + 0x78) != 0) {
      *(uint *)(param_1 + 0x61) = iVar13 + 1U;
      if (*(uint *)((longlong)param_1 + 0x30c) < iVar13 + 1U) {
        FUN_147cc3c48(plVar1,iVar13);
        lVar24 = *plVar1;
      }
      *(longlong *)(lVar24 + lVar20 * 8) = param_2;
      FUN_143656672(param_1);
      uVar18 = (uint)*(byte *)((longlong)param_1 + 0xc);
      if (*(byte *)((longlong)param_1 + 0xc) == 5) {
        uVar18 = DAT_14c760db4;
      }
      uVar14 = FUN_144b1c618(*(undefined2 *)(&DAT_14ca85070 + (longlong)(int)uVar18 * 2));
      FUN_145e63346();
      FUN_1448e935e(uVar14,&local_80,&DAT_14cafab88,0);
      FUN_145e63346();
      local_c8 = (int *)CONCAT44(uStack_7c,local_80);
      uStack_c0 = uStack_78;
      uStack_bc = uStack_74;
      iVar13 = (int)param_1[0x55];
      local_b8[1] = (int)param_1[0x5f];
      local_b8[0] = iVar13;
      local_a8 = *(undefined8 *)(param_2 + 0x80);
      local_b0 = param_1[0x5c];
      local_80 = -1;
      uStack_7c = 0xffffffff;
      uStack_78 = 0xffffffff;
      local_68 = 3;
      local_64 = 0x40000000000;
      local_5c = 0;
      local_50 = 0;
      local_100 = 1;
      local_108 = &local_80;
      local_70 = local_a8;
      FUN_144760590(&DAT_14ca85100,&local_108,0);
      iVar15 = iVar13 + 0x7e;
      if (-1 < iVar13 + 0x3f) {
        iVar15 = iVar13 + 0x3f;
      }
      FUN_145e635b4();
      uStack_7c = 1;
      uStack_78 = 1;
      local_80 = iVar15 >> 6;
      FUN_147cc39f6(&local_c8,local_b8,&local_80);
      local_70 = *(undefined8 *)(param_2 + 0x80);
      local_80 = -1;
      uStack_7c = 0xffffffff;
      uStack_78 = 0xffffffff;
      local_68 = 3;
      local_64 = 0x7000000400;
      local_5c = 0;
      local_50 = 0;
      local_100 = 1;
      local_108 = &local_80;
      FUN_144760590(&DAT_14ca85100,&local_108,0);
      FUN_147cae124(param_1);
    }
  }
  else {
    *(uint *)(param_1 + 0x61) = iVar13 + 1U;
    if (*(uint *)((longlong)param_1 + 0x30c) < iVar13 + 1U) {
      FUN_147cc3c48(plVar1,iVar13);
      lVar24 = *plVar1;
    }
    *(longlong *)(lVar24 + lVar20 * 8) = param_2;
    *(longlong *)(param_2 + 0x40) = param_1[8];
    lVar24 = param_1[2];
    uVar6 = *(undefined4 *)((longlong)param_1 + 0x14);
    lVar20 = param_1[3];
    uVar7 = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar19 = param_1[4];
    uVar8 = *(undefined4 *)((longlong)param_1 + 0x24);
    lVar17 = param_1[5];
    uVar9 = *(undefined4 *)((longlong)param_1 + 0x2c);
    uVar10 = *(undefined4 *)((longlong)param_1 + 0x34);
    lVar12 = param_1[7];
    uVar11 = *(undefined4 *)((longlong)param_1 + 0x3c);
    *(int *)(param_2 + 0x30) = (int)param_1[6];
    *(undefined4 *)(param_2 + 0x34) = uVar10;
    *(int *)(param_2 + 0x38) = (int)lVar12;
    *(undefined4 *)(param_2 + 0x3c) = uVar11;
    *(int *)(param_2 + 0x20) = (int)lVar19;
    *(undefined4 *)(param_2 + 0x24) = uVar8;
    *(int *)(param_2 + 0x28) = (int)lVar17;
    *(undefined4 *)(param_2 + 0x2c) = uVar9;
    *(int *)(param_2 + 0x10) = (int)lVar24;
    *(undefined4 *)(param_2 + 0x14) = uVar6;
    *(int *)(param_2 + 0x18) = (int)lVar20;
    *(undefined4 *)(param_2 + 0x1c) = uVar7;
    *(int *)(param_2 + 0x90) = (int)param_1[0x12];
    *(undefined4 *)(param_2 + 0x9c) = *(undefined4 *)((longlong)param_1 + 0x9c);
    *(undefined8 *)(param_2 + 0x94) = *(undefined8 *)((longlong)param_1 + 0x94);
    *(undefined1 *)(param_2 + 0x74) = *(undefined1 *)((longlong)param_1 + 0x74);
    *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)((longlong)param_1 + 0x54);
    *(undefined8 *)(param_2 + 0x4c) = *(undefined8 *)((longlong)param_1 + 0x4c);
    uVar18 = (uint)*(byte *)((longlong)param_1 + 0xc);
    if (*(byte *)((longlong)param_1 + 0xc) == 5) {
      uVar18 = DAT_14c760db4;
    }
    if ((int)uVar18 < 3) {
      FUN_1447a122a(param_2 + 0x60,param_1 + 0xc);
      *(undefined4 *)(param_2 + 0x318) = 0;
      if (*(int *)(param_2 + 0x31c) == 0) {
        iVar15 = 0;
        iVar13 = 0;
      }
      else {
        FUN_144893a1c(param_2 + 0x310,0);
        iVar13 = *(int *)(param_2 + 0x318);
        iVar15 = *(int *)(param_2 + 0x31c);
      }
      _Size = (longlong)*(int *)((longlong)param_1 + 0x54) *
              (longlong)(int)param_1[10] * (longlong)*(int *)((longlong)param_1 + 0x4c);
      uVar18 = (uint)_Size;
      *(uint *)(param_2 + 0x318) = uVar18 + iVar13;
      if ((uint)(iVar15 - iVar13) < uVar18) {
        FUN_1447403be(param_2 + 0x310);
      }
      uVar18 = 0;
      memset((void *)((longlong)iVar13 + *(longlong *)(param_2 + 0x310)),0,_Size);
      plVar1 = (longlong *)(param_2 + 800);
      *(undefined4 *)(param_2 + 0x328) = 0;
      iVar13 = 0;
      if (*(int *)(param_2 + 0x32c) != 0) {
        FUN_147cc3cce(plVar1);
        iVar13 = *(int *)(param_2 + 0x328);
        uVar18 = *(uint *)(param_2 + 0x32c);
      }
      *(uint *)(param_2 + 0x328) = iVar13 + 1U;
      if (uVar18 < iVar13 + 1U) {
        FUN_147cc3c48(plVar1,iVar13);
      }
      *(longlong **)(*plVar1 + (longlong)iVar13 * 8) = param_1;
    }
    else {
      if ((int)param_1[1] == -1) {
        (**(code **)(*param_1 + 0x18))(param_1,&DAT_14ca85100);
      }
      if (param_1[0xf] != 0) {
        local_110 = param_1 + 0xb;
        iVar15 = (int)param_1[0x12] + 1;
        iVar13 = (int)param_1[0x13] * *(int *)((longlong)param_1 + 0x94) *
                 *(int *)((longlong)param_1 + 0x9c);
        iVar15 = iVar15 * iVar15 * iVar15;
        uVar18 = (uint)*(byte *)((longlong)param_1 + 0xc);
        if (*(byte *)((longlong)param_1 + 0xc) == 5) {
          uVar18 = DAT_14c760db4;
        }
        uVar14 = FUN_144b1c618(*(undefined2 *)(&DAT_14ca85070 + (longlong)(int)uVar18 * 2),
                               (longlong)iVar13 % (longlong)iVar15 & 0xffffffff);
        FUN_145e9a98a();
        FUN_1448e935e(uVar14,&local_80,&DAT_14cafacb0,0);
        FUN_145e9a98a();
        local_d8 = local_80;
        uStack_d4 = uStack_7c;
        uStack_d0 = uStack_78;
        uStack_cc = uStack_74;
        param_2 = param_2 + 0x58;
        FUN_147cae658(&local_80,param_2);
        local_e8 = *(undefined8 *)((longlong)param_1 + 0x4c);
        local_e0 = *(undefined4 *)((longlong)param_1 + 0x54);
        FUN_143655dba(&local_80);
        FUN_143656188(&local_80);
        local_108 = local_b8;
        local_b8[0] = -1;
        local_b8[1] = -1;
        local_b0._0_4_ = 0xffffffff;
        local_a8 = local_58;
        local_a0 = 3;
        local_9c = 0x40000000000;
        local_94 = 0;
        local_88 = 0;
        local_100 = 1;
        FUN_144760590(&DAT_14ca85100,&local_108,0);
        local_108 = (int *)(ulonglong)(uint)(iVar13 / iVar15);
        local_100 = (undefined4)param_1[0x5f];
        local_f8 = param_1[0xf];
        local_f0 = local_58;
        iVar13 = *(int *)((longlong)param_1 + 0x54) + 3;
        iVar15 = *(int *)((longlong)param_1 + 0x54) + 6;
        if (-1 < iVar13) {
          iVar15 = iVar13;
        }
        iVar13 = (int)param_1[10] + 3;
        iVar5 = (int)param_1[10] + 6;
        if (-1 < iVar13) {
          iVar5 = iVar13;
        }
        iVar13 = *(int *)((longlong)param_1 + 0x4c) + 3;
        iVar23 = *(int *)((longlong)param_1 + 0x4c) + 6;
        if (-1 < iVar13) {
          iVar23 = iVar13;
        }
        FUN_145e9abf8();
        local_b8[1] = iVar5 >> 2;
        local_b8[0] = iVar23 >> 2;
        local_b0._0_4_ = iVar15 >> 2;
        FUN_147cc37a5(&local_d8,&local_108,local_b8);
        local_b8[0] = -1;
        local_b8[1] = -1;
        local_b0._0_4_ = 0xffffffff;
        local_a8 = local_58;
        local_a0 = 3;
        local_9c = 0x7000000400;
        local_94 = 0;
        local_88 = 0;
        uStack_c0 = 1;
        local_c8 = local_b8;
        FUN_144760590(&DAT_14ca85100,&local_c8,0);
        FUN_147cae6f6(param_2,&local_80);
        FUN_147cae6f6(local_110,param_2);
        local_a8 = param_1[0xf];
        local_b8[0] = -1;
        local_b8[1] = -1;
        local_b0._0_4_ = 0xffffffff;
        local_a0 = 1;
        local_9c = 0x7000000000;
        local_94 = 0;
        local_88 = 0;
        uStack_c0 = 1;
        local_c8 = local_b8;
        FUN_144760590(&DAT_14ca85100,&local_c8,0);
        local_b8[0] = -1;
        local_b8[1] = -1;
        local_b0 = CONCAT44(local_b0._4_4_,0xffffffff);
        local_a8 = local_58;
        local_a0 = 3;
        local_9c = 0x7000000000;
        local_94 = 0;
        local_88 = 0;
        uStack_c0 = 1;
        local_c8 = local_b8;
        FUN_144760590(&DAT_14ca85100,&local_c8,0);
        FUN_141211852(&local_80);
      }
    }
  }
LAB_147caee71:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147caf0a6 FUN_147caf0a6 body=943 status=ok
// SIG undefined FUN_147caf0a6(void)

void FUN_147caf0a6(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = param_2;
  local_80 = (longlong *)CONCAT44(local_80._4_4_,(int)local_80);
  local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
  if ((longlong)*(int *)(param_1 + 0x308) != 0) {
    uVar11 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x300) + uVar11) == param_2) {
        local_80 = (longlong *)CONCAT44(local_80._4_4_,(int)local_80);
        local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
        if ((int)(~uVar11 >> 3) != 0) {
          local_80 = &local_98;
          FUN_147cc3cfe(param_1 + 0x300);
          iVar8 = *(int *)(param_1 + 0x4c);
          if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x50)) {
            iVar8 = *(int *)(param_1 + 0x50);
          }
          if (iVar8 < *(int *)(param_1 + 0x54)) {
            iVar8 = *(int *)(param_1 + 0x54);
          }
          local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
          if (iVar8 < 1) {
            uVar6 = (uint)*(byte *)(param_1 + 0xc);
            if (*(byte *)(param_1 + 0xc) == 5) {
              uVar6 = DAT_14c760db4;
            }
            if ((int)uVar6 < 3) {
              local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
              if ((0 < *(int *)(local_98 + 0x68)) &&
                 (local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8),
                 0 < (longlong)*(int *)(local_98 + 0x328))) {
                lVar9 = 0;
                goto LAB_147caf346;
              }
            }
            else {
              local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
              if (*(longlong *)(local_98 + 0x78) != 0) {
                FUN_143656672(param_1);
                uVar6 = (uint)*(byte *)(param_1 + 0xc);
                if (*(byte *)(param_1 + 0xc) == 5) {
                  uVar6 = DAT_14c760db4;
                }
                uVar7 = FUN_144b1c618(*(undefined2 *)(&DAT_14ca85070 + (longlong)(int)uVar6 * 2));
                FUN_145f0c70c();
                FUN_1448e935e(uVar7,&local_80,&DAT_14cafa810,0);
                FUN_145f0c70c();
                local_a8 = local_80;
                uStack_a0 = uStack_78;
                uStack_9c = uStack_74;
                local_c8 = *(undefined4 *)(param_1 + 0x2a8);
                local_b0 = *(undefined8 *)(local_98 + 0x80);
                local_c0 = *(undefined8 *)(param_1 + 0x2e0);
                local_b8 = *(undefined8 *)(param_1 + 0x2f0);
                local_80._0_4_ = 0xffffffff;
                local_80._4_4_ = 0xffffffff;
                uStack_78 = 0xffffffff;
                local_68 = 3;
                local_64 = 0x40000000000;
                local_5c = 0;
                local_50 = 0;
                local_88 = 1;
                local_c4 = param_3;
                local_90 = &local_80;
                local_70 = local_b0;
                FUN_144760590(&DAT_14ca85100,&local_90,0);
                iVar8 = *(int *)(param_1 + 0x2a8) + 0x3f;
                iVar14 = *(int *)(param_1 + 0x2a8) + 0x7e;
                if (-1 < iVar8) {
                  iVar14 = iVar8;
                }
                FUN_145f0c97a();
                local_80._4_4_ = 1;
                uStack_78 = 1;
                local_80._0_4_ = iVar14 >> 6;
                FUN_147cc3dc7(&local_a8,&local_c8,&local_80);
                local_70 = *(undefined8 *)(local_98 + 0x80);
                local_80._0_4_ = 0xffffffff;
                local_80._4_4_ = 0xffffffff;
                uStack_78 = 0xffffffff;
                local_68 = 3;
                local_64 = 0x7000000400;
                local_5c = 0;
                local_50 = 0;
                local_88 = 1;
                local_90 = &local_80;
                FUN_144760590(&DAT_14ca85100,&local_90,0);
                FUN_147cae124(param_1);
                local_80 = (longlong *)CONCAT44(local_80._4_4_,(int)local_80);
              }
            }
          }
        }
        break;
      }
      uVar11 = uVar11 + 8;
      local_80 = (longlong *)CONCAT44(local_80._4_4_,(int)local_80);
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
    } while ((longlong)*(int *)(param_1 + 0x308) * 8 != uVar11);
  }
  goto LAB_147caf114;
  while (lVar9 = lVar9 + 1, local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8),
        *(int *)(local_98 + 0x328) != lVar9) {
LAB_147caf346:
    if (*(longlong *)(*(longlong *)(local_98 + 800) + lVar9 * 8) == param_1) {
      *(undefined8 *)(*(longlong *)(local_98 + 800) + lVar9 * 8) = 0;
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
      if (0 < *(int *)(param_1 + 0x2a8)) {
        lVar9 = 2;
        lVar12 = 0;
        do {
          uVar11 = *(ulonglong *)(param_1 + 0x2c0);
          uVar4 = *(ulonglong *)(param_1 + 0x2a0);
          uVar10 = ((longlong)uVar11 >> 0x18) + param_1 + 0x2c0;
          if ((uVar11 & 1) == 0) {
            uVar10 = uVar11;
          }
          uVar1 = *(undefined1 *)(uVar10 + lVar12 * 4);
          uVar2 = *(undefined1 *)(uVar10 + 1 + lVar12 * 4);
          uVar3 = *(undefined1 *)(uVar10 + 3 + lVar12 * 4);
          uVar11 = ((longlong)uVar4 >> 0x18) + param_1 + 0x2a0;
          if ((uVar4 & 1) == 0) {
            uVar11 = uVar4;
          }
          lVar15 = (longlong)*(int *)(local_98 + 0x4c) *
                   ((longlong)*(int *)(local_98 + 0x50) * (longlong)*(int *)(uVar11 + lVar9 * 4) +
                   (longlong)*(int *)((uVar11 - 4) + lVar9 * 4)) +
                   (longlong)*(int *)((uVar11 - 8) + lVar9 * 4);
          lVar13 = (longlong)(int)lVar15 *
                   (longlong)
                   *(int *)((longlong)&DAT_14c873428 +
                           (ulonglong)((uint)*(byte *)(local_98 + 0x74) * 0x30));
          lVar5 = *(longlong *)(local_98 + 0x60);
          *(undefined1 *)(lVar5 + lVar13) = *(undefined1 *)(uVar10 + 2 + lVar12 * 4);
          *(undefined1 *)(lVar5 + 1 + lVar13) = uVar2;
          *(undefined1 *)(lVar5 + 2 + lVar13) = uVar1;
          *(undefined1 *)(lVar5 + 3 + lVar13) = uVar3;
          *(undefined1 *)(*(longlong *)(local_98 + 0x310) + lVar15) = 0;
          lVar12 = lVar12 + 1;
          lVar9 = lVar9 + 3;
          local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(undefined4)local_a8);
        } while (lVar12 < *(int *)(param_1 + 0x2a8));
      }
      break;
    }
  }
LAB_147caf114:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147caf456 FUN_147caf456 body=191 status=ok
// SIG undefined FUN_147caf456(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147caf456(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 in_XMM3 [16];
  undefined1 auVar6 [16];
  
  *param_1 = param_3;
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + 0xc) = *(undefined1 *)(param_4 + 8);
    lVar3 = 0;
    *(undefined1 *)(*param_1 + 0x88) = 0;
    lVar1 = *param_1;
    *(undefined1 *)(lVar1 + 0xd0) = 0;
    auVar2 = _DAT_149931e80;
    auVar4 = pmovsxbq(in_XMM0,0x100);
    auVar6 = pmovsxbq(in_XMM3,0x202);
    do {
      if (SUB168(auVar4 ^ auVar2,0) < -0x7ffffffffffffffa) {
        *(undefined1 *)(lVar1 + 0x108 + lVar3) = 0;
      }
      if (SUB168(auVar4 ^ auVar2,8) < -0x7ffffffffffffffa) {
        *(undefined1 *)(lVar1 + 0x140 + lVar3) = 0;
      }
      lVar5 = auVar4._8_8_;
      auVar4._0_8_ = auVar4._0_8_ + auVar6._0_8_;
      auVar4._8_8_ = lVar5 + auVar6._8_8_;
      lVar3 = lVar3 + 0x70;
    } while (lVar3 != 0x150);
    *(undefined1 *)(lVar1 + 600) = 0;
    *(undefined1 *)(lVar1 + 0x290) = 0;
    if (2 < *(int *)(param_4 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x000147caf511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*param_1 + 0x18))();
      return;
    }
  }
  return;
}



// FUNCTION 147caf515 FUN_147caf515 body=304 status=ok
// SIG undefined FUN_147caf515(void)

void FUN_147caf515(double *param_1,double *param_2,double *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar7 = 1.0 / (param_3[5] - dVar1);
  dVar3 = param_2[2];
  dVar9 = 1.0 / (param_3[4] - dVar2);
  dVar4 = param_2[1];
  dVar11 = 1.0 / (param_3[3] - *param_3);
  iVar5 = param_4[1];
  iVar6 = param_4[2];
  fVar10 = (float)*param_4 + -0.01;
  fVar8 = (float)((double)*param_4 * (dVar11 * *param_2 - *param_3 * dVar11));
  if (fVar10 <= fVar8) {
    fVar8 = fVar10;
  }
  fVar10 = 0.0;
  if (fVar8 <= 0.0) {
    fVar8 = fVar10;
  }
  *param_1 = (double)fVar8;
  fVar8 = (float)((double)iVar5 * (dVar9 * dVar4 - dVar2 * dVar9));
  fVar12 = (float)iVar5 + -0.01;
  if (fVar12 <= fVar8) {
    fVar8 = fVar12;
  }
  if (fVar8 <= 0.0) {
    fVar8 = fVar10;
  }
  param_1[1] = (double)fVar8;
  fVar12 = (float)iVar6 + -0.01;
  fVar8 = (float)((double)iVar6 * (dVar7 * dVar3 - dVar1 * dVar7));
  if (fVar12 <= fVar8) {
    fVar8 = fVar12;
  }
  if (fVar8 <= 0.0) {
    fVar8 = fVar10;
  }
  param_1[2] = (double)fVar8;
  return;
}



// FUNCTION 147caf645 FUN_147caf645 body=249 status=ok
// SIG undefined FUN_147caf645(void)

void FUN_147caf645(double *param_1,int *param_2,longlong param_3,longlong *param_4,uint *param_5,
                  uint *param_6,uint *param_7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar4 = *param_2 + -1;
  if ((int)*param_1 < iVar4) {
    iVar4 = (int)*param_1;
  }
  iVar3 = 0;
  if (iVar4 < 1) {
    iVar4 = iVar3;
  }
  iVar7 = param_2[1] + -1;
  if ((int)param_1[1] < iVar7) {
    iVar7 = (int)param_1[1];
  }
  if (iVar7 < 1) {
    iVar7 = iVar3;
  }
  iVar5 = param_2[2] + -1;
  if ((int)param_1[2] < param_2[2] + -1) {
    iVar5 = (int)param_1[2];
  }
  if (iVar5 < 1) {
    iVar5 = iVar3;
  }
  lVar6 = (longlong)((iVar5 * param_2[1] + iVar7) * *param_2 + iVar4);
  bVar1 = *(byte *)(param_3 + 2 + lVar6 * 4);
  bVar2 = *(byte *)(param_3 + 1 + lVar6 * 4);
  *param_5 = (uint)*(byte *)(param_3 + lVar6 * 4);
  param_5[1] = (uint)bVar2;
  param_5[2] = (uint)bVar1;
  *param_6 = (uint)*(byte *)(param_3 + 3 + lVar6 * 4);
  iVar4 = *param_2 + -1;
  if ((int)*param_1 < iVar4) {
    iVar4 = (int)*param_1;
  }
  if (iVar4 < 1) {
    iVar4 = iVar3;
  }
  iVar7 = param_2[1] + -1;
  if ((int)param_1[1] < iVar7) {
    iVar7 = (int)param_1[1];
  }
  if (iVar7 < 1) {
    iVar7 = iVar3;
  }
  iVar5 = param_2[2] + -1;
  if ((int)param_1[2] < param_2[2] + -1) {
    iVar5 = (int)param_1[2];
  }
  if (iVar5 < 1) {
    iVar5 = iVar3;
  }
  *param_7 = (uint)*(byte *)(*param_4 + (longlong)((iVar5 * param_2[1] + iVar7) * *param_2 + iVar4))
  ;
  return;
}



// FUNCTION 147caf73e FUN_147caf73e body=184 status=ok
// SIG undefined FUN_147caf73e(void)

void FUN_147caf73e(double *param_1,double *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined1 in_XMM3 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  dVar7 = 1.0 / (double)param_4;
  dVar2 = param_2[2];
  dVar3 = param_2[1];
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar2 * dVar7;
  auVar8 = roundsd(in_XMM3,auVar8,9);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar3 * dVar7;
  auVar9 = roundsd(ZEXT816(0),auVar9,9);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar7 * *param_2;
  auVar10 = roundsd(ZEXT816(0),auVar10,9);
  iVar1 = param_5 + 1;
  iVar4 = param_3[1];
  iVar5 = param_3[2];
  dVar6 = (double)param_5;
  *param_1 = (dVar7 * *param_2 - auVar10._0_8_) * dVar6 + (double)(*param_3 * iVar1);
  param_1[1] = (dVar3 * dVar7 - auVar9._0_8_) * dVar6 + (double)(iVar4 * iVar1);
  param_1[2] = (dVar2 * dVar7 - auVar8._0_8_) * dVar6 + (double)(iVar1 * iVar5);
  return;
}



// FUNCTION 147caf7f6 FUN_147caf7f6 body=42 status=ok
// SIG undefined FUN_147caf7f6(void)

void FUN_147caf7f6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147caf846 FUN_147caf846 body=96 status=ok
// SIG undefined FUN_147caf846(void)

undefined8 FUN_147caf846(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f0c97a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cafdbf8,1);
  return uVar3;
}



// FUNCTION 147caf8a6 FUN_147caf8a6 body=52 status=ok
// SIG undefined FUN_147caf8a6(void)

void FUN_147caf8a6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147caf8da FUN_147caf8da body=42 status=ok
// SIG undefined FUN_147caf8da(void)

void FUN_147caf8da(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147caf92a FUN_147caf92a body=96 status=ok
// SIG undefined FUN_147caf92a(void)

undefined8 FUN_147caf92a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f37ed2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cafdc80,1);
  return uVar3;
}



// FUNCTION 147caf98a FUN_147caf98a body=52 status=ok
// SIG undefined FUN_147caf98a(void)

void FUN_147caf98a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147caf9be FUN_147caf9be body=42 status=ok
// SIG undefined FUN_147caf9be(void)

void FUN_147caf9be(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147cafa0e FUN_147cafa0e body=96 status=ok
// SIG undefined FUN_147cafa0e(void)

undefined8 FUN_147cafa0e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e6304a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cafdd08,1);
  return uVar3;
}



// FUNCTION 147cafa6e FUN_147cafa6e body=52 status=ok
// SIG undefined FUN_147cafa6e(void)

void FUN_147cafa6e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147cafaa2 FUN_147cafaa2 body=42 status=ok
// SIG undefined FUN_147cafaa2(void)

void FUN_147cafaa2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147cafaf2 FUN_147cafaf2 body=96 status=ok
// SIG undefined FUN_147cafaf2(void)

undefined8 FUN_147cafaf2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e635b4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cafdd90,1);
  return uVar3;
}



// FUNCTION 147cafb52 FUN_147cafb52 body=52 status=ok
// SIG undefined FUN_147cafb52(void)

void FUN_147cafb52(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147cafb86 FUN_147cafb86 body=42 status=ok
// SIG undefined FUN_147cafb86(void)

void FUN_147cafb86(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147cafbd6 FUN_147cafbd6 body=96 status=ok
// SIG undefined FUN_147cafbd6(void)

undefined8 FUN_147cafbd6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e9abf8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cafde18,1);
  return uVar3;
}



// FUNCTION 147cafc36 FUN_147cafc36 body=52 status=ok
// SIG undefined FUN_147cafc36(void)

void FUN_147cafc36(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147cafc6a FUN_147cafc6a body=364 status=ok
// SIG undefined FUN_147cafc6a(void)

void FUN_147cafc6a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14caff0b8 = *param_1;
  DAT_14caff0c0 = *(undefined4 *)(param_1 + 1);
  DAT_14cafeedc = *(undefined1 *)(param_2 + 0x1c);
  DAT_14caff064 = *(undefined1 *)(param_2 + 0x1a4);
  DAT_14caff09c = *(undefined1 *)(param_2 + 0x1dc);
  lVar1 = 0;
  do {
    *(undefined1 *)((longlong)&DAT_14cafef0d + lVar1 + 7) = *(undefined1 *)(param_2 + 0x54 + lVar1);
    lVar1 = lVar1 + 0x38;
  } while (lVar1 != 0x150);
  local_38 = DAT_14caff0c0;
  local_40 = DAT_14caff0b8;
  FUN_143655dba(&DAT_14cafeec0);
  FUN_143656188(&DAT_14cafeec0);
  lVar1 = 0x48;
  do {
    local_48 = DAT_14caff0c0;
    local_50 = DAT_14caff0b8;
    FUN_143655dba((longlong)&DAT_14cafeeb0 + lVar1,&local_50);
    FUN_143656188((longlong)&DAT_14cafeeb0 + lVar1);
    lVar1 = lVar1 + 0x38;
  } while (lVar1 != 0x198);
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    local_58 = DAT_14caff0c0;
    local_60 = DAT_14caff0b8;
    FUN_143655dba(&DAT_14caff048);
    FUN_143656188(&DAT_14caff048);
  }
  local_68 = DAT_14caff0c0;
  local_70 = DAT_14caff0b8;
  FUN_143655dba(&DAT_14caff080);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_143656188(&DAT_14caff080);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cafdd8 FUN_147cafdd8 body=340 status=ok
// SIG undefined FUN_147cafdd8(void)

void FUN_147cafdd8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)(param_1 + 0x1f8);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x1f8) = *param_2;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_3 + 0x1c);
  *(undefined1 *)(param_1 + 0x1a4) = *(undefined1 *)(param_3 + 0x1a4);
  *(undefined1 *)(param_1 + 0x1dc) = *(undefined1 *)(param_3 + 0x1dc);
  lVar2 = 0x54;
  do {
    *(undefined1 *)(param_1 + lVar2) = *(undefined1 *)(param_3 + lVar2);
    lVar2 = lVar2 + 0x38;
  } while (lVar2 != 0x1a4);
  local_40 = *(undefined4 *)(param_1 + 0x200);
  local_48 = *puVar1;
  FUN_143655dba(param_1);
  FUN_143656188(param_1);
  lVar2 = 0x38;
  do {
    local_50 = *(undefined4 *)(param_1 + 0x200);
    local_58 = *puVar1;
    FUN_143655dba(param_1 + lVar2,&local_58);
    FUN_143656188(param_1 + lVar2);
    lVar2 = lVar2 + 0x38;
  } while (lVar2 != 0x188);
  if (*(longlong *)(param_3 + 0x1a8) != 0) {
    local_60 = *(undefined4 *)(param_1 + 0x200);
    local_68 = *puVar1;
    FUN_143655dba(param_1 + 0x188);
    FUN_143656188(param_1 + 0x188);
  }
  local_70 = *(undefined4 *)(param_1 + 0x200);
  local_78 = *puVar1;
  FUN_143655dba(param_1 + 0x1c0);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_143656188(param_1 + 0x1c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147caff2d FUN_147caff2d body=1203 status=ok
// SIG undefined FUN_147caff2d(void)

void FUN_147caff2d(int param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong param_5,
                  longlong param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_118 [44];
  int local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  int local_d0;
  int local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  int local_94;
  undefined1 *local_90;
  int local_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_a8 = 0;
  uStack_a0 = 0;
  local_ec = param_4;
  local_e8 = param_2;
  local_e0 = param_3;
  FUN_1402a9a22(&local_a8,9);
  lVar6 = (longlong)(int)(uint)uStack_a0;
  uVar3 = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < uVar3) {
    uVar5 = uStack_a0 & 0xffffffff;
    uStack_a0._0_4_ = uVar3;
    FUN_14742f52c(&local_a8,uVar5);
    uVar3 = (uint)uStack_a0;
  }
  uStack_a0._0_4_ = uVar3;
  uVar3 = (uint)uStack_a0;
  lVar6 = lVar6 * 0x38;
  uVar4 = *(undefined8 *)(param_6 + 0x28);
  *(undefined8 *)(local_a8 + lVar6) = 0xffffffffffffffff;
  *(undefined4 *)(local_a8 + 8 + lVar6) = 0xffffffff;
  *(undefined8 *)(local_a8 + 0x10 + lVar6) = uVar4;
  *(undefined1 *)(local_a8 + 0x18 + lVar6) = 3;
  *(undefined8 *)(local_a8 + 0x1c + lVar6) = 0x40000000000;
  *(undefined4 *)(local_a8 + 0x24 + lVar6) = 0;
  *(undefined1 *)(local_a8 + 0x30 + lVar6) = 0;
  lVar6 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_14742f52c(&local_a8,uVar3);
  }
  uVar3 = (uint)uStack_a0;
  lVar6 = lVar6 * 0x38;
  uVar4 = *(undefined8 *)(param_6 + 0x1b0);
  *(undefined8 *)(local_a8 + lVar6) = 0xffffffffffffffff;
  *(undefined4 *)(local_a8 + 8 + lVar6) = 0xffffffff;
  *(undefined8 *)(local_a8 + 0x10 + lVar6) = uVar4;
  *(undefined1 *)(local_a8 + 0x18 + lVar6) = 3;
  *(undefined8 *)(local_a8 + 0x1c + lVar6) = 0x40000000000;
  *(undefined4 *)(local_a8 + 0x24 + lVar6) = 0;
  *(undefined1 *)(local_a8 + 0x30 + lVar6) = 0;
  lVar6 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_14742f52c(&local_a8,uVar3);
  }
  lVar6 = lVar6 * 0x38;
  uVar4 = *(undefined8 *)(param_6 + 0x1e8);
  *(undefined8 *)(local_a8 + lVar6) = 0xffffffffffffffff;
  *(undefined4 *)(local_a8 + 8 + lVar6) = 0xffffffff;
  *(undefined8 *)(local_a8 + 0x10 + lVar6) = uVar4;
  *(undefined1 *)(local_a8 + 0x18 + lVar6) = 3;
  *(undefined8 *)(local_a8 + 0x1c + lVar6) = 0x40000000000;
  *(undefined4 *)(local_a8 + 0x24 + lVar6) = 0;
  *(undefined1 *)(local_a8 + 0x30 + lVar6) = 0;
  lVar6 = 0x60;
  do {
    uVar5 = uStack_a0;
    lVar10 = (longlong)(int)(uint)uStack_a0;
    uVar3 = (uint)uStack_a0 + 1;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar3);
    if (uStack_a0._4_4_ < uVar3) {
      FUN_14742f52c(&local_a8,uVar5 & 0xffffffff);
    }
    lVar10 = lVar10 * 0x38;
    uVar4 = *(undefined8 *)(param_6 + lVar6);
    *(undefined8 *)(local_a8 + lVar10) = 0xffffffffffffffff;
    *(undefined4 *)(local_a8 + 8 + lVar10) = 0xffffffff;
    *(undefined8 *)(local_a8 + 0x10 + lVar10) = uVar4;
    *(undefined1 *)(local_a8 + 0x18 + lVar10) = 3;
    *(undefined8 *)(local_a8 + 0x1c + lVar10) = 0x40000000000;
    *(undefined4 *)(local_a8 + 0x24 + lVar10) = 0;
    *(undefined1 *)(local_a8 + 0x30 + lVar10) = 0;
    lVar6 = lVar6 + 0x38;
  } while (lVar6 != 0x1b0);
  local_b8 = local_a8;
  local_b0 = (uint)uStack_a0;
  iVar7 = 0;
  FUN_144760590(&DAT_14ca85100);
  uVar4 = FUN_144b1c618(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_1 * 2));
  iVar2 = local_ec;
  if (0 < local_ec) {
    do {
      lVar6 = *(longlong *)(param_5 + 0x1a8);
      FUN_145f37c64();
      FUN_1448e935e(uVar4,&local_88,&DAT_14cafa938,lVar6 != 0);
      FUN_145f37c64();
      local_c8 = local_88;
      iStack_c4 = iStack_84;
      uStack_c0 = (undefined4)uStack_80;
      uStack_bc = uStack_80._4_4_;
      iVar9 = (int)local_e8 + iVar7;
      iVar8 = iVar7 + (int)local_e0;
      uStack_80 = *(undefined8 *)(param_5 + 0x20);
      local_78 = *(undefined8 *)(param_5 + 0x1a8);
      local_70 = *(undefined8 *)(param_5 + 0x1e0);
      local_68 = *(undefined8 *)(param_6 + 0x28);
      local_60 = *(undefined8 *)(param_6 + 0x1b0);
      local_58 = *(undefined8 *)(param_6 + 0x1e8);
      iVar1 = DAT_14ca84f24;
      if (iVar2 < DAT_14ca84f24) {
        iVar1 = iVar2;
      }
      local_88 = iVar9;
      iStack_84 = iVar8;
      FUN_145f37ed2();
      local_90 = &DAT_100000001;
      local_94 = iVar1;
      FUN_147cc4018(&local_c8,&local_88,&local_94);
      lVar6 = 0;
      do {
        FUN_145e62ddc();
        FUN_1448e935e(uVar4,&local_88,&DAT_14cafaa60,0);
        FUN_145e62ddc();
        local_c8 = local_88;
        iStack_c4 = iStack_84;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        uStack_80 = *(undefined8 *)(param_5 + 0x58 + lVar6);
        local_78 = *(undefined8 *)(param_6 + 0x60 + lVar6);
        iVar1 = DAT_14ca84f24;
        if (iVar2 < DAT_14ca84f24) {
          iVar1 = iVar2;
        }
        local_88 = iVar9;
        iStack_84 = iVar8;
        FUN_145e6304a();
        local_90 = &DAT_100000001;
        local_94 = iVar1;
        FUN_147cc4269(&local_c8,&local_88);
        lVar6 = lVar6 + 0x38;
      } while (lVar6 != 0x150);
      iVar7 = iVar7 + DAT_14ca84f24;
    } while (iVar7 < iVar2);
  }
  if ((longlong)(int)(uint)uStack_a0 != 0) {
    lVar6 = 0;
    do {
      *(undefined4 *)(local_a8 + 0x1c + lVar6) = *(undefined4 *)(local_a8 + 0x20 + lVar6);
      *(undefined4 *)(local_a8 + 0x20 + lVar6) = 0x70;
      lVar6 = lVar6 + 0x38;
    } while ((longlong)(int)(uint)uStack_a0 * 0x38 - lVar6 != 0);
  }
  local_d8 = local_a8;
  local_d0 = (uint)uStack_a0;
  FUN_144760590(&DAT_14ca85100,&local_d8,0);
  FUN_144705e08(local_a8,uStack_a0 & 0xffffffff);
  FUN_14006d152(&local_a8);
  FUN_1412117b0(param_6);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb03e1 FUN_147cb03e1 body=1165 status=ok
// SIG undefined FUN_147cb03e1(void)

void FUN_147cb03e1(int param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_108 [36];
  int local_e4;
  undefined8 local_e0;
  longlong local_d8;
  int local_d0;
  int local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  int local_94;
  undefined1 *local_90;
  int local_88;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = 0;
  uStack_a0 = 0;
  local_e0 = param_2;
  FUN_1402a9a22(&local_a8,9);
  lVar6 = (longlong)(int)(uint)uStack_a0;
  uVar1 = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < uVar1) {
    uVar3 = uStack_a0 & 0xffffffff;
    uStack_a0._0_4_ = uVar1;
    FUN_14742f52c(&local_a8,uVar3);
    uVar1 = (uint)uStack_a0;
  }
  uStack_a0._0_4_ = uVar1;
  uVar1 = (uint)uStack_a0;
  lVar6 = lVar6 * 0x38;
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  *(undefined8 *)(local_a8 + lVar6) = 0xffffffffffffffff;
  *(undefined4 *)(local_a8 + 8 + lVar6) = 0xffffffff;
  *(undefined8 *)(local_a8 + 0x10 + lVar6) = uVar2;
  *(undefined1 *)(local_a8 + 0x18 + lVar6) = 3;
  *(undefined8 *)(local_a8 + 0x1c + lVar6) = 0x40000000000;
  *(undefined4 *)(local_a8 + 0x24 + lVar6) = 0;
  *(undefined1 *)(local_a8 + 0x30 + lVar6) = 0;
  lVar6 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_14742f52c(&local_a8,uVar1);
  }
  uVar1 = (uint)uStack_a0;
  lVar6 = lVar6 * 0x38;
  uVar2 = *(undefined8 *)(param_5 + 0x1b0);
  *(undefined8 *)(local_a8 + lVar6) = 0xffffffffffffffff;
  *(undefined4 *)(local_a8 + 8 + lVar6) = 0xffffffff;
  *(undefined8 *)(local_a8 + 0x10 + lVar6) = uVar2;
  *(undefined1 *)(local_a8 + 0x18 + lVar6) = 3;
  *(undefined8 *)(local_a8 + 0x1c + lVar6) = 0x40000000000;
  *(undefined4 *)(local_a8 + 0x24 + lVar6) = 0;
  *(undefined1 *)(local_a8 + 0x30 + lVar6) = 0;
  lVar6 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_14742f52c(&local_a8,uVar1);
  }
  lVar6 = lVar6 * 0x38;
  uVar2 = *(undefined8 *)(param_5 + 0x1e8);
  *(undefined8 *)(local_a8 + lVar6) = 0xffffffffffffffff;
  *(undefined4 *)(local_a8 + 8 + lVar6) = 0xffffffff;
  *(undefined8 *)(local_a8 + 0x10 + lVar6) = uVar2;
  *(undefined1 *)(local_a8 + 0x18 + lVar6) = 3;
  *(undefined8 *)(local_a8 + 0x1c + lVar6) = 0x40000000000;
  *(undefined4 *)(local_a8 + 0x24 + lVar6) = 0;
  *(undefined1 *)(local_a8 + 0x30 + lVar6) = 0;
  lVar6 = 0x60;
  do {
    uVar3 = uStack_a0;
    lVar7 = (longlong)(int)(uint)uStack_a0;
    uVar1 = (uint)uStack_a0 + 1;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar1);
    if (uStack_a0._4_4_ < uVar1) {
      FUN_14742f52c(&local_a8,uVar3 & 0xffffffff);
    }
    lVar7 = lVar7 * 0x38;
    uVar2 = *(undefined8 *)(param_5 + lVar6);
    *(undefined8 *)(local_a8 + lVar7) = 0xffffffffffffffff;
    *(undefined4 *)(local_a8 + 8 + lVar7) = 0xffffffff;
    *(undefined8 *)(local_a8 + 0x10 + lVar7) = uVar2;
    *(undefined1 *)(local_a8 + 0x18 + lVar7) = 3;
    *(undefined8 *)(local_a8 + 0x1c + lVar7) = 0x40000000000;
    *(undefined4 *)(local_a8 + 0x24 + lVar7) = 0;
    *(undefined1 *)(local_a8 + 0x30 + lVar7) = 0;
    lVar6 = lVar6 + 0x38;
  } while (lVar6 != 0x1b0);
  local_b8 = local_a8;
  local_b0 = (uint)uStack_a0;
  iVar4 = 0;
  FUN_144760590(&DAT_14ca85100);
  uVar2 = FUN_144b1c618(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_1 * 2));
  if (0 < param_3) {
    do {
      lVar6 = *(longlong *)(param_4 + 0x1a8);
      FUN_145f37c64();
      FUN_1448e935e(uVar2,&local_88,&DAT_14cafa938,lVar6 != 0);
      FUN_145f37c64();
      local_c8 = local_88;
      iStack_c4 = iStack_84;
      uStack_c0 = (undefined4)uStack_80;
      uStack_bc = uStack_80._4_4_;
      local_e4 = (int)local_e0 + iVar4;
      uStack_80 = *(undefined8 *)(param_4 + 0x20);
      local_78 = *(undefined8 *)(param_4 + 0x1a8);
      local_70 = *(undefined8 *)(param_4 + 0x1e0);
      local_68 = *(undefined8 *)(param_5 + 0x28);
      local_60 = *(undefined8 *)(param_5 + 0x1b0);
      local_58 = *(undefined8 *)(param_5 + 0x1e8);
      iVar5 = DAT_14ca84f24;
      if (param_3 < DAT_14ca84f24) {
        iVar5 = param_3;
      }
      local_88 = iVar4;
      iStack_84 = local_e4;
      FUN_145f37ed2();
      local_90 = &DAT_100000001;
      local_94 = iVar5;
      FUN_147cc4018(&local_c8,&local_88,&local_94);
      lVar6 = 0;
      do {
        FUN_145e62ddc();
        FUN_1448e935e(uVar2,&local_88,&DAT_14cafaa60,0);
        FUN_145e62ddc();
        local_c8 = local_88;
        iStack_c4 = iStack_84;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        iStack_84 = local_e4;
        uStack_80 = *(undefined8 *)(param_4 + 0x58 + lVar6);
        local_78 = *(undefined8 *)(param_5 + 0x60 + lVar6);
        iVar5 = DAT_14ca84f24;
        if (param_3 < DAT_14ca84f24) {
          iVar5 = param_3;
        }
        local_88 = iVar4;
        FUN_145e6304a();
        local_90 = &DAT_100000001;
        local_94 = iVar5;
        FUN_147cc4269(&local_c8,&local_88);
        lVar6 = lVar6 + 0x38;
      } while (lVar6 != 0x150);
      iVar4 = iVar4 + DAT_14ca84f24;
    } while (iVar4 < param_3);
  }
  if ((longlong)(int)(uint)uStack_a0 != 0) {
    lVar6 = 0;
    do {
      *(undefined4 *)(local_a8 + 0x1c + lVar6) = *(undefined4 *)(local_a8 + 0x20 + lVar6);
      *(undefined4 *)(local_a8 + 0x20 + lVar6) = 0x70;
      lVar6 = lVar6 + 0x38;
    } while ((longlong)(int)(uint)uStack_a0 * 0x38 - lVar6 != 0);
  }
  local_d8 = local_a8;
  local_d0 = (uint)uStack_a0;
  FUN_144760590(&DAT_14ca85100,&local_d8,0);
  FUN_144705e08(local_a8,uStack_a0 & 0xffffffff);
  FUN_14006d152(&local_a8);
  FUN_1412117b0(param_5);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb0870 FUN_147cb0870 body=182 status=ok
// SIG undefined FUN_147cb0870(void)

longlong * FUN_147cb0870(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  param_1[1] = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x220);
  param_1[2] = param_3;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14aa59820;
  puVar2[2] = param_1;
  uVar3 = FUN_140083894();
  FUN_145a5c008(uVar3,puVar2);
  puVar1 = (undefined8 *)param_1[0x16];
  param_1[0x16] = (longlong)puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 147cb0926 FUN_147cb0926 body=92 status=ok
// SIG undefined FUN_147cb0926(void)

void FUN_147cb0926(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_147cbf55e(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147cb0982 FUN_147cb0982 body=333 status=ok
// SIG undefined FUN_147cb0982(void)

undefined4 FUN_147cb0982(longlong param_1,float param_2)

{
  double dVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  QueryPerformanceCounter(&local_78);
  dVar1 = (double)param_2 + (double)local_78.QuadPart * DAT_14c83f420 + 16777216.0;
  if ((param_2 == 0.0) && (!NAN(param_2))) {
    dVar1 = 3.4028234663852886e+38;
  }
  uVar3 = 0;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    lVar4 = lVar5 + (longlong)*(int *)(param_1 + 0x20) * 0x18;
    do {
      while( true ) {
        QueryPerformanceCounter(&local_78);
        if ((float)(dVar1 - ((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0)) < 0.001)
        goto LAB_147cb0a73;
        if ((*(longlong **)(lVar5 + 8) == (longlong *)0x0) ||
           (cVar2 = (**(code **)(**(longlong **)(lVar5 + 8) + 0x10))(), cVar2 == '\0')) break;
        FUN_147cb135e(param_1);
        lVar5 = *(longlong *)(param_1 + 0x18);
        lVar4 = lVar5 + (longlong)*(int *)(param_1 + 0x20) * 0x18;
        uVar3 = 0;
        if ((longlong)*(int *)(param_1 + 0x20) == 0) goto LAB_147cb0a76;
      }
      lVar5 = lVar5 + 0x18;
    } while (lVar5 != lVar4);
LAB_147cb0a73:
    uVar3 = *(undefined4 *)(param_1 + 0x20);
  }
LAB_147cb0a76:
  if ((local_70 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147cb0ad0 FUN_147cb0ad0 body=343 status=ok
// SIG undefined FUN_147cb0ad0(void)

void FUN_147cb0ad0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  iVar6 = 0;
  local_58 = lVar2;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x50);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (local_58 != lVar2)) {
    do {
      uVar3 = *(undefined8 *)(*local_88 + (longlong)iStack_6c * 0x18);
      lVar4 = *(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      if (lVar4 != 0) {
        FUN_14099b8fe(lVar4,param_2);
      }
      FUN_143657492(uVar3);
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (local_78 != lVar2 || iStack_6c != iVar6));
  }
  FUN_147cc46ea(plVar1);
  puVar5 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    (**(code **)*puVar5)(puVar5,1);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb0c28 FUN_147cb0c28 body=190 status=ok
// SIG undefined FUN_147cb0c28(void)

longlong FUN_147cb0c28(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1427d8864(param_2 + 0x40);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14aa59940;
    local_68[0] = FUN_143661696;
    local_40 = param_2;
    lVar1 = FUN_1468888b6(param_2 + 0x40,3,local_68,0);
    if (lVar1 == 0) {
      FUN_147dc0abc(*(undefined8 *)(param_1 + 0x10),param_2);
    }
    if (local_68[0] != (code *)0x0) {
      pppuVar2 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar2 = &local_48;
      }
      (*(code *)(*pppuVar2)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb0ce8 FUN_147cb0ce8 body=1159 status=ok
// SIG undefined FUN_147cb0ce8(void)

void FUN_147cb0ce8(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
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
  ulonglong uVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  ulonglong *puVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  longlong *plVar25;
  ulonglong *puVar26;
  undefined1 auStack_138 [40];
  longlong *local_110;
  undefined4 *local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  undefined8 uStack_d0;
  ulonglong *local_c8;
  int local_c0;
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
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_108 = param_2;
  FUN_147dc0988(param_1[2],&local_c8,param_2,1);
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar1 = param_1 + 5;
  FUN_147cb1170(plVar1);
  if ((longlong)local_c0 != 0) {
    puVar21 = local_c8 + local_c0;
    puVar26 = local_c8;
    do {
      uVar16 = uStack_d0;
      uVar3 = *puVar26;
      if ((int)param_1[6] != *(int *)((longlong)param_1 + 0x5c)) {
        uVar17 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        plVar18 = (longlong *)param_1[0xd];
        if ((longlong *)param_1[0xd] == (longlong *)0x0) {
          plVar18 = param_1 + 0xc;
        }
        iVar23 = *(int *)((longlong)plVar18 +
                         (ulonglong)((int)param_1[0xe] - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4);
        if (iVar23 != -1) {
          do {
            puVar2 = (ulonglong *)(*plVar1 + (longlong)iVar23 * 0x18);
            if (*puVar2 == uVar3) {
              if (((ulonglong)(puVar2 + 1) & 0xfffffffffffffff7) != 0) {
                FUN_147cb12da(local_98,uVar3);
                goto LAB_147cb100a;
              }
              break;
            }
            iVar23 = (int)puVar2[2];
          } while (iVar23 != -1);
        }
      }
      lVar24 = (longlong)(int)uStack_d0;
      uVar17 = (int)uStack_d0 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar17);
      if (uStack_d0._4_4_ < uVar17) {
        FUN_147cc52e4(&local_d8,uVar16 & 0xffffffff);
      }
      local_d8[lVar24] = uVar3;
LAB_147cb100a:
      puVar26 = puVar26 + 1;
    } while (puVar26 != puVar21);
    if ((longlong)(int)uStack_d0 != 0) {
      plVar18 = local_d8 + (int)uStack_d0;
      local_110 = param_1 + 3;
      plVar25 = local_d8;
      do {
        lVar24 = *plVar25;
        if ((longlong)(int)param_1[4] != 0) {
          lVar19 = param_1[3];
          lVar22 = (longlong)(int)param_1[4] * 0x18;
          do {
            if (*(longlong *)(lVar19 + 0x10) == lVar24) {
              if (lVar19 != 0) goto LAB_147cb1150;
              break;
            }
            lVar19 = lVar19 + 0x18;
            lVar22 = lVar22 + -0x18;
          } while (lVar22 != 0);
        }
        lVar19 = FUN_147cb0c28(param_1,lVar24);
        iVar23 = (int)param_1[4];
        lVar22 = (longlong)iVar23;
        *(uint *)(param_1 + 4) = iVar23 + 1U;
        if (*(uint *)((longlong)param_1 + 0x24) < iVar23 + 1U) {
          FUN_147cc536a(local_110,iVar23);
        }
        lVar4 = *local_110;
        *(uint *)(lVar4 + lVar22 * 0x18) = (lVar19 == 0) + 1;
        *(longlong *)(lVar4 + 8 + lVar22 * 0x18) = lVar19;
        *(longlong *)(lVar4 + 0x10 + lVar22 * 0x18) = lVar24;
LAB_147cb1150:
        plVar25 = plVar25 + 1;
      } while (plVar25 != plVar18);
    }
  }
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar23 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar23 = local_70;
  }
  local_e8 = local_a8;
  iStack_e4 = iStack_a4;
  local_e0 = local_a0;
  local_dc = local_9c;
  local_f8 = local_b8;
  local_f0 = local_b0;
  local_100 = local_98;
  if ((iStack_a4 != iVar23) || (local_b0 != local_88)) {
    do {
      uVar3 = *(ulonglong *)(*local_100 + (longlong)iStack_e4 * 0x10);
      if ((int)param_1[6] != *(int *)((longlong)param_1 + 0x5c)) {
        uVar17 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
        plVar18 = (longlong *)param_1[0xd];
        if ((longlong *)param_1[0xd] == (longlong *)0x0) {
          plVar18 = param_1 + 0xc;
        }
        iVar20 = *(int *)((longlong)plVar18 +
                         (ulonglong)((int)param_1[0xe] - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4);
        if (iVar20 != -1) {
          do {
            puVar21 = (ulonglong *)(*plVar1 + (longlong)iVar20 * 0x18);
            if (*puVar21 == uVar3) goto LAB_147cb0f42;
            iVar20 = (int)puVar21[2];
          } while (iVar20 != -1);
        }
      }
      puVar21 = (ulonglong *)0x0;
LAB_147cb0f42:
      if (puVar21[1] != 0) {
        FUN_14099b8fe(puVar21[1],*(undefined8 *)(*param_1 + 0x218));
      }
      FUN_147cc53fe(plVar1,uVar3);
      FUN_143657492(uVar3);
      local_e8 = local_e8 & ~local_f8._4_4_;
      FUN_1449c0562(&local_f8);
    } while (local_100 != local_98 || (local_f0 != local_88 || iStack_e4 != iVar23));
  }
  param_1[0x15] = *(longlong *)(local_108 + 0xc);
  uVar5 = *local_108;
  uVar6 = local_108[1];
  uVar7 = local_108[2];
  uVar8 = local_108[3];
  uVar9 = local_108[4];
  uVar10 = local_108[5];
  uVar11 = local_108[6];
  uVar12 = local_108[7];
  uVar13 = local_108[9];
  uVar14 = local_108[10];
  uVar15 = local_108[0xb];
  *(undefined4 *)(param_1 + 0x13) = local_108[8];
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar13;
  *(undefined4 *)(param_1 + 0x14) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar15;
  *(undefined4 *)(param_1 + 0x11) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar10;
  *(undefined4 *)(param_1 + 0x12) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar12;
  *(undefined4 *)(param_1 + 0xf) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar6;
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar8;
  FUN_147cb135e(param_1);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_147cc49ea(local_98);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (ulonglong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cb1170 FUN_147cb1170 body=359 status=ok
// SIG undefined FUN_147cb1170(void)

void FUN_147cb1170(longlong *param_1,longlong param_2)

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
  FUN_147cc4a78(param_2);
  uVar3 = (longlong)(int)param_1[1] - (longlong)*(int *)((longlong)param_1 + 0x34);
  uVar2 = (uint)uVar3;
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar3);
    }
    FUN_147cc4c00(param_2,uVar3 & 0xffffffff);
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
      FUN_147cc4d9e(param_2);
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
      FUN_147cc4f7c(param_2,&local_40,(longlong)iStack_4c * 0x18 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb12da FUN_147cb12da body=132 status=ok
// SIG undefined FUN_147cb12da(void)

void FUN_147cb12da(longlong *param_1,ulonglong param_2)

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
          FUN_147cc528a(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147cb135e FUN_147cb135e body=695 status=ok
// SIG undefined FUN_147cb135e(void)

void FUN_147cb135e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 *local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 **local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  lVar6 = param_1[4];
  if ((longlong)(int)lVar6 != 0) {
    lVar15 = param_1[3];
    lVar12 = lVar15 + 0x10;
    lVar11 = 0;
    do {
      uVar7 = uStack_80;
      if (*(int *)(lVar15 + lVar11) == 1) {
        cVar9 = (**(code **)(**(longlong **)(lVar15 + 8 + lVar11) + 8))();
        uVar8 = uStack_80;
        uVar7 = uStack_90;
        if ((cVar9 == '\0') ||
           (lVar13 = *(longlong *)(lVar12 + lVar11), *(longlong *)(lVar13 + 0x38) == 0)) {
          lVar13 = (longlong)(int)uStack_90;
          uVar10 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
          if (uStack_90._4_4_ < uVar10) {
            FUN_147cc536a(&local_98,uVar7 & 0xffffffff);
          }
          puVar2 = (undefined8 *)(lVar12 + lVar11);
          *(undefined8 *)(local_98 + 0x10 + lVar13 * 0x18) = *puVar2;
          uVar3 = *(undefined4 *)((longlong)puVar2 + -0xc);
          uVar4 = *(undefined4 *)(puVar2 + -1);
          uVar5 = *(undefined4 *)((longlong)puVar2 + -4);
          puVar1 = (undefined4 *)(local_98 + lVar13 * 0x18);
          *puVar1 = *(undefined4 *)(puVar2 + -2);
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
        }
        else {
          lVar14 = (longlong)(int)uStack_80;
          uVar10 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
          if (uStack_80._4_4_ < uVar10) {
            FUN_147cc52e4(&local_88,uVar8 & 0xffffffff);
            lVar13 = *(longlong *)(lVar12 + lVar11);
          }
          *(longlong *)(local_88 + lVar14 * 8) = lVar13;
          puVar2 = *(undefined8 **)(lVar15 + 8 + lVar11);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          *(undefined8 *)(lVar15 + 8 + lVar11) = 0;
          *(undefined4 *)(lVar15 + lVar11) = 2;
        }
      }
      else if (*(int *)(lVar15 + lVar11) == 2) {
        lVar13 = (longlong)(int)uStack_80;
        uVar10 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
        if (uStack_80._4_4_ < uVar10) {
          FUN_147cc52e4(&local_88,uVar7 & 0xffffffff);
        }
        *(undefined8 *)(local_88 + lVar13 * 8) = *(undefined8 *)(lVar12 + lVar11);
      }
      lVar11 = lVar11 + 0x18;
    } while ((longlong)(int)lVar6 * 0x18 != lVar11);
  }
  if (param_1 + 3 != &local_98) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = local_98;
    local_98 = 0;
    *(int *)(param_1 + 4) = (int)uStack_90;
    *(uint *)((longlong)param_1 + 0x24) = uStack_90._4_4_;
    uStack_90 = 0;
  }
  lVar6 = local_88;
  lVar15 = (longlong)(int)uStack_80;
  if (lVar15 != 0) {
    lVar11 = 0;
    do {
      lVar12 = *(longlong *)(lVar6 + lVar11);
      local_a8 = (undefined8 *)0x0;
      local_a0 = lVar12;
      if (*(longlong *)(lVar12 + 0x38) != 0) {
        local_a8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        *local_a8 = 0;
        *(undefined1 *)(local_a8 + 1) = 0;
        *(undefined8 *)((longlong)local_a8 + 0xc) = 0;
        local_a8[3] = 0;
        local_a8[4] = 0;
        local_a8[5] = 0;
        local_b8 = 0;
        FUN_143656e58(local_a8,*(undefined8 *)(*param_1 + 0x218),param_1[1],
                      *(undefined8 *)(lVar12 + 0x38));
      }
      local_78 = &local_a0;
      local_70 = &local_a8;
      FUN_147cc554c(param_1 + 5,local_64,&local_78);
      lVar11 = lVar11 + 8;
    } while (lVar15 * 8 != lVar11);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cb1616 FUN_147cb1616 body=32 status=ok
// SIG undefined FUN_147cb1616(void)

undefined8 FUN_147cb1616(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FPreviewScene");
  return param_2;
}



// FUNCTION 147cb1636 FUN_147cb1636 body=18 status=ok
// SIG undefined FUN_147cb1636(void)

void FUN_147cb1636(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x2cc) = param_2;
  }
  return;
}



// FUNCTION 147cb1648 FUN_147cb1648 body=14 status=ok
// SIG undefined FUN_147cb1648(void)

void FUN_147cb1648(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if ((((*(longlong *)(lVar1 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(lVar1 + 0xa8) + 100) & 0x20) != 0)) ||
      ((*(byte *)(lVar1 + 0x9c) & 1) == 0)) || (*(char *)(lVar1 + 0x1fb) != '\0')) {
    if ((*(float *)(lVar1 + 0x2cc) != param_2) || (NAN(*(float *)(lVar1 + 0x2cc)) || NAN(param_2)))
    {
      *(float *)(lVar1 + 0x2cc) = param_2;
      FUN_14349a0f6();
      return;
    }
  }
  return;
}



// FUNCTION 147cb168e FUN_147cb168e body=15 status=ok
// SIG undefined FUN_147cb168e(void)

void FUN_147cb168e(longlong param_1,undefined8 param_2)

{
  FUN_143605d98(param_1 + 0x410,param_2,1);
  return;
}



// FUNCTION 147cb169e FUN_147cb169e body=36 status=ok
// SIG undefined FUN_147cb169e(void)

void FUN_147cb169e(longlong param_1,char param_2)

{
  if (((*(byte *)(param_1 + 0x2e8) & 4) == 0) != (bool)param_2) {
    return;
  }
  *(byte *)(param_1 + 0x2e8) = *(byte *)(param_1 + 0x2e8) & 0xfb | param_2 << 2;
  FUN_1406cc378();
  return;
}



// FUNCTION 147cb16c2 FUN_147cb16c2 body=80 status=ok
// SIG undefined FUN_147cb16c2(void)

void FUN_147cb16c2(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,0,0,0xffffffff);
  if ((param_1 != (longlong *)0x0 && lVar1 != 0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
    FUN_147c478a0(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 147cb1712 FUN_147cb1712 body=911 status=ok
// SIG undefined FUN_147cb1712(void)

void FUN_147cb1712(longlong *param_1,undefined8 **param_2,longlong param_3,undefined4 param_4)

{
  double dVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong **pplVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 **local_138;
  longlong *local_130;
  undefined4 local_128;
  longlong *local_120;
  undefined4 local_118;
  longlong *local_110;
  undefined4 local_108;
  longlong *local_100;
  undefined4 local_f8;
  longlong local_f0;
  int local_e8;
  longlong local_e0;
  int local_d8;
  undefined8 *local_d0;
  double local_c8;
  double local_c0;
  longlong local_b8;
  int local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_78 = param_3;
  lVar5 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar5 != 0) {
    local_140 = 0;
    local_148 = 0xffffffffffffffff;
    FUN_147c47d80(lVar5,param_2,1,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
  }
  param_1 = param_1 + 0x57;
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_88);
    local_98 = local_88;
    local_90 = local_80;
    FUN_14015671e(local_68);
    lVar5 = local_88;
    local_a8 = 0;
    uStack_a0 = 0;
    if ((longlong)local_80 != 0) {
      lVar8 = 0;
      local_138 = param_2;
      do {
        local_70 = *(undefined8 *)(lVar5 + lVar8);
        local_c8 = (double)CONCAT44(local_c8._4_4_,1);
        local_d0 = &local_70;
        cVar3 = FUN_144b06fd6(local_50,&local_d0);
        uVar2 = uStack_a0;
        if (cVar3 == '\0') {
          lVar9 = (longlong)(int)uStack_a0;
          uVar4 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar4);
          if (uStack_a0._4_4_ < uVar4) {
            FUN_14075a758(&local_a8,uVar2 & 0xffffffff);
          }
          *(undefined8 *)(local_a8 + lVar9 * 8) = *(undefined8 *)(lVar5 + lVar8);
        }
        lVar8 = lVar8 + 8;
        param_2 = local_138;
      } while ((longlong)local_80 * 8 != lVar8);
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
    local_88 = local_a8;
    local_80 = (int)uStack_a0;
    local_7c = uStack_a0._4_4_;
    if ((char)param_4 == '\0') {
      plVar7 = &local_f0;
      local_f0 = local_a8;
      local_e8 = (int)uStack_a0;
    }
    else {
      local_b8 = local_a8;
      local_b0 = (int)uStack_a0;
      fVar10 = (float)FUN_140b2620e(local_50);
      dVar1 = (double)fVar10;
      local_c0 = (double)param_2[2] * dVar1;
      local_c8 = (double)param_2[1] * dVar1;
      local_d0 = (undefined8 *)(dVar1 * (double)*param_2);
      param_2 = &local_d0;
      plVar7 = &local_e0;
      local_e0 = local_88;
      local_d8 = local_80;
    }
    FUN_146e20cc2(local_50,plVar7,param_2,1);
    FUN_1448635f4(local_68);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_88 = (**(code **)(*param_1 + 0x18))(param_1,&local_78);
    if (local_88 != 0) {
      local_f8 = 1;
      local_100 = &local_88;
      FUN_14015671e(local_68);
      if ((char)param_4 == '\0') {
        pplVar6 = &local_130;
        local_128 = 1;
        local_130 = &local_88;
      }
      else {
        local_108 = 1;
        local_110 = &local_88;
        fVar10 = (float)FUN_140b2620e(local_50);
        dVar1 = (double)fVar10;
        local_c0 = (double)param_2[2] * dVar1;
        local_c8 = (double)param_2[1] * dVar1;
        local_d0 = (undefined8 *)(dVar1 * (double)*param_2);
        param_2 = &local_d0;
        pplVar6 = &local_120;
        local_118 = 1;
        local_120 = &local_88;
      }
      FUN_146e20cc2(local_50,pplVar6,param_2,1);
      FUN_1448635f4(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb1aa2 FUN_147cb1aa2 body=86 status=ok
// SIG undefined FUN_147cb1aa2(void)

void FUN_147cb1aa2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_4,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_1458bf406(lVar1,param_2,param_3,1,1,0xffffffffffffffff,0);
  }
  return;
}



// FUNCTION 147cb1af8 FUN_147cb1af8 body=118 status=ok
// SIG undefined FUN_147cb1af8(void)

void FUN_147cb1af8(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x2dd) & 0x40) == 0) {
    lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
    if (lVar1 != 0) {
      FUN_147c48170(lVar1,param_2,param_3,param_4,param_5,param_6,1);
    }
  }
  return;
}



// FUNCTION 147cb1b6e FUN_147cb1b6e body=664 status=ok
// SIG undefined FUN_147cb1b6e(void)

void FUN_147cb1b6e(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 **local_e8;
  undefined4 local_e0;
  undefined8 **local_d8;
  undefined4 local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_88 = param_3;
  lVar4 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar4 != 0) {
    local_100 = 0;
    local_108 = 0xffffffffffffffff;
    FUN_147c47f06(lVar4,param_2,1,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
  }
  param_1 = param_1 + 0x57;
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_98);
    local_a8 = local_98;
    local_a0 = local_90;
    FUN_14015671e(local_68);
    lVar4 = local_98;
    local_b8 = 0;
    uStack_b0 = 0;
    if ((longlong)local_90 != 0) {
      lVar5 = 0;
      local_f0 = param_2;
      do {
        local_70 = *(undefined8 *)(lVar4 + lVar5);
        local_78 = 1;
        local_80 = &local_70;
        cVar2 = FUN_144b06fd6(local_50,&local_80);
        uVar1 = uStack_b0;
        if (cVar2 == '\0') {
          lVar6 = (longlong)(int)uStack_b0;
          uVar3 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar3);
          if (uStack_b0._4_4_ < uVar3) {
            FUN_14075a758(&local_b8,uVar1 & 0xffffffff);
          }
          *(undefined8 *)(local_b8 + lVar6 * 8) = *(undefined8 *)(lVar4 + lVar5);
        }
        lVar5 = lVar5 + 8;
        param_2 = local_f0;
      } while ((longlong)local_90 * 8 != lVar5);
    }
    if (local_98 != 0) {
      FUN_1400020a8(local_98);
    }
    local_98 = local_b8;
    local_90 = (int)uStack_b0;
    local_8c = uStack_b0._4_4_;
    local_c8 = local_b8;
    local_c0 = (int)uStack_b0;
    local_108 = CONCAT71(local_108._1_7_,(char)param_4);
    FUN_146e20e5a(local_50,&local_c8,param_2,1);
    FUN_1448635f4(local_68);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_80 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,&local_88);
    if (local_80 != (undefined8 *)0x0) {
      local_d0 = 1;
      local_d8 = &local_80;
      FUN_14015671e(local_68);
      local_e0 = 1;
      local_108 = CONCAT71(local_108._1_7_,(char)param_4);
      local_e8 = &local_80;
      FUN_146e20e5a(local_50,&local_e8,param_2,1);
      FUN_1448635f4(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb1e08 FUN_147cb1e08 body=218 status=ok
// SIG undefined FUN_147cb1e08(void)

undefined8 *
FUN_147cb1e08(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_4;
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_4,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_147c47b24(lVar1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  lVar1 = (**(code **)(param_1[0x57] + 0x18))(param_1 + 0x57,&local_50);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    FUN_1457e87ce(local_48,lVar1);
    FUN_146e200a4(local_30,param_2,lVar1,param_3);
    FUN_1448635f4(local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147cb1ee4 FUN_147cb1ee4 body=80 status=ok
// SIG undefined FUN_147cb1ee4(void)

void FUN_147cb1ee4(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_4,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_147c47c78(lVar1,param_2,param_3,1);
    return;
  }
  return;
}



// FUNCTION 147cb1f34 FUN_147cb1f34 body=205 status=ok
// SIG undefined FUN_147cb1f34(void)

undefined8 * FUN_147cb1f34(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_3;
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_14141a270(lVar1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  lVar1 = (**(code **)(param_1[0x57] + 0x18))(param_1 + 0x57,&local_48);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    FUN_1457e87ce(local_40,lVar1);
    FUN_146e2025c(local_28,param_2,lVar1);
    FUN_1448635f4(local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147cb2002 FUN_147cb2002 body=238 status=ok
// SIG undefined FUN_147cb2002(void)

undefined8 * FUN_147cb2002(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined1 local_88 [24];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_3;
  lVar4 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar4 == 0) {
    lVar4 = (**(code **)(param_1[0x57] + 0x18))(param_1 + 0x57,&local_90);
    if (lVar4 == 0) {
      param_2[2] = DAT_14c8464f0;
      uVar3 = DAT_14c8464e8._4_4_;
      uVar2 = (undefined4)DAT_14c8464e8;
      uVar1 = DAT_14c8464e0._4_4_;
      *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_2 + 4) = uVar1;
      *(undefined4 *)(param_2 + 1) = uVar2;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    }
    else {
      FUN_1457e87ce(local_88,lVar4);
      FUN_146e1fd94(local_70,param_2,lVar4);
      FUN_1448635f4(local_88);
    }
  }
  else {
    FUN_1417e57d6(lVar4,local_88);
    *param_2 = local_68;
    param_2[1] = uStack_60;
    param_2[2] = local_58;
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb20f2 FUN_147cb20f2 body=75 status=ok
// SIG undefined FUN_147cb20f2(void)

void FUN_147cb20f2(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  lVar4 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(param_2 + 4);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(lVar4 + 200) = *param_2;
    *(undefined4 *)(lVar4 + 0xcc) = uVar1;
    *(undefined4 *)(lVar4 + 0xd0) = uVar2;
    *(undefined4 *)(lVar4 + 0xd4) = uVar3;
    FUN_14034b25c(lVar4);
    return;
  }
  return;
}



// FUNCTION 147cb213e FUN_147cb213e body=84 status=ok
// SIG undefined FUN_147cb213e(void)

void FUN_147cb213e(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  local_38 = 0;
  FUN_140d93b16(local_28,&local_28,0,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb2194 FUN_147cb2194 body=84 status=ok
// SIG undefined FUN_147cb2194(void)

void FUN_147cb2194(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  local_38 = 0;
  FUN_14020f670(local_28,&local_28,0,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb21ea FUN_147cb21ea body=26 status=ok
// SIG undefined FUN_147cb21ea(void)

void FUN_147cb21ea(undefined8 param_1,undefined8 param_2)

{
  FUN_145927ad6(param_1,param_2,0,0,0);
  return;
}



// FUNCTION 147cb2204 FUN_147cb2204 body=54 status=ok
// SIG undefined FUN_147cb2204(void)

void FUN_147cb2204(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_147c4808c(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 147cb223a FUN_147cb223a body=52 status=ok
// SIG undefined FUN_147cb223a(void)

ulonglong FUN_147cb223a(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar1 != 0) {
    uVar2 = ((ulonglong)*(byte *)(lVar1 + 8) & 0xffffffffffffff08) >> 3;
  }
  return uVar2;
}



// FUNCTION 147cb226e FUN_147cb226e body=47 status=ok
// SIG undefined FUN_147cb226e(void)

undefined4 FUN_147cb226e(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0xa8);
  }
  return uVar2;
}



// FUNCTION 147cb229e FUN_147cb229e body=47 status=ok
// SIG undefined FUN_147cb229e(void)

undefined4 FUN_147cb229e(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0xac);
  }
  return uVar2;
}



// FUNCTION 147cb22ce FUN_147cb22ce body=45 status=ok
// SIG undefined FUN_147cb22ce(void)

undefined4 FUN_147cb22ce(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_2,1,0xffffffff);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0xe0);
  }
  return uVar2;
}



// FUNCTION 147cb22fc FUN_147cb22fc body=77 status=ok
// SIG undefined FUN_147cb22fc(void)

undefined8 * FUN_147cb22fc(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar2 == 0) {
    param_2[2] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = uVar1;
  }
  else {
    FUN_1417e5850(lVar2,param_2);
  }
  return param_2;
}



// FUNCTION 147cb234a FUN_147cb234a body=586 status=ok
// SIG undefined FUN_147cb234a(void)

double * FUN_147cb234a(longlong *param_1,double *param_2,double *param_3,undefined8 param_4)

{
  double dVar1;
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
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  double dVar2;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x8e0))(param_1,&local_98,param_4);
  dVar2 = *param_3;
  dVar1 = param_3[1];
  dVar3 = (double)param_1[0x48];
  dVar4 = (double)param_1[0x49];
  dVar5 = (double)param_1[0x4a];
  dVar8 = -dVar3;
  dVar9 = -dVar4;
  dVar6 = dVar5 * -1.0;
  dVar7 = (double)param_1[0x4b] * 1.0;
  dVar10 = dVar1 * dVar8 - dVar2 * dVar9;
  dVar11 = param_3[2] * dVar9 - dVar1 * dVar6;
  dVar12 = dVar2 * dVar6 - dVar8 * param_3[2];
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  local_88 = (dVar7 * dVar10 + param_3[2] + (dVar12 * dVar8 - dVar11 * dVar9)) * local_88;
  local_90 = (dVar3 * dVar10 + dVar6 * dVar11 + dVar7 * dVar12 + dVar1) * local_90;
  local_98 = ((dVar10 * dVar9 - dVar12 * dVar6) + dVar7 * dVar11 + dVar2) * local_98;
  dVar1 = (double)param_1[0x4b];
  dVar2 = (double)param_1[0x4b];
  dVar8 = local_98 * dVar5 - dVar3 * local_88;
  dVar6 = local_90 * dVar3 - dVar4 * local_98;
  dVar7 = local_88 * dVar4 - dVar5 * local_90;
  dVar7 = dVar7 + dVar7;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar6 + dVar6;
  *param_2 = (dVar6 * dVar4 - dVar8 * dVar5) + dVar1 * dVar7 + local_98;
  param_2[1] = (dVar5 * dVar7 - dVar3 * dVar6) + dVar2 * dVar8 + local_90;
  param_2[2] = dVar6 * dVar1 + local_88 + (dVar8 * dVar3 - dVar7 * dVar4);
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb2596 FUN_147cb2596 body=107 status=ok
// SIG undefined FUN_147cb2596(void)

ulonglong FUN_147cb2596(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if ((*(byte *)(param_1 + 0x83) & 2) != 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x4ac);
LAB_147cb25e4:
    return (ulonglong)uVar3;
  }
  cVar1 = FUN_144729dda(param_1 + 0x82);
  if (cVar1 == '\0') {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x7a0))(param_1);
    if (plVar2 == (longlong *)0x0) {
      uVar3 = 0;
      goto LAB_147cb25e4;
    }
  }
  else {
    plVar2 = (longlong *)FUN_140aa2aee(param_1 + 0x82);
  }
                    /* WARNING: Could not recover jumptable at 0x000147cb25d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar2 + 0x2b8))(plVar2,param_1,*(code **)(*plVar2 + 0x2b8));
  return uVar4;
}



// FUNCTION 147cb2602 FUN_147cb2602 body=50 status=ok
// SIG undefined FUN_147cb2602(void)

undefined4 FUN_147cb2602(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_2,1,0xffffffff);
  if (lVar1 == 0) {
    uVar2 = 0xbf800000;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x98);
  }
  return uVar2;
}



// FUNCTION 147cb2634 FUN_147cb2634 body=65 status=ok
// SIG undefined FUN_147cb2634(void)

void FUN_147cb2634(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_2,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_147c47d18(lVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 147cb2686 FUN_147cb2686 body=55 status=ok
// SIG undefined FUN_147cb2686(void)

void FUN_147cb2686(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_147c480fa(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 147cb26ce FUN_147cb26ce body=60 status=ok
// SIG undefined FUN_147cb26ce(void)

undefined8 *
FUN_147cb26ce(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,param_4,param_5);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x138);
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 147cb270a FUN_147cb270a body=389 status=ok
// SIG undefined FUN_147cb270a(void)

undefined4
FUN_147cb270a(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4,
             undefined1 param_5,char param_6,undefined8 param_7,undefined8 *param_8,
             undefined4 *param_9,undefined8 *param_10,longlong param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 *local_a0;
  undefined1 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = &local_50;
  local_50 = 2;
  local_58 = param_3[2];
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_78 = *(undefined8 *)(param_2 + 4);
  local_98 = param_5;
  local_a8 = &DAT_14c8463d0;
  local_4c = param_4;
  uVar4 = (**(code **)(*param_1 + 0x988))(param_1,param_11);
  if ((char)uVar4 == '\0') {
    param_8[2] = DAT_14c8464f0;
    uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *param_8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    param_8[1] = uVar5;
    *(undefined8 *)(param_9 + 4) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *param_9 = (undefined4)DAT_14c8464e0;
    param_9[1] = uVar1;
    param_9[2] = uVar2;
    param_9[3] = uVar3;
    uVar5 = 0;
  }
  else {
    param_8[2] = *(undefined8 *)(param_11 + 0x20);
    uVar5 = *(undefined8 *)(param_11 + 0x18);
    *param_8 = *(undefined8 *)(param_11 + 0x10);
    param_8[1] = uVar5;
    *(undefined8 *)(param_9 + 4) = *(undefined8 *)(param_11 + 0x50);
    uVar1 = *(undefined4 *)(param_11 + 0x44);
    uVar2 = *(undefined4 *)(param_11 + 0x48);
    uVar3 = *(undefined4 *)(param_11 + 0x4c);
    *param_9 = *(undefined4 *)(param_11 + 0x40);
    param_9[1] = uVar1;
    param_9[2] = uVar2;
    param_9[3] = uVar3;
    uVar5 = *(undefined8 *)(param_11 + 0xf0);
  }
  *param_10 = uVar5;
  if (param_6 != '\0') {
    if (param_1[0x16] == 0) {
      FUN_1448abda6(param_1);
    }
    if (((char)uVar4 != '\0') && (param_1[0x16] == 0)) {
      FUN_1448abda6(param_1);
      if (param_1[0x16] == 0) {
        FUN_1448abda6(param_1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb2890 FUN_147cb2890 body=317 status=ok
// SIG undefined FUN_147cb2890(void)

undefined4
FUN_147cb2890(longlong param_1,undefined8 param_2,double *param_3,undefined8 param_4,char param_5)

{
  undefined4 uVar1;
  double dVar2;
  void *in_stack_00000050;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined1 local_158 [256];
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar2 = (param_3[3] - *param_3) * 0.5;
  local_34 = (float)((param_3[5] - param_3[2]) * 0.5);
  local_38 = (float)((param_3[4] - param_3[1]) * 0.5);
  local_3c = (float)dVar2;
  local_40 = 1;
  local_168 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  uVar1 = FUN_1479f034a(0,CONCAT44((int)((ulonglong)dVar2 >> 0x20),local_3c),&DAT_14c8463d0);
  if (((char)uVar1 != '\0') && ((int)uStack_50 != 0)) {
    FUN_1479ab625(local_158,local_58);
    memcpy(in_stack_00000050,local_158,0x100);
  }
  if ((param_5 != '\0') && (*(longlong *)(param_1 + 0xb0) == 0)) {
    FUN_1448abda6(param_1);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb29ce FUN_147cb29ce body=238 status=ok
// SIG undefined FUN_147cb29ce(void)

undefined4
FUN_147cb29ce(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,char param_5
             )

{
  undefined4 uVar1;
  void *in_stack_00000050;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined1 local_158 [256];
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_40 = 2;
  local_168 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_3c = param_3;
  uVar1 = FUN_1479f034a(0,param_2,&DAT_14c8463d0);
  if (((char)uVar1 != '\0') && ((int)uStack_50 != 0)) {
    FUN_1479ab625(local_158,local_58);
    memcpy(in_stack_00000050,local_158,0x100);
  }
  if ((param_5 != '\0') && (*(longlong *)(param_1 + 0xb0) == 0)) {
    FUN_1448abda6(param_1);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb2abe FUN_147cb2abe body=23 status=ok
// SIG undefined FUN_147cb2abe(void)

void FUN_147cb2abe(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FUN_1400bcfd8(param_1 + 0x410);
    return;
  }
  return;
}



// FUNCTION 147cb2ad9 FUN_147cb2ad9 body=1073 status=ok
// SIG undefined FUN_147cb2ad9(void)

void FUN_147cb2ad9(undefined8 param_1,double *param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,longlong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  float *pfVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_2c8 [32];
  undefined4 *local_2a8;
  float *local_2a0;
  undefined4 *local_298;
  undefined4 local_290;
  longlong local_288;
  undefined8 local_280;
  undefined1 local_269;
  undefined8 local_268;
  undefined8 local_260;
  double *local_258;
  longlong local_250;
  float local_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 local_220 [10];
  float local_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  float local_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  float local_1d0;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined4 local_1bc;
  uint local_1b8 [16];
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  float afStack_c0 [2];
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)local_2c8;
  local_c8 = 0xbf800000bf800000;
  afStack_c0[0] = 1.0;
  afStack_c0[1] = -1.0;
  local_b8 = &DAT_3f8000003f800000;
  puStack_b0 = &DAT_3f8000003f800000;
  local_a8 = &DAT_3f8000003f800000;
  uStack_a0 = 0x3f800000bf800000;
  local_e8 = 0;
  uStack_e0 = 0x3f80000000000000;
  local_d8 = &DAT_3f8000003f800000;
  uStack_d0 = 0x3f800000;
  local_138 = 0;
  uStack_130 = 0x42b4000000000000;
  lVar14 = 0;
  local_128 = 0;
  local_120 = 0xc2b40000;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0x42b40000;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0xc2b40000;
  local_fc = 0x43340000;
  local_f4 = 0;
  local_2a0 = (float *)0x0;
  local_2a8 = (undefined4 *)((ulonglong)local_2a8 & 0xffffffffffffff00);
  local_269 = param_4;
  local_268 = param_1;
  local_260 = param_3;
  local_258 = param_2;
  FUN_140d3493e(local_220,*(undefined4 *)(param_6 + 0x118),1,0);
  do {
    local_250 = lVar14;
    FUN_1413df99e(local_1b8,(longlong)&local_138 + lVar14 * 0xc);
    local_1d0 = (float)local_258[2];
    local_1e4 = (float)local_258[1];
    local_1f8 = (float)*local_258;
    local_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1cc = 0;
    uStack_1c4 = 0;
    local_1bc = 0x3f800000;
    FUN_144afeb32(&local_178,local_1b8,&local_1f8);
    puVar12 = &local_e8;
    pfVar13 = afStack_c0;
    lVar14 = 0;
    do {
      fVar18 = local_148 * 0.0;
      fVar19 = fStack_144 * 0.0;
      fVar20 = fStack_140 * 0.0;
      fVar21 = fStack_13c * 0.0;
      local_1f8 = local_178 * 0.0 + local_168 * 0.0 + local_158 + fVar18;
      fVar22 = fStack_174 * 0.0 + fStack_164 * 0.0 + fStack_154 + fVar19;
      fVar23 = fStack_170 * 0.0 + fStack_160 * 0.0 + fStack_150 + fVar20;
      fVar24 = fStack_16c * 0.0 + fStack_15c * 0.0 + fStack_14c + fVar21;
      auVar8._4_4_ = fVar22;
      auVar8._0_4_ = local_1f8;
      auVar8._8_4_ = fVar23;
      auVar8._12_4_ = fVar24;
      uVar1 = extractps(auVar8,1);
      local_1f4 = (undefined4)uVar1;
      auVar9._4_4_ = fVar22;
      auVar9._0_4_ = local_1f8;
      auVar9._8_4_ = fVar23;
      auVar9._12_4_ = fVar24;
      uVar1 = extractps(auVar9,2);
      uStack_1f0 = (undefined4)uVar1;
      uStack_1ec = (undefined4)((ulonglong)uVar1 >> 0x20);
      fVar24 = local_168 + local_178 * 0.0 + local_158 * 0.0 + fVar18;
      fVar15 = fStack_164 + fStack_174 * 0.0 + fStack_154 * 0.0 + fVar19;
      fVar16 = fStack_160 + fStack_170 * 0.0 + fStack_150 * 0.0 + fVar20;
      fVar17 = fStack_15c + fStack_16c * 0.0 + fStack_14c * 0.0 + fVar21;
      auVar6._4_4_ = fVar15;
      auVar6._0_4_ = fVar24;
      auVar6._8_4_ = fVar16;
      auVar6._12_4_ = fVar17;
      uVar1 = extractps(auVar6,1);
      local_228 = (undefined4)uVar1;
      fVar22 = pfVar13[-1];
      fVar23 = *pfVar13;
      auVar7._4_4_ = fVar15;
      auVar7._0_4_ = fVar24;
      auVar7._8_4_ = fVar16;
      auVar7._12_4_ = fVar17;
      uVar1 = extractps(auVar7,2);
      uStack_224 = (undefined4)uVar1;
      local_220[0] = (undefined4)((ulonglong)uVar1 >> 0x20);
      fVar18 = local_168 * 0.0 + local_178 + local_158 * 0.0 + fVar18;
      fVar19 = fStack_164 * 0.0 + fStack_174 + fStack_154 * 0.0 + fVar19;
      fVar20 = fStack_160 * 0.0 + fStack_170 + fStack_150 * 0.0 + fVar20;
      fVar21 = fStack_15c * 0.0 + fStack_16c + fStack_14c * 0.0 + fVar21;
      auVar2._4_4_ = fVar19;
      auVar2._0_4_ = fVar18;
      auVar2._8_4_ = fVar20;
      auVar2._12_4_ = fVar21;
      uVar1 = extractps(auVar2,1);
      local_234 = (undefined4)uVar1;
      fVar24 = pfVar13[-2];
      local_244 = fVar23 * local_158 + fVar22 * local_168 + fVar24 * local_178 + local_148;
      fVar15 = fVar23 * fStack_154 + fVar22 * fStack_164 + fVar24 * fStack_174 + fStack_144;
      fVar16 = fVar23 * fStack_150 + fVar22 * fStack_160 + fVar24 * fStack_170 + fStack_140;
      fVar22 = fVar23 * fStack_14c + fVar22 * fStack_15c + fVar24 * fStack_16c + fStack_13c;
      auVar3._4_4_ = fVar19;
      auVar3._0_4_ = fVar18;
      auVar3._8_4_ = fVar20;
      auVar3._12_4_ = fVar21;
      uVar1 = extractps(auVar3,2);
      uStack_230 = (undefined4)uVar1;
      local_22c = (undefined4)((ulonglong)uVar1 >> 0x20);
      auVar4._4_4_ = fVar15;
      auVar4._0_4_ = local_244;
      auVar4._8_4_ = fVar16;
      auVar4._12_4_ = fVar22;
      uVar1 = extractps(auVar4,1);
      local_240 = (undefined4)uVar1;
      auVar5._4_4_ = fVar15;
      auVar5._0_4_ = local_244;
      auVar5._8_4_ = fVar16;
      auVar5._12_4_ = fVar22;
      uVar1 = extractps(auVar5,2);
      uStack_23c = (undefined4)uVar1;
      local_238 = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_298 = &DAT_149e1e2cc;
      local_2a8 = &local_22c;
      local_2a0 = &local_1f8;
      uVar11 = FUN_140d34aec(local_220,&local_244,puVar12,&local_238);
      local_1b8[lVar14] = uVar11;
      uVar10 = local_1b8[2];
      uVar11 = local_1b8[0];
      lVar14 = lVar14 + 1;
      pfVar13 = pfVar13 + 3;
      puVar12 = puVar12 + 1;
    } while (lVar14 != 4);
    FUN_140d3489c(local_220,local_1b8[0],local_1b8[1],local_1b8[2]);
    FUN_140d3489c(local_220,uVar11,uVar10,local_1b8[3]);
    lVar14 = local_250 + 1;
  } while (lVar14 != 6);
  local_280 = param_7;
  local_288 = param_6;
  local_290 = param_5;
  local_2a0 = (float *)((ulonglong)local_2a0 & 0xffffffffffffff00);
  local_2a8 = (undefined4 *)((ulonglong)local_2a8 & 0xffffffffffffff00);
  local_298 = (undefined4 *)CONCAT71(local_298._1_7_,1);
  FUN_147a7d7bc(local_220,local_268,local_260,local_269);
  FUN_1434d8cf8(local_220);
  if ((local_90 ^ (ulonglong)local_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb2f0b FUN_147cb2f0b body=1034 status=ok
// SIG undefined FUN_147cb2f0b(void)

void FUN_147cb2f0b(longlong param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  float *pfVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_2b8 [32];
  undefined4 *local_298;
  float *local_290;
  undefined4 *local_288;
  undefined4 local_280;
  longlong local_270;
  undefined8 local_268;
  undefined8 local_260;
  double *local_258;
  longlong local_250;
  float local_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 local_220 [10];
  float local_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  float local_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  float local_1d0;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined4 local_1bc;
  undefined4 local_1b8 [16];
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  float afStack_c0 [2];
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)local_2b8;
  local_c8 = 0xbf800000bf800000;
  afStack_c0[0] = 1.0;
  afStack_c0[1] = -1.0;
  local_b8 = &DAT_3f8000003f800000;
  puStack_b0 = &DAT_3f8000003f800000;
  local_a8 = &DAT_3f8000003f800000;
  uStack_a0 = 0x3f800000bf800000;
  local_e8 = 0;
  uStack_e0 = 0x3f80000000000000;
  local_d8 = &DAT_3f8000003f800000;
  uStack_d0 = 0x3f800000;
  local_138 = 0;
  uStack_130 = 0x42b4000000000000;
  lVar14 = 0;
  local_128 = 0;
  local_120 = 0xc2b40000;
  local_11c = 0;
  uStack_114 = 0;
  local_10c = 0x42b40000;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0xc2b40000;
  local_fc = 0x43340000;
  local_f4 = 0;
  local_290 = (float *)0x0;
  local_298 = (undefined4 *)((ulonglong)local_298 & 0xffffffffffffff00);
  local_270 = param_1;
  local_268 = param_2;
  local_260 = param_4;
  local_258 = param_3;
  FUN_140d3493e(local_220,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x3090),1,0);
  do {
    local_250 = lVar14;
    FUN_1413df99e(local_1b8,(longlong)&local_138 + lVar14 * 0xc);
    local_1d0 = (float)local_258[2];
    local_1e4 = (float)local_258[1];
    local_1f8 = (float)*local_258;
    local_1f4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1cc = 0;
    uStack_1c4 = 0;
    local_1bc = 0x3f800000;
    FUN_144afeb32(&local_178,local_1b8,&local_1f8);
    puVar12 = &local_e8;
    pfVar13 = afStack_c0;
    lVar14 = 0;
    do {
      fVar18 = local_148 * 0.0;
      fVar19 = fStack_144 * 0.0;
      fVar20 = fStack_140 * 0.0;
      fVar21 = fStack_13c * 0.0;
      local_1f8 = local_178 * 0.0 + local_168 * 0.0 + local_158 + fVar18;
      fVar22 = fStack_174 * 0.0 + fStack_164 * 0.0 + fStack_154 + fVar19;
      fVar23 = fStack_170 * 0.0 + fStack_160 * 0.0 + fStack_150 + fVar20;
      fVar24 = fStack_16c * 0.0 + fStack_15c * 0.0 + fStack_14c + fVar21;
      auVar8._4_4_ = fVar22;
      auVar8._0_4_ = local_1f8;
      auVar8._8_4_ = fVar23;
      auVar8._12_4_ = fVar24;
      uVar1 = extractps(auVar8,1);
      local_1f4 = (undefined4)uVar1;
      auVar9._4_4_ = fVar22;
      auVar9._0_4_ = local_1f8;
      auVar9._8_4_ = fVar23;
      auVar9._12_4_ = fVar24;
      uVar1 = extractps(auVar9,2);
      uStack_1f0 = (undefined4)uVar1;
      uStack_1ec = (undefined4)((ulonglong)uVar1 >> 0x20);
      fVar24 = local_168 + local_178 * 0.0 + local_158 * 0.0 + fVar18;
      fVar15 = fStack_164 + fStack_174 * 0.0 + fStack_154 * 0.0 + fVar19;
      fVar16 = fStack_160 + fStack_170 * 0.0 + fStack_150 * 0.0 + fVar20;
      fVar17 = fStack_15c + fStack_16c * 0.0 + fStack_14c * 0.0 + fVar21;
      auVar6._4_4_ = fVar15;
      auVar6._0_4_ = fVar24;
      auVar6._8_4_ = fVar16;
      auVar6._12_4_ = fVar17;
      uVar1 = extractps(auVar6,1);
      local_228 = (undefined4)uVar1;
      fVar22 = pfVar13[-1];
      fVar23 = *pfVar13;
      auVar7._4_4_ = fVar15;
      auVar7._0_4_ = fVar24;
      auVar7._8_4_ = fVar16;
      auVar7._12_4_ = fVar17;
      uVar1 = extractps(auVar7,2);
      uStack_224 = (undefined4)uVar1;
      local_220[0] = (undefined4)((ulonglong)uVar1 >> 0x20);
      fVar18 = local_168 * 0.0 + local_178 + local_158 * 0.0 + fVar18;
      fVar19 = fStack_164 * 0.0 + fStack_174 + fStack_154 * 0.0 + fVar19;
      fVar20 = fStack_160 * 0.0 + fStack_170 + fStack_150 * 0.0 + fVar20;
      fVar21 = fStack_15c * 0.0 + fStack_16c + fStack_14c * 0.0 + fVar21;
      auVar2._4_4_ = fVar19;
      auVar2._0_4_ = fVar18;
      auVar2._8_4_ = fVar20;
      auVar2._12_4_ = fVar21;
      uVar1 = extractps(auVar2,1);
      local_234 = (undefined4)uVar1;
      fVar24 = pfVar13[-2];
      local_244 = fVar23 * local_158 + fVar22 * local_168 + fVar24 * local_178 + local_148;
      fVar15 = fVar23 * fStack_154 + fVar22 * fStack_164 + fVar24 * fStack_174 + fStack_144;
      fVar16 = fVar23 * fStack_150 + fVar22 * fStack_160 + fVar24 * fStack_170 + fStack_140;
      fVar22 = fVar23 * fStack_14c + fVar22 * fStack_15c + fVar24 * fStack_16c + fStack_13c;
      auVar3._4_4_ = fVar19;
      auVar3._0_4_ = fVar18;
      auVar3._8_4_ = fVar20;
      auVar3._12_4_ = fVar21;
      uVar1 = extractps(auVar3,2);
      uStack_230 = (undefined4)uVar1;
      local_22c = (undefined4)((ulonglong)uVar1 >> 0x20);
      auVar4._4_4_ = fVar15;
      auVar4._0_4_ = local_244;
      auVar4._8_4_ = fVar16;
      auVar4._12_4_ = fVar22;
      uVar1 = extractps(auVar4,1);
      local_240 = (undefined4)uVar1;
      auVar5._4_4_ = fVar15;
      auVar5._0_4_ = local_244;
      auVar5._8_4_ = fVar16;
      auVar5._12_4_ = fVar22;
      uVar1 = extractps(auVar5,2);
      uStack_23c = (undefined4)uVar1;
      local_238 = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_288 = &DAT_149e1e2cc;
      local_298 = &local_22c;
      local_290 = &local_1f8;
      uVar11 = FUN_140d34aec(local_220,&local_244,puVar12,&local_238);
      local_1b8[lVar14] = uVar11;
      uVar10 = local_1b8[2];
      uVar11 = local_1b8[0];
      lVar14 = lVar14 + 1;
      pfVar13 = pfVar13 + 3;
      puVar12 = puVar12 + 1;
    } while (lVar14 != 4);
    FUN_140d3489c(local_220,local_1b8[0],local_1b8[1],local_1b8[2]);
    FUN_140d3489c(local_220,uVar11,uVar10,local_1b8[3]);
    lVar14 = local_250 + 1;
  } while (lVar14 != 6);
  local_298 = (undefined4 *)CONCAT71(local_298._1_7_,param_5);
  local_280 = 0xffffffff;
  local_288 = (undefined4 *)CONCAT71(local_288._1_7_,1);
  local_290 = (float *)((ulonglong)local_290 & 0xffffffffffffff00);
  FUN_1434d8d42(local_220,local_270,local_268,local_260);
  FUN_1434d8cf8(local_220);
  if ((local_90 ^ (ulonglong)local_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb3316 FUN_147cb3316 body=2287 status=ok
// SIG undefined FUN_147cb3316(void)

void FUN_147cb3316(undefined4 *param_1,double *param_2,undefined8 *param_3,uint param_4,int param_5,
                  float param_6,float param_7,undefined8 param_8,undefined1 param_9,
                  undefined1 param_10,undefined4 param_11,longlong param_12,undefined1 param_13,
                  undefined8 param_14)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  int iVar15;
  longlong lVar16;
  undefined4 *puVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar36;
  float fVar37;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auStack_428 [32];
  undefined1 local_408;
  ulonglong local_400;
  undefined1 local_3f8;
  undefined4 local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  uint local_3d4;
  ulonglong local_3d0;
  ulonglong local_3c8;
  undefined4 *local_3c0;
  undefined8 *local_3b8;
  double *local_3b0;
  undefined4 *local_3a8;
  undefined1 local_3a0 [40];
  float local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  undefined8 local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  float local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined4 local_1f0;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [16];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_400 = 0;
  local_408 = 0;
  local_3b8 = param_3;
  local_3b0 = param_2;
  local_3a8 = param_1;
  FUN_140d3493e(local_3a0,*(undefined4 *)(param_12 + 0x118),1,0);
  uVar19 = param_5 + 1;
  iVar15 = uVar19 * (param_4 + 1);
  local_3c8 = CONCAT44(local_3c8._4_4_,iVar15);
  local_3d0 = (ulonglong)param_4;
  lVar16 = FUN_14001cc68((longlong)iVar15 * 0x58,0);
  local_3d4 = uVar19;
  puVar17 = (undefined4 *)FUN_14001cc68((longlong)(int)uVar19 * 0x58,0);
  local_3c0 = puVar17;
  if (-1 < param_5) {
    uVar24 = 0;
    do {
      fVar42 = (float)(int)uVar24 / (float)param_5;
      fVar41 = fVar42 * (param_7 - param_6) + param_6;
      *puVar17 = 0;
      fVar27 = sinf(fVar41);
      puVar17[1] = fVar27;
      fStack_174 = cosf(fVar41);
      puVar17[2] = fStack_174;
      fStack_170 = (float)puVar17[1];
      fStack_174 = -fStack_174;
      local_178 = 0.0;
      local_1f8 = 0x3f800000;
      local_1f0 = 0;
      FUN_147c71d8a(puVar17,&local_1f8,&local_178,puVar17);
      puVar17[3] = 0;
      puVar17[4] = fVar42;
      uVar24 = uVar24 + 1;
      puVar17 = puVar17 + 0x16;
    } while (uVar19 != uVar24);
  }
  puVar17 = local_3c0;
  if (-1 < (int)local_3d0) {
    fVar27 = (float)(int)local_3d0;
    lVar25 = (ulonglong)uVar19 * 0x58;
    uVar24 = 0;
    lVar20 = lVar16;
    do {
      local_1f8 = (ulonglong)(uint)(((float)(int)uVar24 * 360.0) / fVar27) << 0x20;
      local_1f0 = 0;
      FUN_1413df99e(&local_178,&local_1f8);
      if (-1 < param_5) {
        lVar21 = 0;
        do {
          fVar41 = *(float *)((longlong)puVar17 + lVar21);
          fVar42 = *(float *)((longlong)puVar17 + lVar21 + 4);
          fVar37 = *(float *)((longlong)puVar17 + lVar21 + 8);
          fVar4 = local_168._0_4_;
          fVar5 = local_168._4_4_;
          fVar6 = local_168._8_4_;
          fVar7 = local_168._12_4_;
          auVar31._0_4_ = fVar41 * local_178;
          auVar31._4_4_ = fVar41 * fStack_174;
          auVar31._8_4_ = fVar41 * fStack_170;
          auVar31._12_4_ = fVar41 * fStack_16c;
          fVar41 = fVar37 * local_158 + fVar42 * fVar4 + auVar31._0_4_ + local_148;
          fVar43 = fVar37 * fStack_154 + fVar42 * fVar5 + auVar31._4_4_ + fStack_144;
          fVar44 = fVar37 * fStack_150 + fVar42 * fVar6 + auVar31._8_4_ + fStack_140;
          fVar42 = fVar37 * fStack_14c + fVar42 * fVar7 + auVar31._12_4_ + fStack_13c;
          *(float *)(lVar20 + lVar21) = fVar41;
          auVar12._4_4_ = fVar43;
          auVar12._0_4_ = fVar41;
          auVar12._8_4_ = fVar44;
          auVar12._12_4_ = fVar42;
          uVar3 = extractps(auVar12,1);
          *(undefined8 *)(lVar20 + 4 + lVar21) = uVar3;
          auVar13._4_4_ = fVar43;
          auVar13._0_4_ = fVar41;
          auVar13._8_4_ = fVar44;
          auVar13._12_4_ = fVar42;
          uVar3 = extractps(auVar13,2);
          *(undefined8 *)(lVar20 + 8 + lVar21) = uVar3;
          auVar32 = pmovsxbd(auVar31,*(undefined4 *)((longlong)puVar17 + lVar21 + 0x50));
          fVar41 = (float)auVar32._0_4_ * 0.007874016;
          fVar42 = (float)auVar32._4_4_ * 0.007874016;
          fVar37 = (float)auVar32._8_4_ * 0.007874016;
          fVar43 = local_148 * 0.0;
          fVar44 = fStack_144 * 0.0;
          fVar28 = fStack_140 * 0.0;
          fVar29 = fStack_13c * 0.0;
          auVar33._0_4_ = fVar37 * local_158 + fVar42 * fVar4 + fVar41 * local_178 + fVar43;
          auVar33._4_4_ = fVar37 * fStack_154 + fVar42 * fVar5 + fVar41 * fStack_174 + fVar44;
          auVar33._8_4_ = fVar37 * fStack_150 + fVar42 * fVar6 + fVar41 * fStack_170 + fVar28;
          auVar33._12_4_ = fVar37 * fStack_14c + fVar42 * fVar7 + fVar41 * fStack_16c + fVar29;
          uVar3 = extractps(auVar33,1);
          uStack_274 = (undefined4)uVar3;
          uVar3 = extractps(auVar33,2);
          uStack_270 = (undefined4)uVar3;
          uStack_26c = (undefined4)((ulonglong)uVar3 >> 0x20);
          auVar34 = pmovsxbd(auVar33,*(undefined4 *)((longlong)puVar17 + lVar21 + 0x4c));
          fVar30 = (float)auVar34._0_4_ * 0.007874016;
          fVar36 = (float)auVar34._4_4_ * 0.007874016;
          fVar38 = (float)auVar34._8_4_ * 0.007874016;
          fVar39 = (float)auVar32._0_4_ * 0.007874016;
          fVar40 = (float)auVar32._4_4_ * 0.007874016;
          fVar41 = (float)auVar32._8_4_ * 0.007874016;
          fVar37 = (float)auVar32._12_4_ * 0.007874016;
          fVar42 = (fVar30 * fVar41 - fVar39 * fVar38) * fVar37;
          fVar41 = (fVar40 * fVar38 - fVar41 * fVar36) * fVar37;
          fVar37 = (fVar39 * fVar36 - fVar40 * fVar30) * fVar37;
          local_2f8._0_4_ = fVar37 * local_158 + fVar42 * fVar4 + fVar41 * local_178 + fVar43;
          fVar39 = fVar37 * fStack_154 + fVar42 * fVar5 + fVar41 * fStack_174 + fVar44;
          fVar40 = fVar37 * fStack_150 + fVar42 * fVar6 + fVar41 * fStack_170 + fVar28;
          fVar41 = fVar37 * fStack_14c + fVar42 * fVar7 + fVar41 * fStack_16c + fVar29;
          auVar32._4_4_ = fVar39;
          auVar32._0_4_ = (float)local_2f8;
          auVar32._8_4_ = fVar40;
          auVar32._12_4_ = fVar41;
          uVar3 = extractps(auVar32,1);
          local_2f8._4_4_ = (undefined4)uVar3;
          auVar34._4_4_ = fVar39;
          auVar34._0_4_ = (float)local_2f8;
          auVar34._8_4_ = fVar40;
          auVar34._12_4_ = fVar41;
          uVar3 = extractps(auVar34,2);
          uStack_2f0._0_4_ = (undefined4)uVar3;
          uStack_2f0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          auVar35._0_4_ = fVar38 * local_158 + fVar36 * fVar4 + fVar30 * local_178 + fVar43;
          auVar35._4_4_ = fVar38 * fStack_154 + fVar36 * fVar5 + fVar30 * fStack_174 + fVar44;
          auVar35._8_4_ = fVar38 * fStack_150 + fVar36 * fVar6 + fVar30 * fStack_170 + fVar28;
          auVar35._12_4_ = fVar38 * fStack_14c + fVar36 * fVar7 + fVar30 * fStack_16c + fVar29;
          uVar3 = extractps(auVar35,1);
          uStack_374 = (undefined4)uVar3;
          uVar3 = extractps(auVar35,2);
          uStack_370 = (undefined4)uVar3;
          uStack_36c = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_378 = auVar35._0_4_;
          local_278 = auVar33._0_4_;
          FUN_147c71d8a(lVar20 + lVar21,&local_378,&local_2f8,&local_278);
          *(float *)(lVar20 + 0xc + lVar21) = (float)(int)uVar24 / fVar27;
          *(undefined4 *)(lVar20 + 0x10 + lVar21) =
               *(undefined4 *)((longlong)puVar17 + lVar21 + 0x10);
          lVar21 = lVar21 + 0x58;
        } while (lVar25 - lVar21 != 0);
      }
      uVar24 = uVar24 + 1;
      lVar20 = lVar20 + lVar25;
    } while (uVar24 != param_4 + 1);
  }
  if (0 < (int)local_3c8) {
    uVar24 = local_3c8 & 0xffffffff;
    lVar20 = lVar16;
    do {
      FUN_147a7d5d8(local_3a0,lVar20);
      lVar20 = lVar20 + 0x58;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  local_3c8 = lVar16;
  if (0 < (int)local_3d0) {
    iVar15 = 0;
    iVar23 = 0;
    uVar19 = local_3d4;
    do {
      iVar22 = param_5;
      uVar14 = uVar19;
      iVar18 = iVar15;
      if (0 < param_5) {
        do {
          iVar26 = iVar18 + 1;
          FUN_140d3489c(local_3a0,iVar18,uVar14,iVar26);
          FUN_140d3489c(local_3a0,uVar14,uVar14 + 1,iVar26);
          iVar22 = iVar22 + -1;
          uVar14 = uVar14 + 1;
          iVar18 = iVar26;
        } while (iVar22 != 0);
      }
      iVar23 = iVar23 + 1;
      uVar19 = uVar19 + local_3d4;
      iVar15 = iVar15 + local_3d4;
    } while (iVar23 != (int)local_3d0);
  }
  FUN_1400020a8(local_3c8);
  FUN_1400020a8(local_3c0);
  local_228 = local_3b8[2];
  local_250 = local_3b8[1];
  local_278 = (float)*local_3b8;
  uStack_274 = (undefined4)((ulonglong)*local_3b8 >> 0x20);
  uStack_270 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0x3ff0000000000000;
  dVar11 = *local_3b0;
  dVar1 = local_3b0[1];
  dVar2 = local_3b0[2];
  dVar8 = sin(dVar11 * 0.01745329238474369);
  dVar9 = sin(dVar1 * 0.01745329238474369);
  dVar10 = sin(dVar2 * 0.01745329238474369);
  sin(0.0);
  dVar11 = cos(dVar11 * 0.01745329238474369);
  dVar1 = cos(dVar1 * 0.01745329238474369);
  dVar2 = cos(dVar2 * 0.01745329238474369);
  cos(0.0);
  local_2f8 = dVar11 * dVar1;
  uStack_2f0 = dVar9 * dVar11;
  local_2e0 = 0;
  local_2d8 = dVar8 * dVar10 * dVar1 - dVar9 * dVar2;
  local_2d0 = dVar8 * dVar10 * dVar9 + dVar1 * dVar2;
  local_2c8 = -dVar10 * dVar11;
  local_2c0 = 0;
  local_2b8 = -(dVar8 * dVar2 * dVar1 + dVar9 * dVar10);
  local_2b0 = dVar1 * dVar10 - dVar9 * dVar8 * dVar2;
  local_2a8 = dVar11 * dVar2;
  local_2a0 = 0;
  local_298 = DAT_14c8464e0;
  local_290 = (undefined4)DAT_14c8464e8;
  uStack_28c = DAT_14c8464e8._4_4_;
  uStack_288 = (undefined4)DAT_14c8464f0;
  uStack_284 = DAT_14c8464f0._4_4_;
  local_280 = 0x3ff0000000000000;
  local_2e8 = dVar8;
  FUN_1447fea8d(&local_1f8,&local_278);
  local_308 = *(undefined8 *)(local_3a8 + 4);
  local_318 = *local_3a8;
  uStack_314 = local_3a8[1];
  uStack_310 = local_3a8[2];
  uStack_30c = local_3a8[3];
  local_378 = 0.0;
  uStack_374 = 0x3ff00000;
  uStack_370 = 0;
  uStack_36c = 0;
  uStack_368 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_350 = 0x3ff0000000000000;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0x3ff0000000000000;
  local_320 = 0;
  local_300 = 0x3ff0000000000000;
  FUN_1447fea8d(&local_178,&local_1f8);
  local_3e0 = param_14;
  local_3e8 = param_12;
  local_3f0 = param_11;
  local_3f8 = param_13;
  local_408 = param_10;
  local_400 = local_400 & 0xffffffffffffff00;
  FUN_147a7d7bc(local_3a0,&local_178,param_8,param_9);
  FUN_1434d8cf8(local_3a0);
  if ((local_f0 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cb3c06 FUN_147cb3c06 body=133 status=ok
// SIG undefined FUN_147cb3c06(void)

void FUN_147cb3c06(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  FUN_147cb3316(param_1,&DAT_14c8464f8,param_2,param_3,param_4,0,0x40490fdb,param_5,param_6,param_7,
                param_8,param_9,1,0);
  return;
}



// FUNCTION 147cb3c8b FUN_147cb3c8b body=2237 status=ok
// SIG undefined FUN_147cb3c8b(void)

void FUN_147cb3c8b(longlong param_1,undefined4 *param_2,double *param_3,undefined8 *param_4,
                  int param_5,int param_6,undefined8 param_7,undefined1 param_8,undefined1 param_9)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  int iVar15;
  longlong lVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar36;
  float fVar37;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_418 [32];
  undefined1 local_3f8;
  undefined8 local_3f0;
  undefined1 local_3e8;
  undefined4 local_3e0;
  uint local_3d4;
  ulonglong local_3d0;
  undefined4 *local_3c8;
  undefined8 *local_3c0;
  double *local_3b8;
  undefined4 *local_3b0;
  longlong local_3a8;
  undefined1 local_3a0 [40];
  float local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  undefined8 local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  float local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined4 local_1f0;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [16];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_3f0 = 0;
  local_3f8 = 0;
  local_3c0 = param_4;
  local_3b8 = param_3;
  local_3b0 = param_2;
  local_3a8 = param_1;
  FUN_140d3493e(local_3a0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x3090),1,0);
  uVar21 = param_6 + 1;
  iVar15 = uVar21 * (param_5 + 1U);
  local_3d0 = CONCAT44(local_3d0._4_4_,iVar15);
  lVar16 = FUN_14001cc68((longlong)iVar15 * 0x58,0);
  local_3d4 = uVar21;
  puVar17 = (undefined4 *)FUN_14001cc68((longlong)(int)uVar21 * 0x58,0);
  local_3c8 = puVar17;
  if (-1 < param_6) {
    uVar25 = 0;
    do {
      fVar41 = (float)(int)uVar25 / (float)param_6;
      fVar40 = fVar41 * 3.1415927;
      *puVar17 = 0;
      fVar27 = sinf(fVar40);
      puVar17[1] = fVar27;
      fStack_174 = cosf(fVar40);
      puVar17[2] = fStack_174;
      fStack_170 = (float)puVar17[1];
      fStack_174 = -fStack_174;
      local_178 = 0.0;
      local_1f8 = 0x3f800000;
      local_1f0 = 0;
      FUN_147c71d8a(puVar17,&local_1f8,&local_178,puVar17);
      puVar17[3] = 0;
      puVar17[4] = fVar41;
      uVar25 = uVar25 + 1;
      puVar17 = puVar17 + 0x16;
    } while (uVar21 != uVar25);
  }
  puVar17 = local_3c8;
  if (-1 < param_5) {
    lVar20 = (ulonglong)uVar21 * 0x58;
    uVar25 = 0;
    lVar22 = lVar16;
    do {
      local_1f8 = (ulonglong)(uint)(((float)(int)uVar25 * 360.0) / (float)param_5) << 0x20;
      local_1f0 = 0;
      FUN_1413df99e(&local_178,&local_1f8);
      if (-1 < param_6) {
        lVar26 = 0;
        do {
          fVar27 = *(float *)((longlong)puVar17 + lVar26);
          fVar40 = *(float *)((longlong)puVar17 + lVar26 + 4);
          fVar41 = *(float *)((longlong)puVar17 + lVar26 + 8);
          fVar4 = local_168._0_4_;
          fVar5 = local_168._4_4_;
          fVar6 = local_168._8_4_;
          fVar7 = local_168._12_4_;
          auVar31._0_4_ = fVar27 * local_178;
          auVar31._4_4_ = fVar27 * fStack_174;
          auVar31._8_4_ = fVar27 * fStack_170;
          auVar31._12_4_ = fVar27 * fStack_16c;
          fVar27 = fVar41 * local_158 + fVar40 * fVar4 + auVar31._0_4_ + local_148;
          fVar42 = fVar41 * fStack_154 + fVar40 * fVar5 + auVar31._4_4_ + fStack_144;
          fVar43 = fVar41 * fStack_150 + fVar40 * fVar6 + auVar31._8_4_ + fStack_140;
          fVar40 = fVar41 * fStack_14c + fVar40 * fVar7 + auVar31._12_4_ + fStack_13c;
          *(float *)(lVar22 + lVar26) = fVar27;
          auVar12._4_4_ = fVar42;
          auVar12._0_4_ = fVar27;
          auVar12._8_4_ = fVar43;
          auVar12._12_4_ = fVar40;
          uVar3 = extractps(auVar12,1);
          *(undefined8 *)(lVar22 + 4 + lVar26) = uVar3;
          auVar13._4_4_ = fVar42;
          auVar13._0_4_ = fVar27;
          auVar13._8_4_ = fVar43;
          auVar13._12_4_ = fVar40;
          uVar3 = extractps(auVar13,2);
          *(undefined8 *)(lVar22 + 8 + lVar26) = uVar3;
          auVar32 = pmovsxbd(auVar31,*(undefined4 *)((longlong)puVar17 + lVar26 + 0x50));
          fVar27 = (float)auVar32._0_4_ * 0.007874016;
          fVar40 = (float)auVar32._4_4_ * 0.007874016;
          fVar41 = (float)auVar32._8_4_ * 0.007874016;
          fVar42 = local_148 * 0.0;
          fVar43 = fStack_144 * 0.0;
          fVar28 = fStack_140 * 0.0;
          fVar29 = fStack_13c * 0.0;
          auVar33._0_4_ = fVar41 * local_158 + fVar40 * fVar4 + fVar27 * local_178 + fVar42;
          auVar33._4_4_ = fVar41 * fStack_154 + fVar40 * fVar5 + fVar27 * fStack_174 + fVar43;
          auVar33._8_4_ = fVar41 * fStack_150 + fVar40 * fVar6 + fVar27 * fStack_170 + fVar28;
          auVar33._12_4_ = fVar41 * fStack_14c + fVar40 * fVar7 + fVar27 * fStack_16c + fVar29;
          uVar3 = extractps(auVar33,1);
          uStack_274 = (undefined4)uVar3;
          uVar3 = extractps(auVar33,2);
          uStack_270 = (undefined4)uVar3;
          uStack_26c = (undefined4)((ulonglong)uVar3 >> 0x20);
          auVar34 = pmovsxbd(auVar33,*(undefined4 *)((longlong)puVar17 + lVar26 + 0x4c));
          fVar30 = (float)auVar34._0_4_ * 0.007874016;
          fVar36 = (float)auVar34._4_4_ * 0.007874016;
          fVar37 = (float)auVar34._8_4_ * 0.007874016;
          fVar38 = (float)auVar32._0_4_ * 0.007874016;
          fVar39 = (float)auVar32._4_4_ * 0.007874016;
          fVar27 = (float)auVar32._8_4_ * 0.007874016;
          fVar41 = (float)auVar32._12_4_ * 0.007874016;
          fVar40 = (fVar30 * fVar27 - fVar38 * fVar37) * fVar41;
          fVar27 = (fVar39 * fVar37 - fVar27 * fVar36) * fVar41;
          fVar41 = (fVar38 * fVar36 - fVar39 * fVar30) * fVar41;
          local_2f8._0_4_ = fVar41 * local_158 + fVar40 * fVar4 + fVar27 * local_178 + fVar42;
          fVar38 = fVar41 * fStack_154 + fVar40 * fVar5 + fVar27 * fStack_174 + fVar43;
          fVar39 = fVar41 * fStack_150 + fVar40 * fVar6 + fVar27 * fStack_170 + fVar28;
          fVar27 = fVar41 * fStack_14c + fVar40 * fVar7 + fVar27 * fStack_16c + fVar29;
          auVar32._4_4_ = fVar38;
          auVar32._0_4_ = (float)local_2f8;
          auVar32._8_4_ = fVar39;
          auVar32._12_4_ = fVar27;
          uVar3 = extractps(auVar32,1);
          local_2f8._4_4_ = (undefined4)uVar3;
          auVar34._4_4_ = fVar38;
          auVar34._0_4_ = (float)local_2f8;
          auVar34._8_4_ = fVar39;
          auVar34._12_4_ = fVar27;
          uVar3 = extractps(auVar34,2);
          uStack_2f0._0_4_ = (undefined4)uVar3;
          uStack_2f0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          auVar35._0_4_ = fVar37 * local_158 + fVar36 * fVar4 + fVar30 * local_178 + fVar42;
          auVar35._4_4_ = fVar37 * fStack_154 + fVar36 * fVar5 + fVar30 * fStack_174 + fVar43;
          auVar35._8_4_ = fVar37 * fStack_150 + fVar36 * fVar6 + fVar30 * fStack_170 + fVar28;
          auVar35._12_4_ = fVar37 * fStack_14c + fVar36 * fVar7 + fVar30 * fStack_16c + fVar29;
          uVar3 = extractps(auVar35,1);
          uStack_374 = (undefined4)uVar3;
          uVar3 = extractps(auVar35,2);
          uStack_370 = (undefined4)uVar3;
          uStack_36c = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_378 = auVar35._0_4_;
          local_278 = auVar33._0_4_;
          FUN_147c71d8a(lVar22 + lVar26,&local_378,&local_2f8,&local_278);
          *(float *)(lVar22 + 0xc + lVar26) = (float)(int)uVar25 / (float)param_5;
          *(undefined4 *)(lVar22 + 0x10 + lVar26) =
               *(undefined4 *)((longlong)puVar17 + lVar26 + 0x10);
          lVar26 = lVar26 + 0x58;
        } while (lVar20 - lVar26 != 0);
      }
      uVar25 = uVar25 + 1;
      lVar22 = lVar22 + lVar20;
    } while (uVar25 != param_5 + 1U);
  }
  if (0 < (int)local_3d0) {
    uVar25 = local_3d0 & 0xffffffff;
    lVar22 = lVar16;
    do {
      FUN_147a7d5d8(local_3a0,lVar22);
      lVar22 = lVar22 + 0x58;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  local_3d0 = lVar16;
  if (0 < param_5) {
    iVar15 = 0;
    iVar24 = 0;
    uVar21 = local_3d4;
    do {
      iVar23 = param_6;
      uVar14 = uVar21;
      iVar18 = iVar15;
      if (0 < param_6) {
        do {
          iVar19 = iVar18 + 1;
          FUN_140d3489c(local_3a0,iVar18,uVar14,iVar19);
          FUN_140d3489c(local_3a0,uVar14,uVar14 + 1,iVar19);
          iVar23 = iVar23 + -1;
          uVar14 = uVar14 + 1;
          iVar18 = iVar19;
        } while (iVar23 != 0);
      }
      iVar24 = iVar24 + 1;
      uVar21 = uVar21 + local_3d4;
      iVar15 = iVar15 + local_3d4;
    } while (iVar24 != param_5);
  }
  FUN_1400020a8(local_3d0);
  FUN_1400020a8(local_3c8);
  local_228 = local_3c0[2];
  local_250 = local_3c0[1];
  local_278 = (float)*local_3c0;
  uStack_274 = (undefined4)((ulonglong)*local_3c0 >> 0x20);
  uStack_270 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0x3ff0000000000000;
  dVar11 = *local_3b8;
  dVar1 = local_3b8[1];
  dVar2 = local_3b8[2];
  dVar8 = sin(dVar11 * 0.01745329238474369);
  dVar9 = sin(dVar1 * 0.01745329238474369);
  dVar10 = sin(dVar2 * 0.01745329238474369);
  sin(0.0);
  dVar11 = cos(dVar11 * 0.01745329238474369);
  dVar1 = cos(dVar1 * 0.01745329238474369);
  dVar2 = cos(dVar2 * 0.01745329238474369);
  cos(0.0);
  local_2f8 = dVar11 * dVar1;
  uStack_2f0 = dVar9 * dVar11;
  local_2e0 = 0;
  local_2d8 = dVar8 * dVar10 * dVar1 - dVar9 * dVar2;
  local_2d0 = dVar8 * dVar10 * dVar9 + dVar1 * dVar2;
  local_2c8 = -dVar10 * dVar11;
  local_2c0 = 0;
  local_2b8 = -(dVar8 * dVar2 * dVar1 + dVar9 * dVar10);
  local_2b0 = dVar1 * dVar10 - dVar9 * dVar8 * dVar2;
  local_2a8 = dVar11 * dVar2;
  local_2a0 = 0;
  local_298 = DAT_14c8464e0;
  local_290 = (undefined4)DAT_14c8464e8;
  uStack_28c = DAT_14c8464e8._4_4_;
  uStack_288 = (undefined4)DAT_14c8464f0;
  uStack_284 = DAT_14c8464f0._4_4_;
  local_280 = 0x3ff0000000000000;
  local_2e8 = dVar8;
  FUN_1447fea8d(&local_1f8,&local_278);
  local_308 = *(undefined8 *)(local_3b0 + 4);
  local_318 = *local_3b0;
  uStack_314 = local_3b0[1];
  uStack_310 = local_3b0[2];
  uStack_30c = local_3b0[3];
  local_378 = 0.0;
  uStack_374 = 0x3ff00000;
  uStack_370 = 0;
  uStack_36c = 0;
  uStack_368 = 0;
  local_360 = 0;
  uStack_358 = 0;
  local_350 = 0x3ff0000000000000;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0x3ff0000000000000;
  local_320 = 0;
  local_300 = 0x3ff0000000000000;
  FUN_1447fea8d(&local_178,&local_1f8);
  local_3f0 = CONCAT71(local_3f0._1_7_,param_9);
  local_3f8 = param_8;
  local_3e0 = 0xffffffff;
  local_3e8 = 1;
  FUN_1434d8d42(local_3a0,local_3a8,&local_178,param_7);
  FUN_1434d8cf8(local_3a0);
  if ((local_f0 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cb4549 FUN_147cb4549 body=468 status=ok
// SIG undefined FUN_147cb4549(void)

double * FUN_147cb4549(double *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 extraout_XMM0_Db;
  
  if (3.1315928 <= param_2) {
    param_2 = 3.1315928;
  }
  if (param_2 <= 0.01) {
    param_2 = 0.01;
  }
  if (3.1315928 <= param_3) {
    param_3 = 3.1315928;
  }
  if (param_3 <= 0.01) {
    param_3 = 0.01;
  }
  fVar1 = sinf(param_2 * 0.5);
  fVar2 = sinf(param_3 * 0.5);
  tanf(param_2 * 0.5);
  tanf(param_3 * 0.5);
  fVar3 = cosf(param_4);
  fVar4 = sinf(param_4);
  fVar3 = (float)FUN_144a7ed88(fVar4 * fVar2,CONCAT44(extraout_XMM0_Db,fVar1 * fVar3));
  fVar4 = sinf(fVar3);
  fVar3 = cosf(fVar3);
  fVar1 = (fVar1 * fVar1 * fVar2 * fVar2) /
          (fVar4 * fVar4 * fVar1 * fVar1 + fVar3 * fVar3 * fVar2 * fVar2);
  if (fVar1 < 0.0) {
    fVar2 = sqrtf(fVar1);
  }
  else {
    fVar2 = SQRT(fVar1);
  }
  fVar5 = 1.0 - fVar1;
  if (fVar5 < 0.0) {
    fVar5 = sqrtf(fVar5);
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  *param_1 = (double)(1.0 - (fVar1 + fVar1));
  param_1[1] = (double)(fVar3 * fVar2 * (fVar5 + fVar5));
  param_1[2] = (double)((fVar5 + fVar5) * fVar4 * fVar2);
  return param_1;
}



// FUNCTION 147cb471d FUN_147cb471d body=2218 status=ok
// SIG undefined FUN_147cb471d(void)

void FUN_147cb471d(undefined8 param_1,undefined8 param_2,float param_3,float param_4,uint param_5,
                  longlong *param_6,longlong *param_7)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  longlong lVar14;
  float *pfVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_268 [40];
  float local_240;
  uint local_23c;
  float local_238;
  float local_234;
  uint local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  undefined8 local_214;
  float local_20c;
  longlong local_208;
  ulonglong uStack_200;
  float local_1f8 [19];
  undefined8 local_1ac;
  float local_1a0 [19];
  undefined8 local_154;
  float local_148 [5];
  undefined4 uStack_134;
  undefined8 local_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_208 = 0;
  uStack_200 = (ulonglong)param_5;
  if (param_5 != 0) {
    uVar13 = 0;
    FUN_1403e3958(&local_208,0);
    local_240 = (float)param_5;
    dVar19 = (double)param_3;
    do {
      FUN_147cb4549(local_148,param_1,param_2,((float)uVar13 / local_240) * 6.2831855);
      lVar14 = (longlong)(int)uVar13;
      *(double *)(local_208 + lVar14 * 0x18) =
           (double)CONCAT44(local_148[1],local_148[0]) * dVar19 + (double)param_4;
      *(double *)(local_208 + 8 + lVar14 * 0x18) =
           (double)CONCAT44(local_148[3],local_148[2]) * dVar19 + 0.0;
      *(double *)(local_208 + 0x10 + lVar14 * 0x18) =
           (double)CONCAT44(uStack_134,local_148[4]) * dVar19 + 0.0;
      uVar13 = uVar13 + 1;
    } while (param_5 != uVar13);
    local_234 = param_4 + 0.0;
    local_23c = param_5 - 1;
    uVar13 = 0;
    local_238 = param_3;
    do {
      local_230 = uVar13 + 1;
      uVar7 = local_230;
      if (local_23c == uVar13) {
        uVar7 = 0;
      }
      lVar14 = (longlong)(int)uVar7;
      lVar8 = (longlong)(int)uVar13;
      dVar19 = *(double *)(local_208 + lVar8 * 0x18);
      dVar17 = *(double *)(local_208 + 8 + lVar8 * 0x18);
      dVar1 = *(double *)(local_208 + lVar14 * 0x18);
      dVar22 = *(double *)(local_208 + 8 + lVar14 * 0x18);
      dVar5 = dVar1 * dVar17 - dVar19 * dVar22;
      dVar2 = *(double *)(local_208 + 0x10 + lVar14 * 0x18);
      dVar18 = *(double *)(local_208 + 0x10 + lVar8 * 0x18);
      dVar6 = dVar2 * dVar19 - dVar1 * dVar18;
      dVar1 = dVar22 * dVar18 - dVar17 * dVar2;
      fVar29 = (float)dVar19;
      fVar28 = (float)dVar18;
      fVar25 = (float)dVar17;
      local_fc = 0;
      local_154 = 0;
      local_1ac = 0;
      local_148[0] = local_234;
      local_148[1] = 0.0;
      local_148[2] = 0.0;
      local_148[3] = 0.0;
      fVar27 = (float)uVar13 / local_240;
      local_214 = 0xbf800000;
      local_20c = 0.0;
      fVar26 = (float)(dVar1 * dVar17 - dVar19 * dVar6);
      fVar24 = (float)(dVar5 * dVar19 - dVar18 * dVar1);
      fVar23 = (float)(dVar6 * dVar18 - dVar17 * dVar5);
      local_22c = fVar23;
      local_228 = fVar24;
      local_224 = fVar26;
      local_220 = fVar29;
      local_21c = fVar25;
      local_218 = fVar28;
      local_148[4] = fVar27;
      FUN_147c71d8a(local_148,&local_22c,&local_220,&local_214);
      iVar11 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar11 + 1U) {
        FUN_140d35044(param_6,iVar11);
      }
      pfVar12 = local_148;
      pfVar15 = (float *)((longlong)iVar11 * 0x58 + *param_6);
      for (lVar10 = 0x16; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pfVar15 = *pfVar12;
        pfVar12 = pfVar12 + 1;
        pfVar15 = pfVar15 + 1;
      }
      local_1a0[2] = (float)*(double *)(local_208 + 0x10 + lVar8 * 0x18);
      local_1a0[1] = (float)*(double *)(local_208 + 8 + lVar8 * 0x18);
      local_1a0[0] = (float)*(double *)(local_208 + lVar8 * 0x18);
      local_1a0[3] = 1.0;
      uVar9 = uVar13;
      if (uVar13 == 0) {
        uVar9 = param_5;
      }
      lVar10 = (longlong)(int)(uVar9 - 1);
      dVar19 = *(double *)(local_208 + lVar10 * 0x18);
      dVar17 = *(double *)(local_208 + 8 + lVar10 * 0x18);
      dVar22 = *(double *)(local_208 + lVar8 * 0x18);
      dVar2 = *(double *)(local_208 + 8 + lVar8 * 0x18);
      dVar18 = *(double *)(local_208 + 0x10 + lVar8 * 0x18);
      dVar21 = *(double *)(local_208 + 0x10 + lVar10 * 0x18);
      dVar20 = (dVar22 * dVar17 - dVar19 * dVar2) + dVar5;
      dVar19 = (dVar19 * dVar18 - dVar22 * dVar21) + dVar6;
      dVar17 = (dVar2 * dVar21 - dVar17 * dVar18) + dVar1;
      dVar22 = dVar20 * dVar20 + dVar17 * dVar17 + dVar19 * dVar19;
      if (((dVar22 != 1.0) || (dVar18 = dVar17, dVar21 = dVar20, dVar2 = dVar19, NAN(dVar22))) &&
         (dVar18 = DAT_14c8464e0, dVar21 = DAT_14c8464f0, dVar2 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar22)) {
        dVar22 = 1.0 / SQRT(dVar22);
        dVar18 = dVar17 * dVar22;
        dVar21 = dVar20 * dVar22;
        dVar2 = dVar19 * dVar22;
      }
      local_20c = (float)dVar21;
      local_214 = CONCAT44((float)dVar2,(float)dVar18);
      local_22c = fVar23;
      local_228 = fVar24;
      local_224 = fVar26;
      local_220 = fVar29;
      local_21c = fVar25;
      local_218 = fVar28;
      local_1a0[4] = fVar27;
      FUN_147c71d8a(local_1a0,&local_22c,&local_220,&local_214);
      iVar3 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar3 + 1U) {
        FUN_140d35044(param_6);
      }
      pfVar12 = local_1a0;
      pfVar15 = (float *)((longlong)iVar3 * 0x58 + *param_6);
      for (lVar8 = 0x16; lVar8 != 0; lVar8 = lVar8 + -1) {
        *pfVar15 = *pfVar12;
        pfVar12 = pfVar12 + 1;
        pfVar15 = pfVar15 + 1;
      }
      local_1f8[2] = (float)*(double *)(local_208 + 0x10 + lVar14 * 0x18);
      local_1f8[1] = (float)*(double *)(local_208 + 8 + lVar14 * 0x18);
      local_1f8[0] = (float)*(double *)(local_208 + lVar14 * 0x18);
      local_1f8[3] = 1.0;
      local_1f8[4] = (float)uVar7 / local_240;
      lVar8 = (longlong)(int)((uVar13 + 2) % param_5);
      dVar19 = *(double *)(local_208 + lVar14 * 0x18);
      dVar17 = *(double *)(local_208 + 8 + lVar14 * 0x18);
      dVar22 = *(double *)(local_208 + lVar8 * 0x18);
      dVar2 = *(double *)(local_208 + 8 + lVar8 * 0x18);
      dVar18 = *(double *)(local_208 + 0x10 + lVar8 * 0x18);
      dVar21 = *(double *)(local_208 + 0x10 + lVar14 * 0x18);
      dVar5 = dVar5 + (dVar22 * dVar17 - dVar19 * dVar2);
      dVar6 = dVar6 + (dVar19 * dVar18 - dVar22 * dVar21);
      dVar1 = dVar1 + (dVar2 * dVar21 - dVar17 * dVar18);
      dVar19 = dVar5 * dVar5 + dVar1 * dVar1 + dVar6 * dVar6;
      if (((dVar19 != 1.0) || (dVar17 = dVar5, dVar22 = dVar6, dVar2 = dVar1, NAN(dVar19))) &&
         (dVar17 = DAT_14c8464f0, dVar22 = DAT_14c8464e8, dVar2 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar19)) {
        dVar19 = 1.0 / SQRT(dVar19);
        dVar17 = dVar5 * dVar19;
        dVar22 = dVar6 * dVar19;
        dVar2 = dVar1 * dVar19;
      }
      local_20c = (float)dVar17;
      local_214 = CONCAT44((float)dVar22,(float)dVar2);
      local_22c = fVar23;
      local_228 = fVar24;
      local_224 = fVar26;
      local_220 = fVar29;
      local_21c = fVar25;
      local_218 = fVar28;
      FUN_147c71d8a(local_1f8,&local_22c,&local_220,&local_214);
      iVar16 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar16 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar16 + 1U) {
        FUN_140d35044(param_6,iVar16);
      }
      pfVar12 = local_1f8;
      pfVar15 = (float *)((longlong)iVar16 * 0x58 + *param_6);
      for (lVar14 = 0x16; lVar14 != 0; lVar14 = lVar14 + -1) {
        *pfVar15 = *pfVar12;
        pfVar12 = pfVar12 + 1;
        pfVar15 = pfVar15 + 1;
      }
      iVar4 = (int)param_7[1];
      uVar13 = iVar4 + 1;
      *(uint *)(param_7 + 1) = uVar13;
      if (0.0 <= local_238) {
        if (*(uint *)((longlong)param_7 + 0xc) < uVar13) {
          FUN_1447808da(param_7,iVar4);
        }
        *(int *)(*param_7 + (longlong)iVar4 * 4) = iVar11;
        iVar11 = (int)param_7[1];
        *(uint *)(param_7 + 1) = iVar11 + 1U;
        if (*(uint *)((longlong)param_7 + 0xc) < iVar11 + 1U) {
          FUN_1447808da(param_7,iVar11);
        }
        *(int *)(*param_7 + (longlong)iVar11 * 4) = iVar3;
        iVar11 = (int)param_7[1];
        uVar13 = iVar11 + 1;
        *(uint *)(param_7 + 1) = uVar13;
      }
      else {
        if (*(uint *)((longlong)param_7 + 0xc) < uVar13) {
          FUN_1447808da(param_7,iVar4);
        }
        *(int *)(*param_7 + (longlong)iVar4 * 4) = iVar11;
        iVar11 = (int)param_7[1];
        *(uint *)(param_7 + 1) = iVar11 + 1U;
        if (*(uint *)((longlong)param_7 + 0xc) < iVar11 + 1U) {
          FUN_1447808da(param_7,iVar11);
        }
        *(int *)(*param_7 + (longlong)iVar11 * 4) = iVar16;
        iVar11 = (int)param_7[1];
        uVar13 = iVar11 + 1;
        *(uint *)(param_7 + 1) = uVar13;
        iVar16 = iVar3;
      }
      if (*(uint *)((longlong)param_7 + 0xc) < uVar13) {
        FUN_1447808da(param_7,iVar11);
      }
      *(int *)(*param_7 + (longlong)iVar11 * 4) = iVar16;
      uVar13 = local_230;
    } while (param_5 != local_230);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cb4fc8 FUN_147cb4fc8 body=753 status=ok
// SIG undefined FUN_147cb4fc8(void)

void FUN_147cb4fc8(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,char param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9
                  )

{
  double dVar1;
  int iVar2;
  undefined1 auStack_198 [32];
  uint local_178;
  longlong *local_170;
  longlong *local_168;
  uint local_160;
  double local_150;
  double dStack_148;
  double local_140;
  undefined1 local_138 [16];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  longlong local_108;
  ulonglong uStack_100;
  undefined1 local_f0 [40];
  longlong local_c8 [5];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_178 = param_5;
  local_170 = local_c8 + 2;
  local_168 = local_c8;
  FUN_147cb471d(param_3,param_4,0x3f800000,0);
  local_178 = local_178 & 0xffffff00;
  local_170 = (longlong *)0x0;
  FUN_140d3493e(local_f0,*(undefined4 *)(param_1[1] + 0x3090),1,0);
  FUN_147a7d62c(local_f0,local_c8 + 2);
  FUN_147a7d6ae(local_f0,local_c8);
  local_170 = (longlong *)((ulonglong)local_170 & 0xffffffffffffff00);
  local_178 = CONCAT31(local_178._1_3_,param_9);
  local_160 = 0xffffffff;
  local_168 = (longlong *)CONCAT71(local_168._1_7_,1);
  FUN_1434d8d42(local_f0,param_1,param_2,param_8);
  if (param_6 != '\0') {
    local_108 = 0;
    uStack_100 = (ulonglong)param_5;
    if (param_5 != 0) {
      FUN_1403e3958(&local_108,0);
    }
    iVar2 = 0;
    do {
      FUN_147cb4549(&local_120,param_3,param_4,(float)iVar2 * 0.25 * 6.2831855);
      local_150 = param_2[0xc];
      dStack_148 = param_2[0xd];
      dVar1 = local_110 * param_2[9] + local_118 * param_2[5] + local_120 * param_2[1] + dStack_148;
      local_140 = param_2[0xe];
      local_138._8_4_ = SUB84(dVar1,0);
      local_138._0_8_ =
           local_110 * param_2[8] + local_118 * param_2[4] + local_120 * *param_2 + local_150;
      local_138._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      local_128 = local_120 * param_2[2] + local_118 * param_2[6] + local_110 * param_2[10] +
                  local_140;
      local_168 = (longlong *)((ulonglong)local_168 & 0xffffffff00000000);
      local_170 = (longlong *)((ulonglong)local_170 & 0xffffffff00000000);
      local_178 = CONCAT31(local_178._1_3_,param_9);
      local_160 = local_160 & 0xffffff00;
      (**(code **)(*param_1 + 0x30))(param_1,&local_150,local_138,param_7);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1434d8cf8(local_f0);
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb52ba FUN_147cb52ba body=2276 status=ok
// SIG undefined FUN_147cb52ba(void)

void FUN_147cb52ba(double *param_1,double *param_2,double *param_3,double *param_4,double param_5,
                  double param_6,uint param_7,longlong *param_8,longlong *param_9)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  undefined1 auStack_1b8 [44];
  float local_18c;
  double local_188;
  double *local_180;
  double *local_178;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148 [4];
  undefined4 local_138;
  undefined8 local_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180 = param_1;
  local_178 = param_2;
  if (param_7 != 0) {
    local_18c = 6.2831855 / (float)param_7;
    dVar2 = param_4[2];
    dVar3 = param_4[1];
    dVar4 = *param_4;
    iVar6 = (int)param_8[1];
    local_188 = (double)(1.0 / (float)param_7);
    iVar10 = -param_7;
    dVar7 = 0.0;
    uVar8 = 1;
    do {
      fVar23 = (float)uVar8 * local_18c;
      fVar16 = cosf(fVar23);
      dVar19 = (double)fVar16;
      dVar5 = local_178[2];
      dVar17 = local_178[1];
      dVar18 = *local_178;
      fVar16 = sinf(fVar23);
      dVar20 = (double)fVar16;
      dVar21 = (param_3[2] * dVar20 + dVar5 * dVar19) * param_5 + local_180[2];
      dVar22 = (param_3[1] * dVar20 + dVar17 * dVar19) * param_5 + local_180[1];
      dVar20 = (dVar20 * *param_3 + dVar19 * dVar18) * param_5 + *local_180;
      dVar17 = dVar21 - local_180[2];
      dVar18 = dVar22 - local_180[1];
      dVar19 = dVar20 - *local_180;
      dVar5 = dVar17 * dVar17 + dVar19 * dVar19 + dVar18 * dVar18;
      if (9.99999993922529e-09 < dVar5) {
        dVar5 = 1.0 / SQRT(dVar5);
        dVar19 = dVar19 * dVar5;
        dVar18 = dVar18 * dVar5;
        dVar17 = dVar17 * dVar5;
      }
      local_fc = 0;
      local_148[2] = (float)(dVar21 - dVar2 * param_6);
      local_148[1] = (float)(dVar22 - dVar3 * param_6);
      local_148[0] = (float)(dVar20 - param_6 * dVar4);
      local_148[3] = (float)dVar7;
      local_138 = 0;
      local_14c = (float)dVar17;
      local_150 = (float)dVar18;
      local_154 = (float)dVar19;
      dVar5 = param_4[2];
      dVar20 = *param_4;
      dVar21 = param_4[1];
      local_158 = (float)(dVar19 * dVar21 - dVar20 * dVar18);
      local_15c = (float)(dVar17 * dVar20 - dVar5 * dVar19);
      local_160 = (float)(dVar18 * dVar5 - dVar21 * dVar17);
      local_164 = -(float)dVar5;
      local_168 = -(float)dVar21;
      local_16c = -(float)dVar20;
      FUN_147c71d8a(local_148,&local_16c,&local_160,&local_154);
      iVar15 = (int)param_8[1];
      *(uint *)(param_8 + 1) = iVar15 + 1U;
      if (*(uint *)((longlong)param_8 + 0xc) < iVar15 + 1U) {
        FUN_140d35044(param_8,iVar15);
      }
      pfVar11 = local_148;
      pfVar12 = (float *)((longlong)iVar15 * 0x58 + *param_8);
      for (lVar9 = 0x16; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pfVar12 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        pfVar12 = pfVar12 + 1;
      }
      dVar7 = dVar7 + local_188;
      iVar15 = iVar10 + 1 + uVar8;
      uVar8 = uVar8 + 1;
    } while (iVar15 != 1);
    dVar7 = 0.0;
    uVar8 = 1;
    do {
      fVar23 = (float)uVar8 * local_18c;
      fVar16 = cosf(fVar23);
      dVar19 = (double)fVar16;
      dVar5 = local_178[2];
      dVar17 = local_178[1];
      dVar18 = *local_178;
      fVar16 = sinf(fVar23);
      dVar20 = (double)fVar16;
      dVar21 = (param_3[2] * dVar20 + dVar5 * dVar19) * param_5 + local_180[2];
      dVar22 = (param_3[1] * dVar20 + dVar17 * dVar19) * param_5 + local_180[1];
      dVar20 = (dVar20 * *param_3 + dVar19 * dVar18) * param_5 + *local_180;
      dVar17 = dVar21 - local_180[2];
      dVar18 = dVar22 - local_180[1];
      dVar19 = dVar20 - *local_180;
      dVar5 = dVar17 * dVar17 + dVar19 * dVar19 + dVar18 * dVar18;
      if (9.99999993922529e-09 < dVar5) {
        dVar5 = 1.0 / SQRT(dVar5);
        dVar19 = dVar19 * dVar5;
        dVar18 = dVar18 * dVar5;
        dVar17 = dVar17 * dVar5;
      }
      local_fc = 0;
      local_148[2] = (float)(dVar21 + dVar2 * param_6);
      local_148[1] = (float)(dVar22 + dVar3 * param_6);
      local_148[0] = (float)(dVar20 + param_6 * dVar4);
      local_148[3] = (float)dVar7;
      local_138 = 0x3f800000;
      local_14c = (float)dVar17;
      local_150 = (float)dVar18;
      local_154 = (float)dVar19;
      dVar5 = param_4[2];
      dVar20 = *param_4;
      dVar21 = param_4[1];
      local_158 = (float)(dVar19 * dVar21 - dVar20 * dVar18);
      local_15c = (float)(dVar17 * dVar20 - dVar5 * dVar19);
      local_160 = (float)(dVar18 * dVar5 - dVar21 * dVar17);
      local_164 = -(float)dVar5;
      local_168 = -(float)dVar21;
      local_16c = -(float)dVar20;
      FUN_147c71d8a(local_148,&local_16c,&local_160,&local_154);
      iVar15 = (int)param_8[1];
      *(uint *)(param_8 + 1) = iVar15 + 1U;
      if (*(uint *)((longlong)param_8 + 0xc) < iVar15 + 1U) {
        FUN_140d35044(param_8,iVar15);
      }
      pfVar11 = local_148;
      pfVar12 = (float *)((longlong)iVar15 * 0x58 + *param_8);
      for (lVar9 = 0x16; lVar9 != 0; lVar9 = lVar9 + -1) {
        *pfVar12 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        pfVar12 = pfVar12 + 1;
      }
      dVar7 = dVar7 + local_188;
      iVar15 = iVar10 + 1 + uVar8;
      uVar8 = uVar8 + 1;
    } while (iVar15 != 1);
    if (param_7 != 1) {
      uVar8 = 1;
      do {
        uVar1 = uVar8 + 1;
        uVar14 = uVar1;
        if (uVar8 + iVar10 == -1) {
          uVar14 = 0;
        }
        iVar15 = (int)param_9[1];
        *(uint *)(param_9 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)param_9 + 0xc) < iVar15 + 1U) {
          FUN_1447808da(param_9,iVar15);
        }
        *(int *)(*param_9 + (longlong)iVar15 * 4) = iVar6;
        iVar15 = (int)param_9[1];
        *(uint *)(param_9 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)param_9 + 0xc) < iVar15 + 1U) {
          FUN_1447808da(param_9,iVar15);
        }
        *(uint *)(*param_9 + (longlong)iVar15 * 4) = iVar6 + uVar8;
        iVar15 = (int)param_9[1];
        *(uint *)(param_9 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)param_9 + 0xc) < iVar15 + 1U) {
          FUN_1447808da(param_9,iVar15);
        }
        *(uint *)(*param_9 + (longlong)iVar15 * 4) = uVar14 + iVar6;
        iVar15 = (int)param_9[1];
        *(uint *)(param_9 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)param_9 + 0xc) < iVar15 + 1U) {
          FUN_1447808da(param_9,iVar15);
        }
        *(uint *)(*param_9 + (longlong)iVar15 * 4) = uVar14 + iVar6 + param_7;
        iVar15 = (int)param_9[1];
        *(uint *)(param_9 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)param_9 + 0xc) < iVar15 + 1U) {
          FUN_1447808da(param_9,iVar15);
        }
        *(uint *)(*param_9 + (longlong)iVar15 * 4) = uVar8 + iVar6 + param_7;
        iVar15 = (int)param_9[1];
        *(uint *)(param_9 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)param_9 + 0xc) < iVar15 + 1U) {
          FUN_1447808da(param_9,iVar15);
        }
        *(uint *)(*param_9 + (longlong)iVar15 * 4) = iVar6 + param_7;
        uVar8 = uVar1;
      } while (uVar1 != param_7);
    }
    uVar8 = 0;
    do {
      uVar1 = uVar8 + 1;
      uVar14 = uVar1;
      if (param_7 - 1 == uVar8) {
        uVar14 = 0;
      }
      iVar10 = (int)param_9[1];
      *(uint *)(param_9 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_9 + 0xc) < iVar10 + 1U) {
        FUN_1447808da(param_9,iVar10);
      }
      *(uint *)(*param_9 + (longlong)iVar10 * 4) = iVar6 + uVar8;
      iVar10 = (int)param_9[1];
      *(uint *)(param_9 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_9 + 0xc) < iVar10 + 1U) {
        FUN_1447808da(param_9,iVar10);
      }
      iVar15 = uVar8 + iVar6 + param_7;
      *(int *)(*param_9 + (longlong)iVar10 * 4) = iVar15;
      iVar10 = (int)param_9[1];
      *(uint *)(param_9 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_9 + 0xc) < iVar10 + 1U) {
        FUN_1447808da(param_9,iVar10);
      }
      iVar13 = uVar14 + iVar6;
      *(int *)(*param_9 + (longlong)iVar10 * 4) = iVar13;
      iVar10 = (int)param_9[1];
      *(uint *)(param_9 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_9 + 0xc) < iVar10 + 1U) {
        FUN_1447808da(param_9,iVar10);
      }
      *(int *)(*param_9 + (longlong)iVar10 * 4) = iVar15;
      iVar10 = (int)param_9[1];
      *(uint *)(param_9 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_9 + 0xc) < iVar10 + 1U) {
        FUN_1447808da(param_9,iVar10);
      }
      *(uint *)(*param_9 + (longlong)iVar10 * 4) = param_7 + iVar13;
      iVar10 = (int)param_9[1];
      *(uint *)(param_9 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_9 + 0xc) < iVar10 + 1U) {
        FUN_1447808da(param_9,iVar10);
      }
      *(int *)(*param_9 + (longlong)iVar10 * 4) = iVar13;
      uVar8 = uVar1;
    } while (param_7 != uVar1);
  }
  if ((local_f0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb5b9f FUN_147cb5b9f body=635 status=ok
// SIG undefined FUN_147cb5b9f(void)

void FUN_147cb5b9f(double *param_1,double *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_168 [32];
  double *local_148;
  undefined8 local_140;
  double local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  dVar1 = param_2[2] - param_1[2];
  dVar2 = param_2[1] - param_1[1];
  dVar3 = *param_2 - *param_1;
  dVar4 = SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2);
  if (9.99999993922529e-09 < dVar4) {
    dVar5 = 1.0 / dVar4;
    dVar1 = dVar1 * dVar5;
    dVar2 = dVar2 * dVar5;
    dVar3 = dVar3 * dVar5;
    local_100 = 1.0 / SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2);
    local_f0 = dVar1 * local_100;
    local_f8 = dVar2 * local_100;
    local_100 = local_100 * dVar3;
    local_b8 = dVar3;
    local_b0 = dVar2;
    local_a8 = dVar1;
    FUN_1467fc32a(&local_100,local_d0,local_e8);
    local_f0 = dVar1 * dVar4 * 0.5 + param_1[2];
    local_f8 = dVar2 * dVar4 * 0.5 + param_1[1];
    local_100 = dVar3 * dVar4 * 0.5 + *param_1;
    local_138 = dVar4 * 0.5;
    local_108 = param_9;
    local_110 = param_8;
    local_118 = param_7;
    local_120 = param_6;
    local_128 = param_5;
    local_148 = &local_b8;
    local_140 = param_3;
    local_130 = param_4;
    FUN_147cb5e1b(&DAT_14c846400,&local_100,local_d0,local_e8);
  }
  if ((local_a0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb5e1b FUN_147cb5e1b body=352 status=ok
// SIG undefined FUN_147cb5e1b(void)

void FUN_147cb5e1b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,longlong param_12,
                  undefined8 param_13)

{
  undefined1 auStack_e8 [32];
  uint local_c8;
  ulonglong uStack_c0;
  undefined4 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined1 local_90 [40];
  longlong local_68 [5];
  
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_b8 = param_8;
  local_c8 = param_6;
  uStack_c0 = param_7;
  local_b0 = local_68 + 2;
  local_a8 = local_68;
  FUN_147cb52ba(param_2,param_3,param_4,param_5);
  local_c8 = local_c8 & 0xffffff00;
  uStack_c0 = 0;
  FUN_140d3493e(local_90,*(undefined4 *)(param_12 + 0x118),1,0);
  FUN_147a7d62c(local_90,local_68 + 2);
  FUN_147a7d6ae(local_90,local_68);
  local_a0 = param_13;
  local_a8 = (longlong *)param_12;
  local_b0 = (longlong *)CONCAT44(local_b0._4_4_,param_11);
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  local_c8 = local_c8 & 0xffffff00;
  local_b8 = CONCAT31(local_b8._1_3_,1);
  FUN_147a7d7bc(local_90,param_1,param_9,param_10);
  FUN_1434d8cf8(local_90);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_68[4] ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb5f7c FUN_147cb5f7c body=115 status=ok
// SIG undefined FUN_147cb5f7c(void)

void FUN_147cb5f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  FUN_147cb5e1b(&DAT_14c846400,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                param_9,param_10,param_11,param_12);
  return;
}



// FUNCTION 147cb5fef FUN_147cb5fef body=362 status=ok
// SIG undefined FUN_147cb5fef(void)

void FUN_147cb5fef(undefined8 param_1,float param_2,float param_3,uint param_4,undefined8 param_5,
                  undefined1 param_6,undefined4 param_7,longlong param_8,undefined8 param_9)

{
  undefined1 auStack_e8 [32];
  uint local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_90 [40];
  longlong local_68 [5];
  
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_c8 = param_4;
  local_c0 = local_68 + 2;
  local_b8 = local_68;
  FUN_147cb471d((param_2 * 3.1415927) / 180.0,(param_3 * 3.1415927) / 180.0,0x3f800000,0);
  local_c8 = local_c8 & 0xffffff00;
  local_c0 = (longlong *)0x0;
  FUN_140d3493e(local_90,*(undefined4 *)(param_8 + 0x118),1,0);
  FUN_147a7d62c(local_90,local_68 + 2);
  FUN_147a7d6ae(local_90,local_68);
  local_a0 = param_9;
  local_a8 = param_8;
  local_b0 = param_7;
  local_c0 = (longlong *)((ulonglong)local_c0 & 0xffffffffffffff00);
  local_c8 = local_c8 & 0xffffff00;
  local_b8 = (longlong *)CONCAT71(local_b8._1_7_,1);
  FUN_147a7d7bc(local_90,param_1,param_5,param_6);
  FUN_1434d8cf8(local_90);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_68[4] ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb615a FUN_147cb615a body=893 status=ok
// SIG undefined FUN_147cb615a(void)

void FUN_147cb615a(double *param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                  undefined8 param_5,double param_6,double param_7,undefined4 param_8,
                  undefined8 param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,ulonglong param_14)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_218 [32];
  double *local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  double *local_198;
  undefined1 local_190 [24];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined1 local_118 [136];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  param_7 = param_7 - param_6;
  if (param_7 <= 1.0) {
    param_7 = 1.0;
  }
  dVar1 = param_4[2];
  dVar2 = *param_4;
  dVar3 = param_4[1];
  local_120 = dVar1 * param_6 + param_1[2];
  local_128 = dVar3 * param_6 + param_1[1];
  local_130 = dVar2 * param_6 + *param_1;
  param_7 = param_7 + param_7;
  local_138 = param_7 * dVar1 + local_120;
  local_140 = param_7 * dVar3 + local_128;
  local_148 = param_7 * dVar2 + local_130;
  dVar4 = SQRT((local_138 - local_120) * (local_138 - local_120) +
               (local_148 - local_130) * (local_148 - local_130) +
               (local_140 - local_128) * (local_140 - local_128)) * 0.5;
  local_150 = dVar1 * dVar4 + local_120;
  local_158 = dVar3 * dVar4 + local_128;
  local_160 = dVar2 * dVar4 + local_130;
  local_178 = param_6;
  local_170 = param_6;
  local_168 = param_6;
  local_1a8 = param_2;
  local_1a0 = param_3;
  local_198 = param_4;
  FUN_147298f40(local_118);
  FUN_144a90b9e(local_118,local_190);
  local_1b0 = param_14;
  local_1b8 = local_1b8 & 0xffffffffffffff00;
  local_1c0 = param_13;
  local_1c8 = param_12;
  local_1d0 = param_11;
  local_1d8 = CONCAT71(local_1d8._1_7_,param_10);
  local_1e0 = param_9;
  local_1e8 = (double)CONCAT44(local_1e8._4_4_,0x3fc90fdb);
  local_1f8 = (double *)CONCAT44(local_1f8._4_4_,param_8);
  local_1f0 = (double)((ulonglong)local_1f0._4_4_ << 0x20);
  FUN_147cb3316(&local_148,local_190,&local_178);
  uVar6 = local_1a0;
  uVar5 = local_1a8;
  local_1b8 = param_14;
  local_1c0 = param_13;
  local_1c8 = param_12;
  local_1d0 = param_10;
  local_1d8 = param_9;
  local_1e0 = CONCAT44(local_1e0._4_4_,param_8);
  local_1f0 = param_6;
  local_1f8 = local_198;
  local_1e8 = dVar4;
  FUN_147cb5e1b(&DAT_14c846400,&local_160,local_1a8,local_1a0);
  local_178 = param_6;
  local_170 = param_6;
  local_168 = param_6;
  FUN_147298f40(local_118,uVar5,uVar6);
  FUN_144a90b9e(local_118,local_190);
  local_1b0 = param_14;
  local_1b8 = local_1b8 & 0xffffffffffffff00;
  local_1c0 = param_13;
  local_1c8 = param_12;
  local_1d0 = param_11;
  local_1d8 = CONCAT71(local_1d8._1_7_,param_10);
  local_1e0 = param_9;
  local_1f0 = (double)CONCAT44(local_1f0._4_4_,0x3fc90fdb);
  local_1f8 = (double *)CONCAT44(local_1f8._4_4_,param_8);
  local_1e8 = (double)CONCAT44(local_1e8._4_4_,0x40490fdb);
  FUN_147cb3316(&local_130,local_190,&local_178,param_8);
  if ((local_90 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb64d8 FUN_147cb64d8 body=101 status=ok
// SIG undefined FUN_147cb64d8(void)

void FUN_147cb64d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  FUN_147cb653d(param_6,&DAT_14c846400,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                param_9,param_10);
  return;
}



// FUNCTION 147cb653d FUN_147cb653d body=345 status=ok
// SIG undefined FUN_147cb653d(void)

void FUN_147cb653d(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8,
                  undefined4 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined1 auStack_d8 [32];
  uint local_b8;
  ulonglong uStack_b0;
  undefined4 local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined1 local_90 [40];
  longlong local_68 [5];
  
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_a8 = param_9;
  local_b8 = param_7;
  uStack_b0 = param_8;
  local_a0 = local_68 + 2;
  local_98 = local_68;
  FUN_147cb52ba(param_3,param_4,param_5,param_6);
  local_b8 = local_b8 & 0xffffff00;
  uStack_b0 = 0;
  FUN_140d3493e(local_90,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x3090),1,0);
  FUN_147a7d62c(local_90,local_68 + 2);
  FUN_147a7d6ae(local_90,local_68);
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  local_b8 = CONCAT31(local_b8._1_3_,param_11);
  local_a0 = (longlong *)CONCAT44(local_a0._4_4_,0xffffffff);
  local_a8 = CONCAT31(local_a8._1_3_,1);
  FUN_1434d8d42(local_90,param_1,param_2,param_10);
  FUN_1434d8cf8(local_90);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_68[4] ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb6697 FUN_147cb6697 body=2130 status=ok
// SIG undefined FUN_147cb6697(void)

void FUN_147cb6697(longlong param_1,undefined8 param_2,double *param_3,double *param_4,
                  double param_5,double param_6,int param_7,uint param_8,undefined8 param_9,
                  undefined1 param_10,byte param_11,float param_12,byte param_13)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_268 [32];
  undefined1 local_248;
  ulonglong local_240;
  undefined1 local_238;
  undefined4 local_230;
  byte local_21d;
  float local_21c;
  double local_218;
  int local_20c;
  float local_208;
  int local_204;
  ulonglong local_200;
  double local_1f8;
  ulonglong local_1f0;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  double *local_1d8;
  double *local_1d0;
  double local_1c8;
  double local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  undefined1 local_170 [40];
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined8 local_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (param_7 < 4) {
    param_7 = 3;
  }
  uVar7 = 3;
  if (3 < (int)param_8) {
    uVar7 = param_8;
  }
  local_1f0 = (ulonglong)uVar7;
  local_21d = param_13;
  if (param_11 != 0) {
    local_208 = param_12;
  }
  else {
    local_208 = 6.2831855;
  }
  iVar8 = 0;
  if (param_11 != 0) {
    iVar8 = param_13 + 1 + (uint)param_13;
  }
  local_200 = (ulonglong)(uint)(iVar8 + param_7);
  dVar3 = *param_3 * param_4[1] - *param_4 * param_3[1];
  dVar2 = param_3[2] * *param_4 - *param_3 * param_4[2];
  local_218 = param_3[1] * param_4[2] - param_4[1] * param_3[2];
  dVar22 = dVar3 * dVar3 + local_218 * local_218 + dVar2 * dVar2;
  if (9.99999993922529e-09 < dVar22) {
    dVar22 = 1.0 / SQRT(dVar22);
    local_218 = local_218 * dVar22;
    dVar2 = dVar2 * dVar22;
    dVar3 = dVar3 * dVar22;
  }
  local_208 = local_208 / (float)param_7;
  local_1e0 = 1.0 / (float)(int)uVar7;
  local_1e4 = 1.0 / (float)param_7;
  local_240 = 0;
  local_248 = 0;
  iVar8 = 0;
  local_20c = param_7;
  local_1d8 = param_3;
  local_1d0 = param_4;
  local_1b8 = param_1;
  local_1b0 = param_2;
  FUN_140d3493e(local_170,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x3090),1,0);
  local_21d = local_21d & param_11;
  local_204 = (int)local_200 + -1;
  local_1dc = 6.2831855 / (float)(int)uVar7;
  do {
    fVar26 = local_1dc;
    local_21c = (float)iVar8;
    fVar25 = local_208 * local_21c;
    fVar17 = cosf(fVar25);
    dVar23 = (double)fVar17;
    dVar22 = local_1d8[2];
    dVar20 = local_1d8[1];
    dVar1 = *local_1d8;
    fVar17 = sinf(fVar25);
    bVar14 = local_21d == 0;
    bVar15 = iVar8 != local_204;
    dVar18 = (double)fVar17;
    dVar5 = dVar22 * dVar23 + local_1d0[2] * dVar18;
    dVar20 = dVar20 * dVar23 + local_1d0[1] * dVar18;
    dVar22 = dVar23 * dVar1 + dVar18 * *local_1d0;
    local_1f8 = dVar5 * param_5;
    local_1c0 = dVar20 * param_5;
    local_1c8 = dVar22 * param_5;
    local_21c = local_21c * local_1e4;
    iVar13 = 0;
    local_1a8 = dVar20;
    local_1a0 = dVar22;
    do {
      iVar12 = iVar13 + 1;
      fVar26 = (float)iVar12 * fVar26;
      fVar17 = cosf(fVar26);
      dVar1 = (double)fVar17;
      fVar17 = sinf(fVar26);
      dVar23 = (double)fVar17;
      dVar4 = dVar3 * dVar23 + dVar5 * dVar1;
      dVar18 = dVar2 * dVar23 + dVar20 * dVar1;
      dVar1 = dVar23 * local_218 + dVar1 * dVar22;
      dVar22 = local_1c8;
      dVar20 = local_1c0;
      dVar23 = local_1f8;
      if (bVar14 || bVar15 && iVar8 != 0) {
        dVar22 = dVar1 * param_6 + local_1c8;
        dVar20 = dVar18 * param_6 + local_1c0;
        dVar23 = dVar4 * param_6 + local_1f8;
      }
      local_fc = 0;
      local_140 = (float)dVar23;
      local_144 = (float)dVar20;
      local_148 = (float)dVar22;
      local_138 = local_21c;
      local_13c = (float)iVar13 * local_1e0 + 0.0;
      fVar17 = sinf(fVar26);
      dVar23 = (double)fVar17;
      fVar26 = cosf(fVar26);
      dVar22 = local_1a0;
      dVar20 = local_1a8;
      dVar24 = (double)fVar26;
      dVar21 = dVar3 * dVar24 - dVar5 * dVar23;
      dVar19 = dVar2 * dVar24 - local_1a8 * dVar23;
      dVar23 = dVar24 * local_218 - dVar23 * local_1a0;
      local_194 = (float)dVar23;
      local_178 = (float)dVar18;
      local_18c = (float)dVar21;
      local_190 = (float)dVar19;
      local_174 = (float)dVar4;
      local_17c = (float)dVar1;
      local_180 = (float)(dVar1 * dVar19 - dVar23 * dVar18);
      local_184 = (float)(dVar4 * dVar23 - dVar21 * dVar1);
      local_188 = (float)(dVar18 * dVar21 - dVar19 * dVar4);
      FUN_147c71d8a(&local_148,&local_194,&local_188,&local_17c);
      FUN_147a7d5d8(local_170,&local_148);
      fVar26 = local_1dc;
      iVar13 = iVar12;
    } while ((int)local_1f0 != iVar12);
    iVar8 = iVar8 + 1;
  } while (iVar8 != (int)local_200);
  if (param_11 != 0) {
    local_20c = local_204;
  }
  if (0 < local_20c) {
    local_200 = (ulonglong)(uint)((int)local_200 * (int)local_1f0);
    local_21c = (float)((int)local_1f0 + -1);
    local_218 = (double)((ulonglong)local_218 & 0xffffffff00000000);
    iVar8 = 0;
    do {
      bVar14 = local_21d == 0;
      bVar15 = local_218._0_4_ != 0;
      bVar16 = local_218._0_4_ != local_204;
      iVar13 = local_218._0_4_ * (int)local_1f0;
      iVar12 = (int)local_1f0 + iVar8;
      local_1f8 = (double)CONCAT44(local_1f8._4_4_,iVar13);
      fVar26 = 0.0;
      do {
        fVar17 = (float)((int)fVar26 + 1);
        uVar6 = (ulonglong)(uint)(iVar8 + (int)fVar26);
        fVar25 = fVar17;
        if (local_21c == fVar26) {
          fVar25 = 0.0;
        }
        uVar7 = (int)fVar25 + iVar13;
        uVar9 = (longlong)((int)fVar26 + iVar12) % (longlong)(int)local_200 & 0xffffffff;
        uVar11 = (longlong)(int)(uVar7 + (int)local_1f0) % (longlong)(int)local_200 & 0xffffffff;
        if (bVar14 || bVar16 && bVar15) {
          FUN_140d3489c(local_170,uVar6,uVar9,uVar7);
          uVar6 = uVar9;
          uVar10 = uVar11;
          uVar11 = (ulonglong)uVar7;
          iVar13 = local_1f8._0_4_;
        }
        else {
          uVar10 = uVar9;
          if (local_218._0_4_ != 0) {
            uVar10 = (ulonglong)uVar7;
            uVar11 = uVar9;
          }
        }
        FUN_140d3489c(local_170,uVar6,uVar10,uVar11);
        fVar26 = fVar17;
      } while ((float)local_1f0 != fVar17);
      iVar13 = local_218._0_4_ + 1;
      local_218 = (double)CONCAT44(local_218._4_4_,iVar13);
      iVar8 = iVar12;
    } while (iVar13 != local_20c);
  }
  local_248 = param_10;
  local_230 = 0xffffffff;
  local_238 = 1;
  local_240 = local_240 & 0xffffffffffffff00;
  FUN_1434d8d42(local_170,local_1b8,local_1b0,param_9);
  FUN_1434d8cf8(local_170);
  if ((local_f0 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb6eea FUN_147cb6eea body=1308 status=ok
// SIG undefined FUN_147cb6eea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cb6eea(longlong param_1,double *param_2,double *param_3,double *param_4,
                  undefined4 param_5,double param_6,int param_7,undefined8 param_8,
                  undefined1 param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float _X;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  ulonglong local_1e0;
  undefined1 local_1d8;
  undefined4 local_1d0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined1 local_1a8 [16];
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  undefined1 local_170 [40];
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined4 local_138;
  undefined8 local_fc;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  dVar6 = param_4[2];
  local_1e0 = 0;
  local_1e8 = 0;
  iVar10 = 0;
  FUN_140d3493e(local_170,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x3090),1,0);
  if (0 < param_7) {
    local_1ac = 6.2831855 / (float)param_7;
    local_1b0 = 1.0 / (float)param_7;
    dVar8 = dVar3 * dVar2 - dVar1 * dVar4;
    dVar3 = dVar5 * dVar1 - dVar6 * dVar3;
    dVar2 = dVar4 * dVar6 - dVar2 * dVar5;
    uVar7 = DAT_149931e80;
    dVar1 = (double)((ulonglong)dVar8 ^ uVar7);
    dVar5 = (double)((ulonglong)dVar3 ^ uVar7);
    dVar4 = (double)(uVar7 ^ (ulonglong)dVar2);
    local_1a8._8_4_ = DAT_149931e80._8_4_;
    local_1a8._0_8_ = dVar1;
    local_1a8._12_4_ = DAT_149931e80._12_4_;
    local_1b4 = (float)dVar1;
    local_1b8 = (float)dVar5;
    local_1bc = (float)dVar4;
    do {
      _X = local_1ac * (float)iVar10;
      fVar12 = cosf(_X);
      dVar14 = (double)fVar12;
      dVar1 = param_3[2];
      dVar6 = param_3[1];
      dVar13 = *param_3;
      fVar12 = sinf(_X);
      dVar16 = (double)fVar12;
      dVar15 = (param_4[2] * dVar16 + dVar1 * dVar14) * param_6 + param_2[2];
      dVar17 = (param_4[1] * dVar16 + dVar6 * dVar14) * param_6 + param_2[1];
      dVar16 = (dVar16 * *param_4 + dVar14 * dVar13) * param_6 + *param_2;
      dVar1 = dVar15 - param_2[2];
      dVar14 = dVar17 - param_2[1];
      dVar13 = dVar16 - *param_2;
      dVar6 = dVar1 * dVar1 + dVar13 * dVar13 + dVar14 * dVar14;
      if (9.99999993922529e-09 < dVar6) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar13 = dVar13 * dVar6;
        dVar14 = dVar14 * dVar6;
        dVar1 = dVar1 * dVar6;
      }
      local_fc = 0;
      local_148 = (float)dVar16;
      local_140 = (float)dVar15;
      local_144 = (float)dVar17;
      local_f4 = param_5;
      local_138 = 0;
      local_13c = (float)iVar10 * local_1b0 + 0.0;
      local_174 = (float)dVar1;
      local_17c = (float)dVar13;
      local_178 = (float)dVar14;
      local_184 = (float)(dVar13 * (double)local_1a8._0_8_ + dVar2 * dVar1);
      local_188 = (float)(dVar1 * dVar5 + dVar14 * dVar8);
      local_180 = (float)(dVar4 * dVar14 + dVar3 * dVar13);
      local_194 = local_1bc;
      local_190 = local_1b8;
      local_18c = local_1b4;
      FUN_147c71d8a(&local_148,&local_194,&local_188,&local_17c);
      FUN_147a7d5d8(local_170,&local_148);
      iVar10 = iVar10 + 1;
    } while (param_7 != iVar10);
    if (param_7 != 1) {
      iVar10 = 0;
      do {
        iVar9 = iVar10 + 1;
        FUN_140d3489c(local_170,0,iVar10,iVar9);
        FUN_140d3489c(local_170,0,iVar9,iVar10);
        bVar11 = iVar10 != param_7 + -2;
        iVar10 = iVar9;
      } while (bVar11);
    }
  }
  local_1e8 = param_9;
  local_1d0 = 0xffffffff;
  local_1d8 = 1;
  local_1e0 = local_1e0 & 0xffffffffffffff00;
  FUN_1434d8d42(local_170,param_1,&DAT_14c846400,param_8);
  FUN_1434d8cf8(local_170);
  if ((local_f0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb7407 FUN_147cb7407 body=726 status=ok
// SIG undefined FUN_147cb7407(void)

void FUN_147cb7407(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined1 local_160;
  undefined8 *local_158;
  uint local_150;
  uint local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar2 = param_2[2];
  local_108 = uVar2;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  local_118 = uVar4;
  uStack_110 = uVar5;
  uVar3 = param_2[5];
  local_f0 = uVar3;
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  local_100 = uVar6;
  uStack_f8 = uVar7;
  uVar9 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  local_158 = &local_118;
  do {
    local_150 = (uint)uVar9;
    uVar1 = *local_158;
    uVar9 = CONCAT71((int7)((ulonglong)local_158 >> 8),1);
    puVar10 = &local_118;
    do {
      local_14c = (uint)uVar9;
      local_140 = puVar10[1];
      local_168 = param_6;
      local_170 = param_5;
      local_178 = param_4;
      local_160 = param_7;
      local_148 = uVar1;
      local_138 = uVar3;
      local_130 = uVar1;
      local_128 = local_140;
      local_120 = uVar2;
      (**(code **)(*param_1 + 0x30))(param_1,&local_130,&local_148,param_3);
      puVar8 = local_158;
      local_140 = local_158[1];
      local_138 = puVar10[2];
      local_160 = param_7;
      local_168 = param_6;
      local_170 = param_5;
      local_178 = param_4;
      local_148 = uVar6;
      local_130 = uVar4;
      local_128 = local_140;
      local_120 = local_138;
      (**(code **)(*param_1 + 0x30))(param_1,&local_130,&local_148,param_3);
      local_138 = puVar8[2];
      local_148 = *puVar10;
      local_160 = param_7;
      local_168 = param_6;
      local_170 = param_5;
      local_178 = param_4;
      local_140 = uVar7;
      local_130 = local_148;
      local_128 = uVar5;
      local_120 = local_138;
      (**(code **)(*param_1 + 0x30))(param_1,&local_130,&local_148,param_3);
      uVar9 = 0;
      puVar10 = &local_100;
    } while ((local_14c & 1) != 0);
    local_158 = &local_100;
  } while ((local_150 & 1) != 0);
  if ((local_e0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb76de FUN_147cb76de body=1377 status=ok
// SIG undefined FUN_147cb76de(void)

void FUN_147cb76de(longlong *param_1,double *param_2,double *param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  undefined8 uVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined1 local_210;
  double *local_208;
  uint local_200;
  uint local_1fc;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined1 local_140 [16];
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  dVar2 = param_3[2];
  local_118 = dVar2;
  local_188 = *param_3;
  local_198 = param_3[1];
  local_128 = local_188;
  dStack_120 = local_198;
  dVar3 = param_3[5];
  local_100 = dVar3;
  local_1a8 = param_3[3];
  dVar5 = param_3[4];
  local_110 = local_1a8;
  dStack_108 = dVar5;
  uStack_180 = 0;
  local_1c8._8_4_ = SUB84(local_188,0);
  local_1c8._0_8_ = local_188;
  local_1c8._12_4_ = (int)((ulonglong)local_188 >> 0x20);
  uStack_1a0 = 0;
  local_1d8._8_4_ = SUB84(local_1a8,0);
  local_1d8._0_8_ = local_1a8;
  local_1d8._12_4_ = (int)((ulonglong)local_1a8 >> 0x20);
  uStack_190 = 0;
  local_1e8._8_4_ = SUB84(local_198,0);
  local_1e8._0_8_ = local_198;
  local_1e8._12_4_ = (int)((ulonglong)local_198 >> 0x20);
  uVar7 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  uStack_1f0 = 0;
  local_208 = &local_128;
  local_1f8 = dVar5;
  local_1b8 = dVar2;
  dStack_1b0 = dVar2;
  do {
    local_200 = (uint)uVar7;
    local_168 = *local_208;
    uStack_160 = 0;
    local_178._8_4_ = SUB84(local_168,0);
    local_178._0_8_ = local_168;
    local_178._12_4_ = (int)((ulonglong)local_168 >> 0x20);
    uVar7 = CONCAT71((int7)((ulonglong)local_208 >> 8),1);
    pdVar8 = &local_128;
    do {
      local_1fc = (uint)uVar7;
      dVar1 = pdVar8[1];
      dVar9 = dVar1 * param_2[4] + *param_2 * (double)local_178._0_8_;
      dVar10 = dVar1 * param_2[5] + param_2[1] * (double)local_178._8_8_;
      dVar4 = param_2[2] * local_168 + dVar1 * param_2[6];
      local_130 = dVar2 * param_2[10] + dVar4 + param_2[0xe];
      local_140._8_8_ = dStack_1b0 * param_2[9] + dVar10 + param_2[0xd];
      local_140._0_8_ = local_1b8 * param_2[8] + dVar9 + param_2[0xc];
      dVar1 = param_2[9] * dVar3 + dVar10 + param_2[0xd];
      local_148 = param_2[10] * dVar3 + dVar4 + param_2[0xe];
      local_158._8_4_ = SUB84(dVar1,0);
      local_158._0_8_ = param_2[8] * dVar3 + dVar9 + param_2[0xc];
      local_158._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      local_218 = param_7;
      local_220 = param_6;
      local_228 = param_5;
      local_210 = param_8;
      (**(code **)(*param_1 + 0x30))(param_1,local_140,local_158,param_4);
      pdVar6 = local_208;
      dVar1 = local_208[1];
      dVar4 = pdVar8[2];
      dVar9 = (double)local_1c8._8_8_ * param_2[1] + dVar1 * param_2[5] + dVar4 * param_2[9] +
              param_2[0xd];
      local_130 = local_188 * param_2[2] + dVar1 * param_2[6] + dVar4 * param_2[10] + param_2[0xe];
      local_140._8_4_ = SUB84(dVar9,0);
      local_140._0_8_ =
           (double)local_1c8._0_8_ * *param_2 + dVar1 * param_2[4] + dVar4 * param_2[8] +
           param_2[0xc];
      local_140._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      dVar9 = param_2[1] * (double)local_1d8._8_8_ + dVar1 * param_2[5] + dVar4 * param_2[9] +
              param_2[0xd];
      local_148 = param_2[2] * local_1a8 + dVar1 * param_2[6] + dVar4 * param_2[10] + param_2[0xe];
      local_158._8_4_ = SUB84(dVar9,0);
      local_158._0_8_ =
           *param_2 * (double)local_1d8._0_8_ + dVar1 * param_2[4] + dVar4 * param_2[8] +
           param_2[0xc];
      local_158._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_210 = param_8;
      local_218 = param_7;
      local_220 = param_6;
      local_228 = param_5;
      (**(code **)(*param_1 + 0x30))(param_1,local_140,local_158,param_4);
      dVar1 = pdVar6[2];
      dVar4 = *pdVar8;
      dVar9 = (double)local_1e8._8_8_ * param_2[5] + dVar4 * param_2[1] + dVar1 * param_2[9] +
              param_2[0xd];
      local_130 = local_198 * param_2[6] + dVar4 * param_2[2] + dVar1 * param_2[10] + param_2[0xe];
      local_140._8_4_ = SUB84(dVar9,0);
      local_140._0_8_ =
           (double)local_1e8._0_8_ * param_2[4] + dVar4 * *param_2 + dVar1 * param_2[8] +
           param_2[0xc];
      local_140._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      dVar9 = param_2[5] * dVar5 + dVar4 * param_2[1] + dVar1 * param_2[9] + param_2[0xd];
      local_148 = param_2[6] * local_1f8 + dVar4 * param_2[2] + dVar1 * param_2[10] + param_2[0xe];
      local_158._8_4_ = SUB84(dVar9,0);
      local_158._0_8_ = param_2[4] * dVar5 + dVar4 * *param_2 + dVar1 * param_2[8] + param_2[0xc];
      local_158._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_210 = param_8;
      local_218 = param_7;
      local_220 = param_6;
      local_228 = param_5;
      (**(code **)(*param_1 + 0x30))(param_1,local_140,local_158,param_4);
      uVar7 = 0;
      pdVar8 = &local_110;
    } while ((local_1fc & 1) != 0);
    uVar7 = 0;
    local_208 = &local_110;
  } while ((local_200 & 1) != 0);
  if ((local_f0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb7c40 FUN_147cb7c40 body=629 status=ok
// SIG undefined FUN_147cb7c40(void)

void FUN_147cb7c40(longlong *param_1,double *param_2,double *param_3,double *param_4,
                  undefined8 param_5,double param_6,int param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float _X;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined1 local_110;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_d8 = param_3[2] * param_6 + param_2[2];
  dStack_e0 = param_3[1] * param_6 + param_2[1];
  local_e8 = *param_3 * param_6 + *param_2;
  if (0 < param_7) {
    iVar6 = 1;
    do {
      _X = (float)iVar6 * (6.2831855 / (float)param_7);
      fVar8 = cosf(_X);
      dVar5 = (double)fVar8;
      dVar1 = param_3[2];
      dVar2 = param_3[1];
      dVar3 = *param_3;
      fVar8 = sinf(_X);
      dVar4 = (double)fVar8;
      local_f0 = (param_4[2] * dVar4 + dVar1 * dVar5) * param_6 + param_2[2];
      dStack_f8 = (param_4[1] * dVar4 + dVar2 * dVar5) * param_6 + param_2[1];
      local_100 = (dVar4 * *param_4 + dVar5 * dVar3) * param_6 + *param_2;
      local_110 = param_11;
      local_118 = param_10;
      local_120 = param_9;
      local_128 = param_8;
      (**(code **)(*param_1 + 0x38))(param_1,&local_e8,&local_100,param_5);
      local_d8 = local_f0;
      local_e8 = local_100;
      dStack_e0 = dStack_f8;
      bVar7 = iVar6 != param_7;
      iVar6 = iVar6 + 1;
    } while (bVar7);
  }
  if ((local_d0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb7eb6 FUN_147cb7eb6 body=695 status=ok
// SIG undefined FUN_147cb7eb6(void)

void FUN_147cb7eb6(longlong *param_1,double *param_2,double *param_3,double *param_4,float param_5,
                  float param_6,double param_7,int param_8,undefined8 param_9,undefined1 param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined1 local_110;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  fVar6 = cosf(param_5 * 0.017453292);
  dVar5 = (double)fVar6;
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar3 = *param_3;
  fVar6 = sinf(param_5 * 0.017453292);
  dVar4 = (double)fVar6;
  local_d8 = (param_4[2] * dVar4 + dVar1 * dVar5) * param_7 + param_2[2];
  dStack_e0 = (param_4[1] * dVar4 + dVar2 * dVar5) * param_7 + param_2[1];
  local_e8 = (dVar4 * *param_4 + dVar5 * dVar3) * param_7 + *param_2;
  if (0 < param_8) {
    fVar6 = (float)param_8;
    param_6 = param_6 - param_5;
    do {
      param_5 = param_5 + param_6 / fVar6;
      fVar7 = cosf(param_5 * 0.017453292);
      dVar5 = (double)fVar7;
      dVar1 = param_3[2];
      dVar2 = param_3[1];
      dVar3 = *param_3;
      fVar7 = sinf(param_5 * 0.017453292);
      dVar4 = (double)fVar7;
      local_f0 = (param_4[2] * dVar4 + dVar1 * dVar5) * param_7 + param_2[2];
      dStack_f8 = (param_4[1] * dVar4 + dVar2 * dVar5) * param_7 + param_2[1];
      local_100 = (dVar4 * *param_4 + dVar5 * dVar3) * param_7 + *param_2;
      local_118 = 0;
      local_120 = 0;
      local_128 = param_10;
      local_110 = 0;
      (**(code **)(*param_1 + 0x38))(param_1,&local_e8,&local_100,param_9);
      local_d8 = local_f0;
      local_e8 = local_100;
      dStack_e0 = dStack_f8;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  if ((local_d0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb816e FUN_147cb816e body=991 status=ok
// SIG undefined FUN_147cb816e(void)

void FUN_147cb816e(longlong param_1,double *param_2,double *param_3,double *param_4,
                  undefined8 param_5,float param_6,float param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  double *pdVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1e0;
  longlong local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined1 local_1a0 [40];
  undefined4 local_178 [4];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  dVar5 = (double)param_6;
  local_120 = param_3[2] * dVar5 * 0.5;
  local_128 = param_3[1] * dVar5 * 0.5;
  dVar6 = (double)param_7;
  local_130 = dVar5 * *param_3 * 0.5;
  dVar7 = param_4[2] * dVar6 * 0.5;
  dVar8 = param_4[1] * dVar6 * 0.5;
  dVar5 = dVar6 * *param_4 * 0.5;
  local_f0 = param_2[2] - local_120;
  local_f8 = param_2[1] - local_128;
  local_100 = *param_2 - local_130;
  local_138 = local_f0 - dVar7;
  local_140 = local_f8 - dVar8;
  local_148 = local_100 - dVar5;
  pdVar3 = &local_138;
  local_120 = local_120 + param_2[2];
  local_128 = local_128 + param_2[1];
  local_130 = local_130 + *param_2;
  local_108 = dVar7 + local_120;
  local_120 = local_120 - dVar7;
  local_110 = dVar8 + local_128;
  local_128 = local_128 - dVar8;
  local_118 = dVar5 + local_130;
  local_130 = local_130 - dVar5;
  local_f0 = local_f0 + dVar7;
  local_f8 = local_f8 + dVar8;
  local_100 = local_100 + dVar5;
  puVar2 = &local_168;
  local_168 = 0;
  uStack_160 = 0x3f80000000000000;
  local_158 = 0x3f800000;
  uStack_154 = 0x3f800000;
  uStack_150 = 0x3f800000;
  uStack_14c = 0;
  local_1f0 = (undefined8 *)0x0;
  local_1f8 = (undefined8 *)((ulonglong)local_1f8 & 0xffffffffffffff00);
  local_1d8 = param_1;
  FUN_140d3493e(local_1a0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x3090),1,0);
  lVar4 = 0;
  do {
    local_1ac = 0;
    local_1a4 = 0x3f800000;
    local_1b8 = 0x3f80000000000000;
    local_1c8 = (float)*pdVar3;
    local_1b0 = 0;
    local_1cc = (float)pdVar3[-1];
    local_1c4 = 0x3f800000;
    local_1d0 = (float)pdVar3[-2];
    local_1bc = 0;
    local_1e8 = (undefined1 *)&param_5;
    local_1f8 = &local_1b8;
    local_1f0 = &local_1ac;
    uVar1 = FUN_140d34aec(local_1a0,&local_1d0,puVar2,&local_1c4);
    local_178[lVar4] = uVar1;
    lVar4 = lVar4 + 1;
    pdVar3 = pdVar3 + 3;
    puVar2 = puVar2 + 1;
  } while (lVar4 != 4);
  FUN_140d3489c(local_1a0,local_178[0],local_178[1],local_178[2]);
  FUN_140d3489c(local_1a0,local_178[0],local_178[2],local_178[3]);
  FUN_140d3489c(local_1a0,local_178[0],local_178[2],local_178[1]);
  FUN_140d3489c(local_1a0,local_178[0],local_178[3],local_178[2]);
  local_1f8 = (undefined8 *)CONCAT71(local_1f8._1_7_,param_9);
  local_1e0 = 0xffffffff;
  local_1e8 = (undefined1 *)CONCAT71(local_1e8._1_7_,1);
  local_1f0 = (undefined8 *)((ulonglong)local_1f0 & 0xffffffffffffff00);
  FUN_1434d8d42(local_1a0,local_1d8,&DAT_14c846400,param_8);
  FUN_1434d8cf8(local_1a0);
  if ((local_e0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb854e FUN_147cb854e body=1034 status=ok
// SIG undefined FUN_147cb854e(void)

void FUN_147cb854e(longlong *param_1,double *param_2,double *param_3,double *param_4,uint param_5,
                  float param_6,float param_7,undefined1 param_8,undefined4 param_9,
                  undefined4 param_10,undefined1 param_11)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined1 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  float local_12c;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  dVar5 = (double)param_6;
  local_100 = param_3[2] * dVar5 * 0.5;
  local_108 = param_3[1] * dVar5 * 0.5;
  local_110 = dVar5 * *param_3 * 0.5;
  dVar4 = (double)param_7;
  dVar6 = param_4[2] * dVar4 * 0.5;
  dVar5 = param_4[1] * dVar4 * 0.5;
  dVar4 = dVar4 * *param_4 * 0.5;
  local_d0 = param_2[2] - local_100;
  local_d8 = param_2[1] - local_108;
  local_e0 = *param_2 - local_110;
  local_128 = local_e0 - dVar4;
  local_120 = local_d8 - dVar5;
  local_118 = local_d0 - dVar6;
  local_100 = local_100 + param_2[2];
  local_108 = local_108 + param_2[1];
  local_110 = local_110 + *param_2;
  local_f8 = dVar4 + local_110;
  local_110 = local_110 - dVar4;
  local_f0 = dVar5 + local_108;
  local_108 = local_108 - dVar5;
  local_e8 = dVar6 + local_100;
  local_100 = local_100 - dVar6;
  local_d0 = local_d0 + dVar6;
  local_d8 = local_d8 + dVar5;
  local_e0 = local_e0 + dVar4;
  uVar1 = (ulonglong)(param_5 >> 0xe & 0x3fc);
  local_138 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar1);
  uVar3 = param_5 >> 8 & 0xff;
  local_134 = (&DAT_14c758c60)[uVar3];
  uVar2 = param_5 & 0xff;
  local_130 = (&DAT_14c758c60)[uVar2];
  fVar7 = (float)(param_5 >> 0x18) * 0.003921569;
  local_140 = param_11;
  local_148 = param_10;
  local_150 = param_9;
  local_158 = param_8;
  local_12c = fVar7;
  (**(code **)(*param_1 + 0x30))(param_1,&local_128,&local_110,&local_138);
  local_138 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar1);
  local_134 = (&DAT_14c758c60)[uVar3];
  local_130 = (&DAT_14c758c60)[uVar2];
  local_140 = param_11;
  local_148 = param_10;
  local_150 = param_9;
  local_158 = param_8;
  local_12c = fVar7;
  (**(code **)(*param_1 + 0x30))(param_1,&local_110,&local_f8,&local_138);
  local_138 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar1);
  local_134 = (&DAT_14c758c60)[uVar3];
  local_130 = (&DAT_14c758c60)[uVar2];
  local_140 = param_11;
  local_148 = param_10;
  local_150 = param_9;
  local_158 = param_8;
  local_12c = fVar7;
  (**(code **)(*param_1 + 0x30))(param_1,&local_f8,&local_e0,&local_138);
  local_138 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar1);
  local_134 = (&DAT_14c758c60)[uVar3];
  local_130 = (&DAT_14c758c60)[uVar2];
  local_140 = param_11;
  local_148 = param_10;
  local_150 = param_9;
  local_158 = param_8;
  local_12c = fVar7;
  (**(code **)(*param_1 + 0x30))(param_1,&local_e0,&local_128,&local_138);
  if ((local_c0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb8959 FUN_147cb8959 body=475 status=ok
// SIG undefined FUN_147cb8959(void)

void FUN_147cb8959(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9)

{
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_a8 = 0;
  uStack_a0 = 0x3ff0000000000000;
  local_98 = 0;
  local_c0 = 0x3ff0000000000000;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = param_9;
  local_d0 = param_8;
  local_d8 = param_7;
  local_e0 = param_6;
  local_e8 = param_5;
  local_f8 = param_3;
  local_f0 = param_4;
  FUN_147cb7c40(param_1,param_2,&local_c0,&local_a8);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0x3ff0000000000000;
  local_c0 = 0x3ff0000000000000;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = param_9;
  local_d0 = param_8;
  local_d8 = param_7;
  local_e0 = param_6;
  local_e8 = param_5;
  local_f8 = param_3;
  local_f0 = param_4;
  FUN_147cb7c40(param_1,param_2,&local_c0,&local_a8);
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0x3ff0000000000000;
  local_c0 = 0;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  local_c8 = param_9;
  local_d0 = param_8;
  local_d8 = param_7;
  local_e0 = param_6;
  local_e8 = param_5;
  local_f8 = param_3;
  local_f0 = param_4;
  FUN_147cb7c40(param_1,param_2,&local_c0,&local_a8);
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb8b35 FUN_147cb8b35 body=1945 status=ok
// SIG undefined FUN_147cb8b35(void)

void FUN_147cb8b35(undefined8 param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9)

{
  double dVar1;
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
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined1 local_168;
  undefined8 local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  undefined1 local_108 [16];
  double local_f8;
  ulonglong local_f0;
  double dVar2;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar5 = *param_2;
  dVar6 = param_2[1];
  dVar7 = param_2[2];
  local_158 = 0.0;
  dStack_150 = 1.0;
  dVar10 = param_2[8] * 0.0;
  dVar11 = param_2[9] * 1.0;
  dVar4 = param_2[10] * 0.0;
  dVar1 = param_2[3];
  dVar2 = param_2[3];
  dVar15 = dVar11 * dVar5 - dVar10 * dVar6;
  dVar17 = dVar4 * dVar6 - dVar11 * dVar7;
  dVar3 = dVar10 * dVar7 - dVar5 * dVar4;
  dVar17 = dVar17 + dVar17;
  dVar3 = dVar3 + dVar3;
  dVar15 = dVar15 + dVar15;
  local_f8 = dVar15 * dVar1 + dVar4 + (dVar3 * dVar5 - dVar17 * dVar6);
  dVar11 = (dVar7 * dVar17 - dVar5 * dVar15) + dVar2 * dVar3 + dVar11;
  local_108._8_4_ = SUB84(dVar11,0);
  local_108._0_8_ = (dVar15 * dVar6 - dVar3 * dVar7) + dVar1 * dVar17 + dVar10;
  local_108._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  dVar10 = param_2[8] * 1.0;
  dVar11 = param_2[9] * 0.0;
  dVar15 = dVar11 * dVar5 - dVar10 * dVar6;
  dVar17 = dVar4 * dVar6 - dVar11 * dVar7;
  dVar3 = dVar10 * dVar7 - dVar5 * dVar4;
  dVar17 = dVar17 + dVar17;
  dVar3 = dVar3 + dVar3;
  dVar15 = dVar15 + dVar15;
  local_118 = dVar15 * dVar1 + dVar4 + (dVar3 * dVar5 - dVar17 * dVar6);
  dVar2 = (dVar7 * dVar17 - dVar5 * dVar15) + dVar2 * dVar3 + dVar11;
  local_128._8_4_ = SUB84(dVar2,0);
  local_128._0_8_ = (dVar15 * dVar6 - dVar3 * dVar7) + dVar1 * dVar17 + dVar10;
  local_128._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_148 = param_2[4];
  dStack_140 = param_2[5];
  local_138 = param_2[6];
  local_168 = param_9;
  local_170 = param_8;
  local_178 = param_7;
  local_180 = param_6;
  local_188 = param_5;
  local_198 = param_3;
  local_190 = param_4;
  local_160 = param_4;
  FUN_147cb7c40(param_1,&local_148,local_128,local_108);
  dVar7 = *param_2;
  dVar8 = param_2[1];
  dVar9 = param_2[2];
  dVar14 = param_2[8] * 0.0;
  dVar16 = param_2[9] * 0.0;
  dVar3 = param_2[10] * 1.0;
  dVar2 = param_2[3];
  dVar1 = param_2[3];
  dVar5 = dVar16 * dVar7 - dVar14 * dVar8;
  dVar6 = dVar3 * dVar8 - dVar16 * dVar9;
  dVar15 = dVar14 * dVar9 - dVar3 * dVar7;
  dVar6 = dVar6 + dVar6;
  dVar15 = dVar15 + dVar15;
  dVar5 = dVar5 + dVar5;
  dVar12 = param_2[8] * 1.0;
  dVar13 = param_2[9] * 0.0;
  dVar10 = param_2[10] * 0.0;
  dVar11 = dVar13 * dVar7 - dVar12 * dVar8;
  dVar4 = dVar10 * dVar8 - dVar13 * dVar9;
  dVar17 = dVar12 * dVar9 - dVar7 * dVar10;
  dVar4 = dVar4 + dVar4;
  dVar17 = dVar17 + dVar17;
  dVar11 = dVar11 + dVar11;
  local_f8 = dVar5 * dVar2 + dVar3 + (dVar15 * dVar7 - dVar6 * dVar8);
  dVar3 = (dVar9 * dVar6 - dVar7 * dVar5) + dVar1 * dVar15 + dVar16;
  local_108._8_4_ = SUB84(dVar3,0);
  local_108._0_8_ = (dVar5 * dVar8 - dVar15 * dVar9) + dVar2 * dVar6 + dVar14;
  local_108._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_118 = dVar11 * dVar2 + dVar10 + (dVar17 * dVar7 - dVar4 * dVar8);
  dVar1 = (dVar9 * dVar4 - dVar7 * dVar11) + dVar1 * dVar17 + dVar13;
  local_128._8_4_ = SUB84(dVar1,0);
  local_128._0_8_ = (dVar11 * dVar8 - dVar17 * dVar9) + dVar2 * dVar4 + dVar12;
  local_128._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_148 = param_2[4];
  dStack_140 = param_2[5];
  local_138 = param_2[6];
  local_168 = param_9;
  local_170 = param_8;
  local_178 = param_7;
  local_180 = param_6;
  local_188 = param_5;
  local_190 = local_160;
  local_198 = param_3;
  FUN_147cb7c40(param_1,&local_148,local_128,local_108);
  dVar7 = *param_2;
  dVar8 = param_2[1];
  dVar9 = param_2[2];
  dVar5 = local_158 * param_2[8];
  dVar6 = dStack_150 * param_2[9];
  dVar13 = param_2[8] * 0.0;
  dVar14 = param_2[9] * 0.0;
  dVar3 = param_2[10] * 1.0;
  dVar2 = param_2[3];
  dVar1 = param_2[3];
  dVar15 = dVar14 * dVar7 - dVar13 * dVar8;
  dVar16 = dVar3 * dVar8 - dVar14 * dVar9;
  dVar17 = dVar13 * dVar9 - dVar3 * dVar7;
  dVar16 = dVar16 + dVar16;
  dVar17 = dVar17 + dVar17;
  dVar15 = dVar15 + dVar15;
  dVar12 = param_2[10] * 0.0;
  dVar10 = dVar6 * dVar7 - dVar5 * dVar8;
  dVar11 = dVar12 * dVar8 - dVar6 * dVar9;
  dVar4 = dVar5 * dVar9 - dVar7 * dVar12;
  dVar11 = dVar11 + dVar11;
  dVar4 = dVar4 + dVar4;
  dVar10 = dVar10 + dVar10;
  local_f8 = dVar15 * dVar2 + dVar3 + (dVar17 * dVar7 - dVar16 * dVar8);
  dVar3 = (dVar9 * dVar16 - dVar7 * dVar15) + dVar1 * dVar17 + dVar14;
  local_108._8_4_ = SUB84(dVar3,0);
  local_108._0_8_ = (dVar15 * dVar8 - dVar17 * dVar9) + dVar2 * dVar16 + dVar13;
  local_108._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_118 = dVar10 * dVar2 + dVar12 + (dVar4 * dVar7 - dVar11 * dVar8);
  dVar1 = (dVar9 * dVar11 - dVar7 * dVar10) + dVar1 * dVar4 + dVar6;
  local_128._8_4_ = SUB84(dVar1,0);
  local_128._0_8_ = (dVar10 * dVar8 - dVar4 * dVar9) + dVar2 * dVar11 + dVar5;
  local_128._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_148 = param_2[4];
  dStack_140 = param_2[5];
  local_138 = param_2[6];
  local_168 = param_9;
  local_170 = param_8;
  local_178 = param_7;
  local_180 = param_6;
  local_188 = param_5;
  local_190 = local_160;
  local_198 = param_3;
  FUN_147cb7c40(param_1,&local_148,local_128,local_108);
  if ((local_f0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb92cf FUN_147cb92cf body=113 status=ok
// SIG undefined FUN_147cb92cf(void)

void FUN_147cb92cf(void)

{
  FUN_147cb8b35();
  return;
}



// FUNCTION 147cb9340 FUN_147cb9340 body=1161 status=ok
// SIG undefined FUN_147cb9340(void)

void FUN_147cb9340(longlong *param_1,double *param_2,double *param_3,double *param_4,double *param_5
                  ,undefined8 param_6,double param_7,double param_8,int param_9,undefined1 param_10,
                  undefined4 param_11,undefined4 param_12,undefined1 param_13)

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
  int iVar10;
  int iVar11;
  float fVar12;
  float _X;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined1 local_150;
  float local_144;
  double *local_140;
  double *local_138;
  double *local_130;
  ulonglong local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_140 = param_2;
  local_138 = param_3;
  if (0 < param_9) {
    local_144 = 6.2831855 / (float)param_9;
    local_128 = (ulonglong)(uint)-param_9;
    iVar11 = 1;
    dVar7 = *param_3 * param_7 + *param_2;
    dVar8 = param_3[1] * param_7 + param_2[1];
    dVar9 = param_3[2] * param_7 + param_2[2];
    local_130 = param_4;
    do {
      _X = (float)iVar11 * local_144;
      fVar12 = cosf(_X);
      dVar5 = (double)fVar12;
      dVar1 = local_138[2];
      dVar2 = local_138[1];
      dVar3 = *local_138;
      fVar12 = sinf(_X);
      dVar4 = (double)fVar12;
      dVar6 = (param_4[2] * dVar4 + dVar1 * dVar5) * param_7 + local_140[2];
      dVar2 = (param_4[1] * dVar4 + dVar2 * dVar5) * param_7 + local_140[1];
      dVar1 = (dVar4 * *param_4 + dVar5 * dVar3) * param_7 + *local_140;
      local_f8 = dVar6 - param_5[2] * param_8;
      local_100 = dVar2 - param_5[1] * param_8;
      local_108 = dVar1 - *param_5 * param_8;
      local_110 = dVar9 - param_5[2] * param_8;
      local_118 = dVar8 - param_5[1] * param_8;
      local_120 = dVar7 - *param_5 * param_8;
      local_150 = param_13;
      local_158 = param_12;
      local_160 = param_11;
      local_168 = param_10;
      (**(code **)(*param_1 + 0x30))(param_1,&local_120,&local_108,param_6);
      local_f8 = dVar6 + param_5[2] * param_8;
      local_100 = dVar2 + param_5[1] * param_8;
      local_108 = dVar1 + *param_5 * param_8;
      local_110 = param_5[2] * param_8 + dVar9;
      local_118 = param_5[1] * param_8 + dVar8;
      local_120 = *param_5 * param_8 + dVar7;
      local_150 = param_13;
      local_158 = param_12;
      local_160 = param_11;
      local_168 = param_10;
      (**(code **)(*param_1 + 0x30))(param_1,&local_120,&local_108,param_6);
      param_4 = local_130;
      local_f8 = dVar9 + param_5[2] * param_8;
      local_100 = dVar8 + param_5[1] * param_8;
      local_108 = dVar7 + *param_5 * param_8;
      local_110 = dVar9 - param_5[2] * param_8;
      local_118 = dVar8 - param_5[1] * param_8;
      local_120 = dVar7 - *param_5 * param_8;
      local_150 = param_13;
      local_158 = param_12;
      local_160 = param_11;
      local_168 = param_10;
      (**(code **)(*param_1 + 0x30))(param_1,&local_120,&local_108,param_6);
      iVar10 = (int)local_128 + iVar11;
      iVar11 = iVar11 + 1;
      dVar7 = dVar1;
      dVar8 = dVar2;
      dVar9 = dVar6;
    } while (iVar10 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cb97ca FUN_147cb97ca body=2182 status=ok
// SIG undefined FUN_147cb97ca(void)

void FUN_147cb97ca(longlong *param_1,double *param_2,double *param_3,double *param_4,double *param_5
                  ,undefined8 param_6,double param_7,double param_8,int param_9,undefined1 param_10,
                  undefined4 param_11,int param_12,undefined1 param_13)

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
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  int iVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  double local_240;
  int local_238;
  undefined4 local_230;
  int local_228;
  int local_220;
  undefined1 local_218;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined1 local_190 [16];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_108 = *param_3;
  dStack_100 = param_3[1];
  local_f8 = param_3[2];
  dVar15 = local_f8 * local_f8 + local_108 * local_108 + dStack_100 * dStack_100;
  if ((dVar15 != 1.0) || (NAN(dVar15))) {
    if (dVar15 < 9.99999993922529e-09) {
      local_f8 = DAT_14c8464f0;
      local_108 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      dStack_100 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      dVar16 = 1.0 / SQRT(dVar15);
      local_f8 = local_f8 * dVar16;
      dStack_100 = dStack_100 * dVar16;
      local_108 = local_108 * dVar16;
    }
  }
  else {
    local_f8 = param_3[2];
    local_108 = *param_3;
    dStack_100 = param_3[1];
  }
  local_128 = *param_4;
  dStack_120 = param_4[1];
  local_118 = param_4[2];
  dVar16 = local_118 * local_118 + local_128 * local_128 + dStack_120 * dStack_120;
  if ((dVar16 != 1.0) || (NAN(dVar16))) {
    if (dVar16 < 9.99999993922529e-09) {
      local_118 = DAT_14c8464f0;
      local_128 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      dStack_120 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      dVar5 = 1.0 / SQRT(dVar16);
      local_118 = local_118 * dVar5;
      dStack_120 = dStack_120 * dVar5;
      local_128 = local_128 * dVar5;
    }
  }
  else {
    local_118 = param_4[2];
    local_128 = *param_4;
    dStack_120 = param_4[1];
  }
  local_148 = *param_5;
  uStack_140 = param_5[1];
  local_138 = param_5[2];
  dVar5 = local_138 * local_138 + local_148 * local_148 + uStack_140 * uStack_140;
  if ((dVar5 != 1.0) || (NAN(dVar5))) {
    if (9.99999993922529e-09 <= dVar5) {
      dVar9 = 1.0 / SQRT(dVar5);
      local_138 = local_138 * dVar9;
      uStack_140 = uStack_140 * dVar9;
      local_148 = local_148 * dVar9;
      goto LAB_147cb99d0;
    }
    local_138 = DAT_14c8464f0;
    uVar17 = (undefined4)DAT_14c8464e0;
    uVar18 = DAT_14c8464e0._4_4_;
    uVar19 = (undefined4)DAT_14c8464e8;
    uVar20 = DAT_14c8464e8._4_4_;
  }
  else {
    local_138 = param_5[2];
    uVar17 = *(undefined4 *)param_5;
    uVar18 = *(undefined4 *)((longlong)param_5 + 4);
    uVar19 = *(undefined4 *)(param_5 + 1);
    uVar20 = *(undefined4 *)((longlong)param_5 + 0xc);
  }
  local_148 = (double)CONCAT44(uVar18,uVar17);
  uStack_140 = (double)CONCAT44(uVar20,uVar19);
LAB_147cb99d0:
  dVar1 = local_138;
  dVar9 = SQRT(dVar15);
  if (SQRT(dVar15) <= SQRT(dVar16)) {
    dVar9 = SQRT(dVar16);
  }
  param_8 = SQRT(dVar5) * param_8;
  dVar15 = dVar9 * param_7;
  if (param_8 <= dVar9 * param_7) {
    dVar15 = param_8;
  }
  if (dVar15 <= 0.0) {
    dVar15 = 0.0;
  }
  local_1c8 = 0.0;
  if (0.0 <= param_8 - dVar15) {
    local_1c8 = param_8 - dVar15;
  }
  local_1d0 = local_1c8 * local_138;
  local_1d8 = uStack_140 * local_1c8;
  local_1c8 = local_1c8 * local_148;
  local_150 = param_2[2] + local_1d0;
  local_158 = param_2[1] + local_1d8;
  local_160 = *param_2 + local_1c8;
  dVar16 = -local_148;
  uVar12 = (ulonglong)uStack_140 >> 0x20;
  uVar17 = SUB84(uStack_140,0);
  local_168 = param_2[2] - local_1d0;
  local_170 = param_2[1] - local_1d8;
  local_178 = *param_2 - local_1c8;
  local_218 = param_13;
  local_220 = param_12;
  local_228 = param_11;
  local_230._0_1_ = param_10;
  local_238 = param_9;
  local_248 = param_6;
  local_240 = dVar15;
  FUN_147cb7c40(param_1,&local_160,&local_108,&local_128);
  local_218 = param_13;
  local_220 = param_12;
  local_228 = param_11;
  local_230 = CONCAT31(local_230._1_3_,param_10);
  local_238 = param_9;
  local_248 = param_6;
  local_240 = dVar15;
  FUN_147cb7c40(param_1,&local_178,&local_108,&local_128);
  param_9 = param_9 / 2;
  local_220._0_1_ = param_13;
  local_228 = param_12;
  local_230 = param_11;
  local_248 = param_6;
  local_240 = dVar15;
  local_238 = param_9;
  FUN_143658424(param_1,&local_160,&local_128,&local_148);
  local_220._0_1_ = param_13;
  local_228 = param_12;
  local_230 = param_11;
  local_248 = param_6;
  local_240 = dVar15;
  local_238 = param_9;
  FUN_143658424(param_1,&local_160,&local_108,&local_148);
  local_180 = -dVar1;
  local_190._8_4_ = uVar17;
  local_190._0_8_ = dVar16;
  local_190._12_4_ = (uint)uVar12 ^ 0x80000000;
  local_220._0_1_ = param_13;
  local_228 = param_12;
  local_230 = param_11;
  local_248 = param_6;
  local_240 = dVar15;
  local_238 = param_9;
  FUN_143658424(param_1,&local_178,&local_128,local_190);
  local_220 = CONCAT31(local_220._1_3_,param_13);
  local_228 = param_12;
  local_230 = param_11;
  local_248 = param_6;
  local_240 = dVar15;
  local_238 = param_9;
  FUN_143658424(param_1,&local_178,&local_108,local_190);
  local_1e0 = local_f8;
  local_1f0 = dStack_100;
  local_1e8 = local_108;
  local_1f8 = local_118;
  local_200 = local_128;
  local_208 = dStack_120;
  iVar13 = 1;
  dVar16 = dVar15 * local_f8 + param_2[2];
  dVar5 = dVar15 * dStack_100 + param_2[1];
  dVar9 = dVar15 * local_108 + *param_2;
  do {
    fVar14 = cosf((float)iVar13 * 1.5707964);
    dVar8 = (double)fVar14;
    dVar10 = local_1e0 * dVar8;
    dVar7 = local_1f0 * dVar8;
    dVar8 = dVar8 * local_1e8;
    fVar14 = sinf((float)iVar13 * 1.5707964);
    dVar4 = (double)fVar14;
    dVar6 = local_1f8 * dVar4;
    dVar11 = local_208 * dVar4;
    dVar4 = dVar4 * local_200;
    dVar1 = param_2[2];
    dVar2 = param_2[1];
    dVar3 = *param_2;
    local_198 = local_1d0 + dVar16;
    local_1a0 = local_1d8 + dVar5;
    local_1a8 = local_1c8 + dVar9;
    local_1b0 = dVar16 - local_1d0;
    local_1b8 = dVar5 - local_1d8;
    local_1c0 = dVar9 - local_1c8;
    local_230 = CONCAT31(local_230._1_3_,param_13);
    local_238 = param_12;
    local_240 = (double)CONCAT44(local_240._4_4_,param_11);
    local_248 = CONCAT71(local_248._1_7_,param_10);
    (**(code **)(*param_1 + 0x38))(param_1,&local_1c0,&local_1a8,param_6);
    iVar13 = iVar13 + 1;
    dVar16 = (dVar6 + dVar10) * dVar15 + dVar1;
    dVar5 = (dVar11 + dVar7) * dVar15 + dVar2;
    dVar9 = (dVar4 + dVar8) * dVar15 + dVar3;
  } while (iVar13 != 5);
  if ((local_f0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cba051 FUN_147cba051 body=1185 status=ok
// SIG undefined FUN_147cba051(void)

void FUN_147cba051(longlong *param_1,longlong *param_2,double *param_3,double param_4,double param_5
                  ,uint param_6,undefined8 param_7,undefined1 param_8,undefined4 param_9,
                  undefined4 param_10,undefined1 param_11)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float _X;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined1 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  param_5 = param_5 * 0.01745329238474369;
  if (1.5543431043624878 <= param_5) {
    param_5 = 1.5543431043624878;
  }
  if (param_5 <= 0.0010000000474974513) {
    param_5 = 0.0010000000474974513;
  }
  fVar14 = sinf((float)param_5);
  fVar15 = cosf((float)param_5);
  lVar12 = param_2[1];
  uVar10 = (int)lVar12 + param_6;
  *(uint *)(param_2 + 1) = uVar10;
  if ((uint)(*(int *)((longlong)param_2 + 0xc) - (int)lVar12) < param_6) {
    FUN_1403e3958();
    uVar10 = *(uint *)(param_2 + 1);
  }
  uVar11 = (ulonglong)uVar10;
  if (0 < (int)uVar10) {
    dVar3 = (double)fVar15 * param_4 * 0.0;
    lVar13 = 0x10;
    lVar12 = 0;
    do {
      _X = ((float)(int)lVar12 * 6.2831855) / (float)(int)uVar11;
      fVar16 = cosf(_X);
      dVar5 = (double)fVar16 * (double)fVar14 * param_4;
      dVar20 = dVar5 * 0.0;
      fVar16 = sinf(_X);
      dVar19 = (double)fVar16 * (double)fVar14 * param_4;
      dVar17 = dVar19 * 0.0;
      lVar9 = *param_2;
      *(double *)(lVar9 + -0x10 + lVar13) = dVar17 + dVar20 + (double)fVar15 * param_4;
      *(double *)(lVar9 + -8 + lVar13) = dVar3 + dVar5 + dVar17;
      *(double *)(lVar9 + lVar13) = dVar19 + dVar3 + dVar20;
      lVar12 = lVar12 + 1;
      uVar10 = *(uint *)(param_2 + 1);
      uVar11 = (ulonglong)(int)uVar10;
      lVar13 = lVar13 + 0x18;
    } while (lVar12 < (longlong)uVar11);
    if (0 < (int)uVar10) {
      lVar12 = 0x10;
      lVar13 = 0;
      do {
        lVar9 = *param_2;
        pdVar1 = (double *)(lVar9 + -0x10 + lVar12);
        dVar18 = *pdVar1 * param_3[8];
        dVar19 = pdVar1[1] * param_3[9];
        dVar5 = *(double *)(lVar9 + lVar12) * param_3[10];
        dVar6 = *param_3;
        dVar7 = param_3[1];
        dVar8 = param_3[2];
        dVar3 = param_3[3];
        dVar20 = dVar19 * dVar6 - dVar18 * dVar7;
        dVar21 = dVar5 * dVar7 - dVar19 * dVar8;
        dVar17 = dVar18 * dVar8 - dVar6 * dVar5;
        dVar21 = dVar21 + dVar21;
        dVar17 = dVar17 + dVar17;
        dVar20 = dVar20 + dVar20;
        dVar4 = (dVar8 * dVar21 - dVar6 * dVar20) + param_3[3] * dVar17 + dVar19 + param_3[5];
        dVar19 = param_3[6];
        auVar2._8_4_ = SUB84(dVar4,0);
        auVar2._0_8_ = (dVar20 * dVar7 - dVar17 * dVar8) + dVar3 * dVar21 + dVar18 + param_3[4];
        auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        *(undefined1 (*) [16])(lVar9 + -0x10 + lVar12) = auVar2;
        *(double *)(lVar9 + lVar12) =
             dVar20 * dVar3 + dVar5 + (dVar17 * dVar6 - dVar21 * dVar7) + dVar19;
        lVar13 = lVar13 + 1;
        uVar10 = *(uint *)(param_2 + 1);
        lVar12 = lVar12 + 0x18;
      } while (lVar13 < (int)uVar10);
      if (0 < (int)uVar10) {
        lVar12 = 0;
        lVar13 = 0;
        do {
          local_108 = param_3[4];
          dStack_100 = param_3[5];
          local_f8 = param_3[6];
          local_110 = param_11;
          local_118 = param_10;
          local_120 = param_9;
          local_128 = param_8;
          (**(code **)(*param_1 + 0x38))(param_1,&local_108,*param_2 + lVar12,param_7);
          lVar13 = lVar13 + 1;
          uVar10 = *(uint *)(param_2 + 1);
          lVar12 = lVar12 + 0x18;
        } while (lVar13 < (int)uVar10);
        if (1 < (int)uVar10) {
          lVar12 = 0;
          lVar13 = 0;
          do {
            lVar13 = lVar13 + 1;
            local_118 = param_10;
            local_120 = param_9;
            local_128 = param_8;
            local_110 = param_11;
            (**(code **)(*param_1 + 0x38))
                      (param_1,*param_2 + lVar12,*param_2 + lVar12 + 0x18,param_7);
            lVar9 = (longlong)(int)param_2[1] + -1;
            lVar12 = lVar12 + 0x18;
          } while (lVar13 < lVar9);
          goto LAB_147cba447;
        }
      }
    }
  }
  lVar9 = (longlong)(int)(uVar10 - 1);
LAB_147cba447:
  local_118 = param_10;
  local_128 = param_8;
  local_120 = param_9;
  local_110 = param_11;
  (**(code **)(*param_1 + 0x38))(param_1,*param_2 + lVar9 * 0x18,*param_2,param_7);
  if ((local_f0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cba4f3 FUN_147cba4f3 body=287 status=ok
// SIG undefined FUN_147cba4f3(void)

void FUN_147cba4f3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11)

{
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_e8 [104];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1448ac920(local_e8,param_3);
  local_f8 = param_11;
  local_100 = param_10;
  local_108 = param_9;
  local_110 = param_8;
  local_118 = param_7;
  local_120 = param_6;
  local_128 = param_5;
  FUN_147cba051(param_1,param_2,local_e8,param_4);
  if ((local_80 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cba613 FUN_147cba613 body=1382 status=ok
// SIG undefined FUN_147cba613(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cba613(longlong *param_1,double *param_2,double *param_3,double *param_4,double *param_5
                  ,double *param_6,undefined8 param_7,undefined1 param_8,undefined4 param_9,
                  undefined4 param_10,undefined1 param_11)

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
  double dVar10;
  double dVar11;
  double *pdVar12;
  undefined8 uVar13;
  double *pdVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_288 [32];
  undefined1 local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined1 local_250;
  double *local_240;
  uint local_238;
  uint local_234;
  double local_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_228 = *param_3;
  dStack_220 = param_3[1];
  local_230 = param_3[2];
  dVar6 = *param_4;
  dVar7 = param_4[1];
  dVar1 = param_4[2];
  dVar8 = *param_5;
  dVar9 = param_5[1];
  dVar2 = param_5[2];
  dVar10 = *param_2;
  dVar11 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = param_6[2];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar4;
  auVar20 = auVar20 ^ _DAT_149931e80;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_6[1];
  auVar21 = auVar21 ^ _DAT_149931e80;
  local_128 = (double)(DAT_149931e80 ^ (ulonglong)*param_6);
  auVar16._0_8_ = auVar21._0_8_;
  dStack_120 = auVar16._0_8_;
  auVar18._0_8_ = auVar20._0_8_;
  local_118 = auVar18._0_8_;
  local_110 = *param_6;
  dStack_108 = param_6[1];
  local_100 = param_6[2];
  auVar18._8_4_ = auVar20._0_4_;
  auVar18._12_4_ = auVar20._4_4_;
  local_1b8 = auVar18._0_8_ * dVar8;
  dStack_1b0 = auVar18._8_8_ * dVar9;
  local_1c8 = local_100 * dVar8;
  dStack_1c0 = local_100 * dVar9;
  local_1a8 = local_100 * dVar2;
  uStack_1a0 = 0;
  local_198._8_4_ = SUB84(local_128 * dStack_220,0);
  local_198._0_8_ = local_128 * local_228;
  local_198._12_4_ = (int)((ulonglong)(local_128 * dStack_220) >> 0x20);
  local_178 = *param_6 * local_230;
  uStack_170 = 0;
  local_1e8 = local_110 * local_228;
  dStack_1e0 = local_110 * dStack_220;
  local_1d8 = local_110 * local_230;
  uStack_1d0 = 0;
  auVar16._8_4_ = auVar21._0_4_;
  auVar16._12_4_ = auVar21._4_4_;
  local_1f8 = auVar16._0_8_ * dVar6;
  dStack_1f0 = auVar16._8_8_ * dVar7;
  local_188 = param_6[1] * dVar1;
  uStack_180 = 0;
  local_218 = dStack_108 * dVar6;
  dStack_210 = dStack_108 * dVar7;
  local_208 = dStack_108 * dVar1;
  uStack_200 = 0;
  uVar13 = CONCAT71((int7)((ulonglong)local_100 >> 8),1);
  local_240 = &local_128;
  do {
    local_238 = (uint)uVar13;
    dVar5 = *local_240;
    local_168 = dVar5 * local_228;
    dStack_160 = dVar5 * dStack_220;
    dVar5 = dVar5 * local_230;
    param_5 = (double *)CONCAT71((int7)((ulonglong)param_5 >> 8),1);
    pdVar14 = &local_128;
    do {
      local_234 = (uint)param_5;
      dVar15 = pdVar14[1];
      dVar17 = dVar15 * dVar6 + local_168;
      dVar19 = dVar15 * dVar7 + dStack_160;
      local_140 = local_1b8 + dVar17 + dVar10;
      dStack_138 = dStack_1b0 + dVar19 + dVar11;
      dVar15 = dVar15 * dVar1 + dVar5;
      local_130 = (dVar15 - dVar4 * dVar2) + dVar3;
      local_158 = dVar17 + local_1c8 + dVar10;
      dStack_150 = dVar19 + dStack_1c0 + dVar11;
      local_148 = local_1a8 + dVar15 + dVar3;
      local_250 = param_11;
      local_258 = param_10;
      local_260 = param_9;
      local_268 = param_8;
      (**(code **)(*param_1 + 0x38))(param_1,local_158,&local_158,param_7);
      pdVar12 = local_240;
      dVar15 = local_240[1];
      dVar17 = pdVar14[2];
      local_140 = (double)local_198._0_8_ + dVar15 * dVar6 + dVar17 * dVar8 + dVar10;
      dStack_138 = (double)local_198._8_8_ + dVar15 * dVar7 + dVar17 * dVar9 + dVar11;
      local_130 = (dVar15 * dVar1 - local_178) + dVar17 * dVar2 + dVar3;
      local_158 = dVar15 * dVar6 + local_1e8 + dVar17 * dVar8 + dVar10;
      dStack_150 = dVar15 * dVar7 + dStack_1e0 + dVar17 * dVar9 + dVar11;
      local_148 = local_1d8 + dVar15 * dVar1 + dVar17 * dVar2 + dVar3;
      local_250 = param_11;
      local_258 = param_10;
      local_260 = param_9;
      local_268 = param_8;
      (**(code **)(*param_1 + 0x38))(param_1,&local_140,&local_158,param_7);
      dVar15 = pdVar12[2];
      dVar17 = *pdVar14;
      local_140 = local_1f8 + dVar17 * local_228 + dVar15 * dVar8 + dVar10;
      dStack_138 = dStack_1f0 + dVar17 * dStack_220 + dVar15 * dVar9 + dVar11;
      local_130 = (dVar17 * local_230 - local_188) + dVar15 * dVar2 + dVar3;
      local_158 = dVar17 * local_228 + local_218 + dVar15 * dVar8 + dVar10;
      dStack_150 = dVar17 * dStack_220 + dStack_210 + dVar15 * dVar9 + dVar11;
      local_148 = local_208 + dVar17 * local_230 + dVar15 * dVar2 + dVar3;
      local_250 = param_11;
      local_258 = param_10;
      local_260 = param_9;
      local_268 = param_8;
      (**(code **)(*param_1 + 0x38))(param_1,&local_140,&local_158,param_7);
      pdVar14 = &local_110;
      param_5 = (double *)0x0;
    } while ((local_234 & 1) != 0);
    uVar13 = 0;
    local_240 = pdVar14;
  } while ((local_238 & 1) != 0);
  if ((local_f0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbab7a FUN_147cbab7a body=1735 status=ok
// SIG undefined FUN_147cbab7a(void)

void FUN_147cbab7a(longlong *param_1,double *param_2,undefined8 param_3,float param_4,float param_5,
                  undefined1 param_6,undefined4 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined1 local_150;
  undefined1 local_148 [16];
  double local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined1 local_110 [16];
  double local_100;
  undefined1 local_f8 [16];
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  dVar3 = DAT_14c8464f0 * param_2[9] + DAT_14c8464e8 * param_2[5] + DAT_14c8464e0 * param_2[1] +
          param_2[0xd];
  local_f8._8_4_ = SUB84(dVar3,0);
  local_f8._0_8_ =
       DAT_14c8464f0 * param_2[8] + DAT_14c8464e8 * param_2[4] + DAT_14c8464e0 * *param_2 +
       param_2[0xc];
  local_f8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_e8 = DAT_14c8464e0 * param_2[2] + DAT_14c8464e8 * param_2[6] + DAT_14c8464f0 * param_2[10] +
             param_2[0xe];
  local_128 = (double)param_4;
  local_148._8_4_ = SUB84(local_128,0);
  local_148._0_8_ = local_128;
  local_148._12_4_ = (int)((ulonglong)local_128 >> 0x20);
  uStack_120 = 0;
  dVar3 = param_2[9] * 0.0 + param_2[5] * 0.0 + param_2[1] * local_128 + param_2[0xd];
  local_110._8_4_ = SUB84(dVar3,0);
  local_110._0_8_ = param_2[8] * 0.0 + param_2[4] * 0.0 + *param_2 * local_128 + param_2[0xc];
  local_110._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_100 = param_2[2] * local_128 + param_2[6] * 0.0 + param_2[10] * 0.0 + param_2[0xe];
  local_150 = 0;
  local_158 = 0;
  local_160 = param_7;
  local_168 = param_6;
  (**(code **)(*param_1 + 0x30))(0,local_110,local_f8,param_3);
  dVar3 = (double)param_5;
  dVar2 = (double)(param_4 - param_5);
  dVar1 = dVar3 * param_2[9] + dVar3 * param_2[5] + dVar2 * param_2[1] + param_2[0xd];
  local_f8._8_4_ = SUB84(dVar1,0);
  local_f8._0_8_ = dVar3 * param_2[8] + dVar3 * param_2[4] + dVar2 * *param_2 + param_2[0xc];
  local_f8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  uStack_130 = 0;
  local_e8 = param_2[2] * dVar2 + param_2[6] * dVar3 + param_2[10] * dVar3 + param_2[0xe];
  uVar5 = local_148._0_8_;
  uVar6 = local_148._8_8_;
  local_110._8_8_ =
       param_2[9] * 0.0 + param_2[5] * 0.0 + param_2[1] * (double)local_148._8_8_ + param_2[0xd];
  local_110._0_8_ =
       param_2[8] * 0.0 + param_2[4] * 0.0 + *param_2 * (double)local_148._0_8_ + param_2[0xc];
  local_100 = param_2[2] * local_128 + param_2[6] * 0.0 + param_2[10] * 0.0 + param_2[0xe];
  local_150 = 0;
  local_158 = 0;
  local_160 = param_7;
  local_168 = param_6;
  local_138 = dVar3;
  (**(code **)(*param_1 + 0x30))(param_1,local_110,local_f8,param_3);
  dVar7 = local_128;
  dVar4 = (double)-param_5;
  dVar1 = dVar4 * param_2[9] + dVar3 * param_2[5] + dVar2 * param_2[1] + param_2[0xd];
  local_f8._8_4_ = SUB84(dVar1,0);
  local_f8._0_8_ = dVar4 * param_2[8] + dVar3 * param_2[4] + dVar2 * *param_2 + param_2[0xc];
  local_f8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_e8 = param_2[2] * dVar2 + param_2[6] * local_138 + param_2[10] * dVar4 + param_2[0xe];
  dVar1 = param_2[9] * 0.0 + param_2[5] * 0.0 + param_2[1] * (double)uVar6 + param_2[0xd];
  local_110._8_4_ = SUB84(dVar1,0);
  local_110._0_8_ = param_2[8] * 0.0 + param_2[4] * 0.0 + *param_2 * (double)uVar5 + param_2[0xc];
  local_110._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_100 = param_2[2] * local_128 + param_2[6] * 0.0 + param_2[10] * 0.0 + param_2[0xe];
  local_150 = 0;
  local_158 = 0;
  local_160 = param_7;
  local_168 = param_6;
  (**(code **)(*param_1 + 0x30))(param_1,local_110,local_f8,param_3);
  dVar1 = dVar3 * param_2[9] + dVar4 * param_2[5] + dVar2 * param_2[1] + param_2[0xd];
  local_f8._8_4_ = SUB84(dVar1,0);
  local_f8._0_8_ = dVar3 * param_2[8] + dVar4 * param_2[4] + dVar2 * *param_2 + param_2[0xc];
  local_f8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_e8 = param_2[2] * dVar2 + param_2[6] * dVar4 + local_138 * param_2[10] + param_2[0xe];
  uVar5 = local_148._0_8_;
  uVar6 = local_148._8_8_;
  dVar3 = param_2[9] * 0.0 + param_2[5] * 0.0 + param_2[1] * (double)local_148._8_8_ + param_2[0xd];
  local_110._8_4_ = SUB84(dVar3,0);
  local_110._0_8_ =
       param_2[8] * 0.0 + param_2[4] * 0.0 + *param_2 * (double)local_148._0_8_ + param_2[0xc];
  local_110._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_100 = param_2[2] * dVar7 + param_2[6] * 0.0 + param_2[10] * 0.0 + param_2[0xe];
  local_150 = 0;
  local_158 = 0;
  local_160 = param_7;
  local_168 = param_6;
  (**(code **)(*param_1 + 0x30))(param_1,local_110,local_f8,param_3);
  dVar3 = dVar4 * param_2[9] + dVar4 * param_2[5] + dVar2 * param_2[1] + param_2[0xd];
  local_f8._8_4_ = SUB84(dVar3,0);
  local_f8._0_8_ = dVar4 * param_2[8] + dVar4 * param_2[4] + dVar2 * *param_2 + param_2[0xc];
  local_f8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_e8 = dVar2 * param_2[2] + dVar4 * param_2[6] + param_2[10] * dVar4 + param_2[0xe];
  dVar3 = param_2[9] * 0.0 + param_2[5] * 0.0 + (double)uVar6 * param_2[1] + param_2[0xd];
  local_110._8_4_ = SUB84(dVar3,0);
  local_110._0_8_ = param_2[8] * 0.0 + param_2[4] * 0.0 + (double)uVar5 * *param_2 + param_2[0xc];
  local_110._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_100 = param_2[2] * dVar7 + param_2[6] * 0.0 + param_2[10] * 0.0 + param_2[0xe];
  local_150 = 0;
  local_158 = 0;
  local_160 = param_7;
  local_168 = param_6;
  (**(code **)(*param_1 + 0x30))(param_1,local_110,local_f8,param_3);
  if ((local_e0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbb242 FUN_147cbb242 body=524 status=ok
// SIG undefined FUN_147cbb242(void)

void FUN_147cbb242(longlong *param_1,double *param_2,float param_3,undefined8 param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 local_a0;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar2 = (double)param_3;
  dVar1 = dVar2 * 0.0;
  local_68 = param_2[2] - dVar1;
  local_70 = param_2[1] - dVar1;
  local_78 = *param_2 - dVar2;
  local_80 = param_2[2] + dVar1;
  local_88 = param_2[1] + dVar1;
  local_90 = *param_2 + dVar2;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = param_5;
  (**(code **)(*param_1 + 0x30))(local_80,&local_90,&local_78);
  local_68 = param_2[2] - dVar1;
  local_70 = param_2[1] - dVar2;
  local_90 = dVar1 + *param_2;
  local_78 = *param_2 - dVar1;
  local_80 = param_2[2] + dVar1;
  local_88 = param_2[1] + dVar2;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = param_5;
  (**(code **)(*param_1 + 0x30))(param_1,&local_90,&local_78,param_4);
  local_68 = param_2[2] - dVar2;
  local_70 = param_2[1] - dVar1;
  local_78 = *param_2 - dVar1;
  local_80 = param_2[2] + dVar2;
  local_88 = param_2[1] + dVar1;
  local_90 = dVar1 + *param_2;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = param_5;
  (**(code **)(*param_1 + 0x30))(param_1,&local_90,&local_78,param_4);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbb44f FUN_147cbb44f body=739 status=ok
// SIG undefined FUN_147cbb44f(void)

void FUN_147cbb44f(longlong *param_1,double *param_2,double *param_3,undefined8 param_4,
                  double param_5,undefined1 param_6,float param_7)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 unaff_RBP;
  double dVar7;
  double dVar8;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  float local_f8;
  undefined1 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar3 = param_3[2] - param_2[2];
  dVar7 = param_3[1] - param_2[1];
  dVar8 = *param_3 - *param_2;
  dVar4 = SQRT(dVar3 * dVar3 + dVar8 * dVar8 + dVar7 * dVar7);
  bVar1 = NAN(dVar4);
  bVar2 = dVar4 == 0.0;
  dVar5 = 1.0 / dVar4;
  dVar6 = dVar8 * dVar5;
  if ((bVar2) && (!bVar1)) {
    dVar6 = dVar8;
  }
  dVar8 = dVar7 * dVar5;
  if ((bVar2) && (!bVar1)) {
    dVar8 = dVar7;
  }
  dVar5 = dVar5 * dVar3;
  if ((bVar2) && (!bVar1)) {
    dVar5 = dVar3;
  }
  dVar3 = dVar4 / (param_5 + param_5);
  local_108 = 0;
  (**(code **)(*param_1 + 0x20))
            (param_1,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff,
             -((int)ROUND(-0.5 - (dVar3 + dVar3)) >> 1),-(param_7 != 0.0) & 1);
  local_b8 = param_2[2];
  local_c8 = *param_2;
  dStack_c0 = param_2[1];
  if (param_5 < dVar4) {
    do {
      local_d8 = local_b8 + dVar5 * param_5;
      dStack_e0 = dStack_c0 + dVar8 * param_5;
      local_e8 = local_c8 + dVar6 * param_5;
      local_f8 = param_7;
      local_108 = param_6;
      local_f0 = 0;
      local_100 = 0;
      (**(code **)(*param_1 + 0x30))(param_1,&local_c8,&local_e8,param_4);
      dVar4 = dVar4 - (param_5 + param_5);
      local_b8 = local_d8 + dVar5 * param_5;
      dStack_c0 = dStack_e0 + dVar8 * param_5;
      local_c8 = local_e8 + dVar6 * param_5;
    } while (param_5 < dVar4);
  }
  if (0.0 < dVar4) {
    local_d8 = param_3[2];
    local_e8 = *param_3;
    dStack_e0 = param_3[1];
    local_f8 = param_7;
    local_108 = param_6;
    local_f0 = 0;
    local_100 = 0;
    (**(code **)(*param_1 + 0x30))(param_1,&local_c8,&local_e8,param_4);
  }
  if ((local_b0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbb733 FUN_147cbb733 body=249 status=ok
// SIG undefined FUN_147cbb733(void)

float * FUN_147cbb733(float *param_1,float *param_2,char param_3,char param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 != '\0') {
    param_2 = (float *)(DAT_14cb0d2b0 + 0xdcc);
    if (*(char *)(DAT_14cb0d2b0 + 0xe0c) != '\0') {
      param_2 = (float *)(DAT_14cb0d2b0 + 0xdfc);
    }
  }
  if (param_5 == '\0') {
    fVar6 = 1.0;
  }
  else {
    fVar6 = *(float *)(DAT_14cb0d2b0 + 0xe30);
  }
  if (param_4 == '\0') {
    fVar7 = 0.0;
  }
  else {
    fVar7 = 0.15;
  }
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = 0.5;
  if (param_3 == '\0') {
    fVar5 = fVar7;
  }
  fVar6 = powf(fVar5 * fVar6 + 0.5,2.2);
  *param_1 = fVar1 * fVar6;
  param_1[1] = fVar2 * fVar6;
  param_1[2] = fVar3 * fVar6;
  param_1[3] = fVar4;
  return param_1;
}



// FUNCTION 147cbb85c FUN_147cbb85c body=236 status=ok
// SIG undefined FUN_147cbb85c(void)

longlong FUN_147cbb85c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + -0x308);
  if (lVar3 == 0) {
    return 0;
  }
  lVar2 = FUN_140678110();
  lVar3 = *(longlong *)(lVar3 + 0x10);
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    lVar3 = FUN_1405babea();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + -0x3a0) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + -0x3a0) + 0x30) +
         (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
      lVar3 = FUN_14001cc68(0x38,0x10);
      FUN_14746e2a4(lVar3,*(undefined8 *)(param_1 + -0x308),param_1 + -0x3b0,1);
      goto LAB_147cbb919;
    }
  }
  lVar3 = FUN_14001cc68(0x38,0x10);
  FUN_147cbb948(lVar3,*(undefined8 *)(param_1 + -0x308),param_1 + -0x3b0);
LAB_147cbb919:
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_147bce512(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
  return lVar3;
}



// FUNCTION 147cbb948 FUN_147cbb948 body=116 status=ok
// SIG undefined FUN_147cbb948(void)

undefined8 * FUN_147cbb948(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  
  FUN_147aea248(param_1,0);
  *param_1 = &PTR_FUN_14a3d4410;
  param_1[4] = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar1 = DAT_14c950c29;
  param_1[5] = param_3;
  if ((param_3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  param_1[6] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 147cbb9da FUN_147cbb9da body=141 status=ok
// SIG undefined FUN_147cbb9da(void)

longlong FUN_147cbb9da(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  *(byte *)(param_1 + 0x495) = *(byte *)(param_1 + 0x495) | 0x40;
  dVar1 = param_2[2];
  dVar2 = param_2[5];
  dVar3 = param_2[1];
  dVar4 = param_2[4];
  *(float *)(param_1 + 0x1d0) = (float)(*param_2 - param_2[3]);
  *(float *)(param_1 + 0x1d4) = (float)(dVar3 - dVar4);
  *(float *)(param_1 + 0x1d8) = (float)(dVar1 - dVar2);
  dVar1 = param_2[2];
  dVar2 = param_2[5];
  dVar3 = param_2[1];
  dVar4 = param_2[4];
  *(float *)(param_1 + 0x1e0) = (float)(*param_2 + param_2[3]);
  *(float *)(param_1 + 0x1e4) = (float)(dVar3 + dVar4);
  *(float *)(param_1 + 0x1e8) = (float)(dVar1 + dVar2);
  return param_1;
}



// FUNCTION 147cbba68 FUN_147cbba68 body=541 status=ok
// SIG undefined FUN_147cbba68(void)

void FUN_147cbba68(longlong param_1,undefined8 param_2,double *param_3)

{
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  double *local_140;
  double local_130;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  double local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_b0 = *(undefined8 *)(param_1 + 0x1b0);
  local_38 = param_3[2];
  local_d0 = *(double *)(param_1 + 400) + local_38;
  local_48 = *param_3;
  local_40 = param_3[1];
  local_d8 = *(double *)(param_1 + 0x188) + local_40;
  local_e0 = *(double *)(param_1 + 0x180) + local_48;
  local_c8 = *(undefined8 *)(param_1 + 0x198);
  uStack_c0 = *(undefined8 *)(param_1 + 0x1a0);
  local_b8 = *(undefined8 *)(param_1 + 0x1a8);
  local_e8 = *(undefined8 *)(param_1 + 0x1e8);
  local_148 = &local_118;
  local_118 = *(undefined8 *)(param_1 + 0x1b8);
  uStack_110 = *(undefined8 *)(param_1 + 0x1c0);
  local_108 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_100 = *(undefined8 *)(param_1 + 0x1d0);
  local_f8 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_f0 = *(undefined8 *)(param_1 + 0x1e0);
  local_130 = *(double *)(param_1 + 0x1f0) + local_48;
  local_a8 = *(undefined8 *)(param_1 + 0x100);
  local_a0 = *(undefined8 *)(param_1 + 0x108);
  local_98 = *(undefined8 *)(param_1 + 0x110);
  local_90 = *(undefined8 *)(param_1 + 0x118);
  local_88 = *(undefined8 *)(param_1 + 0x120);
  local_80 = *(undefined8 *)(param_1 + 0x128);
  local_78 = *(undefined8 *)(param_1 + 0x130);
  local_70 = *(undefined8 *)(param_1 + 0x138);
  local_68 = *(undefined8 *)(param_1 + 0x140);
  local_60 = *(undefined8 *)(param_1 + 0x148);
  local_58 = *(undefined8 *)(param_1 + 0x150);
  local_50 = *(undefined8 *)(param_1 + 0x158);
  local_48 = local_48 + *(double *)(param_1 + 0x160);
  local_128 = *(double *)(param_1 + 0x1f8) + local_40;
  local_40 = local_40 + *(double *)(param_1 + 0x168);
  local_120 = *(double *)(param_1 + 0x200) + local_38;
  local_38 = local_38 + *(double *)(param_1 + 0x170);
  local_30 = *(undefined8 *)(param_1 + 0x178);
  local_140 = &local_130;
  FUN_14486f79c();
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbbc86 FUN_147cbbc86 body=154 status=ok
// SIG undefined FUN_147cbbc86(void)

void FUN_147cbbc86(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1447fea8d(local_a8,param_1 + 0x100);
  local_b8 = *(undefined8 *)(param_1 + 0x200);
  local_d0 = &local_c8;
  local_c8 = *(undefined4 *)(param_1 + 0x1f0);
  uStack_c4 = *(undefined4 *)(param_1 + 500);
  uStack_c0 = *(undefined4 *)(param_1 + 0x1f8);
  uStack_bc = *(undefined4 *)(param_1 + 0x1fc);
  local_d8 = param_1 + 0x1b8;
  FUN_14486f79c(param_1,param_2,local_a8,param_1 + 0x180);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbbd22 FUN_147cbbd22 body=82 status=ok
// SIG undefined FUN_147cbbd22(void)

void FUN_147cbbd22(longlong param_1,char param_2,char param_3,undefined8 param_4)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  ulonglong uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x6c);
  uVar3 = CONCAT71((int7)((ulonglong)param_4 >> 8),bVar1) & 0xfffffff9;
  *(byte *)(param_1 + 0x6c) = (byte)uVar3 | param_2 * '\x02' | param_3 << 2;
  bVar2 = true;
  if (((*(byte *)(param_1 + 0x76) & 0x40) == 0) &&
     (bVar2 = (byte)(param_3 << 2) != 0 || (byte)(param_2 * '\x02') != 0,
     ((bVar1 & 6) == 0) != bVar2)) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x210) + 0x270);
                    /* WARNING: Could not recover jumptable at 0x000147cbbd71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(longlong **)(param_1 + 0x210),*(undefined8 *)(param_1 + 0x218),
             CONCAT71((int7)(uVar3 >> 8),bVar2),UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 147cbbd74 FUN_147cbbd74 body=274 status=ok
// SIG undefined FUN_147cbbd74(void)

void FUN_147cbbd74(longlong param_1,undefined4 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar9 = 0.0;
  if ((~*(byte *)(param_1 + 0x75) & 0x14) == 0 || (*(byte *)(param_1 + 0x75) & 0x20) != 0) {
    fVar9 = *(float *)(param_1 + 0xb8);
  }
  fVar10 = -*(float *)(param_1 + 0xbc);
  if (-*(float *)(param_1 + 0xbc) <= *(float *)(param_1 + 0xc0)) {
    fVar10 = *(float *)(param_1 + 0xc0);
  }
  FUN_140083b55(&local_38,param_1 + 0x100,-(fVar10 + fVar9));
  dVar1 = *(double *)(param_1 + 0x1d0);
  dVar2 = *(double *)(param_1 + 0x1d8);
  dVar3 = *(double *)(param_1 + 0x1e0);
  dVar4 = *(double *)(param_1 + 0x1e8);
  uVar5 = *(undefined4 *)(param_1 + 0x1b8);
  uVar6 = *(undefined4 *)(param_1 + 0x1bc);
  uVar7 = *(undefined4 *)(param_1 + 0x1c0);
  uVar8 = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x1c8);
  *param_2 = uVar5;
  param_2[1] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uVar8;
  *(double *)(param_2 + 6) = dVar1 + local_38;
  *(double *)(param_2 + 8) = dVar2 + local_30;
  *(double *)(param_2 + 10) = dVar3 + local_28;
  *(double *)(param_2 + 0xc) =
       SQRT(local_28 * local_28 + local_38 * local_38 + local_30 * local_30) + dVar4;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbbe88 FUN_147cbbe88 body=728 status=ok
// SIG undefined FUN_147cbbe88(void)

void FUN_147cbbe88(longlong *param_1,double *param_2,double *param_3,float param_4,uint param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined1 param_9)

{
  uint uVar1;
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
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined1 local_120;
  float local_114;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_5 != 0) {
    fVar4 = (float)*param_2;
    fVar10 = (float)param_2[1];
    local_114 = 1.0 / (float)param_5;
    fVar11 = (float)param_2[2];
    fVar9 = (float)(*param_3 - (double)fVar4);
    fVar8 = (float)(param_3[1] - (double)fVar10);
    fVar14 = (float)(param_3[2] - (double)fVar11);
    uVar1 = 1;
    fVar5 = fVar11;
    fVar2 = fVar4;
    fVar3 = fVar10;
    do {
      fVar6 = (float)uVar1 * local_114;
      fVar7 = fVar6 + fVar6 + -1.0;
      fVar12 = fVar9 * fVar6 + fVar4;
      fVar13 = fVar8 * fVar6 + fVar10;
      fVar6 = (1.0 - fVar7 * fVar7) *
              SQRT(fVar14 * fVar14 + fVar9 * fVar9 + fVar8 * fVar8) * param_4 +
              fVar14 * fVar6 + fVar11;
      local_f8 = (double)fVar12;
      local_f0 = (double)fVar13;
      local_e8 = (double)fVar6;
      local_110 = (double)fVar2;
      local_108 = (double)fVar3;
      local_100 = (double)fVar5;
      local_120 = param_9;
      local_130 = param_8;
      local_128 = 0;
      local_138 = 0;
      (**(code **)(*param_1 + 0x30))(param_1,&local_110,&local_f8,param_6);
      uVar1 = uVar1 + 1;
      fVar5 = fVar6;
      fVar2 = fVar12;
      fVar3 = fVar13;
    } while (uVar1 <= param_5);
  }
  if ((local_e0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbc162 FUN_147cbc162 body=645 status=ok
// SIG undefined FUN_147cbc162(void)

void FUN_147cbc162(longlong *param_1,double *param_2,double *param_3,float param_4,
                  undefined8 param_5,undefined1 param_6,undefined4 param_7,undefined1 param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar1 = param_3[2] - param_2[2];
  dVar2 = param_3[1] - param_2[1];
  dVar6 = *param_3 - *param_2;
  dVar3 = 1.0 / SQRT(dVar1 * dVar1 + dVar6 * dVar6 + dVar2 * dVar2);
  dVar1 = dVar1 * dVar3;
  dVar2 = dVar2 * dVar3;
  dVar3 = dVar3 * dVar6;
  dVar7 = (double)param_4;
  dVar5 = (double)(param_4 / 3.0);
  dVar4 = (dVar3 * DAT_14c8462c8 - DAT_14c8462c0 * dVar2) * dVar5;
  dVar6 = (DAT_14c8462c0 * dVar1 - DAT_14c8462d0 * dVar3) * dVar5;
  dVar5 = (DAT_14c8462d0 * dVar2 - DAT_14c8462c8 * dVar1) * dVar5;
  local_b8 = param_2[2] + dVar1 * dVar7 + dVar4;
  local_c0 = param_2[1] + dVar2 * dVar7 + dVar6;
  local_c8 = *param_2 + dVar3 * dVar7 + dVar5;
  local_d0 = param_8;
  local_d8 = 0;
  local_e0 = param_7;
  local_e8 = param_6;
  (**(code **)(*param_1 + 0x30))(local_b8,local_c0,&local_c8,param_5);
  local_b8 = (dVar1 * dVar7 + param_2[2]) - dVar4;
  local_c0 = (dVar2 * dVar7 + param_2[1]) - dVar6;
  local_c8 = (dVar3 * dVar7 + *param_2) - dVar5;
  local_d0 = param_8;
  local_d8 = 0;
  local_e0 = param_7;
  local_e8 = param_6;
  (**(code **)(*param_1 + 0x30))(param_1,param_2,&local_c8,param_5);
  if ((local_b0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbc3e8 FUN_147cbc3e8 body=708 status=ok
// SIG undefined FUN_147cbc3e8(void)

byte FUN_147cbc3e8(longlong *param_1)

{
  char cVar1;
  char extraout_AL;
  longlong *plVar2;
  byte bVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x58))();
  if (cVar1 == '\0') {
    return 1;
  }
  if ((((~*(byte *)((longlong)param_1 + 0x6e) & 10) != 0) ||
      ((((**(code **)(*param_1 + 0x1f0))(param_1), extraout_AL == '\0' &&
        ((*(byte *)(param_1 + 0xe) & 8) == 0)) &&
       ((*(byte *)((longlong)param_1 + 0x72) & 0x20) == 0)))) &&
     ((*(byte *)((longlong)param_1 + 0x79) & 2) == 0)) {
    return 2;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cafaed8) && (FUN_144b3d300(&DAT_14cafaed8), DAT_14cafaed8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.RayTracing.Geometry.StaticMeshes",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14cafaed0 = 0;
    }
    else {
      DAT_14cafaed0 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14cafaed8);
  }
  if ((*(byte *)((longlong)param_1 + 0x74) & 4) == 0) {
    if ((*(byte *)((longlong)param_1 + 0x74) >> 3 & DAT_14cafaed0 != 0) == 0) goto LAB_147cbc48c;
  }
  else if (DAT_14cafaed0 == 0) goto LAB_147cbc48c;
  if (*(int *)(DAT_14cafaed0 + 4) < 1) {
    return 2;
  }
LAB_147cbc48c:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cafaee8) && (FUN_144b3d300(&DAT_14cafaee8), DAT_14cafaee8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.RayTracing.Geometry.HierarchicalInstancedStaticMesh",1);
    if (plVar2 == (longlong *)0x0) {
      DAT_14cafaee0 = 0;
    }
    else {
      DAT_14cafaee0 = (**(code **)(*plVar2 + 0x68))(plVar2);
    }
    _Init_thread_footer(&DAT_14cafaee8);
  }
  if (((DAT_14cafaee0 != 0 & *(byte *)((longlong)param_1 + 0x74) >> 6) != 1) ||
     (0 < *(int *)(DAT_14cafaee0 + 4))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cafaef8) && (FUN_144b3d300(&DAT_14cafaef8), DAT_14cafaef8 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.RayTracing.Geometry.LandscapeGrass",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14cafaef0 = 0;
      }
      else {
        DAT_14cafaef0 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14cafaef8);
    }
    if ((DAT_14cafaef0 == 0 || -1 < *(char *)((longlong)param_1 + 0x74)) ||
       (0 < *(int *)(DAT_14cafaef0 + 4))) {
      cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
      bVar3 = 8;
      if (cVar1 != '\0') {
        if (*(int *)(param_1[0x43] + 0x228) == 0) {
          return 2;
        }
        bVar3 = 0x20;
        if (*(int *)(param_1[0x43] + 0x48) == 0) {
          return 2;
        }
      }
      return (*(byte *)((longlong)param_1 + 0x79) & 2) << 5 | bVar3;
    }
  }
  return 2;
}



// FUNCTION 147cbc6b2 FUN_147cbc6b2 body=320 status=ok
// SIG undefined FUN_147cbc6b2(void)

void FUN_147cbc6b2(undefined8 param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  int local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  _Src = local_38;
  iVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_30;
  local_48 = (int)uStack_30;
  if (lVar2 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,uStack_30 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar2 * 2);
  }
  FUN_147cbc7f4(&local_50,iVar1 != 0);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbc7f4 FUN_147cbc7f4 body=1031 status=ok
// SIG undefined FUN_147cbc7f4(void)

void FUN_147cbc7f4(longlong *param_1,char param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_2a8 [32];
  undefined **local_288;
  undefined8 local_280 [11];
  void *local_228;
  int local_220;
  undefined1 local_218 [160];
  void *local_178;
  int local_170;
  undefined **local_168;
  undefined8 local_160 [11];
  void *local_108;
  int local_100;
  int local_fc;
  undefined1 local_f8 [160];
  void *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_168 = &PTR_FUN_14aa53e90;
  memset(local_160,0,0x118);
  puVar6 = &DAT_149dfb77a;
  FUN_14020fad6(&local_58);
  (*(code *)local_168[1])(&local_168);
  lVar3 = DAT_14cafaf58;
  if (DAT_14cafaf58 == 0) {
    if ((int)param_1[1] == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_1;
    }
    local_288 = &PTR_FUN_14aa53e90;
    memset(local_280,0,0x118);
    FUN_14020fad6(&local_178,puVar6);
    (*(code *)local_288[1])(&local_288);
    pvVar1 = local_228;
    puVar4 = local_280;
    puVar5 = local_160;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_100 = local_220;
    if (local_220 == 0 && local_fc == 0) {
      local_fc = 0;
    }
    else {
      FUN_147cbf702(&local_108,local_220);
      if (local_220 != 0) {
        memcpy(local_108,pvVar1,(longlong)local_220 << 4);
      }
    }
    memcpy(local_f8,local_218,0xa0);
    pvVar1 = local_178;
    local_50 = local_170;
    if (local_170 == 0 && local_4c == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_170);
      if (local_170 != 0) {
        memcpy(local_58,pvVar1,(longlong)local_170 * 2);
      }
    }
    local_288 = &PTR_FUN_14aa53e90;
    if (local_178 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_228 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((int)param_1[1] != 0) {
      puVar6 = (undefined2 *)*param_1;
    }
    local_288 = &PTR_FUN_14aa53e90;
    memset(local_280,0,0x118);
    FUN_14020fad6(&local_178,puVar6);
    (*(code *)local_288[1])(&local_288);
    (*(code *)local_288[2])(&local_288,lVar3);
    pvVar1 = local_228;
    puVar4 = local_280;
    puVar5 = local_160;
    for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_100 = local_220;
    if (local_220 == 0 && local_fc == 0) {
      local_fc = 0;
    }
    else {
      FUN_147cbf702(&local_108,local_220);
      if (local_220 != 0) {
        memcpy(local_108,pvVar1,(longlong)local_220 << 4);
      }
    }
    memcpy(local_f8,local_218,0xa0);
    pvVar1 = local_178;
    local_50 = local_170;
    if (local_170 == 0 && local_4c == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_170);
      if (local_170 != 0) {
        memcpy(local_58,pvVar1,(longlong)local_170 * 2);
      }
    }
    local_288 = &PTR_FUN_14aa53e90;
    if (local_178 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_228 != (void *)0x0) {
      FUN_1400020a8();
    }
    lVar3 = DAT_14cafaf58;
    if (param_2 != '\0') {
      FUN_1402160b8(&local_288);
      FUN_1479a6526(lVar3,&local_288);
    }
  }
  uVar2 = FUN_144a82cde();
  FUN_147cbd31e(&local_168,uVar2);
  local_168 = &PTR_FUN_14aa53e90;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbcc12 FUN_147cbcc12 body=354 status=ok
// SIG undefined FUN_147cbcc12(void)

void FUN_147cbcc12(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cafaf58 != (undefined8 *)0x0) {
    FUN_147cbcd8c();
  }
  puVar7 = (undefined8 *)FUN_14001cc68(0x208,0x10);
  FUN_140056680(local_30,L"HealthSnapshots");
  FUN_1402160b8(local_38);
  FUN_1479a6486(puVar7,local_38,local_30);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a819bc0;
  plVar8[2] = (longlong)puVar7;
  plVar3 = DAT_14cafaf60;
  DAT_14cafaf58 = puVar7;
  if (plVar8 == DAT_14cafaf60) {
    plVar6 = DAT_14cafaf60;
    if (plVar8 == (longlong *)0x0) goto LAB_147cbccff;
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plVar6 = DAT_14cafaf60;
    if ((int)*plVar3 != 0) goto LAB_147cbccff;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
    plVar3 = plVar8;
  }
  else {
    plVar6 = plVar8;
    if (DAT_14cafaf60 == (longlong *)0x0) goto LAB_147cbccff;
    LOCK();
    plVar1 = DAT_14cafaf60 + 1;
    DAT_14cafaf60 = plVar8;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plVar6 = DAT_14cafaf60;
    if ((int)*plVar1 != 0) goto LAB_147cbccff;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
  }
  plVar6 = DAT_14cafaf60;
  if (iVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    plVar6 = DAT_14cafaf60;
  }
LAB_147cbccff:
  DAT_14cafaf60 = plVar6;
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  uVar5 = DAT_14cb0d2b0;
  local_48 = DAT_14cafaf58;
  local_40 = DAT_14cafaf60;
  if (DAT_14cafaf60 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14cafaf60 + 1) = (int)DAT_14cafaf60[1] + 1;
    UNLOCK();
  }
  FUN_143422038(uVar5,&local_48);
  (**(code **)*DAT_14cafaf58)();
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbcd8c FUN_147cbcd8c body=166 status=ok
// SIG undefined FUN_147cbcd8c(void)

void FUN_147cbcd8c(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  uVar4 = DAT_14cb0d2b0;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cafaf58 != 0) {
    local_20 = DAT_14cafaf58;
    local_18 = DAT_14cafaf60;
    if (DAT_14cafaf60 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14cafaf60 + 1) = (int)DAT_14cafaf60[1] + 1;
      UNLOCK();
    }
    FUN_143422344(uVar4,&local_20);
    plVar3 = DAT_14cafaf60;
    DAT_14cafaf58 = 0;
    if (DAT_14cafaf60 != (longlong *)0x0) {
      DAT_14cafaf60 = (longlong *)0x0;
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbce36 FUN_147cbce36 body=96 status=ok
// SIG undefined FUN_147cbce36(void)

longlong FUN_147cbce36(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_144a49b4a(*(undefined4 *)(param_2 + 1),*param_2);
  iVar2 = FUN_1467c2dcc(param_1 + 0x1410,uVar1,param_2);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + 0x1410;
    if (*(longlong *)(param_1 + 0x1810) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1810);
    }
    lVar4 = (longlong)iVar2 * 0x20 + lVar4;
  }
  lVar3 = lVar4 + 0x10;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 147cbce96 FUN_147cbce96 body=60 status=ok
// SIG undefined FUN_147cbce96(void)

void FUN_147cbce96(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1888) = 0;
  if (*(longlong *)(param_1 + 0x1880) != 0) {
    FUN_1400020a8();
  }
  FUN_147cbf62a(param_1 + 0x1410);
  FUN_147cbf5ec(param_1);
  return;
}



// FUNCTION 147cbced2 FUN_147cbced2 body=1099 status=ok
// SIG undefined FUN_147cbced2(void)

void FUN_147cbced2(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (param_2 != 0) {
    dVar9 = *(double *)(param_2 + 0x28);
    uVar1 = *(ulonglong *)(param_2 + 0x30);
    fVar6 = (float)FUN_143605286();
    lVar4 = (longlong)((1000.0 / (double)fVar6) * dVar9);
    iVar2 = (int)lVar4 - (int)uVar1;
    iVar5 = 0;
    if (0 < iVar2) {
      iVar5 = iVar2;
    }
    dVar7 = *(double *)(param_2 + 400);
    *(double *)(param_1 + 0x70) = dVar7;
    *(double *)(param_1 + 0xb8) = (double)(((float)iVar5 * 100.0) / (float)lVar4);
    dVar8 = (double)(longlong)uVar1;
    *(double *)(param_1 + 0xc0) = dVar8 / dVar9;
    dVar9 = 0.0;
    *(ulonglong *)(param_1 + 0xa8) =
         -(ulonglong)(0.0 < *(double *)(param_2 + 0x28)) &
         (ulonglong)((double)*(int *)(param_2 + 0x60) / (*(double *)(param_2 + 0x28) / 60.0));
    if (0 < *(longlong *)(param_2 + 0x60)) {
      dVar9 = *(double *)(param_2 + 0x58) / (double)*(longlong *)(param_2 + 0x60);
    }
    *(double *)(param_1 + 0xb0) = dVar9;
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x154);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0x158);
    if ((longlong)uVar1 < 1) {
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0x174);
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x178);
      uVar3 = 0;
    }
    else {
      *(int *)(param_1 + 0xd0) = (int)((longlong)*(int *)(param_2 + 0x15c) / (longlong)uVar1);
      *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0x174);
      *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0x178);
      uVar3 = (undefined4)(*(longlong *)(param_2 + 0x180) / (longlong)uVar1);
    }
    *(undefined4 *)(param_1 + 0xdc) = uVar3;
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0x40);
    dVar9 = 0.0;
    dVar10 = 0.0;
    if (0 < *(longlong *)(param_2 + 0x30)) {
      dVar10 = *(double *)(param_2 + 0x28) / (double)*(longlong *)(param_2 + 0x30);
    }
    *(double *)(param_1 + 0xf0) = dVar10;
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0xa0);
    if (0 < *(longlong *)(param_2 + 0x90)) {
      dVar9 = *(double *)(param_2 + 0x88) / (double)*(longlong *)(param_2 + 0x90);
    }
    *(double *)(param_1 + 0x108) = dVar9;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x1d0);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x1e0);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x1d8);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x1e8);
    if ((longlong)uVar1 < 1) {
      fVar6 = 0.0;
    }
    else {
      *(ulonglong *)(param_1 + 0x40) = *(ulonglong *)(param_2 + 0x1f8) / uVar1;
      *(ulonglong *)(param_1 + 0x58) = *(ulonglong *)(param_2 + 0x200) / uVar1;
      fVar6 = (float)(((double)*(uint *)(param_2 + 0xd8) * 100.0) / dVar8);
    }
    *(float *)(param_1 + 0x78) = fVar6;
    dVar7 = dVar7 / 60.0;
    *(float *)(param_1 + 0x7c) = (float)((double)*(int *)(param_2 + 0x144) / dVar7);
    if ((longlong)uVar1 < 1) {
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(float *)(param_1 + 0x88) = (float)((double)*(int *)(param_2 + 0x148) / dVar7);
      *(undefined8 *)(param_1 + 0x8c) = 0;
      *(float *)(param_1 + 0x94) = (float)((double)*(int *)(param_2 + 0x14c) / dVar7);
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(float *)(param_1 + 0xa0) = (float)((double)*(int *)(param_2 + 0x150) / dVar7);
      fVar6 = 0.0;
    }
    else {
      *(float *)(param_1 + 0x80) = (float)(*(double *)(param_2 + 0x108) / dVar8);
      *(float *)(param_1 + 0x84) = (float)(((double)*(uint *)(param_2 + 0xdc) * 100.0) / dVar8);
      *(float *)(param_1 + 0x88) = (float)((double)*(int *)(param_2 + 0x148) / dVar7);
      *(float *)(param_1 + 0x8c) = (float)(*(double *)(param_2 + 0x110) / dVar8);
      *(float *)(param_1 + 0x90) = (float)(((double)*(uint *)(param_2 + 0xe0) * 100.0) / dVar8);
      *(float *)(param_1 + 0x94) = (float)((double)*(int *)(param_2 + 0x14c) / dVar7);
      *(float *)(param_1 + 0x98) = (float)(*(double *)(param_2 + 0x118) / dVar8);
      *(float *)(param_1 + 0x9c) = (float)(((double)*(uint *)(param_2 + 0xe4) * 100.0) / dVar8);
      *(float *)(param_1 + 0xa0) = (float)((double)*(int *)(param_2 + 0x150) / dVar7);
      fVar6 = (float)(*(double *)(param_2 + 0x120) / dVar8);
    }
    *(float *)(param_1 + 0xa4) = fVar6;
  }
  return;
}



// FUNCTION 147cbd31e FUN_147cbd31e body=182 status=ok
// SIG undefined FUN_147cbd31e(void)

void FUN_147cbd31e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c761948 != 0) {
    FUN_1446f470e(&local_28,L"LogHealthSnapshot",1);
    if ((int)param_1[0x23] == 0) {
      local_38 = &DAT_149dfb77a;
    }
    else {
      local_38 = (undefined2 *)param_1[0x22];
    }
    FUN_145bf7c2e(param_2,&local_28,5,L"======= Snapshot: %s =======");
    (**(code **)(*param_1 + 0x18))(param_1,param_2,local_28);
    FUN_145bf7c2e(param_2,&local_28,5,L"=========================================================");
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbd3e4 FUN_147cbd3e4 body=58 status=ok
// SIG undefined FUN_147cbd3e4(void)

int FUN_147cbd3e4(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147cc6276(param_1,iVar1);
  }
  FUN_147cc620a((longlong)iVar1 * 0x138 + *param_1);
  return iVar1;
}



// FUNCTION 147cbd41e FUN_147cbd41e body=663 status=ok
// SIG undefined FUN_147cbd41e(void)

void FUN_147cbd41e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = param_2;
  puVar5 = param_1;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (param_2 == param_1) goto LAB_147cbd5af;
  if (*(char *)(param_2 + 0x11) == '\x01') {
    param_1[0x10] = param_2[0x10];
    uVar2 = 1;
LAB_147cbd459:
    *(undefined1 *)(param_1 + 0x11) = uVar2;
  }
  else if (*(char *)(param_1 + 0x11) == '\x01') {
    uVar2 = 0;
    goto LAB_147cbd459;
  }
  if (*(char *)(param_2 + 0x13) == '\x01') {
    param_1[0x12] = param_2[0x12];
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  else if (*(char *)(param_1 + 0x13) == '\x01') {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if (*(char *)(param_2 + 0x15) == '\x01') {
    param_1[0x14] = param_2[0x14];
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  else if (*(char *)(param_1 + 0x15) == '\x01') {
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  if (*(char *)(param_2 + 0x17) == '\x01') {
    param_1[0x16] = param_2[0x16];
    *(undefined1 *)(param_1 + 0x17) = 1;
  }
  else if (*(char *)(param_1 + 0x17) == '\x01') {
    *(undefined1 *)(param_1 + 0x17) = 0;
  }
  if (*(char *)(param_2 + 0x19) == '\x01') {
    param_1[0x18] = param_2[0x18];
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  else if (*(char *)(param_1 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  if (*(char *)(param_2 + 0x1b) == '\x01') {
    param_1[0x1a] = param_2[0x1a];
    *(undefined1 *)(param_1 + 0x1b) = 1;
  }
  else if (*(char *)(param_1 + 0x1b) == '\x01') {
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    param_1[0x1c] = param_2[0x1c];
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  else if (*(char *)(param_1 + 0x1d) == '\x01') {
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    param_1[0x1e] = param_2[0x1e];
    *(undefined1 *)(param_1 + 0x1f) = 1;
  }
  else if (*(char *)(param_1 + 0x1f) == '\x01') {
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    param_1[0x20] = param_2[0x20];
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  else if (*(char *)(param_1 + 0x21) == '\x01') {
    *(undefined1 *)(param_1 + 0x21) = 0;
  }
  if (*(char *)(param_2 + 0x25) == '\x01') {
    param_1[0x24] = param_2[0x24];
    uVar1 = param_2[0x23];
    param_1[0x22] = param_2[0x22];
    param_1[0x23] = uVar1;
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  else if (*(char *)(param_1 + 0x25) == '\x01') {
    *(undefined1 *)(param_1 + 0x25) = 0;
  }
LAB_147cbd5af:
  *(undefined2 *)(param_1 + 0x26) = *(undefined2 *)(param_2 + 0x26);
  return;
}



// FUNCTION 147cbd6b6 FUN_147cbd6b6 body=221 status=ok
// SIG undefined FUN_147cbd6b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cbd6b6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafb050) {
    FUN_144b3d300(&DAT_14cafb050);
    if (DAT_14cafb050 == -1) {
      DAT_14cafafd0 = 0;
      _DAT_14cafafd4 = 0;
      uRam000000014cafafdc = 0;
      ram0x00014cafafe4 = 0;
      uRam000000014cafafec = 0;
      ram0x00014cafaff4 = 0;
      ram0x00014cafaffc = 0;
      _DAT_14cafb004 = 0x200000000;
      _DAT_14cafb00c = 0;
      _DAT_14cafb01c = 0;
      uRam000000014cafb034 = 0;
      _DAT_14cafb03c = 0;
      uRam000000014cafb044 = 0;
      _DAT_14cafb04c = 0;
      _DAT_14cafb018 = 1;
      _DAT_14cafb010 = 0x80000;
      uRam000000014cafb014 = 0x3dcccccd;
      _DAT_14cafb024 = 1;
      _DAT_14cafb02c = 0x10000000000000;
      atexit((_func_5014 *)&LAB_14365d46d);
      _Init_thread_footer(&DAT_14cafb050);
      return;
    }
  }
  return;
}



// FUNCTION 147cbd794 FUN_147cbd794 body=98 status=ok
// SIG undefined FUN_147cbd794(void)

void FUN_147cbd794(void)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_144760e21(DAT_14cafaff8,DAT_14cafb000);
  if (DAT_14cafaff8 != 0) {
    FUN_1400020a8();
  }
  plVar2 = DAT_14cafaff0;
  if (DAT_14cafaff0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14cafaff0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = DAT_14cafafe0;
  if (DAT_14cafafe0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14cafafe0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147cbd7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147cbd7fa FUN_147cbd7fa body=120 status=ok
// SIG undefined FUN_147cbd7fa(void)

undefined8 * FUN_147cbd7fa(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafb1f8) {
    FUN_144b3d300(&DAT_14cafb1f8);
    if (DAT_14cafb1f8 == -1) {
      FUN_1446ddc76(&DAT_14cafb1f0,"Project",1);
      _Init_thread_footer(&DAT_14cafb1f8);
    }
  }
  *param_2 = DAT_14cafb1f0;
  return param_2;
}



// FUNCTION 147cbd872 FUN_147cbd872 body=120 status=ok
// SIG undefined FUN_147cbd872(void)

undefined8 * FUN_147cbd872(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafb208) {
    FUN_144b3d300(&DAT_14cafb208);
    if (DAT_14cafb208 == -1) {
      FUN_1446ddc76(&DAT_14cafb200,"Editor",1);
      _Init_thread_footer(&DAT_14cafb208);
    }
  }
  *param_2 = DAT_14cafb200;
  return param_2;
}



// FUNCTION 147cbd916 FUN_147cbd916 body=135 status=ok
// SIG undefined FUN_147cbd916(void)

void FUN_147cbd916(longlong param_1)

{
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) == 1) {
    iVar2 = 0;
    uVar1 = 1;
  }
  else {
    FUN_14475fe8c(param_1 + 0x40,1);
    iVar2 = *(int *)(param_1 + 0x50);
    uVar1 = *(uint *)(param_1 + 0x54);
  }
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (uVar1 < iVar2 + 1U) {
    FUN_146f3c7b6(param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 1) {
    FUN_14476002c(param_1 + 0x58,1);
  }
  FUN_144718544(param_1 + 0x58);
  FUN_1411fd286(param_1);
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 147cbd99e FUN_147cbd99e body=143 status=ok
// SIG undefined FUN_147cbd99e(void)

longlong FUN_147cbd99e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_1d;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = 0;
  if (*param_2 != 0) {
    uVar1 = *(undefined8 *)(*param_2 + 0x20);
    uVar2 = (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1 & 0x7fffffff;
  }
  local_30 = &local_1d;
  local_38 = param_3;
  FUN_147cc6c52(param_1,&local_1c,uVar2,param_2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (longlong)local_1c * 0x10 + *param_1 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbda2e FUN_147cbda2e body=3 status=ok
// SIG undefined FUN_147cbda2e(void)

undefined1 FUN_147cbda2e(void)

{
  return 1;
}



// FUNCTION 147cbda32 FUN_147cbda32 body=419 status=ok
// SIG undefined FUN_147cbda32(void)

ulonglong FUN_147cbda32(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                       char param_5,int *param_6)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined1 *local_70;
  undefined2 local_5a;
  undefined8 local_58;
  undefined1 local_4d;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc30);
  local_58 = param_2;
  EnterCriticalSection(lpCriticalSection);
  local_78 = &local_5a;
  local_5a = 0;
  local_70 = &local_4d;
  FUN_14573482a(param_1 + 0xc58,&local_4c,
                (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2 & 0x7fffffff,&local_58);
  cVar1 = *(char *)(*(longlong *)(param_1 + 0xc58) + 9 + (longlong)local_4c * 0x10);
  if (cVar1 == '\x01') {
    LeaveCriticalSection(lpCriticalSection);
    iVar3 = 0;
  }
  else {
    lVar4 = (longlong)local_4c * 0x10 + *(longlong *)(param_1 + 0xc58);
    *(undefined1 *)(lVar4 + 9) = 1;
    cVar2 = *(char *)(lVar4 + 8);
    LeaveCriticalSection(lpCriticalSection);
    FUN_140691a2a(param_1 + 0x208,param_3,param_4);
    if (param_5 == '\0') {
      FUN_140691a2a(param_1 + 0xa28,param_3,param_4);
      iVar3 = 6;
    }
    else if (cVar2 == '\0') {
      FUN_140691a2a(param_1 + 0x618,param_3,param_4);
      iVar3 = 3;
    }
    else if (*param_6 == 1) {
      FUN_140691a2a(param_1 + 0x820,param_3,param_4);
      iVar3 = 4;
    }
    else {
      FUN_140691a2a(param_1 + 0x410,param_3,param_4);
      iVar3 = 2;
    }
  }
  *param_6 = iVar3;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return (CONCAT71((int7)((ulonglong)&local_58 >> 8),cVar1) ^ 1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbdbd6 FUN_147cbdbd6 body=180 status=ok
// SIG undefined FUN_147cbdbd6(void)

ulonglong FUN_147cbdbd6(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc30));
  plVar2 = (longlong *)(param_1 + 0xc58);
  FUN_147cc7106(plVar2,&local_2c,
                (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2 & 0x7fffffff,&local_38);
  if (((longlong)local_2c == -1) ||
     (puVar1 = (undefined1 *)((longlong)local_2c * 0x10 + *plVar2 + 8), puVar1 == (undefined1 *)0x0)
     ) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)plVar2 >> 8),*puVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc30));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbdc8b FUN_147cbdc8b body=8 status=ok
// SIG undefined FUN_147cbdc8b(void)

undefined * FUN_147cbdc8b(void)

{
  return &DAT_14cafc0a0;
}



// FUNCTION 147cbdc93 FUN_147cbdc93 body=8 status=ok
// SIG undefined FUN_147cbdc93(void)

undefined * FUN_147cbdc93(void)

{
  return &DAT_14cafcd70;
}



// FUNCTION 147cbdc9c FUN_147cbdc9c body=87 status=ok
// SIG undefined FUN_147cbdc9c(void)

void FUN_147cbdc9c(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xc);
  if (*(byte *)(param_1 + 0xc) == 5) {
    uVar1 = DAT_14c760db4;
  }
  bVar3 = true;
  if ((int)uVar1 < 3) {
    if ((longlong)*(int *)(param_1 + 0x20) < 1) {
      bVar3 = false;
    }
    else {
      uVar2 = 1;
      do {
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + -4 + uVar2 * 4);
        if (0xffff < uVar1) break;
        bVar3 = uVar2 < (ulonglong)(longlong)*(int *)(param_1 + 0x20);
        uVar2 = uVar2 + 1;
      } while (bVar3);
      bVar3 = 0xffff < uVar1;
    }
  }
  *(bool *)(param_1 + 0x28) = bVar3;
  return;
}



// FUNCTION 147cbdcf4 FUN_147cbdcf4 body=206 status=ok
// SIG undefined FUN_147cbdcf4(void)

void FUN_147cbdcf4(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  void *_Src;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = (longlong)*(int *)(param_1 + 0x28) /
          (longlong)(int)((uint)*(byte *)(param_1 + 0x3c) * 2 + 2);
  uVar3 = (uint)uVar8;
  uVar8 = uVar8 & 0xffffffff;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  iVar6 = 0;
  uVar4 = uVar3;
  if (*(uint *)((longlong)param_2 + 0xc) != uVar3) {
    FUN_14480809c(param_2,uVar8);
    iVar6 = (int)param_2[1];
    uVar4 = *(uint *)((longlong)param_2 + 0xc);
  }
  *(uint *)(param_2 + 1) = iVar6 + uVar3;
  if (uVar4 - iVar6 < uVar3) {
    FUN_1447808da(param_2);
  }
  puVar1 = (ulonglong *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x3c) != '\x01') {
    uVar7 = *puVar1;
    uVar5 = ((longlong)uVar7 >> 0x18) + (longlong)puVar1;
    if ((uVar7 & 1) == 0) {
      uVar5 = uVar7;
    }
    if (uVar3 != 0) {
      uVar7 = 0;
      do {
        *(uint *)(*param_2 + uVar7 * 4) = (uint)*(ushort *)(uVar5 + uVar7 * 2);
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x20);
  _Src = (void *)((longlong)puVar1 + ((longlong)pvVar2 >> 0x18));
  if (((ulonglong)pvVar2 & 1) == 0) {
    _Src = pvVar2;
  }
  memcpy((void *)*param_2,_Src,(longlong)*(int *)(param_1 + 0x28));
  return;
}



// FUNCTION 147cbddca FUN_147cbddca body=22 status=ok
// SIG undefined FUN_147cbddca(void)

undefined8 FUN_147cbddca(undefined8 param_1,undefined8 param_2)

{
  FUN_14020207e();
  return param_2;
}



// FUNCTION 147cbdde6 FUN_147cbdde6 body=38 status=ok
// SIG undefined FUN_147cbdde6(void)

undefined8 FUN_147cbdde6(undefined8 param_1,int param_2)

{
  FUN_140296ab8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cbde0c FUN_147cbde0c body=32 status=ok
// SIG undefined FUN_147cbde0c(void)

undefined8 FUN_147cbde0c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"PositionOnly Static-mesh vertices");
  return param_2;
}



// FUNCTION 147cbde34 FUN_147cbde34 body=38 status=ok
// SIG undefined FUN_147cbde34(void)

undefined8 FUN_147cbde34(undefined8 param_1,int param_2)

{
  FUN_140038e28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cbde5a FUN_147cbde5a body=38 status=ok
// SIG undefined FUN_147cbde5a(void)

undefined8 FUN_147cbde5a(undefined8 param_1,int param_2)

{
  FUN_145841116();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cbde80 FUN_147cbde80 body=38 status=ok
// SIG undefined FUN_147cbde80(void)

undefined8 FUN_147cbde80(undefined8 param_1,int param_2)

{
  FUN_1457b7dec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cbded0 FUN_147cbded0 body=74 status=ok
// SIG undefined FUN_147cbded0(void)

undefined8 * FUN_147cbded0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa53e90;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cbdf22 FUN_147cbdf22 body=74 status=ok
// SIG undefined FUN_147cbdf22(void)

undefined8 * FUN_147cbdf22(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa57ea0;
  if (param_1[4] != 0 && (param_1[4] & 1) == 0) {
    FUN_1400020a8();
  }
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cbdfcc FUN_147cbdfcc body=42 status=ok
// SIG undefined FUN_147cbdfcc(void)

void FUN_147cbdfcc(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145968600(param_2);
  return;
}



// FUNCTION 147cbe00c FUN_147cbe00c body=76 status=ok
// SIG undefined FUN_147cbe00c(void)

undefined8 FUN_147cbe00c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147cbe14c(param_2,param_3);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 147cbe080 FUN_147cbe080 body=59 status=ok
// SIG undefined FUN_147cbe080(void)

undefined8 FUN_147cbe080(longlong *param_1)

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



// FUNCTION 147cbe0c6 FUN_147cbe0c6 body=55 status=ok
// SIG undefined FUN_147cbe0c6(void)

void FUN_147cbe0c6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_145968600(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147cbe14c FUN_147cbe14c body=122 status=ok
// SIG undefined FUN_147cbe14c(void)

longlong FUN_147cbe14c(longlong param_1,longlong param_2)

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
    FUN_147cbe1c6(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147cbe1c6 FUN_147cbe1c6 body=228 status=ok
// SIG undefined FUN_147cbe1c6(void)

longlong * FUN_147cbe1c6(longlong *param_1,longlong *param_2)

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
    FUN_145968638(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
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
          *(undefined1 *)(lVar4 + 0x10 + lVar5) = *(undefined1 *)(lVar2 + 0x10 + lVar5);
          *(undefined8 *)(lVar4 + 0x18 + lVar5) = *(undefined8 *)(lVar2 + 0x18 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 147cbe2ac FUN_147cbe2ac body=123 status=ok
// SIG undefined FUN_147cbe2ac(void)

void * FUN_147cbe2ac(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0xc0);
    if (*(void **)((longlong)param_2 + 0xc0) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 200);
    *(int *)((longlong)param_1 + 200) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xcc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xcc) = 0x10;
    }
    else {
      FUN_147bd0aca(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0xc0);
        if (*(void **)((longlong)param_1 + 0xc0) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 147cbe327 FUN_147cbe327 body=73 status=ok
// SIG undefined FUN_147cbe327(void)

void FUN_147cbe327(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  
  lVar1 = (longlong)*(int *)(param_1 + 0x8c);
  if (0 < lVar1) {
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0x80) + 3);
    do {
      if ((pbVar2[-2] & pbVar2[-1] & pbVar2[-3] & *pbVar2) != 0xff) {
        return;
      }
      pbVar2 = pbVar2 + *(int *)(param_1 + 0x88);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}



// FUNCTION 147cbe370 FUN_147cbe370 body=130 status=ok
// SIG undefined FUN_147cbe370(void)

void FUN_147cbe370(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 4)) {
        uVar5 = uVar3 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_147cbe3f4(param_1,param_2,uVar5,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cbe3f4 FUN_147cbe3f4 body=133 status=ok
// SIG undefined FUN_147cbe3f4(void)

void FUN_147cbe3f4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 147cbe4b2 FUN_147cbe4b2 body=66 status=ok
// SIG undefined FUN_147cbe4b2(void)

undefined8 * FUN_147cbe4b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa58140;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cbe4f4 FUN_147cbe4f4 body=56 status=ok
// SIG undefined FUN_147cbe4f4(void)

longlong FUN_147cbe4f4(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cbe52c FUN_147cbe52c body=21 status=ok
// SIG undefined FUN_147cbe52c(void)

undefined * FUN_147cbe52c(void)

{
  FUN_147cbe54e();
  return &DAT_14cafda70;
}



// FUNCTION 147cbe54e FUN_147cbe54e body=205 status=ok
// SIG undefined FUN_147cbe54e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cbe54e(void)

{
  if ((DAT_14cafdad7 & 2) != 0) {
    return;
  }
  DAT_14cafdad7 = DAT_14cafdad7 | 2;
  _DAT_14cafda78 = L"TResourceArray";
  _DAT_14cafda90 = FUN_146826540;
  _DAT_14cafda98 = FUN_146825d77;
  _DAT_14cafdaa0 = FUN_146825fd6;
  _DAT_14cafdaa8 = FUN_1407e02ea;
  _DAT_14cafdab0 = FUN_146826273;
  _DAT_14cafda88 = FUN_147cbe61c;
  _DAT_14cafdac8 = 0xffffffff00000020;
  _DAT_14cafdad0 = 8;
  DAT_14cafdad4 = 1;
  _DAT_14cafdab8 = FUN_147cbe648;
  FUN_147cbe65e();
  FUN_147cbe76c();
  FUN_1407e00cc(&DAT_14cafda70);
  return;
}



// FUNCTION 147cbe61c FUN_147cbe61c body=43 status=ok
// SIG undefined FUN_147cbe61c(void)

void FUN_147cbe61c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cbe648 FUN_147cbe648 body=21 status=ok
// SIG undefined FUN_147cbe648(void)

undefined * FUN_147cbe648(void)

{
  FUN_147cbe945();
  return &DAT_14cafdad8;
}



// FUNCTION 147cbe65e FUN_147cbe65e body=270 status=ok
// SIG undefined FUN_147cbe65e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cbe65e(void)

{
  _DAT_14cafdb00 = L"bNeedsCPUAccess";
  DAT_14cafdb2a = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cafdb08 = &DAT_14c9cfcf0;
  _DAT_14cafdb18 = &LAB_14682652b;
  _DAT_14cafdb20 = &DAT_100000018;
  _DAT_14cafdb28 = 0;
  _DAT_14cafdb10 = DAT_14cafda80;
  DAT_14cafda80 = &DAT_14cafdb00;
  return;
}



// FUNCTION 147cbe76c FUN_147cbe76c body=473 status=ok
// SIG undefined FUN_147cbe76c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cbe76c(void)

{
  _DAT_14cafdb30 = L"BASE";
  DAT_14cafdb5a = 4;
  if ((DAT_14cafdbc7 & 2) == 0) {
    DAT_14cafdbc7 = DAT_14cafdbc7 | 3;
    _DAT_14cafdb68 = L"(TArray<T, AllocatorType>)";
    _DAT_14cafdb80 = FUN_147cbe9c0;
    _DAT_14cafdb88 = &LAB_147cbea20;
    _DAT_14cafdb90 = &LAB_147cbea2e;
    _DAT_14cafdb98 = &LAB_147cbea3c;
    _DAT_14cafdba0 = &DAT_147cbea4a;
    _DAT_14cafdb78 = FUN_147cbea4c;
    _DAT_14cafdbb8 = 0x1000000010;
    _DAT_14cafdbc0 = 8;
    DAT_14cafdbc4 = '\0';
  }
  else if (DAT_14cafdbc4 != '\0') {
    DAT_14cafdad6 = DAT_14cafdad6 + '\x01';
  }
  _DAT_14cafdb40 = DAT_14cafda80;
  _DAT_14cafdb50 = &DAT_100000008;
  _DAT_14cafdb48 = &LAB_14682652b;
  _DAT_14cafdb38 = &DAT_14cafdb60;
  DAT_14cafdad5 = DAT_14cafdad5 + '\x01';
  DAT_14cafda80 = &DAT_14cafdb30;
  _DAT_14cafdbc8 = L"BASE";
  DAT_14cafdbf2 = 4;
  _DAT_14cafdbd0 = FUN_146268212();
  _DAT_14cafdbd8 = DAT_14cafda80;
  _DAT_14cafdbe0 = &LAB_14682652b;
  DAT_14cafda80 = &DAT_14cafdbc8;
  DAT_14cafdad5 = DAT_14cafdad5 + '\x01';
  _DAT_14cafdbe8 = 0x100000000;
  if (*(char *)(_DAT_14cafdbd0 + 100) != '\0') {
    DAT_14cafdad6 = DAT_14cafdad6 + '\x01';
  }
  return;
}



// FUNCTION 147cbe945 FUN_147cbe945 body=122 status=ok
// SIG undefined FUN_147cbe945(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cbe945(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafdaf8) {
    FUN_144b3d300(&DAT_14cafdaf8);
    if (DAT_14cafdaf8 == -1) {
      DAT_14cafdae0 = 0;
      uRam000000014cafdae8 = 0;
      _DAT_14cafdad8 = &PTR_FUN_14aa581a0;
      DAT_14cafdaf0 = 0;
      atexit((_func_5014 *)&LAB_14365f956);
      _Init_thread_footer(&DAT_14cafdaf8);
      return;
    }
  }
  return;
}



// FUNCTION 147cbe9c0 FUN_147cbe9c0 body=95 status=ok
// SIG undefined FUN_147cbe9c0(void)

void FUN_147cbe9c0(void)

{
  undefined1 auStack_48 [32];
  ulonglong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_146826a6c(0,local_28,0x10);
  if (local_28[0] != 0 && (local_28[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cbea4c FUN_147cbea4c body=51 status=ok
// SIG undefined FUN_147cbea4c(void)

void FUN_147cbea4c(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cbea80 FUN_147cbea80 body=147 status=ok
// SIG undefined FUN_147cbea80(void)

void FUN_147cbea80(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cbeb14 FUN_147cbeb14 body=62 status=ok
// SIG undefined FUN_147cbeb14(void)

void FUN_147cbeb14(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147cbeb52(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 147cbeb52 FUN_147cbeb52 body=112 status=ok
// SIG undefined FUN_147cbeb52(void)

ulonglong FUN_147cbeb52(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147cbeb8c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_147cbeb8c:
  return param_2 & 0xffffffff;
}



// FUNCTION 147cbebc2 FUN_147cbebc2 body=70 status=ok
// SIG undefined FUN_147cbebc2(void)

longlong FUN_147cbebc2(ulonglong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147cbea80(param_1,iVar1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  return uVar3 + (longlong)iVar1 * 0xc;
}



// FUNCTION 147cbec08 FUN_147cbec08 body=43 status=ok
// SIG undefined FUN_147cbec08(void)

void FUN_147cbec08(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 147cbec34 FUN_147cbec34 body=146 status=ok
// SIG undefined FUN_147cbec34(void)

void FUN_147cbec34(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cbecc8 FUN_147cbecc8 body=377 status=ok
// SIG undefined FUN_147cbecc8(void)

longlong * FUN_147cbecc8(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147cbee82(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x33333 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147cab68b(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x50;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147cbee82(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147cbee42(param_2);
        FUN_147cab68b(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147cbee42 FUN_147cbee42 body=63 status=ok
// SIG undefined FUN_147cbee42(void)

longlong FUN_147cbee42(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147cbef14(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_147cbeef2(lVar2);
  return lVar2;
}



// FUNCTION 147cbee82 FUN_147cbee82 body=112 status=ok
// SIG undefined FUN_147cbee82(void)

void FUN_147cbee82(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,0x10);
  }
  return;
}



// FUNCTION 147cbeef2 FUN_147cbeef2 body=33 status=ok
// SIG undefined FUN_147cbeef2(void)

void FUN_147cbeef2(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0x3f800000ff7f7fff;
  return;
}



// FUNCTION 147cbef14 FUN_147cbef14 body=147 status=ok
// SIG undefined FUN_147cbef14(void)

void FUN_147cbef14(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cbefa8 FUN_147cbefa8 body=80 status=ok
// SIG undefined FUN_147cbefa8(void)

longlong * FUN_147cbefa8(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_147cbec08(*param_1,(int)param_1[1]);
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



// FUNCTION 147cbeff8 FUN_147cbeff8 body=38 status=ok
// SIG undefined FUN_147cbeff8(void)

undefined8 FUN_147cbeff8(undefined8 param_1,int param_2)

{
  FUN_141211852();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cbf048 FUN_147cbf048 body=138 status=ok
// SIG undefined FUN_147cbf048(void)

code * FUN_147cbf048(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SubLevelBrickPositions";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001a6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0cc70;
}



// FUNCTION 147cbf0d6 FUN_147cbf0d6 body=138 status=ok
// SIG undefined FUN_147cbf0d6(void)

code * FUN_147cbf0d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutSkyBentNormal";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000001be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cbf160;
}



// FUNCTION 147cbf160 FUN_147cbf160 body=138 status=ok
// SIG undefined FUN_147cbf160(void)

code * FUN_147cbf160(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutAmbientVector";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000001bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cbf1ea;
}



// FUNCTION 147cbf1ea FUN_147cbf1ea body=138 status=ok
// SIG undefined FUN_147cbf1ea(void)

code * FUN_147cbf1ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightShadowing";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000001bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f380bc;
}



// FUNCTION 147cbf274 FUN_147cbf274 body=132 status=ok
// SIG undefined FUN_147cbf274(void)

undefined1 * FUN_147cbf274(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"StartPosInOldVolume";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147cbf2f8;
}



// FUNCTION 147cbf2fc FUN_147cbf2fc body=138 status=ok
// SIG undefined FUN_147cbf2fc(void)

code * FUN_147cbf2fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"StartPosInNewVolume";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000001cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e63238;
}



// FUNCTION 147cbf386 FUN_147cbf386 body=138 status=ok
// SIG undefined FUN_147cbf386(void)

code * FUN_147cbf386(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"StartPosInNewVolume";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000001db;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e637a2;
}



// FUNCTION 147cbf410 FUN_147cbf410 body=138 status=ok
// SIG undefined FUN_147cbf410(void)

code * FUN_147cbf410(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"StartPosInOldVolume";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000001ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463fbedc;
}



// FUNCTION 147cbf49a FUN_147cbf49a body=97 status=ok
// SIG undefined FUN_147cbf49a(void)

longlong FUN_147cbf49a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147cae658();
  lVar1 = 0x38;
  do {
    FUN_147cae658(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x38;
  } while (lVar1 != 0x188);
  FUN_147cae658(param_1 + 0x188,param_2 + 0x188);
  FUN_147cae658(param_1 + 0x1c0,param_2 + 0x1c0);
  return param_1;
}



// FUNCTION 147cbf4fc FUN_147cbf4fc body=97 status=ok
// SIG undefined FUN_147cbf4fc(void)

longlong FUN_147cbf4fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147cae6f6();
  lVar1 = 0x38;
  do {
    FUN_147cae6f6(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x38;
  } while (lVar1 != 0x188);
  FUN_147cae6f6(param_1 + 0x188,param_2 + 0x188);
  FUN_147cae6f6(param_1 + 0x1c0,param_2 + 0x1c0);
  return param_1;
}



// FUNCTION 147cbf55e FUN_147cbf55e body=52 status=ok
// SIG undefined FUN_147cbf55e(void)

void FUN_147cbf55e(longlong *param_1)

{
  FUN_147cbf592();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147cbf592 FUN_147cbf592 body=89 status=ok
// SIG undefined FUN_147cbf592(void)

void FUN_147cbf592(longlong param_1)

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



// FUNCTION 147cbf5ec FUN_147cbf5ec body=62 status=ok
// SIG undefined FUN_147cbf5ec(void)

void FUN_147cbf5ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1400);
  if (*(longlong *)(param_1 + 0x1400) == 0) {
    lVar1 = param_1;
  }
  FUN_147cbf6d1(lVar1,*(undefined4 *)(param_1 + 0x1408));
  if (*(longlong *)(param_1 + 0x1400) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147cbf62a FUN_147cbf62a body=59 status=ok
// SIG undefined FUN_147cbf62a(void)

void FUN_147cbf62a(longlong param_1)

{
  FUN_147cbf666();
  if (*(longlong *)(param_1 + 0x418) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147cbf666 FUN_147cbf666 body=107 status=ok
// SIG undefined FUN_147cbf666(void)

void FUN_147cbf666(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x408) = 0;
  if (*(int *)(param_1 + 0x40c) != 0) {
    FUN_140b3d13e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x428) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x420) = 0;
  if (0x20 < *(uint *)(param_1 + 0x424)) {
    *(undefined4 *)(param_1 + 0x424) = 0x20;
    FUN_14008f53c(param_1 + 0x410,0);
    return;
  }
  return;
}



// FUNCTION 147cbf6d1 FUN_147cbf6d1 body=49 status=ok
// SIG undefined FUN_147cbf6d1(void)

void FUN_147cbf6d1(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(char *)(param_1 + 3) == '\x01') {
      FUN_1400020a8(*param_1);
    }
    param_1 = param_1 + 0x14;
  }
  return;
}



// FUNCTION 147cbf702 FUN_147cbf702 body=98 status=ok
// SIG undefined FUN_147cbf702(void)

void FUN_147cbf702(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147cbf7c0 FUN_147cbf7c0 body=54 status=ok
// SIG undefined FUN_147cbf7c0(void)

undefined1 FUN_147cbf7c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147cbf8d8(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147cbf81e FUN_147cbf81e body=59 status=ok
// SIG undefined FUN_147cbf81e(void)

undefined8 FUN_147cbf81e(longlong *param_1)

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


