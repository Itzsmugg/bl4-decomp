// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14276d21c FUN_14276d21c body=53 status=ok
// SIG undefined FUN_14276d21c(void)

void FUN_14276d21c(void)

{
  longlong *plVar1;
  
  if (DAT_14c845d73 != '\0') {
    plVar1 = (longlong *)FUN_140a3e602();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014276d248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))(plVar1,&DAT_14c845d70,*(code **)(*plVar1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14276d252 FUN_14276d252 body=363 status=ok
// SIG undefined FUN_14276d252(void)

void FUN_14276d252(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14276d2e8;
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
LAB_14276d2e8:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14276d3bd FUN_14276d3bd body=43 status=ok
// SIG undefined FUN_14276d3bd(void)

void FUN_14276d3bd(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14276d40a FUN_14276d40a body=145 status=ok
// SIG undefined FUN_14276d40a(void)

void FUN_14276d40a(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 != 0) {
    if (param_2[10] == 0) {
      uVar1 = FUN_1467e9b86(*param_2);
    }
    else {
      uVar1 = FUN_1467ea0f4(param_2[9]);
    }
    FUN_146822224(param_2 + 5,local_40);
    FUN_1467ea9b4(uVar1,param_1,local_40);
    FUN_1467ea272(uVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14276d49c FUN_14276d49c body=145 status=ok
// SIG undefined FUN_14276d49c(void)

void FUN_14276d49c(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 != 0) {
    if (param_2[10] == 0) {
      uVar1 = FUN_1467e9b86(*param_2);
    }
    else {
      uVar1 = FUN_1467ea0f4(param_2[9]);
    }
    FUN_146822224(param_2 + 5,local_40);
    FUN_1467ea7fc(uVar1,param_1,local_40);
    FUN_1467ea272(uVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14276d52e FUN_14276d52e body=31 status=ok
// SIG undefined FUN_14276d52e(void)

undefined8 FUN_14276d52e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276d564 FUN_14276d564 body=25 status=ok
// SIG undefined FUN_14276d564(void)

undefined8 FUN_14276d564(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14276d602 FUN_14276d602 body=12 status=ok
// SIG undefined FUN_14276d602(void)

void FUN_14276d602(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276d60b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14276d60e FUN_14276d60e body=29 status=ok
// SIG undefined FUN_14276d60e(void)

undefined8 FUN_14276d60e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276d6b0 FUN_14276d6b0 body=12 status=ok
// SIG undefined FUN_14276d6b0(void)

void FUN_14276d6b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276d6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14276d6bc FUN_14276d6bc body=29 status=ok
// SIG undefined FUN_14276d6bc(void)

undefined8 FUN_14276d6bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276d6da FUN_14276d6da body=134 status=ok
// SIG undefined FUN_14276d6da(void)

undefined8 * FUN_14276d6da(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  double *pdVar2;
  float fVar3;
  
  pdVar2 = (double *)0x0;
  if (param_3[3] == DAT_14c758c50 &&
      (param_3[2] == DAT_14c758c4c && (param_3[1] == DAT_14c758c48 && *param_3 == DAT_14c758c44))) {
    pdVar2 = (double *)(param_3 + 6);
  }
  fVar3 = (float)*pdVar2;
  if (fVar3 < 0.0) {
    fVar3 = sqrtf(fVar3);
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  uVar1 = CONCAT44(DAT_14c758c50,DAT_14c758c4c);
  *param_1 = CONCAT44(DAT_14c758c48,DAT_14c758c44);
  param_1[1] = uVar1;
  param_1[2] = &PTR_FUN_149e1d520;
  param_1[3] = (double)fVar3;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 14276d77c FUN_14276d77c body=12 status=ok
// SIG undefined FUN_14276d77c(void)

void FUN_14276d77c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276d785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14276d788 FUN_14276d788 body=29 status=ok
// SIG undefined FUN_14276d788(void)

undefined8 FUN_14276d788(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276d7a6 FUN_14276d7a6 body=148 status=ok
// SIG undefined FUN_14276d7a6(void)

void FUN_14276d7a6(undefined8 *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double *pdVar4;
  
  pdVar4 = (double *)(param_4 + 6);
  if (param_4[3] != DAT_14c758c50 ||
      (param_4[2] != DAT_14c758c4c || (param_4[1] != DAT_14c758c48 || *param_4 != DAT_14c758c44))) {
    pdVar4 = (double *)0x0;
  }
  dVar1 = *pdVar4;
  pdVar4 = (double *)(param_3 + 6);
  if (DAT_14c758c50 != param_3[3] ||
      (DAT_14c758c4c != param_3[2] || (DAT_14c758c48 != param_3[1] || DAT_14c758c44 != *param_3))) {
    pdVar4 = (double *)0x0;
  }
  dVar2 = *pdVar4;
  uVar3 = CONCAT44(DAT_14c758c50,DAT_14c758c4c);
  *param_1 = CONCAT44(DAT_14c758c48,DAT_14c758c44);
  param_1[1] = uVar3;
  param_1[2] = &PTR_FUN_149e1d520;
  param_1[3] = dVar1 + dVar2;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14276d856 FUN_14276d856 body=12 status=ok
// SIG undefined FUN_14276d856(void)

void FUN_14276d856(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276d85f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14276d862 FUN_14276d862 body=29 status=ok
// SIG undefined FUN_14276d862(void)

undefined8 FUN_14276d862(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276d880 FUN_14276d880 body=148 status=ok
// SIG undefined FUN_14276d880(void)

void FUN_14276d880(undefined8 *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double *pdVar4;
  double *pdVar5;
  
  pdVar5 = (double *)(param_4 + 6);
  if (param_4[3] != DAT_14c758c50 ||
      (param_4[2] != DAT_14c758c4c || (param_4[1] != DAT_14c758c48 || *param_4 != DAT_14c758c44))) {
    pdVar5 = (double *)0x0;
  }
  pdVar4 = (double *)(param_3 + 6);
  if (DAT_14c758c50 != param_3[3] ||
      (DAT_14c758c4c != param_3[2] || (DAT_14c758c48 != param_3[1] || DAT_14c758c44 != *param_3))) {
    pdVar4 = (double *)0x0;
  }
  dVar1 = *pdVar4;
  dVar2 = *pdVar5;
  uVar3 = CONCAT44(DAT_14c758c50,DAT_14c758c4c);
  *param_1 = CONCAT44(DAT_14c758c48,DAT_14c758c44);
  param_1[1] = uVar3;
  param_1[2] = &PTR_FUN_149e1d520;
  param_1[3] = dVar1 - dVar2;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14276d930 FUN_14276d930 body=12 status=ok
// SIG undefined FUN_14276d930(void)

void FUN_14276d930(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276d939. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14276d93c FUN_14276d93c body=29 status=ok
// SIG undefined FUN_14276d93c(void)

undefined8 FUN_14276d93c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276d95a FUN_14276d95a body=148 status=ok
// SIG undefined FUN_14276d95a(void)

void FUN_14276d95a(undefined8 *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double *pdVar4;
  
  pdVar4 = (double *)(param_4 + 6);
  if (param_4[3] != DAT_14c758c50 ||
      (param_4[2] != DAT_14c758c4c || (param_4[1] != DAT_14c758c48 || *param_4 != DAT_14c758c44))) {
    pdVar4 = (double *)0x0;
  }
  dVar1 = *pdVar4;
  pdVar4 = (double *)(param_3 + 6);
  if (DAT_14c758c50 != param_3[3] ||
      (DAT_14c758c4c != param_3[2] || (DAT_14c758c48 != param_3[1] || DAT_14c758c44 != *param_3))) {
    pdVar4 = (double *)0x0;
  }
  dVar2 = *pdVar4;
  uVar3 = CONCAT44(DAT_14c758c50,DAT_14c758c4c);
  *param_1 = CONCAT44(DAT_14c758c48,DAT_14c758c44);
  param_1[1] = uVar3;
  param_1[2] = &PTR_FUN_149e1d520;
  param_1[3] = dVar1 * dVar2;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14276da0a FUN_14276da0a body=12 status=ok
// SIG undefined FUN_14276da0a(void)

void FUN_14276da0a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276da13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14276da16 FUN_14276da16 body=29 status=ok
// SIG undefined FUN_14276da16(void)

undefined8 FUN_14276da16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276da34 FUN_14276da34 body=169 status=ok
// SIG undefined FUN_14276da34(void)

undefined8 * FUN_14276da34(undefined8 *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  undefined8 uVar1;
  double *pdVar2;
  double *pdVar3;
  float fVar4;
  
  pdVar3 = (double *)(param_4 + 6);
  if (param_4[3] != DAT_14c758c50 ||
      (param_4[2] != DAT_14c758c4c || (param_4[1] != DAT_14c758c48 || *param_4 != DAT_14c758c44))) {
    pdVar3 = (double *)0x0;
  }
  pdVar2 = (double *)(param_3 + 6);
  if (DAT_14c758c50 != param_3[3] ||
      (DAT_14c758c4c != param_3[2] || (DAT_14c758c48 != param_3[1] || DAT_14c758c44 != *param_3))) {
    pdVar2 = (double *)0x0;
  }
  fVar4 = powf((float)*pdVar2,(float)*pdVar3);
  uVar1 = CONCAT44(DAT_14c758c50,DAT_14c758c4c);
  *param_1 = CONCAT44(DAT_14c758c48,DAT_14c758c44);
  param_1[1] = uVar1;
  param_1[2] = &PTR_FUN_149e1d520;
  param_1[3] = (double)fVar4;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 14276dafa FUN_14276dafa body=12 status=ok
// SIG undefined FUN_14276dafa(void)

void FUN_14276dafa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276db03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14276db06 FUN_14276db06 body=29 status=ok
// SIG undefined FUN_14276db06(void)

undefined8 FUN_14276db06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276db24 FUN_14276db24 body=454 status=ok
// SIG undefined FUN_14276db24(void)

longlong FUN_14276db24(longlong param_1,undefined8 param_2,int *param_3,int *param_4)

{
  double dVar1;
  byte bVar2;
  double *pdVar3;
  double *pdVar4;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined **local_78;
  double local_70;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pdVar4 = (double *)(param_4 + 6);
  if (param_4[3] != DAT_14c758c50 ||
      (param_4[2] != DAT_14c758c4c || (param_4[1] != DAT_14c758c48 || *param_4 != DAT_14c758c44))) {
    pdVar4 = (double *)0x0;
  }
  pdVar3 = (double *)(param_3 + 6);
  if (DAT_14c758c50 != param_3[3] ||
      (DAT_14c758c4c != param_3[2] || (DAT_14c758c48 != param_3[1] || DAT_14c758c44 != *param_3))) {
    pdVar3 = (double *)0x0;
  }
  dVar1 = *pdVar4;
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    local_70 = *pdVar3 / dVar1;
    local_88 = (wchar_t *)CONCAT44(DAT_14c758c48,DAT_14c758c44);
    uStack_80 = CONCAT44(DAT_14c758c50,DAT_14c758c4c);
    local_78 = &PTR_FUN_149e1d520;
    local_48 = 0;
    bVar2 = 0;
  }
  else {
    FUN_1413a400a(local_9c,L"DivisionByZero");
    FUN_1413a400a(local_a0,L"BasicMathExpressionEvaluator");
    local_88 = L"Division by zero";
    uStack_80._0_4_ = 0x10;
    FUN_140208c1e(&local_98,local_a0,local_9c,&local_88);
    local_88 = local_98;
    if (local_98 == (wchar_t *)0x0) {
      uStack_80 = CONCAT44(uStack_80._4_4_,local_90);
      local_48 = 1;
    }
    else {
      (**(code **)(*(longlong *)local_98 + 8))();
      uStack_80 = CONCAT44(uStack_80._4_4_,local_90);
      local_48 = 1;
      if (local_98 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_98 + 0x10))();
      }
    }
    bVar2 = 1;
  }
  *(byte *)(param_1 + 0x40) = bVar2;
  (*(code *)(&PTR_thunk_FUN_141151bf0_149e1d9a0)[bVar2])(param_1,&local_88);
  (*(code *)(&PTR_LAB_149e1d9c0)[local_48])(&local_88);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14276dd08 FUN_14276dd08 body=12 status=ok
// SIG undefined FUN_14276dd08(void)

void FUN_14276dd08(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276dd11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14276dd14 FUN_14276dd14 body=29 status=ok
// SIG undefined FUN_14276dd14(void)

undefined8 FUN_14276dd14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276dd32 FUN_14276dd32 body=469 status=ok
// SIG undefined FUN_14276dd32(void)

longlong FUN_14276dd32(longlong param_1,undefined8 param_2,int *param_3,int *param_4)

{
  double dVar1;
  byte bVar2;
  double *pdVar3;
  double *pdVar4;
  float fVar5;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [4];
  undefined1 local_9c [4];
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined **local_78;
  double local_70;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pdVar4 = (double *)(param_4 + 6);
  if (param_4[3] != DAT_14c758c50 ||
      (param_4[2] != DAT_14c758c4c || (param_4[1] != DAT_14c758c48 || *param_4 != DAT_14c758c44))) {
    pdVar4 = (double *)0x0;
  }
  pdVar3 = (double *)(param_3 + 6);
  if (DAT_14c758c50 != param_3[3] ||
      (DAT_14c758c4c != param_3[2] || (DAT_14c758c48 != param_3[1] || DAT_14c758c44 != *param_3))) {
    pdVar3 = (double *)0x0;
  }
  dVar1 = *pdVar4;
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    fVar5 = (float)FUN_1447c7e44((float)*pdVar3,(float)dVar1);
    local_70 = (double)fVar5;
    local_88 = (wchar_t *)CONCAT44(DAT_14c758c48,DAT_14c758c44);
    uStack_80 = CONCAT44(DAT_14c758c50,DAT_14c758c4c);
    local_78 = &PTR_FUN_149e1d520;
    local_48 = 0;
    bVar2 = 0;
  }
  else {
    FUN_1413a400a(local_9c,L"ModZero");
    FUN_1413a400a(local_a0,L"BasicMathExpressionEvaluator");
    local_88 = L"Modulo zero";
    uStack_80._0_4_ = 0xb;
    FUN_140208c1e(&local_98,local_a0,local_9c,&local_88);
    local_88 = local_98;
    if (local_98 == (wchar_t *)0x0) {
      uStack_80 = CONCAT44(uStack_80._4_4_,local_90);
      local_48 = 1;
    }
    else {
      (**(code **)(*(longlong *)local_98 + 8))();
      uStack_80 = CONCAT44(uStack_80._4_4_,local_90);
      local_48 = 1;
      if (local_98 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_98 + 0x10))();
      }
    }
    bVar2 = 1;
  }
  *(byte *)(param_1 + 0x40) = bVar2;
  (*(code *)(&PTR_thunk_FUN_141151bf0_149e1d9a0)[bVar2])(param_1,&local_88);
  (*(code *)(&PTR_LAB_149e1d9c0)[local_48])(&local_88);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14276df24 FUN_14276df24 body=12 status=ok
// SIG undefined FUN_14276df24(void)

void FUN_14276df24(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014276df2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14276df30 FUN_14276df30 body=29 status=ok
// SIG undefined FUN_14276df30(void)

undefined8 FUN_14276df30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14276df4d FUN_14276df4d body=612 status=ok
// SIG undefined FUN_14276df4d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14276df4d(void)

{
  FUN_141471170(&DAT_14c844e38,L"Localization.DisplayStringSupport",&DAT_14c844e48,
                L"Is display string support enabled? 0: Auto (default), 1: Enabled, 2: Disabled",0);
  atexit(FUN_142762b49);
  FUN_14153156c(&DAT_14c844e50,L"Localization.AsyncLoadLocalizationData",&DAT_14c75876c,
                L"True to load localization data asynchronously (non-blocking), or False to load it synchronously (blocking)"
                ,0);
  atexit(FUN_142762b8e);
  FUN_14153156c(&DAT_14c844e60,L"Localization.AsyncLoadLocalizationDataOnLanguageChange",
                &DAT_14c844e70,
                L"True to load localization data asynchronously (non-blocking) when the language changes, or False to load it synchronously (blocking)"
                ,0);
  atexit(FUN_142762bd3);
  FUN_14153156c(&DAT_14c844e78,L"Localization.AlwaysLoadNativeLocalizationDataDuringInitialization",
                &DAT_14c844e88,
                L"True to load the native localization data during initialization, even if we\'re not starting in the native language. This ensures that all gathered text will load some localization data, even if not fully translated."
                ,0);
  atexit(FUN_142762c18);
  DAT_14c844e90 = 0;
  DAT_14c844e98 = 0;
  DAT_14c844ea0 = 0xffffffff;
  atexit(FUN_14276617c);
  DAT_14c844ea8 = 0;
  DAT_14c844eb0 = 0;
  DAT_14c844eb8 = 0xffffffff;
  atexit(FUN_1427661be);
  DAT_14c845dbc = 0;
  DAT_14c845dc4 = 0;
  DAT_14c844ed8 = 0;
  atexit(FUN_1427662af);
  _DAT_14c845dc8 = 0x4b004f00000000;
  _DAT_14c845dd0 = 0;
  DAT_14c845ecc = 1;
  _DAT_14c845ed0 = L'U';
  _DAT_14c845ed2 = L'n';
  DAT_14c845ed0_2._2_2_ = L'k';
  DAT_14c845ed0_2._4_2_ = L'n';
  uRam000000014c845ed8 = 0x77006f;
  _DAT_14c845edc = 0x20006e;
  uRam000000014c845ee0 = 0x740053;
  uRam000000014c845ee4._0_2_ = L'a';
  uRam000000014c845ee4._2_2_ = L't';
  uRam000000014c845ee4._4_2_ = L'u';
  uRam000000014c845ee4._6_2_ = L's';
  _DAT_14c845eec = 0;
  DAT_14c844ee0 = 2;
  _DAT_14c844ef4 = 0x650064006f0043;
  DAT_14c844ee4 = L'I';
  DAT_14c844ee6 = L'n';
  uRam000000014c844ee8._0_2_ = L'v';
  uRam000000014c844ee8._2_2_ = L'a';
  uRam000000014c844eec._0_2_ = L'l';
  uRam000000014c844eec._2_2_ = L'i';
  uRam000000014c844ef0._0_2_ = L'd';
  uRam000000014c844ef0._2_2_ = L' ';
  _DAT_14c844efc = 0;
  DAT_14c84500c = TlsAlloc();
  DAT_14c845010 = 0;
  DAT_14c845018 = 0;
  atexit(FUN_1427674e6);
  DAT_14c845020 = 0;
  DAT_14c845028 = 0;
  atexit(FUN_142767541);
  DAT_14c845030 = 0;
  DAT_14c845038 = 0;
  atexit(FUN_14276759c);
  FUN_14153156c(&DAT_14c845048,L"MessageLog.InfoMessagesAtDisplayVerbosity",&DAT_14c845040,
                L"MessageLog messages at level \'info\' will be mirrored to the log at \'Display\' verbosity rather than \'Log\' verbosity."
                ,0);
  atexit(FUN_1427675f7);
  DAT_14c845070 = 0;
  DAT_14c845078 = 0;
  atexit(FUN_142767ad7);
  DAT_14c845080 = 0;
  DAT_14c845088 = 0;
  atexit(FUN_142767b32);
  return;
}



// FUNCTION 14276e1ca FUN_14276e1ca body=290 status=ok
// SIG undefined FUN_14276e1ca(void)

uint FUN_14276e1ca(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_3 == 1) {
    uVar7 = 0x8828;
    if ((param_1 & 2) == 0) {
      uVar7 = 0;
    }
    uVar6 = 0x4414;
    if ((param_1 & 1) == 0) {
      uVar6 = 0;
    }
    uVar8 = 0;
    if ((param_1 & 4) != 0) {
      uVar8 = 0xe69e;
    }
    uVar3 = 0;
    if ((param_1 & 8) != 0) {
      uVar3 = 0xae76;
    }
    uVar4 = 0xa28a;
    if ((param_2 & 1) == 0) {
      uVar4 = 0;
    }
    uVar1 = 0x265e;
    if ((param_2 & 2) == 0) {
      uVar1 = 0;
    }
    uVar5 = 0;
    if ((param_2 & 4) != 0) {
      uVar5 = 0xe69e;
    }
    uVar2 = 0;
    if ((param_2 & 8) != 0) {
      uVar2 = 0xae76;
    }
    uVar2 = uVar1 ^ uVar4 ^ uVar5 ^ uVar3 ^ uVar8 ^ (uVar6 | uVar7) ^ uVar2;
  }
  else if (param_3 == 0) {
    uVar7 = 0x8e56;
    if ((param_1 & 2) == 0) {
      uVar7 = 0;
    }
    uVar6 = 0xf68e;
    if ((param_1 & 1) == 0) {
      uVar6 = 0;
    }
    uVar8 = 0x1135;
    if ((param_1 & 4) == 0) {
      uVar8 = 0;
    }
    uVar3 = 0x220a;
    if ((param_1 & 8) == 0) {
      uVar3 = 0;
    }
    uVar4 = 0x94c4;
    if ((param_2 & 1) == 0) {
      uVar4 = 0;
    }
    uVar1 = 0x4ac2;
    if ((param_2 & 2) == 0) {
      uVar1 = 0;
    }
    uVar5 = 0xfb57;
    if ((param_2 & 4) == 0) {
      uVar5 = 0;
    }
    uVar2 = 0x454;
    if ((param_2 & 8) == 0) {
      uVar2 = 0;
    }
    uVar2 = uVar5 ^ uVar1 ^ uVar4 ^ uVar3 ^ uVar8 ^ uVar6 ^ uVar7 ^ uVar2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14276e2ec FUN_14276e2ec body=2777 status=ok
// SIG undefined FUN_14276e2ec(void)

void FUN_14276e2ec(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  memset(&DAT_14c8460d8,0,0x90);
  DAT_14c8460e0 = 1;
  FUN_1467ff5ca(&DAT_14c8460d8,0);
  puVar1 = DAT_14c8460d8;
  *DAT_14c8460d8 = 0;
  *(undefined4 *)(puVar1 + 4) = 0x447a0000;
  iVar2 = DAT_14c8460e0;
  lVar5 = (longlong)(int)DAT_14c8460e0;
  DAT_14c8460e0 = DAT_14c8460e0 + 1;
  if (DAT_14c8460e4 < DAT_14c8460e0) {
    FUN_1467ff5ca(&DAT_14c8460d8,iVar2);
  }
  puVar1 = DAT_14c8460d8;
  DAT_14c8460d8[lVar5 * 8] = 1;
  *(undefined4 *)(puVar1 + lVar5 * 8 + 4) = 0x41200000;
  uVar3 = DAT_14c8460e0;
  lVar5 = (longlong)(int)DAT_14c8460e0;
  DAT_14c8460e0 = DAT_14c8460e0 + 1;
  if (DAT_14c8460e4 < DAT_14c8460e0) {
    FUN_1467ff5ca(&DAT_14c8460d8,uVar3);
  }
  puVar1 = DAT_14c8460d8;
  DAT_14c8460d8[lVar5 * 8] = 2;
  *(undefined4 *)(puVar1 + lVar5 * 8 + 4) = 0x42c80000;
  uVar3 = DAT_14c8460e0;
  lVar5 = (longlong)(int)DAT_14c8460e0;
  DAT_14c8460e0 = DAT_14c8460e0 + 1;
  if (DAT_14c8460e4 < DAT_14c8460e0) {
    FUN_1467ff5ca(&DAT_14c8460d8,uVar3);
  }
  puVar1 = DAT_14c8460d8;
  DAT_14c8460d8[lVar5 * 8] = 3;
  *(undefined4 *)(puVar1 + lVar5 * 8 + 4) = 0x447a0000;
  uVar3 = DAT_14c8460e0;
  lVar5 = (longlong)(int)DAT_14c8460e0;
  DAT_14c8460e0 = DAT_14c8460e0 + 1;
  if (DAT_14c8460e4 < DAT_14c8460e0) {
    FUN_1467ff5ca(&DAT_14c8460d8,uVar3);
  }
  puVar1 = DAT_14c8460d8;
  DAT_14c8460d8[lVar5 * 8] = 4;
  *(undefined4 *)(puVar1 + lVar5 * 8 + 4) = 0;
  iVar2 = DAT_14c8460f0;
  lVar5 = (longlong)(int)DAT_14c8460f0;
  DAT_14c8460f0 = DAT_14c8460f0 + 1;
  if (DAT_14c8460f4 < DAT_14c8460f0) {
    FUN_1467ff5ca(&DAT_14c8460e8,iVar2);
  }
  lVar4 = DAT_14c8460e8;
  *(undefined1 *)(DAT_14c8460e8 + lVar5 * 8) = 5;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x41400000;
  uVar3 = DAT_14c8460f0;
  lVar5 = (longlong)(int)DAT_14c8460f0;
  DAT_14c8460f0 = DAT_14c8460f0 + 1;
  if (DAT_14c8460f4 < DAT_14c8460f0) {
    FUN_1467ff5ca(&DAT_14c8460e8,uVar3);
  }
  lVar4 = DAT_14c8460e8;
  *(undefined1 *)(DAT_14c8460e8 + lVar5 * 8) = 6;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x40400000;
  uVar3 = DAT_14c8460f0;
  lVar5 = (longlong)(int)DAT_14c8460f0;
  DAT_14c8460f0 = DAT_14c8460f0 + 1;
  if (DAT_14c8460f4 < DAT_14c8460f0) {
    FUN_1467ff5ca(&DAT_14c8460e8,uVar3);
  }
  lVar4 = DAT_14c8460e8;
  *(undefined1 *)(DAT_14c8460e8 + lVar5 * 8) = 7;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x44dc0000;
  uVar3 = DAT_14c8460f0;
  lVar5 = (longlong)(int)DAT_14c8460f0;
  DAT_14c8460f0 = DAT_14c8460f0 + 1;
  if (DAT_14c8460f4 < DAT_14c8460f0) {
    FUN_1467ff5ca(&DAT_14c8460e8,uVar3);
  }
  lVar4 = DAT_14c8460e8;
  *(undefined1 *)(DAT_14c8460e8 + lVar5 * 8) = 8;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0;
  iVar2 = DAT_14c846100;
  lVar5 = (longlong)(int)DAT_14c846100;
  DAT_14c846100 = DAT_14c846100 + 1;
  if (DAT_14c846104 < DAT_14c846100) {
    FUN_1467ff5ca(&DAT_14c8460f8,iVar2);
  }
  lVar4 = DAT_14c8460f8;
  *(undefined1 *)(DAT_14c8460f8 + lVar5 * 8) = 0x17;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x447a0000;
  uVar3 = DAT_14c846100;
  lVar5 = (longlong)(int)DAT_14c846100;
  DAT_14c846100 = DAT_14c846100 + 1;
  if (DAT_14c846104 < DAT_14c846100) {
    FUN_1467ff5ca(&DAT_14c8460f8,uVar3);
  }
  lVar4 = DAT_14c8460f8;
  *(undefined1 *)(DAT_14c8460f8 + lVar5 * 8) = 0x18;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x447a0000;
  uVar3 = DAT_14c846100;
  lVar5 = (longlong)(int)DAT_14c846100;
  DAT_14c846100 = DAT_14c846100 + 1;
  if (DAT_14c846104 < DAT_14c846100) {
    FUN_1467ff5ca(&DAT_14c8460f8,uVar3);
  }
  lVar4 = DAT_14c8460f8;
  *(undefined1 *)(DAT_14c8460f8 + lVar5 * 8) = 0x19;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x447a0000;
  uVar3 = DAT_14c846100;
  lVar5 = (longlong)(int)DAT_14c846100;
  DAT_14c846100 = DAT_14c846100 + 1;
  if (DAT_14c846104 < DAT_14c846100) {
    FUN_1467ff5ca(&DAT_14c8460f8,uVar3);
  }
  lVar4 = DAT_14c8460f8;
  *(undefined1 *)(DAT_14c8460f8 + lVar5 * 8) = 0x1a;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x447a0000;
  uVar3 = DAT_14c846100;
  lVar5 = (longlong)(int)DAT_14c846100;
  DAT_14c846100 = DAT_14c846100 + 1;
  if (DAT_14c846104 < DAT_14c846100) {
    FUN_1467ff5ca(&DAT_14c8460f8,uVar3);
  }
  lVar4 = DAT_14c8460f8;
  *(undefined1 *)(DAT_14c8460f8 + lVar5 * 8) = 0x1b;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0;
  iVar2 = DAT_14c846110;
  lVar5 = (longlong)(int)DAT_14c846110;
  DAT_14c846110 = DAT_14c846110 + 1;
  if (DAT_14c846114 < DAT_14c846110) {
    FUN_1467ff5ca(&DAT_14c846108,iVar2);
  }
  lVar4 = DAT_14c846108;
  *(undefined1 *)(DAT_14c846108 + lVar5 * 8) = 0x1c;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x41800000;
  uVar3 = DAT_14c846110;
  lVar5 = (longlong)(int)DAT_14c846110;
  DAT_14c846110 = DAT_14c846110 + 1;
  if (DAT_14c846114 < DAT_14c846110) {
    FUN_1467ff5ca(&DAT_14c846108,uVar3);
  }
  lVar4 = DAT_14c846108;
  *(undefined1 *)(DAT_14c846108 + lVar5 * 8) = 0x1d;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x41600000;
  uVar3 = DAT_14c846110;
  lVar5 = (longlong)(int)DAT_14c846110;
  DAT_14c846110 = DAT_14c846110 + 1;
  if (DAT_14c846114 < DAT_14c846110) {
    FUN_1467ff5ca(&DAT_14c846108,uVar3);
  }
  lVar4 = DAT_14c846108;
  *(undefined1 *)(DAT_14c846108 + lVar5 * 8) = 0x1e;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0;
  iVar2 = DAT_14c846120;
  lVar5 = (longlong)(int)DAT_14c846120;
  DAT_14c846120 = DAT_14c846120 + 1;
  if (DAT_14c846124 < DAT_14c846120) {
    FUN_1467ff5ca(&DAT_14c846118,iVar2);
  }
  lVar4 = DAT_14c846118;
  *(undefined1 *)(DAT_14c846118 + lVar5 * 8) = 0x1f;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x358637bd;
  uVar3 = DAT_14c846120;
  lVar5 = (longlong)(int)DAT_14c846120;
  DAT_14c846120 = DAT_14c846120 + 1;
  if (DAT_14c846124 < DAT_14c846120) {
    FUN_1467ff5ca(&DAT_14c846118,uVar3);
  }
  lVar4 = DAT_14c846118;
  *(undefined1 *)(DAT_14c846118 + lVar5 * 8) = 0x20;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x447a0000;
  uVar3 = DAT_14c846120;
  lVar5 = (longlong)(int)DAT_14c846120;
  DAT_14c846120 = DAT_14c846120 + 1;
  if (DAT_14c846124 < DAT_14c846120) {
    FUN_1467ff5ca(&DAT_14c846118,uVar3);
  }
  lVar4 = DAT_14c846118;
  *(undefined1 *)(DAT_14c846118 + lVar5 * 8) = 0x21;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x358637bd;
  uVar3 = DAT_14c846120;
  lVar5 = (longlong)(int)DAT_14c846120;
  DAT_14c846120 = DAT_14c846120 + 1;
  if (DAT_14c846124 < DAT_14c846120) {
    FUN_1467ff5ca(&DAT_14c846118,uVar3);
  }
  lVar4 = DAT_14c846118;
  *(undefined1 *)(DAT_14c846118 + lVar5 * 8) = 0x22;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0;
  iVar2 = DAT_14c846130;
  lVar5 = (longlong)(int)DAT_14c846130;
  DAT_14c846130 = DAT_14c846130 + 1;
  if (DAT_14c846134 < DAT_14c846130) {
    FUN_1467ff5ca(&DAT_14c846128,iVar2);
  }
  lVar4 = DAT_14c846128;
  *(undefined1 *)(DAT_14c846128 + lVar5 * 8) = 0x2c;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x447a0000;
  uVar3 = DAT_14c846130;
  lVar5 = (longlong)(int)DAT_14c846130;
  DAT_14c846130 = DAT_14c846130 + 1;
  if (DAT_14c846134 < DAT_14c846130) {
    FUN_1467ff5ca(&DAT_14c846128,uVar3);
  }
  lVar4 = DAT_14c846128;
  *(undefined1 *)(DAT_14c846128 + lVar5 * 8) = 0x2d;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x447a0000;
  uVar3 = DAT_14c846130;
  lVar5 = (longlong)(int)DAT_14c846130;
  DAT_14c846130 = DAT_14c846130 + 1;
  if (DAT_14c846134 < DAT_14c846130) {
    FUN_1467ff5ca(&DAT_14c846128,uVar3);
  }
  lVar4 = DAT_14c846128;
  *(undefined1 *)(DAT_14c846128 + lVar5 * 8) = 0x2e;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x447a0000;
  uVar3 = DAT_14c846130;
  lVar5 = (longlong)(int)DAT_14c846130;
  DAT_14c846130 = DAT_14c846130 + 1;
  if (DAT_14c846134 < DAT_14c846130) {
    FUN_1467ff5ca(&DAT_14c846128,uVar3);
  }
  lVar4 = DAT_14c846128;
  *(undefined1 *)(DAT_14c846128 + lVar5 * 8) = 0x2f;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0;
  iVar2 = DAT_14c846140;
  lVar5 = (longlong)(int)DAT_14c846140;
  DAT_14c846140 = DAT_14c846140 + 1;
  if (DAT_14c846144 < DAT_14c846140) {
    FUN_1467ff5ca(&DAT_14c846138,iVar2);
  }
  lVar4 = DAT_14c846138;
  *(undefined1 *)(DAT_14c846138 + lVar5 * 8) = 0x31;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x44800000;
  uVar3 = DAT_14c846140;
  lVar5 = (longlong)(int)DAT_14c846140;
  DAT_14c846140 = DAT_14c846140 + 1;
  if (DAT_14c846144 < DAT_14c846140) {
    FUN_1467ff5ca(&DAT_14c846138,uVar3);
  }
  lVar4 = DAT_14c846138;
  *(undefined1 *)(DAT_14c846138 + lVar5 * 8) = 0x32;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x44800000;
  uVar3 = DAT_14c846140;
  lVar5 = (longlong)(int)DAT_14c846140;
  DAT_14c846140 = DAT_14c846140 + 1;
  if (DAT_14c846144 < DAT_14c846140) {
    FUN_1467ff5ca(&DAT_14c846138,uVar3);
  }
  lVar4 = DAT_14c846138;
  *(undefined1 *)(DAT_14c846138 + lVar5 * 8) = 0x33;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x44800000;
  uVar3 = DAT_14c846140;
  lVar5 = (longlong)(int)DAT_14c846140;
  DAT_14c846140 = DAT_14c846140 + 1;
  if (DAT_14c846144 < DAT_14c846140) {
    FUN_1467ff5ca(&DAT_14c846138,uVar3);
  }
  lVar4 = DAT_14c846138;
  *(undefined1 *)(DAT_14c846138 + lVar5 * 8) = 0x34;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x44800000;
  uVar3 = DAT_14c846140;
  lVar5 = (longlong)(int)DAT_14c846140;
  DAT_14c846140 = DAT_14c846140 + 1;
  if (DAT_14c846144 < DAT_14c846140) {
    FUN_1467ff5ca(&DAT_14c846138,uVar3);
  }
  lVar4 = DAT_14c846138;
  *(undefined1 *)(DAT_14c846138 + lVar5 * 8) = 0x35;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0;
  iVar2 = DAT_14c846150;
  lVar5 = (longlong)(int)DAT_14c846150;
  DAT_14c846150 = DAT_14c846150 + 1;
  if (DAT_14c846154 < DAT_14c846150) {
    FUN_1467ff5ca(&DAT_14c846148,iVar2);
  }
  lVar4 = DAT_14c846148;
  *(undefined1 *)(DAT_14c846148 + lVar5 * 8) = 0x3c;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x447a0000;
  uVar3 = DAT_14c846150;
  lVar5 = (longlong)(int)DAT_14c846150;
  DAT_14c846150 = DAT_14c846150 + 1;
  if (DAT_14c846154 < DAT_14c846150) {
    FUN_1467ff5ca(&DAT_14c846148,uVar3);
  }
  lVar4 = DAT_14c846148;
  *(undefined1 *)(DAT_14c846148 + lVar5 * 8) = 0x3d;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x447a0000;
  uVar3 = DAT_14c846150;
  lVar5 = (longlong)(int)DAT_14c846150;
  DAT_14c846150 = DAT_14c846150 + 1;
  if (DAT_14c846154 < DAT_14c846150) {
    FUN_1467ff5ca(&DAT_14c846148,uVar3);
  }
  lVar4 = DAT_14c846148;
  *(undefined1 *)(DAT_14c846148 + lVar5 * 8) = 0x3e;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x42700000;
  uVar3 = DAT_14c846150;
  lVar5 = (longlong)(int)DAT_14c846150;
  DAT_14c846150 = DAT_14c846150 + 1;
  if (DAT_14c846154 < DAT_14c846150) {
    FUN_1467ff5ca(&DAT_14c846148,uVar3);
  }
  lVar4 = DAT_14c846148;
  *(undefined1 *)(DAT_14c846148 + lVar5 * 8) = 0x3f;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x42700000;
  uVar3 = DAT_14c846150;
  lVar5 = (longlong)(int)DAT_14c846150;
  DAT_14c846150 = DAT_14c846150 + 1;
  if (DAT_14c846154 < DAT_14c846150) {
    FUN_1467ff5ca(&DAT_14c846148,uVar3);
  }
  lVar4 = DAT_14c846148;
  *(undefined1 *)(DAT_14c846148 + lVar5 * 8) = 0x40;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x41c00000;
  uVar3 = DAT_14c846150;
  lVar5 = (longlong)(int)DAT_14c846150;
  DAT_14c846150 = DAT_14c846150 + 1;
  if (DAT_14c846154 < DAT_14c846150) {
    FUN_1467ff5ca(&DAT_14c846148,uVar3);
  }
  lVar4 = DAT_14c846148;
  *(undefined1 *)(DAT_14c846148 + lVar5 * 8) = 0x41;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x41f37ea3;
  uVar3 = DAT_14c846150;
  lVar5 = (longlong)(int)DAT_14c846150;
  DAT_14c846150 = DAT_14c846150 + 1;
  if (DAT_14c846154 < DAT_14c846150) {
    FUN_1467ff5ca(&DAT_14c846148,uVar3);
  }
  lVar4 = DAT_14c846148;
  *(undefined1 *)(DAT_14c846148 + lVar5 * 8) = 0x42;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x41400000;
  uVar3 = DAT_14c846150;
  lVar5 = (longlong)(int)DAT_14c846150;
  DAT_14c846150 = DAT_14c846150 + 1;
  if (DAT_14c846154 < DAT_14c846150) {
    FUN_1467ff5ca(&DAT_14c846148,uVar3);
  }
  lVar4 = DAT_14c846148;
  *(undefined1 *)(DAT_14c846148 + lVar5 * 8) = 0x43;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0;
  iVar2 = DAT_14c846160;
  lVar5 = (longlong)(int)DAT_14c846160;
  DAT_14c846160 = DAT_14c846160 + 1;
  if (DAT_14c846164 < DAT_14c846160) {
    FUN_1467ff5ca(&DAT_14c846158,iVar2);
  }
  lVar4 = DAT_14c846158;
  *(undefined1 *)(DAT_14c846158 + lVar5 * 8) = 0x47;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x447a0000;
  uVar3 = DAT_14c846160;
  lVar5 = (longlong)(int)DAT_14c846160;
  DAT_14c846160 = DAT_14c846160 + 1;
  if (DAT_14c846164 < DAT_14c846160) {
    FUN_1467ff5ca(&DAT_14c846158,uVar3);
  }
  lVar4 = DAT_14c846158;
  *(undefined1 *)(DAT_14c846158 + lVar5 * 8) = 0x48;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x447a0000;
  uVar3 = DAT_14c846160;
  lVar5 = (longlong)(int)DAT_14c846160;
  DAT_14c846160 = DAT_14c846160 + 1;
  if (DAT_14c846164 < DAT_14c846160) {
    FUN_1467ff5ca(&DAT_14c846158,uVar3);
  }
  lVar4 = DAT_14c846158;
  *(undefined1 *)(DAT_14c846158 + lVar5 * 8) = 0x49;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0x447a0000;
  uVar3 = DAT_14c846160;
  lVar5 = (longlong)(int)DAT_14c846160;
  DAT_14c846160 = DAT_14c846160 + 1;
  if (DAT_14c846164 < DAT_14c846160) {
    FUN_1467ff5ca(&DAT_14c846158,uVar3);
  }
  lVar4 = DAT_14c846158;
  *(undefined1 *)(DAT_14c846158 + lVar5 * 8) = 0x4a;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 8) = 0;
  return;
}



// FUNCTION 14276edc5 FUN_14276edc5 body=167 status=ok
// SIG undefined FUN_14276edc5(void)

void FUN_14276edc5(void)

{
  if (DAT_14c846158 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c846148 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c846138 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c846128 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c846118 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c846108 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c8460f8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c8460e8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c8460d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14276ee6c FUN_14276ee6c body=1010 status=ok
// SIG undefined FUN_14276ee6c(void)

/* WARNING: Removing unreachable block (ram,0x00014276f094) */

void FUN_14276ee6c(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,char param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = param_3;
  if (param_6 <= param_3) {
    fVar5 = param_6;
  }
  *param_1 = fVar5;
  fVar5 = param_3;
  if (param_3 <= param_6) {
    fVar5 = param_6;
  }
  *param_2 = fVar5;
  if (param_9 == '\0') {
    return;
  }
  fVar6 = param_8 - param_5;
  param_4 = param_4 * fVar6;
  param_7 = param_7 * fVar6;
  fVar7 = param_6 * -6.0 + param_7 * 3.0 + param_3 * 6.0 + param_4 * 3.0;
  fVar5 = param_6 * 6.0 + ((param_3 * -6.0 + param_4 * -4.0) - (param_7 + param_7));
  if (ABS(fVar7) <= 1e-08) {
    if (ABS(fVar5) <= 1e-08) {
      return;
    }
    fVar5 = -param_4 / fVar5;
    fVar6 = fVar6 * fVar5 + param_5;
    if (fVar6 <= param_5) {
      return;
    }
    if (param_8 <= fVar6) {
      return;
    }
    fVar7 = fVar5 * fVar5;
    fVar6 = fVar5 * fVar7;
    fVar5 = (fVar7 * 3.0 - (fVar6 + fVar6)) * param_6 +
            (fVar6 - fVar7) * param_7 +
            (((fVar6 + fVar6) - fVar7 * 3.0) + 1.0) * param_3 +
            param_4 * ((fVar6 - (fVar7 + fVar7)) + fVar5);
  }
  else {
    fVar1 = fVar5 * fVar5 + fVar7 * -4.0 * param_4;
    if (fVar1 < 0.0) {
      return;
    }
    fVar1 = SQRT(fVar1);
    fVar2 = (fVar1 - fVar5) / (fVar7 + fVar7);
    fVar3 = fVar2 * fVar6 + param_5;
    if ((param_5 < fVar3) && (fVar3 < param_8)) {
      fVar3 = fVar2 * fVar2;
      fVar4 = fVar2 * fVar3;
      fVar3 = (fVar3 * 3.0 - (fVar4 + fVar4)) * param_6 +
              (fVar4 - fVar3) * param_7 +
              (((fVar4 + fVar4) - fVar3 * 3.0) + 1.0) * param_3 +
              ((fVar4 - (fVar3 + fVar3)) + fVar2) * param_4;
      fVar2 = *param_1;
      if (fVar3 <= *param_1) {
        fVar2 = fVar3;
      }
      *param_1 = fVar2;
      fVar2 = *param_2;
      if (*param_2 <= fVar3) {
        fVar2 = fVar3;
      }
      *param_2 = fVar2;
    }
    fVar5 = (-fVar5 - fVar1) / (fVar7 + fVar7);
    fVar6 = fVar6 * fVar5 + param_5;
    if (fVar6 <= param_5) {
      return;
    }
    if (param_8 <= fVar6) {
      return;
    }
    fVar7 = fVar5 * fVar5;
    fVar6 = fVar5 * fVar7;
    fVar5 = (fVar7 * 3.0 - (fVar6 + fVar6)) * param_6 +
            (fVar6 - fVar7) * param_7 +
            (((fVar6 + fVar6) - fVar7 * 3.0) + 1.0) * param_3 +
            param_4 * ((fVar6 - (fVar7 + fVar7)) + fVar5);
  }
  fVar6 = *param_1;
  if (fVar5 <= *param_1) {
    fVar6 = fVar5;
  }
  *param_1 = fVar6;
  fVar6 = *param_2;
  if (*param_2 <= fVar5) {
    fVar6 = fVar5;
  }
  *param_2 = fVar6;
  return;
}



// FUNCTION 14276f25e FUN_14276f25e body=1753 status=ok
// SIG undefined FUN_14276f25e(void)

double * FUN_14276f25e(double *param_1,double *param_2,double *param_3,double *param_4,
                      double *param_5)

{
  double dVar1;
  longlong lVar2;
  uint uVar3;
  double *pdVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_1c8 [32];
  double *local_1a8;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
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
  double local_128 [7];
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_130 = param_3[2];
  local_178 = param_4[2];
  local_148 = local_130 - local_178;
  local_188 = *param_3;
  local_190 = param_3[1];
  local_170 = *param_4;
  local_180 = param_4[1];
  local_150 = local_190 - local_180;
  local_158 = local_188 - local_170;
  dVar6 = param_5[2];
  local_198 = *param_5;
  local_140 = param_5[1];
  local_138 = local_180 - local_140;
  dVar12 = local_170 - local_198;
  dVar11 = local_158 * local_138 - dVar12 * local_150;
  dVar7 = local_178 - dVar6;
  dVar10 = local_148 * dVar12 - dVar7 * local_158;
  dVar8 = local_150 * dVar7 - local_138 * local_148;
  local_128[2] = dVar8 * local_150 - local_158 * dVar10;
  local_128[1] = dVar11 * local_158 - local_148 * dVar8;
  local_128[0] = dVar10 * local_148 - local_150 * dVar11;
  pdVar4 = local_128 + 3;
  local_128[3] = local_128[2] * local_178 + local_128[0] * local_170 + local_128[1] * local_180;
  local_160 = local_140 - local_190;
  local_168 = local_198 - local_188;
  local_128[6] = dVar8 * local_160 - local_168 * dVar10;
  dVar1 = dVar6 - local_130;
  local_128[5] = dVar11 * local_168 - dVar1 * dVar8;
  local_128[4] = dVar10 * dVar1 - local_160 * dVar11;
  local_f0 = local_128[6] * local_130 + local_128[4] * local_188 + local_128[5] * local_190;
  local_d8 = dVar8 * local_138 - dVar12 * dVar10;
  local_e0 = dVar11 * dVar12 - dVar7 * dVar8;
  local_e8 = dVar10 * dVar7 - dVar11 * local_138;
  local_d0 = local_d8 * dVar6 + local_e8 * local_198 + local_e0 * local_140;
  dVar8 = *param_2;
  uVar13 = SUB84(dVar8,0);
  uVar14 = (undefined4)((ulonglong)dVar8 >> 0x20);
  lVar2 = 0;
  uVar5 = 0;
  dVar7 = param_2[1];
  dVar10 = param_2[2];
  do {
    uVar3 = 1 << ((byte)lVar2 & 0x1f);
    dVar11 = pdVar4[-1] * dVar10 + pdVar4[-3] * dVar8 + pdVar4[-2] * dVar7;
    if (dVar11 < *pdVar4 || dVar11 == *pdVar4) {
      uVar3 = 0;
    }
    uVar5 = uVar5 | uVar3;
    lVar2 = lVar2 + 1;
    pdVar4 = pdVar4 + 4;
  } while (lVar2 != 3);
  uVar15 = (undefined4)((ulonglong)local_198 >> 0x20);
  switch(uVar5) {
  case 0:
    local_1a8 = param_5;
    FUN_1467f844c(param_1);
    goto LAB_14276f7cd;
  case 1:
    dVar6 = (dVar10 - local_178) * local_148 +
            (dVar8 - local_170) * local_158 + (dVar7 - local_180) * local_150;
    dVar7 = local_180;
    dVar8 = local_170;
    dVar10 = local_178;
    if (0.0 < dVar6) {
      dVar8 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
      uVar13 = SUB84(local_188,0);
      uVar14 = (undefined4)((ulonglong)local_188 >> 0x20);
      dVar10 = local_130;
      dVar7 = local_190;
      if (dVar8 <= dVar6) goto switchD_14276f603_default;
      dVar6 = dVar6 / dVar8;
      dVar10 = local_178 + local_148 * dVar6;
      dVar7 = local_180 + local_150 * dVar6;
      dVar8 = local_170 + local_158 * dVar6;
    }
    uVar13 = SUB84(dVar8,0);
    uVar14 = (undefined4)((ulonglong)dVar8 >> 0x20);
    goto switchD_14276f603_default;
  case 2:
    dVar8 = (dVar10 - local_130) * dVar1 +
            (dVar8 - local_188) * local_168 + (dVar7 - local_190) * local_160;
    dVar12 = local_188;
    dVar7 = local_190;
    dVar10 = local_130;
    if (0.0 < dVar8) {
      dVar11 = dVar1 * dVar1 + local_168 * local_168 + local_160 * local_160;
      uVar13 = SUB84(local_198,0);
      uVar14 = uVar15;
      dVar10 = dVar6;
      dVar7 = local_140;
      if (dVar11 <= dVar8) goto switchD_14276f603_default;
      dVar8 = dVar8 / dVar11;
      dVar10 = local_130 + dVar1 * dVar8;
      dVar7 = local_190 + local_160 * dVar8;
      dVar12 = local_188 + local_168 * dVar8;
    }
    goto LAB_14276f88c;
  case 3:
    param_1[2] = param_3[2];
    dVar6 = *param_3;
    dVar8 = param_3[1];
    break;
  case 4:
    dVar9 = dVar6 - local_178;
    dVar1 = local_140 - local_180;
    dVar11 = local_198 - local_170;
    dVar8 = (dVar10 - local_178) * dVar9 +
            (dVar8 - local_170) * dVar11 + (dVar7 - local_180) * dVar1;
    dVar12 = local_170;
    dVar7 = local_180;
    dVar10 = local_178;
    if (0.0 < dVar8) {
      dVar12 = dVar9 * dVar9 + dVar11 * dVar11 + dVar1 * dVar1;
      uVar13 = SUB84(local_198,0);
      uVar14 = uVar15;
      dVar10 = dVar6;
      dVar7 = local_140;
      if (dVar12 <= dVar8) goto switchD_14276f603_default;
      dVar8 = dVar8 / dVar12;
      dVar12 = local_170 + dVar11 * dVar8;
      dVar7 = local_180 + dVar1 * dVar8;
      dVar10 = local_178 + dVar9 * dVar8;
    }
LAB_14276f88c:
    uVar13 = SUB84(dVar12,0);
    uVar14 = (int)((ulonglong)dVar12 >> 0x20);
switchD_14276f603_default:
    *param_1 = (double)CONCAT44(uVar14,uVar13);
    param_1[1] = dVar7;
    param_1[2] = dVar10;
    if ((local_c0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  case 5:
    param_1[2] = param_4[2];
    dVar6 = *param_4;
    dVar8 = param_4[1];
    break;
  case 6:
    param_1[2] = param_5[2];
    dVar6 = *param_5;
    dVar8 = param_5[1];
    break;
  default:
    goto switchD_14276f603_default;
  }
  *param_1 = dVar6;
  param_1[1] = dVar8;
LAB_14276f7cd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 14276f93e FUN_14276f93e body=199 status=ok
// SIG undefined FUN_14276f93e(void)

void FUN_14276f93e(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *param_5;
  dVar2 = param_5[1];
  dVar4 = (param_4[1] - dVar2) * (*param_3 - dVar1) + (param_3[1] - dVar2) * (dVar1 - *param_4);
  dVar3 = ((param_4[1] - dVar2) * (*param_2 - dVar1) + (dVar1 - *param_4) * (param_2[1] - dVar2)) /
          dVar4;
  dVar4 = ((dVar2 - param_3[1]) * (*param_2 - dVar1) + (*param_3 - dVar1) * (param_2[1] - dVar2)) /
          dVar4;
  *param_1 = dVar3;
  param_1[1] = dVar4;
  param_1[2] = (1.0 - dVar3) - dVar4;
  return;
}



// FUNCTION 14276fa06 FUN_14276fa06 body=58 status=ok
// SIG undefined FUN_14276fa06(void)

undefined8 *
FUN_14276fa06(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1467f806c(param_2,param_3,param_4,param_5,param_1);
  return param_1;
}



// FUNCTION 14276fa40 FUN_14276fa40 body=293 status=ok
// SIG undefined FUN_14276fa40(void)

double * FUN_14276fa40(double *param_1,double *param_2,double *param_3)

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
  
  dVar1 = param_1[2];
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar6 = param_3[2];
  dVar8 = dVar3 * dVar6 - dVar5 * dVar1;
  dVar8 = dVar8 + dVar8;
  dVar7 = param_1[3];
  dVar9 = dVar2 * dVar5 - dVar4 * dVar3;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar1 * dVar4 - dVar6 * dVar2;
  dVar10 = dVar10 + dVar10;
  *param_2 = (dVar3 * dVar9 - dVar10 * dVar1) + dVar7 * dVar8 + dVar4;
  param_2[1] = (dVar1 * dVar8 - dVar9 * dVar2) + dVar7 * dVar10 + dVar5;
  param_2[2] = (dVar2 * dVar10 - dVar8 * dVar3) + dVar7 * dVar9 + dVar6;
  return param_2;
}



// FUNCTION 14276fb66 FUN_14276fb66 body=65 status=ok
// SIG undefined FUN_14276fb66(void)

ulonglong FUN_14276fb66(double *param_1)

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



// FUNCTION 14276fba8 FUN_14276fba8 body=399 status=ok
// SIG undefined FUN_14276fba8(void)

void FUN_14276fba8(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  *param_3 = param_1[4];
  param_3[1] = param_1[5];
  param_3[2] = param_1[6];
  *param_4 = param_1[8];
  param_4[1] = param_1[9];
  param_4[2] = param_1[10];
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (9.99999993922529e-09 < dVar4) {
    dVar4 = 1.0 / SQRT(dVar4);
    *param_2 = dVar1 * dVar4;
    param_2[1] = dVar2 * dVar4;
    param_2[2] = dVar3 * dVar4;
  }
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (9.99999993922529e-09 < dVar4) {
    dVar4 = 1.0 / SQRT(dVar4);
    *param_3 = dVar1 * dVar4;
    param_3[1] = dVar2 * dVar4;
    param_3[2] = dVar3 * dVar4;
  }
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar3 = param_4[2];
  dVar4 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (9.99999993922529e-09 < dVar4) {
    dVar4 = 1.0 / SQRT(dVar4);
    *param_4 = dVar1 * dVar4;
    param_4[1] = dVar2 * dVar4;
    param_4[2] = dVar3 * dVar4;
  }
  return;
}



// FUNCTION 14276fd37 FUN_14276fd37 body=176 status=ok
// SIG undefined FUN_14276fd37(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14276fd37(undefined1 (*param_1) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  auVar5 = minps(*param_1,_DAT_149e1f030);
  auVar5 = maxps(auVar5,_DAT_149e1f040);
  fVar3 = auVar5._0_4_ * 1.442695 + 0.5;
  fVar4 = auVar5._4_4_ * 1.442695 + 0.5;
  fVar1 = (float)(int)fVar3;
  fVar2 = (float)(int)fVar4;
  fVar1 = fVar1 - (float)(-(uint)(fVar3 < fVar1) & 0x3f800000);
  fVar2 = fVar2 - (float)(-(uint)(fVar4 < fVar2) & 0x3f800000);
  fVar3 = fVar1 * -0.6933594 + auVar5._0_4_ + fVar1 * 0.00021219444;
  fVar4 = fVar2 * -0.6933594 + auVar5._4_4_ + fVar2 * 0.00021219444;
  return CONCAT44((float)((int)fVar2 * 0x800000 + 0x3f800000) *
                  ((((((fVar4 * 0.00019875691 + 0.0013981999) * fVar4 + 0.008333452) * fVar4 +
                     0.041665796) * fVar4 + 0.16666666) * fVar4 + 0.5) * fVar4 * fVar4 + fVar4 + 1.0
                  ),(float)((int)fVar1 * 0x800000 + 0x3f800000) *
                    ((((((fVar3 * 0.00019875691 + 0.0013981999) * fVar3 + 0.008333452) * fVar3 +
                       0.041665796) * fVar3 + 0.16666666) * fVar3 + 0.5) * fVar3 * fVar3 + fVar3 +
                    1.0));
}



// FUNCTION 14276fde8 FUN_14276fde8 body=17 status=ok
// SIG undefined FUN_14276fde8(void)

void FUN_14276fde8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  *param_2 = uVar1;
  return;
}



// FUNCTION 14276fdf9 FUN_14276fdf9 body=69 status=ok
// SIG undefined FUN_14276fdf9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14276fdf9(void)

{
  if (DAT_14c846200 != (LPVOID)0x0) {
    VirtualFree(DAT_14c846200,0,0x8000);
    DAT_14c846200 = (LPVOID)0x0;
    _DAT_14c846208 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014276fe37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c8461d8);
  return;
}



// FUNCTION 14276fe3e FUN_14276fe3e body=377 status=ok
// SIG undefined FUN_14276fe3e(void)

longlong * FUN_14276fe3e(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_3 == 0) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    puVar4 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    puVar4[1] = lVar2;
    puVar4[2] = lVar3;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_149e25c90;
    LOCK();
    puVar4[3] = puVar4[3] | 0x4000000000000000;
    UNLOCK();
    uVar5 = 0x2000000000000000;
LAB_14276feae:
    LOCK();
    puVar4[3] = puVar4[3] | uVar5;
    UNLOCK();
  }
  else {
    FUN_1467fe202(param_3,&local_50);
    lVar2 = param_2[1];
    if ((lVar2 == local_48) && ((lVar2 == 0 || (*param_2 == local_50)))) {
      lVar2 = *param_3;
      *param_3 = 0;
      *param_1 = lVar2;
      goto LAB_14276fed5;
    }
    puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar4[1] = *param_2;
    puVar4[2] = lVar2;
    puVar4[3] = 0;
    *puVar4 = &PTR_FUN_149e25cb0;
    lVar2 = *param_3;
    *param_3 = 0;
    puVar4[4] = lVar2;
    LOCK();
    puVar4[3] = puVar4[3] | 0x4000000000000000;
    UNLOCK();
    LOCK();
    puVar4[3] = puVar4[3] | 0x2000000000000000;
    UNLOCK();
    if ((puVar4[4] == 0) || ((*(ulonglong *)(puVar4[4] + 0x18) >> 0x3c & 1) != 0)) {
      uVar5 = 0x1000000000000000;
      goto LAB_14276feae;
    }
  }
  *param_1 = (longlong)puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar1 = puVar4 + 3;
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 0) {
      LOCK();
      puVar4[3] = puVar4[3] + 0x40000000;
      UNLOCK();
    }
  }
LAB_14276fed5:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14276ffb8 TryAcquireSRWLockExclusive body=7 status=ok
// SIG BOOLEAN TryAcquireSRWLockExclusive(PSRWLOCK SRWLock)

BOOLEAN __stdcall TryAcquireSRWLockExclusive(PSRWLOCK SRWLock)

{
  BOOLEAN BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014276ffb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TryAcquireSRWLockExclusive(SRWLock);
  return BVar1;
}



// FUNCTION 14276ffc0 FUN_14276ffc0 body=439 status=ok
// SIG undefined FUN_14276ffc0(void)

void FUN_14276ffc0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *param_2;
  lVar3 = param_2[1];
  lVar4 = *param_1;
  if (*param_3 == 0) {
    puVar5 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    puVar5[1] = lVar7;
    puVar5[2] = lVar3;
    puVar5[3] = 0;
    *puVar5 = &PTR_FUN_149e25c90;
    LOCK();
    puVar5[3] = puVar5[3] | 0x4000000000000000;
    UNLOCK();
    uVar6 = 0x2000000000000000;
  }
  else {
    FUN_1467fe202(param_3,&local_40);
    if ((lVar3 == local_38) && ((lVar3 == 0 || (lVar7 == local_40)))) {
      puVar5 = (undefined8 *)*param_3;
      goto LAB_142770038;
    }
    puVar5 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    puVar5[1] = lVar7;
    puVar5[2] = lVar3;
    puVar5[3] = 0;
    *puVar5 = &PTR_FUN_149e25cb0;
    lVar7 = *param_3;
    if (lVar7 != 0) {
      LOCK();
      puVar1 = (ulonglong *)(lVar7 + 0x18);
      uVar6 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((uVar6 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)(lVar7 + 0x18) = *(longlong *)(lVar7 + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    puVar5[4] = lVar7;
    LOCK();
    puVar5[3] = puVar5[3] | 0x4000000000000000;
    UNLOCK();
    LOCK();
    puVar5[3] = puVar5[3] | 0x2000000000000000;
    UNLOCK();
    if ((puVar5[4] != 0) && ((*(ulonglong *)(puVar5[4] + 0x18) >> 0x3c & 1) == 0))
    goto LAB_142770038;
    uVar6 = 0x1000000000000000;
  }
  LOCK();
  puVar5[3] = puVar5[3] | uVar6;
  UNLOCK();
LAB_142770038:
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    puVar1 = puVar5 + 3;
    uVar6 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar6 & 0x3fffffff) == 0) {
      LOCK();
      puVar5[3] = puVar5[3] + 0x40000000;
      UNLOCK();
    }
  }
  iVar2 = *(int *)(lVar4 + 0x10);
  *(uint *)(lVar4 + 0x10) = iVar2 + 1U;
  if (*(uint *)(lVar4 + 0x14) < iVar2 + 1U) {
    FUN_1467aae4a(lVar4,iVar2);
  }
  lVar7 = *(longlong *)(lVar4 + 8);
  if (*(longlong *)(lVar4 + 8) == 0) {
    lVar7 = lVar4;
  }
  *(undefined8 **)(lVar7 + (longlong)iVar2 * 8) = puVar5;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142770178 FUN_142770178 body=585 status=ok
// SIG undefined FUN_142770178(void)

void FUN_142770178(ulonglong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong _Size;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _Src = (void *)*param_2;
  _Size = param_2[1];
  uVar6 = *param_1;
  if (uVar6 == _Size) {
    puVar2 = (undefined8 *)param_1[1];
    *puVar2 = _Src;
    puVar2[1] = _Size;
    goto LAB_142770313;
  }
  if (param_1[5] == 0) {
    plVar3 = *(longlong **)param_1[2];
    if (plVar3 == (longlong *)0x0) {
      uVar7 = 0;
    }
    else {
      if ((plVar3[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      uVar7 = plVar3[2];
      uVar6 = *param_1;
    }
    if (uVar7 < uVar6) {
      local_48 = uVar6;
      (**(code **)param_1[3])(&local_50,((undefined8 *)param_1[3])[1]);
      plVar4 = local_50;
      plVar3 = *(longlong **)param_1[2];
      local_50 = (longlong *)0x0;
      *(longlong **)param_1[2] = plVar4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 3;
        lVar1 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (((uint)lVar1 & 0x3fffffff) == 1) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          plVar3[1] = 0;
          plVar3[2] = 0;
          LOCK();
          puVar5 = (ulonglong *)(plVar3 + 3);
          uVar6 = *puVar5;
          *puVar5 = *puVar5 - 0x40000000;
          UNLOCK();
          if ((uVar6 & 0xfffffffc0000000) == 0x40000000) {
            (**(code **)*plVar3)(plVar3,1);
          }
        }
      }
      plVar3 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 3;
        lVar1 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (((uint)lVar1 & 0x3fffffff) == 1) {
          (**(code **)(*local_50 + 0x10))(local_50);
          plVar3[1] = 0;
          plVar3[2] = 0;
          LOCK();
          puVar5 = (ulonglong *)(plVar3 + 3);
          uVar6 = *puVar5;
          *puVar5 = *puVar5 - 0x40000000;
          UNLOCK();
          if ((uVar6 & 0xfffffffc0000000) == 0x40000000) {
            (**(code **)*plVar3)(plVar3,1);
          }
        }
      }
    }
    plVar4 = (longlong *)param_1[2];
    plVar3 = (longlong *)*plVar4;
    if (plVar3 == (longlong *)0x0) {
      uVar6 = 0;
LAB_14277033d:
      uVar7 = 0;
    }
    else {
      if ((plVar3[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      uVar6 = plVar3[2];
      plVar4 = (longlong *)*plVar4;
      if (plVar4 == (longlong *)0x0) goto LAB_14277033d;
      if ((plVar4[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      uVar7 = plVar4[1];
    }
    puVar5 = (ulonglong *)param_1[1];
    uVar8 = *param_1;
    if (uVar6 < *param_1) {
      uVar8 = uVar6;
    }
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    *puVar5 = uVar7;
    puVar5[1] = uVar8;
  }
  if (_Size != 0) {
    memcpy((void *)param_1[4],_Src,_Size);
  }
  uVar6 = param_1[5];
  if (uVar6 < _Size) {
    _Size = uVar6;
  }
  param_1[4] = param_1[4] + _Size;
  param_1[5] = uVar6 - _Size;
LAB_142770313:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427703c2 FUN_1427703c2 body=60 status=ok
// SIG undefined FUN_1427703c2(void)

void FUN_1427703c2(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong _Size;
  
  _Size = param_2[1];
  if (_Size != 0) {
    memcpy((void *)*param_1,(void *)*param_2,_Size);
  }
  uVar1 = param_1[1];
  if (uVar1 < _Size) {
    _Size = uVar1;
  }
  *param_1 = *param_1 + _Size;
  param_1[1] = uVar1 - _Size;
  return;
}



// FUNCTION 1427703fe FUN_1427703fe body=66 status=ok
// SIG undefined FUN_1427703fe(void)

void FUN_1427703fe(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142770442 FUN_142770442 body=37 status=ok
// SIG undefined FUN_142770442(void)

undefined8
FUN_142770442(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  (**(code **)(*(longlong *)*param_1 + 0x38))
            ((longlong *)*param_1,*param_2,*param_3,*param_4,*(undefined4 *)(param_4 + 1));
  return 1;
}



// FUNCTION 142770467 FUN_142770467 body=1452 status=ok
// SIG undefined FUN_142770467(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142770467(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float _X;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar30 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar31 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar33 [16];
  
  lVar12 = 0;
  DAT_14c845ff0 = 0;
  DAT_14c845ff8 = 0;
  _DAT_14c845fd0 = (undefined1  [16])0x0;
  _DAT_14c845ffc = 0xffffffff00000080;
  _DAT_14c846004 = 0;
  DAT_14c846010 = 0;
  _DAT_14c846018 = 0;
  _DAT_14c846020 = (undefined1  [16])0x0;
  atexit((_func_5014 *)&LAB_14276e1b4);
  auVar30 = pmovsxbd(unaff_XMM8,0xfdfeff00);
  auVar31 = pmovsxbd(unaff_XMM9,0x1010101);
  auVar32 = pmovsxbd(unaff_XMM10,0xfcfcfcfc);
  auVar33 = pmovsxbd(unaff_XMM11,0x3020100);
  uVar11 = 0;
  uVar9 = 0;
  do {
    uVar7 = -uVar11;
    if ((int)-uVar11 < 0) {
      uVar7 = uVar11;
    }
    iVar8 = 1;
    iVar10 = 1;
    iVar13 = uVar9 - uVar7;
    if (iVar13 != 0) {
      uVar14 = iVar13 - 1;
      auVar21._0_4_ = iVar13 + auVar30._0_4_;
      auVar21._4_4_ = iVar13 + auVar30._4_4_;
      auVar21._8_4_ = iVar13 + auVar30._8_4_;
      auVar21._12_4_ = iVar13 + auVar30._12_4_;
      auVar24 = auVar31;
      iVar10 = 4;
      do {
        auVar22 = auVar24;
        auVar24 = pmulld(auVar22,auVar21);
        auVar25._0_4_ = auVar21._0_4_ + auVar32._0_4_;
        auVar25._4_4_ = auVar21._4_4_ + auVar32._4_4_;
        auVar25._8_4_ = auVar21._8_4_ + auVar32._8_4_;
        auVar25._12_4_ = auVar21._12_4_ + auVar32._12_4_;
        iVar15 = iVar10 + -4;
        iVar16 = iVar10 + (iVar13 + 3U & 0xfffffffc);
        auVar21 = auVar25;
        iVar10 = iVar15;
      } while (iVar16 != 8);
      iVar15 = -iVar15;
      auVar26._4_4_ = iVar15;
      auVar26._0_4_ = iVar15;
      auVar26._8_4_ = iVar15;
      auVar26._12_4_ = iVar15;
      auVar26 = auVar26 | auVar33;
      uVar3 = auVar26._0_4_;
      uVar4 = auVar26._4_4_;
      uVar5 = auVar26._8_4_;
      uVar6 = auVar26._12_4_;
      auVar17._0_4_ = -(uint)(((uVar3 < uVar14) * uVar3 | (uVar3 >= uVar14) * uVar14) == uVar3);
      auVar17._4_4_ = -(uint)(((uVar4 < uVar14) * uVar4 | (uVar4 >= uVar14) * uVar14) == uVar4);
      auVar17._8_4_ = -(uint)(((uVar5 < uVar14) * uVar5 | (uVar5 >= uVar14) * uVar14) == uVar5);
      auVar17._12_4_ = -(uint)(((uVar6 < uVar14) * uVar6 | (uVar6 >= uVar14) * uVar14) == uVar6);
      auVar21 = blendvps(auVar22,auVar24,auVar17);
      auVar24._0_8_ = auVar21._8_8_;
      auVar24._8_4_ = auVar21._8_4_;
      auVar24._12_4_ = auVar21._12_4_;
      auVar24 = pmulld(auVar24,auVar21);
      uVar20 = auVar24._4_4_;
      auVar22._4_4_ = uVar20;
      auVar22._0_4_ = uVar20;
      auVar22._8_4_ = uVar20;
      auVar22._12_4_ = uVar20;
      auVar24 = pmulld(auVar22,auVar24);
      iVar10 = auVar24._0_4_;
    }
    iVar13 = uVar7 + uVar9;
    if (iVar13 != 0) {
      uVar7 = iVar13 - 1;
      auVar27._0_4_ = iVar13 + auVar30._0_4_;
      auVar27._4_4_ = iVar13 + auVar30._4_4_;
      auVar27._8_4_ = iVar13 + auVar30._8_4_;
      auVar27._12_4_ = iVar13 + auVar30._12_4_;
      auVar24 = auVar31;
      iVar8 = 4;
      do {
        auVar21 = auVar24;
        auVar24 = pmulld(auVar21,auVar27);
        auVar28._0_4_ = auVar27._0_4_ + auVar32._0_4_;
        auVar28._4_4_ = auVar27._4_4_ + auVar32._4_4_;
        auVar28._8_4_ = auVar27._8_4_ + auVar32._8_4_;
        auVar28._12_4_ = auVar27._12_4_ + auVar32._12_4_;
        iVar15 = iVar8 + -4;
        iVar16 = iVar8 + (iVar13 + 3U & 0xfffffffc);
        auVar27 = auVar28;
        iVar8 = iVar15;
      } while (iVar16 != 8);
      iVar15 = -iVar15;
      auVar29._4_4_ = iVar15;
      auVar29._0_4_ = iVar15;
      auVar29._8_4_ = iVar15;
      auVar29._12_4_ = iVar15;
      auVar29 = auVar29 | auVar33;
      uVar14 = auVar29._0_4_;
      uVar3 = auVar29._4_4_;
      uVar4 = auVar29._8_4_;
      uVar5 = auVar29._12_4_;
      auVar18._0_4_ = -(uint)(((uVar14 < uVar7) * uVar14 | (uVar14 >= uVar7) * uVar7) == uVar14);
      auVar18._4_4_ = -(uint)(((uVar3 < uVar7) * uVar3 | (uVar3 >= uVar7) * uVar7) == uVar3);
      auVar18._8_4_ = -(uint)(((uVar4 < uVar7) * uVar4 | (uVar4 >= uVar7) * uVar7) == uVar4);
      auVar18._12_4_ = -(uint)(((uVar5 < uVar7) * uVar5 | (uVar5 >= uVar7) * uVar7) == uVar5);
      auVar24 = blendvps(auVar21,auVar24,auVar18);
      auVar19._0_8_ = auVar24._8_8_;
      auVar19._8_4_ = auVar24._8_4_;
      auVar19._12_4_ = auVar24._12_4_;
      auVar24 = pmulld(auVar19,auVar24);
      uVar20 = auVar24._4_4_;
      auVar23._4_4_ = uVar20;
      auVar23._0_4_ = uVar20;
      auVar23._8_4_ = uVar20;
      auVar23._12_4_ = uVar20;
      auVar24 = pmulld(auVar23,auVar24);
      iVar8 = auVar24._0_4_;
    }
    _X = ((float)(int)(uVar9 * 2 + 1) / 12.566371) * ((float)iVar10 / (float)iVar8);
    if (_X < 0.0) {
      sqrtf(_X);
    }
    uVar7 = uVar11 + 1;
    bVar2 = (int)uVar9 <= (int)uVar11;
    bVar1 = (int)uVar11 < (int)uVar9;
    uVar11 = ~uVar9;
    if (bVar1) {
      uVar11 = uVar7;
    }
    uVar9 = bVar2 + uVar9;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 9);
  _DAT_14c846060 = 0;
  uRam000000014c846064 = 0;
  uRam000000014c846068 = 0;
  uRam000000014c84606c = 0x3f800000;
  _DAT_14c846070 = (undefined1  [16])0x0;
  _DAT_14c846080 = &DAT_3f8000003f800000;
  uRam000000014c846088 = 0x3f800000;
  _DAT_14c846480 = (undefined1  [16])0x0;
  DAT_14c846490 = 0;
  DAT_14c846498 = 0x3ff0000000000000;
  _DAT_14c8464a0 = (undefined1  [16])0x0;
  _DAT_14c8464b0 = (undefined1  [16])0x0;
  DAT_14c8464c0 = 0x3ff0000000000000;
  DAT_14c8464c8 = 0x3ff0000000000000;
  DAT_14c8464d0 = 0x3ff0000000000000;
  uRam000000014c8464d8 = 0;
  DAT_14c846250 = 0x3f800000;
  _DAT_14c846254 = (undefined1  [16])0x0;
  DAT_14c846264 = 0x3f800000;
  _DAT_14c846268 = (undefined1  [16])0x0;
  DAT_14c846278 = 0x3f800000;
  _DAT_14c84627c = (undefined1  [16])0x0;
  DAT_14c84628c = 0x3f800000;
  DAT_14c846400 = 0x3ff0000000000000;
  _DAT_14c846408 = (undefined1  [16])0x0;
  _DAT_14c846418 = (undefined1  [16])0x0;
  DAT_14c846428 = 0x3ff0000000000000;
  _DAT_14c846430 = (undefined1  [16])0x0;
  _DAT_14c846440 = (undefined1  [16])0x0;
  DAT_14c846450 = 0x3ff0000000000000;
  _DAT_14c846458 = (undefined1  [16])0x0;
  _DAT_14c846468 = (undefined1  [16])0x0;
  DAT_14c846478 = 0x3ff0000000000000;
  DAT_14c84633c._4_4_ = 0;
  DAT_14c846344 = 0;
  DAT_14c846348 = 0;
  DAT_14c84634c = 0x3f800000;
  DAT_14c8463e0 = 0;
  _DAT_14c8463d0 = (undefined1  [16])0x0;
  DAT_14c8463e8 = 0x3ff0000000000000;
  _DAT_14c846090 = 0;
  _DAT_14c846098 = 0;
  DAT_14c846508 = 0;
  _DAT_14c8464f8 = (undefined1  [16])0x0;
  DAT_14c846330 = 0;
  DAT_14c846338 = 0;
  DAT_14c846350 = &DAT_3f8000003f800000;
  DAT_14c846358 = 0x3f800000;
  _DAT_14c84616c = 0;
  DAT_14c846174 = 0x3f800000;
  DAT_14c846178 = 0;
  DAT_14c846180 = 0xbf800000;
  DAT_14c846184 = 0x3f800000;
  DAT_14c84618c = 0;
  DAT_14c846190 = 0xbf800000;
  DAT_14c846198 = 0;
  DAT_14c84619c = 0x3f80000000000000;
  DAT_14c8461a4 = 0;
  DAT_14c8461a8 = 0xbf80000000000000;
  DAT_14c8461b0 = 0;
  _DAT_14c84637c = 0x3f800000;
  DAT_14c846384 = 0;
  DAT_14c846370 = 0x3f80000000000000;
  DAT_14c846378 = 0;
  DAT_14c846364 = 0;
  DAT_14c84636c = 0x3f800000;
  DAT_14c8464f0 = 0;
  _DAT_14c8464e0 = (undefined1  [16])0x0;
  DAT_14c846510 = 0x3ff0000000000000;
  DAT_14c846518 = 0x3ff0000000000000;
  DAT_14c846520 = 0x3ff0000000000000;
  _DAT_14c8462c0 = (undefined1  [16])0x0;
  DAT_14c8462d0 = 0x3ff0000000000000;
  _DAT_14c8462f0 = (undefined1  [16])0x0;
  DAT_14c846300 = 0xbff0000000000000;
  DAT_14c8462d8 = 0x3ff0000000000000;
  _DAT_14c8462e0 = (undefined1  [16])0x0;
  DAT_14c846308 = 0xbff0000000000000;
  _DAT_14c846310 = (undefined1  [16])0x0;
  DAT_14c846290 = 0;
  DAT_14c846298 = 0x3ff0000000000000;
  DAT_14c8462a0 = 0;
  DAT_14c8462a8 = 0;
  DAT_14c8462b0 = 0xbff0000000000000;
  DAT_14c8462b8 = 0;
  DAT_14c8463a0 = 0x3ff0000000000000;
  _DAT_14c8463a8 = (undefined1  [16])0x0;
  DAT_14c846388 = 0;
  DAT_14c846390 = 0x3ff0000000000000;
  DAT_14c846398 = 0;
  _DAT_14c8463b8 = (undefined1  [16])0x0;
  DAT_14c8463c8 = 0x3ff0000000000000;
  DAT_14c84635c = 0;
  DAT_14c8461b4 = &DAT_3f8000003f800000;
  _DAT_14c8461bc = 0x3f3504f33f3504f3;
  _DAT_14c8463f0 = (undefined1  [16])0x0;
  DAT_14c846320 = 0x3ff0000000000000;
  DAT_14c846328 = 0x3ff0000000000000;
  _DAT_14c8461c8 = 0x3fe6a09e60000000;
  _DAT_14c8461d0 = 0x3fe6a09e60000000;
  FUN_140011aa6();
  DAT_14c846240 = DAT_14c846200;
  FUN_140011aa6();
  DAT_14c846248 = DAT_14c846210;
  FUN_1467c1d7c(&DAT_14c846238);
  return;
}



// FUNCTION 142770a47 FUN_142770a47 body=49 status=ok
// SIG undefined FUN_142770a47(void)

void FUN_142770a47(void)

{
  FUN_1447a1747(DAT_14c867010,DAT_14c867018);
  if (DAT_14c867010 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142770a9a FUN_142770a9a body=27 status=ok
// SIG undefined FUN_142770a9a(void)

undefined8 FUN_142770a9a(void)

{
  undefined8 uVar1;
  
  if ((DAT_14c866ff0 == '\0') && (DAT_14c846570 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142770aaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_14c846570)();
    return uVar1;
  }
  return 1;
}



// FUNCTION 142770ab6 FUN_142770ab6 body=135 status=ok
// SIG undefined FUN_142770ab6(void)

void FUN_142770ab6(void)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_145c232fc();
  FUN_140056680(local_48,&DAT_149dfb77a);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142770b3e FUN_142770b3e body=69 status=ok
// SIG undefined FUN_142770b3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142770b3e(void)

{
  _DAT_14c8465d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142770b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8465d8,1);
  return;
}



// FUNCTION 142770b83 FUN_142770b83 body=69 status=ok
// SIG undefined FUN_142770b83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142770b83(void)

{
  _DAT_14c8465e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142770bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c8465e8,1);
  return;
}



// FUNCTION 142770bc8 FUN_142770bc8 body=69 status=ok
// SIG undefined FUN_142770bc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142770bc8(void)

{
  _DAT_14c8465f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142770c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c846600,1);
  return;
}



// FUNCTION 142770c0d FUN_142770c0d body=69 status=ok
// SIG undefined FUN_142770c0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142770c0d(void)

{
  _DAT_14c846608 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142770c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c846610,1);
  return;
}



// FUNCTION 142770c52 FUN_142770c52 body=69 status=ok
// SIG undefined FUN_142770c52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142770c52(void)

{
  _DAT_14c846620 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142770c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c846628,1);
  return;
}



// FUNCTION 142770c97 FUN_142770c97 body=69 status=ok
// SIG undefined FUN_142770c97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142770c97(void)

{
  _DAT_14c846638 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142770cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c846640,1);
  return;
}



// FUNCTION 142770cdc FUN_142770cdc body=69 status=ok
// SIG undefined FUN_142770cdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142770cdc(void)

{
  _DAT_14c846650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142770d1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c846658,1);
  return;
}



// FUNCTION 142770d21 FUN_142770d21 body=69 status=ok
// SIG undefined FUN_142770d21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142770d21(void)

{
  _DAT_14c846668 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142770d63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c846670,1);
  return;
}



// FUNCTION 142770d77 FUN_142770d77 body=69 status=ok
// SIG undefined FUN_142770d77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142770d77(void)

{
  _DAT_14c846688 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142770db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c846690,1);
  return;
}



// FUNCTION 142770dbc FUN_142770dbc body=258 status=ok
// SIG undefined FUN_142770dbc(void)

undefined8 * FUN_142770dbc(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *param_1 = &PTR_LAB_149e26c80;
  *(undefined1 *)(param_1 + 1) = param_3;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  puVar1 = param_1 + 2;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x1d));
  if (puVar1 != param_2) {
    iVar2 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 3) = iVar2;
    if (iVar2 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  FUN_140dc5480();
  FUN_142770ebe(&DAT_14c8466b0,param_2,param_1);
  return param_1;
}



// FUNCTION 142770ebe FUN_142770ebe body=257 status=ok
// SIG undefined FUN_142770ebe(void)

bool FUN_142770ebe(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = (int)param_2[1];
  uVar4 = 0;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    lVar6 = 0;
    uVar4 = 0;
    do {
      uVar5 = ((uint)(0x19 < (ushort)puVar2[lVar6] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar6]) -
              0x20;
      uVar7 = (uint)(uVar4 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar4 ^ uVar5) & 0xff) * 4);
      uVar4 = (ulonglong)
              (uVar7 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
      lVar6 = lVar6 + 1;
    } while (iVar3 != (int)lVar6);
  }
  local_48 = param_3;
  iVar1 = FUN_140dc56a8(param_1 + 0x278,uVar4,param_2);
  if (iVar1 == -1) {
    local_38 = &local_48;
    local_40 = param_2;
    FUN_14156c6cc(param_1 + 0x278,local_2c,&local_40,0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1 == -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142770fc0 FUN_142770fc0 body=49 status=ok
// SIG undefined FUN_142770fc0(void)

void FUN_142770fc0(void)

{
  FUN_1447a1747(DAT_14c8466a0,DAT_14c8466a8);
  if (DAT_14c8466a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142770ff6 FUN_142770ff6 body=5657 status=ok
// SIG undefined FUN_142770ff6(void)

ulonglong FUN_142770ff6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  void *pvVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint *puVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  int iVar24;
  undefined8 unaff_RBP;
  undefined7 uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  longlong *plVar31;
  ulonglong uVar32;
  undefined1 auStack_2a8 [32];
  longlong *local_288;
  undefined4 local_280;
  longlong *local_270;
  longlong *local_268;
  uint *local_260;
  void **local_258;
  longlong *local_250;
  undefined8 local_248;
  longlong *local_240;
  ulonglong local_238;
  undefined4 local_22c;
  longlong local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  void *local_208;
  uint local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  ulonglong uStack_1f0;
  void *local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined8 uStack_1d0;
  LARGE_INTEGER local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  longlong *local_158;
  undefined8 uStack_150;
  LARGE_INTEGER local_148;
  LARGE_INTEGER *local_140;
  longlong *local_138 [2];
  longlong *local_128;
  char local_fc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8 [4];
  uint *local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar29 = param_1[0x68];
  *(undefined4 *)(param_1 + 0x68) = 0x1000000;
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  uVar9 = (int)lVar29;
  if ((char)param_1[0x75] == '\x01') {
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_22c = (int)lVar29;
    FUN_146808aba(0,0);
    uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
    uVar26 = (uint)DAT_14c872bf0;
    if ((DAT_14c846b14 & 1) == 0) {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar7 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    if ((cVar7 != '\0') || (uVar16 = 0x300, DAT_14c872bf0 == 1)) {
      uVar16 = 0x200;
    }
    cVar7 = FUN_140b3f358();
    uVar15 = uVar16 & 0x100;
    if (cVar7 == '\0') {
      uVar15 = uVar16;
    }
    local_240 = (longlong *)CONCAT44(local_240._4_4_,uVar15);
    iVar28 = (int)param_1[0x54];
    local_270 = param_1;
    if (iVar28 == 0) {
      uVar32 = 1;
      uVar22 = 0;
      iVar27 = 0;
      iVar24 = 0;
    }
    else {
      puVar13 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 0x51);
      }
      uVar16 = *puVar13;
      if (uVar16 == 0) {
        iVar27 = iVar28 + 0x1e;
        if (-1 < iVar28 + -1) {
          iVar27 = iVar28 + -1;
        }
        uVar22 = 0;
        uVar20 = (ulonglong)(uint)(iVar27 >> 5);
        if (iVar27 >> 5 < 1) {
          uVar20 = uVar22;
        }
        iVar27 = 0;
        do {
          if (uVar20 == uVar22) goto LAB_142771383;
          iVar27 = iVar27 + 0x20;
          uVar16 = puVar13[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar22 = 0;
        iVar27 = 0;
      }
      uVar32 = (ulonglong)(-uVar16 & uVar16);
      uVar20 = uVar32 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      iVar24 = (iVar27 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
      if (iVar28 <= iVar24) {
        iVar24 = iVar28;
      }
    }
    if (iVar24 < iVar28) {
      local_268 = (longlong *)CONCAT44(local_268._4_4_,(uVar26 & 1) * 8 + 6);
      uVar26 = 0xffffffff;
      local_260 = (uint *)(param_1 + 0x51);
      do {
        plVar19 = local_270;
        local_250 = (longlong *)CONCAT44(local_250._4_4_,uVar26);
        local_248 = CONCAT44(local_248._4_4_,iVar27);
        plVar14 = *(longlong **)(local_270[0x4f] + 0x10 + (longlong)iVar24 * 0x20);
        local_238 = uVar22;
        uVar10 = (**(code **)(*plVar14 + 8))(plVar14);
        uVar11 = (ulonglong)uVar10;
        uVar26 = *(uint *)(plVar19 + 0x68);
        uVar16 = (uint)local_268 & uVar10;
        uVar15 = (uint)local_240 & uVar10;
        QueryPerformanceCounter(&local_1c8);
        if (((((uVar26 & uVar10) != 0) && ((uVar10 & 0x300) == 0 || uVar15 != 0)) &&
            (uVar11 = (ulonglong)(uVar10 & 0x10000), (uVar10 & 0x10000) == 0)) &&
           ((uVar10 & 0x1f) == 0 || uVar16 != 0)) {
          local_1c8.QuadPart = 0;
          uStack_1c0 = (longlong *)0x0;
          FUN_14680158a(plVar14,&local_1c8);
          FUN_146801a30(&local_1f8,&local_1c8);
          FUN_146808aba(local_1c8.QuadPart,(ulonglong)uStack_1c0 & 0xffffffff);
          if ((void *)local_1c8.QuadPart != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        QueryPerformanceCounter(&local_1c8);
        uVar26 = (uint)local_250 & ~(uint)uVar32;
        puVar13 = (uint *)local_270[0x53];
        if ((uint *)local_270[0x53] == (uint *)0x0) {
          puVar13 = local_260;
        }
        iVar28 = (int)local_270[0x54];
        iVar24 = (int)local_238;
        lVar29 = (longlong)iVar24;
        uVar16 = puVar13[lVar29] & uVar26;
        uVar22 = local_238;
        iVar27 = (int)local_248;
        if (uVar16 == 0) {
          iVar17 = iVar28 + 0x1e;
          if (-1 < iVar28 + -1) {
            iVar17 = iVar28 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar18 = iVar17;
          if (iVar17 < iVar24) {
            iVar18 = iVar24;
          }
          if (iVar17 <= iVar24) break;
          lVar21 = 0;
          while( true ) {
            iVar27 = iVar27 + 0x20;
            uVar16 = (puVar13 + lVar29 + 1)[lVar21];
            if (uVar16 != 0) break;
            lVar21 = lVar21 + 1;
            if (iVar18 - lVar29 == lVar21) goto LAB_142771383;
          }
          uVar26 = 0xffffffff;
          uVar22 = (ulonglong)(iVar24 + (int)lVar21 + 1);
        }
        uVar32 = (ulonglong)(-uVar16 & uVar16);
        uVar20 = uVar32 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar24 = (iVar27 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
      } while (iVar24 < iVar28);
    }
LAB_142771383:
    plVar19 = local_270;
    plVar14 = DAT_14c872be8;
    uVar25 = (undefined7)(uVar11 >> 8);
    uVar11 = CONCAT71(uVar25,1);
    param_1 = local_270;
    if (0 < (int)uStack_1f0) {
      local_b8 = (uint *)0x0;
      local_b0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_ac = 0xffffffff00000080;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
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
        plVar19 = local_270;
      }
      plVar31 = DAT_14c844840;
      local_1c8.QuadPart = (LONGLONG)DAT_14c844840;
      if (DAT_14c844840 == (longlong *)0x0) {
        plVar31 = (longlong *)0x0;
      }
      else if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))(DAT_14c844840);
      }
      uStack_1c0 = (longlong *)((ulonglong)uStack_1c0 & 0xffffffff00000000);
      local_288 = plVar14;
      uVar11 = CONCAT71(uVar25,1);
      FUN_140997f46(local_138,(float)(int)uStack_1f0,&local_1c8,1);
      FUN_140997a0e(local_138);
      if (plVar31 != (longlong *)0x0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
      }
      FUN_140dc5480();
      DAT_14c846a59 = 0;
      if (0 < (int)uStack_1f0) {
        local_260 = (uint *)(plVar19 + 0x4f);
        local_250 = plVar19 + 100;
        local_240 = plVar19 + 0x66;
        local_210 = plVar19 + 0x24;
        local_218 = plVar19 + 0x21;
        local_268 = plVar19 + 0x6c;
        local_258 = (void **)(plVar19 + 0x6e);
        local_220 = plVar19 + 6;
        uVar11 = CONCAT71(uVar25,1);
        lVar29 = 0;
        do {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
            plVar19 = local_270;
          }
          local_1c8.QuadPart = (LONGLONG)DAT_14c844840;
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
          uStack_1c0 = (longlong *)((ulonglong)uStack_1c0 & 0xffffffff00000000);
          FUN_140997b30(local_138,0x3f800000);
          if ((longlong *)local_1c8.QuadPart != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_1c8 + 0x10))();
          }
          lVar21 = lVar29 * 0x98;
          if ((*(byte *)(local_1f8 + 0x8b + lVar21) & 1) != 0) {
            local_238 = CONCAT71(local_238._1_7_,(char)uVar11);
            local_208 = (void *)0x0;
            local_200 = *(uint *)(local_1f8 + 0x28 + lVar21);
            lVar30 = (longlong)(int)local_200;
            pvVar4 = *(void **)(local_1f8 + 0x20 + lVar21);
            if (lVar30 == 0) {
              local_1fc = 0;
            }
            else {
              FUN_1446dd670(&local_208,local_200,0);
              memcpy(local_208,pvVar4,lVar30 * 2);
            }
            plVar14 = local_250;
            local_148.QuadPart = (LONGLONG)&local_208;
            local_1c8.QuadPart = local_1c8.QuadPart & 0xffffffffffffff00;
            local_170 = 0;
            uStack_168 = 0;
            local_180 = 0;
            uStack_178 = 0;
            local_190 = 0;
            uStack_188 = 0;
            local_1a0 = 0;
            uStack_198 = 0;
            local_1b0 = 0;
            uStack_1a8 = 0;
            uStack_1c0 = (longlong *)0x0;
            uStack_1b8 = 0;
            local_140 = &local_1c8;
            FUN_146808ae6(&local_d8,&local_158,&local_148);
            lVar21 = (longlong)(int)local_158;
            local_248 = local_d8;
            FUN_140dc54ec(&local_1c8);
            if (DAT_14c86aa68 == '\x01') {
              while (plVar31 = local_240, *(longlong *)plVar19[0x65] != 0) {
                local_1c8.QuadPart = 0;
                uStack_1c0 = (longlong *)0x0;
                FUN_1468013ae(plVar14,&local_1c8);
                plVar31 = uStack_1c0;
                if (uStack_1c0 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = uStack_1c0 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*uStack_1c0)(uStack_1c0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar31 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar31 + 0x10))(plVar31);
                    }
                  }
                }
              }
              lVar30 = *(longlong *)plVar19[0x67];
              while (lVar30 != 0) {
                local_1c8.QuadPart = 0;
                uStack_1c0 = (longlong *)0x0;
                FUN_14680149c(plVar31,&local_1c8);
                plVar14 = uStack_1c0;
                if (uStack_1c0 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = uStack_1c0 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*uStack_1c0)(uStack_1c0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar14 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar14 + 0x10))(plVar14);
                    }
                  }
                }
                lVar30 = *(longlong *)plVar19[0x67];
              }
              local_1c8.QuadPart = local_1c8.QuadPart & 0xffffffffffffff00;
              local_170 = 0;
              uStack_168 = 0;
              local_180 = 0;
              uStack_178 = 0;
              local_190 = 0;
              uStack_188 = 0;
              local_1a0 = 0;
              uStack_198 = 0;
              local_1b0 = 0;
              uStack_1a8 = 0;
              uStack_1c0 = (longlong *)0x0;
              uStack_1b8 = 0;
              FUN_14680134c(plVar19,&local_1c8);
              FUN_140dc54ec(&local_1c8);
            }
            local_158 = (longlong *)0x0;
            uStack_150 = 0;
            local_1d8 = 0;
            uStack_1d0 = 0;
            FUN_140056680(&local_1c8,&DAT_149e001d8);
            local_280 = 0;
            local_288 = (longlong *)((ulonglong)local_288 & 0xffffffff00000000);
            cVar7 = FUN_1407cdbc6(&local_208,&local_1c8,&local_158,&local_1d8);
            if ((longlong *)local_1c8.QuadPart != (longlong *)0x0) {
              FUN_1400020a8();
            }
            uVar26 = local_200;
            pvVar4 = local_208;
            if (cVar7 == '\0') {
              lVar30 = (longlong)(int)local_200;
              uStack_150 = CONCAT44(uStack_150._4_4_,local_200);
              if (local_200 == 0 && uStack_150._4_4_ == 0) {
                uStack_150 = (ulonglong)local_200;
              }
              else {
                FUN_1446dd670(&local_158);
                if (uVar26 != 0) {
                  memcpy(local_158,pvVar4,lVar30 * 2);
                }
              }
            }
            pvVar4 = local_208;
            local_1e8 = (void *)0x0;
            lVar30 = (longlong)(int)local_200;
            local_1e0 = local_200;
            if (lVar30 == 0) {
              local_1dc = 0;
            }
            else {
              FUN_1446dd670(&local_1e8,local_200,0);
              memcpy(local_1e8,pvVar4,lVar30 * 2);
            }
            *(undefined4 *)((longlong)plVar19 + 900) = 0;
            if ((DAT_14c872a70 == '\0') && (DAT_14c872a71 == '\0')) {
              iVar28 = (int)uStack_150 + -1;
              if ((int)uStack_150 == 0) {
                iVar28 = 0;
              }
              if (0 < iVar28) {
                iVar27 = 0;
                do {
                  iVar27 = iVar27 + 1;
                } while (iVar28 != iVar27);
              }
              iVar28 = FUN_140dc56a8(local_260);
              plVar19 = local_270;
              if (iVar28 != -1) {
                iVar28 = *(int *)((longlong)local_270 + 0x14);
                *(int *)((longlong)local_270 + 0x14) = iVar28 + 1;
                uVar11 = (ulonglong)(int)local_270[1];
                if ((longlong)uVar11 < 1) {
                  *(int *)((longlong)local_270 + 0x14) = iVar28;
                  plVar14 = local_270;
                }
                else {
                  bVar23 = false;
                  do {
                    lVar30 = uVar11 * 0x10 + -8;
                    uVar22 = uVar11;
                    while (((*(int *)(*local_270 + lVar30) != 0 &&
                            (plVar14 = *(longlong **)(*local_270 + -8 + lVar30),
                            plVar14 != (longlong *)0x0)) &&
                           (cVar7 = (**(code **)(*plVar14 + 0x60))(), cVar7 != '\0'))) {
                      lVar30 = lVar30 + -0x10;
                      bVar5 = uVar22 < 2;
                      uVar22 = uVar22 - 1;
                      if (bVar5) {
                        iVar28 = *(int *)((longlong)local_270 + 0x14) + -1;
                        *(int *)((longlong)local_270 + 0x14) = iVar28;
                        plVar14 = local_270;
                        if (!bVar23) goto LAB_142771aa8;
                        goto LAB_142771a2d;
                      }
                    }
                    uVar11 = uVar22 - 1;
                    bVar23 = true;
                  } while (1 < uVar22);
                  iVar28 = *(int *)((longlong)local_270 + 0x14) + -1;
                  *(int *)((longlong)local_270 + 0x14) = iVar28;
LAB_142771a2d:
                  plVar14 = local_270;
                  if (iVar28 < 1) {
                    iVar28 = (int)local_270[1];
                    iVar27 = iVar28;
                    if (0 < iVar28) {
                      iVar24 = 0;
                      do {
                        if (((*(int *)(*local_270 + 8 + (longlong)iVar24 * 0x10) == 0) ||
                            (plVar14 = *(longlong **)(*local_270 + (longlong)iVar24 * 0x10),
                            plVar14 == (longlong *)0x0)) ||
                           (cVar7 = (**(code **)(*plVar14 + 0x28))(), cVar7 != '\0')) {
                          plVar14 = local_270;
                          FUN_14005b288(local_270,iVar24);
                          FUN_14005b248(plVar14);
                        }
                        else {
                          iVar24 = iVar24 + 1;
                        }
                        iVar27 = (int)local_270[1];
                      } while (iVar24 < iVar27);
                    }
                    plVar14 = local_270;
                    iVar24 = iVar27 * 2;
                    if (iVar24 < 3) {
                      iVar24 = 2;
                    }
                    *(int *)(local_270 + 2) = iVar24;
                    if ((iVar24 < iVar28) && (*(int *)((longlong)local_270 + 0xc) != iVar27)) {
                      FUN_14045812c(local_270);
                    }
                  }
                }
LAB_142771aa8:
                plVar14[0x4e] = (longlong)DAT_14c872be8;
                LOCK();
                plVar14[0x48] = (longlong)DAT_14c872be8;
                UNLOCK();
                DAT_14c872be8 = local_210;
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c872ef8) &&
                   (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
                  FUN_1459825b0(&DAT_14c872ee0);
                  atexit(FUN_1427868a5);
                  _Init_thread_footer(&DAT_14c872ef8);
                }
                FUN_14154aaea(DAT_14c872ef0,local_218);
                DAT_14c86aa68 = '\x01';
                *(undefined4 *)(plVar14 + 0x6d) = 0;
                if (*(int *)((longlong)plVar14 + 0x36c) != 0) {
                  FUN_1446f8c06(local_268,0);
                }
                *(undefined4 *)(plVar14 + 0x6f) = 0;
                if (*(int *)((longlong)plVar14 + 0x37c) != 0) {
                  FUN_1446f8c06(local_258,0);
                }
                local_1c8.QuadPart = 0;
                uStack_1c0 = (longlong *)0x0;
                FUN_140056680(&local_148,&DAT_149e001d8);
                local_280 = 0;
                local_288 = (longlong *)((ulonglong)local_288 & 0xffffffff00000000);
                cVar7 = FUN_1407cdbc6(&local_208,&local_148,&local_1c8,local_268);
                if ((void **)local_148.QuadPart != (void **)0x0) {
                  FUN_1400020a8();
                }
                uVar26 = local_200;
                pvVar4 = local_208;
                if (cVar7 == '\0') {
                  lVar30 = (longlong)(int)local_200;
                  uStack_1c0 = (longlong *)CONCAT44(uStack_1c0._4_4_,local_200);
                  if (local_200 == 0 && uStack_1c0._4_4_ == 0) {
                    uStack_1c0 = (longlong *)(ulonglong)local_200;
                  }
                  else {
                    FUN_1446dd670(&local_1c8);
                    if (uVar26 != 0) {
                      memcpy((void *)local_1c8,pvVar4,lVar30 * 2);
                    }
                  }
                }
                iVar28 = (int)uStack_1c0 + -1;
                if ((int)uStack_1c0 == 0) {
                  iVar28 = 0;
                }
                if (0 < iVar28) {
                  iVar27 = 0;
                  do {
                    iVar27 = iVar27 + 1;
                  } while (iVar28 != iVar27);
                }
                iVar28 = FUN_140dc56a8(local_260);
                puVar13 = local_260;
                if (iVar28 != -1) {
                  iVar28 = (int)uStack_1c0 + -1;
                  if ((int)uStack_1c0 == 0) {
                    iVar28 = 0;
                  }
                  if (0 < iVar28) {
                    iVar27 = 0;
                    do {
                      iVar27 = iVar27 + 1;
                    } while (iVar28 != iVar27);
                  }
                  iVar28 = FUN_140dc56a8(local_260);
                  plVar14 = local_270;
                  if (iVar28 == -1) {
                    lVar30 = 0;
                  }
                  else {
                    lVar30 = (longlong)iVar28 * 0x20 + *(longlong *)puVar13;
                  }
                  plVar19 = (longlong *)(lVar30 + 0x10);
                  if (lVar30 == 0) {
                    plVar19 = (longlong *)0x0;
                  }
                  lVar30 = *plVar19;
                  local_270[0x6b] = lVar30;
                  local_228 = lVar21;
                  FUN_140dc5770(lVar30 + 0x30);
                  LOCK();
                  plVar14[0x23] = plVar14[0x6b];
                  UNLOCK();
                  LOCK();
                  plVar14[0x47] = plVar14[0x6b];
                  UNLOCK();
                  QueryPerformanceCounter(&local_148);
                  plVar14[0x69] =
                       (longlong)((double)local_148.QuadPart * DAT_14c83f420 + 16777216.0);
                  lVar21 = plVar14[0x6b];
                  local_148.QuadPart = 0;
                  uVar26 = *(uint *)(plVar14 + 0x6d);
                  pvVar4 = (void *)plVar14[0x6c];
                  local_140 = (LARGE_INTEGER *)CONCAT44(local_140._4_4_,uVar26);
                  if ((longlong)(int)uVar26 == 0) {
                    local_140 = (LARGE_INTEGER *)(ulonglong)uVar26;
                  }
                  else {
                    FUN_1446dd670(&local_148,uVar26,0);
                    memcpy((void *)local_148,pvVar4,(longlong)(int)uVar26 * 2);
                  }
                  FUN_1402980a2(lVar21 + 0x20,local_148.QuadPart);
                  if ((void **)local_148.QuadPart != (void **)0x0) {
                    FUN_1400020a8();
                  }
                  uVar26 = local_1e0;
                  pvVar4 = local_1e8;
                  if (local_258 != &local_1e8) {
                    lVar21 = (longlong)(int)local_1e0;
                    *(uint *)(plVar14 + 0x6f) = local_1e0;
                    if (local_1e0 == 0 && *(int *)((longlong)plVar14 + 0x37c) == 0) {
                      *(undefined4 *)((longlong)plVar14 + 0x37c) = 0;
                    }
                    else {
                      FUN_1446dd670(local_258,local_1e0);
                      if (uVar26 != 0) {
                        memcpy(*local_258,pvVar4,lVar21 * 2);
                      }
                    }
                  }
                  FUN_146809602(local_220,plVar14[0x6b]);
                  uVar8 = (**(code **)(*(longlong *)plVar14[0x6b] + 0x88))
                                    ((longlong *)plVar14[0x6b],local_268);
                  *(undefined1 *)(plVar14 + 0x6a) = uVar8;
                }
                plVar19 = local_270;
                if ((longlong *)local_1c8.QuadPart != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            if (local_1e8 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_1d8 != 0) {
              FUN_1400020a8();
            }
            if (local_158 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            uVar12 = FUN_14680134c(plVar19);
            bVar6 = (byte)uVar12;
            if (local_208 != (void *)0x0) {
              uVar12 = FUN_1400020a8();
            }
            uVar11 = CONCAT71((int7)((ulonglong)uVar12 >> 8),(byte)local_238 & bVar6) & 0xffffffff;
          }
          lVar29 = lVar29 + 1;
        } while (lVar29 < (int)uStack_1f0);
      }
      FUN_140dc5480();
      DAT_14c846a59 = 1;
      if (local_b0 == 0) {
        uVar32 = 1;
        iVar28 = 0;
        uVar22 = 0;
        iVar27 = 0;
      }
      else {
        puVar13 = local_b8;
        if (local_b8 == (uint *)0x0) {
          puVar13 = local_c8;
        }
        uVar26 = *puVar13;
        if (uVar26 == 0) {
          iVar28 = local_b0 + 0x1e;
          if (-1 < local_b0 + -1) {
            iVar28 = local_b0 + -1;
          }
          uVar22 = 0;
          uVar20 = (ulonglong)(uint)(iVar28 >> 5);
          if (iVar28 >> 5 < 1) {
            uVar20 = uVar22;
          }
          iVar28 = 0;
          do {
            if (uVar20 == uVar22) goto LAB_1427721e8;
            iVar28 = iVar28 + 0x20;
            uVar26 = puVar13[uVar22 + 1];
            uVar22 = uVar22 + 1;
          } while (uVar26 == 0);
        }
        else {
          iVar28 = 0;
          uVar22 = 0;
        }
        uVar32 = (ulonglong)(-uVar26 & uVar26);
        uVar20 = uVar32 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar27 = (iVar28 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
        if (local_b0 <= iVar27) {
          iVar27 = local_b0;
        }
      }
      if (iVar27 != local_b0) {
        puVar13 = local_c8;
        if (local_b8 != (uint *)0x0) {
          puVar13 = local_b8;
        }
        iVar27 = local_b0 + 0x1e;
        if (-1 < local_b0 + -1) {
          iVar27 = local_b0 + -1;
        }
        iVar27 = iVar27 >> 5;
        uVar26 = 0xffffffff;
        do {
          uVar26 = ~(uint)uVar32 & uVar26;
          iVar24 = (int)uVar22;
          lVar29 = (longlong)iVar24;
          uVar16 = puVar13[lVar29] & uVar26;
          if (uVar16 == 0) {
            iVar17 = iVar27;
            if (iVar27 < iVar24) {
              iVar17 = iVar24;
            }
            if (iVar27 <= iVar24) break;
            lVar21 = 0;
            while( true ) {
              iVar28 = iVar28 + 0x20;
              uVar16 = puVar13[lVar29 + lVar21 + 1];
              if (uVar16 != 0) break;
              lVar21 = lVar21 + 1;
              if (iVar17 - lVar29 == lVar21) goto LAB_1427721e8;
            }
            uVar22 = (ulonglong)(iVar24 + (int)lVar21 + 1);
            uVar26 = 0xffffffff;
          }
          uVar32 = (ulonglong)(-uVar16 & uVar16);
          uVar20 = uVar32 * 2 + 1;
          lVar29 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar29 == 0; lVar29 = lVar29 + -1) {
            }
          }
        } while ((int)((iVar28 - ((uint)lVar29 ^ 0x3f)) + 0x3e) < local_b0);
      }
LAB_1427721e8:
      local_1c8.QuadPart = 0x149e26d48;
      uStack_1c0._0_4_ = 0x16;
      FUN_1446e940c(&local_1d8,&local_1c8);
      local_1c8.QuadPart = 0x149e2b62a;
      uStack_1c0._0_4_ = 8;
      FUN_1446e940c(&local_1e8,&local_1c8);
      local_1c8.QuadPart = 0x149e26d38;
      uStack_1c0 = (longlong *)CONCAT44(uStack_1c0._4_4_,7);
      FUN_140208c1e(&local_158,&local_1e8,&local_1d8,&local_1c8);
      plVar14 = local_158;
      if (*(code **)(*local_158 + 0x50) != FUN_144828418) {
        plVar14 = (longlong *)(**(code **)(*local_158 + 0x50))();
      }
      FUN_1447a1fc0(plVar14);
      pcVar3 = *(code **)(*local_158 + 0x28);
      if (pcVar3 == FUN_14482841c) {
        plVar14 = local_158 + 3;
        if (local_158[5] != 0) {
          plVar14 = (longlong *)(local_158[5] + 8);
        }
      }
      else if (pcVar3 == (code *)&LAB_14010c34c) {
        plVar14 = local_158 + 2;
      }
      else {
        plVar14 = (longlong *)(*pcVar3)(local_158);
      }
      local_148.QuadPart = 0;
      uVar26 = *(uint *)(plVar14 + 1);
      pvVar4 = (void *)*plVar14;
      local_140 = (LARGE_INTEGER *)CONCAT44(local_140._4_4_,uVar26);
      if ((longlong)(int)uVar26 == 0) {
        local_140 = (LARGE_INTEGER *)(ulonglong)uVar26;
      }
      else {
        FUN_1446dd670(&local_148,uVar26,0);
        memcpy((void *)local_148,pvVar4,(longlong)(int)uVar26 * 2);
      }
      if (local_158 != (longlong *)0x0) {
        (**(code **)(*local_158 + 0x10))();
      }
      local_1c8.QuadPart = 0x149e26d80;
      uStack_1c0._0_4_ = 0x13;
      FUN_1446e940c(&local_1d8,&local_1c8);
      local_1c8.QuadPart = 0x149e2b62a;
      uStack_1c0._0_4_ = 8;
      FUN_1446e940c(&local_1e8,&local_1c8);
      local_1c8.QuadPart = 0x149e26d76;
      uStack_1c0 = (longlong *)CONCAT44(uStack_1c0._4_4_,4);
      FUN_140208c1e(&local_158,&local_1e8,&local_1d8,&local_1c8);
      plVar14 = local_158;
      if (*(code **)(*local_158 + 0x50) != FUN_144828418) {
        plVar14 = (longlong *)(**(code **)(*local_158 + 0x50))();
      }
      param_1 = local_270;
      FUN_1447a1fc0(plVar14);
      pcVar3 = *(code **)(*local_158 + 0x28);
      if (pcVar3 == FUN_14482841c) {
        plVar14 = local_158 + 3;
        if (local_158[5] != 0) {
          plVar14 = (longlong *)(local_158[5] + 8);
        }
      }
      else if (pcVar3 == (code *)&LAB_14010c34c) {
        plVar14 = local_158 + 2;
      }
      else {
        plVar14 = (longlong *)(*pcVar3)(local_158);
      }
      local_1c8.QuadPart = 0;
      uVar26 = *(uint *)(plVar14 + 1);
      pvVar4 = (void *)*plVar14;
      uStack_1c0 = (longlong *)CONCAT44(uStack_1c0._4_4_,uVar26);
      if ((longlong)(int)uVar26 == 0) {
        uStack_1c0 = (longlong *)(ulonglong)uVar26;
      }
      else {
        FUN_1446dd670(&local_1c8,uVar26,0);
        memcpy((void *)local_1c8,pvVar4,(longlong)(int)uVar26 * 2);
      }
      if (local_158 != (longlong *)0x0) {
        (**(code **)(*local_158 + 0x10))();
      }
      if ((void *)local_1c8.QuadPart != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((void **)local_148.QuadPart != (void **)0x0) {
        FUN_1400020a8();
      }
      FUN_140997a5c(local_138);
      if (local_fc == '\x01') {
        local_fc = '\0';
      }
      if (local_128 != (longlong *)0x0) {
        (**(code **)(*local_128 + 0x10))();
      }
      if (local_138[0] != (longlong *)0x0) {
        (**(code **)(*local_138[0] + 0x10))();
      }
      local_90 = 0;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      FUN_146806122(&local_d8);
    }
    FUN_146808aba(local_1f8,(int)uStack_1f0);
    uVar9 = local_22c;
    if (local_1f8 != 0) {
      FUN_1400020a8();
      uVar9 = local_22c;
    }
  }
  *(undefined4 *)(param_1 + 0x68) = uVar9;
  if ((local_80 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return uVar11 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142772610 FUN_142772610 body=300 status=ok
// SIG undefined FUN_142772610(void)

undefined8 FUN_142772610(longlong param_1,longlong param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  PSRWLOCK SRWLock;
  double dVar4;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x350) == '\x01') &&
     (*(int *)(*(longlong *)(param_1 + 0x358) + 0x80) < 1)) {
    uVar3 = FUN_146801a8e();
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0x350) = uVar3;
  SRWLock = (PSRWLOCK)(*(longlong *)(param_1 + 0x358) + 0xe8);
  AcquireSRWLockExclusive(SRWLock);
  FUN_146801dac(*(longlong *)(param_1 + 0x358) + 0x98);
  ReleaseSRWLockExclusive(SRWLock);
  *(undefined1 *)(*(longlong *)(param_1 + 0x358) + 0x30) = *(undefined1 *)(param_1 + 0x350);
  FUN_146809602(param_1 + 0x48,*(undefined8 *)(param_1 + 0x358));
  QueryPerformanceCounter(&local_38);
  dVar4 = (double)local_38.QuadPart * DAT_14c83f420;
  dVar1 = *(double *)(param_1 + 0x348);
  FUN_14680233e(param_2,*(longlong *)(param_1 + 0x358) + 0x30);
  *(double *)(param_2 + 0x38) = (double)(float)((dVar4 + 16777216.0) - dVar1);
  LOCK();
  *(undefined8 *)(param_1 + 0x118) = 0;
  UNLOCK();
  LOCK();
  uVar2 = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x238) = 0;
  UNLOCK();
  *(undefined8 *)(param_1 + 0x358) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar2 >> 8),*(undefined1 *)(param_1 + 0x350));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14277273e FUN_14277273e body=981 status=ok
// SIG undefined FUN_14277273e(void)

void FUN_14277273e(longlong param_1,char *param_2,int param_3,byte param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined1 auStack_148 [32];
  undefined1 local_128 [56];
  undefined1 local_f0 [56];
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*param_2 == '\x02') {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  else if (*param_2 == '\x01') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  FUN_140dc5480();
  if (((~param_4 | DAT_14c846618 | ~DAT_14c846a59) & 1) == 0) {
    FUN_146830948(&local_50,param_3 + 1,1,0);
    pvVar10 = local_50;
    if (local_48 == 0) {
      local_48 = 1;
      if (local_44 != 0) {
        memset(local_50,0,0xc18);
        *(undefined8 *)((longlong)pvVar10 + 0x800) = 0x6e776f6e6b6e55;
        *(undefined4 *)((longlong)pvVar10 + 0xc00) = 1;
LAB_142772957:
        uVar6 = 1;
        goto LAB_14277295c;
      }
      FUN_1467bc542(&local_50);
      iVar2 = local_48;
      pvVar10 = local_50;
      memset(local_50,0,0xc18);
      *(undefined8 *)((longlong)pvVar10 + 0x800) = 0x6e776f6e6b6e55;
      *(undefined4 *)((longlong)pvVar10 + 0xc00) = 1;
      iVar7 = -1;
      if (iVar2 != 0) goto LAB_142772957;
    }
    else {
      uVar6 = *(undefined4 *)((longlong)local_50 + 0xc00);
LAB_14277295c:
      FUN_1400b22c2(local_b8,(longlong)pvVar10 + 0x800);
      FUN_146801df0(local_f0,param_2);
      FUN_146801ea2(local_a8,local_f0,local_b8,uVar6);
      iVar7 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0x4c) < iVar7 + 1U) {
        FUN_146809c56((longlong *)(param_1 + 0x40),iVar7);
      }
      lVar8 = *(longlong *)(param_1 + 0x40);
      lVar5 = (longlong)iVar7 * 0x58;
      *(undefined1 *)(lVar8 + lVar5) = local_a8[0];
      *(undefined8 *)(lVar8 + 8 + lVar5) = 0;
      *(undefined8 *)(lVar8 + 8 + lVar5) = local_a0;
      local_a0 = 0;
      *(undefined4 *)(lVar8 + 0x10 + lVar5) = (undefined4)local_98;
      *(undefined4 *)(lVar8 + 0x14 + lVar5) = local_98._4_4_;
      local_98 = 0;
      *(undefined8 *)(lVar8 + 0x18 + lVar5) = 0;
      *(undefined8 *)(lVar8 + 0x18 + lVar5) = local_90;
      local_90 = 0;
      *(undefined4 *)(lVar8 + 0x20 + lVar5) = (undefined4)local_88;
      *(undefined4 *)(lVar8 + 0x24 + lVar5) = local_88._4_4_;
      local_88 = 0;
      puVar3 = (undefined8 *)(lVar8 + 0x28 + lVar5);
      *puVar3 = local_80;
      puVar3[1] = uStack_78;
      *(undefined8 *)(lVar8 + 0x38 + lVar5) = 0;
      *(undefined8 *)(lVar8 + 0x38 + lVar5) = local_70;
      local_70 = 0;
      *(undefined4 *)(lVar8 + 0x40 + lVar5) = (undefined4)local_68;
      *(undefined4 *)(lVar8 + 0x44 + lVar5) = local_68._4_4_;
      local_68 = 0;
      puVar1 = (undefined4 *)(lVar8 + 0x48 + lVar5);
      *puVar1 = local_60;
      puVar1[1] = uStack_5c;
      puVar1[2] = uStack_58;
      puVar1[3] = uStack_54;
      FUN_146801f4e();
      pvVar10 = local_50;
    }
    if (pvVar10 != (void *)0x0) {
      FUN_1400020a8(pvVar10);
    }
    if (iVar7 != -1) {
      lVar8 = (longlong)iVar7;
      goto LAB_142772a85;
    }
  }
  FUN_146801df0(local_128,param_2);
  FUN_146801f8c(local_a8,local_128);
  iVar7 = *(int *)(param_1 + 0x48);
  lVar8 = (longlong)iVar7;
  *(uint *)(param_1 + 0x48) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar7 + 1U) {
    FUN_146809c56((longlong *)(param_1 + 0x40),iVar7);
  }
  lVar5 = *(longlong *)(param_1 + 0x40);
  lVar4 = lVar8 * 0x58;
  *(undefined1 *)(lVar5 + lVar4) = local_a8[0];
  *(undefined8 *)(lVar5 + 8 + lVar4) = 0;
  *(undefined8 *)(lVar5 + 8 + lVar4) = local_a0;
  local_a0 = 0;
  *(undefined4 *)(lVar5 + 0x10 + lVar4) = (undefined4)local_98;
  *(undefined4 *)(lVar5 + 0x14 + lVar4) = local_98._4_4_;
  local_98 = 0;
  *(undefined8 *)(lVar5 + 0x18 + lVar4) = 0;
  *(undefined8 *)(lVar5 + 0x18 + lVar4) = local_90;
  local_90 = 0;
  *(undefined4 *)(lVar5 + 0x20 + lVar4) = (undefined4)local_88;
  *(undefined4 *)(lVar5 + 0x24 + lVar4) = local_88._4_4_;
  local_88 = 0;
  puVar3 = (undefined8 *)(lVar5 + 0x28 + lVar4);
  *puVar3 = local_80;
  puVar3[1] = uStack_78;
  *(undefined8 *)(lVar5 + 0x38 + lVar4) = 0;
  *(undefined8 *)(lVar5 + 0x38 + lVar4) = local_70;
  local_70 = 0;
  *(undefined4 *)(lVar5 + 0x40 + lVar4) = (undefined4)local_68;
  *(undefined4 *)(lVar5 + 0x44 + lVar4) = local_68._4_4_;
  local_68 = 0;
  puVar1 = (undefined4 *)(lVar5 + 0x48 + lVar4);
  *puVar1 = local_60;
  puVar1[1] = uStack_5c;
  puVar1[2] = uStack_58;
  puVar1[3] = uStack_54;
  FUN_146801f4e();
LAB_142772a85:
  if (*(int *)(*(longlong *)(param_1 + 0x40) + 0x20 + lVar8 * 0x58) < 2) {
    lVar8 = *(longlong *)(param_1 + 0x40) + lVar8 * 0x58;
    puVar9 = (undefined8 *)(lVar8 + 0x18);
    puVar3 = (undefined8 *)FUN_146801fda(param_1);
    if (puVar9 != puVar3) {
      iVar7 = *(int *)(puVar3 + 1);
      pvVar10 = (void *)*puVar3;
      *(int *)(lVar8 + 0x20) = iVar7;
      if (iVar7 == 0 && *(int *)(lVar8 + 0x24) == 0) {
        *(undefined4 *)(lVar8 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(puVar9,iVar7);
        if (iVar7 != 0) {
          memcpy((void *)*puVar9,pvVar10,(longlong)iVar7 * 2);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142772b26 FUN_142772b26 body=856 status=ok
// SIG undefined FUN_142772b26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142772b26(wchar_t *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  char cVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  longlong *local_d0 [2];
  undefined8 local_c0;
  longlong *local_b8;
  longlong local_b0 [2];
  longlong *local_a0 [2];
  longlong *local_90 [2];
  undefined8 local_80;
  longlong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (DAT_14c846b14 == '\0') {
    wcsncpy((wchar_t *)&DAT_14c84eb20,param_1,0x3fff);
    _DAT_14c856b1e = 0;
    wcsncpy((wchar_t *)&DAT_14c85eb20,param_1,0x3fff);
    _DAT_14c866b1e = 0;
  }
  wcsncpy((wchar_t *)&DAT_14c846b20,param_1,0x3fff);
  _DAT_14c84eb1e = 0;
  wcsncpy((wchar_t *)&DAT_14c856b20,param_1,0x3fff);
  DAT_14c846b18 = DAT_14c846b18 + 1;
  _DAT_14c85eb1e = 0;
  DAT_14c846b14 = 1;
  pwVar4 = param_1;
  do {
    cVar6 = *pwVar4 == L'–';
    if (*pwVar4 == L'\0') {
      cVar6 = '\x03';
    }
    if (cVar6 == '\x03') goto LAB_142772e40;
    pwVar4 = pwVar4 + 1;
  } while (cVar6 == '\0');
  FUN_140056680(local_b0,param_1);
  FUN_140233b1a(local_a0,local_b0);
  local_50 = L"ComdLineHasInvalidChar";
  local_48 = 0x16;
  FUN_1446e940c(local_d4,&local_50);
  local_50 = L"Engine";
  local_48 = 6;
  FUN_1446e940c(local_d8,&local_50);
  local_50 = 
  L"Error: Command-line contains an invalid \'-\' character, likely pasted from an email.\nCmdline = {0}"
  ;
  local_48 = 0x61;
  FUN_140208c1e(local_d0,local_d8,local_d4,&local_50);
  FUN_14023409e(&local_c0,local_d0,1);
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
  FUN_14023423e(local_40,local_a0);
  local_68 = &local_30;
  local_70 = &local_50;
  FUN_14010d304(&local_60);
  local_80 = local_c0;
  local_78 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_90,&local_80,&local_60);
  FUN_14007f2db(local_60,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_b8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
      }
    }
  }
  if (local_a0[0] != (longlong *)0x0) {
    (**(code **)(*local_a0[0] + 0x10))();
  }
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = local_90[0];
  if (*(code **)(*local_90[0] + 0x50) != FUN_144828418) {
    plVar3 = (longlong *)(**(code **)(*local_90[0] + 0x50))(local_90[0]);
  }
  FUN_1447a1fc0(plVar3);
  pcVar2 = *(code **)(*local_90[0] + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar3 = (longlong *)(local_90[0][5] + 8);
    if (local_90[0][5] == 0) {
      plVar3 = local_90[0] + 3;
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar3 = local_90[0] + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar2)(local_90[0]);
  }
  if ((int)plVar3[1] == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*plVar3;
  }
  FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x60,&DAT_149e0625e,puVar5);
  if (local_90[0] != (longlong *)0x0) {
    (**(code **)(*local_90[0] + 0x10))(local_90[0]);
  }
LAB_142772e40:
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 142772e7f FUN_142772e7f body=41 status=ok
// SIG undefined FUN_142772e7f(void)

void FUN_142772e7f(void)

{
  DAT_14c866b80 = 0;
  if (DAT_14c866b78 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6fde8();
  return;
}



// FUNCTION 142772eb6 FUN_142772eb6 body=624 status=ok
// SIG undefined FUN_142772eb6(void)

ulonglong FUN_142772eb6(undefined8 *****param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  int local_60;
  undefined8 ****local_58;
  int local_4c;
  undefined8 ****local_48;
  longlong **local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c866b88);
  if (DAT_14c866b40 != DAT_14c866b6c) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x10);
    uVar5 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c866b70;
    if (DAT_14c866b78 != (undefined *)0x0) {
      puVar6 = DAT_14c866b78;
    }
    iVar1 = *(int *)(puVar6 + (ulonglong)
                              (DAT_14c866b80 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) + ((uint)param_1 << 0x10 | uVar5) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    while (iVar1 != -1) {
      puVar7 = (ulonglong *)(DAT_14c866b38 + (longlong)iVar1 * 0x18);
      if ((undefined8 *****)*puVar7 == param_1) {
        if (puVar7 != (ulonglong *)0x0) {
          puVar7 = puVar7 + 1;
          goto LAB_142772f74;
        }
        break;
      }
      iVar1 = (int)puVar7[2];
    }
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (((undefined8 *****)(ulonglong)DAT_14c892f54 == param_1) && (DAT_14c833680 == 0)) {
    DAT_14c833680 = FUN_142745b30();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  local_48 = (undefined8 ****)0x149e01f48;
  local_40 = (longlong **)CONCAT35(local_40._5_3_,0x11);
  uVar4 = FUN_14001a6c0(&local_48,1);
  FUN_146802bf6(&DAT_14c8337f0,&local_68,uVar4);
  lVar3 = local_68;
  if ((longlong)local_60 == 0) {
    puVar7 = (ulonglong *)0x0;
  }
  else {
    puVar7 = (ulonglong *)0x0;
    lVar9 = 0;
    do {
      local_70 = *(longlong **)(lVar3 + lVar9);
      (**(code **)(*local_70 + 0x40))(local_70,&local_48);
      if ((undefined8 *****)local_48 == param_1) {
        local_48 = &local_58;
        local_40 = &local_70;
        FUN_146809f20(&local_4c);
        puVar7 = (ulonglong *)(DAT_14c866b38 + (longlong)local_4c * 0x18 + 8);
        break;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)local_60 * 8 != lVar9);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (puVar7 == (ulonglong *)0x0) {
    uVar8 = 0;
  }
  else {
LAB_142772f74:
    uVar8 = *puVar7;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c866b88);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142773128 FUN_142773128 body=154 status=ok
// SIG undefined FUN_142773128(void)

undefined8 FUN_142773128(ulonglong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 < 0) {
    *param_2 = -1;
    uVar1 = 0;
  }
  else {
    if (param_1 == 0) {
      *param_2 = param_3;
    }
    else {
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      if (DAT_14c892f54 != param_1) {
        uVar1 = FUN_1410fe45c(param_1,param_2,param_3,param_4);
        return uVar1;
      }
      *param_2 = (param_3 + 0x3ffffU >> 0x11 & 0x3ffffffffffe) + param_3;
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1427731c2 FUN_1427731c2 body=128 status=ok
// SIG undefined FUN_1427731c2(void)

undefined8
FUN_1427731c2(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,int param_5,
             undefined4 param_6,int param_7)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_38 = (longlong)param_5;
  local_28 = (longlong)param_7;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = (longlong)*param_3;
  local_30 = param_6;
  uVar1 = FUN_1410fe780(param_1,param_2,&local_20);
  if ((int)local_20 == local_20) {
    *param_3 = (int)local_20;
  }
  else {
    uVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142773244 FUN_142773244 body=563 status=ok
// SIG undefined FUN_142773244(void)

ulonglong FUN_142773244(ulonglong param_1,undefined8 param_2,ulonglong param_3,longlong *param_4,
                       longlong param_5,longlong param_6,undefined8 param_7,ulonglong param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  ulonglong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = 0;
  uVar4 = (**(code **)*param_4)(param_4,&local_b0,param_5,param_6);
  if (local_b0 < param_6) {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if (DAT_14c892f44 == param_1) {
      local_50 = 0;
      uVar4 = (**(code **)*param_4)(param_4,&local_50,param_5,param_6);
      uVar6 = local_50;
      if ((local_50 | param_3) >> 0x20 == 0) {
        local_78 = &LAB_14277a7c7;
        local_70 = &LAB_14277a7d4;
        local_68 = 0;
        local_a0 = (int)local_50;
        local_90 = (undefined4)param_3;
        uVar5 = 0xf;
        if ((int)param_8 != 0) {
          uVar5 = param_8 & 0xffffffff;
        }
        local_a8 = uVar4;
        local_98 = param_2;
        iVar1 = FUN_144b4fce0(&local_a8,uVar5,&DAT_149e29fc6,0x58);
        if (iVar1 == 0) {
          do {
            if (local_a0 == 0) {
              uVar4 = (**(code **)*param_4)(param_4,&local_50,uVar6 + param_5);
              if (local_50 >> 0x20 != 0) goto LAB_142773367;
              uVar6 = uVar6 + local_50;
              local_a0 = (int)local_50;
              local_a8 = uVar4;
            }
            iVar1 = FUN_144b4e2a0(&local_a8,2);
          } while (iVar1 == 0);
          iVar3 = FUN_144b4fb40(&local_a8);
          uVar6 = CONCAT71((int7)((ulonglong)param_6 >> 8),iVar3 == 0 && -1 < iVar1);
          goto LAB_1427733ce;
        }
      }
LAB_142773367:
      uVar6 = 0;
    }
    else {
      uVar4 = FUN_14001cc68(param_6,0);
      (**(code **)(*param_4 + 0x10))(param_4,uVar4,param_5,param_6);
      local_b8 = param_8;
      local_c8 = param_6;
      uVar2 = FUN_140aa9920(param_1,param_2,param_3,uVar4);
      uVar6 = (ulonglong)uVar2;
      FUN_1400020a8(uVar4);
    }
  }
  else {
    local_b8 = param_8;
    local_c8 = param_6;
    uVar2 = FUN_140aa9920(param_1,param_2,param_3,uVar4);
    uVar6 = (ulonglong)uVar2;
  }
LAB_1427733ce:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14277349a FUN_14277349a body=47 status=ok
// SIG undefined FUN_14277349a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14277349a(void)

{
  _DAT_14c866c48 = 0;
  if (DAT_14c866c40 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&DAT_14c866c00);
  return;
}



// FUNCTION 1427734c9 FUN_1427734c9 body=41 status=ok
// SIG undefined FUN_1427734c9(void)

void FUN_1427734c9(void)

{
  DAT_14c866c98 = 0;
  if (DAT_14c866c90 != 0) {
    FUN_1400020a8();
  }
  FUN_1459b56ba();
  return;
}



// FUNCTION 1427734f2 FUN_1427734f2 body=41 status=ok
// SIG undefined FUN_1427734f2(void)

void FUN_1427734f2(void)

{
  DAT_14c866ce8 = 0;
  if (DAT_14c866ce0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d61958();
  return;
}



// FUNCTION 14277351b FUN_14277351b body=69 status=ok
// SIG undefined FUN_14277351b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14277351b(void)

{
  _DAT_14c866cf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277355d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c866cf8,1);
  return;
}



// FUNCTION 142773560 FUN_142773560 body=69 status=ok
// SIG undefined FUN_142773560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142773560(void)

{
  _DAT_14c866d08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427735a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c866d10,1);
  return;
}



// FUNCTION 1427735a5 FUN_1427735a5 body=69 status=ok
// SIG undefined FUN_1427735a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1427735a5(void)

{
  _DAT_14c866d20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427735e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c866d28,1);
  return;
}



// FUNCTION 1427735ea FUN_1427735ea body=688 status=ok
// SIG undefined FUN_1427735ea(void)

ulonglong FUN_1427735ea(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined2 **ppuVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_44 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14170a4e2();
  EnterCriticalSection(lpCriticalSection);
  iVar4 = *(int *)((longlong)&lpCriticalSection[1].OwningThread + 4);
  *(int *)((longlong)&lpCriticalSection[1].OwningThread + 4) = iVar4 + 1;
  uVar8 = (ulonglong)lpCriticalSection[1].LockCount;
  if ((longlong)uVar8 < 1) {
    *(int *)((longlong)&lpCriticalSection[1].OwningThread + 4) = iVar4;
  }
  else {
    bVar12 = false;
    do {
      lVar16 = uVar8 * 0x10 + -8;
      uVar18 = uVar8;
      while (((*(int *)((longlong)&(lpCriticalSection[1].DebugInfo)->Type + lVar16) != 0 &&
              (plVar9 = *(longlong **)((longlong)lpCriticalSection[1].DebugInfo + lVar16 + -8),
              plVar9 != (longlong *)0x0)) &&
             (cVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,param_1,&local_44), cVar6 != '\0'))) {
        lVar16 = lVar16 + -0x10;
        bVar5 = uVar18 < 2;
        uVar18 = uVar18 - 1;
        if (bVar5) {
          piVar1 = (int *)((longlong)&lpCriticalSection[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar12) goto LAB_14277387d;
          goto LAB_14277363f;
        }
      }
      uVar8 = uVar18 - 1;
      bVar12 = true;
    } while (1 < uVar18);
    piVar1 = (int *)((longlong)&lpCriticalSection[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_14277387d:
    FUN_14109be94(lpCriticalSection,0);
  }
LAB_14277363f:
  LeaveCriticalSection(lpCriticalSection);
  uVar8 = CONCAT71((int7)((ulonglong)lpCriticalSection >> 8),1);
  if (0 < local_44) goto LAB_1427737f2;
  FUN_140056680(local_58,param_1);
  if (param_2 != (longlong *)0x0) {
    ppuVar11 = &local_68;
    FUN_140056680(ppuVar11);
    uVar10 = 0;
    uVar7 = local_60 - 1;
    if (local_60 == 0) {
      uVar7 = uVar10;
    }
    if (0 < (int)uVar7) {
      puVar15 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar15 = local_68;
      }
      lVar16 = 0;
      uVar8 = 0;
      do {
        uVar10 = ((uint)(ushort)puVar15[lVar16] +
                 (uint)(0x19 < (ushort)puVar15[lVar16] - 0x61) * 0x20) - 0x20;
        uVar19 = (uint)(uVar8 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar8 ^ uVar10) & 0xff) * 4);
        ppuVar11 = (undefined2 **)0x0;
        uVar10 = uVar19 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar19 & 0xff ^ uVar10 >> 8 & 0xff) * 4);
        uVar8 = (ulonglong)uVar10;
        lVar16 = lVar16 + 1;
      } while (uVar7 != (uint)lVar16);
    }
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      plVar9 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        plVar9 = (longlong *)param_2[8];
      }
      iVar4 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_2[9] - 1U & uVar10) * 4);
      if (iVar4 != -1) {
        lVar16 = *param_2;
LAB_14277373b:
        iVar13 = iVar4;
        lVar17 = (longlong)iVar13;
        iVar4 = *(int *)(lVar16 + 8 + lVar17 * 0x18);
        if (iVar4 == local_60) {
          if (1 < local_60) {
            lVar14 = 0;
            do {
              uVar2 = *(ushort *)(*(longlong *)(lVar16 + lVar17 * 0x18) + lVar14);
              uVar7 = (uint)uVar2;
              uVar3 = *(ushort *)((longlong)local_68 + lVar14);
              ppuVar11 = (undefined2 **)(ulonglong)uVar3;
              if (uVar2 == uVar3) {
                if (uVar2 == 0) break;
              }
              else {
                if (0x7f < (uVar3 | uVar2)) goto LAB_1427737ad;
                uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                ppuVar11 = (undefined2 **)(ulonglong)(byte)(&DAT_149e05da0)[uVar3];
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[uVar3]) goto LAB_1427737ad;
              }
              lVar14 = lVar14 + 2;
            } while( true );
          }
        }
        else if (iVar4 + local_60 != 1) goto LAB_142773758;
        goto LAB_1427737d3;
      }
    }
    uVar8 = 0;
    goto LAB_1427737d9;
  }
  plVar9 = (longlong *)FUN_14054d1d4();
  uVar7 = (**(code **)(*plVar9 + 0x48))(plVar9,param_1);
  uVar8 = (ulonglong)uVar7;
LAB_1427737e3:
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
LAB_1427737f2:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
LAB_1427737ad:
  if (uVar7 == (uint)ppuVar11) goto LAB_1427737d3;
LAB_142773758:
  iVar4 = *(int *)(lVar16 + 0x10 + lVar17 * 0x18);
  iVar13 = -1;
  if (iVar4 == -1) goto LAB_1427737d3;
  goto LAB_14277373b;
LAB_1427737d3:
  uVar8 = CONCAT71((int7)((ulonglong)ppuVar11 >> 8),iVar13 != -1);
LAB_1427737d9:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_1427737e3;
}



// FUNCTION 14277389c FUN_14277389c body=1296 status=ok
// SIG undefined FUN_14277389c(void)

void FUN_14277389c(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  bool bVar17;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  puVar4 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = -1;
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar4;
    }
    uVar13 = (ulonglong)(iVar3 + 0x1fU >> 5);
    iVar12 = -0x3e - (iVar3 + 0x1fU & 0xffffffe0);
    uVar8 = 0xffffffff >> (-(char)iVar3 & 0x1fU);
    do {
      bVar17 = uVar13 == 0;
      uVar13 = uVar13 - 1;
      if (bVar17) goto LAB_142773930;
      iVar12 = iVar12 + 0x20;
      uVar15 = uVar8 & puVar7[uVar13];
      uVar8 = 0xffffffff;
    } while (uVar15 == 0);
    uVar13 = (ulonglong)uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar2 = -(((uint)lVar14 ^ 0x3f) + iVar12);
  }
LAB_142773930:
  iVar3 = iVar2 + 1;
  iVar12 = (int)param_1[1];
  if (iVar3 < iVar12) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar13 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar14 = *param_1;
      do {
        lVar11 = (longlong)(int)uVar13 * 0xc0;
        if (iVar2 < (int)uVar13) {
          iVar12 = *(int *)(lVar14 + lVar11);
          iVar6 = *(int *)(lVar14 + 4 + lVar11);
          uVar13 = (ulonglong)iVar6;
          if (uVar13 != 0xffffffffffffffff) {
            *(int *)(lVar14 + uVar13 * 0xc0) = iVar12;
          }
          if (iVar12 == -1) {
            *(int *)(param_1 + 6) = iVar6;
          }
          else {
            *(int *)(lVar14 + 4 + (longlong)iVar12 * 0xc0) = iVar6;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar13 = (ulonglong)*(uint *)(lVar14 + 4 + lVar11);
        }
      } while ((int)uVar13 != -1);
      iVar12 = (int)param_1[1];
    }
    if (iVar12 != iVar3) {
      *(int *)(param_1 + 1) = iVar3;
    }
    *(int *)(param_1 + 5) = iVar3;
    iVar2 = iVar2 + 0x20;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    iVar12 = iVar3;
    if (iVar3 % 0x20 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar4;
      }
      bVar5 = -(char)(iVar3 % 0x20);
      puVar7[iVar2 >> 5] = (puVar7[iVar2 >> 5] << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
      iVar12 = (int)param_1[1];
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar12) {
    FUN_1407da7e2(param_1);
    iVar12 = (int)param_1[1];
  }
  uVar8 = iVar12 - *(int *)((longlong)param_1 + 0x34);
  iVar3 = 1;
  if (3 < uVar8) {
    uVar13 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
    lVar14 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar14 & 0x1f);
  }
  if ((0 < (int)uVar8 && (int)param_1[9] < iVar3) || (iVar3 < (int)param_1[9])) {
    *(int *)(param_1 + 9) = iVar3;
    FUN_140d69a94();
  }
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar16 = 1;
    uVar13 = 0;
    iVar12 = 0;
    iVar2 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar4;
    }
    uVar8 = *puVar7;
    if (uVar8 == 0) {
      iVar2 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar2 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar16 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar16 = uVar13;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar13) goto LAB_142773adb;
        iVar12 = iVar12 + 0x20;
        uVar8 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar13 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar16 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar2 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar2) {
      iVar2 = iVar3;
    }
  }
  if (iVar2 < iVar3) {
    uVar8 = 0xffffffff;
    do {
      lVar14 = *param_1 + (longlong)iVar2 * 0xc0;
      FUN_14170a154(lVar14 + 0x10);
      FUN_14277ad3c(lVar14 + 0x10,*(int *)(lVar14 + 0x18) - *(int *)(lVar14 + 0x44));
      uVar8 = ~(uint)uVar16 & uVar8;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar4;
      }
      iVar3 = (int)param_1[5];
      iVar2 = (int)uVar13;
      lVar14 = (longlong)iVar2;
      uVar15 = puVar7[lVar14] & uVar8;
      if (uVar15 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar6;
        if (iVar6 < iVar2) {
          iVar9 = iVar2;
        }
        if (iVar6 <= iVar2) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar15 = puVar7[lVar14 + lVar11 + 1];
          if (uVar15 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar14 == lVar11) goto LAB_142773adb;
        }
        uVar13 = (ulonglong)(iVar2 + (int)lVar11 + 1);
        uVar8 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar2 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar2 < iVar3);
  }
LAB_142773adb:
  FUN_14170a286(param_1 + 0x10);
  FUN_14277ad80(param_1 + 0x10,(int)param_1[0x11] - *(int *)((longlong)param_1 + 0xb4));
  iVar3 = (int)param_1[0x15];
  if (iVar3 == 0) {
    uVar13 = 1;
    uVar16 = 0;
    iVar12 = 0;
    iVar2 = 0;
  }
  else {
    puVar4 = (uint *)param_1[0x14];
    if ((uint *)param_1[0x14] == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x12);
    }
    uVar8 = *puVar4;
    if (uVar8 == 0) {
      iVar2 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar2 = iVar3 + -1;
      }
      uVar16 = 0;
      uVar13 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar13 = uVar16;
      }
      iVar12 = 0;
      do {
        if (uVar13 == uVar16) goto LAB_142773b92;
        iVar12 = iVar12 + 0x20;
        uVar8 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar16 = 0;
      iVar12 = 0;
    }
    uVar13 = (ulonglong)(-uVar8 & uVar8);
    uVar1 = uVar13 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar2 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar2) {
      iVar2 = iVar3;
    }
  }
  if (iVar2 != iVar3) {
    uVar8 = 0xffffffff;
    do {
      lVar14 = param_1[0x10] + (longlong)iVar2 * 0x68;
      FUN_14626b35e(lVar14 + 0x10);
      FUN_14680a82e(lVar14 + 0x10,*(int *)(lVar14 + 0x18) - *(int *)(lVar14 + 0x44));
      uVar8 = ~(uint)uVar13 & uVar8;
      puVar4 = (uint *)param_1[0x14];
      if ((uint *)param_1[0x14] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x12);
      }
      iVar6 = (int)param_1[0x15];
      iVar2 = (int)uVar16;
      lVar14 = (longlong)iVar2;
      uVar15 = puVar4[lVar14] & uVar8;
      if (uVar15 == 0) {
        iVar9 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar9 = iVar6 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar2) {
          iVar10 = iVar2;
        }
        if (iVar2 < iVar9) {
          lVar11 = 0;
          do {
            uVar15 = puVar4[lVar14 + lVar11 + 1];
            if (uVar15 != 0) {
              uVar16 = (ulonglong)(iVar2 + (int)lVar11 + 1);
              uVar8 = 0xffffffff;
              goto LAB_142773c61;
            }
            iVar12 = iVar12 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar10 - lVar14 != lVar11);
          uVar8 = 0xffffffff;
          iVar2 = iVar10;
        }
        uVar16 = (ulonglong)(iVar2 + 1);
        iVar2 = iVar6;
      }
      else {
LAB_142773c61:
        uVar13 = (ulonglong)(-uVar15 & uVar15);
        uVar1 = uVar13 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar2 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar2) {
          iVar2 = iVar6;
        }
      }
    } while (iVar2 != iVar3);
  }
LAB_142773b92:
                    /* WARNING: Could not recover jumptable at 0x000142773ba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  return;
}



// FUNCTION 142773dbd FUN_142773dbd body=957 status=ok
// SIG undefined FUN_142773dbd(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 *
FUN_142773dbd(undefined8 *param_1,longlong *param_2,int param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  uint uVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  undefined1 auStack_3db8 [32];
  longlong *local_3d98;
  int local_3d8c;
  undefined8 *local_3d88;
  undefined8 *local_3d80;
  undefined8 *local_3d78;
  undefined8 local_3d70;
  longlong local_3d68;
  undefined8 uStack_3d60;
  longlong local_3d58 [27];
  undefined **local_3c80;
  undefined4 local_3c78;
  undefined8 local_3c74;
  undefined1 local_3c68 [15280];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3db8;
  local_3c80 = &PTR_FUN_149e27978;
  local_3c78 = 0x1000000;
  local_3c74 = 0;
  local_3d8c = param_3;
  FUN_14626acf6(local_3c68);
  local_98 = 0;
  uVar13 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_3d68 = 0;
  uStack_3d60 = 0;
  FUN_1468066f4(param_2);
  if ((longlong)(int)uStack_3d60 != 0) {
    lVar11 = 0;
    uVar13 = 0;
    do {
      if ((int)uVar13 < (int)*(uint *)(local_3d68 + lVar11)) {
        uVar13 = *(uint *)(local_3d68 + lVar11);
      }
      lVar11 = lVar11 + 4;
    } while ((longlong)(int)uStack_3d60 * 4 != lVar11);
  }
  uVar15 = 0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar4 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[8];
    }
    iVar6 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_2[9] - 1U & uVar13) * 4);
    if (iVar6 != -1) {
      do {
        lVar11 = *param_2 + (longlong)iVar6 * 0x20;
        if (*(uint *)(*param_2 + (longlong)iVar6 * 0x20) == uVar13) goto LAB_142773efe;
        iVar6 = *(int *)(lVar11 + 0x18);
      } while (iVar6 != -1);
    }
  }
  lVar11 = 0;
LAB_142773efe:
  local_3d80 = param_4;
  local_3d78 = param_1;
  FUN_1408e76da(local_3d58);
  local_3d88 = (undefined8 *)(lVar11 + 8);
  local_3d70 = FUN_140d7ae18(&local_3c80,(undefined8 *)(lVar11 + 8),local_3d58);
  FUN_1409263a6(local_3d58);
  iVar6 = (int)param_2[5];
  uVar18 = 1;
  iVar19 = 0;
  iVar7 = 0;
  if (iVar6 != 0) {
    puVar5 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 2);
    }
    uVar13 = *puVar5;
    if (uVar13 == 0) {
      iVar7 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar7 = iVar6 + -1;
      }
      uVar15 = 0;
      uVar18 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar18 = uVar15;
      }
      iVar19 = 0;
      do {
        if (uVar18 == uVar15) goto LAB_142773fc7;
        iVar19 = iVar19 + 0x20;
        uVar13 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar15 = 0;
    }
    uVar18 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar18 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar7 = (iVar19 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar7) {
      iVar7 = iVar6;
    }
  }
  if (iVar7 != iVar6) {
    uVar13 = 0xffffffff;
    iVar3 = iVar6;
    do {
      if (*(int *)(*param_2 + (longlong)iVar7 * 0x20) < local_3d8c) {
        FUN_140fa61d5(local_3d70,*param_2 + (longlong)iVar7 * 0x20 + 8,
                      CONCAT71((uint7)(uint3)((uint)local_3d8c >> 8),1));
        iVar3 = (int)param_2[5];
      }
      uVar13 = uVar13 & ~(uint)uVar18;
      puVar5 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 2);
      }
      iVar7 = (int)uVar15;
      lVar16 = (longlong)iVar7;
      uVar8 = puVar5[lVar16] & uVar13;
      if (uVar8 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar7 < iVar9) {
          lVar17 = 0;
          do {
            uVar8 = puVar5[lVar16 + lVar17 + 1];
            if (uVar8 != 0) {
              uVar15 = (ulonglong)(iVar7 + (int)lVar17 + 1);
              uVar13 = 0xffffffff;
              goto LAB_142774132;
            }
            iVar19 = iVar19 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar10 - lVar16 != lVar17);
          uVar13 = 0xffffffff;
          iVar7 = iVar10;
        }
        uVar15 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar3;
      }
      else {
LAB_142774132:
        uVar18 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar18 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar7 = (iVar19 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar6);
  }
LAB_142773fc7:
  puVar2 = local_3d78;
  *local_3d78 = 0;
  local_3d78[1] = 0;
  puVar14 = &DAT_149dfb77a;
  puVar12 = &DAT_149dfb77a;
  if (*(int *)(lVar11 + 0x10) != 0) {
    puVar12 = (undefined2 *)*local_3d88;
  }
  FUN_140056680(local_3d58,puVar12);
  puVar12 = &DAT_149dfb77a;
  if (*(int *)(param_5 + 1) != 0) {
    puVar12 = (undefined2 *)*param_5;
  }
  if (*(int *)(local_3d80 + 1) != 0) {
    puVar14 = (undefined2 *)*local_3d80;
  }
  local_3d98 = local_3d58;
  FUN_14105aa76(&local_3c80,puVar14,puVar12,puVar2);
  if (local_3d58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_3d68 != 0) {
    FUN_1400020a8();
  }
  FUN_1457585f6(&local_3c80);
  if ((local_48 ^ (ulonglong)auStack_3db8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 14277417c FUN_14277417c body=885 status=ok
// SIG undefined FUN_14277417c(void)

void FUN_14277417c(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  FUN_145827982();
  FUN_14680ac26(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar9 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 2);
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar14) goto LAB_142774231;
        iVar9 = iVar9 + 0x20;
        uVar6 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar6 = 0xffffffff;
    do {
      lVar11 = *param_1 + (longlong)iVar4 * 0xb8;
      FUN_14170a154(lVar11 + 0x10);
      FUN_14277ad3c(lVar11 + 0x10,*(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x44));
      uVar6 = ~(uint)uVar13 & uVar6;
      puVar5 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar14;
      lVar11 = (longlong)iVar4;
      uVar10 = puVar5[lVar11] & uVar6;
      if (uVar10 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar8;
        if (iVar8 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar8) {
          lVar12 = 0;
          do {
            uVar10 = puVar5[lVar11 + lVar12 + 1];
            if (uVar10 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar6 = 0xffffffff;
              goto LAB_14277437c;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar11 != lVar12);
          uVar6 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_14277437c:
        uVar13 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_142774231:
  FUN_14170a286(param_1 + 10);
  FUN_14277ad80(param_1 + 10,(int)param_1[0xb] - *(int *)((longlong)param_1 + 0x84));
  iVar2 = (int)param_1[0xf];
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar9 = 0;
    iVar4 = 0;
  }
  else {
    puVar5 = (uint *)param_1[0xe];
    if ((uint *)param_1[0xe] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0xc);
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar6 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar6 = 0xffffffff;
    do {
      lVar11 = param_1[10] + (longlong)iVar4 * 0x68;
      FUN_14626b35e(lVar11 + 0x10);
      FUN_14680a82e(lVar11 + 0x10,*(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x44));
      uVar6 = ~(uint)uVar13 & uVar6;
      puVar5 = (uint *)param_1[0xe];
      if ((uint *)param_1[0xe] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0xc);
      }
      iVar3 = (int)param_1[0xf];
      iVar4 = (int)uVar14;
      lVar11 = (longlong)iVar4;
      uVar10 = puVar5[lVar11] & uVar6;
      if (uVar10 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar8;
        if (iVar8 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar8) {
          lVar12 = 0;
          do {
            uVar10 = puVar5[lVar11 + lVar12 + 1];
            if (uVar10 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar6 = 0xffffffff;
              goto LAB_142774492;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar11 != lVar12);
          uVar6 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_142774492:
        uVar13 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 1427744f2 FUN_1427744f2 body=3136 status=ok
// SIG undefined FUN_1427744f2(void)

undefined8
FUN_1427744f2(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined2 param_4,
             char *param_5)

{
  byte bVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined1 auStack_2e8 [32];
  uint local_2c8;
  undefined2 local_2c2;
  undefined8 *local_2c0;
  ulonglong local_2b8;
  int local_2b0;
  int local_2ac;
  ulonglong local_2a8;
  uint local_29c;
  ulonglong local_298;
  undefined8 *local_290;
  ulonglong local_288;
  undefined8 *local_280;
  ulonglong local_278;
  ulonglong local_270;
  longlong *local_268;
  longlong *local_260;
  uint *local_258;
  undefined8 local_250;
  longlong local_248;
  ulonglong local_240;
  uint *local_238;
  char *local_230;
  undefined8 *local_228;
  undefined8 *local_220;
  longlong local_218;
  longlong *local_210;
  longlong local_208;
  undefined8 uStack_200;
  undefined1 local_1f4 [4];
  longlong local_1f0;
  undefined8 *local_1e8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0 [64];
  longlong local_160;
  undefined4 local_158;
  longlong local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_77;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  local_2c2 = param_4;
  local_218 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c866d54) && (FUN_144b3d300(&DAT_14c866d54), DAT_14c866d54 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    FUN_14054d46e(&DAT_14c846b20,L"dumpiniloads");
    _Init_thread_footer(&DAT_14c866d54);
  }
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
  local_77 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_208 = 0;
  uStack_200 = 0;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    plVar25 = (longlong *)*param_2;
    plVar17 = plVar25 + (longlong)*(int *)(param_2 + 1) * 2;
    puVar9 = param_1 + 0x8a;
    puVar23 = param_1 + 0x56;
    local_280 = param_1 + 0x1e;
    local_230 = param_5 + 8;
    local_260 = (longlong *)(param_5 + 0x68);
    local_268 = (longlong *)(param_5 + 0x58);
    local_270 = 0;
    local_228 = puVar23;
    local_220 = puVar9;
    do {
      puVar13 = &DAT_149dfb77a;
      if ((int)plVar25[1] != 0) {
        puVar13 = (undefined2 *)*plVar25;
      }
      cVar3 = FUN_1427735ea(puVar13,0);
      if (cVar3 != '\0') {
        if ((int)uStack_200 == 0) {
          FUN_142775133(&local_1f0,puVar23,puVar9);
          FUN_145aac04e(&local_128,&local_1f0);
          if (local_138 != 0) {
            FUN_1400020a8();
          }
          local_158 = 0;
          if (local_160 != 0) {
            FUN_1400020a8();
          }
          FUN_1409261c2(local_1a0);
          local_1a8 = 0;
          if (local_1b0 != 0) {
            FUN_1400020a8();
          }
          FUN_14092636e(&local_1f0);
        }
        plVar6 = (longlong *)FUN_14001cc68(200,0x10);
        plVar6[4] = 0;
        *(undefined4 *)(plVar6 + 5) = 0;
        *plVar6 = 0;
        plVar6[1] = 0;
        *(undefined8 *)((longlong)plVar6 + 0x2c) = 0xffffffff00000080;
        *(undefined4 *)((longlong)plVar6 + 0x34) = 0;
        plVar6[8] = 0;
        *(undefined4 *)(plVar6 + 9) = 0;
        plVar6[0xe] = 0;
        *(undefined4 *)(plVar6 + 0xf) = 0;
        plVar6[10] = 0;
        plVar6[0xb] = 0;
        *(undefined8 *)((longlong)plVar6 + 0x7c) = 0xffffffff00000080;
        *(undefined4 *)((longlong)plVar6 + 0x84) = 0;
        plVar6[0x12] = 0;
        *(undefined4 *)(plVar6 + 0x13) = 0;
        *(undefined2 *)((longlong)plVar6 + 0xb1) = 0;
        plVar22 = plVar6 + 0x17;
        plVar6[0x14] = 0;
        plVar6[0x15] = 0;
        plVar6[0x17] = 0;
        plVar6[0x18] = 0;
        local_210 = plVar6;
        FUN_14618f915(plVar6,plVar25,1);
        *(undefined2 *)((longlong)plVar6 + 0xb4) = local_2c2;
        if (plVar22 != plVar25) {
          iVar15 = (int)plVar25[1];
          pvVar2 = (void *)*plVar25;
          *(int *)(plVar6 + 0x18) = iVar15;
          if (iVar15 == 0 && *(int *)((longlong)plVar6 + 0xc4) == 0) {
            *(undefined4 *)((longlong)plVar6 + 0xc4) = 0;
          }
          else {
            FUN_1446dd670(plVar22);
            if (iVar15 != 0) {
              memcpy((void *)*plVar22,pvVar2,(longlong)iVar15 * 2);
            }
          }
        }
        plVar6[0x15] = local_218;
        lVar24 = (longlong)(int)uStack_200;
        uVar4 = (int)uStack_200 + 1;
        uStack_200 = CONCAT44(uStack_200._4_4_,uVar4);
        if (uStack_200._4_4_ < uVar4) {
          FUN_14626b42a(&local_208);
        }
        *(longlong **)(local_208 + lVar24 * 8) = plVar6;
        if (*(char *)((longlong)param_1 + 0x42) != '\x02') {
          plVar22 = (longlong *)param_1[0x1f];
          if (plVar22 != (longlong *)0x0) {
            do {
              if (*(ushort *)((longlong)plVar6 + 0xb4) < *(ushort *)(*plVar22 + 0xb4)) {
                puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
                *puVar9 = plVar6;
                puVar9[1] = 0;
                puVar9[2] = 0;
                uVar7 = FUN_14680acd0(local_280,puVar9,plVar22);
                local_270 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
                goto LAB_142774865;
              }
              plVar22 = (longlong *)plVar22[1];
            } while (plVar22 != (longlong *)0x0);
          }
          FUN_14626ac8a(local_280);
        }
LAB_142774865:
        puVar9 = local_220;
        puVar23 = local_228;
        if (param_5 != (char *)0x0) {
          if (*param_5 == '\x01') {
            uVar4 = *(uint *)(plVar6 + 5);
            if (uVar4 == 0) {
              uVar16 = 1;
              uVar21 = 0;
              iVar15 = 0;
              uVar5 = 0;
            }
            else {
              puVar8 = (uint *)plVar6[4];
              if ((uint *)plVar6[4] == (uint *)0x0) {
                puVar8 = (uint *)(plVar6 + 2);
              }
              uVar5 = *puVar8;
              if (uVar5 == 0) {
                iVar15 = uVar4 + 0x1e;
                if (-1 < (int)(uVar4 - 1)) {
                  iVar15 = uVar4 - 1;
                }
                uVar21 = 0;
                uVar16 = (ulonglong)(uint)(iVar15 >> 5);
                if (iVar15 >> 5 < 1) {
                  uVar16 = uVar21;
                }
                iVar15 = 0;
                do {
                  if (uVar16 == uVar21) goto LAB_142774917;
                  iVar15 = iVar15 + 0x20;
                  uVar5 = puVar8[uVar21 + 1];
                  uVar21 = uVar21 + 1;
                } while (uVar5 == 0);
              }
              else {
                uVar21 = 0;
                iVar15 = 0;
              }
              uVar16 = (ulonglong)(-uVar5 & uVar5);
              uVar14 = uVar16 * 2 + 1;
              lVar24 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              uVar5 = (iVar15 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
              if ((int)uVar4 <= (int)uVar5) {
                uVar5 = uVar4;
              }
            }
            if (uVar5 != uVar4) {
              uVar20 = 0xffffffff;
              local_2c0 = param_1;
              local_288 = (ulonglong)uVar4;
              local_238 = (uint *)(plVar6 + 2);
              do {
                local_2ac = iVar15;
                lVar24 = *plVar6;
                puVar9 = (undefined8 *)(lVar24 + (longlong)(int)uVar5 * 0xb8);
                uVar7 = *param_1;
                uVar4 = (uint)((ulonglong)uVar7 >> 0x10);
                uVar19 = (uint)uVar7 & 0xffff;
                local_2b8 = uVar16;
                local_29c = uVar20;
                local_278 = uVar21;
                uVar7 = FUN_145aeb14a(local_230,
                                      ((uint)uVar7 << 0x10 | uVar19) +
                                      (int)((ulonglong)uVar7 >> 0x20) +
                                      (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar19 >> 4),param_1);
                uVar4 = 0;
                FUN_14482b35e(uVar7,&local_1f0,puVar9,0);
                iVar15 = *(int *)(lVar24 + 8 + (longlong)(int)uVar5 * 0xb8);
                iVar10 = iVar15 + -1;
                if (iVar15 == 0) {
                  iVar10 = 0;
                }
                if (0 < iVar10) {
                  puVar13 = &DAT_149dfb77a;
                  if (iVar15 != 0) {
                    puVar13 = (undefined2 *)*puVar9;
                  }
                  lVar24 = 0;
                  uVar4 = 0;
                  do {
                    uVar5 = ((uint)(ushort)puVar13[lVar24] +
                            (uint)(0x19 < (ushort)puVar13[lVar24] - 0x61) * 0x20) - 0x20;
                    uVar4 = uVar4 >> 8 ^
                            *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar4 ^ uVar5) & 0xff) * 4);
                    uVar4 = uVar4 >> 8 ^
                            *(uint *)(&DAT_14c75d150 +
                                     (ulonglong)(uVar4 & 0xff ^ uVar5 >> 8 & 0xff) * 4);
                    lVar24 = lVar24 + 1;
                  } while (iVar10 != (int)lVar24);
                }
                local_290 = puVar9;
                iVar15 = FUN_14680adbc(local_260,uVar4);
                uVar21 = local_278;
                param_1 = local_2c0;
                uVar4 = (uint)local_2b8;
                if (iVar15 != -1) {
                  if ((*local_260 + (longlong)iVar15 * 0x70 + 0x10U & 0xffffffffffffffef) != 0) {
                    uVar7 = *local_2c0;
                    uVar5 = (uint)((ulonglong)uVar7 >> 0x10);
                    uVar20 = (uint)uVar7 & 0xffff;
                    local_250 = FUN_14680ae88(*local_260 + (longlong)iVar15 * 0x70 + 0x18,
                                              ((uint)uVar7 << 0x10 | uVar20) +
                                              (int)((ulonglong)uVar7 >> 0x20) +
                                              (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar20 >> 4),
                                              local_2c0);
                    local_258 = (uint *)(local_290 + 4);
                    uVar5 = *(uint *)(local_290 + 7);
                    if (uVar5 == 0) {
                      local_2a8 = 1;
                      uVar16 = 0;
                      iVar15 = 0;
                      uVar20 = 0;
                    }
                    else {
                      puVar8 = (uint *)local_290[6];
                      if ((uint *)local_290[6] == (uint *)0x0) {
                        puVar8 = local_258;
                      }
                      uVar20 = *puVar8;
                      if (uVar20 == 0) {
                        iVar15 = uVar5 + 0x1e;
                        if (-1 < (int)(uVar5 - 1)) {
                          iVar15 = uVar5 - 1;
                        }
                        uVar16 = 0;
                        uVar14 = (ulonglong)(uint)(iVar15 >> 5);
                        if (iVar15 >> 5 < 1) {
                          uVar14 = uVar16;
                        }
                        iVar15 = 0;
                        do {
                          if (uVar14 == uVar16) goto LAB_142774b03;
                          iVar15 = iVar15 + 0x20;
                          uVar20 = puVar8[uVar16 + 1];
                          uVar16 = uVar16 + 1;
                        } while (uVar20 == 0);
                      }
                      else {
                        uVar16 = 0;
                        iVar15 = 0;
                      }
                      local_2a8 = (ulonglong)(-uVar20 & uVar20);
                      uVar14 = local_2a8 * 2 + 1;
                      lVar24 = 0x3f;
                      if (uVar14 != 0) {
                        for (; uVar14 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                        }
                      }
                      uVar20 = (iVar15 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                      if ((int)uVar5 <= (int)uVar20) {
                        uVar20 = uVar5;
                      }
                    }
                    if (uVar20 != uVar5) {
                      local_2c8 = 0xffffffff;
                      local_298 = (ulonglong)uVar5;
                      do {
                        uVar7 = local_250;
                        puVar23 = local_290;
                        local_248 = local_290[2] + (longlong)(int)uVar20 * 0x40;
                        puVar9 = (undefined8 *)(local_290[2] + (longlong)(int)uVar20 * 0x40);
                        local_2b0 = iVar15;
                        local_240 = uVar16;
                        FUN_1406e05e8(local_250,*puVar9);
                        local_1f0 = local_248;
                        local_1e8 = puVar9 + 1;
                        FUN_14680aa64(uVar7,local_1f4,&local_1f0);
                        local_2c8 = ~(uint)local_2a8 & local_2c8;
                        puVar8 = (uint *)puVar23[6];
                        if (puVar8 == (uint *)0x0) {
                          puVar8 = local_258;
                        }
                        uVar5 = *(uint *)(puVar23 + 7);
                        iVar10 = (int)local_240;
                        lVar24 = (longlong)iVar10;
                        uVar20 = puVar8[lVar24] & local_2c8;
                        uVar4 = (uint)local_2b8;
                        uVar16 = local_240;
                        iVar15 = local_2b0;
                        if (uVar20 == 0) {
                          iVar11 = uVar5 + 0x1e;
                          if (-1 < (int)(uVar5 - 1)) {
                            iVar11 = uVar5 - 1;
                          }
                          iVar11 = iVar11 >> 5;
                          iVar15 = local_2b0 + 0x20;
                          iVar12 = iVar11;
                          if (iVar11 < iVar10) {
                            iVar12 = iVar10;
                          }
                          if (iVar10 < iVar11) {
                            lVar26 = 0;
                            do {
                              uVar20 = puVar8[lVar24 + lVar26 + 1];
                              if (uVar20 != 0) {
                                local_2c8 = 0xffffffff;
                                uVar16 = (ulonglong)(iVar10 + (int)lVar26 + 1);
                                goto LAB_142774de8;
                              }
                              iVar15 = iVar15 + 0x20;
                              lVar26 = lVar26 + 1;
                            } while (iVar12 - lVar24 != lVar26);
                            local_2c8 = 0xffffffff;
                            iVar10 = iVar12;
                          }
                          uVar16 = (ulonglong)(iVar10 + 1);
                          uVar21 = local_278;
                          uVar20 = uVar5;
                        }
                        else {
LAB_142774de8:
                          local_2a8 = (ulonglong)(-uVar20 & uVar20);
                          uVar14 = local_2a8 * 2 + 1;
                          lVar24 = 0x3f;
                          if (uVar14 != 0) {
                            for (; uVar14 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                            }
                          }
                          uVar20 = (iVar15 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                          if ((int)uVar5 <= (int)uVar20) {
                            uVar20 = uVar5;
                          }
                        }
                        param_1 = local_2c0;
                      } while (uVar20 != (uint)local_298);
                    }
                  }
                }
LAB_142774b03:
                uVar20 = local_29c & ~uVar4;
                puVar8 = (uint *)plVar6[4];
                if ((uint *)plVar6[4] == (uint *)0x0) {
                  puVar8 = local_238;
                }
                uVar4 = *(uint *)(plVar6 + 5);
                iVar10 = (int)uVar21;
                lVar24 = (longlong)iVar10;
                uVar5 = puVar8[lVar24] & uVar20;
                iVar15 = local_2ac;
                if (uVar5 == 0) {
                  iVar11 = uVar4 + 0x1e;
                  if (-1 < (int)(uVar4 - 1)) {
                    iVar11 = uVar4 - 1;
                  }
                  iVar11 = iVar11 >> 5;
                  iVar15 = local_2ac + 0x20;
                  iVar12 = iVar11;
                  if (iVar11 < iVar10) {
                    iVar12 = iVar10;
                  }
                  if (iVar10 < iVar11) {
                    lVar26 = 0;
                    do {
                      uVar5 = puVar8[lVar24 + lVar26 + 1];
                      if (uVar5 != 0) {
                        uVar21 = (ulonglong)(iVar10 + (int)lVar26 + 1);
                        uVar20 = 0xffffffff;
                        goto LAB_142774b98;
                      }
                      iVar15 = iVar15 + 0x20;
                      lVar26 = lVar26 + 1;
                    } while (iVar12 - lVar24 != lVar26);
                    uVar20 = 0xffffffff;
                    iVar10 = iVar12;
                  }
                  uVar21 = (ulonglong)(iVar10 + 1);
                  param_1 = local_2c0;
                  uVar16 = local_2b8;
                  uVar5 = uVar4;
                }
                else {
LAB_142774b98:
                  uVar16 = (ulonglong)(-uVar5 & uVar5);
                  uVar14 = uVar16 * 2 + 1;
                  lVar24 = 0x3f;
                  if (uVar14 != 0) {
                    for (; uVar14 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                    }
                  }
                  uVar5 = (iVar15 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                  if ((int)uVar4 <= (int)uVar5) {
                    uVar5 = uVar4;
                  }
                }
              } while (uVar5 != (uint)local_288);
            }
          }
LAB_142774917:
          puVar9 = local_220;
          puVar23 = local_228;
          if (param_5[1] == '\x01') {
            iVar15 = *(int *)(param_5 + 0x60);
            uVar4 = iVar15 + 1;
            *(uint *)(param_5 + 0x60) = uVar4;
            if (*(uint *)(param_5 + 100) < uVar4) {
              FUN_1447a1bd6(local_268);
            }
            lVar24 = *local_268;
            lVar26 = (longlong)iVar15 * 0x10;
            puVar9 = (undefined8 *)(lVar24 + lVar26);
            *(undefined8 *)(lVar24 + lVar26) = 0;
            iVar15 = (int)plVar25[1];
            pvVar2 = (void *)*plVar25;
            *(int *)(lVar24 + 8 + lVar26) = iVar15;
            if ((longlong)iVar15 == 0) {
              *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
              puVar9 = local_220;
              puVar23 = local_228;
            }
            else {
              FUN_1446dd670(puVar9,iVar15,0);
              memcpy((void *)*puVar9,pvVar2,(longlong)iVar15 * 2);
              puVar9 = local_220;
              puVar23 = local_228;
            }
          }
        }
      }
      lVar24 = local_208;
      plVar25 = plVar25 + 2;
    } while (plVar25 != plVar17);
    uVar21 = uStack_200 & 0xffffffff;
    if (0 < (int)uStack_200) {
      if ((local_270 & 1) == 0) {
        lVar26 = 0;
        do {
          uVar7 = *(undefined8 *)(lVar24 + lVar26);
          FUN_1406dfe24(puVar23,uVar7);
          FUN_1406dfe24(puVar9,uVar7);
          lVar26 = lVar26 + 8;
        } while (uVar21 << 3 != lVar26);
      }
      else {
        FUN_140d7b3ae(puVar23,param_1 + 0x3b);
        for (puVar18 = (undefined8 *)param_1[0x1f]; puVar18 != (undefined8 *)0x0;
            puVar18 = (undefined8 *)puVar18[1]) {
          FUN_1406dfe24(puVar23,*puVar18);
        }
        bVar1 = *(byte *)(param_1 + 0x94);
        FUN_140d7b3ae(puVar9,puVar23);
        *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0xef | bVar1 & 0x10;
      }
      FUN_1406dfe24(puVar9,&local_128);
      FUN_14277389c(puVar23);
      FUN_14277389c(puVar9);
    }
  }
  if (local_208 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1409261c2(&local_d8);
  local_e0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_14092636e(&local_128);
  if ((local_60 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 142775133 FUN_142775133 body=6338 status=ok
// SIG undefined FUN_142775133(void)

undefined8 * FUN_142775133(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  void *_Src;
  bool bVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong *plVar19;
  char **ppcVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  uint *puVar25;
  undefined1 *puVar26;
  void **ppvVar27;
  longlong lVar28;
  ulonglong uVar29;
  char *pcVar30;
  char *pcVar31;
  undefined1 auStack_258 [32];
  char local_238;
  longlong *local_230;
  longlong *local_228;
  ulonglong local_220;
  ulonglong local_218;
  longlong *local_210;
  ulonglong local_208;
  undefined8 *local_200;
  char *local_1f8;
  ulonglong local_1f0;
  int local_1e8;
  uint local_1e4;
  longlong *local_1e0;
  ulonglong local_1d8;
  longlong *local_1d0;
  uint *local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  char **local_198;
  longlong *local_190;
  longlong local_180;
  char *local_168;
  ulonglong uStack_160;
  char *local_158;
  ulonglong uStack_150;
  char *local_140;
  longlong *local_138;
  ulonglong uStack_130;
  undefined1 local_11c [4];
  char **local_118;
  char ***pppcStack_110;
  longlong local_108;
  ulonglong uStack_100;
  uint local_f8 [2];
  longlong local_f0;
  uint *local_e8;
  int local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  ulonglong uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar15 = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb1) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  local_138 = (longlong *)0x0;
  uStack_130 = 0;
  local_200 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  local_1d0 = param_3;
  FUN_14170778c(param_3,&local_138);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  local_1c8 = (uint *)(param_2 + 2);
  iVar7 = (int)param_2[5];
  uVar29 = 1;
  if (iVar7 == 0) {
    iVar7 = 0;
    uVar16 = 0;
  }
  else {
    puVar10 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar10 = local_1c8;
    }
    uVar18 = *puVar10;
    if (uVar18 == 0) {
      iVar14 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar14 = iVar7 + -1;
      }
      uVar22 = 0;
      uVar17 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar17 = uVar22;
      }
      uVar16 = (ulonglong)((int)uVar17 + 1);
      uVar15 = (ulonglong)((int)uVar17 * 0x20 + 0x20);
      uVar6 = 0;
      do {
        if (uVar17 == uVar22) goto LAB_1427752b6;
        uVar6 = uVar6 + 0x20;
        uVar18 = puVar10[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar18 == 0);
      uVar16 = uVar22 & 0xffffffff;
    }
    else {
      uVar6 = 0;
      uVar16 = 0;
    }
    uVar29 = (ulonglong)(-uVar18 & uVar18);
    uVar15 = uVar29 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar14 = (uVar6 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar14) {
      iVar14 = iVar7;
    }
    iVar7 = iVar14;
    uVar15 = (ulonglong)uVar6;
  }
LAB_1427752b6:
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  iVar14 = (int)param_2[5];
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  local_1e8 = iVar14;
  if (iVar7 != iVar14) {
    puVar26 = &DAT_ffffffff;
    local_1e0 = param_2;
    do {
      local_1e4 = (uint)puVar26;
      lVar23 = *param_2;
      lVar21 = (longlong)iVar7 * 0xc0;
      local_230 = (longlong *)(lVar23 + lVar21);
      local_b8 = local_230;
      FUN_140c8411c(&local_138,&local_b8);
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      plVar19 = local_1d0;
      iVar7 = *(int *)(lVar23 + 8 + lVar21);
      iVar14 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar14 = 0;
      }
      uVar17 = 0;
      if (0 < iVar14) {
        puVar8 = &DAT_149dfb77a;
        if (iVar7 != 0) {
          puVar8 = (undefined2 *)*local_230;
        }
        lVar24 = 0;
        uVar17 = 0;
        do {
          uVar18 = ((uint)(0x19 < (ushort)puVar8[lVar24] - 0x61) * 0x20 +
                   (uint)(ushort)puVar8[lVar24]) - 0x20;
          uVar6 = (uint)(uVar17 >> 8) ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar17 ^ uVar18) & 0xff) * 4);
          uVar17 = (ulonglong)
                   (uVar6 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar6 & 0xff ^ uVar18 >> 8 & 0xff) * 4));
          lVar24 = lVar24 + 1;
        } while (iVar14 != (int)lVar24);
      }
      lVar21 = lVar21 + lVar23 + 0x10;
      iVar7 = FUN_14052bbf0(local_1d0,uVar17,local_230);
      lVar23 = (longlong)iVar7 * 0xc0 + *plVar19;
      if (iVar7 == -1) {
        lVar23 = 0;
      }
      plVar19 = (longlong *)(lVar23 + 0x10);
      if (lVar23 == 0) {
        plVar19 = (longlong *)0x0;
      }
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      local_98 = (uint *)0x0;
      local_90 = 0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      local_8c = 0x80;
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      local_e8 = (uint *)0x0;
      local_e0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_dc = 0x80;
      uStack_d8 = 0xffffffff;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_1b0 = lVar21;
      FUN_14170747e(lVar21,&local_b8);
      if (plVar19 != (longlong *)0x0) {
        FUN_14170747e(plVar19,&local_108);
      }
      local_210 = plVar19;
      local_1d8 = uVar29;
      local_1c0 = uVar16;
      local_1b8 = uVar15;
      if (local_90 == 0) {
        local_208 = 1;
        uVar15 = 0;
        iVar7 = 0;
        uVar18 = 0;
      }
      else {
        puVar10 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar10 = local_a8;
        }
        uVar18 = *puVar10;
        if (uVar18 == 0) {
          iVar7 = local_90 + 0x1e;
          if (-1 < (int)(local_90 - 1)) {
            iVar7 = local_90 - 1;
          }
          uVar15 = 0;
          uVar29 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar29 = uVar15;
          }
          iVar7 = 0;
          do {
            if (uVar29 == uVar15) goto LAB_142775b32;
            iVar7 = iVar7 + 0x20;
            uVar18 = puVar10[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar15 = 0;
          iVar7 = 0;
        }
        local_208 = (ulonglong)(-uVar18 & uVar18);
        uVar29 = local_208 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        uVar18 = (iVar7 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if ((int)local_90 <= (int)uVar18) {
          uVar18 = local_90;
        }
      }
      if (uVar18 == local_90) {
LAB_142775b32:
        lVar23 = 0;
      }
      else {
        local_220 = CONCAT44(local_220._4_4_,0xffffffff);
        lVar23 = 0;
        local_1f0 = (ulonglong)local_90;
        do {
          local_228 = (longlong *)CONCAT44(local_228._4_4_,iVar7);
          local_140 = (char *)local_b8[(longlong)(int)uVar18 * 2];
          local_158 = (char *)0x0;
          uStack_150 = 0;
          local_168 = (char *)0x0;
          uStack_160 = 0;
          local_218 = uVar15;
          FUN_144a8b5fe(&local_108);
          FUN_1405418ca(local_1b0,local_140,&local_158,1);
          if (plVar19 != (longlong *)0x0) {
            FUN_1405418ca(plVar19,local_140,&local_168,1);
          }
          if ((int)uStack_160 == 0) {
            if (lVar23 == 0) {
              iVar7 = (int)local_230[1];
              uVar15 = 0;
              iVar14 = iVar7 + -1;
              if (iVar7 == 0) {
                iVar14 = 0;
              }
              if (0 < iVar14) {
                puVar8 = &DAT_149dfb77a;
                if (iVar7 != 0) {
                  puVar8 = (undefined2 *)*local_230;
                }
                lVar23 = 0;
                uVar15 = 0;
                do {
                  uVar18 = ((uint)(0x19 < (ushort)puVar8[lVar23] - 0x61) * 0x20 +
                           (uint)(ushort)puVar8[lVar23]) - 0x20;
                  uVar6 = (uint)(uVar15 >> 8) ^
                          *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar18) & 0xff) * 4
                                   );
                  uVar15 = (ulonglong)
                           (uVar6 >> 8 ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(uVar6 & 0xff ^ uVar18 >> 8 & 0xff) * 4));
                  lVar23 = lVar23 + 1;
                } while (iVar14 != (int)lVar23);
              }
              lVar23 = FUN_140d68dce(local_200,uVar15,local_230);
            }
            FUN_1468037c6(&local_198,L"__ClearArray__");
            local_118 = &local_140;
            pppcStack_110 = &local_198;
            FUN_141709fce(lVar23,&local_1a8,&local_118);
            if (local_180 != 0) {
              FUN_1400020a8();
            }
            if (local_190 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          if ((longlong)(int)uStack_150 != 0) {
            local_1f8 = local_158 + (longlong)(int)uStack_150 * 0x30;
            pcVar31 = local_158;
            do {
              local_1a8 = (void *)0x0;
              local_1a0 = *(int *)(pcVar31 + 0x10);
              lVar21 = (longlong)local_1a0;
              _Src = *(void **)(pcVar31 + 8);
              if (lVar21 == 0) {
                local_19c = 0;
              }
              else {
                FUN_1446dd670(&local_1a8,local_1a0,0);
                memcpy(local_1a8,_Src,lVar21 * 2);
              }
              pcVar30 = local_168;
              cVar1 = *pcVar31;
              bVar4 = (int)uStack_150 < 2;
              lVar21 = (longlong)(int)uStack_160;
              if (0 < lVar21) {
                lVar24 = 0;
LAB_142775d2f:
                if (local_1a0 != *(int *)(local_168 + lVar24 * 0x30 + 0x10)) {
                  if (*(int *)(local_168 + lVar24 * 0x30 + 0x10) + local_1a0 == 1)
                  goto LAB_142775dcb;
                  goto LAB_142775db1;
                }
                if (1 < local_1a0) {
                  lVar28 = 0;
                  do {
                    uVar2 = *(ushort *)((longlong)local_1a8 + lVar28);
                    uVar3 = *(ushort *)(*(longlong *)(local_168 + lVar24 * 0x30 + 8) + lVar28);
                    if (uVar2 == uVar3) {
                      if (uVar2 == 0) break;
                    }
                    else {
                      if (0x7f < (uVar3 | uVar2)) {
                        iVar7 = (uint)uVar2 - (uint)uVar3;
                        goto LAB_142775da1;
                      }
                      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                      goto code_r0x000142775d9e;
                    }
                    lVar28 = lVar28 + 2;
                  } while( true );
                }
                goto LAB_142775dcb;
              }
LAB_142775e42:
              if (lVar23 == 0) {
                iVar7 = (int)local_230[1];
                uVar15 = 0;
                iVar14 = iVar7 + -1;
                if (iVar7 == 0) {
                  iVar14 = 0;
                }
                if (0 < iVar14) {
                  puVar8 = &DAT_149dfb77a;
                  if (iVar7 != 0) {
                    puVar8 = (undefined2 *)*local_230;
                  }
                  lVar23 = 0;
                  uVar15 = 0;
                  do {
                    uVar18 = ((uint)(0x19 < (ushort)puVar8[lVar23] - 0x61) * 0x20 +
                             (uint)(ushort)puVar8[lVar23]) - 0x20;
                    uVar6 = (uint)(uVar15 >> 8) ^
                            *(uint *)(&DAT_14c75d150 +
                                     (ulonglong)(((uint)uVar15 ^ uVar18) & 0xff) * 4);
                    uVar15 = (ulonglong)
                             (uVar6 >> 8 ^
                             *(uint *)(&DAT_14c75d150 +
                                      (ulonglong)(uVar6 & 0xff ^ uVar18 >> 8 & 0xff) * 4));
                    lVar23 = lVar23 + 1;
                  } while (iVar14 != (int)lVar23);
                }
                lVar23 = FUN_140d68dce(local_200,uVar15,local_230);
              }
              if ((bVar4 && lVar21 < 2) && cVar1 != '\b') {
                if ((int)uStack_160 < 1) {
                  local_238 = '\x04';
                  ppvVar27 = &local_1a8;
                  goto LAB_142775fe5;
                }
                local_238 = '\0';
                FUN_140de70ba(&local_198,0,0,local_168 + 8);
                local_118 = &local_140;
                pppcStack_110 = &local_198;
                FUN_141709fce(lVar23,local_11c);
                if (local_180 != 0) {
                  FUN_1400020a8();
                }
                if (local_190 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                FUN_14170774d(local_168);
                uVar15 = uStack_160 >> 0x20;
                uStack_160 = uStack_160 & 0xffffffff00000000;
                if ((int)uVar15 != 0) {
                  FUN_1468069b6(&local_168);
                }
              }
              else {
                ppvVar27 = (void **)(pcVar31 + 8);
                local_238 = '\x03';
LAB_142775fe5:
                FUN_140de70ba(&local_198,0,0,ppvVar27);
                local_118 = &local_140;
                pppcStack_110 = &local_198;
                FUN_141709fce(lVar23);
                if (local_180 != 0) {
                  FUN_1400020a8();
                }
                if (local_190 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
LAB_14277603e:
              if (local_1a8 != (void *)0x0) {
                FUN_1400020a8();
              }
              pcVar31 = pcVar31 + 0x30;
            } while (pcVar31 != local_1f8);
          }
          if ((longlong)(int)uStack_160 == 0) {
            uVar15 = 0;
          }
          else {
            pcVar30 = local_168 + (longlong)(int)uStack_160 * 0x30;
            pcVar31 = local_168;
            do {
              if (lVar23 == 0) {
                iVar7 = (int)local_230[1];
                uVar15 = 0;
                iVar14 = iVar7 + -1;
                if (iVar7 == 0) {
                  iVar14 = 0;
                }
                if (0 < iVar14) {
                  puVar8 = &DAT_149dfb77a;
                  if (iVar7 != 0) {
                    puVar8 = (undefined2 *)*local_230;
                  }
                  lVar23 = 0;
                  uVar15 = 0;
                  do {
                    uVar18 = ((uint)(0x19 < (ushort)puVar8[lVar23] - 0x61) * 0x20 +
                             (uint)(ushort)puVar8[lVar23]) - 0x20;
                    uVar6 = (uint)(uVar15 >> 8) ^
                            *(uint *)(&DAT_14c75d150 +
                                     (ulonglong)(((uint)uVar15 ^ uVar18) & 0xff) * 4);
                    uVar15 = (ulonglong)
                             (uVar6 >> 8 ^
                             *(uint *)(&DAT_14c75d150 +
                                      (ulonglong)(uVar6 & 0xff ^ uVar18 >> 8 & 0xff) * 4));
                    lVar23 = lVar23 + 1;
                  } while (iVar14 != (int)lVar23);
                }
                lVar23 = FUN_140d68dce(local_200,uVar15,local_230);
              }
              local_238 = '\x02';
              if (((int)uStack_150 == 0) && ((int)uStack_160 == 1)) {
                local_238 = (*local_168 == '\b') * '\x02';
              }
              FUN_140de70ba(&local_198,0,0,pcVar31 + 8);
              local_118 = &local_140;
              pppcStack_110 = &local_198;
              FUN_141709fce(lVar23);
              if (local_180 != 0) {
                FUN_1400020a8();
              }
              if (local_190 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              pcVar31 = pcVar31 + 0x30;
            } while (pcVar31 != pcVar30);
            uVar15 = uStack_160 & 0xffffffff;
          }
          FUN_14170774d(local_168,uVar15);
          if (local_168 != (char *)0x0) {
            FUN_1400020a8();
          }
          FUN_14170774d(local_158,uStack_150 & 0xffffffff);
          plVar19 = local_210;
          if (local_158 != (char *)0x0) {
            FUN_1400020a8();
          }
          uVar18 = (uint)local_220 & ~(uint)local_208;
          puVar10 = local_98;
          if (local_98 == (uint *)0x0) {
            puVar10 = local_a8;
          }
          iVar14 = (int)local_218;
          lVar21 = (longlong)iVar14;
          local_220 = CONCAT44(local_220._4_4_,uVar18);
          uVar18 = puVar10[lVar21] & uVar18;
          uVar15 = local_218;
          iVar7 = (int)local_228;
          if (uVar18 == 0) {
            iVar11 = local_90 + 0x1e;
            if (-1 < (int)(local_90 - 1)) {
              iVar11 = local_90 - 1;
            }
            iVar11 = iVar11 >> 5;
            iVar7 = (int)local_228 + 0x20;
            iVar12 = iVar11;
            if (iVar11 < iVar14) {
              iVar12 = iVar14;
            }
            if (iVar14 < iVar11) {
              lVar24 = 0;
              do {
                uVar18 = (puVar10 + lVar21 + 1)[lVar24];
                if (uVar18 != 0) {
                  local_220 = CONCAT44(local_220._4_4_,0xffffffff);
                  uVar15 = (ulonglong)(iVar14 + (int)lVar24 + 1);
                  goto LAB_1427762dc;
                }
                iVar7 = iVar7 + 0x20;
                lVar24 = lVar24 + 1;
              } while (iVar12 - lVar21 != lVar24);
              local_220 = CONCAT44(local_220._4_4_,0xffffffff);
              iVar14 = iVar12;
            }
            uVar15 = (ulonglong)(iVar14 + 1);
            plVar19 = local_210;
            uVar18 = local_90;
          }
          else {
LAB_1427762dc:
            local_208 = (ulonglong)(-uVar18 & uVar18);
            uVar29 = local_208 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar29 != 0) {
              for (; uVar29 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            uVar18 = (iVar7 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if ((int)local_90 <= (int)uVar18) {
              uVar18 = local_90;
            }
          }
        } while (uVar18 != (uint)local_1f0);
      }
      iVar7 = local_e0;
      if (plVar19 != (longlong *)0x0) {
        if (local_e0 == 0) {
          uVar29 = 1;
          uVar15 = 0;
          iVar11 = 0;
          iVar14 = 0;
        }
        else {
          puVar10 = local_e8;
          if (local_e8 == (uint *)0x0) {
            puVar10 = local_f8;
          }
          uVar18 = *puVar10;
          if (uVar18 == 0) {
            iVar14 = local_e0 + 0x1e;
            if (-1 < local_e0 + -1) {
              iVar14 = local_e0 + -1;
            }
            uVar15 = 0;
            uVar29 = (ulonglong)(uint)(iVar14 >> 5);
            if (iVar14 >> 5 < 1) {
              uVar29 = uVar15;
            }
            iVar11 = 0;
            do {
              if (uVar29 == uVar15) goto LAB_142776463;
              iVar11 = iVar11 + 0x20;
              uVar18 = puVar10[uVar15 + 1];
              uVar15 = uVar15 + 1;
            } while (uVar18 == 0);
          }
          else {
            uVar15 = 0;
            iVar11 = 0;
          }
          uVar29 = (ulonglong)(-uVar18 & uVar18);
          uVar16 = uVar29 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar14 = (iVar11 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (local_e0 <= iVar14) {
            iVar14 = local_e0;
          }
        }
        if (iVar14 != local_e0) {
          uVar18 = 0xffffffff;
          do {
            local_1f8 = (char *)CONCAT44(local_1f8._4_4_,uVar18);
            local_168 = *(char **)(local_108 + (longlong)iVar14 * 0x10);
            if (lVar23 == 0) {
              iVar14 = (int)local_230[1];
              uVar16 = 0;
              iVar12 = iVar14 + -1;
              if (iVar14 == 0) {
                iVar12 = 0;
              }
              if (0 < iVar12) {
                puVar8 = &DAT_149dfb77a;
                if (iVar14 != 0) {
                  puVar8 = (undefined2 *)*local_230;
                }
                lVar23 = 0;
                uVar16 = 0;
                do {
                  uVar18 = ((uint)(0x19 < (ushort)puVar8[lVar23] - 0x61) * 0x20 +
                           (uint)(ushort)puVar8[lVar23]) - 0x20;
                  uVar6 = (uint)(uVar16 >> 8) ^
                          *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar16 ^ uVar18) & 0xff) * 4
                                   );
                  uVar16 = (ulonglong)
                           (uVar6 >> 8 ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(uVar6 & 0xff ^ uVar18 >> 8 & 0xff) * 4));
                  lVar23 = lVar23 + 1;
                } while (iVar12 != (int)lVar23);
              }
              lVar23 = FUN_140d68dce(local_200,uVar16,local_230);
            }
            local_158 = (char *)0x0;
            uStack_150 = 0;
            FUN_1405418ca(plVar19,local_168,&local_158,1);
            lVar21 = (longlong)(int)uStack_150;
            if (lVar21 == 0) {
              uVar16 = 0;
            }
            else {
              local_220 = CONCAT44(local_220._4_4_,iVar11);
              lVar24 = lVar21 * 0x30;
              pcVar31 = local_158 + 8;
              local_218 = uVar15;
              do {
                local_238 = (lVar21 != 1) * '\x02';
                FUN_140de70ba(&local_198,0,0,pcVar31);
                local_118 = &local_168;
                pppcStack_110 = &local_198;
                FUN_141709fce(lVar23);
                if (local_180 != 0) {
                  FUN_1400020a8();
                }
                if (local_190 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                pcVar31 = pcVar31 + 0x30;
                lVar24 = lVar24 + -0x30;
              } while (lVar24 != 0);
              uVar16 = uStack_150 & 0xffffffff;
              uVar15 = local_218;
              iVar11 = (uint)local_220;
            }
            FUN_14170774d(local_158,uVar16);
            if (local_158 != (char *)0x0) {
              FUN_1400020a8();
            }
            uVar18 = (uint)local_1f8 & ~(uint)uVar29;
            puVar10 = local_e8;
            if (local_e8 == (uint *)0x0) {
              puVar10 = local_f8;
            }
            iVar14 = (int)uVar15;
            lVar21 = (longlong)iVar14;
            uVar6 = puVar10[lVar21] & uVar18;
            if (uVar6 == 0) {
              iVar12 = local_e0 + 0x1e;
              if (-1 < local_e0 + -1) {
                iVar12 = local_e0 + -1;
              }
              iVar12 = iVar12 >> 5;
              iVar11 = iVar11 + 0x20;
              iVar13 = iVar12;
              if (iVar12 < iVar14) {
                iVar13 = iVar14;
              }
              if (iVar14 < iVar12) {
                lVar24 = 0;
                do {
                  uVar6 = (puVar10 + lVar21 + 1)[lVar24];
                  if (uVar6 != 0) {
                    uVar15 = (ulonglong)(iVar14 + (int)lVar24 + 1);
                    uVar18 = 0xffffffff;
                    goto LAB_1427768b9;
                  }
                  iVar11 = iVar11 + 0x20;
                  lVar24 = lVar24 + 1;
                } while (iVar13 - lVar21 != lVar24);
                uVar18 = 0xffffffff;
                iVar14 = iVar13;
              }
              uVar15 = (ulonglong)(iVar14 + 1);
              iVar14 = local_e0;
            }
            else {
LAB_1427768b9:
              uVar29 = (ulonglong)(-uVar6 & uVar6);
              uVar16 = uVar29 * 2 + 1;
              lVar21 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              iVar14 = (iVar11 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
              if (local_e0 <= iVar14) {
                iVar14 = local_e0;
              }
            }
            plVar19 = local_210;
          } while (iVar14 != iVar7);
        }
      }
LAB_142776463:
      local_c0 = 0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      uVar15 = local_1b8;
      uVar16 = local_1c0;
      puVar10 = local_1c8;
      uVar17 = local_1d8;
      param_2 = local_1e0;
      uVar29 = uStack_100 >> 0x20;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      if ((int)uVar29 != 0) {
        FUN_14472eb64(&local_108,0);
      }
      uStack_d8 = 0xffffffff;
      local_d4 = 0;
      local_e0 = 0;
      if (0x80 < local_dc) {
        local_dc = 0x80;
        FUN_1446efbd8(local_f8,0);
      }
      if (local_e8 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      uVar29 = uStack_b0 >> 0x20;
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      if ((int)uVar29 != 0) {
        FUN_14472eb64(&local_b8,0);
      }
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_90 = 0;
      if (0x80 < local_8c) {
        local_8c = 0x80;
        FUN_1446efbd8(local_a8,0);
      }
      if (local_98 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar18 = local_1e4 & ~(uint)uVar17;
      puVar26 = (undefined1 *)(ulonglong)uVar18;
      puVar25 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar25 = puVar10;
      }
      iVar14 = (int)param_2[5];
      iVar7 = (int)uVar16;
      lVar23 = (longlong)iVar7;
      uVar18 = puVar25[lVar23] & uVar18;
      if (uVar18 == 0) {
        iVar11 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar11 = iVar14 + -1;
        }
        iVar11 = iVar11 >> 5;
        uVar15 = (ulonglong)((int)uVar15 + 0x20);
        iVar12 = iVar11;
        if (iVar11 < iVar7) {
          iVar12 = iVar7;
        }
        if (iVar7 < iVar11) {
          lVar21 = 0;
          do {
            uVar18 = puVar25[lVar23 + lVar21 + 1];
            if (uVar18 != 0) {
              uVar16 = (ulonglong)(iVar7 + (int)lVar21 + 1);
              puVar26 = &DAT_ffffffff;
              goto LAB_142776621;
            }
            uVar15 = (ulonglong)((int)uVar15 + 0x20);
            lVar21 = lVar21 + 1;
          } while (iVar12 - lVar23 != lVar21);
          puVar26 = &DAT_ffffffff;
          iVar7 = iVar12;
        }
        uVar16 = (ulonglong)(iVar7 + 1);
        uVar29 = local_1d8;
        param_2 = local_1e0;
        iVar7 = iVar14;
      }
      else {
LAB_142776621:
        uVar29 = (ulonglong)(-uVar18 & uVar18);
        uVar17 = uVar29 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar7 = ((int)uVar15 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar7) {
          iVar7 = iVar14;
        }
      }
    } while (iVar7 != local_1e8);
  }
  if ((longlong)(int)uStack_130 == 0) {
    uVar15 = 0;
  }
  else {
    local_210 = local_138 + (longlong)(int)uStack_130 * 2;
    plVar19 = local_138;
    do {
      AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      plVar5 = local_1d0;
      iVar7 = (int)plVar19[1];
      iVar14 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar14 = 0;
      }
      uVar15 = 0;
      if (0 < iVar14) {
        puVar8 = &DAT_149dfb77a;
        if (iVar7 != 0) {
          puVar8 = (undefined2 *)*plVar19;
        }
        lVar23 = 0;
        uVar15 = 0;
        do {
          uVar18 = ((uint)(0x19 < (ushort)puVar8[lVar23] - 0x61) * 0x20 +
                   (uint)(ushort)puVar8[lVar23]) - 0x20;
          uVar6 = (uint)(uVar15 >> 8) ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar18) & 0xff) * 4);
          uVar15 = (ulonglong)
                   (uVar6 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar6 & 0xff ^ uVar18 >> 8 & 0xff) * 4));
          lVar23 = lVar23 + 1;
        } while (iVar14 != (int)lVar23);
      }
      local_228 = plVar19;
      iVar7 = FUN_14052bbf0(local_1d0,uVar15,plVar19);
      lVar23 = 0;
      if (iVar7 != -1) {
        lVar23 = (longlong)iVar7 * 0xc0 + *plVar5;
      }
      local_218 = lVar23 + 0x10;
      if (lVar23 == 0) {
        local_218 = 0;
      }
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
      iVar7 = (int)plVar19[1];
      iVar14 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar14 = 0;
      }
      uVar15 = 0;
      if (0 < iVar14) {
        puVar8 = &DAT_149dfb77a;
        if (iVar7 != 0) {
          puVar8 = (undefined2 *)*local_228;
        }
        lVar23 = 0;
        uVar15 = 0;
        do {
          uVar18 = ((uint)(0x19 < (ushort)puVar8[lVar23] - 0x61) * 0x20 +
                   (uint)(ushort)puVar8[lVar23]) - 0x20;
          uVar6 = (uint)(uVar15 >> 8) ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar18) & 0xff) * 4);
          uVar15 = (ulonglong)
                   (uVar6 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar6 & 0xff ^ uVar18 >> 8 & 0xff) * 4));
          lVar23 = lVar23 + 1;
        } while (iVar14 != (int)lVar23);
      }
      uVar9 = FUN_140d68dce(local_200,uVar15,local_228);
      uVar15 = 0;
      local_98 = (uint *)0x0;
      local_90 = 0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      local_8c = 0x80;
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      FUN_14170747e(local_218,&local_b8);
      if (local_90 == 0) {
        uVar29 = 1;
        iVar7 = 0;
        uVar18 = 0;
      }
      else {
        puVar10 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar10 = local_a8;
        }
        uVar18 = *puVar10;
        if (uVar18 == 0) {
          iVar7 = local_90 + 0x1e;
          if (-1 < (int)(local_90 - 1)) {
            iVar7 = local_90 - 1;
          }
          uVar15 = 0;
          uVar29 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar29 = uVar15;
          }
          iVar7 = 0;
          do {
            if (uVar29 == uVar15) goto LAB_14277559d;
            iVar7 = iVar7 + 0x20;
            uVar18 = puVar10[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar15 = 0;
          iVar7 = 0;
        }
        uVar29 = (ulonglong)(-uVar18 & uVar18);
        uVar16 = uVar29 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        uVar18 = (iVar7 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if ((int)local_90 <= (int)uVar18) {
          uVar18 = local_90;
        }
      }
      if (uVar18 != local_90) {
        uVar6 = 0xffffffff;
        local_208 = (ulonglong)local_90;
        do {
          local_1f8 = (char *)CONCAT44(local_1f8._4_4_,uVar6);
          local_230 = (longlong *)CONCAT44(local_230._4_4_,iVar7);
          local_158 = (char *)local_b8[(longlong)(int)uVar18 * 2];
          local_118 = (char **)0x0;
          pppcStack_110 = (char ***)0x0;
          FUN_1405418ca(local_218,local_158,&local_118,1);
          lVar23 = (longlong)(int)pppcStack_110;
          if (lVar23 == 0) {
            uVar16 = 0;
          }
          else {
            lVar21 = lVar23 * 0x30;
            ppcVar20 = local_118 + 1;
            local_220 = uVar15;
            do {
              local_238 = (lVar23 != 1) * '\x02';
              FUN_140de70ba(&local_108,0,0,ppcVar20);
              local_198 = &local_158;
              local_190 = &local_108;
              FUN_141709fce(uVar9);
              if (local_f0 != 0) {
                FUN_1400020a8();
              }
              if (uStack_100 != 0) {
                FUN_1400020a8();
              }
              ppcVar20 = ppcVar20 + 6;
              lVar21 = lVar21 + -0x30;
            } while (lVar21 != 0);
            uVar16 = (ulonglong)pppcStack_110 & 0xffffffff;
            uVar15 = local_220;
          }
          FUN_14170774d(local_118,uVar16);
          if (local_118 != (char **)0x0) {
            FUN_1400020a8();
          }
          uVar6 = (uint)local_1f8 & ~(uint)uVar29;
          puVar10 = local_98;
          if (local_98 == (uint *)0x0) {
            puVar10 = local_a8;
          }
          iVar14 = (int)uVar15;
          lVar23 = (longlong)iVar14;
          uVar18 = puVar10[lVar23] & uVar6;
          iVar7 = (int)local_230;
          if (uVar18 == 0) {
            iVar11 = local_90 + 0x1e;
            if (-1 < (int)(local_90 - 1)) {
              iVar11 = local_90 - 1;
            }
            iVar11 = iVar11 >> 5;
            iVar7 = (int)local_230 + 0x20;
            iVar12 = iVar11;
            if (iVar11 < iVar14) {
              iVar12 = iVar14;
            }
            if (iVar14 < iVar11) {
              lVar21 = 0;
              do {
                uVar18 = (puVar10 + lVar23 + 1)[lVar21];
                if (uVar18 != 0) {
                  uVar15 = (ulonglong)(iVar14 + (int)lVar21 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_142775804;
                }
                iVar7 = iVar7 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar12 - lVar23 != lVar21);
              uVar6 = 0xffffffff;
              iVar14 = iVar12;
            }
            uVar15 = (ulonglong)(iVar14 + 1);
            uVar18 = local_90;
          }
          else {
LAB_142775804:
            uVar29 = (ulonglong)(-uVar18 & uVar18);
            uVar16 = uVar29 * 2 + 1;
            lVar23 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            uVar18 = (iVar7 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
            if ((int)local_90 <= (int)uVar18) {
              uVar18 = local_90;
            }
          }
        } while (uVar18 != (uint)local_208);
      }
LAB_14277559d:
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      plVar5 = local_210;
      plVar19 = local_228;
      uVar15 = uStack_b0 >> 0x20;
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      if ((int)uVar15 != 0) {
        FUN_14472eb64(&local_b8,0);
      }
      uStack_88 = 0xffffffff;
      local_84 = 0;
      local_90 = 0;
      if (0x80 < local_8c) {
        local_8c = 0x80;
        FUN_1446efbd8(local_a8,0);
      }
      if (local_98 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      plVar19 = plVar19 + 2;
    } while (plVar19 != plVar5);
    uVar15 = uStack_130 & 0xffffffff;
  }
  FUN_1447a1747(local_138,uVar15);
  if (local_138 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_200;
code_r0x000142775d9e:
  iVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_142775da1:
  if (iVar7 == 0) {
LAB_142775dcb:
    lVar21 = (longlong)(int)(uint)lVar24 * 0x30;
    if (*(longlong *)(local_168 + lVar21 + 0x18) != 0) {
      FUN_1400020a8();
    }
    pcVar30 = pcVar30 + lVar21;
    if (*(longlong *)(pcVar30 + 8) != 0) {
      FUN_1400020a8();
    }
    iVar7 = ~(uint)lVar24 + (int)uStack_160;
    if (iVar7 != 0) {
      memmove(pcVar30,pcVar30 + 0x30,(longlong)iVar7 * 0x30);
    }
    uStack_160 = CONCAT44(uStack_160._4_4_,(int)uStack_160 + -1);
    FUN_141707638(&local_168);
    goto LAB_14277603e;
  }
LAB_142775db1:
  lVar24 = lVar24 + 1;
  if (lVar24 == lVar21) goto LAB_142775e42;
  goto LAB_142775d2f;
}



// FUNCTION 1427769f6 FUN_1427769f6 body=1013 status=ok
// SIG undefined FUN_1427769f6(void)

void FUN_1427769f6(undefined8 *param_1,longlong *param_2,char *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  ushort uVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auStack_188 [40];
  char *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  longlong *local_138;
  longlong *local_130;
  char *local_128;
  uint *local_120;
  undefined1 local_114 [4];
  undefined1 local_110 [200];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_160 = param_3;
  if (*(char *)((longlong)param_1 + 0x42) != '\x02') {
    local_148 = param_1 + 0x8a;
    local_150 = param_1 + 0x56;
    FUN_142775133(local_110);
    if ((longlong)(int)param_2[1] != 0) {
      plVar14 = (longlong *)*param_2;
      local_138 = plVar14 + (longlong)(int)param_2[1] * 2;
      local_140 = param_1 + 0x1e;
      local_128 = local_160 + 8;
      local_158 = param_1;
LAB_142776a90:
      plVar13 = (longlong *)param_1[0x1f];
      if (plVar13 != (longlong *)0x0) {
        iVar3 = (int)plVar14[1];
LAB_142776aa3:
        plVar5 = (longlong *)*plVar13;
        if ((int)plVar5[0x18] != iVar3) {
          if ((int)plVar5[0x18] + iVar3 == 1) goto LAB_142776b22;
          goto LAB_142776b14;
        }
        if (1 < iVar3) {
          lVar20 = 0;
          do {
            uVar16 = *(ushort *)(plVar5[0x17] + lVar20);
            uVar24 = (ulonglong)uVar16;
            uVar22 = *(ushort *)(*plVar14 + lVar20);
            if (uVar16 == uVar22) {
              if (uVar16 == 0) break;
            }
            else {
              if (0x7f < (uVar22 | uVar16)) goto LAB_142776b03;
              uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
              uVar25 = (ulonglong)uVar22;
              uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar25];
              if ((&DAT_149e05da0)[uVar24] != (&DAT_149e05da0)[uVar25]) goto LAB_142776b03;
            }
            lVar20 = lVar20 + 2;
          } while( true );
        }
        goto LAB_142776b22;
      }
      goto LAB_142776bef;
    }
LAB_142776d39:
    puVar6 = local_150;
    FUN_140d7b3ae(local_150,param_1 + 0x3b);
    for (puVar15 = (undefined8 *)param_1[0x1f]; puVar7 = local_148, puVar15 != (undefined8 *)0x0;
        puVar15 = (undefined8 *)puVar15[1]) {
      FUN_1406dfe24(puVar6,*puVar15);
    }
    bVar2 = *(byte *)(param_1 + 0x94);
    FUN_140d7b3ae(local_148,puVar6);
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0xef | bVar2 & 0x10;
    FUN_14277389c(puVar6);
    FUN_14277389c(puVar7);
    FUN_1406dfe24(puVar7,local_110);
    FUN_14626ac20(local_110);
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_142776b03:
  if (uVar16 == uVar22) {
LAB_142776b22:
    local_130 = plVar14;
    if ((local_160 == (char *)0x0) || (*local_160 != '\x01')) goto LAB_142776bd5;
    local_120 = (uint *)(plVar5 + 2);
    iVar3 = (int)plVar5[5];
    if (iVar3 == 0) {
      uVar24 = 1;
      uVar25 = 0;
      iVar23 = 0;
      iVar19 = 0;
      goto LAB_142776bd0;
    }
    puVar8 = (uint *)plVar5[4];
    if ((uint *)plVar5[4] == (uint *)0x0) {
      puVar8 = local_120;
    }
    uVar10 = *puVar8;
    if (uVar10 != 0) {
      uVar25 = 0;
      iVar23 = 0;
      goto LAB_142776ba9;
    }
    iVar19 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar19 = iVar3 + -1;
    }
    uVar25 = 0;
    uVar24 = (ulonglong)(uint)(iVar19 >> 5);
    if (iVar19 >> 5 < 1) {
      uVar24 = uVar25;
    }
    iVar23 = 0;
    goto LAB_142776b94;
  }
LAB_142776b14:
  plVar13 = (longlong *)plVar13[1];
  if (plVar13 == (longlong *)0x0) goto LAB_142776bef;
  goto LAB_142776aa3;
  while( true ) {
    iVar23 = iVar23 + 0x20;
    uVar10 = puVar8[uVar25 + 1];
    uVar25 = uVar25 + 1;
    if (uVar10 != 0) break;
LAB_142776b94:
    if (uVar24 == uVar25) goto LAB_142776bd5;
  }
LAB_142776ba9:
  uVar24 = (ulonglong)(-uVar10 & uVar10);
  uVar1 = uVar24 * 2 + 1;
  lVar20 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
    }
  }
  iVar19 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
  if (iVar3 <= iVar19) {
    iVar19 = iVar3;
  }
LAB_142776bd0:
  if (iVar19 != iVar3) {
    uVar10 = 0xffffffff;
    do {
      lVar20 = *plVar5;
      uVar9 = *local_158;
      uVar18 = (uint)((ulonglong)uVar9 >> 0x10);
      uVar17 = (uint)uVar9 & 0xffff;
      uVar9 = FUN_145aeb14a(local_128,
                            ((uint)uVar9 << 0x10 | uVar17) + (int)((ulonglong)uVar9 >> 0x20) +
                            (uVar18 << 0x13 | uVar18 & 0xffff) + (uVar17 >> 4),local_158);
      FUN_14482b35e(uVar9,local_114,(longlong)iVar19 * 0xb8 + lVar20,0);
      uVar10 = ~(uint)uVar24 & uVar10;
      puVar8 = (uint *)plVar5[4];
      if ((uint *)plVar5[4] == (uint *)0x0) {
        puVar8 = local_120;
      }
      iVar4 = (int)plVar5[5];
      iVar19 = (int)uVar25;
      lVar20 = (longlong)iVar19;
      uVar18 = puVar8[lVar20] & uVar10;
      if (uVar18 == 0) {
        iVar11 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar11 = iVar4 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar23 = iVar23 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar19) {
          iVar12 = iVar19;
        }
        if (iVar19 < iVar11) {
          lVar21 = 0;
          do {
            uVar18 = puVar8[lVar20 + lVar21 + 1];
            if (uVar18 != 0) {
              uVar25 = (ulonglong)(iVar19 + (int)lVar21 + 1);
              uVar10 = 0xffffffff;
              goto LAB_142776ce5;
            }
            iVar23 = iVar23 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar12 - lVar20 != lVar21);
          uVar10 = 0xffffffff;
          iVar19 = iVar12;
        }
        uVar25 = (ulonglong)(iVar19 + 1);
        iVar19 = iVar4;
      }
      else {
LAB_142776ce5:
        uVar24 = (ulonglong)(-uVar18 & uVar18);
        uVar1 = uVar24 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar19 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar19) {
          iVar19 = iVar4;
        }
      }
    } while (iVar19 != iVar3);
  }
LAB_142776bd5:
  FUN_146804642(local_140,plVar13,1);
  plVar14 = local_130;
  param_1 = local_158;
LAB_142776bef:
  plVar14 = plVar14 + 2;
  if (plVar14 == local_138) goto LAB_142776d39;
  goto LAB_142776a90;
}



// FUNCTION 142776dec FUN_142776dec body=313 status=ok
// SIG undefined FUN_142776dec(void)

void FUN_142776dec(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  plVar6 = *(longlong **)(param_1 + 0xf8);
  if (plVar6 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    local_60 = param_3;
    do {
      uVar5 = uStack_50;
      lVar3 = *plVar6;
      if (*(longlong *)(lVar3 + 0xa8) == param_2) {
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a1bd6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        puVar1 = (undefined8 *)(local_58 + lVar7);
        *(undefined8 *)(local_58 + lVar7) = 0;
        iVar2 = *(int *)(lVar3 + 0xc0);
        _Src = *(void **)(lVar3 + 0xb8);
        *(int *)(local_58 + 8 + lVar7) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      plVar6 = (longlong *)plVar6[1];
    } while (plVar6 != (longlong *)0x0);
    uVar5 = uStack_50 & 0xffffffff;
    if (0 < (int)uStack_50) {
      FUN_1427769f6(param_1,&local_58,local_60);
      uVar5 = uStack_50 & 0xffffffff;
    }
  }
  FUN_1447a1747(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142776f26 FUN_142776f26 body=733 status=ok
// SIG undefined FUN_142776f26(void)

void FUN_142776f26(longlong param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *_Src;
  int iVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  void **local_238;
  LARGE_INTEGER *local_230;
  longlong local_228;
  undefined4 local_220;
  undefined **local_218;
  longlong *local_210;
  longlong *plStack_208;
  int local_200;
  void *local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  LARGE_INTEGER local_1e8 [2];
  longlong local_1d8;
  undefined1 local_1c8 [384];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  QueryPerformanceCounter(local_1e8);
  FUN_1400021e4(param_1 + 0x18,&local_218);
  local_248 = 0;
  FUN_140d6a722(local_1e8,DAT_14c872ce0,1,&local_218);
  if (local_218 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar4 = 0;
  }
  local_1d8 = param_1;
  FUN_1402980a2(local_1c8,*(undefined8 *)(param_1 + 8),iVar4);
  FUN_1400021e4(param_1,&local_218);
  ppuVar6 = local_218;
  if ((int)local_210 == 0) {
    ppuVar6 = (undefined **)&DAT_149dfb77a;
  }
  FUN_141628e80(local_1e8,ppuVar6);
  if (local_218 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_218 = &PTR_FUN_149e2b5a8;
  local_210 = (longlong *)0x0;
  plStack_208 = (longlong *)0x0;
  local_200 = 0;
  if (*(int *)(param_1 + 0x108) != 0) {
    do {
      plVar8 = *(longlong **)(param_1 + 0xf8);
      FUN_146804642(param_1 + 0xf0,plVar8,0);
      if (plVar8 != (longlong *)0x0) {
        plVar5 = plVar8;
        if (plStack_208 != (longlong *)0x0) {
          plStack_208[1] = (longlong)plVar8;
          plVar8[2] = (longlong)plStack_208;
          plVar5 = local_210;
        }
        local_210 = plVar5;
        plStack_208 = plVar8;
        (*(code *)local_218[1])(&local_218,local_200 + 1);
      }
    } while (*(int *)(param_1 + 0x108) != 0);
    if (local_210 != (longlong *)0x0) {
      plVar8 = local_210;
      do {
        lVar2 = *plVar8;
        uVar1 = *(undefined2 *)(lVar2 + 0xb4);
        uVar3 = *(undefined8 *)(lVar2 + 0xa8);
        local_1f8 = (void *)0x0;
        local_1f0 = *(int *)(lVar2 + 0xc0);
        lVar7 = (longlong)local_1f0;
        _Src = *(void **)(lVar2 + 0xb8);
        if (lVar7 == 0) {
          local_1ec = 0;
        }
        else {
          FUN_1446dd670(&local_1f8,local_1f0,0);
          memcpy(local_1f8,_Src,lVar7 * 2);
        }
        local_230 = local_1e8;
        local_238 = &local_1f8;
        FUN_141469cae(&local_228,&local_238);
        local_248 = 0;
        FUN_1427744f2(param_1,&local_228,uVar3,uVar1);
        FUN_1447a1747(local_228,local_220);
        if (local_228 != 0) {
          FUN_1400020a8();
        }
        if (local_1f8 != (void *)0x0) {
          FUN_1400020a8();
        }
        plVar8 = (longlong *)plVar8[1];
      } while (plVar8 != (longlong *)0x0);
      local_218 = &PTR_FUN_149e2b5a8;
      while (local_210 != (longlong *)0x0) {
        plVar8 = (longlong *)local_210[1];
        FUN_1400020a8();
        local_210 = plVar8;
      }
      goto LAB_1427771b3;
    }
  }
  local_218 = &PTR_FUN_149e2b5a8;
LAB_1427771b3:
  local_210 = (longlong *)0x0;
  plStack_208 = (longlong *)0x0;
  (*(code *)local_218[1])(&local_218,0);
  FUN_140d6b5be(local_1e8);
  if ((local_48 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142777204 FUN_142777204 body=60 status=ok
// SIG undefined FUN_142777204(void)

void FUN_142777204(longlong param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 8);
  }
  plVar1 = (longlong *)FUN_14054d1d4();
  (**(code **)(*plVar1 + 0x30))(plVar1,puVar2,0,0,0);
  return;
}



// FUNCTION 142777240 FUN_142777240 body=766 status=ok
// SIG undefined FUN_142777240(void)

void FUN_142777240(longlong param_1)

{
  int iVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_158 [32];
  void **local_138;
  void **local_130;
  void *local_128;
  ulonglong uStack_120;
  undefined4 local_10c;
  void *local_108;
  undefined8 uStack_100;
  void *local_f8;
  ulonglong uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*(byte *)(param_1 + 0x4a0) >> 1 | ~*(byte *)(param_1 + 0x4a0)) & 1) == 0) {
    cVar5 = FUN_140b7cf70();
    if (cVar5 != '\0') {
      lVar10 = param_1 + 0x450;
      local_128 = (void *)0x0;
      uStack_120 = 0;
      if (DAT_14c866d18 == 2) {
        FUN_142775133(&local_f8,param_1 + 0x2b0,lVar10);
        FUN_14277a80d(&local_128,&local_f8);
        FUN_14626ac20(&local_f8);
      }
      else if (DAT_14c866d18 == 1) {
        FUN_14277a80d(&local_128,param_1 + 0x110);
      }
      else {
        local_d8 = 0;
        local_d0 = 0;
        local_f8 = (void *)0x0;
        uStack_f0 = 0;
        local_cc = 0xffffffff00000080;
        local_c4 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_108 = (void *)0x0;
        uStack_100 = 0;
        local_10c = 0x7fffffff;
        uVar6 = FUN_140b7d170(lVar10,param_1 + 8,&local_10c);
        local_138 = &local_f8;
        local_130 = &local_108;
        FUN_140b7d4dc(lVar10,&local_128,uVar6,local_10c);
        FUN_1447a1747(local_108,uStack_100 & 0xffffffff);
        if (local_108 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_b0 = 0;
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        FUN_1407a3a68(&local_f8);
      }
      if ((int)uStack_120 - 2U < 0x7fffffff) {
        FUN_140056680(&local_108,L";METADATA=(Diff=true, UseCommands=true)\r\n");
        uVar3 = uStack_100;
        _Src = local_128;
        iVar2 = (int)uStack_100;
        if ((int)uStack_100 < 2) {
          local_f8 = (void *)0x0;
          lVar10 = (longlong)(int)uStack_120;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_120);
          if (lVar10 == 0) {
            uStack_f0 = uStack_120 & 0xffffffff;
          }
          else {
            FUN_1446dd670(&local_f8,uStack_120 & 0xffffffff,0);
            memcpy(local_f8,_Src,lVar10 * 2);
          }
        }
        else {
          iVar9 = (int)uStack_120 + -1;
          if ((int)uStack_120 == 0) {
            iVar9 = 0;
          }
          local_f8 = local_108;
          iVar4 = uStack_100._4_4_;
          local_108 = (void *)0x0;
          uStack_100 = 0;
          uStack_f0 = uVar3;
          iVar1 = iVar9 + iVar2;
          if (iVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4((longlong)iVar9);
          }
          if (iVar4 < iVar1) {
            FUN_1446f8c06(&local_f8);
          }
          FUN_1400020e8(&local_f8,local_128,iVar9);
        }
        if (local_128 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_128 = local_f8;
        uStack_120 = uStack_f0;
        local_f8 = (void *)0x0;
        uStack_f0 = 0;
        if (local_108 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (*(int *)(param_1 + 0x10) == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        else {
          puVar8 = *(undefined2 **)(param_1 + 8);
        }
        FUN_140b7d02a(puVar8,&local_128);
      }
      else {
        plVar7 = (longlong *)FUN_14054d1d4();
        if (*(int *)(param_1 + 0x10) == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        else {
          puVar8 = *(undefined2 **)(param_1 + 8);
        }
        local_138 = (void **)((ulonglong)local_138 & 0xffffffffffffff00);
        (**(code **)(*plVar7 + 0x30))(plVar7,puVar8,0,0);
      }
      if (local_128 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142777540 FUN_142777540 body=486 status=ok
// SIG undefined FUN_142777540(void)

void FUN_142777540(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  undefined1 auStack_98 [40];
  LARGE_INTEGER local_70;
  longlong local_68 [9];
  
  local_68[3] = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c866d30 != 0) {
    iVar7 = 0;
    iVar4 = DAT_14c866d58;
    if (9 < DAT_14c866d58) {
      iVar4 = iVar7;
    }
    DAT_14c866d58 = iVar4 + 1;
    local_68[0] = (longlong)iVar4 * 0x5f8 + param_1 + 0x18;
    iVar4 = DAT_14c866d5c;
    if (*(int *)(param_1 + 0x3c20) <= DAT_14c866d5c) {
      iVar4 = iVar7;
    }
    DAT_14c866d5c = iVar4 + 1;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x3c18) + 8 + (longlong)iVar4 * 0x10);
    iVar6 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar6 = iVar7;
    }
    if (0 < iVar6) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
      } while (iVar6 != iVar4);
    }
    iVar4 = FUN_1407db052((longlong *)(param_1 + 0x3bc8));
    if ((iVar4 == -1) ||
       (lVar5 = (longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x3bc8), lVar5 == 0)) {
      local_68[1] = 0;
    }
    else {
      local_68[1] = *(undefined8 *)(lVar5 + 0x10);
    }
    QueryPerformanceCounter(&local_70);
    dVar3 = (double)local_70.QuadPart * DAT_14c83f420 + 16777216.0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)((longlong)local_68 + lVar5);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x40) == '\0')) {
        dVar1 = *(double *)(lVar2 + 0x5f0);
        dVar8 = dVar3;
        if (0.0 <= dVar1) {
          if ((dVar1 <= 0.0) || (dVar3 - dVar1 <= (double)DAT_14c866d30)) goto LAB_1427776f2;
          FUN_1407da2e6(lVar2);
          dVar8 = 0.0;
        }
        *(double *)(lVar2 + 0x5f0) = dVar8;
      }
LAB_1427776f2:
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x10);
  }
  if ((local_68[3] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142777728 FUN_142777728 body=153 status=ok
// SIG undefined FUN_142777728(void)

longlong FUN_142777728(void)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1407dac1e();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x40) == '\x01') {
      FUN_142776f26(lVar1);
    }
    if ((0.0 <= *(double *)(lVar1 + 0x5f0)) && (0 < DAT_14c866d30)) {
      QueryPerformanceCounter(&local_20);
      *(double *)(lVar1 + 0x5f0) = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1427777c2 FUN_1427777c2 body=296 status=ok
// SIG undefined FUN_1427777c2(void)

void FUN_1427777c2(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  longlong local_f8 [27];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  lVar2 = FUN_1449da4c4(&DAT_14c872ff0,puVar4);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x28) == '\x01')) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    cVar1 = FUN_1427735ea(puVar4,0);
    if (cVar1 == '\0') {
      if (param_3 != 0) {
        if (*(int *)(param_2 + 1) == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = (undefined2 *)*param_2;
        }
        FUN_140056680(local_f8,puVar4);
        FUN_140d7ae18(param_1,local_f8,param_3);
        if (local_f8[0] != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_1427778b7;
    }
  }
  FUN_1408e76da(local_f8);
  uVar3 = FUN_140d7ae18(param_1,param_2,local_f8);
  FUN_1409263a6(local_f8);
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  local_108 = 0;
  FUN_1427877dd(puVar4,puVar4,uVar3,0);
LAB_1427778b7:
  if ((local_20 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1427778ec FUN_1427778ec body=36 status=ok
// SIG undefined FUN_1427778ec(void)

undefined8 FUN_1427778ec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x18;
  do {
    if (*(longlong *)(param_1 + lVar1) == param_2) {
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),param_1 + lVar1 != 0);
    }
    lVar1 = lVar1 + 0x5f8;
  } while (lVar1 != 0x3bc8);
  return 0;
}



// FUNCTION 142777922 FUN_142777922 body=4832 status=ok
// SIG undefined FUN_142777922(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142777922(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ushort uVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 local_3da8 [32];
  undefined2 **local_3d88;
  undefined1 local_3d80;
  undefined1 local_3d78;
  undefined2 *local_3d70;
  undefined8 *local_3d68;
  undefined1 local_3d60;
  int local_3d4c;
  uint *local_3d48;
  uint local_3d3c;
  int local_3d38;
  uint local_3d34;
  ulonglong local_3d30;
  uint *local_3d28;
  ulonglong local_3d20;
  longlong *local_3d18;
  int local_3d10;
  undefined8 local_3d08;
  int local_3d00;
  undefined2 *local_3cf8;
  undefined8 uStack_3cf0;
  uint local_3ce8 [4];
  uint *local_3cd8;
  int local_3cd0;
  longlong *local_3c18;
  longlong lStack_3c10;
  wchar_t *local_3c08;
  undefined4 local_3c00;
  undefined8 local_3bf8;
  undefined4 uStack_3bf0;
  uint uStack_3bec;
  byte local_3bd0;
  byte local_3bcf;
  longlong *local_3ba0;
  longlong local_3b80;
  undefined8 local_3b68;
  undefined2 **local_3b60;
  undefined8 local_3b58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_3da8;
  FUN_1400b22c2(&local_3bf8,"Engine");
  if (CONCAT44(DAT_14c872ce8._4_4_,(undefined4)DAT_14c872ce8) != 0) {
    FUN_1400020a8();
  }
  DAT_14c872ce8._0_4_ = (undefined4)local_3bf8;
  DAT_14c872ce8._4_4_ = local_3bf8._4_4_;
  DAT_14c872cf0 = uStack_3bf0;
  uRam000000014c872cf4 = uStack_3bec;
  FUN_1400b22c2(&local_3bf8,&DAT_149e2b654);
  if (CONCAT44(DAT_14c872af8._4_4_,(undefined4)DAT_14c872af8) != 0) {
    FUN_1400020a8();
  }
  DAT_14c872af8._0_4_ = (undefined4)local_3bf8;
  DAT_14c872af8._4_4_ = local_3bf8._4_4_;
  DAT_14c872b00 = uStack_3bf0;
  uRam000000014c872b04 = uStack_3bec;
  FUN_1400b22c2(&local_3bf8,"Input");
  if (CONCAT44(DAT_14c872ae8._4_4_,(undefined4)DAT_14c872ae8) != 0) {
    FUN_1400020a8();
  }
  DAT_14c872ae8._0_4_ = (undefined4)local_3bf8;
  DAT_14c872ae8._4_4_ = local_3bf8._4_4_;
  DAT_14c872af0 = uStack_3bf0;
  uRam000000014c872af4 = uStack_3bec;
  FUN_1400b22c2(&local_3bf8,"DeviceProfiles");
  if (CONCAT44(DAT_14c872b28._4_4_,(undefined4)DAT_14c872b28) != 0) {
    FUN_1400020a8();
  }
  DAT_14c872b28._0_4_ = (undefined4)local_3bf8;
  DAT_14c872b28._4_4_ = local_3bf8._4_4_;
  DAT_14c872b30 = uStack_3bf0;
  uRam000000014c872b34 = uStack_3bec;
  FUN_1400b22c2(&local_3bf8,"GameUserSettings");
  if (CONCAT44(DAT_14c872b08._4_4_,(undefined4)DAT_14c872b08) != 0) {
    FUN_1400020a8();
  }
  DAT_14c872b08._0_4_ = (undefined4)local_3bf8;
  DAT_14c872b08._4_4_ = local_3bf8._4_4_;
  DAT_14c872b10 = uStack_3bf0;
  uRam000000014c872b14 = uStack_3bec;
  FUN_1400b22c2(&local_3bf8,"Scalability");
  if (CONCAT44(DAT_14c872ac8._4_4_,(undefined4)DAT_14c872ac8) != 0) {
    FUN_1400020a8();
  }
  DAT_14c872ac8._0_4_ = (undefined4)local_3bf8;
  DAT_14c872ac8._4_4_ = local_3bf8._4_4_;
  DAT_14c872ad0 = uStack_3bf0;
  uRam000000014c872ad4 = uStack_3bec;
  FUN_1400b22c2(&local_3bf8,"RuntimeOptions");
  if (CONCAT44(DAT_14c872b18._4_4_,(undefined4)DAT_14c872b18) != 0) {
    FUN_1400020a8();
  }
  DAT_14c872b18._0_4_ = (undefined4)local_3bf8;
  DAT_14c872b18._4_4_ = local_3bf8._4_4_;
  uRam000000014c872b20 = uStack_3bf0;
  uRam000000014c872b24 = uStack_3bec;
  FUN_1400b22c2(&local_3bf8,"InstallBundle");
  if (CONCAT44(DAT_14c872b38._4_4_,(undefined4)DAT_14c872b38) != 0) {
    FUN_1400020a8();
  }
  DAT_14c872b38._0_4_ = (undefined4)local_3bf8;
  DAT_14c872b38._4_4_ = local_3bf8._4_4_;
  uRam000000014c872b40 = uStack_3bf0;
  uRam000000014c872b44 = uStack_3bec;
  FUN_1400b22c2(&local_3bf8,"Hardware");
  if (CONCAT44(DAT_14c872ad8._4_4_,(undefined4)DAT_14c872ad8) != 0) {
    FUN_1400020a8();
  }
  DAT_14c872ad8._0_4_ = (undefined4)local_3bf8;
  DAT_14c872ad8._4_4_ = local_3bf8._4_4_;
  uRam000000014c872ae0 = uStack_3bf0;
  uRam000000014c872ae4 = uStack_3bec;
  FUN_1400b22c2(&local_3bf8,"GameplayTags");
  if (CONCAT44(DAT_14c872b48._4_4_,(undefined4)DAT_14c872b48) != 0) {
    FUN_1400020a8();
  }
  DAT_14c872b48._0_4_ = (undefined4)local_3bf8;
  DAT_14c872b48._4_4_ = local_3bf8._4_4_;
  DAT_14c872b50 = uStack_3bf0;
  uRam000000014c872b54 = uStack_3bec;
  FUN_1408e76da(&local_3cf8);
  local_3c18 = (longlong *)0x0;
  lStack_3c10 = 0;
  local_3d88 = &local_3cf8;
  FUN_140d6a722(&local_3bf8,0,0,&local_3c18);
  if (local_3c18 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar18 = CONCAT71((int7)((ulonglong)&local_3bf8 >> 8),1);
  bVar24 = false;
  do {
    if (bVar24) {
      uVar6 = FUN_140d6afb0();
      FUN_140056680(&local_3c18,uVar6);
      uVar6 = FUN_140d6ac5a();
      FUN_140056680(&local_3d08,uVar6);
      if ((int)lStack_3c10 == local_3d00) {
        bVar24 = true;
        if (1 < (int)lStack_3c10) {
          lVar20 = 0;
          while( true ) {
            uVar13 = *(ushort *)((longlong)local_3c18 + lVar20);
            uVar5 = (uint)uVar13;
            uVar22 = *(ushort *)(CONCAT44(local_3d08._4_4_,(int)local_3d08) + lVar20);
            uVar10 = (uint)uVar22;
            if (uVar13 != uVar22) {
              if ((uVar22 | uVar13) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar13];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar22];
                if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar22]) goto LAB_142777be9;
              }
              iVar9 = uVar5 - uVar10;
              goto LAB_142777c34;
            }
            if (uVar13 == 0) break;
LAB_142777be9:
            lVar20 = lVar20 + 2;
          }
          iVar9 = 0;
LAB_142777c34:
          bVar24 = iVar9 == 0;
        }
      }
      else {
        bVar24 = local_3d00 + (int)lStack_3c10 == 1;
      }
      if (CONCAT44(local_3d08._4_4_,(int)local_3d08) != 0) {
        FUN_1400020a8();
      }
      if (local_3c18 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (bVar24) break;
      uVar6 = FUN_140d6afb0();
    }
    else {
      uVar6 = FUN_140d6ac5a();
    }
    FUN_140056680(&local_3d18,uVar6);
    iVar9 = local_3d10 + -1;
    if (local_3d10 == 0) {
      iVar9 = 0;
    }
    local_3c18 = local_3d18;
    lStack_3c10 = CONCAT44(lStack_3c10._4_4_,iVar9);
    local_3c08 = L"Config/ConfigRedirects.ini";
    local_3c00 = 0x1a;
    FUN_140bee87a(&local_3d08,&local_3c18);
    puVar14 = &DAT_149dfb77a;
    if (local_3d00 != 0) {
      puVar14 = (undefined2 *)CONCAT44(local_3d08._4_4_,(int)local_3d08);
    }
    FUN_141628e80(&local_3bf8,puVar14);
    if (CONCAT44(local_3d08._4_4_,(int)local_3d08) != 0) {
      FUN_1400020a8();
    }
    local_3d3c = (uint)uVar18;
    if (local_3d18 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    uVar17 = 1;
    if (local_3cd0 == 0) {
      uVar19 = 0;
      iVar9 = 0;
      iVar3 = 0;
    }
    else {
      puVar7 = local_3cd8;
      if (local_3cd8 == (uint *)0x0) {
        puVar7 = local_3ce8;
      }
      uVar5 = *puVar7;
      if (uVar5 == 0) {
        iVar9 = local_3cd0 + 0x1e;
        if (-1 < local_3cd0 + -1) {
          iVar9 = local_3cd0 + -1;
        }
        uVar21 = 0;
        uVar15 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar15 = uVar21;
        }
        uVar19 = (ulonglong)((int)uVar15 + 1);
        iVar2 = 0;
        do {
          iVar9 = local_3cd0;
          iVar3 = (int)uVar15 * 0x20 + 0x20;
          if (uVar15 == uVar21) goto LAB_142777dd7;
          iVar2 = iVar2 + 0x20;
          uVar5 = puVar7[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar5 == 0);
        uVar19 = uVar21 & 0xffffffff;
      }
      else {
        iVar2 = 0;
        uVar19 = 0;
      }
      uVar17 = (ulonglong)(-uVar5 & uVar5);
      uVar15 = uVar17 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar9 = (iVar2 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      iVar3 = iVar2;
      if (local_3cd0 <= iVar9) {
        iVar9 = local_3cd0;
      }
    }
LAB_142777dd7:
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    iVar2 = local_3cd0;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    local_3d38 = iVar2;
    if (iVar9 != iVar2) {
      uVar5 = 0xffffffff;
      do {
        local_3d4c = iVar3;
        plVar16 = (longlong *)(local_3cf8 + (longlong)iVar9 * 0x60);
        iVar9 = *(int *)(local_3cf8 + (longlong)iVar9 * 0x60 + 4);
        puVar14 = &DAT_149dfb77a;
        if (iVar9 != 0) {
          puVar14 = (undefined2 *)*plVar16;
        }
        lVar20 = 0;
        while( true ) {
          uVar13 = *(ushort *)((longlong)puVar14 + lVar20);
          uVar15 = (ulonglong)uVar13;
          uVar22 = *(ushort *)((longlong)L"SectionNameRemap" + lVar20);
          local_3d34 = uVar5;
          local_3d30 = uVar17;
          local_3d20 = uVar19;
          if (uVar13 != uVar22) break;
          if (uVar13 == 0) goto LAB_142777f7b;
LAB_142777e82:
          lVar20 = lVar20 + 2;
        }
        if ((uVar22 | uVar13) < 0x80) {
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
          uVar21 = (ulonglong)uVar22;
          uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
          if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar21]) goto LAB_142777e82;
        }
        if (uVar13 != uVar22) {
          uVar5 = 0;
          iVar3 = iVar9 + -1;
          if (iVar9 == 0) {
            iVar3 = 0;
          }
          if (0 < iVar3) {
            puVar14 = &DAT_149dfb77a;
            if (iVar9 != 0) {
              puVar14 = (undefined2 *)*plVar16;
            }
            lVar20 = 0;
            uVar5 = 0;
            do {
              uVar10 = ((uint)(0x19 < (ushort)puVar14[lVar20] - 0x61) * 0x20 +
                       (uint)(ushort)puVar14[lVar20]) - 0x20;
              uVar5 = uVar5 >> 8 ^
                      *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar5 ^ uVar10) & 0xff) * 4);
              uVar5 = uVar5 >> 8 ^
                      *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar10 >> 8 & 0xff) * 4)
              ;
              lVar20 = lVar20 + 1;
            } while (iVar3 != (int)lVar20);
          }
          iVar9 = FUN_14136f700(uVar5,plVar16);
          if ((iVar9 == -1) || (lVar20 = (longlong)iVar9 * 0x68, DAT_14c866c50 + lVar20 == 0)) {
            local_3c18 = plVar16;
            FUN_145936c98(&local_3d08,uVar5,&local_3c18);
            lVar20 = (longlong)(int)local_3d08 * 0x68;
          }
          local_3d48 = (uint *)(lVar20 + DAT_14c866c50 + 0x10);
          local_3d28 = (uint *)(plVar16 + 4);
          iVar9 = (int)plVar16[7];
          if (iVar9 == 0) {
            uVar17 = 1;
            uVar19 = 0;
            iVar2 = 0;
            iVar3 = 0;
LAB_1427782df:
            if (iVar3 != iVar9) {
              uVar5 = 0xffffffff;
              do {
                lVar20 = plVar16[2];
                FUN_1400021e4(lVar20 + (longlong)iVar3 * 0x40,&local_3d08);
                local_3c18 = &local_3d08;
                lStack_3c10 = lVar20 + (longlong)iVar3 * 0x40 + 0x10;
                FUN_1413216f2(local_3d48,&local_3d18,&local_3c18,0);
                if (CONCAT44(local_3d08._4_4_,(int)local_3d08) != 0) {
                  FUN_1400020a8();
                }
                uVar5 = uVar5 & ~(uint)uVar17;
                puVar7 = (uint *)plVar16[6];
                if ((uint *)plVar16[6] == (uint *)0x0) {
                  puVar7 = local_3d28;
                }
                iVar4 = (int)plVar16[7];
                iVar3 = (int)uVar19;
                lVar20 = (longlong)iVar3;
                uVar10 = puVar7[lVar20] & uVar5;
                if (uVar10 == 0) {
                  iVar11 = iVar4 + 0x1e;
                  if (-1 < iVar4 + -1) {
                    iVar11 = iVar4 + -1;
                  }
                  iVar11 = iVar11 >> 5;
                  iVar2 = iVar2 + 0x20;
                  iVar12 = iVar11;
                  if (iVar11 < iVar3) {
                    iVar12 = iVar3;
                  }
                  if (iVar3 < iVar11) {
                    lVar23 = 0;
                    do {
                      uVar10 = (puVar7 + lVar20 + 1)[lVar23];
                      if (uVar10 != 0) {
                        uVar19 = (ulonglong)(iVar3 + (int)lVar23 + 1);
                        uVar5 = 0xffffffff;
                        goto LAB_1427783ca;
                      }
                      iVar2 = iVar2 + 0x20;
                      lVar23 = lVar23 + 1;
                    } while (iVar12 - lVar20 != lVar23);
                    uVar5 = 0xffffffff;
                    iVar3 = iVar12;
                  }
                  uVar19 = (ulonglong)(iVar3 + 1);
                  iVar3 = iVar4;
                }
                else {
LAB_1427783ca:
                  uVar17 = (ulonglong)(-uVar10 & uVar10);
                  uVar15 = uVar17 * 2 + 1;
                  lVar20 = 0x3f;
                  if (uVar15 != 0) {
                    for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                    }
                  }
                  iVar3 = (iVar2 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                  if (iVar4 <= iVar3) {
                    iVar3 = iVar4;
                  }
                }
              } while (iVar3 != iVar9);
            }
          }
          else {
            puVar7 = (uint *)plVar16[6];
            if ((uint *)plVar16[6] == (uint *)0x0) {
              puVar7 = local_3d28;
            }
            uVar5 = *puVar7;
            if (uVar5 != 0) {
              uVar19 = 0;
              iVar2 = 0;
LAB_1427782ad:
              uVar17 = (ulonglong)(-uVar5 & uVar5);
              uVar15 = uVar17 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar3 = (iVar2 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (iVar9 <= iVar3) {
                iVar3 = iVar9;
              }
              goto LAB_1427782df;
            }
            iVar3 = iVar9 + 0x1e;
            if (-1 < iVar9 + -1) {
              iVar3 = iVar9 + -1;
            }
            uVar19 = 0;
            uVar17 = (ulonglong)(uint)(iVar3 >> 5);
            if (iVar3 >> 5 < 1) {
              uVar17 = uVar19;
            }
            iVar2 = 0;
            while (uVar17 != uVar19) {
              iVar2 = iVar2 + 0x20;
              uVar5 = puVar7[uVar19 + 1];
              uVar19 = uVar19 + 1;
              if (uVar5 != 0) goto LAB_1427782ad;
            }
          }
          goto LAB_14277800b;
        }
LAB_142777f7b:
        local_3d48 = (uint *)(plVar16 + 4);
        iVar9 = (int)plVar16[7];
        if (iVar9 == 0) {
          uVar19 = 1;
          uVar17 = 0;
          iVar2 = 0;
          iVar3 = 0;
        }
        else {
          puVar7 = (uint *)plVar16[6];
          if ((uint *)plVar16[6] == (uint *)0x0) {
            puVar7 = local_3d48;
          }
          uVar5 = *puVar7;
          if (uVar5 == 0) {
            iVar3 = iVar9 + 0x1e;
            if (-1 < iVar9 + -1) {
              iVar3 = iVar9 + -1;
            }
            uVar17 = 0;
            uVar19 = (ulonglong)(uint)(iVar3 >> 5);
            if (iVar3 >> 5 < 1) {
              uVar19 = uVar17;
            }
            iVar2 = 0;
            do {
              if (uVar19 == uVar17) goto LAB_14277800b;
              iVar2 = iVar2 + 0x20;
              uVar5 = puVar7[uVar17 + 1];
              uVar17 = uVar17 + 1;
            } while (uVar5 == 0);
          }
          else {
            uVar17 = 0;
            iVar2 = 0;
          }
          uVar19 = (ulonglong)(-uVar5 & uVar5);
          uVar15 = uVar19 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar3 = (iVar2 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar9 <= iVar3) {
            iVar3 = iVar9;
          }
        }
        if (iVar3 != iVar9) {
          uVar5 = 0xffffffff;
          do {
            lVar20 = plVar16[2];
            FUN_1400021e4(lVar20 + (longlong)iVar3 * 0x40,&local_3d08);
            local_3c18 = &local_3d08;
            lStack_3c10 = lVar20 + (longlong)iVar3 * 0x40 + 0x10;
            FUN_1413216f2(&DAT_14c866c00,&local_3d18,&local_3c18,0);
            if (CONCAT44(local_3d08._4_4_,(int)local_3d08) != 0) {
              FUN_1400020a8();
            }
            uVar5 = uVar5 & ~(uint)uVar19;
            puVar7 = (uint *)plVar16[6];
            if ((uint *)plVar16[6] == (uint *)0x0) {
              puVar7 = local_3d48;
            }
            iVar4 = (int)plVar16[7];
            iVar3 = (int)uVar17;
            lVar20 = (longlong)iVar3;
            uVar10 = puVar7[lVar20] & uVar5;
            if (uVar10 == 0) {
              iVar11 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar11 = iVar4 + -1;
              }
              iVar11 = iVar11 >> 5;
              iVar2 = iVar2 + 0x20;
              iVar12 = iVar11;
              if (iVar11 < iVar3) {
                iVar12 = iVar3;
              }
              if (iVar3 < iVar11) {
                lVar23 = 0;
                do {
                  uVar10 = (puVar7 + lVar20 + 1)[lVar23];
                  if (uVar10 != 0) {
                    uVar17 = (ulonglong)(iVar3 + (int)lVar23 + 1);
                    uVar5 = 0xffffffff;
                    goto LAB_1427781d6;
                  }
                  iVar2 = iVar2 + 0x20;
                  lVar23 = lVar23 + 1;
                } while (iVar12 - lVar20 != lVar23);
                uVar5 = 0xffffffff;
                iVar3 = iVar12;
              }
              uVar17 = (ulonglong)(iVar3 + 1);
              iVar3 = iVar4;
            }
            else {
LAB_1427781d6:
              uVar19 = (ulonglong)(-uVar10 & uVar10);
              uVar15 = uVar19 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar3 = (iVar2 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (iVar4 <= iVar3) {
                iVar3 = iVar4;
              }
            }
          } while (iVar3 != iVar9);
        }
LAB_14277800b:
        uVar5 = local_3d34 & ~(uint)local_3d30;
        puVar7 = local_3cd8;
        if (local_3cd8 == (uint *)0x0) {
          puVar7 = local_3ce8;
        }
        iVar9 = (int)local_3d20;
        lVar20 = (longlong)iVar9;
        uVar10 = puVar7[lVar20] & uVar5;
        uVar19 = local_3d20;
        iVar3 = local_3d4c;
        if (uVar10 == 0) {
          iVar2 = local_3cd0 + 0x1e;
          if (-1 < local_3cd0 + -1) {
            iVar2 = local_3cd0 + -1;
          }
          iVar2 = iVar2 >> 5;
          iVar3 = local_3d4c + 0x20;
          iVar4 = iVar2;
          if (iVar2 < iVar9) {
            iVar4 = iVar9;
          }
          if (iVar9 < iVar2) {
            lVar23 = 0;
            do {
              uVar10 = puVar7[lVar23 + lVar20 + 1];
              if (uVar10 != 0) {
                uVar5 = 0xffffffff;
                uVar19 = (ulonglong)(iVar9 + (int)lVar23 + 1);
                goto LAB_1427780ba;
              }
              iVar3 = iVar3 + 0x20;
              lVar23 = lVar23 + 1;
            } while (iVar4 - lVar20 != lVar23);
            uVar5 = 0xffffffff;
            iVar9 = iVar4;
          }
          uVar19 = (ulonglong)(iVar9 + 1);
          uVar17 = local_3d30;
          iVar9 = local_3cd0;
        }
        else {
LAB_1427780ba:
          uVar17 = (ulonglong)(-uVar10 & uVar10);
          uVar15 = uVar17 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar9 = (iVar3 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (local_3cd0 <= iVar9) {
            iVar9 = local_3cd0;
          }
        }
      } while (iVar9 != local_3d38);
    }
    bVar24 = true;
    uVar18 = 0;
  } while ((local_3d3c & 1) != 0);
  DAT_14c866f04 = 1;
  FUN_140d6b5be(&local_3bf8);
  FUN_1409263a6(&local_3cf8);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"textconfig");
  if ((cVar1 == '\0') && (lVar20 = FUN_145dab682(&DAT_14c866d60,&local_3c18), lVar20 != 0)) {
    lVar23 = 0;
    local_3d88 = (undefined2 **)0x0;
    FUN_1460d8db6(&local_3cf8,lVar20,local_3c18,0);
    FUN_14626acf6(&local_3bf8);
    puVar8 = (undefined8 *)FUN_14001cc68(0x3c38,0x10);
    *puVar8 = &PTR_FUN_149e27978;
    *(undefined4 *)(puVar8 + 1) = 0x1010000;
    *(undefined8 *)((longlong)puVar8 + 0xc) = 0;
    FUN_14626acf6(puVar8 + 3);
    puVar8[0x77d] = 0;
    *(undefined4 *)(puVar8 + 0x77e) = 0;
    puVar8[0x779] = 0;
    puVar8[0x77a] = 0;
    *(undefined8 *)((longlong)puVar8 + 0x3bf4) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar8 + 0x3bfc) = 0;
    puVar8[0x781] = 0;
    *(undefined4 *)(puVar8 + 0x782) = 0;
    puVar8[0x783] = 0;
    puVar8[0x784] = 0;
    puVar8[0x785] = 0;
    puVar8[0x786] = 0;
    DAT_14c872ce0 = puVar8;
    FUN_1468056d0(puVar8,&local_3cf8);
    *(undefined1 *)((longlong)DAT_14c872ce0 + 0xb) = 0;
    do {
      FUN_1468052db(&local_3cf8,(longlong)&local_3bf8 + lVar23);
      lVar23 = lVar23 + 0x5f8;
    } while (lVar23 != 0x3bb0);
    uVar18 = FUN_145c3bb50();
    FUN_146044b26(uVar18);
    FUN_1400020a8(lVar20);
    lVar20 = 0x35b8;
    do {
      FUN_140925f20((longlong)&local_3bf8 + lVar20);
      lVar20 = lVar20 + -0x5f8;
    } while (lVar20 != -0x5f8);
    FUN_1460d8d80(&local_3cf8);
    FUN_146805b86(&local_3bf8);
    FUN_140d6b9d6(&local_3bf8,L"GameUserSettings",&DAT_14c872b08);
    FUN_140d6b5be(&local_3bf8);
    goto LAB_142778b6f;
  }
  local_3c18 = (longlong *)0x0;
  lStack_3c10 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_3d88 = (undefined2 **)0x0;
  cVar1 = FUN_14063337c(&DAT_14c846b20,L"IniBootstrap=",&local_3c18,1);
  if (cVar1 == '\0') {
LAB_142778833:
    FUN_145cbe448();
    puVar8 = (undefined8 *)FUN_14001cc68(0x3c38,0x10);
    local_3bf8 = (undefined **)0x149e0639a;
    uStack_3bf0 = 7;
    uStack_3bec = uStack_3bec & 0xffffff00;
    uVar5 = FUN_14001a6c0(&local_3bf8,1);
    *puVar8 = &PTR_FUN_149e27978;
    *(undefined4 *)(puVar8 + 1) = 0x10000;
    *(ulonglong *)((longlong)puVar8 + 0xc) = (ulonglong)uVar5;
    FUN_14626acf6(puVar8 + 3);
    puVar8[0x77d] = 0;
    *(undefined4 *)(puVar8 + 0x77e) = 0;
    puVar8[0x779] = 0;
    puVar8[0x77a] = 0;
    *(undefined8 *)((longlong)puVar8 + 0x3bf4) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar8 + 0x3bfc) = 0;
    puVar8[0x781] = 0;
    *(undefined4 *)(puVar8 + 0x782) = 0;
    puVar8[0x783] = 0;
    puVar8[0x784] = 0;
    puVar8[0x785] = 0;
    puVar8[0x786] = 0;
    DAT_14c872ce0 = puVar8;
    FUN_140d6a6b4(&local_3bf8);
    FUN_14626b0a8(&local_3bf8);
    FUN_140d6b9d6(&local_3bf8,L"Compat",&DAT_14c872ab8);
    FUN_140d6b9d6(&local_3bf8,L"Lightmass",&DAT_14c872bb0);
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_14054d46e(&DAT_14c846b20,L"dumpconfig");
    puVar8 = DAT_14c872ce0;
    if (cVar1 != '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
      {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
      FUN_146804d52(puVar8,&DAT_14c872ee0);
    }
    uVar18 = FUN_145857cde();
    FUN_14626b4ae(&local_3cf8);
    FUN_145aa4344(uVar18,&local_3d08,&local_3cf8);
    FUN_1401cb1ee(&local_3cf8);
    puVar8 = DAT_14c872ce0;
    uVar18 = FUN_140b7d41a();
    FUN_140056680(&local_3cf8,uVar18);
    local_3d70 = local_3cf8;
    if ((int)uStack_3cf0 == 0) {
      local_3d70 = &DAT_149dfb77a;
    }
    local_3d60 = 0;
    local_3d68 = puVar8;
    local_3d78 = 1;
    local_3d80 = 1;
    local_3d88 = (undefined2 **)((ulonglong)local_3d88 & 0xffffffffffffff00);
    FUN_14626b15c(&DAT_14c872b58,L"GearboxAutomation",0,0);
    if (local_3cf8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar8 = DAT_14c872ce0;
    FUN_14626c2ae(&local_3cf8);
    local_3d70 = local_3cf8;
    if ((int)uStack_3cf0 == 0) {
      local_3d70 = &DAT_149dfb77a;
    }
    local_3d60 = 1;
    local_3d68 = puVar8;
    local_3d78 = 1;
    local_3d80 = 1;
    local_3d88 = (undefined2 **)((ulonglong)local_3d88 & 0xffffffffffffff00);
    FUN_14626b15c(&DAT_14c872b68,L"GearboxEngine",0,0);
    if (local_3cf8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar8 = DAT_14c872ce0;
    FUN_14626c2ae(&local_3cf8);
    local_3d70 = local_3cf8;
    if ((int)uStack_3cf0 == 0) {
      local_3d70 = &DAT_149dfb77a;
    }
    local_3d60 = 1;
    local_3d68 = puVar8;
    local_3d78 = 1;
    local_3d80 = 1;
    local_3d88 = (undefined2 **)((ulonglong)local_3d88 & 0xffffffffffffff00);
    FUN_14626b15c(&DAT_14c872b78,L"GearboxEditor",0,0);
    if (local_3cf8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined1 *)((longlong)DAT_14c872ce0 + 9) = 1;
    uVar18 = FUN_145c3bb50();
    FUN_146044b26(uVar18);
    FUN_140d6b5be(&local_3bf8);
  }
  else {
    local_3cf8 = (undefined2 *)0x0;
    uStack_3cf0 = 0;
    plVar16 = local_3c18;
    if ((int)lStack_3c10 == 0) {
      plVar16 = (longlong *)&DAT_149dfb77a;
    }
    cVar1 = FUN_14158b496(&local_3cf8,plVar16,2);
    if (cVar1 == '\0') {
      plVar16 = local_3c18;
      if ((int)lStack_3c10 == 0) {
        plVar16 = (longlong *)&DAT_149dfb77a;
      }
      FUN_145d03cb4(L"Unable to bootstrap from archive %s, will fallback on normal initialization\n"
                    ,plVar16);
    }
    else {
      memset(&local_3bf8,0,0x90);
      FUN_144869430(&local_3bf8);
      local_3b68 = 0;
      local_3bf8 = &PTR_FUN_149e1e050;
      local_3b58 = 0x7fffffffffffffff;
      local_3bd0 = local_3bd0 | 1;
      local_3bcf = local_3bcf | 1;
      local_3b60 = &local_3cf8;
      puVar8 = (undefined8 *)FUN_14001cc68(0x3c38,0x10);
      *puVar8 = &PTR_FUN_149e27978;
      *(undefined4 *)(puVar8 + 1) = 0x1010000;
      *(undefined8 *)((longlong)puVar8 + 0xc) = 0;
      FUN_14626acf6(puVar8 + 3);
      puVar8[0x77d] = 0;
      *(undefined4 *)(puVar8 + 0x77e) = 0;
      puVar8[0x779] = 0;
      puVar8[0x77a] = 0;
      *(undefined8 *)((longlong)puVar8 + 0x3bf4) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar8 + 0x3bfc) = 0;
      puVar8[0x781] = 0;
      *(undefined4 *)(puVar8 + 0x782) = 0;
      puVar8[0x783] = 0;
      puVar8[0x784] = 0;
      puVar8[0x785] = 0;
      puVar8[0x786] = 0;
      DAT_14c872ce0 = puVar8;
      FUN_1468055ec(puVar8,&local_3bf8);
      *(undefined1 *)((longlong)DAT_14c872ce0 + 9) = 1;
      uVar18 = FUN_145c3bb50();
      FUN_146044b26(uVar18);
      local_3bf8 = &PTR__purecall_149e35f70;
      if (local_3ba0 != (longlong *)0x0) {
        if (*local_3ba0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_3ba0);
      }
      if (local_3b80 != 0) {
        if (*(longlong *)(local_3b80 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_3b80);
      }
    }
    if (local_3cf8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') goto LAB_142778833;
  }
  if (local_3c18 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_142778b6f:
  if ((local_48 ^ (ulonglong)local_3da8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142778c03 FUN_142778c03 body=749 status=ok
// SIG undefined FUN_142778c03(void)

void FUN_142778c03(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ushort uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c866f08) && (FUN_144b3d300(&DAT_14c866f08), DAT_14c866f08 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar2 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"ini.UseNewDynamicLayers",1);
    iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2);
    DAT_14c866f05 = iVar1 != 0;
    _Init_thread_footer(&DAT_14c866f08);
  }
  if (DAT_14c866f05 != '\0') goto LAB_142778e65;
  iVar1 = (int)param_1[1];
  if (iVar1 == DAT_14c872cf0) {
    if (1 < iVar1) {
      lVar3 = 0;
      while( true ) {
        uVar11 = *(ushort *)(*param_1 + lVar3);
        uVar4 = (ulonglong)uVar11;
        uVar6 = *(ushort *)((longlong)DAT_14c872ce8 + lVar3);
        if (uVar11 != uVar6) break;
        if (uVar11 == 0) goto LAB_142778ccb;
LAB_142778c8e:
        lVar3 = lVar3 + 2;
      }
      if ((uVar6 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar8 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar8]) goto LAB_142778c8e;
      }
      if (uVar11 != uVar6) goto LAB_142778e65;
    }
  }
  else if (DAT_14c872cf0 + iVar1 != 1) goto LAB_142778e65;
LAB_142778ccb:
  FUN_140056680(&local_40);
  uVar7 = 0;
  uVar12 = local_38 - 1;
  if (local_38 == 0) {
    uVar12 = uVar7;
  }
  if (0 < (int)uVar12) {
    puVar5 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar5 = local_40;
    }
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar7 = ((uint)(ushort)puVar5[lVar3] + (uint)(0x19 < (ushort)puVar5[lVar3] - 0x61) * 0x20) -
              0x20;
      uVar14 = (uint)(uVar4 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar4 ^ uVar7) & 0xff) * 4);
      uVar7 = uVar14 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar14 & 0xff ^ uVar7 >> 8 & 0xff) * 4);
      uVar4 = (ulonglong)uVar7;
      lVar3 = lVar3 + 1;
    } while (uVar12 != (uint)lVar3);
  }
  bVar15 = true;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar2 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_2[9] - 1U & uVar7) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_2;
LAB_142778da1:
      iVar9 = iVar1;
      lVar13 = (longlong)iVar9;
      iVar1 = *(int *)(lVar3 + 8 + lVar13 * 0x18);
      if (iVar1 == local_38) {
        if (1 < local_38) {
          lVar10 = 0;
          do {
            uVar11 = *(ushort *)(*(longlong *)(lVar3 + lVar13 * 0x18) + lVar10);
            uVar4 = (ulonglong)uVar11;
            uVar6 = *(ushort *)((longlong)local_40 + lVar10);
            if (uVar11 == uVar6) {
              if (uVar11 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar11)) goto LAB_142778e13;
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
              uVar8 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar8]) goto LAB_142778e13;
            }
            lVar10 = lVar10 + 2;
          } while( true );
        }
      }
      else if (iVar1 + local_38 != 1) goto LAB_142778dbe;
      goto LAB_142778e23;
    }
  }
LAB_142778e29:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (!bVar15) {
    puVar5 = DAT_14c872ce8;
    if (DAT_14c872cf0 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_14166158f(L"ConsoleVariables",puVar5,0xa000000,0);
  }
LAB_142778e65:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142778e13:
  if (uVar11 == uVar6) goto LAB_142778e23;
LAB_142778dbe:
  iVar1 = *(int *)(lVar3 + 0x10 + lVar13 * 0x18);
  iVar9 = -1;
  if (iVar1 == -1) goto LAB_142778e23;
  goto LAB_142778da1;
LAB_142778e23:
  bVar15 = iVar9 == -1;
  goto LAB_142778e29;
}



// FUNCTION 142778ef2 FUN_142778ef2 body=141 status=ok
// SIG undefined FUN_142778ef2(void)

undefined8 * FUN_142778ef2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c866db0) {
    FUN_144b3d300(&DAT_14c866db0);
    if (DAT_14c866db0 == -1) {
      DAT_14c866da0 = 0;
      uRam000000014c866da8 = 0;
      atexit((_func_5014 *)&LAB_142778f7f);
      _Init_thread_footer(&DAT_14c866db0);
    }
  }
  if (DAT_14c866db4 == '\0') {
    DAT_14c866db4 = '\x01';
    FUN_14020fad6(&DAT_14c866da0,&DAT_149dfb77a);
  }
  return &DAT_14c866da0;
}



// FUNCTION 142778f90 FUN_142778f90 body=85 status=ok
// SIG undefined FUN_142778f90(void)

void FUN_142778f90(void)

{
  undefined2 *puVar1;
  
  puVar1 = DAT_14c872ce8;
  if (DAT_14c872cf0 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_14166158f(L"ConsoleVariables",puVar1,0x4000000,0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142778fe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0x50))();
  return;
}



// FUNCTION 142778fe5 FUN_142778fe5 body=41 status=ok
// SIG undefined FUN_142778fe5(void)

void FUN_142778fe5(void)

{
  DAT_14c866fc8 = 0;
  if (DAT_14c866fc0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6b730();
  return;
}



// FUNCTION 142779032 FUN_142779032 body=1096 status=ok
// SIG undefined FUN_142779032(void)

void FUN_142779032(uint *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 auStack_188 [40];
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  undefined8 local_140;
  uint auStack_138 [4];
  uint local_128 [55];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_144 = *param_1;
  local_148 = param_1[1];
  puVar13 = local_128 + 0xb;
  local_14c = param_1[2];
  local_150 = param_1[3];
  local_128[0] = param_1[4];
  local_128[1] = param_1[5];
  local_128[2] = param_1[6];
  uVar18 = param_1[7];
  local_128[3] = uVar18;
  uVar20 = 0;
  uVar14 = local_144;
  uVar22 = local_148;
  uVar17 = local_14c;
  uVar16 = local_150;
  while( true ) {
    uVar24 = CONCAT13((&DAT_149e28c10)[uVar18 >> 0x18],
                      CONCAT12((&DAT_149e28c10)[uVar18 >> 0x10 & 0xff],
                               CONCAT11((&DAT_149e28c10)[uVar18 >> 8 & 0xff],
                                        (&DAT_149e28c10)[uVar18 & 0xff])));
    uVar14 = uVar14 ^ 1 << (uVar20 & 0x1f) ^ (uVar24 << 0x18 | uVar24 >> 8);
    puVar13[-7] = uVar14;
    uVar22 = uVar22 ^ uVar14;
    puVar13[-6] = uVar22;
    uVar17 = uVar17 ^ uVar22;
    puVar13[-5] = uVar17;
    uVar16 = uVar16 ^ uVar17;
    puVar13[-4] = uVar16;
    if (uVar20 == 6) break;
    uVar24 = CONCAT13((&DAT_149e28c10)[uVar16 >> 0x18],
                      CONCAT12((&DAT_149e28c10)[uVar16 >> 0x10 & 0xff],
                               CONCAT11((&DAT_149e28c10)[uVar16 >> 8 & 0xff],
                                        (&DAT_149e28c10)[uVar16 & 0xff]))) ^ puVar13[-0xb];
    puVar13[-3] = uVar24;
    uVar24 = uVar24 ^ puVar13[-10];
    puVar13[-2] = uVar24;
    uVar24 = uVar24 ^ puVar13[-9];
    puVar13[-1] = uVar24;
    uVar18 = uVar18 ^ uVar24;
    *puVar13 = uVar18;
    uVar20 = uVar20 + 1;
    puVar13 = puVar13 + 8;
  }
  if (param_3 != 0) {
    local_154 = local_128[0x34];
    local_158 = local_128[0x35];
    local_15c = local_128[0x36];
    local_160 = local_4c;
    uVar25 = 0;
    do {
      uVar22 = *(uint *)(param_2 + uVar25) ^ local_144;
      uVar14 = *(uint *)(param_2 + 4 + uVar25) ^ local_148;
      uVar18 = *(uint *)(param_2 + 8 + uVar25) ^ local_14c;
      uVar17 = *(uint *)(param_2 + 0xc + uVar25) ^ local_150;
      lVar23 = 0x1c;
      do {
        uVar20 = uVar22 >> 0x18;
        uVar24 = uVar22 >> 0xe;
        uVar15 = uVar14 >> 0x18;
        uVar21 = uVar22 >> 8;
        uVar19 = uVar14 >> 0xe;
        uVar16 = uVar18 >> 0x18;
        uVar22 = *(uint *)(&DAT_149e28010 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e27c10 + (ulonglong)(uVar22 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e28410 + (uVar18 >> 0xe & 0x3fc)) ^
                 *(uint *)(&DAT_149e28810 + (ulonglong)(uVar17 >> 0x18) * 4) ^
                 *(uint *)((longlong)&local_144 + lVar23);
        uVar14 = *(uint *)(&DAT_149e28010 + (ulonglong)(uVar18 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e27c10 + (ulonglong)(uVar14 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e28410 + (uVar17 >> 0xe & 0x3fc)) ^
                 *(uint *)(&DAT_149e28810 + (ulonglong)uVar20 * 4) ^
                 *(uint *)((longlong)auStack_138 + lVar23 + -8);
        uVar18 = *(uint *)(&DAT_149e28010 + (ulonglong)(uVar17 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e27c10 + (ulonglong)(uVar18 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e28410 + (uVar24 & 0x3fc)) ^
                 *(uint *)(&DAT_149e28810 + (ulonglong)uVar15 * 4) ^
                 *(uint *)((longlong)auStack_138 + lVar23 + -4);
        uVar17 = *(uint *)(&DAT_149e28010 + (ulonglong)(uVar21 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e27c10 + (ulonglong)(uVar17 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e28410 + (uVar19 & 0x3fc)) ^
                 *(uint *)(&DAT_149e28810 + (ulonglong)uVar16 * 4) ^
                 *(uint *)((longlong)auStack_138 + lVar23);
        lVar23 = lVar23 + 0x10;
      } while (lVar23 != 0xec);
      uVar1 = (&DAT_149e28c10)[uVar14 & 0xff];
      uVar2 = (&DAT_149e28c10)[uVar18 >> 8 & 0xff];
      uVar3 = (&DAT_149e28c10)[uVar17 >> 0x10 & 0xff];
      uVar4 = (&DAT_149e28c10)[uVar22 >> 0x18];
      uVar5 = (&DAT_149e28c10)[uVar18 & 0xff];
      uVar6 = (&DAT_149e28c10)[uVar17 >> 8 & 0xff];
      uVar7 = (&DAT_149e28c10)[uVar22 >> 0x10 & 0xff];
      uVar8 = (&DAT_149e28c10)[uVar14 >> 0x18];
      uVar9 = (&DAT_149e28c10)[uVar17 & 0xff];
      uVar10 = (&DAT_149e28c10)[uVar22 >> 8 & 0xff];
      uVar11 = (&DAT_149e28c10)[uVar14 >> 0x10 & 0xff];
      uVar12 = (&DAT_149e28c10)[uVar18 >> 0x18];
      *(uint *)(param_2 + uVar25) =
           CONCAT13((&DAT_149e28c10)[uVar17 >> 0x18],
                    CONCAT12((&DAT_149e28c10)[uVar18 >> 0x10 & 0xff],
                             CONCAT11((&DAT_149e28c10)[uVar14 >> 8 & 0xff],
                                      (&DAT_149e28c10)[uVar22 & 0xff]))) ^ local_128[0x34];
      *(uint *)(param_2 + 4 + uVar25) =
           CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) ^ local_128[0x35];
      *(uint *)(param_2 + 8 + uVar25) =
           CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) ^ local_128[0x36];
      *(uint *)(param_2 + 0xc + uVar25) =
           CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))) ^ local_4c;
      uVar25 = uVar25 + 0x10;
    } while (uVar25 < param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
  local_140 = param_3;
  auStack_138[1] = local_148;
  auStack_138[2] = local_14c;
  auStack_138[3] = local_150;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14277947b FUN_14277947b body=1566 status=ok
// SIG undefined FUN_14277947b(void)

void FUN_14277947b(uint *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined1 auStack_278 [40];
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  undefined8 local_230;
  uint auStack_228 [4];
  uint local_218 [112];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  uVar13 = *param_1;
  puVar14 = local_218 + 0x47;
  local_218[0x38] = uVar13;
  uVar20 = param_1[1];
  local_218[0x39] = uVar20;
  uVar22 = param_1[2];
  local_218[0x3a] = uVar22;
  uVar23 = param_1[3];
  local_218[0x3b] = uVar23;
  local_218[0x3c] = param_1[4];
  local_218[0x3d] = param_1[5];
  local_218[0x3e] = param_1[6];
  uVar16 = param_1[7];
  local_218[0x3f] = uVar16;
  uVar25 = 0;
  uVar18 = uVar13;
  while( true ) {
    uVar27 = CONCAT13((&DAT_149e28c10)[uVar16 >> 0x18],
                      CONCAT12((&DAT_149e28c10)[uVar16 >> 0x10 & 0xff],
                               CONCAT11((&DAT_149e28c10)[uVar16 >> 8 & 0xff],
                                        (&DAT_149e28c10)[uVar16 & 0xff])));
    uVar18 = uVar18 ^ 1 << (uVar25 & 0x1f) ^ (uVar27 << 0x18 | uVar27 >> 8);
    puVar14[-7] = uVar18;
    uVar20 = uVar20 ^ uVar18;
    puVar14[-6] = uVar20;
    uVar22 = uVar22 ^ uVar20;
    puVar14[-5] = uVar22;
    uVar23 = uVar23 ^ uVar22;
    puVar14[-4] = uVar23;
    if (uVar25 == 6) break;
    uVar27 = CONCAT13((&DAT_149e28c10)[uVar23 >> 0x18],
                      CONCAT12((&DAT_149e28c10)[uVar23 >> 0x10 & 0xff],
                               CONCAT11((&DAT_149e28c10)[uVar23 >> 8 & 0xff],
                                        (&DAT_149e28c10)[uVar23 & 0xff]))) ^ puVar14[-0xb];
    puVar14[-3] = uVar27;
    uVar27 = uVar27 ^ puVar14[-10];
    puVar14[-2] = uVar27;
    uVar27 = uVar27 ^ puVar14[-9];
    puVar14[-1] = uVar27;
    uVar16 = uVar16 ^ uVar27;
    *puVar14 = uVar16;
    uVar25 = uVar25 + 1;
    puVar14 = puVar14 + 8;
  }
  local_234 = local_58;
  local_238 = local_54;
  auStack_228[1] = local_54;
  local_23c = local_50;
  auStack_228[2] = local_50;
  local_240 = local_4c;
  auStack_228[3] = local_4c;
  puVar14 = local_218;
  lVar24 = 0xd0;
  do {
    lVar17 = lVar24;
    puVar15 = puVar14;
    uVar20 = *(uint *)((longlong)local_218 + lVar17 + 0xe0);
    *puVar15 = *(uint *)(&DAT_149e29110 + (ulonglong)(byte)(&DAT_149e28c10)[uVar20 >> 8 & 0xff] * 4)
               ^ *(uint *)(&DAT_149e28d10 +
                          (ulonglong)(byte)(&DAT_149e28c10)[(ulonglong)uVar20 & 0xff] * 4) ^
               *(uint *)(&DAT_149e29510 +
                        (ulonglong)(byte)(&DAT_149e28c10)[uVar20 >> 0x10 & 0xff] * 4) ^
               *(uint *)(&DAT_149e29910 + (ulonglong)(byte)(&DAT_149e28c10)[uVar20 >> 0x18] * 4);
    uVar20 = *(uint *)((longlong)local_218 + lVar17 + 0xe4);
    puVar15[1] = *(uint *)(&DAT_149e29110 +
                          (ulonglong)(byte)(&DAT_149e28c10)[uVar20 >> 8 & 0xff] * 4) ^
                 *(uint *)(&DAT_149e28d10 +
                          (ulonglong)(byte)(&DAT_149e28c10)[(ulonglong)uVar20 & 0xff] * 4) ^
                 *(uint *)(&DAT_149e29510 +
                          (ulonglong)(byte)(&DAT_149e28c10)[uVar20 >> 0x10 & 0xff] * 4) ^
                 *(uint *)(&DAT_149e29910 + (ulonglong)(byte)(&DAT_149e28c10)[uVar20 >> 0x18] * 4);
    uVar20 = *(uint *)((longlong)local_218 + lVar17 + 0xe8);
    puVar15[2] = *(uint *)(&DAT_149e29110 +
                          (ulonglong)(byte)(&DAT_149e28c10)[uVar20 >> 8 & 0xff] * 4) ^
                 *(uint *)(&DAT_149e28d10 +
                          (ulonglong)(byte)(&DAT_149e28c10)[(ulonglong)uVar20 & 0xff] * 4) ^
                 *(uint *)(&DAT_149e29510 +
                          (ulonglong)(byte)(&DAT_149e28c10)[uVar20 >> 0x10 & 0xff] * 4) ^
                 *(uint *)(&DAT_149e29910 + (ulonglong)(byte)(&DAT_149e28c10)[uVar20 >> 0x18] * 4);
    uVar20 = *(uint *)((longlong)local_218 + lVar17 + 0xec);
    puVar15[3] = *(uint *)(&DAT_149e29110 +
                          (ulonglong)(byte)(&DAT_149e28c10)[uVar20 >> 8 & 0xff] * 4) ^
                 *(uint *)(&DAT_149e28d10 +
                          (ulonglong)(byte)(&DAT_149e28c10)[(ulonglong)uVar20 & 0xff] * 4) ^
                 *(uint *)(&DAT_149e29510 +
                          (ulonglong)(byte)(&DAT_149e28c10)[uVar20 >> 0x10 & 0xff] * 4) ^
                 *(uint *)(&DAT_149e29910 + (ulonglong)(byte)(&DAT_149e28c10)[uVar20 >> 0x18] * 4);
    puVar14 = puVar15 + 4;
    lVar24 = lVar17 + -0x10;
  } while ((int)(lVar17 + -0x10) != 0);
  puVar15[4] = uVar13;
  puVar15[5] = *(uint *)((longlong)local_218 + lVar17 + 0xd4);
  puVar15[6] = *(uint *)((longlong)local_218 + lVar17 + 0xd8);
  puVar15[7] = *(uint *)((longlong)local_218 + lVar17 + 0xdc);
  if (param_3 != 0) {
    local_244 = local_218[0x34];
    local_248 = local_218[0x35];
    local_24c = local_218[0x36];
    local_250 = local_218[0x37];
    uVar26 = 0;
    do {
      uVar13 = *(uint *)(param_2 + uVar26) ^ local_58;
      uVar22 = *(uint *)(param_2 + 4 + uVar26) ^ local_54;
      uVar20 = *(uint *)(param_2 + 8 + uVar26) ^ local_50;
      uVar23 = *(uint *)(param_2 + 0xc + uVar26) ^ local_4c;
      lVar24 = 0x1c;
      do {
        uVar19 = uVar13 >> 8;
        uVar25 = uVar22 >> 8;
        uVar27 = uVar13 >> 0xe;
        uVar18 = uVar20 >> 8;
        uVar21 = uVar22 >> 0xe;
        uVar16 = uVar13 >> 0x18;
        uVar13 = *(uint *)(&DAT_149e29110 + (ulonglong)(uVar23 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e28d10 + (ulonglong)(uVar13 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e29510 + (uVar20 >> 0xe & 0x3fc)) ^
                 *(uint *)(&DAT_149e29910 + (ulonglong)(uVar22 >> 0x18) * 4) ^
                 *(uint *)((longlong)&local_234 + lVar24);
        uVar22 = *(uint *)(&DAT_149e29110 + (ulonglong)(uVar19 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e28d10 + (ulonglong)(uVar22 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e29510 + (uVar23 >> 0xe & 0x3fc)) ^
                 *(uint *)(&DAT_149e29910 + (ulonglong)(uVar20 >> 0x18) * 4) ^
                 *(uint *)((longlong)auStack_228 + lVar24 + -8);
        uVar20 = *(uint *)(&DAT_149e29110 + (ulonglong)(uVar25 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e28d10 + (ulonglong)(uVar20 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e29510 + (uVar27 & 0x3fc)) ^
                 *(uint *)(&DAT_149e29910 + (ulonglong)(uVar23 >> 0x18) * 4) ^
                 *(uint *)((longlong)auStack_228 + lVar24 + -4);
        uVar23 = *(uint *)(&DAT_149e29110 + (ulonglong)(uVar18 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e28d10 + (ulonglong)(uVar23 & 0xff) * 4) ^
                 *(uint *)(&DAT_149e29510 + (uVar21 & 0x3fc)) ^
                 *(uint *)(&DAT_149e29910 + (ulonglong)uVar16 * 4) ^
                 *(uint *)((longlong)auStack_228 + lVar24);
        lVar24 = lVar24 + 0x10;
      } while (lVar24 != 0xec);
      uVar1 = (&DAT_149e29d10)[uVar22 & 0xff];
      uVar2 = (&DAT_149e29d10)[uVar13 >> 8 & 0xff];
      uVar3 = (&DAT_149e29d10)[uVar23 >> 0x10 & 0xff];
      uVar4 = (&DAT_149e29d10)[uVar20 >> 0x18];
      uVar5 = (&DAT_149e29d10)[uVar20 & 0xff];
      uVar6 = (&DAT_149e29d10)[uVar22 >> 8 & 0xff];
      uVar7 = (&DAT_149e29d10)[uVar13 >> 0x10 & 0xff];
      uVar8 = (&DAT_149e29d10)[uVar23 >> 0x18];
      uVar9 = (&DAT_149e29d10)[uVar23 & 0xff];
      uVar10 = (&DAT_149e29d10)[uVar20 >> 8 & 0xff];
      uVar11 = (&DAT_149e29d10)[uVar22 >> 0x10 & 0xff];
      uVar12 = (&DAT_149e29d10)[uVar13 >> 0x18];
      *(uint *)(param_2 + uVar26) =
           CONCAT13((&DAT_149e29d10)[uVar22 >> 0x18],
                    CONCAT12((&DAT_149e29d10)[uVar20 >> 0x10 & 0xff],
                             CONCAT11((&DAT_149e29d10)[uVar23 >> 8 & 0xff],
                                      (&DAT_149e29d10)[uVar13 & 0xff]))) ^ local_218[0x34];
      *(uint *)(param_2 + 4 + uVar26) =
           CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))) ^ local_218[0x35];
      *(uint *)(param_2 + 8 + uVar26) =
           CONCAT13(uVar8,CONCAT12(uVar7,CONCAT11(uVar6,uVar5))) ^ local_218[0x36];
      *(uint *)(param_2 + 0xc + uVar26) =
           CONCAT13(uVar12,CONCAT12(uVar11,CONCAT11(uVar10,uVar9))) ^ local_218[0x37];
      uVar26 = uVar26 + 0x10;
    } while (uVar26 < param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
  local_230 = param_3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142779a9a FUN_142779a9a body=1508 status=ok
// SIG undefined FUN_142779a9a(void)

/* WARNING: Removing unreachable block (ram,0x000142779e2b) */
/* WARNING: Removing unreachable block (ram,0x000142779e1e) */
/* WARNING: Removing unreachable block (ram,0x000142779e15) */
/* WARNING: Removing unreachable block (ram,0x000142779df8) */
/* WARNING: Removing unreachable block (ram,0x000142779de9) */
/* WARNING: Removing unreachable block (ram,0x000142779ddf) */
/* WARNING: Removing unreachable block (ram,0x000142779db2) */
/* WARNING: Removing unreachable block (ram,0x000142779da8) */
/* WARNING: Removing unreachable block (ram,0x000142779d9d) */
/* WARNING: Removing unreachable block (ram,0x000142779d70) */
/* WARNING: Removing unreachable block (ram,0x000142779d66) */
/* WARNING: Removing unreachable block (ram,0x000142779d5b) */
/* WARNING: Removing unreachable block (ram,0x000142779d2e) */
/* WARNING: Removing unreachable block (ram,0x000142779d24) */
/* WARNING: Removing unreachable block (ram,0x000142779d19) */
/* WARNING: Removing unreachable block (ram,0x000142779cec) */
/* WARNING: Removing unreachable block (ram,0x000142779ce2) */
/* WARNING: Removing unreachable block (ram,0x000142779cd7) */
/* WARNING: Removing unreachable block (ram,0x000142779ca7) */
/* WARNING: Removing unreachable block (ram,0x000142779c9d) */
/* WARNING: Removing unreachable block (ram,0x000142779c92) */
/* WARNING: Removing unreachable block (ram,0x000142779c62) */
/* WARNING: Removing unreachable block (ram,0x000142779c58) */
/* WARNING: Removing unreachable block (ram,0x000142779c4d) */
/* WARNING: Removing unreachable block (ram,0x000142779c1e) */
/* WARNING: Removing unreachable block (ram,0x000142779c14) */
/* WARNING: Removing unreachable block (ram,0x000142779c0a) */
/* WARNING: Removing unreachable block (ram,0x000142779bdd) */
/* WARNING: Removing unreachable block (ram,0x000142779bd4) */
/* WARNING: Removing unreachable block (ram,0x000142779bcb) */
/* WARNING: Removing unreachable block (ram,0x000142779b9e) */
/* WARNING: Removing unreachable block (ram,0x000142779b95) */
/* WARNING: Removing unreachable block (ram,0x000142779b8c) */
/* WARNING: Removing unreachable block (ram,0x000142779b5f) */
/* WARNING: Removing unreachable block (ram,0x000142779b56) */
/* WARNING: Removing unreachable block (ram,0x000142779b4d) */
/* WARNING: Removing unreachable block (ram,0x000142779b24) */
/* WARNING: Removing unreachable block (ram,0x000142779b1b) */
/* WARNING: Removing unreachable block (ram,0x000142779b12) */

void FUN_142779a9a(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  ulonglong uVar39;
  
  auVar33 = *param_1;
  auVar1 = param_1[1];
  auVar31 = aeskeygenassist(auVar1,1);
  auVar34._12_4_ = auVar31._12_4_;
  auVar34._4_4_ = auVar34._12_4_;
  auVar34._0_4_ = auVar34._12_4_;
  auVar34._8_4_ = auVar34._12_4_;
  uVar39 = auVar33._0_8_;
  auVar40._0_8_ = uVar39 << 0x20;
  auVar40._8_8_ = auVar33._8_8_ << 0x20 | uVar39 >> 0x20;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar39;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar39 << 0x20;
  auVar34 = auVar31 << 0x40 ^ auVar40 ^ auVar14 << 0x40 ^ auVar33 ^ auVar34;
  auVar31 = aeskeygenassist(auVar34,0);
  auVar41._8_4_ = auVar31._8_4_;
  auVar41._4_4_ = auVar41._8_4_;
  auVar41._0_4_ = auVar41._8_4_;
  auVar41._12_4_ = auVar41._8_4_;
  uVar39 = auVar1._0_8_;
  auVar45._0_8_ = uVar39 << 0x20;
  auVar45._8_8_ = auVar1._8_8_ << 0x20 | uVar39 >> 0x20;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar39;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar39 << 0x20;
  auVar41 = auVar2 << 0x40 ^ auVar45 ^ auVar15 << 0x40 ^ auVar1 ^ auVar41;
  auVar31 = aeskeygenassist(auVar41,2);
  auVar27._12_4_ = auVar31._12_4_;
  auVar27._4_4_ = auVar27._12_4_;
  auVar27._0_4_ = auVar27._12_4_;
  auVar27._8_4_ = auVar27._12_4_;
  uVar39 = auVar34._0_8_;
  auVar46._0_8_ = uVar39 << 0x20;
  auVar46._8_8_ = auVar34._8_8_ << 0x20 | uVar39 >> 0x20;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar39;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar39 << 0x20;
  auVar27 = auVar3 << 0x40 ^ auVar46 ^ auVar16 << 0x40 ^ auVar34 ^ auVar27;
  auVar31 = aeskeygenassist(auVar27,0);
  auVar35._8_4_ = auVar31._8_4_;
  auVar35._4_4_ = auVar35._8_4_;
  auVar35._0_4_ = auVar35._8_4_;
  auVar35._12_4_ = auVar35._8_4_;
  uVar39 = auVar41._0_8_;
  auVar47._0_8_ = uVar39 << 0x20;
  auVar47._8_8_ = auVar41._8_8_ << 0x20 | uVar39 >> 0x20;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar39;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar39 << 0x20;
  auVar35 = auVar4 << 0x40 ^ auVar47 ^ auVar17 << 0x40 ^ auVar41 ^ auVar35;
  auVar31 = aeskeygenassist(auVar35,4);
  auVar42._12_4_ = auVar31._12_4_;
  auVar42._4_4_ = auVar42._12_4_;
  auVar42._0_4_ = auVar42._12_4_;
  auVar42._8_4_ = auVar42._12_4_;
  uVar39 = auVar27._0_8_;
  auVar48._0_8_ = uVar39 << 0x20;
  auVar48._8_8_ = auVar27._8_8_ << 0x20 | uVar39 >> 0x20;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar39;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar39 << 0x20;
  auVar42 = auVar5 << 0x40 ^ auVar48 ^ auVar18 << 0x40 ^ auVar27 ^ auVar42;
  auVar31 = aeskeygenassist(auVar42,0);
  auVar28._8_4_ = auVar31._8_4_;
  auVar28._4_4_ = auVar28._8_4_;
  auVar28._0_4_ = auVar28._8_4_;
  auVar28._12_4_ = auVar28._8_4_;
  uVar39 = auVar35._0_8_;
  auVar49._0_8_ = uVar39 << 0x20;
  auVar49._8_8_ = auVar35._8_8_ << 0x20 | uVar39 >> 0x20;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar39;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar39 << 0x20;
  auVar28 = auVar6 << 0x40 ^ auVar49 ^ auVar19 << 0x40 ^ auVar35 ^ auVar28;
  auVar31 = aeskeygenassist(auVar28,8);
  auVar36._12_4_ = auVar31._12_4_;
  auVar36._4_4_ = auVar36._12_4_;
  auVar36._0_4_ = auVar36._12_4_;
  auVar36._8_4_ = auVar36._12_4_;
  uVar39 = auVar42._0_8_;
  auVar50._0_8_ = uVar39 << 0x20;
  auVar50._8_8_ = auVar42._8_8_ << 0x20 | uVar39 >> 0x20;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar39;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar39 << 0x20;
  auVar36 = auVar7 << 0x40 ^ auVar50 ^ auVar20 << 0x40 ^ auVar42 ^ auVar36;
  auVar31 = aeskeygenassist(auVar36,0);
  auVar43._8_4_ = auVar31._8_4_;
  auVar43._4_4_ = auVar43._8_4_;
  auVar43._0_4_ = auVar43._8_4_;
  auVar43._12_4_ = auVar43._8_4_;
  uVar39 = auVar28._0_8_;
  auVar51._0_8_ = uVar39 << 0x20;
  auVar51._8_8_ = auVar28._8_8_ << 0x20 | uVar39 >> 0x20;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar39;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar39 << 0x20;
  auVar43 = auVar8 << 0x40 ^ auVar51 ^ auVar21 << 0x40 ^ auVar28 ^ auVar43;
  auVar31 = aeskeygenassist(auVar43,0x10);
  auVar29._12_4_ = auVar31._12_4_;
  auVar29._4_4_ = auVar29._12_4_;
  auVar29._0_4_ = auVar29._12_4_;
  auVar29._8_4_ = auVar29._12_4_;
  uVar39 = auVar36._0_8_;
  auVar52._0_8_ = uVar39 << 0x20;
  auVar52._8_8_ = auVar36._8_8_ << 0x20 | uVar39 >> 0x20;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar39;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar39 << 0x20;
  auVar29 = auVar9 << 0x40 ^ auVar52 ^ auVar22 << 0x40 ^ auVar36 ^ auVar29;
  auVar31 = aeskeygenassist(auVar29,0);
  auVar37._8_4_ = auVar31._8_4_;
  auVar37._4_4_ = auVar37._8_4_;
  auVar37._0_4_ = auVar37._8_4_;
  auVar37._12_4_ = auVar37._8_4_;
  uVar39 = auVar43._0_8_;
  auVar53._0_8_ = uVar39 << 0x20;
  auVar53._8_8_ = auVar43._8_8_ << 0x20 | uVar39 >> 0x20;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar39;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar39 << 0x20;
  auVar37 = auVar10 << 0x40 ^ auVar53 ^ auVar23 << 0x40 ^ auVar43 ^ auVar37;
  auVar31 = aeskeygenassist(auVar37,0x20);
  auVar44._12_4_ = auVar31._12_4_;
  auVar44._4_4_ = auVar44._12_4_;
  auVar44._0_4_ = auVar44._12_4_;
  auVar44._8_4_ = auVar44._12_4_;
  uVar39 = auVar29._0_8_;
  auVar54._0_8_ = uVar39 << 0x20;
  auVar54._8_8_ = auVar29._8_8_ << 0x20 | uVar39 >> 0x20;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar39 << 0x20;
  auVar44 = auVar11 << 0x40 ^ auVar54 ^ auVar24 << 0x40 ^ auVar29 ^ auVar44;
  auVar31 = aeskeygenassist(auVar44,0);
  auVar30._8_4_ = auVar31._8_4_;
  auVar30._4_4_ = auVar30._8_4_;
  auVar30._0_4_ = auVar30._8_4_;
  auVar30._12_4_ = auVar30._8_4_;
  uVar39 = auVar37._0_8_;
  auVar55._0_8_ = uVar39 << 0x20;
  auVar55._8_8_ = auVar37._8_8_ << 0x20 | uVar39 >> 0x20;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar39 << 0x20;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar39;
  auVar30 = auVar12 << 0x40 ^ auVar55 ^ auVar25 << 0x40 ^ auVar37 ^ auVar30;
  uVar39 = auVar44._0_8_;
  auVar32._0_8_ = uVar39 << 0x20;
  auVar32._8_8_ = auVar44._8_8_ << 0x20 | uVar39 >> 0x20;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar39 << 0x20;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar39;
  auVar31 = aeskeygenassist(auVar30,0x40);
  auVar38._12_4_ = auVar31._12_4_;
  auVar38._4_4_ = auVar38._12_4_;
  auVar38._0_4_ = auVar38._12_4_;
  auVar38._8_4_ = auVar38._12_4_;
  auVar38 = auVar13 << 0x40 ^ auVar32 ^ auVar26 << 0x40 ^ auVar44 ^ auVar38;
  for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
    auVar31 = aesenc(*param_2 ^ auVar33,auVar1);
    auVar31 = aesenc(auVar31,auVar34);
    auVar31 = aesenc(auVar31,auVar41);
    auVar31 = aesenc(auVar31,auVar27);
    auVar31 = aesenc(auVar31,auVar35);
    auVar31 = aesenc(auVar31,auVar42);
    auVar31 = aesenc(auVar31,auVar28);
    auVar31 = aesenc(auVar31,auVar36);
    auVar31 = aesenc(auVar31,auVar43);
    auVar31 = aesenc(auVar31,auVar29);
    auVar31 = aesenc(auVar31,auVar37);
    auVar31 = aesenc(auVar31,auVar44);
    auVar31 = aesenc(auVar31,auVar30);
    auVar31 = aesenclast(auVar31,auVar38);
    *param_2 = auVar31;
    auVar31 = aesenc(param_2[1] ^ auVar33,auVar1);
    auVar31 = aesenc(auVar31,auVar34);
    auVar31 = aesenc(auVar31,auVar41);
    auVar31 = aesenc(auVar31,auVar27);
    auVar31 = aesenc(auVar31,auVar35);
    auVar31 = aesenc(auVar31,auVar42);
    auVar31 = aesenc(auVar31,auVar28);
    auVar31 = aesenc(auVar31,auVar36);
    auVar31 = aesenc(auVar31,auVar43);
    auVar31 = aesenc(auVar31,auVar29);
    auVar31 = aesenc(auVar31,auVar37);
    auVar31 = aesenc(auVar31,auVar44);
    auVar31 = aesenc(auVar31,auVar30);
    auVar31 = aesenclast(auVar31,auVar38);
    param_2[1] = auVar31;
    param_2 = param_2 + 2;
  }
  if (param_3 != 0) {
    auVar33 = aesenc(*param_2 ^ auVar33,auVar1);
    auVar33 = aesenc(auVar33,auVar34);
    auVar33 = aesenc(auVar33,auVar41);
    auVar33 = aesenc(auVar33,auVar27);
    auVar33 = aesenc(auVar33,auVar35);
    auVar33 = aesenc(auVar33,auVar42);
    auVar33 = aesenc(auVar33,auVar28);
    auVar33 = aesenc(auVar33,auVar36);
    auVar33 = aesenc(auVar33,auVar43);
    auVar33 = aesenc(auVar33,auVar29);
    auVar33 = aesenc(auVar33,auVar37);
    auVar33 = aesenc(auVar33,auVar44);
    auVar33 = aesenc(auVar33,auVar30);
    auVar33 = aesenclast(auVar33,auVar38);
    *param_2 = auVar33;
  }
  return;
}



// FUNCTION 14277a07e FUN_14277a07e body=1650 status=ok
// SIG undefined FUN_14277a07e(void)

/* WARNING: Removing unreachable block (ram,0x00014277a482) */
/* WARNING: Removing unreachable block (ram,0x00014277a473) */
/* WARNING: Removing unreachable block (ram,0x00014277a469) */
/* WARNING: Removing unreachable block (ram,0x00014277a442) */
/* WARNING: Removing unreachable block (ram,0x00014277a432) */
/* WARNING: Removing unreachable block (ram,0x00014277a427) */
/* WARNING: Removing unreachable block (ram,0x00014277a400) */
/* WARNING: Removing unreachable block (ram,0x00014277a3f1) */
/* WARNING: Removing unreachable block (ram,0x00014277a3e6) */
/* WARNING: Removing unreachable block (ram,0x00014277a3c0) */
/* WARNING: Removing unreachable block (ram,0x00014277a3b0) */
/* WARNING: Removing unreachable block (ram,0x00014277a3a5) */
/* WARNING: Removing unreachable block (ram,0x00014277a36d) */
/* WARNING: Removing unreachable block (ram,0x00014277a362) */
/* WARNING: Removing unreachable block (ram,0x00014277a357) */
/* WARNING: Removing unreachable block (ram,0x00014277a321) */
/* WARNING: Removing unreachable block (ram,0x00014277a316) */
/* WARNING: Removing unreachable block (ram,0x00014277a30b) */
/* WARNING: Removing unreachable block (ram,0x00014277a2d3) */
/* WARNING: Removing unreachable block (ram,0x00014277a2c8) */
/* WARNING: Removing unreachable block (ram,0x00014277a2bd) */
/* WARNING: Removing unreachable block (ram,0x00014277a286) */
/* WARNING: Removing unreachable block (ram,0x00014277a27b) */
/* WARNING: Removing unreachable block (ram,0x00014277a270) */
/* WARNING: Removing unreachable block (ram,0x00014277a239) */
/* WARNING: Removing unreachable block (ram,0x00014277a22e) */
/* WARNING: Removing unreachable block (ram,0x00014277a223) */
/* WARNING: Removing unreachable block (ram,0x00014277a1f1) */
/* WARNING: Removing unreachable block (ram,0x00014277a1e7) */
/* WARNING: Removing unreachable block (ram,0x00014277a1dc) */
/* WARNING: Removing unreachable block (ram,0x00014277a1a8) */
/* WARNING: Removing unreachable block (ram,0x00014277a19e) */
/* WARNING: Removing unreachable block (ram,0x00014277a194) */
/* WARNING: Removing unreachable block (ram,0x00014277a162) */
/* WARNING: Removing unreachable block (ram,0x00014277a159) */
/* WARNING: Removing unreachable block (ram,0x00014277a150) */
/* WARNING: Removing unreachable block (ram,0x00014277a115) */
/* WARNING: Removing unreachable block (ram,0x00014277a10c) */
/* WARNING: Removing unreachable block (ram,0x00014277a103) */

void FUN_14277a07e(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar26;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  ulonglong uVar29;
  
  auVar25 = *param_1;
  auVar31 = param_1[1];
  auVar14 = aesimc(auVar31);
  auVar15 = aeskeygenassist(auVar31,1);
  uVar26 = auVar15._12_4_;
  auVar16._4_4_ = uVar26;
  auVar16._0_4_ = uVar26;
  auVar16._8_4_ = uVar26;
  auVar16._12_4_ = uVar26;
  uVar29 = auVar25._0_8_;
  auVar30._0_8_ = uVar29 << 0x20;
  auVar30._8_8_ = auVar25._8_8_ << 0x20 | uVar29 >> 0x20;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar29;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar29 << 0x20;
  auVar16 = auVar15 << 0x40 ^ auVar30 ^ auVar27 << 0x40 ^ auVar25 ^ auVar16;
  auVar27 = aesimc(auVar16);
  auVar15 = aeskeygenassist(auVar16,0);
  auVar32._8_4_ = auVar15._8_4_;
  auVar32._4_4_ = auVar32._8_4_;
  auVar32._0_4_ = auVar32._8_4_;
  auVar32._12_4_ = auVar32._8_4_;
  uVar29 = auVar31._0_8_;
  auVar33._0_8_ = uVar29 << 0x20;
  auVar33._8_8_ = auVar31._8_8_ << 0x20 | uVar29 >> 0x20;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar29;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar29 << 0x20;
  auVar32 = auVar17 << 0x40 ^ auVar33 ^ auVar2 << 0x40 ^ auVar31 ^ auVar32;
  auVar15 = aesimc(auVar32);
  auVar31 = aeskeygenassist(auVar32,2);
  auVar34._12_4_ = auVar31._12_4_;
  auVar34._4_4_ = auVar34._12_4_;
  auVar34._0_4_ = auVar34._12_4_;
  auVar34._8_4_ = auVar34._12_4_;
  uVar29 = auVar16._0_8_;
  auVar35._0_8_ = uVar29 << 0x20;
  auVar35._8_8_ = auVar16._8_8_ << 0x20 | uVar29 >> 0x20;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar29;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar29 << 0x20;
  auVar34 = auVar31 << 0x40 ^ auVar35 ^ auVar3 << 0x40 ^ auVar16 ^ auVar34;
  auVar31 = aesimc(auVar34);
  auVar17 = aeskeygenassist(auVar34,0);
  uVar26 = auVar17._8_4_;
  auVar18._4_4_ = uVar26;
  auVar18._0_4_ = uVar26;
  auVar18._8_4_ = uVar26;
  auVar18._12_4_ = uVar26;
  uVar29 = auVar32._0_8_;
  auVar38._0_8_ = uVar29 << 0x20;
  auVar38._8_8_ = auVar32._8_8_ << 0x20 | uVar29 >> 0x20;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar29;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar29 << 0x20;
  auVar18 = auVar36 << 0x40 ^ auVar38 ^ auVar4 << 0x40 ^ auVar32 ^ auVar18;
  auVar17 = aesimc(auVar18);
  auVar36 = aeskeygenassist(auVar18,4);
  auVar39._12_4_ = auVar36._12_4_;
  auVar39._4_4_ = auVar39._12_4_;
  auVar39._0_4_ = auVar39._12_4_;
  auVar39._8_4_ = auVar39._12_4_;
  uVar29 = auVar34._0_8_;
  auVar40._0_8_ = uVar29 << 0x20;
  auVar40._8_8_ = auVar34._8_8_ << 0x20 | uVar29 >> 0x20;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar29;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar29 << 0x20;
  auVar39 = auVar37 << 0x40 ^ auVar40 ^ auVar5 << 0x40 ^ auVar34 ^ auVar39;
  auVar36 = aesimc(auVar39);
  auVar37 = aeskeygenassist(auVar39,0);
  auVar41._8_4_ = auVar37._8_4_;
  auVar41._4_4_ = auVar41._8_4_;
  auVar41._0_4_ = auVar41._8_4_;
  auVar41._12_4_ = auVar41._8_4_;
  uVar29 = auVar18._0_8_;
  auVar42._0_8_ = uVar29 << 0x20;
  auVar42._8_8_ = auVar18._8_8_ << 0x20 | uVar29 >> 0x20;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar29;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar29 << 0x20;
  auVar41 = auVar19 << 0x40 ^ auVar42 ^ auVar6 << 0x40 ^ auVar18 ^ auVar41;
  auVar37 = aesimc(auVar41);
  auVar19 = aeskeygenassist(auVar41,8);
  auVar43._12_4_ = auVar19._12_4_;
  auVar43._4_4_ = auVar43._12_4_;
  auVar43._0_4_ = auVar43._12_4_;
  auVar43._8_4_ = auVar43._12_4_;
  uVar29 = auVar39._0_8_;
  auVar44._0_8_ = uVar29 << 0x20;
  auVar44._8_8_ = auVar39._8_8_ << 0x20 | uVar29 >> 0x20;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar29;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar29 << 0x20;
  auVar43 = auVar20 << 0x40 ^ auVar44 ^ auVar7 << 0x40 ^ auVar39 ^ auVar43;
  auVar19 = aesimc(auVar43);
  auVar20 = aeskeygenassist(auVar43,0);
  uVar26 = auVar20._8_4_;
  auVar21._4_4_ = uVar26;
  auVar21._0_4_ = uVar26;
  auVar21._8_4_ = uVar26;
  auVar21._12_4_ = uVar26;
  uVar29 = auVar41._0_8_;
  auVar47._0_8_ = uVar29 << 0x20;
  auVar47._8_8_ = auVar41._8_8_ << 0x20 | uVar29 >> 0x20;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar29;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = uVar29 << 0x20;
  auVar21 = auVar45 << 0x40 ^ auVar47 ^ auVar8 << 0x40 ^ auVar41 ^ auVar21;
  auVar20 = aesimc(auVar21);
  auVar45 = aeskeygenassist(auVar21,0x10);
  auVar50._12_4_ = auVar45._12_4_;
  auVar50._4_4_ = auVar50._12_4_;
  auVar50._0_4_ = auVar50._12_4_;
  auVar50._8_4_ = auVar50._12_4_;
  uVar29 = auVar43._0_8_;
  auVar48._0_8_ = uVar29 << 0x20;
  auVar48._8_8_ = auVar43._8_8_ << 0x20 | uVar29 >> 0x20;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar29;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = uVar29 << 0x20;
  auVar50 = auVar46 << 0x40 ^ auVar48 ^ auVar9 << 0x40 ^ auVar43 ^ auVar50;
  auVar45 = aesimc(auVar50);
  auVar46 = aeskeygenassist(auVar50,0);
  auVar49._8_4_ = auVar46._8_4_;
  auVar49._4_4_ = auVar49._8_4_;
  auVar49._0_4_ = auVar49._8_4_;
  auVar49._12_4_ = auVar49._8_4_;
  uVar29 = auVar21._0_8_;
  auVar53._0_8_ = uVar29 << 0x20;
  auVar53._8_8_ = auVar21._8_8_ << 0x20 | uVar29 >> 0x20;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = uVar29 << 0x20;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar29;
  auVar49 = auVar55 << 0x40 ^ auVar53 ^ auVar10 << 0x40 ^ auVar21 ^ auVar49;
  auVar46 = aesimc(auVar49);
  uVar29 = auVar50._0_8_;
  auVar54._0_8_ = uVar29 << 0x20;
  auVar54._8_8_ = auVar50._8_8_ << 0x20 | uVar29 >> 0x20;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar29 << 0x20;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar29;
  auVar55 = aeskeygenassist(auVar49,0x20);
  auVar22._12_4_ = auVar55._12_4_;
  auVar22._4_4_ = auVar22._12_4_;
  auVar22._0_4_ = auVar22._12_4_;
  auVar22._8_4_ = auVar22._12_4_;
  auVar22 = auVar23 << 0x40 ^ auVar54 ^ auVar11 << 0x40 ^ auVar50 ^ auVar22;
  uVar29 = auVar49._0_8_;
  auVar51._0_8_ = uVar29 << 0x20;
  auVar51._8_8_ = auVar49._8_8_ << 0x20 | uVar29 >> 0x20;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar29 << 0x20;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar29;
  auVar55 = aeskeygenassist(auVar22,0);
  auVar56._8_4_ = auVar55._8_4_;
  auVar56._4_4_ = auVar56._8_4_;
  auVar56._0_4_ = auVar56._8_4_;
  auVar56._12_4_ = auVar56._8_4_;
  auVar56 = auVar24 << 0x40 ^ auVar51 ^ auVar12 << 0x40 ^ auVar49 ^ auVar56;
  uVar29 = auVar22._0_8_;
  auVar52._0_8_ = uVar29 << 0x20;
  auVar52._8_8_ = auVar22._8_8_ << 0x20 | uVar29 >> 0x20;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar29 << 0x20;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar29;
  auVar55 = aesimc(auVar22);
  auVar23 = aeskeygenassist(auVar56,0x40);
  auVar28._12_4_ = auVar23._12_4_;
  auVar28._4_4_ = auVar28._12_4_;
  auVar28._0_4_ = auVar28._12_4_;
  auVar28._8_4_ = auVar28._12_4_;
  auVar28 = auVar1 << 0x40 ^ auVar52 ^ auVar13 << 0x40 ^ auVar22 ^ auVar28;
  auVar23 = aesimc(auVar56);
  for (; 0x1f < param_3; param_3 = param_3 - 0x20) {
    auVar24 = aesdec(*param_2 ^ auVar28,auVar23);
    auVar24 = aesdec(auVar24,auVar55);
    auVar24 = aesdec(auVar24,auVar46);
    auVar24 = aesdec(auVar24,auVar45);
    auVar24 = aesdec(auVar24,auVar20);
    auVar24 = aesdec(auVar24,auVar19);
    auVar24 = aesdec(auVar24,auVar37);
    auVar24 = aesdec(auVar24,auVar36);
    auVar24 = aesdec(auVar24,auVar17);
    auVar24 = aesdec(auVar24,auVar31);
    auVar24 = aesdec(auVar24,auVar15);
    auVar24 = aesdec(auVar24,auVar27);
    auVar24 = aesdec(auVar24,auVar14);
    auVar24 = aesdeclast(auVar24,auVar25);
    *param_2 = auVar24;
    auVar24 = aesdec(param_2[1] ^ auVar28,auVar23);
    auVar24 = aesdec(auVar24,auVar55);
    auVar24 = aesdec(auVar24,auVar46);
    auVar24 = aesdec(auVar24,auVar45);
    auVar24 = aesdec(auVar24,auVar20);
    auVar24 = aesdec(auVar24,auVar19);
    auVar24 = aesdec(auVar24,auVar37);
    auVar24 = aesdec(auVar24,auVar36);
    auVar24 = aesdec(auVar24,auVar17);
    auVar24 = aesdec(auVar24,auVar31);
    auVar24 = aesdec(auVar24,auVar15);
    auVar24 = aesdec(auVar24,auVar27);
    auVar24 = aesdec(auVar24,auVar14);
    auVar24 = aesdeclast(auVar24,auVar25);
    param_2[1] = auVar24;
    param_2 = param_2 + 2;
  }
  if (param_3 != 0) {
    auVar23 = aesdec(*param_2 ^ auVar28,auVar23);
    auVar55 = aesdec(auVar23,auVar55);
    auVar46 = aesdec(auVar55,auVar46);
    auVar45 = aesdec(auVar46,auVar45);
    auVar20 = aesdec(auVar45,auVar20);
    auVar19 = aesdec(auVar20,auVar19);
    auVar37 = aesdec(auVar19,auVar37);
    auVar36 = aesdec(auVar37,auVar36);
    auVar17 = aesdec(auVar36,auVar17);
    auVar31 = aesdec(auVar17,auVar31);
    auVar31 = aesdec(auVar31,auVar15);
    auVar31 = aesdec(auVar31,auVar27);
    auVar31 = aesdec(auVar31,auVar14);
    auVar25 = aesdeclast(auVar31,auVar25);
    *param_2 = auVar25;
  }
  return;
}



// FUNCTION 14277a6f0 FUN_14277a6f0 body=92 status=ok
// SIG undefined FUN_14277a6f0(void)

/* WARNING: Removing unreachable block (ram,0x00014277a71b) */

void FUN_14277a6f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = FUN_142779032;
  PTR_FUN_14c759060 = FUN_142779032;
  PTR_FUN_14c759068 = FUN_14277947b;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) >> 0x19 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = FUN_142779a9a;
    PTR_FUN_14c759060 = FUN_142779a9a;
    PTR_FUN_14c759068 = FUN_14277a07e;
  }
                    /* WARNING: Could not recover jumptable at 0x00014277a749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}



// FUNCTION 14277a74c FUN_14277a74c body=92 status=ok
// SIG undefined FUN_14277a74c(void)

/* WARNING: Removing unreachable block (ram,0x00014277a777) */

void FUN_14277a74c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  PTR_FUN_14c759060 = FUN_142779032;
  UNRECOVERED_JUMPTABLE = FUN_14277947b;
  PTR_FUN_14c759068 = FUN_14277947b;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) >> 0x19 & 1) != 0) {
    PTR_FUN_14c759060 = FUN_142779a9a;
    UNRECOVERED_JUMPTABLE = FUN_14277a07e;
    PTR_FUN_14c759068 = FUN_14277a07e;
  }
                    /* WARNING: Could not recover jumptable at 0x00014277a7a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
  return;
}



// FUNCTION 14277a7dc FUN_14277a7dc body=49 status=ok
// SIG undefined FUN_14277a7dc(void)

void FUN_14277a7dc(void)

{
  longlong lVar1;
  
  lVar1 = 200;
  do {
    if (*(longlong *)((longlong)&DAT_14c866e20 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x20;
  } while (lVar1 != -0x18);
  return;
}



// FUNCTION 14277a80d FUN_14277a80d body=1102 status=ok
// SIG undefined FUN_14277a80d(void)

void FUN_14277a80d(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  undefined1 auStack_c8 [44];
  int local_9c;
  undefined8 local_98;
  uint local_8c;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  uint *local_70;
  uint *local_68;
  ulonglong local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar19 = *(uint *)(param_2 + 5);
  local_98 = param_1;
  if (uVar19 == 0) {
    uVar10 = 1;
    uVar11 = 0;
    iVar14 = 0;
    uVar2 = 0;
  }
  else {
    puVar4 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar4 = (uint *)(param_2 + 2);
    }
    uVar2 = *puVar4;
    if (uVar2 == 0) {
      iVar14 = uVar19 + 0x1e;
      if (-1 < (int)(uVar19 - 1)) {
        iVar14 = uVar19 - 1;
      }
      uVar11 = 0;
      uVar10 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar10 = uVar11;
      }
      iVar14 = 0;
      do {
        if (uVar10 == uVar11) goto LAB_14277a8c4;
        iVar14 = iVar14 + 0x20;
        uVar2 = puVar4[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar2 == 0);
    }
    else {
      uVar11 = 0;
      iVar14 = 0;
    }
    uVar10 = (ulonglong)(-uVar2 & uVar2);
    uVar15 = uVar10 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar2 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar19 <= (int)uVar2) {
      uVar2 = uVar19;
    }
  }
  if (uVar2 != uVar19) {
    uVar13 = 0xffffffff;
    local_88 = (ulonglong)uVar19;
    local_80 = param_2;
    local_68 = (uint *)(param_2 + 2);
    do {
      uVar1 = local_98;
      lVar17 = *local_80;
      lVar16 = lVar17 + (longlong)(int)uVar2 * 0xb8;
      uVar15 = 1;
      local_9c = iVar14;
      local_8c = uVar13;
      local_78 = uVar10;
      local_60 = uVar11;
      FUN_1400020e8(local_98,&DAT_149e2b508,1);
      puVar12 = (undefined8 *)(lVar17 + (longlong)(int)uVar2 * 0xb8);
      puVar4 = (uint *)(puVar12 + 4);
      iVar14 = *(int *)(puVar12 + 1) + -1;
      if (*(int *)(puVar12 + 1) == 0) {
        iVar14 = 0;
      }
      FUN_1400020e8(uVar1,*puVar12,iVar14);
      FUN_1400020e8(uVar1,&DAT_149e2a0ce,3);
      iVar14 = *(int *)(puVar12 + 7);
      uVar11 = 0;
      iVar20 = 0;
      iVar3 = 0;
      local_70 = puVar4;
      if (iVar14 != 0) {
        puVar5 = *(uint **)(lVar16 + 0x30);
        if (*(uint **)(lVar16 + 0x30) == (uint *)0x0) {
          puVar5 = puVar4;
        }
        uVar19 = *puVar5;
        if (uVar19 == 0) {
          iVar3 = iVar14 + 0x1e;
          if (-1 < iVar14 + -1) {
            iVar3 = iVar14 + -1;
          }
          uVar11 = 0;
          uVar10 = (ulonglong)(uint)(iVar3 >> 5);
          if (iVar3 >> 5 < 1) {
            uVar10 = 0;
          }
          iVar20 = 0;
          do {
            if (uVar10 == uVar11) goto LAB_14277aa0d;
            iVar20 = iVar20 + 0x20;
            uVar19 = puVar5[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar11 = 0;
        }
        uVar15 = (ulonglong)(-uVar19 & uVar19);
        uVar10 = uVar15 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar3 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar3) {
          iVar3 = iVar14;
        }
      }
      if (iVar3 != iVar14) {
        uVar19 = 0xffffffff;
        do {
          lVar17 = *(longlong *)(lVar16 + 0x10);
          if (*(char *)(lVar17 + 8 + (longlong)iVar3 * 0x40) != '\0') {
            puVar6 = (undefined2 *)FUN_1468069e6();
            FUN_140002184(local_98,*puVar6);
          }
          lVar17 = lVar17 + (longlong)iVar3 * 0x40;
          FUN_1400021e4(lVar17,local_58);
          FUN_140b7fba4(local_98,local_58,lVar17 + 0x10);
          if (local_58[0] != 0) {
            FUN_1400020a8();
          }
          uVar19 = uVar19 & ~(uint)uVar15;
          puVar4 = *(uint **)(lVar16 + 0x30);
          if (*(uint **)(lVar16 + 0x30) == (uint *)0x0) {
            puVar4 = local_70;
          }
          iVar7 = *(int *)(lVar16 + 0x38);
          iVar3 = (int)uVar11;
          lVar17 = (longlong)iVar3;
          uVar2 = puVar4[lVar17] & uVar19;
          if (uVar2 == 0) {
            iVar8 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar8 = iVar7 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar20 = iVar20 + 0x20;
            iVar9 = iVar8;
            if (iVar8 < iVar3) {
              iVar9 = iVar3;
            }
            if (iVar3 < iVar8) {
              lVar18 = 0;
              do {
                uVar2 = puVar4[lVar17 + lVar18 + 1];
                if (uVar2 != 0) {
                  uVar11 = (ulonglong)(iVar3 + (int)lVar18 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_14277abd0;
                }
                iVar20 = iVar20 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar9 - lVar17 != lVar18);
              uVar19 = 0xffffffff;
              lVar17 = (longlong)iVar9;
            }
            uVar11 = lVar17 + 1U & 0xffffffff;
            iVar3 = iVar7;
          }
          else {
LAB_14277abd0:
            uVar15 = (ulonglong)(-uVar2 & uVar2);
            uVar10 = uVar15 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar10 != 0) {
              for (; uVar10 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar3 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar7 <= iVar3) {
              iVar3 = iVar7;
            }
          }
        } while (iVar3 != iVar14);
      }
LAB_14277aa0d:
      FUN_1400020e8(local_98,&DAT_149e02010,2);
      uVar13 = local_8c & ~(uint)local_78;
      puVar4 = (uint *)local_80[4];
      if ((uint *)local_80[4] == (uint *)0x0) {
        puVar4 = local_68;
      }
      uVar19 = *(uint *)(local_80 + 5);
      iVar3 = (int)local_60;
      lVar16 = (longlong)iVar3;
      uVar2 = puVar4[lVar16] & uVar13;
      uVar11 = local_60;
      iVar14 = local_9c;
      if (uVar2 == 0) {
        iVar20 = uVar19 + 0x1e;
        if (-1 < (int)(uVar19 - 1)) {
          iVar20 = uVar19 - 1;
        }
        iVar20 = iVar20 >> 5;
        iVar14 = local_9c + 0x20;
        iVar7 = iVar20;
        if (iVar20 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar3 < iVar20) {
          lVar17 = 0;
          do {
            uVar2 = puVar4[lVar16 + lVar17 + 1];
            if (uVar2 != 0) {
              uVar13 = 0xffffffff;
              uVar11 = (ulonglong)(iVar3 + (int)lVar17 + 1);
              goto LAB_14277aabe;
            }
            iVar14 = iVar14 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar7 - lVar16 != lVar17);
          uVar13 = 0xffffffff;
          iVar3 = iVar7;
        }
        uVar11 = (ulonglong)(iVar3 + 1);
        uVar10 = local_78;
        uVar2 = uVar19;
      }
      else {
LAB_14277aabe:
        uVar10 = (ulonglong)(-uVar2 & uVar2);
        uVar15 = uVar10 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar2 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)uVar19 <= (int)uVar2) {
          uVar2 = uVar19;
        }
      }
    } while (uVar2 != (uint)local_88);
  }
LAB_14277a8c4:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14277ac86 FUN_14277ac86 body=150 status=ok
// SIG undefined FUN_14277ac86(void)

undefined8 FUN_14277ac86(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)param_2[1];
  lVar6 = (longlong)iVar8;
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = 0;
  iVar7 = uVar3 - 1;
  if (uVar3 == 0) {
    iVar7 = 0;
  }
  if (((iVar7 != iVar8) || (uVar4 = 1, iVar8 == 0)) || (uVar3 < 2)) {
    return uVar4;
  }
  lVar5 = 0;
  do {
    uVar1 = *(ushort *)(*param_1 + lVar5);
    uVar2 = *(ushort *)(*param_2 + lVar5);
    if (uVar1 == uVar2) {
      iVar8 = 0;
      if ((uVar1 == 0) || (lVar6 == 1)) goto LAB_14277ad07;
    }
    else {
      if (0x7f < (uVar2 | uVar1)) {
        iVar8 = (uint)uVar1 - (uint)uVar2;
LAB_14277ad07:
        return CONCAT71((int7)((ulonglong)*param_2 >> 8),iVar8 == 0);
      }
      if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
        iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
        goto LAB_14277ad07;
      }
      if (lVar6 == 1) {
        iVar8 = 0;
        goto LAB_14277ad07;
      }
    }
    lVar6 = lVar6 + -1;
    lVar5 = lVar5 + 2;
  } while( true );
}



// FUNCTION 14277ad1c FUN_14277ad1c body=31 status=ok
// SIG undefined FUN_14277ad1c(void)

void FUN_14277ad1c(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x70)) {
    *(undefined4 *)(param_1 + 0x74) = 7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14277ad3c FUN_14277ad3c body=68 status=ok
// SIG undefined FUN_14277ad3c(void)

void FUN_14277ad3c(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1406e1ba4(param_1);
  return;
}



// FUNCTION 14277ad80 FUN_14277ad80 body=62 status=ok
// SIG undefined FUN_14277ad80(void)

void FUN_14277ad80(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_14277ada0:
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_145739f16(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_14277ada0;
  return;
}



// FUNCTION 14277adbe FUN_14277adbe body=1371 status=ok
// SIG undefined FUN_14277adbe(void)

void FUN_14277adbe(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  longlong *_Src;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined1 local_e8 [16];
  longlong *local_d8;
  uint local_d0;
  undefined4 local_cc;
  wchar_t *local_c8;
  undefined4 local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (DAT_14c866f04 != '\x01') goto LAB_14277b2da;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_140009b9a(&local_c8,param_1);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(&local_98,&local_c8);
  FUN_140056680(&local_d8,L"OldValue");
  FUN_140233eec(&local_b8,&local_d8,&local_a8);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
    local_98 = (longlong *)0x0;
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8 + 0x10))();
  }
  FUN_140009b9a(&local_c8,param_2);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(&local_98,&local_c8);
  FUN_140056680(&local_d8,L"NewValue");
  FUN_140233eec(&local_b8,&local_d8,&local_a8);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
    local_98 = (longlong *)0x0;
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8 + 0x10))();
  }
  FUN_140009b9a(&local_c8,param_3);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(&local_98,&local_c8);
  FUN_140056680(&local_d8,L"File");
  FUN_140233eec(&local_b8,&local_d8,&local_a8);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
    local_98 = (longlong *)0x0;
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8 + 0x10))();
  }
  local_a8 = L"DeprecatedConfig";
  local_a0 = 0x10;
  FUN_1446e940c(local_ec,&local_a8);
  local_a8 = L"ConfigCache";
  local_a0 = 0xb;
  FUN_1446e940c(local_f0,&local_a8);
  local_a8 = 
  L"Found a deprecated ini section name in {File}. Search for [{OldValue}] and replace with [{NewValue}]"
  ;
  local_a0 = 100;
  FUN_140208c1e(&local_d8,local_f0,local_ec,&local_a8);
  FUN_14023409e(local_e8,&local_d8,1);
  FUN_140233c04(&local_c8,local_e8,&local_b8);
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
  }
  local_d8 = (longlong *)0x0;
  local_d0 = *(uint *)(param_1 + 1);
  lVar6 = (longlong)(int)local_d0;
  pvVar2 = (void *)*param_1;
  if (lVar6 == 0) {
    local_cc = 0;
  }
  else {
    FUN_1446dd670(&local_d8,local_d0,0);
    memcpy(local_d8,pvVar2,lVar6 * 2);
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14277b29e;
    }
    local_a8 = local_c8;
    if (local_c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 8))();
    }
    _Src = local_d8;
    local_a0 = local_c0;
    local_98 = (longlong *)0x0;
    lVar6 = (longlong)(int)local_d0;
    local_90 = CONCAT44(local_90._4_4_,local_d0);
    if (lVar6 == 0) {
      local_90 = (ulonglong)local_d0;
    }
    else {
      FUN_1446dd670(&local_98,local_d0,0);
      memcpy(local_98,_Src,lVar6 * 2);
    }
    local_88 = (void *)0x0;
    local_80 = *(int *)(param_3 + 1);
    lVar6 = (longlong)local_80;
    pvVar2 = (void *)*param_3;
    if (lVar6 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_80,0);
      memcpy(local_88,pvVar2,lVar6 * 2);
    }
    local_78[0] = (undefined *)0x0;
    puVar5 = (undefined8 *)FUN_14001cc68(0x38,8);
    *puVar5 = &PTR_LAB_149e2b300;
    local_68 = puVar5;
    FUN_14023423e(puVar5 + 1,&local_a8);
    pvVar2 = local_88;
    puVar5[3] = local_98;
    local_98 = (longlong *)0x0;
    *(undefined4 *)(puVar5 + 4) = (undefined4)local_90;
    *(undefined4 *)((longlong)puVar5 + 0x24) = local_90._4_4_;
    local_90 = 0;
    puVar5[5] = 0;
    lVar6 = (longlong)local_80;
    *(int *)(puVar5 + 6) = local_80;
    if (lVar6 == 0) {
      *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
    }
    else {
      FUN_1446dd670(puVar5 + 5,local_80,0);
      memcpy((void *)puVar5[5],pvVar2,lVar6 * 2);
    }
    if (puVar5 + 1 != (undefined8 *)0x0) {
      local_78[0] = &DAT_14277b8d4;
    }
    FUN_1407461b0(1,local_78);
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
  }
LAB_14277b29e:
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8 + 0x10))();
  }
  FUN_14010f8af(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
LAB_14277b2da:
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14277b31a FUN_14277b31a body=1465 status=ok
// SIG undefined FUN_14277b31a(void)

void FUN_14277b31a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  void *pvVar2;
  longlong *_Src;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined1 local_e8 [16];
  longlong *local_d8;
  uint local_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined *local_78 [2];
  undefined8 *local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_140009b9a(&local_c8,param_1);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(&local_98,&local_c8);
  FUN_140056680(&local_d8,L"OldValue");
  FUN_140233eec(&local_b8,&local_d8,&local_a8);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
    local_98 = (longlong *)0x0;
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8 + 0x10))();
  }
  FUN_140009b9a(&local_c8,param_2);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(&local_98,&local_c8);
  FUN_140056680(&local_d8,L"NewValue");
  FUN_140233eec(&local_b8,&local_d8,&local_a8);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
    local_98 = (longlong *)0x0;
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8 + 0x10))();
  }
  FUN_140009b9a(&local_c8,param_3);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(&local_98,&local_c8);
  FUN_140056680(&local_d8,L"Section");
  FUN_140233eec(&local_b8,&local_d8,&local_a8);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
    local_98 = (longlong *)0x0;
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8 + 0x10))();
  }
  FUN_140009b9a(&local_c8,param_4);
  local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
  FUN_14023423e(&local_98,&local_c8);
  FUN_140056680(&local_d8,L"File");
  FUN_140233eec(&local_b8,&local_d8,&local_a8);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
    local_98 = (longlong *)0x0;
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8 + 0x10))();
  }
  local_a8 = L"DeprecatedConfigKey";
  local_a0 = 0x13;
  FUN_1446e940c(local_ec,&local_a8);
  local_a8 = L"ConfigCache";
  local_a0 = 0xb;
  FUN_1446e940c(local_f0,&local_a8);
  local_a8 = 
  L"Found a deprecated ini key name in {File}. Search for [{OldValue}] and replace with [{NewValue}]"
  ;
  local_a0 = 0x60;
  FUN_140208c1e(&local_d8,local_f0,local_ec,&local_a8);
  FUN_14023409e(local_e8,&local_d8,1);
  FUN_140233c04(&local_c8,local_e8,&local_b8);
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
  }
  FUN_140474144(&local_d8,param_1,param_3);
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14277b856;
    }
    local_a8 = local_c8;
    if (local_c8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_c8 + 8))();
    }
    _Src = local_d8;
    local_a0 = local_c0;
    local_98 = (longlong *)0x0;
    local_90 = CONCAT44(local_90._4_4_,local_d0);
    if ((longlong)(int)local_d0 == 0) {
      local_90 = (ulonglong)local_d0;
    }
    else {
      FUN_1446dd670(&local_98,local_d0,0);
      memcpy(local_98,_Src,(longlong)(int)local_d0 * 2);
    }
    local_88 = (void *)0x0;
    local_80 = *(int *)(param_4 + 1);
    lVar6 = (longlong)local_80;
    pvVar2 = (void *)*param_4;
    if (lVar6 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_80,0);
      memcpy(local_88,pvVar2,lVar6 * 2);
    }
    local_78[0] = (undefined *)0x0;
    puVar5 = (undefined8 *)FUN_14001cc68(0x38,8);
    *puVar5 = &PTR_LAB_149e2b420;
    local_68 = puVar5;
    FUN_14023423e(puVar5 + 1,&local_a8);
    pvVar2 = local_88;
    puVar5[3] = local_98;
    local_98 = (longlong *)0x0;
    *(undefined4 *)(puVar5 + 4) = (undefined4)local_90;
    *(undefined4 *)((longlong)puVar5 + 0x24) = local_90._4_4_;
    local_90 = 0;
    puVar5[5] = 0;
    lVar6 = (longlong)local_80;
    *(int *)(puVar5 + 6) = local_80;
    if (lVar6 == 0) {
      *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
    }
    else {
      FUN_1446dd670(puVar5 + 5,local_80,0);
      memcpy((void *)puVar5[5],pvVar2,lVar6 * 2);
    }
    if (puVar5 + 1 != (undefined8 *)0x0) {
      local_78[0] = &DAT_14277b954;
    }
    FUN_1407461b0(1,local_78);
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
  }
LAB_14277b856:
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8 + 0x10))();
  }
  FUN_14010f8af(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14277b8e0 FUN_14277b8e0 body=29 status=ok
// SIG undefined FUN_14277b8e0(void)

void FUN_14277b8e0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14277b8fe FUN_14277b8fe body=86 status=ok
// SIG undefined FUN_14277b8fe(void)

undefined8 * FUN_14277b8fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e2b300;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14277b960 FUN_14277b960 body=29 status=ok
// SIG undefined FUN_14277b960(void)

void FUN_14277b960(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14277b97e FUN_14277b97e body=86 status=ok
// SIG undefined FUN_14277b97e(void)

undefined8 * FUN_14277b97e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e2b420;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14277b9df FUN_14277b9df body=1645 status=ok
// SIG undefined FUN_14277b9df(void)

/* WARNING: Removing unreachable block (ram,0x00014277ba2b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14277b9df(void)

{
  longlong lVar1;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_db;
  undefined2 local_da;
  undefined1 local_d7;
  undefined2 local_d6;
  undefined1 local_d3;
  undefined2 local_d2;
  undefined1 local_cf;
  undefined2 local_ce;
  undefined1 local_cb;
  undefined2 local_ca;
  undefined1 local_c7;
  undefined2 local_c6;
  undefined1 local_c3;
  undefined2 local_c2;
  undefined2 **local_c0;
  ulonglong *local_b8;
  undefined2 *local_b0;
  undefined1 *local_a8;
  undefined2 *local_a0;
  undefined1 *local_98;
  undefined2 *local_90;
  undefined1 *local_88;
  undefined2 *local_80;
  undefined1 *local_78;
  undefined2 *local_70;
  undefined1 *local_68;
  undefined2 *local_60;
  undefined1 *local_58;
  undefined2 *local_50;
  undefined1 *local_48;
  ulonglong local_40 [3];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_108;
  PTR_FUN_14c759060 = FUN_142779032;
  PTR_FUN_14c759068 = FUN_14277947b;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) >> 0x19 & 1) != 0) {
    PTR_FUN_14c759060 = FUN_142779a9a;
    PTR_FUN_14c759068 = FUN_14277a07e;
  }
  FUN_145ec3992(*(uint *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 4));
  FUN_146821e1c(&DAT_14c867020,&DAT_14c8465bc);
  DAT_14c867030 = 0;
  _DAT_14c867038 = 0;
  atexit((_func_5014 *)&LAB_142770a14);
  DAT_14c867000 = 0;
  _DAT_14c867008 = 0;
  atexit((_func_5014 *)&LAB_142770a25);
  DAT_14c846528 = 0;
  uRam000000014c846530 = 0;
  atexit((_func_5014 *)&LAB_142770a36);
  DAT_14c867010 = 0;
  _DAT_14c867018 = 0;
  atexit(FUN_142770a47);
  DAT_14c846568 = 0;
  atexit((_func_5014 *)&LAB_142770a78);
  local_e8 = 0;
  FUN_141471170(&DAT_14c8465d0,L"core.EnsuresAreErrors",&DAT_14c759080,
                L"True means failed ensures are logged as errors. False means they are logged as warnings."
               );
  atexit(FUN_142770b3e);
  local_e8 = 0;
  FUN_14153156c(&DAT_14c8465e0,L"core.EnsureAlwaysEnabled",&DAT_14c759084,
                L"Set to false to turn ensureAlways into regular ensure");
  atexit(FUN_142770b83);
  local_e8 = 0;
  FUN_14153156c(&DAT_14c8465f8,L"Automation.CaptureLogEvents",&DAT_14c759085,
                L"Consider warning/error log events during a test as impacting the test itself");
  atexit(FUN_142770bc8);
  local_e8 = 0;
  FUN_14153156c(&DAT_14c846608,L"Automation.SkipStackWalk",&DAT_14c846618,
                L"Whether to skip any stack issues that the automation test framework triggers");
  atexit(FUN_142770c0d);
  local_e8 = 0;
  FUN_14153156c(&DAT_14c846620,L"Automation.LogBPTestMetadata",&DAT_14c846630,
                L"Whether to output blueprint functional test metadata to the log when test is running"
               );
  atexit(FUN_142770c52);
  local_e8 = 0;
  FUN_14153156c(&DAT_14c846638,L"Automation.LogTestStateTrace",&DAT_14c846648,
                L"Whether to enable or disable logging of test state trace");
  atexit(FUN_142770c97);
  local_e8 = 0;
  FUN_14153156c(&DAT_14c846650,L"Automation.EnableStereoTestVariants",&DAT_14c846660,
                L"Whether to enable stereo test variants for screenshot functional tests");
  atexit(FUN_142770cdc);
  local_e8 = 0;
  FUN_14153156c(&DAT_14c846668,L"Automation.LightweightStereoTestVariants",&DAT_14c759086,
                L"Whether to skip variants when the baseline test fails, and skip saving screenshots for successful variants"
               );
  atexit(FUN_142770d21);
  FUN_1400b22c2(&DAT_14c846678,&DAT_149e02088);
  atexit((_func_5014 *)&LAB_142770d66);
  local_e8 = 0;
  FUN_141707242(&DAT_14c846688,L"Automation.TestTagGlobalFilter",&DAT_14c846678,
                L"Only include tests marked with Tags matching this filter string, using the Advanced Search Syntax"
               );
  atexit(FUN_142770d77);
  DAT_14c8466a0 = 0;
  _DAT_14c8466a8 = 0;
  atexit(FUN_142770fc0);
  DAT_14c866b58 = 0;
  DAT_14c866b60 = 0;
  DAT_14c866b38 = 0;
  _DAT_14c866b40 = 0;
  _DAT_14c866b64 = 0xffffffff00000080;
  DAT_14c866b6c = 0;
  DAT_14c866b78 = 0;
  DAT_14c866b80 = 0;
  atexit(FUN_142772e7f);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c866b88);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c866b88,4000);
  atexit((_func_5014 *)&LAB_142772ea8);
  FUN_140056680(&DAT_14c866bd8,L"CurrentIniVersion");
  atexit((_func_5014 *)&LAB_142773478);
  FUN_1446f470e(&DAT_14c866be8,L"Version",1);
  FUN_140056680(&DAT_14c866bf0,L"SectionsToSave");
  atexit((_func_5014 *)&LAB_142773489);
  _DAT_14c866c20 = 0;
  _DAT_14c866c28 = 0;
  _DAT_14c866c00 = 0;
  uRam000000014c866c08 = 0;
  _DAT_14c866c2c = 0xffffffff00000080;
  _DAT_14c866c34 = 0;
  DAT_14c866c40 = 0;
  _DAT_14c866c48 = 0;
  atexit(FUN_14277349a);
  DAT_14c866c70 = 0;
  DAT_14c866c78 = 0;
  DAT_14c866c50 = 0;
  _DAT_14c866c58 = 0;
  _DAT_14c866c7c = 0xffffffff00000080;
  DAT_14c866c84 = 0;
  DAT_14c866c90 = 0;
  DAT_14c866c98 = 0;
  atexit(FUN_1427734c9);
  local_b0 = &local_c2;
  local_c2 = 0;
  local_a8 = &local_c3;
  local_c3 = 0;
  local_c0 = &local_b0;
  local_a0 = &local_c6;
  local_c6 = 0x2d;
  local_98 = &local_c7;
  local_c7 = 3;
  local_90 = &local_ca;
  local_ca = 0x2b;
  local_88 = &local_cb;
  local_cb = 2;
  local_80 = &local_ce;
  local_ce = 0x2e;
  local_78 = &local_cf;
  local_cf = 1;
  local_70 = &local_d2;
  local_d2 = 0x21;
  local_68 = &local_d3;
  local_d3 = 4;
  local_60 = &local_d6;
  local_d6 = 0x40;
  local_58 = &local_d7;
  local_d7 = 5;
  local_50 = &local_da;
  local_da = 0x2a;
  local_48 = &local_db;
  local_db = 6;
  local_b8 = local_40;
  FUN_145bf067e();
  atexit(FUN_1427734f2);
  local_b0 = (undefined2 *)((ulonglong)local_b0 & 0xffffffff00000000);
  local_e8 = 0;
  FUN_14078dbce(&DAT_14c866cf0,L"ini.UseNewDynamicLayers",&local_b0,
                L"If true, use the new dynamic layers that load/unload, with GameFeatures and Hotfixes"
               );
  atexit(FUN_14277351b);
  local_e8 = 0;
  FUN_141471170(&DAT_14c866d08,L"ini.UseNewSaveTracking",&DAT_14c866d18,
                L"If true, use the new method for tracking modifications to GConfig when saving");
  atexit(FUN_142773560);
  local_e8 = 0;
  FUN_141471170(&DAT_14c866d20,L"ini.TimeToUnloadConfig",&DAT_14c866d30,
                L"If > 0, when a config branch hasn\'t been accessed in this many seconds, SafeUnload the branch"
               );
  atexit(FUN_1427735a5);
  FUN_145880e80(&DAT_14c866d60,L"{PROJECT}Config/BinaryConfig.ini");
  atexit((_func_5014 *)&LAB_142777910);
  DAT_14c866fa0 = 0;
  _DAT_14c866fa8 = 0;
  DAT_14c866f80 = 0;
  _DAT_14c866f88 = 0;
  _DAT_14c866fac = 0xffffffff00000080;
  DAT_14c866fb4 = 0;
  DAT_14c866fc0 = 0;
  DAT_14c866fc8 = 0;
  atexit(FUN_142778fe5);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c866f58);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c866f58,4000);
  atexit((_func_5014 *)&LAB_14277900e);
  InitializeSRWLock((PSRWLOCK)&DAT_14c866fe8);
  FUN_14118b488(&DAT_14c866db8);
  _DAT_14c866db8 = &PTR_FUN_149e2a400;
  atexit((_func_5014 *)&LAB_14277901c);
  if ((local_40[0] ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14277c0a6 FUN_14277c0a6 body=1353 status=ok
// SIG undefined FUN_14277c0a6(void)

uint FUN_14277c0a6(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  void *_Src;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_198 [43];
  undefined1 local_16d;
  int local_16c;
  longlong local_168;
  uint local_15c;
  longlong local_158;
  uint *local_150;
  ulonglong local_148;
  undefined8 *local_140;
  undefined1 *local_138;
  int local_12c;
  undefined1 local_128 [44];
  undefined8 local_fc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_ac;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_77;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_168 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c867090) && (FUN_144b3d300(&DAT_14c867090), DAT_14c867090 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    FUN_14054d46e(&DAT_14c846b20,L"dumpiniloads");
    _Init_thread_footer(&DAT_14c867090);
    param_1 = local_168;
  }
  lVar18 = *(longlong *)(param_1 + 0x10);
  uVar14 = *(uint *)(lVar18 + 0x70);
  if (uVar14 == 0) {
    uVar15 = 1;
    uVar12 = 0;
    iVar16 = 0;
    uVar4 = 0;
  }
  else {
    puVar5 = *(uint **)(lVar18 + 0x68);
    if (*(uint **)(lVar18 + 0x68) == (uint *)0x0) {
      puVar5 = (uint *)(lVar18 + 0x58);
    }
    uVar4 = *puVar5;
    if (uVar4 == 0) {
      iVar16 = uVar14 + 0x1e;
      if (-1 < (int)(uVar14 - 1)) {
        iVar16 = uVar14 - 1;
      }
      uVar12 = 0;
      uVar15 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar15 = uVar12;
      }
      iVar16 = 0;
      do {
        if (uVar15 == uVar12) goto LAB_14277c188;
        iVar16 = iVar16 + 0x20;
        uVar4 = puVar5[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar12 = 0;
      iVar16 = 0;
    }
    uVar15 = (ulonglong)(-uVar4 & uVar4);
    uVar2 = uVar15 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar4 = (iVar16 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if ((int)uVar14 <= (int)uVar4) {
      uVar4 = uVar14;
    }
  }
  if (uVar4 == uVar14) {
LAB_14277c188:
    uVar14 = 0;
  }
  else {
    uVar17 = 0xffffffff;
    local_15c = 0;
    local_158 = lVar18;
    local_150 = (uint *)(lVar18 + 0x58);
    local_148 = (ulonglong)uVar14;
    do {
      lVar7 = *(longlong *)(lVar18 + 0x48);
      lVar6 = (longlong)(int)uVar4 * 0x20;
      puVar13 = (undefined8 *)(lVar7 + lVar6 + 8);
      piVar1 = (int *)(lVar7 + lVar6);
      iVar11 = *(int *)(lVar7 + lVar6);
      local_16c = iVar16;
      lVar7 = FUN_1449da4c4(&DAT_14c872ff0);
      if ((lVar7 == 0) || (*(char *)(lVar7 + 0x28) == '\x01')) {
        puVar10 = &DAT_149dfb77a;
        if (piVar1[4] != 0) {
          puVar10 = (undefined2 *)*puVar13;
        }
        cVar3 = FUN_1427735ea(puVar10);
        if (cVar3 != '\0') goto LAB_14277c219;
      }
      else {
LAB_14277c219:
        iVar16 = *piVar1;
        lVar18 = *(longlong *)(param_1 + 0x10);
        if (*(char *)(lVar18 + 0x42) == '\x01') {
          lVar7 = lVar18 + 0x1d8;
LAB_14277c270:
          FUN_140fa61d5(lVar7,puVar13,iVar11 != 0);
          param_1 = local_168;
        }
        else {
          if (*(char *)(lVar18 + 0x42) != '\0') {
            lVar7 = *(longlong *)(local_168 + 8);
            if (lVar7 == 0) {
              lVar7 = lVar18 + 0x450;
            }
            goto LAB_14277c270;
          }
          local_16d = iVar11 != 0;
          memset(local_128,0,0xb8);
          local_fc = 0xffffffff00000080;
          local_b8 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_ac = 0xffffffff00000080;
          local_77 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_70 = 0;
          uStack_68 = 0;
          local_138 = local_128;
          local_140 = puVar13;
          FUN_146813b62(lVar18 + 0xa0,&local_12c,&local_140);
          lVar18 = *(longlong *)(lVar18 + 0xa0) + (longlong)local_12c * 0xe0 + 0x10;
          FUN_14626ac20(local_128);
          FUN_14618f915(lVar18,puVar13,local_16d);
          param_1 = local_168;
          FUN_1406dfe24(*(longlong *)(local_168 + 0x10) + 0x1d8,lVar18);
        }
        local_15c = CONCAT31((int3)(local_15c >> 8),(byte)local_15c | iVar16 != 0);
        lVar7 = *(longlong *)(param_1 + 0xe0);
        lVar18 = local_158;
        if ((lVar7 != 0) && (*(char *)(lVar7 + 1) == '\x01')) {
          iVar16 = *(int *)(lVar7 + 0x60);
          *(uint *)(lVar7 + 0x60) = iVar16 + 1U;
          if (*(uint *)(lVar7 + 100) < iVar16 + 1U) {
            FUN_1447a1bd6((longlong *)(lVar7 + 0x58),iVar16);
          }
          lVar18 = *(longlong *)(lVar7 + 0x58);
          lVar7 = (longlong)iVar16 * 0x10;
          puVar13 = (undefined8 *)(lVar18 + lVar7);
          *(undefined8 *)(lVar18 + lVar7) = 0;
          iVar16 = piVar1[4];
          _Src = *(void **)(piVar1 + 2);
          *(int *)(lVar18 + 8 + lVar7) = iVar16;
          if ((longlong)iVar16 == 0) {
            *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
            param_1 = local_168;
            lVar18 = local_158;
          }
          else {
            FUN_1446dd670(puVar13,iVar16,0);
            memcpy((void *)*puVar13,_Src,(longlong)iVar16 * 2);
            param_1 = local_168;
            lVar18 = local_158;
          }
        }
      }
      uVar17 = uVar17 & ~(uint)uVar15;
      puVar5 = *(uint **)(lVar18 + 0x68);
      if (*(uint **)(lVar18 + 0x68) == (uint *)0x0) {
        puVar5 = local_150;
      }
      uVar14 = *(uint *)(lVar18 + 0x70);
      iVar11 = (int)uVar12;
      lVar7 = (longlong)iVar11;
      uVar4 = puVar5[lVar7] & uVar17;
      iVar16 = local_16c;
      if (uVar4 == 0) {
        iVar8 = uVar14 + 0x1e;
        if (-1 < (int)(uVar14 - 1)) {
          iVar8 = uVar14 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar16 = local_16c + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar11) {
          iVar9 = iVar11;
        }
        if (iVar11 < iVar8) {
          lVar6 = 0;
          do {
            uVar4 = puVar5[lVar7 + lVar6 + 1];
            if (uVar4 != 0) {
              uVar12 = (ulonglong)(iVar11 + (int)lVar6 + 1);
              uVar17 = 0xffffffff;
              goto LAB_14277c39d;
            }
            iVar16 = iVar16 + 0x20;
            lVar6 = lVar6 + 1;
          } while (iVar9 - lVar7 != lVar6);
          uVar17 = 0xffffffff;
          iVar11 = iVar9;
        }
        uVar12 = (ulonglong)(iVar11 + 1);
        param_1 = local_168;
        lVar18 = local_158;
        uVar4 = uVar14;
      }
      else {
LAB_14277c39d:
        uVar15 = (ulonglong)(-uVar4 & uVar4);
        uVar2 = uVar15 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar4 = (iVar16 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if ((int)uVar14 <= (int)uVar4) {
          uVar4 = uVar14;
        }
      }
    } while (uVar4 != (uint)local_148);
    lVar18 = *(longlong *)(param_1 + 0x10);
    uVar14 = local_15c;
  }
  if (*(char *)(lVar18 + 0x42) == '\x02') {
    FUN_14277389c(lVar18 + 0x450);
  }
  else {
    FUN_14277389c(lVar18 + 0x1d8);
    FUN_140d7b3ae(*(longlong *)(param_1 + 0x10) + 0x450,*(longlong *)(param_1 + 0x10) + 0x1d8);
    *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x520) = *(longlong *)(param_1 + 0x10) + 0x110;
  }
  FUN_140d7b3ae(*(longlong *)(param_1 + 0x10) + 0x2b0,*(longlong *)(param_1 + 0x10) + 0x450);
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar14 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14277c5f0 FUN_14277c5f0 body=3704 status=ok
// SIG undefined FUN_14277c5f0(void)

void FUN_14277c5f0(longlong param_1,longlong *param_2)

{
  wchar_t *_Str;
  wchar_t *_Str_00;
  void *_Src;
  void **_Src_00;
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  size_t sVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  void ***pppvVar15;
  undefined8 **ppuVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  ushort uVar19;
  undefined **ppuVar20;
  ulonglong uVar21;
  ushort uVar22;
  longlong lVar23;
  uint uVar24;
  undefined2 *puVar25;
  longlong lVar26;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  longlong local_128;
  longlong *local_120;
  ulonglong local_118;
  uint local_10c;
  int local_108;
  int local_104;
  ulonglong local_100;
  undefined8 *local_f8;
  void **local_f0;
  undefined **local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  void **local_c8 [2];
  void **local_b8;
  int local_b0;
  void **local_a8;
  int local_a0;
  int local_9c;
  undefined8 **local_98;
  void ***pppvStack_90;
  undefined8 **local_88;
  uint local_80;
  int local_7c;
  longlong local_78 [2];
  int local_64;
  undefined8 **local_60;
  undefined8 local_58;
  undefined1 local_4c [12];
  
  local_4c._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar3 = *(int *)(param_1 + 0x88) + -1;
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar3 = 0;
  }
  local_120 = param_2;
  FUN_1402980a2(*(longlong *)(param_1 + 0x10) + 0x20,*(undefined8 *)(param_1 + 0x80),iVar3);
  iVar3 = *(int *)(param_1 + 0xa8) + -1;
  if (*(int *)(param_1 + 0xa8) == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(*(longlong *)(param_1 + 0x10) + 0x30,*(undefined8 *)(param_1 + 0xa0),iVar3);
  FUN_140056680(local_78,&DAT_149dfb77a);
  lVar6 = FUN_142778ef2();
  if (*(char *)(param_1 + 0x187) == '\x01') {
    local_100 = (ulonglong)((*(byte *)(param_1 + 0x188) ^ 1) * 4 + 2);
    ppuVar20 = (undefined **)&DAT_149e2ba10;
    if (*(byte *)(param_1 + 0x188) != 0) {
      ppuVar20 = &PTR_u_PluginMod_149e2b9e0;
    }
    local_10c = 4;
  }
  else {
    local_10c = 2;
    ppuVar20 = (undefined **)&DAT_149e2b750;
    local_100 = 0xd;
  }
  if (0 < (int)*(uint *)(param_1 + 0x178)) {
    ppuVar20 = *(undefined ***)(param_1 + 0x170);
    local_100 = (ulonglong)*(uint *)(param_1 + 0x178);
  }
  local_108 = *(int *)(lVar6 + 8);
  local_f8 = (undefined8 *)(param_1 + 0x30);
  uVar18 = 0;
  local_128 = param_1;
  local_e8 = ppuVar20;
  iVar3 = local_108;
  do {
    if ((1 < iVar3) || (((ulonglong)ppuVar20[uVar18 * 3 + 2] & 0x20) == 0)) {
      puVar25 = &DAT_149dfb77a;
      if (*(int *)(param_1 + 0x68) != 0) {
        puVar25 = *(undefined2 **)(param_1 + 0x60);
      }
      FUN_140056680(&local_60,ppuVar20[uVar18 * 3 + 1]);
      FUN_14277d46a(&local_88,&local_60,puVar25);
      if ((void ***)local_60 != (void ***)0x0) {
        FUN_1400020a8();
      }
      local_130 = 0xffffffff;
      local_138 = 0;
      local_104 = FUN_1447ee042(&local_88,L"{PLATFORM}",10,1);
      local_e0 = uVar18;
      if (((ulonglong)ppuVar20[uVar18 * 3 + 2] & 0x10) == 0) {
        local_d0 = uVar18 * 10000;
        lVar6 = 0;
        do {
          ppuVar10 = local_88;
          if (((&DAT_149e2bac0)[lVar6 * 10] & local_10c) != 0) {
            _Str = (wchar_t *)(&DAT_149e2baa0)[lVar6 * 5];
            if (_Str == (wchar_t *)0x0) {
              local_98 = (void ***)0x0;
              lVar8 = (longlong)(int)local_80;
              pppvStack_90 = (void ***)CONCAT44(pppvStack_90._4_4_,local_80);
              if (lVar8 != 0) {
                FUN_1446dd670(&local_98,local_80,0);
                memcpy(local_98,ppuVar10,lVar8 * 2);
                goto LAB_14277c97a;
              }
              pppvStack_90 = (void ***)(ulonglong)local_80;
              uVar24 = 7;
              param_1 = local_128;
            }
            else {
              sVar7 = wcslen(_Str);
              local_130 = 0xffffffff;
              local_138 = 0;
              iVar3 = FUN_1447ee042(&local_88,_Str,sVar7 & 0xffffffff,1);
              if (iVar3 == -1) {
                _Str_00 = (wchar_t *)(&DAT_149e2bab0)[lVar6 * 5];
                if (_Str_00 != (wchar_t *)0x0) {
                  sVar7 = wcslen(_Str_00);
                  local_130 = 0xffffffff;
                  local_138 = 0;
                  iVar3 = FUN_1447ee042(&local_88,_Str_00,sVar7 & 0xffffffff,1);
                  if (iVar3 != -1) goto LAB_14277c83e;
                }
                FUN_140056680(&local_98,&DAT_149dfb77a);
LAB_14277c97a:
                uVar4 = (uint)pppvStack_90;
              }
              else {
LAB_14277c83e:
                local_138 = 0;
                lVar8 = (&DAT_149e2bab0)[lVar6 * 5];
                FUN_140807d8e(&local_88,&local_98,_Str,(&DAT_149e2baa8)[lVar6 * 5]);
                if (lVar8 == 0) goto LAB_14277c97a;
                local_138 = 0;
                FUN_140807d8e(&local_98,&local_60,lVar8,(&DAT_149e2bab8)[lVar6 * 5]);
                if ((void ***)local_98 != (void ***)0x0) {
                  FUN_1400020a8();
                }
                local_98 = local_60;
                pppvStack_90 = local_58;
                uVar4 = (uint)local_58;
              }
              param_1 = local_128;
              uVar24 = 7;
              if (1 < uVar4) {
                puVar25 = &DAT_149dfb77a;
                if (*(int *)(local_128 + 0x38) != 0) {
                  puVar25 = *(undefined2 **)(local_128 + 0x30);
                }
                FUN_1446f470e(&local_60,puVar25);
                lVar8 = FUN_140f7ad96(local_60);
                uVar4 = *(int *)(lVar8 + 0x10) + 1;
                if (local_104 == -1) {
                  uVar4 = 1;
                }
                if (0 < (int)uVar4) {
                  local_d8 = lVar6 * 100 + local_d0;
                  local_118 = (ulonglong)uVar4;
                  uVar18 = 0;
                  do {
                    puVar9 = (undefined8 *)(uVar18 * 0x10 + *(longlong *)(lVar8 + 8));
                    if (uVar18 == uVar4 - 1) {
                      puVar9 = local_f8;
                    }
                    local_a8 = (undefined8 **)0x0;
                    local_a0 = *(int *)(puVar9 + 1);
                    lVar23 = (longlong)local_a0;
                    _Src = (void *)*puVar9;
                    if (lVar23 == 0) {
                      local_9c = 0;
                    }
                    else {
                      FUN_1446dd670(&local_a8,local_a0,0);
                      memcpy(local_a8,_Src,lVar23 * 2);
                    }
                    param_1 = local_128;
                    FUN_140807450(local_128);
                    if (*(char *)(param_1 + 0x19a) == '\x01') {
                      FUN_1448097c4(&local_b8);
                    }
                    if (local_b0 == *(int *)(param_1 + 0x78)) {
                      uVar24 = 1;
                      if (1 < local_b0) {
                        lVar23 = 0;
                        while( true ) {
                          uVar19 = *(ushort *)((longlong)local_b8 + lVar23);
                          uVar14 = (ulonglong)uVar19;
                          uVar22 = *(ushort *)(*(longlong *)(param_1 + 0x70) + lVar23);
                          if (uVar19 != uVar22) break;
                          if (uVar19 == 0) goto LAB_14277cb4f;
LAB_14277cb0d:
                          lVar23 = lVar23 + 2;
                        }
                        if ((uVar22 | uVar19) < 0x80) {
                          uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                          uVar21 = (ulonglong)uVar22;
                          uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
                          if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar21])
                          goto LAB_14277cb0d;
                        }
                        if (uVar19 != uVar22) goto LAB_14277cb9d;
                      }
                    }
                    else {
                      uVar24 = 1;
                      if (*(int *)(param_1 + 0x78) + local_b0 != 1) {
LAB_14277cb9d:
                        ppuVar10 = local_b8;
                        if (local_b0 == 0) {
                          ppuVar10 = (undefined8 **)&DAT_149dfb77a;
                        }
                        lVar23 = 6;
                        lVar13 = 0;
                        while( true ) {
                          uVar19 = *(ushort *)((longlong)ppuVar10 + lVar13);
                          uVar14 = (ulonglong)uVar19;
                          uVar22 = *(ushort *)((longlong)&DAT_149e2b888 + lVar13);
                          if (uVar19 != uVar22) break;
                          uVar24 = 10;
                          if ((uVar19 == 0) || (lVar23 == 1)) goto LAB_14277cb4f;
LAB_14277cbd5:
                          lVar23 = lVar23 + -1;
                          lVar13 = lVar13 + 2;
                        }
                        if ((uVar22 | uVar19) < 0x80) {
                          uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                          uVar21 = (ulonglong)uVar22;
                          uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
                          if ((&DAT_149e05da0)[uVar14] != (&DAT_149e05da0)[uVar21])
                          goto LAB_14277cc10;
                          if (lVar23 != 1) goto LAB_14277cbd5;
                        }
                        else {
LAB_14277cc10:
                          if (uVar19 != uVar22) {
                            if (local_120 == (longlong *)0x0) {
                              local_4c._0_4_ = (int)local_d8 + (int)uVar18;
                              local_60 = (undefined8 **)local_4c;
                              local_58 = &local_b8;
                              FUN_140967c62(*(longlong *)(param_1 + 0x10) + 0x48,local_c8);
                              uVar24 = 0;
                            }
                            else {
                              iVar3 = (int)local_120[1];
                              *(uint *)(local_120 + 1) = iVar3 + 1U;
                              if (*(uint *)((longlong)local_120 + 0xc) < iVar3 + 1U) {
                                FUN_1447a1bd6(local_120,iVar3);
                              }
                              lVar23 = *local_120;
                              lVar26 = (longlong)iVar3 * 0x10;
                              puVar9 = (undefined8 *)(lVar23 + lVar26);
                              *(undefined8 *)(lVar23 + lVar26) = 0;
                              lVar13 = (longlong)local_b0;
                              *(int *)(lVar23 + 8 + lVar26) = local_b0;
                              if (lVar13 == 0) {
                                *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                              }
                              else {
                                local_f0 = local_b8;
                                FUN_1446dd670(puVar9,lVar13,0);
                                memcpy((void *)*puVar9,local_f0,lVar13 * 2);
                              }
                              uVar24 = 0;
                              param_1 = local_128;
                            }
                            goto LAB_14277cb4f;
                          }
                        }
                        uVar24 = 10;
                      }
                    }
LAB_14277cb4f:
                    if (local_b8 != (undefined8 **)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_a8 != (undefined8 **)0x0) {
                      FUN_1400020a8();
                    }
                    if ((uVar24 != 10) && (uVar24 != 0)) goto LAB_14277cd29;
                    uVar18 = uVar18 + 1;
                  } while (uVar18 != local_118);
                }
                uVar24 = 0;
              }
            }
LAB_14277cd29:
            if ((void ***)local_98 != (void ***)0x0) {
              FUN_1400020a8();
            }
            if ((uVar24 != 7) && (uVar24 != 0)) goto LAB_14277ce36;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 != 9);
LAB_14277cd5e:
        uVar24 = 0;
      }
      else {
        FUN_140807450(param_1,&local_98,&local_88,local_f8);
        if (*(char *)(param_1 + 0x19a) == '\x01') {
          FUN_1448097c4(&local_98,L"Config/Config",L"Config/Gearbox",1);
        }
        if ((uint)pppvStack_90 == *(int *)(param_1 + 0x78)) {
          if (1 < (int)(uint)pppvStack_90) {
            lVar6 = 0;
            while( true ) {
              uVar19 = *(ushort *)((longlong)local_98 + lVar6);
              uVar14 = (ulonglong)uVar19;
              uVar22 = *(ushort *)(*(longlong *)(param_1 + 0x70) + lVar6);
              if (uVar19 != uVar22) break;
              if (uVar19 == 0) goto LAB_14277ce26;
LAB_14277cde3:
              lVar6 = lVar6 + 2;
            }
            if ((uVar22 | uVar19) < 0x80) {
              uVar19 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
              uVar21 = (ulonglong)uVar22;
              uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
              if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar21]) goto LAB_14277cde3;
            }
            if (uVar19 != uVar22) goto LAB_14277ce7b;
          }
        }
        else if (*(int *)(param_1 + 0x78) + (uint)pppvStack_90 != 1) {
LAB_14277ce7b:
          if (local_120 == (longlong *)0x0) {
            local_b8 = (void **)CONCAT44(local_b8._4_4_,(int)uVar18 * 10000);
            local_60 = &local_b8;
            local_58 = &local_98;
            FUN_140967c62(*(longlong *)(param_1 + 0x10) + 0x48,&local_a8,&local_60);
          }
          else {
            iVar3 = (int)local_120[1];
            *(uint *)(local_120 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)local_120 + 0xc) < iVar3 + 1U) {
              FUN_1447a1bd6(local_120,iVar3);
            }
            ppuVar10 = local_98;
            lVar6 = *local_120;
            lVar23 = (longlong)iVar3 * 0x10;
            puVar9 = (undefined8 *)(lVar6 + lVar23);
            *(undefined8 *)(lVar6 + lVar23) = 0;
            lVar8 = (longlong)(int)(uint)pppvStack_90;
            *(uint *)(lVar6 + 8 + lVar23) = (uint)pppvStack_90;
            if (lVar8 == 0) {
              *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
              param_1 = local_128;
            }
            else {
              FUN_1446dd670(puVar9,(ulonglong)pppvStack_90 & 0xffffffff,0);
              memcpy((void *)*puVar9,ppuVar10,lVar8 * 2);
              param_1 = local_128;
            }
          }
          if ((void ***)local_98 != (void ***)0x0) {
            FUN_1400020a8();
          }
          goto LAB_14277cd5e;
        }
LAB_14277ce26:
        if ((void ***)local_98 != (void ***)0x0) {
          FUN_1400020a8();
        }
        uVar24 = 1;
      }
LAB_14277ce36:
      if ((void ***)local_88 != (void ***)0x0) {
        FUN_1400020a8();
      }
      uVar18 = local_e0;
      ppuVar20 = local_e8;
      iVar3 = local_108;
      if ((uVar24 & 0xb) != 0) goto LAB_14277d41b;
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 != local_100);
  FUN_1410f2562(&local_60);
  uVar24 = (uint)local_58;
  iVar5 = ((uint)local_58 == 0) + 4;
  local_88 = local_60;
  local_60 = (void ***)0x0;
  local_80 = (uint)local_58;
  iVar3 = local_58._4_4_;
  local_7c = local_58._4_4_;
  local_58 = (undefined8 ***)0x0;
  iVar12 = iVar5 + uVar24;
  if (iVar12 < (int)uVar24) {
LAB_14277d462:
    local_58 = (undefined8 ***)0x0;
    local_60 = (undefined8 **)0x0;
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar12 < 0) {
LAB_14277d45b:
    local_60 = (undefined8 **)0x0;
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
  if (iVar3 < iVar12) {
    FUN_1446f8c06(&local_88);
  }
  FUN_1401aebe8(&local_88,&DAT_149e3129a,3);
  if ((void ***)local_60 != (void ***)0x0) {
    FUN_1400020a8();
  }
  plVar11 = (longlong *)FUN_14054d1d4();
  pppvVar15 = (void ***)local_88;
  if (local_80 == 0) {
    pppvVar15 = (void ***)&DAT_149dfb77a;
  }
  cVar2 = (**(code **)(*plVar11 + 0x50))(plVar11,pppvVar15);
  if (cVar2 != '\0') {
    local_98 = (void ***)0x0;
    pppvStack_90 = (undefined8 ***)0x0;
    plVar11 = (longlong *)FUN_14054d1d4();
    ppuVar10 = local_88;
    lVar6 = (longlong)(int)local_80;
    local_60 = (void ***)0x0;
    local_58 = (undefined8 ***)CONCAT44(local_58._4_4_,local_80);
    FUN_1446dd670(&local_60,local_80 + (lVar6 == 0) + 2,0);
    if (lVar6 != 0) {
      memcpy(local_60,ppuVar10,lVar6 * 2);
    }
    FUN_1401aebe8(&local_60,&DAT_149e060b2,1);
    pppvVar15 = (void ***)local_60;
    if ((uint)local_58 == 0) {
      pppvVar15 = (void ***)&DAT_149dfb77a;
    }
    local_138 = CONCAT31(local_138._1_3_,1);
    (**(code **)(*plVar11 + 0x78))(plVar11,&local_98,pppvVar15,0);
    if ((void ***)local_60 != (void ***)0x0) {
      FUN_1400020a8();
    }
    ppuVar10 = local_98;
    lVar6 = (longlong)(int)(uint)pppvStack_90;
    uVar17 = 0;
    if (lVar6 != 0) {
      lVar8 = 0;
      local_118 = 0;
      do {
        uVar24 = local_80;
        ppuVar16 = local_88;
        iVar3 = *(int *)((longlong)ppuVar10 + lVar8 + 8);
        iVar5 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar5 = 0;
        }
        lVar23 = (longlong)(int)local_80;
        iVar3 = iVar5 + 1 + (uint)(lVar23 == 0);
        local_60 = (undefined8 **)0x0;
        local_58 = (undefined8 ***)CONCAT44(local_58._4_4_,local_80);
        if (iVar3 == 0 && local_80 == 0) {
          local_58 = (undefined8 ***)(ulonglong)local_80;
        }
        else {
          iVar12 = iVar3 + local_80;
          if (iVar3 < 0) goto LAB_14277d45b;
          FUN_1446dd670(&local_60,iVar12,0);
          if (uVar24 != 0) {
            memcpy(local_60,ppuVar16,lVar23 * 2);
          }
        }
        FUN_1401aebe8(&local_60,*(undefined8 *)((longlong)ppuVar10 + lVar8),iVar5);
        iVar3 = (uint)local_58;
        iVar5 = ((uint)local_58 == 0) + 7;
        local_a8 = local_60;
        local_60 = (void ***)0x0;
        local_a0 = (uint)local_58;
        iVar1 = local_58._4_4_;
        local_9c = local_58._4_4_;
        local_58 = (undefined8 ***)0x0;
        iVar12 = iVar5 + iVar3;
        if (iVar12 < iVar3) goto LAB_14277d462;
        if (iVar12 < 0) goto LAB_14277d45b;
        if (iVar1 < iVar12) {
          FUN_1446f8c06(&local_a8);
        }
        FUN_1401aebe8(&local_a8,L"Config",6);
        if ((void ***)local_60 != (void ***)0x0) {
          FUN_1400020a8();
        }
        plVar11 = (longlong *)FUN_14054d1d4();
        ppuVar16 = (undefined8 **)&DAT_149dfb77a;
        if (local_a0 != 0) {
          ppuVar16 = local_a8;
        }
        cVar2 = (**(code **)(*plVar11 + 0x50))(plVar11,ppuVar16);
        _Src_00 = local_a8;
        if (cVar2 != '\0') {
          lVar23 = (longlong)local_a0;
          local_b8 = (undefined8 **)0x0;
          local_b0 = local_a0;
          FUN_1446dd670(&local_b8,local_a0 + (uint)(lVar23 == 0) + 0xe,0);
          if (lVar23 != 0) {
            memcpy(local_b8,_Src_00,lVar23 * 2);
          }
          FUN_1401aebe8(&local_b8,L"DLC{TYPE}.ini",0xd);
          lVar23 = local_128;
          puVar25 = &DAT_149dfb77a;
          if (*(int *)(local_128 + 0x68) != 0) {
            puVar25 = *(undefined2 **)(local_128 + 0x60);
          }
          FUN_14277d46a(local_c8,&local_b8,puVar25);
          local_64 = ((int)local_100 + (int)local_118) * 10000;
          local_60 = (undefined8 **)&local_64;
          local_58 = local_c8;
          FUN_140967c62(*(longlong *)(lVar23 + 0x10) + 0x48,local_4c);
          if (local_c8[0] != (undefined8 **)0x0) {
            FUN_1400020a8();
          }
          if (local_b8 != (undefined8 **)0x0) {
            FUN_1400020a8();
          }
          local_118 = (ulonglong)((int)local_118 + 1);
        }
        if (local_a8 != (undefined8 **)0x0) {
          FUN_1400020a8();
        }
        lVar8 = lVar8 + 0x10;
      } while (lVar6 << 4 != lVar8);
      uVar17 = (uint)pppvStack_90;
    }
    FUN_1447a1747(local_98,uVar17);
    if ((void ***)local_98 != (void ***)0x0) {
      FUN_1400020a8();
    }
  }
  if ((void ***)local_88 != (void ***)0x0) {
    FUN_1400020a8();
  }
LAB_14277d41b:
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_4c._4_8_ ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14277d46a FUN_14277d46a body=390 status=ok
// SIG undefined FUN_14277d46a(void)

longlong * FUN_14277d46a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_140807d8e(param_2,param_1,L"{TYPE}",param_3);
  uVar1 = FUN_140d69f9e();
  local_38 = 0;
  FUN_140807d8e(param_1,&local_28,L"{USERSETTINGS}",uVar1);
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
    local_28 = 0;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  uVar1 = FUN_14170cf26();
  local_38 = 0;
  FUN_140807d8e(param_1,&local_28,L"{USER}",uVar1);
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
    local_28 = 0;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  puVar2 = (undefined8 *)FUN_142778ef2();
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  local_38 = 0;
  FUN_140807d8e(param_1,&local_28,L"{CUSTOMCONFIG}",puVar3);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14277d5f1 FUN_14277d5f1 body=1582 status=ok
// SIG undefined FUN_14277d5f1(void)

void FUN_14277d5f1(void)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  size_t sVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_248 [40];
  longlong *local_220;
  undefined2 *local_218;
  undefined8 local_210;
  undefined2 *local_208;
  undefined8 local_200;
  longlong local_1f8;
  int local_1f0;
  undefined2 *local_1e8;
  undefined8 local_1e0;
  undefined2 *local_1d8;
  undefined8 local_1d0;
  undefined2 *local_1c8;
  undefined8 local_1c0;
  undefined2 *local_1b8;
  int local_1b0;
  int local_1ac;
  undefined2 local_1a8;
  short local_1a6;
  undefined2 local_1a4;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16] [16];
  longlong local_88;
  undefined1 (*local_80) [16];
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_248;
  cVar3 = FUN_145c83bac();
  if ((cVar3 != '\0') || (cVar3 = FUN_145cbeb2e(), cVar3 != '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
      FUN_145c3c252(&DAT_14c8686c8);
      DAT_14c868708 = &DAT_14c8686c8;
      atexit(thunk_FUN_14626bbac);
      _Init_thread_footer(&DAT_14c868710);
    }
    uVar1 = DAT_14c868708[1];
    plVar6 = (longlong *)FUN_1400dbadc();
    local_220 = (longlong *)*plVar6;
    if (local_220 == (longlong *)0x0) {
      local_220 = (longlong *)FUN_140e92164();
      *plVar6 = (longlong)local_220;
    }
    if (uVar1 != 0) {
      auVar14 = pmovsxbw(unaff_XMM6,(char  [8])0x73776f646e6957);
      iVar13 = uVar1 + 1;
      do {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c868710) &&
           (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1)) {
          FUN_145c3c252(&DAT_14c8686c8);
          DAT_14c868708 = &DAT_14c8686c8;
          atexit(thunk_FUN_14626bbac);
          _Init_thread_footer(&DAT_14c868710);
        }
        local_1a6 = (short)iVar13 + -2;
        local_1a8 = *DAT_14c868708;
        local_198 = 0;
        uStack_190 = 0;
        local_1a4 = 0;
        local_1a0 = 0;
        local_88 = 0;
        local_78 = 7;
        local_188[0] = auVar14;
        local_80 = local_188;
        FUN_14626b538(&local_1a8,&local_1f8,1);
        uVar7 = FUN_140d69f9e();
        FUN_140056680(&local_218,uVar7);
        iVar12 = (int)local_210;
        iVar4 = ((int)local_210 == 0) + 0xd;
        local_208 = local_218;
        local_218 = (undefined2 *)0x0;
        iVar2 = local_210._4_4_;
        local_200 = local_210;
        local_210 = 0;
        iVar9 = iVar4 + iVar12;
        if (iVar9 < iVar12) goto LAB_14277dc11;
        if (iVar9 < 0) {
LAB_14277dc0a:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar9);
        }
        if (iVar2 < iVar9) {
          FUN_1446f8c06(&local_208);
        }
        FUN_1401aebe8(&local_208,L"UnrealEngine",0xc);
        iVar12 = local_1f0 + -1;
        if (local_1f0 == 0) {
          iVar12 = 0;
        }
        iVar2 = (int)local_200;
        iVar5 = iVar12 + 1 + (uint)((int)local_200 == 0);
        local_1e8 = local_208;
        local_208 = (undefined2 *)0x0;
        iVar4 = local_200._4_4_;
        local_1e0 = local_200;
        local_200 = 0;
        iVar9 = iVar5 + iVar2;
        if (iVar9 < iVar2) {
LAB_14277dc18:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((longlong)iVar5);
        }
        if (iVar9 < 0) goto LAB_14277dc0a;
        if (iVar4 < iVar9) {
          FUN_1446f8c06(&local_1e8);
        }
        FUN_1401aebe8(&local_1e8,local_1f8,iVar12);
        iVar12 = (int)local_1e0;
        iVar4 = ((int)local_1e0 == 0) + 6;
        local_1d8 = local_1e8;
        local_1e8 = (undefined2 *)0x0;
        iVar2 = local_1e0._4_4_;
        local_1d0 = local_1e0;
        local_1e0 = 0;
        iVar9 = iVar4 + iVar12;
        if (iVar9 < iVar12) {
LAB_14277dc11:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar4);
        }
        if (iVar9 < 0) goto LAB_14277dc0a;
        if (iVar2 < iVar9) {
          FUN_1446f8c06(&local_1d8);
        }
        FUN_1401aebe8(&local_1d8,L"Saved",5);
        iVar12 = (int)local_1d0;
        iVar4 = ((int)local_1d0 == 0) + 7;
        local_1c8 = local_1d8;
        local_1d8 = (undefined2 *)0x0;
        iVar2 = local_1d0._4_4_;
        local_1c0 = local_1d0;
        local_1d0 = 0;
        iVar9 = iVar4 + iVar12;
        if (iVar9 < iVar12) goto LAB_14277dc11;
        if (iVar9 < 0) goto LAB_14277dc0a;
        if (iVar2 < iVar9) {
          FUN_1446f8c06(&local_1c8);
        }
        FUN_1401aebe8(&local_1c8,L"Config",6);
        sVar8 = wcslen((wchar_t *)local_188);
        iVar12 = (int)local_1c0;
        iVar5 = (uint)((int)sVar8 != -1 && (int)local_1c0 == 0) + (int)sVar8 + 1;
        local_1b8 = local_1c8;
        local_1c8 = (undefined2 *)0x0;
        local_1b0 = (int)local_1c0;
        iVar2 = local_1c0._4_4_;
        local_1ac = local_1c0._4_4_;
        local_1c0 = 0;
        iVar9 = iVar5 + iVar12;
        if (iVar9 < iVar12) goto LAB_14277dc18;
        if (iVar9 < 0) goto LAB_14277dc0a;
        if (iVar2 < iVar9) {
          FUN_1446f8c06(&local_1b8);
        }
        FUN_1401aebe8(&local_1b8,local_188,sVar8 & 0xffffffff);
        if (local_1c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_1d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_1e8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_208 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_218 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_1f8 != 0) {
          FUN_1400020a8();
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        plVar6 = (longlong *)FUN_14054d1d4();
        puVar10 = &DAT_149dfb77a;
        if (local_1b0 != 0) {
          puVar10 = local_1b8;
        }
        cVar3 = (**(code **)(*plVar6 + 0x50))(plVar6,puVar10);
        if (cVar3 != '\0') {
          FUN_145cbe6c2(local_188,&DAT_149dfb77a);
          plVar6 = local_220;
          puVar10 = &DAT_149dfb77a;
          if (local_188[0]._8_4_ != 0) {
            puVar10 = (undefined2 *)local_188[0]._0_8_;
          }
          cVar3 = (**(code **)(*local_220 + 0x1d8))(local_220,puVar10);
          if (cVar3 != '\0') {
            puVar10 = &DAT_149dfb77a;
            if (local_1b0 != 0) {
              puVar10 = local_1b8;
            }
            puVar11 = &DAT_149dfb77a;
            if (local_188[0]._8_4_ != 0) {
              puVar11 = (undefined2 *)local_188[0]._0_8_;
            }
            (**(code **)(*plVar6 + 0x1e8))(plVar6,puVar11,puVar10,0);
          }
          if (local_188[0]._0_8_ != 0) {
            FUN_1400020a8();
          }
          if (local_1b8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          break;
        }
        if (local_1b8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        iVar13 = iVar13 + -1;
      } while (1 < iVar13);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14277dc21 FUN_14277dc21 body=49 status=ok
// SIG undefined FUN_14277dc21(void)

void FUN_14277dc21(void)

{
  FUN_144760e21(DAT_14c867098,DAT_14c8670a0);
  if (DAT_14c867098 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277dc52 FUN_14277dc52 body=49 status=ok
// SIG undefined FUN_14277dc52(void)

void FUN_14277dc52(void)

{
  FUN_144760e21(DAT_14c868718,DAT_14c868720);
  if (DAT_14c868718 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277dc83 FUN_14277dc83 body=49 status=ok
// SIG undefined FUN_14277dc83(void)

void FUN_14277dc83(void)

{
  FUN_144760e21(DAT_14c8670b0,DAT_14c8670b8);
  if (DAT_14c8670b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277dcb4 FUN_14277dcb4 body=2138 status=ok
// SIG undefined FUN_14277dcb4(void)

void FUN_14277dcb4(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  uint *puVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  int iVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  undefined2 *puVar25;
  int iVar26;
  ulonglong uVar27;
  uint *puVar28;
  undefined4 uVar29;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  ulonglong local_190;
  ulonglong local_188;
  int local_180;
  uint local_17c;
  uint local_178;
  undefined4 local_174;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  longlong *local_158;
  longlong *local_150;
  longlong *local_148;
  ulonglong local_140;
  uint *local_138;
  longlong local_130;
  ulonglong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined2 *local_110;
  int local_108;
  undefined2 local_100 [4];
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  uint local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_110 = local_100;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_190 = 0;
  local_50 = 0;
  local_100[0] = 1;
  pcVar2 = (code *)*param_2;
  local_158 = param_2 + 4;
  plVar10 = (longlong *)param_2[2];
  if ((longlong *)param_2[2] == (longlong *)0x0) {
    plVar10 = local_158;
  }
  local_150 = param_2;
  local_148 = param_3;
  local_120 = param_1;
  uVar5 = (**(code **)(*plVar10 + 8))();
  (*pcVar2)(uVar5,&local_110);
  if (local_c4 < (int)uStack_f0) {
    uVar18 = 1;
    local_188 = 0;
    uVar6 = 0;
    if (local_70 != 0) {
      puVar17 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar17 = local_88;
      }
      uVar6 = *puVar17;
      if (uVar6 == 0) {
        iVar16 = local_70 + 0x1e;
        if (-1 < (int)(local_70 - 1)) {
          iVar16 = local_70 - 1;
        }
        uVar18 = 0;
        uVar19 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar19 = uVar18;
        }
        local_190 = 0;
        do {
          if (uVar19 == uVar18) goto LAB_14277de50;
          local_190 = (ulonglong)((int)local_190 + 0x20);
          uVar6 = puVar17[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar6 == 0);
      }
      else {
        local_190 = 0;
        local_188 = 0;
        uVar18 = local_188;
      }
      local_188 = uVar18;
      uVar18 = (ulonglong)(-uVar6 & uVar6);
      uVar19 = uVar18 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      uVar6 = ((int)local_190 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if ((int)local_70 <= (int)uVar6) {
        uVar6 = local_70;
      }
    }
    if (uVar6 != local_70) {
      uVar20 = 0xffffffff;
      uVar13 = local_70;
      local_170 = (ulonglong)local_70;
      do {
        lVar21 = local_98 + (longlong)(int)uVar6 * 0x70;
        lVar23 = local_98 + (longlong)(int)uVar6 * 0x70;
        puVar17 = (uint *)(lVar23 + 0x28);
        local_174 = *(undefined4 *)(lVar23 + 0x10);
        uVar6 = *(uint *)(lVar23 + 0x40);
        if (uVar6 == 0) {
          uVar19 = 1;
          uVar27 = 0;
          iVar16 = 0;
          uVar7 = 0;
        }
        else {
          puVar28 = *(uint **)(lVar21 + 0x38);
          if (*(uint **)(lVar21 + 0x38) == (uint *)0x0) {
            puVar28 = puVar17;
          }
          uVar7 = *puVar28;
          if (uVar7 == 0) {
            iVar16 = uVar6 + 0x1e;
            if (-1 < (int)(uVar6 - 1)) {
              iVar16 = uVar6 - 1;
            }
            uVar27 = 0;
            uVar19 = (ulonglong)(uint)(iVar16 >> 5);
            if (iVar16 >> 5 < 1) {
              uVar19 = uVar27;
            }
            iVar16 = 0;
            do {
              if (uVar19 == uVar27) goto LAB_14277e335;
              iVar16 = iVar16 + 0x20;
              uVar7 = puVar28[uVar27 + 1];
              uVar27 = uVar27 + 1;
            } while (uVar7 == 0);
          }
          else {
            uVar27 = 0;
            iVar16 = 0;
          }
          uVar19 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar19 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          uVar7 = (iVar16 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
          if ((int)uVar6 <= (int)uVar7) {
            uVar7 = uVar6;
          }
        }
        if (uVar7 != uVar6) {
          uVar24 = 0xffffffff;
          local_17c = uVar20;
          local_168 = (ulonglong)uVar6;
          local_140 = uVar18;
          local_138 = puVar17;
          local_130 = lVar21;
          do {
            lVar23 = *(longlong *)(lVar21 + 0x18) + (longlong)(int)uVar7 * 0xb8;
            lVar22 = *(longlong *)(lVar21 + 0x18) + (longlong)(int)uVar7 * 0xb8;
            puVar28 = (uint *)(lVar22 + 0x18);
            iVar9 = *(int *)(lVar22 + 0x30);
            local_180 = iVar16;
            local_178 = uVar24;
            local_160 = uVar19;
            local_128 = uVar27;
            if (iVar9 == 0) {
              uVar19 = 1;
              uVar18 = 0;
              iVar26 = 0;
              iVar16 = 0;
            }
            else {
              puVar11 = *(uint **)(lVar23 + 0x28);
              if (*(uint **)(lVar23 + 0x28) == (uint *)0x0) {
                puVar11 = puVar28;
              }
              uVar13 = *puVar11;
              if (uVar13 == 0) {
                iVar16 = iVar9 + 0x1e;
                if (-1 < iVar9 + -1) {
                  iVar16 = iVar9 + -1;
                }
                uVar18 = 0;
                uVar19 = (ulonglong)(uint)(iVar16 >> 5);
                if (iVar16 >> 5 < 1) {
                  uVar19 = uVar18;
                }
                iVar26 = 0;
                do {
                  if (uVar19 == uVar18) goto LAB_14277e233;
                  iVar26 = iVar26 + 0x20;
                  uVar13 = puVar11[uVar18 + 1];
                  uVar18 = uVar18 + 1;
                } while (uVar13 == 0);
              }
              else {
                uVar18 = 0;
                iVar26 = 0;
              }
              uVar19 = (ulonglong)(-uVar13 & uVar13);
              uVar27 = uVar19 * 2 + 1;
              lVar22 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              iVar16 = (iVar26 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
              if (iVar9 <= iVar16) {
                iVar16 = iVar9;
              }
            }
            if (iVar16 != iVar9) {
              uVar6 = 0xffffffff;
              do {
                lVar21 = *(longlong *)(lVar23 + 8) + (longlong)iVar16 * 0x40;
                uVar27 = (ulonglong)
                         (*(int *)(*(longlong *)(lVar23 + 8) + 0x28 + (longlong)iVar16 * 0x40) - 2U
                         < 0x7fffffff) * 0x10;
                puVar25 = &DAT_149dfb77a;
                if (*(int *)(uVar27 + 0x18 + lVar21) != 0) {
                  puVar25 = *(undefined2 **)(lVar21 + 8 + (uVar27 | 8));
                }
                uVar29 = FUN_1400021e4(lVar21,&local_110);
                puVar15 = &DAT_149dfb77a;
                if (local_108 != 0) {
                  puVar15 = local_110;
                }
                local_198 = local_120;
                local_1a0 = 0;
                local_1a8 = 0;
                FUN_1412e8829(uVar29,puVar15,puVar25,local_174);
                if (local_110 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                uVar6 = uVar6 & ~(uint)uVar19;
                puVar17 = *(uint **)(lVar23 + 0x28);
                if (*(uint **)(lVar23 + 0x28) == (uint *)0x0) {
                  puVar17 = puVar28;
                }
                iVar8 = *(int *)(lVar23 + 0x30);
                iVar16 = (int)uVar18;
                lVar21 = (longlong)iVar16;
                uVar13 = puVar17[lVar21] & uVar6;
                if (uVar13 == 0) {
                  iVar3 = iVar8 + 0x1e;
                  if (-1 < iVar8 + -1) {
                    iVar3 = iVar8 + -1;
                  }
                  iVar3 = iVar3 >> 5;
                  iVar26 = iVar26 + 0x20;
                  iVar4 = iVar3;
                  if (iVar3 < iVar16) {
                    iVar4 = iVar16;
                  }
                  if (iVar16 < iVar3) {
                    lVar22 = 0;
                    do {
                      uVar13 = puVar17[lVar21 + lVar22 + 1];
                      if (uVar13 != 0) {
                        uVar18 = (ulonglong)(iVar16 + (int)lVar22 + 1);
                        uVar6 = 0xffffffff;
                        goto LAB_14277e1e6;
                      }
                      iVar26 = iVar26 + 0x20;
                      lVar22 = lVar22 + 1;
                    } while (iVar4 - lVar21 != lVar22);
                    uVar6 = 0xffffffff;
                    iVar16 = iVar4;
                  }
                  uVar18 = (ulonglong)(iVar16 + 1);
                  iVar16 = iVar8;
                }
                else {
LAB_14277e1e6:
                  uVar19 = (ulonglong)(-uVar13 & uVar13);
                  uVar27 = uVar19 * 2 + 1;
                  lVar21 = 0x3f;
                  if (uVar27 != 0) {
                    for (; uVar27 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                    }
                  }
                  iVar16 = (iVar26 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
                  if (iVar8 <= iVar16) {
                    iVar16 = iVar8;
                  }
                }
              } while (iVar16 != iVar9);
              uVar6 = *(uint *)(local_130 + 0x40);
              puVar17 = local_138;
              lVar21 = local_130;
            }
LAB_14277e233:
            uVar24 = local_178 & ~(uint)local_160;
            puVar28 = *(uint **)(lVar21 + 0x38);
            if (*(uint **)(lVar21 + 0x38) == (uint *)0x0) {
              puVar28 = puVar17;
            }
            iVar9 = (int)local_128;
            lVar23 = (longlong)iVar9;
            uVar13 = puVar28[lVar23] & uVar24;
            uVar27 = local_128;
            iVar16 = local_180;
            if (uVar13 == 0) {
              iVar26 = uVar6 + 0x1e;
              if (-1 < (int)(uVar6 - 1)) {
                iVar26 = uVar6 - 1;
              }
              iVar26 = iVar26 >> 5;
              iVar16 = local_180 + 0x20;
              iVar8 = iVar26;
              if (iVar26 < iVar9) {
                iVar8 = iVar9;
              }
              if (iVar9 < iVar26) {
                lVar22 = 0;
                do {
                  uVar13 = puVar28[lVar23 + lVar22 + 1];
                  if (uVar13 != 0) {
                    uVar24 = 0xffffffff;
                    uVar27 = (ulonglong)(iVar9 + (int)lVar22 + 1);
                    goto LAB_14277e2c0;
                  }
                  iVar16 = iVar16 + 0x20;
                  lVar22 = lVar22 + 1;
                } while (iVar8 - lVar23 != lVar22);
                uVar24 = 0xffffffff;
                iVar9 = iVar8;
              }
              uVar27 = (ulonglong)(iVar9 + 1);
              uVar19 = local_160;
              uVar7 = uVar6;
            }
            else {
LAB_14277e2c0:
              uVar19 = (ulonglong)(-uVar13 & uVar13);
              uVar18 = uVar19 * 2 + 1;
              lVar23 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              uVar7 = (iVar16 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
              if ((int)uVar6 <= (int)uVar7) {
                uVar7 = uVar6;
              }
            }
            uVar18 = local_140;
            uVar13 = local_70;
            uVar20 = local_17c;
          } while (uVar7 != (uint)local_168);
        }
LAB_14277e335:
        uVar20 = uVar20 & ~(uint)uVar18;
        puVar17 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar17 = local_88;
        }
        iVar16 = (int)local_188;
        lVar21 = (longlong)iVar16;
        uVar6 = puVar17[lVar21] & uVar20;
        if (uVar6 == 0) {
          iVar9 = uVar13 + 0x1e;
          if (-1 < (int)(uVar13 - 1)) {
            iVar9 = uVar13 - 1;
          }
          iVar9 = iVar9 >> 5;
          local_190 = (ulonglong)((int)local_190 + 0x20);
          iVar26 = iVar9;
          if (iVar9 < iVar16) {
            iVar26 = iVar16;
          }
          if (iVar16 < iVar9) {
            lVar23 = 0;
            do {
              uVar6 = puVar17[lVar21 + lVar23 + 1];
              if (uVar6 != 0) {
                local_188 = (ulonglong)(iVar16 + (int)lVar23 + 1);
                uVar20 = 0xffffffff;
                goto LAB_14277e3d2;
              }
              local_190 = (ulonglong)((int)local_190 + 0x20);
              lVar23 = lVar23 + 1;
            } while (iVar26 - lVar21 != lVar23);
            uVar20 = 0xffffffff;
            lVar21 = (longlong)iVar26;
          }
          local_188 = lVar21 + 1;
          uVar6 = uVar13;
        }
        else {
LAB_14277e3d2:
          uVar18 = (ulonglong)(-uVar6 & uVar6);
          uVar19 = uVar18 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          uVar6 = ((int)local_190 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if ((int)uVar13 <= (int)uVar6) {
            uVar6 = uVar13;
          }
        }
      } while (uVar6 != (uint)local_170);
    }
LAB_14277de50:
    FUN_146814048(local_100);
    puVar25 = DAT_14c872b28;
    if (DAT_14c872b30 == 0) {
      puVar25 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_118,puVar25,1);
    if ((int)uStack_f0 != local_c4) {
      uVar6 = (uint)((ulonglong)local_118 >> 0x10);
      uVar13 = (uint)local_118 & 0xffff;
      puVar14 = local_b8;
      if (local_b8 == (undefined1 *)0x0) {
        puVar14 = local_c0;
      }
      iVar16 = *(int *)(puVar14 +
                       (ulonglong)
                       (local_b0 - 1U &
                       (int)((ulonglong)local_118 >> 0x20) + ((uint)local_118 << 0x10 | uVar13) +
                       (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar13 >> 4)) * 4);
      while (iVar16 != -1) {
        lVar21 = local_f8 + (longlong)iVar16 * 0x60;
        if (*(longlong *)(local_f8 + (longlong)iVar16 * 0x60) == local_118) {
          if (lVar21 != -8 && lVar21 != 0) {
            FUN_1468140fe(&DAT_14c8670b0);
          }
          break;
        }
        iVar16 = *(int *)(lVar21 + 0x58);
      }
    }
  }
  plVar10 = local_148;
  pcVar2 = (code *)*local_148;
  if (pcVar2 != (code *)0x0) {
    local_110 = local_100;
    plVar12 = local_148 + 4;
    if ((longlong *)local_148[2] != (longlong *)0x0) {
      plVar12 = (longlong *)local_148[2];
    }
    uVar5 = (**(code **)(*plVar12 + 8))();
    (*pcVar2)(uVar5,&local_110);
  }
  FUN_14600bc6e(local_100);
  if (*local_150 != 0) {
    plVar12 = local_158;
    if ((longlong *)local_150[2] != (longlong *)0x0) {
      plVar12 = (longlong *)local_150[2];
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (*plVar10 != 0) {
    plVar12 = plVar10 + 4;
    if ((longlong *)plVar10[2] != (longlong *)0x0) {
      plVar12 = (longlong *)plVar10[2];
    }
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14277e50f FUN_14277e50f body=44 status=ok
// SIG undefined FUN_14277e50f(void)

void FUN_14277e50f(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c867100;
  if (DAT_14c867100 == 0) {
    return;
  }
  FUN_1468141b0(DAT_14c867100);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14277e53c FUN_14277e53c body=1160 status=ok
// SIG undefined FUN_14277e53c(void)

void FUN_14277e53c(undefined8 *param_1)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  wchar_t *_Str1;
  wchar_t *pwVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  uint uVar21;
  wchar_t *pwVar22;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  uint local_a8;
  int local_a4;
  undefined8 *local_a0;
  undefined8 *local_98;
  longlong local_90;
  uint *local_88;
  ulonglong local_80;
  wchar_t *local_78;
  int local_70;
  wchar_t *local_68;
  int local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a0 = param_1;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar20 = (undefined8 *)*param_1;
    local_98 = puVar20 + (longlong)*(int *)(param_1 + 1) * 5;
    pwVar22 = L"";
    do {
      uVar8 = DAT_14c872ce0;
      pwVar9 = pwVar22;
      if (*(int *)(puVar20 + 3) != 0) {
        pwVar9 = (wchar_t *)puVar20[2];
      }
      FUN_140056680(&local_58,pwVar9);
      pwVar9 = pwVar22;
      if (*(int *)(puVar20 + 1) != 0) {
        pwVar9 = (wchar_t *)*puVar20;
      }
      plVar6 = (longlong *)FUN_140d6a126(uVar8,pwVar9,0,&local_58);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (plVar6 != (longlong *)0x0) {
        iVar5 = (int)plVar6[5];
        if (iVar5 == 0) {
          uVar16 = 1;
          uVar18 = 0;
          iVar17 = 0;
          iVar10 = 0;
        }
        else {
          puVar13 = (uint *)plVar6[4];
          if ((uint *)plVar6[4] == (uint *)0x0) {
            puVar13 = (uint *)(plVar6 + 2);
          }
          uVar21 = *puVar13;
          if (uVar21 == 0) {
            iVar17 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar17 = iVar5 + -1;
            }
            uVar18 = 0;
            uVar16 = (ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              uVar16 = uVar18;
            }
            iVar17 = 0;
            do {
              if (uVar16 == uVar18) goto LAB_14277e974;
              iVar17 = iVar17 + 0x20;
              uVar21 = puVar13[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar21 == 0);
          }
          else {
            uVar18 = 0;
            iVar17 = 0;
          }
          uVar16 = (ulonglong)(-uVar21 & uVar21);
          uVar1 = uVar16 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar10 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar10) {
            iVar10 = iVar5;
          }
        }
        if (iVar10 < iVar5) {
          local_88 = (uint *)(plVar6 + 2);
          uVar21 = 0xffffffff;
          do {
            local_a8 = uVar21;
            lVar19 = (longlong)iVar10 * 0x40;
            local_80 = uVar18;
            FUN_14029eeae(*plVar6 + lVar19,&local_58);
            lVar15 = *plVar6;
            local_b0 = CONCAT71(local_b0._1_7_,*(int *)(lVar15 + 0x28 + lVar19) - 2U < 0x7fffffff);
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            pwVar9 = pwVar22;
            if (local_50 != 0) {
              pwVar9 = local_58;
            }
            local_a4 = iVar17;
            plVar7 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,pwVar9);
            if ((plVar7 != (longlong *)0x0) &&
               (uVar21 = *(uint *)(puVar20 + 4), uVar4 = (**(code **)(*plVar7 + 0x18))(plVar7),
               (uVar4 & uVar21) != 0)) {
              lVar19 = lVar19 + lVar15;
              local_90 = lVar19 + 8;
              local_b0 = (local_b0 & 0xff) << 4 | 8;
              pwVar9 = pwVar22;
              if (*(int *)(lVar19 + 0x10 + local_b0) != 0) {
                pwVar9 = *(wchar_t **)(local_90 + local_b0);
              }
              uVar8 = FUN_1409e01db(pwVar9);
              (**(code **)(*plVar7 + 0xc0))(plVar7,&local_68);
              FUN_140056680(&local_78,uVar8);
              pwVar9 = local_78;
              pwVar14 = local_78;
              if (local_70 == 0) {
                pwVar14 = pwVar22;
              }
              _Str1 = pwVar22;
              if (local_60 != 0) {
                _Str1 = local_68;
              }
              iVar5 = wcscmp(_Str1,pwVar14);
              if (pwVar9 != (wchar_t *)0x0) {
                FUN_1400020a8(pwVar9);
              }
              if (iVar5 != 0) {
                FUN_140056680(&local_78,uVar8);
                pwVar9 = local_78;
                if (local_70 == 0) {
                  pwVar9 = pwVar22;
                }
                pwVar14 = pwVar22;
                if (local_60 != 0) {
                  pwVar14 = local_68;
                }
                lVar19 = 0;
                while( true ) {
                  uVar2 = *(ushort *)((longlong)pwVar14 + lVar19);
                  uVar21 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)pwVar9 + lVar19);
                  uVar4 = (uint)uVar3;
                  if (uVar2 != uVar3) {
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar21 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14277e813;
                    }
                    iVar5 = uVar21 - uVar4;
                    goto LAB_14277e845;
                  }
                  if (uVar2 == 0) break;
LAB_14277e813:
                  lVar19 = lVar19 + 2;
                }
                iVar5 = 0;
LAB_14277e845:
                if (local_78 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                if ((iVar5 != 0) &&
                   (uVar18 = (**(code **)(*plVar7 + 0x18))(plVar7), (uVar18 & 4) == 0)) {
                  pwVar9 = pwVar22;
                  if (*(int *)(local_90 + 8 + local_b0) != 0) {
                    pwVar9 = *(wchar_t **)(local_90 + local_b0);
                  }
                  pwVar14 = pwVar22;
                  if (local_50 != 0) {
                    pwVar14 = local_58;
                  }
                  local_c8 = *(undefined1 *)((longlong)puVar20 + 0x24);
                  local_b8 = 0;
                  local_c0 = 0;
                  FUN_1412e8829(local_90,pwVar14,pwVar9,*(undefined4 *)(puVar20 + 4));
                }
              }
              if (local_68 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
            }
            iVar17 = local_a4;
            if (local_58 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            uVar21 = local_a8 & ~(uint)uVar16;
            puVar13 = (uint *)plVar6[4];
            if ((uint *)plVar6[4] == (uint *)0x0) {
              puVar13 = local_88;
            }
            iVar5 = (int)plVar6[5];
            iVar10 = (int)local_80;
            lVar19 = (longlong)iVar10;
            uVar4 = puVar13[lVar19] & uVar21;
            uVar18 = local_80;
            if (uVar4 == 0) {
              iVar11 = iVar5 + 0x1e;
              if (-1 < iVar5 + -1) {
                iVar11 = iVar5 + -1;
              }
              iVar11 = iVar11 >> 5;
              iVar12 = iVar11;
              if (iVar11 < iVar10) {
                iVar12 = iVar10;
              }
              if (iVar11 <= iVar10) break;
              lVar15 = 0;
              while( true ) {
                iVar17 = iVar17 + 0x20;
                uVar4 = puVar13[lVar19 + lVar15 + 1];
                if (uVar4 != 0) break;
                lVar15 = lVar15 + 1;
                if (iVar12 - lVar19 == lVar15) goto LAB_14277e974;
              }
              uVar18 = (ulonglong)(iVar10 + (int)lVar15 + 1);
              uVar21 = 0xffffffff;
            }
            uVar16 = (ulonglong)(-uVar4 & uVar4);
            uVar1 = uVar16 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            iVar10 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          } while (iVar10 < iVar5);
        }
      }
LAB_14277e974:
      puVar20 = puVar20 + 5;
    } while (puVar20 != local_98);
  }
  *(undefined1 *)(local_a0 + 2) = 0;
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14277e9c5 FUN_14277e9c5 body=49 status=ok
// SIG undefined FUN_14277e9c5(void)

void FUN_14277e9c5(void)

{
  FUN_145938693(DAT_14c867108,DAT_14c867110);
  if (DAT_14c867108 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277e9f6 FUN_14277e9f6 body=49 status=ok
// SIG undefined FUN_14277e9f6(void)

void FUN_14277e9f6(void)

{
  FUN_14681424f(DAT_14c867120,DAT_14c867128);
  if (DAT_14c867120 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ea27 FUN_14277ea27 body=49 status=ok
// SIG undefined FUN_14277ea27(void)

void FUN_14277ea27(void)

{
  FUN_146814277(DAT_14c867130,DAT_14c867138);
  if (DAT_14c867130 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ea58 FUN_14277ea58 body=49 status=ok
// SIG undefined FUN_14277ea58(void)

void FUN_14277ea58(void)

{
  FUN_144760e21(DAT_14c867140,DAT_14c867148);
  if (DAT_14c867140 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ea89 FUN_14277ea89 body=91 status=ok
// SIG undefined FUN_14277ea89(void)

void FUN_14277ea89(void)

{
  if (DAT_14c872c60 != 0) {
    if (DAT_14c872c58 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c872c58)(DAT_14c872c58,0);
    FUN_1446efa72(&DAT_14c872c58,0,0,0x10);
    DAT_14c872c60 = 0;
  }
  if (DAT_14c872c58 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14277eae4 FUN_14277eae4 body=91 status=ok
// SIG undefined FUN_14277eae4(void)

void FUN_14277eae4(void)

{
  if (DAT_14c872c70 != 0) {
    if (DAT_14c872c68 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c872c68)(DAT_14c872c68,0);
    FUN_1446efa72(&DAT_14c872c68,0,0,0x10);
    DAT_14c872c70 = 0;
  }
  if (DAT_14c872c68 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14277eb3f FUN_14277eb3f body=91 status=ok
// SIG undefined FUN_14277eb3f(void)

void FUN_14277eb3f(void)

{
  if (DAT_14c872c80 != 0) {
    if (DAT_14c872c78 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c872c78)(DAT_14c872c78,0);
    FUN_1446efa72(&DAT_14c872c78,0,0,0x10);
    DAT_14c872c80 = 0;
  }
  if (DAT_14c872c78 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14277eb9a FUN_14277eb9a body=91 status=ok
// SIG undefined FUN_14277eb9a(void)

void FUN_14277eb9a(void)

{
  if (DAT_14c872c90 != 0) {
    if (DAT_14c872c88 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c872c88)(DAT_14c872c88,0);
    FUN_1446efa72(&DAT_14c872c88,0,0,0x10);
    DAT_14c872c90 = 0;
  }
  if (DAT_14c872c88 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14277ebf5 FUN_14277ebf5 body=49 status=ok
// SIG undefined FUN_14277ebf5(void)

void FUN_14277ebf5(void)

{
  FUN_144760e21(DAT_14c872cb0,DAT_14c872cb8);
  if (DAT_14c872cb0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ec26 FUN_14277ec26 body=59 status=ok
// SIG undefined FUN_14277ec26(void)

void FUN_14277ec26(void)

{
  FUN_144760e21(DAT_14c867188,DAT_14c867190);
  if (DAT_14c867188 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277ec53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c867160);
  return;
}



// FUNCTION 14277ec61 FUN_14277ec61 body=49 status=ok
// SIG undefined FUN_14277ec61(void)

void FUN_14277ec61(void)

{
  FUN_144760e21(DAT_14c8671a8,DAT_14c8671b0);
  if (DAT_14c8671a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ec92 FUN_14277ec92 body=49 status=ok
// SIG undefined FUN_14277ec92(void)

void FUN_14277ec92(void)

{
  FUN_144760e21(DAT_14c872c98,DAT_14c872ca0);
  if (DAT_14c872c98 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ecc3 FUN_14277ecc3 body=49 status=ok
// SIG undefined FUN_14277ecc3(void)

void FUN_14277ecc3(void)

{
  FUN_144760e21(DAT_14c872cc8,DAT_14c872cd0);
  if (DAT_14c872cc8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ecf4 FUN_14277ecf4 body=59 status=ok
// SIG undefined FUN_14277ecf4(void)

void FUN_14277ecf4(void)

{
  FUN_144760e21(DAT_14c8671e8,DAT_14c8671f0);
  if (DAT_14c8671e8 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277ed21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c8671c0);
  return;
}



// FUNCTION 14277ed2f FUN_14277ed2f body=59 status=ok
// SIG undefined FUN_14277ed2f(void)

void FUN_14277ed2f(void)

{
  FUN_144760e21(DAT_14c867230,DAT_14c867238);
  if (DAT_14c867230 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277ed5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c867208);
  return;
}



// FUNCTION 14277ed6a FUN_14277ed6a body=91 status=ok
// SIG undefined FUN_14277ed6a(void)

void FUN_14277ed6a(void)

{
  if (DAT_14c867258 != 0) {
    if (DAT_14c867250 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c867250)(DAT_14c867250,0);
    FUN_1446efa72(&DAT_14c867250,0,0,0x10);
    DAT_14c867258 = 0;
  }
  if (DAT_14c867250 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14277edc5 FUN_14277edc5 body=49 status=ok
// SIG undefined FUN_14277edc5(void)

void FUN_14277edc5(void)

{
  FUN_144760e21(DAT_14c867268,DAT_14c867270);
  if (DAT_14c867268 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277edf6 FUN_14277edf6 body=49 status=ok
// SIG undefined FUN_14277edf6(void)

void FUN_14277edf6(void)

{
  FUN_144760e21(DAT_14c867280,DAT_14c867288);
  if (DAT_14c867280 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ee27 FUN_14277ee27 body=49 status=ok
// SIG undefined FUN_14277ee27(void)

void FUN_14277ee27(void)

{
  FUN_144760e21(DAT_14c867298,DAT_14c8672a0);
  if (DAT_14c867298 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ee58 FUN_14277ee58 body=49 status=ok
// SIG undefined FUN_14277ee58(void)

void FUN_14277ee58(void)

{
  FUN_144760e21(DAT_14c8672b0,DAT_14c8672b8);
  if (DAT_14c8672b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ee89 FUN_14277ee89 body=49 status=ok
// SIG undefined FUN_14277ee89(void)

void FUN_14277ee89(void)

{
  FUN_144760e21(DAT_14c8672c8,DAT_14c8672d0);
  if (DAT_14c8672c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277eeba FUN_14277eeba body=49 status=ok
// SIG undefined FUN_14277eeba(void)

void FUN_14277eeba(void)

{
  FUN_144760e21(DAT_14c868888,DAT_14c868890);
  if (DAT_14c868888 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277eeeb FUN_14277eeeb body=49 status=ok
// SIG undefined FUN_14277eeeb(void)

void FUN_14277eeeb(void)

{
  FUN_144760e21(DAT_14c8672e0,DAT_14c8672e8);
  if (DAT_14c8672e0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ef1c FUN_14277ef1c body=49 status=ok
// SIG undefined FUN_14277ef1c(void)

void FUN_14277ef1c(void)

{
  FUN_144760e21(DAT_14c8672f8,DAT_14c867300);
  if (DAT_14c8672f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ef4d FUN_14277ef4d body=49 status=ok
// SIG undefined FUN_14277ef4d(void)

void FUN_14277ef4d(void)

{
  FUN_144760e21(DAT_14c867310,DAT_14c867318);
  if (DAT_14c867310 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ef7e FUN_14277ef7e body=49 status=ok
// SIG undefined FUN_14277ef7e(void)

void FUN_14277ef7e(void)

{
  FUN_144760e21(DAT_14c867328,DAT_14c867330);
  if (DAT_14c867328 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277efaf FUN_14277efaf body=91 status=ok
// SIG undefined FUN_14277efaf(void)

void FUN_14277efaf(void)

{
  if (DAT_14c867350 != 0) {
    if (DAT_14c867348 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c867348)(DAT_14c867348,0);
    FUN_1446efa72(&DAT_14c867348,0,0,0x10);
    DAT_14c867350 = 0;
  }
  if (DAT_14c867348 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14277f00a FUN_14277f00a body=91 status=ok
// SIG undefined FUN_14277f00a(void)

void FUN_14277f00a(void)

{
  if (DAT_14c867368 != 0) {
    if (DAT_14c867360 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c867360)(DAT_14c867360,0);
    FUN_1446efa72(&DAT_14c867360,0,0,0x10);
    DAT_14c867368 = 0;
  }
  if (DAT_14c867360 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14277f065 FUN_14277f065 body=49 status=ok
// SIG undefined FUN_14277f065(void)

void FUN_14277f065(void)

{
  FUN_144760e21(DAT_14c8688a0,DAT_14c8688a8);
  if (DAT_14c8688a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f096 FUN_14277f096 body=49 status=ok
// SIG undefined FUN_14277f096(void)

void FUN_14277f096(void)

{
  FUN_144760e21(DAT_14c8687d0,DAT_14c8687d8);
  if (DAT_14c8687d0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f0c7 FUN_14277f0c7 body=49 status=ok
// SIG undefined FUN_14277f0c7(void)

void FUN_14277f0c7(void)

{
  FUN_144760e21(DAT_14c867378,DAT_14c867380);
  if (DAT_14c867378 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f0f8 FUN_14277f0f8 body=49 status=ok
// SIG undefined FUN_14277f0f8(void)

void FUN_14277f0f8(void)

{
  FUN_144760e21(DAT_14c872cf8,DAT_14c872d00);
  if (DAT_14c872cf8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f129 FUN_14277f129 body=49 status=ok
// SIG undefined FUN_14277f129(void)

void FUN_14277f129(void)

{
  FUN_144760e21(DAT_14c867390,DAT_14c867398);
  if (DAT_14c867390 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f15a FUN_14277f15a body=49 status=ok
// SIG undefined FUN_14277f15a(void)

void FUN_14277f15a(void)

{
  FUN_144760e21(DAT_14c872c40,DAT_14c872c48);
  if (DAT_14c872c40 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f18b FUN_14277f18b body=49 status=ok
// SIG undefined FUN_14277f18b(void)

void FUN_14277f18b(void)

{
  FUN_144760e21(DAT_14c8673a8,DAT_14c8673b0);
  if (DAT_14c8673a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f1bc FUN_14277f1bc body=49 status=ok
// SIG undefined FUN_14277f1bc(void)

void FUN_14277f1bc(void)

{
  FUN_144760e21(DAT_14c8673c0,DAT_14c8673c8);
  if (DAT_14c8673c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f1ed FUN_14277f1ed body=49 status=ok
// SIG undefined FUN_14277f1ed(void)

void FUN_14277f1ed(void)

{
  FUN_144760e21(DAT_14c8687e8,DAT_14c8687f0);
  if (DAT_14c8687e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f21e FUN_14277f21e body=49 status=ok
// SIG undefined FUN_14277f21e(void)

void FUN_14277f21e(void)

{
  FUN_144760e21(DAT_14c8673d8,DAT_14c8673e0);
  if (DAT_14c8673d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f24f FUN_14277f24f body=49 status=ok
// SIG undefined FUN_14277f24f(void)

void FUN_14277f24f(void)

{
  FUN_144760e21(DAT_14c872d10,DAT_14c872d18);
  if (DAT_14c872d10 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f280 FUN_14277f280 body=49 status=ok
// SIG undefined FUN_14277f280(void)

void FUN_14277f280(void)

{
  FUN_144760e21(DAT_14c86aa18,DAT_14c86aa20);
  if (DAT_14c86aa18 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f2b1 FUN_14277f2b1 body=49 status=ok
// SIG undefined FUN_14277f2b1(void)

void FUN_14277f2b1(void)

{
  FUN_144760e21(DAT_14c8673f0,DAT_14c8673f8);
  if (DAT_14c8673f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f2e2 FUN_14277f2e2 body=49 status=ok
// SIG undefined FUN_14277f2e2(void)

void FUN_14277f2e2(void)

{
  FUN_144760e21(DAT_14c867408,DAT_14c867410);
  if (DAT_14c867408 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f313 FUN_14277f313 body=49 status=ok
// SIG undefined FUN_14277f313(void)

void FUN_14277f313(void)

{
  FUN_144760e21(DAT_14c867420,DAT_14c867428);
  if (DAT_14c867420 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f344 FUN_14277f344 body=49 status=ok
// SIG undefined FUN_14277f344(void)

void FUN_14277f344(void)

{
  FUN_144760e21(DAT_14c867438,DAT_14c867440);
  if (DAT_14c867438 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f375 FUN_14277f375 body=49 status=ok
// SIG undefined FUN_14277f375(void)

void FUN_14277f375(void)

{
  FUN_144760e21(DAT_14c86a918,DAT_14c86a920);
  if (DAT_14c86a918 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f3a6 FUN_14277f3a6 body=49 status=ok
// SIG undefined FUN_14277f3a6(void)

void FUN_14277f3a6(void)

{
  FUN_144760e21(DAT_14c867450,DAT_14c867458);
  if (DAT_14c867450 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f3d7 FUN_14277f3d7 body=49 status=ok
// SIG undefined FUN_14277f3d7(void)

void FUN_14277f3d7(void)

{
  FUN_144760e21(DAT_14c867468,DAT_14c867470);
  if (DAT_14c867468 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f408 FUN_14277f408 body=91 status=ok
// SIG undefined FUN_14277f408(void)

void FUN_14277f408(void)

{
  if (DAT_14c867488 != 0) {
    if (DAT_14c867480 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c867480)(DAT_14c867480,0);
    FUN_1446efa72(&DAT_14c867480,0,0,0x10);
    DAT_14c867488 = 0;
  }
  if (DAT_14c867480 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14277f463 FUN_14277f463 body=49 status=ok
// SIG undefined FUN_14277f463(void)

void FUN_14277f463(void)

{
  FUN_144760e21(DAT_14c867490,DAT_14c867498);
  if (DAT_14c867490 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f494 FUN_14277f494 body=49 status=ok
// SIG undefined FUN_14277f494(void)

void FUN_14277f494(void)

{
  FUN_144760e21(DAT_14c8674a8,DAT_14c8674b0);
  if (DAT_14c8674a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f4c5 FUN_14277f4c5 body=49 status=ok
// SIG undefined FUN_14277f4c5(void)

void FUN_14277f4c5(void)

{
  FUN_144760e21(DAT_14c8674c0,DAT_14c8674c8);
  if (DAT_14c8674c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f4f6 FUN_14277f4f6 body=91 status=ok
// SIG undefined FUN_14277f4f6(void)

void FUN_14277f4f6(void)

{
  if (DAT_14c8674e0 != 0) {
    if (DAT_14c8674d8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c8674d8)(DAT_14c8674d8,0);
    FUN_1446efa72(&DAT_14c8674d8,0,0,0x10);
    DAT_14c8674e0 = 0;
  }
  if (DAT_14c8674d8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14277f551 FUN_14277f551 body=49 status=ok
// SIG undefined FUN_14277f551(void)

void FUN_14277f551(void)

{
  FUN_144760e21(DAT_14c8674e8,DAT_14c8674f0);
  if (DAT_14c8674e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f582 FUN_14277f582 body=49 status=ok
// SIG undefined FUN_14277f582(void)

void FUN_14277f582(void)

{
  FUN_144760e21(DAT_14c867500,DAT_14c867508);
  if (DAT_14c867500 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f5b3 FUN_14277f5b3 body=49 status=ok
// SIG undefined FUN_14277f5b3(void)

void FUN_14277f5b3(void)

{
  FUN_144760e21(DAT_14c867518,DAT_14c867520);
  if (DAT_14c867518 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f5e4 FUN_14277f5e4 body=49 status=ok
// SIG undefined FUN_14277f5e4(void)

void FUN_14277f5e4(void)

{
  FUN_144760e21(DAT_14c872bf8,DAT_14c872c00);
  if (DAT_14c872bf8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f615 FUN_14277f615 body=49 status=ok
// SIG undefined FUN_14277f615(void)

void FUN_14277f615(void)

{
  FUN_144760e21(DAT_14c872b90,DAT_14c872b98);
  if (DAT_14c872b90 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f646 FUN_14277f646 body=49 status=ok
// SIG undefined FUN_14277f646(void)

void FUN_14277f646(void)

{
  FUN_144760e21(DAT_14c872c10,DAT_14c872c18);
  if (DAT_14c872c10 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f677 FUN_14277f677 body=49 status=ok
// SIG undefined FUN_14277f677(void)

void FUN_14277f677(void)

{
  FUN_144760e21(DAT_14c8688b8,DAT_14c8688c0);
  if (DAT_14c8688b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f6a8 FUN_14277f6a8 body=59 status=ok
// SIG undefined FUN_14277f6a8(void)

void FUN_14277f6a8(void)

{
  FUN_144760e21(DAT_14c867558,DAT_14c867560);
  if (DAT_14c867558 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277f6d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c867530);
  return;
}



// FUNCTION 14277f6e3 FUN_14277f6e3 body=49 status=ok
// SIG undefined FUN_14277f6e3(void)

void FUN_14277f6e3(void)

{
  FUN_144760e21(DAT_14c867578,DAT_14c867580);
  if (DAT_14c867578 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f714 FUN_14277f714 body=49 status=ok
// SIG undefined FUN_14277f714(void)

void FUN_14277f714(void)

{
  FUN_144760e21(DAT_14c86a900,DAT_14c86a908);
  if (DAT_14c86a900 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f745 FUN_14277f745 body=49 status=ok
// SIG undefined FUN_14277f745(void)

void FUN_14277f745(void)

{
  FUN_144760e21(DAT_14c867590,DAT_14c867598);
  if (DAT_14c867590 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f776 FUN_14277f776 body=49 status=ok
// SIG undefined FUN_14277f776(void)

void FUN_14277f776(void)

{
  FUN_144760e21(DAT_14c8675a8,DAT_14c8675b0);
  if (DAT_14c8675a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f7a7 FUN_14277f7a7 body=49 status=ok
// SIG undefined FUN_14277f7a7(void)

void FUN_14277f7a7(void)

{
  FUN_144760e21(DAT_14c8675c0,DAT_14c8675c8);
  if (DAT_14c8675c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f7d8 FUN_14277f7d8 body=49 status=ok
// SIG undefined FUN_14277f7d8(void)

void FUN_14277f7d8(void)

{
  FUN_144760e21(DAT_14c8675d8,DAT_14c8675e0);
  if (DAT_14c8675d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f809 FUN_14277f809 body=49 status=ok
// SIG undefined FUN_14277f809(void)

void FUN_14277f809(void)

{
  FUN_144760e21(DAT_14c8675f0,DAT_14c8675f8);
  if (DAT_14c8675f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f83a FUN_14277f83a body=49 status=ok
// SIG undefined FUN_14277f83a(void)

void FUN_14277f83a(void)

{
  FUN_144760e21(DAT_14c867608,DAT_14c867610);
  if (DAT_14c867608 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f86b FUN_14277f86b body=49 status=ok
// SIG undefined FUN_14277f86b(void)

void FUN_14277f86b(void)

{
  FUN_144760e21(DAT_14c867620,DAT_14c867628);
  if (DAT_14c867620 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f89c FUN_14277f89c body=49 status=ok
// SIG undefined FUN_14277f89c(void)

void FUN_14277f89c(void)

{
  FUN_144760e21(DAT_14c867638,DAT_14c867640);
  if (DAT_14c867638 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f8cd FUN_14277f8cd body=49 status=ok
// SIG undefined FUN_14277f8cd(void)

void FUN_14277f8cd(void)

{
  FUN_144760e21(DAT_14c867650,DAT_14c867658);
  if (DAT_14c867650 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f8fe FUN_14277f8fe body=49 status=ok
// SIG undefined FUN_14277f8fe(void)

void FUN_14277f8fe(void)

{
  FUN_144760e21(DAT_14c867668,DAT_14c867670);
  if (DAT_14c867668 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f92f FUN_14277f92f body=49 status=ok
// SIG undefined FUN_14277f92f(void)

void FUN_14277f92f(void)

{
  FUN_144760e21(DAT_14c867680,DAT_14c867688);
  if (DAT_14c867680 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f960 FUN_14277f960 body=49 status=ok
// SIG undefined FUN_14277f960(void)

void FUN_14277f960(void)

{
  FUN_144760e21(DAT_14c867698,DAT_14c8676a0);
  if (DAT_14c867698 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f991 FUN_14277f991 body=49 status=ok
// SIG undefined FUN_14277f991(void)

void FUN_14277f991(void)

{
  FUN_144760e21(DAT_14c8676b0,DAT_14c8676b8);
  if (DAT_14c8676b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277f9c2 FUN_14277f9c2 body=59 status=ok
// SIG undefined FUN_14277f9c2(void)

void FUN_14277f9c2(void)

{
  FUN_144760e21(DAT_14c8676f0,DAT_14c8676f8);
  if (DAT_14c8676f0 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277f9ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c8676c8);
  return;
}



// FUNCTION 14277f9fd FUN_14277f9fd body=59 status=ok
// SIG undefined FUN_14277f9fd(void)

void FUN_14277f9fd(void)

{
  FUN_144760e21(DAT_14c867738,DAT_14c867740);
  if (DAT_14c867738 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277fa2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c867710);
  return;
}



// FUNCTION 14277fa38 FUN_14277fa38 body=59 status=ok
// SIG undefined FUN_14277fa38(void)

void FUN_14277fa38(void)

{
  FUN_144760e21(DAT_14c867780,DAT_14c867788);
  if (DAT_14c867780 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277fa65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c867758);
  return;
}



// FUNCTION 14277fa73 FUN_14277fa73 body=59 status=ok
// SIG undefined FUN_14277fa73(void)

void FUN_14277fa73(void)

{
  FUN_144760e21(DAT_14c8677c8,DAT_14c8677d0);
  if (DAT_14c8677c8 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277faa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c8677a0);
  return;
}



// FUNCTION 14277faae FUN_14277faae body=59 status=ok
// SIG undefined FUN_14277faae(void)

void FUN_14277faae(void)

{
  FUN_144760e21(DAT_14c867810,DAT_14c867818);
  if (DAT_14c867810 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277fadb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c8677e8);
  return;
}



// FUNCTION 14277fae9 FUN_14277fae9 body=59 status=ok
// SIG undefined FUN_14277fae9(void)

void FUN_14277fae9(void)

{
  FUN_144760e21(DAT_14c867858,DAT_14c867860);
  if (DAT_14c867858 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277fb16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c867830);
  return;
}



// FUNCTION 14277fb24 FUN_14277fb24 body=59 status=ok
// SIG undefined FUN_14277fb24(void)

void FUN_14277fb24(void)

{
  FUN_144760e21(DAT_14c8678a0,DAT_14c8678a8);
  if (DAT_14c8678a0 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277fb51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c867878);
  return;
}



// FUNCTION 14277fb5f FUN_14277fb5f body=59 status=ok
// SIG undefined FUN_14277fb5f(void)

void FUN_14277fb5f(void)

{
  FUN_144760e21(DAT_14c8678e8,DAT_14c8678f0);
  if (DAT_14c8678e8 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277fb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c8678c0);
  return;
}



// FUNCTION 14277fb9a FUN_14277fb9a body=59 status=ok
// SIG undefined FUN_14277fb9a(void)

void FUN_14277fb9a(void)

{
  FUN_144760e21(DAT_14c867930,DAT_14c867938);
  if (DAT_14c867930 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x00014277fbc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c867908);
  return;
}



// FUNCTION 14277fbd5 FUN_14277fbd5 body=49 status=ok
// SIG undefined FUN_14277fbd5(void)

void FUN_14277fbd5(void)

{
  FUN_144760e21(DAT_14c8670e8,DAT_14c8670f0);
  if (DAT_14c8670e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fc06 FUN_14277fc06 body=49 status=ok
// SIG undefined FUN_14277fc06(void)

void FUN_14277fc06(void)

{
  FUN_144760e21(DAT_14c867950,DAT_14c867958);
  if (DAT_14c867950 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fc37 FUN_14277fc37 body=49 status=ok
// SIG undefined FUN_14277fc37(void)

void FUN_14277fc37(void)

{
  FUN_144760e21(DAT_14c868838,DAT_14c868840);
  if (DAT_14c868838 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fc68 FUN_14277fc68 body=49 status=ok
// SIG undefined FUN_14277fc68(void)

void FUN_14277fc68(void)

{
  FUN_144760e21(DAT_14c868850,DAT_14c868858);
  if (DAT_14c868850 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fc99 FUN_14277fc99 body=49 status=ok
// SIG undefined FUN_14277fc99(void)

void FUN_14277fc99(void)

{
  FUN_144760e21(DAT_14c868868,DAT_14c868870);
  if (DAT_14c868868 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fcca FUN_14277fcca body=49 status=ok
// SIG undefined FUN_14277fcca(void)

void FUN_14277fcca(void)

{
  FUN_144760e21(DAT_14c868820,DAT_14c868828);
  if (DAT_14c868820 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fcfb FUN_14277fcfb body=49 status=ok
// SIG undefined FUN_14277fcfb(void)

void FUN_14277fcfb(void)

{
  FUN_144760e21(DAT_14c867968,DAT_14c867970);
  if (DAT_14c867968 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fd2c FUN_14277fd2c body=49 status=ok
// SIG undefined FUN_14277fd2c(void)

void FUN_14277fd2c(void)

{
  FUN_144760e21(DAT_14c867980,DAT_14c867988);
  if (DAT_14c867980 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fd5d FUN_14277fd5d body=49 status=ok
// SIG undefined FUN_14277fd5d(void)

void FUN_14277fd5d(void)

{
  FUN_144760e21(DAT_14c867998,DAT_14c8679a0);
  if (DAT_14c867998 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fd8e FUN_14277fd8e body=49 status=ok
// SIG undefined FUN_14277fd8e(void)

void FUN_14277fd8e(void)

{
  FUN_144760e21(DAT_14c8679b0,DAT_14c8679b8);
  if (DAT_14c8679b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fdbf FUN_14277fdbf body=49 status=ok
// SIG undefined FUN_14277fdbf(void)

void FUN_14277fdbf(void)

{
  FUN_144760e21(DAT_14c8679c8,DAT_14c8679d0);
  if (DAT_14c8679c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fdf0 FUN_14277fdf0 body=49 status=ok
// SIG undefined FUN_14277fdf0(void)

void FUN_14277fdf0(void)

{
  FUN_144760e21(DAT_14c8679e0,DAT_14c8679e8);
  if (DAT_14c8679e0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fe21 FUN_14277fe21 body=49 status=ok
// SIG undefined FUN_14277fe21(void)

void FUN_14277fe21(void)

{
  FUN_144760e21(DAT_14c8679f8,DAT_14c867a00);
  if (DAT_14c8679f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fe52 FUN_14277fe52 body=49 status=ok
// SIG undefined FUN_14277fe52(void)

void FUN_14277fe52(void)

{
  FUN_144760e21(DAT_14c867a10,DAT_14c867a18);
  if (DAT_14c867a10 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fe83 FUN_14277fe83 body=49 status=ok
// SIG undefined FUN_14277fe83(void)

void FUN_14277fe83(void)

{
  FUN_144760e21(DAT_14c867a28,DAT_14c867a30);
  if (DAT_14c867a28 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277feb4 FUN_14277feb4 body=49 status=ok
// SIG undefined FUN_14277feb4(void)

void FUN_14277feb4(void)

{
  FUN_144760e21(DAT_14c867a40,DAT_14c867a48);
  if (DAT_14c867a40 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277fee5 FUN_14277fee5 body=49 status=ok
// SIG undefined FUN_14277fee5(void)

void FUN_14277fee5(void)

{
  FUN_144760e21(DAT_14c867a58,DAT_14c867a60);
  if (DAT_14c867a58 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ff16 FUN_14277ff16 body=49 status=ok
// SIG undefined FUN_14277ff16(void)

void FUN_14277ff16(void)

{
  FUN_144760e21(DAT_14c86a930,DAT_14c86a938);
  if (DAT_14c86a930 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ff47 FUN_14277ff47 body=49 status=ok
// SIG undefined FUN_14277ff47(void)

void FUN_14277ff47(void)

{
  FUN_144760e21(DAT_14c86a948,DAT_14c86a950);
  if (DAT_14c86a948 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ff78 FUN_14277ff78 body=49 status=ok
// SIG undefined FUN_14277ff78(void)

void FUN_14277ff78(void)

{
  FUN_144760e21(DAT_14c86a960,DAT_14c86a968);
  if (DAT_14c86a960 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ffa9 FUN_14277ffa9 body=49 status=ok
// SIG undefined FUN_14277ffa9(void)

void FUN_14277ffa9(void)

{
  FUN_144760e21(DAT_14c86a978,DAT_14c86a980);
  if (DAT_14c86a978 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14277ffda FUN_14277ffda body=49 status=ok
// SIG undefined FUN_14277ffda(void)

void FUN_14277ffda(void)

{
  FUN_144760e21(DAT_14c86a990,DAT_14c86a998);
  if (DAT_14c86a990 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14278000b FUN_14278000b body=49 status=ok
// SIG undefined FUN_14278000b(void)

void FUN_14278000b(void)

{
  FUN_144760e21(DAT_14c868788,DAT_14c868790);
  if (DAT_14c868788 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14278003c FUN_14278003c body=49 status=ok
// SIG undefined FUN_14278003c(void)

void FUN_14278003c(void)

{
  FUN_144760e21(DAT_14c868758,DAT_14c868760);
  if (DAT_14c868758 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14278006d FUN_14278006d body=49 status=ok
// SIG undefined FUN_14278006d(void)

void FUN_14278006d(void)

{
  FUN_144760e21(DAT_14c868770,DAT_14c868778);
  if (DAT_14c868770 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14278009e FUN_14278009e body=59 status=ok
// SIG undefined FUN_14278009e(void)

void FUN_14278009e(void)

{
  FUN_144760e21(DAT_14c867a98,DAT_14c867aa0);
  if (DAT_14c867a98 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427800cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c867a70);
  return;
}



// FUNCTION 1427800d9 FUN_1427800d9 body=49 status=ok
// SIG undefined FUN_1427800d9(void)

void FUN_1427800d9(void)

{
  FUN_144760e21(DAT_14c8687a0,DAT_14c8687a8);
  if (DAT_14c8687a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14278010a FUN_14278010a body=49 status=ok
// SIG undefined FUN_14278010a(void)

void FUN_14278010a(void)

{
  FUN_144760e21(DAT_14c867ab8,DAT_14c867ac0);
  if (DAT_14c867ab8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14278013b FUN_14278013b body=49 status=ok
// SIG undefined FUN_14278013b(void)

void FUN_14278013b(void)

{
  FUN_144760e21(DAT_14c867ad0,DAT_14c867ad8);
  if (DAT_14c867ad0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14278016c FUN_14278016c body=49 status=ok
// SIG undefined FUN_14278016c(void)

void FUN_14278016c(void)

{
  FUN_144760e21(DAT_14c867ae8,DAT_14c867af0);
  if (DAT_14c867ae8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14278019d FUN_14278019d body=59 status=ok
// SIG undefined FUN_14278019d(void)

void FUN_14278019d(void)

{
  FUN_144760e21(DAT_14c867b28,DAT_14c867b30);
  if (DAT_14c867b28 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001427801ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c867b00);
  return;
}



// FUNCTION 1427801d8 FUN_1427801d8 body=91 status=ok
// SIG undefined FUN_1427801d8(void)

void FUN_1427801d8(void)

{
  if (DAT_14c867b50 != 0) {
    if (DAT_14c867b48 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c867b48)(DAT_14c867b48,0);
    FUN_1446efa72(&DAT_14c867b48,0,0,0x10);
    DAT_14c867b50 = 0;
  }
  if (DAT_14c867b48 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142780233 FUN_142780233 body=91 status=ok
// SIG undefined FUN_142780233(void)

void FUN_142780233(void)

{
  if (DAT_14c8688e0 != 0) {
    if (DAT_14c8688d8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c8688d8)(DAT_14c8688d8,0);
    FUN_1446efa72(&DAT_14c8688d8,0,0,0x10);
    DAT_14c8688e0 = 0;
  }
  if (DAT_14c8688d8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}


