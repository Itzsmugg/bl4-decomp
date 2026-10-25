// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144afe7fe FUN_144afe7fe body=293 status=ok
// SIG undefined FUN_144afe7fe(void)

double * FUN_144afe7fe(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = *param_1;
  dVar2 = param_1[1];
  dVar1 = 0.0;
  if ((((dVar3 != 0.0) || (NAN(dVar3))) || (dVar2 != 0.0)) || (NAN(dVar2))) {
    dVar1 = atan2(dVar2,dVar3);
    dVar1 = dVar1 * 0.5;
    dVar3 = *param_1;
    dVar2 = param_1[1];
  }
  dVar4 = SQRT(dVar3 * dVar3 + dVar2 * dVar2);
  dVar3 = param_1[2];
  dVar2 = 0.0;
  if (((dVar3 != 0.0) || (NAN(dVar3))) || ((dVar4 != 0.0 || (NAN(dVar4))))) {
    dVar2 = atan2(dVar3,dVar4);
    dVar2 = dVar2 * 0.5;
  }
  dVar3 = sin(dVar2);
  dVar2 = cos(dVar2);
  dVar4 = sin(dVar1);
  dVar1 = cos(dVar1);
  *param_2 = dVar3 * dVar4;
  param_2[1] = -dVar3 * dVar1;
  param_2[2] = dVar4 * dVar2;
  param_2[3] = dVar2 * dVar1;
  return param_2;
}



// FUNCTION 144afe924 FUN_144afe924 body=65 status=ok
// SIG undefined FUN_144afe924(void)

ulonglong FUN_144afe924(double *param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  iVar1 = _finite(*param_1);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (iVar1 != 0) {
    iVar1 = _finite(param_1[1]);
    if (iVar1 != 0) {
      iVar1 = _finite(param_1[2]);
      uVar2 = CONCAT71(uVar3,iVar1 == 0);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 144afe965 FUN_144afe965 body=413 status=ok
// SIG undefined FUN_144afe965(void)

void FUN_144afe965(longlong *param_1,double *param_2)

{
  longlong *plVar1;
  double *pdVar2;
  longlong lVar3;
  undefined1 auStack_58 [36];
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(*param_1 + 8);
  if (*(int *)((longlong)plVar1 + 0x44) < 0x3ec) {
    FUN_144aa025c(*param_1,&local_2c);
    FUN_144aa025c(*param_1,&local_30);
    FUN_144aa025c(*param_1,&local_34);
    *param_2 = (double)local_2c;
    param_2[1] = (double)local_30;
    param_2[2] = (double)local_34;
  }
  else {
    pdVar2 = *(double **)plVar1[1];
    if ((double *)((longlong *)plVar1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar1 + 0x170))(plVar1,param_2,8);
      }
      else {
        thunk_FUN_146821949(plVar1,param_2);
      }
    }
    else {
      *param_2 = *pdVar2;
      *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 8;
    }
    plVar1 = *(longlong **)(*param_1 + 8);
    pdVar2 = *(double **)plVar1[1];
    if ((double *)((longlong *)plVar1[1])[1] < pdVar2 + 1) {
      if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,8);
      }
      else {
        thunk_FUN_146821949();
      }
    }
    else {
      param_2[1] = *pdVar2;
      *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 8;
    }
    lVar3 = *(longlong *)(*param_1 + 8);
    pdVar2 = (double *)**(longlong **)(lVar3 + 8);
    if ((double *)(*(longlong **)(lVar3 + 8))[1] < pdVar2 + 1) {
      if ((*(byte *)(lVar3 + 0x2a) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    param_2[2] = *pdVar2;
    **(longlong **)(lVar3 + 8) = **(longlong **)(lVar3 + 8) + 8;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144afeb32 FUN_144afeb32 body=324 status=ok
// SIG undefined FUN_144afeb32(void)

void FUN_144afeb32(float *param_1,float *param_2,float *param_3)

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
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  fVar9 = param_2[8];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  fVar13 = param_2[0xc];
  fVar14 = param_2[0xd];
  fVar15 = param_2[0xe];
  fVar16 = param_2[0xf];
  fVar17 = *param_3;
  fVar18 = param_3[1];
  fVar19 = param_3[2];
  fVar20 = param_3[3];
  fVar21 = param_3[4];
  fVar22 = param_3[5];
  fVar23 = param_3[6];
  fVar24 = param_3[7];
  fVar25 = param_3[8];
  fVar26 = param_3[9];
  fVar27 = param_3[10];
  fVar28 = param_3[0xb];
  fVar29 = param_3[0xc];
  fVar30 = param_3[0xd];
  fVar31 = param_3[0xe];
  fVar32 = param_3[0xf];
  *param_1 = fVar4 * fVar29 + fVar3 * fVar25 + fVar2 * fVar21 + fVar1 * fVar17;
  param_1[1] = fVar4 * fVar30 + fVar3 * fVar26 + fVar2 * fVar22 + fVar1 * fVar18;
  param_1[2] = fVar4 * fVar31 + fVar3 * fVar27 + fVar2 * fVar23 + fVar1 * fVar19;
  param_1[3] = fVar4 * fVar32 + fVar3 * fVar28 + fVar2 * fVar24 + fVar1 * fVar20;
  param_1[4] = fVar8 * fVar29 + fVar7 * fVar25 + fVar6 * fVar21 + fVar5 * fVar17;
  param_1[5] = fVar8 * fVar30 + fVar7 * fVar26 + fVar6 * fVar22 + fVar5 * fVar18;
  param_1[6] = fVar8 * fVar31 + fVar7 * fVar27 + fVar6 * fVar23 + fVar5 * fVar19;
  param_1[7] = fVar8 * fVar32 + fVar7 * fVar28 + fVar6 * fVar24 + fVar5 * fVar20;
  param_1[8] = fVar12 * fVar29 + fVar11 * fVar25 + fVar10 * fVar21 + fVar9 * fVar17;
  param_1[9] = fVar12 * fVar30 + fVar11 * fVar26 + fVar10 * fVar22 + fVar9 * fVar18;
  param_1[10] = fVar12 * fVar31 + fVar11 * fVar27 + fVar10 * fVar23 + fVar9 * fVar19;
  param_1[0xb] = fVar12 * fVar32 + fVar11 * fVar28 + fVar10 * fVar24 + fVar9 * fVar20;
  param_1[0xc] = fVar16 * fVar29 + fVar15 * fVar25 + fVar14 * fVar21 + fVar13 * fVar17;
  param_1[0xd] = fVar16 * fVar30 + fVar15 * fVar26 + fVar14 * fVar22 + fVar13 * fVar18;
  param_1[0xe] = fVar16 * fVar31 + fVar15 * fVar27 + fVar14 * fVar23 + fVar13 * fVar19;
  param_1[0xf] = fVar16 * fVar32 + fVar15 * fVar28 + fVar14 * fVar24 + fVar13 * fVar20;
  return;
}



// FUNCTION 144afec76 FUN_144afec76 body=246 status=ok
// SIG undefined FUN_144afec76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144afec76(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  
  fVar1 = ABS(*param_1);
  fVar2 = ABS(param_1[1]);
  auVar8._0_4_ = (int)(fVar1 * 1.2732395) + 1;
  auVar8._4_4_ = (int)(fVar2 * 1.2732395) + 1;
  auVar8._8_4_ = (int)(ABS(param_1[2]) * 1.2732395) + 1;
  auVar8._12_4_ = (int)(ABS(param_1[3]) * 1.2732395) + 1;
  auVar10 = pmovsxbd(in_XMM4,0xfefefefe);
  auVar10 = auVar10 & auVar8;
  auVar9 = auVar8 & _DAT_149934240;
  fVar3 = (float)auVar10._0_4_;
  fVar5 = (float)auVar10._4_4_;
  fVar6 = (float)auVar10._8_4_;
  fVar7 = (float)auVar10._12_4_;
  fVar1 = fVar3 * -0.78515625 + fVar1 + fVar3 * -0.00024187565 + fVar3 * -3.774895e-08;
  fVar2 = fVar5 * -0.78515625 + fVar2 + fVar5 * -0.00024187565 + fVar5 * -3.774895e-08;
  fVar3 = fVar6 * -0.78515625 + ABS(param_1[2]) + fVar6 * -0.00024187565 + fVar6 * -3.774895e-08;
  fVar5 = fVar7 * -0.78515625 + ABS(param_1[3]) + fVar7 * -0.00024187565 + fVar7 * -3.774895e-08;
  fVar6 = fVar1 * fVar1;
  fVar7 = fVar2 * fVar2;
  fVar11 = fVar3 * fVar3;
  fVar12 = fVar5 * fVar5;
  auVar4._0_4_ = fVar6 * -0.5 +
                 ((fVar6 * 2.4433157e-05 + -0.0013887316) * fVar6 + 0.041666646) * fVar6 * fVar6 +
                 1.0;
  auVar4._4_4_ = fVar7 * -0.5 +
                 ((fVar7 * 2.4433157e-05 + -0.0013887316) * fVar7 + 0.041666646) * fVar7 * fVar7 +
                 1.0;
  auVar4._8_4_ = fVar11 * -0.5 +
                 ((fVar11 * 2.4433157e-05 + -0.0013887316) * fVar11 + 0.041666646) * fVar11 * fVar11
                 + 1.0;
  auVar4._12_4_ =
       fVar12 * -0.5 +
       ((fVar12 * 2.4433157e-05 + -0.0013887316) * fVar12 + 0.041666646) * fVar12 * fVar12 + 1.0;
  auVar10._4_4_ = -(uint)(auVar9._4_4_ == 0);
  auVar10._0_4_ = -(uint)(auVar9._0_4_ == 0);
  auVar10._8_4_ = -(uint)(auVar9._8_4_ == 0);
  auVar10._12_4_ = -(uint)(auVar9._12_4_ == 0);
  auVar9._4_4_ = ((fVar7 * -0.00019515296 + 0.008332161) * fVar7 + -0.16666655) * fVar7 * fVar2 +
                 fVar2;
  auVar9._0_4_ = ((fVar6 * -0.00019515296 + 0.008332161) * fVar6 + -0.16666655) * fVar6 * fVar1 +
                 fVar1;
  auVar9._8_4_ = ((fVar11 * -0.00019515296 + 0.008332161) * fVar11 + -0.16666655) * fVar11 * fVar3 +
                 fVar3;
  auVar9._12_4_ =
       ((fVar12 * -0.00019515296 + 0.008332161) * fVar12 + -0.16666655) * fVar12 * fVar5 + fVar5;
  auVar10 = blendvps(auVar4,auVar9,auVar10);
  return CONCAT44(auVar10._4_4_ ^ (auVar8._4_4_ * 0x20000000 ^ (uint)param_1[1]) & 0x80000000,
                  auVar10._0_4_ ^ (auVar8._0_4_ * 0x20000000 ^ (uint)*param_1) & 0x80000000);
}



// FUNCTION 144afed6c FUN_144afed6c body=253 status=ok
// SIG undefined FUN_144afed6c(void)

ulonglong FUN_144afed6c(float *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar6;
  undefined1 auVar5 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  
  auVar2._8_4_ = 0xffffffff;
  auVar2._0_8_ = 0xffffffffffffffff;
  auVar2._12_4_ = 0xffffffff;
  auVar5._0_4_ = (int)(ABS(*param_1) * 1.2732395) + 1;
  auVar5._4_4_ = (int)(ABS(param_1[1]) * 1.2732395) + 1;
  auVar5._8_4_ = (int)(ABS(param_1[2]) * 1.2732395) + 1;
  auVar5._12_4_ = (int)(ABS(param_1[3]) * 1.2732395) + 1;
  auVar3 = pmovsxbd(auVar2,0xfefefefe);
  auVar5 = auVar5 & auVar3;
  fVar7 = (float)auVar5._0_4_;
  fVar9 = (float)auVar5._4_4_;
  fVar11 = (float)auVar5._8_4_;
  fVar13 = (float)auVar5._12_4_;
  uVar4 = auVar5._0_4_ + auVar3._0_4_;
  uVar6 = auVar5._4_4_ + auVar3._4_4_;
  fVar7 = fVar7 * -0.78515625 + ABS(*param_1) + fVar7 * -0.00024187565 + fVar7 * -3.774895e-08;
  fVar9 = fVar9 * -0.78515625 + ABS(param_1[1]) + fVar9 * -0.00024187565 + fVar9 * -3.774895e-08;
  fVar11 = fVar11 * -0.78515625 + ABS(param_1[2]) + fVar11 * -0.00024187565 + fVar11 * -3.774895e-08
  ;
  fVar13 = fVar13 * -0.78515625 + ABS(param_1[3]) + fVar13 * -0.00024187565 + fVar13 * -3.774895e-08
  ;
  fVar8 = fVar7 * fVar7;
  fVar10 = fVar9 * fVar9;
  fVar12 = fVar11 * fVar11;
  fVar14 = fVar13 * fVar13;
  auVar15._0_4_ =
       fVar8 * -0.5 +
       ((fVar8 * 2.4433157e-05 + -0.0013887316) * fVar8 + 0.041666646) * fVar8 * fVar8 + 1.0;
  auVar15._4_4_ =
       fVar10 * -0.5 +
       ((fVar10 * 2.4433157e-05 + -0.0013887316) * fVar10 + 0.041666646) * fVar10 * fVar10 + 1.0;
  auVar15._8_4_ =
       fVar12 * -0.5 +
       ((fVar12 * 2.4433157e-05 + -0.0013887316) * fVar12 + 0.041666646) * fVar12 * fVar12 + 1.0;
  auVar15._12_4_ =
       fVar14 * -0.5 +
       ((fVar14 * 2.4433157e-05 + -0.0013887316) * fVar14 + 0.041666646) * fVar14 * fVar14 + 1.0;
  auVar1._0_4_ = -(uint)((uVar4 & 2) == 0);
  auVar1._4_4_ = -(uint)((uVar6 & 2) == 0);
  auVar1._8_4_ = -(uint)((auVar5._8_4_ + auVar3._8_4_ & 2U) == 0);
  auVar1._12_4_ = -(uint)((auVar5._12_4_ + auVar3._12_4_ & 2U) == 0);
  auVar3._4_4_ = ((fVar10 * -0.00019515296 + 0.008332161) * fVar10 + -0.16666655) * fVar10 * fVar9 +
                 fVar9;
  auVar3._0_4_ = ((fVar8 * -0.00019515296 + 0.008332161) * fVar8 + -0.16666655) * fVar8 * fVar7 +
                 fVar7;
  auVar3._8_4_ = ((fVar12 * -0.00019515296 + 0.008332161) * fVar12 + -0.16666655) * fVar12 * fVar11
                 + fVar11;
  auVar3._12_4_ =
       ((fVar14 * -0.00019515296 + 0.008332161) * fVar14 + -0.16666655) * fVar14 * fVar13 + fVar13;
  auVar3 = blendvps(auVar15,auVar3,auVar1);
  return CONCAT44(uVar6 * 0x20000000,uVar4 * 0x20000000) & 0x8000000080000000 ^ 0x8000000080000000 ^
         auVar3._0_8_;
}



// FUNCTION 144afee69 GetCurrentThreadId body=7 status=ok
// SIG DWORD GetCurrentThreadId(void)

DWORD __stdcall GetCurrentThreadId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144afee69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



// FUNCTION 144afee70 TlsGetValue body=7 status=ok
// SIG LPVOID TlsGetValue(DWORD dwTlsIndex)

LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144afee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = TlsGetValue(dwTlsIndex);
  return pvVar1;
}



// FUNCTION 144afee78 FUN_144afee78 body=120 status=ok
// SIG undefined FUN_144afee78(void)

undefined4 * FUN_144afee78(undefined4 *param_1,double *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar3 = param_2[2] * 1.52587890625e-05 + 0.5;
  dVar5 = param_2[1] * 1.52587890625e-05 + 0.5;
  dVar1 = *param_2 * 1.52587890625e-05 + 0.5;
  auVar4._0_4_ = (float)dVar3;
  auVar4._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar4._8_8_ = 0;
  auVar6._0_4_ = (float)dVar5;
  auVar6._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar6._8_8_ = 0;
  auVar2._0_4_ = (float)dVar1;
  auVar2._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar2._8_8_ = 0;
  auVar2 = blendps(auVar2,ZEXT816(0),0xe);
  auVar2 = roundps(auVar2,auVar2,1);
  *param_1 = auVar2._0_4_;
  auVar6 = blendps(auVar6,ZEXT816(0),0xe);
  auVar2 = roundps(auVar2,auVar6,1);
  param_1[1] = auVar2._0_4_;
  auVar4 = blendps(auVar4,ZEXT816(0),0xe);
  auVar2 = roundps(auVar2,auVar4,1);
  param_1[2] = auVar2._0_4_;
  return param_1;
}



// FUNCTION 144afeef0 FUN_144afeef0 body=66 status=ok
// SIG undefined FUN_144afeef0(void)

void FUN_144afeef0(longlong param_1,undefined2 *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 8);
  puVar2 = *(undefined2 **)plVar1[1];
  if (puVar2 + 1 <= (undefined2 *)((undefined8 *)plVar1[1])[1]) {
    *param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 2;
    return;
  }
  if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144afef2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x170))(plVar1,param_2,2);
    return;
  }
  thunk_FUN_1457251a8();
  return;
}



// FUNCTION 144afef32 FUN_144afef32 body=64 status=ok
// SIG undefined FUN_144afef32(void)

void FUN_144afef32(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 8);
  puVar2 = *(undefined4 **)plVar1[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)plVar1[1])[1]) {
    *param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144afef6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    return;
  }
  thunk_FUN_14572512c();
  return;
}



// FUNCTION 144afef72 FUN_144afef72 body=15 status=ok
// SIG undefined FUN_144afef72(void)

void FUN_144afef72(undefined8 *param_1)

{
  if (*(char *)(param_1 + 3) != '\x01') {
    return;
  }
  FUN_1400020a8(*param_1);
  return;
}



// FUNCTION 144afef82 FUN_144afef82 body=295 status=ok
// SIG undefined FUN_144afef82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_144afef82(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_2[3] == -0x662bf3f && ((param_2[1] == 0 && *param_2 == 0) && param_2[2] == 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c87e490) {
      FUN_144b3d300(&DAT_14c87e490);
      if (DAT_14c87e490 == -1) {
        FUN_1446f470e(&local_18,L"Unused custom version",1);
        _DAT_14c87e468 = 0;
        uRam000000014c87e46c = 0;
        uRam000000014c87e470 = 0;
        uRam000000014c87e474 = 0xf99d40c1;
        _DAT_14c87e478 = 0x100000000;
        _DAT_14c87e480 = 0;
        DAT_14c87e488 = local_18;
        _Init_thread_footer(&DAT_14c87e490);
      }
    }
    piVar1 = (int *)&DAT_14c87e468;
  }
  else {
    if ((longlong)*(int *)(param_1 + 1) != 0) {
      piVar1 = (int *)*param_1;
      lVar2 = (longlong)*(int *)(param_1 + 1) * 0x28;
      do {
        if ((((*piVar1 == *param_2) && (piVar1[1] == param_2[1])) && (piVar1[2] == param_2[2])) &&
           (piVar1[3] == param_2[3])) goto LAB_144afeff2;
        piVar1 = piVar1 + 10;
        lVar2 = lVar2 + -0x28;
      } while (lVar2 != 0);
    }
    piVar1 = (int *)0x0;
  }
LAB_144afeff2:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return piVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aff0aa FUN_144aff0aa body=30 status=ok
// SIG undefined FUN_144aff0aa(void)

void FUN_144aff0aa(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_149e37810;
  param_1[1] = param_2;
  param_1[2] = param_1;
  param_1[3] = param_1 + 2;
  return;
}



// FUNCTION 144aff0c8 FUN_144aff0c8 body=11 status=ok
// SIG undefined FUN_144aff0c8(void)

undefined8 * FUN_144aff0c8(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  return param_2;
}



// FUNCTION 144aff0d4 FUN_144aff0d4 body=1 status=ok
// SIG undefined FUN_144aff0d4(void)

void FUN_144aff0d4(void)

{
  return;
}



// FUNCTION 144aff0d6 FUN_144aff0d6 body=10 status=ok
// SIG undefined FUN_144aff0d6(void)

void FUN_144aff0d6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



// FUNCTION 144aff0e0 FUN_144aff0e0 body=11 status=ok
// SIG undefined FUN_144aff0e0(void)

undefined8 FUN_144aff0e0(undefined8 *param_1)

{
  return *(undefined8 *)(*(longlong *)*param_1 + 8);
}



// FUNCTION 144aff0ec FUN_144aff0ec body=11 status=ok
// SIG undefined FUN_144aff0ec(void)

undefined8 FUN_144aff0ec(undefined8 *param_1)

{
  return *(undefined8 *)(*(longlong *)*param_1 + 8);
}



// FUNCTION 144aff114 FUN_144aff114 body=205 status=ok
// SIG undefined FUN_144aff114(void)

void FUN_144aff114(longlong param_1,uint *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((*(byte *)(param_1 + 0x29) & 2) == 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar4 = lVar2;
    if (param_3 < 2) {
      uVar5 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0xa0);
      lVar9 = lVar3;
      if (lVar3 < lVar2) {
        lVar9 = lVar2;
      }
      lVar6 = lVar2 << 0x1d;
      uVar5 = 0;
      uVar7 = 1;
      while (lVar4 < lVar3) {
        uVar8 = 0;
        if ((*(byte *)(*(longlong *)(param_1 + 0x90) + (lVar6 >> 0x20)) >> ((uint)lVar4 & 7) & 1) !=
            0) {
          uVar8 = uVar7;
        }
        uVar5 = uVar5 | uVar8;
        lVar4 = lVar4 + 1;
        if ((uVar7 * 2 == 0) ||
           (iVar1 = uVar7 * 2, lVar6 = lVar6 + 0x20000000, uVar7 = uVar7 * 2,
           param_3 <= uVar5 + iVar1)) goto LAB_144aff1b1;
      }
      FUN_1405d09b8(param_1,lVar9 - lVar2);
      lVar4 = lVar9;
    }
LAB_144aff1b1:
    *(longlong *)(param_1 + 0xa8) = lVar4;
    *param_2 = uVar5;
  }
  return;
}



// FUNCTION 144aff1e3 FUN_144aff1e3 body=257 status=ok
// SIG undefined FUN_144aff1e3(void)

ulonglong FUN_144aff1e3(ulonglong *param_1,undefined8 *param_2,int param_3)

{
  wchar_t *_Str2;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  size_t _MaxCount;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  _Str2 = (wchar_t *)*param_2;
  _MaxCount = (size_t)*(int *)(param_2 + 1);
  uVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (_MaxCount == 1) {
    local_3c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_48 = uVar1;
    local_40 = iVar2;
    uVar3 = FUN_144a98c79(&local_48,*_Str2);
    uVar5 = (ulonglong)uVar3;
  }
  else {
    uVar5 = 0xffffffff;
    if (*(int *)(param_2 + 1) <= iVar2) {
      lVar6 = (longlong)iVar2;
      uVar4 = uVar1 + lVar6 * 2 + _MaxCount * -2;
      if (param_3 == 0) {
        if (uVar1 <= uVar4) {
          uVar4 = lVar6 * 2 + _MaxCount * -2;
          do {
            iVar2 = wcsncmp((wchar_t *)(uVar1 + uVar4),_Str2,_MaxCount);
            if (iVar2 == 0) goto LAB_144aff2dd;
            lVar6 = uVar1 + uVar4;
            uVar4 = uVar4 - 2;
          } while (uVar1 <= lVar6 - 2U);
        }
      }
      else if (uVar1 <= uVar4) {
        uVar4 = lVar6 * 2 + _MaxCount * -2;
        do {
          iVar2 = FUN_144a54874(uVar1 + uVar4,_Str2,_MaxCount);
          if (iVar2 == 0) goto LAB_144aff2dd;
          lVar6 = uVar1 + uVar4;
          uVar4 = uVar4 - 2;
        } while (uVar1 <= lVar6 - 2U);
      }
    }
  }
LAB_144aff266:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
LAB_144aff2dd:
  uVar5 = uVar4 >> 1 & 0xffffffff;
  goto LAB_144aff266;
}



// FUNCTION 144aff2e5 FUN_144aff2e5 body=145 status=ok
// SIG undefined FUN_144aff2e5(void)

int FUN_144aff2e5(undefined8 *param_1,ushort param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  puVar1 = puVar3 + iVar2;
  if (param_3 == 0) {
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        if (*puVar3 == param_2) {
          return iVar2;
        }
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + 1;
      } while (puVar3 < puVar1);
    }
  }
  else if (0 < iVar2) {
    iVar2 = 0;
    do {
      if ((ushort)(*puVar3 + (ushort)(0x19 < *puVar3 - 0x61) * 0x20 + -0x20) ==
          (ushort)(param_2 + (ushort)(0x19 < param_2 - 0x61) * 0x20 + -0x20)) {
        return iVar2;
      }
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (puVar3 < puVar1);
  }
  return -1;
}



// FUNCTION 144aff376 FUN_144aff376 body=69 status=ok
// SIG undefined FUN_144aff376(void)

void FUN_144aff376(void)

{
  int *piVar1;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xcb0);
  *piVar1 = *piVar1 + -1;
  return;
}



// FUNCTION 144aff3bb FUN_144aff3bb body=34 status=ok
// SIG undefined FUN_144aff3bb(void)

undefined8 FUN_144aff3bb(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar2 = *(undefined8 *)(lVar1 + 0xcc0);
  *(undefined8 *)(lVar1 + 0xcc0) = param_1;
  return uVar2;
}



// FUNCTION 144aff3de FUN_144aff3de body=108 status=ok
// SIG undefined FUN_144aff3de(void)

void FUN_144aff3de(ushort *param_1,void *param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    memcpy(param_2,param_1 + 1,(ulonglong)(uVar1 >> 6));
    if (0x3f < *param_1) {
      uVar1 = *param_1 >> 6;
      uVar2 = (uint)uVar1;
      uVar3 = (ulonglong)(uVar1 - 1);
      do {
        *(short *)((longlong)param_2 + uVar3 * 2) = (short)*(char *)((longlong)param_2 + uVar3);
        uVar3 = uVar3 - 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  else {
    memcpy(param_2,param_1 + 1,(ulonglong)(uVar1 >> 5 & 0xfffffffe));
  }
  *(undefined2 *)((longlong)param_2 + (ulonglong)(*param_1 >> 6) * 2) = 0;
  return;
}



// FUNCTION 144aff44a SwitchToThread body=7 status=ok
// SIG BOOL SwitchToThread(void)

BOOL __stdcall SwitchToThread(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144aff44a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SwitchToThread();
  return BVar1;
}



// FUNCTION 144aff482 FUN_144aff482 body=9 status=ok
// SIG undefined FUN_144aff482(void)

void FUN_144aff482(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144aff488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}



// FUNCTION 144aff48c FUN_144aff48c body=10 status=ok
// SIG undefined FUN_144aff48c(void)

void FUN_144aff48c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144aff493. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



// FUNCTION 144aff496 FUN_144aff496 body=24 status=ok
// SIG undefined FUN_144aff496(void)

bool FUN_144aff496(int *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    bVar1 = *param_1 == DAT_14c948000;
  }
  return bVar1;
}



// FUNCTION 144aff4ae FUN_144aff4ae body=4 status=ok
// SIG undefined FUN_144aff4ae(void)

undefined4 FUN_144aff4ae(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



// FUNCTION 144aff4b2 FUN_144aff4b2 body=4 status=ok
// SIG undefined FUN_144aff4b2(void)

undefined4 FUN_144aff4b2(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 144aff4b6 FUN_144aff4b6 body=7 status=ok
// SIG undefined FUN_144aff4b6(void)

bool FUN_144aff4b6(int *param_1)

{
  return *param_1 == 0;
}



// FUNCTION 144aff4be FUN_144aff4be body=19 status=ok
// SIG undefined FUN_144aff4be(void)

undefined4 FUN_144aff4be(int *param_1,int *param_2)

{
  if (*param_1 != *param_2) {
    return 0;
  }
  return CONCAT31((int3)((uint)param_1[2] >> 8),param_1[2] == param_2[2]);
}



// FUNCTION 144aff4d2 FUN_144aff4d2 body=71 status=ok
// SIG undefined FUN_144aff4d2(void)

longlong FUN_144aff4d2(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if ((int)puVar1[1] == *(int *)((longlong)puVar1 + 0x34)) {
      return 0;
    }
    uVar3 = *puVar1;
  }
  else {
    if ((int)puVar1[1] == *(int *)((longlong)puVar1 + 0x24)) {
      return 0;
    }
    uVar2 = *puVar1;
    uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)puVar1;
    if ((uVar2 & 1) == 0) {
      uVar3 = uVar2;
    }
  }
  return (longlong)*(int *)(*param_2 + 0x2c) * (longlong)(int)param_2[1] + uVar3;
}



// FUNCTION 144aff51a FUN_144aff51a body=303 status=ok
// SIG undefined FUN_144aff51a(void)

longlong FUN_144aff51a(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar1 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uint)param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x78;
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x78) == param_2)
        goto LAB_144aff586;
        iVar4 = *(int *)(lVar1 + 0x70);
      } while (iVar4 != -1);
    }
  }
  lVar1 = 0;
LAB_144aff586:
  lVar2 = lVar1 + 8;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  local_30 = param_3;
  if (lVar2 == 0) {
    FUN_140002266(&local_40,L"%llX",param_2);
    local_58 = &DAT_149dfb77a;
    if (local_38 != 0) {
      local_58 = local_40;
    }
    FUN_1400021e4(&local_30,&local_50);
    puVar3 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar3 = local_50;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading2.cpp",0x502,
                  L"FindPackageRefChecked: Package %s (0x%s) has been deleted",puVar3);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aff64a FUN_144aff64a body=453 status=ok
// SIG undefined FUN_144aff64a(void)

ulonglong FUN_144aff64a(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong *puVar6;
  int iVar7;
  longlong lVar8;
  
  if ((param_3 & 0xc000000000000000) == 0x4000000000000000) {
    lVar8 = *param_1;
    if (*(int *)(lVar8 + 0x60) != *(int *)(lVar8 + 0x8c)) {
      lVar4 = lVar8 + 0x90;
      if (*(longlong *)(lVar8 + 0x98) != 0) {
        lVar4 = *(longlong *)(lVar8 + 0x98);
      }
      iVar7 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar8 + 0xa0) - 1U & (uint)param_3) * 4);
      if (iVar7 != -1) {
        do {
          puVar6 = (ulonglong *)(*(longlong *)(lVar8 + 0x58) + (longlong)iVar7 * 0x18);
          if (*puVar6 == param_3) {
            if (puVar6 == (ulonglong *)0x0) {
              return 0;
            }
            return puVar6[1];
          }
          iVar7 = (int)puVar6[2];
        } while (iVar7 != -1);
        return 0;
      }
    }
  }
  else if ((SBORROW8(0,param_3 & 0xc000000000000000)) &&
          (lVar8 = *param_1, *(int *)(lVar8 + 0x10) != *(int *)(lVar8 + 0x3c))) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0xd8) + (param_3 >> 0x1d & 0x1fffffff8));
    lVar5 = lVar8 + 0x40;
    if (*(longlong *)(lVar8 + 0x48) != 0) {
      lVar5 = *(longlong *)(lVar8 + 0x48);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar8 + 0x50) - 1U & (uint)lVar4) * 4);
    if (iVar7 != -1) {
      lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x58) + (longlong)(int)(uint)param_3 * 8);
      while (lVar1 = *(longlong *)(lVar8 + 8) + (longlong)iVar7 * 0x78,
            *(longlong *)(*(longlong *)(lVar8 + 8) + (longlong)iVar7 * 0x78) != lVar4) {
        iVar7 = *(int *)(lVar1 + 0x70);
        if (iVar7 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) {
        return 0;
      }
      lVar8 = lVar1 + 0x40;
      if (*(longlong *)(lVar1 + 0x48) != 0) {
        lVar8 = *(longlong *)(lVar1 + 0x48);
      }
      iVar7 = *(int *)(lVar8 + (ulonglong)
                               (*(int *)(lVar1 + 0x50) - 1U &
                               (int)lVar5 + (int)((ulonglong)lVar5 >> 0x20) * 0x17) * 4);
      if (iVar7 == -1) {
        return 0;
      }
      while (plVar2 = (longlong *)(*(longlong *)(lVar1 + 8) + (longlong)iVar7 * 0x18),
            *plVar2 != lVar5) {
        iVar7 = (int)plVar2[2];
        if (iVar7 == -1) {
          return 0;
        }
      }
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      if ((uint *)(plVar2 + 1) == (uint *)0x0) {
        return 0;
      }
      uVar3 = *(uint *)(plVar2 + 1);
      if ((int)uVar3 < DAT_14c9647dc) {
        puVar6 = (ulonglong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      }
      else {
        puVar6 = (ulonglong *)0x0;
      }
      return *puVar6;
    }
  }
  return 0;
}



// FUNCTION 144aff83a FUN_144aff83a body=36 status=ok
// SIG undefined FUN_144aff83a(void)

void FUN_144aff83a(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 144aff85e FUN_144aff85e body=4 status=ok
// SIG undefined FUN_144aff85e(void)

undefined4 FUN_144aff85e(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// FUNCTION 144aff862 FUN_144aff862 body=11 status=ok
// SIG undefined FUN_144aff862(void)

undefined8 * FUN_144aff862(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144aff86e FUN_144aff86e body=164 status=ok
// SIG undefined FUN_144aff86e(void)

undefined8 FUN_144aff86e(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c949388) {
    FUN_144b3d300(&DAT_14c949388);
    if (DAT_14c949388 == -1) {
      FUN_1446f470e(&local_18,L"GbxHasStructType",1);
      DAT_14c949380 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c949388);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c949380;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aff926 FUN_144aff926 body=225 status=ok
// SIG undefined FUN_144aff926(void)

void FUN_144aff926(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  
  iVar10 = *(int *)((longlong)param_1 + 0x34);
  if (((int)param_1[1] - iVar10 != 1) && ((int)param_1[1] != iVar10)) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar4 = *param_1;
      do {
        if (*(int *)(lVar4 + (longlong)iVar8 * 0xc) == *param_3) {
          iVar3 = *param_4;
          if (iVar10 != 0) {
            *(int *)(lVar4 + (longlong)(int)param_1[6] * 0xc) = iVar3;
          }
          puVar1 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0xc);
          *puVar1 = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (undefined4)param_1[6];
          }
          puVar1[1] = uVar9;
          *(int *)(param_1 + 6) = iVar3;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar7 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          iVar10 = iVar3 + 0x1f;
          if (-1 < iVar3) {
            iVar10 = iVar3;
          }
          bVar5 = (byte)iVar3 & 0x1f;
          puVar2 = (uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = *(int *)(lVar4 + (longlong)iVar8 * 0xc + 4);
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_144aff982;
    }
  }
  uVar6 = 0;
LAB_144aff982:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 144affa3a FUN_144affa3a body=46 status=ok
// SIG undefined FUN_144affa3a(void)

undefined8 FUN_144affa3a(ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (((*param_1 & 1) != 0) && (uVar2 = *param_1 & 0xfffffffffffffffe, uVar2 != 0)) {
    lVar1 = *(longlong *)(uVar2 + 0x10);
    if (*(int *)(param_2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar1 = *(longlong *)(lVar1 + 0x30);
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                      *(longlong *)(lVar1 + (longlong)*(int *)(param_2 + 0x38) * 8) ==
                      param_2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 144affa68 FUN_144affa68 body=132 status=ok
// SIG undefined FUN_144affa68(void)

uint FUN_144affa68(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  if ((uVar3 & 1) == 0) {
    do {
      if (uVar3 < 2) {
        return 1;
      }
      uVar3 = *(ulonglong *)(uVar3 + 0x10);
    } while ((uVar3 & 1) == 0);
    uVar3 = uVar3 & 0xfffffffffffffffe;
    if (uVar3 == 0) {
      return 1;
    }
  }
  else {
    uVar3 = uVar3 & 0xfffffffffffffffe;
    if (uVar3 == 0) {
      return 1;
    }
  }
  if (DAT_14c950c29 != '\0') {
    FUN_1456cec3c();
  }
  uVar1 = *(uint *)(uVar3 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  return *(uint *)(lVar2 + 8) >> 0x19 & 1;
}



// FUNCTION 144affaec FUN_144affaec body=88 status=ok
// SIG undefined FUN_144affaec(void)

undefined8 * FUN_144affaec(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14010590e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 144affb44 FUN_144affb44 body=3 status=ok
// SIG undefined FUN_144affb44(void)

undefined8 FUN_144affb44(void)

{
  return 0;
}



// FUNCTION 144affb48 caseD_3e body=327 status=ok
// SIG undefined caseD_3e(void)

undefined4 switchD_143c3d4dc::caseD_3e(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((*(uint *)(param_1 + 8) & 0x50) == 0) && ((*(uint *)(param_1 + 8) & 1) != 0)) &&
      ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd4) & 0x10) == 0 &&
      (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != 0)))) {
    if (DAT_14c951858 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1468c5283;
      local_40 = FUN_142809da0;
      local_48 = L"Engine";
      local_50 = 0x400000000;
      local_58 = 0x10000000;
      local_60 = 8;
      local_68 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    if (*(int *)(DAT_14c951858 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) {
      uVar2 = 0;
      if ((*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30) ||
         (lVar1 == DAT_14c951640)) goto LAB_144affb6f;
      if ((*(uint *)(lVar1 + 8) & 0x40) == 0) {
        uVar2 = CONCAT31((int3)(*(uint *)(lVar1 + 8) >> 8),(*(byte *)(lVar1 + 0x2e) & 0x10) == 0);
        goto LAB_144affb6f;
      }
    }
  }
  uVar2 = 0;
LAB_144affb6f:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144affc90 FUN_144affc90 body=746 status=ok
// SIG undefined FUN_144affc90(void)

void FUN_144affc90(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined ***pppuVar7;
  longlong *plVar8;
  longlong *unaff_RBP;
  code *pcVar9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  code *local_c8;
  longlong local_c0;
  int local_b8;
  longlong local_b0;
  int local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined1 local_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar8 = (longlong *)*param_2;
  do {
    if (plVar8 == (longlong *)0x0) {
      if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    lVar4 = *plVar8;
    *param_2 = lVar4;
    if (lVar4 == 0) {
      param_2[1] = 0;
    }
    *plVar8 = 0;
    local_98 = 0;
    local_90 = 0;
    if (*(char *)((longlong)plVar8 + 0x1b) == '\r') {
      uVar2 = *(undefined1 *)((longlong)plVar8 + 0x19);
      cVar3 = *(char *)((longlong)plVar8 + 0x1a);
      unaff_RBP = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(char)plVar8[3]);
      cVar6 = FUN_1407f0566(plVar8[2],&local_98);
      if (cVar6 == '\0') goto LAB_144affce8;
      if (cVar3 == '\0') {
        local_d8 = uVar2;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                  (*(longlong **)(param_1 + 8),local_88,&local_98,(ulonglong)unaff_RBP & 0xffffffff)
        ;
        local_a0 = local_88[0];
        pcVar9 = local_88[0];
      }
      else {
        plVar5 = *(longlong **)(param_1 + 8);
        unaff_RBP = &local_c0;
        FUN_1468750d6(&local_98,unaff_RBP);
        local_b0 = local_c0;
        local_a8 = local_b8 + -1;
        if (local_b8 == 0) {
          local_a8 = 0;
        }
        (**(code **)(*plVar5 + 0x50))(plVar5,local_88,0);
        pcVar9 = local_88[0];
        local_a0 = local_88[0];
        local_88[0] = (code *)0x0;
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
      }
      if (pcVar9 == (code *)0x0) goto LAB_144affce8;
      if (plVar8[5] == 0) {
        lVar4 = plVar8[6];
        if (lVar4 == 0) {
          FUN_1400eecdc(local_88,0);
LAB_144affed0:
          local_c8 = local_88[0];
          if (local_88[0] != (code *)0x0) {
            LOCK();
            *(int *)(local_88[0] + 0xc) = *(int *)(local_88[0] + 0xc) + 1;
            UNLOCK();
          }
        }
        else {
          local_88[0] = (code *)FUN_14001cc68(0x20,0x10);
          *(longlong *)(local_88[0] + 8) = 0;
          *(longlong *)(local_88[0] + 0x10) = 0;
          *(longlong *)local_88[0] = lVar4;
          *(undefined2 *)(local_88[0] + 0x18) = 0;
          if (local_88[0] != (code *)0x0) {
            LOCK();
            *(int *)(local_88[0] + 0xc) = *(int *)(local_88[0] + 0xc) + 1;
            UNLOCK();
            goto LAB_144affed0;
          }
          local_c8 = (code *)0x0;
        }
        FUN_1468c5934(plVar8,&local_c8);
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
        if (*(undefined8 **)(param_1 + 200) == (undefined8 *)0x0) {
          *(longlong **)(param_1 + 0xc0) = plVar8;
        }
        else {
          **(undefined8 **)(param_1 + 200) = plVar8;
        }
        *(longlong **)(param_1 + 200) = plVar8;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
        if (*(int *)(*(undefined8 **)(param_1 + 0x10) + 1) == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)**(undefined8 **)(param_1 + 0x10);
        }
        (**(code **)(*plVar8 + 0x58))();
        pcVar9 = local_88[0];
        if (local_88[0] != (code *)0x0) {
          LOCK();
          pcVar1 = local_88[0] + 0xc;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 == 0) {
            FUN_144716208(local_88[0]);
            FUN_1400020a8(pcVar9);
          }
        }
      }
      else {
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_149e91d80;
        local_88[0] = FUN_14280da5e;
        local_60 = param_1;
        local_58 = plVar8;
        FUN_1468c5970(param_1 + 0x20,plVar8,&local_a0,local_88);
        if (local_88[0] != (code *)0x0) {
          pppuVar7 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar7 = &local_68;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      if (local_a0 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_a0)(local_a0,1);
      }
    }
    else {
LAB_144affce8:
      if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
        param_3[1] = plVar8;
        *param_3 = plVar8;
      }
      else {
        *(undefined8 *)param_3[1] = plVar8;
        param_3[1] = plVar8;
      }
    }
    plVar8 = (longlong *)*param_2;
  } while( true );
}



// FUNCTION 144afff7c FUN_144afff7c body=96 status=ok
// SIG undefined FUN_144afff7c(void)

longlong * FUN_144afff7c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  plVar1 = *(longlong **)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar1;
    do {
      FUN_1468c5b4a(param_1 + 0x20,plVar2);
      plVar2 = (longlong *)*plVar2;
    } while (plVar2 != (longlong *)0x0);
  }
  return plVar1;
}



// FUNCTION 144afffdc FUN_144afffdc body=166 status=ok
// SIG undefined FUN_144afffdc(void)

void FUN_144afffdc(longlong *param_1,void *param_2,longlong param_3)

{
  char cVar1;
  void *_Src;
  
  if (*(code **)(*param_1 + 0x88) != (code *)&LAB_1447713a0) {
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000144b0007f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,param_2);
      return;
    }
  }
  _Src = (void *)(param_3 + *(int *)((longlong)param_1 + 0x44));
  if (_Src != param_2) {
    if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) != 0) {
      memcpy(param_2,_Src,(longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000144b00050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x100))(param_1,param_2,_Src,(int)param_1[6]);
    return;
  }
  return;
}



// FUNCTION 144b00082 FUN_144b00082 body=203 status=ok
// SIG undefined FUN_144b00082(void)

undefined8 FUN_144b00082(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  
  if ((*(code **)(*param_2 + 0x80) == FUN_1449734ec) ||
     (cVar2 = (**(code **)(*param_2 + 0x80))(param_2,param_1), cVar2 == '\0')) {
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    uVar3 = (uint)uVar1;
    if (((uVar3 >> 0x18 & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 0x40) == 0)) {
      if ((uVar1 & 0x80800c20202000) == 0) {
        return 1;
      }
      if ((((((uVar3 >> 0xd & 1) == 0) || ((*(byte *)((longlong)param_2 + 0x29) & 1) == 0)) ||
           (0 < (int)param_2[6])) &&
          (((uVar3 >> 0x15 & 1) == 0 || ((*(byte *)((longlong)param_2 + 0x35) & 0x10) == 0)))) &&
         (((((uVar1 >> 0x2f & 1) == 0 ||
            ((*(uint *)((longlong)param_2 + 0x34) & 0x401000) != 0x1000)) &&
           ((((uVar3 >> 0x1d & 1) == 0 || ((*(byte *)((longlong)param_2 + 0x37) & 8) != 0)) ||
            ((*(byte *)(param_2 + 5) & 0x24) == 0)))) &&
          (((uVar1 >> 0x37 & 1) == 0 ||
           (((*(byte *)(param_2 + 5) & 0x20) == 0 &&
            ((*(byte *)((longlong)param_2 + 0x37) & 0x20) != 0)))))))) {
        if ((uVar1 >> 0x23 & 1) == 0) {
          return 1;
        }
        if ((*(byte *)((longlong)param_2 + 0x2b) & 0x20) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144b0014e FUN_144b0014e body=389 status=ok
// SIG undefined FUN_144b0014e(void)

char FUN_144b0014e(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  bVar1 = *(byte *)(param_1 + 0x70);
  plVar6 = *(longlong **)(param_1 + 0x78);
  if (*(code **)(*plVar6 + 0x178) != (code *)&LAB_1448fa8ce) {
    param_4 = param_4 & 0xffffffff;
    (**(code **)(*plVar6 + 0x178))();
    plVar6 = *(longlong **)(param_1 + 0x78);
  }
  uVar3 = (uint)param_2[1];
  uVar13 = (ulonglong)uVar3;
  if (param_3 == (ulonglong *)0x0) {
    cVar5 = uVar13 == 0;
  }
  else {
    iVar4 = *(int *)((longlong)plVar6 + 0x34);
    bVar2 = *(byte *)(param_1 + 0x70);
    iVar7 = iVar4;
    if (*(code **)(*plVar6 + 0x178) != (code *)&LAB_1448fa8ce) {
      (**(code **)(*plVar6 + 0x178))();
      param_4 = param_4 & 0xffffffff;
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x34);
    }
    if (uVar3 == (uint)param_3[1]) {
      cVar5 = '\x01';
      if (0 < (int)uVar3) {
        lVar9 = 0;
        lVar12 = 0;
        do {
          uVar13 = uVar13 - 1;
          if ((int)param_3[1] == 0) {
            lVar11 = 0;
          }
          else {
            if ((bVar2 & 1) == 0) {
              uVar10 = *param_3;
            }
            else {
              uVar10 = *param_3;
              if ((uVar10 & 1) != 0) {
                uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)param_3;
              }
            }
            lVar11 = uVar10 + lVar9;
          }
          if ((int)param_2[1] == 0) {
            lVar8 = 0;
          }
          else {
            if ((bVar1 & 1) == 0) {
              uVar10 = *param_2;
            }
            else {
              uVar10 = *param_2;
              if ((uVar10 & 1) != 0) {
                uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)param_2;
              }
            }
            lVar8 = uVar10 + lVar12;
          }
          cVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 200))
                            (*(longlong **)(param_1 + 0x78),lVar8,lVar11,param_4);
          if (cVar5 == '\0') {
            return '\0';
          }
          lVar12 = lVar12 + iVar4;
          lVar9 = lVar9 + iVar7;
          param_4 = param_4 & 0xffffffff;
        } while (uVar13 != 0);
      }
    }
    else {
      cVar5 = '\0';
    }
  }
  return cVar5;
}



// FUNCTION 144b00346 FUN_144b00346 body=78 status=ok
// SIG undefined FUN_144b00346(void)

void FUN_144b00346(undefined8 param_1,longlong *param_2,longlong param_3)

{
  if (param_3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  if ((param_3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  *param_2 = param_3;
  return;
}



// FUNCTION 144b00394 FUN_144b00394 body=530 status=ok
// SIG undefined FUN_144b00394(void)

ulonglong FUN_144b00394(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong lStack_80;
  longlong lStack_78;
  void *local_70;
  ulonglong local_68;
  undefined8 local_58;
  longlong lStack_50;
  longlong lStack_48;
  void *local_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == (undefined8 *)0x0) {
    lStack_48 = 0;
    local_40 = (void *)0x0;
    local_58 = 0;
    lStack_50 = 0;
    local_38 = 0;
  }
  else {
    local_58 = *param_2;
    lStack_50 = param_2[1];
    lStack_48 = param_2[2];
    local_40 = (void *)0x0;
    uVar3 = *(uint *)(param_2 + 4);
    pvVar5 = (void *)param_2[3];
    local_38 = CONCAT44(local_38._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      local_38 = (ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&local_40,uVar3,0);
      memcpy(local_40,pvVar5,(longlong)(int)uVar3 * 2);
    }
  }
  if (param_3 == (undefined8 *)0x0) {
    lStack_78 = 0;
    local_70 = (void *)0x0;
    local_88 = 0;
    lStack_80 = 0;
    local_68 = 0;
    pvVar5 = (void *)0x0;
  }
  else {
    local_88 = *param_3;
    lStack_80 = param_3[1];
    lStack_78 = param_3[2];
    local_70 = (void *)0x0;
    uVar3 = *(uint *)(param_3 + 4);
    pvVar5 = (void *)param_3[3];
    local_68 = CONCAT44(local_68._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      local_68 = (ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&local_70,uVar3,0);
      memcpy(local_70,pvVar5,(longlong)(int)uVar3 * 2);
    }
  }
  if ((lStack_50 == lStack_80) && (lStack_48 == lStack_78)) {
    if ((int)local_38 == (int)local_68) {
      pvVar5 = (void *)CONCAT71((int7)((ulonglong)pvVar5 >> 8),1);
      if ((int)local_38 < 2) goto LAB_144b00443;
      lVar6 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)local_40 + lVar6);
        uVar3 = (uint)uVar1;
        uVar2 = *(ushort *)((longlong)local_70 + lVar6);
        uVar7 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_144b004d0;
          }
          iVar4 = uVar3 - uVar7;
          goto LAB_144b004fd;
        }
        if (uVar1 == 0) break;
LAB_144b004d0:
        lVar6 = lVar6 + 2;
      }
      iVar4 = 0;
    }
    else {
      iVar4 = (int)local_68 + (int)local_38 + -1;
    }
LAB_144b004fd:
    pvVar5 = (void *)CONCAT71((int7)((ulonglong)pvVar5 >> 8),iVar4 == 0);
  }
  else {
    pvVar5 = (void *)0x0;
  }
LAB_144b00443:
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pvVar5 & 0xffffffff;
}



// FUNCTION 144b005a8 FUN_144b005a8 body=1017 status=ok
// SIG undefined FUN_144b005a8(void)

void FUN_144b005a8(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined *local_108;
  code *local_100;
  longlong local_f0 [15];
  longlong *local_78;
  undefined8 local_70;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_1 = param_2;
  if (param_2 == (longlong *)0x0) goto LAB_144b00718;
  puVar2 = (undefined *)param_2[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c947fc8) && (FUN_144b3d300(&DAT_14c947fc8), DAT_14c947fc8 == -1)) {
    FUN_1446dcc8c();
    local_100 = FUN_14686c8ac;
    local_108 = &DAT_14c952a08;
    local_110 = 0x2000000000000000;
    local_118 = 0x108001;
    FUN_14000176a(&DAT_14c947f78,L"FGbxInlineStructProperty",0);
    atexit(FUN_1427b495e);
    _Init_thread_footer(&DAT_14c947fc8);
  }
  if (DAT_14c947f80 == 0) {
    bVar4 = puVar2 != (undefined *)0x0;
    if ((puVar2 != &DAT_14c947f78) && (puVar2 != (undefined *)0x0)) {
      do {
        puVar2 = *(undefined **)(puVar2 + 0x30);
        bVar4 = puVar2 != (undefined *)0x0;
      } while (puVar2 != &DAT_14c947f78 && bVar4);
    }
    if (!bVar4) {
LAB_144b00644:
      puVar2 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c947f70) && (FUN_144b3d300(&DAT_14c947f70), DAT_14c947f70 == -1))
      {
        local_108 = (undefined *)FUN_1446ddbd2();
        local_100 = FUN_141710108;
        local_110 = 0x1000000000000000;
        local_118 = 0x8001;
        FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
        atexit(FUN_1427b4857);
        _Init_thread_footer(&DAT_14c947f70);
      }
      if (DAT_14c947f28 == 0) {
        bVar4 = puVar2 != (undefined *)0x0;
        if ((puVar2 != &DAT_14c947f20) && (puVar2 != (undefined *)0x0)) {
          do {
            puVar2 = *(undefined **)(puVar2 + 0x30);
            bVar4 = puVar2 != (undefined *)0x0;
          } while (puVar2 != &DAT_14c947f20 && bVar4);
        }
        if (!bVar4) {
LAB_144b006b0:
          puVar2 = (undefined *)param_2[1];
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c947e70) && (FUN_144b3d300(&DAT_14c947e70), DAT_14c947e70 == -1)) {
            local_108 = (undefined *)FUN_1446ddbd2();
            local_100 = FUN_14170fd90;
            local_110 = 0x8000000000000000;
            local_118 = 0x8001;
            FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
            atexit(FUN_1427b4416);
            _Init_thread_footer(&DAT_14c947e70);
          }
          if (DAT_14c947e28 == 0) {
            bVar4 = puVar2 != (undefined *)0x0;
            if ((puVar2 != &DAT_14c947e20) && (puVar2 != (undefined *)0x0)) {
              do {
                puVar2 = *(undefined **)(puVar2 + 0x30);
                bVar4 = puVar2 != (undefined *)0x0;
              } while (puVar2 != &DAT_14c947e20 && bVar4);
            }
            if (!bVar4) goto LAB_144b00718;
          }
          else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c947e28) == 0) goto LAB_144b00718;
        }
      }
      else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c947f28) == 0) goto LAB_144b006b0;
    }
  }
  else if ((*(ulonglong *)(puVar2 + 0x18) & DAT_14c947f80) == 0) goto LAB_144b00644;
  if ((*(int *)(param_1 + 1) == 0) &&
     ((**(code **)(*param_2 + 0x168))(param_2,local_f0),
     local_f0[0] == *(longlong *)((longlong)param_1 + 0xc))) {
    uVar1 = 0;
    local_78 = (longlong *)0x0;
    local_70 = 0xa00000000;
    local_40 = 0;
    local_38 = 0xa00000000;
    local_30 = 0xffffffff;
    (**(code **)(*param_2 + 0x1a0))(param_2,local_f0);
    if ((int)local_70 != 0) {
      plVar3 = local_f0;
      if (local_78 != (longlong *)0x0) {
        plVar3 = local_78;
      }
      uVar1 = FUN_140242058(&DAT_14c952a70,plVar3);
    }
    FUN_140241d2e(param_1,uVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144b00718:
  if ((local_28 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b009a2 FUN_144b009a2 body=132 status=ok
// SIG undefined FUN_144b009a2(void)

int FUN_144b009a2(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(*param_1 + (longlong)iVar3 * 0x18);
        iVar6 = 1;
        lVar4 = 0;
        while ((*(longlong *)(lVar2 + lVar4) == *(longlong *)(*param_3 + lVar4) &&
               (iVar1 = *(int *)(lVar2 + 8 + lVar4), iVar1 == *(int *)(*param_3 + 8 + lVar4)))) {
          iVar6 = iVar6 + iVar1 + -1;
          lVar4 = lVar4 + 0xc;
          if (iVar6 < 1) {
            return iVar3;
          }
        }
        iVar3 = *(int *)(*param_1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 144b00a26 FUN_144b00a26 body=74 status=ok
// SIG undefined FUN_144b00a26(void)

void FUN_144b00a26(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149ead850;
  lVar1 = param_1[0x13];
  *(longlong *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xdb8) = lVar1;
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xa1) = *(byte *)(lVar1 + 0xa1) | *(byte *)((longlong)param_1 + 0xa1);
  }
  lVar1 = param_1[0xd];
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 144b00a70 caseD_9 body=11 status=ok
// SIG undefined caseD_9(void)

undefined8 * switchD_143c3d4dc::caseD_9(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  return param_2;
}



// FUNCTION 144b00a7c FUN_144b00a7c body=295 status=ok
// SIG undefined FUN_144b00a7c(void)

longlong FUN_144b00a7c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c951858 == 0) {
    local_30 = &local_18;
    local_18 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1468c5283;
    local_40 = FUN_142809da0;
    local_48 = L"Engine";
    local_50 = 0x400000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  iVar1 = *(int *)(DAT_14c951858 + 0x38);
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < iVar1) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      DAT_14c951858 + 0x30)) {
    do {
      do {
        lVar2 = param_1;
        param_1 = *(longlong *)(lVar2 + 0x20);
      } while (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < iVar1);
    } while (*(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
             DAT_14c951858 + 0x30);
  }
  else {
    lVar2 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b00ba4 FUN_144b00ba4 body=58 status=ok
// SIG undefined FUN_144b00ba4(void)

void FUN_144b00ba4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
LAB_144b00ba9:
  lVar2 = param_1;
  lVar1 = lVar2;
  if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x000144b00bb8;
  goto LAB_144b00bc3;
code_r0x000144b00bb8:
  param_1 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar2);
LAB_144b00bc3:
    if (lVar1 != 0) {
      return;
    }
    param_1 = *(longlong *)(lVar2 + 0x20);
  }
  goto LAB_144b00ba9;
}



// FUNCTION 144b00bde FUN_144b00bde body=375 status=ok
// SIG undefined FUN_144b00bde(void)

bool FUN_144b00bde(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c951858 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1468c5283;
    local_50 = FUN_142809da0;
    local_58 = L"Engine";
    local_60 = 0x400000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) != DAT_14c951858 + 0x30)) {
    do {
      param_1 = *(longlong *)(param_1 + 0x20);
    } while (param_1 != param_2 && param_1 != 0);
    bVar3 = param_2 == 0 || param_1 != 0;
  }
  else {
    if (param_2 != param_1) {
LAB_144b00c2d:
      lVar2 = param_1;
      lVar1 = lVar2;
      if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x000144b00c3c;
      goto LAB_144b00c4a;
    }
    bVar3 = false;
  }
LAB_144b00c59:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000144b00c3c:
  param_1 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) goto LAB_144b00c2d;
  lVar1 = FUN_142840154(lVar2);
LAB_144b00c4a:
  if (lVar1 == 0) {
    param_1 = *(longlong *)(lVar2 + 0x20);
    goto LAB_144b00c2d;
  }
  bVar3 = lVar1 == param_2;
  goto LAB_144b00c59;
}



// FUNCTION 144b00d56 FUN_144b00d56 body=80 status=ok
// SIG undefined FUN_144b00d56(void)

longlong FUN_144b00d56(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 8) >> 0x19 & 1) != 0) break;
    param_1 = *(longlong *)(param_1 + 0x40);
  }
  return param_1;
}



// FUNCTION 144b00da6 caseD_b body=34 status=ok
// SIG undefined caseD_b(void)

undefined8 switchD_143c3d4dc::caseD_b(longlong *param_1)

{
  undefined8 uVar1;
  
  do {
    param_1 = (longlong *)param_1[4];
    if (param_1 == (longlong *)0x0) {
      return 0x144b00d01;
    }
  } while (*(code **)(*param_1 + 0x28) == caseD_b);
                    /* WARNING: Could not recover jumptable at 0x000144b00dc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_1 + 0x28))();
  return uVar1;
}



// FUNCTION 144b00dc8 FUN_144b00dc8 body=113 status=ok
// SIG undefined FUN_144b00dc8(void)

undefined8 FUN_144b00dc8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  iVar3 = iVar1 + 0xffff;
  if (-1 < iVar1) {
    iVar3 = iVar1;
  }
  if ((iVar3 >> 0x10 < DAT_14c964390) &&
     (lVar2 = *(longlong *)(DAT_14c964388 + 8 + (longlong)(iVar3 >> 0x10) * 0x10), lVar2 != 0)) {
    uVar4 = *(undefined8 *)(lVar2 + (longlong)(iVar1 % 0x10000) * 0x10);
  }
  else {
    uVar4 = 0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
  return uVar4;
}



// FUNCTION 144b00e3a FUN_144b00e3a body=112 status=ok
// SIG undefined FUN_144b00e3a(void)

ulonglong FUN_144b00e3a(uint *param_1,byte param_2,char param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144b00e78;
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar4 != 0) {
      lVar3 = 0;
      if (*(uint *)(lVar4 + 0x10) == param_1[1]) {
        lVar3 = lVar4;
      }
      goto LAB_144b00e78;
    }
  }
  lVar3 = 0;
LAB_144b00e78:
  if (param_3 == '\0') {
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulonglong)
              CONCAT31((int3)(*(uint *)(lVar3 + 8) >> 8),
                       (*(uint *)(lVar3 + 8) & ((uint)(param_2 ^ 1) << 0x15 | 0x10000000)) == 0);
    }
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar3 != 0);
  }
  return uVar2;
}



// FUNCTION 144b00eaa FUN_144b00eaa body=328 status=ok
// SIG undefined FUN_144b00eaa(void)

int FUN_144b00eaa(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    iVar8 = 0;
  }
  else {
    uVar7 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    piVar13 = (int *)((longlong)plVar9 +
                     ((longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U) * 4);
    iVar8 = 0;
    do {
      iVar3 = *piVar13;
      if ((longlong)iVar3 == -1) {
        return iVar8;
      }
      lVar4 = *param_1;
      lVar12 = (longlong)iVar3 * 0x10;
      lVar1 = lVar4 + lVar12;
      uVar5 = *(ulonglong *)(lVar4 + lVar12);
      if (uVar5 == param_2) {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = param_1 + 7;
        }
        iVar11 = *(int *)((longlong)plVar9 + (longlong)*(int *)(lVar1 + 0xc) * 4);
        if (iVar11 == iVar3) {
          piVar14 = (int *)((longlong)plVar9 + (longlong)*(int *)(lVar1 + 0xc) * 4);
        }
        else {
          do {
            piVar14 = (int *)((longlong)iVar11 * 0x10 + lVar4 + 8);
            iVar11 = *piVar14;
          } while (iVar11 != iVar3);
        }
        *piVar14 = *(int *)(lVar1 + 8);
        lVar1 = *param_1;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar1 + (longlong)(int)param_1[6] * 0x10) = iVar3;
        }
        *(undefined4 *)(lVar1 + lVar12) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar1 + lVar12 + 4) = uVar10;
        *(int *)(param_1 + 6) = iVar3;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        plVar9 = param_1 + 2;
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar9 = (longlong *)param_1[4];
        }
        iVar11 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar11 = iVar3;
        }
        bVar6 = (byte)iVar3 & 0x1f;
        puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar11 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        iVar8 = iVar8 + 1;
      }
      else {
        piVar13 = (int *)(lVar1 + 8);
      }
    } while (uVar5 != param_2);
  }
  return iVar8;
}



// FUNCTION 144b00ffc FUN_144b00ffc body=39 status=ok
// SIG undefined FUN_144b00ffc(void)

void FUN_144b00ffc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    param_1[6] = param_2[6];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar5;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  return;
}



// FUNCTION 144b01024 FUN_144b01024 body=216 status=ok
// SIG undefined FUN_144b01024(void)

float * FUN_144b01024(float *param_1,float *param_2)

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
  
  fVar2 = *param_1;
  fVar1 = param_1[1];
  fVar4 = param_1[3] + fVar1;
  fVar3 = param_1[2] + fVar2;
  fVar6 = fVar1 + param_1[5];
  fVar8 = fVar2 + param_1[4];
  fVar5 = param_1[5] + fVar4;
  fVar7 = param_1[4] + fVar3;
  fVar9 = fVar4;
  if (fVar4 <= fVar6) {
    fVar9 = fVar6;
  }
  if (fVar9 <= fVar5) {
    fVar9 = fVar5;
  }
  fVar10 = fVar1;
  if (fVar1 <= fVar9) {
    fVar10 = fVar9;
  }
  fVar9 = fVar3;
  if (fVar3 <= fVar8) {
    fVar9 = fVar8;
  }
  if (fVar9 <= fVar7) {
    fVar9 = fVar7;
  }
  fVar11 = fVar2;
  if (fVar2 <= fVar9) {
    fVar11 = fVar9;
  }
  if (fVar6 <= fVar4) {
    fVar4 = fVar6;
  }
  if (fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  if (fVar4 <= fVar1) {
    fVar1 = fVar4;
  }
  if (fVar8 <= fVar3) {
    fVar3 = fVar8;
  }
  if (fVar7 <= fVar3) {
    fVar3 = fVar7;
  }
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  *param_2 = fVar2;
  param_2[1] = fVar1;
  param_2[2] = fVar11;
  param_2[3] = fVar10;
  return param_2;
}



// FUNCTION 144b010fc FUN_144b010fc body=11 status=ok
// SIG undefined FUN_144b010fc(void)

bool FUN_144b010fc(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x130);
}



// FUNCTION 144b01108 FUN_144b01108 body=158 status=ok
// SIG undefined FUN_144b01108(void)

int FUN_144b01108(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  wchar_t *_Str2;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar3 = *param_1;
      iVar1 = *(int *)(param_3 + 1);
      _Str2 = (wchar_t *)*param_3;
      do {
        puVar4 = *(undefined8 **)(lVar3 + (longlong)iVar7 * 0x10);
        uVar2 = *(uint *)(puVar4 + 1);
        iVar6 = uVar2 - 1;
        if (uVar2 == 0) {
          iVar6 = 0;
        }
        if (iVar6 == iVar1) {
          if (iVar1 == 0) {
            return iVar7;
          }
          if (uVar2 < 2) {
            return iVar7;
          }
          iVar6 = wcsncmp((wchar_t *)*puVar4,_Str2,(longlong)iVar1);
          if (iVar6 == 0) {
            return iVar7;
          }
        }
        iVar7 = *(int *)(lVar3 + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  return -1;
}



// FUNCTION 144b011a6 FUN_144b011a6 body=187 status=ok
// SIG undefined FUN_144b011a6(void)

undefined8 * FUN_144b011a6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  longlong lVar9;
  
  if (((longlong)*(int *)(param_1 + 0x128) < 1) ||
     (lVar9 = (longlong)
              *(int *)(*(longlong *)(param_1 + 0x120) + -4 + (longlong)*(int *)(param_1 + 0x128) * 4
                      ), lVar9 == -1)) {
    uVar8 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x130);
    lVar9 = lVar9 * 0x40;
    lVar1 = lVar4 + lVar9;
    *param_2 = 0;
    iVar3 = *(int *)(lVar4 + 8 + lVar9);
    _Src = *(void **)(lVar4 + lVar9);
    *(int *)(param_2 + 1) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_146953154(param_2,iVar3,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar3 * 0x24);
    }
    cVar2 = *(char *)(lVar1 + 0x34);
    *(char *)((longlong)param_2 + 0x34) = cVar2;
    if (cVar2 == '\x01') {
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar1 + 0x30);
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      uVar6 = *(undefined8 *)(lVar1 + 0x18);
      uVar7 = *(undefined8 *)(lVar1 + 0x28);
      param_2[4] = *(undefined8 *)(lVar1 + 0x20);
      param_2[5] = uVar7;
      param_2[2] = uVar5;
      param_2[3] = uVar6;
    }
    *(undefined1 *)(param_2 + 7) = *(undefined1 *)(lVar1 + 0x38);
    uVar8 = 1;
  }
  *(undefined1 *)(param_2 + 8) = uVar8;
  return param_2;
}



// FUNCTION 144b01262 FUN_144b01262 body=131 status=ok
// SIG undefined FUN_144b01262(void)

undefined8 * FUN_144b01262(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146953154(param_1,iVar2,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar2 * 0x24);
  }
  cVar1 = *(char *)((longlong)param_2 + 0x34);
  *(char *)((longlong)param_1 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar5;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  }
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 144b012e6 FUN_144b012e6 body=8 status=ok
// SIG undefined FUN_144b012e6(void)

longlong FUN_144b012e6(longlong param_1)

{
  return param_1 + 0x1e0;
}



// FUNCTION 144b012f2 FUN_144b012f2 body=152 status=ok
// SIG undefined FUN_144b012f2(void)

void FUN_144b012f2(longlong param_1,double *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((longlong)*(int *)(param_1 + 0x200) < 1) {
    dVar6 = 0.0;
    dVar5 = 0.0;
  }
  else {
    dVar5 = 0.0;
    lVar4 = 0;
    dVar6 = 0.0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar4 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (*(char *)(lVar2 + 0x39) != DAT_14c96b1e1) {
        pfVar3 = (float *)(lVar2 + 0x168);
        if ((*(byte *)(lVar2 + 0x31) & 0x20) == 0) {
          pfVar3 = (float *)&DAT_14c84635c;
        }
        dVar7 = (double)(*(float *)(lVar1 + 0x28) + *(float *)(lVar1 + 0x30) + *pfVar3);
        if (dVar5 <= dVar7) {
          dVar5 = dVar7;
        }
        dVar7 = (double)(*(float *)(lVar1 + 0x2c) + *(float *)(lVar1 + 0x34) + pfVar3[1]);
        if (dVar6 <= dVar7) {
          dVar6 = dVar7;
        }
      }
      lVar4 = lVar4 + 1;
    } while (*(int *)(param_1 + 0x200) != lVar4);
  }
  *param_2 = dVar5;
  param_2[1] = dVar6;
  return;
}



// FUNCTION 144b013c4 FUN_144b013c4 body=32 status=ok
// SIG undefined FUN_144b013c4(void)

undefined8 * FUN_144b013c4(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_14c84635c;
  if ((*(byte *)(param_1 + 0x31) & 0x20) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x168);
  }
  *param_2 = *puVar1;
  return param_2;
}



// FUNCTION 144b013e4 FUN_144b013e4 body=8 status=ok
// SIG undefined FUN_144b013e4(void)

longlong FUN_144b013e4(longlong param_1)

{
  return param_1 + 0xd0;
}



// FUNCTION 144b013ec FUN_144b013ec body=8 status=ok
// SIG undefined FUN_144b013ec(void)

longlong FUN_144b013ec(longlong param_1)

{
  return param_1 + 0x98;
}



// FUNCTION 144b013f4 FUN_144b013f4 body=707 status=ok
// SIG undefined FUN_144b013f4(void)

void FUN_144b013f4(longlong param_1,float *param_2,float *param_3,float *param_4,byte *param_5,
                  undefined1 *param_6,char *param_7)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
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
  
  *param_5 = 0;
  *param_7 = '\x01';
  *param_6 = 0;
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) {
    switch(*(undefined1 *)(param_1 + 0x35)) {
    case 1:
      *param_5 = 1;
      break;
    case 2:
      *param_5 = 1;
      *param_7 = '\0';
      break;
    case 3:
      *param_5 = 1;
      *param_6 = 1;
      break;
    case 4:
      bVar3 = (*(byte *)(param_1 + 0x31) & 0x20) != 0;
      pfVar2 = (float *)((longlong)&DAT_14c84635c + 4);
      if (bVar3) {
        pfVar2 = (float *)(param_1 + 0x16c);
      }
      pfVar1 = (float *)&DAT_14c84635c;
      if (bVar3) {
        pfVar1 = (float *)(param_1 + 0x168);
      }
      *param_5 = (-(param_3[1] < *pfVar2 + -1.0) | -(*param_3 < *pfVar1 + -1.0)) & 1;
    }
  }
  if (*param_5 == 1) {
    fVar9 = DAT_14c84635c._4_4_ - *(float *)(param_1 + 0x1a0);
    fVar4 = (float)DAT_14c84635c - *(float *)(param_1 + 0x19c);
    fVar6 = (*(float *)(param_1 + 0x1a4) + *param_3) - fVar4;
    fVar12 = (*(float *)(param_1 + 0x1a8) + param_3[1]) - fVar9;
    fVar7 = param_3[7];
    fVar5 = param_3[8];
    fVar11 = param_3[10];
    fVar8 = fVar5 * 0.0 + fVar12 * fVar11;
    fVar14 = param_3[9];
    fVar13 = fVar7 * 0.0 + fVar12 * fVar14;
    fVar12 = fVar5 * fVar4 + fVar9 * fVar11 + param_3[0xc];
    fVar4 = fVar4 * fVar7 + fVar9 * fVar14 + param_3[0xb];
    fVar11 = fVar6 * fVar5 + fVar11 * 0.0 + fVar12;
    fVar7 = fVar6 * fVar7 + fVar14 * 0.0 + fVar4;
    fVar14 = fVar8 + fVar12;
    fVar6 = fVar13 + fVar4;
    fVar8 = fVar8 + fVar11;
    fVar13 = fVar13 + fVar7;
    fVar5 = fVar11;
    if (fVar11 <= fVar14) {
      fVar5 = fVar14;
    }
    if (fVar5 <= fVar8) {
      fVar5 = fVar8;
    }
    fVar9 = fVar12;
    if (fVar12 <= fVar5) {
      fVar9 = fVar5;
    }
    fVar5 = fVar7;
    if (fVar7 <= fVar6) {
      fVar5 = fVar6;
    }
    if (fVar5 <= fVar13) {
      fVar5 = fVar13;
    }
    fVar10 = fVar4;
    if (fVar4 <= fVar5) {
      fVar10 = fVar5;
    }
    if (fVar14 <= fVar11) {
      fVar11 = fVar14;
    }
    if (fVar8 <= fVar11) {
      fVar11 = fVar8;
    }
    if (fVar11 <= fVar12) {
      fVar12 = fVar11;
    }
    if (fVar6 <= fVar7) {
      fVar7 = fVar6;
    }
    if (fVar13 <= fVar7) {
      fVar7 = fVar13;
    }
    if (fVar7 <= fVar4) {
      fVar4 = fVar7;
    }
    if (*param_7 != '\x01') {
      *param_2 = fVar4;
      param_2[1] = fVar12;
      param_2[2] = fVar10;
      param_2[3] = fVar9;
      return;
    }
    fVar7 = param_4[3];
    if (fVar9 <= param_4[3]) {
      fVar7 = fVar9;
    }
    fVar5 = param_4[1];
    if (param_4[1] <= fVar12) {
      fVar5 = fVar12;
    }
    if (fVar5 <= fVar7) {
      fVar11 = param_4[2];
      if (fVar10 <= param_4[2]) {
        fVar11 = fVar10;
      }
      fVar14 = *param_4;
      if (*param_4 <= fVar4) {
        fVar14 = fVar4;
      }
      if (fVar14 <= fVar11) {
        *param_2 = fVar14;
        param_2[1] = fVar5;
        param_2[2] = fVar11;
        param_2[3] = fVar7;
        return;
      }
    }
    fVar7 = 0.0;
    fVar5 = 0.0;
    fVar11 = 0.0;
    fVar14 = 0.0;
  }
  else {
    fVar7 = *param_4;
    fVar5 = param_4[1];
    fVar11 = param_4[2];
    fVar14 = param_4[3];
  }
  *param_2 = fVar7;
  param_2[1] = fVar5;
  param_2[2] = fVar11;
  param_2[3] = fVar14;
  return;
}



// FUNCTION 144b016b8 FUN_144b016b8 body=14 status=ok
// SIG undefined FUN_144b016b8(void)

undefined8 * FUN_144b016b8(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x380);
  return param_2;
}



// FUNCTION 144b016d0 FUN_144b016d0 body=293 status=ok
// SIG undefined FUN_144b016d0(void)

int FUN_144b016d0(longlong *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    iVar7 = 0;
  }
  else {
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    piVar12 = (int *)((longlong)plVar8 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    iVar7 = 0;
    do {
      iVar3 = *piVar12;
      lVar9 = (longlong)iVar3;
      if (lVar9 == -1) {
        return iVar7;
      }
      piVar1 = (int *)(*param_1 + lVar9 * 0xc);
      iVar4 = *piVar1;
      if (iVar4 == param_2) {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = param_1 + 7;
        }
        iVar11 = *(int *)((longlong)plVar8 + (longlong)piVar1[2] * 4);
        if (iVar11 == iVar3) {
          piVar13 = (int *)((longlong)plVar8 + (longlong)piVar1[2] * 4);
        }
        else {
          do {
            piVar13 = (int *)(*param_1 + (longlong)iVar11 * 0xc + 4);
            iVar11 = *piVar13;
          } while (iVar11 != iVar3);
        }
        *piVar13 = piVar1[1];
        lVar5 = *param_1;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar5 + (longlong)(int)param_1[6] * 0xc) = iVar3;
        }
        *(undefined4 *)(lVar5 + lVar9 * 0xc) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar5 + lVar9 * 0xc + 4) = uVar10;
        *(int *)(param_1 + 6) = iVar3;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        plVar8 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar8 = param_1 + 2;
        }
        iVar11 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar11 = iVar3;
        }
        bVar6 = (byte)iVar3 & 0x1f;
        puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar11 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        iVar7 = iVar7 + 1;
      }
      else {
        piVar12 = piVar1 + 1;
      }
    } while (iVar4 != param_2);
  }
  return iVar7;
}



// FUNCTION 144b017f6 FUN_144b017f6 body=120 status=ok
// SIG undefined FUN_144b017f6(void)

void FUN_144b017f6(longlong *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  param_1 = (longlong *)*param_1;
  if ((param_1 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_1 + 0xc))) {
    cVar4 = *(char *)(*(longlong *)(*param_1 + 0x2c0) + 0xb + (longlong)(int)param_1[1] * 0x10);
    lVar6 = 0x548;
    if ((cVar4 == '\x01') || (cVar4 == '\x04')) goto LAB_144b0183b;
  }
  lVar6 = 0x48;
LAB_144b0183b:
  lVar6 = *(longlong *)(*param_1 + lVar6);
  lVar5 = (longlong)(int)param_1[1] * 0x10;
  fVar1 = *(float *)(lVar6 + 0xc + lVar5);
  fVar2 = *(float *)(lVar6 + 8 + lVar5);
  fVar3 = *(float *)(lVar6 + 4 + lVar5);
  *param_2 = (double)*(float *)(lVar6 + lVar5);
  param_2[1] = (double)fVar3;
  param_2[2] = (double)fVar2;
  param_2[3] = (double)fVar1;
  return;
}



// FUNCTION 144b0186e FUN_144b0186e body=231 status=ok
// SIG undefined FUN_144b0186e(void)

void FUN_144b0186e(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  param_2[2] = *(double *)(param_1 + 0x30);
  dVar7 = *(double *)(param_1 + 0x28);
  *param_2 = *(double *)(param_1 + 0x20);
  param_2[1] = dVar7;
  param_2[5] = *(double *)(param_1 + 0x30);
  dVar7 = *(double *)(param_1 + 0x28);
  param_2[3] = *(double *)(param_1 + 0x20);
  param_2[4] = dVar7;
  dVar7 = *(double *)(param_1 + 0x50);
  dVar5 = *(double *)(param_1 + 0x48) * dVar7 + *(double *)(param_1 + 0x30);
  dVar6 = *(double *)(param_1 + 0x40) * dVar7 + *(double *)(param_1 + 0x28);
  dVar1 = *(double *)(param_1 + 0x10);
  dVar4 = dVar7 * *(double *)(param_1 + 0x38) + *(double *)(param_1 + 0x20);
  dVar7 = param_2[2];
  if (dVar5 <= param_2[2]) {
    dVar7 = dVar5;
  }
  dVar3 = param_2[1];
  if (dVar6 <= param_2[1]) {
    dVar3 = dVar6;
  }
  dVar8 = *param_2;
  if (dVar4 <= *param_2) {
    dVar8 = dVar4;
  }
  dVar2 = param_2[5];
  if (param_2[5] <= dVar5) {
    dVar2 = dVar5;
  }
  dVar5 = param_2[4];
  if (param_2[4] <= dVar6) {
    dVar5 = dVar6;
  }
  dVar6 = param_2[3];
  if (param_2[3] <= dVar4) {
    dVar6 = dVar4;
  }
  *param_2 = dVar8 - dVar1;
  param_2[1] = dVar3 - dVar1;
  param_2[2] = dVar7 - dVar1;
  param_2[3] = dVar6 + dVar1;
  param_2[4] = dVar5 + dVar1;
  param_2[5] = dVar2 + dVar1;
  return;
}



// FUNCTION 144b01956 FUN_144b01956 body=707 status=ok
// SIG undefined FUN_144b01956(void)

double * FUN_144b01956(longlong param_1,double *param_2,double *param_3)

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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar6 = *(double *)(param_1 + 0x20);
  dVar14 = *(double *)(param_1 + 0x28);
  dVar7 = param_3[3];
  dVar1 = param_3[3];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  dVar10 = dVar14 * dVar3 - dVar6 * dVar4;
  dVar11 = *(double *)(param_1 + 0x30) * dVar4 - dVar14 * dVar5;
  dVar12 = dVar6 * dVar5 - *(double *)(param_1 + 0x30) * dVar3;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar8 = *(double *)(param_1 + 0x50);
  dVar9 = *(double *)(param_1 + 0x48) * dVar8 + *(double *)(param_1 + 0x30);
  dVar17 = *(double *)(param_1 + 0x40) * dVar8 + *(double *)(param_1 + 0x28);
  dVar16 = dVar8 * *(double *)(param_1 + 0x38) + dVar6;
  dVar8 = dVar17 * dVar3 - dVar4 * dVar16;
  dVar2 = dVar9 * dVar4 - dVar5 * dVar17;
  dVar15 = dVar16 * dVar5 - dVar9 * dVar3;
  dVar2 = dVar2 + dVar2;
  dVar15 = dVar15 + dVar15;
  dVar8 = dVar8 + dVar8;
  dVar13 = (dVar10 * dVar4 - dVar12 * dVar5) + dVar7 * dVar11 + dVar6 + param_3[4];
  dVar14 = (dVar5 * dVar11 - dVar3 * dVar10) + dVar1 * dVar12 + dVar14 + param_3[5];
  dVar6 = dVar10 * dVar7 + *(double *)(param_1 + 0x30) + (dVar12 * dVar3 - dVar11 * dVar4) +
          param_3[6];
  dVar16 = (dVar8 * dVar4 - dVar15 * dVar5) + dVar7 * dVar2 + dVar16 + param_3[4];
  dVar17 = (dVar5 * dVar2 - dVar3 * dVar8) + dVar1 * dVar15 + dVar17 + param_3[5];
  dVar1 = dVar8 * dVar7 + dVar9 + (dVar15 * dVar3 - dVar2 * dVar4) + param_3[6];
  dVar7 = dVar13;
  if (dVar16 <= dVar13) {
    dVar7 = dVar16;
  }
  if (dVar13 <= dVar16) {
    dVar13 = dVar16;
  }
  dVar8 = dVar14;
  if (dVar17 <= dVar14) {
    dVar8 = dVar17;
  }
  dVar9 = dVar6;
  if (dVar1 <= dVar6) {
    dVar9 = dVar1;
  }
  if (dVar14 <= dVar17) {
    dVar14 = dVar17;
  }
  if (dVar6 <= dVar1) {
    dVar6 = dVar1;
  }
  dVar1 = *(double *)(param_1 + 0x10);
  *param_2 = dVar7 - dVar1;
  param_2[1] = dVar8 - dVar1;
  param_2[2] = dVar9 - dVar1;
  param_2[3] = dVar13 + dVar1;
  param_2[4] = dVar14 + dVar1;
  param_2[5] = dVar6 + dVar1;
  return param_2;
}



// FUNCTION 144b01c1a FUN_144b01c1a body=349 status=ok
// SIG undefined FUN_144b01c1a(void)

double * FUN_144b01c1a(longlong param_1,double *param_2,double *param_3)

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
  
  dVar6 = *(double *)(param_1 + 0x20) * param_3[8];
  dVar7 = *(double *)(param_1 + 0x28) * param_3[9];
  dVar5 = *(double *)(param_1 + 0x30) * param_3[10];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar2 = param_3[2];
  dVar1 = param_3[3];
  dVar8 = dVar7 * dVar3 - dVar6 * dVar4;
  dVar9 = dVar5 * dVar4 - dVar7 * dVar2;
  dVar10 = dVar6 * dVar2 - dVar3 * dVar5;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  dVar6 = (dVar8 * dVar4 - dVar10 * dVar2) + dVar1 * dVar9 + dVar6 + param_3[4];
  dVar2 = (dVar2 * dVar9 - dVar3 * dVar8) + param_3[3] * dVar10 + dVar7 + param_3[5];
  dVar10 = dVar8 * dVar1 + dVar5 + (dVar10 * dVar3 - dVar9 * dVar4) + param_3[6];
  dVar1 = *(double *)(param_1 + 0x10);
  *param_2 = dVar6 - dVar1;
  param_2[1] = dVar2 - dVar1;
  param_2[2] = dVar10 - dVar1;
  param_2[3] = dVar1 + dVar6;
  param_2[4] = dVar1 + dVar2;
  param_2[5] = dVar1 + dVar10;
  return param_2;
}



// FUNCTION 144b01d78 FUN_144b01d78 body=225 status=ok
// SIG undefined FUN_144b01d78(void)

void FUN_144b01d78(undefined8 *param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  *param_1 = param_2;
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  param_1[1] = ~-(ulonglong)(ABS(*param_2) < 9.99999993922529e-09) & (ulonglong)(1.0 / *param_2);
  param_1[2] = ~-(ulonglong)(ABS(dVar2) < 9.99999993922529e-09) & (ulonglong)(1.0 / dVar2);
  param_1[3] = ~-(ulonglong)(ABS(dVar1) < 9.99999993922529e-09) & (ulonglong)(1.0 / dVar1);
  *(bool *)(param_1 + 6) = ABS(*param_2) < 9.99999993922529e-09;
  *(bool *)((longlong)param_1 + 0x31) = ABS(param_2[1]) < 9.99999993922529e-09;
  *(bool *)((longlong)param_1 + 0x32) = ABS(param_2[2]) < 9.99999993922529e-09;
  param_1[4] = param_3;
  if ((param_3 != 0.0) || (NAN(param_3))) {
    param_1[5] = 1.0 / param_3;
  }
  return;
}



// FUNCTION 144b01e5a FUN_144b01e5a body=470 status=ok
// SIG undefined FUN_144b01e5a(void)

void FUN_144b01e5a(longlong param_1,longlong *param_2,int param_3,uint *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
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
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  longlong lVar25;
  
  uVar20 = *param_4;
  lVar25 = (longlong)param_3;
  if ((uVar20 & 1) != 0) {
    lVar22 = *param_2;
    lVar21 = lVar25 * 0x30;
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    uVar6 = *(undefined4 *)(param_1 + 0x28);
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
    uVar8 = *(undefined4 *)(param_1 + 0x30);
    uVar9 = *(undefined4 *)(param_1 + 0x34);
    uVar10 = *(undefined4 *)(param_1 + 0x38);
    uVar11 = *(undefined4 *)(param_1 + 0x3c);
    uVar12 = *(undefined4 *)(param_1 + 0x44);
    uVar13 = *(undefined4 *)(param_1 + 0x48);
    uVar14 = *(undefined4 *)(param_1 + 0x4c);
    puVar3 = (undefined4 *)(lVar22 + 0x20 + lVar21);
    *puVar3 = *(undefined4 *)(param_1 + 0x40);
    puVar3[1] = uVar12;
    puVar3[2] = uVar13;
    puVar3[3] = uVar14;
    puVar3 = (undefined4 *)(lVar22 + 0x10 + lVar21);
    *puVar3 = uVar8;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    puVar3 = (undefined4 *)(lVar22 + lVar21);
    *puVar3 = uVar4;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    uVar20 = *param_4;
  }
  if ((uVar20 & 0x10) != 0) {
    plVar2 = (longlong *)(param_2[8] + lVar25 * 0x20);
    puVar23 = *(undefined8 **)(param_1 + 0x50);
    puVar24 = *(undefined8 **)(param_2[8] + lVar25 * 0x20);
    if (puVar24 != puVar23) {
      *plVar2 = (longlong)puVar23;
      if (puVar23 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
        UNLOCK();
      }
      if (puVar24 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar24 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar24 + 0xc) == 0)) {
          (**(code **)*puVar24)(puVar24,1);
        }
      }
    }
    *(undefined2 *)(plVar2 + 3) = *(undefined2 *)(param_1 + 0x68);
    lVar22 = *(longlong *)(param_1 + 0x60);
    plVar2[1] = *(longlong *)(param_1 + 0x58);
    plVar2[2] = lVar22;
    uVar20 = *param_4;
  }
  if ((uVar20 & 2) != 0) {
    lVar22 = param_2[2];
    *(undefined8 *)(lVar22 + 0x10 + lVar25 * 0x18) = *(undefined8 *)(param_1 + 0xa8);
    uVar15 = *(undefined8 *)(param_1 + 0xa0);
    puVar23 = (undefined8 *)(lVar22 + lVar25 * 0x18);
    *puVar23 = *(undefined8 *)(param_1 + 0x98);
    puVar23[1] = uVar15;
    uVar20 = *param_4;
  }
  if ((uVar20 & 0x40) != 0) {
    lVar22 = param_2[0xc];
    lVar21 = lVar25 * 0x40;
    *(undefined8 *)(lVar22 + 0x30 + lVar21) = *(undefined8 *)(param_1 + 0xe0);
    uVar15 = *(undefined8 *)(param_1 + 0xb0);
    uVar16 = *(undefined8 *)(param_1 + 0xb8);
    uVar17 = *(undefined8 *)(param_1 + 0xc0);
    uVar18 = *(undefined8 *)(param_1 + 200);
    uVar19 = *(undefined8 *)(param_1 + 0xd8);
    puVar23 = (undefined8 *)(lVar22 + 0x20 + lVar21);
    *puVar23 = *(undefined8 *)(param_1 + 0xd0);
    puVar23[1] = uVar19;
    puVar23 = (undefined8 *)(lVar22 + 0x10 + lVar21);
    *puVar23 = uVar17;
    puVar23[1] = uVar18;
    *(undefined8 *)(lVar22 + lVar21) = uVar15;
    ((undefined8 *)(lVar22 + lVar21))[1] = uVar16;
    uVar20 = *param_4;
  }
  if ((uVar20 & 0x20) != 0) {
    puVar23 = (undefined8 *)(param_1 + 0xf0);
    puVar24 = (undefined8 *)(lVar25 * 0x70 + param_2[10]);
    for (lVar22 = 0xd; lVar22 != 0; lVar22 = lVar22 + -1) {
      *puVar24 = *puVar23;
      puVar23 = puVar23 + 1;
      puVar24 = puVar24 + 1;
    }
    uVar20 = *param_4;
  }
  if ((uVar20 & 4) != 0) {
    lVar22 = param_2[4];
    lVar21 = lVar25 * 0x30;
    uVar15 = *(undefined8 *)(param_1 + 0x160);
    uVar16 = *(undefined8 *)(param_1 + 0x168);
    uVar17 = *(undefined8 *)(param_1 + 0x170);
    uVar18 = *(undefined8 *)(param_1 + 0x178);
    uVar19 = *(undefined8 *)(param_1 + 0x188);
    puVar23 = (undefined8 *)(lVar22 + 0x20 + lVar21);
    *puVar23 = *(undefined8 *)(param_1 + 0x180);
    puVar23[1] = uVar19;
    puVar23 = (undefined8 *)(lVar22 + 0x10 + lVar21);
    *puVar23 = uVar17;
    puVar23[1] = uVar18;
    *(undefined8 *)(lVar22 + lVar21) = uVar15;
    ((undefined8 *)(lVar22 + lVar21))[1] = uVar16;
    uVar20 = *param_4;
  }
  if ((uVar20 & 8) != 0) {
    lVar22 = param_2[6];
    lVar25 = lVar25 * 0x2c;
    uVar15 = *(undefined8 *)(param_1 + 400);
    uVar16 = *(undefined8 *)(param_1 + 0x198);
    uVar17 = *(undefined8 *)(param_1 + 0x1a0);
    uVar18 = *(undefined8 *)(param_1 + 0x1a8);
    uVar19 = *(undefined8 *)(param_1 + 0x1b4);
    puVar23 = (undefined8 *)(lVar22 + 0x1c + lVar25);
    *puVar23 = *(undefined8 *)(param_1 + 0x1ac);
    puVar23[1] = uVar19;
    puVar23 = (undefined8 *)(lVar22 + 0x10 + lVar25);
    *puVar23 = uVar17;
    puVar23[1] = uVar18;
    *(undefined8 *)(lVar22 + lVar25) = uVar15;
    ((undefined8 *)(lVar22 + lVar25))[1] = uVar16;
  }
  return;
}



// FUNCTION 144b02030 FUN_144b02030 body=476 status=ok
// SIG undefined FUN_144b02030(void)

void FUN_144b02030(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  int *piVar8;
  ulonglong uVar9;
  
  plVar2 = (longlong *)param_1[1];
  lVar6 = param_1[2];
  do {
    if (plVar2 == (longlong *)0x0) {
      iVar5 = (int)param_1[3] + 1;
      *(int *)(param_1 + 3) = iVar5;
      if (*(int *)((longlong)param_1 + 0x24) <= iVar5) {
        lVar6 = param_1[4];
        uVar3 = (longlong)(int)lVar6 + 1;
        *(int *)(param_1 + 4) = (int)uVar3;
        plVar4 = (longlong *)*param_1;
        if ((int)uVar3 < (int)plVar4[1]) {
          lVar6 = (longlong)(int)lVar6 * 0x10 + 0x18;
          do {
            lVar1 = *(longlong *)(*plVar4 + lVar6);
            if (lVar1 == 0) {
              piVar8 = (int *)(*(longlong *)(*plVar4 + -8 + lVar6) + 0x18);
            }
            else {
              piVar8 = (int *)(lVar1 + 8);
            }
            if (*piVar8 != 0) goto LAB_144b02104;
            uVar9 = uVar3 + 1;
            *(int *)(param_1 + 4) = (int)uVar3 + 1;
            lVar6 = lVar6 + 0x10;
            uVar3 = uVar9;
          } while ((longlong)uVar9 < (longlong)(int)plVar4[1]);
          goto LAB_144b02101;
        }
        goto LAB_144b02104;
      }
      plVar2 = (longlong *)0x0;
    }
    else {
      lVar6 = param_1[5];
      iVar5 = (int)lVar6 + 1;
      *(int *)(param_1 + 5) = iVar5;
      if (iVar5 < (int)plVar2[1]) {
        plVar4 = *(longlong **)(*plVar2 + 8 + (longlong)(int)lVar6 * 8);
        lVar6 = *plVar4;
        if (lVar6 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined1 *)(lVar6 + 0x70);
        }
        iVar5 = (int)plVar4[1];
        param_1[2] = lVar6;
        *(int *)(param_1 + 3) = iVar5;
        *(undefined1 *)((longlong)param_1 + 0x1c) = uVar7;
      }
      else {
        lVar6 = param_1[4];
        uVar3 = (longlong)(int)lVar6 + 1;
        *(int *)(param_1 + 4) = (int)uVar3;
        plVar4 = (longlong *)*param_1;
        if ((int)uVar3 < (int)plVar4[1]) {
          lVar6 = (longlong)(int)lVar6 * 0x10 + 0x18;
          do {
            lVar1 = *(longlong *)(*plVar4 + lVar6);
            if (lVar1 == 0) {
              piVar8 = (int *)(*(longlong *)(*plVar4 + -8 + lVar6) + 0x18);
            }
            else {
              piVar8 = (int *)(lVar1 + 8);
            }
            if (*piVar8 != 0) goto LAB_144b02104;
            uVar9 = uVar3 + 1;
            *(int *)(param_1 + 4) = (int)uVar3 + 1;
            lVar6 = lVar6 + 0x10;
            uVar3 = uVar9;
          } while ((longlong)uVar9 < (longlong)(int)plVar4[1]);
LAB_144b02101:
          uVar3 = uVar9 & 0xffffffff;
        }
LAB_144b02104:
        *(undefined4 *)(param_1 + 5) = 0;
        if ((int)plVar4[1] <= (int)uVar3) {
          param_1[4] = 0;
          *(undefined4 *)(param_1 + 5) = 0;
          *(undefined8 *)((longlong)param_1 + 0x15) = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          return;
        }
        lVar6 = (longlong)(int)uVar3 * 0x10;
        plVar2 = *(longlong **)(*plVar4 + 8 + lVar6);
        param_1[1] = (longlong)plVar2;
        if (plVar2 == (longlong *)0x0) {
          lVar6 = *(longlong *)(*plVar4 + lVar6);
          iVar5 = 0;
        }
        else {
          iVar5 = (int)(*(longlong **)*plVar2)[1];
          lVar6 = **(longlong **)*plVar2;
        }
        if (lVar6 == 0) {
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = *(undefined1 *)(lVar6 + 0x70);
        }
        param_1[2] = lVar6;
        *(int *)(param_1 + 3) = iVar5;
        *(undefined1 *)((longlong)param_1 + 0x1c) = uVar7;
        *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar6 + 0x18);
      }
    }
    if ((lVar6 == 0) || (*(char *)(*(longlong *)(lVar6 + 0x230) + (longlong)iVar5) == '\0')) {
      return;
    }
  } while( true );
}



// FUNCTION 144b0220c FUN_144b0220c body=89 status=ok
// SIG undefined FUN_144b0220c(void)

void FUN_144b0220c(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 0x18),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 0x18),
            (longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 144b02266 FUN_144b02266 body=181 status=ok
// SIG undefined FUN_144b02266(void)

void FUN_144b02266(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) < (int)param_2) {
    FUN_146ce5cf4(param_1 + 0x18,param_2);
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_146ce5d54(plVar1,0);
    uVar2 = *(uint *)(param_1 + 0x30);
  }
  uVar3 = param_2 - uVar2;
  if (uVar3 == 0 || (int)param_2 < (int)uVar2) {
    if (uVar2 <= param_2) {
      return;
    }
    *(uint *)(param_1 + 0x30) = param_2;
    FUN_146ce5f18(plVar1);
    return;
  }
  *(uint *)(param_1 + 0x30) = param_2;
  if (*(int *)(param_1 + 0x34) - uVar2 < uVar3) {
    FUN_146ce5dee(plVar1,uVar2);
  }
  FUN_146ce5dc4((longlong)(int)uVar2 * 0x160 + *plVar1,uVar3);
  return;
}



// FUNCTION 144b0231c FUN_144b0231c body=183 status=ok
// SIG undefined FUN_144b0231c(void)

void FUN_144b0231c(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar5 = *param_1;
  if (lVar5 != param_2) {
    iVar6 = *(int *)(lVar5 + 0x10);
    if (0 < iVar6) {
      lVar4 = param_1[1];
      lVar7 = 0;
      do {
        plVar3 = *(longlong **)(*(longlong *)(lVar5 + 8) + lVar7 * 8);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))
                    (plVar3,(int)lVar4,*(undefined8 *)(*(longlong *)(param_2 + 8) + lVar7 * 8));
          iVar6 = *(int *)(lVar5 + 0x10);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar6);
    }
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + -1;
    uVar2 = *(uint *)(param_1 + 1);
    lVar5 = *param_1;
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(*(longlong *)(*(longlong *)(lVar5 + 0x98) + (longlong)(int)uVar2 * 8) + 8) = uVar2;
      lVar5 = *param_1;
    }
    iVar6 = *(int *)(param_2 + 0x18) + -1;
    *(int *)(param_1 + 1) = iVar6;
    puVar1 = (uint *)(*(longlong *)(param_2 + 0x248) + (longlong)iVar6 * 4);
    *puVar1 = *puVar1 & ~*(uint *)(lVar5 + 0x74);
    puVar1 = (uint *)(*(longlong *)(param_2 + 0x248) + (longlong)(int)param_1[1] * 4);
    *puVar1 = *puVar1 | *(uint *)(param_2 + 0x74);
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 144b023d4 FUN_144b023d4 body=3341 status=ok
// SIG undefined FUN_144b023d4(void)

double FUN_144b023d4(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  float *pfVar26;
  uint uVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  double local_1b8;
  double local_1b0;
  double local_190;
  double local_120;
  double local_118;
  double local_110;
  
  lVar5 = *(longlong *)(param_1 + 0x88);
  uVar27 = *(uint *)(lVar5 + 0x28);
  if ((ulonglong)uVar27 == 0) {
    local_1b0 = 3.4028234663852886e+38;
  }
  else if ((int)uVar27 < 1) {
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 1.0;
    local_1b0 = -1.79769313486232e+308;
  }
  else {
    pfVar26 = (float *)(*(longlong *)(lVar5 + 0x20) + 0x14);
    dVar3 = 0.0;
    dVar29 = 1.0;
    uVar28 = 0;
    local_1b0 = -1.79769313486232e+308;
    uVar21 = 0;
    dVar37 = 0.0;
    do {
      fVar48 = *pfVar26 / (float)*(double *)(param_1 + 0x30);
      fVar50 = pfVar26[-1] / (float)*(double *)(param_1 + 0x28);
      fVar49 = pfVar26[-2] / (float)*(double *)(param_1 + 0x20);
      fVar51 = 1.0 / SQRT(fVar48 * fVar48 + fVar49 * fVar49 + fVar50 * fVar50);
      dVar47 = (param_2[2] - (double)(pfVar26[-3] * (float)*(double *)(param_1 + 0x30))) *
               (double)(fVar48 * fVar51) +
               (*param_2 - (double)(pfVar26[-5] * (float)*(double *)(param_1 + 0x20))) *
               (double)(fVar51 * fVar49) +
               (param_2[1] - (double)(pfVar26[-4] * (float)*(double *)(param_1 + 0x28))) *
               (double)(fVar50 * fVar51);
      if (local_1b0 < dVar47) {
        uVar21 = uVar28 & 0xffffffff;
        dVar29 = (double)(fVar48 * fVar51);
        dVar37 = (double)(fVar51 * fVar49);
        dVar3 = (double)(fVar50 * fVar51);
        local_1b0 = dVar47;
      }
      uVar28 = uVar28 + 1;
      pfVar26 = pfVar26 + 6;
    } while (uVar27 != uVar28);
    *param_3 = dVar37;
    param_3[1] = dVar3;
    param_3[2] = dVar29;
    if (0.0 <= local_1b0) {
      lVar25 = (longlong)(int)uVar21;
      plVar6 = *(longlong **)(lVar5 + 0x58);
      uVar27 = 0;
      if (plVar6 != (longlong *)0x0) {
        cVar4 = *(char *)(lVar5 + 0x60);
        if (cVar4 == '\x01') {
          uVar27 = (uint)*(byte *)(*plVar6 + 1 + lVar25 * 2);
        }
        else if (cVar4 == '\x02') {
          uVar27 = (int)*(short *)(*plVar6 + 2 + lVar25 * 4);
        }
        else {
          uVar27 = 0;
          if (cVar4 == '\x03') {
            uVar27 = *(uint *)(*plVar6 + 4 + lVar25 * 8);
          }
        }
      }
      dVar47 = param_2[2];
      dVar1 = *param_2;
      dVar2 = param_2[1];
      if (2 < (int)uVar27) {
        dVar40 = dVar47 - dVar29 * local_1b0;
        dVar15 = dVar2 - dVar3 * local_1b0;
        dVar30 = dVar1 - dVar37 * local_1b0;
        lVar7 = *(longlong *)(lVar5 + 0x30);
        dVar3 = *(double *)(param_1 + 0x30);
        dVar29 = *(double *)(param_1 + 0x20);
        dVar37 = *(double *)(param_1 + 0x28);
        dVar31 = 1.79769313486232e+308;
        lVar22 = 2;
        do {
          uVar23 = 0xffffffff;
          uVar18 = 0xffffffff;
          if (plVar6 != (longlong *)0x0) {
            cVar4 = *(char *)(lVar5 + 0x60);
            if (cVar4 == '\x01') {
              uVar18 = (uint)*(byte *)(plVar6[2] + 1 +
                                      (ulonglong)*(byte *)(*plVar6 + lVar25 * 2) * 3);
            }
            else if (cVar4 == '\x02') {
              uVar18 = (uint)*(short *)(plVar6[2] + 2 +
                                       (longlong)*(short *)(*plVar6 + lVar25 * 4) * 6);
            }
            else if (cVar4 == '\x03') {
              uVar18 = *(uint *)(plVar6[2] + 4 + (longlong)*(int *)(*plVar6 + lVar25 * 8) * 0xc);
            }
          }
          if (plVar6 != (longlong *)0x0) {
            cVar4 = *(char *)(lVar5 + 0x60);
            if (cVar4 == '\x01') {
              uVar23 = (uint)*(byte *)(plVar6[2] + -2 +
                                      ((ulonglong)*(byte *)(*plVar6 + lVar25 * 2) + lVar22) * 3);
            }
            else if (cVar4 == '\x02') {
              uVar23 = (uint)*(short *)(plVar6[2] + -4 +
                                       (*(short *)(*plVar6 + lVar25 * 4) + lVar22) * 6);
            }
            else if (cVar4 == '\x03') {
              uVar23 = *(uint *)(plVar6[2] + -8 + (*(int *)(*plVar6 + lVar25 * 8) + lVar22) * 0xc);
            }
          }
          uVar20 = 0xffffffff;
          if (plVar6 != (longlong *)0x0) {
            cVar4 = *(char *)(lVar5 + 0x60);
            if (cVar4 == '\x01') {
              uVar20 = (uint)*(byte *)(plVar6[2] + 1 +
                                      ((ulonglong)*(byte *)(*plVar6 + lVar25 * 2) + lVar22) * 3);
            }
            else if (cVar4 == '\x02') {
              uVar20 = (uint)*(short *)(plVar6[2] + 2 +
                                       (*(short *)(*plVar6 + lVar25 * 4) + lVar22) * 6);
            }
            else if (cVar4 == '\x03') {
              uVar20 = *(uint *)(plVar6[2] + 4 + (*(int *)(*plVar6 + lVar25 * 8) + lVar22) * 0xc);
            }
          }
          lVar19 = (longlong)(int)uVar18;
          dVar34 = (double)*(float *)(lVar7 + 8 + lVar19 * 0xc) * dVar3;
          dVar12 = (double)*(float *)(lVar7 + 4 + lVar19 * 0xc) * dVar37;
          dVar45 = (double)*(float *)(lVar7 + lVar19 * 0xc) * dVar29;
          lVar19 = (longlong)(int)uVar23;
          dVar8 = (double)*(float *)(lVar7 + 8 + lVar19 * 0xc) * dVar3;
          dVar14 = (double)*(float *)(lVar7 + 4 + lVar19 * 0xc) * dVar37;
          lVar24 = (longlong)(int)uVar20;
          dVar16 = (double)*(float *)(lVar7 + lVar19 * 0xc) * dVar29;
          dVar41 = (double)*(float *)(lVar7 + 4 + lVar24 * 0xc) * dVar37;
          dVar35 = (double)*(float *)(lVar7 + lVar24 * 0xc) * dVar29;
          dVar9 = dVar8 - dVar34;
          dVar39 = dVar14 - dVar12;
          dVar17 = dVar16 - dVar45;
          dVar44 = dVar41 - dVar12;
          dVar10 = dVar35 - dVar45;
          dVar33 = dVar9 * dVar9 + dVar17 * dVar17 + dVar39 * dVar39;
          dVar42 = (double)*(float *)(lVar7 + 8 + lVar24 * 0xc) * dVar3;
          dVar43 = dVar42 - dVar34;
          dVar11 = dVar43 * dVar43 + dVar10 * dVar10 + dVar44 * dVar44;
          dVar32 = dVar9 * dVar43 + dVar17 * dVar10 + dVar39 * dVar44;
          dVar13 = (dVar40 - dVar34) * dVar9 +
                   (dVar30 - dVar45) * dVar17 + (dVar15 - dVar12) * dVar39;
          dVar36 = (dVar40 - dVar34) * dVar43 +
                   (dVar30 - dVar45) * dVar10 + (dVar15 - dVar12) * dVar44;
          dVar38 = dVar33 * dVar11 - dVar32 * dVar32;
          dVar46 = (dVar11 * dVar13 - dVar36 * dVar32) / dVar38;
          if ((((dVar46 < -9.999999747378752e-05) || (1.0000999999974738 < dVar46)) ||
              (dVar38 = (dVar36 * dVar33 + dVar13 * -dVar32) / dVar38,
              dVar38 < -9.999999747378752e-05)) ||
             ((1.0000999999974738 < dVar38 ||
              (dVar36 = dVar15, dVar13 = dVar30, local_1b8 = dVar40,
              1.0000999999974738 < dVar46 + dVar38)))) {
            dVar13 = dVar45;
            dVar36 = dVar12;
            local_1b8 = dVar34;
            if ((0.0001 <= dVar33) &&
               ((dVar38 = dVar9 * (dVar47 - dVar34) +
                          dVar17 * (dVar1 - dVar45) + (dVar2 - dVar12) * dVar39, 0.0 <= dVar38 &&
                (dVar38 = dVar38 / dVar33, dVar13 = dVar16, dVar36 = dVar14, local_1b8 = dVar8,
                dVar38 <= 1.0)))) {
              local_1b8 = dVar9 * dVar38 + dVar34;
              dVar36 = dVar39 * dVar38 + dVar12;
              dVar13 = dVar17 * dVar38 + dVar45;
            }
            dVar38 = dVar34;
            dVar9 = dVar45;
            local_190 = dVar12;
            if (((0.0001 <= dVar11) &&
                (dVar33 = (dVar47 - dVar34) * dVar43 +
                          (dVar1 - dVar45) * dVar10 + (dVar2 - dVar12) * dVar44, 0.0 <= dVar33)) &&
               (dVar33 = dVar33 / dVar11, dVar38 = dVar42, dVar9 = dVar35, local_190 = dVar41,
               dVar33 <= 1.0)) {
              dVar38 = dVar34 + dVar43 * dVar33;
              dVar9 = dVar45 + dVar10 * dVar33;
              local_190 = dVar12 + dVar44 * dVar33;
            }
            dVar10 = dVar42 - dVar8;
            dVar34 = dVar41 - dVar14;
            dVar39 = dVar35 - dVar16;
            dVar44 = (dVar47 - dVar8) * dVar10 +
                     (dVar1 - dVar16) * dVar39 + (dVar2 - dVar14) * dVar34;
            dVar33 = dVar8;
            dVar11 = dVar14;
            dVar12 = dVar16;
            if (((0.0 <= dVar44) &&
                (dVar46 = dVar10 * dVar10 + dVar39 * dVar39 + dVar34 * dVar34, 0.0001 <= dVar46)) &&
               (dVar44 = dVar44 / dVar46, dVar33 = dVar42, dVar11 = dVar41, dVar12 = dVar35,
               dVar44 <= 1.0)) {
              dVar33 = dVar8 + dVar10 * dVar44;
              dVar11 = dVar14 + dVar34 * dVar44;
              dVar12 = dVar16 + dVar39 * dVar44;
            }
            dVar8 = (dVar47 - local_1b8) * (dVar47 - local_1b8) +
                    (dVar1 - dVar13) * (dVar1 - dVar13) + (dVar2 - dVar36) * (dVar2 - dVar36);
            dVar35 = (dVar47 - dVar38) * (dVar47 - dVar38) +
                     (dVar1 - dVar9) * (dVar1 - dVar9) + (dVar2 - local_190) * (dVar2 - local_190);
            if (dVar35 <= dVar8) {
              dVar13 = dVar9;
              dVar36 = local_190;
              local_1b8 = dVar38;
              dVar8 = dVar35;
            }
            if ((dVar47 - dVar33) * (dVar47 - dVar33) +
                (dVar1 - dVar12) * (dVar1 - dVar12) + (dVar2 - dVar11) * (dVar2 - dVar11) <= dVar8)
            {
              dVar36 = dVar11;
              dVar13 = dVar12;
              local_1b8 = dVar33;
            }
          }
          if (dVar40 == dVar47 && (dVar30 == dVar1 && dVar15 == dVar2)) {
            return local_1b0;
          }
          dVar38 = SQRT((local_1b8 - dVar40) * (local_1b8 - dVar40) +
                        (dVar13 - dVar30) * (dVar13 - dVar30) +
                        (dVar36 - dVar15) * (dVar36 - dVar15));
          if (dVar38 < dVar31) {
            local_120 = local_1b8;
            dVar31 = dVar38;
            local_118 = dVar36;
            local_110 = dVar13;
          }
          lVar22 = lVar22 + 1;
        } while (uVar27 != (uint)lVar22);
      }
      dVar47 = dVar47 - local_120;
      dVar2 = dVar2 - local_118;
      dVar1 = dVar1 - local_110;
      dVar3 = SQRT(dVar47 * dVar47 + dVar1 * dVar1 + dVar2 * dVar2);
      if (9.99999993922529e-09 < dVar3) {
        *param_3 = dVar1 / dVar3;
        param_3[1] = dVar2 / dVar3;
        param_3[2] = dVar47 / dVar3;
        local_1b0 = dVar3;
      }
    }
  }
  return local_1b0;
}



// FUNCTION 144b030e2 FUN_144b030e2 body=131 status=ok
// SIG undefined FUN_144b030e2(void)

uint FUN_144b030e2(longlong *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (char)param_1[1];
  if (cVar1 == '\x01') {
    return (uint)*(byte *)(((longlong *)*param_1)[2] + 1 +
                          ((ulonglong)*(byte *)(*(longlong *)*param_1 + (longlong)*param_2 * 2) +
                          (longlong)param_2[1]) * 3);
  }
  if (cVar1 == '\x02') {
    uVar2 = (uint)*(short *)(((longlong *)*param_1)[2] + 2 +
                            ((longlong)*(short *)(*(longlong *)*param_1 + (longlong)*param_2 * 4) +
                            (longlong)param_2[1]) * 6);
  }
  else {
    uVar2 = 0xffffffff;
    if (cVar1 == '\x03') {
      return *(uint *)(((longlong *)*param_1)[2] + 4 +
                      ((longlong)*(int *)(*(longlong *)*param_1 + (longlong)*param_2 * 8) +
                      (longlong)param_2[1]) * 0xc);
    }
  }
  return uVar2;
}



// FUNCTION 144b03166 FUN_144b03166 body=89 status=ok
// SIG undefined FUN_144b03166(void)

void FUN_144b03166(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 0xc),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar1 - iVar3) * 0xc),
            (longlong)iVar3 * 0xc);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 144b031c0 FUN_144b031c0 body=1345 status=ok
// SIG undefined FUN_144b031c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b031c0(longlong param_1,double *param_2,double *param_3,undefined8 param_4,
                  undefined8 param_5,double *param_6,undefined1 (*param_7) [16],
                  undefined1 (*param_8) [16],undefined8 param_9)

{
  undefined1 auVar1 [16];
  double dVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  double *local_150;
  double *local_148;
  double *local_140;
  undefined8 local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  undefined1 local_c8 [16];
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  dVar13 = *param_2 - *(double *)(param_1 + 0x50);
  dVar8 = param_2[1] - *(double *)(param_1 + 0x58);
  dVar11 = param_2[2] - *(double *)(param_1 + 0x60);
  dVar2 = *(double *)(param_1 + 0x30);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  dVar9 = -dVar2;
  dVar10 = -*(double *)(param_1 + 0x38);
  dVar6 = *(double *)(param_1 + 0x40) * -1.0;
  dVar7 = *(double *)(param_1 + 0x48) * 1.0;
  dVar15 = dVar8 * dVar9 - dVar13 * dVar10;
  dVar16 = dVar11 * dVar10 - dVar8 * dVar6;
  dVar14 = dVar13 * dVar6 - dVar11 * dVar9;
  dVar16 = dVar16 + dVar16;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  auVar12 = divpd(_DAT_149934d80,auVar1);
  dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar12._0_8_);
  dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar12._8_8_);
  dVar8 = (dVar2 * dVar15 + dVar6 * dVar16 + dVar7 * dVar14 + dVar8) * dVar5;
  local_d8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x80))) &
                     (ulonglong)(1.0 / *(double *)(param_1 + 0x80)));
  local_b8 = (dVar15 * dVar7 + dVar11 + (dVar14 * dVar9 - dVar16 * dVar10)) * local_d8;
  local_c8._8_4_ = SUB84(dVar8,0);
  local_c8._0_8_ = ((dVar15 * dVar10 - dVar14 * dVar6) + dVar7 * dVar16 + dVar13) * dVar4;
  local_c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar8 = *param_3;
  dVar11 = param_3[1];
  dVar13 = dVar11 * dVar9 - dVar10 * dVar8;
  dVar15 = param_3[2] * dVar10 - dVar6 * dVar11;
  dVar14 = dVar8 * dVar6 - dVar9 * param_3[2];
  dVar15 = dVar15 + dVar15;
  dVar14 = dVar14 + dVar14;
  dVar13 = dVar13 + dVar13;
  dVar5 = (dVar2 * dVar13 + dVar6 * dVar15 + dVar7 * dVar14 + dVar11) * dVar5;
  local_d8 = (dVar13 * dVar7 + param_3[2] + (dVar14 * dVar9 - dVar15 * dVar10)) * local_d8;
  local_e8._8_4_ = SUB84(dVar5,0);
  local_e8._0_8_ = ((dVar13 * dVar10 - dVar14 * dVar6) + dVar7 * dVar15 + dVar8) * dVar4;
  local_e8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_138 = param_9;
  local_140 = &local_128;
  local_148 = &local_108;
  local_150 = param_6;
  local_158 = param_5;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
  if (cVar3 != '\0') {
    if ((*param_6 != 0.0) || (NAN(*param_6))) {
      local_108 = local_108 * *(double *)(param_1 + 0x70);
      dStack_100 = dStack_100 * *(double *)(param_1 + 0x78);
      local_f8 = local_f8 * *(double *)(param_1 + 0x80);
      dVar11 = *(double *)(param_1 + 0x30);
      dVar4 = *(double *)(param_1 + 0x38);
      dVar6 = *(double *)(param_1 + 0x40);
      dVar13 = *(double *)(param_1 + 0x48);
      dVar7 = dStack_100 * dVar11 - local_108 * dVar4;
      dVar9 = local_f8 * dVar4 - dStack_100 * dVar6;
      dVar5 = local_108 * dVar6 - dVar11 * local_f8;
      dVar9 = dVar9 + dVar9;
      dVar5 = dVar5 + dVar5;
      dVar7 = dVar7 + dVar7;
      dVar2 = (dVar6 * dVar9 - dVar11 * dVar7) + *(double *)(param_1 + 0x48) * dVar5 + dStack_100 +
              *(double *)(param_1 + 0x58);
      dVar8 = *(double *)(param_1 + 0x60);
      auVar1._8_4_ = SUB84(dVar2,0);
      auVar1._0_8_ = (dVar7 * dVar4 - dVar5 * dVar6) + dVar13 * dVar9 + local_108 +
                     *(double *)(param_1 + 0x50);
      auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      *param_7 = auVar1;
      *(double *)param_7[1] = dVar7 * dVar13 + local_f8 + (dVar5 * dVar11 - dVar9 * dVar4) + dVar8;
      local_128 = local_128 * *(double *)(param_1 + 0x70);
      dStack_120 = dStack_120 * *(double *)(param_1 + 0x78);
      local_118 = local_118 * *(double *)(param_1 + 0x80);
      dVar2 = *(double *)(param_1 + 0x30);
      dVar11 = *(double *)(param_1 + 0x38);
      dVar4 = *(double *)(param_1 + 0x40);
      dVar13 = *(double *)(param_1 + 0x48);
      dVar6 = dStack_120 * dVar2 - local_128 * dVar11;
      dVar7 = local_118 * dVar11 - dStack_120 * dVar4;
      dVar8 = local_128 * dVar4 - dVar2 * local_118;
      dVar7 = dVar7 + dVar7;
      dVar8 = dVar8 + dVar8;
      dVar6 = dVar6 + dVar6;
      dVar5 = (dVar4 * dVar7 - dVar2 * dVar6) + *(double *)(param_1 + 0x48) * dVar8 + dStack_120;
      auVar12._8_4_ = SUB84(dVar5,0);
      auVar12._0_8_ = (dVar6 * dVar11 - dVar8 * dVar4) + dVar13 * dVar7 + local_128;
      auVar12._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *param_8 = auVar12;
      *(double *)param_8[1] = dVar6 * dVar13 + local_118 + (dVar8 * dVar2 - dVar7 * dVar11);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b03742 FUN_144b03742 body=69 status=ok
// SIG undefined FUN_144b03742(void)

void FUN_144b03742(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  *(uint *)(param_1 + 0xc) = uVar1 | 1;
  if ((lVar2 != 0 && uVar1 == 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    FUN_144821112(*(longlong *)(lVar2 + 8) + 0x70,lVar2,*(uint *)(param_1 + 8) >> 3);
    return;
  }
  return;
}



// FUNCTION 144b03787 FUN_144b03787 body=116 status=ok
// SIG undefined FUN_144b03787(void)

ulonglong FUN_144b03787(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (param_2 == 0) {
    uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),7);
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)param_3 >> 8),*(byte *)(param_2 + 0x1d)) & 0xffffff1f;
    if ((*(byte *)(param_2 + 0x1d) & 0x1e) != 6) {
      return uVar2;
    }
  }
  plVar3 = &DAT_14c993de0;
  if ((param_1 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_1 + 0xc))) {
    plVar3 = (longlong *)((longlong)(int)param_1[1] * 8 + *(longlong *)(*param_1 + 0x4a0));
  }
  if (*plVar3 == 0) {
    if (param_2 == 0) {
      return CONCAT71((int7)(uVar2 >> 8),7);
    }
  }
  else {
    iVar1 = *(int *)(*plVar3 + 0x18);
    uVar4 = uVar2 & 0xff;
    uVar2 = 7;
    if (iVar1 != 0) {
      uVar2 = uVar4;
    }
    if (param_2 == 0) {
      return uVar2;
    }
    if (iVar1 != 0) {
      return uVar2;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),*(undefined1 *)(param_2 + 0x1c)) & 0xffffffffffffff1f;
}



// FUNCTION 144b037fc FUN_144b037fc body=184 status=ok
// SIG undefined FUN_144b037fc(void)

void FUN_144b037fc(longlong *param_1,undefined1 (*param_2) [16])

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  
  param_1 = (longlong *)*param_1;
  lVar6 = *param_1;
  lVar9 = (longlong)(int)param_1[1];
  if ((param_1 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_1 + 0xc))) {
    cVar5 = *(char *)(*(longlong *)(lVar6 + 0x2c0) + 0xb + lVar9 * 0x10);
    lVar11 = 0x530;
    lVar12 = 0x548;
    if ((cVar5 == '\x01') || (cVar5 == '\x04')) goto LAB_144b0384d;
  }
  lVar11 = 0x28;
  lVar12 = 0x48;
LAB_144b0384d:
  lVar12 = *(longlong *)(lVar6 + lVar12);
  lVar10 = lVar9 * 0x10;
  fVar2 = *(float *)(lVar12 + 0xc + lVar10);
  fVar3 = *(float *)(lVar12 + 8 + lVar10);
  dVar13 = (double)*(float *)(lVar12 + 4 + lVar10);
  lVar6 = *(longlong *)(lVar6 + lVar11);
  auVar7._8_4_ = SUB84(dVar13,0);
  auVar7._0_8_ = (double)*(float *)(lVar12 + lVar10);
  auVar7._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *param_2 = auVar7;
  *(double *)param_2[1] = (double)fVar3;
  *(double *)(param_2[1] + 8) = (double)fVar2;
  puVar1 = (undefined8 *)(lVar6 + lVar9 * 0x18);
  uVar8 = puVar1[1];
  uVar4 = *(undefined8 *)(lVar6 + 0x10 + lVar9 * 0x18);
  *(undefined8 *)param_2[2] = *puVar1;
  *(undefined8 *)(param_2[2] + 8) = uVar8;
  *(undefined8 *)param_2[3] = uVar4;
  *(undefined8 *)(param_2[3] + 8) = 0;
  *(undefined8 *)param_2[4] = 0x3ff0000000000000;
  *(undefined8 *)(param_2[4] + 8) = 0x3ff0000000000000;
  *(undefined8 *)param_2[5] = 0x3ff0000000000000;
  *(undefined8 *)(param_2[5] + 8) = 0;
  return;
}



// FUNCTION 144b038b4 FUN_144b038b4 body=2034 status=ok
// SIG undefined FUN_144b038b4(void)

void FUN_144b038b4(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x38);
  if (0 < lVar2) {
    pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + 8);
    fVar4 = -3.4028235e+38;
    lVar3 = 0;
    do {
      fVar5 = *pfVar1 * *(float *)(param_3 + 1) +
              pfVar1[-2] * (float)*param_3 + pfVar1[-1] * (float)((ulonglong)*param_3 >> 0x20);
      if (fVar4 < fVar5) {
        fVar4 = fVar5;
      }
      lVar3 = lVar3 + 1;
      pfVar1 = pfVar1 + 3;
    } while (lVar2 != lVar3);
  }
  return;
}



// FUNCTION 144b040a6 FUN_144b040a6 body=163 status=ok
// SIG undefined FUN_144b040a6(void)

void FUN_144b040a6(uint *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    uVar1 = *(ulonglong *)(*(longlong *)(*param_2 + 0x260) + (longlong)(int)param_2[1] * 8);
    uVar3 = uVar1 >> 0x20;
    uVar2 = *(ulonglong *)(*(longlong *)(*param_3 + 0x260) + (longlong)(int)param_3[1] * 8);
    uVar4 = 0x80000000;
    if (uVar3 == 0xffffffff) {
      uVar4 = 0;
      uVar3 = uVar1;
    }
    uVar1 = uVar2 >> 0x20;
    if (0xfffffffeffffffff < uVar2) {
      uVar1 = uVar2;
    }
    *param_1 = (uint)uVar3 & 0x7fffffff | uVar4;
    param_1[1] = (uint)(uVar2 < 0xffffffff00000000) << 0x1f | (uint)uVar1 & 0x7fffffff;
  }
  return;
}



// FUNCTION 144b04149 FUN_144b04149 body=602 status=ok
// SIG undefined FUN_144b04149(void)

void FUN_144b04149(int *param_1,int *param_2,ulonglong param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_58;
  undefined4 uStack_54;
  int *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar12 = (longlong)param_2 - (longlong)param_1;
  if ((longlong)uVar12 < 0x81) {
LAB_144b04184:
    piVar10 = param_1;
    if (param_1 != param_2) {
      while (piVar8 = piVar10 + 1, piVar8 != param_2) {
        iVar3 = piVar10[1];
        lVar15 = *(longlong *)(param_4 + 0xa00);
        if (*(longlong *)(param_4 + 0xa00) == 0) {
          lVar15 = param_4;
        }
        pfVar1 = (float *)(lVar15 + 0x10 + (longlong)*param_1 * 0x50);
        pfVar2 = (float *)(lVar15 + 0x10 + (longlong)iVar3 * 0x50);
        auVar6._4_4_ = -(uint)(pfVar1[1] < pfVar2[1]);
        auVar6._0_4_ = -(uint)(*pfVar1 < *pfVar2);
        auVar6._8_4_ = -(uint)(pfVar1[2] < pfVar2[2]);
        auVar6._12_4_ = -(uint)(pfVar1[3] < pfVar2[3]);
        iVar11 = movmskps(iVar3,auVar6);
        if (iVar11 == 0) {
          lVar9 = (longlong)piVar8[-1];
          pfVar1 = (float *)(lVar15 + 0x10 + lVar9 * 0x50);
          auVar7._4_4_ = -(uint)(pfVar1[1] < pfVar2[1]);
          auVar7._0_4_ = -(uint)(*pfVar1 < *pfVar2);
          auVar7._8_4_ = -(uint)(pfVar1[2] < pfVar2[2]);
          auVar7._12_4_ = -(uint)(pfVar1[3] < pfVar2[3]);
          iVar11 = movmskps((int)(lVar9 * 0x50),auVar7);
          piVar10 = piVar8;
          while (iVar11 != 0) {
            *piVar10 = (int)lVar9;
            lVar9 = (longlong)piVar10[-2];
            lVar15 = *(longlong *)(param_4 + 0xa00);
            if (*(longlong *)(param_4 + 0xa00) == 0) {
              lVar15 = param_4;
            }
            pfVar1 = (float *)(lVar15 + 0x10 + lVar9 * 0x50);
            pfVar2 = (float *)(lVar15 + 0x10 + (longlong)iVar3 * 0x50);
            auVar5._4_4_ = -(uint)(pfVar1[1] < pfVar2[1]);
            auVar5._0_4_ = -(uint)(*pfVar1 < *pfVar2);
            auVar5._8_4_ = -(uint)(pfVar1[2] < pfVar2[2]);
            auVar5._12_4_ = -(uint)(pfVar1[3] < pfVar2[3]);
            iVar11 = movmskps((int)lVar15,auVar5);
            piVar10 = piVar10 + -1;
          }
        }
        else {
          memmove((void *)((longlong)piVar10 + (8 - ((longlong)piVar8 - (longlong)param_1))),param_1
                  ,(longlong)piVar8 - (longlong)param_1);
          piVar10 = param_1;
        }
        *piVar10 = iVar3;
        piVar10 = piVar8;
      }
    }
  }
  else {
    if (0 < (longlong)param_3) {
      do {
        FUN_146d67edc(&local_58,param_1,param_2,param_4);
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        if (CONCAT44(uStack_54,local_58) - (longlong)param_1 <
            (longlong)param_2 - (longlong)local_50) {
          FUN_144b04149(param_1,CONCAT44(uStack_54,local_58),param_3,param_4);
          param_1 = local_50;
        }
        else {
          FUN_144b04149(local_50,param_2,param_3,param_4);
          param_2 = (int *)CONCAT44(uStack_54,local_58);
        }
        uVar12 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar12 < 0x81) goto LAB_144b04184;
      } while (param_3 != 0);
    }
    uVar14 = uVar12 >> 3;
    do {
      uVar13 = uVar14 - 1;
      local_58 = param_1[uVar13];
      local_68 = param_4;
      FUN_146d6815f(param_1,uVar13,uVar12 >> 2,&local_58);
      bVar4 = 1 < uVar14;
      uVar14 = uVar13;
    } while (bVar4);
    lVar15 = (longlong)param_2 - (longlong)param_1;
    if (4 < lVar15) {
      do {
        param_2 = param_2 + -1;
        local_58 = *param_2;
        *param_2 = *param_1;
        lVar15 = lVar15 + -4;
        local_68 = param_4;
        FUN_146d6815f(param_1,0,lVar15 >> 2,&local_58);
      } while (4 < lVar15);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b043a4 FUN_144b043a4 body=661 status=ok
// SIG undefined FUN_144b043a4(void)

void FUN_144b043a4(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
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
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar2;
  double dVar4;
  
  if ((longlong)*(int *)(param_1 + 0x16c) == -1) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    dVar19 = 0.0;
  }
  else {
    lVar17 = param_1 + 0x3f8;
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x5a8);
    }
    lVar18 = (longlong)*(int *)(param_1 + 0x16c) * 0x6c;
    dVar19 = (double)*(float *)(lVar17 + 8 + lVar18);
    dVar20 = (double)*(float *)(lVar17 + 4 + lVar18);
    dVar7 = (double)*(float *)(lVar17 + lVar18);
    dVar1 = *(double *)(param_1 + 0x188);
    dVar2 = *(double *)(param_1 + 0x188);
    dVar11 = *(double *)(param_1 + 0x170);
    dVar12 = *(double *)(param_1 + 0x178);
    dVar13 = *(double *)(param_1 + 0x180);
    dVar14 = *(double *)(param_1 + 0x1d0);
    dVar15 = *(double *)(param_1 + 0x1d8);
    dVar16 = *(double *)(param_1 + 0x1e0);
    dVar25 = dVar7 * dVar13 - dVar11 * dVar19;
    dVar21 = dVar20 * dVar11 - dVar12 * dVar7;
    dVar23 = dVar19 * dVar12 - dVar13 * dVar20;
    dVar23 = dVar23 + dVar23;
    dVar25 = dVar25 + dVar25;
    dVar21 = dVar21 + dVar21;
    dVar5 = *(double *)(param_1 + 0x198);
    dVar24 = (double)*(float *)(lVar17 + 0x14 + lVar18);
    dVar8 = (double)*(float *)(lVar17 + 0x10 + lVar18);
    dVar10 = (double)*(float *)(lVar17 + 0xc + lVar18);
    dVar3 = *(double *)(param_1 + 0x1e8);
    dVar4 = *(double *)(param_1 + 0x1e8);
    dVar26 = dVar10 * dVar16 - dVar14 * dVar24;
    dVar22 = dVar8 * dVar14 - dVar15 * dVar10;
    dVar9 = dVar24 * dVar15 - dVar16 * dVar8;
    dVar9 = dVar9 + dVar9;
    dVar26 = dVar26 + dVar26;
    dVar22 = dVar22 + dVar22;
    dVar6 = *(double *)(param_1 + 0x1f8);
    dVar19 = (dVar22 * dVar3 + dVar24 + (dVar26 * dVar14 - dVar9 * dVar15) +
              *(double *)(param_1 + 0x200) +
             dVar21 * dVar1 + dVar19 + (dVar25 * dVar11 - dVar23 * dVar12) +
             *(double *)(param_1 + 0x1a0)) * 0.5;
    *param_2 = ((dVar22 * dVar15 - dVar26 * dVar16) + dVar3 * dVar9 + dVar10 +
                *(double *)(param_1 + 0x1f0) +
               (dVar21 * dVar12 - dVar25 * dVar13) + dVar1 * dVar23 + dVar7 +
               *(double *)(param_1 + 400)) * 0.5;
    param_2[1] = ((dVar16 * dVar9 - dVar14 * dVar22) + dVar4 * dVar26 + dVar8 + dVar6 +
                 (dVar13 * dVar23 - dVar11 * dVar21) + dVar2 * dVar25 + dVar20 + dVar5) * 0.5;
  }
  param_2[2] = dVar19;
  return;
}



// FUNCTION 144b0463a FUN_144b0463a body=327 status=ok
// SIG undefined FUN_144b0463a(void)

void FUN_144b0463a(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar2;
  
  if ((longlong)*(int *)(param_1 + 0x16c) == -1) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    dVar12 = 1.0;
  }
  else {
    lVar7 = param_1 + 0x3f8;
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x5a8);
    }
    lVar6 = (longlong)*(int *)(param_1 + 0x16c) * 0x6c;
    dVar12 = (double)*(float *)(lVar7 + 0x20 + lVar6);
    dVar8 = (double)*(float *)(lVar7 + 0x1c + lVar6);
    dVar11 = (double)*(float *)(lVar7 + 0x18 + lVar6);
    dVar3 = *(double *)(param_1 + 0x1d0);
    dVar4 = *(double *)(param_1 + 0x1d8);
    dVar5 = *(double *)(param_1 + 0x1e0);
    dVar1 = *(double *)(param_1 + 0x1e8);
    dVar2 = *(double *)(param_1 + 0x1e8);
    dVar13 = dVar11 * dVar5 - dVar3 * dVar12;
    dVar9 = dVar8 * dVar3 - dVar4 * dVar11;
    dVar10 = dVar12 * dVar4 - dVar5 * dVar8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    dVar12 = dVar9 * dVar1 + dVar12 + (dVar13 * dVar3 - dVar10 * dVar4);
    *param_2 = (dVar9 * dVar4 - dVar13 * dVar5) + dVar1 * dVar10 + dVar11;
    param_2[1] = (dVar5 * dVar10 - dVar3 * dVar9) + dVar2 * dVar13 + dVar8;
  }
  param_2[2] = dVar12;
  return;
}



// FUNCTION 144b04794 FUN_144b04794 body=115 status=ok
// SIG undefined FUN_144b04794(void)

void FUN_144b04794(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  cVar1 = *(char *)(param_1 + 0xb0);
  if ('\0' < cVar1) {
    iVar3 = *(int *)(param_1 + 0xa8);
    iVar4 = 0;
    do {
      if (0 < iVar3) {
        lVar5 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + lVar5 * 8);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x68))(plVar2,param_2,iVar4,(int)cVar1);
            iVar3 = *(int *)(param_1 + 0xa8);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != cVar1);
  }
  return;
}



// FUNCTION 144b04808 FUN_144b04808 body=60 status=ok
// SIG undefined FUN_144b04808(void)

double FUN_144b04808(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x92) * param_3 + param_2;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x28))) {
    return (double)*(ushort *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar1 * 2) *
           *(double *)(param_1 + 0xa0) + *(double *)(param_1 + 0x80);
  }
  return 1.79769313486232e+308;
}



// FUNCTION 144b04866 FUN_144b04866 body=95 status=ok
// SIG undefined FUN_144b04866(void)

void FUN_144b04866(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 * 0x30 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) * 0x30 + *(longlong *)(param_1 + 8)),
            (longlong)iVar3 * 0x30);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 144b048c5 FUN_144b048c5 body=27 status=ok
// SIG undefined FUN_144b048c5(void)

void FUN_144b048c5(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}



// FUNCTION 144b048e0 FUN_144b048e0 body=4 status=ok
// SIG undefined FUN_144b048e0(void)

undefined1 FUN_144b048e0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1d);
}



// FUNCTION 144b048e4 FUN_144b048e4 body=1310 status=ok
// SIG undefined FUN_144b048e4(void)

void FUN_144b048e4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_388 [44];
  int local_35c;
  longlong local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (0 < *(int *)(param_2 + 0x68)) {
    lVar17 = param_2 + 0x10;
    lVar22 = 0;
    do {
      lVar13 = *(longlong *)(param_2 + 0x60);
      lVar3 = lVar13;
      if (lVar13 == 0) {
        lVar3 = lVar17;
      }
      lVar23 = lVar22 * 0x10;
      iVar12 = *(int *)(lVar3 + 8 + lVar23);
      if (1 < (longlong)iVar12) {
        lVar13 = *(longlong *)(lVar3 + lVar23);
        local_358 = lVar17;
        local_350 = param_2;
        memset(local_338,0,0x2f0);
        local_340 = lVar13 + (longlong)iVar12 * 8 + -8;
        local_348 = lVar13;
        fVar26 = logf((float)iVar12);
        local_338[0] = (int)(longlong)(fVar26 + fVar26);
        plVar4 = &local_348;
        do {
          plVar5 = (longlong *)*plVar4;
          plVar9 = (longlong *)plVar4[1];
          iVar12 = (int)plVar4[2];
          iVar6 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar5) >> 3);
          uVar19 = (ulonglong)(iVar6 + 1);
          plVar7 = plVar5;
          plVar11 = plVar9;
          plVar24 = plVar5;
          if (iVar12 != 0) {
LAB_144b049f3:
            if (8 < (int)(uint)uVar19) {
              uVar18 = (uint)uVar19 >> 1;
              lVar17 = plVar7[uVar18];
              plVar7[uVar18] = *plVar7;
              *plVar7 = lVar17;
              plVar20 = plVar11 + 1;
              plVar5 = plVar7;
              do {
                plVar1 = plVar5 + 1;
                plVar2 = plVar5 + 1;
                do {
                  plVar5 = plVar2;
                  plVar21 = plVar1;
                  if (plVar11 < plVar5) break;
                  plVar1 = plVar21 + 1;
                  plVar2 = plVar5 + 1;
                } while (CONCAT44(*(undefined4 *)(*plVar5 + 0x38),*(undefined4 *)(*plVar5 + 0x3c))
                         <= CONCAT44(*(undefined4 *)(*plVar7 + 0x38),*(undefined4 *)(*plVar7 + 0x3c)
                                    ));
                plVar1 = plVar20 + -2;
                do {
                  plVar2 = plVar20;
                  plVar10 = plVar1;
                  plVar20 = plVar2 + -1;
                  if (plVar20 <= plVar7) break;
                  plVar1 = plVar10 + -1;
                } while (CONCAT44(*(undefined4 *)(*plVar7 + 0x38),*(undefined4 *)(*plVar7 + 0x3c))
                         <= CONCAT44(*(undefined4 *)(*plVar20 + 0x38),
                                     *(undefined4 *)(*plVar20 + 0x3c)));
                if (plVar20 < plVar5) goto LAB_144b04abb;
                lVar17 = *plVar5;
                *plVar5 = *plVar20;
                *plVar20 = lVar17;
              } while( true );
            }
            if (plVar7 < plVar11) {
              do {
                plVar5 = plVar7;
                if (plVar7 + 1 <= plVar11) {
                  lVar17 = *plVar7;
                  plVar9 = plVar7 + 1;
                  do {
                    lVar13 = *plVar9;
                    plVar24 = plVar9;
                    if (CONCAT44(*(undefined4 *)(lVar13 + 0x38),*(undefined4 *)(lVar13 + 0x3c)) <=
                        CONCAT44(*(undefined4 *)(lVar17 + 0x38),*(undefined4 *)(lVar17 + 0x3c))) {
                      lVar13 = lVar17;
                      plVar24 = plVar5;
                    }
                    plVar5 = plVar24;
                    lVar17 = lVar13;
                    plVar9 = plVar9 + 1;
                  } while (plVar9 <= plVar11);
                }
                lVar17 = *plVar5;
                *plVar5 = *plVar11;
                *plVar11 = lVar17;
                plVar11 = plVar11 + -1;
              } while (plVar7 < plVar11);
            }
            goto LAB_144b04c93;
          }
LAB_144b04dd2:
          iVar12 = (int)uVar19;
          if (iVar12 != 0) {
            iVar6 = (iVar6 - (iVar6 + -1 >> 0x1f)) + -1 >> 1;
            iVar15 = iVar6;
joined_r0x000144b04cb5:
            do {
              iVar14 = iVar6 * 2 + 1;
              if (iVar14 < iVar12) {
                iVar16 = iVar6 * 2 + 2;
                if ((iVar16 < iVar12) &&
                   (CONCAT44(*(undefined4 *)(plVar5[iVar14] + 0x38),
                             *(undefined4 *)(plVar5[iVar14] + 0x3c)) <=
                    CONCAT44(*(undefined4 *)(plVar5[iVar16] + 0x38),
                             *(undefined4 *)(plVar5[iVar16] + 0x3c)))) {
                  iVar14 = iVar16;
                }
                lVar17 = plVar5[iVar14];
                lVar13 = plVar5[iVar6];
                if (CONCAT44(*(undefined4 *)(lVar13 + 0x38),*(undefined4 *)(lVar13 + 0x3c)) <
                    CONCAT44(*(undefined4 *)(lVar17 + 0x38),*(undefined4 *)(lVar17 + 0x3c))) {
                  plVar5[iVar6] = lVar17;
                  plVar5[iVar14] = lVar13;
                  iVar6 = iVar14;
                  goto joined_r0x000144b04cb5;
                }
              }
              bVar25 = iVar15 != 0;
              iVar6 = iVar15 + -1;
              iVar15 = iVar6;
            } while (bVar25);
            if (1 < iVar12) {
              lVar17 = *plVar5;
              *plVar5 = plVar5[uVar19 - 1];
              plVar5[uVar19 - 1] = lVar17;
              if (iVar12 != 2) {
                do {
                  uVar8 = uVar19 - 1;
                  iVar12 = 0;
                  iVar15 = 1;
                  iVar6 = 0;
                  do {
                    iVar12 = iVar12 + 2;
                    iVar14 = iVar15;
                    if (((longlong)iVar12 < (longlong)uVar8) &&
                       (CONCAT44(*(undefined4 *)(plVar5[iVar15] + 0x38),
                                 *(undefined4 *)(plVar5[iVar15] + 0x3c)) <=
                        CONCAT44(*(undefined4 *)(plVar5[iVar12] + 0x38),
                                 *(undefined4 *)(plVar5[iVar12] + 0x3c)))) {
                      iVar14 = iVar12;
                    }
                    lVar17 = plVar5[iVar14];
                    lVar13 = plVar5[iVar6];
                    if (CONCAT44(*(undefined4 *)(lVar17 + 0x38),*(undefined4 *)(lVar17 + 0x3c)) <=
                        CONCAT44(*(undefined4 *)(lVar13 + 0x38),*(undefined4 *)(lVar13 + 0x3c)))
                    break;
                    plVar5[iVar6] = lVar17;
                    plVar5[iVar14] = lVar13;
                    iVar12 = iVar14 * 2;
                    iVar15 = iVar14 * 2 + 1;
                    iVar6 = iVar14;
                  } while ((longlong)iVar15 < (longlong)uVar8);
                  lVar17 = *plVar5;
                  *plVar5 = plVar5[uVar19 - 2];
                  plVar5[uVar19 - 2] = lVar17;
                  uVar19 = uVar8;
                } while (2 < uVar8);
              }
            }
          }
LAB_144b04c93:
          plVar4 = plVar4 + -3;
        } while (&local_348 <= plVar4);
        lVar13 = *(longlong *)(local_350 + 0x60);
        param_2 = local_350;
        lVar17 = local_358;
      }
      if (lVar13 == 0) {
        lVar13 = lVar17;
      }
      lVar3 = (longlong)*(int *)(lVar13 + 8 + lVar23);
      if (lVar3 != 0) {
        lVar13 = *(longlong *)(lVar13 + lVar23);
        lVar3 = lVar3 << 3;
        lVar23 = 0;
        do {
          *(int *)(*(longlong *)(lVar13 + lVar23 * 8) + 0x34) = (int)lVar23;
          lVar23 = lVar23 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < *(int *)(param_2 + 0x68));
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_144b04abb:
  lVar17 = *plVar7;
  *plVar7 = *plVar20;
  *plVar20 = lVar17;
  local_35c = iVar12 + -1;
  plVar2 = plVar2 + -2;
  if ((longlong)plVar10 - (longlong)plVar24 < (longlong)plVar9 - (longlong)plVar21) {
    if (plVar5 < plVar11) {
      *plVar4 = (longlong)plVar5;
      plVar4[1] = (longlong)plVar11;
      *(int *)(plVar4 + 2) = local_35c;
      plVar4 = plVar4 + 3;
    }
    plVar5 = plVar7;
    plVar11 = plVar2;
    plVar21 = plVar7;
    plVar9 = plVar10;
    if (plVar20 <= plVar7 + 1) goto LAB_144b04c93;
  }
  else {
    if (plVar7 + 1 < plVar20) {
      *plVar4 = (longlong)plVar7;
      plVar4[1] = (longlong)plVar2;
      *(int *)(plVar4 + 2) = local_35c;
      plVar4 = plVar4 + 3;
    }
    plVar9 = plVar11;
    if (plVar11 <= plVar5) goto LAB_144b04c93;
  }
  iVar6 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar21) >> 3);
  uVar19 = (ulonglong)(iVar6 + 1);
  plVar7 = plVar5;
  plVar24 = plVar21;
  iVar12 = local_35c;
  if (local_35c == 0) goto LAB_144b04dd2;
  goto LAB_144b049f3;
}



// FUNCTION 144b04e04 FUN_144b04e04 body=195 status=ok
// SIG undefined FUN_144b04e04(void)

void FUN_144b04e04(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  local_2c = *(undefined4 *)(param_1 + 0x1e);
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  local_38 = param_1;
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&local_2c,&local_38);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b04ec8 FUN_144b04ec8 body=76 status=ok
// SIG undefined FUN_144b04ec8(void)

void FUN_144b04ec8(longlong param_1,byte param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) & 0xfe | param_2;
  *(uint *)(param_1 + 0xc) = uVar1 | 1;
  if ((lVar2 != 0 && uVar1 == 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    FUN_144821112(*(longlong *)(lVar2 + 8) + 0x70,lVar2,*(uint *)(param_1 + 8) >> 3);
    return;
  }
  return;
}



// FUNCTION 144b04f14 FUN_144b04f14 body=861 status=ok
// SIG undefined FUN_144b04f14(void)

void FUN_144b04f14(longlong param_1,longlong param_2,int param_3,float param_4)

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
  float fVar10;
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
  
  lVar5 = (longlong)param_3;
  lVar8 = *(longlong *)(param_1 + 8);
  lVar7 = (longlong)*(int *)(lVar8 + lVar5 * 0xc);
  lVar6 = (longlong)*(int *)(lVar8 + 4 + lVar5 * 0xc);
  lVar2 = (longlong)*(int *)(lVar8 + 8 + lVar5 * 0xc);
  lVar8 = *(longlong *)(param_2 + 0x90);
  fVar12 = *(float *)(*(longlong *)(param_1 + 0x20) + lVar5 * 4);
  fVar14 = 1.0 - fVar12;
  fVar11 = *(float *)(lVar8 + lVar6 * 4);
  fVar17 = *(float *)(lVar8 + lVar2 * 4) * fVar14 + fVar12 * fVar11;
  fVar13 = *(float *)(lVar8 + lVar7 * 4);
  fVar10 = 0.0;
  if ((fVar13 == 0.0) && (!NAN(fVar13))) {
    fVar15 = 0.0;
    if ((fVar17 == 0.0) && (!NAN(fVar17))) {
      fVar16 = 0.0;
      goto LAB_144b050ee;
    }
  }
  lVar1 = *(longlong *)(param_2 + 0xa8);
  lVar4 = lVar7 * 0x10;
  lVar3 = lVar6 * 0x10;
  lVar9 = lVar2 * 0x10;
  fVar15 = *(float *)(lVar1 + 8 + lVar9);
  fVar16 = *(float *)(lVar1 + 4 + lVar9);
  fVar20 = *(float *)(lVar1 + 8 + lVar4) -
           ((*(float *)(lVar1 + 8 + lVar3) - fVar15) * fVar12 + fVar15);
  fVar18 = *(float *)(lVar1 + lVar4) -
           ((*(float *)(lVar1 + lVar3) - *(float *)(lVar1 + lVar9)) * fVar12 +
           *(float *)(lVar1 + lVar9));
  fVar19 = *(float *)(lVar1 + 4 + lVar4) -
           ((*(float *)(lVar1 + 4 + lVar3) - fVar16) * fVar12 + fVar16);
  fVar21 = SQRT(fVar20 * fVar20 + fVar18 * fVar18 + fVar19 * fVar19);
  fVar15 = 0.0;
  fVar16 = 0.0;
  if (1e-08 < fVar21) {
    fVar10 = fVar21 - *(float *)(*(longlong *)(param_1 + 0x30) + lVar5 * 4);
    fVar17 = fVar17 + fVar13;
    fVar16 = (fVar10 * (fVar20 / fVar21) * param_4) / fVar17;
    fVar15 = ((fVar19 / fVar21) * fVar10 * param_4) / fVar17;
    fVar10 = ((fVar18 / fVar21) * fVar10 * param_4) / fVar17;
  }
LAB_144b050ee:
  if (fVar12 <= fVar14) {
    fVar12 = fVar14;
  }
  fVar12 = 2.0 / (fVar12 + 1.0);
  if (0.0 < fVar13) {
    fVar13 = fVar13 * fVar12;
    lVar8 = *(longlong *)(param_2 + 0xa8);
    lVar7 = lVar7 * 0x10;
    *(float *)(lVar8 + lVar7) = *(float *)(lVar8 + lVar7) - fVar13 * fVar10;
    *(float *)(lVar8 + 4 + lVar7) = *(float *)(lVar8 + 4 + lVar7) - fVar13 * fVar15;
    *(float *)(lVar8 + 8 + lVar7) = *(float *)(lVar8 + 8 + lVar7) - fVar13 * fVar16;
    lVar8 = *(longlong *)(param_2 + 0x90);
    fVar11 = *(float *)(lVar8 + lVar6 * 4);
  }
  if (0.0 < fVar11) {
    fVar11 = fVar11 * fVar12 * *(float *)(*(longlong *)(param_1 + 0x20) + lVar5 * 4);
    lVar8 = *(longlong *)(param_2 + 0xa8);
    lVar6 = lVar6 * 0x10;
    *(float *)(lVar8 + lVar6) = fVar10 * fVar11 + *(float *)(lVar8 + lVar6);
    *(float *)(lVar8 + 4 + lVar6) = fVar15 * fVar11 + *(float *)(lVar8 + 4 + lVar6);
    *(float *)(lVar8 + 8 + lVar6) = fVar11 * fVar16 + *(float *)(lVar8 + 8 + lVar6);
    lVar8 = *(longlong *)(param_2 + 0x90);
  }
  fVar11 = *(float *)(lVar8 + lVar2 * 4);
  if (0.0 < fVar11) {
    fVar12 = (1.0 - *(float *)(*(longlong *)(param_1 + 0x20) + lVar5 * 4)) * fVar12 * fVar11;
    lVar8 = *(longlong *)(param_2 + 0xa8);
    lVar2 = lVar2 * 0x10;
    *(float *)(lVar8 + lVar2) = fVar10 * fVar12 + *(float *)(lVar8 + lVar2);
    *(float *)(lVar8 + 4 + lVar2) = fVar15 * fVar12 + *(float *)(lVar8 + 4 + lVar2);
    *(float *)(lVar8 + 8 + lVar2) = fVar16 * fVar12 + *(float *)(lVar8 + 8 + lVar2);
  }
  return;
}



// FUNCTION 144b05272 FUN_144b05272 body=3738 status=ok
// SIG undefined FUN_144b05272(void)

void FUN_144b05272(longlong param_1,longlong param_2,int param_3,float param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float local_1c8;
  float local_1b4;
  float local_1a8;
  float local_198;
  float local_188;
  
  lVar5 = *(longlong *)(param_1 + 8);
  lVar8 = (longlong)param_3;
  lVar11 = lVar8 * 0x10;
  lVar9 = (longlong)*(int *)(lVar5 + 4 + lVar11);
  lVar14 = (longlong)*(int *)(lVar5 + 8 + lVar11);
  lVar12 = (longlong)*(int *)(lVar5 + 0xc + lVar11);
  lVar6 = *(longlong *)(param_2 + 0xa8);
  lVar16 = (longlong)*(int *)(lVar5 + lVar11) * 0x10;
  lVar15 = lVar9 * 0x10;
  lVar13 = lVar14 * 0x10;
  pfVar10 = (float *)(lVar6 + lVar13);
  lVar7 = lVar12 * 0x10;
  fVar47 = *(float *)(lVar6 + 8 + lVar15);
  fVar2 = *(float *)(lVar6 + 8 + lVar16);
  fVar33 = fVar47 - fVar2;
  fVar28 = *(float *)(lVar6 + lVar15);
  fVar45 = *(float *)(lVar6 + 4 + lVar15);
  fVar3 = *(float *)(lVar6 + lVar16);
  fVar4 = *(float *)(lVar6 + 4 + lVar16);
  fVar37 = fVar45 - fVar4;
  fVar24 = fVar28 - fVar3;
  fVar40 = fVar33 * fVar33 + fVar24 * fVar24 + fVar37 * fVar37;
  pfVar1 = (float *)(lVar6 + lVar7);
  if ((fVar40 != 1.0) || (fVar36 = fVar37, fVar49 = fVar24, local_1a8 = fVar33, NAN(fVar40))) {
    if (fVar40 < 1e-08) {
      local_1a8 = DAT_14c846338;
      fVar36 = DAT_14c846330._4_4_;
      fVar49 = (float)DAT_14c846330;
    }
    else {
      fVar49 = 1.0 / SQRT(fVar40);
      local_1a8 = fVar33 * fVar49;
      fVar36 = fVar37 * fVar49;
      fVar49 = fVar49 * fVar24;
    }
  }
  fVar38 = fVar47 - pfVar10[2];
  fVar34 = fVar45 - pfVar10[1];
  fVar41 = fVar28 - *pfVar10;
  fVar51 = fVar2 - pfVar10[2];
  fVar43 = fVar4 - pfVar10[1];
  fVar25 = fVar3 - *pfVar10;
  local_188 = fVar25 * fVar34 - fVar41 * fVar43;
  fVar21 = fVar51 * fVar41 - fVar38 * fVar25;
  local_198 = fVar43 * fVar38 - fVar34 * fVar51;
  fVar54 = local_188 * local_188 + local_198 * local_198 + fVar21 * fVar21;
  fVar52 = fVar2 - pfVar1[2];
  fVar30 = fVar4 - pfVar1[1];
  fVar35 = fVar3 - *pfVar1;
  fVar47 = fVar47 - pfVar1[2];
  fVar45 = fVar45 - pfVar1[1];
  fVar28 = fVar28 - *pfVar1;
  fVar50 = fVar28 * fVar30 - fVar35 * fVar45;
  fVar44 = fVar47 * fVar35 - fVar52 * fVar28;
  fVar31 = fVar45 * fVar52 - fVar30 * fVar47;
  fVar19 = fVar50 * fVar50 + fVar31 * fVar31 + fVar44 * fVar44;
  fVar26 = SQRT(fVar19);
  fVar55 = SQRT(fVar54);
  fVar20 = 0.0;
  local_1b4 = 0.0;
  if (1e-08 < fVar26) {
    fVar23 = fVar50 / fVar26;
    fVar20 = fVar44 / fVar26;
  }
  else {
    fVar23 = 0.0;
  }
  pfVar10 = (float *)(lVar6 + lVar16);
  fVar39 = (float)(-(uint)(1e-08 < fVar55) & (uint)(local_198 / fVar55));
  if (1e-08 < fVar55) {
    fVar32 = local_188 / fVar55;
    fVar53 = fVar21 / fVar55;
  }
  else {
    fVar53 = 0.0;
    fVar32 = 0.0;
  }
  fVar22 = (float)(-(uint)(1e-08 < fVar26) & (uint)(fVar31 / fVar26));
  fVar42 = fVar32 * fVar23 + fVar39 * fVar22 + fVar53 * fVar20;
  if (1.0 <= fVar42) {
    fVar42 = 1.0;
  }
  if (fVar42 <= -1.0) {
    fVar42 = -1.0;
  }
  fVar48 = (fVar22 * fVar53 - fVar39 * fVar20) * local_1a8 +
           (fVar20 * fVar32 - fVar53 * fVar23) * fVar49 +
           (fVar23 * fVar39 - fVar32 * fVar22) * fVar36;
  if (1.0 <= fVar48) {
    fVar48 = 1.0;
  }
  if (fVar48 <= -1.0) {
    fVar48 = -1.0;
  }
  fVar29 = 0.0;
  fVar46 = 0.0;
  if (1e-08 < fVar55) {
    fVar46 = ((fVar49 * fVar20 - fVar22 * fVar36) * fVar42 - fVar23 * fVar48) / fVar55;
    fVar29 = ((local_1a8 * fVar22 - fVar23 * fVar49) * fVar42 - fVar20 * fVar48) / fVar55;
    local_1b4 = ((fVar36 * fVar23 - fVar20 * local_1a8) * fVar42 - fVar22 * fVar48) / fVar55;
  }
  if (fVar26 <= 1e-08) {
    local_1c8 = 0.0;
    local_1a8 = 0.0;
    fVar20 = 0.0;
  }
  else {
    fVar23 = fVar53 * local_1a8;
    fVar20 = ((fVar39 * fVar36 - fVar49 * fVar53) * fVar42 - fVar32 * fVar48) / fVar26;
    local_1a8 = ((fVar32 * fVar49 - local_1a8 * fVar39) * fVar42 - fVar53 * fVar48) / fVar26;
    local_1c8 = ((fVar23 - fVar36 * fVar32) * fVar42 - fVar39 * fVar48) / fVar26;
  }
  if ((fVar54 != 1.0) || (NAN(fVar54))) {
    if (fVar54 < 1e-08) {
      local_198 = (float)DAT_14c846330;
      local_188 = DAT_14c846338;
      fVar21 = DAT_14c846330._4_4_;
    }
    else {
      fVar55 = 1.0 / fVar55;
      local_188 = local_188 * fVar55;
      local_198 = local_198 * fVar55;
      fVar21 = fVar21 * fVar55;
    }
  }
  if (((fVar19 != 1.0) || (fVar36 = fVar31, fVar49 = fVar50, fVar55 = fVar44, NAN(fVar19))) &&
     (fVar36 = (float)DAT_14c846330, fVar49 = DAT_14c846338, fVar55 = DAT_14c846330._4_4_,
     1e-08 <= fVar19)) {
    fVar26 = 1.0 / fVar26;
    fVar36 = fVar31 * fVar26;
    fVar49 = fVar50 * fVar26;
    fVar55 = fVar44 * fVar26;
  }
  if (((fVar40 != 1.0) || (fVar19 = fVar37, fVar26 = fVar33, fVar31 = fVar24, NAN(fVar40))) &&
     (fVar19 = DAT_14c846330._4_4_, fVar26 = DAT_14c846338, fVar31 = (float)DAT_14c846330,
     1e-08 <= fVar40)) {
    fVar40 = 1.0 / SQRT(fVar40);
    fVar19 = fVar37 * fVar40;
    fVar26 = fVar33 * fVar40;
    fVar31 = fVar24 * fVar40;
  }
  fVar33 = local_188 * fVar49 + local_198 * fVar36 + fVar21 * fVar55;
  fVar24 = fVar33;
  if (1.0 <= fVar33) {
    fVar24 = 1.0;
  }
  fVar40 = (fVar55 * local_188 - fVar21 * fVar49) * fVar31 +
           (fVar49 * local_198 - local_188 * fVar36) * fVar19 +
           (fVar36 * fVar21 - local_198 * fVar55) * fVar26;
  fVar37 = fVar40;
  if (1.0 <= fVar40) {
    fVar37 = 1.0;
  }
  uVar17 = -(uint)(-1.0 < fVar24);
  fVar33 = (float)(~-(uint)(fVar33 < 1.0) & 0x3f800000 |
                  (~uVar17 & 0x3f800000 | (uint)ABS(fVar33) & uVar17) & -(uint)(fVar33 < 1.0));
  uVar18 = -(uint)(-1.0 < fVar37);
  fVar40 = (float)(~-(uint)(fVar40 < 1.0) & 0x3f800000 |
                  (~uVar18 & 0x3f800000 | (uint)ABS(fVar40) & uVar18) & -(uint)(fVar40 < 1.0));
  fVar36 = fVar40;
  if (fVar40 <= fVar33) {
    fVar36 = fVar33;
  }
  fVar49 = 0.0;
  if ((fVar36 != 0.0) || (NAN(fVar36))) {
    fVar49 = fVar33;
    if (fVar40 <= fVar33) {
      fVar49 = fVar40;
    }
    fVar49 = fVar49 / fVar36;
    fVar36 = fVar49 * fVar49;
    fVar49 = ((((((fVar36 * 0.007212885 + -0.03505968) * fVar36 + 0.08167588) * fVar36 + -0.13374658
                ) * fVar36 + 0.19856563) * fVar36 + -0.33325) * fVar36 + 1.0) * fVar49;
    fVar33 = (float)(-(uint)(fVar33 < fVar40) & (uint)(1.5707964 - fVar49) |
                    ~-(uint)(fVar33 < fVar40) & (uint)fVar49);
    fVar40 = 3.1415927 - fVar33;
    uVar17 = ~-(uint)(0.0 <= fVar24) & (uint)fVar40 |
             (~uVar17 & (uint)fVar40 | uVar17 & (uint)fVar33) & -(uint)(0.0 <= fVar24);
    uVar27 = uVar17 ^ 0x80000000;
    fVar49 = (float)(~-(uint)(0.0 <= fVar37) & uVar27 |
                    (~uVar18 & uVar27 | uVar18 & uVar17) & -(uint)(0.0 <= fVar37));
  }
  fVar36 = fVar41 * fVar29 - local_1b4 * fVar34;
  fVar24 = local_1c8 * fVar45 - fVar28 * local_1a8;
  fVar21 = fVar38 * local_1b4 - fVar46 * fVar41;
  fVar31 = fVar20 * fVar28 - fVar47 * local_1c8;
  fVar19 = fVar34 * fVar46 - fVar29 * fVar38;
  fVar47 = local_1a8 * fVar47 - fVar45 * fVar20;
  fVar33 = local_1b4 * fVar43 - fVar25 * fVar29;
  fVar45 = fVar35 * local_1a8 - local_1c8 * fVar30;
  fVar55 = fVar46 * fVar25 - fVar51 * local_1b4;
  fVar40 = fVar52 * local_1c8 - fVar20 * fVar35;
  fVar34 = fVar36 + fVar24;
  fVar26 = fVar29 * fVar51 - fVar43 * fVar46;
  fVar37 = fVar21 + fVar31;
  fVar25 = fVar19 + fVar47;
  fVar28 = fVar30 * fVar20 - local_1a8 * fVar52;
  fVar36 = -fVar36 - fVar33;
  fVar33 = fVar33 + fVar45;
  fVar21 = -fVar21 - fVar55;
  fVar55 = fVar55 + fVar40;
  fVar19 = -fVar19 - fVar26;
  fVar26 = fVar26 + fVar28;
  fVar45 = -fVar24 - fVar45;
  fVar40 = -fVar31 - fVar40;
  fVar28 = -fVar47 - fVar28;
  lVar6 = *(longlong *)(param_2 + 0x90);
  fVar47 = *(float *)(lVar6 + (longlong)*(int *)(lVar5 + lVar11) * 4);
  fVar24 = (fVar45 * fVar45 + fVar28 * fVar28 + fVar40 * fVar40) * *(float *)(lVar6 + lVar12 * 4) +
           (fVar36 * fVar36 + fVar19 * fVar19 + fVar21 * fVar21) * *(float *)(lVar6 + lVar14 * 4) +
           (fVar34 * fVar34 + fVar25 * fVar25 + fVar37 * fVar37) * fVar47 +
           (fVar33 * fVar33 + fVar26 * fVar26 + fVar55 * fVar55) * *(float *)(lVar6 + lVar9 * 4);
  if (*(char *)(*(longlong *)(param_1 + 0x108) + lVar8) == '\0') {
    param_5 = param_4;
  }
  param_5 = (fVar49 - *(float *)(*(longlong *)(param_1 + 0xf8) + lVar8 * 4)) * param_5;
  if (0.7853982 <= param_5) {
    param_5 = 0.7853982;
  }
  if (param_5 <= -0.7853982) {
    param_5 = -0.7853982;
  }
  fVar24 = (float)(-(uint)(1e-08 < fVar24) & (uint)(param_5 / fVar24));
  fVar47 = fVar47 * fVar24;
  *pfVar10 = fVar3 - fVar25 * fVar47;
  pfVar10[1] = fVar4 - fVar37 * fVar47;
  pfVar10[2] = fVar2 - fVar34 * fVar47;
  lVar5 = *(longlong *)(param_2 + 0xa8);
  fVar47 = *(float *)(*(longlong *)(param_2 + 0x90) + lVar9 * 4) * fVar24;
  *(float *)(lVar5 + lVar15) = *(float *)(lVar5 + lVar15) - fVar26 * fVar47;
  *(float *)(lVar5 + 4 + lVar15) = *(float *)(lVar5 + 4 + lVar15) - fVar55 * fVar47;
  *(float *)(lVar5 + 8 + lVar15) = *(float *)(lVar5 + 8 + lVar15) - fVar33 * fVar47;
  lVar5 = *(longlong *)(param_2 + 0xa8);
  fVar47 = *(float *)(*(longlong *)(param_2 + 0x90) + lVar14 * 4) * fVar24;
  *(float *)(lVar5 + lVar13) = *(float *)(lVar5 + lVar13) - fVar19 * fVar47;
  *(float *)(lVar5 + 4 + lVar13) = *(float *)(lVar5 + 4 + lVar13) - fVar21 * fVar47;
  *(float *)(lVar5 + 8 + lVar13) = *(float *)(lVar5 + 8 + lVar13) - fVar36 * fVar47;
  fVar24 = *(float *)(*(longlong *)(param_2 + 0x90) + lVar12 * 4) * fVar24;
  lVar5 = *(longlong *)(param_2 + 0xa8);
  *(float *)(lVar5 + lVar7) = *(float *)(lVar5 + lVar7) - fVar28 * fVar24;
  *(float *)(lVar5 + 4 + lVar7) = *(float *)(lVar5 + 4 + lVar7) - fVar40 * fVar24;
  *(float *)(lVar5 + 8 + lVar7) = *(float *)(lVar5 + 8 + lVar7) - fVar45 * fVar24;
  return;
}



// FUNCTION 144b0610c FUN_144b0610c body=106 status=ok
// SIG undefined FUN_144b0610c(void)

void FUN_144b0610c(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1[2] + 0x40);
  if (lVar1 == 0) {
    lVar1 = param_1[2];
  }
  local_10 = *(undefined4 *)(lVar1 + (longlong)*param_2 * 8);
  local_c = *(undefined4 *)(lVar1 + 4 + (longlong)*param_2 * 8);
  (**(code **)param_1[1])(((undefined8 *)param_1[1])[1],*(undefined8 *)*param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b06178 FUN_144b06178 body=156 status=ok
// SIG undefined FUN_144b06178(void)

void FUN_144b06178(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar7 = (longlong)param_4;
  lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 8 + lVar7 * 0x10);
  if (lVar9 != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar7 * 0x10);
    lVar10 = 0;
    do {
      lVar8 = (longlong)*(int *)(lVar4 + lVar10);
      lVar5 = *(longlong *)(param_1 + 0x148);
      lVar6 = *(longlong *)(param_2 + 0x60);
      fVar1 = *(float *)(*(longlong *)(param_2 + 0x90) + lVar7 * 4);
      fVar2 = *(float *)(lVar5 + 4 + lVar8 * 0xc);
      fVar3 = *(float *)(lVar5 + 8 + lVar8 * 0xc);
      *(float *)(lVar6 + lVar7 * 0xc) =
           *(float *)(lVar5 + lVar8 * 0xc) * fVar1 + *(float *)(lVar6 + lVar7 * 0xc);
      *(float *)(lVar6 + 4 + lVar7 * 0xc) = fVar2 * fVar1 + *(float *)(lVar6 + 4 + lVar7 * 0xc);
      *(float *)(lVar6 + 8 + lVar7 * 0xc) = fVar1 * fVar3 + *(float *)(lVar6 + 8 + lVar7 * 0xc);
      lVar10 = lVar10 + 4;
    } while (lVar9 * 4 != lVar10);
  }
  return;
}



// FUNCTION 144b06214 FUN_144b06214 body=314 status=ok
// SIG undefined FUN_144b06214(void)

void FUN_144b06214(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_2[2];
  fVar2 = param_1[3];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_1[2];
  fVar6 = param_1[1];
  fVar7 = param_1[6];
  fVar8 = param_1[5];
  fVar9 = *param_1;
  fVar10 = param_1[8];
  fVar11 = param_1[7];
  fVar12 = param_1[9];
  *param_3 = (((fVar4 - fVar5) * fVar12 - (fVar1 - fVar2) * fVar10) + (param_1[4] - *param_3)) *
             fVar9 + *param_3;
  param_3[1] = ((fVar11 * (fVar1 - fVar2) - (fVar3 - fVar6) * fVar12) + (fVar8 - param_3[1])) *
               fVar9 + param_3[1];
  param_3[2] = (((fVar3 - fVar6) * fVar10 - fVar11 * (fVar4 - fVar5)) + (fVar7 - param_3[2])) *
               fVar9 + param_3[2];
  return;
}



// FUNCTION 144b0634e FUN_144b0634e body=9 status=ok
// SIG undefined FUN_144b0634e(void)

bool FUN_144b0634e(longlong param_1)

{
  return *(longlong *)(param_1 + 0x10) != 0;
}



// FUNCTION 144b06358 FUN_144b06358 body=26 status=ok
// SIG undefined FUN_144b06358(void)

ulonglong FUN_144b06358(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x108);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                  *(undefined1 *)(lVar1 + 0x10 + (longlong)*(int *)(param_1 + 0x18) * 0x58)) ^ 1;
}



// FUNCTION 144b06372 FUN_144b06372 body=1034 status=ok
// SIG undefined FUN_144b06372(void)

void FUN_144b06372(longlong *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar9 = *param_1;
  lVar23 = (longlong)*(int *)param_1[1] + (longlong)*param_2;
  fVar1 = *(float *)(*(longlong *)(lVar9 + 0xb0) + lVar23 * 4);
  local_d4 = (undefined4)lVar23;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    puVar10 = (undefined8 *)param_1[3];
    lVar11 = *(longlong *)(lVar9 + 0x80);
    *(undefined4 *)(lVar11 + 8 + lVar23 * 0xc) = *(undefined4 *)(puVar10 + 1);
    *(undefined8 *)(lVar11 + lVar23 * 0xc) = *puVar10;
    puVar10 = (undefined8 *)param_1[2];
    local_d8 = (undefined4)param_1[9];
    pcVar12 = (code *)*puVar10;
    plVar19 = puVar10 + 4;
    if ((longlong *)puVar10[2] != (longlong *)0x0) {
      plVar19 = (longlong *)puVar10[2];
    }
    uVar17 = (**(code **)(*plVar19 + 8))();
    (*pcVar12)(uVar17,lVar9 + 0x20,&local_d8);
    lVar11 = param_1[4];
    lVar13 = *(longlong *)(lVar11 + 8);
    lVar18 = lVar23 * 0x10;
    lVar20 = (longlong)*(int *)(lVar13 + 8 + lVar18);
    if (lVar20 != 0) {
      lVar13 = *(longlong *)(lVar13 + lVar18);
      lVar21 = 0;
      do {
        lVar22 = (longlong)*(int *)(lVar13 + lVar21);
        lVar14 = *(longlong *)(lVar11 + 0x148);
        lVar15 = *(longlong *)(lVar9 + 0x80);
        fVar1 = *(float *)(*(longlong *)(lVar9 + 0xb0) + lVar23 * 4);
        fVar2 = *(float *)(lVar14 + 4 + lVar22 * 0xc);
        fVar3 = *(float *)(lVar14 + 8 + lVar22 * 0xc);
        *(float *)(lVar15 + lVar23 * 0xc) =
             *(float *)(lVar14 + lVar22 * 0xc) * fVar1 + *(float *)(lVar15 + lVar23 * 0xc);
        *(float *)(lVar15 + 4 + lVar23 * 0xc) =
             fVar2 * fVar1 + *(float *)(lVar15 + 4 + lVar23 * 0xc);
        *(float *)(lVar15 + 8 + lVar23 * 0xc) =
             fVar1 * fVar3 + *(float *)(lVar15 + 8 + lVar23 * 0xc);
        lVar21 = lVar21 + 4;
      } while (lVar20 * 4 != lVar21);
    }
    lVar11 = *(longlong *)(lVar9 + 0x68);
    lVar13 = *(longlong *)(lVar9 + 0x80);
    lVar23 = lVar23 * 0xc;
    fVar1 = *(float *)(param_1 + 9);
    fVar2 = *(float *)(lVar13 + 8 + lVar23);
    fVar3 = *(float *)(lVar13 + 4 + lVar23);
    *(float *)(lVar11 + lVar23) = fVar1 * *(float *)(lVar13 + lVar23) + *(float *)(lVar11 + lVar23);
    *(float *)(lVar11 + 4 + lVar23) = fVar3 * fVar1 + *(float *)(lVar11 + 4 + lVar23);
    *(float *)(lVar11 + 8 + lVar23) = fVar2 * fVar1 + *(float *)(lVar11 + 8 + lVar23);
    pfVar16 = (float *)param_1[5];
    lVar11 = *(longlong *)(lVar9 + 0x48);
    fVar25 = *(float *)(lVar11 + 8 + lVar23) - pfVar16[3];
    fVar24 = *(float *)(lVar11 + 4 + lVar23) - pfVar16[2];
    fVar26 = *(float *)(lVar11 + lVar23) - pfVar16[1];
    lVar11 = *(longlong *)(lVar9 + 0x68);
    fVar1 = pfVar16[6];
    fVar2 = *(float *)(lVar11 + 8 + lVar23);
    fVar3 = pfVar16[5];
    fVar4 = *(float *)(lVar11 + 4 + lVar23);
    fVar5 = *pfVar16;
    fVar6 = pfVar16[8];
    fVar7 = pfVar16[7];
    fVar8 = pfVar16[9];
    *(float *)(lVar11 + lVar23) =
         ((fVar24 * fVar8 - fVar25 * fVar6) + (pfVar16[4] - *(float *)(lVar11 + lVar23))) * fVar5 +
         *(float *)(lVar11 + lVar23);
    *(float *)(lVar11 + 4 + lVar23) =
         ((fVar7 * fVar25 - fVar26 * fVar8) + (fVar3 - fVar4)) * fVar5 + fVar4;
    *(float *)(lVar11 + 8 + lVar23) =
         ((fVar26 * fVar6 - fVar7 * fVar24) + (fVar1 - fVar2)) * fVar5 + fVar2;
    lVar11 = *(longlong *)(lVar9 + 0x48);
    lVar13 = *(longlong *)(lVar9 + 0x68);
    fVar1 = *(float *)((longlong)param_1 + 0x44);
    fVar2 = *(float *)(lVar13 + 8 + lVar23);
    fVar3 = *(float *)(lVar13 + 4 + lVar23);
    fVar4 = *(float *)(lVar11 + 8 + lVar23);
    fVar5 = *(float *)(lVar11 + 4 + lVar23);
    lVar20 = *(longlong *)(lVar9 + 200);
    *(float *)(lVar20 + lVar18) = fVar1 * *(float *)(lVar13 + lVar23) + *(float *)(lVar11 + lVar23);
    *(float *)(lVar20 + 4 + lVar18) = fVar3 * fVar1 + fVar5;
    *(float *)(lVar20 + 8 + lVar18) = fVar2 * fVar1 + fVar4;
    fVar1 = *(float *)(param_1 + 8);
    lVar9 = *(longlong *)(lVar9 + 0x68);
    *(float *)(lVar9 + lVar23) = *(float *)(lVar9 + lVar23) * fVar1;
    *(float *)(lVar9 + 4 + lVar23) = *(float *)(lVar9 + 4 + lVar23) * fVar1;
    *(float *)(lVar9 + 8 + lVar23) = fVar1 * *(float *)(lVar9 + 8 + lVar23);
  }
  else {
    local_d8 = *(undefined4 *)(lVar9 + 0x460);
    local_dc = (undefined4)param_1[9];
    pcVar12 = *(code **)(lVar9 + 0x3c0);
    plVar19 = (longlong *)(lVar9 + 0x3e0);
    if (*(longlong **)(lVar9 + 0x3d0) != (longlong *)0x0) {
      plVar19 = *(longlong **)(lVar9 + 0x3d0);
    }
    uVar17 = (**(code **)(*plVar19 + 8))(plVar19);
    local_e8 = &local_d4;
    (*pcVar12)(uVar17,lVar9 + 0x20,&local_dc,&local_d8);
  }
  if ((local_d0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b0677e FUN_144b0677e body=680 status=ok
// SIG undefined FUN_144b0677e(void)

void FUN_144b0677e(longlong *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *param_1;
  lVar19 = (longlong)*(int *)param_1[1] + (longlong)*param_2;
  fVar1 = *(float *)(*(longlong *)(lVar6 + 0xb0) + lVar19 * 4);
  local_4c = (undefined4)lVar19;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    puVar8 = (undefined8 *)param_1[3];
    lVar9 = *(longlong *)(lVar6 + 0x80);
    *(undefined4 *)(lVar9 + 8 + lVar19 * 0xc) = *(undefined4 *)(puVar8 + 1);
    *(undefined8 *)(lVar9 + lVar19 * 0xc) = *puVar8;
    puVar8 = (undefined8 *)param_1[2];
    local_50 = (undefined4)param_1[9];
    pcVar7 = (code *)*puVar8;
    plVar15 = puVar8 + 4;
    if ((longlong *)puVar8[2] != (longlong *)0x0) {
      plVar15 = (longlong *)puVar8[2];
    }
    uVar13 = (**(code **)(*plVar15 + 8))();
    (*pcVar7)(uVar13,lVar6 + 0x20,&local_50);
    lVar9 = param_1[4];
    lVar10 = *(longlong *)(lVar9 + 8);
    lVar14 = lVar19 * 0x10;
    lVar16 = (longlong)*(int *)(lVar10 + 8 + lVar14);
    if (lVar16 != 0) {
      lVar10 = *(longlong *)(lVar10 + lVar14);
      lVar17 = 0;
      do {
        lVar18 = (longlong)*(int *)(lVar10 + lVar17);
        lVar11 = *(longlong *)(lVar9 + 0x148);
        lVar12 = *(longlong *)(lVar6 + 0x80);
        fVar1 = *(float *)(*(longlong *)(lVar6 + 0xb0) + lVar19 * 4);
        fVar2 = *(float *)(lVar11 + 4 + lVar18 * 0xc);
        fVar3 = *(float *)(lVar11 + 8 + lVar18 * 0xc);
        *(float *)(lVar12 + lVar19 * 0xc) =
             *(float *)(lVar11 + lVar18 * 0xc) * fVar1 + *(float *)(lVar12 + lVar19 * 0xc);
        *(float *)(lVar12 + 4 + lVar19 * 0xc) =
             fVar2 * fVar1 + *(float *)(lVar12 + 4 + lVar19 * 0xc);
        *(float *)(lVar12 + 8 + lVar19 * 0xc) =
             fVar1 * fVar3 + *(float *)(lVar12 + 8 + lVar19 * 0xc);
        lVar17 = lVar17 + 4;
      } while (lVar16 * 4 != lVar17);
    }
    lVar9 = *(longlong *)(lVar6 + 0x68);
    lVar10 = *(longlong *)(lVar6 + 0x80);
    lVar19 = lVar19 * 0xc;
    fVar1 = *(float *)(param_1 + 9);
    fVar2 = *(float *)(lVar10 + 8 + lVar19);
    fVar3 = *(float *)(lVar10 + 4 + lVar19);
    *(float *)(lVar9 + lVar19) = fVar1 * *(float *)(lVar10 + lVar19) + *(float *)(lVar9 + lVar19);
    *(float *)(lVar9 + 4 + lVar19) = fVar3 * fVar1 + *(float *)(lVar9 + 4 + lVar19);
    *(float *)(lVar9 + 8 + lVar19) = fVar2 * fVar1 + *(float *)(lVar9 + 8 + lVar19);
    lVar9 = *(longlong *)(lVar6 + 0x48);
    lVar10 = *(longlong *)(lVar6 + 0x68);
    fVar1 = *(float *)((longlong)param_1 + 0x44);
    fVar2 = *(float *)(lVar10 + 8 + lVar19);
    fVar3 = *(float *)(lVar10 + 4 + lVar19);
    fVar4 = *(float *)(lVar9 + 8 + lVar19);
    fVar5 = *(float *)(lVar9 + 4 + lVar19);
    lVar16 = *(longlong *)(lVar6 + 200);
    *(float *)(lVar16 + lVar14) = fVar1 * *(float *)(lVar10 + lVar19) + *(float *)(lVar9 + lVar19);
    *(float *)(lVar16 + 4 + lVar14) = fVar3 * fVar1 + fVar5;
    *(float *)(lVar16 + 8 + lVar14) = fVar2 * fVar1 + fVar4;
    fVar1 = *(float *)(param_1 + 8);
    lVar6 = *(longlong *)(lVar6 + 0x68);
    *(float *)(lVar6 + lVar19) = *(float *)(lVar6 + lVar19) * fVar1;
    *(float *)(lVar6 + 4 + lVar19) = *(float *)(lVar6 + 4 + lVar19) * fVar1;
    *(float *)(lVar6 + 8 + lVar19) = fVar1 * *(float *)(lVar6 + 8 + lVar19);
  }
  else {
    local_50 = *(undefined4 *)(lVar6 + 0x460);
    local_54 = (undefined4)param_1[9];
    pcVar7 = *(code **)(lVar6 + 0x3c0);
    plVar15 = (longlong *)(lVar6 + 0x3e0);
    if (*(longlong **)(lVar6 + 0x3d0) != (longlong *)0x0) {
      plVar15 = *(longlong **)(lVar6 + 0x3d0);
    }
    uVar13 = (**(code **)(*plVar15 + 8))(plVar15);
    local_68 = &local_4c;
    (*pcVar7)(uVar13,lVar6 + 0x20,&local_54,&local_50);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b06a28 FUN_144b06a28 body=158 status=ok
// SIG undefined FUN_144b06a28(void)

void FUN_144b06a28(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar4 = *(longlong *)(*param_1 + 0xf8) + (longlong)(int)param_1[1] * 0x18;
  lVar3 = *(longlong *)(lVar4 + 8);
  if (*(longlong *)(lVar4 + 8) == 0) {
    lVar3 = lVar4;
  }
  iVar1 = *(int *)(lVar4 + 0x10);
  if ((longlong)iVar1 != 0) {
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4);
      if (lVar2 != 0) {
        if ((*(byte *)(lVar2 + 0x71 + (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0) * 8) & 5) != 0) {
          uVar9 = (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0);
          uVar5 = uVar5 | *(uint *)(lVar2 + 0x58 + uVar9 * 8);
          *param_2 = uVar5;
          uVar6 = uVar6 | *(uint *)(lVar2 + 0x5c + uVar9 * 8);
          param_2[1] = uVar6;
          uVar7 = uVar7 | *(uint *)(lVar2 + 0x60 + uVar9 * 8);
          param_2[2] = uVar7;
          uVar8 = uVar8 | *(uint *)(lVar2 + 100 + uVar9 * 8);
          param_2[3] = uVar8;
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 144b06ac6 FUN_144b06ac6 body=158 status=ok
// SIG undefined FUN_144b06ac6(void)

void FUN_144b06ac6(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar4 = *(longlong *)(*param_1 + 0xf8) + (longlong)(int)param_1[1] * 0x18;
  lVar3 = *(longlong *)(lVar4 + 8);
  if (*(longlong *)(lVar4 + 8) == 0) {
    lVar3 = lVar4;
  }
  iVar1 = *(int *)(lVar4 + 0x10);
  if ((longlong)iVar1 != 0) {
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4);
      if (lVar2 != 0) {
        if ((*(byte *)(lVar2 + 0x71 + (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0) * 8) & 2) != 0) {
          uVar9 = (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0);
          uVar5 = uVar5 | *(uint *)(lVar2 + 0x48 + uVar9 * 8);
          *param_2 = uVar5;
          uVar6 = uVar6 | *(uint *)(lVar2 + 0x4c + uVar9 * 8);
          param_2[1] = uVar6;
          uVar7 = uVar7 | *(uint *)(lVar2 + 0x50 + uVar9 * 8);
          param_2[2] = uVar7;
          uVar8 = uVar8 | *(uint *)(lVar2 + 0x54 + uVar9 * 8);
          param_2[3] = uVar8;
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 144b06b64 FUN_144b06b64 body=158 status=ok
// SIG undefined FUN_144b06b64(void)

void FUN_144b06b64(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar4 = *(longlong *)(*param_1 + 0xf8) + (longlong)(int)param_1[1] * 0x18;
  lVar3 = *(longlong *)(lVar4 + 8);
  if (*(longlong *)(lVar4 + 8) == 0) {
    lVar3 = lVar4;
  }
  iVar1 = *(int *)(lVar4 + 0x10);
  if ((longlong)iVar1 != 0) {
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4);
      if (lVar2 != 0) {
        if ((*(byte *)(lVar2 + 0x71 + (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0) * 8) & 2) != 0) {
          uVar9 = (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0);
          uVar5 = uVar5 | *(uint *)(lVar2 + 0x48 + uVar9 * 8);
          *param_2 = uVar5;
          uVar6 = uVar6 | *(uint *)(lVar2 + 0x4c + uVar9 * 8);
          param_2[1] = uVar6;
          uVar7 = uVar7 | *(uint *)(lVar2 + 0x50 + uVar9 * 8);
          param_2[2] = uVar7;
          uVar8 = uVar8 | *(uint *)(lVar2 + 0x54 + uVar9 * 8);
          param_2[3] = uVar8;
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 144b06c02 FUN_144b06c02 body=158 status=ok
// SIG undefined FUN_144b06c02(void)

void FUN_144b06c02(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar4 = *(longlong *)(*param_1 + 0xf8) + (longlong)(int)param_1[1] * 0x18;
  lVar3 = *(longlong *)(lVar4 + 8);
  if (*(longlong *)(lVar4 + 8) == 0) {
    lVar3 = lVar4;
  }
  iVar1 = *(int *)(lVar4 + 0x10);
  if ((longlong)iVar1 != 0) {
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar4);
      if (lVar2 != 0) {
        if ((*(byte *)(lVar2 + 0x71 + (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0) * 8) & 5) != 0) {
          uVar9 = (ulonglong)((*(uint *)(lVar2 + 8) & 3) == 0);
          uVar5 = uVar5 | *(uint *)(lVar2 + 0x58 + uVar9 * 8);
          *param_2 = uVar5;
          uVar6 = uVar6 | *(uint *)(lVar2 + 0x5c + uVar9 * 8);
          param_2[1] = uVar6;
          uVar7 = uVar7 | *(uint *)(lVar2 + 0x60 + uVar9 * 8);
          param_2[2] = uVar7;
          uVar8 = uVar8 | *(uint *)(lVar2 + 100 + uVar9 * 8);
          param_2[3] = uVar8;
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 144b06ca0 FUN_144b06ca0 body=470 status=ok
// SIG undefined FUN_144b06ca0(void)

void FUN_144b06ca0(longlong param_1,longlong param_2,int param_3,float param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  lVar6 = (longlong)param_3;
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + lVar6 * 8);
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 4 + lVar6 * 8);
  fVar11 = *(float *)(*(longlong *)(param_2 + 0x90) + lVar3 * 4);
  fVar8 = 0.0;
  fVar1 = *(float *)(*(longlong *)(param_2 + 0x90) + lVar5 * 4);
  if ((fVar11 == 0.0) && (!NAN(fVar11))) {
    fVar10 = 0.0;
    fVar12 = 0.0;
    if ((fVar1 == 0.0) && (!NAN(fVar1))) goto LAB_144b06da8;
  }
  lVar2 = *(longlong *)(param_2 + 0xa8);
  lVar7 = lVar5 * 0x10;
  lVar4 = lVar3 * 0x10;
  fVar12 = *(float *)(lVar2 + 8 + lVar7) - *(float *)(lVar2 + 8 + lVar4);
  fVar10 = *(float *)(lVar2 + 4 + lVar7) - *(float *)(lVar2 + 4 + lVar4);
  fVar9 = *(float *)(lVar2 + lVar7) - *(float *)(lVar2 + lVar4);
  fVar8 = fVar11 + fVar1;
  fVar13 = fVar12 * fVar12 + fVar9 * fVar9 + fVar10 * fVar10;
  if (fVar13 < 0.0001) {
    fVar10 = 0.0;
    fVar9 = 1.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
  }
  else {
    fVar13 = SQRT(fVar13);
    fVar12 = fVar12 / fVar13;
    fVar10 = fVar10 / fVar13;
    fVar9 = fVar9 / fVar13;
  }
  fVar13 = fVar13 - *(float *)(*(longlong *)(param_1 + 0x18) + lVar6 * 4);
  fVar12 = (fVar13 * fVar12 * param_4) / fVar8;
  fVar10 = (fVar10 * fVar13 * param_4) / fVar8;
  fVar8 = (fVar9 * fVar13 * param_4) / fVar8;
LAB_144b06da8:
  if (0.0 < fVar1) {
    lVar6 = *(longlong *)(param_2 + 0xa8);
    lVar5 = lVar5 * 0x10;
    *(float *)(lVar6 + lVar5) = *(float *)(lVar6 + lVar5) - fVar1 * fVar8;
    *(float *)(lVar6 + 4 + lVar5) = *(float *)(lVar6 + 4 + lVar5) - fVar1 * fVar10;
    *(float *)(lVar6 + 8 + lVar5) = *(float *)(lVar6 + 8 + lVar5) - fVar1 * fVar12;
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x90) + lVar3 * 4);
  }
  if (0.0 < fVar11) {
    lVar5 = *(longlong *)(param_2 + 0xa8);
    lVar3 = lVar3 * 0x10;
    *(float *)(lVar5 + lVar3) = fVar8 * fVar11 + *(float *)(lVar5 + lVar3);
    *(float *)(lVar5 + 4 + lVar3) = fVar10 * fVar11 + *(float *)(lVar5 + 4 + lVar3);
    *(float *)(lVar5 + 8 + lVar3) = fVar12 * fVar11 + *(float *)(lVar5 + 8 + lVar3);
  }
  return;
}



// FUNCTION 144b06e76 FUN_144b06e76 body=269 status=ok
// SIG undefined FUN_144b06e76(void)

undefined8 FUN_144b06e76(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  lVar8 = 0;
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    uVar1 = *(ulonglong *)(*(longlong *)(*param_2 + 0x260) + (longlong)(int)param_2[1] * 8);
    uVar2 = *(ulonglong *)(*(longlong *)(*param_3 + 0x260) + (longlong)(int)param_3[1] * 8);
    uVar7 = uVar1 >> 0x20;
    if (uVar1 >> 0x20 == 0xffffffff) {
      uVar7 = uVar1;
    }
    bVar13 = (int)(uVar1 >> 0x20) == -1;
    uVar3 = (uint)(uVar2 >> 0x20);
    if (0xfffffffeffffffff < uVar2) {
      uVar3 = (uint)uVar2;
    }
    uVar6 = (uint)uVar7;
    uVar10 = uVar3;
    if (uVar6 < uVar3) {
      uVar10 = uVar6;
    }
    uVar5 = uVar3;
    if (uVar3 < uVar6) {
      uVar5 = uVar6;
    }
    bVar4 = 0xfffffffeffffffff < uVar2;
    if (uVar6 < uVar3) {
      bVar4 = bVar13;
      bVar13 = 0xfffffffeffffffff < uVar2;
    }
    lVar8 = CONCAT44((uint)!bVar13 << 0x1f | uVar5 & 0x7fffffff,
                     (uint)!bVar4 << 0x1f | uVar10 & 0x7fffffff);
  }
  lVar11 = (longlong)(int)param_4[1] * 0x10;
  lVar9 = (longlong)*(int *)(*(longlong *)(*param_4 + 0x1d0) + 8 + lVar11);
  if (0 < lVar9) {
    lVar11 = *(longlong *)(*(longlong *)(*param_4 + 0x1d0) + lVar11);
    lVar12 = 0;
    do {
      if (*(longlong *)(lVar11 + lVar12) == lVar8) {
        return *(undefined8 *)(lVar11 + 8 + lVar12);
      }
      lVar12 = lVar12 + 0x10;
    } while (lVar9 * 0x10 != lVar12);
    return 0;
  }
  return 0;
}



// FUNCTION 144b06f84 FUN_144b06f84 body=81 status=ok
// SIG undefined FUN_144b06f84(void)

longlong FUN_144b06f84(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if ((0xffffff < param_2) && (uVar1 = param_2 & 0xffffff, (int)uVar1 < *(int *)(param_1 + 0x30))) {
    lVar2 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
    }
    if (((*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) &&
       ((param_2 ^ *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 4)) < 0x1000000)) {
      return (ulonglong)(uVar1 << 7) + *(longlong *)(param_1 + 0x38);
    }
  }
  return 0;
}



// FUNCTION 144b06fd6 FUN_144b06fd6 body=198 status=ok
// SIG undefined FUN_144b06fd6(void)

undefined8 FUN_144b06fd6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  
  if ((longlong)(int)param_2[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    lVar4 = 0;
    do {
      plVar5 = *(longlong **)(*param_2 + lVar4);
      bVar6 = 1;
      if (plVar5 != (longlong *)0x0) {
        lVar2 = *plVar5;
        bVar6 = 1;
        if (lVar2 != 0) {
          iVar1 = *(int *)(lVar2 + 0x1c);
          if (iVar1 == 0xb) {
            plVar5 = (longlong *)(lVar2 + 0x40);
LAB_144b07014:
            lVar2 = *plVar5;
            bVar6 = 1;
            if (lVar2 != 0) {
              if (*(byte *)(lVar2 + 0x90) < 2) {
                bVar6 = 0;
              }
              else {
                bVar6 = *(byte *)(lVar2 + 0x1b9);
              }
            }
          }
          else if (iVar1 == 2) {
            iVar1 = (int)plVar5[1];
            bVar6 = 1;
            if ((-1 < (longlong)iVar1) && (bVar6 = 1, iVar1 < *(int *)(lVar2 + 0x418))) {
              lVar7 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x410) + (longlong)iVar1 * 4);
              bVar6 = 1;
              if (lVar7 != -1) {
                plVar5 = (longlong *)(lVar7 * 8 + *(longlong *)(lVar2 + 0x440));
                goto LAB_144b07014;
              }
            }
          }
          else {
            bVar6 = 1;
            if (iVar1 == 0xc) {
              plVar5 = (longlong *)(lVar2 + 0x128);
              goto LAB_144b07014;
            }
          }
        }
      }
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),(byte)uVar3 & bVar6);
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)param_2[1] * 8 != lVar4);
  }
  return uVar3;
}



// FUNCTION 144b0709c FUN_144b0709c body=537 status=ok
// SIG undefined FUN_144b0709c(void)

undefined1 (*) [16] FUN_144b0709c(undefined1 (*param_1) [16],double *param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  dVar20 = *param_3;
  dVar21 = param_3[1];
  dVar22 = param_3[2];
  dVar23 = param_3[3];
  dVar24 = *param_2;
  dVar25 = param_2[1];
  dVar26 = param_2[2];
  dVar27 = param_2[3];
  dVar28 = param_2[4];
  dVar10 = param_2[5];
  dVar29 = param_2[6];
  dVar30 = param_2[7];
  dVar1 = param_3[3];
  dVar2 = param_3[3];
  dVar3 = *param_3;
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar6 = param_3[1];
  dVar7 = param_3[2];
  dVar8 = param_3[2];
  dVar13 = dVar24 * dVar8 * 1.0 + dVar27 * dVar6 + dVar26 * dVar4 * -1.0 + dVar25 * dVar2;
  dVar15 = dVar10 * dVar20 - dVar21 * dVar28;
  dVar16 = dVar29 * dVar21 - dVar22 * dVar10;
  dVar18 = dVar28 * dVar22 - dVar20 * dVar29;
  dVar19 = dVar30 * dVar23 - dVar23 * dVar30;
  dVar16 = dVar16 + dVar16;
  dVar18 = dVar18 + dVar18;
  dVar15 = dVar15 + dVar15;
  dVar19 = dVar19 + dVar19;
  dVar9 = param_3[4];
  dVar17 = (dVar16 * dVar22 - dVar15 * dVar20) + dVar2 * dVar18 + dVar10 + param_3[5];
  dVar10 = param_3[6];
  dVar11 = param_3[7];
  auVar12._8_4_ = SUB84(dVar13,0);
  auVar12._0_8_ = dVar25 * dVar7 * -1.0 + dVar26 * dVar5 + dVar27 * dVar3 * 1.0 + dVar24 * dVar1;
  auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *param_1 = auVar12;
  *(double *)param_1[1] =
       dVar27 * dVar7 * 1.0 + ((dVar3 * dVar25 * 1.0 + dVar26 * dVar1) - dVar24 * dVar5);
  *(double *)(param_1[1] + 8) =
       dVar26 * dVar8 * -1.0 + ((dVar4 * dVar24 * -1.0 + dVar27 * dVar2) - dVar25 * dVar6);
  auVar14._8_4_ = SUB84(dVar17,0);
  auVar14._0_8_ = (dVar15 * dVar21 - dVar22 * dVar18) + dVar1 * dVar16 + dVar28 + dVar9;
  auVar14._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  param_1[2] = auVar14;
  *(double *)param_1[3] = (dVar18 * dVar20 - dVar21 * dVar16) + dVar1 * dVar15 + dVar29 + dVar10;
  *(double *)(param_1[3] + 8) =
       (dVar19 * dVar23 - dVar19 * dVar23) + dVar2 * dVar19 + dVar30 + dVar11;
  *(undefined8 *)param_1[4] = 0x3ff0000000000000;
  *(undefined8 *)(param_1[4] + 8) = 0x3ff0000000000000;
  *(undefined8 *)param_1[5] = 0x3ff0000000000000;
  *(undefined8 *)(param_1[5] + 8) = 0x3ff0000000000000;
  return param_1;
}



// FUNCTION 144b072b6 FUN_144b072b6 body=19 status=ok
// SIG undefined FUN_144b072b6(void)

undefined4 FUN_144b072b6(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x78);
  }
  return 0xffffffff;
}



// FUNCTION 144b072ca FUN_144b072ca body=76 status=ok
// SIG undefined FUN_144b072ca(void)

undefined4 FUN_144b072ca(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xf0))) {
    lVar1 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xe8);
    }
    if ((*(uint *)(lVar1 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      return *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x120) + (ulonglong)param_2 * 4);
    }
  }
  return 0xffffffff;
}



// FUNCTION 144b0731a FUN_144b0731a body=533 status=ok
// SIG undefined FUN_144b0731a(void)

longlong FUN_144b0731a(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar4 = (uint)((ulonglong)param_3 >> 0x10);
    uVar15 = (uint)param_3 & 0xffff;
    uVar10 = (uint)((ulonglong)param_2 >> 0x10);
    uVar11 = (uint)param_2 & 0xffff;
    uVar10 = (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar11) +
             (uVar11 >> 4) + (uVar10 << 0x13 | uVar10 & 0xffff);
    lVar13 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x48);
    }
    iVar12 = *(int *)(lVar13 + (ulonglong)
                               (*(int *)(param_1 + 0x50) - 1U &
                               ((uVar10 >> 2) +
                                (int)((ulonglong)param_3 >> 0x20) + (uint)param_3 * 0x10000 + uVar15
                                + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4) + uVar10 * 0x40 +
                                0x9e3779b9 ^ uVar10)) * 4);
    if (iVar12 != -1) {
      lVar13 = *(longlong *)(param_1 + 8);
      lVar7 = 0;
      do {
        lVar14 = (longlong)iVar12 * 0x40;
        lVar3 = lVar13 + lVar14;
        if ((*(longlong *)(lVar13 + lVar14) == param_2) &&
           (*(longlong *)(lVar13 + 8 + lVar14) == param_3)) {
          lVar7 = 0;
          if ((lVar3 != 0) && (pcVar9 = (char *)(lVar3 + 0x10), pcVar9 != (char *)0x0)) {
            if (*pcVar9 != '\t') goto LAB_144b07464;
            if ((*(longlong *)(lVar3 + 0x20) != 0) &&
               ((*(longlong *)(lVar3 + 0x28) == 0 ||
                (*(int *)(*(longlong *)(lVar3 + 0x28) + 8) != 1)))) {
              puVar8 = (undefined8 *)FUN_140d70568(CONCAT71((int7)((ulonglong)pcVar9 >> 8),9));
              *(undefined8 **)(lVar3 + 0x30) = puVar8;
              uVar6 = (**(code **)(**(longlong **)(lVar3 + 0x20) + 0x60))();
              (**(code **)*puVar8)(puVar8,uVar6);
              (**(code **)(**(longlong **)(lVar3 + 0x30) + 0x20))
                        (*(longlong **)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x20));
              lVar13 = *(longlong *)(lVar3 + 0x30);
              local_40 = lVar13;
              local_38 = (longlong *)FUN_14001cc68(0x18,0x10);
              local_38[1] = (longlong)&DAT_100000001;
              *local_38 = (longlong)&PTR_FUN_149f6ac80;
              local_38[2] = lVar13;
              if ((longlong *)(lVar3 + 0x20) != &local_40) {
                *(longlong *)(lVar3 + 0x20) = lVar13;
                local_40 = 0;
                FUN_145708362(lVar3 + 0x28,&local_38);
              }
              plVar5 = local_38;
              if (local_38 != (longlong *)0x0) {
                plVar1 = local_38 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_38)(local_38);
                  piVar2 = (int *)((longlong)plVar5 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
              }
            }
            lVar7 = *(longlong *)(lVar3 + 0x30);
            *(undefined1 *)(lVar7 + 8) = 1;
          }
          break;
        }
        iVar12 = *(int *)(lVar3 + 0x38);
      } while (iVar12 != -1);
      goto LAB_144b07441;
    }
  }
LAB_144b07464:
  lVar7 = 0;
LAB_144b07441:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 144b075cc FUN_144b075cc body=15 status=ok
// SIG undefined FUN_144b075cc(void)

void FUN_144b075cc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 144b075db FUN_144b075db body=31 status=ok
// SIG undefined FUN_144b075db(void)

void FUN_144b075db(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}



// FUNCTION 144b075fd FUN_144b075fd body=12 status=ok
// SIG undefined FUN_144b075fd(void)

void FUN_144b075fd(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 144b0760a FUN_144b0760a body=92 status=ok
// SIG undefined FUN_144b0760a(void)

char * FUN_144b0760a(longlong param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = DAT_14c997cc0;
  if (DAT_14c997cc0 == 0) {
    plVar3 = (longlong *)FUN_145a62958();
    lVar2 = plVar3[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar2 = plVar3[0x22];
    }
  }
  cVar1 = *(char *)(lVar2 + 0x75);
  if (*(char *)(param_1 + 0x31) != '\0') {
    cVar1 = *(char *)(param_1 + 0x31);
  }
  *param_2 = cVar1;
  return param_2;
}



// FUNCTION 144b07666 FUN_144b07666 body=92 status=ok
// SIG undefined FUN_144b07666(void)

undefined8 FUN_144b07666(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = 0;
    lVar1 = 0;
    do {
      lVar2 = lVar1;
      if (*(longlong **)(*param_1 + lVar3) != (longlong *)0x0) {
        lVar2 = **(longlong **)(*param_1 + lVar3);
        if (lVar2 == 0) {
          return 0;
        }
        lVar2 = *(longlong *)(lVar2 + 8);
        if (lVar2 == 0) {
          return 0;
        }
        if ((lVar1 != 0) && (bVar4 = lVar2 != lVar1, lVar2 = lVar1, bVar4)) {
          return 0;
        }
      }
      lVar3 = lVar3 + 8;
      lVar1 = lVar2;
    } while ((longlong)(int)param_1[1] * 8 != lVar3);
    if (lVar2 != 0) {
      return *(undefined8 *)(lVar2 + 0x260);
    }
  }
  return 0;
}



// FUNCTION 144b076fa FUN_144b076fa body=42 status=ok
// SIG undefined FUN_144b076fa(void)

void FUN_144b076fa(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_2;
  param_1[3] = *(undefined8 *)(param_2 + 0xc0);
  param_1[4] = param_5;
  *(undefined8 **)(param_2 + 0xc0) = param_1;
  return;
}



// FUNCTION 144b07724 FUN_144b07724 body=641 status=ok
// SIG undefined FUN_144b07724(void)

longlong FUN_144b07724(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar3 = 0;
  if (-1 < (longlong)param_1) {
    uVar7 = (uint)(param_1 >> 0x20);
    if ((int)uVar7 < DAT_14c998088) {
      puVar6 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar6 = DAT_14c998080;
      }
      if ((*(uint *)(puVar6 + (param_1 >> 0x25) * 4) >> (uVar7 & 0x1f) & 1) == 0) {
        lVar3 = 0;
      }
      else {
        lVar4 = (param_1 >> 0x20) * 0x68;
        lVar3 = DAT_14c998060 + lVar4;
        if ((*(byte *)(DAT_14c998060 + 0x60 + lVar4) & 1) != 0) {
          iVar1 = *(int *)(lVar3 + 0x50);
          if (iVar1 == 0) {
            uVar11 = 0;
            uVar13 = 1;
            iVar14 = 0;
            iVar5 = 0;
          }
          else {
            puVar12 = *(uint **)(lVar3 + 0x48);
            if (*(uint **)(lVar3 + 0x48) == (uint *)0x0) {
              puVar12 = (uint *)(lVar3 + 0x38);
            }
            uVar7 = *puVar12;
            if (uVar7 == 0) {
              iVar14 = iVar1 + 0x1e;
              if (-1 < iVar1 + -1) {
                iVar14 = iVar1 + -1;
              }
              uVar11 = 0;
              uVar13 = (ulonglong)(uint)(iVar14 >> 5);
              if (iVar14 >> 5 < 1) {
                uVar13 = uVar11;
              }
              iVar5 = 0;
              do {
                if (uVar13 == uVar11) goto LAB_144b07932;
                iVar5 = iVar5 + 0x20;
                uVar7 = puVar12[uVar11 + 1];
                uVar11 = uVar11 + 1;
              } while (uVar7 == 0);
            }
            else {
              uVar11 = 0;
              iVar5 = 0;
            }
            uVar13 = (ulonglong)(-uVar7 & uVar7);
            uVar15 = uVar13 * 2 + 1;
            lVar4 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
              }
            }
            iVar14 = (iVar5 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
            if (iVar1 <= iVar14) {
              iVar14 = iVar1;
            }
          }
          if (iVar14 != iVar1) {
            uVar7 = 0xffffffff;
            do {
              lVar4 = *(longlong *)(lVar3 + 0x28) + (longlong)iVar14 * 0x28;
              lVar17 = *(longlong *)(lVar3 + 0x18);
              if (*(longlong *)(lVar3 + 0x18) == 0) {
                lVar17 = lVar3 + 8;
              }
              lVar16 = *(longlong *)(lVar4 + 0x10);
              if (*(longlong *)(lVar4 + 0x10) == 0) {
                lVar16 = lVar4;
              }
              uVar8 = *(int *)(lVar3 + 0x20) + 0x1f >> 5;
              if (0 < (int)uVar8) {
                uVar15 = 0;
                do {
                  puVar12 = (uint *)(lVar16 + uVar15 * 4);
                  *puVar12 = *puVar12 | *(uint *)(lVar17 + uVar15 * 4);
                  uVar15 = uVar15 + 1;
                } while (uVar8 != uVar15);
              }
              *(byte *)(lVar4 + 0x20) = *(byte *)(lVar4 + 0x20) | 2;
              uVar7 = uVar7 & ~(uint)uVar13;
              puVar12 = *(uint **)(lVar3 + 0x48);
              if (*(uint **)(lVar3 + 0x48) == (uint *)0x0) {
                puVar12 = (uint *)(lVar3 + 0x38);
              }
              iVar2 = *(int *)(lVar3 + 0x50);
              iVar14 = (int)uVar11;
              lVar4 = (longlong)iVar14;
              uVar8 = puVar12[lVar4] & uVar7;
              if (uVar8 == 0) {
                iVar9 = iVar2 + 0x1e;
                if (-1 < iVar2 + -1) {
                  iVar9 = iVar2 + -1;
                }
                iVar9 = iVar9 >> 5;
                iVar5 = iVar5 + 0x20;
                iVar10 = iVar9;
                if (iVar9 < iVar14) {
                  iVar10 = iVar14;
                }
                if (iVar14 < iVar9) {
                  lVar17 = 0;
                  do {
                    uVar8 = puVar12[lVar4 + lVar17 + 1];
                    if (uVar8 != 0) {
                      uVar11 = (ulonglong)(iVar14 + (int)lVar17 + 1);
                      uVar7 = 0xffffffff;
                      goto LAB_144b078fe;
                    }
                    iVar5 = iVar5 + 0x20;
                    lVar17 = lVar17 + 1;
                  } while (iVar10 - lVar4 != lVar17);
                  uVar7 = 0xffffffff;
                  lVar4 = (longlong)iVar10;
                }
                uVar11 = lVar4 + 1U & 0xffffffff;
                iVar14 = iVar2;
              }
              else {
LAB_144b078fe:
                uVar13 = (ulonglong)(-uVar8 & uVar8);
                uVar15 = uVar13 * 2 + 1;
                lVar4 = 0x3f;
                if (uVar15 != 0) {
                  for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                  }
                }
                iVar14 = (iVar5 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
                if (iVar2 <= iVar14) {
                  iVar14 = iVar2;
                }
              }
            } while (iVar14 != iVar1);
          }
LAB_144b07932:
          _Dst = (void *)(lVar3 + 8);
          if (*(void **)(lVar3 + 0x18) != (void *)0x0) {
            _Dst = *(void **)(lVar3 + 0x18);
          }
          memset(_Dst,0,(longlong)(int)(*(int *)(lVar3 + 0x20) + 0x1f >> 3 & 0xfffffffc));
          *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) & 0xfe;
        }
        lVar3 = (longlong)(int)param_1 * 0x28 + *(longlong *)(lVar3 + 0x28);
      }
    }
  }
  return lVar3;
}



// FUNCTION 144b079a6 FUN_144b079a6 body=247 status=ok
// SIG undefined FUN_144b079a6(void)

void FUN_144b079a6(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar8 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar8 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          iVar3 = *param_4;
          lVar4 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar4 + (longlong)(int)param_1[6] * 0x10) = iVar3;
          }
          *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x10) = 0xffffffff;
          uVar9 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar9 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x10 + 4) = uVar9;
          *(int *)(param_1 + 6) = iVar3;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar7 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          iVar10 = iVar3 + 0x1f;
          if (-1 < iVar3) {
            iVar10 = iVar3;
          }
          bVar5 = (byte)iVar3 & 0x1f;
          puVar2 = (uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_144b07a06;
        }
        iVar8 = *(int *)(puVar1 + 1);
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_144b07a06:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 144b07aaa FUN_144b07aaa body=279 status=ok
// SIG undefined FUN_144b07aaa(void)

int FUN_144b07aaa(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  
  if (param_3 == -1) {
    param_3 = *(int *)(param_1 + 0x18);
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar5 = param_1;
  }
  iVar2 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  iVar2 = iVar2 >> 5;
  iVar8 = param_3 + 0x3e;
  if (-1 < param_3 + 0x1f) {
    iVar8 = param_3 + 0x1f;
  }
  iVar8 = iVar8 >> 5;
  uVar6 = -1 << ((byte)param_2 & 0x1f);
  uVar1 = 0xffffffff >> (-(char)(param_3 % 0x20) & 0x1fU);
  if (param_3 % 0x20 < 1) {
    uVar1 = 0xffffffff;
  }
  uVar4 = uVar1 & uVar6;
  if (iVar2 == iVar8 + -1) {
    uVar1 = uVar4;
  }
  if (iVar2 < iVar8) {
    if (iVar2 == iVar8 + -1) {
      uVar6 = uVar4;
    }
    lVar3 = (longlong)iVar2;
    iVar2 = 0;
    do {
      uVar6 = uVar6 & *(uint *)(lVar5 + lVar3 * 4);
      uVar7 = (ulonglong)uVar6 - (ulonglong)(uVar6 >> 1 & 0x55555555);
      uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
      iVar2 = iVar2 + (uint)(byte)(((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                  0x38);
      bVar9 = (longlong)iVar8 + -2 == lVar3;
      lVar3 = lVar3 + 1;
      uVar6 = 0xffffffff;
      if (bVar9) {
        uVar6 = uVar1;
      }
    } while (iVar8 != lVar3);
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



// FUNCTION 144b07bc2 FUN_144b07bc2 body=282 status=ok
// SIG undefined FUN_144b07bc2(void)

undefined8 FUN_144b07bc2(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  ushort uVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x50);
  if (uVar8 != 0) {
    uVar9 = (ulonglong)
            *(uint *)(*(longlong *)(param_1 + 0x58) +
                     (param_2 >> (-*(char *)(param_1 + 0x54) & 0x3fU) & 0xffffffff) * 4);
    lVar1 = *(longlong *)(param_1 + 0x60) + uVar8 * 2;
    if (uVar9 != 0xffffffff) {
      do {
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x60) + uVar9 * 2);
        if ((((uint)uVar2 ^ (uint)param_2) & 0x7fff) == 0) {
          if (*(int *)(lVar1 + uVar9 * 4) == (int)(param_2 >> 0xf)) {
            puVar3 = (uint *)(lVar1 + uVar8 * 4 + uVar9 * 4);
            if (puVar3 == (uint *)0x0) {
              return 1;
            }
            uVar7 = *puVar3;
            if (-1 < (int)uVar7 && (uVar7 >> 0x1e & 1) == 0) {
              return 3;
            }
            iVar6 = 0;
            if ((uVar7 >> 0x1e & 1) == 0) {
              puVar11 = (undefined4 *)0x0;
              uVar12 = 0;
            }
            else {
              puVar10 = (undefined4 *)((ulonglong)(uVar7 << 2) + *(longlong *)(param_1 + 0x68));
              puVar11 = puVar10 + 1;
              uVar12 = *puVar10;
            }
            *param_4 = puVar11;
            *(undefined4 *)(param_4 + 1) = uVar12;
            uVar7 = *puVar3;
            if ((int)uVar7 < 0) {
              piVar5 = (int *)((ulonglong)(uVar7 * 4) + *(longlong *)(param_1 + 0x68));
              if ((uVar7 >> 0x1e & 1) == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = *piVar5 * 2 + 1;
              }
              piVar5 = piVar5 + uVar7;
              piVar4 = piVar5 + 1;
              iVar6 = *piVar5;
            }
            else {
              piVar4 = (int *)0x0;
            }
            param_4[2] = piVar4;
            *(int *)(param_4 + 3) = iVar6;
            return 3;
          }
        }
        else if ((short)uVar2 < 0) {
          return 1;
        }
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while( true );
    }
  }
  return 1;
}



// FUNCTION 144b07cdc FUN_144b07cdc body=99 status=ok
// SIG undefined FUN_144b07cdc(void)

void FUN_144b07cdc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    if ((longlong *)param_2[1] == (longlong *)0x0) {
      *param_2 = lVar1;
      lVar3 = 0;
    }
    else {
      *(longlong *)param_2[1] = lVar1;
      lVar3 = param_2[1];
    }
    *(longlong *)(lVar1 + 8) = lVar3;
    param_2[1] = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000144b07d09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 144b07d40 FUN_144b07d40 body=1362 status=ok
// SIG undefined FUN_144b07d40(void)

void FUN_144b07d40(char *param_1)

{
  undefined8 *puVar1;
  void *_Src;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_398 [32];
  longlong local_378;
  undefined8 uStack_370;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  iVar11 = DAT_14c75f5e4;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if ((bool)*param_1 != (DAT_14c75f5e4 != 0)) {
    *param_1 = DAT_14c75f5e4 != 0;
    if (iVar11 == 0) {
      local_378 = 0;
      uStack_370 = 0;
      iVar11 = *(int *)(param_1 + 0x48);
      if ((longlong)iVar11 != 0) {
        lVar19 = *(longlong *)(param_1 + 0x40);
        lVar21 = 0;
        do {
          uVar16 = uStack_370;
          puVar1 = (undefined8 *)(lVar19 + 0x18 + lVar21);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)(lVar19 + 4 + lVar21) = 0xffffffff;
          _Src = *(void **)(lVar19 + 8 + lVar21);
          uVar15 = *(uint *)(lVar19 + 0x10 + lVar21);
          puVar1 = (undefined8 *)(lVar19 + 8 + lVar21);
          *puVar1 = 0;
          puVar1[1] = 0;
          if ((longlong)(int)uVar15 != 0) {
            iVar7 = (int)uStack_370;
            lVar22 = (longlong)(int)uStack_370;
            uStack_370 = CONCAT44(uStack_370._4_4_,(int)uStack_370 + uVar15);
            if ((uint)(uStack_370._4_4_ - iVar7) < uVar15) {
              FUN_140259550(&local_378,uVar16 & 0xffffffff);
            }
            memmove((void *)(lVar22 * 8 + local_378),_Src,(longlong)(int)uVar15 << 3);
          }
          if (_Src != (void *)0x0) {
            FUN_1400020a8(_Src);
          }
          lVar22 = local_378;
          lVar21 = lVar21 + 0x28;
        } while ((longlong)iVar11 * 0x28 != lVar21);
        iVar11 = (int)uStack_370;
        lVar19 = (longlong)(int)uStack_370;
        if (1 < lVar19) {
          memset(local_358,0,0x2f0);
          local_368 = lVar22;
          local_360 = lVar22 + lVar19 * 8 + -8;
          fVar25 = logf((float)iVar11);
          local_358[0] = (int)(longlong)(fVar25 + fVar25);
          plVar3 = &local_368;
          do {
            plVar4 = (longlong *)*plVar3;
            plVar5 = (longlong *)plVar3[1];
            iVar11 = (int)plVar3[2];
            iVar7 = (int)((ulonglong)((longlong)plVar5 - (longlong)plVar4) >> 3);
            uVar16 = (ulonglong)(iVar7 + 1);
            plVar9 = plVar5;
            plVar20 = plVar4;
            if (iVar11 != 0) {
LAB_144b07f2d:
              plVar6 = plVar4;
              if (8 < (int)(uint)uVar16) {
                uVar15 = (uint)uVar16 >> 1;
                lVar19 = plVar6[uVar15];
                plVar6[uVar15] = *plVar6;
                *plVar6 = lVar19;
                plVar17 = plVar9 + 1;
                plVar4 = plVar6;
                do {
                  plVar2 = plVar4 + 1;
                  plVar10 = plVar4 + 1;
                  do {
                    plVar23 = plVar10;
                    plVar4 = plVar2;
                    if (plVar9 < plVar4) break;
                    plVar2 = plVar4 + 1;
                    plVar10 = plVar23 + 1;
                  } while (*(uint *)(*plVar4 + 0x90) <= *(uint *)(*plVar6 + 0x90));
                  plVar2 = plVar17 + -2;
                  do {
                    plVar10 = plVar17;
                    plVar18 = plVar2;
                    plVar17 = plVar10 + -1;
                    if (plVar17 <= plVar6) break;
                    plVar2 = plVar18 + -1;
                  } while (*(uint *)(*plVar6 + 0x90) <= *(uint *)(*plVar17 + 0x90));
                  if (plVar17 < plVar4) goto LAB_144b07fc9;
                  lVar19 = *plVar4;
                  *plVar4 = *plVar17;
                  *plVar17 = lVar19;
                } while( true );
              }
              if (plVar6 < plVar9) {
                do {
                  plVar4 = plVar6;
                  if (plVar6 + 1 <= plVar9) {
                    lVar19 = *plVar6;
                    plVar5 = plVar6 + 1;
                    do {
                      plVar20 = plVar5;
                      lVar21 = *plVar5;
                      if (*(uint *)(*plVar5 + 0x90) <= *(uint *)(lVar19 + 0x90)) {
                        plVar20 = plVar4;
                        lVar21 = lVar19;
                      }
                      lVar19 = lVar21;
                      plVar4 = plVar20;
                      plVar5 = plVar5 + 1;
                    } while (plVar5 <= plVar9);
                  }
                  lVar19 = *plVar4;
                  *plVar4 = *plVar9;
                  *plVar9 = lVar19;
                  plVar9 = plVar9 + -1;
                } while (plVar6 < plVar9);
              }
              goto LAB_144b08213;
            }
LAB_144b0805d:
            iVar11 = (int)uVar16;
            if (iVar11 != 0) {
              iVar7 = (iVar7 - (iVar7 + -1 >> 0x1f)) + -1 >> 1;
              iVar14 = iVar7;
joined_r0x000144b08084:
              do {
                iVar13 = iVar7 * 2 + 1;
                if (iVar13 < iVar11) {
                  iVar12 = iVar7 * 2 + 2;
                  if ((iVar12 < iVar11) &&
                     (*(uint *)(plVar4[iVar13] + 0x90) <= *(uint *)(plVar4[iVar12] + 0x90))) {
                    iVar13 = iVar12;
                  }
                  lVar19 = plVar4[iVar7];
                  if (*(uint *)(lVar19 + 0x90) < *(uint *)(plVar4[iVar13] + 0x90)) {
                    plVar4[iVar7] = plVar4[iVar13];
                    plVar4[iVar13] = lVar19;
                    iVar7 = iVar13;
                    goto joined_r0x000144b08084;
                  }
                }
                bVar24 = iVar14 != 0;
                iVar7 = iVar14 + -1;
                iVar14 = iVar7;
              } while (bVar24);
              if (1 < iVar11) {
                lVar19 = *plVar4;
                *plVar4 = plVar4[uVar16 - 1];
                plVar4[uVar16 - 1] = lVar19;
                if (iVar11 != 2) {
                  do {
                    uVar8 = uVar16 - 1;
                    iVar11 = 0;
                    iVar14 = 1;
                    iVar7 = 0;
                    do {
                      iVar11 = iVar11 + 2;
                      iVar13 = iVar14;
                      if (((longlong)iVar11 < (longlong)uVar8) &&
                         (*(uint *)(plVar4[iVar14] + 0x90) <= *(uint *)(plVar4[iVar11] + 0x90))) {
                        iVar13 = iVar11;
                      }
                      lVar19 = plVar4[iVar7];
                      if (*(uint *)(plVar4[iVar13] + 0x90) <= *(uint *)(lVar19 + 0x90)) break;
                      plVar4[iVar7] = plVar4[iVar13];
                      plVar4[iVar13] = lVar19;
                      iVar11 = iVar13 * 2;
                      iVar14 = iVar13 * 2 + 1;
                      iVar7 = iVar13;
                    } while ((longlong)iVar14 < (longlong)uVar8);
                    lVar19 = *plVar4;
                    *plVar4 = plVar4[uVar16 - 2];
                    plVar4[uVar16 - 2] = lVar19;
                    uVar16 = uVar8;
                  } while (2 < uVar8);
                }
              }
            }
LAB_144b08213:
            plVar3 = plVar3 + -3;
          } while (&local_368 <= plVar3);
        }
        lVar19 = local_378;
        if ((int)uStack_370 != 0) {
          lVar21 = (longlong)(int)uStack_370;
          lVar22 = 0;
          do {
            FUN_142b05f3c(param_1,*(undefined8 *)(lVar19 + lVar22));
            lVar22 = lVar22 + 8;
          } while (lVar21 * 8 != lVar22);
        }
      }
      FUN_1417366bc(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
      param_1[0x48] = '\0';
      param_1[0x49] = '\0';
      param_1[0x4a] = '\0';
      param_1[0x4b] = '\0';
      if (*(int *)(param_1 + 0x4c) != 0) {
        FUN_147081452(param_1 + 0x40);
      }
      if (local_378 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      iVar11 = *(int *)(param_1 + 0x10);
      if ((longlong)iVar11 != 0) {
        lVar19 = *(longlong *)(param_1 + 8);
        lVar21 = 0;
        do {
          FUN_142b05f3c(param_1,*(undefined8 *)(lVar19 + lVar21));
          lVar21 = lVar21 + 8;
        } while ((longlong)iVar11 * 8 != lVar21);
      }
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      if (*(int *)(param_1 + 0x14) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_398);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_144b07fc9:
  lVar19 = *plVar6;
  *plVar6 = *plVar17;
  *plVar17 = lVar19;
  iVar11 = iVar11 + -1;
  plVar10 = plVar10 + -2;
  if ((longlong)plVar18 - (longlong)plVar20 < (longlong)plVar5 - (longlong)plVar23) {
    if (plVar4 < plVar9) {
      *plVar3 = (longlong)plVar4;
      plVar3[1] = (longlong)plVar9;
      *(int *)(plVar3 + 2) = iVar11;
      plVar3 = plVar3 + 3;
    }
    plVar4 = plVar6;
    plVar5 = plVar18;
    if (plVar17 <= plVar6 + 1) goto LAB_144b08213;
  }
  else {
    if (plVar6 + 1 < plVar17) {
      *plVar3 = (longlong)plVar6;
      plVar3[1] = (longlong)plVar10;
      *(int *)(plVar3 + 2) = iVar11;
      plVar3 = plVar3 + 3;
    }
    plVar6 = plVar23;
    plVar10 = plVar9;
    plVar5 = plVar9;
    if (plVar9 <= plVar4) goto LAB_144b08213;
  }
  iVar7 = (int)((ulonglong)((longlong)plVar5 - (longlong)plVar6) >> 3);
  uVar16 = (ulonglong)(iVar7 + 1);
  plVar9 = plVar10;
  plVar20 = plVar6;
  if (iVar11 == 0) goto LAB_144b0805d;
  goto LAB_144b07f2d;
}



// FUNCTION 144b082d2 FUN_144b082d2 body=8 status=ok
// SIG undefined FUN_144b082d2(void)

undefined8 * FUN_144b082d2(void)

{
  return &DAT_14c9a0eb8;
}



// FUNCTION 144b082da FUN_144b082da body=167 status=ok
// SIG undefined FUN_144b082da(void)

longlong FUN_144b082da(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == *(longlong *)(param_2 + 8)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_2 + 0x18);
    uVar7 = uVar2;
    if ((int)uVar1 < (int)uVar2) {
      uVar7 = uVar1;
    }
    if (0 < (int)uVar7) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      uVar6 = 0;
      do {
        if (*(longlong *)(lVar3 + uVar6 * 8) !=
            *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar6 * 8)) goto LAB_144b0834f;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    if ((int)uVar2 < (int)uVar1) {
      lVar5 = 0;
      do {
        bVar8 = *(longlong *)((longlong)(int)uVar2 * 8 + *(longlong *)(param_1 + 0x10) + lVar5 * 8)
                == 0;
        lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar8);
        if (!bVar8) {
          return lVar3;
        }
        iVar4 = (int)lVar5;
        lVar5 = lVar5 + 1;
      } while (~uVar2 + uVar1 != iVar4);
    }
    else if ((int)uVar1 < (int)uVar2) {
      lVar5 = 0;
      do {
        bVar8 = *(longlong *)((longlong)(int)uVar1 * 8 + *(longlong *)(param_2 + 0x10) + lVar5 * 8)
                == 0;
        lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar8);
        if (!bVar8) {
          return lVar3;
        }
        iVar4 = (int)lVar5;
        lVar5 = lVar5 + 1;
      } while (~uVar1 + uVar2 != iVar4);
    }
    else {
      lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
  }
  else {
LAB_144b0834f:
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 144b08382 FUN_144b08382 body=18 status=ok
// SIG undefined FUN_144b08382(void)

undefined8 FUN_144b08382(undefined8 *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 != (byte *)0x0) {
    return CONCAT71((int7)((ulonglong)pbVar1 >> 8),(*pbVar1 & 0x68) == 0);
  }
  return 0;
}



// FUNCTION 144b08394 FUN_144b08394 body=90 status=ok
// SIG undefined FUN_144b08394(void)

undefined8 * FUN_144b08394(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (param_2[1] == 0) {
    uVar4 = 0;
  }
  else {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar4 = param_2[1];
  }
  *param_1 = *param_2;
  plVar3 = (longlong *)param_1[1];
  param_1[1] = uVar4;
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
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
  }
  return param_1;
}



// FUNCTION 144b083ee FUN_144b083ee body=22 status=ok
// SIG undefined FUN_144b083ee(void)

undefined8 * FUN_144b083ee(byte *param_1)

{
  if ((*param_1 & 2) != 0) {
    return (undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
  }
  return &DAT_14c9a1288;
}



// FUNCTION 144b08404 FUN_144b08404 body=18 status=ok
// SIG undefined FUN_144b08404(void)

undefined8 * FUN_144b08404(byte *param_1)

{
  if ((*param_1 & 2) != 0) {
    return *(undefined8 **)(param_1 + 8);
  }
  return &DAT_14c9a1270;
}



// FUNCTION 144b0841a FUN_144b0841a body=95 status=ok
// SIG undefined FUN_144b0841a(void)

int FUN_144b0841a(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((*(int *)(lVar2 + lVar4 * 0x18) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x18 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x10 + lVar4 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 144b0847a FUN_144b0847a body=94 status=ok
// SIG undefined FUN_144b0847a(void)

int FUN_144b0847a(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 144b084d8 FUN_144b084d8 body=175 status=ok
// SIG undefined FUN_144b084d8(void)

undefined2 FUN_144b084d8(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  do {
    if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
      lVar2 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar2 = param_1 + 0x178;
      }
      iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x188) - 1U & param_2) * 4);
      if (iVar1 != -1) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x140) + (longlong)iVar1 * 0x10;
          if (*(uint *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar1 * 0x10) == param_2) {
            if ((lVar2 != 0) && ((undefined2 *)(lVar2 + 4) != (undefined2 *)0x0)) {
              return *(undefined2 *)(lVar2 + 4);
            }
            break;
          }
          iVar1 = *(int *)(lVar2 + 8);
        } while (iVar1 != -1);
      }
    }
    if ((longlong)*(int *)(param_1 + 600) == 0) {
      return 0xffff;
    }
    lVar2 = *(longlong *)(param_1 + 0x250);
    lVar3 = (longlong)*(int *)(param_1 + 600) * 0x60;
    while (*(uint *)(lVar2 + 0x28) != param_2) {
      lVar2 = lVar2 + 0x60;
      lVar3 = lVar3 + -0x60;
      if (lVar3 == 0) {
        return 0xffff;
      }
    }
    if (lVar2 == 0) {
      return 0xffff;
    }
    param_2 = *(uint *)(lVar2 + 0x58);
  } while( true );
}



// FUNCTION 144b085bc FUN_144b085bc body=31 status=ok
// SIG undefined FUN_144b085bc(void)

bool FUN_144b085bc(longlong param_1,float param_2)

{
  return ABS(*(float *)(param_1 + 4) - param_2) <= 1e-08;
}



// FUNCTION 144b085dc FUN_144b085dc body=25 status=ok
// SIG undefined FUN_144b085dc(void)

void FUN_144b085dc(byte *param_1)

{
  ushort *puVar1;
  
  puVar1 = *(ushort **)(param_1 + 8);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 & ~(ushort)(1L << (*param_1 & 0x3f));
  }
  return;
}



// FUNCTION 144b085f6 FUN_144b085f6 body=3 status=ok
// SIG undefined FUN_144b085f6(void)

undefined1 FUN_144b085f6(undefined1 *param_1)

{
  return *param_1;
}



// FUNCTION 144b08600 FUN_144b08600 body=656 status=ok
// SIG undefined FUN_144b08600(void)

longlong FUN_144b08600(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xd20);
  lVar4 = (longlong)iVar2;
  if (0 < lVar4) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar6 = *(longlong *)(lVar3 + 0xd18);
    if (lVar6 == 0) {
      lVar6 = lVar3 + 0xcf8;
    }
    lVar3 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar6 + lVar5) == param_1) goto LAB_144b0875a;
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 - lVar5 != 0);
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(uint *)(lVar3 + 0xd20) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0xd24) < iVar2 + 1U) {
    FUN_1468740ae(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xcf8,iVar2);
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar6 = *(longlong *)(lVar3 + 0xd18);
  if (lVar6 == 0) {
    lVar6 = lVar3 + 0xcf8;
  }
  *(longlong *)(lVar6 + lVar4 * 8) = param_1;
  lVar3 = 0;
  if ((param_2 != 0) && (lVar4 = *(longlong *)(param_1 + 0x10), lVar4 != 0)) {
    if ((*(byte *)(param_2 + 0xd5) & 0x40) != 0) {
      if (DAT_14c950d78 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_1468b50ee;
        local_50 = FUN_1427f23a3;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78);
      }
      if (DAT_14c950d78 != param_2) {
        do {
          if (0 < (longlong)*(int *)(lVar4 + 0x1e0)) {
            lVar6 = 0;
            do {
              lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1d8) + lVar6);
              if (((lVar5 != 0) && (*(int *)(param_2 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
                 (lVar3 = param_1,
                 *(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8)
                 == param_2 + 0x30)) goto LAB_144b08741;
              lVar6 = lVar6 + 0x10;
            } while ((longlong)*(int *)(lVar4 + 0x1e0) * 0x10 != lVar6);
          }
          lVar4 = *(longlong *)(lVar4 + 0x40);
          lVar3 = 0;
        } while (lVar4 != 0);
        goto LAB_144b08741;
      }
    }
    lVar3 = 0;
  }
LAB_144b08741:
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xd20);
  *piVar1 = *piVar1 + -1;
LAB_144b0875a:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 144b0893e FUN_144b0893e body=8 status=ok
// SIG undefined FUN_144b0893e(void)

bool FUN_144b0893e(longlong param_1)

{
  return *(int *)(param_1 + 0x38) == 0;
}



// FUNCTION 144b08958 FUN_144b08958 body=85 status=ok
// SIG undefined FUN_144b08958(void)

void FUN_144b08958(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if ((plVar3 != (longlong *)0x0) && ((char)plVar3[7] == '\x01')) {
        (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 144b08a78 FUN_144b08a78 body=413 status=ok
// SIG undefined FUN_144b08a78(void)

void FUN_144b08a78(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  
  lVar3 = DAT_14c9ab990;
  if (*(code **)(*param_1 + 0x98) == FUN_142b4dc4e) {
    iVar8 = -1;
    if (param_1[0x40] != DAT_14c9abbf0) {
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar8 = *(int *)(lVar2 + 0xc60);
      if (((iVar8 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar8 == 2)) {
        uVar11 = 0;
      }
      else if (iVar8 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        uVar11 = (ulonglong)(DVar9 != DVar10);
      }
      else {
        uVar11 = 1;
      }
      lVar4 = DAT_14c9ab990;
      iVar8 = *(int *)((longlong)param_1 + 0x1dc);
      if (*(int *)(lVar3 + uVar11 * 4) != -1) {
        iVar7 = *(int *)(lVar2 + 0xc60);
        if (iVar8 == -1) {
          if (iVar7 == 0x40000002) {
            uVar11 = 0;
          }
          else {
            bVar6 = FUN_144a61b4f();
            uVar11 = (ulonglong)(bVar6 ^ 1);
          }
          iVar8 = *(int *)(lVar4 + uVar11 * 4);
        }
        else {
          if (iVar7 == 0x40000002) {
            uVar11 = 0;
          }
          else {
            bVar6 = FUN_144a61b4f();
            uVar11 = (ulonglong)(bVar6 ^ 1);
            iVar8 = *(int *)((longlong)param_1 + 0x1dc);
          }
          iVar7 = *(int *)(lVar4 + uVar11 * 4);
          if (iVar7 <= iVar8) {
            iVar8 = iVar7;
          }
        }
      }
    }
  }
  else {
    iVar8 = (**(code **)(*param_1 + 0x98))(param_1);
  }
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x41);
    bVar5 = false;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144b08b2e;
    plVar12 = (longlong *)
              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar12 != (longlong *)0x0) &&
       (((int)plVar12[2] == *(int *)((longlong)param_1 + 0x20c) &&
        ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)))) {
      bVar5 = false;
      if ((iVar8 != -1) && ((longlong *)*plVar12 != (longlong *)0x0)) {
        iVar7 = (**(code **)(*(longlong *)*plVar12 + 0x340))();
        bVar5 = iVar8 < iVar7;
      }
      goto LAB_144b08b2e;
    }
  }
  bVar5 = false;
LAB_144b08b2e:
  *(bool *)(param_1 + 0x59) = bVar5;
  return;
}



// FUNCTION 144b08c16 FUN_144b08c16 body=167 status=ok
// SIG undefined FUN_144b08c16(void)

byte FUN_144b08c16(char *param_1,longlong param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  
  uVar2 = 1 << ((byte)(*(uint *)(param_2 + 0xc) >> 0x15) & 0x1f);
  uVar1 = *(uint *)(param_1 + 0xc) >> 0x15 & 0x1f;
  if (*param_1 == '\0') {
    bVar4 = (uVar1 == 0) + 1;
    if (param_3 == '\0') {
      bVar4 = 2;
    }
    if ((uVar2 & *(uint *)(param_1 + 4)) == 0) {
      bVar4 = 0;
    }
  }
  else {
    bVar3 = (*(uint *)(param_2 + 8) >> uVar1 & 1) != 0;
    if ((*(uint *)(param_2 + 4) >> uVar1 & 1) != 0) {
      bVar3 = 2;
    }
    bVar4 = (*(uint *)(param_1 + 8) & uVar2) != 0;
    if ((*(uint *)(param_1 + 4) & uVar2) != 0) {
      bVar4 = 2;
    }
    if (bVar3 < bVar4) {
      bVar4 = bVar3;
    }
    if (((0x3ffffff < (*(uint *)(param_1 + 0xc) & ~*(uint *)(param_2 + 4))) ||
        (0x3ffffff < (*(uint *)(param_2 + 0xc) & ~*(uint *)(param_1 + 4)))) && (bVar4 == 2)) {
      bVar4 = 1;
    }
  }
  return bVar4;
}



// FUNCTION 144b08cbe FUN_144b08cbe body=338 status=ok
// SIG undefined FUN_144b08cbe(void)

void FUN_144b08cbe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if ((((*(byte *)(lVar3 + 0x20) & 1) != 0) ||
          ((((ABS(*(double *)(lVar3 + 0x60)) <= 9.99999993922529e-09 &&
             (ABS(*(double *)(lVar3 + 0x68)) <= 9.99999993922529e-09)) &&
            (ABS(*(double *)(lVar3 + 0x70)) <= 9.99999993922529e-09)) &&
           (((ABS(*(double *)(lVar3 + 0x48)) <= 9.99999993922529e-09 &&
             (ABS(*(double *)(lVar3 + 0x50)) <= 9.99999993922529e-09)) &&
            (ABS(*(double *)(lVar3 + 0x58)) <= 9.99999993922529e-09)))))) &&
         (*(double *)(lVar3 + 0xe8) * *(double *)(lVar3 + 0xe8) +
          *(double *)(lVar3 + 0xd8) * *(double *)(lVar3 + 0xd8) +
          *(double *)(lVar3 + 0xe0) * *(double *)(lVar3 + 0xe0) +
          *(double *)(lVar3 + 0x100) * *(double *)(lVar3 + 0x100) +
          *(double *)(lVar3 + 0xf0) * *(double *)(lVar3 + 0xf0) +
          *(double *)(lVar3 + 0xf8) * *(double *)(lVar3 + 0xf8) < 9.99999993922529e-09)) {
        *(undefined1 *)(lVar3 + 0x270) = 1;
        *(undefined8 *)(lVar3 + 0x268) = 0;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 144b08e10 FUN_144b08e10 body=517 status=ok
// SIG undefined FUN_144b08e10(void)

double * FUN_144b08e10(double *param_1,double *param_2,double *param_3)

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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar1 = param_1[2];
  dVar2 = param_1[5];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_1[8];
  dVar6 = param_3[2];
  dVar17 = dVar5 * dVar6 + dVar1 * dVar3 + dVar2 * dVar4;
  dVar7 = *param_1;
  dVar8 = param_1[1];
  dVar9 = param_1[4];
  dVar10 = param_1[7];
  dVar18 = dVar10 * dVar6 + dVar8 * dVar3 + dVar4 * dVar9;
  dVar11 = param_1[3];
  dVar12 = param_1[6];
  dVar16 = dVar6 * dVar12 + dVar3 * dVar7 + dVar4 * dVar11;
  *param_2 = dVar16;
  param_2[1] = dVar18;
  param_2[2] = dVar17;
  dVar3 = param_1[0x14];
  dVar4 = param_1[0x12];
  dVar6 = param_1[0x13];
  dVar13 = param_3[3];
  dVar14 = param_3[4];
  dVar15 = param_3[5];
  param_2[3] = dVar12 * dVar15 + dVar7 * dVar13 + dVar11 * dVar14 +
               (dVar18 * dVar3 - dVar6 * dVar17);
  param_2[4] = dVar10 * dVar15 + dVar8 * dVar13 + dVar9 * dVar14 + (dVar17 * dVar4 - dVar3 * dVar16)
  ;
  param_2[5] = dVar5 * dVar15 + dVar1 * dVar13 + dVar2 * dVar14 + (dVar16 * dVar6 - dVar4 * dVar18);
  return param_2;
}



// FUNCTION 144b09016 FUN_144b09016 body=572 status=ok
// SIG undefined FUN_144b09016(void)

double * FUN_144b09016(double *param_1,double *param_2,double *param_3)

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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar1 = param_1[3];
  dVar2 = param_1[4];
  dVar3 = param_1[5];
  dVar4 = param_3[2];
  dVar5 = *param_3;
  dVar6 = param_3[1];
  dVar11 = dVar6 * dVar3 - dVar2 * dVar4;
  dVar11 = dVar11 + dVar11;
  dVar7 = param_3[3];
  dVar15 = dVar5 * dVar2 - dVar1 * dVar6;
  dVar15 = dVar15 + dVar15;
  dVar12 = dVar4 * dVar1 - dVar3 * dVar5;
  dVar12 = dVar12 + dVar12;
  dVar8 = *param_1;
  dVar9 = param_1[1];
  dVar10 = param_1[2];
  dVar14 = dVar6 * dVar10 - dVar9 * dVar4;
  dVar14 = dVar14 + dVar14;
  dVar16 = dVar5 * dVar9 - dVar8 * dVar6;
  dVar16 = dVar16 + dVar16;
  dVar13 = dVar4 * dVar8 - dVar10 * dVar5;
  dVar13 = dVar13 + dVar13;
  *param_2 = (dVar6 * dVar16 - dVar13 * dVar4) + dVar7 * dVar14 + dVar8;
  param_2[1] = (dVar4 * dVar14 - dVar16 * dVar5) + dVar7 * dVar13 + dVar9;
  param_2[2] = (dVar5 * dVar13 - dVar14 * dVar6) + dVar7 * dVar16 + dVar10;
  param_2[3] = (dVar6 * dVar15 - dVar12 * dVar4) + dVar11 * dVar7 + dVar1;
  param_2[4] = (dVar4 * dVar11 - dVar15 * dVar5) + dVar7 * dVar12 + dVar2;
  param_2[5] = (dVar5 * dVar12 - dVar11 * dVar6) + dVar7 * dVar15 + dVar3;
  return param_2;
}



// FUNCTION 144b09252 FUN_144b09252 body=635 status=ok
// SIG undefined FUN_144b09252(void)

int FUN_144b09252(longlong param_1,longlong param_2,byte param_3)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (*(char *)(param_1 + 0x151) == '\0') {
    if (*(int *)(param_1 + 0x10) < 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = **(longlong **)(param_1 + 8);
    }
    iVar4 = 0;
    if (*(char *)(lVar5 + 0x270) == '\0') {
      lVar5 = *(longlong *)(param_2 + 0x18);
      lVar3 = *(longlong *)(param_2 + 0x20);
      if ((((*(byte *)(lVar5 + 0x20) & 1) == 0) &&
          ((((9.99999993922529e-09 < ABS(*(double *)(lVar5 + 0x60)) ||
             (9.99999993922529e-09 < ABS(*(double *)(lVar5 + 0x68)))) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar5 + 0x70)))) ||
           (((9.99999993922529e-09 < ABS(*(double *)(lVar5 + 0x48)) ||
             (9.99999993922529e-09 < ABS(*(double *)(lVar5 + 0x50)))) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar5 + 0x58)))))))) ||
         (((*(byte *)(lVar3 + 0x20) & 1) == 0 &&
          (((9.99999993922529e-09 < ABS(*(double *)(lVar3 + 0x60)) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar3 + 0x68)))) ||
           ((9.99999993922529e-09 < ABS(*(double *)(lVar3 + 0x70)) ||
            (((9.99999993922529e-09 < ABS(*(double *)(lVar3 + 0x48)) ||
              (9.99999993922529e-09 < ABS(*(double *)(lVar3 + 0x50)))) ||
             (iVar4 = 0, 9.99999993922529e-09 < ABS(*(double *)(lVar3 + 0x58)))))))))))) {
        dVar6 = ABS(*(double *)(param_2 + 0x770)) + ABS(*(double *)(param_2 + 0x768));
        iVar4 = 0;
        lVar5 = -0x18;
        do {
          dVar7 = *(double *)(param_2 + 0xf00 + lVar5 * 2);
          if (dVar6 <= 9.99999993922529e-09) {
            dVar8 = *(double *)(param_2 + 0xf30 + lVar5 * 2);
          }
          else {
            dVar8 = *(double *)(param_2 + 0x768 + lVar5 * 2);
            dVar1 = dVar8;
            if (dVar7 <= dVar8) {
              dVar1 = dVar7;
            }
            dVar7 = dVar1;
            dVar1 = *(double *)(param_2 + 0xf30 + lVar5 * 2);
            if (dVar8 <= dVar1) {
              dVar8 = dVar1;
            }
          }
          iVar2 = *(int *)(param_2 + 0xf48 + lVar5);
          if ((iVar2 == 2) ||
             (((9.99999993922529e-09 < dVar6 &&
               (9.99999993922529e-09 < *(double *)(param_2 + 0x7b0 + lVar5 * 2))) &&
              ((9.99999993922529e-09 < *(double *)(param_2 + 0x7e0 + lVar5 * 2) && (param_3 == 0))))
             )) {
            iVar4 = iVar4 + 1;
          }
          dVar1 = *(double *)(param_2 + 0x708 + lVar5 * 2);
          iVar4 = iVar4 + (uint)(byte)(iVar2 == 1 & -(dVar8 < dVar1 || dVar1 < dVar7) &
                                      (param_3 ^ 1));
          lVar5 = lVar5 + 4;
        } while (lVar5 != 0);
      }
    }
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}



// FUNCTION 144b094ce FUN_144b094ce body=2832 status=ok
// SIG undefined FUN_144b094ce(void)

void FUN_144b094ce(longlong param_1,double param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  byte bVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  double *pdVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auStack_198 [32];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130 [4];
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  pdVar1 = (double *)(param_1 + 0xf0);
  iVar11 = _finite(*(double *)(param_1 + 0xf0));
  if (((iVar11 == 0) || (iVar11 = _finite(*(double *)(param_1 + 0xf8)), iVar11 == 0)) ||
     (iVar11 = _finite(*(double *)(param_1 + 0x100)), iVar11 == 0)) {
    *(undefined8 *)(param_1 + 0x100) = DAT_14c8464f0;
    uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *pdVar1 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    *(undefined8 *)(param_1 + 0xf8) = uVar7;
  }
  pdVar2 = (double *)(param_1 + 0xd8);
  iVar11 = _finite(*(double *)(param_1 + 0xd8));
  if (((iVar11 == 0) || (iVar11 = _finite(*(double *)(param_1 + 0xe0)), iVar11 == 0)) ||
     (iVar11 = _finite(*(double *)(param_1 + 0xe8)), iVar11 == 0)) {
    *(undefined8 *)(param_1 + 0xe8) = DAT_14c8464f0;
    uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *pdVar2 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    *(undefined8 *)(param_1 + 0xe0) = uVar7;
  }
  iVar11 = _finite(*(double *)(param_1 + 0xc0));
  if (((iVar11 == 0) || (iVar11 = _finite(*(double *)(param_1 + 200)), iVar11 == 0)) ||
     (iVar11 = _finite(*(double *)(param_1 + 0xd0)), iVar11 == 0)) {
    *(undefined8 *)(param_1 + 0xd0) = DAT_14c8464f0;
    uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *(undefined8 *)(param_1 + 0xc0) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    *(undefined8 *)(param_1 + 200) = uVar7;
  }
  iVar11 = _finite(*(double *)(param_1 + 0xa8));
  if (((iVar11 == 0) || (iVar11 = _finite(*(double *)(param_1 + 0xb0)), iVar11 == 0)) ||
     (iVar11 = _finite(*(double *)(param_1 + 0xb8)), iVar11 == 0)) {
    *(undefined8 *)(param_1 + 0xb8) = DAT_14c8464f0;
    uVar10 = DAT_14c8464e8._4_4_;
    uVar9 = (undefined4)DAT_14c8464e8;
    uVar8 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0xa8) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(param_1 + 0xac) = uVar8;
    *(undefined4 *)(param_1 + 0xb0) = uVar9;
    *(undefined4 *)(param_1 + 0xb4) = uVar10;
  }
  if (*(char *)(param_1 + 0x270) == '\0') {
    if (((*(byte *)(param_1 + 0x20) & 1) == 0) &&
       (((9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x60)) ||
         (9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x68)))) ||
        (((9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x70)) ||
          ((9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x48)) ||
           (9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x50)))))) ||
         (9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x58)))))))) {
      bVar4 = *(byte *)(param_1 + 0x21);
      uVar14 = 0x3ff00000;
      local_158 = 1.0;
      if ((bVar4 & 0x20) != 0) {
        local_158 = 0.0;
      }
      local_160 = 1.0;
      if ((bVar4 & 0x10) != 0) {
        local_160 = 0.0;
      }
      local_168 = 1.0;
      if ((bVar4 & 8) != 0) {
        local_168 = 0.0;
      }
      local_130[2] = *(double *)(param_1 + 0xa0) * local_158 * *(double *)(param_1 + 0xd0);
      local_130[1] = *(double *)(param_1 + 0x98) * local_160 * *(double *)(param_1 + 200);
      local_130[0] = *(double *)(param_1 + 0x90) * local_168 * *(double *)(param_1 + 0xc0);
      local_150 = local_130[0] * param_2 + *(double *)(param_1 + 0xf0);
      *(double *)(param_1 + 0xf0) = local_150;
      local_148 = local_130[1] * param_2 + *(double *)(param_1 + 0xf8);
      *(double *)(param_1 + 0xf8) = local_148;
      local_140 = local_130[2] * param_2 + *(double *)(param_1 + 0x100);
      *(double *)(param_1 + 0x100) = local_140;
      local_170 = 1.0;
      if ((bVar4 & 4) != 0) {
        local_170 = 0.0;
      }
      uVar15 = uVar14;
      if ((bVar4 & 2) != 0) {
        uVar15 = 0;
      }
      if ((bVar4 & 1) != 0) {
        uVar14 = 0;
      }
      local_170 = local_170 * *(double *)(param_1 + 0x88);
      dVar5 = (double)((ulonglong)uVar15 << 0x20) * *(double *)(param_1 + 0x80);
      local_178 = (double)((ulonglong)uVar14 << 0x20) * *(double *)(param_1 + 0x78);
      dVar6 = *(double *)(param_1 + 400);
      dVar16 = *(double *)(param_1 + 0x198);
      dVar26 = *(double *)(param_1 + 0x1a0);
      dVar27 = *(double *)(param_1 + 0x1a8);
      dVar18 = *(double *)(param_1 + 0x148);
      dVar19 = *(double *)(param_1 + 0x148);
      dVar23 = *(double *)(param_1 + 0x138);
      dVar20 = *(double *)(param_1 + 0x138);
      dVar24 = *(double *)(param_1 + 0x130);
      dVar21 = *(double *)(param_1 + 0x130);
      dVar17 = *(double *)(param_1 + 0x140);
      dVar3 = *(double *)(param_1 + 0x140);
      dVar22 = dVar16 * dVar17 * -1.0 + dVar26 * dVar23 + dVar24 * dVar27 * 1.0 + dVar18 * dVar6;
      dVar25 = dVar6 * dVar3 * 1.0 + dVar27 * dVar20 + dVar21 * dVar26 * -1.0 + dVar19 * dVar16;
      dVar24 = dVar27 * dVar17 * 1.0 + ((dVar24 * dVar16 * 1.0 + dVar18 * dVar26) - dVar23 * dVar6);
      dVar17 = dVar26 * dVar3 * -1.0 + ((dVar21 * dVar6 * -1.0 + dVar19 * dVar27) - dVar20 * dVar16)
      ;
      dVar27 = dVar25 + dVar25;
      dVar18 = dVar24 + dVar24;
      dVar26 = dVar22 * (dVar22 + dVar22);
      dVar16 = (dVar22 + dVar22) * dVar17;
      dVar19 = 1.0 - (dVar24 * dVar18 + dVar25 * dVar27);
      dVar23 = dVar17 * dVar18 + dVar22 * dVar27;
      dVar20 = dVar22 * dVar18 - dVar27 * dVar17;
      dVar3 = dVar22 * dVar27 - dVar17 * dVar18;
      dVar21 = 1.0 - (dVar24 * dVar18 + dVar26);
      dVar6 = dVar25 * dVar18 + dVar16;
      dVar22 = dVar27 * dVar17 + dVar22 * dVar18;
      dVar16 = dVar25 * dVar18 - dVar16;
      dVar24 = 1.0 - (dVar25 * dVar27 + dVar26);
      dVar26 = local_178 * dVar19;
      dVar18 = dVar5 * dVar23;
      dVar17 = local_170 * dVar20;
      pdVar12 = &local_108;
      local_130[3] = dVar20 * dVar17 + dVar19 * dVar26 + dVar23 * dVar18;
      local_f8 = local_170 * dVar6 * dVar6 + local_178 * dVar3 * dVar3 + dVar21 * dVar5 * dVar21;
      local_d8 = local_170 * dVar24 * dVar24 + local_178 * dVar22 * dVar22 + dVar5 * dVar16 * dVar16
      ;
      local_110 = dVar6 * dVar17 + dVar3 * dVar26 + dVar21 * dVar18;
      local_100 = local_110;
      local_108 = dVar17 * dVar24 + dVar26 * dVar22 + dVar18 * dVar16;
      local_e8 = local_108;
      local_f0 = local_170 * dVar6 * dVar24 + local_178 * dVar3 * dVar22 + dVar5 * dVar21 * dVar16;
      local_e0 = local_f0;
      dVar18 = *(double *)(param_1 + 0xa8);
      dVar19 = *(double *)(param_1 + 0xb0);
      dVar23 = *(double *)(param_1 + 0xb8);
      lVar13 = 0;
      do {
        local_130[lVar13] = *pdVar12 * dVar23 + pdVar12[-2] * dVar18 + pdVar12[-1] * dVar19;
        lVar13 = lVar13 + 1;
        pdVar12 = pdVar12 + 3;
      } while (lVar13 != 3);
      *(double *)(param_1 + 0xd8) = local_130[0] * param_2 + *(double *)(param_1 + 0xd8);
      *(double *)(param_1 + 0xe0) = local_130[1] * param_2 + *(double *)(param_1 + 0xe0);
      *(double *)(param_1 + 0xe8) = local_130[2] * param_2 + *(double *)(param_1 + 0xe8);
      dVar18 = *(double *)(param_1 + 0x110);
      uVar14 = 0x3ff00000;
      if (1.0 <= dVar18) {
        dVar18 = 1.0;
      }
      if (dVar18 <= 0.0) {
        dVar18 = 0.0;
      }
      local_138 = param_2;
      dVar18 = pow(1.0 - dVar18,param_2);
      bVar4 = *(byte *)(param_1 + 0x21);
      dVar19 = 1.0;
      if ((bVar4 & 0x20) == 0) {
        dVar19 = 0.0;
      }
      dVar23 = 1.0;
      if ((bVar4 & 0x10) == 0) {
        dVar23 = 0.0;
      }
      uVar15 = uVar14;
      if ((bVar4 & 8) == 0) {
        uVar15 = 0;
      }
      *(double *)(param_1 + 0xf0) =
           local_150 * local_168 * dVar18 +
           (double)((ulonglong)uVar15 << 0x20) * *(double *)(param_1 + 0xf0);
      *(double *)(param_1 + 0xf8) =
           local_148 * local_160 * dVar18 + dVar23 * *(double *)(param_1 + 0xf8);
      *(double *)(param_1 + 0x100) =
           local_140 * local_158 * dVar18 + dVar19 * *(double *)(param_1 + 0x100);
      uVar15 = uVar14;
      if ((bVar4 & 4) != 0) {
        uVar15 = 0;
      }
      uVar28 = uVar14;
      if ((bVar4 & 2) != 0) {
        uVar28 = 0;
      }
      uVar29 = uVar14;
      if ((bVar4 & 1) != 0) {
        uVar29 = 0;
      }
      dVar18 = *(double *)(param_1 + 0xe8);
      dVar19 = *(double *)(param_1 + 0xe0);
      dVar23 = *(double *)(param_1 + 0xd8);
      dVar20 = *(double *)(param_1 + 0x108);
      if (1.0 <= dVar20) {
        dVar20 = 1.0;
      }
      if (dVar20 <= 0.0) {
        dVar20 = 0.0;
      }
      dVar20 = pow(1.0 - dVar20,param_2);
      bVar4 = *(byte *)(param_1 + 0x21);
      dVar21 = 1.0;
      if ((bVar4 & 4) == 0) {
        dVar21 = 0.0;
      }
      dVar24 = 1.0;
      if ((bVar4 & 2) == 0) {
        dVar24 = 0.0;
      }
      if ((bVar4 & 1) == 0) {
        uVar14 = 0;
      }
      dVar18 = (double)((ulonglong)uVar15 << 0x20) * dVar18 * dVar20 +
               dVar21 * *(double *)(param_1 + 0xe8);
      dVar19 = (double)((ulonglong)uVar28 << 0x20) * dVar19 * dVar20 +
               dVar24 * *(double *)(param_1 + 0xe0);
      dVar23 = (double)((ulonglong)uVar29 << 0x20) * dVar23 * dVar20 +
               (double)((ulonglong)uVar14 << 0x20) * *(double *)(param_1 + 0xd8);
      *(double *)(param_1 + 0xd8) = dVar23;
      *(double *)(param_1 + 0xe0) = dVar19;
      *(double *)(param_1 + 0xe8) = dVar18;
      lVar13 = *(longlong *)(param_1 + 8);
      if (lVar13 != 0) {
        dVar20 = *(double *)(lVar13 + 0x98);
        dVar21 = *(double *)(param_1 + 0xf0);
        if (dVar20 <= *(double *)(param_1 + 0xf0)) {
          dVar21 = dVar20;
        }
        if (dVar21 <= -dVar20) {
          dVar21 = -dVar20;
        }
        *(double *)(param_1 + 0xf0) = dVar21;
        dVar20 = *(double *)(lVar13 + 0x98);
        dVar21 = *(double *)(param_1 + 0xf8);
        if (dVar20 <= *(double *)(param_1 + 0xf8)) {
          dVar21 = dVar20;
        }
        if (dVar21 <= -dVar20) {
          dVar21 = -dVar20;
        }
        *(double *)(param_1 + 0xf8) = dVar21;
        dVar20 = *(double *)(lVar13 + 0x98);
        dVar21 = *(double *)(param_1 + 0x100);
        if (dVar20 <= *(double *)(param_1 + 0x100)) {
          dVar21 = dVar20;
        }
        if (dVar21 <= -dVar20) {
          dVar21 = -dVar20;
        }
        *(double *)(param_1 + 0x100) = dVar21;
        dVar20 = *(double *)(lVar13 + 0xa0);
        if (dVar20 <= dVar23) {
          dVar23 = dVar20;
        }
        if (dVar23 <= -dVar20) {
          dVar23 = -dVar20;
        }
        *(double *)(param_1 + 0xd8) = dVar23;
        dVar23 = *(double *)(lVar13 + 0xa0);
        if (dVar23 <= dVar19) {
          dVar19 = dVar23;
        }
        if (dVar19 <= -dVar23) {
          dVar19 = -dVar23;
        }
        *(double *)(param_1 + 0xe0) = dVar19;
        dVar19 = *(double *)(lVar13 + 0xa0);
        if (dVar19 <= dVar18) {
          dVar18 = dVar19;
        }
        if (dVar18 <= -dVar19) {
          dVar18 = -dVar19;
        }
        *(double *)(param_1 + 0xe8) = dVar18;
      }
    }
    iVar11 = _finite(*pdVar1);
    if (((iVar11 == 0) || (iVar11 = _finite(*(double *)(param_1 + 0xf8)), iVar11 == 0)) ||
       (iVar11 = _finite(*(double *)(param_1 + 0x100)), iVar11 == 0)) {
      *(undefined8 *)(param_1 + 0x100) = DAT_14c8464f0;
      uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      *pdVar1 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      *(undefined8 *)(param_1 + 0xf8) = uVar7;
    }
    iVar11 = _finite(*pdVar2);
    if (((iVar11 == 0) || (iVar11 = _finite(*(double *)(param_1 + 0xe0)), iVar11 == 0)) ||
       (iVar11 = _finite(*(double *)(param_1 + 0xe8)), iVar11 == 0)) {
      *(undefined8 *)(param_1 + 0xe8) = DAT_14c8464f0;
      uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      *pdVar2 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      *(undefined8 *)(param_1 + 0xe0) = uVar7;
    }
    *(undefined8 *)(param_1 + 0xd0) = DAT_14c8464f0;
    uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *(undefined8 *)(param_1 + 0xc0) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    *(undefined8 *)(param_1 + 200) = uVar7;
    *(undefined8 *)(param_1 + 0xb8) = DAT_14c8464f0;
    uVar10 = DAT_14c8464e8._4_4_;
    uVar9 = (undefined4)DAT_14c8464e8;
    uVar8 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0xa8) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(param_1 + 0xac) = uVar8;
    *(undefined4 *)(param_1 + 0xb0) = uVar9;
    *(undefined4 *)(param_1 + 0xb4) = uVar10;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_198);
  }
  if ((local_d0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b09fe0 FUN_144b09fe0 body=900 status=ok
// SIG undefined FUN_144b09fe0(void)

int FUN_144b09fe0(longlong param_1,longlong param_2,byte param_3,char param_4)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  double *pdVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x2a8) == 0) {
      iVar2 = 0;
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0x2a0);
      lVar12 = (longlong)*(int *)(param_1 + 0x2a8) * 0x520 + lVar11;
      iVar2 = 0;
      do {
        uVar8 = *(ulonglong *)(lVar11 + 0x508);
        uVar14 = *(ulonglong *)(lVar11 + 0x518);
        uVar7 = uVar14;
        if (uVar8 < uVar14) {
          uVar7 = uVar8;
          uVar8 = uVar14;
        }
        lVar9 = *(longlong *)(param_1 + 8);
        if (*(int *)(lVar9 + 0x210) != *(int *)(lVar9 + 0x23c)) {
          uVar4 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          uVar5 = uVar5 >> 0x10 ^ uVar5;
          lVar3 = lVar9 + 0x240;
          if (*(longlong *)(lVar9 + 0x248) != 0) {
            lVar3 = *(longlong *)(lVar9 + 0x248);
          }
          iVar6 = *(int *)(lVar3 + (ulonglong)
                                   (*(int *)(lVar9 + 0x250) - 1U &
                                   ((uVar5 >> 2) + uVar5 * 0x40 + (uVar4 >> 0x10 ^ uVar4) +
                                    0x9e3779b9 ^ uVar5)) * 4);
          if (iVar6 != -1) {
            lVar9 = *(longlong *)(lVar9 + 0x208);
            do {
              lVar13 = (longlong)iVar6 * 0x538;
              lVar3 = lVar9 + lVar13;
              if ((*(ulonglong *)(lVar9 + lVar13) == uVar7) &&
                 (*(ulonglong *)(lVar9 + 8 + lVar13) == uVar8)) goto LAB_144b0a133;
              iVar6 = *(int *)(lVar3 + 0x530);
            } while (iVar6 != -1);
          }
        }
        lVar3 = 0;
LAB_144b0a133:
        if (((byte)(*(byte *)(lVar3 + 0x18) ^ 1 | param_3) == 1) &&
           (uVar8 = (ulonglong)*(int *)(lVar3 + 0x508), 0 < (longlong)uVar8)) {
          if (*(double *)(lVar3 + 0xb8) <= 0.0) {
            pdVar10 = (double *)(lVar3 + 0x1f0);
            uVar14 = 0;
            do {
              if (uVar8 - 1 == uVar14) goto LAB_144b0a154;
              dVar1 = *pdVar10;
              pdVar10 = pdVar10 + 0x27;
              uVar14 = uVar14 + 1;
            } while (dVar1 <= 0.0);
            if (uVar8 <= uVar14) goto LAB_144b0a154;
          }
          lVar9 = (longlong)iVar2;
          iVar2 = iVar2 + 1;
          *(longlong *)(param_2 + lVar9 * 8) = lVar3 + 0x10;
          if (param_4 != '\0') {
            *(undefined1 *)(lVar3 + 0x18) = 1;
          }
        }
LAB_144b0a154:
        lVar11 = lVar11 + 0x520;
      } while (lVar11 != lVar12);
    }
    iVar6 = *(int *)(param_1 + 0x298);
    if ((longlong)iVar6 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x290);
      lVar12 = 0;
      do {
        lVar9 = *(longlong *)(lVar11 + lVar12);
        if ((((byte)(*(byte *)(lVar9 + 8) ^ 1 | param_3) == 1) &&
            (9.99999993922529e-09 < *(double *)(lVar9 + 0x1f0))) &&
           ((*(char *)(lVar9 + 0x200) != '\x01' ||
            (9.99999993922529e-09 < *(double *)(lVar9 + 0x1f8))))) {
          lVar3 = (longlong)iVar2;
          iVar2 = iVar2 + 1;
          *(longlong *)(param_2 + lVar3 * 8) = lVar9;
          if (param_4 != '\0') {
            *(undefined1 *)(lVar9 + 8) = 1;
          }
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar6 * 8 != lVar12);
    }
    lVar11 = *(longlong *)(param_1 + 0x2b8);
    if ((lVar11 != 0) && ((*(char *)(lVar11 + 8) != '\x01' || (param_3 != 0)))) {
      lVar12 = (longlong)iVar2;
      iVar2 = iVar2 + 1;
      *(longlong *)(param_2 + lVar12 * 8) = lVar11;
      if (param_4 != '\0') {
        *(undefined1 *)(*(longlong *)(param_1 + 0x2b8) + 8) = 1;
      }
    }
    iVar6 = *(int *)(param_1 + 0x2d0);
    if ((longlong)iVar6 != 0) {
      lVar11 = *(longlong *)(param_1 + 0x2c8);
      lVar12 = 0;
      do {
        lVar9 = *(longlong *)(lVar11 + lVar12);
        lVar3 = *(longlong *)(lVar9 + 0x2b8);
        if ((byte)(*(byte *)(lVar3 + 8) ^ 1 | param_3) == 1) {
          lVar13 = (longlong)iVar2;
          iVar2 = iVar2 + 1;
          *(longlong *)(param_2 + lVar13 * 8) = lVar3;
          if (param_4 != '\0') {
            *(undefined1 *)(*(longlong *)(lVar9 + 0x2b8) + 8) = 1;
          }
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar6 * 8 != lVar12);
    }
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2b0) + 0x40);
    if (lVar11 != 0) {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x38);
      lVar9 = 0;
      do {
        lVar3 = *(longlong *)(lVar12 + lVar9);
        if (((*(longlong *)(lVar3 + 0x18) == param_1) || (*(longlong *)(lVar3 + 0x20) == param_1))
           && ((byte)(*(byte *)(lVar3 + 8) ^ 1 | param_3) == 1)) {
          lVar13 = (longlong)iVar2;
          iVar2 = iVar2 + 1;
          *(longlong *)(param_2 + lVar13 * 8) = lVar3;
          if (param_4 != '\0') {
            *(undefined1 *)(lVar3 + 8) = 1;
          }
        }
        lVar9 = lVar9 + 8;
      } while (lVar11 * 8 != lVar9);
    }
  }
  return iVar2;
}



// FUNCTION 144b0a364 FUN_144b0a364 body=27 status=ok
// SIG undefined FUN_144b0a364(void)

void FUN_144b0a364(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    if (*(longlong *)(param_2 + lVar1 * 8) == 0) {
      *(undefined1 *)*param_1 = 0;
      return;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 6);
  return;
}



// FUNCTION 144b0a38c FUN_144b0a38c body=6592 status=ok
// SIG undefined FUN_144b0a38c(void)

undefined8 FUN_144b0a38c(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  double dVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int iVar20;
  undefined8 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStack_228 [40];
  double local_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
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
  double local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  sVar6 = *(short *)(param_1 + 0x270);
  uVar19 = CONCAT71((int7)(local_c0 >> 8),1);
  if (sVar6 == 2) {
    dVar5 = *(double *)(param_1 + 0x1c0);
    dVar27 = *(double *)(param_1 + 0x1b0);
    dVar33 = *(double *)(param_1 + 0x1b8);
    dVar37 = *(double *)(param_1 + 0x1d8);
    dVar34 = dVar37 - dVar5;
    dVar35 = *(double *)(param_1 + 0x1d0);
    dVar38 = dVar35 - dVar33;
    dVar31 = *(double *)(param_1 + 0x1c8);
    dVar32 = dVar31 - dVar27;
    dVar30 = (dVar27 * dVar38 - dVar32 * dVar33) - dVar5;
    dVar12 = (dVar5 * dVar32 - dVar34 * dVar27) - dVar33;
    dVar26 = (dVar33 * dVar34 - dVar38 * dVar5) - dVar27;
    dVar36 = dVar32 * dVar12 - dVar26 * dVar38;
    dVar26 = dVar34 * dVar26 - dVar30 * dVar32;
    dVar30 = dVar38 * dVar30 - dVar12 * dVar34;
    dVar34 = dVar36 * dVar36 + dVar30 * dVar30 + dVar26 * dVar26;
    if (((dVar34 != 1.0) || (dVar38 = dVar30, dVar32 = dVar36, dVar12 = dVar26, NAN(dVar34))) &&
       (dVar38 = DAT_14c8462c0, dVar32 = DAT_14c8462d0, dVar12 = DAT_14c8462c8,
       9.99999993922529e-09 <= dVar34)) {
      dVar34 = 1.0 / SQRT(dVar34);
      dVar38 = dVar30 * dVar34;
      dVar32 = dVar36 * dVar34;
      dVar12 = dVar26 * dVar34;
    }
    *(double *)(param_1 + 0x278) = dVar38;
    *(double *)(param_1 + 0x280) = dVar12;
    *(double *)(param_1 + 0x288) = dVar32;
    dVar5 = dVar5 * dVar32 + dVar27 * dVar38 + dVar33 * dVar12;
    if (dVar5 < 0.0) {
      *(double *)(param_1 + 0x278) = -dVar38;
      *(double *)(param_1 + 0x280) = -dVar12;
      *(double *)(param_1 + 0x288) = -dVar32;
    }
    if (dVar5 * dVar5 <= dVar37 * dVar37 + dVar31 * dVar31 + dVar35 * dVar35) goto LAB_144b0a42e;
    *(undefined2 *)(param_1 + 0x270) = 1;
    *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x1d8);
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1d0);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x168);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x16c);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x170);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x174);
    uVar21 = *(undefined8 *)(param_1 + 0x178);
  }
  else {
    if (sVar6 == 4) {
      local_200 = *(double *)(param_1 + 0x208);
      dVar5 = *(double *)(param_1 + 0x1c0);
      uVar41 = SUB84(dVar5,0);
      uVar42 = (undefined4)((ulonglong)dVar5 >> 0x20);
      dVar35 = local_200 - dVar5;
      local_1e0 = *(double *)(param_1 + 0x200);
      dVar27 = *(double *)(param_1 + 0x1b0);
      uVar39 = SUB84(dVar27,0);
      uVar40 = (undefined4)((ulonglong)dVar27 >> 0x20);
      dVar33 = *(double *)(param_1 + 0x1b8);
      local_1c0 = local_1e0 - dVar33;
      dVar37 = *(double *)(param_1 + 0x1f8);
      local_1c8 = dVar37 - dVar27;
      local_188 = *(double *)(param_1 + 0x1d8);
      local_190 = *(double *)(param_1 + 0x1d0);
      local_178 = *(double *)(param_1 + 0x1c8);
      uStack_1b0 = 0;
      local_1b8 = (local_178 - dVar27) * local_1c0 - local_1c8 * (local_190 - dVar33);
      local_1f8 = (local_188 - dVar5) * local_1c8 - dVar35 * (local_178 - dVar27);
      local_1a8 = (local_190 - dVar33) * dVar35 - local_1c0 * (local_188 - dVar5);
      *(double *)(param_1 + 0x278) = local_1a8;
      *(double *)(param_1 + 0x280) = local_1f8;
      *(double *)(param_1 + 0x288) = local_1b8;
      local_130 = *(double *)(param_1 + 0x1e8);
      local_180 = *(double *)(param_1 + 0x1e0);
      uStack_1f0 = 0;
      uStack_1a0 = 0;
      local_138 = *(double *)(param_1 + 0x1f0);
      puVar3 = (undefined8 *)(param_1 + 0x1b0);
      puVar1 = (undefined8 *)(param_1 + 0x1c8);
      if ((local_138 - dVar5) * local_1b8 +
          (local_180 - dVar27) * local_1a8 + (local_130 - dVar33) * local_1f8 <= 0.0) {
        uVar21 = *(undefined8 *)(param_1 + 0x1c0);
        uVar17 = *puVar3;
        uVar18 = *(undefined8 *)(param_1 + 0x1b8);
        *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x1d8);
        *puVar3 = *puVar1;
        *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1d0);
        *(undefined8 *)(param_1 + 0x1d8) = uVar21;
        *puVar1 = uVar17;
        *(undefined8 *)(param_1 + 0x1d0) = uVar18;
        uVar17 = *(undefined8 *)(param_1 + 0xf0);
        uVar18 = *(undefined8 *)(param_1 + 0xf8);
        uVar21 = *(undefined8 *)(param_1 + 0x100);
        *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x108);
        *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x110);
        *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x118);
        *(undefined8 *)(param_1 + 0x118) = uVar21;
        *(undefined8 *)(param_1 + 0x108) = uVar17;
        *(undefined8 *)(param_1 + 0x110) = uVar18;
        local_d8 = *(undefined8 *)(param_1 + 0x150);
        uStack_d0 = *(undefined8 *)(param_1 + 0x158);
        local_c8 = *(undefined8 *)(param_1 + 0x160);
        *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x168);
        *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x170);
        *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x178);
        *(undefined8 *)(param_1 + 0x168) = local_d8;
        *(undefined8 *)(param_1 + 0x170) = uStack_d0;
        *(undefined8 *)(param_1 + 0x178) = local_c8;
        dVar35 = *(double *)(param_1 + 0x1c0);
        uVar41 = SUB84(dVar35,0);
        uVar42 = (undefined4)((ulonglong)dVar35 >> 0x20);
        local_1c8 = *(double *)(param_1 + 0x1b0);
        uVar39 = SUB84(local_1c8,0);
        uVar40 = (undefined4)((ulonglong)local_1c8 >> 0x20);
        dVar33 = *(double *)(param_1 + 0x1b8);
        local_188 = *(double *)(param_1 + 0x1d8);
        local_190 = *(double *)(param_1 + 0x1d0);
        local_178 = *(double *)(param_1 + 0x1c8);
        dVar35 = local_200 - dVar35;
        local_1c0 = local_1e0 - dVar33;
        local_1c8 = dVar37 - local_1c8;
      }
      else {
        uStack_1b0 = 0x8000000000000000;
        local_1b8 = -local_1b8;
        local_1a8 = -local_1a8;
        uStack_1a0 = 0x8000000000000000;
        uStack_1f0 = 0x8000000000000000;
        auVar8._8_4_ = SUB84(local_1f8,0);
        auVar8._0_8_ = local_1a8;
        auVar8._12_4_ = (int)((ulonglong)-local_1f8 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x278) = auVar8;
        *(double *)(param_1 + 0x288) = local_1b8;
        local_1f8 = -local_1f8;
      }
      local_110 = local_138 - local_200;
      local_198 = local_130 - local_1e0;
      local_158 = local_180 - dVar37;
      dVar31 = (double)CONCAT44(uVar42,uVar41) - local_200;
      dVar33 = dVar33 - local_1e0;
      dVar27 = (double)CONCAT44(uVar40,uVar39) - dVar37;
      local_118 = dVar27 * local_198 - local_158 * dVar33;
      local_120 = dVar31 * local_158 - local_110 * dVar27;
      local_e0 = dVar33 * local_110 - local_198 * dVar31;
      local_f8 = local_190 - local_1e0;
      local_e8 = local_178 - dVar37;
      local_1d0 = local_158 * local_f8 - local_e8 * local_198;
      local_f0 = local_188 - local_200;
      local_168 = local_110 * local_e8 - local_f0 * local_158;
      local_128 = local_198 * local_f0 - local_f8 * local_110;
      dVar26 = local_1a8 * local_1c0;
      dVar5 = local_1c8 * local_1f8;
      local_108 = dVar35 * local_1a8 - local_1b8 * local_1c8;
      dVar34 = local_1c0 * local_1b8;
      local_1c0 = dVar27 * local_120 - local_e0 * dVar33;
      local_100 = dVar31 * local_e0 - local_118 * dVar27;
      local_148 = local_1e0 - local_130;
      local_140 = dVar37 - local_180;
      local_150 = local_200 - local_138;
      local_1c8 = local_158 * local_168 - local_128 * local_198;
      dVar30 = local_1c8 * local_200 +
               (local_198 * local_1d0 - local_168 * local_110) * dVar37 +
               (local_110 * local_128 - local_1d0 * local_158) * local_1e0;
      dVar27 = local_1b8 * local_200 + local_1a8 * dVar37 + local_1f8 * local_1e0;
      uVar24 = (uint)((dVar5 - dVar26) * local_200 +
                      (dVar34 - local_1f8 * dVar35) * dVar37 + local_108 * local_1e0 <
                     0.0010000000474974513) +
               (uint)(local_1c0 * local_200 +
                      (dVar33 * local_118 - local_120 * dVar31) * dVar37 + local_100 * local_1e0 <
                     0.0010000000474974513) * 2 +
               (uint)((local_140 * local_120 - local_e0 * local_148) * local_200 +
                      (local_148 * local_118 - local_120 * local_150) * dVar37 +
                      (local_150 * local_e0 - local_118 * local_140) * local_1e0 <
                     0.0010000000474974513) * 4;
      uVar25 = (uint)(((dVar37 - local_178) * local_168 - local_128 * (local_1e0 - local_190)) *
                      local_200 +
                      ((local_1e0 - local_190) * local_1d0 - local_168 * (local_200 - local_188)) *
                      dVar37 + ((local_200 - local_188) * local_128 -
                               local_1d0 * (dVar37 - local_178)) * local_1e0 < 0.0010000000474974513
                     ) * 0x10 + (uint)(dVar30 < 0.0010000000474974513) * 8 |
               (uint)((local_e8 * local_1f8 - local_1a8 * local_f8) * local_200 +
                      (local_f8 * local_1b8 - local_1f8 * local_f0) * dVar37 +
                      (local_f0 * local_1a8 - local_1b8 * local_e8) * local_1e0 <
                     0.0010000000474974513) << 5 | uVar24;
      uVar22 = (uint)(local_118 * local_200 + local_e0 * dVar37 + local_120 * local_1e0 <
                     0.0010000000474974513) << 7 | (uint)(dVar27 < 0.0010000000474974513) << 6 |
               uVar25;
      uVar23 = (uint)(local_1d0 * local_200 + local_128 * dVar37 + local_168 * local_1e0 <
                     0.0010000000474974513) << 8 | uVar22;
      if (uVar23 < 0x40) {
        *(undefined1 *)(param_1 + 0x272) = 1;
        dVar5 = *(double *)(param_1 + 0x1d8);
        dVar27 = *(double *)(param_1 + 0x1c0);
        dVar33 = *(double *)(param_1 + 0x1d0);
        dVar35 = *(double *)(param_1 + 0x1b8);
        local_1b8 = dVar27 - local_200;
        local_1a8 = dVar5 - local_200;
        dVar38 = local_200 - dVar27;
        local_178 = dVar5 - local_138;
        uStack_170 = 0;
        local_200 = dVar35 - local_1e0;
        local_1d8 = dVar33 - local_1e0;
        dVar36 = local_1e0 - dVar35;
        local_168 = dVar33 - local_130;
        uStack_160 = 0;
        dVar31 = *(double *)(param_1 + 0x1c8);
        dVar26 = *(double *)(param_1 + 0x1b0);
        local_1d0 = dVar26 - dVar37;
        local_1e0 = dVar31 - dVar37;
        dVar30 = (dVar26 - dVar31) * (local_130 - dVar33) - (local_180 - dVar31) * (dVar35 - dVar33)
        ;
        dVar34 = (dVar27 - dVar5) * (local_180 - dVar31) - (local_138 - dVar5) * (dVar26 - dVar31);
        dVar12 = (dVar35 - dVar33) * (local_138 - dVar5) - (dVar27 - dVar5) * (local_130 - dVar33);
        dVar32 = (local_180 - dVar26) * dVar36 - (dVar37 - dVar26) * (local_130 - dVar35);
        dVar26 = (local_138 - dVar27) * (dVar37 - dVar26) - dVar38 * (local_180 - dVar26);
        dVar37 = (local_130 - dVar35) * dVar38 - dVar36 * (local_138 - dVar27);
        dVar33 = local_1d0 * local_1d8 - local_1e0 * local_200;
        local_1f8 = local_1b8 * local_1e0 - local_1a8 * local_1d0;
        dVar27 = local_200 * local_1a8 - local_1d8 * local_1b8;
        dVar35 = (dVar31 - local_180) * local_148 - local_140 * local_168;
        dVar31 = local_178 * local_140 - local_150 * (dVar31 - local_180);
        dVar5 = local_168 * local_150 - local_148 * local_178;
        dVar38 = dVar35 * dVar35 + dVar5 * dVar5 + dVar31 * dVar31;
        *(double *)(param_1 + 600) = dVar12;
        *(double *)(param_1 + 0x260) = dVar34;
        *(double *)(param_1 + 0x268) = dVar30;
        *(double *)(param_1 + 0x228) = dVar37;
        *(double *)(param_1 + 0x230) = dVar26;
        *(double *)(param_1 + 0x238) = dVar32;
        *(double *)(param_1 + 0x240) = dVar27;
        *(double *)(param_1 + 0x248) = local_1f8;
        *(double *)(param_1 + 0x250) = dVar33;
        *(double *)(param_1 + 0x210) = dVar5;
        *(double *)(param_1 + 0x218) = dVar31;
        *(double *)(param_1 + 0x220) = dVar35;
        if (9.99999993922529e-09 < dVar38) {
          dVar38 = 1.0 / SQRT(dVar38);
          dVar5 = dVar5 * dVar38;
          *(double *)(param_1 + 0x210) = dVar5;
          dVar31 = dVar31 * dVar38;
          *(double *)(param_1 + 0x218) = dVar31;
          dVar35 = dVar35 * dVar38;
          *(double *)(param_1 + 0x220) = dVar35;
        }
        dVar38 = dVar32 * dVar32 + dVar37 * dVar37 + dVar26 * dVar26;
        if (9.99999993922529e-09 < dVar38) {
          dVar38 = 1.0 / SQRT(dVar38);
          dVar37 = dVar37 * dVar38;
          *(double *)(param_1 + 0x228) = dVar37;
          dVar26 = dVar26 * dVar38;
          *(double *)(param_1 + 0x230) = dVar26;
          dVar32 = dVar32 * dVar38;
          *(double *)(param_1 + 0x238) = dVar32;
        }
        dVar38 = dVar33 * dVar33 + dVar27 * dVar27 + local_1f8 * local_1f8;
        if (9.99999993922529e-09 < dVar38) {
          dVar38 = 1.0 / SQRT(dVar38);
          dVar27 = dVar27 * dVar38;
          *(double *)(param_1 + 0x240) = dVar27;
          local_1f8 = local_1f8 * dVar38;
          *(double *)(param_1 + 0x248) = local_1f8;
          dVar33 = dVar33 * dVar38;
          *(double *)(param_1 + 0x250) = dVar33;
        }
        uStack_1f0 = 0;
        dVar38 = dVar30 * dVar30 + dVar12 * dVar12 + dVar34 * dVar34;
        if (9.99999993922529e-09 < dVar38) {
          dVar38 = 1.0 / SQRT(dVar38);
          dVar12 = dVar12 * dVar38;
          *(double *)(param_1 + 600) = dVar12;
          dVar34 = dVar34 * dVar38;
          *(double *)(param_1 + 0x260) = dVar34;
          dVar30 = dVar30 * dVar38;
          *(double *)(param_1 + 0x268) = dVar30;
        }
        if (0.0 < local_1b8 * dVar35 + local_1d0 * dVar5 + local_200 * dVar31) {
          auVar9._8_4_ = SUB84(dVar31,0);
          auVar9._0_8_ = -dVar5;
          auVar9._12_4_ = (uint)((ulonglong)dVar31 >> 0x20) ^ 0x80000000;
          *(undefined1 (*) [16])(param_1 + 0x210) = auVar9;
          *(double *)(param_1 + 0x220) = -dVar35;
        }
        if (0.0 < local_1a8 * dVar32 + local_1e0 * dVar37 + local_1d8 * dVar26) {
          auVar14._8_4_ = SUB84(dVar26,0);
          auVar14._0_8_ = -dVar37;
          auVar14._12_4_ = (uint)((ulonglong)dVar26 >> 0x20) ^ 0x80000000;
          *(undefined1 (*) [16])(param_1 + 0x228) = auVar14;
          *(double *)(param_1 + 0x238) = -dVar32;
        }
        if (0.0 < local_110 * dVar33 + local_158 * dVar27 + local_198 * local_1f8) {
          auVar10._8_4_ = SUB84(local_1f8,0);
          auVar10._0_8_ = -dVar27;
          auVar10._12_4_ = (uint)((ulonglong)local_1f8 >> 0x20) ^ 0x80000000;
          *(undefined1 (*) [16])(param_1 + 0x240) = auVar10;
          *(double *)(param_1 + 0x250) = -dVar33;
        }
        if (0.0 < local_150 * dVar30 + local_140 * dVar12 + local_148 * dVar34) {
          auVar13._8_4_ = SUB84(dVar34,0);
          auVar13._0_8_ = -dVar12;
          auVar13._12_4_ = (uint)((ulonglong)dVar34 >> 0x20) ^ 0x80000000;
          *(undefined1 (*) [16])(param_1 + 600) = auVar13;
          *(double *)(param_1 + 0x268) = -dVar30;
        }
        uVar19 = 0;
      }
      else {
        puVar2 = (undefined8 *)(param_1 + 0x1f8);
        local_1d8 = dVar37;
        if (uVar23 == 0x1ff) {
          *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x208);
          *puVar3 = *puVar2;
          *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x200);
          *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x148);
          *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x138);
          *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x140);
          *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x198);
          *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x19c);
          *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x1a0);
          *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x1a4);
          *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x1a8);
          *(undefined2 *)(param_1 + 0x270) = 1;
        }
        else {
          if ((~uVar22 & 0xc3) == 0) {
            *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0x208);
            *puVar1 = *puVar2;
            *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x200);
            *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x148);
            *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x138);
            *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x140);
            *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x198);
            *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x19c);
            *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x1a0);
            *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x1a4);
            *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x1a8);
          }
          else if ((~uVar23 & 0x18c) == 0) {
            *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x1f0);
            *puVar3 = *(undefined8 *)(param_1 + 0x1e0);
            *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1e8);
            *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x130);
            *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x120);
            *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x128);
            *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 400);
            *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x180);
            *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x188);
            *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0x208);
            *puVar1 = *puVar2;
            *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x200);
            *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x138);
            *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x140);
            *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x148);
            *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x1a8);
            *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x198);
            *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x19c);
            *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x1a0);
            *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x1a4);
          }
          else {
            if ((~uVar23 & 0x170) != 0) {
              if ((0.0010000000474974513 <= dVar27) || ((uVar25 & 0xffffffe1) != 0)) {
                if ((0.0010000000474974513 <= dVar30) || (1 < uVar24)) {
                  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x208);
                  *puVar3 = *puVar2;
                  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x200);
                  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x148);
                  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x138);
                  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x140);
                  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x198);
                  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x19c);
                  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x1a0);
                  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x1a4);
                  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x1a8);
                }
                else {
                  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0x208);
                  *puVar1 = *puVar2;
                  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x200);
                  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x148);
                  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x138);
                  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x140);
                  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x198);
                  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x19c);
                  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x1a0);
                  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x1a4);
                  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x1a8);
                }
              }
              else {
                *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x208);
                *(undefined8 *)(param_1 + 0x1e0) = *puVar2;
                *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x200);
                *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x148);
                *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x138);
                *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x140);
                *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x198);
                *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x19c);
                *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x1a0);
                *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x1a4);
                *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x1a8);
              }
              *(undefined2 *)(param_1 + 0x270) = 3;
              goto LAB_144b0a42e;
            }
            *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x208);
            *puVar3 = *puVar2;
            *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x200);
            *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x148);
            *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x138);
            *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x140);
            *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x198);
            *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x19c);
            *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x1a0);
            *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x1a4);
            *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x1a8);
          }
          *(undefined2 *)(param_1 + 0x270) = 2;
        }
      }
      goto LAB_144b0a42e;
    }
    if (sVar6 != 3) goto LAB_144b0a42e;
    local_1f8 = *(double *)(param_1 + 0x1f0);
    dVar5 = *(double *)(param_1 + 0x1c0);
    dVar12 = local_1f8 - dVar5;
    local_200 = *(double *)(param_1 + 0x1e8);
    dVar27 = *(double *)(param_1 + 0x1b0);
    dVar33 = *(double *)(param_1 + 0x1b8);
    dVar34 = local_200 - dVar33;
    dVar37 = *(double *)(param_1 + 0x1e0);
    dVar38 = dVar37 - dVar27;
    dVar35 = *(double *)(param_1 + 0x1d8);
    dVar31 = *(double *)(param_1 + 0x1d0);
    dVar26 = *(double *)(param_1 + 0x1c8);
    dVar30 = (dVar26 - dVar27) * dVar34 - dVar38 * (dVar31 - dVar33);
    dVar28 = (dVar35 - dVar5) * dVar38 - dVar12 * (dVar26 - dVar27);
    dVar32 = (dVar31 - dVar33) * dVar12 - dVar34 * (dVar35 - dVar5);
    dVar36 = dVar30 * dVar30 + dVar32 * dVar32 + dVar28 * dVar28;
    if (((dVar36 != 1.0) || (dVar29 = dVar28, dVar11 = dVar30, dVar15 = dVar32, NAN(dVar36))) &&
       (dVar29 = DAT_14c8462c8, dVar11 = DAT_14c8462d0, dVar15 = DAT_14c8462c0,
       9.99999993922529e-09 <= dVar36)) {
      dVar36 = 1.0 / SQRT(dVar36);
      dVar29 = dVar28 * dVar36;
      dVar11 = dVar30 * dVar36;
      dVar15 = dVar32 * dVar36;
    }
    *(double *)(param_1 + 0x278) = dVar15;
    *(double *)(param_1 + 0x280) = dVar29;
    *(double *)(param_1 + 0x288) = dVar11;
    dVar30 = dVar29;
    if (dVar5 * dVar11 + dVar27 * dVar15 + dVar33 * dVar29 < 0.0) {
      dVar11 = -dVar11;
      dVar30 = -dVar29;
      dVar15 = -dVar15;
      auVar7._8_4_ = SUB84(dVar29,0);
      auVar7._0_8_ = dVar15;
      auVar7._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x278) = auVar7;
      *(double *)(param_1 + 0x288) = dVar11;
    }
    dVar5 = dVar15 * dVar34 - dVar38 * dVar30;
    dVar38 = dVar11 * dVar38 - dVar12 * dVar15;
    dVar33 = dVar30 * dVar12 - dVar34 * dVar11;
    dVar34 = dVar15 * (local_200 - dVar31) - (dVar37 - dVar26) * dVar30;
    dVar27 = dVar11 * (dVar37 - dVar26) - (local_1f8 - dVar35) * dVar15;
    dVar30 = dVar30 * (local_1f8 - dVar35) - (local_200 - dVar31) * dVar11;
    if (dVar5 * dVar35 + dVar33 * dVar26 + dVar31 * dVar38 <= 0.0) {
      dVar34 = -dVar34;
      dVar27 = -dVar27;
      dVar30 = -dVar30;
    }
    else {
      dVar5 = -dVar5;
      dVar38 = -dVar38;
      dVar33 = -dVar33;
    }
    iVar20 = 2;
    if (0.0 < (-dVar37 * dVar33 - dVar38 * local_200) - dVar5 * local_1f8) {
      *(undefined2 *)(param_1 + 0x270) = 2;
      *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0x1f0);
      *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x1e0);
      *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x1e8);
      *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x130);
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x128);
      *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x180);
      *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x188);
      *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x18c);
      *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 400);
      dVar35 = *(double *)(param_1 + 0x1d8);
      dVar31 = *(double *)(param_1 + 0x1d0);
      dVar26 = *(double *)(param_1 + 0x1c8);
      iVar20 = 1;
    }
    if ((dVar30 * -dVar26 - dVar27 * dVar31) - dVar34 * dVar35 <= 0.0) goto LAB_144b0a42e;
    *(short *)(param_1 + 0x270) = (short)iVar20;
    lVar16 = (ulonglong)(uint)(iVar20 << 3) * 3;
    *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x1c0 + lVar16);
    puVar3 = (undefined8 *)(param_1 + 0x1b0 + lVar16);
    uVar21 = puVar3[1];
    *(undefined8 *)(param_1 + 0x1b0) = *puVar3;
    *(undefined8 *)(param_1 + 0x1b8) = uVar21;
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x100 + lVar16);
    puVar3 = (undefined8 *)(param_1 + 0xf0 + lVar16);
    uVar21 = puVar3[1];
    *(undefined8 *)(param_1 + 0xf0) = *puVar3;
    *(undefined8 *)(param_1 + 0xf8) = uVar21;
    puVar4 = (undefined4 *)(param_1 + 0x150 + lVar16);
    uVar39 = puVar4[1];
    uVar40 = puVar4[2];
    uVar41 = puVar4[3];
    *(undefined4 *)(param_1 + 0x150) = *puVar4;
    *(undefined4 *)(param_1 + 0x154) = uVar39;
    *(undefined4 *)(param_1 + 0x158) = uVar40;
    *(undefined4 *)(param_1 + 0x15c) = uVar41;
    uVar21 = *(undefined8 *)(param_1 + 0x160 + lVar16);
  }
  *(undefined8 *)(param_1 + 0x160) = uVar21;
LAB_144b0a42e:
  if ((local_c0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19;
}



// FUNCTION 144b0bd4e FUN_144b0bd4e body=216 status=ok
// SIG undefined FUN_144b0bd4e(void)

void FUN_144b0bd4e(double *param_1,longlong param_2,uint param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (0 < (int)param_3) {
    bVar4 = true;
    lVar3 = 0;
    do {
      if (bVar4) {
        pdVar1 = (double *)(param_2 + lVar3);
        param_1[5] = pdVar1[2];
        dVar2 = pdVar1[1];
        param_1[3] = *pdVar1;
        param_1[4] = dVar2;
        dVar2 = *pdVar1;
        dVar7 = pdVar1[1];
        param_1[2] = pdVar1[2];
        *param_1 = dVar2;
        param_1[1] = dVar7;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      else {
        dVar2 = *param_1;
        uVar5 = SUB84(dVar2,0);
        uVar6 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar7 = *(double *)(param_2 + lVar3);
        if (dVar7 <= dVar2) {
          uVar5 = SUB84(dVar7,0);
          uVar6 = (undefined4)((ulonglong)dVar7 >> 0x20);
        }
        *param_1 = (double)CONCAT44(uVar6,uVar5);
        dVar2 = *(double *)(param_2 + 8 + lVar3);
        dVar7 = param_1[1];
        if (dVar2 <= param_1[1]) {
          dVar7 = dVar2;
        }
        param_1[1] = dVar7;
        dVar2 = param_1[2];
        uVar5 = SUB84(dVar2,0);
        uVar6 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar7 = *(double *)(param_2 + 0x10 + lVar3);
        if (dVar7 <= dVar2) {
          uVar5 = SUB84(dVar7,0);
          uVar6 = (undefined4)((ulonglong)dVar7 >> 0x20);
        }
        param_1[2] = (double)CONCAT44(uVar6,uVar5);
        dVar2 = param_1[3];
        uVar5 = SUB84(dVar2,0);
        uVar6 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar7 = *(double *)(param_2 + lVar3);
        if (dVar2 <= dVar7) {
          uVar5 = SUB84(dVar7,0);
          uVar6 = (undefined4)((ulonglong)dVar7 >> 0x20);
        }
        param_1[3] = (double)CONCAT44(uVar6,uVar5);
        dVar2 = param_1[4];
        uVar5 = SUB84(dVar2,0);
        uVar6 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar7 = *(double *)(param_2 + 8 + lVar3);
        if (dVar2 <= dVar7) {
          uVar5 = SUB84(dVar7,0);
          uVar6 = (undefined4)((ulonglong)dVar7 >> 0x20);
        }
        param_1[4] = (double)CONCAT44(uVar6,uVar5);
        dVar2 = param_1[5];
        uVar5 = SUB84(dVar2,0);
        uVar6 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar7 = *(double *)(param_2 + 0x10 + lVar3);
        if (dVar2 <= dVar7) {
          uVar5 = SUB84(dVar7,0);
          uVar6 = (undefined4)((ulonglong)dVar7 >> 0x20);
        }
        param_1[5] = (double)CONCAT44(uVar6,uVar5);
      }
      lVar3 = lVar3 + 0x18;
      bVar4 = false;
    } while ((ulonglong)param_3 * 0x18 != lVar3);
  }
  return;
}



// FUNCTION 144b0be26 FUN_144b0be26 body=1040 status=ok
// SIG undefined FUN_144b0be26(void)

void FUN_144b0be26(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  ulonglong local_a8;
  undefined8 *local_a0;
  longlong local_98;
  int local_8c;
  uint *local_88;
  ulonglong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = (uint *)(param_1 + 0x218);
  uVar13 = *(uint *)(param_1 + 0x230);
  local_a8 = (ulonglong)uVar13;
  if (uVar13 == 0) {
    uVar14 = 1;
    uVar12 = 0;
    iVar18 = 0;
    uVar11 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x228);
    if (*(uint **)(param_1 + 0x228) == (uint *)0x0) {
      puVar5 = local_88;
    }
    uVar11 = *puVar5;
    if (uVar11 == 0) {
      iVar18 = uVar13 + 0x1e;
      if (-1 < (int)(uVar13 - 1)) {
        iVar18 = uVar13 - 1;
      }
      uVar12 = 0;
      uVar10 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar10 = uVar12;
      }
      iVar18 = 0;
      do {
        if (uVar10 == uVar12) goto LAB_144b0c196;
        iVar18 = iVar18 + 0x20;
        uVar11 = puVar5[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar12 = 0;
      iVar18 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar10 = uVar14 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar11 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if ((int)uVar13 <= (int)uVar11) {
      uVar11 = uVar13;
    }
  }
  if (uVar11 != uVar13) {
    uVar13 = 0xffffffff;
    local_98 = param_1;
    do {
      lVar17 = *(longlong *)(param_1 + 0x208);
      lVar21 = (longlong)(int)uVar11 * 0x538;
      lVar15 = lVar17 + lVar21;
      if (*(int *)(lVar17 + 0x510 + lVar21) == 5) {
        puVar19 = *(undefined8 **)(lVar15 + 0x518);
      }
      else {
        puVar19 = (undefined8 *)0x0;
      }
      if (*(int *)(lVar15 + 0x520) == 5) {
        puVar20 = *(undefined8 **)(lVar15 + 0x528);
      }
      else {
        puVar20 = (undefined8 *)0x0;
      }
      local_80 = uVar12;
      if ((puVar19 == (undefined8 *)0x0) || (*(char *)(puVar19 + 0x4e) == '\x01')) {
        if ((puVar20 != (undefined8 *)0x0) && (*(char *)(puVar20 + 0x4e) == '\0')) {
          if (puVar19 != (undefined8 *)0x0) goto LAB_144b0bf01;
          puVar22 = (undefined8 *)0x0;
          goto LAB_144b0c02e;
        }
      }
      else {
LAB_144b0bf01:
        pcVar2 = *(code **)*puVar19;
        puVar22 = puVar19;
        if ((pcVar2 != (code *)&LAB_14491c2da) &&
           ((pcVar2 == (code *)&LAB_140426f8c ||
            (local_a0 = param_2, iVar3 = (*pcVar2)(), param_2 = local_a0, iVar3 != 1)))) {
          puVar22 = (undefined8 *)0x0;
        }
        if (puVar20 == (undefined8 *)0x0) {
LAB_144b0bf24:
          puVar8 = (undefined8 *)0x0;
        }
        else {
LAB_144b0c02e:
          pcVar2 = *(code **)*puVar20;
          puVar8 = puVar20;
          if ((pcVar2 != (code *)&LAB_14491c2da) &&
             ((pcVar2 == (code *)&LAB_140426f8c ||
              (local_a0 = param_2, local_8c = iVar18, iVar3 = (*pcVar2)(), param_2 = local_a0,
              iVar18 = local_8c, iVar3 != 1)))) goto LAB_144b0bf24;
        }
        param_1 = local_98;
        if (puVar22 == (undefined8 *)0x0) {
          lVar4 = 0;
        }
        else {
          lVar4 = puVar22[0x56];
        }
        if (puVar8 == (undefined8 *)0x0) {
          lVar9 = 0;
        }
        else {
          lVar9 = puVar8[0x56];
        }
        if (((lVar4 == 0) || (lVar4 != lVar9)) || (*(char *)(lVar4 + 0x151) == '\0')) {
          if (0 < (int)*(uint *)(lVar15 + 0x508)) {
            lVar16 = 0;
            do {
              if (0.0 < *(double *)(lVar17 + lVar21 + 0xb8 + lVar16)) {
                local_b8 = lVar17 + lVar21 + 0x10;
                local_78 = puVar19;
                local_70 = puVar20;
                local_61 = (lVar4 == 0) != (lVar9 == 0);
                (*(code *)*param_2)(param_2[1],&local_78,&local_70,&local_61);
                break;
              }
              lVar16 = lVar16 + 0x138;
            } while ((ulonglong)*(uint *)(lVar15 + 0x508) * 0x138 - lVar16 != 0);
          }
        }
      }
      uVar13 = uVar13 & ~(uint)uVar14;
      puVar5 = *(uint **)(param_1 + 0x228);
      if (*(uint **)(param_1 + 0x228) == (uint *)0x0) {
        puVar5 = local_88;
      }
      uVar1 = *(uint *)(param_1 + 0x230);
      iVar3 = (int)local_80;
      lVar15 = (longlong)iVar3;
      uVar11 = puVar5[lVar15] & uVar13;
      uVar12 = local_80;
      if (uVar11 == 0) {
        iVar6 = uVar1 + 0x1e;
        if (-1 < (int)(uVar1 - 1)) {
          iVar6 = uVar1 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar3 < iVar6) {
          lVar17 = 0;
          do {
            uVar11 = puVar5[lVar15 + lVar17 + 1];
            if (uVar11 != 0) {
              uVar12 = (ulonglong)(iVar3 + (int)lVar17 + 1);
              uVar13 = 0xffffffff;
              goto LAB_144b0bfef;
            }
            iVar18 = iVar18 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar7 - lVar15 != lVar17);
          uVar13 = 0xffffffff;
          iVar3 = iVar7;
        }
        uVar12 = (ulonglong)(iVar3 + 1);
        param_1 = local_98;
        uVar11 = uVar1;
      }
      else {
LAB_144b0bfef:
        uVar14 = (ulonglong)(-uVar11 & uVar11);
        uVar10 = uVar14 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar11 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar1 <= (int)uVar11) {
          uVar11 = uVar1;
        }
      }
    } while (uVar11 != (uint)local_a8);
  }
LAB_144b0c196:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b0c238 FUN_144b0c238 body=824 status=ok
// SIG undefined FUN_144b0c238(void)

double FUN_144b0c238(int *param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (*param_1 < 1) {
    dVar10 = 0.0;
  }
  else {
    dVar10 = 0.0;
    lVar8 = 0x298;
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 2);
      pdVar4 = *(double **)(lVar3 + -0x238 + lVar8);
      pdVar5 = *(double **)(lVar3 + -0x230 + lVar8);
      pdVar6 = *(double **)(lVar3 + -0x168 + lVar8);
      pdVar7 = *(double **)(lVar3 + -0x160 + lVar8);
      dVar11 = *(double *)(lVar3 + -0x38 + lVar8) -
               ((*(double *)(lVar3 + -0xa0 + lVar8) * pdVar7[2] +
                 *(double *)(lVar3 + -0xb0 + lVar8) * *pdVar7 +
                 *(double *)(lVar3 + -0xa8 + lVar8) * pdVar7[1] +
                *(double *)(lVar3 + -0xb8 + lVar8) * pdVar6[2] +
                *(double *)(lVar3 + -200 + lVar8) * *pdVar6 +
                *(double *)(lVar3 + -0xc0 + lVar8) * pdVar6[1] +
                *(double *)(lVar3 + -0xd0 + lVar8) * pdVar5[2] +
                *(double *)(lVar3 + -0xe0 + lVar8) * *pdVar5 +
                *(double *)(lVar3 + -0xd8 + lVar8) * pdVar5[1] +
                *(double *)(lVar3 + -0xe8 + lVar8) * pdVar4[2] +
                *(double *)(lVar3 + -0xf8 + lVar8) * *pdVar4 +
                *(double *)(lVar3 + -0xf0 + lVar8) * pdVar4[1]) - *(double *)(lVar3 + -0x28 + lVar8)
               );
      dVar1 = *(double *)(lVar3 + lVar8);
      dVar12 = *(double *)(lVar3 + -0x30 + lVar8) * dVar11 + dVar1;
      dVar2 = *(double *)(lVar3 + -0x20 + lVar8);
      if (dVar2 <= dVar12) {
        dVar12 = dVar2;
      }
      dVar2 = *(double *)(lVar3 + -0x18 + lVar8);
      if (dVar12 <= dVar2) {
        dVar12 = dVar2;
      }
      *(double *)(lVar3 + lVar8) = dVar12;
      dVar12 = dVar12 - dVar1;
      dVar1 = *(double *)(lVar3 + -0x88 + lVar8);
      dVar2 = *(double *)(lVar3 + -0x90 + lVar8);
      *pdVar4 = *pdVar4 - *(double *)(lVar3 + -0x98 + lVar8) * dVar12;
      pdVar4[1] = pdVar4[1] - dVar2 * dVar12;
      pdVar4[2] = pdVar4[2] - dVar1 * dVar12;
      dVar1 = *(double *)(lVar3 + -0x70 + lVar8);
      dVar2 = *(double *)(lVar3 + -0x78 + lVar8);
      pdVar4 = *(double **)(lVar3 + -0x230 + lVar8);
      *pdVar4 = *pdVar4 - *(double *)(lVar3 + -0x80 + lVar8) * dVar12;
      pdVar4[1] = pdVar4[1] - dVar2 * dVar12;
      dVar10 = ABS(dVar11) + dVar10;
      pdVar4[2] = pdVar4[2] - dVar1 * dVar12;
      dVar1 = *(double *)(lVar3 + -0x58 + lVar8);
      dVar2 = *(double *)(lVar3 + -0x60 + lVar8);
      pdVar4 = *(double **)(lVar3 + -0x168 + lVar8);
      *pdVar4 = *pdVar4 - *(double *)(lVar3 + -0x68 + lVar8) * dVar12;
      pdVar4[1] = pdVar4[1] - dVar2 * dVar12;
      pdVar4[2] = pdVar4[2] - dVar1 * dVar12;
      dVar1 = *(double *)(lVar3 + -0x40 + lVar8);
      dVar2 = *(double *)(lVar3 + -0x48 + lVar8);
      pdVar4 = *(double **)(lVar3 + -0x160 + lVar8);
      *pdVar4 = *pdVar4 - dVar12 * *(double *)(lVar3 + -0x50 + lVar8);
      pdVar4[1] = pdVar4[1] - dVar2 * dVar12;
      pdVar4[2] = pdVar4[2] - dVar1 * dVar12;
      dVar10 = (double)(~-(ulonglong)(dVar10 < 9.99999993922529e-09) & (ulonglong)dVar10);
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x2a0;
    } while (lVar9 < *param_1);
  }
  return dVar10;
}



// FUNCTION 144b0c570 FUN_144b0c570 body=671 status=ok
// SIG undefined FUN_144b0c570(void)

void FUN_144b0c570(longlong param_1)

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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar14 = *(double *)(param_1 + 0x40);
  dVar1 = *(double *)(param_1 + 0x28);
  dVar15 = *(double *)(param_1 + 0x38);
  dVar2 = *(double *)(param_1 + 0x18);
  dVar3 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x30);
  dVar16 = *(double *)(param_1 + 0x58);
  dVar5 = *(double *)(param_1 + 0x50);
  dVar6 = *(double *)(param_1 + 0x48);
  dVar8 = (dVar6 - dVar2) * (dVar15 - dVar3) - (dVar4 - dVar2) * (dVar5 - dVar3);
  dVar9 = (dVar16 - dVar1) * (dVar4 - dVar2) - (dVar14 - dVar1) * (dVar6 - dVar2);
  dVar7 = (dVar5 - dVar3) * (dVar14 - dVar1) - (dVar16 - dVar1) * (dVar15 - dVar3);
  dVar10 = dVar8 * dVar8 + dVar7 * dVar7 + dVar9 * dVar9;
  if (((dVar10 != 1.0) || (dVar11 = dVar8, dVar12 = dVar9, dVar13 = dVar7, NAN(dVar10))) &&
     (dVar11 = DAT_14c8464f0, dVar12 = DAT_14c8464e8, dVar13 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar10)) {
    dVar10 = 1.0 / SQRT(dVar10);
    dVar11 = dVar8 * dVar10;
    dVar12 = dVar9 * dVar10;
    dVar13 = dVar7 * dVar10;
  }
  *(double *)(param_1 + 0x60) = dVar13;
  *(double *)(param_1 + 0x68) = dVar12;
  *(double *)(param_1 + 0x70) = dVar11;
  dVar7 = (dVar14 + dVar1 + dVar16) * 0.3333333333333333;
  dVar8 = (dVar15 + dVar3 + dVar5) * 0.3333333333333333;
  dVar9 = (dVar4 + dVar2 + dVar6) * 0.3333333333333333;
  *(double *)(param_1 + 0x78) = dVar9;
  *(double *)(param_1 + 0x80) = dVar8;
  *(double *)(param_1 + 0x88) = dVar7;
  dVar16 = (dVar16 - dVar7) * (dVar16 - dVar7) +
           (dVar6 - dVar9) * (dVar6 - dVar9) + (dVar5 - dVar8) * (dVar5 - dVar8);
  dVar15 = (dVar14 - dVar7) * (dVar14 - dVar7) +
           (dVar4 - dVar9) * (dVar4 - dVar9) + (dVar15 - dVar8) * (dVar15 - dVar8);
  dVar14 = (dVar1 - dVar7) * (dVar1 - dVar7) +
           (dVar2 - dVar9) * (dVar2 - dVar9) + (dVar3 - dVar8) * (dVar3 - dVar8);
  if (dVar14 <= dVar15) {
    dVar14 = dVar15;
  }
  if (dVar14 <= dVar16) {
    dVar14 = dVar16;
  }
  *(double *)(param_1 + 0x10) = SQRT(dVar14);
  return;
}



// FUNCTION 144b0c810 FUN_144b0c810 body=239 status=ok
// SIG undefined FUN_144b0c810(void)

void FUN_144b0c810(longlong param_1,double *param_2,int param_3,int param_4)

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
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar13 = (double)param_4;
  dVar1 = *(double *)(param_1 + 0x38);
  dVar2 = *(double *)(param_1 + 0x30);
  dVar3 = *(double *)(param_1 + 0x88);
  dVar4 = *(double *)(param_1 + 0x20);
  dVar5 = *(double *)(param_1 + 0x18);
  dVar14 = (double)param_3;
  dVar6 = *(double *)(param_1 + 0x50);
  dVar7 = *(double *)(param_1 + 0x48);
  dVar8 = *(double *)(param_1 + 0x90);
  dVar9 = *(double *)
           (*(longlong *)(param_1 + 0x70) +
           (longlong)(param_3 * *(int *)(param_1 + 0x80) + param_4) * 8);
  dVar10 = *(double *)(param_1 + 0x68);
  dVar11 = *(double *)(param_1 + 0x60);
  dVar12 = *(double *)(param_1 + 0x98);
  *param_2 = dVar9 * *(double *)(param_1 + 0x58) * dVar12 +
             dVar14 * *(double *)(param_1 + 0x40) * dVar8 +
             dVar13 * *(double *)(param_1 + 0x28) * dVar3 + *(double *)(param_1 + 0x10);
  param_2[1] = dVar11 * dVar9 * dVar12 + dVar7 * dVar14 * dVar8 + dVar2 * dVar13 * dVar3 + dVar5;
  param_2[2] = dVar10 * dVar9 * dVar12 + dVar6 * dVar14 * dVar8 + dVar1 * dVar13 * dVar3 + dVar4;
  return;
}



// FUNCTION 144b0c900 FUN_144b0c900 body=2359 status=ok
// SIG undefined FUN_144b0c900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_144b0c900(longlong param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 extraout_EAX;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_2a8 [32];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  auVar25 = *(undefined1 (*) [16])(param_1 + 0x28);
  auVar19 = divpd(auVar25,_DAT_1499387d0);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = *(double *)(param_1 + 0x38);
  auVar20 = divpd(auVar20,_DAT_1499387d0);
  auVar19 = roundpd(auVar19,auVar19,3);
  auVar20 = roundpd(auVar20,auVar20,3);
  dVar14 = (auVar25._0_8_ - auVar19._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar15 = (auVar25._8_8_ - auVar19._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar28 = (*(double *)(param_1 + 0x38) - auVar20._0_8_ * (double)DAT_1499387d0) *
           0.008726646259971648;
  dVar29 = (0.0 - auVar20._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  lVar9 = param_1;
  dVar11 = sin(dVar14);
  uVar7 = (undefined4)lVar9;
  dVar12 = sin(dVar15);
  dVar13 = sin(dVar28);
  sin(dVar29);
  dVar14 = cos(dVar14);
  dVar15 = cos(dVar15);
  dVar16 = cos(dVar28);
  cos(dVar29);
  auVar19 = _DAT_149934d80;
  dVar28 = -(dVar15 * dVar11 * dVar13) + dVar12 * dVar14 * dVar16;
  dVar29 = dVar12 * dVar11 * dVar13 + dVar15 * dVar14 * dVar16;
  dVar22 = dVar11 * dVar12 * dVar16 - dVar14 * dVar15 * dVar13;
  dVar23 = -(dVar11 * dVar15 * dVar16) - dVar14 * dVar12 * dVar13;
  dVar13 = param_4 * *(double *)(param_1 + 0x10);
  dVar16 = param_4 * *(double *)(param_1 + 0x18);
  dVar12 = *(double *)(param_1 + 0x20) * param_4;
  auVar25 = *(undefined1 (*) [16])(param_3 + 8);
  dVar14 = auVar25._0_8_;
  dVar11 = auVar25._8_8_;
  dVar15 = SUB168(*(undefined1 (*) [16])(param_3 + 10),0);
  auVar25 = minpd(_DAT_149934d80,auVar25);
  auVar20 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_3 + 10));
  auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
  auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
  iVar6 = movmskpd(extraout_EAX,auVar26);
  auVar25._8_8_ = -(ulonglong)(auVar20._8_8_ < 0.0);
  auVar25._0_8_ = -(ulonglong)(auVar20._0_8_ < 0.0);
  uVar8 = movmskpd(uVar7,auVar25);
  if ((uVar8 & 0x3fffffff) == 0 && iVar6 == 0) {
    dVar3 = *param_3;
    dVar4 = param_3[1];
    dVar34 = param_3[3];
    dVar1 = param_3[3];
    dVar32 = param_3[1];
    dVar31 = param_3[1];
    dVar5 = param_3[2];
    dVar33 = param_3[2];
    dVar35 = param_3[2];
    dVar24 = dVar23 * dVar33 * -1.0 + dVar28 * dVar32 + dVar29 * *param_3 * 1.0 + dVar22 * dVar34;
    dVar27 = dVar22 * dVar35 * 1.0 + dVar29 * dVar31 + dVar28 * *param_3 * -1.0 + dVar23 * dVar1;
    auVar19._0_8_ =
         dVar29 * dVar33 * 1.0 + ((*param_3 * dVar23 * 1.0 + dVar28 * dVar34) - dVar22 * dVar32);
    auVar19._8_8_ =
         dVar28 * dVar35 * -1.0 + ((*param_3 * dVar22 * -1.0 + dVar29 * dVar1) - dVar23 * dVar31);
    dVar13 = dVar13 * dVar14;
    dVar16 = dVar16 * dVar11;
    dVar12 = dVar12 * dVar15;
    dVar29 = dVar16 * dVar3 - dVar13 * dVar4;
    dVar22 = dVar12 * dVar4 - dVar16 * dVar5;
    dVar28 = dVar13 * dVar5 - dVar12 * dVar3;
    dVar22 = dVar22 + dVar22;
    dVar28 = dVar28 + dVar28;
    dVar29 = dVar29 + dVar29;
    local_f8 = (dVar29 * dVar4 - dVar5 * dVar28) + dVar34 * dVar22 + dVar13 + param_3[4];
    dStack_f0 = (dVar22 * dVar5 - dVar29 * dVar3) + dVar1 * dVar28 + dVar16 + param_3[5];
    local_e8 = (dVar28 * dVar3 - dVar4 * dVar22) + dVar34 * dVar29 + dVar12 + param_3[6];
  }
  else {
    dVar34 = *param_3;
    dVar1 = param_3[1];
    dVar32 = param_3[2];
    dVar35 = dVar1 + dVar1;
    dVar31 = dVar32 + dVar32;
    dVar24 = dVar34 * (dVar34 + dVar34);
    dVar27 = dVar1 * dVar35;
    auVar2._8_4_ = SUB84(dVar27,0);
    auVar2._0_8_ = dVar24;
    auVar2._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    local_288 = 1.0 - (dVar24 + dVar27);
    dStack_280 = 0.0 - (dVar24 + auVar2._8_8_);
    local_1d8 = ((double)DAT_149934d80 - (dVar32 * dVar31 + dVar27)) * dVar14;
    dVar27 = (DAT_149934d80._8_8_ - (dVar32 * dVar31 + dVar24)) * dVar11;
    dVar24 = param_3[3];
    dVar32 = dVar31 * dVar24;
    dVar33 = (dVar34 + dVar34) * param_3[3];
    dVar24 = dVar35 * dVar24;
    dStack_190 = (dVar31 * dVar1 - dVar33) * dVar15;
    local_198 = (dVar24 + *param_3 * dVar31) * dVar15;
    dStack_1d0 = (dVar35 * dVar34 + dVar32) * dVar14;
    local_1a8 = (dVar31 * dVar1 + dVar33) * dVar11;
    local_188 = local_288 * dVar15;
    local_1c8 = (*param_3 * dVar31 - dVar24) * dVar14;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar27,0);
    local_1b8._0_8_ = (dVar35 * dVar34 - dVar32) * dVar11;
    local_1b8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_3[4];
    dStack_170 = param_3[5];
    local_168 = param_3[6];
    uStack_160 = 0x3ff0000000000000;
    dVar27 = dVar23 + dVar23;
    dVar24 = dVar28 + dVar28;
    dVar34 = dVar22 * (dVar22 + dVar22);
    local_258 = (double)DAT_149934d80 - (dVar28 * dVar24 + dVar23 * dVar27);
    dStack_230 = DAT_149934d80._8_8_ - (dVar28 * dVar24 + dVar34);
    local_208 = 1.0 - (dVar34 + dVar23 * dVar27);
    dStack_210 = (dVar22 + dVar22) * dVar29;
    dStack_250 = dVar27 * dVar22 + dVar24 * dVar29;
    local_228 = dVar24 * dVar23 + dStack_210;
    local_238 = dVar27 * dVar22 - dVar24 * dVar29;
    dStack_210 = dVar24 * dVar23 - dStack_210;
    local_218 = dVar27 * dVar29 + dVar22 * dVar24;
    local_248 = dVar22 * dVar24 - dVar27 * dVar29;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    uStack_1e0 = 0x3ff0000000000000;
    local_1f8 = dVar13;
    dStack_1f0 = dVar16;
    local_1e8 = dVar12;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar17._8_8_ = -(ulonglong)(0.0 <= dVar11);
    auVar17._0_8_ = -(ulonglong)(0.0 <= dVar14);
    auVar25 = blendvpd(_DAT_149936790,auVar19,auVar17);
    uVar10 = -(ulonglong)(0.0 <= dVar15 * 1.0);
    dVar28 = (double)(~uVar10 & 0xbff0000000000000 | uVar10 & 0x3ff0000000000000);
    dVar29 = auVar25._0_8_;
    local_148 = local_148 * dVar29;
    local_150 = local_150 * dVar29;
    local_158 = local_158 * dVar29;
    dVar29 = auVar25._8_8_;
    local_128 = local_128 * dVar29;
    local_130 = local_130 * dVar29;
    local_138 = dVar29 * local_138;
    local_108 = local_108 * dVar28;
    local_110 = local_110 * dVar28;
    local_118 = dVar28 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar28 = local_268 * local_268 + local_278 * local_278;
    dVar29 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar21._0_8_ = dVar28 + dVar29;
    auVar21._8_8_ = dVar28 + dVar29;
    auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
    auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
    auVar25 = sqrtpd(auVar21,auVar21);
    auVar25 = divpd(auVar19,auVar25);
    auVar30._0_8_ = auVar25._0_8_ * local_268;
    auVar30._8_8_ = auVar25._8_8_ * dStack_260;
    dVar24 = (double)((ulonglong)(local_278 * auVar25._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
    dVar27 = (double)((ulonglong)(dStack_270 * auVar25._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_));
    auVar19 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar30,auVar18);
  }
  dVar14 = dVar14 * 0.0;
  dVar11 = dVar11 * 0.0;
  dVar15 = dVar15 * 1.0 * 1.0;
  dVar22 = auVar19._8_8_;
  dVar16 = auVar19._0_8_;
  dVar28 = dVar11 * dVar24 - dVar14 * dVar27;
  dVar12 = dVar15 * dVar27 - dVar11 * dVar16;
  dVar29 = dVar14 * dVar16 - dVar24 * dVar15;
  dVar12 = dVar12 + dVar12;
  dVar29 = dVar29 + dVar29;
  dVar28 = dVar28 + dVar28;
  dVar13 = param_4 * 0.5 * *(double *)(param_1 + 0x48);
  dVar15 = ABS(dVar22 * dVar28 + dVar15 + (dVar29 * dVar24 - dVar12 * dVar27)) * dVar13;
  dVar11 = ABS((dVar16 * dVar12 - dVar24 * dVar28) + dVar22 * dVar29 + dVar11) * dVar13;
  dVar13 = dVar13 * ABS((dVar28 * dVar27 - dVar29 * dVar16) + dVar22 * dVar12 + dVar14);
  param_4 = param_4 * *(double *)(param_1 + 0x40);
  *param_2 = (local_f8 - dVar13) - param_4;
  param_2[1] = (dStack_f0 - dVar11) - param_4;
  param_2[2] = (local_e8 - dVar15) - param_4;
  param_2[3] = local_f8 + dVar13 + param_4;
  param_2[4] = dStack_f0 + dVar11 + param_4;
  param_2[5] = local_e8 + dVar15 + param_4;
  *(undefined1 *)(param_2 + 6) = 1;
  if ((local_d0 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b0d2b4 FUN_144b0d2b4 body=161 status=ok
// SIG undefined FUN_144b0d2b4(void)

void FUN_144b0d2b4(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x1008);
  uVar1 = *(uint *)(param_1 + 0x100c);
  if ((ulonglong)uVar4 < 0x81) {
    uVar4 = 0x80;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if (((longlong)iVar3 & 0x7fffffffffffe00U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 << 5,0);
      uVar4 = (uint)(uVar2 >> 5);
      uVar1 = *(uint *)(param_1 + 0x100c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x100c) = uVar4;
  FUN_14711f9b0(param_1,*(undefined4 *)(param_1 + 0x1008));
  return;
}



// FUNCTION 144b0d356 FUN_144b0d356 body=108 status=ok
// SIG undefined FUN_144b0d356(void)

void FUN_144b0d356(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x80;
    if (0x80 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x20c)) {
    *(int *)(param_1 + 0x20c) = iVar3;
    FUN_14711f8a2(param_1,*(undefined4 *)(param_1 + 0x208));
    return;
  }
  return;
}



// FUNCTION 144b0d3c2 FUN_144b0d3c2 body=220 status=ok
// SIG undefined FUN_144b0d3c2(void)

void FUN_144b0d3c2(double *param_1,uint param_2,uint param_3,longlong param_4,uint param_5,
                  void *param_6)

{
  ulonglong uVar1;
  double *pdVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  
  memset(param_6,0,(longlong)(int)(param_5 * param_3) << 3);
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    uVar3 = 0;
    do {
      if (0 < (int)param_5) {
        uVar5 = 0;
        lVar4 = param_4;
        do {
          if (0 < (int)param_2) {
            dVar7 = *(double *)((longlong)param_6 + uVar5 * uVar1 * 8 + uVar3 * 8);
            uVar6 = 0;
            pdVar2 = param_1;
            do {
              dVar7 = dVar7 + *pdVar2 * *(double *)(lVar4 + uVar6 * 8);
              *(double *)((longlong)param_6 + uVar5 * uVar1 * 8 + uVar3 * 8) = dVar7;
              uVar6 = uVar6 + 1;
              pdVar2 = pdVar2 + uVar1;
            } while (param_2 != uVar6);
          }
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + (ulonglong)param_2 * 8;
        } while (uVar5 != param_5);
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 1;
    } while (uVar3 != uVar1);
  }
  return;
}



// FUNCTION 144b0d49e FUN_144b0d49e body=1062 status=ok
// SIG undefined FUN_144b0d49e(void)

void FUN_144b0d49e(double *param_1,double *param_2,int param_3)

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
  double dVar12;
  double dVar13;
  
  if (param_3 == 3) {
    dVar1 = param_1[4];
    dVar2 = param_1[8];
    dVar3 = param_1[5];
    dVar13 = param_1[7];
    dVar4 = param_1[6];
    dVar5 = param_1[3];
    dVar6 = param_1[2];
    dVar7 = *param_1;
    dVar8 = param_1[1];
    dVar10 = dVar1 * -dVar6;
    dVar12 = dVar5 * -dVar8;
    dVar9 = dVar3 * -dVar7;
    dVar11 = dVar9 * dVar13 +
             dVar12 * dVar2 +
             dVar10 * dVar4 + dVar5 * dVar6 * dVar13 + dVar1 * dVar7 * dVar2 + dVar4 * dVar3 * dVar8
    ;
    if (ABS(dVar11) <= 9.99999993922529e-09) {
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      *param_2 = 0.0;
      param_2[1] = 0.0;
      param_2[8] = 0.0;
    }
    else {
      dVar11 = 1.0 / dVar11;
      *param_2 = (dVar1 * dVar2 - dVar13 * dVar3) * dVar11;
      param_2[1] = (dVar6 * dVar13 + -dVar8 * dVar2) * dVar11;
      param_2[2] = (dVar3 * dVar8 + dVar10) * dVar11;
      param_2[3] = (dVar3 * dVar4 - dVar2 * dVar5) * dVar11;
      param_2[4] = (dVar7 * dVar2 + -dVar6 * dVar4) * dVar11;
      param_2[5] = (dVar5 * dVar6 + dVar9) * dVar11;
      param_2[6] = (dVar5 * dVar13 - dVar4 * dVar1) * dVar11;
      param_2[7] = (dVar8 * dVar4 + -dVar7 * dVar13) * dVar11;
      param_2[8] = dVar11 * (dVar1 * dVar7 + dVar12);
    }
  }
  else if (param_3 == 2) {
    dVar1 = *param_1;
    dVar2 = param_1[1];
    dVar3 = param_1[2];
    dVar13 = dVar1 * param_1[3] - dVar2 * dVar3;
    if (ABS(dVar13) <= 9.99999993922529e-09) {
      param_2[2] = 0.0;
      param_2[3] = 0.0;
      *param_2 = 0.0;
      param_2[1] = 0.0;
    }
    else {
      dVar13 = 1.0 / dVar13;
      *param_2 = param_1[3] * dVar13;
      param_2[1] = -dVar2 * dVar13;
      param_2[2] = -dVar3 * dVar13;
      param_2[3] = dVar1 * dVar13;
    }
  }
  else {
    if (param_3 != 1) {
      memset(param_2,0,(longlong)param_3 * (longlong)param_3 * 8);
      return;
    }
    if (ABS(*param_1) <= 9.99999993922529e-09) {
      *param_2 = 0.0;
    }
    else {
      *param_2 = 1.0 / *param_1;
    }
  }
  return;
}



// FUNCTION 144b0d8c4 FUN_144b0d8c4 body=898 status=ok
// SIG undefined FUN_144b0d8c4(void)

double * FUN_144b0d8c4(double *param_1,double *param_2,double *param_3)

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
  double dVar12;
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
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  
  dVar1 = param_1[1];
  dVar2 = param_1[2];
  dVar3 = param_1[3];
  dVar4 = param_1[4];
  dVar5 = param_1[5];
  dVar6 = param_1[6];
  dVar7 = param_1[7];
  dVar8 = param_1[8];
  dVar9 = param_1[9];
  dVar10 = param_1[10];
  dVar11 = param_1[0xb];
  dVar12 = param_1[0xc];
  dVar13 = param_1[0xd];
  dVar14 = param_1[0xe];
  dVar15 = param_1[0xf];
  dVar16 = param_3[1];
  dVar17 = param_3[2];
  dVar18 = param_3[3];
  dVar19 = param_3[4];
  dVar20 = param_3[5];
  dVar21 = param_3[6];
  dVar22 = param_3[7];
  dVar23 = param_3[8];
  dVar24 = param_3[9];
  dVar25 = param_3[10];
  dVar26 = param_3[0xb];
  dVar27 = param_3[0xc];
  dVar28 = param_3[0xd];
  dVar29 = param_3[0xe];
  dVar30 = param_3[0xf];
  dVar31 = param_1[0x10];
  dVar32 = param_3[0x10];
  dVar33 = param_1[0x11];
  dVar34 = param_3[0x11];
  dVar35 = param_1[0x12];
  dVar36 = param_3[0x12];
  dVar37 = param_1[0x13];
  dVar38 = param_3[0x13];
  dVar39 = param_1[0x14];
  dVar40 = param_3[0x14];
  dVar41 = param_1[0x15];
  dVar42 = param_3[0x15];
  dVar43 = param_1[0x16];
  dVar44 = param_3[0x16];
  dVar45 = param_1[0x17];
  dVar46 = param_3[0x17];
  dVar47 = param_1[0x18];
  dVar48 = param_3[0x18];
  dVar49 = param_1[0x19];
  dVar50 = param_3[0x19];
  dVar51 = param_1[0x1a];
  dVar52 = param_3[0x1a];
  *param_2 = *param_1 - *param_3;
  param_2[1] = dVar1 - dVar16;
  param_2[2] = dVar2 - dVar17;
  param_2[3] = dVar3 - dVar18;
  param_2[4] = dVar4 - dVar19;
  param_2[5] = dVar5 - dVar20;
  param_2[6] = dVar6 - dVar21;
  param_2[7] = dVar7 - dVar22;
  param_2[8] = dVar8 - dVar23;
  param_2[9] = dVar9 - dVar24;
  param_2[10] = dVar10 - dVar25;
  param_2[0xb] = dVar11 - dVar26;
  param_2[0xc] = dVar12 - dVar27;
  param_2[0xd] = dVar13 - dVar28;
  param_2[0xe] = dVar14 - dVar29;
  param_2[0xf] = dVar15 - dVar30;
  param_2[0x10] = dVar31 - dVar32;
  param_2[0x11] = dVar33 - dVar34;
  param_2[0x12] = dVar35 - dVar36;
  param_2[0x13] = dVar37 - dVar38;
  param_2[0x14] = dVar39 - dVar40;
  param_2[0x15] = dVar41 - dVar42;
  param_2[0x16] = dVar43 - dVar44;
  param_2[0x17] = dVar45 - dVar46;
  param_2[0x18] = dVar47 - dVar48;
  param_2[0x19] = dVar49 - dVar50;
  param_2[0x1a] = dVar51 - dVar52;
  return param_2;
}



// FUNCTION 144b0dc59 FUN_144b0dc59 body=420 status=ok
// SIG undefined FUN_144b0dc59(void)

void FUN_144b0dc59(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = param_2 + 4;
  lVar8 = 0x14;
  do {
    plVar3 = *(longlong **)(param_1 + -0x14 + lVar8);
    if ((plVar3 != (longlong *)0x0) &&
       (plVar4 = *(longlong **)(param_1 + -0xc + lVar8),
       plVar3 != plVar4 && plVar4 != (longlong *)0x0)) {
      uVar1 = *(undefined1 *)(param_1 + lVar8);
      uVar2 = *(undefined4 *)(param_1 + -4 + lVar8);
      (**(code **)(*plVar3 + 8))(plVar3);
      (**(code **)(*plVar4 + 8))(plVar4);
      local_70 = 0xffffffff;
      uStack_6c = 0xffffffff;
      uStack_68 = 0xffffffff;
      uStack_64 = 0xffffffff;
      pcVar5 = (code *)*param_2;
      plVar7 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar7 = plVar9;
      }
      local_88 = plVar3;
      local_80 = plVar4;
      local_78 = uVar1;
      local_74 = uVar2;
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar5)(uVar6,&local_88);
    }
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0xd4);
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if ((plVar3 != (longlong *)0x0) &&
     (plVar4 = *(longlong **)(param_1 + 200), plVar3 != plVar4 && plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 8))(plVar3);
    (**(code **)(*plVar4 + 8))(plVar4);
    local_78 = 0;
    local_74 = 0;
    local_70 = 0xffffffff;
    uStack_6c = 0xffffffff;
    uStack_68 = 0xffffffff;
    uStack_64 = 0xffffffff;
    pcVar5 = (code *)*param_2;
    plVar7 = (longlong *)param_2[2];
    if ((longlong *)param_2[2] == (longlong *)0x0) {
      plVar7 = plVar9;
    }
    local_88 = plVar3;
    local_80 = plVar4;
    uVar6 = (**(code **)(*plVar7 + 8))();
    (*pcVar5)(uVar6,&local_88);
  }
  if (*param_2 != 0) {
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_2[2];
    }
    pcVar5 = *(code **)(*plVar9 + 0x10);
    if (pcVar5 == (code *)&LAB_1473704d8) {
      pcVar5 = *(code **)(*plVar9 + 0x18);
      if (pcVar5 != FUN_1473704f2) {
        (*pcVar5)(plVar9,0);
      }
    }
    else {
      (*pcVar5)(plVar9);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b0ddfe FUN_144b0ddfe body=1 status=ok
// SIG undefined FUN_144b0ddfe(void)

void FUN_144b0ddfe(void)

{
  return;
}



// FUNCTION 144b0ddff FUN_144b0ddff body=356 status=ok
// SIG undefined FUN_144b0ddff(void)

undefined8 FUN_144b0ddff(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  lVar4 = DAT_14ca97170;
  if (((2 < (longlong)*(int *)(param_1 + 0x3090)) && (DAT_14c9ac460 != 0)) &&
     ((*(byte *)((longlong)&DAT_14ca814d0 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2) *
                0x3c) & 4) != 0)) {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar7 = 0;
    }
    else if (iVar2 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar7 = 1;
    }
    if (*(int *)(lVar4 + uVar7 * 4) < 1) {
      uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2);
      puVar8 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar8 = DAT_14ca96af8;
      }
      if (((uint)puVar8[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf];
      }
      if (bVar3) {
        return 0;
      }
      if (*(longlong *)(param_1 + 0x23e0) != 0) {
        return 0;
      }
      if (((((*(byte *)(param_1 + 0x125b0) & 2) == 0) && (*(char *)(param_1 + 0x30c8) == '\0')) &&
          (((*(char *)(param_1 + 0x23f2) == '\0' && (*(char *)(param_1 + 0x23f5) != '\x01')) ||
           (*(int *)(param_1 + 0x1dd0) != 2)))) && (0 < *(int *)(param_1 + 0x569c))) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144b0df63 FUN_144b0df63 body=973 status=ok
// SIG undefined FUN_144b0df63(void)

uint * FUN_144b0df63(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar8 = *(longlong *)(DAT_14cb0d2b0 + 0x950);
  puVar1 = *(uint **)(lVar8 + 0x148);
  if (puVar1 == (uint *)0x0) {
    uVar5 = 0;
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
    uVar5 = 1;
    if (1 < (int)uVar9) {
      uVar5 = uVar9;
    }
    uVar5 = (int)puVar1[1] / (int)uVar5;
  }
  *param_1 = uVar9;
  param_1[1] = uVar9;
  param_1[2] = uVar5;
  iVar2 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = ~(-1 << ((byte)iVar2 & 0x1f));
  }
  iVar2 = 0x1f;
  if (uVar9 != 0) {
    for (; uVar9 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  if (uVar9 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = ~(-1 << ((byte)iVar2 & 0x1f));
  }
  param_1[4] = uVar9;
  param_1[5] = uVar9;
  param_1[6] = uVar5;
  puVar1 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar9 = *puVar1;
  lVar10 = 0x118;
  if (((uVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar9 == 2)) {
LAB_144b0e0dc:
    lVar8 = *(longlong *)(lVar8 + lVar10);
    uVar9 = *puVar1;
  }
  else {
    if (uVar9 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_144b0e0dc;
      uVar9 = *puVar1;
    }
    plVar3 = DAT_14c948aa0;
    if (uVar9 == 4) goto LAB_144b0e0dc;
    if ((code *)PTR_FUN_14c758760 == FUN_144955985) {
      if (DAT_14c948aa0 == (longlong *)0x0) goto LAB_144b0e302;
      if (*(code **)(*DAT_14c948aa0 + 0x88) != FUN_141711e26) {
        cVar4 = (**(code **)(*DAT_14c948aa0 + 0x88))();
        goto LAB_144b0e245;
      }
      if (((*(byte *)((longlong)DAT_14c948aa0 + 0x19) & 1) != 0) &&
         (DVar6 = GetCurrentThreadId(), DVar6 == *(DWORD *)(plVar3 + 0x50))) goto LAB_144b0e0dc;
      if ((DAT_14c86a9f8 != '\x01') || (uVar9 = *puVar1, uVar9 == 2)) {
LAB_144b0e2f5:
        if ((int)plVar3[0xbb] != 0) goto LAB_144b0e0dc;
        goto LAB_144b0e302;
      }
      if (uVar9 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 != DVar7) goto LAB_144b0e302;
        goto LAB_144b0e2f5;
      }
    }
    else {
      cVar4 = (*(code *)PTR_FUN_14c758760)();
LAB_144b0e245:
      if (cVar4 != '\0') goto LAB_144b0e0dc;
LAB_144b0e302:
      uVar9 = *puVar1;
    }
    if (uVar9 == 8) goto LAB_144b0e0dc;
    if (DAT_14c86a9fc == 0) {
      lVar10 = 0x120;
      if (((uVar9 < 0x21) && ((0x100010004U >> ((ulonglong)uVar9 & 0x3f) & 1) != 0)) ||
         (uVar9 == 0x40000010)) goto LAB_144b0e0dc;
    }
    else {
      lVar10 = 0x120;
      if (((uVar9 - 0x10 & 0xbfffffef) == 0) || (uVar9 == 0x20)) goto LAB_144b0e0dc;
    }
    lVar8 = 0;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar8 + 0x10);
  lVar8 = *(longlong *)(DAT_14cb0d2b0 + 0x958);
  lVar10 = 0x118;
  if (((uVar9 != 0x40000002) && (DAT_14c86a9f8 == '\x01')) && (uVar9 != 2)) {
    if (uVar9 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_144b0e1d0;
      uVar9 = *puVar1;
    }
    plVar3 = DAT_14c948aa0;
    if (uVar9 != 4) {
      if ((code *)PTR_FUN_14c758760 == FUN_144955985) {
        if (DAT_14c948aa0 == (longlong *)0x0) goto LAB_144b0e328;
        if (*(code **)(*DAT_14c948aa0 + 0x88) != FUN_141711e26) {
          cVar4 = (**(code **)(*DAT_14c948aa0 + 0x88))(DAT_14c948aa0);
          goto LAB_144b0e25b;
        }
        if (((*(byte *)((longlong)DAT_14c948aa0 + 0x19) & 1) != 0) &&
           (DVar6 = GetCurrentThreadId(), DVar6 == *(DWORD *)(plVar3 + 0x50))) goto LAB_144b0e1d0;
        if ((DAT_14c86a9f8 != '\x01') || (uVar9 = *puVar1, uVar9 == 2)) {
LAB_144b0e31b:
          if ((int)plVar3[0xbb] != 0) goto LAB_144b0e1d0;
          goto LAB_144b0e328;
        }
        if (uVar9 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 != DVar7) goto LAB_144b0e328;
          goto LAB_144b0e31b;
        }
      }
      else {
        cVar4 = (*(code *)PTR_FUN_14c758760)();
LAB_144b0e25b:
        if (cVar4 != '\0') goto LAB_144b0e1d0;
LAB_144b0e328:
        uVar9 = *puVar1;
      }
      if (uVar9 != 8) {
        if (DAT_14c86a9fc == 0) {
          lVar10 = 0x120;
          if (((0x20 < uVar9) || ((0x100010004U >> ((ulonglong)uVar9 & 0x3f) & 1) == 0)) &&
             (uVar9 != 0x40000010)) goto LAB_144b0e2dd;
        }
        else {
          lVar10 = 0x120;
          if (((uVar9 - 0x10 & 0xbfffffef) != 0) && (uVar9 != 0x20)) {
LAB_144b0e2dd:
            lVar8 = 0;
            goto LAB_144b0e1d4;
          }
        }
      }
    }
  }
LAB_144b0e1d0:
  lVar8 = *(longlong *)(lVar8 + lVar10);
LAB_144b0e1d4:
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(lVar8 + 0x10);
  return param_1;
}



// FUNCTION 144b0e339 FUN_144b0e339 body=1 status=ok
// SIG undefined FUN_144b0e339(void)

void FUN_144b0e339(void)

{
  return;
}



// FUNCTION 144b0e33a FUN_144b0e33a body=535 status=ok
// SIG undefined FUN_144b0e33a(void)

void FUN_144b0e33a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  *(int *)(param_2 + 0x5c) = iVar1;
  if (iVar1 != 0) {
    plVar3 = (longlong *)(param_1 + 0xa8);
    uVar5 = 0;
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 == (longlong *)0x0) {
        *(undefined1 *)(param_2 + 0x60 + uVar5) = 0;
      }
      else {
        if (*(code **)(*plVar2 + 8) == FUN_1447d3e98) {
          plVar2 = plVar2 + 4;
        }
        else {
          plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2);
        }
        *(undefined1 *)(param_2 + 0x60 + uVar5) = *(undefined1 *)((longlong)plVar2 + 0x33);
        plVar2 = (longlong *)*plVar3;
        if (*(code **)(*plVar2 + 8) == FUN_1447d3e98) {
          plVar2 = plVar2 + 4;
        }
        else {
          plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2);
        }
        *(longlong *)(param_2 + 0x68 + uVar5 * 8) = *plVar2;
        if (*(char *)(param_2 + 0x60 + uVar5) != '\0') {
          plVar2 = (longlong *)*plVar3;
          if (*(code **)(*plVar2 + 8) == FUN_1447d3e98) {
            plVar2 = plVar2 + 4;
          }
          else {
            plVar2 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2);
          }
          *(ushort *)(param_2 + 0xc0) = (ushort)*(byte *)((longlong)plVar2 + 0x31);
        }
      }
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 3;
    } while (uVar5 < *(uint *)(param_2 + 0x5c));
  }
  plVar3 = *(longlong **)(param_1 + 0x168);
  if (plVar3 == (longlong *)0x0) {
    *(undefined1 *)(param_2 + 0xa8) = 0;
    bVar6 = true;
  }
  else {
    if (*(code **)(*plVar3 + 8) == FUN_1447d3e98) {
      plVar3 = plVar3 + 4;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3);
    }
    cVar4 = *(char *)((longlong)plVar3 + 0x33);
    *(char *)(param_2 + 0xa8) = cVar4;
    plVar3 = *(longlong **)(param_1 + 0x168);
    if (*(code **)(*plVar3 + 8) == FUN_1447d3e98) {
      plVar3 = plVar3 + 4;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3);
      cVar4 = *(char *)(param_2 + 0xa8);
    }
    *(longlong *)(param_2 + 0xb0) = *plVar3;
    bVar6 = cVar4 == '\0';
  }
  *(undefined1 *)(param_2 + 0xb8) = *(undefined1 *)(param_1 + 0x170);
  *(undefined1 *)(param_2 + 0xb9) = *(undefined1 *)(param_1 + 0x171);
  *(undefined1 *)(param_2 + 0xba) = *(undefined1 *)(param_1 + 0x172);
  *(undefined1 *)(param_2 + 0xbb) = *(undefined1 *)(param_1 + 0x173);
  *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_1 + 0x174);
  if (!bVar6) {
    plVar3 = *(longlong **)(param_1 + 0x168);
    if (*(code **)(*plVar3 + 8) == FUN_1447d3e98) {
      plVar3 = plVar3 + 4;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 8))(plVar3);
    }
    *(ushort *)(param_2 + 0xc0) = (ushort)*(byte *)((longlong)plVar3 + 0x31);
  }
  *(undefined1 *)(param_2 + 0xc2) = *(undefined1 *)(param_1 + 0x178);
  *(undefined1 *)(param_2 + 0xc3) = *(undefined1 *)(param_1 + 0x179);
  *(undefined1 *)(param_2 + 0xc6) = *(undefined1 *)(param_1 + 0x17a);
  *(byte *)(param_2 + 199) = *(byte *)(param_1 + 0x17b) & 1;
  return;
}



// FUNCTION 144b0e552 FUN_144b0e552 body=391 status=ok
// SIG undefined FUN_144b0e552(void)

void FUN_144b0e552(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b0e6da FUN_144b0e6da body=209 status=ok
// SIG undefined FUN_144b0e6da(void)

void FUN_144b0e6da(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 4;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 8;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 (*) [16])(param_1 + 0x16) = (undefined1  [16])0x0;
  lVar1 = 0xc0;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x10) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x180);
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x36] = 0;
  return;
}



// FUNCTION 144b0e7ac FUN_144b0e7ac body=31 status=ok
// SIG undefined FUN_144b0e7ac(void)

undefined8 FUN_144b0e7ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b0e7cc FUN_144b0e7cc body=189 status=ok
// SIG undefined FUN_144b0e7cc(void)

void FUN_144b0e7cc(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 4;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 8;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  lVar1 = 0xb2;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x172);
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined1 (*) [16])(param_1 + 0x2c) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined2 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x32] = 0;
  return;
}



// FUNCTION 144b0e889 FUN_144b0e889 body=313 status=ok
// SIG undefined FUN_144b0e889(void)

undefined8 FUN_144b0e889(float param_1,double *param_2,longlong param_3,float param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = *(double *)(param_3 + 0x1058) - param_2[0xe];
  dVar4 = *(double *)(param_3 + 0x1050) - param_2[0xd];
  dVar5 = *(double *)(param_3 + 0x1048) - param_2[0xc];
  dVar3 = param_2[10] * param_2[10] + param_2[8] * param_2[8] + param_2[9] * param_2[9];
  dVar6 = param_2[6] * param_2[6] + param_2[4] * param_2[4] + param_2[5] * param_2[5];
  if (dVar6 <= dVar3) {
    dVar6 = dVar3;
  }
  dVar3 = param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1];
  if (dVar3 <= dVar6) {
    dVar3 = dVar6;
  }
  param_1 = (float)(((2.0 / *(double *)(param_3 + 0x830)) /
                    (double)(*(int *)(param_3 + 0x3100) - *(int *)(param_3 + 0x30f8))) * 600.0) *
            param_1;
  fVar1 = (((float)SQRT(dVar3) / (float)SQRT(dVar2 * dVar2 + dVar5 * dVar5 + dVar4 * dVar4)) *
           param_4 - param_1) / (param_1 * 0.5);
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return CONCAT44((int)((ulonglong)SQRT(dVar3) >> 0x20),fVar1);
}



// FUNCTION 144b0e9c2 FUN_144b0e9c2 body=2455 status=ok
// SIG undefined FUN_144b0e9c2(void)

void FUN_144b0e9c2(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  int iVar22;
  longlong *plVar23;
  ulonglong uVar24;
  longlong *plVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  bool bVar32;
  bool bVar33;
  float fVar34;
  undefined1 auStack_398 [32];
  longlong local_378;
  longlong local_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  iVar26 = (int)param_1[1];
  if (1 < (longlong)iVar26) {
    lVar19 = *param_1;
    memset(local_368,0,0x2f0);
    local_370 = (longlong)iVar26 * 0x30 + lVar19 + -0x30;
    local_378 = lVar19;
    fVar34 = logf((float)iVar26);
    local_368[0] = (int)(longlong)(fVar34 + fVar34);
    plVar15 = &local_378;
    do {
      plVar16 = (longlong *)*plVar15;
      plVar23 = (longlong *)plVar15[1];
      iVar26 = (int)plVar15[2];
      iVar22 = (int)((ulonglong)((longlong)plVar23 - (longlong)plVar16) >> 4) * -0x55555555;
      uVar20 = iVar22 + 1;
      plVar25 = plVar16;
      if (iVar26 != 0) {
LAB_144b0ea6c:
        if (8 < (int)uVar20) {
          uVar24 = (ulonglong)(uVar20 >> 1);
          lVar19 = plVar25[uVar24 * 6];
          lVar28 = (plVar25 + uVar24 * 6)[1];
          lVar5 = plVar25[uVar24 * 6 + 2];
          lVar6 = (plVar25 + uVar24 * 6 + 2)[1];
          lVar7 = plVar25[uVar24 * 6 + 4];
          lVar8 = (plVar25 + uVar24 * 6 + 4)[1];
          lVar9 = *plVar25;
          lVar10 = plVar25[1];
          lVar11 = plVar25[2];
          lVar12 = plVar25[3];
          lVar13 = plVar25[5];
          plVar25[uVar24 * 6 + 4] = plVar25[4];
          (plVar25 + uVar24 * 6 + 4)[1] = lVar13;
          plVar25[uVar24 * 6 + 2] = lVar11;
          (plVar25 + uVar24 * 6 + 2)[1] = lVar12;
          plVar25[uVar24 * 6] = lVar9;
          (plVar25 + uVar24 * 6)[1] = lVar10;
          plVar25[4] = lVar7;
          plVar25[5] = lVar8;
          plVar25[2] = lVar5;
          plVar25[3] = lVar6;
          *plVar25 = lVar19;
          plVar25[1] = lVar28;
          plVar16 = plVar25;
          plVar21 = plVar23 + 6;
          do {
            plVar16 = plVar16 + 6;
            if (plVar16 <= plVar23) {
              iVar22 = *(int *)(*plVar25 + 0xb4);
              do {
                iVar27 = *(int *)(*plVar16 + 0xb4);
                if (iVar27 == iVar22) {
                  uVar20 = *(uint *)(plVar16 + 2);
                  uVar14 = uVar20 >> 0x11 & 1;
                  uVar2 = *(uint *)(plVar25 + 2);
                  uVar30 = uVar2 >> 0x11 & 1;
                  bVar32 = uVar14 < uVar30;
                  if (uVar14 == uVar30) {
                    bVar33 = SBORROW4(uVar20,uVar2);
                    bVar32 = (int)(uVar20 - uVar2) < 0;
                    if (uVar20 == uVar2) {
                      bVar32 = (ulonglong)plVar16[1] < (ulonglong)plVar25[1];
                      if (plVar16[1] != plVar25[1]) goto LAB_144b0eb46;
                      lVar19 = *(longlong *)*plVar16;
                      lVar28 = *(longlong *)*plVar25;
                      bVar33 = SBORROW8(lVar19,lVar28);
                      bVar32 = lVar19 - lVar28 < 0;
                    }
                    if (bVar33 != bVar32) break;
                  }
                  else {
LAB_144b0eb46:
                    if (bVar32) break;
                  }
                }
                else if (iVar22 < iVar27) break;
                plVar16 = plVar16 + 6;
              } while (plVar16 <= plVar23);
            }
            plVar18 = plVar21 + -6;
            if (plVar25 < plVar18) {
              iVar22 = *(int *)(*plVar25 + 0xb4);
              do {
                plVar17 = plVar18;
                iVar27 = *(int *)(plVar21[-6] + 0xb4);
                plVar18 = plVar17;
                if (iVar22 == iVar27) {
                  uVar20 = *(uint *)(plVar25 + 2);
                  uVar14 = uVar20 >> 0x11 & 1;
                  uVar2 = *(uint *)(plVar17 + 2);
                  uVar30 = uVar2 >> 0x11 & 1;
                  bVar32 = uVar14 < uVar30;
                  if (uVar14 == uVar30) {
                    if (uVar20 == uVar2) {
                      bVar32 = (ulonglong)plVar25[1] < (ulonglong)plVar17[1];
                      if (plVar25[1] != plVar17[1]) goto LAB_144b0ebb8;
                      if (*(longlong *)*plVar25 < *(longlong *)plVar21[-6]) {
                        plVar21 = plVar17 + 6;
                        break;
                      }
                    }
                    else if ((int)uVar20 < (int)uVar2) break;
                  }
                  else {
LAB_144b0ebb8:
                    if (bVar32) break;
                  }
                }
                else if (iVar27 < iVar22) break;
                plVar18 = plVar17 + -6;
                plVar21 = plVar17;
              } while (plVar25 < plVar18);
            }
            if (plVar18 < plVar16) goto LAB_144b0ec3a;
            lVar19 = *plVar16;
            lVar28 = plVar16[1];
            lVar5 = plVar16[2];
            lVar6 = plVar16[3];
            lVar7 = plVar16[4];
            lVar8 = plVar16[5];
            lVar9 = *plVar18;
            lVar10 = plVar18[1];
            lVar11 = plVar18[2];
            lVar12 = plVar18[3];
            lVar13 = plVar18[5];
            plVar16[4] = plVar18[4];
            plVar16[5] = lVar13;
            plVar16[2] = lVar11;
            plVar16[3] = lVar12;
            *plVar16 = lVar9;
            plVar16[1] = lVar10;
            plVar18[4] = lVar7;
            plVar18[5] = lVar8;
            plVar18[2] = lVar5;
            plVar18[3] = lVar6;
            *plVar18 = lVar19;
            plVar18[1] = lVar28;
            plVar21 = plVar18;
          } while( true );
        }
        for (; plVar21 = plVar25, plVar16 = plVar25, plVar25 < plVar23; plVar23 = plVar23 + -6) {
          while (plVar18 = plVar21, plVar16 = plVar16 + 6, plVar16 <= plVar23) {
            iVar26 = *(int *)(*plVar16 + 0xb4);
            iVar22 = *(int *)(*plVar18 + 0xb4);
            if (iVar26 == iVar22) {
              uVar20 = *(uint *)(plVar16 + 2);
              uVar14 = uVar20 >> 0x11 & 1;
              uVar2 = *(uint *)(plVar18 + 2);
              uVar30 = uVar2 >> 0x11 & 1;
              bVar32 = uVar14 < uVar30;
              if (uVar14 == uVar30) {
                bVar33 = SBORROW4(uVar20,uVar2);
                bVar32 = (int)(uVar20 - uVar2) < 0;
                if (uVar20 == uVar2) {
                  bVar32 = (ulonglong)plVar16[1] < (ulonglong)plVar18[1];
                  if (plVar16[1] != plVar18[1]) goto LAB_144b0ed93;
                  lVar19 = *(longlong *)*plVar16;
                  lVar28 = *(longlong *)*plVar18;
                  bVar33 = SBORROW8(lVar19,lVar28);
                  bVar32 = lVar19 - lVar28 < 0;
                }
                bVar32 = bVar33 != bVar32;
              }
            }
            else {
              bVar32 = iVar22 < iVar26;
            }
LAB_144b0ed93:
            plVar21 = plVar16;
            if (!bVar32) {
              plVar21 = plVar18;
            }
          }
          local_78 = *plVar18;
          uStack_70 = plVar18[1];
          local_68 = plVar18[2];
          lStack_60 = plVar18[3];
          local_58 = plVar18[4];
          lStack_50 = plVar18[5];
          lVar8 = local_78;
          lVar9 = uStack_70;
          lVar19 = *plVar23;
          lVar28 = plVar23[1];
          lVar5 = plVar23[2];
          lVar6 = plVar23[3];
          lVar7 = plVar23[5];
          plVar18[4] = plVar23[4];
          plVar18[5] = lVar7;
          plVar18[2] = lVar5;
          plVar18[3] = lVar6;
          *plVar18 = lVar19;
          plVar18[1] = lVar28;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          plVar23[4] = local_58;
          plVar23[5] = lStack_50;
          plVar23[2] = local_68;
          plVar23[3] = lStack_60;
          *(undefined4 *)plVar23 = (undefined4)local_78;
          *(undefined4 *)((longlong)plVar23 + 4) = local_78._4_4_;
          *(undefined4 *)(plVar23 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)plVar23 + 0xc) = uStack_70._4_4_;
          local_78 = lVar8;
          uStack_70 = lVar9;
        }
        goto LAB_144b0f2e8;
      }
LAB_144b0ee58:
      if (uVar20 != 0) {
        iVar26 = (iVar22 - (iVar22 + -1 >> 0x1f)) + -1 >> 1;
        iVar22 = iVar26;
joined_r0x000144b0ee7e:
        do {
          iVar27 = iVar26 * 2 + 1;
          if (iVar27 < (int)uVar20) {
            iVar29 = iVar26 * 2 + 2;
            if (iVar29 < (int)uVar20) {
              lVar28 = (longlong)iVar29;
              lVar19 = (longlong)iVar27;
              iVar3 = *(int *)(plVar16[lVar19 * 6] + 0xb4);
              iVar4 = *(int *)(plVar16[lVar28 * 6] + 0xb4);
              if (iVar3 == iVar4) {
                uVar2 = *(uint *)(plVar16 + lVar19 * 6 + 2);
                uVar31 = uVar2 >> 0x11 & 1;
                uVar14 = *(uint *)(plVar16 + lVar28 * 6 + 2);
                uVar30 = uVar14 >> 0x11 & 1;
                bVar32 = uVar31 < uVar30;
                if (uVar31 == uVar30) {
                  bVar33 = SBORROW4(uVar2,uVar14);
                  bVar32 = (int)(uVar2 - uVar14) < 0;
                  if (uVar2 == uVar14) {
                    bVar32 = (ulonglong)plVar16[lVar19 * 6 + 1] < (ulonglong)plVar16[lVar28 * 6 + 1]
                    ;
                    if (plVar16[lVar19 * 6 + 1] != plVar16[lVar28 * 6 + 1]) goto LAB_144b0ef0e;
                    lVar19 = *(longlong *)plVar16[lVar19 * 6];
                    lVar28 = *(longlong *)plVar16[lVar28 * 6];
                    bVar33 = SBORROW8(lVar19,lVar28);
                    bVar32 = lVar19 - lVar28 < 0;
                  }
                  bVar32 = bVar33 != bVar32;
                }
              }
              else {
                bVar32 = iVar4 < iVar3;
              }
LAB_144b0ef0e:
              if (!bVar32) {
                iVar27 = iVar29;
              }
            }
            plVar23 = plVar16 + (longlong)iVar26 * 6;
            plVar25 = plVar16 + (longlong)iVar27 * 6;
            iVar29 = *(int *)(plVar16[(longlong)iVar27 * 6] + 0xb4);
            iVar3 = *(int *)(plVar16[(longlong)iVar26 * 6] + 0xb4);
            if (iVar29 == iVar3) {
              uVar2 = *(uint *)(plVar25 + 2);
              uVar30 = uVar2 >> 0x11 & 1;
              uVar14 = *(uint *)(plVar23 + 2);
              uVar31 = uVar14 >> 0x11 & 1;
              bVar32 = uVar30 < uVar31;
              if (uVar30 == uVar31) {
                bVar33 = SBORROW4(uVar2,uVar14);
                bVar32 = (int)(uVar2 - uVar14) < 0;
                if (uVar2 == uVar14) {
                  bVar32 = (ulonglong)plVar25[1] < (ulonglong)plVar23[1];
                  if (plVar25[1] != plVar23[1]) goto LAB_144b0ef8a;
                  lVar19 = *(longlong *)plVar16[(longlong)iVar27 * 6];
                  lVar28 = *(longlong *)plVar16[(longlong)iVar26 * 6];
                  bVar33 = SBORROW8(lVar19,lVar28);
                  bVar32 = lVar19 - lVar28 < 0;
                }
                if (bVar33 != bVar32) {
LAB_144b0ef8c:
                  local_78 = *plVar23;
                  uStack_70 = plVar23[1];
                  local_68 = plVar23[2];
                  lStack_60 = plVar23[3];
                  local_58 = plVar23[4];
                  lStack_50 = plVar23[5];
                  lVar8 = local_78;
                  lVar9 = uStack_70;
                  lVar19 = *plVar25;
                  lVar28 = plVar25[1];
                  lVar5 = plVar25[2];
                  lVar6 = plVar25[3];
                  lVar7 = plVar25[5];
                  plVar23[4] = plVar25[4];
                  plVar23[5] = lVar7;
                  plVar23[2] = lVar5;
                  plVar23[3] = lVar6;
                  *plVar23 = lVar19;
                  plVar23[1] = lVar28;
                  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
                  plVar25[4] = local_58;
                  plVar25[5] = lStack_50;
                  plVar25[2] = local_68;
                  plVar25[3] = lStack_60;
                  *(undefined4 *)plVar25 = (undefined4)local_78;
                  *(undefined4 *)((longlong)plVar25 + 4) = local_78._4_4_;
                  *(undefined4 *)(plVar25 + 1) = (undefined4)uStack_70;
                  *(undefined4 *)((longlong)plVar25 + 0xc) = uStack_70._4_4_;
                  local_78 = lVar8;
                  uStack_70 = lVar9;
                  iVar26 = iVar27;
                  goto joined_r0x000144b0ee7e;
                }
              }
              else {
LAB_144b0ef8a:
                if (bVar32) goto LAB_144b0ef8c;
              }
            }
            else if (iVar3 < iVar29) goto LAB_144b0ef8c;
          }
          bVar32 = iVar22 != 0;
          iVar26 = iVar22 + -1;
          iVar22 = iVar26;
        } while (bVar32);
        if (1 < (int)uVar20) {
          uVar24 = (ulonglong)uVar20 - 1;
          local_78 = *plVar16;
          uStack_70 = plVar16[1];
          local_68 = plVar16[2];
          lStack_60 = plVar16[3];
          local_58 = plVar16[4];
          lStack_50 = plVar16[5];
          lVar8 = local_78;
          lVar9 = uStack_70;
          lVar19 = plVar16[uVar24 * 6];
          lVar28 = (plVar16 + uVar24 * 6)[1];
          lVar5 = plVar16[uVar24 * 6 + 2];
          lVar6 = (plVar16 + uVar24 * 6 + 2)[1];
          lVar7 = (plVar16 + uVar24 * 6 + 4)[1];
          plVar16[4] = plVar16[uVar24 * 6 + 4];
          plVar16[5] = lVar7;
          plVar16[2] = lVar5;
          plVar16[3] = lVar6;
          *plVar16 = lVar19;
          plVar16[1] = lVar28;
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          plVar16[uVar24 * 6 + 4] = local_58;
          (plVar16 + uVar24 * 6 + 4)[1] = lStack_50;
          plVar16[uVar24 * 6 + 2] = local_68;
          (plVar16 + uVar24 * 6 + 2)[1] = lStack_60;
          plVar23 = plVar16 + uVar24 * 6;
          *(undefined4 *)plVar23 = (undefined4)local_78;
          *(undefined4 *)((longlong)plVar23 + 4) = local_78._4_4_;
          *(undefined4 *)(plVar23 + 1) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)plVar23 + 0xc) = uStack_70._4_4_;
          local_78 = lVar8;
          uStack_70 = lVar9;
          if (uVar20 != 2) {
            do {
              iVar22 = 0;
              iVar26 = 1;
              iVar27 = 0;
              do {
                lVar19 = (longlong)(iVar22 + 2);
                iVar29 = iVar26;
                if (lVar19 < (longlong)uVar24) {
                  lVar28 = (longlong)iVar26;
                  iVar26 = *(int *)(plVar16[lVar28 * 6] + 0xb4);
                  iVar3 = *(int *)(plVar16[lVar19 * 6] + 0xb4);
                  if (iVar26 == iVar3) {
                    uVar20 = *(uint *)(plVar16 + lVar28 * 6 + 2);
                    uVar14 = uVar20 >> 0x11 & 1;
                    uVar2 = *(uint *)(plVar16 + lVar19 * 6 + 2);
                    uVar30 = uVar2 >> 0x11 & 1;
                    bVar32 = uVar14 < uVar30;
                    if (uVar14 == uVar30) {
                      bVar33 = SBORROW4(uVar20,uVar2);
                      bVar32 = (int)(uVar20 - uVar2) < 0;
                      if (uVar20 == uVar2) {
                        bVar32 = (ulonglong)plVar16[lVar28 * 6 + 1] <
                                 (ulonglong)plVar16[lVar19 * 6 + 1];
                        if (plVar16[lVar28 * 6 + 1] != plVar16[lVar19 * 6 + 1]) goto LAB_144b0f15e;
                        lVar28 = *(longlong *)plVar16[lVar28 * 6];
                        lVar19 = *(longlong *)plVar16[lVar19 * 6];
                        bVar33 = SBORROW8(lVar28,lVar19);
                        bVar32 = lVar28 - lVar19 < 0;
                      }
                      bVar32 = bVar33 != bVar32;
                    }
                  }
                  else {
                    bVar32 = iVar3 < iVar26;
                  }
LAB_144b0f15e:
                  if (!bVar32) {
                    iVar29 = iVar22 + 2;
                  }
                }
                plVar23 = plVar16 + (longlong)iVar27 * 6;
                plVar25 = plVar16 + (longlong)iVar29 * 6;
                iVar26 = *(int *)(plVar16[(longlong)iVar29 * 6] + 0xb4);
                iVar22 = *(int *)(plVar16[(longlong)iVar27 * 6] + 0xb4);
                if (iVar26 == iVar22) {
                  uVar20 = *(uint *)(plVar25 + 2);
                  uVar14 = uVar20 >> 0x11 & 1;
                  uVar2 = *(uint *)(plVar23 + 2);
                  uVar30 = uVar2 >> 0x11 & 1;
                  bVar32 = uVar14 < uVar30;
                  if (uVar14 == uVar30) {
                    bVar33 = SBORROW4(uVar20,uVar2);
                    bVar32 = (int)(uVar20 - uVar2) < 0;
                    if (uVar20 == uVar2) {
                      bVar32 = (ulonglong)plVar25[1] < (ulonglong)plVar23[1];
                      if (plVar25[1] != plVar23[1]) goto LAB_144b0f1d9;
                      lVar19 = *(longlong *)plVar16[(longlong)iVar29 * 6];
                      lVar28 = *(longlong *)plVar16[(longlong)iVar27 * 6];
                      bVar33 = SBORROW8(lVar19,lVar28);
                      bVar32 = lVar19 - lVar28 < 0;
                    }
                    if (bVar33 == bVar32) break;
                  }
                  else {
LAB_144b0f1d9:
                    if (!bVar32) break;
                  }
                }
                else if (iVar26 <= iVar22) break;
                lVar19 = *plVar23;
                lVar28 = plVar23[1];
                lVar5 = plVar23[2];
                lVar6 = plVar23[3];
                lVar7 = plVar23[4];
                lVar8 = plVar23[5];
                lVar9 = *plVar25;
                lVar10 = plVar25[1];
                lVar11 = plVar25[2];
                lVar12 = plVar25[3];
                lVar13 = plVar25[5];
                plVar23[4] = plVar25[4];
                plVar23[5] = lVar13;
                plVar23[2] = lVar11;
                plVar23[3] = lVar12;
                *plVar23 = lVar9;
                plVar23[1] = lVar10;
                plVar25[4] = lVar7;
                plVar25[5] = lVar8;
                plVar25[2] = lVar5;
                plVar25[3] = lVar6;
                *plVar25 = lVar19;
                plVar25[1] = lVar28;
                iVar22 = iVar29 * 2;
                iVar26 = iVar29 * 2 + 1;
                iVar27 = iVar29;
              } while ((longlong)iVar26 < (longlong)uVar24);
              uVar1 = uVar24 - 1;
              local_78 = *plVar16;
              uStack_70 = plVar16[1];
              local_68 = plVar16[2];
              lStack_60 = plVar16[3];
              local_58 = plVar16[4];
              lStack_50 = plVar16[5];
              lVar8 = local_78;
              lVar9 = uStack_70;
              lVar19 = plVar16[uVar1 * 6];
              lVar28 = (plVar16 + uVar1 * 6)[1];
              lVar5 = plVar16[uVar1 * 6 + 2];
              lVar6 = (plVar16 + uVar1 * 6 + 2)[1];
              lVar7 = (plVar16 + uVar1 * 6 + 4)[1];
              plVar16[4] = plVar16[uVar1 * 6 + 4];
              plVar16[5] = lVar7;
              plVar16[2] = lVar5;
              plVar16[3] = lVar6;
              *plVar16 = lVar19;
              plVar16[1] = lVar28;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              plVar16[uVar1 * 6 + 4] = local_58;
              (plVar16 + uVar1 * 6 + 4)[1] = lStack_50;
              plVar16[uVar1 * 6 + 2] = local_68;
              (plVar16 + uVar1 * 6 + 2)[1] = lStack_60;
              plVar23 = plVar16 + uVar1 * 6;
              *(undefined4 *)plVar23 = (undefined4)local_78;
              *(undefined4 *)((longlong)plVar23 + 4) = local_78._4_4_;
              *(undefined4 *)(plVar23 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)plVar23 + 0xc) = uStack_70._4_4_;
              bVar32 = 2 < uVar24;
              uVar24 = uVar1;
              local_78 = lVar8;
              uStack_70 = lVar9;
            } while (bVar32);
          }
        }
      }
LAB_144b0f2e8:
      plVar15 = plVar15 + -3;
    } while (&local_378 <= plVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_144b0ec3a:
  local_78 = *plVar25;
  uStack_70 = plVar25[1];
  local_68 = plVar25[2];
  lStack_60 = plVar25[3];
  local_58 = plVar25[4];
  lStack_50 = plVar25[5];
  lVar8 = local_78;
  lVar9 = uStack_70;
  lVar19 = *plVar18;
  lVar28 = plVar18[1];
  lVar5 = plVar18[2];
  lVar6 = plVar18[3];
  lVar7 = plVar18[5];
  plVar25[4] = plVar18[4];
  plVar25[5] = lVar7;
  plVar25[2] = lVar5;
  plVar25[3] = lVar6;
  *plVar25 = lVar19;
  plVar25[1] = lVar28;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  plVar18[4] = local_58;
  plVar18[5] = lStack_50;
  plVar18[2] = local_68;
  plVar18[3] = lStack_60;
  *(undefined4 *)plVar18 = (undefined4)local_78;
  *(undefined4 *)((longlong)plVar18 + 4) = local_78._4_4_;
  *(undefined4 *)(plVar18 + 1) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)plVar18 + 0xc) = uStack_70._4_4_;
  iVar26 = iVar26 + -1;
  plVar21 = plVar21 + -0xc;
  local_78 = lVar8;
  uStack_70 = lVar9;
  if ((longlong)plVar21 - (longlong)plVar25 < (longlong)plVar23 - (longlong)plVar16) {
    if (plVar16 < plVar23) {
      *plVar15 = (longlong)plVar16;
      plVar15[1] = (longlong)plVar23;
      *(int *)(plVar15 + 2) = iVar26;
      plVar15 = plVar15 + 3;
    }
    plVar23 = plVar21;
    plVar16 = plVar25;
    if (plVar18 <= plVar25 + 6) goto LAB_144b0f2e8;
  }
  else {
    if (plVar25 + 6 < plVar18) {
      *plVar15 = (longlong)plVar25;
      plVar15[1] = (longlong)plVar21;
      *(int *)(plVar15 + 2) = iVar26;
      plVar15 = plVar15 + 3;
    }
    if (plVar23 <= plVar16) goto LAB_144b0f2e8;
  }
  iVar22 = (int)((ulonglong)((longlong)plVar23 - (longlong)plVar16) >> 4) * -0x55555555;
  uVar20 = iVar22 + 1;
  plVar25 = plVar16;
  if (iVar26 == 0) goto LAB_144b0ee58;
  goto LAB_144b0ea6c;
}



// FUNCTION 144b0f36e FUN_144b0f36e body=426 status=ok
// SIG undefined FUN_144b0f36e(void)

void FUN_144b0f36e(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
    uVar15 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x18);
    }
    uVar7 = *puVar6;
    if (uVar7 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar15) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar7 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar7 = 0xffffffff;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar5 * 8);
      (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
      uVar7 = ~(uint)uVar14 & uVar7;
      puVar6 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x18);
      }
      iVar3 = *(int *)(param_1 + 0x30);
      iVar5 = (int)uVar15;
      lVar12 = (longlong)iVar5;
      uVar11 = puVar6[lVar12] & uVar7;
      if (uVar11 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar5 < iVar8) {
          lVar13 = 0;
          do {
            uVar11 = puVar6[lVar12 + lVar13 + 1];
            if (uVar11 != 0) {
              uVar15 = (ulonglong)(iVar5 + (int)lVar13 + 1);
              uVar7 = 0xffffffff;
              goto LAB_144b0f49e;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar7 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar15 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_144b0f49e:
        uVar14 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
  return;
}



// FUNCTION 144b0f518 FUN_144b0f518 body=426 status=ok
// SIG undefined FUN_144b0f518(void)

void FUN_144b0f518(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 == 0) {
    uVar15 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x18);
    }
    uVar7 = *puVar6;
    if (uVar7 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar15) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar7 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar7 = 0xffffffff;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar5 * 8);
      (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
      uVar7 = ~(uint)uVar14 & uVar7;
      puVar6 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x18);
      }
      iVar3 = *(int *)(param_1 + 0x30);
      iVar5 = (int)uVar15;
      lVar12 = (longlong)iVar5;
      uVar11 = puVar6[lVar12] & uVar7;
      if (uVar11 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar5 < iVar8) {
          lVar13 = 0;
          do {
            uVar11 = puVar6[lVar12 + lVar13 + 1];
            if (uVar11 != 0) {
              uVar15 = (ulonglong)(iVar5 + (int)lVar13 + 1);
              uVar7 = 0xffffffff;
              goto LAB_144b0f648;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar7 = 0xffffffff;
          iVar5 = iVar9;
        }
        uVar15 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_144b0f648:
        uVar14 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
  return;
}



// FUNCTION 144b0f6c2 FUN_144b0f6c2 body=76 status=ok
// SIG undefined FUN_144b0f6c2(void)

void FUN_144b0f6c2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x1e0);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0x24] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144b0f70e FUN_144b0f70e body=334 status=ok
// SIG undefined FUN_144b0f70e(void)

void FUN_144b0f70e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x33d0) != '\0') {
    return;
  }
  lVar4 = -0x60;
  do {
    puVar1 = (undefined8 *)(param_2 + 0xfe0 + lVar4);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    puVar1 = (undefined8 *)(param_2 + 0x1040 + lVar4);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    puVar1 = (undefined8 *)(param_2 + 0x10a0 + lVar4);
    *puVar1 = 0;
    puVar1[1] = 0x3f80000000000000;
    *(undefined8 *)(&DAT_00001100 + lVar4 + param_2) = 0;
    *(undefined8 *)((longlong)(&DAT_00001100 + lVar4 + param_2) + 8) = 0x3f80000000000000;
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0);
  *(undefined8 *)(&DAT_00001100 + param_2) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x1108) = 1;
  *(undefined8 *)(param_2 + 0x1110) = DAT_14c846350;
  *(undefined4 *)(param_2 + 0x1118) = DAT_14c846358;
  *(undefined8 *)(param_2 + 0x1120) = DAT_14c846350;
  *(undefined4 *)(param_2 + 0x1128) = DAT_14c846358;
  *(undefined8 *)(param_2 + 0x112c) = 0;
  *(undefined8 *)(param_2 + 0x1134) = 0;
  lVar2 = DAT_14ca94db8;
  lVar4 = *(longlong *)(DAT_14ca94db8 + 0x10);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_2 + 0x1678) = lVar4;
  lVar4 = *(longlong *)(lVar2 + 0x10);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_2 + 0x1680) = lVar4;
  lVar3 = DAT_14ca94dc0;
  lVar4 = *(longlong *)(DAT_14ca94dc0 + 0x10);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_2 + 0x1688) = lVar4;
  lVar4 = *(longlong *)(lVar2 + 0x10);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_2 + 0x1690) = lVar4;
  lVar4 = *(longlong *)(lVar3 + 0x10);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_2 + 0x1950) = lVar4;
  lVar4 = *(longlong *)(lVar2 + 0x10);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(DAT_14ca94dc8 + 0x10);
  }
  *(longlong *)(param_2 + 0x1958) = lVar4;
  return;
}



// FUNCTION 144b0f85c FUN_144b0f85c body=31 status=ok
// SIG undefined FUN_144b0f85c(void)

undefined8 FUN_144b0f85c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b0f87c FUN_144b0f87c body=31 status=ok
// SIG undefined FUN_144b0f87c(void)

undefined8 FUN_144b0f87c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b0f89b FUN_144b0f89b body=639 status=ok
// SIG undefined FUN_144b0f89b(void)

bool FUN_144b0f89b(int param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  lVar10 = DAT_14cae3fc8;
  if (DAT_14cae3fd0 < 1) {
    return false;
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar2 + 0xc60);
  if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != 1)) || (iVar4 == 2)) {
    uVar7 = 0;
  }
  else if (iVar4 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar7 = 1;
  }
  piVar3 = DAT_14c9d2390;
  if (*(int *)(lVar10 + uVar7 * 4) < 1) {
    return false;
  }
  piVar1 = (int *)(lVar2 + 0xc60);
  iVar4 = *piVar1;
  if (iVar4 == 0x40000002) {
    iVar8 = *DAT_14c9d2390;
    iVar9 = *DAT_14c9d23a8;
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      iVar8 = *DAT_14c9d2390;
    }
    else if (iVar4 == 2) {
      iVar8 = *DAT_14c9d2390;
      iVar4 = 2;
    }
    else {
      uVar7 = 1;
      if (iVar4 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar7 = (ulonglong)(DVar5 != DVar6);
        iVar4 = *piVar1;
      }
      iVar8 = piVar3[uVar7];
      if (iVar4 == 0x40000002) {
        iVar9 = *DAT_14c9d23a8;
        goto LAB_144b0fa65;
      }
    }
    piVar3 = DAT_14c9d23a8;
    if (((DAT_14c86a9f8 & 1) == 0) || (iVar4 == 2)) {
      iVar9 = *DAT_14c9d23a8;
    }
    else {
      uVar7 = 1;
      if (iVar4 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar7 = (ulonglong)(DVar5 != DVar6);
        iVar4 = *piVar1;
      }
      iVar9 = piVar3[uVar7];
      if (iVar4 == 0x40000002) goto LAB_144b0fa65;
    }
    lVar10 = DAT_14c9d23c0;
    if ((DAT_14c86a9f8 == 1) && (iVar4 != 2)) {
      if (iVar4 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar7 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar7 = 1;
      }
      goto LAB_144b0f9ca;
    }
  }
LAB_144b0fa65:
  uVar7 = 0;
  lVar10 = DAT_14c9d23c0;
LAB_144b0f9ca:
  if (param_1 == 0) {
    if (0 < iVar8) {
      param_2 = param_2 & 0xffff;
      if ((int)param_2 == 0x9b) {
        return true;
      }
      if ((*(byte *)((longlong)&DAT_14ca814d0 + param_2 * 0x3c + 5) & 8) != 0) {
        return 2 < (int)(&DAT_14ca814b8)[param_2 * 0xf];
      }
    }
  }
  else if (param_1 - 1U < 4) {
    iVar4 = *(int *)(lVar10 + uVar7 * 4);
    switch(param_1) {
    case 1:
      break;
    case 2:
      iVar9 = iVar4;
      break;
    default:
      return 0 < iVar8 || (0 < iVar4 || 0 < iVar9);
    }
    return 0 < iVar9;
  }
  return false;
}



// FUNCTION 144b0fb1a FUN_144b0fb1a body=544 status=ok
// SIG undefined FUN_144b0fb1a(void)

undefined1 (*) [16] FUN_144b0fb1a(double *param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
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
  double dVar21;
  
  dVar1 = *param_1;
  dVar2 = param_1[2];
  dVar12 = *param_3;
  dVar20 = param_3[1];
  dVar13 = param_3[2];
  dVar14 = param_3[4];
  dVar21 = param_3[5];
  dVar15 = param_3[6];
  dVar16 = param_3[8];
  dVar17 = param_3[9];
  dVar3 = param_1[1];
  dVar6 = param_3[0xc];
  dVar8 = dVar2 * dVar17 + param_1[1] * dVar21 + dVar1 * dVar20 + param_3[0xd];
  dVar18 = param_3[10];
  dVar4 = param_1[3];
  dVar5 = param_1[4];
  dVar19 = param_1[5];
  dVar10 = ABS(dVar19 * dVar16) + ABS(dVar5 * dVar14) + ABS(dVar4 * dVar12);
  dVar11 = ABS(param_1[5] * dVar17) + ABS(param_1[4] * dVar21) + ABS(param_1[3] * dVar20);
  dVar5 = ABS(dVar19 * dVar18) + ABS(dVar5 * dVar15) + ABS(dVar4 * dVar13);
  dVar4 = param_3[0xe];
  dVar19 = dVar16 * dVar16 + dVar14 * dVar14 + dVar12 * dVar12;
  dVar20 = dVar17 * dVar17 + dVar21 * dVar21 + dVar20 * dVar20;
  dVar21 = dVar18 * dVar18 + dVar13 * dVar13 + dVar15 * dVar15;
  if (dVar19 <= dVar20) {
    dVar19 = dVar20;
  }
  if (dVar19 <= dVar21) {
    dVar19 = dVar21;
  }
  if (dVar19 < 0.0) {
    dVar19 = sqrt(dVar19);
  }
  else {
    dVar19 = SQRT(dVar19);
  }
  dVar21 = SQRT(dVar11 * dVar11 + dVar5 * dVar5 + dVar10 * dVar10);
  dVar20 = dVar19 * param_1[6];
  if (dVar21 <= dVar19 * param_1[6]) {
    dVar20 = dVar21;
  }
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = dVar2 * dVar16 + dVar3 * dVar14 + dVar1 * dVar12 + dVar6;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *param_2 = auVar7;
  *(double *)param_2[1] = dVar2 * dVar18 + dVar1 * dVar13 + dVar3 * dVar15 + dVar4;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_2[1] + 8) = auVar9;
  *(double *)(param_2[2] + 8) = dVar5;
  *(double *)param_2[3] = dVar20;
  return param_2;
}



// FUNCTION 144b0fd3a FUN_144b0fd3a body=109 status=ok
// SIG undefined FUN_144b0fd3a(void)

undefined8 FUN_144b0fd3a(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14c9d2468;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),*(int *)(lVar2 + uVar6 * 4) == 1);
}



// FUNCTION 144b0fda7 FUN_144b0fda7 body=134 status=ok
// SIG undefined FUN_144b0fda7(void)

undefined8 FUN_144b0fda7(ushort param_1)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 extraout_var;
  ulonglong uVar7;
  
  lVar2 = DAT_14c9d2468;
  if ((int)(&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] < 4) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar5 = (ulonglong)uVar1;
    if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
      uVar7 = 0;
    }
    else if (uVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = CONCAT44(extraout_var,DVar4);
      uVar7 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar7 = 1;
    }
    uVar6 = CONCAT71((int7)(uVar5 >> 8),*(int *)(lVar2 + uVar7 * 4) == 2);
  }
  return uVar6;
}



// FUNCTION 144b0fe2e FUN_144b0fe2e body=3370 status=ok
// SIG undefined FUN_144b0fe2e(void)

void FUN_144b0fe2e(longlong *param_1,int param_2)

{
  int *piVar1;
  void *_Dst;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  ushort uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 (*pauVar14) [16];
  undefined8 uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_3e8 [44];
  int local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  uint local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  int local_2bc;
  int *local_2b8;
  longlong local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_21c [4];
  undefined1 local_218 [144];
  uint local_188;
  uint uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  ulonglong local_178;
  uint local_168;
  uint uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  ulonglong local_158;
  uint local_148;
  uint uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulonglong local_138;
  uint local_128;
  uint uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulonglong local_118;
  uint local_108;
  uint uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_2bc = *piVar1;
  if (local_2bc == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_2bc = *piVar1;
  }
  if ((local_2bc == 0x60000000) || (local_2bc == 0)) {
    *piVar1 = 0x40000010;
  }
  plVar13 = (longlong *)param_1[1];
  local_2b0 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + 8);
  lVar25 = *(longlong *)(*plVar13 + 0x380);
  if (lVar25 == 0) {
    lVar25 = *plVar13;
  }
  iVar9 = *(int *)(*(longlong *)(*param_1 + 0x10) + 0x18);
  lVar27 = (longlong)param_2 * 0x70;
  pauVar14 = *(undefined1 (**) [16])(lVar25 + 0x58 + lVar27);
  auVar7 = *pauVar14;
  local_2a8 = *(undefined8 *)pauVar14[1];
  uStack_2a0 = *(undefined8 *)(pauVar14[1] + 8);
  local_f8 = *(ulonglong *)pauVar14[3];
  local_108 = (uint)*(undefined8 *)pauVar14[2];
  uStack_104 = (uint)((ulonglong)*(undefined8 *)pauVar14[2] >> 0x20);
  uStack_100 = (undefined4)*(undefined8 *)(pauVar14[2] + 8);
  uStack_fc = (undefined4)((ulonglong)*(undefined8 *)(pauVar14[2] + 8) >> 0x20);
  local_398 = *(undefined4 *)(pauVar14[3] + 8);
  local_3b4 = *(undefined4 *)pauVar14[4];
  local_3ac = *(undefined4 *)(pauVar14[4] + 4);
  local_39c = *(undefined4 *)(pauVar14[4] + 8);
  local_3b8 = *(undefined4 *)pauVar14[5];
  local_3b0 = *(undefined4 *)(pauVar14[5] + 4);
  local_3a0 = *(undefined4 *)(pauVar14[5] + 8);
  local_118 = *(ulonglong *)pauVar14[7];
  local_128 = (uint)*(undefined8 *)pauVar14[6];
  uStack_124 = (uint)((ulonglong)*(undefined8 *)pauVar14[6] >> 0x20);
  uStack_120 = (undefined4)*(undefined8 *)(pauVar14[6] + 8);
  uStack_11c = (undefined4)((ulonglong)*(undefined8 *)(pauVar14[6] + 8) >> 0x20);
  local_37c = *(undefined4 *)(pauVar14[7] + 8);
  local_3a4 = *(undefined4 *)pauVar14[8];
  local_390 = *(undefined4 *)(pauVar14[8] + 4);
  local_380 = *(undefined4 *)(pauVar14[8] + 8);
  local_3a8 = *(undefined4 *)pauVar14[9];
  local_394 = *(undefined4 *)(pauVar14[9] + 4);
  local_384 = *(undefined4 *)(pauVar14[9] + 8);
  local_138 = *(ulonglong *)pauVar14[0xb];
  local_148 = (uint)*(undefined8 *)pauVar14[10];
  uStack_144 = (uint)((ulonglong)*(undefined8 *)pauVar14[10] >> 0x20);
  uStack_140 = (undefined4)*(undefined8 *)(pauVar14[10] + 8);
  uStack_13c = (undefined4)((ulonglong)*(undefined8 *)(pauVar14[10] + 8) >> 0x20);
  local_338 = *(undefined4 *)(pauVar14[0xb] + 8);
  local_388 = *(undefined4 *)pauVar14[0xc];
  local_374 = *(undefined4 *)(pauVar14[0xc] + 4);
  local_33c = *(undefined4 *)(pauVar14[0xc] + 8);
  local_38c = *(undefined4 *)pauVar14[0xd];
  local_378 = *(undefined4 *)(pauVar14[0xd] + 4);
  local_344 = *(undefined4 *)(pauVar14[0xd] + 8);
  local_158 = *(ulonglong *)pauVar14[0xf];
  local_168 = (uint)*(undefined8 *)pauVar14[0xe];
  uStack_164 = (uint)((ulonglong)*(undefined8 *)pauVar14[0xe] >> 0x20);
  uStack_160 = (undefined4)*(undefined8 *)(pauVar14[0xe] + 8);
  uStack_15c = (undefined4)((ulonglong)*(undefined8 *)(pauVar14[0xe] + 8) >> 0x20);
  local_314 = *(undefined4 *)(pauVar14[0xf] + 8);
  local_348 = *(undefined4 *)pauVar14[0x10];
  local_32c = *(undefined4 *)(pauVar14[0x10] + 4);
  local_31c = *(undefined4 *)(pauVar14[0x10] + 8);
  local_350 = *(undefined4 *)pauVar14[0x11];
  local_334 = *(undefined4 *)(pauVar14[0x11] + 4);
  local_324 = *(undefined4 *)(pauVar14[0x11] + 8);
  local_178 = *(ulonglong *)pauVar14[0x13];
  local_188 = (uint)*(undefined8 *)pauVar14[0x12];
  uStack_184 = (uint)((ulonglong)*(undefined8 *)pauVar14[0x12] >> 0x20);
  uStack_180 = (undefined4)*(undefined8 *)(pauVar14[0x12] + 8);
  uStack_17c = (undefined4)((ulonglong)*(undefined8 *)(pauVar14[0x12] + 8) >> 0x20);
  local_2c4 = *(undefined4 *)pauVar14[0x16];
  local_2c8 = *(undefined4 *)(pauVar14[0x16] + 4);
  local_2cc = *(undefined4 *)(pauVar14[0x16] + 8);
  local_2d0 = *(undefined4 *)(pauVar14[0x16] + 0xc);
  local_238 = *(undefined8 *)pauVar14[0x17];
  uStack_230 = *(undefined8 *)(pauVar14[0x17] + 8);
  local_310 = *(undefined4 *)(pauVar14[0x13] + 8);
  local_340 = *(undefined4 *)pauVar14[0x14];
  local_328 = *(undefined4 *)(pauVar14[0x14] + 4);
  local_318 = *(undefined4 *)(pauVar14[0x14] + 8);
  local_34c = *(undefined4 *)pauVar14[0x15];
  local_330 = *(undefined4 *)(pauVar14[0x15] + 4);
  local_320 = *(undefined4 *)(pauVar14[0x15] + 8);
  local_2f0 = *(undefined4 *)pauVar14[0x18];
  local_2f4 = *(undefined4 *)(pauVar14[0x18] + 4);
  local_2f8 = *(undefined4 *)(pauVar14[0x18] + 8);
  local_2fc = *(undefined4 *)(pauVar14[0x18] + 0xc);
  local_300 = *(undefined4 *)pauVar14[0x19];
  local_304 = *(undefined4 *)(pauVar14[0x19] + 4);
  local_308 = *(undefined4 *)(pauVar14[0x19] + 8);
  local_30c = *(undefined4 *)(pauVar14[0x19] + 0xc);
  local_258 = *(undefined8 *)pauVar14[0x1a];
  uStack_250 = *(undefined8 *)(pauVar14[0x1a] + 8);
  local_268 = *(undefined8 *)pauVar14[0x1b];
  uStack_260 = *(undefined8 *)(pauVar14[0x1b] + 8);
  local_248 = *(undefined8 *)pauVar14[0x1c];
  uStack_240 = *(undefined8 *)(pauVar14[0x1c] + 8);
  iVar10 = *(int *)pauVar14[0x23];
  local_2c0 = *(undefined4 *)(pauVar14[0x25] + 8);
  uVar15 = *(undefined8 *)pauVar14[0x26];
  local_2d4 = *(undefined4 *)(pauVar14[0x26] + 8);
  local_288 = *(undefined8 *)pauVar14[0x1d];
  uStack_280 = *(undefined8 *)(pauVar14[0x1d] + 8);
  local_298 = *(undefined8 *)pauVar14[0x1e];
  uStack_290 = *(undefined8 *)(pauVar14[0x1e] + 8);
  local_354 = *(undefined4 *)pauVar14[0x1f];
  local_358 = *(undefined4 *)(pauVar14[0x1f] + 4);
  local_35c = *(undefined4 *)(pauVar14[0x1f] + 8);
  local_360 = *(undefined4 *)(pauVar14[0x1f] + 0xc);
  local_364 = *(undefined4 *)pauVar14[0x20];
  local_368 = *(undefined4 *)(pauVar14[0x20] + 4);
  local_36c = *(undefined4 *)(pauVar14[0x20] + 8);
  local_370 = *(undefined4 *)(pauVar14[0x20] + 0xc);
  auVar30 = pauVar14[0x21];
  uVar16 = *(undefined8 *)pauVar14[0x22];
  uVar17 = *(ulonglong *)(pauVar14[0x22] + 8);
  local_278 = *(undefined8 *)(pauVar14[0x23] + 8);
  uStack_270 = *(undefined8 *)pauVar14[0x24];
  uVar18 = *(undefined4 *)(pauVar14[0x24] + 8);
  uVar19 = *(undefined4 *)(pauVar14[0x24] + 0xc);
  uVar20 = *(undefined4 *)pauVar14[0x25];
  uVar21 = *(undefined4 *)(pauVar14[0x25] + 4);
  uVar22 = *(undefined4 *)(pauVar14[0x26] + 0xc);
  uVar23 = *(undefined4 *)pauVar14[0x27];
  iVar24 = *(int *)(pauVar14[0x27] + 4);
  local_3bc = param_2;
  local_2b8 = piVar1;
  memcpy(local_21c,pauVar14[0x27] + 0xc,0x94);
  uVar2 = *(undefined4 *)pauVar14[0x31];
  uVar3 = *(undefined4 *)(pauVar14[0x31] + 4);
  uVar4 = *(undefined4 *)(pauVar14[0x31] + 8);
  uVar5 = *(undefined4 *)(pauVar14[0x31] + 0xc);
  uVar6 = *(undefined4 *)pauVar14[0x32];
  local_2d8 = *(undefined4 *)(pauVar14[0x32] + 4);
  local_2dc = *(undefined4 *)(pauVar14[0x32] + 8);
  local_2e0 = *(undefined4 *)(pauVar14[0x32] + 0xc);
  local_2e4 = *(undefined4 *)pauVar14[0x33];
  local_2e8 = *(undefined4 *)pauVar14[0x34];
  local_2ec = *(uint *)(pauVar14[0x34] + 4);
  uVar11 = *(undefined4 *)(lVar25 + 0x60 + lVar27);
  auVar28 = pmovsxbd(ZEXT416(local_2ec),0xefefefef);
  iVar12 = *(int *)(lVar25 + 0x68 + lVar27);
  if (iVar12 == -1) {
    auVar29._8_4_ = 0xffffffff;
    auVar29._0_8_ = 0xffffffffffffffff;
    auVar29._12_4_ = 0xffffffff;
    auVar30 = pblendw(auVar30,auVar29,0xc0);
    uVar26 = 0;
  }
  else {
    uVar8 = *(ushort *)(lVar25 + lVar27 + 0x52);
    uVar26 = 2;
    if (-1 < (char)uVar8) {
      uVar26 = (uint)((uVar8 & 0x50) != 0);
    }
    if ((uVar8 & 8) != 0) {
      if ((*(byte *)(&DAT_14ca814d8 + (ulonglong)DAT_14ca85550 * 0xf) & 0x40) == 0) {
        uVar26 = uVar26 + 3;
      }
      else {
        uVar26 = uVar26 + 2;
      }
    }
    auVar30._8_8_ = auVar30._8_8_ & 0xffffffff | (ulonglong)(uint)(iVar12 + (int)plVar13[2]) << 0x20
    ;
    uVar26 = (ushort)((uVar8 >> 5 & 1) + (ushort)((uVar8 >> 9 & 1) != 0)) + uVar26;
    if ((uVar8 & 4) != 0) {
      uVar26 = uVar26 + (*(int *)(lVar25 + lVar27 + 0x54) + 3U >> 2);
    }
  }
  _Dst = (void *)(local_2b0 + 0x220 + (ulonglong)(uint)(iVar9 * local_3bc));
  *(ulonglong *)((longlong)_Dst + -0x220) =
       auVar28._0_8_ & auVar7._0_8_ & 0xffffffff |
       (ulonglong)(uint)(*(int *)(lVar25 + 100 + lVar27) + *(int *)((longlong)plVar13 + 0xc)) <<
       0x20;
  *(ulonglong *)((longlong)_Dst + -0x218) = CONCAT44(iVar24 * 0x10000 | auVar7._12_4_,uVar11);
  *(undefined8 *)((longlong)_Dst + -0x210) = local_2a8;
  *(undefined8 *)((longlong)_Dst + -0x208) = uStack_2a0;
  *(ulonglong *)((longlong)_Dst + -0x200) = (ulonglong)local_108 | local_f8 << 0x20;
  *(ulonglong *)((longlong)_Dst + -0x1f8) = CONCAT44(local_3b8,local_3b4);
  *(ulonglong *)((longlong)_Dst + -0x1f0) = (ulonglong)uStack_104 | local_f8 & 0xffffffff00000000;
  *(ulonglong *)((longlong)_Dst + -0x1e8) = CONCAT44(local_3b0,local_3ac);
  *(ulonglong *)((longlong)_Dst + -0x1e0) = CONCAT44(local_398,uStack_100);
  *(ulonglong *)((longlong)_Dst + -0x1d8) = CONCAT44(local_3a0,local_39c);
  *(ulonglong *)((longlong)_Dst + -0x1d0) = (ulonglong)local_128 | local_118 << 0x20;
  *(ulonglong *)((longlong)_Dst + -0x1c8) = CONCAT44(local_3a8,local_3a4);
  *(ulonglong *)((longlong)_Dst + -0x1c0) = (ulonglong)uStack_124 | local_118 & 0xffffffff00000000;
  *(ulonglong *)((longlong)_Dst + -0x1b8) = CONCAT44(local_394,local_390);
  *(ulonglong *)((longlong)_Dst + -0x1b0) = CONCAT44(local_37c,uStack_120);
  *(ulonglong *)((longlong)_Dst + -0x1a8) = CONCAT44(local_384,local_380);
  *(ulonglong *)((longlong)_Dst + -0x1a0) = (ulonglong)local_148 | local_138 << 0x20;
  *(ulonglong *)((longlong)_Dst + -0x198) = CONCAT44(local_38c,local_388);
  *(ulonglong *)((longlong)_Dst + -400) = (ulonglong)uStack_144 | local_138 & 0xffffffff00000000;
  *(ulonglong *)((longlong)_Dst + -0x188) = CONCAT44(local_378,local_374);
  *(ulonglong *)((longlong)_Dst + -0x180) = CONCAT44(local_338,uStack_140);
  *(ulonglong *)((longlong)_Dst + -0x178) = CONCAT44(local_344,local_33c);
  *(ulonglong *)((longlong)_Dst + -0x170) = (ulonglong)local_168 | local_158 << 0x20;
  *(ulonglong *)((longlong)_Dst + -0x168) = CONCAT44(local_350,local_348);
  *(ulonglong *)((longlong)_Dst + -0x160) = (ulonglong)uStack_164 | local_158 & 0xffffffff00000000;
  *(ulonglong *)((longlong)_Dst + -0x158) = CONCAT44(local_334,local_32c);
  *(ulonglong *)((longlong)_Dst + -0x150) = CONCAT44(local_314,uStack_160);
  *(ulonglong *)((longlong)_Dst + -0x148) = CONCAT44(local_324,local_31c);
  *(ulonglong *)((longlong)_Dst + -0x140) = (ulonglong)local_188 | local_178 << 0x20;
  *(ulonglong *)((longlong)_Dst + -0x138) = CONCAT44(local_34c,local_340);
  *(ulonglong *)((longlong)_Dst + -0x130) = (ulonglong)uStack_184 | local_178 & 0xffffffff00000000;
  *(ulonglong *)((longlong)_Dst + -0x128) = CONCAT44(local_330,local_328);
  *(ulonglong *)((longlong)_Dst + -0x120) = CONCAT44(local_310,uStack_180);
  *(ulonglong *)((longlong)_Dst + -0x118) = CONCAT44(local_320,local_318);
  *(undefined4 *)((longlong)_Dst + -0x110) = local_2c4;
  *(undefined4 *)((longlong)_Dst + -0x10c) = local_2c8;
  *(undefined4 *)((longlong)_Dst + -0x108) = local_2cc;
  *(undefined4 *)((longlong)_Dst + -0x104) = local_2d0;
  *(undefined8 *)((longlong)_Dst + -0x100) = local_238;
  *(undefined8 *)((longlong)_Dst + -0xf8) = uStack_230;
  *(undefined4 *)((longlong)_Dst + -0xf0) = local_2f0;
  *(undefined4 *)((longlong)_Dst + -0xec) = local_2f4;
  *(undefined4 *)((longlong)_Dst + -0xe8) = local_2f8;
  *(undefined4 *)((longlong)_Dst + -0xe4) = local_2fc;
  *(undefined4 *)((longlong)_Dst + -0xe0) = local_300;
  *(undefined4 *)((longlong)_Dst + -0xdc) = local_304;
  *(undefined4 *)((longlong)_Dst + -0xd8) = local_308;
  *(undefined4 *)((longlong)_Dst + -0xd4) = local_30c;
  *(undefined8 *)((longlong)_Dst + -0xd0) = local_258;
  *(undefined8 *)((longlong)_Dst + -200) = uStack_250;
  *(undefined8 *)((longlong)_Dst + -0xc0) = local_268;
  *(undefined8 *)((longlong)_Dst + -0xb8) = uStack_260;
  *(undefined8 *)((longlong)_Dst + -0xb0) = local_248;
  *(undefined8 *)((longlong)_Dst + -0xa8) = uStack_240;
  *(undefined8 *)((longlong)_Dst + -0xa0) = local_288;
  *(undefined8 *)((longlong)_Dst + -0x98) = uStack_280;
  *(undefined8 *)((longlong)_Dst + -0x90) = local_298;
  *(undefined8 *)((longlong)_Dst + -0x88) = uStack_290;
  *(undefined4 *)((longlong)_Dst + -0x80) = local_354;
  *(undefined4 *)((longlong)_Dst + -0x7c) = local_358;
  *(undefined4 *)((longlong)_Dst + -0x78) = local_35c;
  *(undefined4 *)((longlong)_Dst + -0x74) = local_360;
  *(undefined4 *)((longlong)_Dst + -0x70) = local_364;
  *(undefined4 *)((longlong)_Dst + -0x6c) = local_368;
  *(undefined4 *)((longlong)_Dst + -0x68) = local_36c;
  *(undefined4 *)((longlong)_Dst + -100) = local_370;
  *(undefined1 (*) [16])((longlong)_Dst + -0x60) = auVar30;
  *(undefined8 *)((longlong)_Dst + -0x50) = uVar16;
  *(ulonglong *)((longlong)_Dst + -0x48) =
       uVar17 & 0xffffffff | (ulonglong)(iVar10 << 0x18 | uVar26 & 0xffffff) << 0x20;
  *(undefined8 *)((longlong)_Dst + -0x40) = local_278;
  *(undefined8 *)((longlong)_Dst + -0x38) = uStack_270;
  *(undefined4 *)((longlong)_Dst + -0x30) = uVar18;
  *(undefined4 *)((longlong)_Dst + -0x2c) = uVar19;
  *(undefined4 *)((longlong)_Dst + -0x28) = uVar20;
  *(undefined4 *)((longlong)_Dst + -0x24) = local_2d4;
  *(undefined4 *)((longlong)_Dst + -0x20) = uVar22;
  *(undefined4 *)((longlong)_Dst + -0x1c) = uVar23;
  *(undefined4 *)((longlong)_Dst + -0x18) = uVar21;
  *(undefined4 *)((longlong)_Dst + -0x14) = local_2c0;
  *(undefined8 *)((longlong)_Dst + -0x10) = uVar15;
  *(undefined8 *)((longlong)_Dst + -8) = 0;
  memcpy(_Dst,local_218,0x90);
  *(undefined4 *)((longlong)_Dst + 0x90) = uVar2;
  *(undefined4 *)((longlong)_Dst + 0x94) = uVar3;
  *(undefined4 *)((longlong)_Dst + 0x98) = uVar4;
  *(undefined4 *)((longlong)_Dst + 0x9c) = uVar5;
  *(undefined4 *)((longlong)_Dst + 0xa0) = uVar6;
  *(undefined4 *)((longlong)_Dst + 0xa4) = local_2d8;
  *(undefined4 *)((longlong)_Dst + 0xa8) = local_2dc;
  *(undefined4 *)((longlong)_Dst + 0xac) = local_2e0;
  *(undefined4 *)((longlong)_Dst + 0xb0) = local_2e4;
  *(undefined4 *)((longlong)_Dst + 0xb4) = local_2e8;
  *(uint *)((longlong)_Dst + 0xb8) = local_2ec;
  *(undefined4 *)((longlong)_Dst + 0xbc) = 0;
  if ((local_2bc == 0x60000000) || (local_2bc == 0)) {
    *local_2b8 = local_2bc;
  }
  if ((local_f0 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b10b5a FUN_144b10b5a body=521 status=ok
// SIG undefined FUN_144b10b5a(void)

void FUN_144b10b5a(double *param_1,double *param_2,double *param_3,double param_4,double *param_5)

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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar14 = param_1[2];
  dVar13 = *param_1;
  dVar15 = param_1[1];
  dVar16 = param_5[0xc] * 0.0 + dVar14 * param_5[8] + dVar15 * param_5[4] + dVar13 * *param_5;
  dVar3 = param_5[0xd] * 0.0 + dVar14 * param_5[9] + dVar15 * param_5[5] + dVar13 * param_5[1];
  dVar4 = param_5[2] * dVar13 + param_5[6] * dVar15 + param_5[10] * dVar14 + param_5[0xe] * 0.0;
  dVar6 = dVar4 * dVar4 + dVar16 * dVar16 + dVar3 * dVar3;
  dVar5 = 0.0;
  dVar18 = 0.0;
  dVar17 = 0.0;
  if (9.99999993922529e-09 < dVar6) {
    dVar5 = 1.0 / SQRT(dVar6);
    dVar17 = dVar4 * dVar5;
    dVar18 = dVar3 * dVar5;
    dVar5 = dVar5 * dVar16;
  }
  dVar16 = (double)(~-(ulonglong)(param_4 < 0.0) & (ulonglong)dVar5 |
                   (ulonglong)-dVar5 & -(ulonglong)(param_4 < 0.0));
  if (param_4 < 0.0) {
    dVar18 = -dVar18;
    dVar17 = -dVar17;
  }
  dVar3 = param_1[3];
  dVar14 = dVar14 * dVar3;
  dVar15 = dVar15 * dVar3;
  dVar13 = dVar13 * dVar3;
  dVar7 = *param_3;
  dVar8 = param_3[1];
  dVar9 = param_3[4];
  dVar10 = param_3[5];
  dVar11 = param_3[8];
  dVar12 = param_3[9];
  dVar1 = param_3[0xc];
  dVar2 = param_3[0xd];
  dVar3 = param_3[10];
  dVar4 = param_3[6];
  dVar5 = param_3[2];
  dVar6 = param_3[0xe];
  *param_2 = dVar16;
  param_2[1] = dVar18;
  param_2[2] = dVar17;
  param_2[3] = (dVar13 * dVar5 + dVar15 * dVar4 + dVar14 * dVar3 + dVar6) * dVar17 +
               (dVar14 * dVar11 + dVar15 * dVar9 + dVar13 * dVar7 + dVar1) * dVar16 +
               (dVar14 * dVar12 + dVar15 * dVar10 + dVar13 * dVar8 + dVar2) * dVar18;
  return;
}



// FUNCTION 144b10d64 FUN_144b10d64 body=272 status=ok
// SIG undefined FUN_144b10d64(void)

void FUN_144b10d64(longlong *param_1,short *param_2,void *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int iVar7;
  void *_Dst;
  ulonglong uVar8;
  
  uVar1 = param_2[2];
  if (uVar1 != 0) {
    lVar3 = *param_1;
    uVar8 = *(ulonglong *)(lVar3 + 0x30);
    uVar5 = lVar3 + 0x30 + ((longlong)uVar8 >> 0x18);
    if ((uVar8 & 1) == 0) {
      uVar5 = uVar8;
    }
    uVar8 = (ulonglong)*(uint *)(lVar3 + 0x38);
    if (0 < (int)*(uint *)(lVar3 + 0x38)) {
      iVar2 = *(int *)(lVar3 + 0x28);
      iVar7 = iVar2 + 0xe;
      if (-1 < iVar2 + 7) {
        iVar7 = iVar2 + 7;
      }
      _Dst = (void *)((ulonglong)
                      (uint)((iVar7 >> 3) +
                            (*(int *)(lVar3 + 8) + *(int *)(lVar3 + 0x18) + iVar2) * 8) + param_1[1]
                     );
      puVar6 = (ulonglong *)(uVar5 + 8);
      do {
        if (*param_2 == (short)puVar6[-1]) {
          uVar8 = *puVar6;
          uVar5 = ((longlong)uVar8 >> 0x18) + (longlong)puVar6;
          if ((uVar8 & 1) == 0) {
            uVar5 = uVar8;
          }
          if ((int)(uint)puVar6[1] < 1) {
            return;
          }
          uVar8 = 0;
          do {
            if (param_2[1] == *(short *)(uVar5 + uVar8 * 4)) {
              uVar4 = 4;
              if (uVar1 < 4) {
                uVar4 = uVar1;
              }
              memcpy(_Dst,param_3,(ulonglong)uVar4);
              memset((void *)((longlong)_Dst + (ulonglong)uVar4),0,
                     (longlong)
                     (int)((int)((uint)(ushort)param_2[2] - (uint)uVar4) >> 0x1f &
                          (uint)(ushort)param_2[2] - (uint)uVar4));
              return;
            }
            _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)(uVar5 + 2 + uVar8 * 4));
            uVar8 = uVar8 + 1;
          } while ((uint)puVar6[1] != uVar8);
          return;
        }
        _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)((longlong)puVar6 + -6));
        puVar6 = puVar6 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



// FUNCTION 144b10ee8 FUN_144b10ee8 body=207 status=ok
// SIG undefined FUN_144b10ee8(void)

double * FUN_144b10ee8(double *param_1,float *param_2)

{
  *param_1 = (double)*param_2;
  param_1[1] = (double)param_2[1];
  param_1[2] = (double)param_2[2];
  param_1[3] = (double)param_2[3];
  param_1[4] = (double)param_2[4];
  param_1[5] = (double)param_2[5];
  param_1[6] = (double)param_2[6];
  param_1[7] = (double)param_2[7];
  param_1[8] = (double)param_2[8];
  param_1[9] = (double)param_2[9];
  param_1[10] = (double)param_2[10];
  param_1[0xb] = (double)param_2[0xb];
  param_1[0xc] = (double)param_2[0xc];
  param_1[0xd] = (double)param_2[0xd];
  param_1[0xe] = (double)param_2[0xe];
  param_1[0xf] = (double)param_2[0xf];
  return param_1;
}



// FUNCTION 144b10fb8 FUN_144b10fb8 body=91 status=ok
// SIG undefined FUN_144b10fb8(void)

void FUN_144b10fb8(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  return;
}



// FUNCTION 144b11014 FUN_144b11014 body=116 status=ok
// SIG undefined FUN_144b11014(void)

uint FUN_144b11014(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  uVar3 = *(ulonglong *)(lVar2 + 0x30);
  if ((uVar3 & 1) != 0) {
    uVar3 = ((longlong)uVar3 >> 0x18) + lVar2 + 0x30;
  }
  iVar1 = *(int *)(lVar2 + 0x28);
  iVar5 = 0;
  if ((longlong)*(int *)(lVar2 + 0x38) != 0) {
    lVar6 = 0;
    iVar5 = 0;
    do {
      iVar5 = iVar5 + (uint)*(ushort *)(uVar3 + 2 + lVar6);
      lVar6 = lVar6 + 0x18;
    } while ((longlong)*(int *)(lVar2 + 0x38) * 0x18 != lVar6);
  }
  iVar4 = iVar1 + 0xe;
  if (-1 < iVar1 + 7) {
    iVar4 = iVar1 + 7;
  }
  return (iVar4 >> 3) + (*(int *)(lVar2 + 0x18) + *(int *)(lVar2 + 8) + iVar1) * 8 + iVar5 + 7U &
         0xfffffff8;
}



// FUNCTION 144b11088 FUN_144b11088 body=147 status=ok
// SIG undefined FUN_144b11088(void)

void FUN_144b11088(longlong *param_1,undefined8 param_2,uint param_3)

{
  ulonglong *puVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar5;
  
  puVar1 = (ulonglong *)*param_1;
  uVar7 = *puVar1;
  uVar3 = ((longlong)uVar7 >> 0x18) + (longlong)puVar1;
  if ((uVar7 & 1) == 0) {
    uVar3 = uVar7;
  }
  uVar5 = (uint)puVar1[1];
  uVar6 = 0;
  uVar8 = uVar5;
  if (8 < (int)uVar5) {
    uVar6 = 0;
    uVar9 = uVar5;
    do {
      uVar8 = uVar9 >> 1;
      if (*(ushort *)(uVar3 + (ulonglong)(uVar8 + uVar6) * 2) < param_3) {
        uVar6 = uVar8 + uVar6 + (uVar9 & 1);
      }
      bVar2 = 0x11 < uVar9;
      uVar9 = uVar8;
    } while (bVar2);
  }
  uVar8 = uVar8 + uVar6 + 1;
  if ((int)uVar8 < (int)uVar5) {
    uVar5 = uVar8;
  }
  iVar4 = uVar5 - uVar6;
  if (iVar4 != 0 && (int)uVar6 <= (int)uVar5) {
    uVar7 = (ulonglong)uVar6;
    do {
      if (*(ushort *)(uVar3 + uVar7 * 2) == param_3) {
        *(undefined8 *)(param_1[1] + (uVar7 & 0xffffffff) * 8) = param_2;
        return;
      }
      uVar7 = uVar7 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 144b1111b FUN_144b1111b body=17 status=ok
// SIG undefined FUN_144b1111b(void)

byte FUN_144b1111b(void)

{
  return DAT_14c760420 != 0 & DAT_14c760e18;
}



// FUNCTION 144b1112c FUN_144b1112c body=233 status=ok
// SIG undefined FUN_144b1112c(void)

void FUN_144b1112c(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
    lVar2 = param_1 + 0x1f0;
    if (*(longlong *)(param_1 + 0x1f8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1f8);
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x200) - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x1b8);
      do {
        lVar3 = (longlong)iVar1;
        if (*(uint *)(lVar2 + lVar3 * 0x18) == param_2) {
          lVar2 = *(longlong *)(lVar2 + 8 + lVar3 * 0x18);
          FUN_1471ceb3a((longlong *)(param_1 + 0x1b8),iVar1);
          if ((((-1 < *(int *)(lVar2 + 0x60)) && (-1 < *(int *)(lVar2 + 100))) &&
              (-1 < *(int *)(lVar2 + 0x68))) && (0 < *(int *)(lVar2 + 0x6c))) {
            local_20 = *(undefined4 *)(lVar2 + 0x68);
            local_28 = *(undefined8 *)(lVar2 + 0x60);
            FUN_1471bacf2(param_1);
          }
          if (lVar2 != 0) {
            FUN_1400020a8(lVar2);
          }
          break;
        }
        iVar1 = *(int *)(lVar2 + lVar3 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b11216 FUN_144b11216 body=194 status=ok
// SIG undefined FUN_144b11216(void)

undefined8 FUN_144b11216(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  undefined4 extraout_var;
  ulonglong uVar9;
  ulonglong uVar10;
  
  lVar4 = DAT_14c9e5330;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar3 + 0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar9 = 0;
  }
  else if (iVar1 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar9 = 1;
  }
  lVar5 = DAT_14c9e5348;
  if (*(int *)(lVar4 + uVar9 * 4) == 0) {
    uVar8 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0xc60);
    uVar9 = (ulonglong)uVar2;
    if (((uVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar2 == 2)) {
      uVar10 = 0;
    }
    else if (uVar2 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = CONCAT44(extraout_var,DVar7);
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    uVar8 = CONCAT71((int7)(uVar9 >> 8),*(int *)(lVar5 + uVar10 * 4) != 0);
  }
  return uVar8;
}



// FUNCTION 144b112d8 FUN_144b112d8 body=284 status=ok
// SIG undefined FUN_144b112d8(void)

void FUN_144b112d8(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pcVar1 = *(code **)(param_1 + 0x60);
  if (pcVar1 != (code *)0x0) {
    plVar8 = (longlong *)(param_1 + 0x80);
    if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 0x70);
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar1)(uVar7,param_1);
  }
  local_a8 = *(longlong *)(param_1 + 0x60);
  uStack_60 = *(undefined8 *)(param_1 + 0x68);
  local_98 = *(longlong **)(param_1 + 0x70);
  uStack_50 = *(undefined8 *)(param_1 + 0x78);
  local_48 = *(undefined8 *)(param_1 + 0x80);
  uStack_40 = *(undefined8 *)(param_1 + 0x88);
  local_38 = *(undefined8 *)(param_1 + 0x90);
  uStack_30 = *(undefined8 *)(param_1 + 0x98);
  uVar5 = local_38;
  uVar6 = uStack_30;
  uVar3 = local_48;
  uVar4 = uStack_40;
  local_58 = local_98;
  uVar2 = uStack_50;
  local_68 = local_a8;
  uVar7 = uStack_60;
  *(ulonglong *)(param_1 + 0x90) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_6c,uStack_70);
  *(ulonglong *)(param_1 + 0x80) = CONCAT44(uStack_84,local_88);
  *(ulonglong *)(param_1 + 0x88) = CONCAT44(uStack_7c,uStack_80);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(ulonglong *)(param_1 + 0x78) = CONCAT44(uStack_8c,uStack_90);
  *(longlong *)(param_1 + 0x60) = 0;
  *(ulonglong *)(param_1 + 0x68) = CONCAT44(uStack_9c,uStack_a0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  local_88 = (undefined4)local_48;
  uStack_84 = local_48._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_60 = uVar7;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  if (local_a8 != 0) {
    plVar8 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar8 = (longlong *)&local_88;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b113f6 FUN_144b113f6 body=187 status=ok
// SIG undefined FUN_144b113f6(void)

longlong FUN_144b113f6(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  uVar2 = *param_2;
  uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar5 = uVar3 & 0x7fffffff ^ uVar3 >> 0x10;
  uVar3 = *(uint *)(param_1 + 0xe);
  uVar6 = uVar5 & uVar3;
  plVar4 = param_1 + 0xb;
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[0xc];
  }
  do {
    if (*(uint *)((longlong)plVar4 + (longlong)(int)uVar6 * 4) == uVar5) {
      plVar7 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar7 = param_1 + 8;
      }
      iVar1 = *(int *)((longlong)plVar7 + (longlong)(int)uVar6 * 4);
      lVar8 = (longlong)iVar1 * 0x10;
      if (uVar2 == *(ulonglong *)(*param_1 + lVar8)) {
        if (iVar1 == -1) {
          return 0;
        }
        return *param_1 + 8 + lVar8;
      }
    }
    uVar6 = uVar6 + 1 & uVar3;
    if (uVar6 == (*(int *)((longlong)param_1 + 0x74) + uVar5 + 1 & uVar3)) {
      return 0;
    }
  } while( true );
}



// FUNCTION 144b114b2 FUN_144b114b2 body=31 status=ok
// SIG undefined FUN_144b114b2(void)

undefined8 FUN_144b114b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b114d2 FUN_144b114d2 body=31 status=ok
// SIG undefined FUN_144b114d2(void)

undefined8 FUN_144b114d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b114f2 FUN_144b114f2 body=31 status=ok
// SIG undefined FUN_144b114f2(void)

undefined8 FUN_144b114f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b11512 FUN_144b11512 body=31 status=ok
// SIG undefined FUN_144b11512(void)

undefined8 FUN_144b11512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b11532 FUN_144b11532 body=31 status=ok
// SIG undefined FUN_144b11532(void)

undefined8 FUN_144b11532(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b11552 FUN_144b11552 body=111 status=ok
// SIG undefined FUN_144b11552(void)

void * FUN_144b11552(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c8) = 0x3f80000000000000;
  memset(param_1,0,0x2b0);
  *(undefined8 *)((longlong)param_1 + 0x278) = DAT_14c9c0d80;
  *(undefined8 *)((longlong)param_1 + 0x280) = *(undefined8 *)(DAT_14ca94dc8 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x288) = DAT_14c9c0de0;
  return param_1;
}



// FUNCTION 144b115c2 FUN_144b115c2 body=208 status=ok
// SIG undefined FUN_144b115c2(void)

void FUN_144b115c2(longlong param_1,longlong *param_2,short *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar2 + 0x28);
    if (*(longlong *)(lVar2 + 0x20) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x50);
      goto LAB_144b115dd;
    }
  }
  lVar2 = 0;
LAB_144b115dd:
  if (lVar1 == 0) {
    lVar1 = DAT_14c9e9108;
  }
  if (lVar2 == 0) {
    lVar2 = DAT_14cb05400;
  }
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x218) == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0xc0);
  }
  if (lVar3 == 0) {
    lVar3 = DAT_14c9e9130;
  }
  if (*param_3 != -1) {
    FUN_144b11088(param_4,lVar1);
  }
  if (param_3[1] != -1) {
    FUN_144b11088(param_4,lVar3);
  }
  if (param_3[2] == -1) {
    return;
  }
  FUN_144b11088(param_4,lVar2);
  return;
}



// FUNCTION 144b11692 FUN_144b11692 body=1129 status=ok
// SIG undefined FUN_144b11692(void)

void FUN_144b11692(int param_1,float *param_2,longlong param_3,double *param_4,undefined4 *param_5,
                  undefined4 param_6,longlong *param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_7 != (longlong *)0x0) {
    cVar8 = FUN_144b15d32(param_7);
    if (cVar8 != '\0') {
      uVar9 = FUN_1448eb174(param_5,0x18,0);
      iVar10 = FUN_1471da9f2(param_7,uVar9,param_5);
      if (iVar10 == -1) {
LAB_144b11aaa:
        local_50 = param_5;
        FUN_1471daa7e(param_7,&local_44);
        lVar13 = *param_7 + (longlong)local_44 * 0xd0 + 0x20;
        local_68 = *param_5;
        uStack_64 = param_5[1];
        uStack_60 = param_5[2];
        uStack_5c = param_5[3];
        local_58 = *(undefined8 *)(param_5 + 4);
        FUN_142ce7256(&local_68,param_7,lVar13);
      }
      else {
        if (*param_7 + (longlong)iVar10 * 0xd0 == 0) goto LAB_144b11aaa;
        lVar13 = *param_7 + (longlong)iVar10 * 0xd0 + 0x20;
      }
      *(undefined4 *)(lVar13 + 0x94) = param_6;
      uVar11 = *(undefined8 *)(lVar13 + 0x88);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar13 + 0x80);
      *(undefined8 *)(param_2 + 0x12) = uVar11;
      param_2[0x14] = *(float *)(lVar13 + 0x90);
      lVar12 = -0x30;
      do {
        puVar1 = (undefined8 *)(lVar13 + 0x30 + lVar12);
        uVar11 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)param_2 + lVar12 + 0x90);
        *puVar2 = *puVar1;
        puVar2[1] = uVar11;
        puVar1 = (undefined8 *)(lVar13 + 0x60 + lVar12);
        uVar11 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)param_2 + lVar12 + 0xc0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar11;
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != 0);
      uVar11 = *(undefined8 *)(lVar13 + 0x68);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(lVar13 + 0x60);
      *(undefined8 *)(param_2 + 0x32) = uVar11;
      fVar3 = *(float *)(lVar13 + 0x74);
      fVar4 = *(float *)(lVar13 + 0x78);
      fVar7 = *(float *)(lVar13 + 0x7c);
      param_2[0x34] = *(float *)(lVar13 + 0x70);
      param_2[0x35] = fVar3;
      param_2[0x36] = fVar4;
      param_2[0x37] = fVar7;
      param_2[2] = DAT_14c846338;
      *(undefined8 *)param_2 = DAT_14c846330;
      param_2[6] = DAT_14c846358;
      *(undefined8 *)(param_2 + 4) = DAT_14c846350;
      *(undefined8 *)(param_2 + 8) = DAT_14c846330;
      param_2[10] = DAT_14c846338;
      *(undefined8 *)(param_2 + 0xc) = DAT_14c846350;
      param_2[0xe] = DAT_14c846358;
      goto LAB_144b1176a;
    }
  }
  if (param_4 == (double *)0x0) {
    param_2[2] = DAT_14c846338;
    *(undefined8 *)param_2 = DAT_14c846330;
    param_2[6] = DAT_14c846358;
    *(undefined8 *)(param_2 + 4) = DAT_14c846350;
    *(undefined8 *)(param_2 + 8) = DAT_14c846330;
    param_2[10] = DAT_14c846338;
    *(undefined8 *)(param_2 + 0xc) = DAT_14c846350;
    param_2[0xe] = DAT_14c846358;
    param_2[0x10] = 0.0;
    param_2[0x11] = 0.0;
    *(undefined1 **)(param_2 + 0x12) = &DAT_3f8000003f800000;
    param_2[0x14] = 1.0;
    param_2[0x18] = 0.0;
    param_2[0x19] = 0.0;
    param_2[0x1a] = 0.0;
    param_2[0x1b] = 0.0;
    param_2[0x1c] = 0.0;
    param_2[0x1d] = 0.0;
    param_2[0x1e] = 0.0;
    param_2[0x1f] = 0.0;
    param_2[0x20] = 0.0;
    param_2[0x21] = 0.0;
    param_2[0x22] = 0.0;
    param_2[0x23] = 0.0;
    param_2[0x24] = 0.0;
    param_2[0x25] = 0.0;
    param_2[0x26] = 0.0;
    param_2[0x27] = 0.0;
    param_2[0x28] = 0.0;
    param_2[0x29] = 0.0;
    param_2[0x2a] = 0.0;
    param_2[0x2b] = 0.0;
    param_2[0x2c] = 0.0;
    param_2[0x2d] = 0.0;
    param_2[0x2e] = 0.0;
    param_2[0x2f] = 0.0;
    param_2[0x30] = 0.0;
    param_2[0x31] = 0.0;
    param_2[0x32] = 0.0;
    param_2[0x33] = 0.0;
    param_2[0x34] = 0.0;
    param_2[0x35] = 0.0;
    param_2[0x36] = 0.0;
    param_2[0x37] = 0.0;
  }
  else {
    dVar5 = param_4[2];
    dVar6 = param_4[1];
    *param_2 = (float)*param_4;
    param_2[1] = (float)dVar6;
    param_2[2] = (float)dVar5;
    dVar5 = param_4[5];
    dVar6 = param_4[4];
    param_2[4] = (float)param_4[3];
    param_2[5] = (float)dVar6;
    param_2[6] = (float)dVar5;
    dVar5 = param_4[8];
    dVar6 = param_4[7];
    param_2[8] = (float)param_4[6];
    param_2[9] = (float)dVar6;
    param_2[10] = (float)dVar5;
    dVar5 = param_4[0xb];
    dVar6 = param_4[10];
    param_2[0xc] = (float)param_4[9];
    param_2[0xd] = (float)dVar6;
    param_2[0xe] = (float)dVar5;
    dVar5 = param_4[0x39];
    *(double *)(param_2 + 0x10) = param_4[0x38];
    *(double *)(param_2 + 0x12) = dVar5;
    param_2[0x14] = *(float *)(param_4 + 0x36);
    lVar13 = -0x30;
    do {
      puVar1 = (undefined8 *)((longlong)param_4 + lVar13 + 0x170);
      uVar11 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)param_2 + lVar13 + 0x90);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      puVar1 = (undefined8 *)((longlong)param_4 + lVar13 + 0x1a0);
      uVar11 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)param_2 + lVar13 + 0xc0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != 0);
    dVar5 = param_4[0x35];
    *(double *)(param_2 + 0x30) = param_4[0x34];
    *(double *)(param_2 + 0x32) = dVar5;
    fVar3 = *(float *)(param_4 + 0x2c);
    fVar4 = *(float *)(param_4 + 0x2a);
    param_2[0x34] = *(float *)(param_4 + 0x28) * 0.28209478;
    param_2[0x35] = fVar4 * 0.28209478;
    param_2[0x36] = fVar3 * 0.28209478;
    param_2[0x37] = 0.28209478;
  }
LAB_144b1176a:
  lVar13 = DAT_14ca94db8;
  if (((param_3 == 0 || param_1 < 3) || (*(int *)(param_3 + 8) == -1)) || (DAT_14ca84e15 != '\x01'))
  {
    uVar11 = *(undefined8 *)(DAT_14ca94db8 + 0x10);
    *(undefined8 *)(param_2 + 0x38) = uVar11;
    *(undefined8 *)(param_2 + 0x3a) = uVar11;
    *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(lVar13 + 0x10);
    uVar11 = *(undefined8 *)(lVar13 + 0x18);
    *(undefined8 *)(param_2 + 0x3e) = uVar11;
    *(undefined8 *)(param_2 + 0x40) = uVar11;
    uVar11 = *(undefined8 *)(lVar13 + 0x18);
  }
  else {
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(*(longlong *)(param_3 + 0x18) + 8);
    *(undefined8 *)(param_2 + 0x3a) = *(undefined8 *)(*(longlong *)(param_3 + 0x20) + 8);
    *(undefined8 *)(param_2 + 0x3c) = *(undefined8 *)(*(longlong *)(param_3 + 0x28) + 8);
    uVar11 = DAT_14c9c0de0;
    *(undefined8 *)(param_2 + 0x3e) = DAT_14c9c0de0;
    *(undefined8 *)(param_2 + 0x40) = uVar11;
  }
  *(undefined8 *)(param_2 + 0x42) = uVar11;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b11afc FUN_144b11afc body=1441 status=ok
// SIG undefined FUN_144b11afc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144b11afc(float *param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar12;
  double dVar13;
  double dVar15;
  double dVar16;
  double dVar18;
  double dVar19;
  double dVar21;
  double dVar22;
  double dVar24;
  double dVar25;
  char cVar27;
  longlong *plVar28;
  code *pcVar29;
  double dVar30;
  float fVar31;
  undefined8 uVar32;
  double *pdVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_118 [40];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  double dVar6;
  double dVar8;
  double dVar11;
  double dVar14;
  double dVar17;
  double dVar20;
  double dVar23;
  double dVar26;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 1.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 1.0;
  plVar28 = *(longlong **)(param_3 + 0x28);
  cVar27 = (char)plVar28[0x3d];
  if (cVar27 == '\x02') {
    dVar30 = *(double *)(param_2 + 0x1030);
    dVar1 = *(double *)(param_2 + 0x1038);
    dVar2 = *(double *)(param_2 + 0x1040);
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    dVar3 = (double)plVar28[0x1a];
    dVar4 = (double)plVar28[0x1c];
    dVar5 = (double)plVar28[0x1b];
    dVar6 = (double)plVar28[0x1b];
    dVar7 = (double)plVar28[0x1d];
    dVar8 = (double)plVar28[0x1d];
    dVar9 = (double)plVar28[0x1e];
    dVar10 = (double)plVar28[0x1f];
    dVar11 = (double)plVar28[0x1f];
    dVar12 = (double)plVar28[0x20];
    dVar13 = (double)plVar28[0x21];
    dVar14 = (double)plVar28[0x21];
    dVar15 = (double)plVar28[0x22];
    dVar16 = (double)plVar28[0x23];
    dVar17 = (double)plVar28[0x23];
    dVar18 = (double)plVar28[0x24];
    dVar19 = (double)plVar28[0x25];
    dVar20 = (double)plVar28[0x25];
    dVar21 = (double)plVar28[0x26];
    dVar22 = (double)plVar28[0x27];
    dVar23 = (double)plVar28[0x27];
    dVar24 = (double)plVar28[0x28];
    dVar25 = (double)plVar28[0x29];
    dVar26 = (double)plVar28[0x29];
    param_1[8] = (float)(dVar30 * dVar7 + dVar4 * 0.0 + dVar5 * 0.0 + dVar3 * 1.0);
    param_1[9] = (float)(dVar1 * dVar8 + dVar4 * 0.0 + dVar6 * 1.0 + dVar3 * 0.0);
    param_1[10] = (float)(dVar7 * dVar2 + dVar4 * 1.0 + dVar5 * 0.0 + dVar3 * 0.0);
    param_1[0xb] = (float)(dVar8 * 1.0 + dVar4 * 0.0 + dVar6 * 0.0 + dVar3 * 0.0);
    param_1[0xc] = (float)(dVar30 * dVar13 + dVar12 * 0.0 + dVar10 * 0.0 + dVar9 * 1.0);
    param_1[0xd] = (float)(dVar1 * dVar14 + dVar12 * 0.0 + dVar11 * 1.0 + dVar9 * 0.0);
    param_1[0xe] = (float)(dVar13 * dVar2 + dVar12 * 1.0 + dVar10 * 0.0 + dVar9 * 0.0);
    param_1[0xf] = (float)(dVar14 * 1.0 + dVar12 * 0.0 + dVar11 * 0.0 + dVar9 * 0.0);
    param_1[0x10] = (float)(dVar30 * dVar19 + dVar18 * 0.0 + dVar16 * 0.0 + dVar15 * 1.0);
    param_1[0x11] = (float)(dVar1 * dVar20 + dVar18 * 0.0 + dVar17 * 1.0 + dVar15 * 0.0);
    param_1[0x12] = (float)(dVar19 * dVar2 + dVar18 * 1.0 + dVar16 * 0.0 + dVar15 * 0.0);
    param_1[0x13] = (float)(dVar20 * 1.0 + dVar18 * 0.0 + dVar17 * 0.0 + dVar15 * 0.0);
    param_1[0x14] = (float)(dVar30 * dVar25 + dVar24 * 0.0 + dVar22 * 0.0 + dVar21 * 1.0);
    param_1[0x15] = (float)(dVar1 * dVar26 + dVar24 * 0.0 + dVar23 * 1.0 + dVar21 * 0.0);
    param_1[0x16] = (float)(dVar2 * dVar25 + dVar24 * 1.0 + dVar22 * 0.0 + dVar21 * 0.0);
    param_1[0x17] = (float)(dVar26 * 1.0 + dVar24 * 0.0 + dVar23 * 0.0 + dVar21 * 0.0);
    if (*(code **)(*plVar28 + 0x18) == (code *)&LAB_144774e28) {
      fVar34 = *(float *)(plVar28 + 0x53);
    }
    else {
      fVar34 = (float)(**(code **)(*plVar28 + 0x18))(plVar28);
    }
    pcVar29 = *(code **)(**(longlong **)(param_3 + 0x28) + 0x20);
    if (pcVar29 == (code *)&LAB_1449e3c16) {
      fVar35 = *(float *)(*(longlong **)(param_3 + 0x28) + 0x59);
    }
    else {
      fVar35 = (float)(*pcVar29)();
    }
    param_1[4] = 18.0;
    param_1[5] = 12.0;
    param_1[6] = fVar35;
    param_1[7] = fVar34;
  }
  else if ((cVar27 == '\x03') || (cVar27 == '\x01')) {
    pcVar29 = *(code **)(*plVar28 + 0x10);
    if (pcVar29 == FUN_14499f08a) {
      pcVar29 = *(code **)(*plVar28 + 0x18);
      if (pcVar29 == (code *)&LAB_144774e28) {
        fVar34 = *(float *)(plVar28 + 0x53);
      }
      else {
        fVar34 = (float)(*pcVar29)(plVar28);
      }
      pdVar33 = (double *)(plVar28 + 4);
      local_e8 = (double)plVar28[5];
      local_e0 = (double)plVar28[6];
    }
    else {
      pdVar33 = &local_f0;
      (*pcVar29)(plVar28,pdVar33);
      fVar34 = (float)local_d8;
    }
    dVar1 = *(double *)(param_2 + 0x1040);
    dVar2 = *(double *)(param_2 + 0x1038);
    *param_1 = (float)(*pdVar33 + *(double *)(param_2 + 0x1030));
    param_1[1] = (float)(local_e8 + dVar2);
    param_1[2] = (float)(local_e0 + dVar1);
    param_1[3] = fVar34 / 0.9659258;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    uVar32 = _DAT_14c846288;
    param_1[7] = 0.0;
    *(undefined8 *)(param_1 + 0x14) = _DAT_14c846280;
    *(undefined8 *)(param_1 + 0x16) = uVar32;
    uVar32 = _DAT_14c846278;
    *(undefined8 *)(param_1 + 0x10) = _DAT_14c846270;
    *(undefined8 *)(param_1 + 0x12) = uVar32;
    uVar32 = _DAT_14c846268;
    *(undefined8 *)(param_1 + 0xc) = _DAT_14c846260;
    *(undefined8 *)(param_1 + 0xe) = uVar32;
    fVar31 = DAT_14c846258._4_4_;
    fVar35 = (float)DAT_14c846258;
    fVar34 = DAT_14c846254;
    param_1[8] = DAT_14c846250;
    param_1[9] = fVar34;
    param_1[10] = fVar35;
    param_1[0xb] = fVar31;
  }
  if ((local_d0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b1209e FUN_144b1209e body=1799 status=ok
// SIG undefined FUN_144b1209e(void)

undefined8 FUN_144b1209e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  longlong *plVar12;
  int *piVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  bool bVar21;
  bool bVar22;
  
  puVar20 = (undefined1 *)**(undefined8 **)(param_2 + 8);
  uVar15 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(puVar20 + 0x3090) * 2);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar12 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
    if (plVar12 == (longlong *)0x0) {
      DAT_14ca97068 = 0;
    }
    else {
      DAT_14ca97068 = (**(code **)(*plVar12 + 0x68))(plVar12);
    }
    _Init_thread_footer(&DAT_14ca97070);
  }
  lVar3 = DAT_14ca97068;
  bVar22 = true;
  cVar8 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar16 = 0;
      cVar8 = '\x02';
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar16 = (ulonglong)(bVar4 ^ 1);
      cVar8 = DAT_14ca96da8;
    }
    bVar22 = *(int *)(lVar3 + uVar16 * 4) != 0;
  }
  uVar16 = 0;
  if ((bVar22) && (cVar8 != '\0')) {
    if (((*(byte *)((longlong)&DAT_14ca814c8 + uVar15 * 0x3c + 2) & 0x40) == 0) ||
       ((((uVar15 != 0x30 && ((int)(&DAT_14ca814b8)[uVar15 * 0xf] < 4)) ||
         (puVar20[0x3098] != '\x01')) ||
        ((puVar20[0x23e8] == '\x01' && (puVar20[0x23ea] != '\x01')))))) {
      uVar16 = 0;
    }
    else {
      uVar10 = FUN_142bc01ba(&DAT_14ca81401,3);
      uVar16 = (ulonglong)uVar10;
    }
  }
  if (*(char *)(param_1 + 0x1d2) == '\x02') {
LAB_144b12746:
    bVar22 = true;
    if ((ulonglong)*(byte *)(param_1 + 0x1e8) < 4) {
      bVar22 = *(int *)(*(longlong *)(&PTR_DAT_14a249150)[*(byte *)(param_1 + 0x1e8)] + 4) != 0;
    }
    uVar19 = CONCAT71((int7)(uVar16 >> 8),(byte)uVar16 & bVar22);
  }
  else {
    if (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) == (longlong *)0x0) {
      bVar4 = 0;
    }
    else {
      bVar4 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))();
    }
    lVar3 = DAT_14cae3fc8;
    if (DAT_14cae3fd0 < 1) {
LAB_144b122fe:
      bVar22 = false;
    }
    else {
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar9 = *(int *)(lVar2 + 0xc60);
      if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != 1)) || (iVar9 == 2)) {
        uVar15 = 0;
      }
      else if (iVar9 == 1) {
        uVar10 = FUN_140ad26c0();
        puVar20 = (undefined1 *)(ulonglong)uVar10;
        DVar11 = GetCurrentThreadId();
        uVar15 = (ulonglong)(uVar10 != DVar11);
      }
      else {
        uVar15 = 1;
      }
      piVar13 = DAT_14c9d2390;
      if (*(int *)(lVar3 + uVar15 * 4) < 1) goto LAB_144b122fe;
      piVar1 = (int *)(lVar2 + 0xc60);
      iVar9 = *piVar1;
      if (iVar9 == 0x40000002) {
        iVar18 = *DAT_14c9d2390;
      }
      else {
        if (DAT_14c86a9f8 == 0) {
          iVar18 = *DAT_14c9d2390;
        }
        else if (iVar9 == 2) {
          iVar18 = *DAT_14c9d2390;
          iVar9 = 2;
        }
        else {
          uVar15 = 1;
          if (iVar9 == 1) {
            uVar10 = FUN_140ad26c0();
            puVar20 = (undefined1 *)(ulonglong)uVar10;
            DVar11 = GetCurrentThreadId();
            uVar15 = (ulonglong)(uVar10 != DVar11);
            iVar9 = *piVar1;
          }
          iVar18 = piVar13[uVar15];
          if (iVar9 == 0x40000002) goto LAB_144b12237;
        }
        if ((DAT_14c86a9f8 & 1) == 0) {
LAB_144b12229:
          if ((iVar9 == 1) && ((DAT_14c86a9f8 & 1) != 0)) {
            FUN_140ad26c0();
            GetCurrentThreadId();
            puVar20 = &DAT_14ca84d88;
          }
        }
        else if (iVar9 != 2) {
          if (iVar9 == 1) {
            FUN_140ad26c0();
            GetCurrentThreadId();
            iVar9 = *piVar1;
            puVar20 = &DAT_14ca84d88;
          }
          if (iVar9 != 0x40000002) goto LAB_144b12229;
        }
      }
LAB_144b12237:
      bVar22 = 0 < iVar18;
    }
    iVar9 = *(int *)(DAT_14c9e93c8 + 4);
    lVar3 = **(longlong **)(param_2 + 8);
    uVar15 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar3 + 0x3090) * 2);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar12 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar12 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar12 + 0x68))(plVar12);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
    lVar2 = DAT_14ca97068;
    bVar21 = true;
    cVar8 = DAT_14ca96da8;
    if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar17 = 0;
        cVar8 = '\x02';
      }
      else {
        bVar7 = FUN_144a61b4f();
        uVar17 = (ulonglong)(bVar7 ^ 1);
        cVar8 = DAT_14ca96da8;
      }
      bVar21 = *(int *)(lVar2 + uVar17 * 4) != 0;
    }
    uVar19 = 0;
    if ((!bVar21) || (cVar8 == '\0')) goto LAB_144b122bb;
    if ((((*(byte *)((longlong)&DAT_14ca814c8 + uVar15 * 0x3c + 2) & 0x40) != 0) &&
        (((uVar15 == 0x30 || (3 < (int)(&DAT_14ca814b8)[uVar15 * 0xf])) &&
         (*(char *)(lVar3 + 0x3098) == '\x01')))) &&
       ((*(char *)(lVar3 + 0x23e8) != '\x01' || (*(char *)(lVar3 + 0x23ea) == '\x01')))) {
      cVar8 = FUN_142bc01ba(CONCAT71((int7)((ulonglong)puVar20 >> 8),
                                     0 < iVar9 & (bVar4 & bVar22 ^ 1)) & 0xffffffff,3);
      uVar19 = 0;
      if (cVar8 != '\0') {
        if (*(char *)(param_1 + 0x1d2) != '\x01') goto LAB_144b122bb;
        goto LAB_144b12746;
      }
    }
    uVar19 = 0;
  }
LAB_144b122bb:
  if (((*(char *)(param_1 + 0x1e8) != '\0') &&
      ((*(byte *)(**(longlong **)(param_2 + 8) + 0x2954) & 1) != 0)) &&
     ((*(int *)(DAT_14ca046e8 + 4) != 0 && (*(int *)(param_2 + 0x4c) < 0)))) {
    piVar13 = &DAT_14c760db4;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      piVar13 = (int *)(*(longlong *)(param_2 + 0x40) + 8);
    }
    if ((3 < (int)(&DAT_14ca814b8)
                  [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar13 * 2) * 0xf]) &&
       (((&DAT_14ca814cd)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar13 * 2) * 0x3c] &
        3) != 0)) {
      bVar4 = *(byte *)(param_1 + 0x1d4);
      cVar8 = *(char *)(param_1 + 0x1d5);
      cVar5 = FUN_1472390ef(param_2);
      cVar6 = '\x01';
      if (cVar5 == '\0') {
        cVar6 = FUN_1472390cb(param_2);
      }
      if (cVar6 == '\x01' && (bVar4 & 2) != 0) {
        bVar22 = cVar8 == '\x02';
        if (cVar8 == '\0') {
          bVar22 = DAT_14ca04a20 == 1;
        }
        if (bVar22) {
          return 3;
        }
        lVar3 = **(longlong **)(param_2 + 8);
        if (*(char *)(lVar3 + 0x3098) == '\x01') {
          uVar14 = CONCAT71((int7)((ulonglong)*(longlong **)(param_2 + 8) >> 8),2);
          if (*(char *)(lVar3 + 0x23e8) != '\x01') {
            return uVar14;
          }
          if (*(char *)(lVar3 + 0x23ea) != '\0') {
            return uVar14;
          }
        }
      }
    }
  }
  return uVar19;
}



// FUNCTION 144b127a6 FUN_144b127a6 body=31 status=ok
// SIG undefined FUN_144b127a6(void)

undefined8 FUN_144b127a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b127c6 FUN_144b127c6 body=31 status=ok
// SIG undefined FUN_144b127c6(void)

undefined8 FUN_144b127c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b127e6 FUN_144b127e6 body=280 status=ok
// SIG undefined FUN_144b127e6(void)

void FUN_144b127e6(longlong *param_1,short *param_2,void *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int iVar7;
  void *_Dst;
  ulonglong uVar8;
  
  uVar1 = param_2[2];
  if (uVar1 != 0) {
    lVar3 = *param_1;
    uVar8 = *(ulonglong *)(lVar3 + 0x30);
    uVar5 = lVar3 + 0x30 + ((longlong)uVar8 >> 0x18);
    if ((uVar8 & 1) == 0) {
      uVar5 = uVar8;
    }
    uVar8 = (ulonglong)*(uint *)(lVar3 + 0x38);
    if (0 < (int)*(uint *)(lVar3 + 0x38)) {
      iVar2 = *(int *)(lVar3 + 0x28);
      iVar7 = iVar2 + 0xe;
      if (-1 < iVar2 + 7) {
        iVar7 = iVar2 + 7;
      }
      _Dst = (void *)((ulonglong)
                      (uint)((iVar7 >> 3) +
                            (*(int *)(lVar3 + 8) + *(int *)(lVar3 + 0x18) + iVar2) * 8) + param_1[1]
                     );
      puVar6 = (ulonglong *)(uVar5 + 8);
      do {
        if (*param_2 == (short)puVar6[-1]) {
          uVar8 = *puVar6;
          uVar5 = ((longlong)uVar8 >> 0x18) + (longlong)puVar6;
          if ((uVar8 & 1) == 0) {
            uVar5 = uVar8;
          }
          if ((int)(uint)puVar6[1] < 1) {
            return;
          }
          uVar8 = 0;
          do {
            if (param_2[1] == *(short *)(uVar5 + uVar8 * 4)) {
              uVar4 = 0x10;
              if (uVar1 < 0x10) {
                uVar4 = uVar1;
              }
              memcpy(_Dst,param_3,(ulonglong)uVar4);
              memset((void *)((longlong)_Dst + (ulonglong)uVar4),0,
                     (longlong)
                     (int)((int)((uint)(ushort)param_2[2] - (uint)uVar4) >> 0x1f &
                          (uint)(ushort)param_2[2] - (uint)uVar4));
              return;
            }
            _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)(uVar5 + 2 + uVar8 * 4));
            uVar8 = uVar8 + 1;
          } while ((uint)puVar6[1] != uVar8);
          return;
        }
        _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)((longlong)puVar6 + -6));
        puVar6 = puVar6 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



// FUNCTION 144b128fe FUN_144b128fe body=782 status=ok
// SIG undefined FUN_144b128fe(void)

void FUN_144b128fe(double *param_1,double param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[6] = param_2;
  plVar2 = *(longlong **)((longlong)param_2 + 0x28);
  pcVar3 = *(code **)(*plVar2 + 0x10);
  if (pcVar3 == FUN_14499f0dc) {
    local_98 = (double)*(float *)(plVar2 + 0x5a);
    dVar5 = (double)*(float *)(plVar2 + 0x53);
    if (0.70710677 <= *(float *)(plVar2 + 0x5a)) {
      local_80 = dVar5 / (local_98 + local_98);
      local_88 = (double)plVar2[0x12] * local_80;
      dStack_90 = (double)plVar2[0xe] * local_80;
      local_98 = (double)plVar2[10] * local_80;
    }
    else {
      local_80 = (double)*(float *)(plVar2 + 0x5b) * dVar5;
      local_88 = (double)plVar2[0x12] * dVar5 * local_98;
      dStack_90 = (double)plVar2[0xe] * dVar5 * local_98;
      local_98 = (double)plVar2[10] * dVar5 * local_98;
    }
    local_98 = (double)plVar2[0x26] + local_98;
    dStack_90 = (double)plVar2[0x27] + dStack_90;
    local_88 = (double)plVar2[0x28] + local_88;
  }
  else if (pcVar3 == FUN_14499f08a) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    if (pcVar3 == (code *)&LAB_144774e28) {
      fVar12 = *(float *)(plVar2 + 0x53);
    }
    else {
      fVar12 = (float)(*pcVar3)(plVar2);
    }
    local_80 = (double)fVar12;
    local_98 = (double)plVar2[4];
    dStack_90 = (double)plVar2[5];
    local_88 = (double)plVar2[6];
  }
  else if (pcVar3 == (code *)&LAB_144b24b1c) {
    local_88 = DAT_14c8464f0;
    local_98 = DAT_14c8464e0;
    dStack_90 = DAT_14c8464e8;
    local_80 = 2097152.0;
  }
  else {
    (*pcVar3)(plVar2,&local_98);
  }
  local_80 = (double)(~-(ulonglong)(0.0 < local_80) & 0x47efffffe0000000 |
                     (ulonglong)local_80 & -(ulonglong)(0.0 < local_80));
  *param_1 = local_98;
  param_1[1] = dStack_90;
  param_1[2] = local_88;
  param_1[3] = local_80;
  lVar4 = *(longlong *)((longlong)param_2 + 0x28);
  uVar6 = *(undefined4 *)(lVar4 + 0x44);
  uVar7 = *(undefined4 *)(lVar4 + 0x48);
  uVar8 = *(undefined4 *)(lVar4 + 0x4c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar4 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 5) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
  uVar1 = *(uint *)(param_1 + 7);
  uVar9 = *(byte *)(*(longlong *)((longlong)param_2 + 0x28) + 0x1e8) & 3;
  *(uint *)(param_1 + 7) = uVar1 & 0xfffffffc | uVar9;
  uVar10 = *(uint *)(*(longlong *)((longlong)param_2 + 0x28) + 0x1d0) >> 2 & 4;
  *(uint *)(param_1 + 7) = uVar1 & 0xfffffff8 | uVar9 | uVar10;
  uVar11 = *(uint *)(*(longlong *)((longlong)param_2 + 0x28) + 0x1d0) >> 2 & 8;
  *(uint *)(param_1 + 7) = uVar1 & 0xfffffff0 | uVar9 | uVar10 | uVar11;
  uVar1 = (uVar1 & 0xffffffe0 | uVar9 | uVar10 | uVar11) +
          (*(uint *)(*(longlong *)((longlong)param_2 + 0x28) + 0x1d0) & 4) * 4;
  *(uint *)(param_1 + 7) = uVar1;
  uVar9 = (*(byte *)(*(longlong *)((longlong)param_2 + 0x28) + 0x1d3) & 1) << 5;
  *(uint *)(param_1 + 7) = uVar1 & 0xffffffdf | uVar9;
  uVar10 = (*(byte *)(*(longlong *)((longlong)param_2 + 0x28) + 0x1d3) & 2) << 5;
  *(uint *)(param_1 + 7) = uVar1 & 0xffffff9f | uVar9 | uVar10;
  uVar11 = (*(uint *)(*(longlong *)((longlong)param_2 + 0x28) + 0x1d0) & 2) << 6;
  *(uint *)(param_1 + 7) = uVar1 & 0xffffff1f | uVar9 | uVar10 | uVar11;
  *(undefined1 *)((longlong)param_1 + 0x3d) =
       *(undefined1 *)(*(longlong *)((longlong)param_2 + 0x28) + 0x1d2);
  *(uint *)(param_1 + 7) =
       uVar1 & 0xfffffe1f | uVar9 | uVar10 | uVar11 |
       (*(byte *)(*(longlong *)((longlong)param_2 + 0x28) + 0x1d4) & 2) << 7;
  *(undefined1 *)((longlong)param_1 + 0x3c) =
       *(undefined1 *)(*(longlong *)((longlong)param_2 + 0x28) + 0x1d5);
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b12c0e FUN_144b12c0e body=105 status=ok
// SIG undefined FUN_144b12c0e(void)

ulonglong FUN_144b12c0e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (((1e-05 <= *(float *)(lVar1 + 0x40) * *(float *)(lVar1 + 0x40)) ||
      (1e-05 <= *(float *)(lVar1 + 0x44) * *(float *)(lVar1 + 0x44))) ||
     (1e-05 <= *(float *)(lVar1 + 0x48) * *(float *)(lVar1 + 0x48))) {
    if ((*(byte *)(lVar1 + 0x1d0) & 4) == 0) {
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
    if (((*(byte *)(param_1 + 0xe4) & 1) == 0) || (DAT_14c760480 <= *(int *)(param_1 + 0xf8))) {
      uVar2 = CONCAT31((int3)((uint)param_2 >> 8),*(byte *)(lVar1 + 0x1d0)) & 0xffffff08;
      return (ulonglong)CONCAT31((int3)(uVar2 >> 8),(byte)uVar2 >> 3);
    }
  }
  return 0;
}



// FUNCTION 144b12c78 FUN_144b12c78 body=42 status=ok
// SIG undefined FUN_144b12c78(void)

bool FUN_144b12c78(longlong param_1)

{
  bool bVar1;
  
  if (((*(byte *)(param_1 + 0xe4) & 1) == 0) ||
     (bVar1 = true, DAT_14c760480 <= *(int *)(param_1 + 0xf8))) {
    bVar1 = (*(byte *)(*(longlong *)(param_1 + 0x28) + 0x1d0) & 8) == 0;
  }
  return bVar1;
}



// FUNCTION 144b12ca2 FUN_144b12ca2 body=129 status=ok
// SIG undefined FUN_144b12ca2(void)

undefined8 FUN_144b12ca2(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 extraout_var;
  ulonglong uVar7;
  
  lVar2 = DAT_14c9eccf0;
  uVar6 = 0;
  if ((DAT_14ca84f10 == '\x01') && (DAT_14ca84f14 < 0x21)) {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar5 = (ulonglong)uVar1;
    if ((uVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (uVar1 == 2)))) {
      uVar7 = 0;
    }
    else if (uVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = CONCAT44(extraout_var,DVar4);
      uVar7 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar7 = 1;
    }
    uVar6 = CONCAT71((int7)(uVar5 >> 8),*(int *)(lVar2 + uVar7 * 4) != 0);
  }
  return uVar6;
}



// FUNCTION 144b12d23 FUN_144b12d23 body=427 status=ok
// SIG undefined FUN_144b12d23(void)

void FUN_144b12d23(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar9 = param_3;
  puVar10 = param_4;
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) | -(uint)(DAT_14c9f1f10 != 0);
  param_4[10] = 0;
  param_4[0xb] = 0;
  param_4[0xc] = 0;
  param_4[0xd] = 0;
  param_4[0xe] = 0;
  param_4[0xf] = 0;
  *(undefined4 *)(param_4 + 0x2b) = DAT_14c9ee460;
  *(undefined4 *)((longlong)param_4 + 0x15c) = DAT_14c9ee478;
  uVar2 = *(uint *)(param_3 + 3);
  iVar7 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  uVar11 = ~(-1 << ((byte)iVar7 & 0x1f));
  if (uVar2 == 0) {
    uVar11 = 0;
  }
  *(uint *)(param_4 + 0x2c) = uVar11;
  uVar2 = *(uint *)(param_3 + 3);
  iVar7 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  if (uVar2 == 0) {
    iVar7 = 0;
  }
  *(int *)((longlong)param_4 + 0x164) = iVar7;
  if (0 < (int)param_2[1]) {
    puVar6 = (undefined4 *)((longlong)param_4 + 0xec);
    lVar8 = 0x1c;
    lVar12 = 0;
    do {
      lVar3 = *param_2;
      puVar6[-0x1b] = *(undefined4 *)(lVar3 + 0xc + lVar8);
      uVar1 = *(undefined4 *)(lVar3 + 8 + lVar8);
      *(undefined8 *)(puVar6 + -3) = *(undefined8 *)(lVar3 + lVar8);
      puVar6[-1] = uVar1;
      *puVar6 = *(undefined4 *)(lVar3 + 0x2c + lVar8);
      lVar12 = lVar12 + 1;
      puVar6 = puVar6 + 4;
      lVar8 = lVar8 + 0x50;
    } while (lVar12 < (int)param_2[1]);
  }
  fVar5 = DAT_14c8461b4._4_4_;
  fVar4 = (float)DAT_14c8461b4;
  fVar13 = (float)(int)param_3[3];
  fVar14 = (float)(int)((ulonglong)param_3[3] >> 0x20);
  fVar15 = DAT_14c8461b4._4_4_ / ((float)*(uint *)((longlong)param_3 + 0x2c) * fVar14);
  *(float *)(param_4 + 0x28) =
       (float)DAT_14c8461b4 / (fVar13 * (float)*(uint *)((longlong)param_3 + 0x2c));
  *(float *)((longlong)param_4 + 0x144) = fVar15;
  fVar15 = (float)((2 << (*(byte *)(param_3 + 6) & 0x1f)) + *(int *)(param_3 + 7));
  *(float *)(param_4 + 0x29) = fVar4 / (fVar15 * fVar13);
  *(float *)((longlong)param_4 + 0x14c) = fVar5 / (fVar14 * fVar15);
  uVar2 = *(uint *)(param_3 + 5);
  *(float *)(param_4 + 0x2a) = fVar4 / (fVar13 * (float)uVar2);
  *(float *)((longlong)param_4 + 0x154) = fVar5 / (fVar14 * (float)uVar2);
  return;
}



// FUNCTION 144b12ece FUN_144b12ece body=512 status=ok
// SIG undefined FUN_144b12ece(void)

void FUN_144b12ece(double *param_1,undefined1 (*param_2) [16],double *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
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
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined8 *)param_2[2] = 0;
    *(undefined8 *)(param_2[2] + 8) = 0;
    *(undefined8 *)param_2[1] = 0;
    *(undefined8 *)(param_2[1] + 8) = 0;
    *(undefined8 *)*param_2 = 0;
    *(undefined8 *)(*param_2 + 8) = 0;
    param_2[3][0] = 0;
  }
  else {
    dVar8 = param_3[2];
    dVar9 = param_3[6];
    dVar10 = param_3[10];
    dVar12 = (*param_1 + param_1[3]) * 0.5;
    dVar16 = (param_1[1] + param_1[4]) * 0.5;
    dVar15 = (param_1[2] + param_1[5]) * 0.5;
    dVar11 = (param_1[3] - *param_1) * 0.5;
    dVar13 = (param_1[4] - param_1[1]) * 0.5;
    dVar14 = (param_1[5] - param_1[2]) * 0.5;
    dVar3 = dVar15 * param_3[8] + dVar16 * param_3[4] + dVar12 * *param_3 + param_3[0xc];
    dVar4 = dVar15 * param_3[9] + dVar16 * param_3[5] + dVar12 * param_3[1] + param_3[0xd];
    dVar6 = ABS(dVar14 * param_3[8]) + ABS(param_3[4] * dVar13) + ABS(dVar11 * *param_3);
    dVar7 = ABS(dVar14 * param_3[9]) + ABS(param_3[5] * dVar13) + ABS(dVar11 * param_3[1]);
    dVar2 = dVar4 - dVar7;
    dVar16 = dVar15 * dVar10 + dVar16 * dVar9 + dVar12 * dVar8 + param_3[0xe];
    dVar7 = dVar7 + dVar4;
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = dVar3 - dVar6;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *param_2 = auVar1;
    dVar12 = ABS(dVar13 * dVar9) + ABS(dVar11 * dVar8) + ABS(dVar14 * dVar10);
    *(double *)param_2[1] = dVar16 - dVar12;
    auVar5._8_4_ = SUB84(dVar7,0);
    auVar5._0_8_ = dVar6 + dVar3;
    auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])(param_2[1] + 8) = auVar5;
    *(double *)(param_2[2] + 8) = dVar12 + dVar16;
    param_2[3][0] = 1;
  }
  return;
}



// FUNCTION 144b130ce FUN_144b130ce body=131 status=ok
// SIG undefined FUN_144b130ce(void)

void FUN_144b130ce(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 4);
  uVar3 = param_2;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    do {
      uVar5 = (ulonglong)uVar3;
      uVar6 = uVar3 - 1;
      uVar4 = uVar6 >> 1;
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar4 * 4);
      if (*(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar2 * 4) <=
          *(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar1 * 4)) break;
      *(uint *)(*(longlong *)(param_1 + 0x10) + uVar5 * 4) = uVar2;
      *(uint *)(*(longlong *)(param_1 + 0x20) +
               (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + uVar5 * 4) * 4) = uVar3;
      uVar5 = (ulonglong)uVar4;
      uVar3 = uVar4;
    } while (1 < uVar6);
  }
  if ((uint)uVar5 != param_2) {
    *(uint *)(*(longlong *)(param_1 + 0x10) + uVar5 * 4) = uVar1;
    *(uint *)(*(longlong *)(param_1 + 0x20) +
             (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + uVar5 * 4) * 4) = (uint)uVar5;
  }
  return;
}



// FUNCTION 144b13152 FUN_144b13152 body=189 status=ok
// SIG undefined FUN_144b13152(void)

void FUN_144b13152(uint *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = param_2 * 2 + 1;
  uVar4 = *param_1;
  if (uVar5 < uVar4) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)param_2 * 4);
    uVar7 = param_2;
    do {
      uVar8 = uVar7 * 2 + 2;
      lVar2 = *(longlong *)(param_1 + 4);
      lVar3 = *(longlong *)(param_1 + 6);
      uVar6 = uVar5;
      if ((uVar8 < uVar4) &&
         (*(uint *)(lVar3 + (ulonglong)*(uint *)(lVar2 + (ulonglong)uVar8 * 4) * 4) <=
          *(uint *)(lVar3 + (ulonglong)*(uint *)(lVar2 + (ulonglong)uVar5 * 4) * 4))) {
        uVar6 = uVar8;
      }
      uVar4 = *(uint *)(lVar2 + (ulonglong)uVar6 * 4);
      if (*(uint *)(lVar3 + (ulonglong)uVar1 * 4) <= *(uint *)(lVar3 + (ulonglong)uVar4 * 4)) break;
      *(uint *)(lVar2 + (ulonglong)uVar7 * 4) = uVar4;
      *(uint *)(*(longlong *)(param_1 + 8) +
               (ulonglong)*(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar7 * 4) * 4) = uVar7;
      uVar5 = uVar6 * 2 + 1;
      uVar4 = *param_1;
      uVar7 = uVar6;
    } while (uVar5 < uVar4);
    if (uVar7 != param_2) {
      *(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar7 * 4) = uVar1;
      *(uint *)(*(longlong *)(param_1 + 8) +
               (ulonglong)*(uint *)(*(longlong *)(param_1 + 4) + (ulonglong)uVar7 * 4) * 4) = uVar7;
    }
  }
  return;
}



// FUNCTION 144b1320f FUN_144b1320f body=370 status=ok
// SIG undefined FUN_144b1320f(void)

bool FUN_144b1320f(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97070) {
    FUN_144b3d300(&DAT_14ca97070);
    if (DAT_14ca97070 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
  }
  lVar1 = DAT_14ca97068;
  bVar6 = true;
  cVar2 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
      cVar2 = '\x02';
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
      cVar2 = DAT_14ca96da8;
    }
    bVar6 = *(int *)(lVar1 + uVar5 * 4) != 0;
  }
  bVar7 = false;
  if ((bVar6) && (cVar2 != '\0')) {
    cVar2 = FUN_141767a62(param_1);
    lVar1 = DAT_14c9f3638;
    if (cVar2 == '\0') {
      bVar7 = false;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar5 = 0;
      }
      else {
        bVar3 = FUN_144a61b4f();
        uVar5 = (ulonglong)(bVar3 ^ 1);
      }
      bVar7 = *(int *)(lVar1 + uVar5 * 4) != 0;
    }
  }
  return bVar7;
}



// FUNCTION 144b13382 FUN_144b13382 body=7 status=ok
// SIG undefined FUN_144b13382(void)

undefined4 FUN_144b13382(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xa1c);
}



// FUNCTION 144b13389 FUN_144b13389 body=19 status=ok
// SIG undefined FUN_144b13389(void)

void FUN_144b13389(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 144b1339c FUN_144b1339c body=128 status=ok
// SIG undefined FUN_144b1339c(void)

void FUN_144b1339c(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 4;
  if (param_2 < 5) {
LAB_144b133b1:
    uVar1 = (uint)uVar2;
    if ((uVar1 < 5) && (*(longlong *)(param_1 + 0x20) == 0)) goto LAB_144b133bf;
    uVar3 = 0;
    if (4 < uVar1) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    uVar2 = uVar2 >> 3;
    if ((int)param_2 <= (int)uVar2) {
      if ((int)uVar2 < 1) goto LAB_144b133bf;
      goto LAB_144b133b1;
    }
    uVar1 = 0x7fffffff;
    uVar3 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0x20,0,uVar3,8);
LAB_144b133bf:
  *(uint *)(param_1 + 0x2c) = uVar1;
  return;
}



// FUNCTION 144b1341c FUN_144b1341c body=33 status=ok
// SIG undefined FUN_144b1341c(void)

void FUN_144b1341c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(longlong *)(param_2 + lVar2 * 8);
    *(longlong *)(param_1 + lVar2 * 8) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 1;
  } while (param_3 != (int)lVar2);
  return;
}



// FUNCTION 144b1343d FUN_144b1343d body=13 status=ok
// SIG undefined FUN_144b1343d(void)

void FUN_144b1343d(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 144b1344a FUN_144b1344a body=101 status=ok
// SIG undefined FUN_144b1344a(void)

void FUN_144b1344a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  
  pcVar3 = *(code **)(**(longlong **)(param_1 + 0xa8) + 0x10);
  if (pcVar3 == (code *)&LAB_144944e6a) {
    SetEvent((HANDLE)(*(longlong **)(param_1 + 0xa8))[2]);
  }
  else {
    (*pcVar3)();
  }
  plVar4 = *(longlong **)(param_1 + 0xb0);
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
                    /* WARNING: Could not recover jumptable at 0x000144b134a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144b134b0 FUN_144b134b0 body=163 status=ok
// SIG undefined FUN_144b134b0(void)

void FUN_144b134b0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 4;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 8;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  lVar1 = 0x92;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x152);
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  return;
}



// FUNCTION 144b13553 FUN_144b13553 body=370 status=ok
// SIG undefined FUN_144b13553(void)

bool FUN_144b13553(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97070) {
    FUN_144b3d300(&DAT_14ca97070);
    if (DAT_14ca97070 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
  }
  lVar1 = DAT_14ca97068;
  bVar6 = true;
  cVar2 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
      cVar2 = '\x02';
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
      cVar2 = DAT_14ca96da8;
    }
    bVar6 = *(int *)(lVar1 + uVar5 * 4) != 0;
  }
  bVar7 = false;
  if ((bVar6) && (cVar2 != '\0')) {
    cVar2 = FUN_141767a62(param_1);
    lVar1 = DAT_14ca008e8;
    if (cVar2 == '\0') {
      bVar7 = false;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar5 = 0;
      }
      else {
        bVar3 = FUN_144a61b4f();
        uVar5 = (ulonglong)(bVar3 ^ 1);
      }
      bVar7 = *(int *)(lVar1 + uVar5 * 4) != 0;
    }
  }
  return bVar7;
}



// FUNCTION 144b136c6 FUN_144b136c6 body=134 status=ok
// SIG undefined FUN_144b136c6(void)

void FUN_144b136c6(undefined1 (*param_1) [16])

{
  longlong lVar1;
  
  *(undefined8 *)param_1[3] = 0;
  *param_1 = (undefined1  [16])0x0;
  param_1[3][8] = 1;
  param_1[4] = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[5] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[6] + 8) = (undefined1  [16])0x0;
  lVar1 = 0x92;
  do {
    *(undefined1 (*) [16])(param_1[-2] + lVar1 + 0xe) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1[-1] + lVar1 + 0xe) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x152);
  *(undefined4 *)(param_1[0x15] + 4) = 0;
  param_1[0x14] = (undefined1  [16])0x0;
  *(undefined2 *)param_1[0x15] = 0;
  *(undefined4 *)(param_1[0x15] + 8) = 0xffffffff;
  *(undefined4 *)(param_1[0x15] + 0xc) = 0xffffffff;
  *(undefined4 *)param_1[0x16] = 0xffffffff;
  *(undefined4 *)(param_1[0x16] + 4) = 0xffffffff;
  *(undefined4 *)(param_1[0x16] + 8) = 0;
  *(undefined2 *)(param_1[0x16] + 0xc) = 0;
  *(undefined8 *)param_1[0x17] = 0;
  return;
}



// FUNCTION 144b1374c FUN_144b1374c body=31 status=ok
// SIG undefined FUN_144b1374c(void)

undefined8 FUN_144b1374c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b1376c FUN_144b1376c body=91 status=ok
// SIG undefined FUN_144b1376c(void)

longlong FUN_144b1376c(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_1 >> 0x1e & 1) == 0) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14ca09618);
    lVar1 = (ulonglong)(*param_1 & 0x3fffffff) * 0xa8 + DAT_14ca09620;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca09618);
  }
  else {
    lVar1 = (ulonglong)(*param_1 & 0x3fffffff) * 0xa0 + *param_2;
  }
  return lVar1;
}



// FUNCTION 144b137c8 FUN_144b137c8 body=542 status=ok
// SIG undefined FUN_144b137c8(void)

void FUN_144b137c8(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  param_1[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = uVar1;
  puVar3 = &DAT_14c846400;
  puVar4 = param_1 + 4;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c846400;
  puVar4 = param_1 + 0x14;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x4e] = DAT_14c8464e0;
  param_1[0x4f] = uVar1;
  param_1[0x50] = DAT_14c8464f0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = &DAT_3f8000003f800000;
  param_1[0x5d] = &DAT_3f8000003f800000;
  param_1[0x5e] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x5f) = 0x42c80000;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0xffffffff00000000;
  param_1[0x74] = 0;
  param_1[0x75] = 0x8000000000;
  param_1[0x76] = 0xffffffff;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0xffffffffffffffff;
  param_1[0x7b] = 0xbf8000003f800000;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f9) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0x42b4000042b40000;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined1 **)((longlong)param_1 + 0x404) = &DAT_3f8000003f800000;
  *(undefined1 *)((longlong)param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x83] = 0x3f800000bf800000;
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x441) = 0;
  *(undefined8 *)((longlong)param_1 + 0x449) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined8 *)((longlong)param_1 + 0x463) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46b) = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  if (param_1 + 0x3c != &DAT_14c846400) {
    puVar3 = &DAT_14c846400;
    puVar4 = param_1 + 0x3c;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  return;
}



// FUNCTION 144b139e6 FUN_144b139e6 body=1 status=ok
// SIG undefined FUN_144b139e6(void)

void FUN_144b139e6(void)

{
  return;
}



// FUNCTION 144b139e7 FUN_144b139e7 body=38 status=ok
// SIG undefined FUN_144b139e7(void)

ulonglong FUN_144b139e7(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_1 + 0xdc);
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_2 + 0xdc) << 0x20;
  }
  return uVar1 | uVar2;
}



// FUNCTION 144b13a0e FUN_144b13a0e body=63 status=ok
// SIG undefined FUN_144b13a0e(void)

ulonglong FUN_144b13a0e(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xe4);
  return CONCAT44(uVar1 >> 0xe,uVar1 >> 3 & 8 | uVar1 >> 10 & 4 | uVar1 >> 0x17 & 2 | uVar1 >> 7 & 1
                 ) & 0x7ffffffff;
}



// FUNCTION 144b13a4e FUN_144b13a4e body=195 status=ok
// SIG undefined FUN_144b13a4e(void)

void FUN_144b13a4e(longlong param_1,uint *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[2] = 0x7fffffff;
  bVar1 = DAT_14ca96500;
  if (*(int *)(param_1 + 0x20) == 1) {
joined_r0x000144b13b0d:
    if (bVar1 == 0) goto LAB_144b13ac9;
  }
  else {
    if (((*(int *)(param_1 + 0x20) < 3) ||
        (lVar3 = (ulonglong)DAT_14ca85550 * 0x3c,
        *(longlong *)(&DAT_14ca814b0 + lVar3) == DAT_14ca81490)) || (DAT_14ca85550 == 0xc))
    goto LAB_144b13ac9;
    if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar3 + 3) & 0x10) != 0) {
      bVar1 = *(byte *)((longlong)&DAT_14ca814c8 + lVar3 + 3) & 0x20;
      goto joined_r0x000144b13b0d;
    }
  }
  uVar2 = *(uint *)(param_4 + 0x54) & 7;
  if (uVar2 == 0) {
    *param_2 = *(uint *)(param_3 + 0x15c);
    uVar2 = *(uint *)(param_3 + 0x204) & 0x7fffffff;
  }
  else {
    if ((uVar2 != 1) || (*(longlong *)(param_1 + 0x28) == 0)) goto LAB_144b13ac9;
    *param_2 = *(uint *)(param_4 + 0xa0) | 0x80000000;
    uVar2 = *(uint *)(param_4 + 0xa4) | 0x80000000;
  }
  param_2[2] = uVar2;
LAB_144b13ac9:
  if (param_3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(uint *)(param_3 + 0x158);
  }
  param_2[1] = uVar2;
  return;
}


