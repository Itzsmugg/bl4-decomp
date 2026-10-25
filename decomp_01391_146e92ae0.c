// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146e92ae0 FUN_146e92ae0 body=429 status=ok
// SIG undefined FUN_146e92ae0(void)

void FUN_146e92ae0(longlong param_1,undefined8 *param_2,double *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  
  if ((0.0 < *(float *)(param_1 + 0x20)) && (iVar3 = *(int *)((longlong)param_2 + 0xc), 0 < iVar3))
  {
    fVar1 = *(float *)(param_1 + 0x18);
    fVar2 = *(float *)(param_1 + 0x14);
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)*param_2;
      lVar7 = *(int *)(param_2 + 1) + lVar8;
      *(undefined4 *)
       (*(longlong *)*param_4 +
       ((longlong)*(int *)(param_4 + 1) + (longlong)*(int *)(lVar4 + 4 + lVar7 * 8)) * 4) =
           *(undefined4 *)(param_1 + 0x1c);
      lVar6 = (longlong)*(int *)(param_2 + 3) + (longlong)*(int *)(lVar4 + lVar7 * 8);
      lVar5 = *(longlong *)param_2[2];
      dVar10 = (param_3[2] * *(double *)(lVar5 + 0x10 + lVar6 * 0x18) +
               *param_3 * *(double *)(lVar5 + lVar6 * 0x18) +
               param_3[1] * *(double *)(lVar5 + 8 + lVar6 * 0x18)) - param_3[3];
      if ((dVar10 < -9.99999993922529e-09) && ((double)-*(float *)(param_1 + 0x20) < dVar10)) {
        fVar9 = logf((float)(dVar10 / (double)*(float *)(param_1 + 0x20) + 1.0) + 1.0);
        *(float *)(*(longlong *)*param_4 +
                  ((longlong)*(int *)(param_4 + 1) + (longlong)*(int *)(lVar4 + 4 + lVar7 * 8)) * 4)
             = ((fVar9 / 0.6931472) * (fVar1 - fVar2) + *(float *)(param_1 + 0x14)) *
               *(float *)(param_1 + 0x10);
      }
      lVar8 = lVar8 + 1;
    } while (iVar3 != (int)lVar8);
  }
  return;
}



// FUNCTION 146e92c8e FUN_146e92c8e body=543 status=ok
// SIG undefined FUN_146e92c8e(void)

void FUN_146e92c8e(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  byte bVar4;
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x14),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x18),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x1c),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x20),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14480c34d(param_2,param_1 + 0x28);
  FUN_14480c34d(param_2,param_1 + 0x40);
  local_21 = *(byte *)(param_1 + 0x58);
  puVar3 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar3 + 1;
  if ((byte *)puVar3[1] < pbVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
    bVar4 = local_21;
  }
  else {
    bVar4 = *(byte *)*puVar3;
    *puVar3 = (ulonglong)pbVar1;
  }
  *(uint *)(param_1 + 0x58) = (uint)bVar4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e92eae FUN_146e92eae body=253 status=ok
// SIG undefined FUN_146e92eae(void)

undefined4 FUN_146e92eae(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((((((((iVar1 != iVar2) || ((int)param_1[1] != (int)param_2[1])) ||
          (*(int *)((longlong)param_1 + 0xc) != (int)((ulonglong)param_2[1] >> 0x20))) ||
         (((*(float *)(param_1 + 2) != *(float *)(param_2 + 2) ||
           (NAN(*(float *)(param_1 + 2)) || NAN(*(float *)(param_2 + 2)))) ||
          ((*(float *)((longlong)param_1 + 0x14) != *(float *)((longlong)param_2 + 0x14) ||
           ((NAN(*(float *)((longlong)param_1 + 0x14)) || NAN(*(float *)((longlong)param_2 + 0x14))
            || (*(float *)(param_1 + 3) != *(float *)(param_2 + 3))))))))) ||
        (NAN(*(float *)(param_1 + 3)) || NAN(*(float *)(param_2 + 3)))) ||
       (((((*(float *)((longlong)param_1 + 0x1c) != *(float *)((longlong)param_2 + 0x1c) ||
           (NAN(*(float *)((longlong)param_1 + 0x1c)) || NAN(*(float *)((longlong)param_2 + 0x1c))))
          || (*(float *)(param_1 + 4) != *(float *)(param_2 + 4))) ||
         ((NAN(*(float *)(param_1 + 4)) || NAN(*(float *)(param_2 + 4)) ||
          ((double)param_1[5] != (double)param_2[5])))) ||
        ((NAN((double)param_1[5]) || NAN((double)param_2[5]) ||
         (((double)param_1[6] != (double)param_2[6] ||
          (NAN((double)param_1[6]) || NAN((double)param_2[6]))))))))) ||
      (((double)param_1[7] != (double)param_2[7] ||
       (((NAN((double)param_1[7]) || NAN((double)param_2[7]) ||
         ((double)param_1[8] != (double)param_2[8])) ||
        (NAN((double)param_1[8]) || NAN((double)param_2[8]))))))) ||
     ((((double)param_1[9] != (double)param_2[9] ||
       (NAN((double)param_1[9]) || NAN((double)param_2[9]))) ||
      (((double)param_1[10] != (double)param_2[10] ||
       (NAN((double)param_1[10]) || NAN((double)param_2[10]))))))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT31((int3)((uint)(int)param_1[0xb] >> 8),(int)param_1[0xb] == (int)param_2[0xb]);
  }
  return uVar3;
}



// FUNCTION 146e92fb4 FUN_146e92fb4 body=515 status=ok
// SIG undefined FUN_146e92fb4(void)

void FUN_146e92fb4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  
  FUN_146e9157e();
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_1 + 0x10);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_1 + 0x14);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_1 + 0x18);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_1 + 0x1c);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_1 + 0x20);
  dVar1 = *(double *)(param_1 + 0x28);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x30);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x38);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x40);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x48);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x50);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  iVar2 = *(int *)(param_1 + 0x58);
  iVar3 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
    FUN_14475e4ac(param_3,iVar3);
  }
  *(float *)(*param_3 + (longlong)iVar3 * 4) = (float)iVar2;
  return;
}



// FUNCTION 146e931fa FUN_146e931fa body=54 status=ok
// SIG undefined FUN_146e931fa(void)

void FUN_146e931fa(longlong param_1)

{
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0:
    FUN_146e93230();
    return;
  case 1:
    FUN_146e93600();
    return;
  case 2:
    FUN_146e93e48();
    return;
  case 3:
    FUN_146e93a22();
    return;
  case 4:
    FUN_146e94298();
    return;
  default:
    return;
  }
}



// FUNCTION 146e93230 FUN_146e93230 body=976 status=ok
// SIG undefined FUN_146e93230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e93230(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar25;
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x14);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c996778) {
    FUN_144b3d300();
    if (DAT_14c996778 == -1) {
      DAT_14c996740 = -50.0;
      DAT_14c996748 = -50.0;
      DAT_14c996750 = -50.0;
      DAT_14c996758 = 50.0;
      DAT_14c996760 = 50.0;
      DAT_14c996768 = 50.0;
      DAT_14c996770 = 1;
      _Init_thread_footer();
    }
  }
  dVar15 = DAT_14c996768;
  dVar14 = DAT_14c996760;
  dVar13 = DAT_14c996758;
  dVar12 = DAT_14c996750;
  dVar11 = DAT_14c996748;
  dVar10 = DAT_14c996740;
  auVar9 = _DAT_149934d80;
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar5) {
    lVar16 = 0;
    do {
      lVar6 = *(longlong *)*param_2;
      lVar17 = *(int *)(param_2 + 1) + lVar16;
      *(undefined4 *)
       (*(longlong *)*param_3 +
       ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar6 + 4 + lVar17 * 8)) * 4) =
           *(undefined4 *)(param_1 + 0x1c);
      lVar18 = (longlong)*(int *)(param_2 + 3) + (longlong)*(int *)(lVar6 + lVar17 * 8);
      pdVar1 = (double *)(*(longlong *)param_2[2] + lVar18 * 0x18);
      dVar19 = *pdVar1 - *(double *)(param_1 + 0x40);
      dVar20 = pdVar1[1] - *(double *)(param_1 + 0x48);
      dVar8 = *(double *)(*(longlong *)param_2[2] + 0x10 + lVar18 * 0x18) -
              *(double *)(param_1 + 0x50);
      dVar23 = -*(double *)(param_1 + 0x20);
      dVar25 = -*(double *)(param_1 + 0x28);
      dVar21 = *(double *)(param_1 + 0x30) * -1.0;
      dVar22 = *(double *)(param_1 + 0x38) * 1.0;
      dVar27 = dVar19 * dVar21 - dVar23 * dVar8;
      dVar26 = dVar20 * dVar23 - dVar19 * dVar25;
      dVar7 = dVar8 * dVar25 - dVar20 * dVar21;
      dVar7 = dVar7 + dVar7;
      dVar27 = dVar27 + dVar27;
      dVar26 = dVar26 + dVar26;
      auVar4 = *(undefined1 (*) [16])(param_1 + 0x60);
      auVar24 = divpd(auVar9,auVar4);
      dVar19 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar24._0_8_) *
               ((dVar26 * dVar25 - dVar27 * dVar21) + dVar22 * dVar7 + dVar19);
      dVar20 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_)) & auVar24._8_8_) *
               (*(double *)(param_1 + 0x20) * dVar26 + dVar21 * dVar7 + dVar22 * dVar27 + dVar20);
      if ((dVar10 < dVar19) && (dVar19 < dVar13)) {
        if ((dVar11 < dVar20) &&
           (((dVar20 < dVar14 &&
             (dVar26 = (double)(-(ulonglong)
                                 (9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x70))) &
                               (ulonglong)(1.0 / *(double *)(param_1 + 0x70))) *
                       (dVar8 + dVar22 * dVar26 + (dVar27 * dVar23 - dVar7 * dVar25)),
             dVar12 < dVar26)) && (dVar26 < dVar15)))) {
          *(float *)(*(longlong *)*param_3 +
                    ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar6 + 4 + lVar17 * 8)) *
                    4) = (*(float *)(param_1 + 0x14) + (fVar2 - fVar3)) * *(float *)(param_1 + 0x10)
          ;
        }
      }
      lVar16 = lVar16 + 1;
    } while (iVar5 != (int)lVar16);
  }
  return;
}



// FUNCTION 146e93600 FUN_146e93600 body=1058 status=ok
// SIG undefined FUN_146e93600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e93600(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x14);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9967b8) {
    FUN_144b3d300();
    if (DAT_14c9967b8 == -1) {
      DAT_14c996780 = -50.0;
      DAT_14c996788 = -50.0;
      DAT_14c996790 = -50.0;
      DAT_14c996798 = 50.0;
      DAT_14c9967a0 = 50.0;
      DAT_14c9967a8 = 50.0;
      DAT_14c9967b0 = 1;
      _Init_thread_footer();
    }
  }
  dVar16 = DAT_14c9967a8;
  dVar15 = DAT_14c9967a0;
  dVar14 = DAT_14c996798;
  dVar13 = DAT_14c996790;
  dVar12 = DAT_14c996788;
  dVar11 = DAT_14c996780;
  auVar10 = _DAT_149934d80;
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar5) {
    lVar17 = 0;
    do {
      lVar6 = *(longlong *)*param_2;
      lVar18 = *(int *)(param_2 + 1) + lVar17;
      *(undefined4 *)
       (*(longlong *)*param_3 +
       ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar6 + 4 + lVar18 * 8)) * 4) =
           *(undefined4 *)(param_1 + 0x1c);
      lVar19 = (longlong)*(int *)(param_2 + 3) + (longlong)*(int *)(lVar6 + lVar18 * 8);
      pdVar1 = (double *)(*(longlong *)param_2[2] + lVar19 * 0x18);
      dVar8 = *pdVar1 - *(double *)(param_1 + 0x40);
      dVar9 = pdVar1[1] - *(double *)(param_1 + 0x48);
      dVar21 = *(double *)(*(longlong *)param_2[2] + 0x10 + lVar19 * 0x18) -
               *(double *)(param_1 + 0x50);
      dVar24 = -*(double *)(param_1 + 0x20);
      dVar26 = -*(double *)(param_1 + 0x28);
      dVar7 = *(double *)(param_1 + 0x30) * -1.0;
      dVar25 = *(double *)(param_1 + 0x38) * 1.0;
      dVar27 = dVar8 * dVar7 - dVar24 * dVar21;
      dVar20 = dVar9 * dVar24 - dVar8 * dVar26;
      dVar23 = dVar21 * dVar26 - dVar9 * dVar7;
      dVar23 = dVar23 + dVar23;
      dVar27 = dVar27 + dVar27;
      dVar20 = dVar20 + dVar20;
      auVar4 = *(undefined1 (*) [16])(param_1 + 0x60);
      auVar22 = divpd(auVar10,auVar4);
      dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar22._0_8_) *
              ((dVar20 * dVar26 - dVar27 * dVar7) + dVar25 * dVar23 + dVar8);
      dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_)) & auVar22._8_8_) *
              (*(double *)(param_1 + 0x20) * dVar20 + dVar7 * dVar23 + dVar25 * dVar27 + dVar9);
      if ((((dVar11 < dVar8) && (dVar8 < dVar14)) && (dVar12 < dVar7)) &&
         (((dVar7 < dVar15 &&
           (dVar25 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x70)))
                             & (ulonglong)(1.0 / *(double *)(param_1 + 0x70))) *
                     (dVar21 + dVar25 * dVar20 + (dVar27 * dVar24 - dVar23 * dVar26)),
           dVar13 < dVar25)) && (dVar25 < dVar16)))) {
        dVar21 = ABS(dVar7) + -50.0;
        if (ABS(dVar7) + -50.0 <= ABS(dVar25) + -50.0) {
          dVar21 = ABS(dVar25) + -50.0;
        }
        dVar7 = ABS(dVar8) + -50.0;
        if (ABS(dVar8) + -50.0 <= dVar21) {
          dVar7 = dVar21;
        }
        if (0.0 <= dVar7) {
          dVar7 = 0.0;
        }
        *(float *)(*(longlong *)*param_3 +
                  ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar6 + 4 + lVar18 * 8)) * 4
                  ) = (((float)dVar7 / -50.0) * (fVar2 - fVar3) + *(float *)(param_1 + 0x14)) *
                      *(float *)(param_1 + 0x10);
      }
      lVar17 = lVar17 + 1;
    } while (iVar5 != (int)lVar17);
  }
  return;
}



// FUNCTION 146e93a22 FUN_146e93a22 body=1062 status=ok
// SIG undefined FUN_146e93a22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e93a22(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x14);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9967f8) {
    FUN_144b3d300();
    if (DAT_14c9967f8 == -1) {
      DAT_14c9967c0 = -50.0;
      DAT_14c9967c8 = -50.0;
      DAT_14c9967d0 = -50.0;
      DAT_14c9967d8 = 50.0;
      DAT_14c9967e0 = 50.0;
      DAT_14c9967e8 = 50.0;
      DAT_14c9967f0 = 1;
      _Init_thread_footer();
    }
  }
  dVar16 = DAT_14c9967e8;
  dVar15 = DAT_14c9967e0;
  dVar14 = DAT_14c9967d8;
  dVar13 = DAT_14c9967d0;
  dVar12 = DAT_14c9967c8;
  dVar11 = DAT_14c9967c0;
  auVar10 = _DAT_149934d80;
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar5) {
    lVar17 = 0;
    do {
      lVar6 = *(longlong *)*param_2;
      lVar18 = *(int *)(param_2 + 1) + lVar17;
      *(undefined4 *)
       (*(longlong *)*param_3 +
       ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar6 + 4 + lVar18 * 8)) * 4) =
           *(undefined4 *)(param_1 + 0x1c);
      lVar19 = (longlong)*(int *)(param_2 + 3) + (longlong)*(int *)(lVar6 + lVar18 * 8);
      pdVar1 = (double *)(*(longlong *)param_2[2] + lVar19 * 0x18);
      dVar8 = *pdVar1 - *(double *)(param_1 + 0x40);
      dVar9 = pdVar1[1] - *(double *)(param_1 + 0x48);
      dVar21 = *(double *)(*(longlong *)param_2[2] + 0x10 + lVar19 * 0x18) -
               *(double *)(param_1 + 0x50);
      dVar24 = -*(double *)(param_1 + 0x20);
      dVar26 = -*(double *)(param_1 + 0x28);
      dVar7 = *(double *)(param_1 + 0x30) * -1.0;
      dVar25 = *(double *)(param_1 + 0x38) * 1.0;
      dVar27 = dVar8 * dVar7 - dVar24 * dVar21;
      dVar20 = dVar9 * dVar24 - dVar8 * dVar26;
      dVar23 = dVar21 * dVar26 - dVar9 * dVar7;
      dVar23 = dVar23 + dVar23;
      dVar27 = dVar27 + dVar27;
      dVar20 = dVar20 + dVar20;
      auVar4 = *(undefined1 (*) [16])(param_1 + 0x60);
      auVar22 = divpd(auVar10,auVar4);
      dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar22._0_8_) *
              ((dVar20 * dVar26 - dVar27 * dVar7) + dVar25 * dVar23 + dVar8);
      dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_)) & auVar22._8_8_) *
              (*(double *)(param_1 + 0x20) * dVar20 + dVar7 * dVar23 + dVar25 * dVar27 + dVar9);
      if ((((dVar11 < dVar8) && (dVar8 < dVar14)) && (dVar12 < dVar7)) &&
         (((dVar7 < dVar15 &&
           (dVar25 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x70)))
                             & (ulonglong)(1.0 / *(double *)(param_1 + 0x70))) *
                     (dVar21 + dVar25 * dVar20 + (dVar27 * dVar24 - dVar23 * dVar26)),
           dVar13 < dVar25)) && (dVar25 < dVar16)))) {
        dVar21 = ABS(dVar7) + -50.0;
        if (ABS(dVar7) + -50.0 <= ABS(dVar25) + -50.0) {
          dVar21 = ABS(dVar25) + -50.0;
        }
        dVar7 = ABS(dVar8) + -50.0;
        if (ABS(dVar8) + -50.0 <= dVar21) {
          dVar7 = dVar21;
        }
        if (0.0 <= dVar7) {
          dVar7 = 0.0;
        }
        *(float *)(*(longlong *)*param_3 +
                  ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar6 + 4 + lVar18 * 8)) * 4
                  ) = (((float)dVar7 / -50.0) * ((float)dVar7 / -50.0) * (fVar2 - fVar3) +
                      *(float *)(param_1 + 0x14)) * *(float *)(param_1 + 0x10);
      }
      lVar17 = lVar17 + 1;
    } while (iVar5 != (int)lVar17);
  }
  return;
}



// FUNCTION 146e93e48 FUN_146e93e48 body=1103 status=ok
// SIG undefined FUN_146e93e48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e93e48(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x14);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c996838) {
    FUN_144b3d300();
    if (DAT_14c996838 == -1) {
      DAT_14c996800 = -50.0;
      DAT_14c996808 = -50.0;
      DAT_14c996810 = -50.0;
      DAT_14c996818 = 50.0;
      DAT_14c996820 = 50.0;
      DAT_14c996828 = 50.0;
      DAT_14c996830 = 1;
      _Init_thread_footer();
    }
  }
  dVar13 = DAT_14c996828;
  dVar12 = DAT_14c996820;
  dVar11 = DAT_14c996818;
  dVar10 = DAT_14c996810;
  dVar9 = DAT_14c996808;
  dVar8 = DAT_14c996800;
  auVar7 = _DAT_149934d80;
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar5) {
    lVar14 = 0;
    do {
      lVar6 = *(longlong *)*param_2;
      lVar15 = *(int *)(param_2 + 1) + lVar14;
      *(undefined4 *)
       (*(longlong *)*param_3 +
       ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar6 + 4 + lVar15 * 8)) * 4) =
           *(undefined4 *)(param_1 + 0x1c);
      lVar16 = (longlong)*(int *)(param_2 + 3) + (longlong)*(int *)(lVar6 + lVar15 * 8);
      pdVar1 = (double *)(*(longlong *)param_2[2] + lVar16 * 0x18);
      dVar25 = *pdVar1 - *(double *)(param_1 + 0x40);
      dVar27 = pdVar1[1] - *(double *)(param_1 + 0x48);
      dVar21 = *(double *)(*(longlong *)param_2[2] + 0x10 + lVar16 * 0x18) -
               *(double *)(param_1 + 0x50);
      dVar20 = -*(double *)(param_1 + 0x20);
      dVar23 = -*(double *)(param_1 + 0x28);
      dVar24 = *(double *)(param_1 + 0x30) * -1.0;
      dVar26 = *(double *)(param_1 + 0x38) * 1.0;
      dVar28 = dVar25 * dVar24 - dVar20 * dVar21;
      dVar18 = dVar27 * dVar20 - dVar25 * dVar23;
      dVar19 = dVar21 * dVar23 - dVar27 * dVar24;
      dVar19 = dVar19 + dVar19;
      dVar28 = dVar28 + dVar28;
      dVar18 = dVar18 + dVar18;
      auVar4 = *(undefined1 (*) [16])(param_1 + 0x60);
      auVar22 = divpd(auVar7,auVar4);
      dVar25 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar22._0_8_) *
               ((dVar18 * dVar23 - dVar28 * dVar24) + dVar26 * dVar19 + dVar25);
      dVar27 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_)) & auVar22._8_8_) *
               (*(double *)(param_1 + 0x20) * dVar18 + dVar24 * dVar19 + dVar26 * dVar28 + dVar27);
      if ((((dVar8 < dVar25) && (dVar25 < dVar11)) && (dVar9 < dVar27)) &&
         (((dVar27 < dVar12 &&
           (dVar21 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x70)))
                             & (ulonglong)(1.0 / *(double *)(param_1 + 0x70))) *
                     (dVar21 + dVar26 * dVar18 + (dVar28 * dVar20 - dVar19 * dVar23)),
           dVar10 < dVar21)) && (dVar21 < dVar13)))) {
        dVar18 = ABS(dVar27) + -50.0;
        if (ABS(dVar27) + -50.0 <= ABS(dVar21) + -50.0) {
          dVar18 = ABS(dVar21) + -50.0;
        }
        dVar21 = ABS(dVar25) + -50.0;
        if (ABS(dVar25) + -50.0 <= dVar18) {
          dVar21 = dVar18;
        }
        if (0.0 <= dVar21) {
          dVar21 = 0.0;
        }
        fVar17 = 1.0 - 1.0 / ((float)dVar21 / -50.0 + 1.0);
        *(float *)(*(longlong *)*param_3 +
                  ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar6 + 4 + lVar15 * 8)) * 4
                  ) = ((fVar17 + fVar17) * (fVar2 - fVar3) + *(float *)(param_1 + 0x14)) *
                      *(float *)(param_1 + 0x10);
      }
      lVar14 = lVar14 + 1;
    } while (iVar5 != (int)lVar14);
  }
  return;
}



// FUNCTION 146e94298 FUN_146e94298 body=1083 status=ok
// SIG undefined FUN_146e94298(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e94298(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x14);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c996878) {
    FUN_144b3d300(&DAT_14c996878);
    if (DAT_14c996878 == -1) {
      DAT_14c996840 = -50.0;
      _DAT_14c996848 = -50.0;
      _DAT_14c996850 = -50.0;
      DAT_14c996858 = 50.0;
      DAT_14c996860 = 50.0;
      DAT_14c996868 = 50.0;
      DAT_14c996870 = 1;
      _Init_thread_footer(&DAT_14c996878);
    }
  }
  auVar11 = _DAT_149934d80;
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar5) {
    lVar14 = 0;
    dVar16 = DAT_14c996840;
    dVar19 = DAT_14c996858;
    do {
      lVar6 = *(longlong *)*param_2;
      lVar13 = *(int *)(param_2 + 1) + lVar14;
      *(undefined4 *)
       (*(longlong *)*param_3 +
       ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar6 + 4 + lVar13 * 8)) * 4) =
           *(undefined4 *)(param_1 + 0x1c);
      lVar12 = (longlong)*(int *)(param_2 + 3) + (longlong)*(int *)(lVar6 + lVar13 * 8);
      pdVar1 = (double *)(*(longlong *)param_2[2] + lVar12 * 0x18);
      dVar18 = *pdVar1 - *(double *)(param_1 + 0x40);
      dVar10 = pdVar1[1] - *(double *)(param_1 + 0x48);
      dVar17 = *(double *)(*(longlong *)param_2[2] + 0x10 + lVar12 * 0x18) -
               *(double *)(param_1 + 0x50);
      dVar8 = -*(double *)(param_1 + 0x20);
      dVar9 = -*(double *)(param_1 + 0x28);
      dVar20 = *(double *)(param_1 + 0x30) * -1.0;
      dVar23 = *(double *)(param_1 + 0x38) * 1.0;
      dVar22 = dVar18 * dVar20 - dVar8 * dVar17;
      dVar21 = dVar10 * dVar8 - dVar18 * dVar9;
      dVar7 = dVar17 * dVar9 - dVar10 * dVar20;
      dVar7 = dVar7 + dVar7;
      dVar22 = dVar22 + dVar22;
      dVar21 = dVar21 + dVar21;
      auVar4 = *(undefined1 (*) [16])(param_1 + 0x60);
      auVar24 = divpd(auVar11,auVar4);
      dVar18 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar24._0_8_) *
               ((dVar21 * dVar9 - dVar22 * dVar20) + dVar23 * dVar7 + dVar18);
      dVar20 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_)) & auVar24._8_8_) *
               (*(double *)(param_1 + 0x20) * dVar21 + dVar20 * dVar7 + dVar23 * dVar22 + dVar10);
      if ((((dVar16 < dVar18) && (dVar18 < dVar19)) && (_DAT_14c996848 < dVar20)) &&
         (((dVar20 < DAT_14c996860 &&
           (dVar23 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x70)))
                             & (ulonglong)(1.0 / *(double *)(param_1 + 0x70))) *
                     (dVar17 + dVar23 * dVar21 + (dVar22 * dVar8 - dVar7 * dVar9)),
           _DAT_14c996850 < dVar23)) && (dVar23 < DAT_14c996868)))) {
        dVar16 = ABS(dVar20) + -50.0;
        if (ABS(dVar20) + -50.0 <= ABS(dVar23) + -50.0) {
          dVar16 = ABS(dVar23) + -50.0;
        }
        dVar19 = ABS(dVar18) + -50.0;
        if (ABS(dVar18) + -50.0 <= dVar16) {
          dVar19 = dVar16;
        }
        if (0.0 <= dVar19) {
          dVar19 = 0.0;
        }
        fVar15 = logf((float)dVar19 / -50.0 + 1.0);
        *(float *)(*(longlong *)*param_3 +
                  ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar6 + 4 + lVar13 * 8)) * 4
                  ) = ((fVar15 / 0.6931472) * (fVar2 - fVar3) + *(float *)(param_1 + 0x14)) *
                      *(float *)(param_1 + 0x10);
        dVar16 = DAT_14c996840;
        dVar19 = DAT_14c996858;
      }
      lVar14 = lVar14 + 1;
    } while (iVar5 != (int)lVar14);
  }
  return;
}



// FUNCTION 146e946d4 FUN_146e946d4 body=501 status=ok
// SIG undefined FUN_146e946d4(void)

void FUN_146e946d4(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  byte bVar4;
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x14),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x18),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x1c),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1400f4f7e(param_2,param_1 + 0x20);
  FUN_14480c34d(param_2,param_1 + 0x40);
  FUN_14480c34d(param_2,param_1 + 0x60);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  local_21 = *(byte *)(param_1 + 0x80);
  puVar3 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar3 + 1;
  if ((byte *)puVar3[1] < pbVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
    bVar4 = local_21;
  }
  else {
    bVar4 = *(byte *)*puVar3;
    *puVar3 = (ulonglong)pbVar1;
  }
  *(uint *)(param_1 + 0x80) = (uint)bVar4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e948ca FUN_146e948ca body=485 status=ok
// SIG undefined FUN_146e948ca(void)

undefined8 FUN_146e948ca(longlong *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  uint7 uVar11;
  longlong *plVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  bool bVar17;
  longlong lVar18;
  
  plVar16 = param_2;
  iVar9 = (**(code **)(*param_2 + 0x10))(param_2);
  plVar12 = param_1;
  iVar10 = (**(code **)(*param_1 + 0x10))(param_1);
  if (iVar9 != iVar10) {
    return 0;
  }
  lVar18 = param_2[1];
  if ((int)param_1[1] == (int)lVar18) {
    bVar17 = *(int *)((longlong)param_1 + 0xc) == (int)((ulonglong)lVar18 >> 0x20);
    uVar11 = (uint7)((ulonglong)lVar18 >> 0x28);
  }
  else {
    bVar17 = false;
    uVar11 = 0;
  }
  bVar13 = *(float *)(param_1 + 2) == *(float *)(param_2 + 2) & bVar17;
  auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[9] - (double)param_2[9]));
  auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[8] - (double)param_2[8]));
  iVar9 = movmskpd((int)CONCAT71((int7)((ulonglong)plVar12 >> 8),
                                 !NAN(*(float *)((longlong)param_1 + 0x1c)) &&
                                 !NAN(*(float *)((longlong)param_2 + 0x1c))),auVar5);
  auVar3._8_8_ = -(ulonglong)
                  (9.999999747378752e-05 < ABS((double)param_1[0xb] - (double)param_2[0xb]));
  auVar3._0_8_ = -(ulonglong)
                  (9.999999747378752e-05 < ABS((double)param_1[10] - (double)param_2[10]));
  uVar14 = movmskpd((int)CONCAT71((int7)((ulonglong)plVar16 >> 8),bVar13),auVar3);
  if ((uVar14 & 0x3fffffff) == 0 && iVar9 == 0) {
    lVar18 = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[5] - (double)param_2[5]));
    auVar8._8_4_ = (int)lVar18;
    auVar8._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS((double)param_1[4] - (double)param_2[4]));
    auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    uVar14 = movmskpd(iVar9,auVar8);
    lVar18 = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[7] - (double)param_2[7]));
    auVar7._8_4_ = (int)lVar18;
    auVar7._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS((double)param_1[6] - (double)param_2[6]));
    auVar7._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    iVar9 = movmskpd(0,auVar7);
    uVar15 = iVar9 << 2 | uVar14;
    if (uVar15 != 0) {
      auVar6._8_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS((double)param_1[5] + (double)param_2[5]));
      auVar6._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS((double)param_1[4] + (double)param_2[4]));
      uVar14 = movmskpd(uVar14,auVar6);
      auVar4._8_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS((double)param_1[7] + (double)param_2[7]));
      auVar4._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS((double)param_1[6] + (double)param_2[6]));
      uVar15 = movmskpd(uVar15,auVar4);
      if ((uVar15 & 0x3fffffff) != 0 || uVar14 != 0) goto LAB_146e949be;
    }
    auVar2._8_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS((double)param_1[0xd] - (double)param_2[0xd]));
    auVar2._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS((double)param_1[0xc] - (double)param_2[0xc]));
    iVar9 = movmskpd(uVar14,auVar2);
    lVar18 = -(ulonglong)(9.999999747378752e-05 < ABS((double)param_1[0xf] - (double)param_2[0xf]));
    auVar1._8_4_ = (int)lVar18;
    auVar1._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS((double)param_1[0xe] - (double)param_2[0xe]));
    auVar1._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    uVar14 = movmskpd(0,auVar1);
    bVar17 = (uVar14 & 0x3fffffff) == 0 && iVar9 == 0;
  }
  else {
LAB_146e949be:
    bVar17 = false;
  }
  return CONCAT71(uVar11,*(float *)((longlong)param_1 + 0x1c) ==
                         *(float *)((longlong)param_2 + 0x1c) &
                         (*(float *)(param_1 + 3) == *(float *)(param_2 + 3) &&
                         *(float *)((longlong)param_1 + 0x14) ==
                         *(float *)((longlong)param_2 + 0x14)) & bVar13 &
                         (int)param_1[0x10] == (int)param_2[0x10] & bVar17);
}



// FUNCTION 146e94ab8 FUN_146e94ab8 body=641 status=ok
// SIG undefined FUN_146e94ab8(void)

void FUN_146e94ab8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  
  FUN_146e9157e();
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_1 + 0x10);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_1 + 0x14);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_1 + 0x18);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_1 + 0x1c);
  dVar1 = *(double *)(param_1 + 0x20);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x28);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x30);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x38);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x40);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x48);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x50);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x60);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x68);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x70);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  iVar2 = *(int *)(param_1 + 0x80);
  iVar3 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
    FUN_14475e4ac(param_3,iVar3);
  }
  *(float *)(*param_3 + (longlong)iVar3 * 4) = (float)iVar2;
  return;
}



// FUNCTION 146e94d40 FUN_146e94d40 body=259 status=ok
// SIG undefined FUN_146e94d40(void)

void FUN_146e94d40(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = 0xc7efffffe0000000;
  param_2[1] = 0xc7efffffe0000000;
  param_2[2] = 0xc7efffffe0000000;
  *param_3 = 0x47efffffe0000000;
  param_3[1] = 0x47efffffe0000000;
  param_3[2] = 0x47efffffe0000000;
  if ((*(float *)(param_1 + 0x1c) == 0.0) && (!NAN(*(float *)(param_1 + 0x1c)))) {
    local_68 = 0xc049000000000000;
    local_60 = 0xc049000000000000;
    local_58 = 0xc049000000000000;
    local_50 = 0x4049000000000000;
    local_48 = 0x4049000000000000;
    local_40 = 0x4049000000000000;
    local_38 = 1;
    FUN_144a1c3a2(&local_68,&local_a0,param_1 + 0x20);
    param_2[2] = local_90;
    *param_2 = local_a0;
    param_2[1] = uStack_98;
    param_3[2] = local_78;
    *param_3 = local_88;
    param_3[1] = uStack_80;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *param_4 = *(undefined4 *)(param_1 + 0x40);
  param_4[1] = uVar2;
  param_4[2] = uVar3;
  param_4[3] = uVar4;
  *(undefined8 *)(param_4 + 4) = uVar1;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e94e44 FUN_146e94e44 body=855 status=ok
// SIG undefined FUN_146e94e44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e94e44(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  float local_fc;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (0 < (int)*(uint *)((longlong)param_2 + 0xc)) {
    fVar2 = *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(param_1 + 0x10);
    lVar9 = 0;
    local_108 = (ulonglong)*(uint *)((longlong)param_2 + 0xc);
    do {
      iVar5 = *(int *)(param_2 + 1);
      lVar6 = *(longlong *)*param_2;
      lVar8 = (longlong)*(int *)(param_2 + 3) + (longlong)*(int *)(lVar6 + (iVar5 + lVar9) * 8);
      pdVar1 = (double *)(*(longlong *)param_2[2] + lVar8 * 0x18);
      dVar17 = *pdVar1 - *(double *)(param_1 + 0x40);
      dVar18 = pdVar1[1] - *(double *)(param_1 + 0x48);
      dVar10 = *(double *)(*(longlong *)param_2[2] + 0x10 + lVar8 * 0x18) -
               *(double *)(param_1 + 0x50);
      dVar12 = *(double *)(param_1 + 0x20);
      dVar11 = -dVar12;
      dVar13 = -*(double *)(param_1 + 0x28);
      dVar15 = *(double *)(param_1 + 0x30) * -1.0;
      dVar16 = *(double *)(param_1 + 0x38) * 1.0;
      dVar20 = dVar17 * dVar15 - dVar11 * dVar10;
      dVar19 = dVar18 * dVar11 - dVar17 * dVar13;
      dVar7 = dVar10 * dVar13 - dVar18 * dVar15;
      dVar7 = dVar7 + dVar7;
      dVar20 = dVar20 + dVar20;
      dVar19 = dVar19 + dVar19;
      auVar4 = *(undefined1 (*) [16])(param_1 + 0x60);
      auVar14 = divpd(_DAT_149934d80,auVar4);
      dVar11 = modf((double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x70))) &
                            (ulonglong)(1.0 / *(double *)(param_1 + 0x70))) *
                    (dVar16 * dVar19 + dVar10 + (dVar20 * dVar11 - dVar7 * dVar13)),&local_f8);
      dVar12 = modf((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_)) & auVar14._8_8_)
                    * (dVar12 * dVar19 + dVar15 * dVar7 + dVar16 * dVar20 + dVar18),&local_f8);
      dVar13 = modf((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar14._0_8_)
                    * ((dVar19 * dVar13 - dVar20 * dVar15) + dVar16 * dVar7 + dVar17),&local_f8);
      local_fc = 0.0;
      FUN_146e9519c(&local_fc,(float)((dVar13 * 0.5 + 0.5) * 255.0),
                    (float)((dVar12 * 0.5 + 0.5) * 255.0),(float)((dVar11 * 0.5 + 0.5) * 255.0));
      *(float *)(*(longlong *)*param_3 +
                ((longlong)*(int *)(param_3 + 1) +
                (longlong)*(int *)(lVar6 + 4 + (iVar5 + lVar9) * 8)) * 4) =
           (local_fc + 1.0) * 0.5 * (fVar2 - fVar3) + *(float *)(param_1 + 0x10);
      lVar9 = lVar9 + 1;
    } while ((int)local_108 != (int)lVar9);
  }
  if ((local_f0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9519c FUN_146e9519c body=1302 status=ok
// SIG undefined FUN_146e9519c(void)

void FUN_146e9519c(float *param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
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
  float fVar23;
  float fVar24;
  float fVar25;
  
  auVar9 = roundps(ZEXT416((uint)param_2),ZEXT416((uint)param_2),1);
  auVar12 = roundps(ZEXT416((uint)param_3),ZEXT416((uint)param_3),1);
  auVar8 = roundps(ZEXT416((uint)param_4),ZEXT416((uint)param_4),1);
  uVar3 = (ulonglong)((int)auVar9._0_4_ & 0xff);
  uVar5 = (ulonglong)((int)auVar12._0_4_ & 0xff);
  uVar2 = (ulonglong)((int)auVar8._0_4_ & 0xff);
  param_2 = param_2 - auVar9._0_4_;
  param_3 = param_3 - auVar12._0_4_;
  param_4 = param_4 - auVar8._0_4_;
  fVar7 = param_2 + -1.0;
  fVar14 = param_4 + -1.0;
  lVar6 = (longlong)*(int *)(&DAT_149f5ff40 + uVar3 * 4) + uVar5;
  lVar4 = (longlong)*(int *)(&DAT_149f5ff44 + uVar3 * 4) + uVar5;
  uVar1 = *(uint *)(&DAT_149f5ff44 +
                   ((longlong)*(int *)(&DAT_149f5ff44 + (longlong)(int)lVar4 * 4) + uVar2) * 4);
  fVar13 = fVar7;
  if ((uVar1 & 0xd) != 0xc) {
    fVar13 = fVar14;
  }
  fVar20 = param_3 + -1.0;
  fVar10 = fVar20;
  if (3 < (uVar1 & 0xf)) {
    fVar10 = fVar13;
  }
  fVar13 = fVar7;
  if (7 < (uVar1 & 0xf)) {
    fVar13 = fVar20;
  }
  if ((uVar1 & 1) != 0) {
    fVar13 = -fVar13;
  }
  if ((uVar1 & 2) != 0) {
    fVar10 = -fVar10;
  }
  uVar1 = *(uint *)(&DAT_149f5ff44 +
                   ((longlong)*(int *)(&DAT_149f5ff44 + (longlong)(int)lVar6 * 4) + uVar2) * 4);
  fVar11 = param_2;
  if ((uVar1 & 0xd) != 0xc) {
    fVar11 = fVar14;
  }
  fVar16 = fVar20;
  if (3 < (uVar1 & 0xf)) {
    fVar16 = fVar11;
  }
  fVar11 = param_2;
  if (7 < (uVar1 & 0xf)) {
    fVar11 = fVar20;
  }
  if ((uVar1 & 1) != 0) {
    fVar11 = -fVar11;
  }
  if ((uVar1 & 2) != 0) {
    fVar16 = -fVar16;
  }
  uVar1 = *(uint *)(&DAT_149f5ff44 + ((longlong)*(int *)(&DAT_149f5ff40 + lVar4 * 4) + uVar2) * 4);
  fVar17 = fVar7;
  if ((uVar1 & 0xd) != 0xc) {
    fVar17 = fVar14;
  }
  fVar18 = param_3;
  if (3 < (uVar1 & 0xf)) {
    fVar18 = fVar17;
  }
  fVar17 = fVar7;
  if (7 < (uVar1 & 0xf)) {
    fVar17 = param_3;
  }
  if ((uVar1 & 1) != 0) {
    fVar17 = -fVar17;
  }
  if ((uVar1 & 2) != 0) {
    fVar18 = -fVar18;
  }
  uVar1 = *(uint *)(&DAT_149f5ff44 + (uVar2 + (longlong)*(int *)(&DAT_149f5ff40 + lVar6 * 4)) * 4);
  fVar21 = param_2;
  if ((uVar1 & 0xd) != 0xc) {
    fVar21 = fVar14;
  }
  fVar14 = param_3;
  if (3 < (uVar1 & 0xf)) {
    fVar14 = fVar21;
  }
  fVar21 = param_2;
  if (7 < (uVar1 & 0xf)) {
    fVar21 = param_3;
  }
  if ((uVar1 & 1) != 0) {
    fVar21 = -fVar21;
  }
  if ((uVar1 & 2) != 0) {
    fVar14 = -fVar14;
  }
  uVar1 = *(uint *)(&DAT_149f5ff40 +
                   (longlong)
                   (int)((longlong)*(int *)(&DAT_149f5ff44 + (longlong)(int)lVar4 * 4) + uVar2) * 4)
  ;
  fVar22 = fVar7;
  if ((uVar1 & 0xd) != 0xc) {
    fVar22 = param_4;
  }
  fVar15 = fVar20;
  if (3 < (uVar1 & 0xf)) {
    fVar15 = fVar22;
  }
  fVar22 = fVar7;
  if (7 < (uVar1 & 0xf)) {
    fVar22 = fVar20;
  }
  if ((uVar1 & 1) != 0) {
    fVar22 = -fVar22;
  }
  if ((uVar1 & 2) != 0) {
    fVar15 = -fVar15;
  }
  uVar1 = *(uint *)(&DAT_149f5ff40 +
                   (longlong)
                   (int)((longlong)*(int *)(&DAT_149f5ff44 + (longlong)(int)lVar6 * 4) + uVar2) * 4)
  ;
  fVar25 = param_2;
  if ((uVar1 & 0xd) != 0xc) {
    fVar25 = param_4;
  }
  fVar23 = fVar20;
  if (3 < (uVar1 & 0xf)) {
    fVar23 = fVar25;
  }
  fVar25 = param_2;
  if (7 < (uVar1 & 0xf)) {
    fVar25 = fVar20;
  }
  if ((uVar1 & 1) != 0) {
    fVar25 = -fVar25;
  }
  if ((uVar1 & 2) != 0) {
    fVar23 = -fVar23;
  }
  uVar1 = *(uint *)(&DAT_149f5ff40 +
                   (longlong)(int)((longlong)*(int *)(&DAT_149f5ff40 + lVar4 * 4) + uVar2) * 4);
  fVar20 = fVar7;
  if ((uVar1 & 0xd) != 0xc) {
    fVar20 = param_4;
  }
  fVar24 = param_3;
  if (3 < (uVar1 & 0xf)) {
    fVar24 = fVar20;
  }
  if (7 < (uVar1 & 0xf)) {
    fVar7 = param_3;
  }
  if ((uVar1 & 1) != 0) {
    fVar7 = -fVar7;
  }
  fVar20 = param_2 * param_2 * param_2 * ((param_2 * 6.0 + -15.0) * param_2 + 10.0);
  if ((uVar1 & 2) != 0) {
    fVar24 = -fVar24;
  }
  uVar1 = *(uint *)(&DAT_149f5ff40 +
                   (longlong)(int)(uVar2 + (longlong)*(int *)(&DAT_149f5ff40 + lVar6 * 4)) * 4);
  fVar19 = param_2;
  if ((uVar1 & 0xd) != 0xc) {
    fVar19 = param_4;
  }
  fVar17 = ((fVar17 + fVar18) - (fVar21 + fVar14)) * fVar20 + fVar21 + fVar14;
  fVar14 = param_3;
  if (3 < (uVar1 & 0xf)) {
    fVar14 = fVar19;
  }
  fVar18 = param_3 * param_3 * param_3 * ((param_3 * 6.0 + -15.0) * param_3 + 10.0);
  if (7 < (uVar1 & 0xf)) {
    param_2 = param_3;
  }
  if ((uVar1 & 1) != 0) {
    param_2 = -param_2;
  }
  if ((uVar1 & 2) != 0) {
    fVar14 = -fVar14;
  }
  fVar7 = fVar20 * ((fVar7 + fVar24) - (param_2 + fVar14)) + param_2 + fVar14;
  fVar7 = fVar18 * ((((fVar22 + fVar15) - (fVar25 + fVar23)) * fVar20 + fVar25 + fVar23) - fVar7) +
          fVar7;
  *param_1 = param_4 * param_4 * param_4 * ((param_4 * 6.0 + -15.0) * param_4 + 10.0) *
             ((((((fVar13 + fVar10) - (fVar11 + fVar16)) * fVar20 + fVar11 + fVar16) - fVar17) *
               fVar18 + fVar17) - fVar7) + fVar7;
  return;
}



// FUNCTION 146e956b2 FUN_146e956b2 body=229 status=ok
// SIG undefined FUN_146e956b2(void)

void FUN_146e956b2(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x14),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1400f4f7e(param_2,param_1 + 0x20);
  FUN_14480c34d(param_2,param_1 + 0x40);
  FUN_14480c34d(param_2,param_1 + 0x60);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 146e95798 FUN_146e95798 body=399 status=ok
// SIG undefined FUN_146e95798(void)

undefined4 FUN_146e95798(longlong *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  
  iVar9 = (**(code **)(*param_2 + 0x10))(param_2);
  plVar13 = param_1;
  iVar10 = (**(code **)(*param_1 + 0x10))();
  if (((iVar9 == iVar10) && ((int)param_1[1] == (int)param_2[1])) &&
     (iVar9 = (int)((ulonglong)param_2[1] >> 0x20), *(int *)((longlong)param_1 + 0xc) == iVar9)) {
    if ((*(float *)(param_1 + 2) == *(float *)(param_2 + 2)) &&
       (!NAN(*(float *)(param_1 + 2)) && !NAN(*(float *)(param_2 + 2)))) {
      if ((*(float *)((longlong)param_1 + 0x14) == *(float *)((longlong)param_2 + 0x14)) &&
         (!NAN(*(float *)((longlong)param_1 + 0x14)) && !NAN(*(float *)((longlong)param_2 + 0x14))))
      {
        auVar5._8_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS((double)param_1[9] - (double)param_2[9]));
        auVar5._0_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS((double)param_1[8] - (double)param_2[8]));
        iVar9 = movmskpd(iVar9,auVar5);
        auVar3._8_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS((double)param_1[0xb] - (double)param_2[0xb]));
        auVar3._0_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS((double)param_1[10] - (double)param_2[10]));
        uVar11 = movmskpd((int)plVar13,auVar3);
        if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
          lVar14 = -(ulonglong)
                    (9.999999747378752e-05 < ABS((double)param_1[5] - (double)param_2[5]));
          auVar8._8_4_ = (int)lVar14;
          auVar8._0_8_ = -(ulonglong)
                          (9.999999747378752e-05 < ABS((double)param_1[4] - (double)param_2[4]));
          auVar8._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
          uVar11 = movmskpd(iVar9,auVar8);
          lVar14 = -(ulonglong)
                    (9.999999747378752e-05 < ABS((double)param_1[7] - (double)param_2[7]));
          auVar7._8_4_ = (int)lVar14;
          auVar7._0_8_ = -(ulonglong)
                          (9.999999747378752e-05 < ABS((double)param_1[6] - (double)param_2[6]));
          auVar7._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
          iVar9 = movmskpd(0,auVar7);
          uVar12 = iVar9 << 2 | uVar11;
          if (uVar12 != 0) {
            auVar6._8_8_ = -(ulonglong)
                            (9.999999747378752e-05 < ABS((double)param_1[5] + (double)param_2[5]));
            auVar6._0_8_ = -(ulonglong)
                            (9.999999747378752e-05 < ABS((double)param_1[4] + (double)param_2[4]));
            uVar11 = movmskpd(uVar11,auVar6);
            auVar4._8_8_ = -(ulonglong)
                            (9.999999747378752e-05 < ABS((double)param_1[7] + (double)param_2[7]));
            auVar4._0_8_ = -(ulonglong)
                            (9.999999747378752e-05 < ABS((double)param_1[6] + (double)param_2[6]));
            uVar12 = movmskpd(uVar12,auVar4);
            if ((uVar12 & 0x3fffffff) != 0 || uVar11 != 0) {
              return 0;
            }
          }
          auVar2._8_8_ = -(ulonglong)
                          (9.999999747378752e-05 < ABS((double)param_1[0xd] - (double)param_2[0xd]))
          ;
          auVar2._0_8_ = -(ulonglong)
                          (9.999999747378752e-05 < ABS((double)param_1[0xc] - (double)param_2[0xc]))
          ;
          iVar9 = movmskpd(uVar11,auVar2);
          lVar14 = -(ulonglong)
                    (9.999999747378752e-05 < ABS((double)param_1[0xf] - (double)param_2[0xf]));
          auVar1._8_4_ = (int)lVar14;
          auVar1._0_8_ = -(ulonglong)
                          (9.999999747378752e-05 < ABS((double)param_1[0xe] - (double)param_2[0xe]))
          ;
          auVar1._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
          uVar11 = movmskpd(0,auVar1);
          return CONCAT31((int3)((uint)iVar9 >> 8),(uVar11 & 0x3fffffff) == 0 && iVar9 == 0);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 146e95930 FUN_146e95930 body=522 status=ok
// SIG undefined FUN_146e95930(void)

void FUN_146e95930(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  int iVar2;
  
  FUN_146e9157e();
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_1 + 0x10);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_1 + 0x14);
  dVar1 = *(double *)(param_1 + 0x20);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x28);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x30);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x38);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x40);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x48);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x50);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x60);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x68);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x70);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  return;
}



// FUNCTION 146e95b40 FUN_146e95b40 body=118 status=ok
// SIG undefined FUN_146e95b40(void)

void FUN_146e95b40(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14480c34d(param_2,param_1 + 0x18);
  return;
}



// FUNCTION 146e95bb6 FUN_146e95bb6 body=127 status=ok
// SIG undefined FUN_146e95bb6(void)

byte FUN_146e95bb6(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((((((iVar2 != iVar3) || ((int)param_1[1] != (int)param_2[1])) ||
        (*(int *)((longlong)param_1 + 0xc) != (int)((ulonglong)param_2[1] >> 0x20))) ||
       ((*(float *)(param_1 + 2) != *(float *)(param_2 + 2) ||
        (NAN(*(float *)(param_1 + 2)) || NAN(*(float *)(param_2 + 2)))))) ||
      (((double)param_1[3] != (double)param_2[3] ||
       ((NAN((double)param_1[3]) || NAN((double)param_2[3]) ||
        ((double)param_1[4] != (double)param_2[4])))))) ||
     (NAN((double)param_1[4]) || NAN((double)param_2[4]))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -((double)param_2[5] == (double)param_1[5]) & 1;
  }
  return bVar1;
}



// FUNCTION 146e95c46 FUN_146e95c46 body=201 status=ok
// SIG undefined FUN_146e95c46(void)

void FUN_146e95c46(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  int iVar2;
  
  FUN_146e95d10();
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_1 + 0x10);
  dVar1 = *(double *)(param_1 + 0x18);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x20);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x28);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  return;
}



// FUNCTION 146e95d10 FUN_146e95d10 body=175 status=ok
// SIG undefined FUN_146e95d10(void)

void FUN_146e95d10(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = param_3[1];
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_2,iVar1);
  }
  *(int *)(*param_2 + (longlong)iVar1 * 4) = (int)lVar2;
  iVar3 = (**(code **)(*param_1 + 8))(param_1);
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(float *)(*param_3 + (longlong)iVar1 * 4) = (float)iVar3;
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(float *)(*param_3 + (longlong)iVar1 * 4) = (float)iVar3;
  return;
}



// FUNCTION 146e95dc0 FUN_146e95dc0 body=118 status=ok
// SIG undefined FUN_146e95dc0(void)

void FUN_146e95dc0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14480c34d(param_2,param_1 + 0x18);
  return;
}



// FUNCTION 146e95e36 FUN_146e95e36 body=127 status=ok
// SIG undefined FUN_146e95e36(void)

byte FUN_146e95e36(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((((((iVar2 != iVar3) || ((int)param_1[1] != (int)param_2[1])) ||
        (*(int *)((longlong)param_1 + 0xc) != (int)((ulonglong)param_2[1] >> 0x20))) ||
       ((*(float *)(param_1 + 2) != *(float *)(param_2 + 2) ||
        (NAN(*(float *)(param_1 + 2)) || NAN(*(float *)(param_2 + 2)))))) ||
      (((double)param_1[3] != (double)param_2[3] ||
       ((NAN((double)param_1[3]) || NAN((double)param_2[3]) ||
        ((double)param_1[4] != (double)param_2[4])))))) ||
     (NAN((double)param_1[4]) || NAN((double)param_2[4]))) {
    bVar1 = 0;
  }
  else {
    bVar1 = -((double)param_2[5] == (double)param_1[5]) & 1;
  }
  return bVar1;
}



// FUNCTION 146e95ebe FUN_146e95ebe body=201 status=ok
// SIG undefined FUN_146e95ebe(void)

void FUN_146e95ebe(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  int iVar2;
  
  FUN_146e95d10();
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *(undefined4 *)(param_1 + 0x10);
  dVar1 = *(double *)(param_1 + 0x18);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x20);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  dVar1 = *(double *)(param_1 + 0x28);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)dVar1;
  return;
}



// FUNCTION 146e95f88 FUN_146e95f88 body=122 status=ok
// SIG undefined FUN_146e95f88(void)

void FUN_146e95f88(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  puVar2 = (undefined4 *)(param_1 + 0x10);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146e95fdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    return;
  }
  thunk_FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 146e96002 FUN_146e96002 body=85 status=ok
// SIG undefined FUN_146e96002(void)

byte FUN_146e96002(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  if (((iVar2 == iVar3) && ((int)param_1[1] == (int)param_2[1])) &&
     (*(int *)((longlong)param_1 + 0xc) == (int)((ulonglong)param_2[1] >> 0x20))) {
    bVar1 = -(*(float *)(param_2 + 2) == *(float *)(param_1 + 2)) & 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}



// FUNCTION 146e96060 FUN_146e96060 body=64 status=ok
// SIG undefined FUN_146e96060(void)

void FUN_146e96060(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  
  FUN_146e95d10();
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = *(undefined4 *)(param_1 + 0x10);
  return;
}



// FUNCTION 146e960a0 FUN_146e960a0 body=1120 status=ok
// SIG undefined FUN_146e960a0(void)

void FUN_146e960a0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong **pplVar12;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 local_a0 [2];
  undefined8 *local_98;
  undefined1 local_8c [4];
  longlong *local_88;
  longlong **local_80;
  longlong *local_78;
  int local_70;
  int local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar6 = (longlong *)FUN_14001cc68(0x10,0x10);
  *plVar6 = (longlong)&PTR_FUN_149f61f50;
  plVar6[1] = (longlong)param_3;
  local_80 = &local_b0;
  local_88 = (longlong *)local_a0;
  local_a0[0] = 2;
  local_b0 = plVar6;
  local_98 = param_2;
  FUN_14051b448(param_2 + 4,local_8c,&local_88);
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  plVar10 = *(longlong **)(param_1 + 0x18);
  plVar8 = *(longlong **)(param_1 + 0x20);
  fVar1 = *(float *)(param_1 + 0x10);
  if (plVar10 != (longlong *)0x0 && plVar8 != (longlong *)0x0) {
    local_c0 = (ulonglong)*(uint *)((longlong)param_3 + 0xc);
    uVar3 = *(uint *)(param_2[0x11] + 8);
    local_c8 = (ulonglong)uVar3;
    lVar7 = 0;
    local_b8 = plVar6;
    FUN_144a84024(param_2[0x11],uVar3 + *(uint *)((longlong)param_3 + 0xc) * 2,0);
    local_88 = (longlong *)param_2[0x11];
    local_6c = (int)local_c0;
    local_80 = (longlong **)CONCAT44(local_6c,(int)local_c8);
    local_70 = (int)local_c8 + local_6c;
    local_b0 = (longlong *)0x0;
    local_a8 = 2;
    local_78 = local_88;
    FUN_146ea1648();
    *local_b0 = (longlong)plVar8;
    local_b0[1] = (longlong)plVar10;
    pplVar12 = &local_88;
    bVar4 = true;
    do {
      bVar9 = bVar4;
      iVar5 = (**(code **)(*(longlong *)local_b0[lVar7] + 8))();
      if (iVar5 == 3) {
        (**(code **)(*(longlong *)local_b0[lVar7] + 0x50))
                  ((longlong *)local_b0[lVar7],param_2,pplVar12);
      }
      plVar6 = local_b8;
      lVar7 = 1;
      pplVar12 = &local_78;
      bVar4 = false;
    } while (bVar9);
    switch(*(undefined4 *)(param_1 + 0x28)) {
    case 0:
      if (0 < iVar2) {
        lVar7 = 0;
        do {
          lVar11 = (longlong)
                   *(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar7) * 8);
          *(float *)(*(longlong *)*param_3 + (*(int *)(param_3 + 1) + lVar11) * 4) =
               *(float *)(*local_78 + (local_70 + lVar11) * 4) *
               *(float *)(*local_88 + ((int)local_80 + lVar11) * 4);
          lVar7 = lVar7 + 1;
        } while (iVar2 != (int)lVar7);
      }
      break;
    case 1:
      if (0 < iVar2) {
        lVar7 = 0;
        do {
          lVar11 = (longlong)
                   *(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar7) * 8);
          *(float *)(*(longlong *)*param_3 + (*(int *)(param_3 + 1) + lVar11) * 4) =
               *(float *)(*local_88 + ((int)local_80 + lVar11) * 4) /
               *(float *)(*local_78 + (local_70 + lVar11) * 4);
          lVar7 = lVar7 + 1;
        } while (iVar2 != (int)lVar7);
      }
      break;
    case 2:
      if (0 < iVar2) {
        lVar7 = 0;
        do {
          lVar11 = (longlong)
                   *(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar7) * 8);
          *(float *)(*(longlong *)*param_3 + (*(int *)(param_3 + 1) + lVar11) * 4) =
               *(float *)(*local_78 + (local_70 + lVar11) * 4) +
               *(float *)(*local_88 + ((int)local_80 + lVar11) * 4);
          lVar7 = lVar7 + 1;
        } while (iVar2 != (int)lVar7);
      }
      break;
    case 3:
      if (0 < iVar2) {
        lVar7 = 0;
        do {
          lVar11 = (longlong)
                   *(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar7) * 8);
          *(float *)(*(longlong *)*param_3 + (*(int *)(param_3 + 1) + lVar11) * 4) =
               *(float *)(*local_88 + ((int)local_80 + lVar11) * 4) -
               *(float *)(*local_78 + (local_70 + lVar11) * 4);
          lVar7 = lVar7 + 1;
        } while (iVar2 != (int)lVar7);
      }
    }
    FUN_144a84024(param_2[0x11],local_c8,0);
    if (local_b0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_146e9617e;
  }
  if (plVar8 == (longlong *)0x0) {
LAB_146e96230:
    if ((plVar10 == (longlong *)0x0) || (iVar5 = (**(code **)(*plVar10 + 8))(plVar10), iVar5 != 3))
    goto LAB_146e9617e;
    plVar8 = *(longlong **)(param_1 + 0x18);
    lVar7 = *plVar8;
  }
  else {
    iVar5 = (**(code **)(*plVar8 + 8))(plVar8);
    if (iVar5 != 3) {
      plVar10 = *(longlong **)(param_1 + 0x18);
      goto LAB_146e96230;
    }
    lVar7 = *plVar8;
  }
  (**(code **)(lVar7 + 0x50))(plVar8,param_2,param_3);
LAB_146e9617e:
  if (0 < iVar2 && fVar1 != 1.0) {
    lVar7 = 0;
    do {
      lVar11 = (longlong)*(int *)(param_3 + 1) +
               (longlong)*(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar7) * 8);
      *(float *)(*(longlong *)*param_3 + lVar11 * 4) =
           *(float *)(*(longlong *)*param_3 + lVar11 * 4) * fVar1;
      lVar7 = lVar7 + 1;
    } while (iVar2 != (int)lVar7);
  }
  FUN_14051b27e(local_98 + 4,local_a0[0]);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)*plVar6)(plVar6,1);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e96502 FUN_146e96502 body=239 status=ok
// SIG undefined FUN_146e96502(void)

void FUN_146e96502(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  byte bVar4;
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146e965f2(param_2,param_1 + 0x18);
  FUN_146e965f2(param_2,param_1 + 0x20);
  local_21 = *(byte *)(param_1 + 0x28);
  puVar3 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar3 + 1;
  if ((byte *)puVar3[1] < pbVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
    bVar4 = local_21;
  }
  else {
    bVar4 = *(byte *)*puVar3;
    *puVar3 = (ulonglong)pbVar1;
  }
  *(uint *)(param_1 + 0x28) = (uint)bVar4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e965f2 FUN_146e965f2 body=287 status=ok
// SIG undefined FUN_146e965f2(void)

void FUN_146e965f2(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong *)*param_2 == (longlong *)0x0) {
    local_19 = 0;
  }
  else {
    local_19 = (**(code **)(*(longlong *)*param_2 + 8))();
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar2 + 1;
  if ((undefined1 *)puVar2[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_19,1);
  }
  else {
    local_19 = *(undefined1 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((longlong *)*param_2 == (longlong *)0x0) {
    local_1a = 0;
  }
  else {
    local_1a = (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar2 + 1;
  if ((undefined1 *)puVar2[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_1a,1);
  }
  else {
    local_1a = *(undefined1 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    plVar4 = (longlong *)FUN_146e90526(local_19,local_1a);
    plVar3 = (longlong *)*param_2;
    plVar5 = plVar3;
    if ((plVar3 == plVar4) ||
       (*param_2 = (longlong)plVar4, plVar5 = plVar4, plVar3 == (longlong *)0x0))
    goto LAB_146e966a4;
    (**(code **)*plVar3)(plVar3,1);
  }
  plVar5 = (longlong *)*param_2;
LAB_146e966a4:
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e96712 FUN_146e96712 body=147 status=ok
// SIG undefined FUN_146e96712(void)

undefined4 FUN_146e96712(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  
  iVar5 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  if (iVar5 == iVar6) {
    if ((int)param_1[1] == (int)param_2[1]) {
      bVar8 = *(int *)((longlong)param_1 + 0xc) == (int)((ulonglong)param_2[1] >> 0x20);
    }
    else {
      bVar8 = false;
    }
    fVar1 = *(float *)(param_1 + 2);
    fVar2 = *(float *)(param_2 + 2);
    bVar3 = FUN_146e967a5(param_1 + 3,param_2 + 3);
    bVar4 = FUN_146e967a5(param_1 + 4,param_2 + 4);
    uVar7 = CONCAT31((int3)((uint)(int)param_1[5] >> 8),
                     (int)param_1[5] == (int)param_2[5] & bVar4 & bVar3 & bVar8 & fVar1 == fVar2);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 146e967a5 FUN_146e967a5 body=101 status=ok
// SIG undefined FUN_146e967a5(void)

ulonglong FUN_146e967a5(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0 && *param_2 != 0) {
    iVar2 = (**(code **)(*plVar1 + 0x10))();
    iVar3 = (**(code **)(*(longlong *)*param_2 + 0x10))();
    if (iVar2 == iVar3) {
                    /* WARNING: Could not recover jumptable at 0x000146e967f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,*param_2);
      return uVar4;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(plVar1 != (longlong *)0x0) != (*param_2 != 0))
            ^ 1;
  }
  return uVar4;
}



// FUNCTION 146e9680a FUN_146e9680a body=71 status=ok
// SIG undefined FUN_146e9680a(void)

void FUN_146e9680a(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  *param_2 = *param_2 + 1;
  *param_3 = *param_3 + 6;
  return;
}



// FUNCTION 146e96852 FUN_146e96852 body=289 status=ok
// SIG undefined FUN_146e96852(void)

void FUN_146e96852(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3,param_4);
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3,param_4);
  }
  FUN_146e9157e(param_1,param_2,param_3,param_4);
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = *(undefined4 *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)iVar1;
  return;
}



// FUNCTION 146e96974 FUN_146e96974 body=146 status=ok
// SIG undefined FUN_146e96974(void)

undefined8 FUN_146e96974(longlong param_1)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  fVar5 = 0.0;
  uVar3 = 0;
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
  }
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  fVar6 = (float)uVar3;
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    fVar5 = (float)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x40))();
  }
  iVar1 = *(int *)(param_1 + 0x28);
  uVar4 = uVar7;
  if (iVar1 - 2U < 2) {
    fVar2 = fVar6;
    if (fVar6 <= fVar5) {
      fVar2 = fVar5;
    }
  }
  else if (iVar1 == 1) {
    fVar2 = (float)(-(uint)(1.1920929e-07 < ABS(fVar6)) & (uint)(fVar5 / fVar6));
    uVar4 = 0;
  }
  else {
    fVar2 = 0.0;
    uVar4 = 0;
    if (iVar1 == 0) {
      fVar2 = fVar6 * fVar5;
      uVar4 = uVar7;
    }
  }
  return CONCAT44(uVar4,fVar2 * *(float *)(param_1 + 0x10));
}



// FUNCTION 146e96a06 FUN_146e96a06 body=869 status=ok
// SIG undefined FUN_146e96a06(void)

void FUN_146e96a06(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  undefined4 uVar9;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = -3.4028234663852886e+38;
  local_50 = -3.4028234663852886e+38;
  local_48 = -3.4028234663852886e+38;
  local_70 = 3.4028234663852886e+38;
  local_68 = 3.4028234663852886e+38;
  local_60 = 3.4028234663852886e+38;
  local_88 = -3.4028234663852886e+38;
  local_80 = -3.4028234663852886e+38;
  local_78 = -3.4028234663852886e+38;
  local_a0 = 3.4028234663852886e+38;
  local_98 = 3.4028234663852886e+38;
  local_90 = 3.4028234663852886e+38;
  local_a8 = DAT_14c8464f0;
  local_b8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dStack_b0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_c8 = DAT_14c8464f0;
  local_d8 = (undefined4)DAT_14c8464e0;
  uStack_d4 = DAT_14c8464e0._4_4_;
  uStack_d0 = (undefined4)DAT_14c8464e8;
  uStack_cc = DAT_14c8464e8._4_4_;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_58,&local_70,&local_b8);
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_88,&local_a0,&local_d8);
  }
  dVar15 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dVar12 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_4[2] = DAT_14c8464f0;
  *param_4 = dVar15;
  param_4[1] = dVar12;
  dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  bVar3 = local_b8 == (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  bVar4 = dStack_b0 == dVar15;
  bVar2 = local_a8 == DAT_14c8464f0;
  if (bVar2 && (bVar4 && bVar3)) {
    dVar12 = 1.0;
  }
  else {
    *param_4 = local_b8 + *param_4;
    param_4[1] = dStack_b0 + param_4[1];
    param_4[2] = local_a8 + param_4[2];
    dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    dVar12 = 2.0;
  }
  dVar13 = (double)CONCAT44(uStack_d4,local_d8);
  dVar5 = (double)CONCAT44(uStack_cc,uStack_d0);
  dVar14 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  if ((((dVar13 != (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)) ||
       (NAN(dVar13) || NAN(dVar14))) || (dVar5 != dVar15)) ||
     (((NAN(dVar5) || NAN(dVar15) || (local_c8 != DAT_14c8464f0)) ||
      (NAN(local_c8) || NAN(DAT_14c8464f0))))) {
    dVar14 = dVar13 + *param_4;
    dVar15 = dVar5 + param_4[1];
    dVar13 = local_c8 + param_4[2];
LAB_146e96c14:
    dVar12 = 1.0 / dVar12;
    dVar13 = dVar13 * dVar12;
    dVar15 = dVar15 * dVar12;
    dVar14 = dVar12 * dVar14;
  }
  else {
    dVar13 = DAT_14c8464f0;
    if (!bVar2 || (!bVar4 || !bVar3)) {
      dVar13 = param_4[2];
      dVar14 = *param_4;
      dVar15 = param_4[1];
      dVar12 = 1.0;
      goto LAB_146e96c14;
    }
  }
  *param_4 = dVar14;
  param_4[1] = dVar15;
  param_4[2] = dVar13;
  uVar10 = (undefined4)((ulonglong)local_48 >> 0x20);
  uVar8 = (undefined4)((ulonglong)local_78 >> 0x20);
  uVar11 = (undefined4)((ulonglong)local_60 >> 0x20);
  uVar9 = (undefined4)((ulonglong)local_90 >> 0x20);
  uVar7 = SUB84(local_60,0);
  dVar15 = local_70;
  dVar12 = local_68;
  if (*(uint *)(param_1 + 0x28) - 2 < 2) {
    uVar6 = SUB84(local_48,0);
    if (local_78 <= local_48) {
      uVar6 = SUB84(local_78,0);
      uVar10 = uVar8;
    }
    dVar14 = local_50;
    if (local_80 <= local_50) {
      dVar14 = local_80;
    }
    dVar13 = local_58;
    if (local_88 <= local_58) {
      dVar13 = local_88;
    }
    *param_2 = dVar13;
    param_2[1] = dVar14;
    param_2[2] = (double)CONCAT44(uVar10,uVar6);
    if (local_60 <= local_90) {
      uVar7 = SUB84(local_90,0);
      uVar11 = uVar9;
    }
    if (local_68 <= local_98) {
      dVar12 = local_98;
    }
    if (local_70 <= local_a0) {
      dVar15 = local_a0;
    }
  }
  else {
    if (1 < *(uint *)(param_1 + 0x28)) goto LAB_146e96d3d;
    uVar6 = SUB84(local_48,0);
    if (local_48 <= local_78) {
      uVar6 = SUB84(local_78,0);
      uVar10 = uVar8;
    }
    dVar14 = local_50;
    if (local_50 <= local_80) {
      dVar14 = local_80;
    }
    dVar13 = local_58;
    if (local_58 <= local_88) {
      dVar13 = local_88;
    }
    *param_2 = dVar13;
    param_2[1] = dVar14;
    param_2[2] = (double)CONCAT44(uVar10,uVar6);
    if (local_90 <= local_60) {
      uVar7 = SUB84(local_90,0);
      uVar11 = uVar9;
    }
    if (local_98 <= local_68) {
      dVar12 = local_98;
    }
    if (local_a0 <= local_70) {
      dVar15 = local_a0;
    }
  }
  *param_3 = dVar15;
  param_3[1] = dVar12;
  param_3[2] = (double)CONCAT44(uVar11,uVar7);
LAB_146e96d3d:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e96d6c FUN_146e96d6c body=251 status=ok
// SIG undefined FUN_146e96d6c(void)

void FUN_146e96d6c(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  byte bVar4;
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146e965f2(param_2,param_1 + 0x18);
  FUN_146e96e68(param_2,param_1 + 0x20);
  FUN_146e96e68(param_2,param_1 + 0x28);
  local_21 = *(byte *)(param_1 + 0x30);
  puVar3 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar3 + 1;
  if ((byte *)puVar3[1] < pbVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
    bVar4 = local_21;
  }
  else {
    bVar4 = *(byte *)*puVar3;
    *puVar3 = (ulonglong)pbVar1;
  }
  *(uint *)(param_1 + 0x30) = (uint)bVar4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e96e68 FUN_146e96e68 body=287 status=ok
// SIG undefined FUN_146e96e68(void)

void FUN_146e96e68(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong *)*param_2 == (longlong *)0x0) {
    local_19 = 0;
  }
  else {
    local_19 = (**(code **)(*(longlong *)*param_2 + 8))();
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar2 + 1;
  if ((undefined1 *)puVar2[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_19,1);
  }
  else {
    local_19 = *(undefined1 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((longlong *)*param_2 == (longlong *)0x0) {
    local_1a = 0;
  }
  else {
    local_1a = (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar2 + 1;
  if ((undefined1 *)puVar2[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_1a,1);
  }
  else {
    local_1a = *(undefined1 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    plVar4 = (longlong *)FUN_146e90526(local_19,local_1a);
    plVar3 = (longlong *)*param_2;
    plVar5 = plVar3;
    if ((plVar3 == plVar4) ||
       (*param_2 = (longlong)plVar4, plVar5 = plVar4, plVar3 == (longlong *)0x0))
    goto LAB_146e96f1a;
    (**(code **)*plVar3)(plVar3,1);
  }
  plVar5 = (longlong *)*param_2;
LAB_146e96f1a:
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e96f88 FUN_146e96f88 body=140 status=ok
// SIG undefined FUN_146e96f88(void)

undefined4 FUN_146e96f88(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  if (((iVar2 == iVar3) && ((int)param_1[1] == (int)param_2[1])) &&
     (*(int *)((longlong)param_1 + 0xc) == (int)((ulonglong)param_2[1] >> 0x20))) {
    if (((*(float *)(param_1 + 2) == *(float *)(param_2 + 2)) &&
        (!NAN(*(float *)(param_1 + 2)) && !NAN(*(float *)(param_2 + 2)))) &&
       ((cVar1 = FUN_146e967a5(param_1 + 3,param_2 + 3), cVar1 != '\0' &&
        ((cVar1 = FUN_146e97014(param_1 + 4,param_2 + 4), cVar1 != '\0' &&
         (cVar1 = FUN_146e97014(param_1 + 5,param_2 + 5), cVar1 != '\0')))))) {
      return CONCAT31((int3)((uint)(int)param_1[6] >> 8),(int)param_1[6] == (int)param_2[6]);
    }
  }
  return 0;
}



// FUNCTION 146e97014 FUN_146e97014 body=101 status=ok
// SIG undefined FUN_146e97014(void)

ulonglong FUN_146e97014(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0 && *param_2 != 0) {
    iVar2 = (**(code **)(*plVar1 + 0x10))();
    iVar3 = (**(code **)(*(longlong *)*param_2 + 0x10))();
    if (iVar2 == iVar3) {
                    /* WARNING: Could not recover jumptable at 0x000146e97066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,*param_2);
      return uVar4;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(plVar1 != (longlong *)0x0) != (*param_2 != 0))
            ^ 1;
  }
  return uVar4;
}



// FUNCTION 146e9707a FUN_146e9707a body=92 status=ok
// SIG undefined FUN_146e9707a(void)

void FUN_146e9707a(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  *param_2 = *param_2 + 1;
  *param_3 = *param_3 + 7;
  return;
}



// FUNCTION 146e970d6 FUN_146e970d6 body=366 status=ok
// SIG undefined FUN_146e970d6(void)

void FUN_146e970d6(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3,param_4);
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3,param_4);
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3,param_4);
  }
  FUN_146e95d10(param_1,param_2,param_3,param_4);
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = *(undefined4 *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)iVar1;
  return;
}



// FUNCTION 146e97244 FUN_146e97244 body=106 status=ok
// SIG undefined FUN_146e97244(void)

undefined8 * FUN_146e97244(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  }
  puVar1[1] = 0;
  FUN_1446ddc76(puVar1 + 1,&DAT_149e02088,1);
  *puVar1 = &PTR_FUN_149f5fc40;
  puVar1[2] = uVar2;
  return puVar1;
}



// FUNCTION 146e972ae FUN_146e972ae body=255 status=ok
// SIG undefined FUN_146e972ae(void)

void FUN_146e972ae(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  plVar4 = (longlong *)param_2[0x12];
  iVar3 = (int)plVar4[1];
  FUN_144a1a59e(plVar4,iVar3 + iVar1,0);
  memset((void *)((longlong)iVar3 * 4 + *plVar4),0,(longlong)iVar1 << 2);
  local_50 = plVar4;
  local_48 = iVar3;
  local_44 = iVar1;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))(*(longlong **)(param_1 + 0x10),param_2);
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      lVar6 = (longlong)*(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar5) * 8);
      *(float *)(*(longlong *)*param_3 + (*(int *)(param_3 + 1) + lVar6) * 4) =
           (float)*(int *)(*local_50 + (local_48 + lVar6) * 4);
      lVar5 = lVar5 + 1;
    } while (iVar2 != (int)lVar5);
  }
  FUN_144a1a59e(plVar4,iVar3,0);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e973ae FUN_146e973ae body=91 status=ok
// SIG undefined FUN_146e973ae(void)

undefined8 FUN_146e973ae(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (((iVar1 == iVar2) && ((int)param_1[1] == (int)param_2[1])) &&
     (*(int *)((longlong)param_1 + 0xc) == (int)((ulonglong)param_2[1] >> 0x20))) {
    uVar3 = FUN_146e97409(param_1 + 2,param_2 + 2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 146e97409 FUN_146e97409 body=101 status=ok
// SIG undefined FUN_146e97409(void)

ulonglong FUN_146e97409(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0 && *param_2 != 0) {
    iVar2 = (**(code **)(*plVar1 + 0x10))();
    iVar3 = (**(code **)(*(longlong *)*param_2 + 0x10))();
    if (iVar2 == iVar3) {
                    /* WARNING: Could not recover jumptable at 0x000146e9745b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*(longlong *)*param_1 + 0x28))((longlong *)*param_1,*param_2);
      return uVar4;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(plVar1 != (longlong *)0x0) != (*param_2 != 0))
            ^ 1;
  }
  return uVar4;
}



// FUNCTION 146e97474 FUN_146e97474 body=49 status=ok
// SIG undefined FUN_146e97474(void)

void FUN_146e97474(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  FUN_146e974a5(param_2,param_1 + 0x10);
  return;
}



// FUNCTION 146e974a5 FUN_146e974a5 body=287 status=ok
// SIG undefined FUN_146e974a5(void)

void FUN_146e974a5(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong *)*param_2 == (longlong *)0x0) {
    local_19 = 0;
  }
  else {
    local_19 = (**(code **)(*(longlong *)*param_2 + 8))();
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar2 + 1;
  if ((undefined1 *)puVar2[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_19,1);
  }
  else {
    local_19 = *(undefined1 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((longlong *)*param_2 == (longlong *)0x0) {
    local_1a = 0;
  }
  else {
    local_1a = (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar2 + 1;
  if ((undefined1 *)puVar2[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_1a,1);
  }
  else {
    local_1a = *(undefined1 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    plVar4 = (longlong *)FUN_146e90526(local_19,local_1a);
    plVar3 = (longlong *)*param_2;
    plVar5 = plVar3;
    if ((plVar3 == plVar4) ||
       (*param_2 = (longlong)plVar4, plVar5 = plVar4, plVar3 == (longlong *)0x0))
    goto LAB_146e97557;
    (**(code **)*plVar3)(plVar3,1);
  }
  plVar5 = (longlong *)*param_2;
LAB_146e97557:
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e975c6 FUN_146e975c6 body=45 status=ok
// SIG undefined FUN_146e975c6(void)

void FUN_146e975c6(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  *param_2 = *param_2 + 1;
  *param_3 = *param_3 + 3;
  return;
}



// FUNCTION 146e975f4 FUN_146e975f4 body=133 status=ok
// SIG undefined FUN_146e975f4(void)

void FUN_146e975f4(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2,param_3,param_4);
  }
  FUN_146e9157e(param_1,param_2,param_3,param_4);
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
  return;
}



// FUNCTION 146e9768e FUN_146e9768e body=183 status=ok
// SIG undefined FUN_146e9768e(void)

void FUN_146e9768e(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0xc7efffffe0000000;
  local_28 = 0xc7efffffe0000000;
  local_20 = 0xc7efffffe0000000;
  local_48 = 0x47efffffe0000000;
  local_40 = 0x47efffffe0000000;
  local_38 = 0x47efffffe0000000;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_30,&local_48);
  }
  param_2[2] = local_20;
  *param_2 = local_30;
  param_2[1] = local_28;
  param_3[2] = local_38;
  *param_3 = local_48;
  param_3[1] = local_40;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e97746 FUN_146e97746 body=162 status=ok
// SIG undefined FUN_146e97746(void)

void FUN_146e97746(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = param_2[1];
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
  }
  *(int *)(*param_1 + (longlong)iVar1 * 4) = (int)lVar2;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x40400000;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x41500000;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_2,iVar1);
  }
  *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = 0x3f800000;
  return;
}



// FUNCTION 146e977e8 FUN_146e977e8 body=106 status=ok
// SIG undefined FUN_146e977e8(void)

undefined8 * FUN_146e977e8(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  }
  puVar1[1] = 0;
  FUN_1446ddc76(puVar1 + 1,&DAT_149e02088,1);
  *puVar1 = &PTR_FUN_149f5fca0;
  puVar1[2] = uVar2;
  return puVar1;
}



// FUNCTION 146e97852 FUN_146e97852 body=250 status=ok
// SIG undefined FUN_146e97852(void)

void FUN_146e97852(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)((longlong)param_3 + 0xc);
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  plVar4 = (longlong *)param_2[0x11];
  iVar3 = (int)plVar4[1];
  FUN_144a84024(plVar4,iVar3 + iVar1,0);
  memset((void *)((longlong)iVar3 * 4 + *plVar4),0,(longlong)iVar1 << 2);
  local_50 = plVar4;
  local_48 = iVar3;
  local_44 = iVar1;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))(*(longlong **)(param_1 + 0x10),param_2);
  if (0 < iVar2) {
    lVar5 = 0;
    do {
      lVar6 = (longlong)*(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar5) * 8);
      *(int *)(*(longlong *)*param_3 + (*(int *)(param_3 + 1) + lVar6) * 4) =
           (int)*(float *)(*local_50 + (local_48 + lVar6) * 4);
      lVar5 = lVar5 + 1;
    } while (iVar2 != (int)lVar5);
  }
  FUN_144a84024(plVar4,iVar3,0);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9794e FUN_146e9794e body=91 status=ok
// SIG undefined FUN_146e9794e(void)

undefined8 FUN_146e9794e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (((iVar1 == iVar2) && ((int)param_1[1] == (int)param_2[1])) &&
     (*(int *)((longlong)param_1 + 0xc) == (int)((ulonglong)param_2[1] >> 0x20))) {
    uVar3 = FUN_146e967a5(param_1 + 2,param_2 + 2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 146e979b0 FUN_146e979b0 body=49 status=ok
// SIG undefined FUN_146e979b0(void)

void FUN_146e979b0(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  FUN_146e965f2(param_2,param_1 + 0x10);
  return;
}



// FUNCTION 146e979e2 FUN_146e979e2 body=45 status=ok
// SIG undefined FUN_146e979e2(void)

void FUN_146e979e2(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  *param_2 = *param_2 + 1;
  *param_3 = *param_3 + 3;
  return;
}



// FUNCTION 146e97a10 FUN_146e97a10 body=133 status=ok
// SIG undefined FUN_146e97a10(void)

void FUN_146e97a10(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2,param_3,param_4);
  }
  FUN_146e90ea4(param_1,param_2,param_3,param_4);
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
  return;
}



// FUNCTION 146e97aaa FUN_146e97aaa body=183 status=ok
// SIG undefined FUN_146e97aaa(void)

void FUN_146e97aaa(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0xc7efffffe0000000;
  local_28 = 0xc7efffffe0000000;
  local_20 = 0xc7efffffe0000000;
  local_48 = 0x47efffffe0000000;
  local_40 = 0x47efffffe0000000;
  local_38 = 0x47efffffe0000000;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_30,&local_48);
  }
  param_2[2] = local_20;
  *param_2 = local_30;
  param_2[1] = local_28;
  param_3[2] = local_38;
  *param_3 = local_48;
  param_3[1] = local_40;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e97b62 FUN_146e97b62 body=783 status=ok
// SIG undefined FUN_146e97b62(void)

void FUN_146e97b62(longlong param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108;
  int local_100;
  int local_fc;
  longlong *local_f8;
  int local_f0;
  int local_ec;
  undefined1 local_e8 [160];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar4 = *(longlong **)(param_1 + 0x10);
  plVar5 = *(longlong **)(param_1 + 0x18);
  if (plVar4 == (longlong *)0x0) {
    if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
    }
  }
  else {
    iVar8 = *(int *)(param_3 + 0xc);
    iVar2 = *(int *)((longlong)param_2 + 0xc);
    iVar6 = (**(code **)(*plVar4 + 8))(plVar4);
    if (iVar6 == 3) {
      iVar6 = *(int *)(param_2[0x11] + 8);
      iVar11 = 0;
      local_118 = plVar5;
      local_110 = param_3;
      FUN_144a84024(param_2[0x11],iVar8 + iVar6,0);
      local_f8 = (longlong *)param_2[0x11];
      local_f0 = iVar6;
      local_ec = iVar8;
      memset((void *)((longlong)iVar6 * 4 + *local_f8),0,(longlong)iVar8 << 2);
      (**(code **)(*plVar4 + 0x50))(plVar4,param_2,&local_f8);
      iVar3 = *(int *)(param_2[0x13] + 8);
      FUN_1406ea1ca(param_2[0x13],iVar3 + iVar8,0);
      if (iVar2 < 1) {
        FUN_144a84024(param_2[0x11],iVar6,0);
      }
      else {
        plVar4 = (longlong *)param_2[0x13];
        lVar9 = 0;
        do {
          fVar1 = *(float *)(*local_f8 +
                            ((longlong)local_f0 +
                            (longlong)
                            *(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar9) * 8
                                    )) * 4);
          if (*(int *)(param_1 + 0x20) == 1) {
            if ((fVar1 != 0.0) || (NAN(fVar1))) {
LAB_146e97c85:
              *(undefined8 *)(*plVar4 + (longlong)(iVar11 + iVar3) * 8) =
                   *(undefined8 *)(*(longlong *)*param_2 + (*(int *)(param_2 + 1) + lVar9) * 8);
              iVar11 = iVar11 + 1;
            }
          }
          else if ((fVar1 == 0.0) && (!NAN(fVar1))) goto LAB_146e97c85;
          lVar9 = lVar9 + 1;
        } while (iVar2 != (int)lVar9);
        FUN_144a84024(param_2[0x11],iVar6,0);
        if (iVar11 != 0) {
          piVar10 = (int *)0x0;
          FUN_1406ea1ca(param_2[0x13],iVar11 + iVar3,0);
          if (*(int *)(param_2 + 5) != *(int *)((longlong)param_2 + 0x54)) {
            puVar7 = param_2 + 0xb;
            if ((undefined8 *)param_2[0xc] != (undefined8 *)0x0) {
              puVar7 = (undefined8 *)param_2[0xc];
            }
            iVar8 = *(int *)((longlong)puVar7 + (ulonglong)(*(int *)(param_2 + 0xd) - 1U & 4) * 4);
            if (iVar8 != -1) {
              do {
                piVar10 = (int *)(param_2[4] + (longlong)iVar8 * 0x18);
                if (*piVar10 == 4) goto LAB_146e97d31;
                iVar8 = piVar10[4];
              } while (iVar8 != -1);
            }
            piVar10 = (int *)0x0;
          }
LAB_146e97d31:
          lVar9 = *(longlong *)(piVar10 + 2);
          if (lVar9 != 0) {
            *(undefined1 *)(lVar9 + 8) = 1;
            FUN_1406ea1ca(*(undefined8 *)(lVar9 + 0x10),iVar11,0);
            memcpy((void *)**(undefined8 **)(lVar9 + 0x10),
                   (void *)((longlong)iVar3 * 8 + *(longlong *)param_2[0x13]),(longlong)iVar11 << 3)
            ;
            if (local_118 != (longlong *)0x0) {
              local_128 = param_2[0x13];
              local_120 = *(undefined8 *)(lVar9 + 0x10);
              local_130 = param_2[0x12];
              local_140 = *(undefined4 *)(param_2 + 0x10);
              uStack_13c = *(undefined4 *)((longlong)param_2 + 0x84);
              uStack_138 = *(undefined4 *)(param_2 + 0x11);
              uStack_134 = *(undefined4 *)((longlong)param_2 + 0x8c);
              local_148 = param_2[0xf];
              local_108 = local_128;
              local_100 = iVar3;
              local_fc = iVar11;
              FUN_146e97e94(local_e8,&local_108,param_2 + 2,param_2 + 4);
              (**(code **)(*local_118 + 0x50))(local_118,local_e8,local_110);
              FUN_1402a0358(local_e8);
            }
          }
        }
      }
      FUN_1406ea1ca(param_2[0x13],iVar3,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e97e94 FUN_146e97e94 body=303 status=ok
// SIG undefined FUN_146e97e94(void)

undefined8 *
FUN_146e97e94(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  undefined8 *local_70;
  undefined4 *local_68;
  undefined8 **local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_3[1];
  param_1[2] = *param_3;
  param_1[3] = uVar1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_146e9d464(param_1 + 4,param_4);
  param_1[0xf] = param_5;
  param_1[0x10] = param_6;
  param_1[0x11] = param_7;
  param_1[0x12] = param_8;
  param_1[0x13] = param_9;
  local_70 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *local_70 = &PTR_FUN_149f62930;
  *(undefined1 *)(local_70 + 1) = 0;
  local_70[2] = param_10;
  param_1[0xe] = local_70;
  local_60 = &local_70;
  local_68 = &local_74;
  local_74 = 4;
  FUN_1407228e6(param_1 + 4,local_54,&local_68,0);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e97fc4 FUN_146e97fc4 body=110 status=ok
// SIG undefined FUN_146e97fc4(void)

undefined4 FUN_146e97fc4(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((((iVar2 == iVar3) && ((int)param_1[1] == (int)param_2[1])) &&
      (*(int *)((longlong)param_1 + 0xc) == (int)((ulonglong)param_2[1] >> 0x20))) &&
     ((cVar1 = FUN_146e967a5(param_1 + 2,param_2 + 2), cVar1 != '\0' &&
      (cVar1 = FUN_146e97409(param_1 + 3,param_2 + 3), cVar1 != '\0')))) {
    return CONCAT31((int3)((uint)(int)param_1[4] >> 8),(int)param_1[4] == (int)param_2[4]);
  }
  return 0;
}



// FUNCTION 146e98038 FUN_146e98038 body=163 status=ok
// SIG undefined FUN_146e98038(void)

void FUN_146e98038(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  byte bVar3;
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  FUN_146e965f2(param_2,param_1 + 0x10);
  FUN_146e974a5(param_2,param_1 + 0x18);
  local_21 = *(byte *)(param_1 + 0x20);
  puVar2 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar2 + 1;
  if ((byte *)puVar2[1] < pbVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
    bVar3 = local_21;
  }
  else {
    bVar3 = *(byte *)*puVar2;
    *puVar2 = (ulonglong)pbVar1;
  }
  *(uint *)(param_1 + 0x20) = (uint)bVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e980dc FUN_146e980dc body=71 status=ok
// SIG undefined FUN_146e980dc(void)

void FUN_146e980dc(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  *param_2 = *param_2 + 1;
  *param_3 = *param_3 + 5;
  return;
}



// FUNCTION 146e98124 FUN_146e98124 body=248 status=ok
// SIG undefined FUN_146e98124(void)

void FUN_146e98124(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3,param_4);
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3,param_4);
  }
  FUN_146e90ea4(param_1,param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)iVar1;
  return;
}



// FUNCTION 146e9821c FUN_146e9821c body=142 status=ok
// SIG undefined FUN_146e9821c(void)

undefined8 * FUN_146e9821c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  }
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  }
  puVar2[1] = 0;
  FUN_1446ddc76(puVar2 + 1,&DAT_149e02088,1);
  *puVar2 = &PTR_FUN_149f5fd60;
  puVar2[2] = uVar4;
  puVar2[3] = uVar3;
  *(undefined4 *)(puVar2 + 4) = uVar1;
  return puVar2;
}



// FUNCTION 146e982aa FUN_146e982aa body=783 status=ok
// SIG undefined FUN_146e982aa(void)

void FUN_146e982aa(longlong param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108;
  int local_100;
  int local_fc;
  longlong *local_f8;
  int local_f0;
  int local_ec;
  undefined1 local_e8 [160];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar4 = *(longlong **)(param_1 + 0x10);
  plVar5 = *(longlong **)(param_1 + 0x18);
  if (plVar4 == (longlong *)0x0) {
    if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
    }
  }
  else {
    iVar8 = *(int *)(param_3 + 0xc);
    iVar2 = *(int *)((longlong)param_2 + 0xc);
    iVar6 = (**(code **)(*plVar4 + 8))(plVar4);
    if (iVar6 == 3) {
      iVar6 = *(int *)(param_2[0x11] + 8);
      iVar11 = 0;
      local_118 = plVar5;
      local_110 = param_3;
      FUN_144a84024(param_2[0x11],iVar8 + iVar6,0);
      local_f8 = (longlong *)param_2[0x11];
      local_f0 = iVar6;
      local_ec = iVar8;
      memset((void *)((longlong)iVar6 * 4 + *local_f8),0,(longlong)iVar8 << 2);
      (**(code **)(*plVar4 + 0x50))(plVar4,param_2,&local_f8);
      iVar3 = *(int *)(param_2[0x13] + 8);
      FUN_1406ea1ca(param_2[0x13],iVar3 + iVar8,0);
      if (iVar2 < 1) {
        FUN_144a84024(param_2[0x11],iVar6,0);
      }
      else {
        plVar4 = (longlong *)param_2[0x13];
        lVar9 = 0;
        do {
          fVar1 = *(float *)(*local_f8 +
                            ((longlong)local_f0 +
                            (longlong)
                            *(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar9) * 8
                                    )) * 4);
          if (*(int *)(param_1 + 0x20) == 1) {
            if ((fVar1 != 0.0) || (NAN(fVar1))) {
LAB_146e983cd:
              *(undefined8 *)(*plVar4 + (longlong)(iVar11 + iVar3) * 8) =
                   *(undefined8 *)(*(longlong *)*param_2 + (*(int *)(param_2 + 1) + lVar9) * 8);
              iVar11 = iVar11 + 1;
            }
          }
          else if ((fVar1 == 0.0) && (!NAN(fVar1))) goto LAB_146e983cd;
          lVar9 = lVar9 + 1;
        } while (iVar2 != (int)lVar9);
        FUN_144a84024(param_2[0x11],iVar6,0);
        if (iVar11 != 0) {
          piVar10 = (int *)0x0;
          FUN_1406ea1ca(param_2[0x13],iVar11 + iVar3,0);
          if (*(int *)(param_2 + 5) != *(int *)((longlong)param_2 + 0x54)) {
            puVar7 = param_2 + 0xb;
            if ((undefined8 *)param_2[0xc] != (undefined8 *)0x0) {
              puVar7 = (undefined8 *)param_2[0xc];
            }
            iVar8 = *(int *)((longlong)puVar7 + (ulonglong)(*(int *)(param_2 + 0xd) - 1U & 4) * 4);
            if (iVar8 != -1) {
              do {
                piVar10 = (int *)(param_2[4] + (longlong)iVar8 * 0x18);
                if (*piVar10 == 4) goto LAB_146e98479;
                iVar8 = piVar10[4];
              } while (iVar8 != -1);
            }
            piVar10 = (int *)0x0;
          }
LAB_146e98479:
          lVar9 = *(longlong *)(piVar10 + 2);
          if (lVar9 != 0) {
            *(undefined1 *)(lVar9 + 8) = 1;
            FUN_1406ea1ca(*(undefined8 *)(lVar9 + 0x10),iVar11,0);
            memcpy((void *)**(undefined8 **)(lVar9 + 0x10),
                   (void *)((longlong)iVar3 * 8 + *(longlong *)param_2[0x13]),(longlong)iVar11 << 3)
            ;
            if (local_118 != (longlong *)0x0) {
              local_128 = param_2[0x13];
              local_120 = *(undefined8 *)(lVar9 + 0x10);
              local_130 = param_2[0x12];
              local_140 = *(undefined4 *)(param_2 + 0x10);
              uStack_13c = *(undefined4 *)((longlong)param_2 + 0x84);
              uStack_138 = *(undefined4 *)(param_2 + 0x11);
              uStack_134 = *(undefined4 *)((longlong)param_2 + 0x8c);
              local_148 = param_2[0xf];
              local_108 = local_128;
              local_100 = iVar3;
              local_fc = iVar11;
              FUN_146e97e94(local_e8,&local_108,param_2 + 2,param_2 + 4);
              (**(code **)(*local_118 + 0x50))(local_118,local_e8,local_110);
              FUN_1402a0358(local_e8);
            }
          }
        }
      }
      FUN_1406ea1ca(param_2[0x13],iVar3,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e985dc FUN_146e985dc body=110 status=ok
// SIG undefined FUN_146e985dc(void)

undefined4 FUN_146e985dc(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((((iVar2 == iVar3) && ((int)param_1[1] == (int)param_2[1])) &&
      (*(int *)((longlong)param_1 + 0xc) == (int)((ulonglong)param_2[1] >> 0x20))) &&
     ((cVar1 = FUN_146e967a5(param_1 + 2,param_2 + 2), cVar1 != '\0' &&
      (cVar1 = FUN_146e967a5(param_1 + 3,param_2 + 3), cVar1 != '\0')))) {
    return CONCAT31((int3)((uint)(int)param_1[4] >> 8),(int)param_1[4] == (int)param_2[4]);
  }
  return 0;
}



// FUNCTION 146e98650 FUN_146e98650 body=163 status=ok
// SIG undefined FUN_146e98650(void)

void FUN_146e98650(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  byte bVar3;
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  FUN_146e965f2(param_2,param_1 + 0x10);
  FUN_146e965f2(param_2,param_1 + 0x18);
  local_21 = *(byte *)(param_1 + 0x20);
  puVar2 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar2 + 1;
  if ((byte *)puVar2[1] < pbVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
    bVar3 = local_21;
  }
  else {
    bVar3 = *(byte *)*puVar2;
    *puVar2 = (ulonglong)pbVar1;
  }
  *(uint *)(param_1 + 0x20) = (uint)bVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e986f4 FUN_146e986f4 body=71 status=ok
// SIG undefined FUN_146e986f4(void)

void FUN_146e986f4(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  *param_2 = *param_2 + 1;
  *param_3 = *param_3 + 5;
  return;
}



// FUNCTION 146e9873c FUN_146e9873c body=248 status=ok
// SIG undefined FUN_146e9873c(void)

void FUN_146e9873c(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3,param_4);
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3,param_4);
  }
  FUN_146e9157e(param_1,param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)iVar1;
  return;
}



// FUNCTION 146e98848 FUN_146e98848 body=865 status=ok
// SIG undefined FUN_146e98848(void)

void FUN_146e98848(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  undefined4 uVar9;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = -3.4028234663852886e+38;
  local_50 = -3.4028234663852886e+38;
  local_48 = -3.4028234663852886e+38;
  local_70 = 3.4028234663852886e+38;
  local_68 = 3.4028234663852886e+38;
  local_60 = 3.4028234663852886e+38;
  local_88 = -3.4028234663852886e+38;
  local_80 = -3.4028234663852886e+38;
  local_78 = -3.4028234663852886e+38;
  local_a0 = 3.4028234663852886e+38;
  local_98 = 3.4028234663852886e+38;
  local_90 = 3.4028234663852886e+38;
  local_a8 = DAT_14c8464f0;
  local_b8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dStack_b0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_c8 = DAT_14c8464f0;
  local_d8 = (undefined4)DAT_14c8464e0;
  uStack_d4 = DAT_14c8464e0._4_4_;
  uStack_d0 = (undefined4)DAT_14c8464e8;
  uStack_cc = DAT_14c8464e8._4_4_;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_58,&local_70,&local_b8);
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_88,&local_a0,&local_d8);
  }
  dVar15 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dVar12 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_4[2] = DAT_14c8464f0;
  *param_4 = dVar15;
  param_4[1] = dVar12;
  dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  bVar3 = local_b8 == (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  bVar4 = dStack_b0 == dVar15;
  bVar2 = local_a8 == DAT_14c8464f0;
  if (bVar2 && (bVar4 && bVar3)) {
    dVar12 = 1.0;
  }
  else {
    *param_4 = local_b8 + *param_4;
    param_4[1] = dStack_b0 + param_4[1];
    param_4[2] = local_a8 + param_4[2];
    dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    dVar12 = 2.0;
  }
  dVar13 = (double)CONCAT44(uStack_d4,local_d8);
  dVar5 = (double)CONCAT44(uStack_cc,uStack_d0);
  dVar14 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  if ((((dVar13 != (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)) ||
       (NAN(dVar13) || NAN(dVar14))) || (dVar5 != dVar15)) ||
     (((NAN(dVar5) || NAN(dVar15) || (local_c8 != DAT_14c8464f0)) ||
      (NAN(local_c8) || NAN(DAT_14c8464f0))))) {
    dVar14 = dVar13 + *param_4;
    dVar15 = dVar5 + param_4[1];
    dVar13 = local_c8 + param_4[2];
LAB_146e98a56:
    dVar12 = 1.0 / dVar12;
    dVar13 = dVar13 * dVar12;
    dVar15 = dVar15 * dVar12;
    dVar14 = dVar12 * dVar14;
  }
  else {
    dVar13 = DAT_14c8464f0;
    if (!bVar2 || (!bVar4 || !bVar3)) {
      dVar13 = param_4[2];
      dVar14 = *param_4;
      dVar15 = param_4[1];
      dVar12 = 1.0;
      goto LAB_146e98a56;
    }
  }
  *param_4 = dVar14;
  param_4[1] = dVar15;
  param_4[2] = dVar13;
  uVar10 = (undefined4)((ulonglong)local_48 >> 0x20);
  uVar8 = (undefined4)((ulonglong)local_78 >> 0x20);
  uVar11 = (undefined4)((ulonglong)local_60 >> 0x20);
  uVar9 = (undefined4)((ulonglong)local_90 >> 0x20);
  uVar7 = SUB84(local_60,0);
  dVar15 = local_70;
  dVar12 = local_68;
  if (*(int *)(param_1 + 0x20) == 1) {
    uVar6 = SUB84(local_48,0);
    if (local_48 <= local_78) {
      uVar6 = SUB84(local_78,0);
      uVar10 = uVar8;
    }
    dVar14 = local_50;
    if (local_50 <= local_80) {
      dVar14 = local_80;
    }
    dVar13 = local_58;
    if (local_58 <= local_88) {
      dVar13 = local_88;
    }
    *param_2 = dVar13;
    param_2[1] = dVar14;
    param_2[2] = (double)CONCAT44(uVar10,uVar6);
    if (local_90 <= local_60) {
      uVar7 = SUB84(local_90,0);
      uVar11 = uVar9;
    }
    if (local_98 <= local_68) {
      dVar12 = local_98;
    }
    if (local_a0 <= local_70) {
      dVar15 = local_a0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) goto LAB_146e98b7b;
    uVar6 = SUB84(local_48,0);
    if (local_78 <= local_48) {
      uVar6 = SUB84(local_78,0);
      uVar10 = uVar8;
    }
    dVar14 = local_50;
    if (local_80 <= local_50) {
      dVar14 = local_80;
    }
    dVar13 = local_58;
    if (local_88 <= local_58) {
      dVar13 = local_88;
    }
    *param_2 = dVar13;
    param_2[1] = dVar14;
    param_2[2] = (double)CONCAT44(uVar10,uVar6);
    if (local_60 <= local_90) {
      uVar7 = SUB84(local_90,0);
      uVar11 = uVar9;
    }
    if (local_68 <= local_98) {
      dVar12 = local_98;
    }
    if (local_70 <= local_a0) {
      dVar15 = local_a0;
    }
  }
  *param_3 = dVar15;
  param_3[1] = dVar12;
  param_3[2] = (double)CONCAT44(uVar11,uVar7);
LAB_146e98b7b:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e98baa FUN_146e98baa body=142 status=ok
// SIG undefined FUN_146e98baa(void)

undefined8 * FUN_146e98baa(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  }
  if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
  }
  puVar2[1] = 0;
  FUN_1446ddc76(puVar2 + 1,&DAT_149e02088,1);
  *puVar2 = &PTR_FUN_149f5fdc0;
  puVar2[2] = uVar4;
  puVar2[3] = uVar3;
  *(undefined4 *)(puVar2 + 4) = uVar1;
  return puVar2;
}



// FUNCTION 146e98c38 FUN_146e98c38 body=783 status=ok
// SIG undefined FUN_146e98c38(void)

void FUN_146e98c38(longlong param_1,undefined8 *param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108;
  int local_100;
  int local_fc;
  longlong *local_f8;
  int local_f0;
  int local_ec;
  undefined1 local_e8 [160];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar4 = *(longlong **)(param_1 + 0x10);
  plVar5 = *(longlong **)(param_1 + 0x18);
  if (plVar4 == (longlong *)0x0) {
    if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
    }
  }
  else {
    iVar8 = *(int *)(param_3 + 0xc);
    iVar2 = *(int *)((longlong)param_2 + 0xc);
    iVar6 = (**(code **)(*plVar4 + 8))(plVar4);
    if (iVar6 == 3) {
      iVar6 = *(int *)(param_2[0x11] + 8);
      iVar11 = 0;
      local_118 = plVar5;
      local_110 = param_3;
      FUN_144a84024(param_2[0x11],iVar8 + iVar6,0);
      local_f8 = (longlong *)param_2[0x11];
      local_f0 = iVar6;
      local_ec = iVar8;
      memset((void *)((longlong)iVar6 * 4 + *local_f8),0,(longlong)iVar8 << 2);
      (**(code **)(*plVar4 + 0x50))(plVar4,param_2,&local_f8);
      iVar3 = *(int *)(param_2[0x13] + 8);
      FUN_1406ea1ca(param_2[0x13],iVar3 + iVar8,0);
      if (iVar2 < 1) {
        FUN_144a84024(param_2[0x11],iVar6,0);
      }
      else {
        plVar4 = (longlong *)param_2[0x13];
        lVar9 = 0;
        do {
          fVar1 = *(float *)(*local_f8 +
                            ((longlong)local_f0 +
                            (longlong)
                            *(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar9) * 8
                                    )) * 4);
          if (*(int *)(param_1 + 0x20) == 1) {
            if ((fVar1 != 0.0) || (NAN(fVar1))) {
LAB_146e98d5b:
              *(undefined8 *)(*plVar4 + (longlong)(iVar11 + iVar3) * 8) =
                   *(undefined8 *)(*(longlong *)*param_2 + (*(int *)(param_2 + 1) + lVar9) * 8);
              iVar11 = iVar11 + 1;
            }
          }
          else if ((fVar1 == 0.0) && (!NAN(fVar1))) goto LAB_146e98d5b;
          lVar9 = lVar9 + 1;
        } while (iVar2 != (int)lVar9);
        FUN_144a84024(param_2[0x11],iVar6,0);
        if (iVar11 != 0) {
          piVar10 = (int *)0x0;
          FUN_1406ea1ca(param_2[0x13],iVar11 + iVar3,0);
          if (*(int *)(param_2 + 5) != *(int *)((longlong)param_2 + 0x54)) {
            puVar7 = param_2 + 0xb;
            if ((undefined8 *)param_2[0xc] != (undefined8 *)0x0) {
              puVar7 = (undefined8 *)param_2[0xc];
            }
            iVar8 = *(int *)((longlong)puVar7 + (ulonglong)(*(int *)(param_2 + 0xd) - 1U & 4) * 4);
            if (iVar8 != -1) {
              do {
                piVar10 = (int *)(param_2[4] + (longlong)iVar8 * 0x18);
                if (*piVar10 == 4) goto LAB_146e98e07;
                iVar8 = piVar10[4];
              } while (iVar8 != -1);
            }
            piVar10 = (int *)0x0;
          }
LAB_146e98e07:
          lVar9 = *(longlong *)(piVar10 + 2);
          if (lVar9 != 0) {
            *(undefined1 *)(lVar9 + 8) = 1;
            FUN_1406ea1ca(*(undefined8 *)(lVar9 + 0x10),iVar11,0);
            memcpy((void *)**(undefined8 **)(lVar9 + 0x10),
                   (void *)((longlong)iVar3 * 8 + *(longlong *)param_2[0x13]),(longlong)iVar11 << 3)
            ;
            if (local_118 != (longlong *)0x0) {
              local_128 = param_2[0x13];
              local_120 = *(undefined8 *)(lVar9 + 0x10);
              local_130 = param_2[0x12];
              local_140 = *(undefined4 *)(param_2 + 0x10);
              uStack_13c = *(undefined4 *)((longlong)param_2 + 0x84);
              uStack_138 = *(undefined4 *)(param_2 + 0x11);
              uStack_134 = *(undefined4 *)((longlong)param_2 + 0x8c);
              local_148 = param_2[0xf];
              local_108 = local_128;
              local_100 = iVar3;
              local_fc = iVar11;
              FUN_146e97e94(local_e8,&local_108,param_2 + 2,param_2 + 4);
              (**(code **)(*local_118 + 0x50))(local_118,local_e8,local_110);
              FUN_1402a0358(local_e8);
            }
          }
        }
      }
      FUN_1406ea1ca(param_2[0x13],iVar3,0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e98f6a FUN_146e98f6a body=110 status=ok
// SIG undefined FUN_146e98f6a(void)

undefined4 FUN_146e98f6a(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((((iVar2 == iVar3) && ((int)param_1[1] == (int)param_2[1])) &&
      (*(int *)((longlong)param_1 + 0xc) == (int)((ulonglong)param_2[1] >> 0x20))) &&
     ((cVar1 = FUN_146e967a5(param_1 + 2,param_2 + 2), cVar1 != '\0' &&
      (cVar1 = FUN_146e97014(param_1 + 3,param_2 + 3), cVar1 != '\0')))) {
    return CONCAT31((int3)((uint)(int)param_1[4] >> 8),(int)param_1[4] == (int)param_2[4]);
  }
  return 0;
}



// FUNCTION 146e98fde FUN_146e98fde body=163 status=ok
// SIG undefined FUN_146e98fde(void)

void FUN_146e98fde(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  byte bVar3;
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 8);
  FUN_146e965f2(param_2,param_1 + 0x10);
  FUN_146e96e68(param_2,param_1 + 0x18);
  local_21 = *(byte *)(param_1 + 0x20);
  puVar2 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar2 + 1;
  if ((byte *)puVar2[1] < pbVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
    bVar3 = local_21;
  }
  else {
    bVar3 = *(byte *)*puVar2;
    *puVar2 = (ulonglong)pbVar1;
  }
  *(uint *)(param_1 + 0x20) = (uint)bVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e99082 FUN_146e99082 body=71 status=ok
// SIG undefined FUN_146e99082(void)

void FUN_146e99082(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
  }
  *param_2 = *param_2 + 1;
  *param_3 = *param_3 + 5;
  return;
}



// FUNCTION 146e990ca FUN_146e990ca body=248 status=ok
// SIG undefined FUN_146e990ca(void)

void FUN_146e990ca(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3,param_4);
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3,param_4);
  }
  FUN_146e95d10(param_1,param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f800000;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_14475e4ac(param_3,iVar1);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = uVar4;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
    FUN_14475e4ac(param_3,iVar2);
  }
  *(float *)(*param_3 + (longlong)iVar2 * 4) = (float)iVar1;
  return;
}



// FUNCTION 146e991d6 FUN_146e991d6 body=865 status=ok
// SIG undefined FUN_146e991d6(void)

void FUN_146e991d6(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  undefined4 uVar9;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = -3.4028234663852886e+38;
  local_50 = -3.4028234663852886e+38;
  local_48 = -3.4028234663852886e+38;
  local_70 = 3.4028234663852886e+38;
  local_68 = 3.4028234663852886e+38;
  local_60 = 3.4028234663852886e+38;
  local_88 = -3.4028234663852886e+38;
  local_80 = -3.4028234663852886e+38;
  local_78 = -3.4028234663852886e+38;
  local_a0 = 3.4028234663852886e+38;
  local_98 = 3.4028234663852886e+38;
  local_90 = 3.4028234663852886e+38;
  local_a8 = DAT_14c8464f0;
  local_b8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dStack_b0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_c8 = DAT_14c8464f0;
  local_d8 = (undefined4)DAT_14c8464e0;
  uStack_d4 = DAT_14c8464e0._4_4_;
  uStack_d0 = (undefined4)DAT_14c8464e8;
  uStack_cc = DAT_14c8464e8._4_4_;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_58,&local_70,&local_b8);
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_88,&local_a0,&local_d8);
  }
  dVar15 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dVar12 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_4[2] = DAT_14c8464f0;
  *param_4 = dVar15;
  param_4[1] = dVar12;
  dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  bVar3 = local_b8 == (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  bVar4 = dStack_b0 == dVar15;
  bVar2 = local_a8 == DAT_14c8464f0;
  if (bVar2 && (bVar4 && bVar3)) {
    dVar12 = 1.0;
  }
  else {
    *param_4 = local_b8 + *param_4;
    param_4[1] = dStack_b0 + param_4[1];
    param_4[2] = local_a8 + param_4[2];
    dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    dVar12 = 2.0;
  }
  dVar13 = (double)CONCAT44(uStack_d4,local_d8);
  dVar5 = (double)CONCAT44(uStack_cc,uStack_d0);
  dVar14 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  if ((((dVar13 != (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)) ||
       (NAN(dVar13) || NAN(dVar14))) || (dVar5 != dVar15)) ||
     (((NAN(dVar5) || NAN(dVar15) || (local_c8 != DAT_14c8464f0)) ||
      (NAN(local_c8) || NAN(DAT_14c8464f0))))) {
    dVar14 = dVar13 + *param_4;
    dVar15 = dVar5 + param_4[1];
    dVar13 = local_c8 + param_4[2];
LAB_146e993e4:
    dVar12 = 1.0 / dVar12;
    dVar13 = dVar13 * dVar12;
    dVar15 = dVar15 * dVar12;
    dVar14 = dVar12 * dVar14;
  }
  else {
    dVar13 = DAT_14c8464f0;
    if (!bVar2 || (!bVar4 || !bVar3)) {
      dVar13 = param_4[2];
      dVar14 = *param_4;
      dVar15 = param_4[1];
      dVar12 = 1.0;
      goto LAB_146e993e4;
    }
  }
  *param_4 = dVar14;
  param_4[1] = dVar15;
  param_4[2] = dVar13;
  uVar10 = (undefined4)((ulonglong)local_48 >> 0x20);
  uVar8 = (undefined4)((ulonglong)local_78 >> 0x20);
  uVar11 = (undefined4)((ulonglong)local_60 >> 0x20);
  uVar9 = (undefined4)((ulonglong)local_90 >> 0x20);
  uVar7 = SUB84(local_60,0);
  dVar15 = local_70;
  dVar12 = local_68;
  if (*(int *)(param_1 + 0x20) == 1) {
    uVar6 = SUB84(local_48,0);
    if (local_48 <= local_78) {
      uVar6 = SUB84(local_78,0);
      uVar10 = uVar8;
    }
    dVar14 = local_50;
    if (local_50 <= local_80) {
      dVar14 = local_80;
    }
    dVar13 = local_58;
    if (local_58 <= local_88) {
      dVar13 = local_88;
    }
    *param_2 = dVar13;
    param_2[1] = dVar14;
    param_2[2] = (double)CONCAT44(uVar10,uVar6);
    if (local_90 <= local_60) {
      uVar7 = SUB84(local_90,0);
      uVar11 = uVar9;
    }
    if (local_98 <= local_68) {
      dVar12 = local_98;
    }
    if (local_a0 <= local_70) {
      dVar15 = local_a0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) goto LAB_146e99509;
    uVar6 = SUB84(local_48,0);
    if (local_78 <= local_48) {
      uVar6 = SUB84(local_78,0);
      uVar10 = uVar8;
    }
    dVar14 = local_50;
    if (local_80 <= local_50) {
      dVar14 = local_80;
    }
    dVar13 = local_58;
    if (local_88 <= local_58) {
      dVar13 = local_88;
    }
    *param_2 = dVar13;
    param_2[1] = dVar14;
    param_2[2] = (double)CONCAT44(uVar10,uVar6);
    if (local_60 <= local_90) {
      uVar7 = SUB84(local_90,0);
      uVar11 = uVar9;
    }
    if (local_68 <= local_98) {
      dVar12 = local_98;
    }
    if (local_70 <= local_a0) {
      dVar15 = local_a0;
    }
  }
  *param_3 = dVar15;
  param_3[1] = dVar12;
  param_3[2] = (double)CONCAT44(uVar11,uVar7);
LAB_146e99509:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e99538 FUN_146e99538 body=72 status=ok
// SIG undefined FUN_146e99538(void)

undefined8 * FUN_146e99538(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0;
  FUN_1446ddc76(puVar1 + 1,&DAT_149e02088,1);
  *puVar1 = &PTR_FUN_149f5fe20;
  return puVar1;
}



// FUNCTION 146e99580 FUN_146e99580 body=192 status=ok
// SIG undefined FUN_146e99580(void)

void FUN_146e99580(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_2 + 5) == *(int *)((longlong)param_2 + 0x54)) {
    return;
  }
  puVar2 = param_2 + 0xb;
  if ((undefined8 *)param_2[0xc] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_2[0xc];
  }
  iVar3 = *(int *)((longlong)puVar2 + (ulonglong)(*(int *)(param_2 + 0xd) - 1U & 2) * 4);
  if (iVar3 == -1) {
    return;
  }
  lVar1 = param_2[4];
  iVar5 = iVar3;
  while (*(int *)(lVar1 + (longlong)iVar5 * 0x18) != 2) {
    iVar5 = *(int *)(lVar1 + (longlong)iVar5 * 0x18 + 0x10);
    if (iVar5 == -1) {
      return;
    }
  }
  do {
    piVar4 = (int *)(lVar1 + (longlong)iVar3 * 0x18);
    if (*piVar4 == 2) goto LAB_146e995ed;
    iVar3 = piVar4[4];
  } while (iVar3 != -1);
  piVar4 = (int *)0x0;
LAB_146e995ed:
  iVar3 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar3) {
    lVar1 = *(longlong *)(piVar4 + 2);
    lVar6 = 0;
    do {
      lVar7 = (longlong)*(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar6) * 8);
      *(undefined4 *)(*(longlong *)*param_3 + (*(int *)(param_3 + 1) + lVar7) * 4) =
           *(undefined4 *)
            (*(longlong *)**(undefined8 **)(lVar1 + 8) +
            (*(int *)(*(undefined8 **)(lVar1 + 8) + 1) + lVar7) * 4);
      lVar6 = lVar6 + 1;
    } while (iVar3 != (int)lVar6);
  }
  return;
}



// FUNCTION 146e99640 FUN_146e99640 body=41 status=ok
// SIG undefined FUN_146e99640(void)

bool FUN_146e99640(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  return iVar1 == iVar2;
}



// FUNCTION 146e99688 FUN_146e99688 body=72 status=ok
// SIG undefined FUN_146e99688(void)

undefined8 * FUN_146e99688(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0;
  FUN_1446ddc76(puVar1 + 1,&DAT_149e02088,1);
  *puVar1 = &PTR_FUN_149f5fe80;
  return puVar1;
}



// FUNCTION 146e996d0 FUN_146e996d0 body=194 status=ok
// SIG undefined FUN_146e996d0(void)

void FUN_146e996d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_2 + 5) == *(int *)((longlong)param_2 + 0x54)) {
    return;
  }
  puVar2 = param_2 + 0xb;
  if ((undefined8 *)param_2[0xc] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_2[0xc];
  }
  iVar3 = *(int *)((longlong)puVar2 + (ulonglong)(*(int *)(param_2 + 0xd) - 1U & 2) * 4);
  if (iVar3 == -1) {
    return;
  }
  lVar1 = param_2[4];
  iVar5 = iVar3;
  while (*(int *)(lVar1 + (longlong)iVar5 * 0x18) != 2) {
    iVar5 = *(int *)(lVar1 + (longlong)iVar5 * 0x18 + 0x10);
    if (iVar5 == -1) {
      return;
    }
  }
  do {
    piVar4 = (int *)(lVar1 + (longlong)iVar3 * 0x18);
    if (*piVar4 == 2) goto LAB_146e9973b;
    iVar3 = piVar4[4];
  } while (iVar3 != -1);
  piVar4 = (int *)0x0;
LAB_146e9973b:
  iVar3 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar3) {
    lVar1 = *(longlong *)(piVar4 + 2);
    lVar6 = 0;
    do {
      lVar7 = (longlong)*(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar6) * 8);
      *(undefined4 *)(*(longlong *)*param_3 + (*(int *)(param_3 + 1) + lVar7) * 4) =
           *(undefined4 *)
            (*(longlong *)**(undefined8 **)(lVar1 + 8) +
            (*(int *)(*(undefined8 **)(lVar1 + 8) + 1) + lVar7) * 4);
      lVar6 = lVar6 + 1;
    } while (iVar3 != (int)lVar6);
  }
  return;
}



// FUNCTION 146e99792 FUN_146e99792 body=41 status=ok
// SIG undefined FUN_146e99792(void)

bool FUN_146e99792(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  return iVar1 == iVar2;
}



// FUNCTION 146e997da FUN_146e997da body=72 status=ok
// SIG undefined FUN_146e997da(void)

undefined8 * FUN_146e997da(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0;
  FUN_1446ddc76(puVar1 + 1,&DAT_149e02088,1);
  *puVar1 = &PTR_FUN_149f5fee0;
  return puVar1;
}



// FUNCTION 146e99822 FUN_146e99822 body=214 status=ok
// SIG undefined FUN_146e99822(void)

void FUN_146e99822(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (*(int *)(param_2 + 5) == *(int *)((longlong)param_2 + 0x54)) {
    return;
  }
  puVar6 = param_2 + 0xb;
  if ((undefined8 *)param_2[0xc] != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_2[0xc];
  }
  iVar7 = *(int *)((longlong)puVar6 + (ulonglong)(*(int *)(param_2 + 0xd) - 1U & 2) * 4);
  if (iVar7 == -1) {
    return;
  }
  lVar2 = param_2[4];
  iVar9 = iVar7;
  while (*(int *)(lVar2 + (longlong)iVar9 * 0x18) != 2) {
    iVar9 = *(int *)(lVar2 + (longlong)iVar9 * 0x18 + 0x10);
    if (iVar9 == -1) {
      return;
    }
  }
  do {
    piVar8 = (int *)(lVar2 + (longlong)iVar7 * 0x18);
    if (*piVar8 == 2) goto LAB_146e99891;
    iVar7 = piVar8[4];
  } while (iVar7 != -1);
  piVar8 = (int *)0x0;
LAB_146e99891:
  iVar7 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar7) {
    lVar2 = *(longlong *)(piVar8 + 2);
    lVar10 = 0;
    do {
      lVar12 = (longlong)*(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar10) * 8);
      lVar11 = *(int *)(*(undefined8 **)(lVar2 + 8) + 1) + lVar12;
      lVar3 = *(longlong *)**(undefined8 **)(lVar2 + 8);
      lVar12 = *(int *)(param_3 + 1) + lVar12;
      lVar4 = *(longlong *)*param_3;
      *(undefined8 *)(lVar4 + 0x10 + lVar12 * 0x18) = *(undefined8 *)(lVar3 + 0x10 + lVar11 * 0x18);
      puVar6 = (undefined8 *)(lVar3 + lVar11 * 0x18);
      uVar5 = puVar6[1];
      puVar1 = (undefined8 *)(lVar4 + lVar12 * 0x18);
      *puVar1 = *puVar6;
      puVar1[1] = uVar5;
      lVar10 = lVar10 + 1;
    } while (iVar7 != (int)lVar10);
  }
  return;
}



// FUNCTION 146e998f8 FUN_146e998f8 body=41 status=ok
// SIG undefined FUN_146e998f8(void)

bool FUN_146e998f8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  return iVar1 == iVar2;
}



// FUNCTION 146e99940 FUN_146e99940 body=378 status=ok
// SIG undefined FUN_146e99940(void)

void FUN_146e99940(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 local_38;
  undefined8 local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x240) == 0) && (*(longlong *)(param_1 + 0x248) == 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c996648) {
      FUN_144b3d300(&DAT_14c996648);
      if (DAT_14c996648 == -1) {
        FUN_1446ddc76(&DAT_14c996640,"LinearVelocity",1);
        _Init_thread_footer(&DAT_14c996648);
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c996658) {
      FUN_144b3d300(&DAT_14c996658);
      if (DAT_14c996658 == -1) {
        FUN_1446ddc76(&DAT_14c996650,"AngularVelocity",1);
        _Init_thread_footer(&DAT_14c996658);
      }
    }
    local_30 = 0;
    local_28 = 1;
    uVar1 = FUN_140676448(param_1,DAT_14c996640,DAT_14c9974a8);
    *(undefined8 *)(param_1 + 0x240) = uVar1;
    local_40 = 0;
    local_38 = 1;
    uVar1 = FUN_140676448(param_1,DAT_14c996650,DAT_14c9974a8);
    *(undefined8 *)(param_1 + 0x248) = uVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e99abc FUN_146e99abc body=27 status=ok
// SIG undefined FUN_146e99abc(void)

undefined8 FUN_146e99abc(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10);
  cVar1 = *(char *)(lVar2 + param_2);
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),cVar1 == '\x04' || cVar1 == '\x01');
}



// FUNCTION 146e99ad8 FUN_146e99ad8 body=9 status=ok
// SIG undefined FUN_146e99ad8(void)

bool FUN_146e99ad8(longlong param_1)

{
  return *(longlong *)(param_1 + 0x68) != 0;
}



// FUNCTION 146e99ae2 FUN_146e99ae2 body=69 status=ok
// SIG undefined FUN_146e99ae2(void)

void FUN_146e99ae2(longlong param_1)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 0;
  FUN_146e99b28(param_1 + 0x38,&local_9,1,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e99b28 FUN_146e99b28 body=138 status=ok
// SIG undefined FUN_146e99b28(void)

void FUN_146e99b28(longlong param_1,char *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  cVar2 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    FUN_146e9c128(param_1,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar1 + 0x28)) {
      cVar2 = *param_2;
      uVar3 = 0;
      do {
        uVar4 = 1 << ((byte)uVar3 & 0x1f);
        lVar5 = *(longlong *)(lVar1 + 0x20);
        if (*(longlong *)(lVar1 + 0x20) == 0) {
          lVar5 = lVar1 + 0x10;
        }
        uVar6 = (ulonglong)(uVar3 >> 5);
        if (cVar2 == '\0') {
          uVar4 = ~uVar4 & *(uint *)(lVar5 + uVar6 * 4);
        }
        else {
          uVar4 = uVar4 | *(uint *)(lVar5 + uVar6 * 4);
        }
        *(uint *)(lVar5 + uVar6 * 4) = uVar4;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(lVar1 + 0x28));
    }
  }
  return;
}



// FUNCTION 146e99bb2 FUN_146e99bb2 body=105 status=ok
// SIG undefined FUN_146e99bb2(void)

void FUN_146e99bb2(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 8) = 1;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar3 = *(longlong *)(param_1 + 0x60);
    lVar9 = 0;
    do {
      iVar1 = *(int *)(lVar2 + lVar9);
      uVar7 = 1 << ((byte)iVar1 & 0x1f);
      lVar8 = *(longlong *)(lVar3 + 0x20);
      if (lVar8 == 0) {
        lVar8 = lVar3 + 0x10;
      }
      iVar6 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar6 = iVar1;
      }
      lVar5 = (longlong)(iVar6 >> 5);
      if (param_3 == '\0') {
        uVar7 = ~uVar7 & *(uint *)(lVar8 + lVar5 * 4);
      }
      else {
        uVar7 = uVar7 | *(uint *)(lVar8 + lVar5 * 4);
      }
      *(uint *)(lVar8 + lVar5 * 4) = uVar7;
      lVar9 = lVar9 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar9);
  }
  return;
}



// FUNCTION 146e99c1c FUN_146e99c1c body=572 status=ok
// SIG undefined FUN_146e99c1c(void)

undefined8 * FUN_146e99c1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = param_2;
  param_1[1] = 0;
  FUN_1446ddc76(&local_48,"BoundingBox",1);
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = local_48;
  param_1[5] = DAT_14c996af0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = FUN_146ea1932(param_2);
  param_1[8] = uVar1;
  FUN_1446ddc76(&local_48,"Vertex",1);
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = local_48;
  uVar1 = DAT_14c996ae0;
  param_1[0xc] = DAT_14c996ae0;
  param_1[0xd] = uVar1;
  param_1[0xe] = 0;
  uVar1 = FUN_1409bc3ac(param_2);
  param_1[0xf] = uVar1;
  FUN_1446ddc76(&local_48,"BoneMap",1);
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = local_48;
  param_1[0x13] = DAT_14c996ae0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x16] = uVar1;
  FUN_1446ddc76(&local_48,"TransformToGeometryIndex",1);
  param_1[0x17] = param_2;
  param_1[0x18] = 0;
  param_1[0x19] = local_48;
  param_1[0x1a] = DAT_14c9974a8;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x1d] = uVar1;
  FUN_1446ddc76(&local_48,"VertexStart",1);
  param_1[0x1e] = param_2;
  param_1[0x1f] = 0;
  param_1[0x20] = local_48;
  param_1[0x21] = DAT_14c996af0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x24] = uVar1;
  FUN_1446ddc76(&local_48,"VertexCount",1);
  param_1[0x25] = param_2;
  param_1[0x26] = 0;
  param_1[0x27] = local_48;
  param_1[0x28] = DAT_14c996af0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x2b] = uVar1;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e99e5a FUN_146e99e5a body=309 status=ok
// SIG undefined FUN_146e99e5a(void)

void FUN_146e99e5a(undefined8 *param_1,char param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == '\x01') && (cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]), cVar2 == '\0'))
  {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_146e99f23;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_146e99f23:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar4 = FUN_146ea1a3e(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e99f90 FUN_146e99f90 body=267 status=ok
// SIG undefined FUN_146e99f90(void)

longlong * FUN_146e99f90(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar7 = *(longlong **)(param_1 + 0x40);
  if (plVar7 != (longlong *)0x0) {
    iVar9 = (**(code **)(*plVar7 + 0x60))(plVar7);
    if (0 < iVar9) {
      lVar11 = 0x28;
      lVar12 = 0;
      do {
        lVar10 = plVar7[2];
        dVar1 = *(double *)(lVar10 + -0x18 + lVar11);
        dVar2 = *(double *)(lVar10 + lVar11);
        dVar3 = *(double *)(lVar10 + -0x20 + lVar11);
        dVar4 = *(double *)(lVar10 + -8 + lVar11);
        dVar5 = *(double *)(lVar10 + -0x28 + lVar11);
        dVar6 = *(double *)(lVar10 + -0x10 + lVar11);
        iVar9 = (int)param_2[1];
        lVar10 = (longlong)iVar9;
        *(uint *)(param_2 + 1) = iVar9 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
          FUN_1403e3958(param_2,iVar9);
        }
        lVar8 = *param_2;
        *(double *)(lVar8 + lVar10 * 0x18) = (dVar5 + dVar6) * 0.5;
        *(double *)(lVar8 + 8 + lVar10 * 0x18) = (dVar3 + dVar4) * 0.5;
        *(double *)(lVar8 + 0x10 + lVar10 * 0x18) = (dVar1 + dVar2) * 0.5;
        lVar12 = lVar12 + 1;
        iVar9 = (**(code **)(*plVar7 + 0x60))(plVar7);
        lVar11 = lVar11 + 0x38;
      } while (lVar12 < iVar9);
    }
  }
  return param_2;
}



// FUNCTION 146e9a09c FUN_146e9a09c body=742 status=ok
// SIG undefined FUN_146e9a09c(void)

double * FUN_146e9a09c(undefined8 *param_1,double *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_208 [40];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  char local_1b0;
  undefined7 uStack_1af;
  undefined8 local_1a8 [12];
  longlong local_148;
  int local_140;
  undefined1 local_138 [240];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  param_2[5] = DAT_14c8464f0;
  dVar17 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[3] = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[4] = dVar17;
  param_2[2] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar16 = (undefined4)DAT_14c8464e8;
  uVar15 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar15;
  *(undefined4 *)(param_2 + 1) = uVar16;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  *(undefined1 *)(param_2 + 6) = 0;
  if (param_1[8] != 0) {
    FUN_146ea80f4(local_138,*param_1);
    cVar6 = FUN_146ea8240(local_138);
    if (cVar6 == '\0') {
      plVar2 = (longlong *)param_1[8];
      iVar8 = (**(code **)(*plVar2 + 0x60))(plVar2);
      if (0 < iVar8) {
        lVar11 = 0;
        lVar14 = 0;
        do {
          lVar1 = plVar2[2];
          cVar6 = *(char *)(lVar1 + 0x30 + lVar11);
          if ((*(char *)(param_2 + 6) == '\0') || (cVar6 == '\0')) {
            if (cVar6 != '\0') {
              puVar9 = (undefined4 *)(lVar1 + lVar11);
              param_2[6] = *(double *)(puVar9 + 0xc);
              uVar15 = *puVar9;
              uVar16 = puVar9[1];
              uVar3 = puVar9[2];
              uVar4 = puVar9[3];
              dVar17 = *(double *)(puVar9 + 4);
              dVar18 = *(double *)(puVar9 + 6);
              dVar5 = *(double *)(puVar9 + 10);
              param_2[4] = *(double *)(puVar9 + 8);
              param_2[5] = dVar5;
              param_2[2] = dVar17;
              param_2[3] = dVar18;
              *(undefined4 *)param_2 = uVar15;
              *(undefined4 *)((longlong)param_2 + 4) = uVar16;
              *(undefined4 *)(param_2 + 1) = uVar3;
              *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
            }
          }
          else {
            dVar17 = *param_2;
            uVar15 = SUB84(dVar17,0);
            uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
            dVar18 = *(double *)(lVar1 + lVar11);
            if (dVar18 <= dVar17) {
              uVar15 = SUB84(dVar18,0);
              uVar16 = (undefined4)((ulonglong)dVar18 >> 0x20);
            }
            *param_2 = (double)CONCAT44(uVar16,uVar15);
            dVar17 = *(double *)(lVar1 + 8 + lVar11);
            dVar18 = param_2[1];
            if (dVar17 <= param_2[1]) {
              dVar18 = dVar17;
            }
            param_2[1] = dVar18;
            dVar17 = param_2[2];
            uVar15 = SUB84(dVar17,0);
            uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
            dVar18 = *(double *)(lVar1 + 0x10 + lVar11);
            if (dVar18 <= dVar17) {
              uVar15 = SUB84(dVar18,0);
              uVar16 = (undefined4)((ulonglong)dVar18 >> 0x20);
            }
            param_2[2] = (double)CONCAT44(uVar16,uVar15);
            dVar17 = param_2[3];
            uVar15 = SUB84(dVar17,0);
            uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
            dVar18 = *(double *)(lVar1 + 0x18 + lVar11);
            if (dVar17 <= dVar18) {
              uVar15 = SUB84(dVar18,0);
              uVar16 = (undefined4)((ulonglong)dVar18 >> 0x20);
            }
            param_2[3] = (double)CONCAT44(uVar16,uVar15);
            dVar17 = param_2[4];
            uVar15 = SUB84(dVar17,0);
            uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
            dVar18 = *(double *)(lVar1 + 0x20 + lVar11);
            if (dVar17 <= dVar18) {
              uVar15 = SUB84(dVar18,0);
              uVar16 = (undefined4)((ulonglong)dVar18 >> 0x20);
            }
            param_2[4] = (double)CONCAT44(uVar16,uVar15);
            dVar17 = param_2[5];
            uVar15 = SUB84(dVar17,0);
            uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
            dVar18 = *(double *)(lVar1 + 0x28 + lVar11);
            if (dVar17 <= dVar18) {
              uVar15 = SUB84(dVar18,0);
              uVar16 = (undefined4)((ulonglong)dVar18 >> 0x20);
            }
            param_2[5] = (double)CONCAT44(uVar16,uVar15);
          }
          lVar14 = lVar14 + 1;
          iVar8 = (**(code **)(*plVar2 + 0x60))(plVar2);
          lVar11 = lVar11 + 0x38;
        } while (lVar14 < iVar8);
      }
    }
    else {
      FUN_146ea825e(local_138,&local_148);
      if (0 < local_140) {
        lVar14 = 0;
        lVar11 = 0;
        do {
          iVar8 = *(int *)(*(longlong *)(param_1[0x1d] + 0x10) + lVar11 * 4);
          if ((-1 < (longlong)iVar8) &&
             (iVar7 = (**(code **)(*(longlong *)param_1[8] + 0x60))(), iVar8 < iVar7)) {
            lVar1 = *(longlong *)(param_1[8] + 0x10);
            puVar12 = (undefined8 *)(local_148 + lVar14);
            puVar13 = local_1a8;
            for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
              *puVar13 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
            }
            FUN_144a1c3a2((longlong)iVar8 * 0x38 + lVar1,&local_1e0,local_1a8);
            if (local_1b0 == '\0' || *(char *)(param_2 + 6) == '\0') {
              if (local_1b0 != '\0') {
                param_2[6] = (double)CONCAT71(uStack_1af,local_1b0);
                param_2[4] = local_1c0;
                param_2[5] = dStack_1b8;
                param_2[2] = local_1d0;
                param_2[3] = dStack_1c8;
                *(undefined4 *)param_2 = local_1e0;
                *(undefined4 *)((longlong)param_2 + 4) = uStack_1dc;
                *(undefined4 *)(param_2 + 1) = uStack_1d8;
                *(undefined4 *)((longlong)param_2 + 0xc) = uStack_1d4;
              }
            }
            else {
              dVar17 = *param_2;
              uVar15 = SUB84(dVar17,0);
              uVar16 = (int)((ulonglong)dVar17 >> 0x20);
              if ((double)CONCAT44(uStack_1dc,local_1e0) <= dVar17) {
                uVar15 = local_1e0;
                uVar16 = uStack_1dc;
              }
              *param_2 = (double)CONCAT44(uVar16,uVar15);
              dVar17 = param_2[1];
              if ((double)CONCAT44(uStack_1d4,uStack_1d8) <= param_2[1]) {
                dVar17 = (double)CONCAT44(uStack_1d4,uStack_1d8);
              }
              param_2[1] = dVar17;
              dVar17 = param_2[2];
              uVar15 = SUB84(dVar17,0);
              uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
              if (local_1d0 <= dVar17) {
                uVar15 = SUB84(local_1d0,0);
                uVar16 = (undefined4)((ulonglong)local_1d0 >> 0x20);
              }
              param_2[2] = (double)CONCAT44(uVar16,uVar15);
              dVar17 = param_2[3];
              uVar15 = SUB84(dVar17,0);
              uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
              if (dVar17 <= dStack_1c8) {
                uVar15 = SUB84(dStack_1c8,0);
                uVar16 = (undefined4)((ulonglong)dStack_1c8 >> 0x20);
              }
              param_2[3] = (double)CONCAT44(uVar16,uVar15);
              dVar17 = param_2[4];
              uVar15 = SUB84(dVar17,0);
              uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
              if (dVar17 <= local_1c0) {
                uVar15 = SUB84(local_1c0,0);
                uVar16 = (undefined4)((ulonglong)local_1c0 >> 0x20);
              }
              param_2[4] = (double)CONCAT44(uVar16,uVar15);
              dVar17 = param_2[5];
              uVar15 = SUB84(dVar17,0);
              uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
              if (dVar17 <= dStack_1b8) {
                uVar15 = SUB84(dStack_1b8,0);
                uVar16 = (undefined4)((ulonglong)dStack_1b8 >> 0x20);
              }
              param_2[5] = (double)CONCAT44(uVar16,uVar15);
            }
          }
          lVar11 = lVar11 + 1;
          lVar14 = lVar14 + 0x60;
        } while (lVar11 < local_140);
      }
      if (local_148 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146e9a384 FUN_146e9a384 body=623 status=ok
// SIG undefined FUN_146e9a384(void)

longlong * FUN_146e9a384(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  double *pdVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = param_2[3];
  dVar5 = param_2[4];
  dVar6 = param_2[5];
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1403e3958(0,0);
  pdVar8 = (double *)*param_1;
  *pdVar8 = dVar1;
  pdVar8[1] = dVar2;
  pdVar8[2] = dVar3;
  dVar11 = (dVar4 - dVar1) + dVar1;
  iVar7 = (int)param_1[1];
  lVar12 = (longlong)iVar7;
  *(uint *)(param_1 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
    FUN_1403e3958(param_1,iVar7);
  }
  lVar9 = *param_1;
  *(double *)(lVar9 + lVar12 * 0x18) = dVar11;
  *(double *)(lVar9 + 8 + lVar12 * 0x18) = dVar2;
  *(double *)(lVar9 + 0x10 + lVar12 * 0x18) = dVar3;
  dVar10 = (dVar5 - dVar2) + dVar2;
  iVar7 = (int)param_1[1];
  lVar12 = (longlong)iVar7;
  *(uint *)(param_1 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
    FUN_1403e3958(param_1,iVar7);
  }
  lVar9 = *param_1;
  *(double *)(lVar9 + lVar12 * 0x18) = dVar11;
  *(double *)(lVar9 + 8 + lVar12 * 0x18) = dVar10;
  *(double *)(lVar9 + 0x10 + lVar12 * 0x18) = dVar3;
  iVar7 = (int)param_1[1];
  lVar12 = (longlong)iVar7;
  *(uint *)(param_1 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
    FUN_1403e3958(param_1,iVar7);
  }
  lVar9 = *param_1;
  *(double *)(lVar9 + lVar12 * 0x18) = dVar1;
  *(double *)(lVar9 + 8 + lVar12 * 0x18) = dVar10;
  *(double *)(lVar9 + 0x10 + lVar12 * 0x18) = dVar3;
  dVar3 = (dVar6 - dVar3) + dVar3;
  iVar7 = (int)param_1[1];
  lVar12 = (longlong)iVar7;
  *(uint *)(param_1 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
    FUN_1403e3958(param_1,iVar7);
  }
  lVar9 = *param_1;
  *(double *)(lVar9 + lVar12 * 0x18) = dVar1;
  *(double *)(lVar9 + 8 + lVar12 * 0x18) = dVar2;
  *(double *)(lVar9 + 0x10 + lVar12 * 0x18) = dVar3;
  iVar7 = (int)param_1[1];
  lVar12 = (longlong)iVar7;
  *(uint *)(param_1 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
    FUN_1403e3958(param_1,iVar7);
  }
  lVar9 = *param_1;
  *(double *)(lVar9 + lVar12 * 0x18) = dVar11;
  *(double *)(lVar9 + 8 + lVar12 * 0x18) = dVar2;
  *(double *)(lVar9 + 0x10 + lVar12 * 0x18) = dVar3;
  iVar7 = (int)param_1[1];
  lVar12 = (longlong)iVar7;
  *(uint *)(param_1 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
    FUN_1403e3958(param_1,iVar7);
  }
  lVar9 = *param_1;
  *(double *)(lVar9 + lVar12 * 0x18) = dVar4;
  *(double *)(lVar9 + 8 + lVar12 * 0x18) = dVar5;
  *(double *)(lVar9 + 0x10 + lVar12 * 0x18) = dVar6;
  iVar7 = (int)param_1[1];
  lVar12 = (longlong)iVar7;
  *(uint *)(param_1 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
    FUN_1403e3958(param_1,iVar7);
  }
  lVar9 = *param_1;
  *(double *)(lVar9 + lVar12 * 0x18) = dVar1;
  *(double *)(lVar9 + 8 + lVar12 * 0x18) = dVar10;
  *(double *)(lVar9 + 0x10 + lVar12 * 0x18) = dVar3;
  return param_1;
}



// FUNCTION 146e9a5f4 FUN_146e9a5f4 body=405 status=ok
// SIG undefined FUN_146e9a5f4(void)

undefined8 * FUN_146e9a5f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_30,"Connections",1);
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = local_30;
  param_1[3] = DAT_14c9974a8;
  param_1[4] = 0;
  uVar1 = FUN_14075a50c(param_2);
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  FUN_1446ddc76(&local_30,"ConnectionEdgeStarts",1);
  param_1[7] = param_2;
  param_1[8] = param_2;
  param_1[9] = local_30;
  param_1[10] = DAT_14c996660;
  param_1[0xb] = DAT_14c9974a8;
  uVar1 = FUN_140757af2(param_2);
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar1;
  FUN_1446ddc76(&local_30,"ConnectionEdgeEnds",1);
  param_1[0xe] = param_2;
  param_1[0xf] = param_2;
  param_1[0x10] = local_30;
  param_1[0x11] = DAT_14c996660;
  param_1[0x12] = DAT_14c9974a8;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar1;
  FUN_1446ddc76(&local_30,"ConnectionEdgeContacts",1);
  param_1[0x15] = param_2;
  param_1[0x16] = param_2;
  param_1[0x17] = local_30;
  param_1[0x18] = DAT_14c996660;
  param_1[0x19] = 0;
  uVar1 = FUN_144b0731a(param_2);
  param_1[0x1a] = uVar1;
  param_1[0x1b] = uVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9a78a FUN_146e9a78a body=44 status=ok
// SIG undefined FUN_146e9a78a(void)

void FUN_146e9a78a(longlong param_1)

{
  FUN_141051438(param_1 + 0x38,1,0);
  FUN_141051438(param_1 + 0x70,1,0);
  return;
}



// FUNCTION 146e9a7b6 FUN_146e9a7b6 body=78 status=ok
// SIG undefined FUN_146e9a7b6(void)

void FUN_146e9a7b6(longlong param_1)

{
  FUN_140498ea8(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_140498ea8(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                *(undefined8 *)(param_1 + 0x88));
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}



// FUNCTION 146e9a804 FUN_146e9a804 body=127 status=ok
// SIG undefined FUN_146e9a804(void)

void FUN_146e9a804(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_146e9a884(param_1,param_2,param_3,0x3f800000);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 8) = 1;
  lVar1 = *(longlong *)(param_1 + 0x60);
  *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 8) = 1;
  lVar2 = *(longlong *)(param_1 + 0x98);
  iVar3 = FUN_1409bcbd8(*(undefined8 *)(param_1 + 0x40),1,DAT_14c996660);
  *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar3 * 4) = param_2;
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar3 * 4) = param_3;
  return;
}



// FUNCTION 146e9a884 FUN_146e9a884 body=213 status=ok
// SIG undefined FUN_146e9a884(void)

void FUN_146e9a884(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    local_44 = 0x3f800000;
    FUN_1406f094e(param_1 + 0xa8,&local_44,1,0);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 8) = 1;
  lVar1 = *(longlong *)(param_1 + 0x60);
  *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 8) = 1;
  lVar2 = *(longlong *)(param_1 + 0x98);
  *(undefined1 *)(*(longlong *)(param_1 + 0xd0) + 8) = 1;
  lVar3 = *(longlong *)(param_1 + 0xd0);
  iVar4 = FUN_1409bcbd8(*(undefined8 *)(param_1 + 0x40),1,DAT_14c996660);
  lVar5 = (longlong)iVar4;
  *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 4) = param_2;
  *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + lVar5 * 4) = param_3;
  *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + lVar5 * 4) = param_4;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9a95a FUN_146e9a95a body=137 status=ok
// SIG undefined FUN_146e9a95a(void)

void FUN_146e9a95a(longlong param_1,char param_2,undefined4 param_3)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = param_3;
  if (param_2 != '\0') {
    FUN_1406f094e(param_1 + 0xa8,&local_14,1,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  FUN_140498ea8(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                *(undefined8 *)(param_1 + 0xc0));
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e9a9e4 FUN_146e9a9e4 body=16 status=ok
// SIG undefined FUN_146e9a9e4(void)

void FUN_146e9a9e4(longlong param_1)

{
  FUN_146ece8e2(*(undefined8 *)(param_1 + 0x40),DAT_14c996660);
  return;
}



// FUNCTION 146e9a9f4 FUN_146e9a9f4 body=12 status=ok
// SIG undefined FUN_146e9a9f4(void)

bool FUN_146e9a9f4(longlong param_1)

{
  return *(longlong *)(param_1 + 0xd8) != 0;
}



// FUNCTION 146e9aa00 FUN_146e9aa00 body=128 status=ok
// SIG undefined FUN_146e9aa00(void)

undefined8 FUN_146e9aa00(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = FUN_1401f66f6(*(undefined8 *)(param_1 + 0x38),DAT_14c9974a8);
  plVar2 = *(longlong **)(param_1 + 0x68);
  lVar3 = *(longlong *)(param_1 + 0xa0);
  iVar5 = (**(code **)(*plVar2 + 0x60))(plVar2);
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      iVar5 = *(int *)(plVar2[2] + lVar6 * 4);
      if (iVar5 < 0) {
        return 0;
      }
      if (iVar4 <= iVar5) {
        return 0;
      }
      iVar1 = *(int *)(*(longlong *)(lVar3 + 0x10) + lVar6 * 4);
      if (iVar5 == iVar1) {
        return 0;
      }
      if (iVar1 < 0) {
        return 0;
      }
      if (iVar4 <= iVar1) {
        return 0;
      }
      lVar6 = lVar6 + 1;
      iVar5 = (**(code **)(*plVar2 + 0x60))(plVar2);
    } while (lVar6 < iVar5);
  }
  return 1;
}



// FUNCTION 146e9aa80 FUN_146e9aa80 body=57 status=ok
// SIG undefined FUN_146e9aa80(void)

undefined8 * FUN_146e9aa80(longlong param_1,undefined8 *param_2,int param_3)

{
  if (*(longlong *)(param_1 + 0x68) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_140619b9c((longlong)param_3 * 0x50 + *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10),
                  param_2);
  }
  return param_2;
}



// FUNCTION 146e9aaba FUN_146e9aaba body=397 status=ok
// SIG undefined FUN_146e9aaba(void)

void FUN_146e9aaba(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88._0_4_ = param_2;
  cVar4 = (*(code *)*param_3)(param_3[1]);
  if (cVar4 == '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10);
    plVar1 = (longlong *)(lVar2 + (longlong)param_2 * 0x50);
    lVar2 = lVar2 + (longlong)param_2 * 0x50;
    lVar7 = lVar2 + 0x10;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar7;
    if (*(int *)(lVar2 + 0x28) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar6 = (int)plVar1[5];
    }
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar3 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar5 = local_70._4_4_;
    local_88 = plVar1;
    if ((local_70._4_4_ != iVar6) || (local_70 = local_50, uStack_58 != lVar7)) {
      do {
        local_70 = uVar3;
        local_98 = *param_4;
        local_90 = param_4[1];
        local_a8 = *param_3;
        local_a0 = param_3[1];
        FUN_146e9aaba(param_1,*(undefined4 *)(*local_88 + (longlong)iVar5 * 0xc));
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_88 != plVar1 ||
               (CONCAT44(uStack_74,uStack_78) != lVar7 || local_70._4_4_ != iVar6));
    }
  }
  else {
    local_88 = (longlong *)CONCAT44(local_88._4_4_,param_2);
    (*(code *)*param_4)(param_4[1]);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e9ac48 FUN_146e9ac48 body=835 status=ok
// SIG undefined FUN_146e9ac48(void)

longlong * FUN_146e9ac48(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = 0;
  param_2[1] = 0;
  plVar7 = *(longlong **)(param_1 + 0x30);
  if ((plVar7 != (longlong *)0x0) && (lVar10 = *(longlong *)(param_1 + 0x68), lVar10 != 0)) {
    local_78 = 0;
    uStack_70 = 0;
    iVar4 = (**(code **)(*plVar7 + 0x60))(plVar7);
    if (0 < iVar4) {
      lVar8 = 0;
      do {
        uVar2 = uStack_70;
        if (*(int *)(plVar7[2] + lVar8 * 4) == -1) {
          lVar9 = (longlong)(int)uStack_70;
          uVar5 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
          if (uStack_70._4_4_ < uVar5) {
            FUN_1429fa4dc(&local_78,uVar2 & 0xffffffff);
          }
          *(int *)(local_78 + lVar9 * 8) = (int)lVar8;
          *(undefined4 *)(local_78 + 4 + lVar9 * 8) = 0;
        }
        lVar8 = lVar8 + 1;
        iVar4 = (**(code **)(*plVar7 + 0x60))(plVar7);
      } while (lVar8 < iVar4);
    }
    iVar4 = (**(code **)(*plVar7 + 0x60))(plVar7);
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar4 != 0) {
      FUN_14481578e(param_2,iVar4);
    }
    if ((int)uStack_70 != 0) {
      local_a8 = lVar10;
      do {
        uVar2 = *(ulonglong *)(local_78 + -8 + (longlong)(int)uStack_70 * 8);
        uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + -1);
        FUN_1429fa636(&local_78);
        uVar3 = uStack_70;
        if (((int)(uVar2 >> 0x20) == 1) ||
           (lVar8 = (longlong)(int)uVar2 * 0x50,
           *(int *)(*(longlong *)(lVar10 + 0x10) + 8 + lVar8) ==
           *(int *)(*(longlong *)(lVar10 + 0x10) + 0x34 + lVar8))) {
          iVar4 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
            FUN_1446f48e2(param_2,iVar4);
          }
          *(int *)(*param_2 + (longlong)iVar4 * 4) = (int)uVar2;
        }
        else {
          lVar9 = (longlong)(int)uStack_70;
          uVar5 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
          if (uStack_70._4_4_ < uVar5) {
            FUN_1429fa4dc(&local_78,uVar3 & 0xffffffff);
          }
          *(ulonglong *)(local_78 + lVar9 * 8) = uVar2 & 0xffffffff | 0x100000000;
          lVar10 = *(longlong *)(lVar10 + 0x10);
          lVar9 = lVar8 + 0x10 + lVar10;
          local_68 = 0x100000000;
          local_58 = 0xffffffff;
          local_50 = 0;
          local_60 = lVar9;
          if (*(int *)(lVar9 + 0x18) != 0) {
            FUN_1449c0562(&local_68);
          }
          plVar7 = (longlong *)(lVar10 + lVar8);
          local_88 = local_58;
          local_80 = local_50;
          local_7c = local_4c;
          local_98 = local_68;
          local_90 = local_60;
          uVar5 = *(uint *)(plVar7 + 5);
          local_68 = CONCAT44(1 << ((byte)uVar5 & 0x1f),(int)uVar5 >> 5);
          local_58 = CONCAT44(uVar5,-1 << ((byte)uVar5 & 0x1f));
          local_50 = uVar5 & 0xffffffe0;
          local_a0 = plVar7;
          local_60 = lVar9;
          if (*(uint *)(plVar7 + 5) != uVar5) {
            FUN_1449c0562(&local_68);
            uVar5 = local_58._4_4_;
          }
          lVar8 = local_60;
          lVar10 = local_a8;
          if ((local_a0 != plVar7 || local_90 != local_60) || local_88._4_4_ != uVar5) {
            do {
              uVar2 = uStack_70;
              uVar1 = *(undefined4 *)(*local_a0 + (longlong)(int)local_88._4_4_ * 0xc);
              lVar10 = (longlong)(int)uStack_70;
              uVar6 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
              if (uStack_70._4_4_ < uVar6) {
                FUN_1429fa4dc(&local_78,uVar2 & 0xffffffff);
              }
              *(undefined4 *)(local_78 + lVar10 * 8) = uVar1;
              *(undefined4 *)(local_78 + 4 + lVar10 * 8) = 0;
              local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
              FUN_1449c0562(&local_98);
              lVar10 = local_a8;
            } while (local_a0 != plVar7 || (local_90 != lVar8 || local_88._4_4_ != uVar5));
          }
        }
      } while ((int)uStack_70 != 0);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146e9af8e FUN_146e9af8e body=68 status=ok
// SIG undefined FUN_146e9af8e(void)

void FUN_146e9af8e(undefined8 param_1)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0xffffffff;
  FUN_146e9afd4(param_1,&local_c,1,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9afd4 FUN_146e9afd4 body=97 status=ok
// SIG undefined FUN_146e9afd4(void)

void FUN_146e9afd4(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar3 == '\0') {
    FUN_141051438(param_1,param_3,param_4);
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar1 = *param_2;
      lVar4 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + lVar4 * 4) = uVar1;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar2 + 0x18));
    }
  }
  return;
}



// FUNCTION 146e9b036 FUN_146e9b036 body=19 status=ok
// SIG undefined FUN_146e9b036(void)

undefined8 FUN_146e9b036(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146e9b042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x60))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 146e9b04a FUN_146e9b04a body=24 status=ok
// SIG undefined FUN_146e9b04a(void)

void FUN_146e9b04a(longlong param_1,int param_2,undefined4 param_3)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 8) = 1;
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + (longlong)param_2 * 4) =
       param_3;
  return;
}



// FUNCTION 146e9b062 FUN_146e9b062 body=324 status=ok
// SIG undefined FUN_146e9b062(void)

void FUN_146e9b062(undefined8 *param_1,char param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == '\x01') && (cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]), cVar2 == '\0'))
  {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar4 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar4 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_146e9b0d4;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_146e9b0d4:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar3 = FUN_14062f512(lVar5,param_1[2],lVar8);
  param_1[5] = uVar3;
  param_1[6] = uVar3;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e9b1a8 FUN_146e9b1a8 body=1614 status=ok
// SIG undefined FUN_146e9b1a8(void)

undefined8 * FUN_146e9b1a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  param_1[1] = param_2;
  FUN_1446ddc76(&local_30,"TransformToGeometryIndex",1);
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[4] = local_30;
  param_1[5] = DAT_14c9974a8;
  param_1[6] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  FUN_1446ddc76(&local_30,"TransformIndex",1);
  param_1[9] = param_2;
  param_1[10] = param_2;
  param_1[0xb] = local_30;
  param_1[0xc] = DAT_14c996af0;
  param_1[0xd] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  FUN_1446ddc76(&local_30,"Vertex",1);
  param_1[0x10] = param_2;
  param_1[0x11] = param_2;
  param_1[0x12] = local_30;
  param_1[0x13] = DAT_14c996ae0;
  param_1[0x14] = 0;
  uVar1 = FUN_14067610e(param_2);
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar1;
  FUN_1446ddc76(&local_30,"TangentU",1);
  param_1[0x17] = param_2;
  param_1[0x18] = param_2;
  param_1[0x19] = local_30;
  param_1[0x1a] = DAT_14c996ae0;
  param_1[0x1b] = 0;
  uVar1 = FUN_14067610e(param_2);
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar1;
  FUN_1446ddc76(&local_30,"TangentV",1);
  param_1[0x1e] = param_2;
  param_1[0x1f] = param_2;
  param_1[0x20] = local_30;
  param_1[0x21] = DAT_14c996ae0;
  param_1[0x22] = 0;
  uVar1 = FUN_14067610e(param_2);
  param_1[0x23] = uVar1;
  param_1[0x24] = uVar1;
  FUN_1446ddc76(&local_30,"Normal",1);
  param_1[0x25] = param_2;
  param_1[0x26] = param_2;
  param_1[0x27] = local_30;
  param_1[0x28] = DAT_14c996ae0;
  param_1[0x29] = 0;
  uVar1 = FUN_14067610e(param_2);
  param_1[0x2a] = uVar1;
  param_1[0x2b] = uVar1;
  FUN_1446ddc76(&local_30,"Color",1);
  param_1[0x2c] = param_2;
  param_1[0x2d] = param_2;
  param_1[0x2e] = local_30;
  param_1[0x2f] = DAT_14c996ae0;
  param_1[0x30] = 0;
  uVar1 = FUN_146ea23e0(param_2);
  param_1[0x31] = uVar1;
  param_1[0x32] = uVar1;
  FUN_1446ddc76(&local_30,"BoneMap",1);
  param_1[0x33] = param_2;
  param_1[0x34] = param_2;
  param_1[0x35] = local_30;
  param_1[0x36] = DAT_14c996ae0;
  param_1[0x37] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x38] = uVar1;
  param_1[0x39] = uVar1;
  FUN_1446ddc76(&local_30,"VertexStart",1);
  param_1[0x3a] = param_2;
  param_1[0x3b] = param_2;
  param_1[0x3c] = local_30;
  param_1[0x3d] = DAT_14c996af0;
  param_1[0x3e] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x3f] = uVar1;
  param_1[0x40] = uVar1;
  FUN_1446ddc76(&local_30,"VertexCount",1);
  param_1[0x41] = param_2;
  param_1[0x42] = param_2;
  param_1[0x43] = local_30;
  param_1[0x44] = DAT_14c996af0;
  param_1[0x45] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x46] = uVar1;
  param_1[0x47] = uVar1;
  FUN_1446ddc76(&local_30,"Indices",1);
  param_1[0x48] = param_2;
  param_1[0x49] = param_2;
  param_1[0x4a] = local_30;
  param_1[0x4b] = DAT_14c996ae8;
  param_1[0x4c] = 0;
  uVar1 = FUN_146ea24fc(param_2);
  param_1[0x4d] = uVar1;
  param_1[0x4e] = uVar1;
  FUN_1446ddc76(&local_30,"Visible",1);
  param_1[0x4f] = param_2;
  param_1[0x50] = param_2;
  param_1[0x51] = local_30;
  param_1[0x52] = DAT_14c996ae8;
  param_1[0x53] = 0;
  uVar1 = FUN_1401c090c(param_2);
  param_1[0x54] = uVar1;
  param_1[0x55] = uVar1;
  FUN_1446ddc76(&local_30,"MaterialIndex",1);
  param_1[0x56] = param_2;
  param_1[0x57] = param_2;
  param_1[0x58] = local_30;
  param_1[0x59] = DAT_14c996ae8;
  param_1[0x5a] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x5b] = uVar1;
  param_1[0x5c] = uVar1;
  FUN_1446ddc76(&local_30,"MaterialID",1);
  param_1[0x5d] = param_2;
  param_1[0x5e] = param_2;
  param_1[0x5f] = local_30;
  param_1[0x60] = DAT_14c996ae8;
  param_1[0x61] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x62] = uVar1;
  param_1[99] = uVar1;
  FUN_1446ddc76(&local_30,"Internal",1);
  param_1[100] = param_2;
  param_1[0x65] = param_2;
  param_1[0x66] = local_30;
  param_1[0x67] = DAT_14c996ae8;
  param_1[0x68] = 0;
  uVar1 = FUN_1401c090c(param_2);
  param_1[0x69] = uVar1;
  param_1[0x6a] = uVar1;
  FUN_1446ddc76(&local_30,"FaceStart",1);
  param_1[0x6b] = param_2;
  param_1[0x6c] = param_2;
  param_1[0x6d] = local_30;
  param_1[0x6e] = DAT_14c996af0;
  param_1[0x6f] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x70] = uVar1;
  param_1[0x71] = uVar1;
  FUN_1446ddc76(&local_30,"FaceCount",1);
  param_1[0x72] = param_2;
  param_1[0x73] = param_2;
  param_1[0x74] = local_30;
  param_1[0x75] = DAT_14c996af0;
  param_1[0x76] = 0;
  uVar1 = FUN_140757af2(param_2);
  param_1[0x77] = uVar1;
  param_1[0x78] = uVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9b7f8 FUN_146e9b7f8 body=1514 status=ok
// SIG undefined FUN_146e9b7f8(void)

undefined8 * FUN_146e9b7f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = param_2;
  FUN_1446ddc76(&local_48,"TransformToGeometryIndex",1);
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = local_48;
  param_1[5] = DAT_14c9974a8;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[8] = uVar1;
  FUN_1446ddc76(&local_48,"TransformIndex",1);
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = local_48;
  param_1[0xc] = DAT_14c996af0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0xf] = uVar1;
  FUN_1446ddc76(&local_48,"Vertex",1);
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  param_1[0x12] = local_48;
  param_1[0x13] = DAT_14c996ae0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar1 = FUN_1409bc3ac(param_2);
  param_1[0x16] = uVar1;
  FUN_1446ddc76(&local_48,"TangentU",1);
  param_1[0x17] = param_2;
  param_1[0x18] = 0;
  param_1[0x19] = local_48;
  param_1[0x1a] = DAT_14c996ae0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = FUN_1409bc3ac(param_2);
  param_1[0x1d] = uVar1;
  FUN_1446ddc76(&local_48,"TangentV",1);
  param_1[0x1e] = param_2;
  param_1[0x1f] = 0;
  param_1[0x20] = local_48;
  param_1[0x21] = DAT_14c996ae0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  uVar1 = FUN_1409bc3ac(param_2);
  param_1[0x24] = uVar1;
  FUN_1446ddc76(&local_48,"Normal",1);
  param_1[0x25] = param_2;
  param_1[0x26] = 0;
  param_1[0x27] = local_48;
  param_1[0x28] = DAT_14c996ae0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  uVar1 = FUN_1409bc3ac(param_2);
  param_1[0x2b] = uVar1;
  FUN_1446ddc76(&local_48,"Color",1);
  param_1[0x2c] = param_2;
  param_1[0x2d] = 0;
  param_1[0x2e] = local_48;
  param_1[0x2f] = DAT_14c996ae0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  uVar1 = FUN_146ea2618(param_2);
  param_1[0x32] = uVar1;
  FUN_1446ddc76(&local_48,"BoneMap",1);
  param_1[0x33] = param_2;
  param_1[0x34] = 0;
  param_1[0x35] = local_48;
  param_1[0x36] = DAT_14c996ae0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x39] = uVar1;
  FUN_1446ddc76(&local_48,"VertexStart",1);
  param_1[0x3a] = param_2;
  param_1[0x3b] = 0;
  param_1[0x3c] = local_48;
  param_1[0x3d] = DAT_14c996af0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x40] = uVar1;
  FUN_1446ddc76(&local_48,"VertexCount",1);
  param_1[0x41] = param_2;
  param_1[0x42] = 0;
  param_1[0x43] = local_48;
  param_1[0x44] = DAT_14c996af0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x47] = uVar1;
  FUN_1446ddc76(&local_48,"Indices",1);
  param_1[0x48] = param_2;
  param_1[0x49] = 0;
  param_1[0x4a] = local_48;
  param_1[0x4b] = DAT_14c996ae8;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  uVar1 = FUN_146ea2724(param_2);
  param_1[0x4e] = uVar1;
  FUN_1446ddc76(&local_48,"Visible",1);
  param_1[0x4f] = param_2;
  param_1[0x50] = 0;
  param_1[0x51] = local_48;
  param_1[0x52] = DAT_14c996ae8;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  uVar1 = FUN_146ea170a(param_2);
  param_1[0x55] = uVar1;
  FUN_1446ddc76(&local_48,"MaterialIndex",1);
  param_1[0x56] = param_2;
  param_1[0x57] = 0;
  param_1[0x58] = local_48;
  param_1[0x59] = DAT_14c996ae8;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x5c] = uVar1;
  FUN_1446ddc76(&local_48,"MaterialID",1);
  param_1[0x5d] = param_2;
  param_1[0x5e] = 0;
  param_1[0x5f] = local_48;
  param_1[0x60] = DAT_14c996ae8;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[99] = uVar1;
  FUN_1446ddc76(&local_48,"Internal",1);
  param_1[100] = param_2;
  param_1[0x65] = 0;
  param_1[0x66] = local_48;
  param_1[0x67] = DAT_14c996ae8;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  uVar1 = FUN_146ea170a(param_2);
  param_1[0x6a] = uVar1;
  FUN_1446ddc76(&local_48,"FaceStart",1);
  param_1[0x6b] = param_2;
  param_1[0x6c] = 0;
  param_1[0x6d] = local_48;
  param_1[0x6e] = DAT_14c996af0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x71] = uVar1;
  FUN_1446ddc76(&local_48,"FaceCount",1);
  param_1[0x72] = param_2;
  param_1[0x73] = 0;
  param_1[0x74] = local_48;
  param_1[0x75] = DAT_14c996af0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  uVar1 = FUN_1401c0c0c(param_2);
  param_1[0x78] = uVar1;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9bde4 FUN_146e9bde4 body=216 status=ok
// SIG undefined FUN_146e9bde4(void)

bool FUN_146e9bde4(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_146eaecd5(*(undefined8 *)(param_1 + 8));
  if (((((((cVar1 == '\0') || (*(longlong *)(param_1 + 0x40) == 0)) ||
         (*(longlong *)(param_1 + 0x78) == 0)) ||
        ((*(longlong *)(param_1 + 0xb0) == 0 || (*(longlong *)(param_1 + 0xe8) == 0)))) ||
       ((*(longlong *)(param_1 + 0x120) == 0 ||
        ((*(longlong *)(param_1 + 0x158) == 0 || (*(longlong *)(param_1 + 400) == 0)))))) ||
      (*(longlong *)(param_1 + 0x1c8) == 0)) ||
     ((((*(longlong *)(param_1 + 0x200) == 0 || (*(longlong *)(param_1 + 0x238) == 0)) ||
       (*(longlong *)(param_1 + 0x270) == 0)) ||
      (((*(longlong *)(param_1 + 0x2a8) == 0 || (*(longlong *)(param_1 + 0x2e0) == 0)) ||
       ((*(longlong *)(param_1 + 0x318) == 0 ||
        ((*(longlong *)(param_1 + 0x350) == 0 || (*(longlong *)(param_1 + 0x388) == 0)))))))))) {
    bVar2 = false;
  }
  else {
    bVar2 = *(longlong *)(param_1 + 0x3c0) != 0;
  }
  return bVar2;
}



// FUNCTION 146e9bebc FUN_146e9bebc body=309 status=ok
// SIG undefined FUN_146e9bebc(void)

void FUN_146e9bebc(undefined8 *param_1,char param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == '\x01') && (cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]), cVar2 == '\0'))
  {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_146e9bf85;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_146e9bf85:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar4 = FUN_146c973be(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e9bff2 FUN_146e9bff2 body=309 status=ok
// SIG undefined FUN_146e9bff2(void)

void FUN_146e9bff2(undefined8 *param_1,char param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == '\x01') && (cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]), cVar2 == '\0'))
  {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_146e9c0bb;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_146e9c0bb:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar4 = FUN_146ea2830(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e9c128 FUN_146e9c128 body=324 status=ok
// SIG undefined FUN_146e9c128(void)

void FUN_146e9c128(undefined8 *param_1,char param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == '\x01') && (cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]), cVar2 == '\0'))
  {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar4 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar4 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_146e9c19a;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_146e9c19a:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar3 = FUN_140b1fbd2(lVar5,param_1[2],lVar8);
  param_1[5] = uVar3;
  param_1[6] = uVar3;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e9c26e FUN_146e9c26e body=78 status=ok
// SIG undefined FUN_146e9c26e(void)

void FUN_146e9c26e(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + (longlong)param_3 * 4);
  iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x238) + 0x10) + lVar2 * 4);
  *param_2 = (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x200) + 0x10) + lVar2 * 4) *
             0xc + *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
  *(int *)(param_2 + 1) = iVar1 + 1;
  return;
}



// FUNCTION 146e9c2bc FUN_146e9c2bc body=1347 status=ok
// SIG undefined FUN_146e9c2bc(void)

void FUN_146e9c2bc(longlong param_1,int param_2,double *param_3)

{
  double dVar1;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar2;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 8) = 1;
  lVar4 = *(longlong *)(param_1 + 0xa8);
  lVar12 = *(longlong *)(param_1 + 0x200);
  lVar5 = *(longlong *)(param_1 + 0x238);
  *(undefined1 *)(*(longlong *)(param_1 + 0x150) + 8) = 1;
  lVar6 = *(longlong *)(param_1 + 0x150);
  *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + 8) = 1;
  lVar7 = *(longlong *)(param_1 + 0xe0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x118) + 8) = 1;
  lVar11 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x10) + (longlong)param_2 * 4);
  if (0 < *(int *)(*(longlong *)(lVar5 + 0x10) + lVar11 * 4)) {
    lVar8 = *(longlong *)(param_1 + 0x118);
    lVar12 = (longlong)*(int *)(*(longlong *)(lVar12 + 0x10) + lVar11 * 4) * 0xc + 8;
    lVar11 = 0;
    do {
      lVar9 = *(longlong *)(lVar4 + 0x10);
      dVar16 = (double)*(float *)(lVar9 + -8 + lVar12) * param_3[8];
      dVar17 = (double)*(float *)(lVar9 + -4 + lVar12) * param_3[9];
      dVar13 = (double)*(float *)(lVar9 + lVar12) * param_3[10];
      dVar10 = param_3[2];
      dVar14 = *param_3;
      dVar15 = param_3[1];
      dVar18 = dVar17 * dVar14 - dVar16 * dVar15;
      dVar20 = dVar13 * dVar15 - dVar17 * dVar10;
      dVar21 = dVar16 * dVar10 - dVar14 * dVar13;
      dVar1 = param_3[3];
      dVar2 = param_3[3];
      dVar20 = dVar20 + dVar20;
      dVar21 = dVar21 + dVar21;
      dVar18 = dVar18 + dVar18;
      dVar22 = param_3[5];
      dVar19 = param_3[6];
      *(float *)(lVar9 + -8 + lVar12) =
           (float)((dVar18 * dVar15 - dVar21 * dVar10) + dVar1 * dVar20 + dVar16 + param_3[4]);
      *(float *)(lVar9 + -4 + lVar12) =
           (float)((dVar10 * dVar20 - dVar14 * dVar18) + dVar2 * dVar21 + dVar17 + dVar22);
      *(float *)(lVar9 + lVar12) =
           (float)(dVar18 * dVar1 + dVar13 + (dVar21 * dVar14 - dVar20 * dVar15) + dVar19);
      lVar9 = *(longlong *)(lVar6 + 0x10);
      dVar15 = (double)*(float *)(lVar9 + -8 + lVar12) * param_3[8];
      dVar13 = (double)*(float *)(lVar9 + -4 + lVar12) * param_3[9];
      dVar14 = (double)*(float *)(lVar9 + lVar12) * param_3[10];
      dVar18 = *param_3;
      dVar21 = param_3[1];
      dVar10 = param_3[2];
      dVar2 = param_3[3];
      dVar1 = param_3[3];
      dVar19 = dVar13 * dVar18 - dVar15 * dVar21;
      dVar16 = dVar14 * dVar21 - dVar13 * dVar10;
      dVar22 = dVar15 * dVar10 - dVar18 * dVar14;
      dVar16 = dVar16 + dVar16;
      dVar22 = dVar22 + dVar22;
      dVar19 = dVar19 + dVar19;
      *(float *)(lVar9 + -8 + lVar12) =
           (float)((dVar19 * dVar21 - dVar22 * dVar10) + dVar2 * dVar16 + dVar15);
      *(float *)(lVar9 + -4 + lVar12) =
           (float)((dVar10 * dVar16 - dVar18 * dVar19) + dVar1 * dVar22 + dVar13);
      *(float *)(lVar9 + lVar12) =
           (float)(dVar19 * dVar2 + dVar14 + (dVar22 * dVar18 - dVar16 * dVar21));
      lVar9 = *(longlong *)(lVar7 + 0x10);
      dVar15 = (double)*(float *)(lVar9 + -8 + lVar12) * param_3[8];
      dVar13 = (double)*(float *)(lVar9 + -4 + lVar12) * param_3[9];
      dVar14 = (double)*(float *)(lVar9 + lVar12) * param_3[10];
      dVar18 = *param_3;
      dVar21 = param_3[1];
      dVar10 = param_3[2];
      dVar2 = param_3[3];
      dVar1 = param_3[3];
      dVar19 = dVar13 * dVar18 - dVar15 * dVar21;
      dVar16 = dVar14 * dVar21 - dVar13 * dVar10;
      dVar22 = dVar15 * dVar10 - dVar18 * dVar14;
      dVar16 = dVar16 + dVar16;
      dVar22 = dVar22 + dVar22;
      dVar19 = dVar19 + dVar19;
      *(float *)(lVar9 + -8 + lVar12) =
           (float)((dVar19 * dVar21 - dVar22 * dVar10) + dVar2 * dVar16 + dVar15);
      *(float *)(lVar9 + -4 + lVar12) =
           (float)((dVar10 * dVar16 - dVar18 * dVar19) + dVar1 * dVar22 + dVar13);
      *(float *)(lVar9 + lVar12) =
           (float)(dVar19 * dVar2 + dVar14 + (dVar22 * dVar18 - dVar16 * dVar21));
      lVar9 = *(longlong *)(lVar8 + 0x10);
      dVar15 = (double)*(float *)(lVar9 + -8 + lVar12) * param_3[8];
      dVar13 = (double)*(float *)(lVar9 + -4 + lVar12) * param_3[9];
      dVar14 = (double)*(float *)(lVar9 + lVar12) * param_3[10];
      dVar18 = *param_3;
      dVar21 = param_3[1];
      dVar10 = param_3[2];
      dVar2 = param_3[3];
      dVar1 = param_3[3];
      dVar19 = dVar13 * dVar18 - dVar15 * dVar21;
      dVar16 = dVar14 * dVar21 - dVar13 * dVar10;
      dVar22 = dVar15 * dVar10 - dVar18 * dVar14;
      dVar16 = dVar16 + dVar16;
      dVar22 = dVar22 + dVar22;
      dVar19 = dVar19 + dVar19;
      *(float *)(lVar9 + -8 + lVar12) =
           (float)((dVar19 * dVar21 - dVar22 * dVar10) + dVar2 * dVar16 + dVar15);
      *(float *)(lVar9 + -4 + lVar12) =
           (float)((dVar10 * dVar16 - dVar18 * dVar19) + dVar1 * dVar22 + dVar13);
      *(float *)(lVar9 + lVar12) =
           (float)(dVar19 * dVar2 + dVar14 + (dVar22 * dVar18 - dVar16 * dVar21));
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0xc;
    } while (lVar11 < *(int *)(*(longlong *)(lVar5 + 0x10) +
                              (longlong)
                              *(int *)(*(longlong *)(lVar3 + 0x10) + (longlong)param_2 * 4) * 4));
  }
  return;
}



// FUNCTION 146e9c800 FUN_146e9c800 body=309 status=ok
// SIG undefined FUN_146e9c800(void)

void FUN_146e9c800(undefined8 *param_1,char param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == '\x01') && (cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]), cVar2 == '\0'))
  {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_146e9c8c9;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_146e9c8c9:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar4 = FUN_146ea39ca(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e9c936 FUN_146e9c936 body=309 status=ok
// SIG undefined FUN_146e9c936(void)

void FUN_146e9c936(undefined8 *param_1,char param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == '\x01') && (cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]), cVar2 == '\0'))
  {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_146e9c9ff;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_146e9c9ff:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar4 = FUN_146ea44d4(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e9ca6c FUN_146e9ca6c body=309 status=ok
// SIG undefined FUN_146e9ca6c(void)

void FUN_146e9ca6c(undefined8 *param_1,char param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 == '\x01') && (cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]), cVar2 == '\0'))
  {
    FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_146e9cb35;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_146e9cb35:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar4 = FUN_146ea5e6e(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e9cba2 FUN_146e9cba2 body=88 status=ok
// SIG undefined FUN_146e9cba2(void)

undefined8 * FUN_146e9cba2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146ea732a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 7);
      }
    }
  }
  return param_1;
}



// FUNCTION 146e9cbfa FUN_146e9cbfa body=95 status=ok
// SIG undefined FUN_146e9cbfa(void)

undefined8 * FUN_146e9cbfa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146d8d0e9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146ea738c(param_1,iVar1);
      FUN_146ea73ee(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146e9cc5a FUN_146e9cc5a body=143 status=ok
// SIG undefined FUN_146e9cc5a(void)

void FUN_146e9cc5a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ea6e74(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146ea6f96(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146ea6ff6(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e9ccea FUN_146e9ccea body=62 status=ok
// SIG undefined FUN_146e9ccea(void)

undefined8 * FUN_146e9ccea(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f5fc40;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9cd28 FUN_146e9cd28 body=62 status=ok
// SIG undefined FUN_146e9cd28(void)

undefined8 * FUN_146e9cd28(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f5fca0;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9cd66 FUN_146e9cd66 body=81 status=ok
// SIG undefined FUN_146e9cd66(void)

undefined8 * FUN_146e9cd66(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f5fd60;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9cdb8 FUN_146e9cdb8 body=81 status=ok
// SIG undefined FUN_146e9cdb8(void)

undefined8 * FUN_146e9cdb8(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f5fdc0;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9ce0a FUN_146e9ce0a body=29 status=ok
// SIG undefined FUN_146e9ce0a(void)

undefined8 FUN_146e9ce0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9ce32 FUN_146e9ce32 body=29 status=ok
// SIG undefined FUN_146e9ce32(void)

undefined8 FUN_146e9ce32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9ce50 FUN_146e9ce50 body=29 status=ok
// SIG undefined FUN_146e9ce50(void)

undefined8 FUN_146e9ce50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9ce72 FUN_146e9ce72 body=38 status=ok
// SIG undefined FUN_146e9ce72(void)

undefined8 FUN_146e9ce72(undefined8 param_1,int param_2)

{
  FUN_1401aa844();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9ce9a FUN_146e9ce9a body=38 status=ok
// SIG undefined FUN_146e9ce9a(void)

undefined8 FUN_146e9ce9a(undefined8 param_1,int param_2)

{
  FUN_146ea7466();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9cec6 FUN_146e9cec6 body=29 status=ok
// SIG undefined FUN_146e9cec6(void)

undefined8 FUN_146e9cec6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9ceea FUN_146e9ceea body=190 status=ok
// SIG undefined FUN_146e9ceea(void)

undefined8 * FUN_146e9ceea(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_58 = *(undefined4 *)(param_1 + 0x18);
  uStack_54 = *(undefined4 *)(param_1 + 0x1c);
  uStack_50 = *(undefined4 *)(param_1 + 0x20);
  uStack_4c = *(undefined4 *)(param_1 + 0x24);
  local_48 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar4[1] = 0;
  FUN_1446ddc76(puVar4 + 1,&DAT_149e02088,1);
  *puVar4 = &PTR_FUN_149f62c00;
  *(undefined4 *)(puVar4 + 2) = uVar1;
  *(undefined4 *)(puVar4 + 3) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_54;
  *(undefined4 *)(puVar4 + 4) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uStack_4c;
  puVar4[5] = local_48;
  puVar4[6] = uVar3;
  *(undefined4 *)(puVar4 + 7) = uVar2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9cfb0 FUN_146e9cfb0 body=29 status=ok
// SIG undefined FUN_146e9cfb0(void)

undefined8 FUN_146e9cfb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9cfd4 FUN_146e9cfd4 body=131 status=ok
// SIG undefined FUN_146e9cfd4(void)

undefined8 * FUN_146e9cfd4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar5[1] = 0;
  FUN_1446ddc76(puVar5 + 1,&DAT_149e02088,1);
  *puVar5 = &PTR_FUN_149f61470;
  *(undefined4 *)(puVar5 + 2) = uVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar5[3] = *(undefined8 *)(param_1 + 0x18);
  puVar5[4] = uVar4;
  puVar5[5] = *(undefined8 *)(param_1 + 0x28);
  puVar5[6] = uVar2;
  puVar5[7] = uVar3;
  return puVar5;
}



// FUNCTION 146e9d05e FUN_146e9d05e body=29 status=ok
// SIG undefined FUN_146e9d05e(void)

undefined8 FUN_146e9d05e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9d082 FUN_146e9d082 body=238 status=ok
// SIG undefined FUN_146e9d082(void)

undefined8 * FUN_146e9d082(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar5 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  local_48 = *(undefined8 *)(param_1 + 0x50);
  local_58 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  local_78 = *(undefined4 *)(param_1 + 0x28);
  uStack_74 = *(undefined4 *)(param_1 + 0x2c);
  uStack_70 = *(undefined4 *)(param_1 + 0x30);
  uStack_6c = *(undefined4 *)(param_1 + 0x34);
  local_68 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar5[1] = 0;
  FUN_1446ddc76(puVar5 + 1,&DAT_149e02088,1);
  *puVar5 = &PTR_FUN_149f614d0;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  *(undefined4 *)(puVar5 + 4) = uVar1;
  puVar5[5] = CONCAT44(uStack_74,local_78);
  puVar5[6] = CONCAT44(uStack_6c,uStack_70);
  puVar5[7] = local_68;
  *(undefined4 *)(puVar5 + 8) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar5 + 0x44) = local_58._4_4_;
  *(undefined4 *)(puVar5 + 9) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_50._4_4_;
  puVar5[10] = local_48;
  *(undefined4 *)(puVar5 + 0xb) = uVar2;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9d172 FUN_146e9d172 body=29 status=ok
// SIG undefined FUN_146e9d172(void)

undefined8 FUN_146e9d172(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9d196 FUN_146e9d196 body=209 status=ok
// SIG undefined FUN_146e9d196(void)

undefined8 * FUN_146e9d196(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8 [13];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar4 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  puVar6 = (undefined8 *)(param_1 + 0x20);
  puVar7 = local_b8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *puVar4 = 0;
  puVar4[1] = 0;
  FUN_1446ddc76(puVar4 + 1,&DAT_149e02088,1);
  *puVar4 = &PTR_FUN_149f61530;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  puVar6 = local_b8;
  puVar7 = puVar4 + 4;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(puVar4 + 0x10) = uVar1;
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9d268 FUN_146e9d268 body=29 status=ok
// SIG undefined FUN_146e9d268(void)

undefined8 FUN_146e9d268(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9d28c FUN_146e9d28c body=177 status=ok
// SIG undefined FUN_146e9d28c(void)

undefined8 * FUN_146e9d28c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar2 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  puVar4 = (undefined8 *)(param_1 + 0x20);
  puVar5 = local_98;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_1446ddc76(puVar2 + 1,&DAT_149e02088,1);
  *puVar2 = &PTR_FUN_149f61590;
  puVar2[2] = uVar1;
  puVar4 = local_98;
  puVar5 = puVar2 + 4;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9d350 FUN_146e9d350 body=81 status=ok
// SIG undefined FUN_146e9d350(void)

undefined8 * FUN_146e9d350(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f61650;
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9d3a8 FUN_146e9d3a8 body=167 status=ok
// SIG undefined FUN_146e9d3a8(void)

undefined8 * FUN_146e9d3a8(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
  }
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar3[1] = 0;
  FUN_1446ddc76(puVar3 + 1,&DAT_149e02088,1);
  *puVar3 = &PTR_FUN_149f61650;
  *(undefined4 *)(puVar3 + 2) = uVar1;
  puVar3[3] = uVar5;
  puVar3[4] = uVar4;
  *(undefined4 *)(puVar3 + 5) = uVar2;
  return puVar3;
}



// FUNCTION 146e9d464 FUN_146e9d464 body=122 status=ok
// SIG undefined FUN_146e9d464(void)

longlong FUN_146e9d464(longlong param_1,longlong param_2)

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
    FUN_146e9d4de(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146e9d4de FUN_146e9d4de body=119 status=ok
// SIG undefined FUN_146e9d4de(void)

undefined8 * FUN_146e9d4de(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1402a03f2(param_1,uVar1);
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



// FUNCTION 146e9d55c FUN_146e9d55c body=51 status=ok
// SIG undefined FUN_146e9d55c(void)

void FUN_146e9d55c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149f62930;
  *(undefined1 *)(puVar2 + 1) = 0;
  puVar2[2] = uVar1;
  return;
}



// FUNCTION 146e9d590 FUN_146e9d590 body=481 status=ok
// SIG undefined FUN_146e9d590(void)

void FUN_146e9d590(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = (**(code **)(*param_1 + 0x60))();
  local_78 = (undefined4 *)0x0;
  uStack_6c = 0x80;
  uVar11 = uVar4 + 0x1f;
  uStack_70 = uVar4;
  if (uVar11 < 0x20) goto LAB_146e9d5da;
  if (uVar11 < 0xa0) {
    puVar6 = &local_88;
LAB_146e9d6ad:
    uVar11 = uVar11 >> 3 & 0xfffffffc;
  }
  else {
    FUN_14499171c(&local_88,0,uVar11 >> 5,4);
    uStack_6c = uVar11 & 0xffffffe0;
    puVar6 = local_78;
    if (local_78 == (undefined4 *)0x0) {
      puVar6 = &local_88;
    }
    if (uVar11 < 0x120) goto LAB_146e9d6ad;
    uVar11 = (uVar11 >> 5) << 2;
  }
  memset(puVar6,0,(ulonglong)uVar11);
  uVar11 = uStack_70 + 0x1f;
  if (-1 < (int)uStack_70) {
    uVar11 = uStack_70;
  }
  if ((int)uStack_70 % 0x20 != 0) {
    puVar6 = local_78;
    if (local_78 == (undefined4 *)0x0) {
      puVar6 = &local_88;
    }
    bVar5 = -(char)((int)uStack_70 % 0x20);
    puVar6[(int)uVar11 >> 5] = (uint)(puVar6[(int)uVar11 >> 5] << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  }
  if (0 < (int)uVar4) {
    uVar7 = 0;
    do {
      uVar11 = *(uint *)(*param_2 + uVar7 * 4);
      plVar12 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      uVar8 = uVar11 + 0x1f;
      if (-1 < (int)uVar11) {
        uVar8 = uVar11;
      }
      uVar9 = 1 << ((byte)uVar7 & 0x1f);
      puVar6 = local_78;
      if (local_78 == (undefined4 *)0x0) {
        puVar6 = &local_88;
      }
      uVar10 = uVar7 >> 5 & 0x7ffffff;
      if ((*(uint *)((longlong)plVar12 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar11 & 0x1f) & 1) ==
          0) {
        uVar9 = ~uVar9 & puVar6[uVar10];
      }
      else {
        uVar9 = uVar9 | puVar6[uVar10];
      }
      puVar6[uVar10] = uVar9;
      uVar7 = uVar7 + 1;
    } while (uVar4 != uVar7);
  }
LAB_146e9d5da:
  lVar1 = param_1[2];
  lVar2 = param_1[3];
  local_58 = param_1[4];
  lVar3 = param_1[5];
  param_1[4] = (longlong)local_78;
  *(uint *)(param_1 + 5) = uStack_70;
  *(uint *)((longlong)param_1 + 0x2c) = uStack_6c;
  param_1[2] = CONCAT44(uStack_84,local_88);
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  local_68._0_4_ = (undefined4)lVar1;
  local_68._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_60._0_4_ = (undefined4)lVar2;
  uStack_60._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  uStack_50._0_4_ = (undefined4)lVar3;
  uStack_50._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_78 = (undefined4 *)local_58;
  local_68 = lVar1;
  uStack_60 = lVar2;
  uStack_50 = lVar3;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e9d772 FUN_146e9d772 body=220 status=ok
// SIG undefined FUN_146e9d772(void)

void FUN_146e9d772(longlong *param_1,longlong *param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[5]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), (int)param_3 < iVar1)) {
    do {
      iVar1 = param_5 + param_3;
      if ((int)param_1[5] <= iVar1) {
        return;
      }
      if (param_4 <= (int)param_3) {
        return;
      }
      plVar5 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar5 = param_2 + 2;
      }
      uVar6 = param_3 + 0x1f;
      if (-1 < (int)param_3) {
        uVar6 = param_3;
      }
      uVar2 = 1 << ((byte)iVar1 & 0x1f);
      plVar4 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar4 = param_1 + 2;
      }
      iVar7 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar7 = iVar1;
      }
      lVar3 = (longlong)(iVar7 >> 5);
      if ((*(uint *)((longlong)plVar5 + (longlong)((int)uVar6 >> 5) * 4) >> (param_3 & 0x1f) & 1) ==
          0) {
        uVar2 = ~uVar2 & *(uint *)((longlong)plVar4 + lVar3 * 4);
      }
      else {
        uVar2 = uVar2 | *(uint *)((longlong)plVar4 + lVar3 * 4);
      }
      *(uint *)((longlong)plVar4 + lVar3 * 4) = uVar2;
      param_3 = param_3 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while ((int)param_3 < iVar1);
  }
  return;
}



// FUNCTION 146e9d854 FUN_146e9d854 body=131 status=ok
// SIG undefined FUN_146e9d854(void)

void FUN_146e9d854(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = (longlong)*(int *)(param_2 + 1);
  if (0 < lVar4) {
    puVar1 = (undefined4 *)*param_2;
    if (lVar4 == 1) {
      iVar5 = 1;
    }
    else {
      iVar3 = puVar1[lVar4 + -1];
      iVar5 = 1;
      iVar2 = iVar3;
      do {
        if (iVar3 != puVar1[lVar4 + -2] + 1) {
          FUN_144a6134a(param_1 + 0x10,iVar3,iVar5);
          puVar1 = (undefined4 *)*param_2;
          iVar2 = puVar1[lVar4 + -2];
        }
        iVar3 = puVar1[lVar4 + -2];
        iVar5 = (iVar2 - iVar3) + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 1);
    }
    FUN_144a6134a(param_1 + 0x10,*puVar1,iVar5);
    return;
  }
  return;
}



// FUNCTION 146e9d900 FUN_146e9d900 body=57 status=ok
// SIG undefined FUN_146e9d900(void)

undefined8 * FUN_146e9d900(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f62f70;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9d93a FUN_146e9d93a body=98 status=ok
// SIG undefined FUN_146e9d93a(void)

longlong * FUN_146e9d93a(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144aa2a62(param_2,*(undefined4 *)(param_1 + 0x28),1);
  if (0 < *(int *)(param_1 + 0x28)) {
    uVar1 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x20) == 0) {
        lVar2 = param_1 + 0x10;
      }
      *(bool *)(*param_2 + uVar1) =
           (*(uint *)(lVar2 + (uVar1 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar1 & 0x1f) & 1) != 0;
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x28));
  }
  return param_2;
}



// FUNCTION 146e9d99c FUN_146e9d99c body=274 status=ok
// SIG undefined FUN_146e9d99c(void)

longlong * FUN_146e9d99c(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1),(longlong)*(int *)((longlong)param_2 + 0xc));
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14475e67c(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x1000000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1447cd5fa(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146e9dab0 FUN_146e9dab0 body=199 status=ok
// SIG undefined FUN_146e9dab0(void)

void FUN_146e9dab0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar8 = (**(code **)(*param_1 + 0x60))();
  local_48 = (undefined8 *)0x0;
  lStack_40 = 0;
  FUN_14076b618();
  if (0 < (int)uVar8) {
    uVar10 = 0;
    puVar9 = local_48;
    do {
      lVar2 = param_1[2];
      lVar11 = (longlong)*(int *)(*param_2 + uVar10 * 4) * 0x30;
      uVar3 = *(undefined8 *)(lVar2 + lVar11);
      uVar4 = ((undefined8 *)(lVar2 + lVar11))[1];
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar11);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar11);
      uVar7 = puVar1[1];
      puVar9[4] = *puVar1;
      puVar9[5] = uVar7;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      *puVar9 = uVar3;
      puVar9[1] = uVar4;
      uVar10 = uVar10 + 1;
      puVar9 = puVar9 + 6;
    } while (uVar8 != uVar10);
  }
  local_38 = param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  param_1[3] = lStack_40;
  local_48 = (undefined8 *)local_38;
  lStack_40 = lStack_30;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9db78 FUN_146e9db78 body=139 status=ok
// SIG undefined FUN_146e9db78(void)

void FUN_146e9db78(undefined8 *param_1,longlong *param_2)

{
  float *pfVar1;
  double *pdVar2;
  longlong lVar3;
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
  uint uVar15;
  longlong lVar16;
  
  uVar15 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar15);
  if (0 < (int)uVar15) {
    lVar16 = 0;
    do {
      lVar3 = param_2[2];
      pdVar2 = (double *)(lVar3 + 0x50 + lVar16 * 2);
      dVar4 = *pdVar2;
      dVar5 = pdVar2[1];
      pdVar2 = (double *)(lVar3 + 0x40 + lVar16 * 2);
      dVar6 = *pdVar2;
      dVar7 = pdVar2[1];
      pdVar2 = (double *)(lVar3 + 0x30 + lVar16 * 2);
      dVar8 = *pdVar2;
      dVar9 = pdVar2[1];
      pdVar2 = (double *)(lVar3 + 0x20 + lVar16 * 2);
      dVar10 = *pdVar2;
      dVar11 = pdVar2[1];
      pdVar2 = (double *)(lVar3 + 0x10 + lVar16 * 2);
      dVar12 = *pdVar2;
      dVar13 = pdVar2[1];
      pdVar2 = (double *)(lVar3 + lVar16 * 2);
      dVar14 = pdVar2[1];
      lVar3 = param_1[2];
      pfVar1 = (float *)(lVar3 + lVar16);
      *pfVar1 = (float)*pdVar2;
      pfVar1[1] = (float)dVar14;
      pfVar1[2] = (float)dVar12;
      pfVar1[3] = (float)dVar13;
      pfVar1 = (float *)(lVar3 + 0x10 + lVar16);
      *pfVar1 = (float)dVar10;
      pfVar1[1] = (float)dVar11;
      pfVar1[2] = (float)dVar8;
      pfVar1[3] = (float)dVar9;
      pfVar1 = (float *)(lVar3 + 0x20 + lVar16);
      *pfVar1 = (float)dVar6;
      pfVar1[1] = (float)dVar7;
      pfVar1[2] = (float)dVar4;
      pfVar1[3] = (float)dVar5;
      lVar16 = lVar16 + 0x30;
    } while ((ulonglong)uVar15 * 0x30 != lVar16);
  }
  return;
}



// FUNCTION 146e9dc04 FUN_146e9dc04 body=217 status=ok
// SIG undefined FUN_146e9dc04(void)

void FUN_146e9dc04(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
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
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar16 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar16)) {
    lVar19 = (longlong)(param_5 + param_3);
    lVar20 = (longlong)param_3;
    lVar17 = lVar20 * 0x30;
    lVar18 = lVar19 * 0x30;
    do {
      if ((int)param_1[3] <= lVar19) {
        return;
      }
      if (param_4 <= lVar20) {
        return;
      }
      lVar3 = param_2[2];
      lVar4 = param_1[2];
      puVar1 = (undefined4 *)(lVar3 + lVar17);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar17);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar17);
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar13;
      puVar2[2] = uVar14;
      puVar2[3] = uVar15;
      puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar18);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar1 = (undefined4 *)(lVar4 + lVar18);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar20 = lVar20 + 1;
      lVar19 = lVar19 + 1;
      iVar16 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar17 = lVar17 + 0x30;
      lVar18 = lVar18 + 0x30;
    } while (lVar20 < iVar16);
  }
  return;
}



// FUNCTION 146e9dcec FUN_146e9dcec body=271 status=ok
// SIG undefined FUN_146e9dcec(void)

void FUN_146e9dcec(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar2 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar2 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar2 = *(int *)(param_1 + 0x18);
          iVar7 = iVar2 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar3 = (void *)((longlong)iVar6 * 0x30 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar3,(void *)((longlong)iVar5 * 0x30 + (longlong)pvVar3),
                    (longlong)iVar7 * 0x30);
            iVar2 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar2 - iVar5;
          piVar1 = (int *)*param_2;
          iVar2 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar2;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        iVar7 = iVar2 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar3 = (void *)((longlong)*piVar1 * 0x30 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar3,(void *)((longlong)iVar6 * 0x30 + (longlong)pvVar3),(longlong)iVar7 * 0x30)
          ;
          iVar2 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar2 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_140491bf8(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146e9de1a FUN_146e9de1a body=57 status=ok
// SIG undefined FUN_146e9de1a(void)

undefined8 * FUN_146e9de1a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f627f0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9de54 FUN_146e9de54 body=63 status=ok
// SIG undefined FUN_146e9de54(void)

void FUN_146e9de54(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e9de94(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,0x10);
  }
  return;
}



// FUNCTION 146e9de94 FUN_146e9de94 body=117 status=ok
// SIG undefined FUN_146e9de94(void)

ulonglong FUN_146e9de94(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x30) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,0x10);
      uVar1 = uVar1 / 0x30;
    }
  }
  return uVar1;
}



// FUNCTION 146e9df0a FUN_146e9df0a body=215 status=ok
// SIG undefined FUN_146e9df0a(void)

void FUN_146e9df0a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40._4_4_ = 0;
  uStack_40._0_4_ = uVar1;
  if (uVar1 != 0) {
    FUN_1446f48e2(&local_48);
    memset(local_48,0,(longlong)(int)uVar1 << 2);
    if (0 < (int)uVar1) {
      uVar2 = 0;
      do {
        *(undefined4 *)((longlong)local_48 + uVar2 * 4) =
             *(undefined4 *)(param_1[2] + (longlong)*(int *)(*param_2 + uVar2 * 4) * 4);
        uVar2 = uVar2 + 1;
      } while (uVar1 != uVar2);
    }
  }
  local_38 = (void *)param_1[2];
  lStack_30 = param_1[3];
  param_1[2] = (longlong)local_48;
  *(uint *)(param_1 + 3) = (uint)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_40._4_4_;
  local_48 = local_38;
  uStack_40 = lStack_30;
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9dfe2 FUN_146e9dfe2 body=65 status=ok
// SIG undefined FUN_146e9dfe2(void)

void FUN_146e9dfe2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x60))();
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      lVar3 = (longlong)*(int *)(param_1[2] + uVar2 * 4);
      if (-1 < lVar3) {
        *(undefined4 *)(param_1[2] + uVar2 * 4) = *(undefined4 *)(*param_2 + lVar3 * 4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146e9e024 FUN_146e9e024 body=91 status=ok
// SIG undefined FUN_146e9e024(void)

void FUN_146e9e024(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined4 *)(param_1[2] + uVar2 * 4) = *(undefined4 *)(param_2[2] + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146e9e080 FUN_146e9e080 body=149 status=ok
// SIG undefined FUN_146e9e080(void)

void FUN_146e9e080(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  if ((param_5 + param_4 <= (int)param_1[3]) &&
     (iVar1 = (**(code **)(*param_2 + 0x60))(param_2), param_3 < iVar1)) {
    lVar2 = (longlong)(param_5 + param_3);
    lVar3 = (longlong)param_3;
    do {
      if ((int)param_1[3] <= lVar2) {
        return;
      }
      if (param_4 <= lVar3) {
        return;
      }
      *(undefined4 *)(param_1[2] + lVar2 * 4) = *(undefined4 *)(param_2[2] + lVar3 * 4);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 1;
      iVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    } while (lVar3 < iVar1);
  }
  return;
}



// FUNCTION 146e9e120 FUN_146e9e120 body=249 status=ok
// SIG undefined FUN_146e9e120(void)

void FUN_146e9e120(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar4 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar7 = piVar1[uVar4 - 1];
      for (; uVar4 != 1; uVar4 = uVar4 - 1) {
        iVar6 = piVar1[uVar4 - 1];
        iVar3 = iVar7;
        if ((iVar6 != piVar1[uVar4 - 2] + 1) &&
           (iVar5 = (iVar7 - iVar6) + 1, iVar3 = piVar1[uVar4 - 2], iVar5 != 0)) {
          iVar3 = *(int *)(param_1 + 0x18);
          iVar7 = iVar3 - (iVar7 + 1);
          if (iVar7 != 0) {
            pvVar2 = (void *)((longlong)iVar6 * 4 + *(longlong *)(param_1 + 0x10));
            memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar5 * 4),(longlong)iVar7 << 2);
            iVar3 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar3 - iVar5;
          piVar1 = (int *)*param_2;
          iVar3 = piVar1[uVar4 - 2];
        }
        iVar7 = iVar3;
      }
      iVar6 = (iVar7 - *piVar1) + 1;
      if (iVar6 != 0) {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar7 = iVar3 - (iVar7 + 1);
        if (iVar7 != 0) {
          pvVar2 = (void *)((longlong)*piVar1 * 4 + *(longlong *)(param_1 + 0x10));
          memmove(pvVar2,(void *)((longlong)pvVar2 + (longlong)iVar6 * 4),(longlong)iVar7 << 2);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 - iVar6;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_14481578e(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146e9e238 FUN_146e9e238 body=57 status=ok
// SIG undefined FUN_146e9e238(void)

undefined8 * FUN_146e9e238(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f62cf0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9e272 FUN_146e9e272 body=143 status=ok
// SIG undefined FUN_146e9e272(void)

void FUN_146e9e272(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e9e302(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146e9e388(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146e9e3e8(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e9e302 FUN_146e9e302 body=132 status=ok
// SIG undefined FUN_146e9e302(void)

void FUN_146e9e302(longlong param_1,int param_2)

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



// FUNCTION 146e9e388 FUN_146e9e388 body=95 status=ok
// SIG undefined FUN_146e9e388(void)

void FUN_146e9e388(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146d8d0e9(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e9e3e8 FUN_146e9e3e8 body=63 status=ok
// SIG undefined FUN_146e9e3e8(void)

void FUN_146e9e3e8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e9e428(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146e9e428 FUN_146e9e428 body=97 status=ok
// SIG undefined FUN_146e9e428(void)

ulonglong FUN_146e9e428(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146e9e496 FUN_146e9e496 body=38 status=ok
// SIG undefined FUN_146e9e496(void)

void FUN_146e9e496(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_146d99ffe(param_1 + 0x10);
  return;
}



// FUNCTION 146e9e4be FUN_146e9e4be body=290 status=ok
// SIG undefined FUN_146e9e4be(void)

void FUN_146e9e4be(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = (**(code **)(*param_1 + 0x60))();
  local_58 = (void *)0x0;
  uStack_50._4_4_ = 0;
  uStack_50._0_4_ = uVar2;
  if (uVar2 != 0) {
    FUN_1411054d8(&local_58);
    memset(local_58,0,(longlong)(int)uVar2 << 3);
    if (0 < (int)uVar2) {
      lVar5 = 0;
      uVar4 = 0;
      do {
        puVar3 = (undefined8 *)((longlong)*(int *)(*param_2 + uVar4 * 4) * 8 + param_1[2]);
        if ((undefined8 *)((longlong)local_58 + lVar5) != puVar3) {
          lVar1 = *(longlong *)((longlong)local_58 + uVar4 * 8);
          *(undefined8 *)((longlong)local_58 + uVar4 * 8) = *puVar3;
          *puVar3 = 0;
          if (lVar1 != 0) {
            FUN_140191cfe(lVar1);
            FUN_1400020a8(lVar1);
          }
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
      } while (uVar2 != uVar4);
    }
  }
  local_48 = (void *)param_1[2];
  uStack_40 = param_1[3];
  param_1[2] = (longlong)local_58;
  *(uint *)(param_1 + 3) = (uint)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  local_58 = local_48;
  uStack_50 = uStack_40;
  FUN_140191cbb(local_48,uStack_40 & 0xffffffff);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9e5ec FUN_146e9e5ec body=69 status=ok
// SIG undefined FUN_146e9e5ec(void)

undefined8 * FUN_146e9e5ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62700;
  FUN_140191cbb(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9e632 FUN_146e9e632 body=122 status=ok
// SIG undefined FUN_146e9e632(void)

void FUN_146e9e632(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9e6ae FUN_146e9e6ae body=296 status=ok
// SIG undefined FUN_146e9e6ae(void)

void FUN_146e9e6ae(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar7 != 0) {
    if (0 < (int)*(uint *)(param_2 + 1)) {
      piVar1 = (int *)*param_2;
      iVar2 = piVar1[uVar7 - 1];
      for (; uVar7 != 1; uVar7 = uVar7 - 1) {
        iVar5 = piVar1[uVar7 - 1];
        iVar6 = iVar2;
        if ((iVar5 != piVar1[uVar7 - 2] + 1) &&
           (iVar3 = (iVar2 - iVar5) + 1, iVar6 = piVar1[uVar7 - 2], iVar3 != 0)) {
          pvVar4 = (void *)((longlong)iVar5 * 8 + *(longlong *)(param_1 + 0x10));
          FUN_140191cbb(pvVar4,iVar3);
          iVar5 = *(int *)(param_1 + 0x18);
          iVar2 = iVar5 - (iVar2 + 1);
          if (iVar2 != 0) {
            memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar3 * 8),(longlong)iVar2 << 3);
            iVar5 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar5 - iVar3;
          piVar1 = (int *)*param_2;
          iVar6 = piVar1[uVar7 - 2];
        }
        iVar2 = iVar6;
      }
      iVar5 = (iVar2 - *piVar1) + 1;
      if (iVar5 != 0) {
        pvVar4 = (void *)((longlong)*piVar1 * 8 + *(longlong *)(param_1 + 0x10));
        FUN_140191cbb(pvVar4,iVar5);
        iVar6 = *(int *)(param_1 + 0x18);
        iVar2 = iVar6 - (iVar2 + 1);
        if (iVar2 != 0) {
          memmove(pvVar4,(void *)((longlong)pvVar4 + (longlong)iVar5 * 8),(longlong)iVar2 << 3);
          iVar6 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar6 - iVar5;
      }
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
      FUN_146d99ffe(param_1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 146e9e7de FUN_146e9e7de body=185 status=ok
// SIG undefined FUN_146e9e7de(void)

void FUN_146e9e7de(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_146d9ab91(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9e89e FUN_146e9e89e body=58 status=ok
// SIG undefined FUN_146e9e89e(void)

void FUN_146e9e89e(longlong param_1)

{
  FUN_140191cbb(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  FUN_146d99ffe(param_1 + 0x10,0);
  return;
}



// FUNCTION 146e9e8d8 FUN_146e9e8d8 body=69 status=ok
// SIG undefined FUN_146e9e8d8(void)

undefined8 * FUN_146e9e8d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62700;
  FUN_140191cbb(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9e91e FUN_146e9e91e body=63 status=ok
// SIG undefined FUN_146e9e91e(void)

void FUN_146e9e91e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e9e95e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146e9e95e FUN_146e9e95e body=97 status=ok
// SIG undefined FUN_146e9e95e(void)

ulonglong FUN_146e9e95e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146e9e9c0 FUN_146e9e9c0 body=105 status=ok
// SIG undefined FUN_146e9e9c0(void)

void FUN_146e9e9c0(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = (code *)*param_2;
  plVar4 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar4 = param_2 + 4;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146e9ea1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 146e9ea2a FUN_146e9ea2a body=42 status=ok
// SIG undefined FUN_146e9ea2a(void)

longlong FUN_146e9ea2a(longlong param_1,int param_2)

{
  FUN_14580549e(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9ea7e FUN_146e9ea7e body=59 status=ok
// SIG undefined FUN_146e9ea7e(void)

longlong FUN_146e9ea7e(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0xe8;
  do {
    FUN_14580549e(param_1 + lVar1);
    lVar1 = lVar1 + -0x70;
  } while (lVar1 != -0x68);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9eb34 FUN_146e9eb34 body=293 status=ok
// SIG undefined FUN_146e9eb34(void)

undefined8 * FUN_146e9eb34(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f617c0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xffefffffffffffff;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x80;
  *(undefined4 *)(puVar1 + 10) = 0xffffffff;
  param_1[1] = puVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xffefffffffffffff;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x80;
  *(undefined4 *)(puVar1 + 10) = 0xffffffff;
  param_1[3] = puVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xffefffffffffffff;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x80;
  *(undefined4 *)(puVar1 + 10) = 0xffffffff;
  param_1[5] = puVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = param_1 + 1;
  param_1[8] = param_1 + 3;
  param_1[9] = param_1 + 5;
  return param_1;
}



// FUNCTION 146e9ec5a FUN_146e9ec5a body=81 status=ok
// SIG undefined FUN_146e9ec5a(void)

longlong FUN_146e9ec5a(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x30;
  do {
    lVar1 = *(longlong *)(param_1 + -8 + lVar2);
    if (lVar1 != 0) {
      FUN_14580549e(lVar1);
      FUN_1400020a8(lVar1);
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9ed00 FUN_146e9ed00 body=317 status=ok
// SIG undefined FUN_146e9ed00(void)

undefined4 *
FUN_146e9ed00(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146e9ee3e(param_1,local_40);
  puVar1 = (ulonglong *)param_3[1];
  uVar2 = *(ulonglong *)*param_3;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar5) {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = *(int *)(param_1 + 0x48) - 1U & (uVar5 >> 0x10 ^ uVar5);
    *(uint *)((longlong)local_38 + 0x14) = uVar5;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(local_38 + 2) =
         *(undefined4 *)
          (lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar3 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar3 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_146e9ef24(param_1);
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9ee3e FUN_146e9ee3e body=230 status=ok
// SIG undefined FUN_146e9ee3e(void)

int * FUN_146e9ee3e(longlong *param_1,int *param_2)

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



// FUNCTION 146e9ef24 FUN_146e9ef24 body=474 status=ok
// SIG undefined FUN_146e9ef24(void)

void FUN_146e9ef24(longlong *param_1)

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



// FUNCTION 146e9f100 FUN_146e9f100 body=105 status=ok
// SIG undefined FUN_146e9f100(void)

ulonglong FUN_146e9f100(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_146e9f147;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146e9f16a(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_146e9f147:
  return uVar4 & 0xffffffff;
}



// FUNCTION 146e9f16a FUN_146e9f16a body=132 status=ok
// SIG undefined FUN_146e9f16a(void)

void FUN_146e9f16a(longlong param_1,int param_2)

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



// FUNCTION 146e9f1f0 FUN_146e9f1f0 body=191 status=ok
// SIG undefined FUN_146e9f1f0(void)

void FUN_146e9f1f0(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  if ((int)param_1[9] != 0) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (longlong)(int)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    while (iVar5 = iVar4, iVar5 != -1) {
      lVar1 = *param_1;
      iVar4 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
      if (*(ulonglong *)(lVar1 + (longlong)iVar5 * 0x18) == param_2) {
        do {
          if (*(longlong *)(lVar1 + 8 + (longlong)iVar5 * 0x18) == param_3) {
            FUN_146e9f336(param_1);
          }
          do {
            iVar5 = iVar4;
            if (iVar5 == -1) {
              return;
            }
            lVar1 = *param_1;
            iVar4 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
          } while (*(ulonglong *)(lVar1 + (longlong)iVar5 * 0x18) != param_2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 146e9f2b0 FUN_146e9f2b0 body=132 status=ok
// SIG undefined FUN_146e9f2b0(void)

void FUN_146e9f2b0(longlong param_1,int param_2)

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



// FUNCTION 146e9f336 FUN_146e9f336 body=201 status=ok
// SIG undefined FUN_146e9f336(void)

void FUN_146e9f336(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar1 = lVar3 + (longlong)param_2 * 0x18;
  lVar9 = (longlong)*(int *)(lVar1 + 0x14);
  iVar8 = *(int *)((longlong)plVar6 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0x10 + lVar9 * 0x18);
    } while (iVar8 != param_2);
    puVar5 = (undefined4 *)(lVar3 + lVar9 * 0x18 + 0x10);
  }
  *puVar5 = *(undefined4 *)(lVar1 + 0x10);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar5 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar5 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  puVar5[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 146e9f400 FUN_146e9f400 body=107 status=ok
// SIG undefined FUN_146e9f400(void)

void FUN_146e9f400(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146e9f46c(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 146e9f46c FUN_146e9f46c body=132 status=ok
// SIG undefined FUN_146e9f46c(void)

void FUN_146e9f46c(longlong param_1,int param_2)

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



// FUNCTION 146e9f4f2 FUN_146e9f4f2 body=113 status=ok
// SIG undefined FUN_146e9f4f2(void)

void FUN_146e9f4f2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x120,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x120)) {
      uVar2 = uVar1 / 0x120 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x120,8);
  }
  return;
}



// FUNCTION 146e9f564 FUN_146e9f564 body=413 status=ok
// SIG undefined FUN_146e9f564(void)

void FUN_146e9f564(longlong *param_1,uint param_2)

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



// FUNCTION 146e9f702 FUN_146e9f702 body=477 status=ok
// SIG undefined FUN_146e9f702(void)

void FUN_146e9f702(longlong *param_1)

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



// FUNCTION 146e9f8e0 FUN_146e9f8e0 body=312 status=ok
// SIG undefined FUN_146e9f8e0(void)

undefined4 * FUN_146e9f8e0(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_146e9fa1a(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_146e9fb00(param_1,uVar3,local_40,&local_4c);
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
      FUN_146e9f702(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e9fa1a FUN_146e9fa1a body=229 status=ok
// SIG undefined FUN_146e9fa1a(void)

int * FUN_146e9fa1a(longlong *param_1,int *param_2)

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



// FUNCTION 146e9fb00 FUN_146e9fb00 body=124 status=ok
// SIG undefined FUN_146e9fb00(void)

undefined8 FUN_146e9fb00(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_146e9fb7c(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146e9fb7c FUN_146e9fb7c body=114 status=ok
// SIG undefined FUN_146e9fb7c(void)

void FUN_146e9fb7c(longlong *param_1,int param_2)

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



// FUNCTION 146e9fbee FUN_146e9fbee body=52 status=ok
// SIG undefined FUN_146e9fbee(void)

void FUN_146e9fbee(longlong *param_1)

{
  FUN_146e9fc22();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e9fc22 FUN_146e9fc22 body=89 status=ok
// SIG undefined FUN_146e9fc22(void)

void FUN_146e9fc22(longlong param_1)

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



// FUNCTION 146e9fc7c FUN_146e9fc7c body=105 status=ok
// SIG undefined FUN_146e9fc7c(void)

void FUN_146e9fc7c(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = (code *)*param_2;
  plVar4 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar4 = param_2 + 4;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146e9fcd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 146e9fce6 FUN_146e9fce6 body=105 status=ok
// SIG undefined FUN_146e9fce6(void)

void FUN_146e9fce6(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = (code *)*param_2;
  plVar4 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar4 = param_2 + 4;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146e9fd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 146e9fd50 FUN_146e9fd50 body=42 status=ok
// SIG undefined FUN_146e9fd50(void)

longlong FUN_146e9fd50(longlong param_1,int param_2)

{
  FUN_145847570(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9fda4 FUN_146e9fda4 body=59 status=ok
// SIG undefined FUN_146e9fda4(void)

longlong FUN_146e9fda4(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0xf8;
  do {
    FUN_145847570(param_1 + lVar1);
    lVar1 = lVar1 + -0x78;
  } while (lVar1 != -0x70);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e9fe5a FUN_146e9fe5a body=298 status=ok
// SIG undefined FUN_146e9fe5a(void)

undefined8 * FUN_146e9fe5a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f61930;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0xffefffffffffffff;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0x80;
  *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
  param_1[1] = puVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0xffefffffffffffff;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0x80;
  *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
  param_1[3] = puVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0xffefffffffffffff;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0x80;
  *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
  param_1[5] = puVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = param_1 + 1;
  param_1[8] = param_1 + 3;
  param_1[9] = param_1 + 5;
  return param_1;
}



// FUNCTION 146e9ff84 FUN_146e9ff84 body=81 status=ok
// SIG undefined FUN_146e9ff84(void)

longlong FUN_146e9ff84(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x30;
  do {
    lVar1 = *(longlong *)(param_1 + -8 + lVar2);
    if (lVar1 != 0) {
      FUN_145847570(lVar1);
      FUN_1400020a8(lVar1);
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea002a FUN_146ea002a body=353 status=ok
// SIG undefined FUN_146ea002a(void)

void FUN_146ea002a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  BOOLEAN BVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (BVar2 != '\0') {
    local_78 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    local_60 = &local_78;
    local_58 = param_2;
    FUN_1407ece1a(param_1 + 0xf8,&local_80,&local_60,0);
    local_78 = 0;
    uStack_70 = 0;
    cVar3 = (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_78);
    lVar1 = local_78;
    if (cVar3 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))();
    }
    else {
      lVar4 = (longlong)(int)uStack_70;
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          local_80 = *(longlong *)(lVar1 + lVar5);
          local_60 = &local_80;
          local_58 = param_2;
          FUN_146e9ed00(param_1 + 0x58,local_4c,&local_60,0);
          lVar5 = lVar5 + 8;
        } while (lVar4 * 8 != lVar5);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
    if (local_78 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
  FUN_146e9f100(param_1 + 0x150,param_2);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000146ea0191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
  return;
}



// FUNCTION 146ea019e FUN_146ea019e body=801 status=ok
// SIG undefined FUN_146ea019e(void)

void FUN_146ea019e(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  BOOLEAN BVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  ulonglong *puVar18;
  longlong lVar19;
  undefined1 auStack_e8 [40];
  PSRWLOCK local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  SRWLock = (PSRWLOCK)(param_1 + 0x148);
  local_70 = param_2;
  BVar11 = TryAcquireSRWLockExclusive(SRWLock);
  if (BVar11 == '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
    FUN_146e9f400(param_1 + 0x160,&local_70);
    if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
                    /* WARNING: Could not recover jumptable at 0x000146ea04c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  local_88 = 0;
  uStack_80 = 0;
  lVar17 = param_1 + 0x68;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar17;
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar16 = *(int *)(param_1 + 0x80);
  }
  uStack_90 = CONCAT44(uStack_4c,uStack_50);
  local_98 = local_58;
  iStack_94 = iStack_54;
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_c0 = SRWLock;
  local_b8 = param_1;
  local_b0 = plVar1;
  if ((iStack_54 != iVar16) || (uStack_60 != lVar17)) {
    do {
      lVar15 = *local_b0;
      lVar13 = (longlong)iStack_94;
      plVar5 = *(longlong **)(lVar15 + 8 + lVar13 * 0x18);
      if ((plVar5 != (longlong *)0x0) &&
         (uVar14 = (**(code **)(*plVar5 + 0x18))(), uVar10 = uStack_80, uVar14 == param_2)) {
        lVar19 = (longlong)(int)uStack_80;
        uVar12 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar12);
        if (uStack_80._4_4_ < uVar12) {
          FUN_146e9f2b0(&local_88,uVar10 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(lVar15 + lVar13 * 0x18);
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar3 = (undefined4 *)(local_88 + lVar19 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
      }
      local_98 = local_98 & ~uStack_a4;
      FUN_1449c0562(&local_a8);
      lVar15 = local_88;
    } while (local_b0 != plVar1 || (CONCAT44(uStack_9c,uStack_a0) != lVar17 || iStack_94 != iVar16))
    ;
    lVar17 = (longlong)(int)uStack_80;
    if (lVar17 != 0) {
      lVar13 = 0;
      do {
        FUN_146e9f1f0(plVar1,*(undefined8 *)(lVar15 + lVar13),*(undefined8 *)(lVar15 + 8 + lVar13));
        lVar13 = lVar13 + 0x10;
      } while (lVar17 * 0x10 != lVar13);
    }
  }
  lVar17 = local_b8;
  FUN_140652a86(local_b8 + 0xa8,param_2);
  if (*(int *)(lVar17 + 0x100) != *(int *)(lVar17 + 300)) {
    uVar12 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    lVar15 = lVar17 + 0x130;
    if (*(longlong *)(lVar17 + 0x138) != 0) {
      lVar15 = *(longlong *)(lVar17 + 0x138);
    }
    iVar16 = *(int *)(lVar15 + (ulonglong)
                               (*(int *)(lVar17 + 0x140) - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
    if (iVar16 != -1) {
      do {
        puVar4 = (ulonglong *)(*(longlong *)(lVar17 + 0xf8) + (longlong)iVar16 * 0x18);
        if (*puVar4 == param_2) {
          puVar18 = puVar4 + 1;
          if (puVar18 != (ulonglong *)0x0 && puVar4 != (ulonglong *)0x0) {
            puVar6 = (undefined8 *)*puVar18;
            if (puVar6 != (undefined8 *)0x0) {
              (**(code **)*puVar6)(puVar6,1);
            }
            *puVar18 = 0;
            FUN_140652a86((longlong *)(lVar17 + 0xf8),param_2);
          }
          break;
        }
        iVar16 = (int)puVar4[2];
      } while (iVar16 != -1);
    }
  }
  ReleaseSRWLockExclusive(local_c0);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 146ea04d6 FUN_146ea04d6 body=105 status=ok
// SIG undefined FUN_146ea04d6(void)

void FUN_146ea04d6(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = (code *)*param_2;
  plVar4 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar4 = param_2 + 4;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146ea0530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 146ea0540 FUN_146ea0540 body=105 status=ok
// SIG undefined FUN_146ea0540(void)

void FUN_146ea0540(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = (code *)*param_2;
  plVar4 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar4 = param_2 + 4;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146ea059a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 146ea05aa FUN_146ea05aa body=42 status=ok
// SIG undefined FUN_146ea05aa(void)

longlong FUN_146ea05aa(longlong param_1,int param_2)

{
  FUN_145847ada(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea05fe FUN_146ea05fe body=59 status=ok
// SIG undefined FUN_146ea05fe(void)

longlong FUN_146ea05fe(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0xe8;
  do {
    FUN_145847ada(param_1 + lVar1);
    lVar1 = lVar1 + -0x70;
  } while (lVar1 != -0x68);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea06b4 FUN_146ea06b4 body=293 status=ok
// SIG undefined FUN_146ea06b4(void)

undefined8 * FUN_146ea06b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f61aa0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xffefffffffffffff;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x80;
  *(undefined4 *)(puVar1 + 10) = 0xffffffff;
  param_1[1] = puVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xffefffffffffffff;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x80;
  *(undefined4 *)(puVar1 + 10) = 0xffffffff;
  param_1[3] = puVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xffefffffffffffff;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x80;
  *(undefined4 *)(puVar1 + 10) = 0xffffffff;
  param_1[5] = puVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = param_1 + 1;
  param_1[8] = param_1 + 3;
  param_1[9] = param_1 + 5;
  return param_1;
}



// FUNCTION 146ea07da FUN_146ea07da body=81 status=ok
// SIG undefined FUN_146ea07da(void)

longlong FUN_146ea07da(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x30;
  do {
    lVar1 = *(longlong *)(param_1 + -8 + lVar2);
    if (lVar1 != 0) {
      FUN_145847ada(lVar1);
      FUN_1400020a8(lVar1);
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea0880 FUN_146ea0880 body=113 status=ok
// SIG undefined FUN_146ea0880(void)

void FUN_146ea0880(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,8);
  }
  return;
}



// FUNCTION 146ea08f2 FUN_146ea08f2 body=105 status=ok
// SIG undefined FUN_146ea08f2(void)

void FUN_146ea08f2(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = (code *)*param_2;
  plVar4 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar4 = param_2 + 4;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146ea094c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 146ea095c FUN_146ea095c body=105 status=ok
// SIG undefined FUN_146ea095c(void)

void FUN_146ea095c(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = (code *)*param_2;
  plVar4 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar4 = param_2 + 4;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146ea09b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 146ea09c6 FUN_146ea09c6 body=47 status=ok
// SIG undefined FUN_146ea09c6(void)

longlong FUN_146ea09c6(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea0a1e FUN_146ea0a1e body=61 status=ok
// SIG undefined FUN_146ea0a1e(void)

longlong FUN_146ea0a1e(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0x30;
  do {
    if (*(longlong *)(param_1 + -8 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea0ac2 FUN_146ea0ac2 body=153 status=ok
// SIG undefined FUN_146ea0ac2(void)

undefined8 * FUN_146ea0ac2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f61c10;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[1] = puVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[3] = puVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[5] = puVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = param_1 + 1;
  param_1[8] = param_1 + 3;
  param_1[9] = param_1 + 5;
  return param_1;
}



// FUNCTION 146ea0b5c FUN_146ea0b5c body=38 status=ok
// SIG undefined FUN_146ea0b5c(void)

undefined8 FUN_146ea0b5c(undefined8 param_1,int param_2)

{
  FUN_146ea0bd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea0bd6 FUN_146ea0bd6 body=60 status=ok
// SIG undefined FUN_146ea0bd6(void)

void FUN_146ea0bd6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0x30;
  do {
    plVar1 = *(longlong **)(param_1 + -8 + lVar2);
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  return;
}



// FUNCTION 146ea0c12 FUN_146ea0c12 body=48 status=ok
// SIG undefined FUN_146ea0c12(void)

void FUN_146ea0c12(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146ea0c42 FUN_146ea0c42 body=105 status=ok
// SIG undefined FUN_146ea0c42(void)

void FUN_146ea0c42(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = (code *)*param_2;
  plVar4 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar4 = param_2 + 4;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146ea0c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 146ea0cac FUN_146ea0cac body=105 status=ok
// SIG undefined FUN_146ea0cac(void)

void FUN_146ea0cac(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = (code *)*param_2;
  plVar4 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar4 = param_2 + 4;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146ea0d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 146ea0d16 FUN_146ea0d16 body=42 status=ok
// SIG undefined FUN_146ea0d16(void)

longlong FUN_146ea0d16(longlong param_1,int param_2)

{
  FUN_1458f3d52(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea0d6a FUN_146ea0d6a body=59 status=ok
// SIG undefined FUN_146ea0d6a(void)

longlong FUN_146ea0d6a(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0xe8;
  do {
    FUN_1458f3d52(param_1 + lVar1);
    lVar1 = lVar1 + -0x70;
  } while (lVar1 != -0x68);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea0e20 FUN_146ea0e20 body=293 status=ok
// SIG undefined FUN_146ea0e20(void)

undefined8 * FUN_146ea0e20(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f61d80;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xffefffffffffffff;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x80;
  *(undefined4 *)(puVar1 + 10) = 0xffffffff;
  param_1[1] = puVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xffefffffffffffff;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x80;
  *(undefined4 *)(puVar1 + 10) = 0xffffffff;
  param_1[3] = puVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0xffefffffffffffff;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0x80;
  *(undefined4 *)(puVar1 + 10) = 0xffffffff;
  param_1[5] = puVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = param_1 + 1;
  param_1[8] = param_1 + 3;
  param_1[9] = param_1 + 5;
  return param_1;
}



// FUNCTION 146ea0f46 FUN_146ea0f46 body=81 status=ok
// SIG undefined FUN_146ea0f46(void)

longlong FUN_146ea0f46(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x30;
  do {
    lVar1 = *(longlong *)(param_1 + -8 + lVar2);
    if (lVar1 != 0) {
      FUN_1458f3d52(lVar1);
      FUN_1400020a8(lVar1);
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea0fec FUN_146ea0fec body=109 status=ok
// SIG undefined FUN_146ea0fec(void)

void FUN_146ea0fec(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 146ea105a FUN_146ea105a body=105 status=ok
// SIG undefined FUN_146ea105a(void)

void FUN_146ea105a(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = (code *)*param_2;
  plVar4 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar4 = param_2 + 4;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146ea10b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 146ea10c4 FUN_146ea10c4 body=105 status=ok
// SIG undefined FUN_146ea10c4(void)

void FUN_146ea10c4(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  pcVar1 = (code *)*param_2;
  plVar4 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar4 = param_2 + 4;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(uVar3,uVar2);
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146ea111e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 146ea112e FUN_146ea112e body=42 status=ok
// SIG undefined FUN_146ea112e(void)

longlong FUN_146ea112e(longlong param_1,int param_2)

{
  FUN_1458f90c8(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea1182 FUN_146ea1182 body=59 status=ok
// SIG undefined FUN_146ea1182(void)

longlong FUN_146ea1182(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0xf8;
  do {
    FUN_1458f90c8(param_1 + lVar1);
    lVar1 = lVar1 + -0x78;
  } while (lVar1 != -0x70);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ea1238 FUN_146ea1238 body=298 status=ok
// SIG undefined FUN_146ea1238(void)

undefined8 * FUN_146ea1238(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f61ef0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0xffefffffffffffff;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0x80;
  *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
  param_1[1] = puVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0xffefffffffffffff;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0x80;
  *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
  param_1[3] = puVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  *puVar1 = 0xffefffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0xffefffffffffffff;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0x80;
  *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
  param_1[5] = puVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = param_1 + 1;
  param_1[8] = param_1 + 3;
  param_1[9] = param_1 + 5;
  return param_1;
}



// FUNCTION 146ea1362 FUN_146ea1362 body=81 status=ok
// SIG undefined FUN_146ea1362(void)

longlong FUN_146ea1362(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x30;
  do {
    lVar1 = *(longlong *)(param_1 + -8 + lVar2);
    if (lVar1 != 0) {
      FUN_1458f90c8(lVar1);
      FUN_1400020a8(lVar1);
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


