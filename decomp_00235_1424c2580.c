// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1424c2580 Unwind@1424c2580 body=36 status=ok
// SIG undefined Unwind@1424c2580(void)

void Unwind_1424c2580(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424c25b0 Unwind@1424c25b0 body=36 status=ok
// SIG undefined Unwind@1424c25b0(void)

void Unwind_1424c25b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424c25e0 FUN_1424c25e0 body=843 status=ok
// SIG undefined FUN_1424c25e0(void)

int FUN_1424c25e0(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 == 10) {
    if (*(short *)(param_1 + 8) < 0) {
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar2 = (int)*(short *)(param_1 + 8) >> 5;
    }
    cVar1 = FUN_1424a7e30(param_1,0,iVar2,&DAT_14993b2be,0,1);
    if (cVar1 == '\0') {
      param_2 = 0x15;
    }
    else {
      if (*(short *)(param_1 + 8) < 0) {
        iVar2 = *(int *)(param_1 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_1 + 8) >> 5;
      }
      cVar1 = FUN_1424a7e30(param_1,0,iVar2,&DAT_14993b2c2,0,1);
      if (cVar1 == '\0') {
        param_2 = 0x16;
      }
      else {
        if (*(short *)(param_1 + 8) < 0) {
          iVar2 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar2 = (int)*(short *)(param_1 + 8) >> 5;
        }
        cVar1 = FUN_1424a7e30(param_1,0,iVar2,&DAT_14993b2c6,0,1);
        if (cVar1 == '\0') {
          param_2 = 0x17;
        }
        else {
          if (*(short *)(param_1 + 8) < 0) {
            iVar2 = *(int *)(param_1 + 0xc);
          }
          else {
            iVar2 = (int)*(short *)(param_1 + 8) >> 5;
          }
          cVar1 = FUN_1424a7e30(param_1,0,iVar2,&DAT_14993b2ca,0,1);
          if (cVar1 == '\0') {
            param_2 = 0x19;
          }
          else {
            if (*(short *)(param_1 + 8) < 0) {
              iVar2 = *(int *)(param_1 + 0xc);
            }
            else {
              iVar2 = (int)*(short *)(param_1 + 8) >> 5;
            }
            cVar1 = FUN_1424a7e30(param_1,0,iVar2,&DAT_14993b2ce,0,1);
            if (cVar1 == '\0') {
              param_2 = 0x18;
            }
            else {
              if (*(short *)(param_1 + 8) < 0) {
                iVar2 = *(int *)(param_1 + 0xc);
              }
              else {
                iVar2 = (int)*(short *)(param_1 + 8) >> 5;
              }
              cVar1 = FUN_1424a7e30(param_1,0,iVar2,&DAT_14993b2d2,0,2);
              if (cVar1 == '\0') {
                param_2 = 0x14;
              }
              else {
                if (*(short *)(param_1 + 8) < 0) {
                  iVar2 = *(int *)(param_1 + 0xc);
                }
                else {
                  iVar2 = (int)*(short *)(param_1 + 8) >> 5;
                }
                cVar1 = FUN_1424a7e30(param_1,0,iVar2,&DAT_14993b2d8,0,3);
                if (cVar1 == '\0') {
                  param_2 = 0xb;
                }
                else {
                  cVar1 = FUN_1424c19f0(param_1,&DAT_14993b2e0,2);
                  if (cVar1 == '\0') {
                    param_2 = 0xf;
                  }
                  else {
                    cVar1 = FUN_1424c19f0(param_1,L"within",6);
                    if (cVar1 == '\0') {
                      param_2 = 0x13;
                    }
                    else {
                      cVar1 = FUN_1424c19f0(param_1,&DAT_14993b2f4,3);
                      if (cVar1 == '\0') {
                        param_2 = 0xe;
                      }
                      else {
                        cVar1 = FUN_1424c19f0(param_1,&DAT_14993b2fc,3);
                        if (cVar1 == '\0') {
                          param_2 = 0xd;
                        }
                        else {
                          cVar1 = FUN_1424c19f0(param_1,&DAT_14993b304,2);
                          if (cVar1 == '\0') {
                            param_2 = 0xc;
                          }
                          else {
                            cVar1 = FUN_1424c19f0(param_1,L"decimal",7);
                            if (cVar1 == '\0') {
                              param_2 = 0x1a;
                            }
                            else {
                              cVar1 = FUN_1424c19f0(param_1,L"integer",7);
                              param_2 = 10;
                              if (cVar1 == '\0') {
                                param_2 = 0x1b;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1424c2930 Unwind@1424c2930 body=36 status=ok
// SIG undefined Unwind@1424c2930(void)

void Unwind_1424c2930(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x30) = &DAT_14993b2be;
  return;
}



// FUNCTION 1424c2960 Unwind@1424c2960 body=36 status=ok
// SIG undefined Unwind@1424c2960(void)

void Unwind_1424c2960(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x40) = &DAT_14993b2c2;
  return;
}



// FUNCTION 1424c2990 Unwind@1424c2990 body=36 status=ok
// SIG undefined Unwind@1424c2990(void)

void Unwind_1424c2990(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x50) = &DAT_14993b2c6;
  return;
}



// FUNCTION 1424c29c0 Unwind@1424c29c0 body=36 status=ok
// SIG undefined Unwind@1424c29c0(void)

void Unwind_1424c29c0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x60) = &DAT_14993b2ca;
  return;
}



// FUNCTION 1424c29f0 Unwind@1424c29f0 body=36 status=ok
// SIG undefined Unwind@1424c29f0(void)

void Unwind_1424c29f0(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x70) = &DAT_14993b2ce;
  return;
}



// FUNCTION 1424c2a20 Unwind@1424c2a20 body=36 status=ok
// SIG undefined Unwind@1424c2a20(void)

void Unwind_1424c2a20(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x80) = &DAT_14993b2d2;
  return;
}



// FUNCTION 1424c2a50 Unwind@1424c2a50 body=36 status=ok
// SIG undefined Unwind@1424c2a50(void)

void Unwind_1424c2a50(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x90) = &DAT_14993b2d8;
  return;
}



// FUNCTION 1424c2a80 FUN_1424c2a80 body=34 status=ok
// SIG undefined FUN_1424c2a80(void)

undefined8 FUN_1424c2a80(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 < 1) {
    if (*(int *)(param_1 + 0x78) < *(int *)(param_1 + 0x88)) {
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
      uVar1 = FUN_142516630(param_1 + 0x80);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1424c2ab0 FUN_1424c2ab0 body=8 status=ok
// SIG undefined FUN_1424c2ab0(void)

void FUN_1424c2ab0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 1424c2ac0 FUN_1424c2ac0 body=7 status=ok
// SIG undefined FUN_1424c2ac0(void)

undefined4 FUN_1424c2ac0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}



// FUNCTION 1424c2ad0 FUN_1424c2ad0 body=835 status=ok
// SIG undefined FUN_1424c2ad0(void)

void FUN_1424c2ad0(longlong param_1,double param_2)

{
  char *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double _X;
  double dVar10;
  undefined1 auStack_b8 [32];
  char local_98 [40];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  _X = ABS(param_2);
  dVar8 = floor(_X);
  if ((_X != dVar8) || (NAN(_X) || NAN(dVar8))) {
    dVar10 = _X * 10.0;
    dVar9 = floor(dVar10);
    if ((dVar10 != dVar9) || (NAN(dVar10) || NAN(dVar9))) {
      dVar10 = _X * 100.0;
      dVar9 = floor(dVar10);
      if ((dVar10 != dVar9) || (NAN(dVar10) || NAN(dVar9))) {
        dVar10 = _X * 1000.0;
        dVar9 = floor(dVar10);
        if ((dVar10 != dVar9) || (NAN(dVar10) || NAN(dVar9))) {
          local_98[0x10] = '\0';
          local_98[0x11] = '\0';
          local_98[0x12] = '\0';
          local_98[0x13] = '\0';
          local_98[0x14] = '\0';
          local_98[0x15] = '\0';
          local_98[0x16] = '\0';
          local_98[0x17] = '\0';
          local_98[0x18] = '\0';
          local_98[0x19] = '\0';
          local_98[0x1a] = '\0';
          local_98[0x1b] = '\0';
          local_98[0x1c] = '\0';
          local_98[0x1d] = '\0';
          local_98[0] = '\0';
          local_98[1] = '\0';
          local_98[2] = '\0';
          local_98[3] = '\0';
          local_98[4] = '\0';
          local_98[5] = '\0';
          local_98[6] = '\0';
          local_98[7] = '\0';
          local_98[8] = '\0';
          local_98[9] = '\0';
          local_98[10] = '\0';
          local_98[0xb] = '\0';
          local_98[0xc] = '\0';
          local_98[0xd] = '\0';
          local_98[0xe] = '\0';
          local_98[0xf] = '\0';
          FUN_1424c2e40(local_98,"%1.15e",_X);
          iVar4 = atoi(local_98 + 0x12);
          lVar7 = 0xf;
          if (local_98[0x10] == '0') {
            lVar7 = 0xf;
            do {
              pcVar1 = local_98 + lVar7;
              lVar7 = lVar7 + -1;
            } while (*pcVar1 == '0');
          }
          iVar4 = (int)lVar7 - iVar4;
        }
        else {
          iVar4 = 3;
        }
      }
      else {
        iVar4 = 2;
      }
    }
    else {
      iVar4 = 1;
    }
    dVar9 = floor(param_2);
    lVar7 = 0;
    if (((dVar9 != param_2) || (NAN(dVar9) || NAN(param_2))) && (iVar4 != 0)) {
      cVar2 = FUN_1424d9700(param_2);
      if ((cVar2 != '\0') || (cVar2 = FUN_1424d9760(param_2), cVar2 != '\0')) goto LAB_1424c2c5b;
      dVar8 = _X - dVar8;
      if (iVar4 == 3) {
        iVar4 = 3;
        lVar7 = (longlong)(dVar8 * 1000.0 + 0.5);
      }
      else if (iVar4 == 2) {
        iVar4 = 2;
        lVar7 = (longlong)(dVar8 * 100.0 + 0.5);
      }
      else if (iVar4 == 1) {
        iVar4 = 1;
        lVar7 = (longlong)(dVar8 * 10.0 + 0.5);
      }
      else {
        dVar9 = pow(10.0,(double)iVar4);
        dVar8 = floor(dVar9 * dVar8 + 0.5);
        lVar7 = 0x7fffffffffffffff;
        if (dVar8 <= 9.223372036854776e+18) {
          lVar7 = (longlong)dVar8;
        }
      }
    }
  }
  else {
    iVar4 = 0;
LAB_1424c2c5b:
    lVar7 = 0;
  }
  *(bool *)(param_1 + 0x39) = param_2 < 0.0;
  *(double *)(param_1 + 0x10) = _X;
  uVar3 = FUN_1424d9700(_X);
  *(undefined1 *)(param_1 + 0x3a) = uVar3;
  cVar2 = FUN_1424d9730(*(undefined8 *)(param_1 + 0x10));
  *(char *)(param_1 + 0x3b) = cVar2;
  if (cVar2 == '\0' && *(char *)(param_1 + 0x3a) == '\0') {
    lVar5 = (longlong)*(double *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x30) = lVar5;
    *(bool *)(param_1 + 0x38) = (double)lVar5 == *(double *)(param_1 + 0x10);
    *(int *)(param_1 + 0x18) = iVar4;
    *(longlong *)(param_1 + 0x20) = lVar7;
    if (lVar7 != 0) {
      uVar6 = lVar7 * -0x3333333333333333 + 0x1999999999999998;
      for (uVar6 = uVar6 >> 1 | (ulonglong)((uVar6 & 1) != 0) << 0x3f; uVar6 < 0x1999999999999999;
          uVar6 = uVar6 >> 1 | (ulonglong)((uVar6 & 1) != 0) << 0x3f) {
        lVar7 = lVar7 / 10;
        uVar6 = lVar7 * -0x3333333333333333 + 0x1999999999999998;
      }
      goto LAB_1424c2d48;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  lVar7 = 0;
LAB_1424c2d48:
  *(longlong *)(param_1 + 0x28) = lVar7;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1424c2e40 FUN_1424c2e40 body=118 status=ok
// SIG undefined FUN_1424c2e40(void)

void FUN_1424c2e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res18;
  puVar1 = (ulonglong *)FUN_144737586();
  local_38 = 0;
  local_30 = &local_res18;
  __stdio_common_vsprintf(*puVar1 | 1,param_1,0xffffffffffffffff,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424c2ec0 FUN_1424c2ec0 body=74 status=ok
// SIG undefined FUN_1424c2ec0(void)

double FUN_1424c2ec0(longlong param_1,undefined4 param_2)

{
  double dVar1;
  
  switch(param_2) {
  case 0:
    dVar1 = *(double *)(param_1 + 0x10);
    break;
  case 1:
    dVar1 = (double)*(longlong *)(param_1 + 0x30);
    break;
  case 2:
    dVar1 = (double)*(longlong *)(param_1 + 0x20);
    break;
  case 3:
    dVar1 = (double)*(longlong *)(param_1 + 0x28);
    break;
  case 4:
    dVar1 = (double)*(int *)(param_1 + 0x18);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return dVar1;
}



// FUNCTION 1424c2f10 FUN_1424c2f10 body=8 status=ok
// SIG undefined FUN_1424c2f10(void)

bool FUN_1424c2f10(longlong param_1)

{
  return *(char *)(param_1 + 0x3a) != '\0';
}



// FUNCTION 1424c2f20 FUN_1424c2f20 body=8 status=ok
// SIG undefined FUN_1424c2f20(void)

bool FUN_1424c2f20(longlong param_1)

{
  return *(char *)(param_1 + 0x3b) != '\0';
}



// FUNCTION 1424c2f30 FUN_1424c2f30 body=8 status=ok
// SIG undefined FUN_1424c2f30(void)

bool FUN_1424c2f30(longlong param_1)

{
  return *(char *)(param_1 + 0x38) != '\0';
}



// FUNCTION 1424c2f40 FUN_1424c2f40 body=70 status=ok
// SIG undefined FUN_1424c2f40(void)

undefined8 * FUN_1424c2f40(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::PluralRules::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424c2f90 FUN_1424c2f90 body=70 status=ok
// SIG undefined FUN_1424c2f90(void)

undefined8 * FUN_1424c2f90(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::SharedPluralRules::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424c2fe0 FUN_1424c2fe0 body=97 status=ok
// SIG undefined FUN_1424c2fe0(void)

undefined8 * FUN_1424c2fe0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::AndConstraint::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[3] = 0;
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[5] = 0;
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424c3050 FUN_1424c3050 body=97 status=ok
// SIG undefined FUN_1424c3050(void)

undefined8 * FUN_1424c3050(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::OrConstraint::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[1] = 0;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424c30c0 FUN_1424c30c0 body=111 status=ok
// SIG undefined FUN_1424c30c0(void)

undefined8 * FUN_1424c30c0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::RuleChain::vftable;
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140859a90(param_1 + 0x13);
  FUN_140859a90(param_1 + 0xb);
  FUN_140859a90(param_1 + 1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424c3130 FUN_1424c3130 body=52 status=ok
// SIG undefined FUN_1424c3130(void)

undefined8 * FUN_1424c3130(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::PluralRuleParser::vftable;
  FUN_140859a90(param_1 + 3);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424c3170 FUN_1424c3170 body=63 status=ok
// SIG undefined FUN_1424c3170(void)

undefined8 * FUN_1424c3170(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::PluralKeywordEnumeration::vftable;
  FUN_142515ff0(param_1 + 0x10);
  FUN_14250a7a0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424c31b0 FUN_1424c31b0 body=50 status=ok
// SIG undefined FUN_1424c31b0(void)

longlong FUN_1424c31b0(longlong param_1,int param_2)

{
  FUN_1424b70d0(param_1 + 8);
  FUN_142537d00(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424c31f0 FUN_1424c31f0 body=47 status=ok
// SIG undefined FUN_1424c31f0(void)

longlong FUN_1424c31f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1424b70d0();
  FUN_142537d00(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424c3220 FUN_1424c3220 body=167 status=ok
// SIG undefined FUN_1424c3220(void)

void FUN_1424c3220(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  int *param_5)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  int *local_38;
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *param_5) goto LAB_1424c32ba;
  local_24 = 0;
  local_30 = 0;
  local_38 = &local_24;
  FUN_14253f870(param_1,param_2,&local_30,param_3);
  lVar1 = local_30;
  if ((local_24 < 1) && (*param_4 != local_30)) {
    if (*param_4 != 0) {
      FUN_142537ca0();
    }
    *param_4 = lVar1;
    if (lVar1 != 0) {
      FUN_142537c90(lVar1);
LAB_1424c32a3:
      FUN_142537ca0(lVar1);
    }
  }
  else if (local_30 != 0) goto LAB_1424c32a3;
  if ((*param_5 == 0) || (0 < local_24)) {
    *param_5 = local_24;
  }
LAB_1424c32ba:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1424c32d0 FUN_1424c32d0 body=60 status=ok
// SIG undefined FUN_1424c32d0(void)

undefined8 * FUN_1424c32d0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::LocaleCacheKey<icu_64::SharedPluralRules>::vftable;
  FUN_1414b3f60(param_1 + 2);
  thunk_FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424c3310 FUN_1424c3310 body=76 status=ok
// SIG undefined FUN_1424c3310(void)

int FUN_1424c3310(longlong param_1)

{
  int iVar1;
  int iVar2;
  char *_Str;
  size_t sVar3;
  
  _Str = (char *)__std_type_info_name(0x14c6d8a68,&DAT_14c793310);
  sVar3 = strlen(_Str);
  iVar1 = FUN_142504d90(_Str,sVar3 & 0xffffffff);
  iVar2 = FUN_1424a4050(param_1 + 0x10);
  return iVar2 + iVar1 * 0x25;
}



// FUNCTION 1424c3360 FUN_1424c3360 body=102 status=ok
// SIG undefined FUN_1424c3360(void)

undefined8 * FUN_1424c3360(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::CacheKeyBase::vftable;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
    *puVar1 = icu_64::LocaleCacheKey<icu_64::SharedPluralRules>::vftable;
    FUN_1424a3ce0(puVar1 + 2,param_1 + 0x10);
  }
  return puVar1;
}



// FUNCTION 1424c33d0 Unwind@1424c33d0 body=43 status=ok
// SIG undefined Unwind@1424c33d0(void)

void Unwind_1424c33d0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  thunk_FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1424c3400 FUN_1424c3400 body=94 status=ok
// SIG undefined FUN_1424c3400(void)

undefined8 FUN_1424c3400(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    uVar4 = 1;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if (iVar1 == 0) {
      uVar4 = FUN_1424a3f70(param_1 + 0x10,param_2 + 0x10);
      return uVar4;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1424c3460 FUN_1424c3460 body=43 status=ok
// SIG undefined FUN_1424c3460(void)

char * FUN_1424c3460(longlong param_1,char *param_2,int param_3)

{
  strncpy(param_2,*(char **)(param_1 + 0x38),(longlong)param_3);
  param_2[(longlong)param_3 - 1] = '\0';
  return param_2;
}



// FUNCTION 1424c3490 FUN_1424c3490 body=289 status=ok
// SIG undefined FUN_1424c3490(void)

void FUN_1424c3490(void)

{
  bool bVar1;
  undefined1 auVar2 [16];
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  
  FUN_1424c36a0();
  uVar7 = (ulonglong)(int)DAT_14c77eaf8;
  DAT_14c77eae0 = DAT_14c77eaf8;
  puVar9 = DAT_14c77eae8;
  if (uVar7 != 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7;
    uVar5 = 0xffffffffffffffff;
    if (SUB168(auVar2 * ZEXT816(0xe0),8) == 0) {
      uVar5 = SUB168(auVar2 * ZEXT816(0xe0),0) | 8;
    }
    puVar3 = (ulonglong *)thunk_FUN_1424da030(uVar5);
    if (puVar3 == (ulonglong *)0x0) {
      puVar9 = (ulonglong *)0x0;
    }
    else {
      *puVar3 = uVar7;
      lVar4 = 0;
      puVar8 = puVar3 + 1;
      do {
        FUN_1424a3c00(puVar8);
        puVar8 = puVar8 + 0x1c;
        lVar4 = lVar4 + -0xe0;
        puVar9 = puVar3 + 1;
      } while (uVar7 * -0xe0 - lVar4 != 0);
    }
  }
  DAT_14c77eae8 = puVar9;
  if (DAT_14c77eae8 == (ulonglong *)0x0) {
    DAT_14c77eae0 = 0;
  }
  else {
    uVar7 = (ulonglong)DAT_14c77eae0;
    if (0 < (int)DAT_14c77eae0) {
      do {
        uVar5 = uVar7 - 1;
        puVar9 = DAT_14c77eae8 + (uVar5 & 0xffffffff) * 0x1c;
        FUN_1424c36a0();
        if ((int)DAT_14c77eaf8 < (int)uVar5) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(DAT_14c77eb00 + (uVar5 & 0xffffffff) * 8);
        }
        thunk_FUN_1424a3640(puVar9,uVar6);
        bVar1 = 1 < uVar7;
        uVar7 = uVar5;
      } while (bVar1);
    }
  }
  FUN_1424d6720(7,FUN_1424c3620);
  return;
}



// FUNCTION 1424c35c0 Unwind@1424c35c0 body=81 status=ok
// SIG undefined Unwind@1424c35c0(void)

void Unwind_1424c35c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_2 + 0x28) != 0) {
    lVar2 = -*(longlong *)(param_2 + 0x28);
    lVar1 = *(longlong *)(param_2 + 0x30);
    do {
      FUN_1414b3f60(lVar1 + -0xd8 + lVar2);
      lVar2 = lVar2 + -0xe0;
    } while (lVar2 != 0);
  }
  FUN_1424b70c0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424c3620 FUN_1424c3620 body=113 status=ok
// SIG undefined FUN_1424c3620(void)

undefined8 FUN_1424c3620(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_14c77eae8 != 0) {
    lVar1 = DAT_14c77eae8 + -8;
    if (*(longlong *)(DAT_14c77eae8 + -8) != 0) {
      lVar3 = *(longlong *)(DAT_14c77eae8 + -8) * 0xe0;
      lVar4 = DAT_14c77eae8 + -0xe0;
      do {
        FUN_1414b3f60(lVar4 + lVar3);
        lVar3 = lVar3 + -0xe0;
      } while (lVar3 != 0);
    }
    FUN_1424b70c0(lVar1);
    DAT_14c77eae8 = 0;
  }
  uVar2 = DAT_14c77eb08;
  DAT_14c77eae0 = 0;
  LOCK();
  DAT_14c77eb08 = 0;
  UNLOCK();
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}



// FUNCTION 1424c36a0 FUN_1424c36a0 body=380 status=ok
// SIG undefined FUN_1424c36a0(void)

void FUN_1424c36a0(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 local_118 [200];
  longlong local_50;
  int local_44 [3];
  
  local_44[1] = -2;
  local_44[2] = -1;
  if (DAT_14c77eaf0 != 2) {
    cVar2 = FUN_142501800(&DAT_14c77eaf0);
    if (cVar2 != '\0') {
      local_44[0] = 0;
      DAT_14c77eaf8 = 0;
      local_50 = FUN_1424edad0(0,"res_index",local_44);
      FUN_1424ea920(local_118);
      lVar1 = local_50;
      FUN_1424ecc30(local_50,"InstalledLocales",local_118,local_44);
      if (local_44[0] < 1) {
        iVar3 = FUN_1424eaf70(local_118);
        DAT_14c77eb00 = FUN_1424da030((longlong)iVar3 * 8 + 8);
        if (DAT_14c77eb00 != 0) {
          FUN_1424eaf80(local_118);
          cVar2 = FUN_1424eaf90(local_118);
          if (cVar2 == '\0') {
            uVar5 = 0;
          }
          else {
            lVar4 = 0;
            uVar5 = 0;
            do {
              uVar5 = uVar5 + 1;
              FUN_1424eafb0(local_118,0,DAT_14c77eb00 + lVar4,local_44);
              cVar2 = FUN_1424eaf90(local_118);
              lVar4 = lVar4 + 8;
            } while (cVar2 != '\0');
            uVar5 = uVar5 & 0xffffffff;
          }
          *(undefined8 *)(DAT_14c77eb00 + uVar5 * 8) = 0;
          DAT_14c77eaf8 = iVar3;
          FUN_1424d6720(8,FUN_1424c3860);
        }
      }
      FUN_1424ea970(local_118);
      if (lVar1 != 0) {
        FUN_1424ea9f0(lVar1);
      }
      FUN_1425019c0(&DAT_14c77eaf0);
    }
  }
  return;
}



// FUNCTION 1424c3820 Unwind@1424c3820 body=59 status=ok
// SIG undefined Unwind@1424c3820(void)

void Unwind_1424c3820(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xe8) != 0) {
    FUN_1424ea9f0(*(longlong *)(param_2 + 0xe8));
  }
  return;
}



// FUNCTION 1424c3860 FUN_1424c3860 body=57 status=ok
// SIG undefined FUN_1424c3860(void)

undefined8 FUN_1424c3860(void)

{
  if (DAT_14c77eb00 != 0) {
    DAT_14c77eb00 = 0;
    DAT_14c77eaf8 = 0;
    LOCK();
    DAT_14c77eaf0 = 0;
    UNLOCK();
    FUN_1424da110();
  }
  return 1;
}



// FUNCTION 1424c38a0 FUN_1424c38a0 body=397 status=ok
// SIG undefined FUN_1424c38a0(void)

void FUN_1424c38a0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined1 auStack_308 [32];
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  longlong local_2d8;
  int local_2d0;
  int *local_2c8;
  int local_2c0;
  int local_2bc;
  undefined1 local_2b8 [632];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2c0 = 0;
  if ((param_4 < 0) || ((param_3 == 0 && (param_4 != 0)))) {
LAB_1424c395d:
    iVar1 = 1;
  }
  else {
    local_2bc = 0;
    iVar1 = FUN_1424e8c40(param_1,local_2b8,0x274,&local_2bc);
    if ((0 < local_2bc) || (local_2bc == -0x7c)) goto LAB_1424c395d;
    if (iVar1 == 0) {
      FUN_142504cc0(param_3,param_4,0,&local_2c0);
    }
    else {
      local_2c8 = &local_2c0;
      local_2e8 = local_2b8;
      local_2e0 = local_2b8;
      local_2d8 = param_3;
      local_2d0 = param_4;
      FUN_1424c4f70("icudt64l-lang",param_2,"Scripts%stand-alone",0);
    }
    iVar1 = local_2c0;
    if (local_2c0 == -0x7f) {
      if ((param_5 != (int *)0x0) && (*param_5 < 1)) {
        local_2bc = 0;
        iVar1 = FUN_1424e8c40(param_1,local_2b8,0x274,&local_2bc);
        if ((local_2bc < 1) && (local_2bc != -0x7c)) {
          if (iVar1 == 0) {
            FUN_142504cc0(param_3,param_4,0,param_5);
          }
          else {
            local_2c8 = param_5;
            local_2e8 = local_2b8;
            local_2e0 = local_2b8;
            local_2d8 = param_3;
            local_2d0 = param_4;
            FUN_1424c4f70("icudt64l-lang",param_2,"Scripts",0);
          }
        }
        else {
          *param_5 = 1;
        }
      }
      goto LAB_1424c3966;
    }
  }
  *param_5 = iVar1;
LAB_1424c3966:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_308);
}



// FUNCTION 1424c3a50 FUN_1424c3a50 body=224 status=ok
// SIG undefined FUN_1424c3a50(void)

void FUN_1424c3a50(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined1 auStack_308 [32];
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  longlong local_2d8;
  int local_2d0;
  int *local_2c8;
  int local_2bc;
  undefined1 local_2b8 [640];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if ((param_5 != (int *)0x0) && (*param_5 < 1)) {
    if ((-1 < param_4) && ((param_3 != 0 || (param_4 == 0)))) {
      local_2bc = 0;
      iVar1 = FUN_1424e8d90(param_1,local_2b8,0x274,&local_2bc);
      if ((local_2bc < 1) && (local_2bc != -0x7c)) {
        if (iVar1 == 0) {
          FUN_142504cc0(param_3,param_4,0,param_5);
        }
        else {
          local_2c8 = param_5;
          local_2e8 = local_2b8;
          local_2e0 = local_2b8;
          local_2d8 = param_3;
          local_2d0 = param_4;
          FUN_1424c4f70("icudt64l-region",param_2,"Countries",0);
        }
        goto LAB_1424c3aa5;
      }
    }
    *param_5 = 1;
  }
LAB_1424c3aa5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_308);
}



// FUNCTION 1424c3b50 FUN_1424c3b50 body=224 status=ok
// SIG undefined FUN_1424c3b50(void)

void FUN_1424c3b50(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined1 auStack_308 [32];
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  longlong local_2d8;
  int local_2d0;
  int *local_2c8;
  int local_2bc;
  undefined1 local_2b8 [640];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if ((param_5 != (int *)0x0) && (*param_5 < 1)) {
    if ((-1 < param_4) && ((param_3 != 0 || (param_4 == 0)))) {
      local_2bc = 0;
      iVar1 = FUN_1424e8ec0(param_1,local_2b8,0x274,&local_2bc);
      if ((local_2bc < 1) && (local_2bc != -0x7c)) {
        if (iVar1 == 0) {
          FUN_142504cc0(param_3,param_4,0,param_5);
        }
        else {
          local_2c8 = param_5;
          local_2e8 = local_2b8;
          local_2e0 = local_2b8;
          local_2d8 = param_3;
          local_2d0 = param_4;
          FUN_1424c4f70("icudt64l-lang",param_2,"Variants",0);
        }
        goto LAB_1424c3ba5;
      }
    }
    *param_5 = 1;
  }
LAB_1424c3ba5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_308);
}



// FUNCTION 1424c3c50 FUN_1424c3c50 body=4094 status=ok
// SIG undefined FUN_1424c3c50(void)

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1424c3c50(undefined8 param_1,undefined8 param_2,wchar_t *param_3,int param_4,uint *param_5)

{
  wchar_t *pwVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 uVar19;
  wchar_t *pwVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined6 uVar24;
  uint uVar25;
  undefined8 unaff_RBP;
  undefined6 uVar26;
  undefined7 uVar29;
  uint *puVar27;
  ulonglong uVar28;
  int iVar30;
  uint uVar31;
  undefined6 uVar32;
  wchar_t wVar33;
  ulonglong uVar34;
  uint *puVar35;
  char cVar36;
  undefined8 in_R11;
  undefined8 uVar37;
  ulonglong uVar38;
  int iVar39;
  uint uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  wchar_t wVar48;
  wchar_t wVar49;
  wchar_t wVar50;
  wchar_t wVar51;
  uint *in_stack_fffffffffffffc08;
  undefined4 uVar52;
  int local_3b4;
  uint *local_3b0;
  ulonglong local_3a8;
  uint local_39c;
  undefined8 local_398;
  undefined8 local_390;
  ulonglong local_388;
  ulonglong local_380;
  undefined8 local_378;
  uint local_36c;
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  int local_34c;
  wchar_t *local_348;
  longlong local_340;
  uint local_334;
  undefined8 local_330;
  longlong local_328;
  ulonglong local_320;
  wchar_t *local_318;
  wchar_t *local_310;
  uint local_308 [178];
  int iVar11;
  
  local_3b4 = 0;
  local_39c = 0;
  if (param_5 == (uint *)0x0) {
    return 0;
  }
  if (0 < (int)*param_5) {
    return 0;
  }
  if ((param_4 < 0) || ((param_3 == (wchar_t *)0x0 && (param_4 != 0)))) {
    *param_5 = 1;
    return 0;
  }
  local_308[0] = 0;
  local_398 = param_2;
  local_378 = param_1;
  lVar12 = FUN_1424ebfe0("icudt64l-lang",param_2,local_308);
  lVar13 = FUN_1424ec1c0(lVar12,"localeDisplayPattern",0,local_308);
  pwVar14 = (wchar_t *)FUN_1424ec010(lVar13,"separator",&local_3b4,local_308);
  puVar27 = &local_39c;
  pwVar15 = (wchar_t *)FUN_1424ec010(lVar13,"pattern",puVar27,local_308);
  if (lVar13 != 0) {
    FUN_1424ea9f0(lVar13);
  }
  if (lVar12 != 0) {
    FUN_1424ea9f0(lVar12);
  }
  if (local_3b4 == 0) {
    pwVar14 = L"{0}, {1}";
  }
  uVar16 = FUN_142504100(pwVar14,&DAT_14993bce2);
  uVar17 = FUN_142504100(pwVar14,&DAT_14993bcea);
  if (((uVar16 == 0) || (uVar17 == 0)) || (uVar17 < uVar16)) {
LAB_1424c3e8f:
    *param_5 = 1;
    uVar22 = 0;
  }
  else {
    lVar12 = uVar16 + 6;
    local_3b4 = (int)(uVar17 - lVar12 >> 1);
    uVar16 = (ulonglong)local_39c;
    uVar24 = (undefined6)((ulonglong)pwVar14 >> 0x10);
    uVar26 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
    local_328 = lVar12;
    if (local_39c == 0) {
LAB_1424c3e9e:
      local_39c = 9;
      pwVar15 = L"{0} ({1})";
      uVar22 = 0;
      local_358 = 5;
      uVar25 = (uint)CONCAT62(uVar24,0x28);
      local_364 = (uint)CONCAT62((int6)(uVar16 >> 0x10),0x5b);
      local_368 = (uint)CONCAT62((int6)((ulonglong)puVar27 >> 0x10),0x29);
      local_36c = (uint)CONCAT62(uVar26,0x5d);
      local_380 = 0;
    }
    else {
      if (local_39c == 9) {
        puVar27 = (uint *)0x0;
        uVar16 = FUN_142504690(pwVar15,L"{0} ({1})",9);
        if ((int)uVar16 == 0) goto LAB_1424c3e9e;
      }
      lVar13 = FUN_142504100(pwVar15,&DAT_14993bce2);
      lVar18 = FUN_142504100(pwVar15,&DAT_14993bcea);
      if ((lVar13 == 0) || (lVar18 == 0)) goto LAB_1424c3e8f;
      uVar16 = (ulonglong)(lVar13 - (longlong)pwVar15) >> 1;
      uVar17 = (ulonglong)(lVar18 - (longlong)pwVar15) >> 1;
      uVar25 = (uint)uVar17;
      uVar31 = (uint)uVar16;
      uVar22 = CONCAT71((int7)((ulonglong)lVar12 >> 8),(int)uVar25 < (int)uVar31);
      local_358 = uVar31;
      if ((int)uVar31 < (int)uVar25) {
        local_358 = uVar25;
      }
      if ((int)uVar25 < (int)uVar31) {
        uVar16 = uVar17;
      }
      uVar25 = (uint)CONCAT62(uVar24,0xff08);
      lVar12 = FUN_142503f80(pwVar15,0xff08);
      uVar32 = (undefined6)((ulonglong)puVar27 >> 0x10);
      local_380 = uVar16 & 0xffffffff;
      if (lVar12 == 0) {
        uVar25 = (uint)CONCAT62(uVar24,0x28);
        local_364 = 0x5b;
        local_368 = (uint)CONCAT62(uVar32,0x29);
        local_36c = (uint)CONCAT62(uVar26,0x5d);
      }
      else {
        local_364 = (uint)CONCAT62((int6)((ulonglong)lVar12 >> 0x10),0xff3b);
        local_368 = (uint)CONCAT62(uVar32,0xff09);
        local_36c = (uint)CONCAT62(uVar26,0xff3d);
      }
    }
    local_334 = (uint)uVar22 & 0xff;
    local_320 = (longlong)param_3 - (longlong)pwVar15;
    auVar43 = pshuflw(ZEXT416(uVar25),ZEXT416(uVar25),0);
    wVar48 = auVar43._0_2_;
    wVar49 = auVar43._2_2_;
    auVar43 = pshuflw(ZEXT416(local_368),ZEXT416(local_368),0);
    wVar50 = auVar43._0_2_;
    wVar51 = auVar43._2_2_;
    auVar43 = pshuflw(ZEXT416(local_364),ZEXT416(local_364),0);
    uVar41 = auVar43._0_4_;
    auVar43 = pshuflw(ZEXT416(local_36c),ZEXT416(local_36c),0);
    uVar42 = auVar43._0_4_;
    local_310 = param_3 + 8;
    local_318 = pwVar15 + 8;
    uVar37 = CONCAT71((int7)((ulonglong)in_R11 >> 8),1);
    uVar19 = 0;
    uVar16 = CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
    local_360 = uVar25;
    local_348 = pwVar15;
    do {
      local_388 = 0;
      uVar25 = (uint)local_380;
      pwVar14 = param_3;
      if (((uVar25 != 0) && (local_388 = local_380 & 0xffffffff, (int)uVar25 <= param_4)) &&
         (local_388 = 0, 0 < (int)uVar25)) {
        uVar17 = local_380 & 0xffffffff;
        if (uVar25 < 0x10) {
          uVar23 = 0;
        }
        else {
          uVar23 = 0;
          if (0x1f < local_320) {
            uVar23 = (ulonglong)(uVar25 & 0xfffffff0);
            pwVar14 = param_3 + uVar23;
            lVar12 = 0;
            do {
              puVar2 = (undefined8 *)((longlong)local_348 + lVar12 + 0x10);
              uVar22 = *puVar2;
              uVar6 = puVar2[1];
              *(undefined1 (*) [16])((longlong)param_3 + lVar12) =
                   *(undefined1 (*) [16])((longlong)local_348 + lVar12);
              puVar2 = (undefined8 *)((longlong)param_3 + lVar12 + 0x10);
              *puVar2 = uVar22;
              puVar2[1] = uVar6;
              lVar12 = lVar12 + 0x20;
            } while ((local_380 >> 4 & 0xfffffff) << 5 != lVar12);
            local_388 = local_380 & 0xffffffff;
            if (uVar23 == uVar17) goto LAB_1424c4130;
          }
        }
        uVar28 = uVar23;
        for (uVar21 = local_380 & 7; uVar21 != 0; uVar21 = uVar21 - 1) {
          pwVar15 = local_348 + uVar28;
          uVar28 = uVar28 + 1;
          *pwVar14 = *pwVar15;
          pwVar14 = pwVar14 + 1;
        }
        local_388 = local_380 & 0xffffffff;
        if (6 < ~uVar23 + uVar17) {
          do {
            *pwVar14 = local_348[uVar28];
            pwVar14[1] = local_348[uVar28 + 1];
            pwVar14[2] = local_348[uVar28 + 2];
            pwVar14[3] = local_348[uVar28 + 3];
            pwVar14[4] = local_348[uVar28 + 4];
            pwVar14[5] = local_348[uVar28 + 5];
            pwVar14[6] = local_348[uVar28 + 6];
            lVar12 = uVar28 + 7;
            uVar28 = uVar28 + 8;
            pwVar14[7] = local_348[lVar12];
            pwVar14 = pwVar14 + 8;
          } while (uVar17 != uVar28);
          local_388 = local_380 & 0xffffffff;
        }
      }
LAB_1424c4130:
      puVar27 = (uint *)0x0;
      uVar25 = 0;
      uVar17 = 0;
      local_35c = 0;
      local_354 = 0;
      local_350 = 0;
      local_340 = 0;
      uVar23 = local_380;
      local_380 = local_380 & 0xffffffff;
      local_330 = uVar19;
      do {
        uVar31 = (uint)uVar17;
        uVar10 = (uint)uVar23;
        iVar30 = param_4 - uVar10;
        if (0 < iVar30) {
          pwVar14 = param_3 + (int)uVar10;
        }
        iVar11 = 0;
        if (0 < iVar30) {
          iVar11 = iVar30;
        }
        if (uVar25 == local_334) {
          bVar7 = true;
          uVar40 = 0;
          if ((char)uVar37 == '\0') {
            uVar31 = *param_5;
            uVar37 = 0;
          }
          else {
            if ((int)*param_5 < 1) {
              if ((iVar30 < 1) || (pwVar14 != (wchar_t *)0x0)) {
                local_3a8 = CONCAT44(local_3a8._4_4_,uVar31);
                local_34c = 0;
                local_3b0 = puVar27;
                iVar30 = FUN_1424e8be0(local_378,local_308,0x274,&local_34c);
                if ((local_34c < 1) && (local_34c != -0x7c)) {
                  if (iVar30 == 0) {
                    local_308[0] = 0x646e75;
                  }
                  in_stack_fffffffffffffc08 = local_308;
                  uVar40 = FUN_1424c4f70("icudt64l-lang",local_398,"Languages",0,
                                         in_stack_fffffffffffffc08,in_stack_fffffffffffffc08,pwVar14
                                         ,iVar11,param_5);
                }
                else {
                  *param_5 = 1;
                  uVar40 = 0;
                }
                uVar17 = local_3a8 & 0xffffffff;
                puVar27 = local_3b0;
              }
              else {
                *param_5 = 1;
              }
            }
            uVar23 = (ulonglong)(uVar40 + uVar10);
            uVar31 = *param_5;
            uVar37 = CONCAT71((int7)((ulonglong)uVar37 >> 8),0 < (int)uVar40);
            local_354 = uVar10;
            local_350 = uVar40;
          }
          goto joined_r0x0001424c4296;
        }
        if ((char)uVar16 == '\0') {
          bVar7 = true;
          uVar16 = 0;
          uVar31 = *param_5;
          goto joined_r0x0001424c4296;
        }
        puVar35 = puVar27;
        local_390 = uVar37;
        switch((ulonglong)puVar27 & 0xffffffff) {
        case 0:
          in_stack_fffffffffffffc08 = param_5;
          local_308[0] = FUN_1424c4c80(local_378,local_398,pwVar14,iVar11,param_5);
          bVar7 = false;
          uVar17 = uVar23 & 0xffffffff;
          uVar31 = uVar10;
          goto joined_r0x0001424c4563;
        case 1:
          in_stack_fffffffffffffc08 = param_5;
          local_308[0] = FUN_1424c3a50(local_378,local_398,pwVar14,iVar11,param_5);
          break;
        case 2:
          in_stack_fffffffffffffc08 = param_5;
          local_308[0] = FUN_1424c3b50(local_378,local_398,pwVar14,iVar11,param_5);
          break;
        case 3:
          local_3a8 = CONCAT44(local_3a8._4_4_,uVar31);
          local_3b0 = puVar27;
          lVar12 = FUN_1424e8740(local_378,param_5);
          if (local_340 != 0) {
            FUN_142564960();
          }
          goto LAB_1424c43bd;
        default:
          local_3a8 = CONCAT44(local_3a8._4_4_,uVar31);
          lVar12 = local_340;
          local_3b0 = puVar27;
LAB_1424c43bd:
          local_340 = lVar12;
          lVar12 = FUN_142564bc0(lVar12,local_308,param_5);
          uVar52 = (undefined4)((ulonglong)in_stack_fffffffffffffc08 >> 0x20);
          if (lVar12 == 0) {
            bVar7 = true;
            local_308[0] = 0;
          }
          else {
            iVar39 = iVar11;
            if ((int)*param_5 < 1) {
              if ((0 < iVar30) && (pwVar14 == (wchar_t *)0x0)) {
                *param_5 = 1;
                goto LAB_1424c4400;
              }
              lVar13 = lVar12;
              iVar9 = FUN_1424c4f70("icudt64l-lang",local_398,&DAT_14993bd47,0,lVar12,lVar12,pwVar14
                                    ,iVar11,param_5);
              uVar52 = (undefined4)((ulonglong)lVar13 >> 0x20);
              if (iVar9 == 0) {
                local_308[0] = 0;
              }
              else {
                if (iVar9 < iVar11) {
                  pwVar14[iVar9] = L'=';
                }
                local_308[0] = iVar9 + 1;
                if (iVar11 - local_308[0] == 0 || iVar11 < (int)local_308[0]) {
                  iVar39 = 0;
                }
                else {
                  pwVar14 = pwVar14 + (int)local_308[0];
                  iVar39 = iVar11 - local_308[0];
                }
              }
            }
            else {
LAB_1424c4400:
              local_308[0] = 0;
            }
            if (*param_5 == 0xf) {
              *param_5 = 0;
            }
            in_stack_fffffffffffffc08 = (uint *)CONCAT44(uVar52,iVar39);
            iVar8 = FUN_1424c4d80(local_378,lVar12,local_398,pwVar14,in_stack_fffffffffffffc08,
                                  param_5);
            iVar9 = local_308[0] - (iVar8 == 0);
            pwVar15 = param_3 + (int)uVar10;
            if (iVar30 < 1) {
              pwVar15 = pwVar14;
            }
            if (local_308[0] == 0) {
              iVar9 = 0;
              iVar11 = iVar39;
              pwVar15 = pwVar14;
            }
            pwVar14 = pwVar15;
            local_308[0] = iVar9 + iVar8;
            bVar7 = false;
          }
          uVar17 = (ulonglong)(uint)local_3a8;
          uVar31 = (uint)local_3a8;
          puVar35 = local_3b0;
          puVar27 = param_5;
joined_r0x0001424c4563:
          if (0 < (int)local_308[0]) goto LAB_1424c4569;
          goto LAB_1424c4358;
        }
        bVar7 = false;
        if ((int)local_308[0] < 1) {
LAB_1424c4358:
          iVar30 = (int)puVar35;
          uVar29 = (undefined7)((ulonglong)puVar27 >> 8);
          if (bVar7) {
            uVar31 = (uint)uVar17;
            iVar11 = 0;
            if (uVar10 != uVar31) {
              iVar11 = local_3b4;
            }
            uVar10 = uVar10 - iVar11;
            uVar23 = (ulonglong)uVar10;
            local_35c = uVar10 - uVar31;
            uVar16 = CONCAT71(uVar29,local_35c != 0 && (int)uVar31 <= (int)uVar10);
          }
          else {
            uVar16 = CONCAT71(uVar29,1);
          }
        }
        else {
LAB_1424c4569:
          local_3a8 = CONCAT44(local_3a8._4_4_,uVar31);
          if ((int)(local_3b4 + local_308[0]) <= iVar11) {
            pwVar15 = pwVar14 + local_308[0];
            pwVar20 = pwVar14 + 1;
            if (pwVar14 + 1 < pwVar15) {
              pwVar20 = pwVar15;
            }
            if (~(ulonglong)pwVar14 + (longlong)pwVar20 < 0x1e) {
LAB_1424c48a1:
              do {
                wVar33 = (wchar_t)local_364;
                if ((*pwVar14 == (wchar_t)local_360) ||
                   (wVar33 = (wchar_t)local_36c, *pwVar14 == (wchar_t)local_368)) {
                  *pwVar14 = wVar33;
                }
                pwVar14 = pwVar14 + 1;
              } while (pwVar14 < pwVar15);
            }
            else {
              uVar16 = (~(ulonglong)pwVar14 + (longlong)pwVar20 >> 1) + 1;
              uVar17 = uVar16 & 0xfffffffffffffff0;
              pwVar20 = pwVar14 + uVar17;
              uVar23 = 0;
              do {
                pwVar1 = pwVar14 + uVar23;
                auVar46._0_2_ = -(ushort)(*pwVar1 == wVar48);
                auVar46._2_2_ = -(ushort)(pwVar1[1] == wVar49);
                auVar46._4_2_ = -(ushort)(pwVar1[2] == wVar48);
                auVar46._6_2_ = -(ushort)(pwVar1[3] == wVar49);
                auVar46._8_2_ = -(ushort)(pwVar1[4] == wVar48);
                auVar46._10_2_ = -(ushort)(pwVar1[5] == wVar49);
                auVar46._12_2_ = -(ushort)(pwVar1[6] == wVar48);
                auVar46._14_2_ = -(ushort)(pwVar1[7] == wVar49);
                auVar44._0_2_ = -(ushort)(*pwVar1 == wVar50);
                auVar44._2_2_ = -(ushort)(pwVar1[1] == wVar51);
                auVar44._4_2_ = -(ushort)(pwVar1[2] == wVar50);
                auVar44._6_2_ = -(ushort)(pwVar1[3] == wVar51);
                auVar44._8_2_ = -(ushort)(pwVar1[4] == wVar50);
                auVar44._10_2_ = -(ushort)(pwVar1[5] == wVar51);
                auVar44._12_2_ = -(ushort)(pwVar1[6] == wVar50);
                auVar44._14_2_ = -(ushort)(pwVar1[7] == wVar51);
                auVar4._4_4_ = uVar42;
                auVar4._0_4_ = uVar42;
                auVar4._8_4_ = uVar42;
                auVar4._12_4_ = uVar42;
                auVar43._4_4_ = uVar41;
                auVar43._0_4_ = uVar41;
                auVar43._8_4_ = uVar41;
                auVar43._12_4_ = uVar41;
                auVar43 = ~(~auVar46 & auVar44) & auVar43 | auVar4 & ~auVar46 & auVar44;
                auVar44 = auVar44 | auVar46;
                if ((auVar44._0_4_ & 1) != 0) {
                  pwVar14[uVar23] = auVar43._0_2_;
                }
                if ((auVar44._0_4_ >> 0x10 & 1) != 0) {
                  pwVar14[uVar23 + 1] = auVar43._2_2_;
                }
                if ((auVar44._4_2_ & 1) != 0) {
                  pwVar14[uVar23 + 2] = auVar43._4_2_;
                }
                if ((auVar44._6_2_ & 1) != 0) {
                  pwVar14[uVar23 + 3] = auVar43._6_2_;
                }
                if ((auVar44._8_2_ & 1) != 0) {
                  pwVar14[uVar23 + 4] = auVar43._8_2_;
                }
                if ((auVar44._10_2_ & 1) != 0) {
                  pwVar14[uVar23 + 5] = auVar43._10_2_;
                }
                if ((auVar44._12_2_ & 1) != 0) {
                  pwVar14[uVar23 + 6] = auVar43._12_2_;
                }
                if ((auVar44._14_2_ & 1) != 0) {
                  pwVar14[uVar23 + 7] = auVar43._14_2_;
                }
                pwVar1 = pwVar14 + uVar23 + 8;
                auVar47._0_2_ = -(ushort)(*pwVar1 == wVar48);
                auVar47._2_2_ = -(ushort)(pwVar1[1] == wVar49);
                auVar47._4_2_ = -(ushort)(pwVar1[2] == wVar48);
                auVar47._6_2_ = -(ushort)(pwVar1[3] == wVar49);
                auVar47._8_2_ = -(ushort)(pwVar1[4] == wVar48);
                auVar47._10_2_ = -(ushort)(pwVar1[5] == wVar49);
                auVar47._12_2_ = -(ushort)(pwVar1[6] == wVar48);
                auVar47._14_2_ = -(ushort)(pwVar1[7] == wVar49);
                auVar45._0_2_ = -(ushort)(*pwVar1 == wVar50);
                auVar45._2_2_ = -(ushort)(pwVar1[1] == wVar51);
                auVar45._4_2_ = -(ushort)(pwVar1[2] == wVar50);
                auVar45._6_2_ = -(ushort)(pwVar1[3] == wVar51);
                auVar45._8_2_ = -(ushort)(pwVar1[4] == wVar50);
                auVar45._10_2_ = -(ushort)(pwVar1[5] == wVar51);
                auVar45._12_2_ = -(ushort)(pwVar1[6] == wVar50);
                auVar45._14_2_ = -(ushort)(pwVar1[7] == wVar51);
                auVar5._4_4_ = uVar42;
                auVar5._0_4_ = uVar42;
                auVar5._8_4_ = uVar42;
                auVar5._12_4_ = uVar42;
                auVar3._4_4_ = uVar41;
                auVar3._0_4_ = uVar41;
                auVar3._8_4_ = uVar41;
                auVar3._12_4_ = uVar41;
                auVar43 = ~(~auVar47 & auVar45) & auVar3 | auVar5 & ~auVar47 & auVar45;
                auVar45 = auVar45 | auVar47;
                if ((auVar45._0_4_ & 1) != 0) {
                  pwVar14[uVar23 + 8] = auVar43._0_2_;
                }
                if ((auVar45._0_4_ >> 0x10 & 1) != 0) {
                  pwVar14[uVar23 + 9] = auVar43._2_2_;
                }
                if ((auVar45._4_2_ & 1) != 0) {
                  pwVar14[uVar23 + 10] = auVar43._4_2_;
                }
                if ((auVar45._6_2_ & 1) != 0) {
                  pwVar14[uVar23 + 0xb] = auVar43._6_2_;
                }
                if ((auVar45._8_2_ & 1) != 0) {
                  pwVar14[uVar23 + 0xc] = auVar43._8_2_;
                }
                if ((auVar45._10_2_ & 1) != 0) {
                  pwVar14[uVar23 + 0xd] = auVar43._10_2_;
                }
                if ((auVar45._12_2_ & 1) != 0) {
                  pwVar14[uVar23 + 0xe] = auVar43._12_2_;
                }
                if ((auVar45._14_2_ & 1) != 0) {
                  pwVar14[uVar23 + 0xf] = auVar43._14_2_;
                }
                uVar23 = uVar23 + 0x10;
              } while (uVar17 != uVar23);
              pwVar14 = pwVar20;
              if (uVar16 != uVar17) goto LAB_1424c48a1;
            }
            puVar27 = (uint *)(ulonglong)local_364;
            local_3b0 = puVar35;
            if (0 < local_3b4) {
              lVar12 = 0;
              do {
                *pwVar14 = *(wchar_t *)(local_328 + lVar12 * 2);
                pwVar14 = pwVar14 + 1;
                lVar12 = lVar12 + 1;
              } while (lVar12 < local_3b4);
            }
          }
          iVar30 = (int)puVar35;
          uVar17 = (ulonglong)uVar31;
          uVar23 = (ulonglong)(uVar10 + local_308[0] + local_3b4);
          uVar16 = CONCAT71((int7)((ulonglong)puVar27 >> 8),1);
        }
        puVar27 = (uint *)(ulonglong)(iVar30 + 1);
        uVar31 = *param_5;
        uVar37 = local_390;
joined_r0x0001424c4296:
        if (uVar31 == 0xf) {
          *param_5 = 0;
        }
        if (bVar7) {
          cVar36 = (char)uVar37;
          iVar30 = (int)uVar23;
          if ((cVar36 == '\0') || ((char)uVar16 == '\0')) {
            if (uVar25 == 0) {
              local_380 = 0;
              uVar23 = 0;
            }
            else if (iVar30 < 1) {
              uVar23 = uVar23 & 0xffffffff;
            }
            else {
              uVar31 = local_35c;
              if (cVar36 != '\0') {
                uVar31 = local_350;
              }
              uVar23 = (ulonglong)uVar31;
              if ((param_3 != (wchar_t *)0x0) && ((int)local_380 != 0)) {
                iVar30 = (int)local_380 + uVar31;
                if (param_4 < iVar30) {
                  local_330 = CONCAT71((uint7)(uint3)((uint)iVar30 >> 8),1);
                  local_380 = 0;
                }
                else {
                  uVar10 = (uint)uVar17;
                  if (cVar36 != '\0') {
                    uVar10 = local_354;
                  }
                  FUN_142504880(param_3,param_3 + (int)uVar10,uVar31);
                }
              }
            }
          }
          else {
            uVar31 = local_358;
            if (uVar25 != 0) {
              uVar31 = local_39c;
            }
            iVar11 = (int)local_388;
            uVar10 = iVar11 + 3;
            uVar40 = (uVar31 - uVar10) + iVar30;
            uVar23 = (ulonglong)uVar40;
            local_388 = (ulonglong)uVar31;
            if ((int)uVar40 < param_4) {
              lVar12 = (longlong)iVar30;
              pwVar14 = param_3 + lVar12;
              local_388 = (ulonglong)uVar10;
              if (0 < (int)(uVar31 - uVar10)) {
                uVar21 = (ulonglong)(int)uVar10;
                uVar10 = (uVar31 - iVar11) - 4;
                uVar28 = 0;
                local_3a8 = uVar16;
                if ((0xe < uVar10) &&
                   (local_3b0 = puVar27,
                   0x1f < (ulonglong)
                          ((longlong)param_3 + (lVar12 * 2 - (longlong)(local_348 + uVar21))))) {
                  uVar34 = (ulonglong)uVar10 + 1;
                  uVar28 = uVar34 & 0xfffffffffffffff0;
                  local_388 = uVar21 + uVar28;
                  pwVar14 = pwVar14 + uVar28;
                  uVar38 = 0;
                  do {
                    uVar22 = *(undefined8 *)(local_318 + uVar21 + uVar38);
                    uVar19 = *(undefined8 *)(local_318 + uVar21 + uVar38 + 4);
                    *(undefined1 (*) [16])(local_310 + lVar12 + (uVar38 - 8)) =
                         *(undefined1 (*) [16])(local_318 + uVar21 + (uVar38 - 8));
                    *(undefined8 *)(local_310 + lVar12 + uVar38) = uVar22;
                    *(undefined8 *)(local_310 + lVar12 + uVar38 + 4) = uVar19;
                    uVar38 = uVar38 + 0x10;
                  } while (uVar28 != uVar38);
                  uVar21 = local_388;
                  if (uVar34 == uVar28) goto LAB_1424c418a;
                }
                iVar30 = (((int)uVar28 + iVar11) - uVar31) + 3;
                do {
                  pwVar15 = local_348 + uVar21;
                  uVar21 = uVar21 + 1;
                  *pwVar14 = *pwVar15;
                  pwVar14 = pwVar14 + 1;
                  iVar30 = iVar30 + 1;
                  local_388 = uVar21;
                } while (iVar30 != 0);
              }
            }
          }
LAB_1424c418a:
          uVar25 = uVar25 + 1;
        }
      } while ((int)uVar25 < 2);
      uVar22 = 0;
      if (local_340 != 0) {
        uVar22 = FUN_142564960(local_340);
      }
      uVar19 = CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
    } while ((char)local_330 != '\0');
    uVar22 = FUN_142504cc0(param_3,param_4,uVar23 & 0xffffffff,param_5);
  }
  return uVar22;
}



// FUNCTION 1424c4c80 FUN_1424c4c80 body=224 status=ok
// SIG undefined FUN_1424c4c80(void)

void FUN_1424c4c80(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined1 auStack_308 [32];
  undefined1 *local_2e8;
  undefined1 *local_2e0;
  longlong local_2d8;
  int local_2d0;
  int *local_2c8;
  int local_2bc;
  undefined1 local_2b8 [640];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if ((param_5 != (int *)0x0) && (*param_5 < 1)) {
    if ((-1 < param_4) && ((param_3 != 0 || (param_4 == 0)))) {
      local_2bc = 0;
      iVar1 = FUN_1424e8c40(param_1,local_2b8,0x274,&local_2bc);
      if ((local_2bc < 1) && (local_2bc != -0x7c)) {
        if (iVar1 == 0) {
          FUN_142504cc0(param_3,param_4,0,param_5);
        }
        else {
          local_2c8 = param_5;
          local_2e8 = local_2b8;
          local_2e0 = local_2b8;
          local_2d8 = param_3;
          local_2d0 = param_4;
          FUN_1424c4f70("icudt64l-lang",param_2,"Scripts",0);
        }
        goto LAB_1424c4cd5;
      }
    }
    *param_5 = 1;
  }
LAB_1424c4cd5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_308);
}



// FUNCTION 1424c4d80 FUN_1424c4d80 body=486 status=ok
// SIG undefined FUN_1424c4d80(void)

int FUN_1424c4d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int local_2bc;
  undefined1 local_2b8 [632];
  
  if (param_6 == (int *)0x0) {
    return 0;
  }
  if (0 < *param_6) {
    return 0;
  }
  if ((param_5 < 0) || ((param_4 == 0 && (param_5 != 0)))) {
    *param_6 = 1;
    return 0;
  }
  local_2b8[0] = 0;
  iVar1 = FUN_1424e74e0(param_1,param_2,local_2b8,0x274,param_6);
  if (*param_6 == -0x7c) {
    *param_6 = 0xf;
  }
  iVar2 = FUN_142503a40(param_2,"currency");
  if (iVar2 != 0) {
    iVar1 = FUN_1424c4f70("icudt64l-lang",param_3,"Types",param_2,local_2b8,local_2b8,param_4,
                          param_5,param_6);
    return iVar1;
  }
  local_2bc = 0;
  lVar3 = FUN_1424ebfe0("icudt64l-curr",param_3,param_6);
  lVar4 = FUN_1424ecc30(lVar3,"Currencies",0,param_6);
  lVar5 = FUN_1424ec1c0(lVar4,local_2b8,0,param_6);
  lVar6 = FUN_1424ebec0(lVar5,1,&local_2bc,param_6);
  if (0 < *param_6) {
    iVar2 = 0;
    if (*param_6 != 2) goto LAB_1424c4f28;
    *param_6 = -0x7f;
  }
  if (lVar6 == 0) {
    if (param_5 < iVar1) {
      *param_6 = 0xf;
      iVar2 = iVar1;
      goto LAB_1424c4f28;
    }
    FUN_14250ad70(local_2b8,param_4,iVar1);
  }
  else {
    if (param_5 < local_2bc) {
      *param_6 = 0xf;
      iVar2 = local_2bc;
      goto LAB_1424c4f28;
    }
    FUN_142504850(param_4,lVar6,local_2bc);
    iVar1 = local_2bc;
  }
  iVar2 = FUN_142504cc0(param_4,param_5,iVar1,param_6);
LAB_1424c4f28:
  if (lVar5 != 0) {
    FUN_1424ea9f0(lVar5);
  }
  if (lVar4 != 0) {
    FUN_1424ea9f0(lVar4);
  }
  if (lVar3 != 0) {
    FUN_1424ea9f0(lVar3);
  }
  return iVar2;
}



// FUNCTION 1424c4f70 FUN_1424c4f70 body=375 status=ok
// SIG undefined FUN_1424c4f70(void)

void FUN_1424c4f70(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  char *param_5,char *param_6,undefined8 param_7,undefined4 param_8,int *param_9)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  size_t sVar6;
  undefined4 local_44;
  
  local_44 = 0;
  if (param_5 == (char *)0x0) {
    lVar5 = FUN_1424ebfe0(param_1,param_2,param_9);
    if (*param_9 < 1) {
      lVar4 = FUN_1424ecf00(lVar5,param_3,&local_44,param_9);
    }
    else {
      lVar4 = 0;
    }
    if (lVar5 != 0) {
      FUN_1424ea9f0(lVar5);
    }
LAB_1424c5026:
    if (*param_9 < 1) {
      iVar1 = FUN_142501310(local_44,param_8);
      if ((0 < iVar1) && (lVar4 != 0)) {
        FUN_142504850(param_7,lVar4,iVar1);
      }
      goto LAB_1424c509f;
    }
  }
  else {
    iVar1 = strncmp(param_3,"Languages",9);
    if ((iVar1 != 0) || (lVar2 = strtol(param_5,(char **)0x0,10), lVar2 == 0)) {
      lVar4 = FUN_142564c60(param_1,param_2,param_3,param_4,param_5,&local_44,param_9);
      goto LAB_1424c5026;
    }
    *param_9 = 2;
  }
  sVar6 = strlen(param_6);
  local_44 = (undefined4)sVar6;
  uVar3 = FUN_142501310(sVar6 & 0xffffffff,param_8);
  FUN_14250ad70(param_6,param_7,uVar3);
  *param_9 = -0x7f;
LAB_1424c509f:
  FUN_142504cc0(param_7,param_8,local_44,param_9);
  return;
}



// FUNCTION 1424c50f0 FUN_1424c50f0 body=8 status=ok
// SIG undefined FUN_1424c50f0(void)

undefined * FUN_1424c50f0(void)

{
  return &DAT_14c77eb10;
}



// FUNCTION 1424c5100 FUN_1424c5100 body=933 status=ok
// SIG undefined FUN_1424c5100(void)

undefined8 * FUN_1424c5100(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *_Dst;
  void *_Dst_00;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1424babf0();
  *param_1 = icu_64::DecimalFormat::vftable;
  param_1[0x2e] = 0;
  if (0 < *param_3) {
joined_r0x0001424c5227:
    if (param_2 != (undefined8 *)0x0) {
      (**(code **)*param_2)(param_2,1);
    }
    return param_1;
  }
  _Dst = (void *)thunk_FUN_1424da030(0x8a0);
  if (_Dst == (void *)0x0) {
    param_1[0x2e] = 0;
    *param_3 = 7;
    goto joined_r0x0001424c5227;
  }
  memset(_Dst,0,0x8a0);
  FUN_1424ca930((longlong)_Dst + 0x28);
  *(undefined8 *)((longlong)_Dst + 0x888) = 0;
  *(undefined1 *)((longlong)_Dst + 0x890) = 0;
  param_1[0x2e] = _Dst;
  _Dst_00 = (void *)thunk_FUN_1424da030(0x1d8);
  if (_Dst_00 == (void *)0x0) {
    if (*param_3 < 1) goto LAB_1424c5237;
  }
  else {
    memset(_Dst_00,0,0x1d8);
    FUN_1424cafc0(_Dst_00);
    *(undefined8 *)((longlong)_Dst_00 + 0x1c8) = 0;
    *(undefined8 *)((longlong)_Dst_00 + 0x1d0) = 0;
    if (*param_3 < 1) {
LAB_1424c5237:
      lVar4 = *(longlong *)((longlong)_Dst + 0x10);
      if (lVar4 != 0) {
        FUN_142569480(lVar4);
        FUN_1401773f0(lVar4);
      }
      *(void **)((longlong)_Dst + 0x10) = _Dst_00;
      if (_Dst_00 == (void *)0x0) {
        *param_3 = 7;
      }
    }
    else {
      FUN_142569480(_Dst_00);
      FUN_1401773f0(_Dst_00);
    }
  }
  plVar1 = (longlong *)param_1[0x2e];
  lVar4 = thunk_FUN_1424da030(0x2f8);
  if (lVar4 == 0) {
    if (*param_3 < 1) goto LAB_1424c52a8;
  }
  else {
    FUN_14256ac50(lVar4);
    if (*param_3 < 1) {
LAB_1424c52a8:
      lVar5 = *plVar1;
      if (lVar5 != 0) {
        FUN_1424c9bb0(lVar5);
        FUN_1401773f0(lVar5);
      }
      *plVar1 = lVar4;
      if (lVar4 == 0) {
        *param_3 = 7;
      }
    }
    else {
      FUN_1424c9bb0(lVar4);
      FUN_1401773f0(lVar4);
    }
  }
  lVar4 = param_1[0x2e];
  lVar5 = thunk_FUN_1424da030(0x2f8);
  if (lVar5 == 0) {
    if (*param_3 < 1) goto LAB_1424c5317;
  }
  else {
    FUN_14256ac50(lVar5);
    if (*param_3 < 1) {
LAB_1424c5317:
      lVar2 = *(longlong *)(lVar4 + 0x888);
      if (lVar2 != 0) {
        FUN_1424c9bb0(lVar2);
        FUN_1401773f0(lVar2);
      }
      *(longlong *)(lVar4 + 0x888) = lVar5;
      if (lVar5 == 0) {
        *param_3 = 7;
      }
    }
    else {
      FUN_1424c9bb0(lVar5);
      FUN_1401773f0(lVar5);
    }
  }
  lVar4 = param_1[0x2e];
  if (param_2 == (undefined8 *)0x0) {
    param_2 = (undefined8 *)thunk_FUN_1424da030(0xb00);
    if (param_2 == (undefined8 *)0x0) {
      if (0 < *param_3) goto LAB_1424c53b6;
    }
    else {
      FUN_142541130(param_2,param_3);
      if (0 < *param_3) goto LAB_1424c53a9;
    }
    puVar3 = *(undefined8 **)(lVar4 + 8);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    *(undefined8 **)(lVar4 + 8) = param_2;
    if (param_2 == (undefined8 *)0x0) {
      *param_3 = 7;
    }
  }
  else {
    if (*param_3 < 1) {
      puVar3 = *(undefined8 **)(lVar4 + 8);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      *(undefined8 **)(lVar4 + 8) = param_2;
      goto LAB_1424c53b6;
    }
LAB_1424c53a9:
    (**(code **)*param_2)(param_2,1);
  }
LAB_1424c53b6:
  plVar1 = (longlong *)param_1[0x2e];
  if ((((plVar1[2] != 0) && (*plVar1 != 0)) && (plVar1[0x111] != 0)) && (plVar1[1] != 0)) {
    return param_1;
  }
  lVar4 = plVar1[0x111];
  if (lVar4 != 0) {
    FUN_1424c9bb0(lVar4);
    FUN_1401773f0(lVar4);
  }
  FUN_1424cac20(plVar1 + 5);
  lVar4 = plVar1[2];
  if (lVar4 != 0) {
    FUN_142569480(lVar4);
    FUN_1401773f0(lVar4);
  }
  puVar3 = (undefined8 *)plVar1[1];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    FUN_1424c9bb0(lVar4);
    FUN_1401773f0(lVar4);
  }
  FUN_1401773f0(plVar1);
  param_1[0x2e] = 0;
  *param_3 = 7;
  return param_1;
}



// FUNCTION 1424c54b0 Unwind@1424c54b0 body=89 status=ok
// SIG undefined Unwind@1424c54b0(void)

void Unwind_1424c54b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  FUN_1424cacb0(lVar1 + 0x10);
  puVar2 = *(undefined8 **)(lVar1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_1424cace0(lVar1);
  FUN_1401773f0(lVar1);
  return;
}



// FUNCTION 1424c5510 Unwind@1424c5510 body=44 status=ok
// SIG undefined Unwind@1424c5510(void)

void Unwind_1424c5510(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424c5540 Unwind@1424c5540 body=44 status=ok
// SIG undefined Unwind@1424c5540(void)

void Unwind_1424c5540(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1424c5570 Unwind@1424c5570 body=44 status=ok
// SIG undefined Unwind@1424c5570(void)

void Unwind_1424c5570(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1424c55a0 Unwind@1424c55a0 body=44 status=ok
// SIG undefined Unwind@1424c55a0(void)

void Unwind_1424c55a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1424c55d0 Unwind@1424c55d0 body=65 status=ok
// SIG undefined Unwind@1424c55d0(void)

void Unwind_1424c55d0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    (**(code **)**(undefined8 **)(param_2 + 0x28))(*(undefined8 **)(param_2 + 0x28),1);
  }
  FUN_1424bac40(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424c5620 FUN_1424c5620 body=524 status=ok
// SIG undefined FUN_1424c5620(void)

void FUN_1424c5620(longlong param_1,int *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_4a8 [24];
  undefined1 local_490 [448];
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [24];
  undefined1 local_2a8 [96];
  undefined1 local_248 [32];
  undefined1 local_228 [56];
  undefined1 local_1f0 [232];
  undefined1 local_108 [224];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_2 < 1) {
    if (*(longlong *)(param_1 + 0x170) == 0) {
      *param_2 = 7;
    }
    else {
      FUN_1424a3ce0(local_108,*(longlong *)(*(longlong *)(param_1 + 0x170) + 8) + 0x750);
      puVar2 = *(undefined8 **)(param_1 + 0x170);
      FUN_14256c100(local_2d0,*puVar2,puVar2[1],puVar2 + 5,puVar2[0x111],param_2);
      FUN_142568f70(local_2d0,local_4a8,local_108);
      FUN_142569130(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10),local_4a8);
      FUN_142569480(local_4a8);
      FUN_1414b3f60(local_1f0);
      FUN_14256d170(local_228);
      FUN_1425697e0(local_248);
      thunk_FUN_1424b70d0(local_2a8);
      thunk_FUN_1424b70d0(local_2c0);
      FUN_1424ca360();
      LOCK();
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x170) + 0x18);
      puVar2 = (undefined8 *)*plVar1;
      *plVar1 = 0;
      UNLOCK();
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      LOCK();
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x170) + 0x20);
      puVar2 = (undefined8 *)*plVar1;
      *plVar1 = 0;
      UNLOCK();
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x888);
      if (*(char *)(lVar3 + 8) != '\0') {
        *param_2 = 0x10012;
      }
      FUN_14256dd50(local_4a8,lVar3 + 0x10);
      FUN_1424bbc30(param_1,local_490,param_2);
      thunk_FUN_1424b70d0(local_4a8);
      FUN_1424bbb00(param_1,*(undefined4 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x888) + 0x58));
      FUN_1424bbb50(param_1,*(undefined4 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x888) + 0x6c));
      FUN_1424bbba0(param_1,*(undefined4 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x888) + 0x54));
      FUN_1424bbbf0(param_1,*(undefined4 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x888) + 100));
      FUN_1424bbae0(param_1,*(undefined1 *)(**(longlong **)(param_1 + 0x170) + 0x4c));
      FUN_1414b3f60(local_108);
    }
  }
  return;
}



// FUNCTION 1424c5830 Unwind@1424c5830 body=42 status=ok
// SIG undefined Unwind@1424c5830(void)

void Unwind_1424c5830(undefined8 param_1,longlong param_2)

{
  FUN_1424ca310(param_2 + 0x208);
  return;
}



// FUNCTION 1424c5860 Unwind@1424c5860 body=39 status=ok
// SIG undefined Unwind@1424c5860(void)

void Unwind_1424c5860(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x30);
  return;
}



// FUNCTION 1424c5890 Unwind@1424c5890 body=42 status=ok
// SIG undefined Unwind@1424c5890(void)

void Unwind_1424c5890(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x3d0);
  return;
}



// FUNCTION 1424c58c0 FUN_1424c58c0 body=225 status=ok
// SIG undefined FUN_1424c58c0(void)

void FUN_1424c58c0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = icu_64::DecimalFormat::vftable;
  if (param_1[0x2e] != 0) {
    LOCK();
    plVar1 = (longlong *)(param_1[0x2e] + 0x18);
    puVar2 = (undefined8 *)*plVar1;
    *plVar1 = 0;
    UNLOCK();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    LOCK();
    puVar2 = *(undefined8 **)(param_1[0x2e] + 0x20);
    *(longlong *)(param_1[0x2e] + 0x20) = 0;
    UNLOCK();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    plVar1 = (longlong *)param_1[0x2e];
    if (plVar1 != (longlong *)0x0) {
      lVar3 = plVar1[0x111];
      if (lVar3 != 0) {
        FUN_1424c9bb0(lVar3);
        FUN_1401773f0(lVar3);
      }
      FUN_1424cac20(plVar1 + 5);
      lVar3 = plVar1[2];
      if (lVar3 != 0) {
        FUN_142569480(lVar3);
        FUN_1401773f0(lVar3);
      }
      puVar2 = (undefined8 *)plVar1[1];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar3 = *plVar1;
      if (lVar3 != 0) {
        FUN_1424c9bb0(lVar3);
        FUN_1401773f0(lVar3);
      }
      FUN_1401773f0(plVar1);
    }
  }
  FUN_1424bac40(param_1);
  return;
}



// FUNCTION 1424c59b0 FUN_1424c59b0 body=372 status=ok
// SIG undefined FUN_1424c59b0(void)

longlong FUN_1424c59b0(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                      int *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_118 [224];
  undefined8 *local_38;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_1424c5100(param_1,param_3,param_5);
  if (0 < *param_5) {
    return local_30;
  }
  if ((param_4 < 0x11) && ((0x13c04U >> (param_4 & 0x1f) & 1) != 0)) {
    thunk_FUN_1425651b0(param_2,**(undefined8 **)(local_30 + 0x170),2,param_5);
    if (param_4 == 0xb) {
      local_38 = (undefined8 *)thunk_FUN_1424da030(0x28);
      if (local_38 == (undefined8 *)0x0) {
        if (0 < *param_5) {
          return local_30;
        }
        *param_5 = 7;
        return local_30;
      }
      FUN_1424a3ce0(local_118,*(longlong *)(*(longlong *)(local_30 + 0x170) + 8) + 0x750);
      FUN_14256e0e0(local_38,local_118,param_5);
      FUN_1414b3f60(local_118);
      if (0 < *param_5) {
        (**(code **)*local_38)(local_38,1);
        return local_30;
      }
      lVar1 = **(longlong **)(local_30 + 0x170);
      puVar2 = *(undefined8 **)(lVar1 + 0x30);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(undefined8 **)(lVar1 + 0x30) = local_38;
    }
  }
  else {
    thunk_FUN_1425651b0(param_2,**(undefined8 **)(local_30 + 0x170),1,param_5);
  }
  FUN_1424c5620(local_30,param_5);
  return local_30;
}



// FUNCTION 1424c5b30 Unwind@1424c5b30 body=39 status=ok
// SIG undefined Unwind@1424c5b30(void)

void Unwind_1424c5b30(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x20);
  return;
}



// FUNCTION 1424c5b60 Unwind@1424c5b60 body=42 status=ok
// SIG undefined Unwind@1424c5b60(void)

void Unwind_1424c5b60(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x100));
  return;
}



// FUNCTION 1424c5b90 Unwind@1424c5b90 body=42 status=ok
// SIG undefined Unwind@1424c5b90(void)

void Unwind_1424c5b90(undefined8 param_1,longlong param_2)

{
  FUN_1424c58c0(*(undefined8 *)(param_2 + 0x108));
  return;
}



// FUNCTION 1424c5bc0 FUN_1424c5bc0 body=609 status=ok
// SIG undefined FUN_1424c5bc0(void)

longlong * FUN_1424c5bc0(longlong *param_1,undefined4 param_2,int param_3,int *param_4)

{
  longlong lVar1;
  
  if (0 < *param_4) {
    return param_1;
  }
  if ((longlong *)param_1[0x2e] == (longlong *)0x0) {
    *param_4 = 7;
    return param_1;
  }
  switch(param_2) {
  case 0:
    (**(code **)(*param_1 + 0xb0))(param_1,CONCAT71(0x14993c4,param_3 != 0));
    break;
  case 1:
    (**(code **)(*param_1 + 200))(param_1,CONCAT71(0x14993c4,param_3 != 0));
    break;
  case 2:
    (**(code **)(*param_1 + 0x208))(param_1,CONCAT71(0x14993c4,param_3 != 0));
    break;
  case 4:
    (**(code **)(*param_1 + 0xd8))(param_1,param_3);
    break;
  case 5:
    (**(code **)(*param_1 + 0xd8))(param_1,param_3);
  case 3:
    (**(code **)(*param_1 + 0xd0))(param_1,param_3);
    break;
  case 7:
    (**(code **)(*param_1 + 0xe8))(param_1,param_3);
    break;
  case 8:
    (**(code **)(*param_1 + 0xe8))(param_1,param_3);
  case 6:
    (**(code **)(*param_1 + 0xe0))(param_1,param_3);
    break;
  case 9:
    (**(code **)(*param_1 + 0x180))(param_1,param_3);
    break;
  case 10:
    (**(code **)(*param_1 + 0x1f8))(param_1,param_3);
    break;
  case 0xb:
    (**(code **)(*param_1 + 0x110))(param_1,param_3);
    break;
  case 0xc:
switchD_1424c5bfd_caseD_c:
    *param_4 = 0x10;
    break;
  case 0xd:
    (**(code **)(*param_1 + 0x1a0))(param_1,param_3);
    break;
  case 0xe:
    (**(code **)(*param_1 + 0x1c0))(param_1,param_3);
    break;
  case 0xf:
    (**(code **)(*param_1 + 0x200))(param_1,param_3);
    break;
  case 0x10:
    FUN_1424c5e30(param_1,CONCAT71(0x14993c4,param_3 != 0));
    break;
  case 0x11:
    FUN_1424c5f40(param_1,param_3);
    break;
  case 0x12:
    FUN_1424c5ed0(param_1,param_3);
    break;
  case 0x13:
    (**(code **)(*param_1 + 0xb8))(param_1,CONCAT71(0x14993c4,param_3 != 0));
    break;
  case 0x14:
    lVar1 = *(longlong *)param_1[0x2e];
    if (*(int *)(lVar1 + 0x1d8) != param_3) {
      *(int *)(lVar1 + 0x1d8) = param_3;
    }
    break;
  case 0x15:
    FUN_1424c5fb0(param_1,param_3);
    break;
  case 0x16:
    FUN_1424c60a0(param_1,param_3);
    break;
  case 0x17:
    FUN_1424c6060(param_1,param_3,param_4);
    break;
  default:
    switch(param_2) {
    case 0x1000:
      FUN_1424c61b0(param_1,param_3);
      break;
    case 0x1001:
      FUN_1424c6000(param_1,param_3);
      break;
    case 0x1002:
      (**(code **)(*param_1 + 0x210))(param_1,param_3);
      break;
    case 0x1003:
      FUN_1424c60f0(param_1,param_3);
      break;
    case 0x1004:
      FUN_1424c6150(param_1,param_3);
      break;
    default:
      goto switchD_1424c5bfd_caseD_c;
    }
  }
  return param_1;
}



// FUNCTION 1424c5e30 FUN_1424c5e30 body=146 status=ok
// SIG undefined FUN_1424c5e30(void)

void FUN_1424c5e30(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x170);
    if (param_2 == '\0') {
      uVar2 = 0xffffffff;
      if (*(int *)(lVar1 + 0x70) == -1) {
        uVar3 = 0xffffffff;
        if (*(int *)(lVar1 + 0x5c) == -1) goto LAB_1424c5eb5;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      if ((*(int *)(lVar1 + 0x70) != -1) || (*(int *)(lVar1 + 0x5c) != -1)) goto LAB_1424c5eb5;
      uVar3 = 1;
      uVar2 = 6;
    }
    *(undefined4 *)(lVar1 + 0x70) = uVar3;
    *(undefined4 *)(**(longlong **)(param_1 + 0x170) + 0x5c) = uVar2;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
LAB_1424c5eb5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c5ed0 FUN_1424c5ed0 body=100 status=ok
// SIG undefined FUN_1424c5ed0(void)

void FUN_1424c5ed0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x170), *(int *)(lVar1 + 0x5c) != param_2)) {
    if ((-1 < *(int *)(lVar1 + 0x70)) && (param_2 < *(int *)(lVar1 + 0x70))) {
      *(int *)(lVar1 + 0x70) = param_2;
      lVar1 = **(longlong **)(param_1 + 0x170);
    }
    *(int *)(lVar1 + 0x5c) = param_2;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c5f40 FUN_1424c5f40 body=100 status=ok
// SIG undefined FUN_1424c5f40(void)

void FUN_1424c5f40(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x170), *(int *)(lVar1 + 0x70) != param_2)) {
    if ((-1 < *(int *)(lVar1 + 0x5c)) && (*(int *)(lVar1 + 0x5c) < param_2)) {
      *(int *)(lVar1 + 0x5c) = param_2;
      lVar1 = **(longlong **)(param_1 + 0x170);
    }
    *(int *)(lVar1 + 0x70) = param_2;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c5fb0 FUN_1424c5fb0 body=73 status=ok
// SIG undefined FUN_1424c5fb0(void)

void FUN_1424c5fb0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x170), *(int *)(lVar1 + 0x78) != param_2)) {
    *(int *)(lVar1 + 0x78) = param_2;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c6000 FUN_1424c6000 body=84 status=ok
// SIG undefined FUN_1424c6000(void)

void FUN_1424c6000(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x170);
    if ((bool)*(char *)(lVar1 + 0x1d4) != (param_2 != '\0')) {
      *(bool *)(lVar1 + 0x1d4) = param_2 != '\0';
      local_c = 0;
      FUN_1424c5620(param_1,&local_c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c6060 FUN_1424c6060 body=56 status=ok
// SIG undefined FUN_1424c6060(void)

void FUN_1424c6060(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  
  if (*param_3 < 1) {
    if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
      *param_3 = 7;
      return;
    }
    lVar1 = **(longlong **)(param_1 + 0x170);
    if ((*(char *)(lVar1 + 0x38) != '\0') || (*(int *)(lVar1 + 0x3c) != param_2)) {
      *(int *)(lVar1 + 0x3c) = param_2;
      *(undefined1 *)(lVar1 + 0x38) = 0;
      FUN_1424c5620(param_1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 1424c60a0 FUN_1424c60a0 body=73 status=ok
// SIG undefined FUN_1424c60a0(void)

void FUN_1424c60a0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x170), *(int *)(lVar1 + 0x68) != param_2)) {
    *(int *)(lVar1 + 0x68) = param_2;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c60f0 FUN_1424c60f0 body=84 status=ok
// SIG undefined FUN_1424c60f0(void)

void FUN_1424c60f0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x170);
    if ((bool)*(char *)(lVar1 + 0x1c8) != (param_2 != '\0')) {
      *(bool *)(lVar1 + 0x1c8) = param_2 != '\0';
      local_c = 0;
      FUN_1424c5620(param_1,&local_c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c6150 FUN_1424c6150 body=84 status=ok
// SIG undefined FUN_1424c6150(void)

void FUN_1424c6150(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x170);
    if ((bool)*(char *)(lVar1 + 0x2f4) != (param_2 != '\0')) {
      *(bool *)(lVar1 + 0x2f4) = param_2 != '\0';
      local_c = 0;
      FUN_1424c5620(param_1,&local_c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c61b0 FUN_1424c61b0 body=78 status=ok
// SIG undefined FUN_1424c61b0(void)

void FUN_1424c61b0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x170);
    if ((bool)*(char *)(lVar1 + 0x43) != (param_2 != '\0')) {
      *(bool *)(lVar1 + 0x43) = param_2 != '\0';
      local_c = 0;
      FUN_1424c5620(param_1,&local_c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c6210 FUN_1424c6210 body=423 status=ok
// SIG undefined FUN_1424c6210(void)

ulonglong FUN_1424c6210(longlong *param_1,undefined4 param_2,int *param_3)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = 0xffffffff;
  if (0 < *param_3) {
    return 0xffffffff;
  }
  plVar1 = (longlong *)param_1[0x2e];
  if (plVar1 == (longlong *)0x0) {
    *param_3 = 7;
    return 0xffffffff;
  }
  switch(param_2) {
  case 0:
    uVar4 = (ulonglong)(uint)(int)*(char *)((longlong)param_1 + 0x15c);
    break;
  case 1:
    cVar3 = FUN_1424bbad0();
    uVar4 = (ulonglong)(uint)(int)cVar3;
    break;
  case 2:
    uVar4 = (ulonglong)*(byte *)(*plVar1 + 0x41);
    break;
  case 3:
    uVar4 = FUN_1424bbaf0();
    return uVar4;
  case 4:
  case 5:
    uVar4 = FUN_1424bbb40();
    return uVar4;
  case 6:
    uVar4 = FUN_1424bbb90();
    return uVar4;
  case 7:
  case 8:
    uVar4 = FUN_1424bbbe0();
    return uVar4;
  case 9:
    uVar4 = FUN_1424c63f0();
    return uVar4;
  case 10:
    uVar5 = *(uint *)(*plVar1 + 0x48);
    goto LAB_1424c6309;
  case 0xb:
                    /* WARNING: Could not recover jumptable at 0x0001424c62dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x108))();
    return uVar4;
  case 0xc:
  case 0x14:
switchD_1424c6245_caseD_c:
    *param_3 = 0x10;
    break;
  case 0xd:
                    /* WARNING: Could not recover jumptable at 0x0001424c62eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x198))();
    return uVar4;
  case 0xe:
                    /* WARNING: Could not recover jumptable at 0x0001424c62f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 0x1b8))();
    return uVar4;
  case 0xf:
    uVar5 = *(uint *)(*plVar1 + 0x2f0);
LAB_1424c6309:
    uVar4 = 0;
    if (0 < (int)uVar5) {
      uVar4 = (ulonglong)uVar5;
    }
    break;
  case 0x10:
    bVar2 = FUN_1424c63c0();
    uVar4 = (ulonglong)bVar2;
    break;
  case 0x11:
    uVar4 = (ulonglong)*(uint *)(plVar1[0x111] + 0x70);
    break;
  case 0x12:
    uVar4 = (ulonglong)*(uint *)(plVar1[0x111] + 0x5c);
    break;
  case 0x13:
    cVar3 = (**(code **)(*param_1 + 0xc0))();
    uVar4 = (ulonglong)(uint)(int)cVar3;
    break;
  case 0x15:
    uVar4 = (ulonglong)*(uint *)(*plVar1 + 0x78);
    break;
  case 0x16:
    uVar4 = (ulonglong)*(uint *)(*plVar1 + 0x68);
    break;
  case 0x17:
    uVar4 = 0;
    if (*(char *)(*plVar1 + 0x38) == '\0') {
      uVar4 = (ulonglong)*(uint *)(*plVar1 + 0x3c);
    }
    break;
  default:
    switch(param_2) {
    case 0x1000:
      uVar4 = (ulonglong)*(byte *)(*plVar1 + 0x43);
      break;
    case 0x1001:
      uVar4 = (ulonglong)*(byte *)(*plVar1 + 0x1d4);
      break;
    case 0x1002:
      uVar4 = (ulonglong)*(byte *)(*plVar1 + 0x40);
      break;
    case 0x1003:
      uVar4 = (ulonglong)*(byte *)(*plVar1 + 0x1c8);
      break;
    case 0x1004:
      uVar4 = (ulonglong)*(byte *)(*plVar1 + 0x2f4);
      break;
    default:
      goto switchD_1424c6245_caseD_c;
    }
  }
  return uVar4;
}



// FUNCTION 1424c63c0 FUN_1424c63c0 body=48 status=ok
// SIG undefined FUN_1424c63c0(void)

bool FUN_1424c63c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
    lVar1 = FUN_14256b390();
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x170);
  }
  bVar2 = true;
  if (*(int *)(lVar1 + 0x70) == -1) {
    bVar2 = *(int *)(lVar1 + 0x5c) != -1;
  }
  return bVar2;
}



// FUNCTION 1424c63f0 FUN_1424c63f0 body=64 status=ok
// SIG undefined FUN_1424c63f0(void)

int FUN_1424c63f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  double dVar3;
  
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
    lVar1 = FUN_14256b390();
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x170);
  }
  iVar2 = *(int *)(lVar1 + 0x74);
  if (iVar2 == 1) {
    if (*(int *)(lVar1 + 0x50) == 0) {
      iVar2 = 1;
    }
    else {
      dVar3 = (double)FUN_1424d9800();
      iVar2 = (int)dVar3;
    }
  }
  return iVar2;
}



// FUNCTION 1424c6430 FUN_1424c6430 body=41 status=ok
// SIG undefined FUN_1424c6430(void)

int FUN_1424c6430(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
    lVar2 = FUN_14256b390();
  }
  else {
    lVar2 = **(longlong **)(param_1 + 0x170);
  }
  iVar1 = 0;
  if (0 < *(int *)(lVar2 + 0x48)) {
    iVar1 = *(int *)(lVar2 + 0x48);
  }
  return iVar1;
}



// FUNCTION 1424c6460 FUN_1424c6460 body=44 status=ok
// SIG undefined FUN_1424c6460(void)

int FUN_1424c6460(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
    lVar2 = FUN_14256b390();
  }
  else {
    lVar2 = **(longlong **)(param_1 + 0x170);
  }
  iVar1 = 0;
  if (0 < *(int *)(lVar2 + 0x2f0)) {
    iVar1 = *(int *)(lVar2 + 0x2f0);
  }
  return iVar1;
}



// FUNCTION 1424c6490 FUN_1424c6490 body=34 status=ok
// SIG undefined FUN_1424c6490(void)

undefined4 FUN_1424c6490(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
    lVar1 = FUN_14256b390();
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x170);
  }
  return *(undefined4 *)(lVar1 + 0x68);
}



// FUNCTION 1424c64c0 FUN_1424c64c0 body=101 status=ok
// SIG undefined FUN_1424c64c0(void)

void FUN_1424c64c0(longlong param_1,char param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     ((bool)*(char *)(**(longlong **)(param_1 + 0x170) + 0x4c) != (param_2 != '\0'))) {
    FUN_1424bbae0();
    *(bool *)(**(longlong **)(param_1 + 0x170) + 0x4c) = param_2 != '\0';
    local_1c = 0;
    FUN_1424c5620(param_1,&local_1c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424c6530 FUN_1424c6530 body=107 status=ok
// SIG undefined FUN_1424c6530(void)

void FUN_1424c6530(longlong param_1,char param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     ((bool)*(char *)(**(longlong **)(param_1 + 0x170) + 0x1c9) != (param_2 != '\0'))) {
    FUN_1424bb780();
    *(bool *)(**(longlong **)(param_1 + 0x170) + 0x1c9) = param_2 != '\0';
    local_1c = 0;
    FUN_1424c5620(param_1,&local_1c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424c65b0 FUN_1424c65b0 body=129 status=ok
// SIG undefined FUN_1424c65b0(void)

void FUN_1424c65b0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x170);
    if ((*(char *)(lVar1 + 0x1cc) != '\0') || (*(uint *)(lVar1 + 0x1d0) != (uint)(param_2 == '\0')))
    {
      FUN_1424bb790(param_1);
      lVar1 = **(longlong **)(param_1 + 0x170);
      *(uint *)(lVar1 + 0x1d0) = (uint)(param_2 == '\0');
      *(undefined1 *)(lVar1 + 0x1cc) = 0;
      local_1c = 0;
      FUN_1424c5620(param_1,&local_1c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424c6640 FUN_1424c6640 body=378 status=ok
// SIG undefined FUN_1424c6640(void)

longlong FUN_1424c6640(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  FUN_1424c5100(param_1,0,param_4);
  if (*param_4 < 1) {
    puVar4 = (undefined8 *)thunk_FUN_1424da030(0xb00);
    if (puVar4 == (undefined8 *)0x0) {
      lVar6 = param_1;
      if (*param_4 < 1) {
        *param_4 = 7;
      }
    }
    else {
      FUN_142543680(puVar4,param_3);
      lVar6 = param_1;
      if (*param_4 < 1) {
        lVar6 = *(longlong *)(param_1 + 0x170);
        puVar1 = *(undefined8 **)(lVar6 + 8);
        puVar5 = puVar4;
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        *(undefined8 **)(lVar6 + 8) = puVar4;
        if (*param_4 < 1) {
          thunk_FUN_1425651b0(param_2,**(undefined8 **)(param_1 + 0x170),1,param_4,puVar5,param_1,
                              uVar7);
        }
        FUN_1424c5620(param_1,param_4);
        return param_1;
      }
    }
    plVar2 = *(longlong **)(lVar6 + 0x170);
    param_1 = lVar6;
    if (plVar2 != (longlong *)0x0) {
      lVar3 = plVar2[0x111];
      if (lVar3 != 0) {
        FUN_1424c9bb0(lVar3);
        FUN_1401773f0(lVar3);
      }
      FUN_1424cac20(plVar2 + 5);
      lVar3 = plVar2[2];
      if (lVar3 != 0) {
        FUN_142569480(lVar3);
        FUN_1401773f0(lVar3);
      }
      puVar1 = (undefined8 *)plVar2[1];
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar3 = *plVar2;
      if (lVar3 != 0) {
        FUN_1424c9bb0(lVar3);
        FUN_1401773f0(lVar3);
      }
      FUN_1401773f0(plVar2);
    }
    *(undefined8 *)(lVar6 + 0x170) = 0;
    *param_4 = 7;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return param_1;
}



// FUNCTION 1424c67c0 Unwind@1424c67c0 body=44 status=ok
// SIG undefined Unwind@1424c67c0(void)

void Unwind_1424c67c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424c67f0 Unwind@1424c67f0 body=44 status=ok
// SIG undefined Unwind@1424c67f0(void)

void Unwind_1424c67f0(undefined8 param_1,longlong param_2)

{
  FUN_1424c58c0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424c6820 FUN_1424c6820 body=914 status=ok
// SIG undefined FUN_1424c6820(void)

undefined8 * FUN_1424c6820(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  void *_Dst;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined4 local_54;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1424bac50();
  *param_1 = icu_64::DecimalFormat::vftable;
  param_1[0x2e] = 0;
  if (*(longlong *)(param_2 + 0x170) == 0) {
    return param_1;
  }
  local_50 = (undefined8 *)thunk_FUN_1424da030(0x8a0);
  if (local_50 == (undefined8 *)0x0) {
    param_1[0x2e] = 0;
    return param_1;
  }
  memset(local_50,0,0x8a0);
  FUN_1424ca930(local_50 + 5);
  puVar5 = local_50;
  local_50[0x111] = 0;
  *(undefined1 *)(local_50 + 0x112) = 0;
  param_1[0x2e] = local_50;
  local_54 = 0;
  _Dst = (void *)thunk_FUN_1424da030(0x1d8);
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x1d8);
    FUN_1424cafc0(_Dst);
    *(undefined8 *)((longlong)_Dst + 0x1c8) = 0;
    *(undefined8 *)((longlong)_Dst + 0x1d0) = 0;
  }
  lVar1 = puVar5[2];
  if (lVar1 != 0) {
    FUN_142569480(lVar1);
    FUN_1401773f0(lVar1);
  }
  puVar5[2] = _Dst;
  if (_Dst == (void *)0x0) {
    local_54 = 7;
    plVar7 = (longlong *)param_1[0x2e];
    puVar5 = (undefined8 *)thunk_FUN_1424da030(0x2f8);
    iVar6 = 7;
    if (puVar5 != (undefined8 *)0x0) goto LAB_1424c6987;
  }
  else {
    plVar7 = (longlong *)param_1[0x2e];
    puVar5 = (undefined8 *)thunk_FUN_1424da030(0x2f8);
    iVar6 = 0;
    if (puVar5 == (undefined8 *)0x0) {
      bVar4 = true;
      puVar5 = (undefined8 *)0x0;
    }
    else {
      iVar6 = 0;
LAB_1424c6987:
      local_50 = puVar5;
      FUN_1424c6d70(puVar5,**(undefined8 **)(param_2 + 0x170));
      puVar5 = local_50;
      if (_Dst == (void *)0x0) {
        FUN_1424c9bb0(local_50);
        FUN_1401773f0(puVar5);
        goto LAB_1424c69f8;
      }
      bVar4 = false;
    }
    lVar1 = *plVar7;
    if (lVar1 != 0) {
      FUN_1424c9bb0(lVar1);
      FUN_1401773f0(lVar1);
    }
    *plVar7 = (longlong)puVar5;
    if (bVar4) {
      local_54 = 7;
      iVar6 = 7;
    }
  }
LAB_1424c69f8:
  lVar1 = param_1[0x2e];
  puVar5 = (undefined8 *)thunk_FUN_1424da030(0xb00);
  if (puVar5 == (undefined8 *)0x0) {
    if (iVar6 == 0) goto LAB_1424c6a48;
  }
  else {
    local_50 = puVar5;
    FUN_142543680(puVar5,*(undefined8 *)(*(longlong *)(param_2 + 0x170) + 8));
    puVar5 = local_50;
    if (iVar6 == 0) {
LAB_1424c6a48:
      puVar2 = *(undefined8 **)(lVar1 + 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      iVar6 = 0;
      *(undefined8 **)(lVar1 + 8) = puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        local_54 = 7;
        iVar6 = 7;
      }
    }
    else {
      (**(code **)*local_50)(local_50,1);
    }
  }
  lVar1 = param_1[0x2e];
  puVar5 = (undefined8 *)thunk_FUN_1424da030(0x2f8);
  if (puVar5 == (undefined8 *)0x0) {
    if (iVar6 != 0) goto LAB_1424c6ae9;
  }
  else {
    local_50 = puVar5;
    FUN_14256ac50(puVar5);
    puVar5 = local_50;
    if (iVar6 != 0) {
      FUN_1424c9bb0(local_50);
      FUN_1401773f0(puVar5);
      goto LAB_1424c6ae9;
    }
  }
  lVar3 = *(longlong *)(lVar1 + 0x888);
  if (lVar3 != 0) {
    FUN_1424c9bb0(lVar3);
    FUN_1401773f0(lVar3);
  }
  *(undefined8 **)(lVar1 + 0x888) = puVar5;
  if (puVar5 == (undefined8 *)0x0) {
    local_54 = 7;
  }
LAB_1424c6ae9:
  plVar7 = (longlong *)param_1[0x2e];
  if ((((plVar7[2] == 0) || (*plVar7 == 0)) || (plVar7[0x111] == 0)) || (plVar7[1] == 0)) {
    lVar1 = plVar7[0x111];
    if (lVar1 != 0) {
      FUN_1424c9bb0(lVar1);
      FUN_1401773f0(lVar1);
    }
    FUN_1424cac20(plVar7 + 5);
    lVar1 = plVar7[2];
    if (lVar1 != 0) {
      FUN_142569480(lVar1);
      FUN_1401773f0(lVar1);
    }
    puVar5 = (undefined8 *)plVar7[1];
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    lVar1 = *plVar7;
    if (lVar1 != 0) {
      FUN_1424c9bb0(lVar1);
      FUN_1401773f0(lVar1);
    }
    FUN_1401773f0(plVar7);
    param_1[0x2e] = 0;
  }
  else {
    FUN_1424c5620(param_1,&local_54);
  }
  return param_1;
}



// FUNCTION 1424c6bc0 Unwind@1424c6bc0 body=97 status=ok
// SIG undefined Unwind@1424c6bc0(void)

void Unwind_1424c6bc0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  FUN_1424cacb0(lVar1 + 0x10);
  puVar2 = *(undefined8 **)(lVar1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_1424cace0(lVar1);
  FUN_1401773f0(lVar1);
  return;
}



// FUNCTION 1424c6c30 Unwind@1424c6c30 body=52 status=ok
// SIG undefined Unwind@1424c6c30(void)

void Unwind_1424c6c30(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424c6c70 Unwind@1424c6c70 body=52 status=ok
// SIG undefined Unwind@1424c6c70(void)

void Unwind_1424c6c70(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1424c6cb0 Unwind@1424c6cb0 body=52 status=ok
// SIG undefined Unwind@1424c6cb0(void)

void Unwind_1424c6cb0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1424c6cf0 Unwind@1424c6cf0 body=52 status=ok
// SIG undefined Unwind@1424c6cf0(void)

void Unwind_1424c6cf0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1424c6d30 Unwind@1424c6d30 body=52 status=ok
// SIG undefined Unwind@1424c6d30(void)

void Unwind_1424c6d30(undefined8 param_1,longlong param_2)

{
  FUN_1424bac40(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424c6d70 FUN_1424c6d70 body=493 status=ok
// SIG undefined FUN_1424c6d70(void)

void FUN_1424c6d70(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  FUN_14256dd50(param_1 + 2,param_2 + 2,param_3,param_4,param_1 + 2);
  param_1[6] = 0;
  if (param_2[6] != 0) {
    lVar18 = thunk_FUN_1424da030(0x28);
    if (lVar18 != 0) {
      FUN_14256e140(lVar18,param_2[6]);
    }
    puVar1 = (undefined8 *)param_1[6];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[6] = lVar18;
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  uVar2 = *(undefined4 *)(param_2 + 7);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 9);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uVar8 = *(undefined4 *)(param_2 + 10);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar10 = *(undefined4 *)(param_2 + 0xb);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar12 = *(undefined4 *)(param_2 + 0xc);
  uVar13 = *(undefined4 *)((longlong)param_2 + 100);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar15 = *(undefined4 *)(param_2 + 0xe);
  uVar16 = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar14;
  *(undefined4 *)(param_1 + 0xe) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar16;
  *(undefined4 *)(param_1 + 0xb) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar11;
  *(undefined4 *)(param_1 + 0xc) = uVar12;
  *(undefined4 *)((longlong)param_1 + 100) = uVar13;
  *(undefined4 *)(param_1 + 9) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
  *(undefined4 *)(param_1 + 10) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar9;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  FUN_1424a6be0(param_1 + 0x10,param_2 + 0x10);
  FUN_1424a6be0(param_1 + 0x18,param_2 + 0x18);
  FUN_1424a6be0(param_1 + 0x20,param_2 + 0x20);
  FUN_1424a6be0(param_1 + 0x28,param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  FUN_1424a6be0(param_1 + 0x31,param_2 + 0x31);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x3b);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1cc);
  uVar3 = *(undefined4 *)(param_2 + 0x3a);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x39);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar2;
  *(undefined4 *)(param_1 + 0x3a) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar4;
  FUN_1424a6be0(param_1 + 0x3c,param_2 + 0x3c);
  FUN_1424a6be0(param_1 + 0x44,param_2 + 0x44);
  FUN_1424a6be0(param_1 + 0x4c,param_2 + 0x4c);
  FUN_1424a6be0(param_1 + 0x54,param_2 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x2ed) = *(undefined8 *)((longlong)param_2 + 0x2ed);
  uVar17 = param_2[0x5d];
  param_1[0x5c] = param_2[0x5c];
  param_1[0x5d] = uVar17;
  return;
}



// FUNCTION 1424c6f60 Unwind@1424c6f60 body=59 status=ok
// SIG undefined Unwind@1424c6f60(void)

void Unwind_1424c6f60(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x60));
  puVar1 = *(undefined8 **)(*(longlong *)(param_2 + 0x68) + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1424c6fa0 Unwind@1424c6fa0 body=36 status=ok
// SIG undefined Unwind@1424c6fa0(void)

void Unwind_1424c6fa0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x58));
  return;
}



// FUNCTION 1424c6fd0 Unwind@1424c6fd0 body=36 status=ok
// SIG undefined Unwind@1424c6fd0(void)

void Unwind_1424c6fd0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x50));
  return;
}



// FUNCTION 1424c7000 Unwind@1424c7000 body=36 status=ok
// SIG undefined Unwind@1424c7000(void)

void Unwind_1424c7000(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 1424c7030 Unwind@1424c7030 body=36 status=ok
// SIG undefined Unwind@1424c7030(void)

void Unwind_1424c7030(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1424c7060 Unwind@1424c7060 body=36 status=ok
// SIG undefined Unwind@1424c7060(void)

void Unwind_1424c7060(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1424c7090 Unwind@1424c7090 body=36 status=ok
// SIG undefined Unwind@1424c7090(void)

void Unwind_1424c7090(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1424c70c0 Unwind@1424c70c0 body=36 status=ok
// SIG undefined Unwind@1424c70c0(void)

void Unwind_1424c70c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424c70f0 Unwind@1424c70f0 body=36 status=ok
// SIG undefined Unwind@1424c70f0(void)

void Unwind_1424c70f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(*(undefined8 *)(param_2 + 0x60));
  return;
}



// FUNCTION 1424c7120 Unwind@1424c7120 body=50 status=ok
// SIG undefined Unwind@1424c7120(void)

void Unwind_1424c7120(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_2 + 0x68) + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 1424c7160 Unwind@1424c7160 body=36 status=ok
// SIG undefined Unwind@1424c7160(void)

void Unwind_1424c7160(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424c7190 FUN_1424c7190 body=98 status=ok
// SIG undefined FUN_1424c7190(void)

undefined8 * FUN_1424c7190(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(longlong *)(param_1 + 0x170) != 0) &&
     (puVar1 = (undefined8 *)thunk_FUN_1424da030(0x178), puVar1 != (undefined8 *)0x0)) {
    FUN_1424c6820(puVar1,param_1);
    if (puVar1[0x2e] != 0) {
      return puVar1;
    }
    (**(code **)*puVar1)(puVar1,1);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424c7200 Unwind@1424c7200 body=32 status=ok
// SIG undefined Unwind@1424c7200(void)

void Unwind_1424c7200(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424c7220 FUN_1424c7220 body=143 status=ok
// SIG undefined FUN_1424c7220(void)

bool FUN_1424c7220(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = false;
  lVar2 = __RTDynamicCast(param_2,0,&icu_64::Format::RTTI_Type_Descriptor,
                          &icu_64::DecimalFormat::RTTI_Type_Descriptor,0);
  if (lVar2 != 0) {
    if ((*(undefined8 **)(param_1 + 0x170) == (undefined8 *)0x0) ||
       (*(undefined8 **)(lVar2 + 0x170) == (undefined8 *)0x0)) {
      bVar3 = false;
    }
    else {
      bVar3 = false;
      cVar1 = FUN_14256af80(**(undefined8 **)(param_1 + 0x170),**(undefined8 **)(lVar2 + 0x170),0);
      if (cVar1 != '\0') {
        cVar1 = FUN_142543c30(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 8),
                              *(undefined8 *)(*(longlong *)(lVar2 + 0x170) + 8));
        bVar3 = cVar1 != '\0';
      }
    }
  }
  return bVar3;
}



// FUNCTION 1424c72b0 FUN_1424c72b0 body=406 status=ok
// SIG undefined FUN_1424c72b0(void)

longlong FUN_1424c72b0(longlong param_1,undefined **param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  double dVar4;
  undefined1 local_80 [24];
  undefined **local_68;
  longlong local_60;
  int local_44 [9];
  
  local_44[1] = -2;
  local_44[2] = -1;
  if (*(longlong *)(param_1 + 0x170) == 0) {
    FUN_1424a7130(param_3);
  }
  else {
    if ((((*(int *)(param_4 + 8) == -1) &&
         (*(char *)(*(longlong *)(param_1 + 0x170) + 0x890) != '\0')) &&
        (local_68 = param_2, sVar2 = _dtest(&local_68), sVar2 != 2)) &&
       ((dVar4 = (double)trunc(param_2), (double)param_2 <= 2147483647.0 &&
        (-2147483648.0 < (double)param_2)))) {
      if ((dVar4 == (double)param_2) && (!NAN(dVar4) && !NAN((double)param_2))) {
        iVar3 = _dsign(param_2);
        FUN_1424ca580(param_1,(int)(double)param_2,iVar3 != 0,param_3);
        return param_3;
      }
    }
    local_44[0] = 0;
    FUN_142569b90(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10),local_80,param_2,local_44);
    if (*(short *)(param_3 + 8) < 0) {
      iVar3 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar3 = (int)*(short *)(param_3 + 8) >> 5;
    }
    if (local_44[0] < 1) {
      *(undefined8 *)(param_4 + 0xc) = 0;
      cVar1 = FUN_1425646f0(local_80,param_4,local_44);
      if ((iVar3 != 0) && (cVar1 != '\0')) {
        FUN_14256f3a0(&local_68,param_4);
        FUN_14256f3f0(&local_68,iVar3);
        FUN_14256f380(&local_68);
      }
    }
    local_68 = icu_64::UnicodeStringAppendable::vftable;
    local_60 = param_3;
    FUN_142564690(local_80,&local_68,local_44);
    thunk_FUN_1424b70d0(&local_68);
    FUN_1425644b0(local_80);
  }
  return param_3;
}



// FUNCTION 1424c7450 Unwind@1424c7450 body=50 status=ok
// SIG undefined Unwind@1424c7450(void)

void Unwind_1424c7450(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x40);
  return;
}



// FUNCTION 1424c7490 Unwind@1424c7490 body=49 status=ok
// SIG undefined Unwind@1424c7490(void)

void Unwind_1424c7490(undefined8 param_1,longlong param_2)

{
  FUN_1425644b0(param_2 + 0x28);
  return;
}



// FUNCTION 1424c74d0 Unwind@1424c74d0 body=50 status=ok
// SIG undefined Unwind@1424c74d0(void)

void Unwind_1424c74d0(undefined8 param_1,longlong param_2)

{
  FUN_14256f380(param_2 + 0x40);
  return;
}



// FUNCTION 1424c7510 FUN_1424c7510 body=414 status=ok
// SIG undefined FUN_1424c7510(void)

longlong FUN_1424c7510(longlong param_1,undefined **param_2,longlong param_3,longlong param_4,
                      int *param_5)

{
  int iVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  double dVar5;
  undefined1 local_78 [24];
  undefined **local_60;
  longlong local_58;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    if (*(longlong *)(param_1 + 0x170) == 0) {
      *param_5 = 7;
      FUN_1424a7130(param_3);
    }
    else {
      if ((((*(int *)(param_4 + 8) == -1) &&
           (*(char *)(*(longlong *)(param_1 + 0x170) + 0x890) != '\0')) &&
          (local_60 = param_2, sVar3 = _dtest(&local_60), sVar3 != 2)) &&
         ((dVar5 = (double)trunc(param_2), (double)param_2 <= 2147483647.0 &&
          (-2147483648.0 < (double)param_2)))) {
        if ((dVar5 == (double)param_2) && (!NAN(dVar5) && !NAN((double)param_2))) {
          iVar4 = _dsign(param_2);
          FUN_1424ca580(param_1,(int)(double)param_2,iVar4 != 0,param_3);
          return param_3;
        }
      }
      FUN_142569b90(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10),local_78,param_2,param_5)
      ;
      if (*(short *)(param_3 + 8) < 0) {
        iVar4 = *(int *)(param_3 + 0xc);
        iVar1 = *param_5;
      }
      else {
        iVar4 = (int)*(short *)(param_3 + 8) >> 5;
        iVar1 = *param_5;
      }
      if (iVar1 < 1) {
        *(undefined8 *)(param_4 + 0xc) = 0;
        cVar2 = FUN_1425646f0(local_78,param_4,param_5);
        if ((iVar4 != 0) && (cVar2 != '\0')) {
          FUN_14256f3a0(&local_60,param_4);
          FUN_14256f3f0(&local_60,iVar4);
          FUN_14256f380(&local_60);
        }
      }
      local_60 = icu_64::UnicodeStringAppendable::vftable;
      local_58 = param_3;
      FUN_142564690(local_78,&local_60,param_5);
      thunk_FUN_1424b70d0(&local_60);
      FUN_1425644b0(local_78);
    }
  }
  return param_3;
}



// FUNCTION 1424c76b0 Unwind@1424c76b0 body=51 status=ok
// SIG undefined Unwind@1424c76b0(void)

void Unwind_1424c76b0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x38);
  return;
}



// FUNCTION 1424c76f0 Unwind@1424c76f0 body=50 status=ok
// SIG undefined Unwind@1424c76f0(void)

void Unwind_1424c76f0(undefined8 param_1,longlong param_2)

{
  FUN_1425644b0(param_2 + 0x20);
  return;
}



// FUNCTION 1424c7730 Unwind@1424c7730 body=51 status=ok
// SIG undefined Unwind@1424c7730(void)

void Unwind_1424c7730(undefined8 param_1,longlong param_2)

{
  FUN_14256f380(param_2 + 0x38);
  return;
}



// FUNCTION 1424c7770 FUN_1424c7770 body=413 status=ok
// SIG undefined FUN_1424c7770(void)

longlong FUN_1424c7770(longlong param_1,undefined **param_2,longlong param_3,longlong param_4,
                      int *param_5)

{
  short sVar1;
  int iVar2;
  double dVar3;
  undefined1 local_80 [24];
  undefined **local_68;
  longlong local_60;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    if (*(longlong *)(param_1 + 0x170) == 0) {
      *param_5 = 7;
      FUN_1424a7130(param_3);
    }
    else {
      if ((((param_4 == 0) && (*(char *)(*(longlong *)(param_1 + 0x170) + 0x890) != '\0')) &&
          (local_68 = param_2, sVar1 = _dtest(&local_68), sVar1 != 2)) &&
         ((dVar3 = (double)trunc(param_2), (double)param_2 <= 2147483647.0 &&
          (-2147483648.0 < (double)param_2)))) {
        if ((dVar3 == (double)param_2) && (!NAN(dVar3) && !NAN((double)param_2))) {
          iVar2 = _dsign(param_2);
          FUN_1424ca580(param_1,(int)(double)param_2,iVar2 != 0,param_3);
          return param_3;
        }
      }
      FUN_142569b90(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10),local_80,param_2,param_5)
      ;
      if (*(short *)(param_3 + 8) < 0) {
        iVar2 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_3 + 8) >> 5;
      }
      if ((param_4 != 0) && (*param_5 < 1)) {
        FUN_14256f430(&local_68,param_4,param_5);
        FUN_14256f390(&local_68,iVar2);
        FUN_142564730(local_80,&local_68,param_5);
        FUN_14256f4d0(&local_68);
      }
      local_68 = icu_64::UnicodeStringAppendable::vftable;
      local_60 = param_3;
      FUN_142564690(local_80,&local_68,param_5);
      thunk_FUN_1424b70d0(&local_68);
      FUN_1425644b0(local_80);
    }
  }
  return param_3;
}



// FUNCTION 1424c7910 Unwind@1424c7910 body=54 status=ok
// SIG undefined Unwind@1424c7910(void)

void Unwind_1424c7910(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x40);
  return;
}



// FUNCTION 1424c7950 Unwind@1424c7950 body=53 status=ok
// SIG undefined Unwind@1424c7950(void)

void Unwind_1424c7950(undefined8 param_1,longlong param_2)

{
  FUN_1425644b0(param_2 + 0x28);
  return;
}



// FUNCTION 1424c7990 Unwind@1424c7990 body=54 status=ok
// SIG undefined Unwind@1424c7990(void)

void Unwind_1424c7990(undefined8 param_1,longlong param_2)

{
  FUN_14256f4d0(param_2 + 0x40);
  return;
}



// FUNCTION 1424c79d0 FUN_1424c79d0 body=13 status=ok
// SIG undefined FUN_1424c79d0(void)

void FUN_1424c79d0(longlong *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424c79da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1,(longlong)param_2);
  return;
}



// FUNCTION 1424c79e0 FUN_1424c79e0 body=13 status=ok
// SIG undefined FUN_1424c79e0(void)

void FUN_1424c79e0(longlong *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424c79ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1,(longlong)param_2);
  return;
}



// FUNCTION 1424c79f0 FUN_1424c79f0 body=13 status=ok
// SIG undefined FUN_1424c79f0(void)

void FUN_1424c79f0(longlong *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001424c79fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2);
  return;
}



// FUNCTION 1424c7a00 FUN_1424c7a00 body=299 status=ok
// SIG undefined FUN_1424c7a00(void)

longlong FUN_1424c7a00(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 local_68 [24];
  undefined **local_50;
  longlong local_48;
  int local_2c [3];
  
  local_2c[1] = -2;
  local_2c[2] = -1;
  lVar1 = *(longlong *)(param_1 + 0x170);
  if (lVar1 == 0) {
    FUN_1424a7130(param_3);
  }
  else if (((*(int *)(param_4 + 8) == -1) && (param_2 + 0x7fffffff < 0xffffffff)) &&
          (*(char *)(lVar1 + 0x890) != '\0')) {
    FUN_1424ca580(param_1,param_2 & 0xffffffff,param_2 >> 0x3f,param_3);
  }
  else {
    local_2c[0] = 0;
    FUN_142569930(*(undefined8 *)(lVar1 + 0x10),local_68,param_2,local_2c);
    if (*(short *)(param_3 + 8) < 0) {
      iVar3 = *(int *)(param_3 + 0xc);
    }
    else {
      iVar3 = (int)*(short *)(param_3 + 8) >> 5;
    }
    if (local_2c[0] < 1) {
      *(undefined8 *)(param_4 + 0xc) = 0;
      cVar2 = FUN_1425646f0(local_68,param_4,local_2c);
      if ((iVar3 != 0) && (cVar2 != '\0')) {
        FUN_14256f3a0(&local_50,param_4);
        FUN_14256f3f0(&local_50,iVar3);
        FUN_14256f380(&local_50);
      }
    }
    local_50 = icu_64::UnicodeStringAppendable::vftable;
    local_48 = param_3;
    FUN_142564690(local_68,&local_50,local_2c);
    thunk_FUN_1424b70d0(&local_50);
    FUN_1425644b0(local_68);
  }
  return param_3;
}



// FUNCTION 1424c7b30 Unwind@1424c7b30 body=36 status=ok
// SIG undefined Unwind@1424c7b30(void)

void Unwind_1424c7b30(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x38);
  return;
}



// FUNCTION 1424c7b60 Unwind@1424c7b60 body=36 status=ok
// SIG undefined Unwind@1424c7b60(void)

void Unwind_1424c7b60(undefined8 param_1,longlong param_2)

{
  FUN_1425644b0(param_2 + 0x20);
  return;
}



// FUNCTION 1424c7b90 Unwind@1424c7b90 body=36 status=ok
// SIG undefined Unwind@1424c7b90(void)

void Unwind_1424c7b90(undefined8 param_1,longlong param_2)

{
  FUN_14256f380(param_2 + 0x38);
  return;
}



// FUNCTION 1424c7bc0 FUN_1424c7bc0 body=316 status=ok
// SIG undefined FUN_1424c7bc0(void)

longlong FUN_1424c7bc0(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4,
                      int *param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined1 local_68 [24];
  undefined **local_50;
  longlong local_48;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    lVar2 = *(longlong *)(param_1 + 0x170);
    if (lVar2 == 0) {
      *param_5 = 7;
      FUN_1424a7130(param_3);
    }
    else if (((*(int *)(param_4 + 8) == -1) && (param_2 + 0x7fffffff < 0xffffffff)) &&
            (*(char *)(lVar2 + 0x890) != '\0')) {
      FUN_1424ca580(param_1,param_2 & 0xffffffff,param_2 >> 0x3f,param_3);
    }
    else {
      FUN_142569930(*(undefined8 *)(lVar2 + 0x10),local_68,param_2,param_5);
      if (*(short *)(param_3 + 8) < 0) {
        iVar4 = *(int *)(param_3 + 0xc);
        iVar1 = *param_5;
      }
      else {
        iVar4 = (int)*(short *)(param_3 + 8) >> 5;
        iVar1 = *param_5;
      }
      if (iVar1 < 1) {
        *(undefined8 *)(param_4 + 0xc) = 0;
        cVar3 = FUN_1425646f0(local_68,param_4,param_5);
        if ((iVar4 != 0) && (cVar3 != '\0')) {
          FUN_14256f3a0(&local_50,param_4);
          FUN_14256f3f0(&local_50,iVar4);
          FUN_14256f380(&local_50);
        }
      }
      local_50 = icu_64::UnicodeStringAppendable::vftable;
      local_48 = param_3;
      FUN_142564690(local_68,&local_50,param_5);
      thunk_FUN_1424b70d0(&local_50);
      FUN_1425644b0(local_68);
    }
  }
  return param_3;
}



// FUNCTION 1424c7d00 Unwind@1424c7d00 body=40 status=ok
// SIG undefined Unwind@1424c7d00(void)

void Unwind_1424c7d00(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x38);
  return;
}



// FUNCTION 1424c7d30 Unwind@1424c7d30 body=40 status=ok
// SIG undefined Unwind@1424c7d30(void)

void Unwind_1424c7d30(undefined8 param_1,longlong param_2)

{
  FUN_1425644b0(param_2 + 0x20);
  return;
}



// FUNCTION 1424c7d60 Unwind@1424c7d60 body=40 status=ok
// SIG undefined Unwind@1424c7d60(void)

void Unwind_1424c7d60(undefined8 param_1,longlong param_2)

{
  FUN_14256f380(param_2 + 0x38);
  return;
}



// FUNCTION 1424c7d90 FUN_1424c7d90 body=306 status=ok
// SIG undefined FUN_1424c7d90(void)

longlong FUN_1424c7d90(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4,
                      int *param_5)

{
  longlong lVar1;
  int iVar2;
  undefined1 local_70 [24];
  undefined **local_58;
  longlong local_50;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    lVar1 = *(longlong *)(param_1 + 0x170);
    if (lVar1 == 0) {
      *param_5 = 7;
      FUN_1424a7130(param_3);
    }
    else if (((param_4 == 0) && (param_2 + 0x7fffffff < 0xffffffff)) &&
            (*(char *)(lVar1 + 0x890) != '\0')) {
      FUN_1424ca580(param_1,param_2 & 0xffffffff,param_2 >> 0x3f,param_3);
    }
    else {
      FUN_142569930(*(undefined8 *)(lVar1 + 0x10),local_70,param_2,param_5);
      if (*(short *)(param_3 + 8) < 0) {
        iVar2 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_3 + 8) >> 5;
      }
      if ((param_4 != 0) && (*param_5 < 1)) {
        FUN_14256f430(&local_58,param_4,param_5);
        FUN_14256f390(&local_58,iVar2);
        FUN_142564730(local_70,&local_58,param_5);
        FUN_14256f4d0(&local_58);
      }
      local_58 = icu_64::UnicodeStringAppendable::vftable;
      local_50 = param_3;
      FUN_142564690(local_70,&local_58,param_5);
      thunk_FUN_1424b70d0(&local_58);
      FUN_1425644b0(local_70);
    }
  }
  return param_3;
}



// FUNCTION 1424c7ed0 Unwind@1424c7ed0 body=40 status=ok
// SIG undefined Unwind@1424c7ed0(void)

void Unwind_1424c7ed0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x40);
  return;
}



// FUNCTION 1424c7f00 Unwind@1424c7f00 body=40 status=ok
// SIG undefined Unwind@1424c7f00(void)

void Unwind_1424c7f00(undefined8 param_1,longlong param_2)

{
  FUN_1425644b0(param_2 + 0x28);
  return;
}



// FUNCTION 1424c7f30 Unwind@1424c7f30 body=40 status=ok
// SIG undefined Unwind@1424c7f30(void)

void Unwind_1424c7f30(undefined8 param_1,longlong param_2)

{
  FUN_14256f4d0(param_2 + 0x40);
  return;
}



// FUNCTION 1424c7f60 FUN_1424c7f60 body=257 status=ok
// SIG undefined FUN_1424c7f60(void)

longlong FUN_1424c7f60(longlong param_1,undefined4 *param_2,longlong param_3,longlong param_4,
                      int *param_5)

{
  int iVar1;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_70 [24];
  undefined **local_58;
  longlong local_50;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    if (*(longlong *)(param_1 + 0x170) == 0) {
      *param_5 = 7;
      FUN_1424a7130(param_3);
    }
    else {
      local_88 = *param_2;
      uStack_84 = param_2[1];
      uStack_80 = param_2[2];
      uStack_7c = param_2[3];
      FUN_142569cf0(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10),local_70,&local_88,
                    param_5);
      if (*(short *)(param_3 + 8) < 0) {
        iVar1 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar1 = (int)*(short *)(param_3 + 8) >> 5;
      }
      if ((param_4 != 0) && (*param_5 < 1)) {
        FUN_14256f430(&local_58,param_4,param_5);
        FUN_14256f390(&local_58,iVar1);
        FUN_142564730(local_70,&local_58,param_5);
        FUN_14256f4d0(&local_58);
      }
      local_58 = icu_64::UnicodeStringAppendable::vftable;
      local_50 = param_3;
      FUN_142564690(local_70,&local_58,param_5);
      thunk_FUN_1424b70d0(&local_58);
      FUN_1425644b0(local_70);
    }
  }
  return param_3;
}



// FUNCTION 1424c8070 Unwind@1424c8070 body=43 status=ok
// SIG undefined Unwind@1424c8070(void)

void Unwind_1424c8070(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x50);
  return;
}



// FUNCTION 1424c80a0 Unwind@1424c80a0 body=43 status=ok
// SIG undefined Unwind@1424c80a0(void)

void Unwind_1424c80a0(undefined8 param_1,longlong param_2)

{
  FUN_1425644b0(param_2 + 0x38);
  return;
}



// FUNCTION 1424c80d0 Unwind@1424c80d0 body=43 status=ok
// SIG undefined Unwind@1424c80d0(void)

void Unwind_1424c80d0(undefined8 param_1,longlong param_2)

{
  FUN_14256f4d0(param_2 + 0x50);
  return;
}



// FUNCTION 1424c8100 FUN_1424c8100 body=240 status=ok
// SIG undefined FUN_1424c8100(void)

longlong FUN_1424c8100(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                      int *param_5)

{
  int iVar1;
  undefined1 local_70 [24];
  undefined **local_58;
  longlong local_50;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    if (*(longlong *)(param_1 + 0x170) == 0) {
      *param_5 = 7;
      FUN_1424a7130(param_3);
    }
    else {
      FUN_142569e40(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10),local_70,param_2,param_5)
      ;
      if (*(short *)(param_3 + 8) < 0) {
        iVar1 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar1 = (int)*(short *)(param_3 + 8) >> 5;
      }
      if ((param_4 != 0) && (*param_5 < 1)) {
        FUN_14256f430(&local_58,param_4,param_5);
        FUN_14256f390(&local_58,iVar1);
        FUN_142564730(local_70,&local_58,param_5);
        FUN_14256f4d0(&local_58);
      }
      local_58 = icu_64::UnicodeStringAppendable::vftable;
      local_50 = param_3;
      FUN_142564690(local_70,&local_58,param_5);
      thunk_FUN_1424b70d0(&local_58);
      FUN_1425644b0(local_70);
    }
  }
  return param_3;
}



// FUNCTION 1424c81f0 Unwind@1424c81f0 body=40 status=ok
// SIG undefined Unwind@1424c81f0(void)

void Unwind_1424c81f0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x40);
  return;
}



// FUNCTION 1424c8220 Unwind@1424c8220 body=40 status=ok
// SIG undefined Unwind@1424c8220(void)

void Unwind_1424c8220(undefined8 param_1,longlong param_2)

{
  FUN_1425644b0(param_2 + 0x28);
  return;
}



// FUNCTION 1424c8250 Unwind@1424c8250 body=40 status=ok
// SIG undefined Unwind@1424c8250(void)

void Unwind_1424c8250(undefined8 param_1,longlong param_2)

{
  FUN_14256f4d0(param_2 + 0x40);
  return;
}



// FUNCTION 1424c8280 FUN_1424c8280 body=248 status=ok
// SIG undefined FUN_1424c8280(void)

longlong FUN_1424c8280(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                      int *param_5)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 local_68 [24];
  undefined **local_50;
  longlong local_48;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_5 < 1) {
    if (*(longlong *)(param_1 + 0x170) == 0) {
      *param_5 = 7;
      FUN_1424a7130(param_3);
    }
    else {
      FUN_142569e40(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10),local_68,param_2,param_5)
      ;
      if (*(short *)(param_3 + 8) < 0) {
        iVar3 = *(int *)(param_3 + 0xc);
        iVar1 = *param_5;
      }
      else {
        iVar3 = (int)*(short *)(param_3 + 8) >> 5;
        iVar1 = *param_5;
      }
      if (iVar1 < 1) {
        *(undefined8 *)(param_4 + 0xc) = 0;
        cVar2 = FUN_1425646f0(local_68,param_4,param_5);
        if ((iVar3 != 0) && (cVar2 != '\0')) {
          FUN_14256f3a0(&local_50,param_4);
          FUN_14256f3f0(&local_50,iVar3);
          FUN_14256f380(&local_50);
        }
      }
      local_50 = icu_64::UnicodeStringAppendable::vftable;
      local_48 = param_3;
      FUN_142564690(local_68,&local_50,param_5);
      thunk_FUN_1424b70d0(&local_50);
      FUN_1425644b0(local_68);
    }
  }
  return param_3;
}



// FUNCTION 1424c8380 Unwind@1424c8380 body=40 status=ok
// SIG undefined Unwind@1424c8380(void)

void Unwind_1424c8380(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x38);
  return;
}



// FUNCTION 1424c83b0 Unwind@1424c83b0 body=40 status=ok
// SIG undefined Unwind@1424c83b0(void)

void Unwind_1424c83b0(undefined8 param_1,longlong param_2)

{
  FUN_1425644b0(param_2 + 0x20);
  return;
}



// FUNCTION 1424c83e0 Unwind@1424c83e0 body=40 status=ok
// SIG undefined Unwind@1424c83e0(void)

void Unwind_1424c83e0(undefined8 param_1,longlong param_2)

{
  FUN_14256f380(param_2 + 0x38);
  return;
}



// FUNCTION 1424c8410 FUN_1424c8410 body=491 status=ok
// SIG undefined FUN_1424c8410(void)

void FUN_1424c8410(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_130 [72];
  int local_e8;
  undefined1 local_e0 [64];
  undefined1 local_a0 [72];
  undefined **local_58;
  int local_50 [2];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x170) == 0) {
    return;
  }
  iVar3 = *(int *)(param_4 + 8);
  sVar2 = *(short *)(param_2 + 8);
  if (iVar3 < 0) {
    iVar10 = *(int *)(param_2 + 0xc);
    iVar9 = (int)sVar2 >> 5;
LAB_1424c852c:
    if (sVar2 < 0) {
      iVar9 = iVar10;
    }
    if (iVar3 == iVar9) {
      *(int *)(param_4 + 0xc) = iVar3;
    }
    return;
  }
  iVar9 = (int)sVar2 >> 5;
  iVar10 = *(int *)(param_2 + 0xc);
  iVar4 = iVar9;
  if (sVar2 < 0) {
    iVar4 = iVar10;
  }
  if (iVar4 <= iVar3) goto LAB_1424c852c;
  local_58 = icu_64::ErrorCode::vftable;
  local_50[0] = 0;
  FUN_14256f7c0(local_130);
  iVar3 = *(int *)(param_4 + 8);
  puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 0x170) + 0x18);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)
             FUN_1425702e0(**(undefined8 **)(param_1 + 0x170),(*(undefined8 **)(param_1 + 0x170))[1]
                           ,0,local_50);
    if (0 < local_50[0]) goto LAB_1424c8569;
    if (puVar7 == (undefined8 *)0x0) {
      local_50[0] = 7;
      goto LAB_1424c8569;
    }
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x170) + 0x18);
    LOCK();
    puVar8 = (undefined8 *)*plVar1;
    bVar11 = puVar8 == (undefined8 *)0x0;
    if (bVar11) {
      *plVar1 = (longlong)puVar7;
      puVar8 = (undefined8 *)0x0;
    }
    UNLOCK();
    if (!bVar11) {
      (**(code **)*puVar7)(puVar7,1);
      puVar7 = puVar8;
    }
  }
  if ((local_50[0] < 1) &&
     (FUN_142571ed0(puVar7,param_2,iVar3,1,local_130,local_50), local_50[0] < 1)) {
    cVar5 = FUN_14256f8d0(local_130);
    if (cVar5 == '\0') {
      *(int *)(param_4 + 0xc) = local_e8 + iVar3;
    }
    else {
      *(int *)(param_4 + 8) = local_e8;
      uVar6 = FUN_142571ec0(puVar7);
      FUN_14256f910(local_130,param_3,uVar6);
    }
  }
LAB_1424c8569:
  FUN_140859a90(local_a0);
  FUN_140859a90(local_e0);
  FUN_142537d50(local_130);
  FUN_142572ba0(&local_58);
  return;
}



// FUNCTION 1424c8600 Unwind@1424c8600 body=55 status=ok
// SIG undefined Unwind@1424c8600(void)

void Unwind_1424c8600(undefined8 param_1,longlong param_2)

{
  FUN_1424c8680(param_2 + 0x38);
  return;
}



// FUNCTION 1424c8640 Unwind@1424c8640 body=58 status=ok
// SIG undefined Unwind@1424c8640(void)

void Unwind_1424c8640(undefined8 param_1,longlong param_2)

{
  FUN_142572ba0(param_2 + 0x110);
  return;
}



// FUNCTION 1424c8680 FUN_1424c8680 body=42 status=ok
// SIG undefined FUN_1424c8680(void)

void FUN_1424c8680(longlong param_1)

{
  FUN_140859a90(param_1 + 0x90);
  FUN_140859a90(param_1 + 0x50);
  FUN_142537d50(param_1);
  return;
}



// FUNCTION 1424c86b0 FUN_1424c86b0 body=597 status=ok
// SIG undefined FUN_1424c86b0(void)

undefined8 * FUN_1424c86b0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_1a8 [72];
  int local_160;
  undefined1 local_158 [64];
  undefined1 local_118 [64];
  undefined1 local_d8 [8];
  undefined1 local_d0 [112];
  undefined8 *local_60;
  undefined **local_58;
  int local_50 [2];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((*(longlong *)(param_1 + 0x170) == 0) || (*(int *)(param_3 + 8) < 0)) {
    return (undefined8 *)0x0;
  }
  if (*(short *)(param_2 + 8) < 0) {
    iVar6 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar6 = (int)*(short *)(param_2 + 8) >> 5;
  }
  if (iVar6 <= *(int *)(param_3 + 8)) {
    return (undefined8 *)0x0;
  }
  local_58 = icu_64::ErrorCode::vftable;
  local_50[0] = 0;
  FUN_14256f7c0(local_1a8);
  iVar6 = *(int *)(param_3 + 8);
  puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x170) + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)
             FUN_1425702e0(**(undefined8 **)(param_1 + 0x170),(*(undefined8 **)(param_1 + 0x170))[1]
                           ,1,local_50);
    if (puVar4 == (undefined8 *)0x0) {
      local_50[0] = 7;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x170) + 0x20);
      LOCK();
      puVar5 = (undefined8 *)*plVar1;
      bVar7 = puVar5 == (undefined8 *)0x0;
      if (bVar7) {
        *plVar1 = 0;
        puVar5 = (undefined8 *)0x0;
      }
      UNLOCK();
      puVar4 = (undefined8 *)0x0;
      if (!bVar7) {
        puVar4 = puVar5;
      }
    }
    else {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x170) + 0x20);
      LOCK();
      puVar5 = (undefined8 *)*plVar1;
      bVar7 = puVar5 == (undefined8 *)0x0;
      if (bVar7) {
        *plVar1 = (longlong)puVar4;
        puVar5 = (undefined8 *)0x0;
      }
      UNLOCK();
      if (!bVar7) {
        (**(code **)*puVar4)(puVar4,1);
        puVar4 = puVar5;
      }
    }
  }
  if ((local_50[0] < 1) &&
     (FUN_142571ed0(puVar4,param_2,iVar6,1,local_1a8,local_50), local_50[0] < 1)) {
    cVar2 = FUN_14256f8d0(local_1a8);
    if (cVar2 != '\0') {
      *(int *)(param_3 + 8) = local_160;
      FUN_14252c810(local_d0);
      uVar3 = FUN_142571ec0(puVar4);
      FUN_14256f910(local_1a8,local_d0,uVar3);
      puVar4 = (undefined8 *)thunk_FUN_1424da030(0x80);
      if (puVar4 == (undefined8 *)0x0) {
        if (local_50[0] < 1) {
          local_50[0] = 7;
        }
LAB_1424c88ec:
        puVar4 = (undefined8 *)0x0;
      }
      else {
        local_60 = puVar4;
        FUN_14253b3b0(puVar4,local_d0,local_d8,local_50);
        puVar4 = local_60;
        if (0 < local_50[0]) {
          (**(code **)*local_60)(local_60,1);
          goto LAB_1424c88ec;
        }
      }
      FUN_14252d110(local_d0);
      goto LAB_1424c88ad;
    }
    *(int *)(param_3 + 0xc) = local_160 + iVar6;
  }
  puVar4 = (undefined8 *)0x0;
LAB_1424c88ad:
  FUN_140859a90(local_118);
  FUN_140859a90(local_158);
  FUN_142537d50(local_1a8);
  FUN_142572ba0(&local_58);
  return puVar4;
}



// FUNCTION 1424c8910 Unwind@1424c8910 body=58 status=ok
// SIG undefined Unwind@1424c8910(void)

void Unwind_1424c8910(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x178));
  return;
}



// FUNCTION 1424c8950 Unwind@1424c8950 body=58 status=ok
// SIG undefined Unwind@1424c8950(void)

void Unwind_1424c8950(undefined8 param_1,longlong param_2)

{
  FUN_14252d110(param_2 + 0x108);
  return;
}



// FUNCTION 1424c8990 Unwind@1424c8990 body=55 status=ok
// SIG undefined Unwind@1424c8990(void)

void Unwind_1424c8990(undefined8 param_1,longlong param_2)

{
  FUN_1424c8680(param_2 + 0x30);
  return;
}



// FUNCTION 1424c89d0 Unwind@1424c89d0 body=58 status=ok
// SIG undefined Unwind@1424c89d0(void)

void Unwind_1424c89d0(undefined8 param_1,longlong param_2)

{
  FUN_142572ba0(param_2 + 0x180);
  return;
}



// FUNCTION 1424c8a10 FUN_1424c8a10 body=20 status=ok
// SIG undefined FUN_1424c8a10(void)

undefined8 FUN_1424c8a10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x170) + 8);
  }
  return 0;
}



// FUNCTION 1424c8a30 FUN_1424c8a30 body=107 status=ok
// SIG undefined FUN_1424c8a30(void)

void FUN_1424c8a30(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_1c;
  
  if (param_2 != (undefined8 *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x170);
    if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001424c8a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_2)(param_2,1);
      return;
    }
    puVar2 = *(undefined8 **)(lVar1 + 8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 **)(lVar1 + 8) = param_2;
    local_1c = 0;
    FUN_1424c5620(param_1,&local_1c);
  }
  return;
}



// FUNCTION 1424c8aa0 FUN_1424c8aa0 body=274 status=ok
// SIG undefined FUN_1424c8aa0(void)

void FUN_1424c8aa0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    lVar4 = thunk_FUN_1424da030(0xb00);
    if (lVar4 == 0) {
      plVar3 = *(longlong **)(param_1 + 0x170);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = plVar3[0x111];
        if (lVar4 != 0) {
          FUN_1424c9bb0(lVar4);
          FUN_1401773f0(lVar4);
        }
        FUN_1424cac20(plVar3 + 5);
        lVar4 = plVar3[2];
        if (lVar4 != 0) {
          FUN_142569480(lVar4);
          FUN_1401773f0(lVar4);
        }
        puVar2 = (undefined8 *)plVar3[1];
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        lVar4 = *plVar3;
        if (lVar4 != 0) {
          FUN_1424c9bb0(lVar4);
          FUN_1401773f0(lVar4);
        }
        FUN_1401773f0(plVar3);
      }
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
    else {
      FUN_142543680(lVar4,param_2);
      lVar1 = *(longlong *)(param_1 + 0x170);
      puVar2 = *(undefined8 **)(lVar1 + 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(longlong *)(lVar1 + 8) = lVar4;
      local_2c = 0;
      FUN_1424c5620(param_1,&local_2c);
    }
  }
  return;
}



// FUNCTION 1424c8bc0 Unwind@1424c8bc0 body=36 status=ok
// SIG undefined Unwind@1424c8bc0(void)

void Unwind_1424c8bc0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424c8bf0 FUN_1424c8bf0 body=23 status=ok
// SIG undefined FUN_1424c8bf0(void)

undefined8 FUN_1424c8bf0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    return *(undefined8 *)(**(longlong **)(param_1 + 0x170) + 0x30);
  }
  return 0;
}



// FUNCTION 1424c8c10 FUN_1424c8c10 body=110 status=ok
// SIG undefined FUN_1424c8c10(void)

void FUN_1424c8c10(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_1c;
  
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
    if (param_2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001424c8c7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_2)(param_2,1);
      return;
    }
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x170);
    puVar2 = *(undefined8 **)(lVar1 + 0x30);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *(undefined8 **)(lVar1 + 0x30) = param_2;
    local_1c = 0;
    FUN_1424c5620(param_1,&local_1c);
  }
  return;
}



// FUNCTION 1424c8c80 FUN_1424c8c80 body=124 status=ok
// SIG undefined FUN_1424c8c80(void)

void FUN_1424c8c80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x170);
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      uVar3 = FUN_14256e640(param_2);
      puVar2 = *(undefined8 **)(lVar1 + 0x30);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      *(undefined8 *)(lVar1 + 0x30) = uVar3;
    }
    else {
      FUN_14256e1a0();
    }
    local_24 = 0;
    FUN_1424c5620(param_1,&local_24);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424c8d10 FUN_1424c8d10 body=98 status=ok
// SIG undefined FUN_1424c8d10(void)

void FUN_1424c8d10(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  int *local_28;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    local_14 = 0;
    local_28 = &local_14;
    FUN_142569f80(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10),1,0,param_2);
    if (local_14 < 1) goto LAB_1424c8d65;
  }
  FUN_1424a7130(param_2);
LAB_1424c8d65:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424c8d80 FUN_1424c8d80 body=212 status=ok
// SIG undefined FUN_1424c8d80(void)

void FUN_1424c8d80(longlong param_1,longlong param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) goto LAB_1424c8e47;
  lVar4 = **(longlong **)(param_1 + 0x170);
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar5 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar5 = (int)(short)uVar1 >> 5;
    }
    uVar1 = *(ushort *)(lVar4 + 0x1e8);
    if ((short)uVar1 < 0) {
      iVar3 = *(int *)(lVar4 + 0x1ec);
    }
    else {
      iVar3 = (int)(short)uVar1 >> 5;
    }
    if (((uVar1 & 1) == 0) && (iVar5 == iVar3)) {
      bVar2 = FUN_1412ae090(param_2,lVar4 + 0x1e0);
      goto joined_r0x0001424c8dcc;
    }
  }
  else {
    bVar2 = *(byte *)(lVar4 + 0x1e8) & 1;
joined_r0x0001424c8dcc:
    if (bVar2 != 0) goto LAB_1424c8e47;
    lVar4 = **(longlong **)(param_1 + 0x170);
  }
  FUN_1424a7c80(lVar4 + 0x1e0,param_2);
  local_1c = 0;
  FUN_1424c5620(param_1,&local_1c);
LAB_1424c8e47:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424c8e60 FUN_1424c8e60 body=98 status=ok
// SIG undefined FUN_1424c8e60(void)

void FUN_1424c8e60(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  int *local_28;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    local_14 = 0;
    local_28 = &local_14;
    FUN_142569f80(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10),1,1,param_2);
    if (local_14 < 1) goto LAB_1424c8eb5;
  }
  FUN_1424a7130(param_2);
LAB_1424c8eb5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424c8ed0 FUN_1424c8ed0 body=206 status=ok
// SIG undefined FUN_1424c8ed0(void)

void FUN_1424c8ed0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) goto LAB_1424c8f91;
  lVar4 = **(longlong **)(param_1 + 0x170);
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar5 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar5 = (int)(short)uVar1 >> 5;
    }
    uVar1 = *(ushort *)(lVar4 + 0x88);
    if ((short)uVar1 < 0) {
      iVar3 = *(int *)(lVar4 + 0x8c);
    }
    else {
      iVar3 = (int)(short)uVar1 >> 5;
    }
    if (((uVar1 & 1) == 0) && (iVar5 == iVar3)) {
      bVar2 = FUN_1412ae090(param_2,lVar4 + 0x80);
      goto joined_r0x0001424c8f1c;
    }
  }
  else {
    bVar2 = *(byte *)(lVar4 + 0x88) & 1;
joined_r0x0001424c8f1c:
    if (bVar2 != 0) goto LAB_1424c8f91;
    lVar4 = **(longlong **)(param_1 + 0x170);
  }
  FUN_1424a7c80(lVar4 + 0x80,param_2);
  local_1c = 0;
  FUN_1424c5620(param_1,&local_1c);
LAB_1424c8f91:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424c8fb0 FUN_1424c8fb0 body=98 status=ok
// SIG undefined FUN_1424c8fb0(void)

void FUN_1424c8fb0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  int *local_28;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    local_14 = 0;
    local_28 = &local_14;
    FUN_142569f80(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10),0,0,param_2);
    if (local_14 < 1) goto LAB_1424c9005;
  }
  FUN_1424a7130(param_2);
LAB_1424c9005:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424c9020 FUN_1424c9020 body=212 status=ok
// SIG undefined FUN_1424c9020(void)

void FUN_1424c9020(longlong param_1,longlong param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) goto LAB_1424c90e7;
  lVar4 = **(longlong **)(param_1 + 0x170);
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar5 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar5 = (int)(short)uVar1 >> 5;
    }
    uVar1 = *(ushort *)(lVar4 + 0x268);
    if ((short)uVar1 < 0) {
      iVar3 = *(int *)(lVar4 + 0x26c);
    }
    else {
      iVar3 = (int)(short)uVar1 >> 5;
    }
    if (((uVar1 & 1) == 0) && (iVar5 == iVar3)) {
      bVar2 = FUN_1412ae090(param_2,lVar4 + 0x260);
      goto joined_r0x0001424c906c;
    }
  }
  else {
    bVar2 = *(byte *)(lVar4 + 0x268) & 1;
joined_r0x0001424c906c:
    if (bVar2 != 0) goto LAB_1424c90e7;
    lVar4 = **(longlong **)(param_1 + 0x170);
  }
  FUN_1424a7c80(lVar4 + 0x260,param_2);
  local_1c = 0;
  FUN_1424c5620(param_1,&local_1c);
LAB_1424c90e7:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424c9100 FUN_1424c9100 body=98 status=ok
// SIG undefined FUN_1424c9100(void)

void FUN_1424c9100(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  int *local_28;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    local_14 = 0;
    local_28 = &local_14;
    FUN_142569f80(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10),0,1,param_2);
    if (local_14 < 1) goto LAB_1424c9155;
  }
  FUN_1424a7130(param_2);
LAB_1424c9155:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424c9170 FUN_1424c9170 body=212 status=ok
// SIG undefined FUN_1424c9170(void)

void FUN_1424c9170(longlong param_1,longlong param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) goto LAB_1424c9237;
  lVar4 = **(longlong **)(param_1 + 0x170);
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar5 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar5 = (int)(short)uVar1 >> 5;
    }
    uVar1 = *(ushort *)(lVar4 + 0x108);
    if ((short)uVar1 < 0) {
      iVar3 = *(int *)(lVar4 + 0x10c);
    }
    else {
      iVar3 = (int)(short)uVar1 >> 5;
    }
    if (((uVar1 & 1) == 0) && (iVar5 == iVar3)) {
      bVar2 = FUN_1412ae090(param_2,lVar4 + 0x100);
      goto joined_r0x0001424c91bc;
    }
  }
  else {
    bVar2 = *(byte *)(lVar4 + 0x108) & 1;
joined_r0x0001424c91bc:
    if (bVar2 != 0) goto LAB_1424c9237;
    lVar4 = **(longlong **)(param_1 + 0x170);
  }
  FUN_1424a7c80(lVar4 + 0x100,param_2);
  local_1c = 0;
  FUN_1424c5620(param_1,&local_1c);
LAB_1424c9237:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424c9250 FUN_1424c9250 body=158 status=ok
// SIG undefined FUN_1424c9250(void)

void FUN_1424c9250(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    param_2 = param_2 + (uint)(param_2 == 0);
    iVar1 = 0;
    iVar2 = param_2;
    do {
      if (iVar2 == 1) {
        param_2 = 1;
        goto LAB_1424c92bb;
      }
      iVar1 = iVar1 + 1;
      bVar3 = (iVar2 / 10) * 10 == iVar2;
      iVar2 = iVar2 / 10;
    } while (bVar3);
    iVar1 = 0;
LAB_1424c92bb:
    *(int *)(**(longlong **)(param_1 + 0x170) + 0x50) = iVar1;
    *(int *)(**(longlong **)(param_1 + 0x170) + 0x74) = param_2;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c9300 FUN_1424c9300 body=43 status=ok
// SIG undefined FUN_1424c9300(void)

undefined8 FUN_1424c9300(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x170) == 0) {
    lVar1 = FUN_14256b390();
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x888);
  }
  return *(undefined8 *)(lVar1 + 0x2e0);
}



// FUNCTION 1424c9330 FUN_1424c9330 body=89 status=ok
// SIG undefined FUN_1424c9330(void)

void FUN_1424c9330(longlong param_1,double param_2)

{
  double dVar1;
  longlong lVar2;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x170);
    dVar1 = *(double *)(lVar2 + 0x2e0);
    if ((dVar1 != param_2) || (NAN(dVar1) || NAN(param_2))) {
      *(double *)(lVar2 + 0x2e0) = param_2;
      local_c = 0;
      FUN_1424c5620(dVar1,&local_c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c9390 FUN_1424c9390 body=41 status=ok
// SIG undefined FUN_1424c9390(void)

undefined4 FUN_1424c9390(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x170) == 0) {
    lVar1 = FUN_14256b390();
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x888);
  }
  return *(undefined4 *)(lVar1 + 0x2ec);
}



// FUNCTION 1424c93c0 FUN_1424c93c0 body=125 status=ok
// SIG undefined FUN_1424c93c0(void)

void FUN_1424c93c0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x170);
    if ((*(char *)(lVar1 + 0x2e8) != '\0') || (*(int *)(lVar1 + 0x2ec) != param_2)) {
      FUN_1424bbb00(param_1,param_2);
      lVar1 = **(longlong **)(param_1 + 0x170);
      *(int *)(lVar1 + 0x2ec) = param_2;
      *(undefined1 *)(lVar1 + 0x2e8) = 0;
      local_1c = 0;
      FUN_1424c5620(param_1,&local_1c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1424c9450 FUN_1424c9450 body=34 status=ok
// SIG undefined FUN_1424c9450(void)

undefined4 FUN_1424c9450(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
    lVar1 = FUN_14256b390();
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x170);
  }
  return *(undefined4 *)(lVar1 + 0x44);
}



// FUNCTION 1424c9480 FUN_1424c9480 body=73 status=ok
// SIG undefined FUN_1424c9480(void)

void FUN_1424c9480(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x170), *(int *)(lVar1 + 0x44) != param_2)) {
    *(int *)(lVar1 + 0x44) = param_2;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c94d0 FUN_1424c94d0 body=81 status=ok
// SIG undefined FUN_1424c94d0(void)

undefined8 FUN_1424c94d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((*(longlong **)(param_1 + 0x170) == (longlong *)0x0) ||
     (lVar1 = **(longlong **)(param_1 + 0x170), (*(byte *)(lVar1 + 400) & 1) != 0)) {
    FUN_1424a7060(param_2,1,&DAT_14993bdac,0xffffffff);
  }
  else {
    FUN_1424a6be0(param_2,lVar1 + 0x188);
  }
  return param_2;
}



// FUNCTION 1424c9530 FUN_1424c9530 body=285 status=ok
// SIG undefined FUN_1424c9530(void)

void FUN_1424c9530(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_50 [16];
  
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
    return;
  }
  lVar2 = **(longlong **)(param_1 + 0x170);
  uVar4 = *(ushort *)(param_2 + 8);
  if ((uVar4 & 1) == 0) {
    iVar6 = (int)(short)uVar4 >> 5;
    iVar8 = *(int *)(param_2 + 0xc);
    iVar7 = iVar6;
    if ((short)uVar4 < 0) {
      iVar7 = iVar8;
    }
    uVar1 = *(ushort *)(lVar2 + 400);
    if ((short)uVar1 < 0) {
      iVar9 = *(int *)(lVar2 + 0x194);
    }
    else {
      iVar9 = (int)(short)uVar1 >> 5;
    }
    if (((uVar1 & 1) != 0) || (iVar7 != iVar9)) goto LAB_1424c95d7;
    bVar3 = FUN_1412ae090(param_2,lVar2 + 0x188);
  }
  else {
    bVar3 = *(byte *)(lVar2 + 400) & 1;
  }
  if (bVar3 != 0) {
    return;
  }
  uVar4 = *(ushort *)(param_2 + 8);
  iVar8 = *(int *)(param_2 + 0xc);
  iVar6 = (int)(short)uVar4 >> 5;
LAB_1424c95d7:
  if ((short)uVar4 < 0) {
    iVar6 = iVar8;
  }
  if (iVar6 < 1) {
    FUN_1424a7130(**(longlong **)(param_1 + 0x170) + 0x188);
  }
  else {
    uVar5 = FUN_1424a8030(param_2,0);
    FUN_1424a6c30(local_50,uVar5);
    FUN_1424a7ca0(**(longlong **)(param_1 + 0x170) + 0x188,local_50);
    FUN_140859a90(local_50);
  }
  local_50[0] = 0;
  FUN_1424c5620(param_1,local_50);
  return;
}



// FUNCTION 1424c9650 FUN_1424c9650 body=34 status=ok
// SIG undefined FUN_1424c9650(void)

undefined4 FUN_1424c9650(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x170), *(char *)(lVar1 + 0x180) == '\0')) {
    return *(undefined4 *)(lVar1 + 0x184);
  }
  return 0;
}



// FUNCTION 1424c9680 FUN_1424c9680 body=95 status=ok
// SIG undefined FUN_1424c9680(void)

void FUN_1424c9680(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     ((lVar1 = **(longlong **)(param_1 + 0x170), *(char *)(lVar1 + 0x180) != '\0' ||
      (*(int *)(lVar1 + 0x184) != param_2)))) {
    *(int *)(lVar1 + 0x184) = param_2;
    *(undefined1 *)(lVar1 + 0x180) = 0;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c96f0 FUN_1424c96f0 body=38 status=ok
// SIG undefined FUN_1424c96f0(void)

bool FUN_1424c96f0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
    lVar1 = FUN_14256b390();
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x170);
  }
  return *(int *)(lVar1 + 0x60) != -1;
}



// FUNCTION 1424c9720 FUN_1424c9720 body=88 status=ok
// SIG undefined FUN_1424c9720(void)

void FUN_1424c9720(longlong param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    uVar2 = -(uint)(param_2 == '\0') | 1;
    lVar1 = **(longlong **)(param_1 + 0x170);
    if (*(uint *)(lVar1 + 0x60) != uVar2) {
      *(uint *)(lVar1 + 0x60) = uVar2;
      local_c = 0;
      FUN_1424c5620(param_1,&local_c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c9780 FUN_1424c9780 body=35 status=ok
// SIG undefined FUN_1424c9780(void)

undefined1 FUN_1424c9780(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
    lVar1 = FUN_14256b390();
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x170);
  }
  return *(undefined1 *)(lVar1 + 0x60);
}



// FUNCTION 1424c97b0 FUN_1424c97b0 body=76 status=ok
// SIG undefined FUN_1424c97b0(void)

void FUN_1424c97b0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x170);
    if (*(int *)(lVar1 + 0x60) != (int)param_2) {
      *(int *)(lVar1 + 0x60) = (int)param_2;
      local_c = 0;
      FUN_1424c5620(param_1,&local_c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c9810 FUN_1424c9810 body=35 status=ok
// SIG undefined FUN_1424c9810(void)

undefined1 FUN_1424c9810(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x170) == (longlong *)0x0) {
    lVar1 = FUN_14256b390();
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x170);
  }
  return *(undefined1 *)(lVar1 + 0x42);
}



// FUNCTION 1424c9840 FUN_1424c9840 body=78 status=ok
// SIG undefined FUN_1424c9840(void)

void FUN_1424c9840(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x170);
    if ((bool)*(char *)(lVar1 + 0x42) != (param_2 != '\0')) {
      *(bool *)(lVar1 + 0x42) = param_2 != '\0';
      local_c = 0;
      FUN_1424c5620(param_1,&local_c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c98a0 FUN_1424c98a0 body=73 status=ok
// SIG undefined FUN_1424c98a0(void)

void FUN_1424c98a0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x170), *(int *)(lVar1 + 0x48) != param_2)) {
    *(int *)(lVar1 + 0x48) = param_2;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c98f0 FUN_1424c98f0 body=79 status=ok
// SIG undefined FUN_1424c98f0(void)

void FUN_1424c98f0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x170), *(int *)(lVar1 + 0x2f0) != param_2)) {
    *(int *)(lVar1 + 0x2f0) = param_2;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c9950 FUN_1424c9950 body=78 status=ok
// SIG undefined FUN_1424c9950(void)

void FUN_1424c9950(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x170);
    if ((bool)*(char *)(lVar1 + 0x41) != (param_2 != '\0')) {
      *(bool *)(lVar1 + 0x41) = param_2 != '\0';
      local_c = 0;
      FUN_1424c5620(param_1,&local_c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c99b0 FUN_1424c99b0 body=78 status=ok
// SIG undefined FUN_1424c99b0(void)

void FUN_1424c99b0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x170);
    if ((bool)*(char *)(lVar1 + 0x40) != (param_2 != '\0')) {
      *(bool *)(lVar1 + 0x40) = param_2 != '\0';
      local_c = 0;
      FUN_1424c5620(param_1,&local_c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c9a10 FUN_1424c9a10 body=320 status=ok
// SIG undefined FUN_1424c9a10(void)

undefined8 FUN_1424c9a10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 local_370 [8];
  char local_368;
  longlong local_340;
  char local_338;
  undefined4 local_31c;
  undefined4 local_30c;
  undefined1 local_2b0 [128];
  undefined1 local_230 [224];
  undefined1 local_150 [128];
  undefined1 local_d0 [64];
  undefined8 local_90;
  undefined1 local_78 [64];
  undefined **local_38;
  undefined4 local_30 [2];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(undefined8 **)(param_1 + 0x170) != (undefined8 *)0x0) {
    local_38 = icu_64::ErrorCode::vftable;
    local_30[0] = 0;
    FUN_1424c6d70(local_370,**(undefined8 **)(param_1 + 0x170));
    if ((((local_368 == '\0') || (local_340 != 0)) || (local_338 == '\0')) ||
       (((cVar2 = FUN_142573770(local_150,local_30), cVar2 != '\0' ||
         (cVar2 = FUN_142573770(local_d0,local_30), cVar2 != '\0')) ||
        ((cVar2 = FUN_142573770(local_2b0,local_30), cVar2 != '\0' ||
         (cVar2 = FUN_142573770(local_230,local_30), cVar2 != '\0')))))) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x888);
      local_30c = *(undefined4 *)(lVar1 + 100);
      local_31c = *(undefined4 *)(lVar1 + 0x54);
      local_90 = *(undefined8 *)(lVar1 + 0x2e0);
    }
    FUN_142566860(local_78,local_370,local_30);
    FUN_1424a7ca0(param_2,local_78);
    FUN_140859a90(local_78);
    FUN_1424c9bb0(local_370);
    FUN_142572ba0(&local_38);
    return param_2;
  }
  FUN_1424a7130(param_2);
  return param_2;
}



// FUNCTION 1424c9b50 Unwind@1424c9b50 body=39 status=ok
// SIG undefined Unwind@1424c9b50(void)

void Unwind_1424c9b50(undefined8 param_1,longlong param_2)

{
  FUN_1424c9bb0(param_2 + 0x28);
  return;
}



// FUNCTION 1424c9b80 Unwind@1424c9b80 body=42 status=ok
// SIG undefined Unwind@1424c9b80(void)

void Unwind_1424c9b80(undefined8 param_1,longlong param_2)

{
  FUN_142572ba0(param_2 + 0x360);
  return;
}



// FUNCTION 1424c9bb0 FUN_1424c9bb0 body=152 status=ok
// SIG undefined FUN_1424c9bb0(void)

void FUN_1424c9bb0(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_140859a90(param_1 + 0x2a0);
  FUN_140859a90(param_1 + 0x260);
  FUN_140859a90(param_1 + 0x220);
  FUN_140859a90(param_1 + 0x1e0);
  FUN_140859a90(param_1 + 0x188);
  FUN_140859a90(param_1 + 0x140);
  FUN_140859a90(param_1 + 0x100);
  FUN_140859a90(param_1 + 0xc0);
  FUN_140859a90(param_1 + 0x80);
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  thunk_FUN_1424b70d0(param_1 + 0x10);
  return;
}



// FUNCTION 1424c9c50 FUN_1424c9c50 body=174 status=ok
// SIG undefined FUN_1424c9c50(void)

undefined8 FUN_1424c9c50(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_70 [64];
  undefined **local_30;
  undefined4 local_28 [2];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (param_1[0x2e] == 0) {
    FUN_1424a7130(param_2);
  }
  else {
    local_30 = icu_64::ErrorCode::vftable;
    local_28[0] = 0;
    uVar1 = (**(code **)(*param_1 + 0x218))(param_1,param_2);
    FUN_1424a7c80(param_2,uVar1);
    FUN_142567c80(local_70,param_2,*(undefined8 *)(param_1[0x2e] + 8),1,local_28);
    FUN_1424a7ca0(param_2,local_70);
    FUN_140859a90(local_70);
    FUN_142572ba0(&local_30);
  }
  return param_2;
}



// FUNCTION 1424c9d00 Unwind@1424c9d00 body=37 status=ok
// SIG undefined Unwind@1424c9d00(void)

void Unwind_1424c9d00(undefined8 param_1,longlong param_2)

{
  FUN_142572ba0(param_2 + 0x68);
  return;
}



// FUNCTION 1424c9d30 FUN_1424c9d30 body=16 status=ok
// SIG undefined FUN_1424c9d30(void)

void FUN_1424c9d30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001424c9d3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x228))(param_1,param_2,param_4);
  return;
}



// FUNCTION 1424c9d40 FUN_1424c9d40 body=82 status=ok
// SIG undefined FUN_1424c9d40(void)

void FUN_1424c9d40(longlong param_1,undefined8 param_2,int *param_3)

{
  if (*param_3 < 1) {
    if (*(undefined8 **)(param_1 + 0x170) != (undefined8 *)0x0) {
      thunk_FUN_1425651b0(param_2,**(undefined8 **)(param_1 + 0x170),0,param_3);
      FUN_1424c5620(param_1,param_3);
      return;
    }
    *param_3 = 7;
  }
  return;
}



// FUNCTION 1424c9da0 FUN_1424c9da0 body=16 status=ok
// SIG undefined FUN_1424c9da0(void)

void FUN_1424c9da0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001424c9dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x238))(param_1,param_2,param_4);
  return;
}



// FUNCTION 1424c9db0 FUN_1424c9db0 body=113 status=ok
// SIG undefined FUN_1424c9db0(void)

void FUN_1424c9db0(longlong *param_1,undefined8 param_2,int *param_3)

{
  undefined1 local_68 [64];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*param_3 < 1) {
    if (param_1[0x2e] == 0) {
      *param_3 = 7;
    }
    else {
      FUN_142567c80(local_68,param_2,*(undefined8 *)(param_1[0x2e] + 8),0,param_3);
      (**(code **)(*param_1 + 0x228))(param_1,local_68,param_3);
      FUN_140859a90(local_68);
    }
  }
  return;
}



// FUNCTION 1424c9e30 Unwind@1424c9e30 body=36 status=ok
// SIG undefined Unwind@1424c9e30(void)

void Unwind_1424c9e30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1424c9e60 FUN_1424c9e60 body=100 status=ok
// SIG undefined FUN_1424c9e60(void)

void FUN_1424c9e60(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x170), *(int *)(lVar1 + 0x58) != param_2)) {
    if ((-1 < *(int *)(lVar1 + 0x6c)) && (param_2 < *(int *)(lVar1 + 0x6c))) {
      *(int *)(lVar1 + 0x6c) = param_2;
      lVar1 = **(longlong **)(param_1 + 0x170);
    }
    *(int *)(lVar1 + 0x58) = param_2;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c9ed0 FUN_1424c9ed0 body=100 status=ok
// SIG undefined FUN_1424c9ed0(void)

void FUN_1424c9ed0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x170), *(int *)(lVar1 + 0x6c) != param_2)) {
    if ((-1 < *(int *)(lVar1 + 0x58)) && (*(int *)(lVar1 + 0x58) < param_2)) {
      *(int *)(lVar1 + 0x58) = param_2;
      lVar1 = **(longlong **)(param_1 + 0x170);
    }
    *(int *)(lVar1 + 0x6c) = param_2;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c9f40 FUN_1424c9f40 body=100 status=ok
// SIG undefined FUN_1424c9f40(void)

void FUN_1424c9f40(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x170), *(int *)(lVar1 + 0x54) != param_2)) {
    if ((-1 < *(int *)(lVar1 + 100)) && (param_2 < *(int *)(lVar1 + 100))) {
      *(int *)(lVar1 + 100) = param_2;
      lVar1 = **(longlong **)(param_1 + 0x170);
    }
    *(int *)(lVar1 + 0x54) = param_2;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424c9fb0 FUN_1424c9fb0 body=100 status=ok
// SIG undefined FUN_1424c9fb0(void)

void FUN_1424c9fb0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(longlong **)(param_1 + 0x170) != (longlong *)0x0) &&
     (lVar1 = **(longlong **)(param_1 + 0x170), *(int *)(lVar1 + 100) != param_2)) {
    if ((-1 < *(int *)(lVar1 + 0x54)) && (*(int *)(lVar1 + 0x54) < param_2)) {
      *(int *)(lVar1 + 0x54) = param_2;
      lVar1 = **(longlong **)(param_1 + 0x170);
    }
    *(int *)(lVar1 + 100) = param_2;
    local_c = 0;
    FUN_1424c5620(param_1,&local_c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 1424ca020 FUN_1424ca020 body=223 status=ok
// SIG undefined FUN_1424ca020(void)

void FUN_1424ca020(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 local_70 [32];
  undefined4 local_50 [8];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (0 < *param_3) {
    return;
  }
  if (*(longlong *)(param_1 + 0x170) == 0) {
    *param_3 = 7;
    return;
  }
  FUN_14256dc20(local_70,param_2,param_3);
  if (*param_3 < 1) {
    if (*(char *)(**(longlong **)(param_1 + 0x170) + 8) == '\0') {
      FUN_14256dd50(local_50,**(longlong **)(param_1 + 0x170) + 0x10);
      cVar2 = FUN_14256d7b0(local_50,local_70);
      thunk_FUN_1424b70d0(local_50);
      if (cVar2 != '\0') goto LAB_1424ca0ea;
    }
    FUN_1424bbc30(param_1,param_2,param_3);
    lVar1 = **(longlong **)(param_1 + 0x170);
    FUN_14256def0(lVar1 + 0x10,local_70);
    *(undefined1 *)(lVar1 + 8) = 0;
    local_50[0] = 0;
    FUN_1424c5620(param_1,local_50);
  }
LAB_1424ca0ea:
  thunk_FUN_1424b70d0(local_70);
  return;
}



// FUNCTION 1424ca100 Unwind@1424ca100 body=40 status=ok
// SIG undefined Unwind@1424ca100(void)

void Unwind_1424ca100(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x28);
  return;
}



// FUNCTION 1424ca130 Unwind@1424ca130 body=40 status=ok
// SIG undefined Unwind@1424ca130(void)

void Unwind_1424ca130(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x48);
  return;
}



// FUNCTION 1424ca160 FUN_1424ca160 body=65 status=ok
// SIG undefined FUN_1424ca160(void)

void FUN_1424ca160(longlong *param_1,undefined8 param_2)

{
  undefined **local_20;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_20 = icu_64::ErrorCode::vftable;
  local_18[0] = 0;
  (**(code **)(*param_1 + 0xf0))(param_1,param_2,local_18);
  FUN_142572ba0(&local_20);
  return;
}



// FUNCTION 1424ca1b0 Unwind@1424ca1b0 body=30 status=ok
// SIG undefined Unwind@1424ca1b0(void)

void Unwind_1424ca1b0(undefined8 param_1,longlong param_2)

{
  FUN_142572ba0(param_2 + 0x28);
  return;
}



// FUNCTION 1424ca1d0 FUN_1424ca1d0 body=177 status=ok
// SIG undefined FUN_1424ca1d0(void)

void FUN_1424ca1d0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined **local_118 [19];
  undefined1 local_80 [72];
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_4 < 1) {
    if (*(longlong *)(param_1 + 0x170) == 0) {
      *param_4 = 7;
    }
    else {
      FUN_142573c40(local_118,0);
      local_118[0] = icu_64::number::impl::UFormattedNumberData::vftable;
      FUN_142537d10(local_80);
      FUN_14252d4f0(param_2,local_80,param_4);
      FUN_142569a70(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10),local_118,param_4);
      FUN_142537eb0(param_3,local_80);
      FUN_142564760(local_118);
    }
  }
  return;
}



// FUNCTION 1424ca290 Unwind@1424ca290 body=47 status=ok
// SIG undefined Unwind@1424ca290(void)

void Unwind_1424ca290(undefined8 param_1,longlong param_2)

{
  FUN_142573ca0(param_2 + 0x20);
  return;
}



// FUNCTION 1424ca2c0 Unwind@1424ca2c0 body=47 status=ok
// SIG undefined Unwind@1424ca2c0(void)

void Unwind_1424ca2c0(undefined8 param_1,longlong param_2)

{
  FUN_142564760(param_2 + 0x20);
  return;
}



// FUNCTION 1424ca2f0 FUN_1424ca2f0 body=20 status=ok
// SIG undefined FUN_1424ca2f0(void)

undefined8 FUN_1424ca2f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x10);
  }
  return 0;
}



// FUNCTION 1424ca310 FUN_1424ca310 body=70 status=ok
// SIG undefined FUN_1424ca310(void)

void FUN_1424ca310(longlong param_1)

{
  FUN_1414b3f60(param_1 + 0xe0);
  FUN_14256d170(param_1 + 0xa8);
  FUN_1425697e0(param_1 + 0x88);
  thunk_FUN_1424b70d0(param_1 + 0x28);
  thunk_FUN_1424b70d0(param_1 + 0x10);
  return;
}



// FUNCTION 1424ca360 FUN_1424ca360 body=536 status=ok
// SIG undefined FUN_1424ca360(void)

void FUN_1424ca360(longlong param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  bool bVar15;
  
  cVar8 = FUN_14256b330(**(undefined8 **)(param_1 + 0x170));
  plVar5 = *(longlong **)(param_1 + 0x170);
  if (cVar8 == '\0') goto LAB_1424ca457;
  lVar6 = *plVar5;
  uVar1 = *(ushort *)(lVar6 + 200);
  bVar15 = true;
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      if (*(int *)(lVar6 + 0xcc) != 1) goto LAB_1424ca457;
    }
    else if ((short)uVar1 >> 5 != 1) goto LAB_1424ca457;
    if ((uVar1 & 2) == 0) {
      psVar14 = *(short **)(lVar6 + 0xd8);
    }
    else {
      psVar14 = (short *)(lVar6 + 0xca);
    }
    bVar15 = *psVar14 == 0x2d;
  }
  if ((bVar15) &&
     ((ushort)(*(ushort *)(lVar6 + 0x2a8) | *(ushort *)(lVar6 + 0x228) | *(ushort *)(lVar6 + 0x148))
      < 0x20)) {
    cVar8 = *(char *)(lVar6 + 0x4c);
    iVar13 = *(int *)(lVar6 + 0x48);
    lVar6 = plVar5[1];
    if (cVar8 != '\0') {
      if ((0 < iVar13) && (iVar13 != 3)) goto LAB_1424ca457;
      if (*(short *)(lVar6 + 0x50) < 0) {
        if (*(int *)(lVar6 + 0x54) != 1) goto LAB_1424ca457;
      }
      else if (*(short *)(lVar6 + 0x50) >> 5 != 1) goto LAB_1424ca457;
    }
    lVar7 = plVar5[0x111];
    iVar3 = *(int *)(lVar7 + 0x6c);
    if ((iVar3 < 0xb) && (*(int *)(lVar7 + 100) < 1)) {
      uVar9 = *(uint *)(lVar6 + 0x748);
      if (*(short *)(lVar6 + 400) < 0) {
        iVar12 = *(int *)(lVar6 + 0x194);
      }
      else {
        iVar12 = (int)*(short *)(lVar6 + 400) >> 5;
      }
      if ((uVar9 < 0x10000) && (iVar12 == 1)) {
        uVar4 = *(uint *)(lVar7 + 0x58);
        *(undefined1 *)(plVar5 + 0x112) = 1;
        *(short *)(*(longlong *)(param_1 + 0x170) + 0x892) = (short)uVar9;
        uVar11 = 0;
        if ((cVar8 != '\0') && (uVar11 = 0, iVar13 == 3)) {
          sVar2 = *(short *)(lVar6 + 0x50);
          if (sVar2 < 0) {
            iVar13 = *(int *)(lVar6 + 0x54);
          }
          else {
            iVar13 = (int)sVar2 >> 5;
          }
          if (iVar13 == 0) {
            uVar11 = 0xffff;
          }
          else {
            if (((int)sVar2 & 2U) == 0) {
              puVar10 = *(undefined2 **)(lVar6 + 0x60);
            }
            else {
              puVar10 = (undefined2 *)(lVar6 + 0x52);
            }
            uVar11 = *puVar10;
          }
        }
        *(undefined2 *)(*(longlong *)(param_1 + 0x170) + 0x894) = uVar11;
        sVar2 = *(short *)(lVar6 + 400);
        if (sVar2 < 0) {
          iVar13 = *(int *)(lVar6 + 0x194);
        }
        else {
          iVar13 = (int)sVar2 >> 5;
        }
        if (iVar13 == 0) {
          uVar11 = 0xffff;
        }
        else {
          if (((int)sVar2 & 2U) == 0) {
            puVar10 = *(undefined2 **)(lVar6 + 0x1a0);
          }
          else {
            puVar10 = (undefined2 *)(lVar6 + 0x192);
          }
          uVar11 = *puVar10;
        }
        *(undefined2 *)(*(longlong *)(param_1 + 0x170) + 0x896) = uVar11;
        iVar13 = 0;
        if (0 < iVar3) {
          iVar13 = iVar3;
        }
        *(char *)(*(longlong *)(param_1 + 0x170) + 0x898) = (char)iVar13;
        uVar9 = 0x7f;
        if (uVar4 < 0x7f) {
          uVar9 = uVar4;
        }
        *(char *)(*(longlong *)(param_1 + 0x170) + 0x899) = (char)uVar9;
        return;
      }
    }
  }
LAB_1424ca457:
  *(undefined1 *)(plVar5 + 0x112) = 0;
  return;
}



// FUNCTION 1424ca580 FUN_1424ca580 body=301 status=ok
// SIG undefined FUN_1424ca580(void)

void FUN_1424ca580(longlong param_1,uint param_2,char param_3,undefined8 param_4)

{
  div_t dVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  undefined2 local_88 [13];
  undefined1 local_6e [30];
  undefined1 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_3 != '\0') {
    local_88[0] = *(undefined2 *)(*(longlong *)(param_1 + 0x170) + 0x896);
    FUN_1424a6cf0(param_4,local_88,0,1);
    param_2 = -param_2;
  }
  dVar1.rem = 0;
  dVar1.quot = param_2;
  local_50 = local_6e;
  lVar2 = *(longlong *)(param_1 + 0x170);
  if ('\0' < *(char *)(lVar2 + 0x899)) {
    cVar3 = '\0';
    cVar4 = '\0';
    do {
      if ((dVar1.quot == 0) && (*(char *)(lVar2 + 0x898) <= cVar4)) break;
      if (cVar3 == '\x03') {
        if (*(short *)(lVar2 + 0x894) == 0) {
          cVar3 = '\x04';
        }
        else {
          *(short *)(local_50 + -2) = *(short *)(lVar2 + 0x894);
          local_50 = local_50 + -2;
          cVar3 = '\x01';
        }
      }
      else {
        cVar3 = cVar3 + '\x01';
      }
      dVar1 = div(dVar1.quot,10);
      *(short *)(local_50 + -2) =
           (short)dVar1.rem + *(short *)(*(longlong *)(param_1 + 0x170) + 0x892);
      local_50 = local_50 + -2;
      cVar4 = cVar4 + '\x01';
      lVar2 = *(longlong *)(param_1 + 0x170);
    } while (cVar4 < *(char *)(lVar2 + 0x899));
  }
  FUN_1424a6cf0(param_4,local_50,0,
                0xd - (int)((ulonglong)((longlong)local_50 - (longlong)local_88) >> 1));
  return;
}



// FUNCTION 1424ca6c0 Unwind@1424ca6c0 body=50 status=ok
// SIG undefined Unwind@1424ca6c0(void)

void Unwind_1424ca6c0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x58);
  return;
}



// FUNCTION 1424ca700 FUN_1424ca700 body=210 status=ok
// SIG undefined FUN_1424ca700(void)

longlong * FUN_1424ca700(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (*(short *)(param_2 + 8) < 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar2 = (int)*(short *)(param_2 + 8) >> 5;
  }
  _Dst = (void *)((longlong)param_1 + 0xe);
  *param_1 = (longlong)_Dst;
  *(undefined4 *)(param_1 + 1) = 4;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  if (3 < iVar2) {
    _Dst = (void *)FUN_1424da030((ulonglong)(iVar2 + 1U) * 2);
    if (_Dst == (void *)0x0) {
      _Dst = (void *)*param_1;
    }
    else {
      if (*(char *)((longlong)param_1 + 0xc) != '\0') {
        FUN_1424da110(*param_1);
      }
      *param_1 = (longlong)_Dst;
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
    }
  }
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 0x11) == 0) {
    if ((uVar1 & 2) == 0) {
      _Src = *(void **)(param_2 + 0x18);
    }
    else {
      _Src = (void *)(param_2 + 10);
    }
  }
  else {
    _Src = (void *)0x0;
  }
  if ((short)uVar1 < 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar2 = (int)(short)uVar1 >> 5;
  }
  memcpy(_Dst,_Src,(longlong)iVar2 * 2);
  if (*(short *)(param_2 + 8) < 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  else {
    iVar2 = (int)*(short *)(param_2 + 8) >> 5;
  }
  *(undefined2 *)(*param_1 + (longlong)iVar2 * 2) = 0;
  return param_1;
}



// FUNCTION 1424ca7e0 FUN_1424ca7e0 body=184 status=ok
// SIG undefined FUN_1424ca7e0(void)

bool FUN_1424ca7e0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 local_98 [8];
  ushort local_90;
  int local_8c;
  undefined1 local_58 [8];
  short local_50;
  int local_4c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_1424a7060(local_98,1,*param_1,0xffffffff);
  FUN_1424a7060(local_58,1,*param_2,0xffffffff);
  if ((local_90 & 1) == 0) {
    if (-1 < (short)local_90) {
      local_8c = (int)(short)local_90 >> 5;
    }
    if (-1 < local_50) {
      local_4c = (int)local_50 >> 5;
    }
    bVar2 = false;
    if ((((int)local_50 & 1U) == 0) && (local_8c == local_4c)) {
      cVar1 = FUN_1412ae090(local_98,local_58);
      bVar2 = cVar1 != '\0';
    }
  }
  else {
    bVar2 = (bool)((byte)local_50 & 1);
  }
  FUN_140859a90(local_58);
  FUN_140859a90(local_98);
  return bVar2;
}



// FUNCTION 1424ca8a0 Unwind@1424ca8a0 body=35 status=ok
// SIG undefined Unwind@1424ca8a0(void)

void Unwind_1424ca8a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x60);
  return;
}



// FUNCTION 1424ca8d0 Unwind@1424ca8d0 body=35 status=ok
// SIG undefined Unwind@1424ca8d0(void)

void Unwind_1424ca8d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x20);
  return;
}



// FUNCTION 1424ca900 FUN_1424ca900 body=38 status=ok
// SIG undefined FUN_1424ca900(void)

undefined8 FUN_1424ca900(undefined8 param_1,int param_2)

{
  FUN_1424c58c0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424ca930 FUN_1424ca930 body=697 status=ok
// SIG undefined FUN_1424ca930(void)

void FUN_1424ca930(undefined8 *param_1)

{
  *param_1 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  param_1[1] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 2) = 2;
  param_1[9] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 10) = 2;
  param_1[0x11] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x12) = 2;
  param_1[0x19] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x1a) = 2;
  *(undefined1 *)((longlong)param_1 + 0x109) = 1;
  param_1[0x22] = icu_64::number::impl::CurrencyPluralInfoAffixProvider::vftable;
  param_1[0x23] = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  param_1[0x24] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x25) = 2;
  param_1[0x2c] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x2d) = 2;
  param_1[0x34] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x35) = 2;
  param_1[0x3c] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x3d) = 2;
  *(undefined1 *)((longlong)param_1 + 0x221) = 1;
  param_1[0x45] = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  param_1[0x46] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x47) = 2;
  param_1[0x4e] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x4f) = 2;
  param_1[0x56] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x57) = 2;
  param_1[0x5e] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x5f) = 2;
  *(undefined1 *)((longlong)param_1 + 0x331) = 1;
  param_1[0x67] = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  param_1[0x68] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x69) = 2;
  param_1[0x70] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x71) = 2;
  param_1[0x78] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x79) = 2;
  param_1[0x80] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x81) = 2;
  *(undefined1 *)((longlong)param_1 + 0x441) = 1;
  param_1[0x89] = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  param_1[0x8a] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x8b) = 2;
  param_1[0x92] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x93) = 2;
  param_1[0x9a] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x9b) = 2;
  param_1[0xa2] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xa3) = 2;
  *(undefined1 *)((longlong)param_1 + 0x551) = 1;
  param_1[0xab] = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  param_1[0xac] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xad) = 2;
  param_1[0xb4] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xb5) = 2;
  param_1[0xbc] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xbd) = 2;
  param_1[0xc4] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xc5) = 2;
  *(undefined1 *)((longlong)param_1 + 0x661) = 1;
  param_1[0xcd] = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  param_1[0xce] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xcf) = 2;
  param_1[0xd6] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xd7) = 2;
  param_1[0xde] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xdf) = 2;
  param_1[0xe6] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xe7) = 2;
  *(undefined1 *)((longlong)param_1 + 0x771) = 1;
  *(undefined1 *)(param_1 + 0xef) = 1;
  FUN_14256de50(param_1 + 0xf0);
  param_1[0xf4] = (longlong)param_1 + 0x7ad;
  *(undefined4 *)(param_1 + 0xf5) = 0x28;
  *(undefined2 *)((longlong)param_1 + 0x7ac) = 0;
  *(undefined4 *)(param_1 + 0xfb) = 0;
  param_1[0xfc] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0xfd) = 2;
  param_1[0x104] = &PTR_FUN_149e18960;
  *(undefined2 *)(param_1 + 0x105) = 2;
  return;
}



// FUNCTION 1424cabf0 Unwind@1424cabf0 body=41 status=ok
// SIG undefined Unwind@1424cabf0(void)

void Unwind_1424cabf0(undefined8 param_1,longlong param_2)

{
  FUN_1424cad10(*(undefined8 *)(param_2 + 0x20));
  FUN_1424caee0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424cac20 FUN_1424cac20 body=142 status=ok
// SIG undefined FUN_1424cac20(void)

void FUN_1424cac20(undefined8 *param_1)

{
  FUN_140859a90(param_1 + 0x104);
  FUN_140859a90(param_1 + 0xfc);
  if (*(char *)((longlong)param_1 + 0x7ac) != '\0') {
    FUN_1424da110(param_1[0xf4]);
  }
  thunk_FUN_1424b70d0(param_1 + 0xf0);
  FUN_1424cad10(param_1 + 0x22);
  *param_1 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  FUN_140859a90(param_1 + 0x19);
  FUN_140859a90(param_1 + 0x11);
  FUN_140859a90(param_1 + 9);
  FUN_140859a90(param_1 + 1);
  FUN_142573db0(param_1);
  return;
}



// FUNCTION 1424cacb0 FUN_1424cacb0 body=41 status=ok
// SIG undefined FUN_1424cacb0(void)

void FUN_1424cacb0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_142569480(lVar1);
    FUN_1401773f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 1424cace0 FUN_1424cace0 body=41 status=ok
// SIG undefined FUN_1424cace0(void)

void FUN_1424cace0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_1424c9bb0(lVar1);
    FUN_1401773f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 1424cad10 FUN_1424cad10 body=454 status=ok
// SIG undefined FUN_1424cad10(void)

void FUN_1424cad10(undefined8 *param_1)

{
  *param_1 = icu_64::number::impl::CurrencyPluralInfoAffixProvider::vftable;
  param_1[0xab] = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  FUN_140859a90(param_1 + 0xc4);
  FUN_140859a90(param_1 + 0xbc);
  FUN_140859a90(param_1 + 0xb4);
  FUN_140859a90(param_1 + 0xac);
  FUN_142573db0(param_1 + 0xab);
  param_1[0x89] = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  FUN_140859a90(param_1 + 0xa2);
  FUN_140859a90(param_1 + 0x9a);
  FUN_140859a90(param_1 + 0x92);
  FUN_140859a90(param_1 + 0x8a);
  FUN_142573db0(param_1 + 0x89);
  param_1[0x67] = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  FUN_140859a90(param_1 + 0x80);
  FUN_140859a90(param_1 + 0x78);
  FUN_140859a90(param_1 + 0x70);
  FUN_140859a90(param_1 + 0x68);
  FUN_142573db0(param_1 + 0x67);
  param_1[0x45] = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  FUN_140859a90(param_1 + 0x5e);
  FUN_140859a90(param_1 + 0x56);
  FUN_140859a90(param_1 + 0x4e);
  FUN_140859a90(param_1 + 0x46);
  FUN_142573db0(param_1 + 0x45);
  param_1[0x23] = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  FUN_140859a90(param_1 + 0x3c);
  FUN_140859a90(param_1 + 0x34);
  FUN_140859a90(param_1 + 0x2c);
  FUN_140859a90(param_1 + 0x24);
  FUN_142573db0(param_1 + 0x23);
  param_1[1] = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  FUN_140859a90(param_1 + 0x1a);
  FUN_140859a90(param_1 + 0x12);
  FUN_140859a90(param_1 + 10);
  FUN_140859a90(param_1 + 2);
  FUN_142573db0(param_1 + 1);
  FUN_142573db0(param_1);
  return;
}



// FUNCTION 1424caee0 FUN_1424caee0 body=73 status=ok
// SIG undefined FUN_1424caee0(void)

void FUN_1424caee0(undefined8 *param_1)

{
  *param_1 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  FUN_140859a90(param_1 + 0x19);
  FUN_140859a90(param_1 + 0x11);
  FUN_140859a90(param_1 + 9);
  FUN_140859a90(param_1 + 1);
  FUN_142573db0(param_1);
  return;
}



// FUNCTION 1424caf30 FUN_1424caf30 body=93 status=ok
// SIG undefined FUN_1424caf30(void)

undefined8 * FUN_1424caf30(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::number::impl::PropertiesAffixPatternProvider::vftable;
  FUN_140859a90(param_1 + 0x19);
  FUN_140859a90(param_1 + 0x11);
  FUN_140859a90(param_1 + 9);
  FUN_140859a90(param_1 + 1);
  FUN_142573db0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424caf90 FUN_1424caf90 body=38 status=ok
// SIG undefined FUN_1424caf90(void)

undefined8 FUN_1424caf90(undefined8 param_1,int param_2)

{
  FUN_1424cad10();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424cafc0 FUN_1424cafc0 body=256 status=ok
// SIG undefined FUN_1424cafc0(void)

undefined4 * FUN_1424cafc0(undefined4 *param_1)

{
  *param_1 = 2;
  *(undefined8 *)(param_1 + 1) = 0;
  FUN_14256d680();
  FUN_14256d680();
  param_1[0x10] = 0;
  param_1[0x18] = 4;
  *(undefined2 *)(param_1 + 0x19) = 0xfffd;
  param_1[0x1c] = 0xfffffffe;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0xffff;
  param_1[0x22] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0x700000005;
  param_1[0x28] = 2;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x36] = 3;
  FUN_1424a3c00(param_1 + 0x38);
  return param_1;
}



// FUNCTION 1424cb0c0 Unwind@1424cb0c0 body=50 status=ok
// SIG undefined Unwind@1424cb0c0(void)

void Unwind_1424cb0c0(undefined8 param_1,longlong param_2)

{
  FUN_14256d170(*(undefined8 *)(param_2 + 0x38));
  FUN_1425697e0(*(undefined8 *)(param_2 + 0x30));
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1424cb100 Unwind@1424cb100 body=32 status=ok
// SIG undefined Unwind@1424cb100(void)

void Unwind_1424cb100(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1424cb120 FUN_1424cb120 body=38 status=ok
// SIG undefined FUN_1424cb120(void)

undefined8 FUN_1424cb120(undefined8 param_1,int param_2)

{
  thunk_FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424cb150 FUN_1424cb150 body=38 status=ok
// SIG undefined FUN_1424cb150(void)

undefined8 FUN_1424cb150(undefined8 param_1,int param_2)

{
  FUN_142572ba0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424cb180 FUN_1424cb180 body=1 status=ok
// SIG undefined FUN_1424cb180(void)

void FUN_1424cb180(void)

{
  return;
}



// FUNCTION 1424cb190 FUN_1424cb190 body=38 status=ok
// SIG undefined FUN_1424cb190(void)

undefined8 FUN_1424cb190(undefined8 param_1,int param_2)

{
  FUN_142564760();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1424cb1c0 FUN_1424cb1c0 body=118 status=ok
// SIG undefined FUN_1424cb1c0(void)

undefined8 * FUN_1424cb1c0(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_1424cb240(param_1 + 0x10,param_3);
  if (*param_3 < 1) {
    puVar2 = (undefined8 *)thunk_FUN_1424da030(0x20);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = icu_64::SharedCalendar::vftable;
      puVar2[3] = puVar1;
      FUN_142537c90(puVar2);
      return puVar2;
    }
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *param_3 = 7;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1424cb240 FUN_1424cb240 body=630 status=ok
// SIG undefined FUN_1424cb240(void)

longlong * FUN_1424cb240(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int *in_stack_fffffffffffffc78;
  int *piVar5;
  longlong local_378 [20];
  undefined1 local_2d8 [224];
  undefined1 local_1f8 [224];
  undefined1 local_118 [228];
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  if (0 < *param_2) {
    return (longlong *)0x0;
  }
  FUN_1424a3c00(local_2d8);
  if (DAT_14c77eb20 == 0) {
    uVar1 = FUN_1424ccbf0(*(undefined8 *)(param_1 + 0x28));
    plVar3 = (longlong *)FUN_1424cc410(uVar1,param_1,param_2);
  }
  else {
    uVar2 = FUN_1424cb550(param_2);
    in_stack_fffffffffffffc78 = param_2;
    plVar3 = (longlong *)FUN_1425324c0(uVar2,param_1,0xffffffff,local_2d8,param_2);
  }
  if ((plVar3 == (longlong *)0x0) || (0 < *param_2)) {
    if (*param_2 < 1) {
      *param_2 = 5;
    }
  }
  else {
    lVar4 = __RTDynamicCast(plVar3,0,&icu_64::UObject::RTTI_Type_Descriptor,
                            &icu_64::UnicodeString::RTTI_Type_Descriptor,
                            (ulonglong)in_stack_fffffffffffffc78 & 0xffffffff00000000);
    if (lVar4 == 0) goto LAB_1424cb3eb;
    FUN_1412ae150(local_118,&DAT_149e02088,0,0,0);
    FUN_142537360(lVar4,local_118);
    FUN_1424a3c00(local_1f8);
    (**(code **)*plVar3)(plVar3,1);
    uVar2 = FUN_1424cb550(param_2);
    piVar5 = param_2;
    plVar3 = (longlong *)FUN_1425324c0(uVar2,local_118,0xffffffff,local_1f8,param_2);
    if ((plVar3 == (longlong *)0x0) || (0 < *param_2)) {
      if (*param_2 < 1) {
        *param_2 = 5;
      }
    }
    else {
      lVar4 = __RTDynamicCast(plVar3,0,&icu_64::Calendar::RTTI_Type_Descriptor,
                              &icu_64::UnicodeString::RTTI_Type_Descriptor,
                              (ulonglong)piVar5 & 0xffffffff00000000);
      if (lVar4 == 0) {
        uVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3);
        FUN_1424cb850(plVar3,param_1,uVar2,param_2);
        local_34[0] = 0;
        FUN_1424a5490(local_118,"calendar",local_378,0x9d,local_34);
        if ((local_34[0] < 1) && (local_378[0] == 0x313036386f7369)) {
          if ((int)plVar3[0x20] != 2) {
            *(undefined4 *)(plVar3 + 0x20) = 2;
            *(undefined1 *)((longlong)plVar3 + 9) = 0;
          }
          if (*(char *)((longlong)plVar3 + 0x104) != '\x04') {
            *(undefined1 *)((longlong)plVar3 + 0x104) = 4;
            *(undefined1 *)((longlong)plVar3 + 9) = 0;
          }
        }
        FUN_1414b3f60(local_1f8);
        FUN_1414b3f60(local_118);
        goto LAB_1424cb3eb;
      }
      *param_2 = 2;
      (**(code **)*plVar3)(plVar3,1);
    }
    FUN_1414b3f60(local_1f8);
    FUN_1414b3f60(local_118);
  }
  plVar3 = (longlong *)0x0;
LAB_1424cb3eb:
  FUN_1414b3f60(local_2d8);
  return plVar3;
}



// FUNCTION 1424cb4c0 Unwind@1424cb4c0 body=46 status=ok
// SIG undefined Unwind@1424cb4c0(void)

void Unwind_1424cb4c0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x1b0);
  return;
}



// FUNCTION 1424cb4f0 Unwind@1424cb4f0 body=46 status=ok
// SIG undefined Unwind@1424cb4f0(void)

void Unwind_1424cb4f0(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x290);
  return;
}



// FUNCTION 1424cb520 Unwind@1424cb520 body=43 status=ok
// SIG undefined Unwind@1424cb520(void)

void Unwind_1424cb520(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0xd0);
  return;
}



// FUNCTION 1424cb550 FUN_1424cb550 body=299 status=ok
// SIG undefined FUN_1424cb550(void)

longlong * FUN_1424cb550(int *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (*param_1 < 1) {
    if ((DAT_14c77eb20 != 2) && (cVar1 = FUN_142501800(&DAT_14c77eb20), cVar1 != '\0')) {
      FUN_14251f960(0xc,FUN_1424d35f0);
      plVar3 = (longlong *)thunk_FUN_1424da030(0x198);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c77eb18 = (longlong *)0x0;
        *param_1 = 7;
        iVar2 = 7;
      }
      else {
        FUN_1424d3630(plVar3);
        DAT_14c77eb18 = plVar3;
        puVar4 = (undefined8 *)thunk_FUN_1424da030(0x50);
        if (puVar4 != (undefined8 *)0x0) {
          FUN_142536da0(puVar4,1);
          *puVar4 = icu_64::BasicCalendarFactory::vftable;
        }
        (**(code **)(*plVar3 + 0x40))(plVar3,puVar4,param_1);
        iVar2 = *param_1;
        if (0 < iVar2) {
          if (DAT_14c77eb18 != (longlong *)0x0) {
            (**(code **)*DAT_14c77eb18)(DAT_14c77eb18,1);
            iVar2 = *param_1;
          }
          DAT_14c77eb18 = (longlong *)0x0;
        }
      }
      DAT_14c77eb24 = iVar2;
      FUN_1425019c0(&DAT_14c77eb20);
      return DAT_14c77eb18;
    }
    if (0 < DAT_14c77eb24) {
      *param_1 = DAT_14c77eb24;
    }
  }
  return DAT_14c77eb18;
}



// FUNCTION 1424cb680 Unwind@1424cb680 body=34 status=ok
// SIG undefined Unwind@1424cb680(void)

void Unwind_1424cb680(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}


