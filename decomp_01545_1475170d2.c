// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1475170d2 FUN_1475170d2 body=549 status=ok
// SIG undefined FUN_1475170d2(void)

undefined8 FUN_1475170d2(longlong *param_1)

{
  double dVar1;
  BOOL BVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  undefined4 extraout_var_00;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_58);
  dVar1 = (double)local_58.s.HighPart / (double)(int)local_58.s.LowPart;
  BVar2 = QueryPerformanceCounter(&local_58);
  dVar8 = (double)CONCAT44(local_58.s.HighPart,local_58.s.LowPart) * DAT_14c83f420 + 16777216.0;
  dVar6 = dVar8 - DAT_14c846540;
  if (dVar6 < 0.0) {
    dVar6 = dVar8 - dVar8;
    DAT_14c846540 = dVar8;
    DAT_14c866ff8 = dVar8;
  }
  dVar8 = DAT_14c846540;
  dVar9 = dVar1 - dVar6;
  param_1[9] = (longlong)dVar9;
  uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,BVar2) >> 8),(char)param_1[7]);
  if (0.0 < dVar9 && (char)param_1[7] == '\x01') {
    if (0.004999999888241291 < dVar9) {
      FUN_14279b9b6((float)dVar9 + -0.002);
      dVar8 = DAT_14c846540;
    }
    dVar8 = dVar8 + dVar1;
    QueryPerformanceCounter(&local_58);
    if ((double)CONCAT44(local_58.s.HighPart,local_58.s.LowPart) * DAT_14c83f420 + 16777216.0 <
        dVar8) {
      do {
        FUN_14279b9b6(0);
        QueryPerformanceCounter(&local_58);
      } while ((double)CONCAT44(local_58.s.HighPart,local_58.s.LowPart) * DAT_14c83f420 + 16777216.0
               < dVar8);
    }
    BVar2 = QueryPerformanceCounter(&local_58);
    dVar6 = (double)CONCAT44(local_58.s.HighPart,local_58.s.LowPart) * DAT_14c83f420 + 16777216.0;
    DAT_14c846550 = dVar6 - dVar8;
    dVar6 = dVar6 - DAT_14c846540;
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var_00,BVar2) >> 8),(char)param_1[7]);
    dVar8 = DAT_14c846540;
  }
  auVar7._0_8_ = (dVar6 + 0.0001) / dVar1;
  auVar7._8_8_ = 0;
  auVar7 = roundpd(auVar7,auVar7,1);
  dVar6 = auVar7._0_8_;
  if (4294967295.0 <= dVar6) {
    dVar6 = 4294967295.0;
  }
  uVar4 = (ulonglong)dVar6;
  uVar5 = 1;
  if ((int)uVar4 != 0) {
    uVar5 = uVar4 & 0xffffffff;
  }
  if ((uVar3 & 1) != 0) {
    uVar5 = uVar4 & 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x39) != '\0') {
    uVar5 = 1;
  }
  *(int *)((longlong)param_1 + 0x3c) = (int)uVar5;
  param_1[8] = (longlong)((double)uVar5 * dVar1 + dVar8);
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147517302 FUN_147517302 body=405 status=ok
// SIG undefined FUN_147517302(void)

int * FUN_147517302(undefined8 param_1,int *param_2,int *param_3,longlong *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_4 + 0x2d0))(param_4,&local_48);
  if (1e-08 < ABS((double)param_3[2] / (double)param_3[3])) {
    dVar5 = ((double)local_48 / (double)local_44) / ((double)param_3[2] / (double)param_3[3]);
    dVar4 = (double)FUN_14047fbb4(dVar5);
    if ((ABS(dVar4 - dVar5) <= 0.01) && (1e-08 < ABS(dVar4))) {
      uVar2 = (**(code **)(*param_4 + 0x2d8))(param_4);
      dVar4 = (double)(float)param_3[1] + (double)*param_3 + (double)uVar2 * (1.0 / dVar4);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar4;
      auVar6 = roundpd(auVar6,auVar6,1);
      dVar5 = auVar6._0_8_;
      dVar4 = dVar4 - dVar5;
      if (2147483647.0 <= dVar5) {
        dVar5 = 2147483647.0;
      }
      if (dVar5 <= -2147483648.0) {
        dVar5 = -2147483648.0;
      }
      fVar3 = (float)dVar4;
      if (0.99999994 <= fVar3) {
        fVar3 = 0.99999994;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      fVar3 = fVar3 + 0.5 + -0.5;
      if (0.99999994 <= fVar3) {
        fVar3 = 0.99999994;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      *param_2 = (int)dVar5;
      param_2[1] = (int)fVar3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      goto LAB_14751746c;
    }
  }
  uVar1 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)(param_2 + 2) = uVar1;
LAB_14751746c:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147517498 FUN_147517498 body=794 status=ok
// SIG undefined FUN_147517498(void)

void FUN_147517498(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [40];
  int local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  puStack_48 = &DAT_100000018;
  cVar4 = (**(code **)(*param_1 + 0x2a0))();
  if (cVar4 != '\0') {
    uVar1 = *(undefined8 *)((longlong)param_1 + 0x44);
    lVar6 = *(longlong *)((longlong)param_1 + 0x4c);
    *(undefined8 *)((longlong)param_1 + 0x44) = local_50;
    *(undefined1 **)((longlong)param_1 + 0x4c) = puStack_48;
    if (0.001 < ABS(((float)((lVar6 >> 0x20) * (longlong)(int)uVar1) +
                    (float)(int)((ulonglong)lVar6 >> 0x20) * (float)((ulonglong)uVar1 >> 0x20)) /
                    (float)(int)lVar6 -
                    ((float)(((longlong)puStack_48 >> 0x20) * (longlong)(int)local_50) +
                    (float)(int)((ulonglong)puStack_48 >> 0x20) *
                    (float)((ulonglong)local_50 >> 0x20)) / (float)(int)puStack_48)) {
      *(undefined8 *)((longlong)param_1 + 0x34) = local_50;
      *(undefined1 **)((longlong)param_1 + 0x3c) = puStack_48;
      bVar3 = true;
      goto LAB_1475175a1;
    }
  }
  bVar3 = false;
LAB_1475175a1:
  if ((((char)param_1[6] == '\x01') && (DAT_14cb0d2b0 != 0)) &&
     (plVar2 = *(longlong **)(DAT_14cb0d2b0 + 0xc60), plVar2 != (longlong *)0x0)) {
    lVar6 = FUN_1459e3d68();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      cVar4 = (**(code **)(*plVar2 + 0x2e0))(plVar2);
      if (cVar4 != '\0') {
        iVar5 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
        if (iVar5 != 1) {
          if (!bVar3) {
            (**(code **)(*param_1 + 0x2e8))(param_1,&local_60,(longlong)param_1 + 0x34,plVar2);
            *(ulonglong *)((longlong)param_1 + 0x34) = CONCAT44(iStack_5c,local_60);
            *(undefined8 *)((longlong)param_1 + 0x3c) = uStack_58;
          }
          (**(code **)(*plVar2 + 0x2c0))(plVar2,&local_60);
          if (0.01 < ABS((double)*(int *)((longlong)param_1 + 0x3c) / (double)(int)param_1[8] -
                         (double)local_60 / (double)iStack_5c)) {
            (**(code **)(*plVar2 + 0x2c0))(plVar2,&local_60);
            dVar8 = (double)*(int *)((longlong)param_1 + 0x3c) / (double)(int)param_1[8];
            if (1e-08 < ABS(dVar8)) {
              dVar8 = ((double)local_60 / (double)iStack_5c) / dVar8;
              dVar9 = (double)FUN_14047fbb4(dVar8);
              if (ABS(dVar9 - dVar8) <= 0.01) {
                *(int *)((longlong)param_1 + 0x3c) =
                     (int)((double)*(int *)((longlong)param_1 + 0x3c) * dVar9);
                dVar9 = ((double)*(float *)(param_1 + 7) +
                        (double)*(int *)((longlong)param_1 + 0x34)) * dVar9;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = dVar9;
                auVar10 = roundpd(auVar10,auVar10,1);
                dVar8 = auVar10._0_8_;
                dVar9 = dVar9 - dVar8;
                if (2147483647.0 <= dVar8) {
                  dVar8 = 2147483647.0;
                }
                if (dVar8 <= -2147483648.0) {
                  dVar8 = -2147483648.0;
                }
                fVar7 = (float)dVar9;
                if (0.99999994 <= fVar7) {
                  fVar7 = 0.99999994;
                }
                if (fVar7 <= 0.0) {
                  fVar7 = 0.0;
                }
                fVar7 = fVar7 + 0.5 + -0.5;
                if (0.99999994 <= fVar7) {
                  fVar7 = 0.99999994;
                }
                if (fVar7 <= 0.0) {
                  fVar7 = 0.0;
                }
                *(int *)((longlong)param_1 + 0x34) = (int)dVar8;
                *(float *)(param_1 + 7) = fVar7;
              }
            }
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475177c0 FUN_1475177c0 body=153 status=ok
// SIG undefined FUN_1475177c0(void)

double FUN_1475177c0(double param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  undefined1 auVar3 [16];
  float fVar4;
  double dVar5;
  float fVar6;
  
  dVar5 = ((double)(int)param_2 * param_1) / (double)(int)((ulonglong)param_2 >> 0x20);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar5;
  auVar3 = roundpd(auVar3,auVar3,1);
  dVar2 = auVar3._0_8_;
  dVar5 = dVar5 - dVar2;
  if (2147483647.0 <= dVar2) {
    dVar2 = 2147483647.0;
  }
  if (dVar2 <= -2147483648.0) {
    dVar2 = -2147483648.0;
  }
  iVar1 = (int)dVar5;
  fVar4 = (float)dVar5 - (float)iVar1;
  fVar6 = fVar4;
  if (0.99999994 <= fVar4) {
    fVar6 = 0.99999994;
  }
  fVar6 = (float)(~-(uint)(0.0 < fVar4) & (uint)fVar4 | (uint)fVar6 & -(uint)(0.0 < fVar4)) + 0.5 +
          -0.5;
  if (0.99999994 <= fVar6) {
    fVar6 = 0.99999994;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  return (double)fVar6 + (double)((int)dVar2 + iVar1);
}



// FUNCTION 14751785a FUN_14751785a body=138 status=ok
// SIG undefined FUN_14751785a(void)

double FUN_14751785a(double param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1;
  auVar3 = roundpd(auVar3,auVar3,1);
  dVar2 = auVar3._0_8_;
  param_1 = param_1 - dVar2;
  if (2147483647.0 <= dVar2) {
    dVar2 = 2147483647.0;
  }
  if (dVar2 <= -2147483648.0) {
    dVar2 = -2147483648.0;
  }
  fVar1 = (float)param_1;
  if (0.99999994 <= (float)param_1) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + 0.5 + -0.5;
  if (0.99999994 <= fVar1) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return ((double)((param_2 >> 0x20) * (longlong)(int)dVar2) +
         (double)(int)((ulonglong)param_2 >> 0x20) * (double)fVar1) / (double)(int)param_2;
}



// FUNCTION 1475178e4 FUN_1475178e4 body=222 status=ok
// SIG undefined FUN_1475178e4(void)

void FUN_1475178e4(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_1c + local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475179c4 FUN_1475179c4 body=222 status=ok
// SIG undefined FUN_1475179c4(void)

void FUN_1475179c4(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_1c + local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147517aa4 FUN_147517aa4 body=164 status=ok
// SIG undefined FUN_147517aa4(void)

void FUN_147517aa4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  puVar1 = &local_1c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *puVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147517b4a FUN_147517b4a body=181 status=ok
// SIG undefined FUN_147517b4a(void)

void FUN_147517b4a(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0x10000ea60;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (float)(int)((ulonglong)local_20 >> 0x20) / (float)(int)local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147517c00 FUN_147517c00 body=191 status=ok
// SIG undefined FUN_147517c00(void)

void FUN_147517c00(undefined8 param_1,longlong param_2,float *param_3)

{
  int *piVar1;
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20[0] = 60000;
  local_20[1] = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  piVar1 = local_20;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar1 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (float)*piVar1 / (float)piVar1[1];
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147517cc0 FUN_147517cc0 body=250 status=ok
// SIG undefined FUN_147517cc0(void)

void FUN_147517cc0(undefined8 param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *puStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  puStack_20 = &DAT_100000018;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = puVar2[1];
  *param_3 = ((float)((lVar1 >> 0x20) * (longlong)(int)*puVar2) +
             (float)(int)((ulonglong)lVar1 >> 0x20) * (float)((ulonglong)*puVar2 >> 0x20)) /
             (float)(int)lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147517dc2 FUN_147517dc2 body=323 status=ok
// SIG undefined FUN_147517dc2(void)

void FUN_147517dc2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  undefined8 local_38;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  uStack_2b = 0;
  uStack_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_14029881c(puVar1,&local_50,local_3c != 0,0);
  if (&local_50 == param_3) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_50;
    *(undefined4 *)(param_3 + 1) = local_48;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_44;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147517f06 FUN_147517f06 body=223 status=ok
// SIG undefined FUN_147517f06(void)

void FUN_147517f06(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_1c / local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48,
                (longlong)local_1c % (longlong)local_20 & 0xffffffff);
}



// FUNCTION 147517fe6 FUN_147517fe6 body=96 status=ok
// SIG undefined FUN_147517fe6(void)

void FUN_147517fe6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1468001f0(&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147518048 FUN_147518048 body=88 status=ok
// SIG undefined FUN_147518048(void)

void FUN_147518048(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1468002e8(&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475180a8 FUN_1475180a8 body=174 status=ok
// SIG undefined FUN_1475180a8(void)

void FUN_1475180a8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(bool *)param_3 = 0 < *(int *)((longlong)puVar1 + 4);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14751815e FUN_14751815e body=349 status=ok
// SIG undefined FUN_14751815e(void)

void FUN_14751815e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 60000;
  local_48[1] = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  piVar5 = piVar1;
  if (piVar1 == (int *)0x0) {
    piVar5 = local_48;
  }
  local_50 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  plVar4 = &local_50;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = (*plVar4 >> 0x20) * (longlong)*piVar5;
  piVar5 = local_48;
  if (piVar1 != (int *)0x0) {
    piVar5 = piVar1;
  }
  lVar2 = (longlong)piVar5[1] * (longlong)(int)*plVar4;
  *(bool *)param_3 = (lVar3 - lVar2 == 0 || lVar3 < lVar2) && lVar2 % lVar3 == 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475182bc FUN_1475182bc body=223 status=ok
// SIG undefined FUN_1475182bc(void)

void FUN_1475182bc(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_1c * local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14751839c FUN_14751839c body=404 status=ok
// SIG undefined FUN_14751839c(void)

void FUN_14751839c(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  undefined1 auStack_48 [36];
  int local_24 [2];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_24[0] = 60000;
  local_24[1] = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  piVar2 = local_24;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar2 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar6 = ((double)*piVar2 * (double)local_1c) / (double)piVar2[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar6;
  auVar5 = roundpd(auVar5,auVar5,1);
  dVar4 = auVar5._0_8_;
  dVar6 = dVar6 - dVar4;
  if (2147483647.0 <= dVar4) {
    dVar4 = 2147483647.0;
  }
  if (dVar4 <= -2147483648.0) {
    dVar4 = -2147483648.0;
  }
  iVar1 = (int)dVar6;
  fVar3 = (float)dVar6 - (float)iVar1;
  fVar7 = fVar3;
  if (0.99999994 <= fVar3) {
    fVar7 = 0.99999994;
  }
  fVar7 = (float)(~-(uint)(0.0 < fVar3) & (uint)fVar3 | (uint)fVar7 & -(uint)(0.0 < fVar3)) + 0.5 +
          -0.5;
  if (0.99999994 <= fVar7) {
    fVar7 = 0.99999994;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *param_3 = (int)dVar4 + iVar1;
  param_3[1] = (int)fVar7;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147518532 FUN_147518532 body=454 status=ok
// SIG undefined FUN_147518532(void)

void FUN_147518532(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_50 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_58 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar3 = &local_50;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = puVar4;
  }
  puVar4 = &local_48;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = puVar5;
  }
  puVar5 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *puVar5;
  uVar2 = *puVar3;
  FUN_144a808d5(&local_40,*puVar4,uVar2,uVar1);
  FUN_144a808d5(&local_60,(uint)(0.5 <= local_3c) + local_40,uVar1,uVar2);
  *param_3 = local_60;
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475186fa FUN_1475186fa body=222 status=ok
// SIG undefined FUN_1475186fa(void)

void FUN_1475186fa(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_1c - local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475187da FUN_1475187da body=222 status=ok
// SIG undefined FUN_1475187da(void)

void FUN_1475187da(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_1c - local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475188ba FUN_1475188ba body=408 status=ok
// SIG undefined FUN_1475188ba(void)

void FUN_1475188ba(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_48 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_50 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar1 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_40;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a808d5(&local_58,*puVar2,*puVar1,*puVar3);
  *param_3 = local_58;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147518a60 FUN_147518a60 body=1471 status=ok
// SIG undefined FUN_147518a60(void)

void FUN_147518a60(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_6e8 [32];
  undefined1 *local_6c8;
  undefined1 local_6b9;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined1 uStack_6a4;
  undefined8 local_6a0;
  undefined4 local_698;
  undefined1 local_688 [96];
  undefined1 local_628;
  undefined8 local_620;
  undefined4 local_618;
  undefined2 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined2 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  longlong local_5d8;
  code *local_5d0;
  longlong *local_5c8;
  code *local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  code *local_5a8;
  undefined8 local_5a0;
  wchar_t *local_598;
  undefined4 local_590;
  longlong *local_3f0;
  undefined1 local_190 [320];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_6e8;
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x1b0);
  FUN_14751cbda(param_1 + 0x278,param_2 + 0x1b8);
  FUN_14751cc5e(param_1 + 0x288,param_2 + 0x1c8);
  *(undefined2 *)(param_1 + 0x298) = *(undefined2 *)(param_2 + 0x1d8);
  FUN_14096c7c0(param_1 + 0x2a0,param_2 + 0x1e0);
  local_598 = L"ToolTip";
  local_590 = 7;
  FUN_1446e940c(&local_5c0,&local_598);
  local_598 = L"SFrameRateEntryBox";
  local_590 = 0x12;
  FUN_1446e940c(&local_5a8,&local_598);
  FUN_140208bae(&local_598,&local_5a8,&local_5c0,
                L"Enter a custom framerate in any of the following formats:\n\n64fps\n0.001s\n120000/1001 (e.g. for NTSC 120)"
               );
  FUN_14697e8c0(param_1,&local_598);
  if (local_598 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_598 + 0x10))();
  }
  FUN_147519020(&local_598);
  FUN_14751d65e(&local_5c0,&local_5d0);
  FUN_147519042(&local_5c0,&local_5a8,&local_598);
  plVar3 = local_5a0;
  pcVar4 = local_5a8 + 0x268;
  if (local_5a8 == (code *)0x0) {
    pcVar4 = (code *)0x0;
  }
  if (local_5a0 == (longlong *)0x0) {
    *(code **)(param_1 + 0x2b0) = pcVar4;
    plVar6 = *(longlong **)(param_1 + 0x2b8);
    if (plVar6 == (longlong *)0x0) goto LAB_147518bef;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
LAB_147518fe4:
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147518bef;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_5a0 + 1) = (int)local_5a0[1] + 1;
    UNLOCK();
    *(code **)(param_1 + 0x2b0) = pcVar4;
    plVar6 = *(longlong **)(param_1 + 0x2b8);
    if (local_5a0 != plVar6) {
      *(longlong **)(param_1 + 0x2b8) = local_5a0;
      if (plVar6 == (longlong *)0x0) goto LAB_147518bef;
      goto LAB_147518fe4;
    }
    LOCK();
    plVar6 = local_5a0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_147518bef;
    (**(code **)*local_5a0)(local_5a0);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar3;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_147518bef:
  plVar3 = local_5a0;
  if (local_5a0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_5a0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_5a0)(local_5a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_5b4,local_5b8);
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
  if (local_3f0 != (longlong *)0x0) {
    (**(code **)(*local_3f0 + 0x10))();
  }
  FUN_140a4ff8c(&local_598);
  FUN_146a10de6(&local_598);
  local_5c0 = FUN_14751918e;
  local_5b8 = 0;
  FUN_1475190b6(&local_598,param_1);
  local_5a8 = FUN_147519430;
  local_5a0 = (longlong *)((ulonglong)local_5a0._4_4_ << 0x20);
  FUN_14751de78(&local_5c0,param_1);
  FUN_144a450dc(local_190,&local_5c0);
  FUN_1449db362(&local_5c0);
  local_5e0 = *(undefined8 *)(param_1 + 0x2b0);
  local_5d8 = *(longlong *)(param_1 + 0x2b8);
  if (local_5d8 != 0) {
    LOCK();
    *(int *)(local_5d8 + 8) = *(int *)(local_5d8 + 8) + 1;
    UNLOCK();
  }
  lVar5 = FUN_146a87170(&local_598,&local_5e0);
  local_5f8 = 0x100;
  local_5f0 = 0;
  uStack_5e8 = 0;
  *(undefined2 *)(lVar5 + 0x390) = 0x100;
  FUN_144a450dc(lVar5 + 0x398,&local_5f0);
  FUN_1449db362(&local_5f0);
  local_610 = 0x101;
  local_608 = 0;
  uStack_600 = 0;
  *(undefined2 *)(lVar5 + 0x360) = 0x101;
  FUN_144a450dc(lVar5 + 0x368,&local_608);
  FUN_1449db362(&local_608);
  *(undefined8 *)(lVar5 + 0x1a8) = *(undefined8 *)(param_2 + 0x1f0);
  FUN_144a87366(local_688,param_2 + 0x1f8);
  local_628 = *(undefined1 *)(param_2 + 600);
  local_620 = 0;
  local_618 = 0;
  FUN_140a5d470(&local_620,param_2 + 0x260);
  FUN_1412cc59c(lVar5 + 0x228,local_688);
  *(undefined1 *)(lVar5 + 0x288) = local_628;
  FUN_144a450dc(lVar5 + 0x290,&local_620);
  FUN_141515cba(local_688);
  uStack_6a8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x27d) >> 0x18);
  uStack_6a4 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x27d) >> 0x38);
  local_6b8 = *(undefined4 *)(param_2 + 0x270);
  uStack_6b4 = *(undefined4 *)(param_2 + 0x274);
  uStack_6b0 = *(undefined4 *)(param_2 + 0x278);
  uStack_6ac = *(undefined4 *)(param_2 + 0x27c);
  local_6a0 = 0;
  local_698 = 0;
  FUN_140a5aaa0(&local_6a0,param_2 + 0x288);
  *(undefined4 *)(lVar5 + 0x2b0) = uStack_6a8;
  *(undefined4 *)(lVar5 + 0x2a0) = local_6b8;
  *(undefined4 *)(lVar5 + 0x2a4) = uStack_6b4;
  *(undefined4 *)(lVar5 + 0x2a8) = uStack_6b0;
  *(undefined4 *)(lVar5 + 0x2ac) = uStack_6ac;
  *(undefined1 *)(lVar5 + 0x2b4) = uStack_6a4;
  FUN_144a450dc(lVar5 + 0x2b8,&local_6a0);
  FUN_1449db362(&local_6a0);
  local_6c8 = &local_6b9;
  FUN_146a400a4(&local_5c0,"SEditableTextBox",
                ".\\Runtime/TimeManagement/Private/Widgets/SFrameRateEntryBox.cpp",0x19);
  FUN_146a1115e(&local_5c0,&local_5d0,lVar5);
  local_5a8 = local_5d0;
  local_5a0 = local_5c8;
  if (local_5c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5c8 + 1) = (int)local_5c8[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_5a8);
  plVar3 = local_5a0;
  if (local_5a0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_5a0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_5a0)(local_5a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_5c8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_5c8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_5c8)(local_5c8);
      LOCK();
      piVar1 = (int *)((longlong)local_5c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5c8 + 0x10))(local_5c8);
      }
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_5b4,local_5b8);
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
  FUN_146a111d2(&local_598);
  if ((local_50 ^ (ulonglong)auStack_6e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147519020 FUN_147519020 body=34 status=ok
// SIG undefined FUN_147519020(void)

longlong FUN_147519020(longlong param_1)

{
  FUN_140a5071c();
  FUN_144a5dc74(param_1 + 0x1a8);
  return param_1;
}



// FUNCTION 147519042 FUN_147519042 body=115 status=ok
// SIG undefined FUN_147519042(void)

longlong * FUN_147519042(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146aa4102(*param_1,param_3);
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



// FUNCTION 1475190b6 FUN_1475190b6 body=215 status=ok
// SIG undefined FUN_1475190b6(void)

longlong FUN_1475190b6(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_14751d996(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1b0,&local_50);
  *(undefined1 *)(param_1 + 0x1c0) = local_40;
  FUN_144a450dc(param_1 + 0x1c8,&local_38);
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



// FUNCTION 14751918e FUN_14751918e body=673 status=ok
// SIG undefined FUN_14751918e(void)

undefined8 FUN_14751918e(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  longlong *local_100;
  undefined4 local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
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
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1475195a2(param_1 + 0x268);
  local_e0 = *(undefined8 *)(param_1 + 0x268);
  FUN_146811d30(&local_e0,&local_f0);
  lVar3 = (longlong)(int)local_e0;
  lVar4 = (longlong)local_e0._4_4_;
  dVar5 = (double)(int)local_e0 / (double)local_e0._4_4_;
  auVar6._0_8_ = dVar5 + 0.5;
  auVar6._8_8_ = 0;
  auVar6 = roundpd(auVar6,auVar6,1);
  if ((auVar6._0_8_ != dVar5) || (NAN(auVar6._0_8_) || NAN(dVar5))) {
    local_100 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      (**(code **)(*local_f0 + 8))();
    }
    local_f8 = local_e8;
    local_a8 = L"ValueTextFormat";
    local_a0[0] = 0xf;
    FUN_1446e940c(local_124,&local_a8);
    local_a8 = L"SFrameRateEntryBox";
    local_a0[0] = 0x12;
    FUN_1446e940c(local_128,&local_a8);
    FUN_140208bae(local_120,local_128,local_124,L"{0} [{1}/{2} fps]");
    FUN_14023409e(&local_110,local_120,1);
    local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
    FUN_14023423e(local_98,&local_100);
    local_88 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_58 = 0;
    local_50 = 0;
    local_c0 = &local_48;
    local_c8 = &local_a8;
    local_80 = lVar3;
    local_60 = lVar4;
    FUN_14010d304(&local_b8);
    local_d8 = local_110;
    local_d0 = local_108;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_2,&local_d8,&local_b8);
    FUN_14007f2db(local_b8,local_b0);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x50;
    do {
      plVar2 = *(longlong **)((longlong)local_a0 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_a0 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_a0 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_108 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_108 + 0x10))(local_108);
        }
      }
    }
    if (local_100 != (longlong *)0x0) {
      (**(code **)(*local_100 + 0x10))();
    }
    if (local_120[0] != (longlong *)0x0) {
      (**(code **)(*local_120[0] + 0x10))();
    }
  }
  else {
    FUN_14023423e(param_2,&local_f0);
  }
  if (local_f0 != (longlong *)0x0) {
    (**(code **)(*local_f0 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147519430 FUN_147519430 body=369 status=ok
// SIG undefined FUN_147519430(void)

void FUN_147519430(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38 [2];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 1) goto LAB_147519518;
  puVar2 = (undefined8 *)FUN_1447a1f4a(param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  FUN_146812229(local_38,puVar4);
  puVar2 = *(undefined8 **)(param_1 + 0x2b0);
  if ((&DAT_149e30aa8)[local_28] == '\x01') {
    FUN_144a5dc74(&local_58);
    (**(code **)*puVar2)(puVar2,&local_58);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    if ((*(int *)(param_1 + 0x290) != 0) && (*(longlong **)(param_1 + 0x288) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x30))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x290) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x288);
        }
        (**(code **)(*plVar3 + 0x58))(plVar3,local_38[0]);
        goto LAB_147519505;
      }
    }
    if ((*(int *)(param_1 + 0x280) != 0) && (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x30))();
      if (cVar1 != '\0') goto LAB_147519505;
    }
    local_58 = local_38[0];
    local_50 = 1;
    local_48 = 0;
    uStack_40 = 0;
    *(undefined1 *)(param_1 + 0x270) = 1;
    *(longlong **)(param_1 + 0x268) = local_38[0];
    FUN_144a450dc(param_1 + 0x278,&local_48);
    FUN_1449db362(&local_48);
  }
  else {
    (**(code **)*puVar2)(puVar2,local_38);
  }
LAB_147519505:
  (*(code *)(&PTR_LAB_149e30660)[local_28])();
LAB_147519518:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475195a2 FUN_1475195a2 body=115 status=ok
// SIG undefined FUN_1475195a2(void)

undefined8 * FUN_1475195a2(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 3) != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[2] + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 3) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)param_1[2];
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,&local_20);
      *param_1 = local_20;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147519616 FUN_147519616 body=1387 status=ok
// SIG undefined FUN_147519616(void)

void FUN_147519616(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_8d8 [32];
  undefined1 *local_8b8;
  undefined1 local_8a9;
  undefined1 local_8a8 [8];
  longlong *local_8a0;
  undefined1 local_889;
  code *local_888;
  undefined4 local_880;
  undefined4 uStack_87c;
  undefined1 local_870 [96];
  undefined1 local_810;
  undefined8 local_808;
  undefined4 local_800;
  undefined8 local_7f8;
  longlong *local_7f0;
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined1 local_7d8;
  undefined8 local_7d0;
  undefined4 local_7c8;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined1 uStack_7a4;
  undefined8 local_7a0;
  undefined4 local_798;
  undefined8 local_788;
  longlong *local_780;
  undefined8 local_778;
  longlong *local_770;
  longlong local_768;
  undefined4 local_760;
  undefined1 auStack_590 [96];
  undefined1 local_530;
  undefined1 local_528 [560];
  undefined1 local_2f8 [424];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined1 auStack_120 [56];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_d0 [56];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88;
  undefined1 local_80 [56];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8d8;
  FUN_147519b82(param_1 + 0x268,param_2 + 0x250);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x280) = *(undefined1 *)(param_2 + 0x210);
  FUN_14751cbda(param_1 + 0x288,param_2 + 0x218);
  FUN_14751cc5e(param_1 + 0x298,param_2 + 0x228);
  *(undefined2 *)(param_1 + 0x2a8) = *(undefined2 *)(param_2 + 0x238);
  FUN_14096c7c0(param_1 + 0x2b0,param_2 + 0x240);
  FUN_14133824c(param_1 + 0x2c0,param_2 + 0x260);
  FUN_14133824c(param_1 + 0x2e8,param_2 + 0x288);
  FUN_14133824c(param_1 + 0x310,param_2 + 0x2b0);
  FUN_14751ce06(param_1 + 0x338,param_2 + 0x2d8);
  if (*(int *)(param_1 + 0x270) == 0) {
    local_768 = 0;
    local_760 = 0xe;
    FUN_14751cd20(&local_768,0xe,0);
    FUN_14751cd93(local_768,&DAT_14cab1610,0xe);
    FUN_147519be2(param_1 + 0x268,&local_768);
    FUN_14751cce1(local_768,local_760);
    if (local_768 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146a0f1de(local_2f8);
  local_150 = *(undefined8 *)(param_2 + 0x1a8);
  local_148 = *(undefined8 *)(param_2 + 0x1b0);
  uStack_7a8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x1c5) >> 0x18);
  uStack_7a4 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x1c5) >> 0x38);
  local_7b8 = *(undefined4 *)(param_2 + 0x1b8);
  uStack_7b4 = *(undefined4 *)(param_2 + 0x1bc);
  uStack_7b0 = *(undefined4 *)(param_2 + 0x1c0);
  uStack_7ac = *(undefined4 *)(param_2 + 0x1c4);
  local_7a0 = 0;
  local_798 = 0;
  FUN_140a5aaa0(&local_7a0,param_2 + 0x1d0);
  local_d8 = uStack_7a8;
  local_e8 = local_7b8;
  uStack_e4 = uStack_7b4;
  uStack_e0 = uStack_7b0;
  uStack_dc = uStack_7ac;
  local_d4 = uStack_7a4;
  FUN_144a450dc(local_d0,&local_7a0);
  FUN_1449db362(&local_7a0);
  local_7d8 = *(undefined1 *)(param_2 + 0x1f0);
  local_7e8 = *(undefined4 *)(param_2 + 0x1e0);
  uStack_7e4 = *(undefined4 *)(param_2 + 0x1e4);
  uStack_7e0 = *(undefined4 *)(param_2 + 0x1e8);
  uStack_7dc = *(undefined4 *)(param_2 + 0x1ec);
  local_7d0 = 0;
  local_7c8 = 0;
  FUN_140a58be0(&local_7d0,param_2 + 0x1f8);
  local_88 = local_7d8;
  local_98 = local_7e8;
  uStack_94 = uStack_7e4;
  uStack_90 = uStack_7e0;
  uStack_8c = uStack_7dc;
  FUN_144a450dc(local_80,&local_7d0);
  FUN_1449db362(&local_7d0);
  local_888 = FUN_147519c32;
  local_880 = 0;
  FUN_14751e31a(&local_768,param_1,&local_888);
  FUN_144a450dc(auStack_120,&local_768);
  FUN_1449db362(&local_768);
  FUN_140a570d8(&local_768);
  FUN_144a87366(local_870,param_2 + 0x2e8);
  local_810 = *(undefined1 *)(param_2 + 0x348);
  local_808 = 0;
  local_800 = 0;
  FUN_140a5d470(&local_808,param_2 + 0x350);
  FUN_1412cc59c(auStack_590,local_870);
  local_530 = local_810;
  FUN_144a450dc(local_528,&local_808);
  FUN_141515cba(local_870);
  local_888 = FUN_14751b2c0;
  local_880 = 0;
  FUN_14751b1e8(&local_768,param_1,&local_888);
  local_8b8 = &local_889;
  FUN_140a54526(&local_888,"STextBlock",
                ".\\Runtime/TimeManagement/Private/Widgets/SFrameRatePicker.cpp",0x2b);
  FUN_140a52852(&local_888,&local_7f8,&local_768);
  plVar3 = local_138;
  plVar4 = local_7f0;
  if (local_7f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_7f0 + 1) = (int)local_7f0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_7f0 + 1) = (int)local_7f0[1] + 1;
    UNLOCK();
  }
  local_140 = local_7f8;
  local_138 = local_7f0;
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
  local_8b8 = &local_8a9;
  FUN_146a3ebfe(local_8a8,"SComboButton",
                ".\\Runtime/TimeManagement/Private/Widgets/SFrameRatePicker.cpp",0x23);
  FUN_146a0f634(local_8a8,&local_788,local_2f8);
  local_778 = local_788;
  local_770 = local_780;
  if (local_780 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_780 + 1) = (int)local_780[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_778);
  plVar3 = local_770;
  if (local_770 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_770 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_770)(local_770);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_780 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_780 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_780)(local_780);
      LOCK();
      piVar2 = (int *)((longlong)local_780 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_780 + 0x10))(local_780);
      }
    }
  }
  if (local_8a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_8a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_8a0)(local_8a0);
      LOCK();
      piVar2 = (int *)((longlong)local_8a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_8a0 + 0x10))(local_8a0);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
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
  if (local_7f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_7f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_7f0)(local_7f0);
      LOCK();
      piVar2 = (int *)((longlong)local_7f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_7f0 + 0x10))(local_7f0);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_87c,local_880);
  if (plVar4 != (longlong *)0x0) {
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
  FUN_140a59ae6(&local_768);
  FUN_146a0f6a8(local_2f8);
  if ((local_48 ^ (ulonglong)auStack_8d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147519b82 FUN_147519b82 body=95 status=ok
// SIG undefined FUN_147519b82(void)

undefined8 * FUN_147519b82(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14751cce1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14751cd20(param_1,iVar1);
      FUN_14751cd93(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147519be2 FUN_147519be2 body=80 status=ok
// SIG undefined FUN_147519be2(void)

longlong * FUN_147519be2(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14751cce1(*param_1,(int)param_1[1]);
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



// FUNCTION 147519c32 FUN_147519c32 body=5556 status=ok
// SIG undefined FUN_147519c32(void)

undefined8 FUN_147519c32(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  char cVar14;
  undefined1 uVar15;
  char cVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 uVar19;
  wchar_t **ppwVar20;
  longlong *plVar21;
  wchar_t *pwVar22;
  wchar_t *pwVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  wchar_t *pwVar27;
  wchar_t *pwVar28;
  wchar_t *pwVar29;
  wchar_t *pwVar30;
  int iVar31;
  wchar_t *pwVar32;
  int iVar33;
  ulonglong uVar34;
  wchar_t *pwVar35;
  int iVar36;
  int iVar37;
  longlong lVar38;
  wchar_t *pwVar39;
  bool bVar40;
  float fVar41;
  undefined1 auStack_888 [32];
  wchar_t **local_868;
  wchar_t **local_860;
  undefined1 local_858;
  undefined8 local_850;
  undefined8 *puStack_848;
  longlong local_840;
  wchar_t *local_838;
  undefined8 local_830;
  longlong *local_828;
  undefined8 local_820;
  undefined8 local_818;
  longlong *local_810;
  undefined1 local_808 [16];
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 *local_7e0;
  undefined4 local_7d8;
  wchar_t *local_7d0;
  wchar_t *local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  longlong *local_7b0;
  code *local_7a8;
  undefined4 local_7a0;
  undefined4 uStack_79c;
  undefined1 local_798;
  undefined8 local_790;
  undefined8 uStack_788;
  code *local_780;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined1 local_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  longlong *local_750;
  undefined1 local_738 [16];
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 *local_718;
  undefined4 local_710;
  undefined2 local_708;
  undefined8 local_700;
  undefined4 local_6f8;
  undefined8 local_6f0;
  undefined1 local_6e8;
  undefined8 local_6e0;
  undefined4 local_6d8;
  longlong *local_6d0;
  longlong *local_6c8;
  undefined4 local_6c0;
  undefined1 local_6bc;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined **local_688 [13];
  longlong *local_620;
  undefined8 local_608;
  undefined8 uStack_600;
  ulonglong local_5f8;
  ulonglong uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 local_460;
  undefined1 local_458;
  undefined1 local_450 [16];
  undefined1 local_440 [16];
  undefined2 local_430;
  undefined1 local_428 [192];
  wchar_t *local_368;
  wchar_t *local_360;
  undefined4 local_358 [2];
  undefined8 local_350;
  undefined8 auStack_348 [2];
  undefined1 local_338 [376];
  undefined4 local_1c0;
  longlong *local_190;
  longlong *local_188;
  undefined4 local_120;
  undefined1 local_11c;
  undefined1 local_118 [184];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_888;
  local_840 = param_1;
  local_860 = (wchar_t **)FUN_140a2b044(&DAT_14c96b348);
  if (local_860 == (wchar_t **)0x0) {
    local_860 = (wchar_t **)DAT_14c96b350;
  }
  local_698 = 0;
  uStack_690 = 0;
  local_6a8 = 0;
  uStack_6a0 = 0;
  puStack_848 = (undefined8 *)CONCAT71(puStack_848._1_7_,1);
  local_858 = 1;
  local_850 = 0;
  local_868 = (wchar_t **)((ulonglong)local_868 & 0xffffffffffffff00);
  FUN_1469d0642(local_688,1);
  local_820 = param_2;
  if ((*(int *)(local_840 + 0x340) == 0) || (*(longlong **)(local_840 + 0x338) == (longlong *)0x0))
  {
    cVar16 = '\0';
  }
  else {
    cVar16 = (**(code **)(**(longlong **)(local_840 + 0x338) + 0x30))();
  }
  plVar18 = (longlong *)(local_840 + 0x2b0);
  if (((*(int *)(local_840 + 0x2b8) != 0) && ((longlong *)*plVar18 != (longlong *)0x0)) &&
     (cVar14 = (**(code **)(*(longlong *)*plVar18 + 0x30))(), cVar14 != '\0')) {
    if (*(int *)(local_840 + 0x2b8) == 0) {
      plVar21 = (longlong *)0x0;
    }
    else {
      plVar21 = (longlong *)*plVar18;
    }
    uVar15 = (**(code **)(*plVar21 + 0x58))();
    *(undefined1 *)(local_840 + 0x2a8) = uVar15;
  }
  if (*(char *)(local_840 + 0x2a8) == '\0') {
    FUN_1475195a2(local_840 + 0x278);
  }
  FUN_140a53a96(&local_368);
  local_1c0 = 3;
  local_6c0 = 0x42c80000;
  local_6bc = 1;
  local_6b8 = 0;
  uStack_6b0 = 0;
  local_120 = 0x42c80000;
  local_11c = 1;
  FUN_144a450dc(local_118,&local_6b8);
  FUN_1449db362(&local_6b8);
  FUN_14751b436(&local_608);
  lVar26 = local_840;
  local_6f0 = *(undefined8 *)(local_840 + 0x278);
  local_6e8 = *(undefined1 *)(local_840 + 0x280);
  local_6e0 = 0;
  local_6d8 = 0;
  FUN_14751cbda(&local_6e0,local_840 + 0x288);
  local_458 = local_6e8;
  local_460 = local_6f0;
  FUN_144a450dc(local_450,&local_6e0);
  FUN_1449db362(&local_6e0);
  local_7a8 = FUN_14751b59e;
  local_7a0 = 0;
  FUN_14751f016(&local_780,lVar26);
  FUN_144a450dc(local_440,&local_780);
  FUN_1449db362(&local_780);
  local_708 = *(undefined2 *)(lVar26 + 0x2a8);
  local_700 = 0;
  local_6f8 = 0;
  FUN_14096c7c0(&local_700,plVar18);
  local_430 = local_708;
  FUN_144a450dc(local_428,&local_700);
  FUN_1449db362(&local_700);
  FUN_14751ecf6(&local_780,&local_7c8);
  FUN_14751b696(&local_780,&local_6d0,&local_608);
  plVar21 = local_188;
  plVar18 = local_6c8;
  if (local_6c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_6c8 + 1) = (int)local_6c8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_6c8 + 1) = (int)local_6c8[1] + 1;
    UNLOCK();
  }
  local_190 = local_6d0;
  local_188 = local_6c8;
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar21 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  local_868 = &local_7d0;
  FUN_140a53d66(&local_7a8,&DAT_149efe19f,
                ".\\Runtime/TimeManagement/Private/Widgets/SFrameRatePicker.cpp",0x54);
  FUN_140a50bf4(&local_7a8,&local_758,&local_368);
  local_830 = local_758;
  if (local_750 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_750 + 1) = (int)local_750[1] + 1;
    UNLOCK();
    if (local_750 != (longlong *)0x0) {
      LOCK();
      plVar21 = local_750 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*local_750)(local_750);
        LOCK();
        piVar2 = (int *)((longlong)local_750 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_750 + 0x10))(local_750);
        }
      }
    }
  }
  plVar21 = (longlong *)CONCAT44(uStack_79c,local_7a0);
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar21 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar18 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if (local_6c8 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_6c8 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_6c8)(local_6c8);
      LOCK();
      piVar2 = (int *)((longlong)local_6c8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_6c8 + 0x10))(local_6c8);
      }
    }
  }
  local_828 = local_750;
  plVar18 = (longlong *)CONCAT44(uStack_774,local_778);
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar18 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  FUN_14751b70a(&local_608);
  FUN_140a5660c(&local_368);
  local_368 = L"CustomFramerateDisplayLabel";
  local_360._0_4_ = 0x1b;
  FUN_1446e940c(&local_608,&local_368);
  local_368 = L"SFrameRatePicker";
  local_360 = (wchar_t *)CONCAT44(local_360._4_4_,0x10);
  FUN_1446e940c(&local_780,&local_368);
  FUN_140208bae(&local_6d0,&local_780,&local_608,L"Custom");
  if (cVar16 == '\0') {
    if ((longlong)*(int *)(local_840 + 0x270) != 0) {
      pwVar29 = *(wchar_t **)(local_840 + 0x268);
      local_838 = pwVar29 + (longlong)*(int *)(local_840 + 0x270) * 0x14;
      do {
        lVar26 = local_840;
        pwVar23 = *(wchar_t **)pwVar29;
        local_718 = (undefined8 *)0x0;
        local_710 = 0;
        local_7c8 = pwVar23;
        FUN_1446efa72(&local_718,0,3,0x10);
        puVar12 = local_718;
        local_710 = 3;
        *local_718 = &DAT_149efe500;
        uVar19 = FUN_144a3f946();
        puVar12[2] = uVar19;
        *puVar12 = &PTR_FUN_14a458040;
        puVar12[3] = lVar26;
        puVar12[4] = pwVar23;
        local_728 = 0;
        uStack_720 = 0;
        local_608 = FUN_14751b59e;
        uStack_600 = uStack_600 & 0xffffffff00000000;
        FUN_14751b75c(local_738,lVar26,&local_608,&local_7c8);
        local_868 = (wchar_t **)((ulonglong)local_868 & 0xffffffff00000000);
        FUN_1469baa6a(&local_368,local_738,&local_728,&local_718);
        FUN_144a5dc74(&local_608);
        local_5f8 = local_5f8 & 0xffffffffffffff00;
        uStack_5f0 = 0;
        uStack_5e8 = 0;
        FUN_142877ef0(&local_758);
        local_780 = *(code **)(pwVar29 + 0xc);
        if (local_780 != (code *)0x0) {
          (**(code **)(*(longlong *)local_780 + 8))();
        }
        local_778 = *(undefined4 *)(pwVar29 + 0x10);
        local_770 = 1;
        local_768 = 0;
        uStack_760 = 0;
        local_7a8 = *(code **)(pwVar29 + 4);
        if (local_7a8 != (code *)0x0) {
          (**(code **)(*(longlong *)local_7a8 + 8))();
        }
        local_7a0 = *(undefined4 *)(pwVar29 + 8);
        local_798 = 1;
        local_790 = 0;
        uStack_788 = 0;
        puStack_848 = &local_608;
        local_850 = 0;
        local_860 = (wchar_t **)0x0;
        local_858 = 3;
        local_868 = &local_368;
        FUN_146a0d19c(local_688,&local_7a8,&local_780,&local_758);
        FUN_1449db362(&local_790);
        if (local_7a8 != (code *)0x0) {
          (**(code **)(*(longlong *)local_7a8 + 0x10))();
        }
        FUN_1449db362(&local_768);
        if (local_780 != (code *)0x0) {
          (**(code **)(*(longlong *)local_780 + 0x10))();
        }
        FUN_1449db362(&uStack_5f0);
        if (local_608 != (code *)0x0) {
          (**(code **)(*(longlong *)local_608 + 0x10))();
        }
        FUN_1449db362(local_338);
        FUN_1449db362(auStack_348);
        FUN_1449db362(local_358);
        FUN_1449db362(&local_368);
        pwVar29 = pwVar29 + 0x14;
      } while (pwVar29 != local_838);
    }
    FUN_144a5dc74(&local_608);
    FUN_14023423e(&local_368,&local_608);
    plVar18 = local_828;
    local_358[0] = CONCAT31(local_358[0]._1_3_,1);
    local_350 = 0;
    auStack_348[0] = 0;
    local_7b8 = local_830;
    local_7b0 = local_828;
    if (local_828 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_828 + 1) = (int)local_828[1] + 1;
      UNLOCK();
    }
    local_868 = (wchar_t **)CONCAT71(local_868._1_7_,1);
    local_860 = &local_368;
    FUN_146a0d9ba(local_688,&local_7b8,&local_6d0,0);
    FUN_1449db362(&local_350);
    if (local_368 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_368 + 0x10))();
    }
    uVar19 = local_820;
    if (local_608 != (code *)0x0) {
      (**(code **)(*(longlong *)local_608 + 0x10))();
    }
  }
  else {
    local_7c8 = (wchar_t *)0x0;
    uStack_7c0 = 0;
    iVar31 = *(int *)(local_840 + 0x270);
    if ((longlong)iVar31 != 0) {
      lVar26 = *(longlong *)(local_840 + 0x268);
      lVar38 = 0;
      do {
        if (*(int *)(local_840 + 0x340) == 0) {
          plVar18 = (longlong *)0x0;
        }
        else {
          plVar18 = *(longlong **)(local_840 + 0x338);
        }
        cVar16 = (**(code **)(*plVar18 + 0x58))();
        if (cVar16 != '\0') {
          lVar25 = (longlong)(int)uStack_7c0;
          uVar17 = (int)uStack_7c0 + 1;
          uStack_7c0 = CONCAT44(uStack_7c0._4_4_,uVar17);
          if (uStack_7c0._4_4_ < uVar17) {
            FUN_14751f848(&local_7c8);
          }
          pwVar29 = local_7c8;
          *(undefined8 *)(local_7c8 + lVar25 * 0x14) = *(undefined8 *)(lVar26 + lVar38);
          plVar18 = *(longlong **)(lVar26 + 8 + lVar38);
          *(longlong **)(local_7c8 + (lVar25 * 5 + 1) * 4) = plVar18;
          if (plVar18 != (longlong *)0x0) {
            (**(code **)(*plVar18 + 8))();
          }
          *(undefined4 *)(pwVar29 + (lVar25 * 5 + 2) * 4) = *(undefined4 *)(lVar26 + 0x10 + lVar38);
          plVar18 = *(longlong **)(lVar26 + 0x18 + lVar38);
          *(longlong **)(pwVar29 + (lVar25 * 5 + 3) * 4) = plVar18;
          if (plVar18 != (longlong *)0x0) {
            (**(code **)(*plVar18 + 8))();
          }
          *(undefined4 *)(pwVar29 + (lVar25 * 5 + 4) * 4) = *(undefined4 *)(lVar26 + 0x20 + lVar38);
        }
        pwVar29 = local_7c8;
        lVar38 = lVar38 + 0x28;
      } while ((longlong)iVar31 * 0x28 != lVar38);
      iVar31 = (int)uStack_7c0;
      lVar26 = (longlong)(int)uStack_7c0;
      if (1 < lVar26) {
        memset(local_358,0,0x2f0);
        local_368 = pwVar29;
        local_360 = pwVar29 + (lVar26 * 5 + -5) * 4;
        fVar41 = logf((float)iVar31);
        local_358[0] = (int)(longlong)(fVar41 + fVar41);
        ppwVar20 = &local_368;
        do {
          pwVar23 = *ppwVar20;
          pwVar29 = ppwVar20[1];
          iVar31 = *(int *)(ppwVar20 + 2);
          iVar37 = (int)((ulonglong)((longlong)pwVar29 - (longlong)pwVar23) >> 3) * -0x33333333;
          uVar17 = iVar37 + 1;
          pwVar28 = pwVar23;
          pwVar32 = pwVar29;
          if (iVar31 != 0) {
LAB_14751aafc:
            if (8 < (int)uVar17) {
              uVar34 = (ulonglong)(uVar17 >> 1);
              uVar19 = *(undefined8 *)(pwVar23 + (uVar34 * 10 + 8) * 2);
              uVar3 = *(undefined8 *)(pwVar23 + uVar34 * 0x14);
              uVar4 = *(undefined8 *)(pwVar23 + uVar34 * 0x14 + 4);
              uVar5 = *(undefined8 *)(pwVar23 + (uVar34 * 10 + 4) * 2);
              uVar6 = *(undefined8 *)(pwVar23 + (uVar34 * 10 + 4) * 2 + 4);
              *(undefined8 *)(pwVar23 + (uVar34 * 10 + 8) * 2) = *(undefined8 *)(pwVar23 + 0x10);
              uVar7 = *(undefined8 *)pwVar23;
              uVar8 = *(undefined8 *)(pwVar23 + 4);
              uVar9 = *(undefined8 *)(pwVar23 + 0xc);
              *(undefined8 *)(pwVar23 + (uVar34 * 10 + 4) * 2) = *(undefined8 *)(pwVar23 + 8);
              *(undefined8 *)(pwVar23 + (uVar34 * 10 + 4) * 2 + 4) = uVar9;
              *(undefined8 *)(pwVar23 + uVar34 * 0x14) = uVar7;
              *(undefined8 *)(pwVar23 + uVar34 * 0x14 + 4) = uVar8;
              *(undefined8 *)(pwVar23 + 0x10) = uVar19;
              *(undefined8 *)(pwVar23 + 8) = uVar5;
              *(undefined8 *)(pwVar23 + 0xc) = uVar6;
              *(undefined8 *)pwVar23 = uVar3;
              *(undefined8 *)(pwVar23 + 4) = uVar4;
              pwVar35 = pwVar29 + 0x14;
              pwVar22 = pwVar23;
              do {
                pwVar13 = pwVar22 + 0x14;
                pwVar30 = pwVar22 + 0x14;
                do {
                  pwVar27 = pwVar30;
                  pwVar22 = pwVar13;
                  if (pwVar29 < pwVar22) break;
                  pwVar13 = pwVar22 + 0x14;
                  pwVar30 = pwVar27 + 0x14;
                } while ((double)*(int *)pwVar22 / (double)*(int *)(pwVar22 + 2) <=
                         (double)*(int *)pwVar23 / (double)*(int *)(pwVar23 + 2));
                pwVar13 = pwVar35 + -0x28;
                do {
                  pwVar30 = pwVar35;
                  pwVar39 = pwVar13;
                  pwVar35 = pwVar30 + -0x14;
                  if (pwVar35 <= pwVar23) break;
                  pwVar13 = pwVar39 + -0x14;
                } while ((double)*(int *)pwVar23 / (double)*(int *)(pwVar23 + 2) <=
                         (double)*(int *)pwVar35 / (double)*(int *)(pwVar30 + -0x12));
                if (pwVar35 < pwVar22) goto LAB_14751ac7b;
                uVar19 = *(undefined8 *)(pwVar22 + 0x10);
                uVar3 = *(undefined8 *)pwVar22;
                uVar4 = *(undefined8 *)(pwVar22 + 4);
                uVar5 = *(undefined8 *)(pwVar22 + 8);
                uVar6 = *(undefined8 *)(pwVar22 + 0xc);
                *(undefined8 *)(pwVar22 + 0x10) = *(undefined8 *)(pwVar30 + -4);
                uVar7 = *(undefined8 *)pwVar35;
                uVar8 = *(undefined8 *)(pwVar30 + -0x10);
                uVar9 = *(undefined8 *)(pwVar30 + -8);
                *(undefined8 *)(pwVar22 + 8) = *(undefined8 *)(pwVar30 + -0xc);
                *(undefined8 *)(pwVar22 + 0xc) = uVar9;
                *(undefined8 *)pwVar22 = uVar7;
                *(undefined8 *)(pwVar22 + 4) = uVar8;
                *(undefined8 *)(pwVar30 + -4) = uVar19;
                *(undefined8 *)(pwVar30 + -0xc) = uVar5;
                *(undefined8 *)(pwVar30 + -8) = uVar6;
                *(undefined8 *)pwVar35 = uVar3;
                *(undefined8 *)(pwVar30 + -0x10) = uVar4;
              } while( true );
            }
            if (pwVar23 < pwVar29) {
              do {
                pwVar28 = pwVar23;
                if (pwVar23 + 0x14 <= pwVar29) {
                  pwVar32 = pwVar23 + 0x14;
                  iVar31 = *(int *)pwVar23;
                  do {
                    pwVar35 = pwVar32;
                    iVar37 = *(int *)pwVar32;
                    if ((double)*(int *)pwVar32 / (double)*(int *)(pwVar32 + 2) <=
                        (double)iVar31 / (double)*(int *)(pwVar28 + 2)) {
                      pwVar35 = pwVar28;
                      iVar37 = iVar31;
                    }
                    pwVar28 = pwVar35;
                    pwVar32 = pwVar32 + 0x14;
                    iVar31 = iVar37;
                  } while (pwVar32 <= pwVar29);
                }
                uStack_5e8 = *(undefined8 *)(pwVar28 + 0x10);
                pcVar10 = *(code **)pwVar28;
                uVar34 = *(ulonglong *)(pwVar28 + 4);
                local_5f8 = *(ulonglong *)(pwVar28 + 8);
                uStack_5f0 = *(ulonglong *)(pwVar28 + 0xc);
                *(undefined8 *)(pwVar28 + 0x10) = *(undefined8 *)(pwVar29 + 0x10);
                uVar19 = *(undefined8 *)pwVar29;
                uVar3 = *(undefined8 *)(pwVar29 + 4);
                uVar4 = *(undefined8 *)(pwVar29 + 0xc);
                *(undefined8 *)(pwVar28 + 8) = *(undefined8 *)(pwVar29 + 8);
                *(undefined8 *)(pwVar28 + 0xc) = uVar4;
                *(undefined8 *)pwVar28 = uVar19;
                *(undefined8 *)(pwVar28 + 4) = uVar3;
                *(undefined8 *)(pwVar29 + 0x10) = uStack_5e8;
                local_608._0_4_ = (int)pcVar10;
                local_608._4_4_ = (int)((ulonglong)pcVar10 >> 0x20);
                uStack_600._0_4_ = (int)uVar34;
                uStack_600._4_4_ = (int)(uVar34 >> 0x20);
                *(ulonglong *)(pwVar29 + 8) = local_5f8;
                *(ulonglong *)(pwVar29 + 0xc) = uStack_5f0;
                *(int *)pwVar29 = (int)local_608;
                *(int *)(pwVar29 + 2) = local_608._4_4_;
                *(int *)(pwVar29 + 4) = (int)uStack_600;
                *(int *)(pwVar29 + 6) = uStack_600._4_4_;
                pwVar29 = pwVar29 + -0x14;
                local_608 = pcVar10;
                uStack_600 = uVar34;
              } while (pwVar23 < pwVar29);
            }
            goto LAB_14751b1d5;
          }
LAB_14751ad6f:
          if (uVar17 != 0) {
            iVar31 = (iVar37 - (iVar37 + -1 >> 0x1f)) + -1 >> 1;
            iVar37 = iVar31;
joined_r0x00014751ad92:
            do {
              iVar33 = iVar31 * 2 + 1;
              if (iVar33 < (int)uVar17) {
                iVar36 = iVar31 * 2 + 2;
                if ((iVar36 < (int)uVar17) &&
                   ((double)*(int *)(pwVar23 + (longlong)iVar33 * 0x14) /
                    (double)*(int *)(pwVar23 + ((longlong)iVar33 * 10 + 1) * 2) <=
                    (double)*(int *)(pwVar23 + (longlong)iVar36 * 0x14) /
                    (double)*(int *)(pwVar23 + ((longlong)iVar36 * 10 + 1) * 2))) {
                  iVar33 = iVar36;
                }
                lVar26 = (longlong)iVar31;
                lVar38 = (longlong)iVar33;
                if ((double)*(int *)(pwVar23 + lVar26 * 0x14) /
                    (double)*(int *)(pwVar23 + (lVar26 * 10 + 1) * 2) <
                    (double)*(int *)(pwVar23 + lVar38 * 0x14) /
                    (double)*(int *)(pwVar23 + (lVar38 * 10 + 1) * 2)) {
                  pwVar29 = pwVar23 + lVar26 * 0x14;
                  pwVar28 = pwVar23 + lVar38 * 0x14;
                  uStack_5e8 = *(undefined8 *)(pwVar29 + 0x10);
                  pcVar10 = *(code **)pwVar29;
                  uVar34 = *(ulonglong *)(pwVar29 + 4);
                  local_5f8 = *(ulonglong *)(pwVar29 + 8);
                  uStack_5f0 = *(ulonglong *)(pwVar29 + 0xc);
                  *(undefined8 *)(pwVar29 + 0x10) = *(undefined8 *)(pwVar28 + 0x10);
                  uVar19 = *(undefined8 *)pwVar28;
                  uVar3 = *(undefined8 *)(pwVar28 + 4);
                  uVar4 = *(undefined8 *)(pwVar28 + 0xc);
                  *(undefined8 *)(pwVar29 + 8) = *(undefined8 *)(pwVar28 + 8);
                  *(undefined8 *)(pwVar29 + 0xc) = uVar4;
                  *(undefined8 *)pwVar29 = uVar19;
                  *(undefined8 *)(pwVar29 + 4) = uVar3;
                  *(undefined8 *)(pwVar28 + 0x10) = uStack_5e8;
                  local_608._0_4_ = (int)pcVar10;
                  local_608._4_4_ = (int)((ulonglong)pcVar10 >> 0x20);
                  uStack_600._0_4_ = (int)uVar34;
                  uStack_600._4_4_ = (int)(uVar34 >> 0x20);
                  *(ulonglong *)(pwVar28 + 8) = local_5f8;
                  *(ulonglong *)(pwVar28 + 0xc) = uStack_5f0;
                  *(int *)pwVar28 = (int)local_608;
                  *(int *)(pwVar28 + 2) = local_608._4_4_;
                  *(int *)(pwVar28 + 4) = (int)uStack_600;
                  *(int *)(pwVar28 + 6) = uStack_600._4_4_;
                  iVar31 = iVar33;
                  local_608 = pcVar10;
                  uStack_600 = uVar34;
                  goto joined_r0x00014751ad92;
                }
              }
              bVar40 = iVar37 != 0;
              iVar31 = iVar37 + -1;
              iVar37 = iVar31;
            } while (bVar40);
            if (1 < (int)uVar17) {
              uVar24 = (ulonglong)uVar17 - 1;
              uStack_5e8 = *(undefined8 *)(pwVar23 + 0x10);
              pcVar10 = *(code **)pwVar23;
              uVar34 = *(ulonglong *)(pwVar23 + 4);
              local_5f8 = *(ulonglong *)(pwVar23 + 8);
              uStack_5f0 = *(ulonglong *)(pwVar23 + 0xc);
              *(undefined8 *)(pwVar23 + 0x10) = *(undefined8 *)(pwVar23 + (uVar24 * 10 + 8) * 2);
              uVar19 = *(undefined8 *)(pwVar23 + uVar24 * 0x14);
              uVar3 = *(undefined8 *)(pwVar23 + uVar24 * 0x14 + 4);
              uVar4 = *(undefined8 *)(pwVar23 + (uVar24 * 10 + 4) * 2 + 4);
              *(undefined8 *)(pwVar23 + 8) = *(undefined8 *)(pwVar23 + (uVar24 * 10 + 4) * 2);
              *(undefined8 *)(pwVar23 + 0xc) = uVar4;
              *(undefined8 *)pwVar23 = uVar19;
              *(undefined8 *)(pwVar23 + 4) = uVar3;
              *(undefined8 *)(pwVar23 + (uVar24 * 10 + 8) * 2) = uStack_5e8;
              local_608._0_4_ = (int)pcVar10;
              local_608._4_4_ = (int)((ulonglong)pcVar10 >> 0x20);
              uStack_600._0_4_ = (int)uVar34;
              uStack_600._4_4_ = (int)(uVar34 >> 0x20);
              *(ulonglong *)(pwVar23 + (uVar24 * 10 + 4) * 2) = local_5f8;
              *(ulonglong *)(pwVar23 + (uVar24 * 10 + 4) * 2 + 4) = uStack_5f0;
              pwVar29 = pwVar23 + uVar24 * 0x14;
              *(int *)pwVar29 = (int)local_608;
              *(int *)(pwVar29 + 2) = local_608._4_4_;
              *(int *)(pwVar29 + 4) = (int)uStack_600;
              *(int *)(pwVar29 + 6) = uStack_600._4_4_;
              local_608 = pcVar10;
              uStack_600 = uVar34;
              if (uVar17 != 2) {
                do {
                  iVar31 = 0;
                  iVar33 = 1;
                  iVar37 = 0;
                  do {
                    lVar26 = (longlong)(iVar31 + 2);
                    iVar36 = iVar33;
                    if ((lVar26 < (longlong)uVar24) &&
                       ((double)*(int *)(pwVar23 + (longlong)iVar33 * 0x14) /
                        (double)*(int *)(pwVar23 + ((longlong)iVar33 * 10 + 1) * 2) <=
                        (double)*(int *)(pwVar23 + lVar26 * 0x14) /
                        (double)*(int *)(pwVar23 + (lVar26 * 10 + 1) * 2))) {
                      iVar36 = iVar31 + 2;
                    }
                    lVar26 = (longlong)iVar37;
                    lVar38 = (longlong)iVar36;
                    if ((double)*(int *)(pwVar23 + lVar38 * 0x14) /
                        (double)*(int *)(pwVar23 + (lVar38 * 10 + 1) * 2) <=
                        (double)*(int *)(pwVar23 + lVar26 * 0x14) /
                        (double)*(int *)(pwVar23 + (lVar26 * 10 + 1) * 2)) break;
                    pwVar29 = pwVar23 + lVar26 * 0x14;
                    pwVar28 = pwVar23 + lVar38 * 0x14;
                    uVar19 = *(undefined8 *)(pwVar29 + 0x10);
                    uVar3 = *(undefined8 *)pwVar29;
                    uVar4 = *(undefined8 *)(pwVar29 + 4);
                    uVar5 = *(undefined8 *)(pwVar29 + 8);
                    uVar6 = *(undefined8 *)(pwVar29 + 0xc);
                    *(undefined8 *)(pwVar29 + 0x10) = *(undefined8 *)(pwVar28 + 0x10);
                    uVar7 = *(undefined8 *)pwVar28;
                    uVar8 = *(undefined8 *)(pwVar28 + 4);
                    uVar9 = *(undefined8 *)(pwVar28 + 0xc);
                    *(undefined8 *)(pwVar29 + 8) = *(undefined8 *)(pwVar28 + 8);
                    *(undefined8 *)(pwVar29 + 0xc) = uVar9;
                    *(undefined8 *)pwVar29 = uVar7;
                    *(undefined8 *)(pwVar29 + 4) = uVar8;
                    *(undefined8 *)(pwVar28 + 0x10) = uVar19;
                    *(undefined8 *)(pwVar28 + 8) = uVar5;
                    *(undefined8 *)(pwVar28 + 0xc) = uVar6;
                    *(undefined8 *)pwVar28 = uVar3;
                    *(undefined8 *)(pwVar28 + 4) = uVar4;
                    iVar31 = iVar36 * 2;
                    iVar33 = iVar36 * 2 + 1;
                    iVar37 = iVar36;
                  } while ((longlong)iVar33 < (longlong)uVar24);
                  uVar34 = uVar24 - 1;
                  uStack_5e8 = *(undefined8 *)(pwVar23 + 0x10);
                  pcVar10 = *(code **)pwVar23;
                  uVar11 = *(ulonglong *)(pwVar23 + 4);
                  local_5f8 = *(ulonglong *)(pwVar23 + 8);
                  uStack_5f0 = *(ulonglong *)(pwVar23 + 0xc);
                  *(undefined8 *)(pwVar23 + 0x10) = *(undefined8 *)(pwVar23 + (uVar34 * 10 + 8) * 2)
                  ;
                  uVar19 = *(undefined8 *)(pwVar23 + uVar34 * 0x14);
                  uVar3 = *(undefined8 *)(pwVar23 + uVar34 * 0x14 + 4);
                  uVar4 = *(undefined8 *)(pwVar23 + (uVar34 * 10 + 4) * 2 + 4);
                  *(undefined8 *)(pwVar23 + 8) = *(undefined8 *)(pwVar23 + (uVar34 * 10 + 4) * 2);
                  *(undefined8 *)(pwVar23 + 0xc) = uVar4;
                  *(undefined8 *)pwVar23 = uVar19;
                  *(undefined8 *)(pwVar23 + 4) = uVar3;
                  *(undefined8 *)(pwVar23 + (uVar34 * 10 + 8) * 2) = uStack_5e8;
                  local_608._0_4_ = (int)pcVar10;
                  local_608._4_4_ = (int)((ulonglong)pcVar10 >> 0x20);
                  uStack_600._0_4_ = (int)uVar11;
                  uStack_600._4_4_ = (int)(uVar11 >> 0x20);
                  *(ulonglong *)(pwVar23 + (uVar34 * 10 + 4) * 2) = local_5f8;
                  *(ulonglong *)(pwVar23 + (uVar34 * 10 + 4) * 2 + 4) = uStack_5f0;
                  pwVar29 = pwVar23 + uVar34 * 0x14;
                  *(int *)pwVar29 = (int)local_608;
                  *(int *)(pwVar29 + 2) = local_608._4_4_;
                  *(int *)(pwVar29 + 4) = (int)uStack_600;
                  *(int *)(pwVar29 + 6) = uStack_600._4_4_;
                  bVar40 = 2 < uVar24;
                  uVar24 = uVar34;
                  local_608 = pcVar10;
                  uStack_600 = uVar11;
                } while (bVar40);
              }
            }
          }
LAB_14751b1d5:
          ppwVar20 = ppwVar20 + -3;
        } while (&local_368 <= ppwVar20);
      }
    }
    plVar18 = (longlong *)FUN_14142e2d2(local_840 + 0x2c0);
    local_368 = (wchar_t *)*plVar18;
    if (local_368 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_368 + 8))();
    }
    local_360 = (wchar_t *)CONCAT44(local_360._4_4_,(int)plVar18[1]);
    local_358[0] = CONCAT31(local_358[0]._1_3_,1);
    local_350 = 0;
    auStack_348[0] = 0;
    FUN_146a0d4b6(local_688,0,&local_368);
    FUN_1449db362(&local_350);
    if (local_368 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_368 + 0x10))();
    }
    if ((longlong)(int)uStack_7c0 != 0) {
      local_838 = local_7c8 + (longlong)(int)uStack_7c0 * 0x14;
      pwVar29 = local_7c8;
      do {
        pwVar23 = *(wchar_t **)pwVar29;
        local_7e0 = (undefined8 *)0x0;
        local_7d8 = 0;
        local_7d0 = pwVar23;
        FUN_1446efa72(&local_7e0,0,3,0x10);
        puVar12 = local_7e0;
        local_7d8 = 3;
        *local_7e0 = &DAT_149efe500;
        uVar19 = FUN_144a3f946();
        puVar12[2] = uVar19;
        *puVar12 = &PTR_FUN_14a4580b0;
        puVar12[3] = local_840;
        puVar12[4] = pwVar23;
        local_7f8 = 0;
        uStack_7f0 = 0;
        local_608 = FUN_14751b59e;
        uStack_600 = uStack_600 & 0xffffffff00000000;
        FUN_14751b75c(local_808,local_840,&local_608,&local_7d0);
        local_868 = (wchar_t **)((ulonglong)local_868 & 0xffffffff00000000);
        FUN_1469baa6a(&local_368,local_808,&local_7f8,&local_7e0);
        FUN_144a5dc74(&local_608);
        local_5f8 = local_5f8 & 0xffffffffffffff00;
        uStack_5f0 = 0;
        uStack_5e8 = 0;
        FUN_142877ef0(&local_758);
        local_780 = *(code **)(pwVar29 + 0xc);
        if (local_780 != (code *)0x0) {
          (**(code **)(*(longlong *)local_780 + 8))();
        }
        local_778 = *(undefined4 *)(pwVar29 + 0x10);
        local_770 = 1;
        local_768 = 0;
        uStack_760 = 0;
        local_7a8 = *(code **)(pwVar29 + 4);
        if (local_7a8 != (code *)0x0) {
          (**(code **)(*(longlong *)local_7a8 + 8))();
        }
        local_7a0 = *(undefined4 *)(pwVar29 + 8);
        local_798 = 1;
        local_790 = 0;
        uStack_788 = 0;
        puStack_848 = &local_608;
        local_850 = 0;
        local_860 = (wchar_t **)0x0;
        local_858 = 3;
        local_868 = &local_368;
        FUN_146a0d19c(local_688,&local_7a8,&local_780,&local_758);
        FUN_1449db362(&local_790);
        if (local_7a8 != (code *)0x0) {
          (**(code **)(*(longlong *)local_7a8 + 0x10))();
        }
        FUN_1449db362(&local_768);
        if (local_780 != (code *)0x0) {
          (**(code **)(*(longlong *)local_780 + 0x10))();
        }
        FUN_1449db362(&uStack_5f0);
        if (local_608 != (code *)0x0) {
          (**(code **)(*(longlong *)local_608 + 0x10))();
        }
        FUN_1449db362(local_338);
        FUN_1449db362(auStack_348);
        FUN_1449db362(local_358);
        FUN_1449db362(&local_368);
        pwVar29 = pwVar29 + 0x14;
      } while (pwVar29 != local_838);
    }
    FUN_144a5dc74(&local_608);
    FUN_14023423e(&local_368,&local_608);
    plVar18 = local_828;
    local_358[0] = CONCAT31(local_358[0]._1_3_,1);
    local_350 = 0;
    auStack_348[0] = 0;
    local_818 = local_830;
    local_810 = local_828;
    if (local_828 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_828 + 1) = (int)local_828[1] + 1;
      UNLOCK();
    }
    local_868 = (wchar_t **)CONCAT71(local_868._1_7_,1);
    local_860 = &local_368;
    FUN_146a0d9ba(local_688,&local_818,&local_6d0,0);
    FUN_1449db362(&local_350);
    if (local_368 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_368 + 0x10))();
    }
    if (local_608 != (code *)0x0) {
      (**(code **)(*(longlong *)local_608 + 0x10))();
    }
    FUN_146a0d58a(local_688);
    thunk_FUN_146a0d602(local_688,0);
    if ((int)uStack_7c0 < *(int *)(local_840 + 0x270)) {
      FUN_142877ef0(&local_368);
      lVar26 = local_840;
      local_780 = FUN_14751b9de;
      local_778 = 0;
      FUN_14751b8a4(&local_608,local_840);
      local_850 = 0;
      puStack_848 = (undefined8 *)0x0;
      local_858 = 1;
      local_868 = (wchar_t **)((ulonglong)local_868 & 0xffffffffffffff00);
      local_860 = &local_368;
      FUN_146a0d7ca(local_688,lVar26 + 0x2e8,lVar26 + 0x310,&local_608);
      FUN_1449db362(&local_608);
    }
    FUN_14751cce1(local_7c8,uStack_7c0 & 0xffffffff);
    uVar19 = local_820;
    if (local_7c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
      uVar19 = local_820;
    }
  }
  FUN_146a0a3c8(local_688,uVar19,0);
  if (local_6d0 != (longlong *)0x0) {
    (**(code **)(*local_6d0 + 0x10))();
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar18 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  local_688[0] = &PTR_FUN_149f05160;
  if (local_620 != (longlong *)0x0) {
    (**(code **)(*local_620 + 0x10))();
  }
  FUN_1469e534a(local_688);
  if ((local_60 ^ (ulonglong)auStack_888) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19;
LAB_14751ac7b:
  uStack_5e8 = *(undefined8 *)(pwVar23 + 0x10);
  pcVar10 = *(code **)pwVar23;
  uVar34 = *(ulonglong *)(pwVar23 + 4);
  local_5f8 = *(ulonglong *)(pwVar23 + 8);
  uStack_5f0 = *(ulonglong *)(pwVar23 + 0xc);
  *(undefined8 *)(pwVar23 + 0x10) = *(undefined8 *)(pwVar30 + -4);
  uVar19 = *(undefined8 *)pwVar35;
  uVar3 = *(undefined8 *)(pwVar30 + -0x10);
  uVar4 = *(undefined8 *)(pwVar30 + -8);
  *(undefined8 *)(pwVar23 + 8) = *(undefined8 *)(pwVar30 + -0xc);
  *(undefined8 *)(pwVar23 + 0xc) = uVar4;
  *(undefined8 *)pwVar23 = uVar19;
  *(undefined8 *)(pwVar23 + 4) = uVar3;
  *(undefined8 *)(pwVar30 + -4) = uStack_5e8;
  local_608._0_4_ = (int)pcVar10;
  local_608._4_4_ = (int)((ulonglong)pcVar10 >> 0x20);
  uStack_600._0_4_ = (int)uVar34;
  uStack_600._4_4_ = (int)(uVar34 >> 0x20);
  *(ulonglong *)(pwVar30 + -0xc) = local_5f8;
  *(ulonglong *)(pwVar30 + -8) = uStack_5f0;
  *(int *)pwVar35 = (int)local_608;
  *(int *)(pwVar30 + -0x12) = local_608._4_4_;
  *(int *)(pwVar30 + -0x10) = (int)uStack_600;
  *(int *)(pwVar30 + -0xe) = uStack_600._4_4_;
  iVar31 = iVar31 + -1;
  pwVar30 = pwVar30 + -0x28;
  local_608 = pcVar10;
  uStack_600 = uVar34;
  if ((longlong)pwVar39 - (longlong)pwVar28 < (longlong)pwVar32 - (longlong)pwVar27) {
    if (pwVar22 < pwVar29) {
      *ppwVar20 = pwVar22;
      ppwVar20[1] = pwVar29;
      *(int *)(ppwVar20 + 2) = iVar31;
      ppwVar20 = ppwVar20 + 3;
    }
    pwVar27 = pwVar23;
    if (pwVar35 <= pwVar23 + 0x14) goto LAB_14751b1d5;
  }
  else {
    if (pwVar23 + 0x14 < pwVar35) {
      *ppwVar20 = pwVar23;
      ppwVar20[1] = pwVar30;
      *(int *)(ppwVar20 + 2) = iVar31;
      ppwVar20 = ppwVar20 + 3;
    }
    pwVar23 = pwVar22;
    pwVar30 = pwVar29;
    pwVar39 = pwVar29;
    if (pwVar29 <= pwVar22) goto LAB_14751b1d5;
  }
  iVar37 = (int)((ulonglong)((longlong)pwVar39 - (longlong)pwVar27) >> 3) * -0x33333333;
  uVar17 = iVar37 + 1;
  pwVar28 = pwVar27;
  pwVar29 = pwVar30;
  pwVar32 = pwVar39;
  if (iVar31 == 0) goto LAB_14751ad6f;
  goto LAB_14751aafc;
}



// FUNCTION 14751b1e8 FUN_14751b1e8 body=215 status=ok
// SIG undefined FUN_14751b1e8(void)

longlong FUN_14751b1e8(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_14751e814(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
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



// FUNCTION 14751b2c0 FUN_14751b2c0 body=373 status=ok
// SIG undefined FUN_14751b2c0(void)

longlong * FUN_14751b2c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x2b8) != 0) && (*(longlong **)(param_1 + 0x2b0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x2b8) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x2b0);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x2a8) = uVar2;
    }
  }
  if (*(char *)(param_1 + 0x2a8) == '\x01') {
    local_30 = L"MultipleValuesText";
    local_28 = 0x12;
    FUN_1446e940c(local_34,&local_30);
    local_30 = L"SFrameRatePicker";
    local_28 = 0x10;
    FUN_1446e940c(local_38,&local_30);
    FUN_140208bae(param_2,local_38,local_34,L"<multiple values>");
  }
  else {
    FUN_1475195a2(param_1 + 0x278);
    local_30 = *(wchar_t **)(param_1 + 0x278);
    if ((longlong)*(int *)(param_1 + 0x270) != 0) {
      puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x268) + 0x10);
      do {
        if ((puVar4[-4] == (int)local_30) && (puVar4[-3] == (int)((ulonglong)local_30 >> 0x20))) {
          plVar3 = *(longlong **)(puVar4 + -2);
          *param_2 = (longlong)plVar3;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
          *(undefined4 *)(param_2 + 1) = *puVar4;
          goto LAB_14751b386;
        }
        puVar5 = puVar4 + 6;
        puVar4 = puVar4 + 10;
      } while (puVar5 != (undefined4 *)
                         (*(longlong *)(param_1 + 0x268) +
                         (longlong)*(int *)(param_1 + 0x270) * 0x28));
    }
    FUN_146811d30(&local_30,param_2);
  }
LAB_14751b386:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14751b436 FUN_14751b436 body=359 status=ok
// SIG undefined FUN_14751b436(void)

longlong FUN_14751b436(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0x10000ea60;
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined2 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"NormalEditableTextBox",1);
  uVar2 = FUN_145817874(lVar1,local_48,0,0);
  *(undefined8 *)(param_1 + 0x1f0) = uVar2;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x207) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0x41c00000;
  *(undefined4 *)(param_1 + 0x248) = 0;
  *(undefined2 *)(param_1 + 0x24c) = 2;
  *(undefined1 *)(param_1 + 0x24e) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0x3f800000;
  *(undefined1 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x27c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x280) = 0;
  *(undefined1 *)(param_1 + 0x284) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14751b59e FUN_14751b59e body=228 status=ok
// SIG undefined FUN_14751b59e(void)

void FUN_14751b59e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + 0x2a0) != 0) && (*(longlong **)(param_1 + 0x298) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0x30))();
    if (cVar1 != '\0') {
      if ((*(int *)(param_1 + 0x2a0) != 0) && (*(longlong *)(param_1 + 0x298) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
      goto LAB_14751b677;
    }
  }
  if ((*(int *)(param_1 + 0x290) != 0) && (*(longlong **)(param_1 + 0x288) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x30))();
    if (cVar1 != '\0') {
      local_38 = 1;
      local_30 = 0;
      uStack_28 = 0;
      *(undefined1 *)(param_1 + 0x280) = 1;
      *(undefined8 *)(param_1 + 0x278) = param_2;
      local_40 = param_2;
      FUN_144a450dc(param_1 + 0x288,&local_30);
      FUN_1449db362(&local_30);
    }
  }
LAB_14751b677:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14751b696 FUN_14751b696 body=115 status=ok
// SIG undefined FUN_14751b696(void)

longlong * FUN_14751b696(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_147518a60(*param_1,param_3);
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



// FUNCTION 14751b70a FUN_14751b70a body=81 status=ok
// SIG undefined FUN_14751b70a(void)

void FUN_14751b70a(longlong param_1)

{
  FUN_1449db362(param_1 + 0x288);
  FUN_141515cba(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1c8);
  FUN_1449db362(param_1 + 0x1b8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14751b75c FUN_14751b75c body=328 status=ok
// SIG undefined FUN_14751b75c(void)

longlong * FUN_14751b75c(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x10);
  bVar6 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_14751b7de:
    uVar11 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_14751b7de;
      LOCK();
      iVar7 = (int)plVar10[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    uVar11 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  *puVar5 = &PTR_LAB_14a457fd0;
  puVar5[1] = *param_4;
  uVar9 = FUN_144a3f946();
  puVar5[2] = uVar9;
  *puVar5 = &PTR_FUN_14a457f60;
  puVar5[3] = uVar11;
  puVar5[4] = plVar10;
  if (bVar6) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14751b8a4 FUN_14751b8a4 body=313 status=ok
// SIG undefined FUN_14751b8a4(void)

longlong * FUN_14751b8a4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14751b9a0:
    *puVar5 = &PTR_LAB_149f1f1d0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14a458120;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14751b9a0;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f1f1d0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14a458120;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14751b9de FUN_14751b9de body=3037 status=ok
// SIG undefined FUN_14751b9de(void)

void FUN_14751b9de(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulonglong uVar10;
  int *piVar11;
  char cVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 **ppuVar17;
  ulonglong uVar18;
  int *piVar19;
  int *piVar20;
  longlong lVar21;
  int *piVar22;
  int *piVar23;
  undefined8 *puVar24;
  int iVar25;
  ulonglong uVar26;
  int *piVar27;
  int *piVar28;
  int iVar29;
  int iVar30;
  int *piVar31;
  int iVar32;
  longlong lVar33;
  int *piVar34;
  longlong lVar35;
  int *piVar36;
  bool bVar37;
  float fVar38;
  undefined1 auStack_4a8 [32];
  undefined8 **local_488;
  undefined8 local_480;
  undefined1 local_478;
  undefined8 local_470;
  undefined8 *local_468;
  undefined8 *local_458;
  undefined8 local_450;
  longlong *local_448;
  undefined4 local_440;
  undefined1 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  longlong *local_420;
  undefined4 local_418;
  undefined1 local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined1 local_3f8 [32];
  undefined1 local_3d8 [16];
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 *local_3b0;
  undefined4 local_3a8;
  undefined8 local_3a0;
  undefined8 *local_398;
  undefined8 uStack_390;
  undefined8 *local_388;
  undefined8 *local_380;
  undefined4 local_378 [4];
  undefined1 local_368 [16];
  undefined1 local_358 [720];
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_450 = param_2;
  if (((*(int *)(param_1 + 0x2b8) != 0) && (*(longlong **)(param_1 + 0x2b0) != (longlong *)0x0)) &&
     (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x30))(), cVar12 != '\0')) {
    if (*(int *)(param_1 + 0x2b8) == 0) {
      plVar16 = (longlong *)0x0;
    }
    else {
      plVar16 = *(longlong **)(param_1 + 0x2b0);
    }
    uVar13 = (**(code **)(*plVar16 + 0x58))();
    *(undefined1 *)(param_1 + 0x2a8) = uVar13;
  }
  if (*(char *)(param_1 + 0x2a8) == '\0') {
    FUN_1475195a2();
  }
  local_398 = (undefined8 *)0x0;
  uStack_390 = 0;
  iVar29 = *(int *)(param_1 + 0x270);
  if ((longlong)iVar29 == 0) {
    uVar18 = 0;
  }
  else {
    lVar35 = *(longlong *)(param_1 + 0x268);
    lVar33 = 0;
    do {
      if (*(int *)(param_1 + 0x340) == 0) {
        plVar16 = (longlong *)0x0;
      }
      else {
        plVar16 = *(longlong **)(param_1 + 0x338);
      }
      cVar12 = (**(code **)(*plVar16 + 0x58))();
      if (cVar12 == '\0') {
        lVar21 = (longlong)(int)uStack_390;
        uVar14 = (int)uStack_390 + 1;
        uStack_390 = CONCAT44(uStack_390._4_4_,uVar14);
        if (uStack_390._4_4_ < uVar14) {
          FUN_14751f848(&local_398);
        }
        puVar24 = local_398;
        local_398[lVar21 * 5] = *(undefined8 *)(lVar35 + lVar33);
        plVar16 = *(longlong **)(lVar35 + 8 + lVar33);
        local_398[lVar21 * 5 + 1] = plVar16;
        if (plVar16 != (longlong *)0x0) {
          (**(code **)(*plVar16 + 8))();
        }
        *(undefined4 *)(puVar24 + lVar21 * 5 + 2) = *(undefined4 *)(lVar35 + 0x10 + lVar33);
        plVar16 = *(longlong **)(lVar35 + 0x18 + lVar33);
        puVar24[lVar21 * 5 + 3] = plVar16;
        if (plVar16 != (longlong *)0x0) {
          (**(code **)(*plVar16 + 8))();
        }
        *(undefined4 *)(puVar24 + lVar21 * 5 + 4) = *(undefined4 *)(lVar35 + 0x20 + lVar33);
      }
      puVar24 = local_398;
      lVar33 = lVar33 + 0x28;
    } while ((longlong)iVar29 * 0x28 != lVar33);
    iVar29 = (int)uStack_390;
    lVar35 = (longlong)(int)uStack_390;
    if (1 < lVar35) {
      memset(local_378,0,0x2f0);
      local_388 = puVar24;
      local_380 = puVar24 + lVar35 * 5 + -5;
      fVar38 = logf((float)iVar29);
      local_378[0] = (int)(longlong)(fVar38 + fVar38);
      ppuVar17 = &local_388;
      do {
        piVar20 = (int *)*ppuVar17;
        piVar23 = (int *)ppuVar17[1];
        iVar29 = *(int *)(ppuVar17 + 2);
        iVar32 = (int)((ulonglong)((longlong)piVar23 - (longlong)piVar20) >> 3) * -0x33333333;
        uVar14 = iVar32 + 1;
        piVar22 = piVar20;
        piVar27 = piVar23;
        if (iVar29 != 0) {
LAB_14751bc42:
          if (8 < (int)uVar14) {
            uVar18 = (ulonglong)(uVar14 >> 1);
            uVar1 = *(undefined8 *)(piVar20 + uVar18 * 10 + 8);
            uVar15 = *(undefined8 *)(piVar20 + uVar18 * 10);
            uVar2 = *(undefined8 *)(piVar20 + uVar18 * 10 + 2);
            uVar3 = *(undefined8 *)(piVar20 + uVar18 * 10 + 4);
            uVar4 = *(undefined8 *)(piVar20 + uVar18 * 10 + 4 + 2);
            *(undefined8 *)(piVar20 + uVar18 * 10 + 8) = *(undefined8 *)(piVar20 + 8);
            uVar5 = *(undefined8 *)piVar20;
            uVar6 = *(undefined8 *)(piVar20 + 2);
            uVar7 = *(undefined8 *)(piVar20 + 6);
            *(undefined8 *)(piVar20 + uVar18 * 10 + 4) = *(undefined8 *)(piVar20 + 4);
            *(undefined8 *)(piVar20 + uVar18 * 10 + 4 + 2) = uVar7;
            *(undefined8 *)(piVar20 + uVar18 * 10) = uVar5;
            *(undefined8 *)(piVar20 + uVar18 * 10 + 2) = uVar6;
            *(undefined8 *)(piVar20 + 8) = uVar1;
            *(undefined8 *)(piVar20 + 4) = uVar3;
            *(undefined8 *)(piVar20 + 6) = uVar4;
            *(undefined8 *)piVar20 = uVar15;
            *(undefined8 *)(piVar20 + 2) = uVar2;
            piVar31 = piVar27 + 10;
            piVar19 = piVar20;
            do {
              piVar11 = piVar19 + 10;
              piVar28 = piVar19 + 10;
              do {
                piVar36 = piVar28;
                piVar19 = piVar11;
                if (piVar27 < piVar19) break;
                piVar11 = piVar19 + 10;
                piVar28 = piVar36 + 10;
              } while ((double)*piVar19 / (double)piVar19[1] <=
                       (double)*piVar20 / (double)piVar20[1]);
              piVar11 = piVar31 + -0x14;
              do {
                piVar28 = piVar31;
                piVar34 = piVar11;
                piVar31 = piVar28 + -10;
                if (piVar31 <= piVar20) break;
                piVar11 = piVar34 + -10;
              } while ((double)*piVar20 / (double)piVar20[1] <=
                       (double)*piVar31 / (double)piVar28[-9]);
              if (piVar31 < piVar19) goto LAB_14751bdcd;
              uVar1 = *(undefined8 *)(piVar19 + 8);
              uVar15 = *(undefined8 *)piVar19;
              uVar2 = *(undefined8 *)(piVar19 + 2);
              uVar3 = *(undefined8 *)(piVar19 + 4);
              uVar4 = *(undefined8 *)(piVar19 + 6);
              *(undefined8 *)(piVar19 + 8) = *(undefined8 *)(piVar28 + -2);
              uVar5 = *(undefined8 *)piVar31;
              uVar6 = *(undefined8 *)(piVar28 + -8);
              uVar7 = *(undefined8 *)(piVar28 + -4);
              *(undefined8 *)(piVar19 + 4) = *(undefined8 *)(piVar28 + -6);
              *(undefined8 *)(piVar19 + 6) = uVar7;
              *(undefined8 *)piVar19 = uVar5;
              *(undefined8 *)(piVar19 + 2) = uVar6;
              *(undefined8 *)(piVar28 + -2) = uVar1;
              *(undefined8 *)(piVar28 + -6) = uVar3;
              *(undefined8 *)(piVar28 + -4) = uVar4;
              *(undefined8 *)piVar31 = uVar15;
              *(undefined8 *)(piVar28 + -8) = uVar2;
            } while( true );
          }
          if (piVar20 < piVar27) {
            do {
              piVar23 = piVar20;
              if (piVar20 + 10 <= piVar27) {
                piVar22 = piVar20 + 10;
                iVar29 = *piVar20;
                do {
                  piVar31 = piVar22;
                  iVar32 = *piVar22;
                  if ((double)*piVar22 / (double)piVar22[1] <= (double)iVar29 / (double)piVar23[1])
                  {
                    piVar31 = piVar23;
                    iVar32 = iVar29;
                  }
                  piVar23 = piVar31;
                  piVar22 = piVar22 + 10;
                  iVar29 = iVar32;
                } while (piVar22 <= piVar27);
              }
              local_68 = *(undefined8 *)(piVar23 + 8);
              local_88 = *(code **)piVar23;
              uStack_80 = *(ulonglong *)(piVar23 + 2);
              local_78 = *(ulonglong *)(piVar23 + 4);
              uStack_70 = *(ulonglong *)(piVar23 + 6);
              pcVar9 = local_88;
              uVar18 = uStack_80;
              *(undefined8 *)(piVar23 + 8) = *(undefined8 *)(piVar27 + 8);
              uVar1 = *(undefined8 *)piVar27;
              uVar15 = *(undefined8 *)(piVar27 + 2);
              uVar2 = *(undefined8 *)(piVar27 + 6);
              *(undefined8 *)(piVar23 + 4) = *(undefined8 *)(piVar27 + 4);
              *(undefined8 *)(piVar23 + 6) = uVar2;
              *(undefined8 *)piVar23 = uVar1;
              *(undefined8 *)(piVar23 + 2) = uVar15;
              *(undefined8 *)(piVar27 + 8) = local_68;
              local_88._4_4_ = (int)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (int)(uStack_80 >> 0x20);
              *(ulonglong *)(piVar27 + 4) = local_78;
              *(ulonglong *)(piVar27 + 6) = uStack_70;
              *piVar27 = (int)local_88;
              piVar27[1] = local_88._4_4_;
              piVar27[2] = (int)uStack_80;
              piVar27[3] = uStack_80._4_4_;
              piVar27 = piVar27 + -10;
              local_88 = pcVar9;
              uStack_80 = uVar18;
            } while (piVar20 < piVar27);
          }
          goto LAB_14751c328;
        }
LAB_14751bec5:
        if (uVar14 != 0) {
          iVar29 = (iVar32 - (iVar32 + -1 >> 0x1f)) + -1 >> 1;
          iVar32 = iVar29;
joined_r0x00014751beec:
          do {
            iVar30 = iVar29 * 2 + 1;
            if (iVar30 < (int)uVar14) {
              iVar25 = iVar29 * 2 + 2;
              if ((iVar25 < (int)uVar14) &&
                 ((double)piVar20[(longlong)iVar30 * 10] /
                  (double)piVar20[(longlong)iVar30 * 10 + 1] <=
                  (double)piVar20[(longlong)iVar25 * 10] /
                  (double)piVar20[(longlong)iVar25 * 10 + 1])) {
                iVar30 = iVar25;
              }
              lVar33 = (longlong)iVar29;
              lVar35 = (longlong)iVar30;
              if ((double)piVar20[lVar33 * 10] / (double)piVar20[lVar33 * 10 + 1] <
                  (double)piVar20[lVar35 * 10] / (double)piVar20[lVar35 * 10 + 1]) {
                piVar27 = piVar20 + lVar33 * 10;
                piVar23 = piVar20 + lVar35 * 10;
                local_68 = *(undefined8 *)(piVar27 + 8);
                local_88 = *(code **)piVar27;
                uStack_80 = *(ulonglong *)(piVar27 + 2);
                local_78 = *(ulonglong *)(piVar27 + 4);
                uStack_70 = *(ulonglong *)(piVar27 + 6);
                pcVar9 = local_88;
                uVar18 = uStack_80;
                *(undefined8 *)(piVar27 + 8) = *(undefined8 *)(piVar23 + 8);
                uVar1 = *(undefined8 *)piVar23;
                uVar15 = *(undefined8 *)(piVar23 + 2);
                uVar2 = *(undefined8 *)(piVar23 + 6);
                *(undefined8 *)(piVar27 + 4) = *(undefined8 *)(piVar23 + 4);
                *(undefined8 *)(piVar27 + 6) = uVar2;
                *(undefined8 *)piVar27 = uVar1;
                *(undefined8 *)(piVar27 + 2) = uVar15;
                *(undefined8 *)(piVar23 + 8) = local_68;
                local_88._4_4_ = (int)((ulonglong)local_88 >> 0x20);
                uStack_80._4_4_ = (int)(uStack_80 >> 0x20);
                *(ulonglong *)(piVar23 + 4) = local_78;
                *(ulonglong *)(piVar23 + 6) = uStack_70;
                *piVar23 = (int)local_88;
                piVar23[1] = local_88._4_4_;
                piVar23[2] = (int)uStack_80;
                piVar23[3] = uStack_80._4_4_;
                iVar29 = iVar30;
                local_88 = pcVar9;
                uStack_80 = uVar18;
                goto joined_r0x00014751beec;
              }
            }
            bVar37 = iVar32 != 0;
            iVar29 = iVar32 + -1;
            iVar32 = iVar29;
          } while (bVar37);
          if (1 < (int)uVar14) {
            uVar26 = (ulonglong)uVar14 - 1;
            local_68 = *(undefined8 *)(piVar20 + 8);
            local_88 = *(code **)piVar20;
            uStack_80 = *(ulonglong *)(piVar20 + 2);
            local_78 = *(ulonglong *)(piVar20 + 4);
            uStack_70 = *(ulonglong *)(piVar20 + 6);
            pcVar9 = local_88;
            uVar18 = uStack_80;
            *(undefined8 *)(piVar20 + 8) = *(undefined8 *)(piVar20 + uVar26 * 10 + 8);
            uVar1 = *(undefined8 *)(piVar20 + uVar26 * 10);
            uVar15 = *(undefined8 *)(piVar20 + uVar26 * 10 + 2);
            uVar2 = *(undefined8 *)(piVar20 + uVar26 * 10 + 4 + 2);
            *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar20 + uVar26 * 10 + 4);
            *(undefined8 *)(piVar20 + 6) = uVar2;
            *(undefined8 *)piVar20 = uVar1;
            *(undefined8 *)(piVar20 + 2) = uVar15;
            *(undefined8 *)(piVar20 + uVar26 * 10 + 8) = local_68;
            local_88._4_4_ = (int)((ulonglong)local_88 >> 0x20);
            uStack_80._4_4_ = (int)(uStack_80 >> 0x20);
            *(ulonglong *)(piVar20 + uVar26 * 10 + 4) = local_78;
            *(ulonglong *)((longlong)(piVar20 + uVar26 * 10 + 4) + 8) = uStack_70;
            piVar27 = piVar20 + uVar26 * 10;
            *piVar27 = (int)local_88;
            piVar27[1] = local_88._4_4_;
            piVar27[2] = (int)uStack_80;
            piVar27[3] = uStack_80._4_4_;
            local_88 = pcVar9;
            uStack_80 = uVar18;
            if (uVar14 != 2) {
              do {
                iVar29 = 0;
                iVar30 = 1;
                iVar32 = 0;
                do {
                  lVar35 = (longlong)(iVar29 + 2);
                  iVar25 = iVar30;
                  if ((lVar35 < (longlong)uVar26) &&
                     ((double)piVar20[(longlong)iVar30 * 10] /
                      (double)piVar20[(longlong)iVar30 * 10 + 1] <=
                      (double)piVar20[lVar35 * 10] / (double)piVar20[lVar35 * 10 + 1])) {
                    iVar25 = iVar29 + 2;
                  }
                  lVar35 = (longlong)iVar32;
                  lVar33 = (longlong)iVar25;
                  if ((double)piVar20[lVar33 * 10] / (double)piVar20[lVar33 * 10 + 1] <=
                      (double)piVar20[lVar35 * 10] / (double)piVar20[lVar35 * 10 + 1]) break;
                  piVar27 = piVar20 + lVar35 * 10;
                  piVar23 = piVar20 + lVar33 * 10;
                  uVar1 = *(undefined8 *)(piVar27 + 8);
                  uVar15 = *(undefined8 *)piVar27;
                  uVar2 = *(undefined8 *)(piVar27 + 2);
                  uVar3 = *(undefined8 *)(piVar27 + 4);
                  uVar4 = *(undefined8 *)(piVar27 + 6);
                  *(undefined8 *)(piVar27 + 8) = *(undefined8 *)(piVar23 + 8);
                  uVar5 = *(undefined8 *)piVar23;
                  uVar6 = *(undefined8 *)(piVar23 + 2);
                  uVar7 = *(undefined8 *)(piVar23 + 6);
                  *(undefined8 *)(piVar27 + 4) = *(undefined8 *)(piVar23 + 4);
                  *(undefined8 *)(piVar27 + 6) = uVar7;
                  *(undefined8 *)piVar27 = uVar5;
                  *(undefined8 *)(piVar27 + 2) = uVar6;
                  *(undefined8 *)(piVar23 + 8) = uVar1;
                  *(undefined8 *)(piVar23 + 4) = uVar3;
                  *(undefined8 *)(piVar23 + 6) = uVar4;
                  *(undefined8 *)piVar23 = uVar15;
                  *(undefined8 *)(piVar23 + 2) = uVar2;
                  iVar29 = iVar25 * 2;
                  iVar30 = iVar25 * 2 + 1;
                  iVar32 = iVar25;
                } while ((longlong)iVar30 < (longlong)uVar26);
                uVar18 = uVar26 - 1;
                local_68 = *(undefined8 *)(piVar20 + 8);
                local_88 = *(code **)piVar20;
                uStack_80 = *(ulonglong *)(piVar20 + 2);
                local_78 = *(ulonglong *)(piVar20 + 4);
                uStack_70 = *(ulonglong *)(piVar20 + 6);
                pcVar9 = local_88;
                uVar10 = uStack_80;
                *(undefined8 *)(piVar20 + 8) = *(undefined8 *)(piVar20 + uVar18 * 10 + 8);
                uVar1 = *(undefined8 *)(piVar20 + uVar18 * 10);
                uVar15 = *(undefined8 *)(piVar20 + uVar18 * 10 + 2);
                uVar2 = *(undefined8 *)(piVar20 + uVar18 * 10 + 4 + 2);
                *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar20 + uVar18 * 10 + 4);
                *(undefined8 *)(piVar20 + 6) = uVar2;
                *(undefined8 *)piVar20 = uVar1;
                *(undefined8 *)(piVar20 + 2) = uVar15;
                *(undefined8 *)(piVar20 + uVar18 * 10 + 8) = local_68;
                local_88._4_4_ = (int)((ulonglong)local_88 >> 0x20);
                uStack_80._4_4_ = (int)(uStack_80 >> 0x20);
                *(ulonglong *)(piVar20 + uVar18 * 10 + 4) = local_78;
                *(ulonglong *)((longlong)(piVar20 + uVar18 * 10 + 4) + 8) = uStack_70;
                piVar27 = piVar20 + uVar18 * 10;
                *piVar27 = (int)local_88;
                piVar27[1] = local_88._4_4_;
                piVar27[2] = (int)uStack_80;
                piVar27[3] = uStack_80._4_4_;
                bVar37 = 2 < uVar26;
                uVar26 = uVar18;
                local_88 = pcVar9;
                uStack_80 = uVar10;
              } while (bVar37);
            }
          }
        }
LAB_14751c328:
        ppuVar17 = ppuVar17 + -3;
      } while (&local_388 <= ppuVar17);
    }
    uVar18 = 0;
    if ((int)uStack_390 != 0) {
      local_458 = local_398 + (longlong)(int)uStack_390 * 5;
      puVar24 = local_398;
      do {
        uVar1 = *puVar24;
        local_3b0 = (undefined8 *)0x0;
        local_3a8 = 0;
        local_3a0 = uVar1;
        FUN_1446efa72(&local_3b0,0,3,0x10);
        puVar8 = local_3b0;
        local_3a8 = 3;
        *local_3b0 = &DAT_149efe500;
        uVar15 = FUN_144a3f946();
        puVar8[2] = uVar15;
        *puVar8 = &PTR_FUN_14a458190;
        puVar8[3] = param_1;
        puVar8[4] = uVar1;
        local_3c8 = 0;
        uStack_3c0 = 0;
        local_88 = FUN_14751b59e;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        FUN_14751b75c(local_3d8,param_1,&local_88,&local_3a0);
        local_488 = (undefined8 **)((ulonglong)local_488 & 0xffffffff00000000);
        FUN_1469baa6a(&local_388,local_3d8,&local_3c8,&local_3b0);
        FUN_144a5dc74(&local_88);
        local_78 = local_78 & 0xffffffffffffff00;
        uStack_70 = 0;
        local_68 = 0;
        FUN_142877ef0(local_3f8);
        local_420 = (longlong *)puVar24[3];
        if (local_420 != (longlong *)0x0) {
          (**(code **)(*local_420 + 8))();
        }
        local_418 = *(undefined4 *)(puVar24 + 4);
        local_410 = 1;
        local_408 = 0;
        uStack_400 = 0;
        local_448 = (longlong *)puVar24[1];
        if (local_448 != (longlong *)0x0) {
          (**(code **)(*local_448 + 8))();
        }
        local_440 = *(undefined4 *)(puVar24 + 2);
        local_438 = 1;
        local_430 = 0;
        uStack_428 = 0;
        local_470 = 0;
        local_480 = 0;
        local_478 = 3;
        local_488 = &local_388;
        local_468 = &local_88;
        FUN_146a0d19c(local_450,&local_448,&local_420,local_3f8);
        FUN_1449db362(&local_430);
        if (local_448 != (longlong *)0x0) {
          (**(code **)(*local_448 + 0x10))();
        }
        FUN_1449db362(&local_408);
        if (local_420 != (longlong *)0x0) {
          (**(code **)(*local_420 + 0x10))();
        }
        FUN_1449db362(&uStack_70);
        if (local_88 != (code *)0x0) {
          (**(code **)(*(longlong *)local_88 + 0x10))();
        }
        FUN_1449db362(local_358);
        FUN_1449db362(local_368);
        FUN_1449db362(local_378);
        FUN_1449db362(&local_388);
        puVar24 = puVar24 + 5;
      } while (puVar24 != local_458);
      uVar18 = uStack_390 & 0xffffffff;
    }
  }
  FUN_14751cce1(local_398,uVar18);
  if (local_398 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14751bdcd:
  local_68 = *(undefined8 *)(piVar20 + 8);
  local_88 = *(code **)piVar20;
  uStack_80 = *(ulonglong *)(piVar20 + 2);
  local_78 = *(ulonglong *)(piVar20 + 4);
  uStack_70 = *(ulonglong *)(piVar20 + 6);
  pcVar9 = local_88;
  uVar18 = uStack_80;
  *(undefined8 *)(piVar20 + 8) = *(undefined8 *)(piVar28 + -2);
  uVar1 = *(undefined8 *)piVar31;
  uVar15 = *(undefined8 *)(piVar28 + -8);
  uVar2 = *(undefined8 *)(piVar28 + -4);
  *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar28 + -6);
  *(undefined8 *)(piVar20 + 6) = uVar2;
  *(undefined8 *)piVar20 = uVar1;
  *(undefined8 *)(piVar20 + 2) = uVar15;
  *(undefined8 *)(piVar28 + -2) = local_68;
  local_88._4_4_ = (int)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (int)(uStack_80 >> 0x20);
  *(ulonglong *)(piVar28 + -6) = local_78;
  *(ulonglong *)(piVar28 + -4) = uStack_70;
  *piVar31 = (int)local_88;
  piVar28[-9] = local_88._4_4_;
  piVar28[-8] = (int)uStack_80;
  piVar28[-7] = uStack_80._4_4_;
  iVar29 = iVar29 + -1;
  piVar28 = piVar28 + -0x14;
  local_88 = pcVar9;
  uStack_80 = uVar18;
  if ((longlong)piVar34 - (longlong)piVar22 < (longlong)piVar23 - (longlong)piVar36) {
    if (piVar19 < piVar27) {
      *ppuVar17 = (undefined8 *)piVar19;
      ppuVar17[1] = (undefined8 *)piVar27;
      *(int *)(ppuVar17 + 2) = iVar29;
      ppuVar17 = ppuVar17 + 3;
    }
    piVar36 = piVar20;
    piVar23 = piVar34;
    if (piVar31 <= piVar20 + 10) goto LAB_14751c328;
  }
  else {
    if (piVar20 + 10 < piVar31) {
      *ppuVar17 = (undefined8 *)piVar20;
      ppuVar17[1] = (undefined8 *)piVar28;
      *(int *)(ppuVar17 + 2) = iVar29;
      ppuVar17 = ppuVar17 + 3;
    }
    piVar20 = piVar19;
    piVar28 = piVar27;
    piVar23 = piVar27;
    if (piVar27 <= piVar19) goto LAB_14751c328;
  }
  iVar32 = (int)((ulonglong)((longlong)piVar23 - (longlong)piVar36) >> 3) * -0x33333333;
  uVar14 = iVar32 + 1;
  piVar22 = piVar36;
  piVar27 = piVar28;
  if (iVar29 == 0) goto LAB_14751bec5;
  goto LAB_14751bc42;
}



// FUNCTION 14751c5bc FUN_14751c5bc body=42 status=ok
// SIG undefined FUN_14751c5bc(void)

undefined8 FUN_14751c5bc(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/EngineCustomTimeStep.h",0x29,
                L"Pure virtual not implemented (%s)",L"UEngineCustomTimeStep::Initialize");
  return 0;
}



// FUNCTION 14751c5e6 FUN_14751c5e6 body=41 status=ok
// SIG undefined FUN_14751c5e6(void)

void FUN_14751c5e6(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/EngineCustomTimeStep.h",0x2c,
                L"Pure virtual not implemented (%s)",L"UEngineCustomTimeStep::Shutdown");
  return;
}



// FUNCTION 14751c610 FUN_14751c610 body=42 status=ok
// SIG undefined FUN_14751c610(void)

undefined1 FUN_14751c610(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/EngineCustomTimeStep.h",0x32,
                L"Pure virtual not implemented (%s)",L"UEngineCustomTimeStep::UpdateTimeStep");
  return 1;
}



// FUNCTION 14751c63a FUN_14751c63a body=42 status=ok
// SIG undefined FUN_14751c63a(void)

undefined8 FUN_14751c63a(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/EngineCustomTimeStep.h",0x35,
                L"Pure virtual not implemented (%s)",
                L"UEngineCustomTimeStep::GetSynchronizationState");
  return 0;
}



// FUNCTION 14751c664 FUN_14751c664 body=61 status=ok
// SIG undefined FUN_14751c664(void)

undefined8 * FUN_14751c664(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\TimeManagement\\Public\\FixedFrameRateCustomTimeStep.h",0x1c,
                L"Pure virtual not implemented (%s)",
                L"UFixedFrameRateCustomTimeStep::GetFixedFrameRate");
  *param_2 = &DAT_100000018;
  return param_2;
}



// FUNCTION 14751c6a2 FUN_14751c6a2 body=61 status=ok
// SIG undefined FUN_14751c6a2(void)

undefined8 * FUN_14751c6a2(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\TimeManagement\\Public\\GenlockedCustomTimeStep.h",0x23,
                L"Pure virtual not implemented (%s)",L"UGenlockedCustomTimeStep::GetFixedFrameRate")
  ;
  *param_2 = &DAT_100000018;
  return param_2;
}



// FUNCTION 14751c6e0 FUN_14751c6e0 body=42 status=ok
// SIG undefined FUN_14751c6e0(void)

undefined8 FUN_14751c6e0(void)

{
  FUN_140033559("Runtime\\TimeManagement\\Public\\GenlockedCustomTimeStep.h",0x1c,
                L"Pure virtual not implemented (%s)",L"UGenlockedCustomTimeStep::WaitForSync");
  return 0;
}



// FUNCTION 14751c70a FUN_14751c70a body=26 status=ok
// SIG undefined FUN_14751c70a(void)

undefined8 FUN_14751c70a(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2c0))();
  return param_2;
}



// FUNCTION 14751c724 FUN_14751c724 body=45 status=ok
// SIG undefined FUN_14751c724(void)

undefined8 FUN_14751c724(void)

{
  FUN_140033559("Runtime\\TimeManagement\\Public\\GenlockedCustomTimeStep.h",0x29,
                L"Pure virtual not implemented (%s)",
                L"UGenlockedCustomTimeStep::GetLastSyncCountDelta");
  return 1;
}



// FUNCTION 14751c752 FUN_14751c752 body=42 status=ok
// SIG undefined FUN_14751c752(void)

undefined8 FUN_14751c752(void)

{
  FUN_140033559("Runtime\\TimeManagement\\Public\\GenlockedCustomTimeStep.h",0x2c,
                L"Pure virtual not implemented (%s)",
                L"UGenlockedCustomTimeStep::IsLastSyncDataValid");
  return 0;
}



// FUNCTION 14751c784 FUN_14751c784 body=42 status=ok
// SIG undefined FUN_14751c784(void)

undefined8 FUN_14751c784(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/TimecodeProvider.h",0x5e,
                L"Pure virtual not implemented (%s)",L"UTimecodeProvider::IsSynchronized");
  return 0;
}



// FUNCTION 14751c7ae FUN_14751c7ae body=42 status=ok
// SIG undefined FUN_14751c7ae(void)

undefined8 FUN_14751c7ae(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/TimecodeProvider.h",0x62,
                L"Pure virtual not implemented (%s)",L"UTimecodeProvider::Initialize");
  return 0;
}



// FUNCTION 14751c7d8 FUN_14751c7d8 body=41 status=ok
// SIG undefined FUN_14751c7d8(void)

void FUN_14751c7d8(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/TimecodeProvider.h",0x65,
                L"Pure virtual not implemented (%s)",L"UTimecodeProvider::Shutdown");
  return;
}



// FUNCTION 14751c80c FUN_14751c80c body=55 status=ok
// SIG undefined FUN_14751c80c(void)

undefined8 * FUN_14751c80c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h",0x52,
                L"Pure virtual not implemented (%s)",
                L"UTimeSynchronizationSource::GetNewestSampleTime");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14751c844 FUN_14751c844 body=55 status=ok
// SIG undefined FUN_14751c844(void)

undefined8 * FUN_14751c844(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h",0x58,
                L"Pure virtual not implemented (%s)",
                L"UTimeSynchronizationSource::GetOldestSampleTime");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14751c87c FUN_14751c87c body=61 status=ok
// SIG undefined FUN_14751c87c(void)

undefined8 * FUN_14751c87c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h",0x5b,
                L"Pure virtual not implemented (%s)",L"UTimeSynchronizationSource::GetFrameRate");
  *param_2 = 0x10000ea60;
  return param_2;
}



// FUNCTION 14751c8ba FUN_14751c8ba body=42 status=ok
// SIG undefined FUN_14751c8ba(void)

undefined8 FUN_14751c8ba(void)

{
  FUN_140033559("Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h",0x5e,
                L"Pure virtual not implemented (%s)",L"UTimeSynchronizationSource::IsReady");
  return 0;
}



// FUNCTION 14751c8e4 FUN_14751c8e4 body=42 status=ok
// SIG undefined FUN_14751c8e4(void)

undefined8 FUN_14751c8e4(void)

{
  FUN_140033559("Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h",0x61,
                L"Pure virtual not implemented (%s)",L"UTimeSynchronizationSource::Open");
  return 0;
}



// FUNCTION 14751c90e FUN_14751c90e body=41 status=ok
// SIG undefined FUN_14751c90e(void)

void FUN_14751c90e(void)

{
  FUN_140033559("Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h",100,
                L"Pure virtual not implemented (%s)",L"UTimeSynchronizationSource::Start");
  return;
}



// FUNCTION 14751c938 FUN_14751c938 body=41 status=ok
// SIG undefined FUN_14751c938(void)

void FUN_14751c938(void)

{
  FUN_140033559("Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h",0x67,
                L"Pure virtual not implemented (%s)",L"UTimeSynchronizationSource::Close");
  return;
}



// FUNCTION 14751c962 FUN_14751c962 body=54 status=ok
// SIG undefined FUN_14751c962(void)

undefined8 * FUN_14751c962(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\TimeManagement\\Public\\TimeSynchronizationSource.h",0x6a,
                L"Pure virtual not implemented (%s)",L"UTimeSynchronizationSource::GetDisplayName");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14751ca2a FUN_14751ca2a body=59 status=ok
// SIG undefined FUN_14751ca2a(void)

undefined8 FUN_14751ca2a(longlong *param_1)

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



// FUNCTION 14751cb38 FUN_14751cb38 body=59 status=ok
// SIG undefined FUN_14751cb38(void)

undefined8 FUN_14751cb38(longlong *param_1)

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



// FUNCTION 14751cbda FUN_14751cbda body=130 status=ok
// SIG undefined FUN_14751cbda(void)

void FUN_14751cbda(longlong *param_1,longlong *param_2)

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



// FUNCTION 14751cc5e FUN_14751cc5e body=130 status=ok
// SIG undefined FUN_14751cc5e(void)

void FUN_14751cc5e(longlong *param_1,longlong *param_2)

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



// FUNCTION 14751cce1 FUN_14751cce1 body=63 status=ok
// SIG undefined FUN_14751cce1(void)

void FUN_14751cce1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if ((longlong *)plVar1[-2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-2] + 0x10))();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14751cd20 FUN_14751cd20 body=115 status=ok
// SIG undefined FUN_14751cd20(void)

void FUN_14751cd20(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14751cd93 FUN_14751cd93 body=114 status=ok
// SIG undefined FUN_14751cd93(void)

void FUN_14751cd93(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      plVar1 = *(longlong **)(param_2 + 8 + lVar2);
      *(longlong **)(param_1 + 8 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x10 + lVar2) = *(undefined4 *)(param_2 + 0x10 + lVar2);
      plVar1 = *(longlong **)(param_2 + 0x18 + lVar2);
      *(longlong **)(param_1 + 0x18 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x20 + lVar2) = *(undefined4 *)(param_2 + 0x20 + lVar2);
      lVar2 = lVar2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14751ce06 FUN_14751ce06 body=130 status=ok
// SIG undefined FUN_14751ce06(void)

void FUN_14751ce06(longlong *param_1,longlong *param_2)

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



// FUNCTION 14751ce8a FUN_14751ce8a body=63 status=ok
// SIG undefined FUN_14751ce8a(void)

void FUN_14751ce8a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar1 = &PTR_FUN_14a4574d0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  return;
}



// FUNCTION 14751ceca FUN_14751ceca body=31 status=ok
// SIG undefined FUN_14751ceca(void)

undefined8 FUN_14751ceca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14751cf06 FUN_14751cf06 body=93 status=ok
// SIG undefined FUN_14751cf06(void)

void FUN_14751cf06(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a457460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14751cf64 FUN_14751cf64 body=126 status=ok
// SIG undefined FUN_14751cf64(void)

void FUN_14751cf64(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a457460;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014751cfd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14751cfee FUN_14751cfee body=21 status=ok
// SIG undefined FUN_14751cfee(void)

undefined8 FUN_14751cfee(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14751d004 FUN_14751d004 body=52 status=ok
// SIG undefined FUN_14751d004(void)

undefined8 * FUN_14751d004(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4574d0;
  FUN_14751d0e0(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14751d054 FUN_14751d054 body=139 status=ok
// SIG undefined FUN_14751d054(void)

undefined8 FUN_14751d054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14751d282(local_38,&local_39);
  FUN_14751d128(local_38,param_2,param_3);
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
  FUN_14751d19c(param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14751d0e0 FUN_14751d0e0 body=72 status=ok
// SIG undefined FUN_14751d0e0(void)

void FUN_14751d0e0(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14751d128 FUN_14751d128 body=115 status=ok
// SIG undefined FUN_14751d128(void)

longlong * FUN_14751d128(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_147519616(*param_1,param_3);
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



// FUNCTION 14751d19c FUN_14751d19c body=230 status=ok
// SIG undefined FUN_14751d19c(void)

void FUN_14751d19c(longlong param_1)

{
  FUN_141515cba(param_1 + 0x2e8);
  FUN_1449db362(param_1 + 0x2d8);
  FUN_1449db362(param_1 + 0x2c8);
  if (*(longlong **)(param_1 + 0x2b0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2b0) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x2a0);
  if (*(longlong **)(param_1 + 0x288) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x288) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x278);
  if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
  }
  FUN_14751cce1(*(undefined8 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600));
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x228);
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1d0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14751d282 FUN_14751d282 body=340 status=ok
// SIG undefined FUN_14751d282(void)

undefined8 * FUN_14751d282(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x358);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a457580;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x348);
  FUN_14751d3d8(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14751d5b6(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14751d369;
    param_1[1] = 0;
LAB_14751d333:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14751d369;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_14751d369;
      goto LAB_14751d333;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14751d369;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14751d369:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x348;
  FUN_140a52e78(*param_1,"SFrameRatePicker",
                ".\\Runtime/TimeManagement/Private/TimeManagementModule.cpp",0xf);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14751d3d8 FUN_14751d3d8 body=195 status=ok
// SIG undefined FUN_14751d3d8(void)

undefined8 * FUN_14751d3d8(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14a4575a0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0x10000ea60;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x55) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  FUN_144a5dc74(param_1 + 0x58);
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  FUN_144a5dc74(param_1 + 0x5d);
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  FUN_144a5dc74(param_1 + 0x62);
  *(undefined1 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  return param_1;
}



// FUNCTION 14751d49c FUN_14751d49c body=9 status=ok
// SIG undefined FUN_14751d49c(void)

void FUN_14751d49c(longlong param_1)

{
  FUN_14751d4ea(param_1 + 0x10);
  return;
}



// FUNCTION 14751d4a6 FUN_14751d4a6 body=29 status=ok
// SIG undefined FUN_14751d4a6(void)

undefined8 FUN_14751d4a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14751d4c4 FUN_14751d4c4 body=38 status=ok
// SIG undefined FUN_14751d4c4(void)

undefined8 FUN_14751d4c4(undefined8 param_1,int param_2)

{
  FUN_14751d4ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14751d4ea FUN_14751d4ea body=204 status=ok
// SIG undefined FUN_14751d4ea(void)

void FUN_14751d4ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4575a0;
  FUN_1449db362(param_1 + 0x67);
  FUN_1449db362(param_1 + 0x65);
  if ((longlong *)param_1[0x62] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x62] + 0x10))();
  }
  FUN_1449db362(param_1 + 0x60);
  if ((longlong *)param_1[0x5d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5d] + 0x10))();
  }
  FUN_1449db362(param_1 + 0x5b);
  if ((longlong *)param_1[0x58] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x58] + 0x10))();
  }
  FUN_1449db362(param_1 + 0x56);
  FUN_1449db362(param_1 + 0x53);
  FUN_1449db362(param_1 + 0x51);
  FUN_14751cce1(param_1[0x4d],*(undefined4 *)(param_1 + 0x4e));
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_14171f70c(param_1);
  return;
}



// FUNCTION 14751d5b6 FUN_14751d5b6 body=167 status=ok
// SIG undefined FUN_14751d5b6(void)

void FUN_14751d5b6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14751d631;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14751d631;
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
LAB_14751d631:
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
                    /* WARNING: Could not recover jumptable at 0x00014751d651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14751d65e FUN_14751d65e body=340 status=ok
// SIG undefined FUN_14751d65e(void)

undefined8 * FUN_14751d65e(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x328);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4577e0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x318);
  FUN_14751d7b4(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14751d8ee(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14751d745;
    param_1[1] = 0;
LAB_14751d70f:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14751d745;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_14751d745;
      goto LAB_14751d70f;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14751d745;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14751d745:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x318;
  FUN_140a52e78(*param_1,"SErrorHint",
                ".\\Runtime/TimeManagement/Private/Widgets/SFrameRateEntryBox.cpp",0x16);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14751d7b4 FUN_14751d7b4 body=106 status=ok
// SIG undefined FUN_14751d7b4(void)

undefined8 * FUN_14751d7b4(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_14a457800;
  param_1[0x4d] = &PTR_FUN_14a457a40;
  *(undefined2 *)(param_1 + 0x4e) = 0x19;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  FUN_14285ff5a(param_1 + 0x51);
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  FUN_144a5dc74(param_1 + 0x61);
  return param_1;
}



// FUNCTION 14751d81e FUN_14751d81e body=9 status=ok
// SIG undefined FUN_14751d81e(void)

void FUN_14751d81e(longlong param_1)

{
  FUN_14751d86c(param_1 + 0x10);
  return;
}



// FUNCTION 14751d828 FUN_14751d828 body=29 status=ok
// SIG undefined FUN_14751d828(void)

undefined8 FUN_14751d828(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14751d846 FUN_14751d846 body=38 status=ok
// SIG undefined FUN_14751d846(void)

undefined8 FUN_14751d846(undefined8 param_1,int param_2)

{
  FUN_14751d86c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14751d86c FUN_14751d86c body=130 status=ok
// SIG undefined FUN_14751d86c(void)

void FUN_14751d86c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a457800;
  param_1[0x4d] = &PTR_FUN_14a457a40;
  if ((longlong *)param_1[0x61] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x61] + 0x10))();
  }
  plVar3 = (longlong *)param_1[0x60];
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
  FUN_1402bc42a(param_1 + 0x51);
  FUN_1449db362(param_1 + 0x4f);
  FUN_14171f70c(param_1);
  return;
}



// FUNCTION 14751d8ee FUN_14751d8ee body=167 status=ok
// SIG undefined FUN_14751d8ee(void)

void FUN_14751d8ee(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14751d969;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14751d969;
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
LAB_14751d969:
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
                    /* WARNING: Could not recover jumptable at 0x00014751d989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14751d996 FUN_14751d996 body=313 status=ok
// SIG undefined FUN_14751d996(void)

longlong * FUN_14751d996(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14751da92:
    *puVar5 = &PTR_LAB_149f05a70;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14a457a60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14751da92;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05a70;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14a457a60;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14751dad0 FUN_14751dad0 body=64 status=ok
// SIG undefined FUN_14751dad0(void)

undefined8 * FUN_14751dad0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a457a60;
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



// FUNCTION 14751db14 FUN_14751db14 body=81 status=ok
// SIG undefined FUN_14751db14(void)

undefined8 FUN_14751db14(longlong param_1)

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



// FUNCTION 14751db6c FUN_14751db6c body=89 status=ok
// SIG undefined FUN_14751db6c(void)

bool FUN_14751db6c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14751dbb7;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14751dbb7:
  return lVar6 == param_2;
}



// FUNCTION 14751dbe2 FUN_14751dbe2 body=118 status=ok
// SIG undefined FUN_14751dbe2(void)

void FUN_14751dbe2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a457a60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751dc58 FUN_14751dc58 body=118 status=ok
// SIG undefined FUN_14751dc58(void)

void FUN_14751dc58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a457a60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751dcce FUN_14751dcce body=156 status=ok
// SIG undefined FUN_14751dcce(void)

void FUN_14751dcce(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a457a60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014751dd5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14751dd6a FUN_14751dd6a body=105 status=ok
// SIG undefined FUN_14751dd6a(void)

undefined8 FUN_14751dd6a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14751ddbe:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14751ddbe;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 14751ddd4 FUN_14751ddd4 body=162 status=ok
// SIG undefined FUN_14751ddd4(void)

ulonglong FUN_14751ddd4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14751de54:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14751de54;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_30[0] != (longlong *)0x0)) {
      (**(code **)(*local_30[0] + 0x10))();
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14751de78 FUN_14751de78 body=313 status=ok
// SIG undefined FUN_14751de78(void)

longlong * FUN_14751de78(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14751df74:
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14a457ad0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14751df74;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0eb50;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14a457ad0;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14751dfb2 FUN_14751dfb2 body=64 status=ok
// SIG undefined FUN_14751dfb2(void)

undefined8 * FUN_14751dfb2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a457ad0;
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



// FUNCTION 14751dff6 FUN_14751dff6 body=81 status=ok
// SIG undefined FUN_14751dff6(void)

undefined8 FUN_14751dff6(longlong param_1)

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



// FUNCTION 14751e04e FUN_14751e04e body=89 status=ok
// SIG undefined FUN_14751e04e(void)

bool FUN_14751e04e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14751e099;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14751e099:
  return lVar6 == param_2;
}



// FUNCTION 14751e0c4 FUN_14751e0c4 body=118 status=ok
// SIG undefined FUN_14751e0c4(void)

void FUN_14751e0c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a457ad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751e13a FUN_14751e13a body=118 status=ok
// SIG undefined FUN_14751e13a(void)

void FUN_14751e13a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0eb50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a457ad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751e1b0 FUN_14751e1b0 body=156 status=ok
// SIG undefined FUN_14751e1b0(void)

void FUN_14751e1b0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f0eb50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a457ad0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014751e23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14751e24c FUN_14751e24c body=104 status=ok
// SIG undefined FUN_14751e24c(void)

void FUN_14751e24c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014751e299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014751e2aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14751e2b4 FUN_14751e2b4 body=101 status=ok
// SIG undefined FUN_14751e2b4(void)

ulonglong FUN_14751e2b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14751e30e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14751e30e;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14751e31a FUN_14751e31a body=313 status=ok
// SIG undefined FUN_14751e31a(void)

longlong * FUN_14751e31a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14751e416:
    *puVar5 = &PTR_LAB_149f0a860;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14a457b40;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14751e416;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0a860;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14a457b40;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14751e454 FUN_14751e454 body=64 status=ok
// SIG undefined FUN_14751e454(void)

undefined8 * FUN_14751e454(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a457b40;
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



// FUNCTION 14751e498 FUN_14751e498 body=81 status=ok
// SIG undefined FUN_14751e498(void)

undefined8 FUN_14751e498(longlong param_1)

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



// FUNCTION 14751e4f0 FUN_14751e4f0 body=89 status=ok
// SIG undefined FUN_14751e4f0(void)

bool FUN_14751e4f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14751e53b;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14751e53b:
  return lVar6 == param_2;
}



// FUNCTION 14751e566 FUN_14751e566 body=118 status=ok
// SIG undefined FUN_14751e566(void)

void FUN_14751e566(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0a860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a457b40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751e5dc FUN_14751e5dc body=118 status=ok
// SIG undefined FUN_14751e5dc(void)

void FUN_14751e5dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f0a860;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a457b40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751e652 FUN_14751e652 body=156 status=ok
// SIG undefined FUN_14751e652(void)

void FUN_14751e652(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f0a860;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a457b40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014751e6de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14751e6ee FUN_14751e6ee body=105 status=ok
// SIG undefined FUN_14751e6ee(void)

undefined8 FUN_14751e6ee(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14751e742:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14751e742;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 14751e758 FUN_14751e758 body=186 status=ok
// SIG undefined FUN_14751e758(void)

ulonglong FUN_14751e758(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14751e7f0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14751e7f0;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_28 != (longlong *)0x0)) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14751e814 FUN_14751e814 body=313 status=ok
// SIG undefined FUN_14751e814(void)

longlong * FUN_14751e814(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14751e910:
    *puVar5 = &PTR_LAB_149f05a70;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14a457bb0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14751e910;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05a70;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14a457bb0;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14751e94e FUN_14751e94e body=64 status=ok
// SIG undefined FUN_14751e94e(void)

undefined8 * FUN_14751e94e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a457bb0;
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



// FUNCTION 14751e992 FUN_14751e992 body=81 status=ok
// SIG undefined FUN_14751e992(void)

undefined8 FUN_14751e992(longlong param_1)

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



// FUNCTION 14751e9ea FUN_14751e9ea body=89 status=ok
// SIG undefined FUN_14751e9ea(void)

bool FUN_14751e9ea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14751ea35;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14751ea35:
  return lVar6 == param_2;
}



// FUNCTION 14751ea60 FUN_14751ea60 body=118 status=ok
// SIG undefined FUN_14751ea60(void)

void FUN_14751ea60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a457bb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751ead6 FUN_14751ead6 body=118 status=ok
// SIG undefined FUN_14751ead6(void)

void FUN_14751ead6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a457bb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751eb4c FUN_14751eb4c body=156 status=ok
// SIG undefined FUN_14751eb4c(void)

void FUN_14751eb4c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a457bb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014751ebd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14751ebe8 FUN_14751ebe8 body=105 status=ok
// SIG undefined FUN_14751ebe8(void)

undefined8 FUN_14751ebe8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14751ec3c:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14751ec3c;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 14751ec52 FUN_14751ec52 body=162 status=ok
// SIG undefined FUN_14751ec52(void)

ulonglong FUN_14751ec52(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14751ecd2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14751ecd2;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_30[0] != (longlong *)0x0)) {
      (**(code **)(*local_30[0] + 0x10))();
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14751ecf6 FUN_14751ecf6 body=282 status=ok
// SIG undefined FUN_14751ecf6(void)

longlong * FUN_14751ecf6(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14751ee11();
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14751ef6e(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14751eda3;
    param_1[1] = 0;
LAB_14751ed6d:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14751eda3;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_14751eda3;
      goto LAB_14751ed6d;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14751eda3;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14751eda3:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x2c0;
  FUN_140a52e78(*param_1,"SFrameRateEntryBox",
                ".\\Runtime/TimeManagement/Private/Widgets/SFrameRatePicker.cpp",0x58);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14751ee11 FUN_14751ee11 body=161 status=ok
// SIG undefined FUN_14751ee11(void)

undefined8 * FUN_14751ee11(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2d0);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14a457c20;
  memset(puVar1 + 2,0,0x2c0);
  FUN_140a55f88(puVar1 + 2);
  puVar1[2] = &PTR_FUN_14a457c40;
  puVar1[0x4f] = 0x10000ea60;
  *(undefined1 *)(puVar1 + 0x50) = 0;
  *(undefined2 *)(puVar1 + 0x55) = 0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x294) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x29c) = 0;
  puVar1[0x56] = 0;
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  puVar1[0x59] = 0;
  return puVar1;
}



// FUNCTION 14751eebc FUN_14751eebc body=29 status=ok
// SIG undefined FUN_14751eebc(void)

undefined8 FUN_14751eebc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14751eeda FUN_14751eeda body=38 status=ok
// SIG undefined FUN_14751eeda(void)

undefined8 FUN_14751eeda(undefined8 param_1,int param_2)

{
  FUN_14751ef00();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14751ef00 FUN_14751ef00 body=110 status=ok
// SIG undefined FUN_14751ef00(void)

void FUN_14751ef00(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a457c40;
  plVar3 = (longlong *)param_1[0x57];
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
  FUN_1449db362(param_1 + 0x54);
  FUN_1449db362(param_1 + 0x51);
  FUN_1449db362(param_1 + 0x4f);
  FUN_14171f70c(param_1);
  return;
}



// FUNCTION 14751ef6e FUN_14751ef6e body=167 status=ok
// SIG undefined FUN_14751ef6e(void)

void FUN_14751ef6e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14751efe9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14751efe9;
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
LAB_14751efe9:
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
                    /* WARNING: Could not recover jumptable at 0x00014751f009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14751f016 FUN_14751f016 body=313 status=ok
// SIG undefined FUN_14751f016(void)

longlong * FUN_14751f016(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14751f112:
    *puVar5 = &PTR_LAB_14a457ef0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14a457e80;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_14751f112;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a457ef0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14a457e80;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 14751f150 FUN_14751f150 body=64 status=ok
// SIG undefined FUN_14751f150(void)

undefined8 * FUN_14751f150(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a457e80;
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



// FUNCTION 14751f194 FUN_14751f194 body=81 status=ok
// SIG undefined FUN_14751f194(void)

undefined8 FUN_14751f194(longlong param_1)

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



// FUNCTION 14751f1ec FUN_14751f1ec body=89 status=ok
// SIG undefined FUN_14751f1ec(void)

bool FUN_14751f1ec(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14751f237;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14751f237:
  return lVar6 == param_2;
}



// FUNCTION 14751f26e FUN_14751f26e body=118 status=ok
// SIG undefined FUN_14751f26e(void)

void FUN_14751f26e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a457ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a457e80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751f2e4 FUN_14751f2e4 body=118 status=ok
// SIG undefined FUN_14751f2e4(void)

void FUN_14751f2e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a457ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a457e80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751f35a FUN_14751f35a body=156 status=ok
// SIG undefined FUN_14751f35a(void)

void FUN_14751f35a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a457ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a457e80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014751f3e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14751f3f6 FUN_14751f3f6 body=104 status=ok
// SIG undefined FUN_14751f3f6(void)

void FUN_14751f3f6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014751f443. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014751f454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14751f45e FUN_14751f45e body=101 status=ok
// SIG undefined FUN_14751f45e(void)

ulonglong FUN_14751f45e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14751f4b8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14751f4b8;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14751f4c6 FUN_14751f4c6 body=64 status=ok
// SIG undefined FUN_14751f4c6(void)

undefined8 * FUN_14751f4c6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a457f60;
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



// FUNCTION 14751f50a FUN_14751f50a body=81 status=ok
// SIG undefined FUN_14751f50a(void)

undefined8 FUN_14751f50a(longlong param_1)

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



// FUNCTION 14751f562 FUN_14751f562 body=89 status=ok
// SIG undefined FUN_14751f562(void)

bool FUN_14751f562(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14751f5ad;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14751f5ad:
  return lVar6 == param_2;
}



// FUNCTION 14751f5e4 FUN_14751f5e4 body=118 status=ok
// SIG undefined FUN_14751f5e4(void)

void FUN_14751f5e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a457fd0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14a457f60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751f65a FUN_14751f65a body=118 status=ok
// SIG undefined FUN_14751f65a(void)

void FUN_14751f65a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a457fd0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14a457f60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751f6d0 FUN_14751f6d0 body=156 status=ok
// SIG undefined FUN_14751f6d0(void)

void FUN_14751f6d0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a457fd0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14a457f60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014751f75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14751f76c FUN_14751f76c body=112 status=ok
// SIG undefined FUN_14751f76c(void)

void FUN_14751f76c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x00014751f7bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014751f7d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14751f7dc FUN_14751f7dc body=105 status=ok
// SIG undefined FUN_14751f7dc(void)

ulonglong FUN_14751f7dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14751f83a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14751f83a;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8));
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
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14751f848 FUN_14751f848 body=147 status=ok
// SIG undefined FUN_14751f848(void)

void FUN_14751f848(longlong param_1,int param_2)

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



// FUNCTION 14751f8dc FUN_14751f8dc body=64 status=ok
// SIG undefined FUN_14751f8dc(void)

undefined8 * FUN_14751f8dc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a458120;
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



// FUNCTION 14751f920 FUN_14751f920 body=81 status=ok
// SIG undefined FUN_14751f920(void)

undefined8 FUN_14751f920(longlong param_1)

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



// FUNCTION 14751f978 FUN_14751f978 body=89 status=ok
// SIG undefined FUN_14751f978(void)

bool FUN_14751f978(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14751f9c3;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14751f9c3:
  return lVar6 == param_2;
}



// FUNCTION 14751f9ee FUN_14751f9ee body=118 status=ok
// SIG undefined FUN_14751f9ee(void)

void FUN_14751f9ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1f1d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a458120;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751fa64 FUN_14751fa64 body=118 status=ok
// SIG undefined FUN_14751fa64(void)

void FUN_14751fa64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1f1d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a458120;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14751fada FUN_14751fada body=156 status=ok
// SIG undefined FUN_14751fada(void)

void FUN_14751fada(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f1f1d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a458120;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014751fb66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14751fb76 FUN_14751fb76 body=104 status=ok
// SIG undefined FUN_14751fb76(void)

void FUN_14751fb76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014751fbc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014751fbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14751fbde FUN_14751fbde body=101 status=ok
// SIG undefined FUN_14751fbde(void)

ulonglong FUN_14751fbde(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14751fc38:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14751fc38;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14751fc74 FUN_14751fc74 body=174 status=ok
// SIG undefined FUN_14751fc74(void)

void FUN_14751fc74(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14171b860(param_1,DAT_14cab1b80);
  if (lVar1 == 0) {
    uVar2 = FUN_145a67054();
    plVar3 = (longlong *)FUN_1468ff240(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      local_48 = *(undefined8 *)(param_3 + 4);
      local_58 = *param_3;
      uStack_54 = param_3[1];
      uStack_50 = param_3[2];
      uStack_4c = param_3[3];
      (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
    }
  }
  else {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    local_28 = *(undefined8 *)(param_3 + 4);
    local_40 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14751fd24 FUN_14751fd24 body=282 status=ok
// SIG undefined FUN_14751fd24(void)

void FUN_14751fd24(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
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
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cab1b04;
  uStack_24 = 0xffffffff;
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
  local_48 = CONCAT44(uStack_24,local_28);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  (**(code **)(*param_1 + 0x10))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14751fe40 FUN_14751fe40 body=174 status=ok
// SIG undefined FUN_14751fe40(void)

void FUN_14751fe40(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14171b860(param_1,DAT_14cab1b90);
  if (lVar1 == 0) {
    uVar2 = FUN_145a67054();
    plVar3 = (longlong *)FUN_1468ff240(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      local_48 = *(undefined8 *)(param_3 + 4);
      local_58 = *param_3;
      uStack_54 = param_3[1];
      uStack_50 = param_3[2];
      uStack_4c = param_3[3];
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    }
  }
  else {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    local_28 = *(undefined8 *)(param_3 + 4);
    local_40 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14751fef0 FUN_14751fef0 body=282 status=ok
// SIG undefined FUN_14751fef0(void)

void FUN_14751fef0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
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
  local_38 = 0;
  uStack_30 = 0;
  local_28 = DAT_14cab1b04;
  uStack_24 = 0xffffffff;
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
  local_48 = CONCAT44(uStack_24,local_28);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  (**(code **)(*param_1 + 0x18))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147520016 FUN_147520016 body=139 status=ok
// SIG undefined FUN_147520016(void)

ulonglong FUN_147520016(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = 0;
  FUN_1475200a2(&local_58);
  uVar1 = FUN_14477b072(param_1,DAT_14cab1c60);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_58);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_28);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475200a2 FUN_1475200a2 body=115 status=ok
// SIG undefined FUN_1475200a2(void)

longlong * FUN_1475200a2(longlong *param_1,longlong *param_2)

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
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar4 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 2) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  lVar4 = param_2[3];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = param_2[3];
    }
  }
  param_1[3] = lVar4;
  FUN_1402ae23a(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 14752011c FUN_14752011c body=94 status=ok
// SIG undefined FUN_14752011c(void)

undefined1 FUN_14752011c(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  uVar1 = FUN_14477b072(param_1,DAT_14cab1c70);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752017c FUN_14752017c body=41 status=ok
// SIG undefined FUN_14752017c(void)

void FUN_14752017c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1475201a6 FUN_1475201a6 body=94 status=ok
// SIG undefined FUN_1475201a6(void)

undefined1 FUN_1475201a6(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  uVar1 = FUN_14477b072(param_1,DAT_14cab1c80);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147520206 FUN_147520206 body=41 status=ok
// SIG undefined FUN_147520206(void)

void FUN_147520206(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147520272 FUN_147520272 body=129 status=ok
// SIG undefined FUN_147520272(void)

void FUN_147520272(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  lVar1 = FUN_14171b860(param_1,DAT_14cab1d18);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_38 = param_2;
    (**(code **)(*param_1 + 0x248))(param_1,lVar1,&local_38);
    uVar2 = local_34;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar2);
}



// FUNCTION 14752037a FUN_14752037a body=100 status=ok
// SIG undefined FUN_14752037a(void)

undefined8 *
FUN_14752037a(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140033559(".\\Runtime/MovieScene/Public/Bindings/MovieSceneCustomBinding.h",0x4c,
                L"Pure virtual not implemented (%s)",L"UMovieSceneCustomBinding::ResolveBinding");
  *param_2 = 0;
  plVar3 = *(longlong **)(param_5 + 8);
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
  return param_2;
}



// FUNCTION 1475203de FUN_1475203de body=51 status=ok
// SIG undefined FUN_1475203de(void)

undefined8 FUN_1475203de(undefined8 param_1,longlong param_2)

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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return 0;
}



// FUNCTION 147520416 FUN_147520416 body=42 status=ok
// SIG undefined FUN_147520416(void)

undefined8 FUN_147520416(void)

{
  FUN_140033559(".\\Runtime/MovieScene/Public/Bindings/MovieSceneCustomBinding.h",0x5c,
                L"Pure virtual not implemented (%s)",
                L"UMovieSceneCustomBinding::SupportsBindingCreationFromObject");
  return 0;
}



// FUNCTION 147520440 FUN_147520440 body=42 status=ok
// SIG undefined FUN_147520440(void)

undefined8 FUN_147520440(void)

{
  FUN_140033559(".\\Runtime/MovieScene/Public/Bindings/MovieSceneCustomBinding.h",100,
                L"Pure virtual not implemented (%s)",
                L"UMovieSceneCustomBinding::CreateNewCustomBinding");
  return 0;
}



// FUNCTION 14752046a FUN_14752046a body=51 status=ok
// SIG undefined FUN_14752046a(void)

undefined8 FUN_14752046a(undefined8 param_1,longlong param_2)

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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return 0;
}



// FUNCTION 14752049e FUN_14752049e body=45 status=ok
// SIG undefined FUN_14752049e(void)

void FUN_14752049e(void)

{
  FUN_140033559(".\\Runtime/MovieScene/Public/Bindings/MovieSceneCustomBinding.h",0x7b,
                L"Pure virtual not implemented (%s)",
                L"UMovieSceneCustomBinding::GetBoundObjectClass");
  FUN_1446f8646();
  return;
}



// FUNCTION 1475204d2 FUN_1475204d2 body=45 status=ok
// SIG undefined FUN_1475204d2(void)

longlong FUN_1475204d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x60;
  FUN_145a5bd4e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147520506 FUN_147520506 body=100 status=ok
// SIG undefined FUN_147520506(void)

undefined8 *
FUN_147520506(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140033559(".\\Runtime/MovieScene/Public/Bindings/MovieSceneReplaceableBinding.h",0x48,
                L"Pure virtual not implemented (%s)",
                L"UMovieSceneReplaceableBindingBase::ResolveRuntimeBindingInternal");
  *param_2 = 0;
  plVar3 = *(longlong **)(param_5 + 8);
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
  return param_2;
}



// FUNCTION 14752056a FUN_14752056a body=55 status=ok
// SIG undefined FUN_14752056a(void)

undefined8 * FUN_14752056a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/MovieScene/Public/Bindings/MovieSceneReplaceableBinding.h",0x50,
                L"Pure virtual not implemented (%s)",
                L"UMovieSceneReplaceableBindingBase::GetInnerSpawnableClass");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1475205a2 FUN_1475205a2 body=41 status=ok
// SIG undefined FUN_1475205a2(void)

void FUN_1475205a2(void)

{
  FUN_140033559(".\\Runtime/MovieScene/Public/Bindings/MovieSceneReplaceableBinding.h",0x53,
                L"Pure virtual not implemented (%s)",
                L"UMovieSceneReplaceableBindingBase::InitReplaceableBinding");
  return;
}



// FUNCTION 1475205cc FUN_1475205cc body=50 status=ok
// SIG undefined FUN_1475205cc(void)

void FUN_1475205cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14485c47a(param_2,0);
  param_2[1] = 0;
  FUN_14485c47a(param_2 + 1,0);
  param_2[2] = 0;
  return;
}



// FUNCTION 1475205fe FUN_1475205fe body=50 status=ok
// SIG undefined FUN_1475205fe(void)

void FUN_1475205fe(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_14485c47a(param_2,0);
  param_2[1] = 0;
  FUN_14485c47a(param_2 + 1,0);
  param_2[2] = 0;
  return;
}



// FUNCTION 147520696 FUN_147520696 body=59 status=ok
// SIG undefined FUN_147520696(void)

undefined8 FUN_147520696(longlong *param_1)

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



// FUNCTION 14752077a FUN_14752077a body=62 status=ok
// SIG undefined FUN_14752077a(void)

undefined8 FUN_14752077a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14752089a(param_2,param_3);
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 1475207e0 FUN_1475207e0 body=59 status=ok
// SIG undefined FUN_1475207e0(void)

undefined8 FUN_1475207e0(longlong *param_1)

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



// FUNCTION 147520826 FUN_147520826 body=37 status=ok
// SIG undefined FUN_147520826(void)

void FUN_147520826(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14752089a FUN_14752089a body=88 status=ok
// SIG undefined FUN_14752089a(void)

undefined8 * FUN_14752089a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140a472a8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147520938 FUN_147520938 body=54 status=ok
// SIG undefined FUN_147520938(void)

undefined1 FUN_147520938(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475200a2(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 147520996 FUN_147520996 body=59 status=ok
// SIG undefined FUN_147520996(void)

undefined8 FUN_147520996(longlong *param_1)

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



// FUNCTION 1475209dc FUN_1475209dc body=38 status=ok
// SIG undefined FUN_1475209dc(void)

void FUN_1475209dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147520a7a FUN_147520a7a body=90 status=ok
// SIG undefined FUN_147520a7a(void)

undefined1 FUN_147520a7a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 147520afc FUN_147520afc body=59 status=ok
// SIG undefined FUN_147520afc(void)

undefined8 FUN_147520afc(longlong *param_1)

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



// FUNCTION 147520bc6 FUN_147520bc6 body=90 status=ok
// SIG undefined FUN_147520bc6(void)

undefined1 FUN_147520bc6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 147520c48 FUN_147520c48 body=59 status=ok
// SIG undefined FUN_147520c48(void)

undefined8 FUN_147520c48(longlong *param_1)

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



// FUNCTION 147520d1a FUN_147520d1a body=54 status=ok
// SIG undefined FUN_147520d1a(void)

undefined1 FUN_147520d1a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147520e18(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147520d78 FUN_147520d78 body=59 status=ok
// SIG undefined FUN_147520d78(void)

undefined8 FUN_147520d78(longlong *param_1)

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



// FUNCTION 147520e18 FUN_147520e18 body=99 status=ok
// SIG undefined FUN_147520e18(void)

longlong * FUN_147520e18(longlong *param_1,longlong *param_2)

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
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar4 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 2) = (int)lVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  lVar4 = param_2[3];
  if ((bVar3 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = param_2[3];
    }
  }
  param_1[3] = lVar4;
  return param_1;
}



// FUNCTION 147520ee4 FUN_147520ee4 body=59 status=ok
// SIG undefined FUN_147520ee4(void)

undefined8 FUN_147520ee4(longlong *param_1)

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



// FUNCTION 147520fce FUN_147520fce body=59 status=ok
// SIG undefined FUN_147520fce(void)

undefined8 FUN_147520fce(longlong *param_1)

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



// FUNCTION 1475210fa FUN_1475210fa body=59 status=ok
// SIG undefined FUN_1475210fa(void)

undefined8 FUN_1475210fa(longlong *param_1)

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



// FUNCTION 14752119a FUN_14752119a body=34 status=ok
// SIG undefined FUN_14752119a(void)

undefined8 FUN_14752119a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1475211c0 FUN_1475211c0 body=55 status=ok
// SIG undefined FUN_1475211c0(void)

void FUN_1475211c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab1d78 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab1d78 = FUN_140002ddd(FUN_14633947b,uVar1,L"MovieSceneEvalTemplateBase");
  }
  return;
}



// FUNCTION 147521298 FUN_147521298 body=72 status=ok
// SIG undefined FUN_147521298(void)

uint FUN_147521298(longlong *param_1,uint *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ~(*param_2 ^ param_2[1] ^ param_2[2]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475213ca FUN_1475213ca body=85 status=ok
// SIG undefined FUN_1475213ca(void)

void FUN_1475213ca(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = FUN_1447addd0(param_2,0x10);
  FUN_144a78877(*(undefined4 *)(param_2 + 0x10),uVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475214f0 FUN_1475214f0 body=59 status=ok
// SIG undefined FUN_1475214f0(void)

undefined8 FUN_1475214f0(longlong *param_1)

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



// FUNCTION 147521592 FUN_147521592 body=34 status=ok
// SIG undefined FUN_147521592(void)

undefined8 FUN_147521592(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147521612 FUN_147521612 body=62 status=ok
// SIG undefined FUN_147521612(void)

undefined1 FUN_147521612(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_147521796(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147521678 FUN_147521678 body=59 status=ok
// SIG undefined FUN_147521678(void)

undefined8 FUN_147521678(longlong *param_1)

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



// FUNCTION 1475216be FUN_1475216be body=62 status=ok
// SIG undefined FUN_1475216be(void)

void FUN_1475216be(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14a462590;
    if (param_2[2] != 0) {
      plVar1 = param_2 + 6;
      if ((longlong *)param_2[4] != (longlong *)0x0) {
        plVar1 = (longlong *)param_2[4];
      }
      (**(code **)(*plVar1 + 0x10))();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 14752174a FUN_14752174a body=76 status=ok
// SIG undefined FUN_14752174a(void)

undefined8 * FUN_14752174a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a462590;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 147521796 FUN_147521796 body=290 status=ok
// SIG undefined FUN_147521796(void)

longlong * FUN_147521796(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147521948 FUN_147521948 body=59 status=ok
// SIG undefined FUN_147521948(void)

undefined8 FUN_147521948(longlong *param_1)

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



// FUNCTION 14752198e FUN_14752198e body=45 status=ok
// SIG undefined FUN_14752198e(void)

void FUN_14752198e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_LAB_14a462710;
    FUN_147521a50(param_2 + 2);
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 147521a16 FUN_147521a16 body=57 status=ok
// SIG undefined FUN_147521a16(void)

undefined8 * FUN_147521a16(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a462710;
  FUN_147521a50(param_1 + 2);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147521a50 FUN_147521a50 body=50 status=ok
// SIG undefined FUN_147521a50(void)

void FUN_147521a50(longlong param_1)

{
  FUN_147521a82(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147521a82 FUN_147521a82 body=38 status=ok
// SIG undefined FUN_147521a82(void)

void FUN_147521a82(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147521aa8(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 147521aa8 FUN_147521aa8 body=60 status=ok
// SIG undefined FUN_147521aa8(void)

void FUN_147521aa8(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 8) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 8) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147521b38 FUN_147521b38 body=31 status=ok
// SIG undefined FUN_147521b38(void)

undefined1
FUN_147521b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_147588a0a(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 147521b58 FUN_147521b58 body=230 status=ok
// SIG undefined FUN_147521b58(void)

undefined4
FUN_147521b58(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 != 0) {
    local_60 = param_7;
    local_68 = param_6;
    FUN_147588eea(param_3,param_2,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  local_48 = 0;
  (**(code **)(*param_1 + 8))(param_1,local_58);
  if ((local_4c & 2) == 0) {
    FUN_1432e0f0e(&local_48);
  }
  local_60 = param_7;
  local_68 = param_6;
  uVar1 = FUN_147588eea(param_3,param_2,&local_48,param_5);
  (**(code **)(*param_1 + 8))(param_1,local_58);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147521c40 FUN_147521c40 body=48 status=ok
// SIG undefined FUN_147521c40(void)

void FUN_147521c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_147588eee(param_3,param_2,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 147521c88 FUN_147521c88 body=59 status=ok
// SIG undefined FUN_147521c88(void)

undefined8 FUN_147521c88(longlong *param_1)

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



// FUNCTION 147521d28 FUN_147521d28 body=43 status=ok
// SIG undefined FUN_147521d28(void)

undefined8 FUN_147521d28(undefined8 param_1,int param_2)

{
  FUN_1404db99a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 147521d54 FUN_147521d54 body=43 status=ok
// SIG undefined FUN_147521d54(void)

undefined8 FUN_147521d54(undefined8 param_1,int param_2)

{
  FUN_1404db99a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 147521d80 FUN_147521d80 body=43 status=ok
// SIG undefined FUN_147521d80(void)

undefined8 FUN_147521d80(undefined8 param_1,int param_2)

{
  FUN_1404dbac8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 147521dd2 FUN_147521dd2 body=25 status=ok
// SIG undefined FUN_147521dd2(void)

undefined8 FUN_147521dd2(undefined8 param_1,undefined8 param_2)

{
  FUN_14045d416(param_2);
  return param_2;
}



// FUNCTION 147521e70 FUN_147521e70 body=59 status=ok
// SIG undefined FUN_147521e70(void)

undefined8 FUN_147521e70(longlong *param_1)

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



// FUNCTION 147521f12 FUN_147521f12 body=74 status=ok
// SIG undefined FUN_147521f12(void)

void FUN_147521f12(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  FUN_1432e0f0e(param_2 + 4);
  FUN_1432e0f22(param_2 + 4,0x3ff0000000000000);
  param_2[6] = 100;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_2[10] = 0;
  return;
}



// FUNCTION 147521f5c FUN_147521f5c body=74 status=ok
// SIG undefined FUN_147521f5c(void)

void FUN_147521f5c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  FUN_1432e0f0e(param_2 + 4);
  FUN_1432e0f22(param_2 + 4,0x3ff0000000000000);
  param_2[6] = 100;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  param_2[10] = 0;
  return;
}



// FUNCTION 147521fe6 FUN_147521fe6 body=59 status=ok
// SIG undefined FUN_147521fe6(void)

undefined8 FUN_147521fe6(longlong *param_1)

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



// FUNCTION 147522088 FUN_147522088 body=59 status=ok
// SIG undefined FUN_147522088(void)

void FUN_147522088(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1432e0f1a(param_2,0x3ff0000000000000);
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(byte *)((longlong)param_2 + 0x14) = *(byte *)((longlong)param_2 + 0x14) & 0xf8;
  return;
}



// FUNCTION 1475220c4 FUN_1475220c4 body=49 status=ok
// SIG undefined FUN_1475220c4(void)

void FUN_1475220c4(undefined8 param_1,longlong param_2)

{
  FUN_1432e0f1a(param_2,0x3ff0000000000000);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) & 0xf8;
  return;
}



// FUNCTION 14752210e FUN_14752210e body=124 status=ok
// SIG undefined FUN_14752210e(void)

undefined8 FUN_14752210e(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  uVar1 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = uVar1;
  if (param_4 != 0) {
    do {
      FUN_14141a0f6(param_3,&local_30);
      *param_2 = local_30;
      uVar1 = *(ulonglong *)(param_3 + 8);
      *(undefined8 *)((longlong)param_2 + 0xd) = *(undefined8 *)(param_3 + 0xd);
      param_2[1] = uVar1;
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475221b4 FUN_1475221b4 body=59 status=ok
// SIG undefined FUN_1475221b4(void)

undefined8 FUN_1475221b4(longlong *param_1)

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



// FUNCTION 147522256 FUN_147522256 body=59 status=ok
// SIG undefined FUN_147522256(void)

void FUN_147522256(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1432e0f1a(param_2,0x3ff0000000000000);
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(byte *)((longlong)param_2 + 0x14) = *(byte *)((longlong)param_2 + 0x14) & 0xf8;
  return;
}



// FUNCTION 147522292 FUN_147522292 body=49 status=ok
// SIG undefined FUN_147522292(void)

void FUN_147522292(undefined8 param_1,longlong param_2)

{
  FUN_1432e0f1a(param_2,0x3ff0000000000000);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) & 0xf8;
  return;
}



// FUNCTION 1475222dc FUN_1475222dc body=124 status=ok
// SIG undefined FUN_1475222dc(void)

undefined8 FUN_1475222dc(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  uVar1 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = uVar1;
  if (param_4 != 0) {
    do {
      FUN_14141a0f6(param_3,&local_30);
      *param_2 = local_30;
      uVar1 = *(ulonglong *)(param_3 + 8);
      *(undefined8 *)((longlong)param_2 + 0xd) = *(undefined8 *)(param_3 + 0xd);
      param_2[1] = uVar1;
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147522382 FUN_147522382 body=59 status=ok
// SIG undefined FUN_147522382(void)

undefined8 FUN_147522382(longlong *param_1)

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



// FUNCTION 14752243a FUN_14752243a body=19 status=ok
// SIG undefined FUN_14752243a(void)

undefined1 FUN_14752243a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14752254a(param_3);
  return 1;
}



// FUNCTION 1475224a4 FUN_1475224a4 body=64 status=ok
// SIG undefined FUN_1475224a4(void)

undefined4 FUN_1475224a4(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14752254a FUN_14752254a body=75 status=ok
// SIG undefined FUN_14752254a(void)

void FUN_14752254a(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014752257a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,param_1,4,*(code **)(*param_2 + 0x170));
    return;
  }
  thunk_FUN_14572512c(param_2,param_1);
  return;
}



// FUNCTION 14752261e FUN_14752261e body=59 status=ok
// SIG undefined FUN_14752261e(void)

undefined8 FUN_14752261e(longlong *param_1)

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



// FUNCTION 14752273a FUN_14752273a body=19 status=ok
// SIG undefined FUN_14752273a(void)

undefined1 FUN_14752273a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1475228a0(param_3);
  return 1;
}



// FUNCTION 14752275c FUN_14752275c body=78 status=ok
// SIG undefined FUN_14752275c(void)

undefined8 FUN_14752275c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -0xb) = *(undefined8 *)(param_3 + -0xb);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_147522d18(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1475227aa FUN_1475227aa body=31 status=ok
// SIG undefined FUN_1475227aa(void)

undefined1
FUN_1475227aa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_147522df8(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1475227e6 FUN_1475227e6 body=59 status=ok
// SIG undefined FUN_1475227e6(void)

undefined8 FUN_1475227e6(longlong *param_1)

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


