// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149482c4c FUN_149482c4c body=97 status=ok
// SIG undefined FUN_149482c4c(void)

void FUN_149482c4c(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      *(undefined8 *)(param_1 + -0x38) = *(undefined8 *)(param_2 + -0x38);
      FUN_14945f130(param_1 + -0x30,param_2 + -0x30);
      FUN_149482cae(param_1,param_2);
      *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
      param_1 = param_1 + 0x80;
      param_2 = param_2 + 0x80;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 149482cae FUN_149482cae body=252 status=ok
// SIG undefined FUN_149482cae(void)

undefined4 * FUN_149482cae(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1401b309e(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 << 3);
  }
  param_1[6] = param_2[6];
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  pvVar2 = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  pvVar2 = *(void **)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_1401b309e(param_1 + 0xc,iVar1,0);
    memcpy(*(void **)(param_1 + 0xc),pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 149482dc2 FUN_149482dc2 body=29 status=ok
// SIG undefined FUN_149482dc2(void)

undefined8 FUN_149482dc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149482de0 FUN_149482de0 body=132 status=ok
// SIG undefined FUN_149482de0(void)

void FUN_149482de0(longlong param_1,int param_2)

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



// FUNCTION 149482e66 FUN_149482e66 body=96 status=ok
// SIG undefined FUN_149482e66(void)

undefined8 FUN_149482e66(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (DAT_14cc1b350 == 0) {
    uVar2 = FUN_140c44346();
    DAT_14cc1b350 = FUN_140002ddd(FUN_1467334bf,uVar2,L"RigVMTrait_OptimusDeformerSettings");
    if (DAT_14cc1b350 == 0) {
      return 0;
    }
  }
  if (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cc1b350 + 0x38)) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)(DAT_14cc1b350 + 0x30) >> 8),
                  *(longlong *)
                   (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cc1b350 + 0x38) * 8) ==
                  DAT_14cc1b350 + 0x30);
}



// FUNCTION 149482ec6 FUN_149482ec6 body=96 status=ok
// SIG undefined FUN_149482ec6(void)

undefined8 FUN_149482ec6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (DAT_14cc1b338 == 0) {
    uVar2 = FUN_140c44346();
    DAT_14cc1b338 = FUN_140002ddd(FUN_146733429,uVar2,L"RigVMTrait_OptimusDeformer");
    if (DAT_14cc1b338 == 0) {
      return 0;
    }
  }
  if (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cc1b338 + 0x38)) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)(DAT_14cc1b338 + 0x30) >> 8),
                  *(longlong *)
                   (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cc1b338 + 0x38) * 8) ==
                  DAT_14cc1b338 + 0x30);
}



// FUNCTION 149482f26 FUN_149482f26 body=61 status=ok
// SIG undefined FUN_149482f26(void)

longlong FUN_149482f26(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_1458f36a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 149482f64 FUN_149482f64 body=96 status=ok
// SIG undefined FUN_149482f64(void)

undefined8 FUN_149482f64(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (DAT_14cc1b380 == 0) {
    uVar2 = FUN_140c44346();
    DAT_14cc1b380 = FUN_140002ddd(FUN_141907967,uVar2,L"RigVMTrait_OptimusVariableBase");
    if (DAT_14cc1b380 == 0) {
      return 0;
    }
  }
  if (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cc1b380 + 0x38)) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)(DAT_14cc1b380 + 0x30) >> 8),
                  *(longlong *)
                   (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cc1b380 + 0x38) * 8) ==
                  DAT_14cc1b380 + 0x30);
}



// FUNCTION 149482fc4 FUN_149482fc4 body=38 status=ok
// SIG undefined FUN_149482fc4(void)

void FUN_149482fc4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14946649a(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 149482fea FUN_149482fea body=147 status=ok
// SIG undefined FUN_149482fea(void)

void FUN_149482fea(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14948307e FUN_14948307e body=143 status=ok
// SIG undefined FUN_14948307e(void)

void FUN_14948307e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14948310e FUN_14948310e body=29 status=ok
// SIG undefined FUN_14948310e(void)

undefined8 FUN_14948310e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149483146 FUN_149483146 body=29 status=ok
// SIG undefined FUN_149483146(void)

bool FUN_149483146(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149483164 FUN_149483164 body=26 status=ok
// SIG undefined FUN_149483164(void)

bool FUN_149483164(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14948317e FUN_14948317e body=24 status=ok
// SIG undefined FUN_14948317e(void)

bool FUN_14948317e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149483196 FUN_149483196 body=68 status=ok
// SIG undefined FUN_149483196(void)

void FUN_149483196(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bcfe220;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 1494831da FUN_1494831da body=68 status=ok
// SIG undefined FUN_1494831da(void)

void FUN_1494831da(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bcfe220;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14948321e FUN_14948321e body=105 status=ok
// SIG undefined FUN_14948321e(void)

void FUN_14948321e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection(param_2);
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bcfe220;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149483288 FUN_149483288 body=39 status=ok
// SIG undefined FUN_149483288(void)

void FUN_149483288(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001494832ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1494832b0 FUN_1494832b0 body=134 status=ok
// SIG undefined FUN_1494832b0(void)

bool FUN_1494832b0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149483338 FUN_149483338 body=29 status=ok
// SIG undefined FUN_149483338(void)

undefined8 FUN_149483338(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149483370 FUN_149483370 body=29 status=ok
// SIG undefined FUN_149483370(void)

bool FUN_149483370(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14948338e FUN_14948338e body=26 status=ok
// SIG undefined FUN_14948338e(void)

bool FUN_14948338e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1494833a8 FUN_1494833a8 body=24 status=ok
// SIG undefined FUN_1494833a8(void)

bool FUN_1494833a8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1494833cc FUN_1494833cc body=68 status=ok
// SIG undefined FUN_1494833cc(void)

void FUN_1494833cc(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bcfe300;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bcfe290;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 149483410 FUN_149483410 body=68 status=ok
// SIG undefined FUN_149483410(void)

void FUN_149483410(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14bcfe300;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bcfe290;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 149483454 FUN_149483454 body=105 status=ok
// SIG undefined FUN_149483454(void)

void FUN_149483454(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  EnterCriticalSection(param_2);
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar2 = &PTR_LAB_14bcfe300;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14bcfe290;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1494834be FUN_1494834be body=52 status=ok
// SIG undefined FUN_1494834be(void)

void FUN_1494834be(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001494834ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1494834f2 FUN_1494834f2 body=155 status=ok
// SIG undefined FUN_1494834f2(void)

bool FUN_1494834f2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149483590 FUN_149483590 body=27 status=ok
// SIG undefined FUN_149483590(void)

void FUN_149483590(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 1494835ac FUN_1494835ac body=147 status=ok
// SIG undefined FUN_1494835ac(void)

void FUN_1494835ac(longlong param_1,int param_2)

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



// FUNCTION 149483640 FUN_149483640 body=258 status=ok
// SIG undefined FUN_149483640(void)

void FUN_149483640(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1be38) {
    FUN_144b3d300(&DAT_14cc1be38);
    if (DAT_14cc1be38 == -1) {
      FUN_149483744(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FAdvancedSkeletonDataInterfaceDefaultParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x178;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1bdb8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1445276d3);
      _Init_thread_footer(&DAT_14cc1be38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149483744 FUN_149483744 body=226 status=ok
// SIG undefined FUN_149483744(void)

longlong * FUN_149483744(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_149483828;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149483828 FUN_149483828 body=136 status=ok
// SIG undefined FUN_149483828(void)

code * FUN_149483828(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LayeredBoneMatrices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float3x4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000183;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494838b0;
}



// FUNCTION 1494838b0 FUN_1494838b0 body=136 status=ok
// SIG undefined FUN_1494838b0(void)

code * FUN_1494838b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputWeightLookupStream";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000181;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149483938;
}



// FUNCTION 149483938 FUN_149483938 body=136 status=ok
// SIG undefined FUN_149483938(void)

code * FUN_149483938(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputWeightStream";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000180;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494839c0;
}



// FUNCTION 1494839c0 FUN_1494839c0 body=136 status=ok
// SIG undefined FUN_1494839c0(void)

code * FUN_1494839c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BoneMatrices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000017f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149483a48;
}



// FUNCTION 149483a48 FUN_149483a48 body=136 status=ok
// SIG undefined FUN_149483a48(void)

code * FUN_149483a48(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputWeightIndexSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x140000017e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149483ad0;
}



// FUNCTION 149483ad0 FUN_149483ad0 body=136 status=ok
// SIG undefined FUN_149483ad0(void)

code * FUN_149483ad0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputWeightStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000017d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149483b58;
}



// FUNCTION 149483b58 FUN_149483b58 body=136 status=ok
// SIG undefined FUN_149483b58(void)

code * FUN_149483b58(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputWeightStart";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000017c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149483be0;
}



// FUNCTION 149483be0 FUN_149483be0 body=136 status=ok
// SIG undefined FUN_149483be0(void)

code * FUN_149483be0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumBoneInfluences";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000017b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149483c68;
}



// FUNCTION 149483c68 FUN_149483c68 body=136 status=ok
// SIG undefined FUN_149483c68(void)

code * FUN_149483c68(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputStreamStart";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000017a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149483cf0;
}



// FUNCTION 149483cf0 FUN_149483cf0 body=130 status=ok
// SIG undefined FUN_149483cf0(void)

undefined1 * FUN_149483cf0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumVertices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x179;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_149483d72;
}



// FUNCTION 149483d76 FUN_149483d76 body=147 status=ok
// SIG undefined FUN_149483d76(void)

void FUN_149483d76(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x90,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149483e0a FUN_149483e0a body=70 status=ok
// SIG undefined FUN_149483e0a(void)

void FUN_149483e0a(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  (*(code *)*param_1)(*param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149483e70 FUN_149483e70 body=12 status=ok
// SIG undefined FUN_149483e70(void)

void FUN_149483e70(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149483e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 149483e7c FUN_149483e7c body=29 status=ok
// SIG undefined FUN_149483e7c(void)

undefined8 FUN_149483e7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149483e99 FUN_149483e99 body=54 status=ok
// SIG undefined FUN_149483e99(void)

void FUN_149483e99(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1459ab2e7(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 149483ed0 FUN_149483ed0 body=125 status=ok
// SIG undefined FUN_149483ed0(void)

void FUN_149483ed0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 4,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 4)) {
    uVar3 = uVar2 >> 4 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  return;
}



// FUNCTION 149483f4e FUN_149483f4e body=132 status=ok
// SIG undefined FUN_149483f4e(void)

void FUN_149483f4e(longlong param_1,int param_2)

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



// FUNCTION 149483fd4 FUN_149483fd4 body=132 status=ok
// SIG undefined FUN_149483fd4(void)

void FUN_149483fd4(longlong param_1,int param_2)

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



// FUNCTION 149484059 FUN_149484059 body=109 status=ok
// SIG undefined FUN_149484059(void)

void FUN_149484059(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_1 + 3);
  FUN_141215e22(param_1 + 9);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494840c8 FUN_1494840c8 body=143 status=ok
// SIG undefined FUN_1494840c8(void)

void FUN_1494840c8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149484158 FUN_149484158 body=146 status=ok
// SIG undefined FUN_149484158(void)

void FUN_149484158(longlong param_1,int param_2)

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



// FUNCTION 1494841ec FUN_1494841ec body=132 status=ok
// SIG undefined FUN_1494841ec(void)

void FUN_1494841ec(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149484272 FUN_149484272 body=96 status=ok
// SIG undefined FUN_149484272(void)

void FUN_149484272(longlong param_1,int param_2)

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



// FUNCTION 1494842d2 FUN_1494842d2 body=138 status=ok
// SIG undefined FUN_1494842d2(void)

code * FUN_1494842d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClothToLocal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14948435c;
}



// FUNCTION 14948435c FUN_14948435c body=138 status=ok
// SIG undefined FUN_14948435c(void)

code * FUN_14948435c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146737f5c;
}



// FUNCTION 1494843e6 FUN_1494843e6 body=132 status=ok
// SIG undefined FUN_1494843e6(void)

undefined1 * FUN_1494843e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumVertices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14948446a;
}



// FUNCTION 14948446e FUN_14948446e body=258 status=ok
// SIG undefined FUN_14948446e(void)

void FUN_14948446e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1bf48) {
    FUN_144b3d300(&DAT_14cc1bf48);
    if (DAT_14cc1bf48 == -1) {
      FUN_149484572(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FConnectivityDataInterfaceParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xa9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1bec8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1445276ed);
      _Init_thread_footer(&DAT_14cc1bf48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149484572 FUN_149484572 body=226 status=ok
// SIG undefined FUN_149484572(void)

longlong * FUN_149484572(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_149484656;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149484656 FUN_149484656 body=136 status=ok
// SIG undefined FUN_149484656(void)

code * FUN_149484656(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ConnectivityBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494846de;
}



// FUNCTION 1494846de FUN_1494846de body=136 status=ok
// SIG undefined FUN_1494846de(void)

code * FUN_1494846de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxConnectedVertexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149484766;
}



// FUNCTION 149484766 FUN_149484766 body=136 status=ok
// SIG undefined FUN_149484766(void)

code * FUN_149484766(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputStreamStart";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494847ee;
}



// FUNCTION 1494847ee FUN_1494847ee body=130 status=ok
// SIG undefined FUN_1494847ee(void)

undefined1 * FUN_1494847ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumVertices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xaa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_149484870;
}



// FUNCTION 149484874 FUN_149484874 body=89 status=ok
// SIG undefined FUN_149484874(void)

void FUN_149484874(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_145afaea1(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1494848ce FUN_1494848ce body=62 status=ok
// SIG undefined FUN_1494848ce(void)

void FUN_1494848ce(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14948490c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14948490c FUN_14948490c body=93 status=ok
// SIG undefined FUN_14948490c(void)

ulonglong FUN_14948490c(uint param_1,uint param_2)

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



// FUNCTION 14948496a FUN_14948496a body=258 status=ok
// SIG undefined FUN_14948496a(void)

void FUN_14948496a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1bfd0) {
    FUN_144b3d300(&DAT_14cc1bfd0);
    if (DAT_14cc1bfd0 == -1) {
      FUN_149484a6e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDebugDrawDataInterfaceParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x52;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1bf50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144527cb9);
      _Init_thread_footer(&DAT_14cc1bfd0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149484a6e FUN_149484a6e body=226 status=ok
// SIG undefined FUN_149484a6e(void)

longlong * FUN_149484a6e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_149484b52;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149484b52 FUN_149484b52 body=136 status=ok
// SIG undefined FUN_149484b52(void)

code * FUN_149484b52(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWEntryBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000005d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149484bda;
}



// FUNCTION 149484bda FUN_149484bda body=136 status=ok
// SIG undefined FUN_149484bda(void)

code * FUN_149484bda(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StateBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000005c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149484c62;
}



// FUNCTION 149484c62 FUN_149484c62 body=136 status=ok
// SIG undefined FUN_149484c62(void)

code * FUN_149484c62(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxTriangleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000005b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149484cea;
}



// FUNCTION 149484cea FUN_149484cea body=136 status=ok
// SIG undefined FUN_149484cea(void)

code * FUN_149484cea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxLineCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x640000005a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149484d72;
}



// FUNCTION 149484d72 FUN_149484d72 body=136 status=ok
// SIG undefined FUN_149484d72(void)

code * FUN_149484d72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxStateCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000059;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149484dfa;
}



// FUNCTION 149484dfa FUN_149484dfa body=136 status=ok
// SIG undefined FUN_149484dfa(void)

code * FUN_149484dfa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSymbolCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c00000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149484e82;
}



// FUNCTION 149484e82 FUN_149484e82 body=136 status=ok
// SIG undefined FUN_149484e82(void)

code * FUN_149484e82(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxCharacterCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149484f0a;
}



// FUNCTION 149484f0a FUN_149484f0a body=136 status=ok
// SIG undefined FUN_149484f0a(void)

code * FUN_149484f0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FontSpacing";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149484f92;
}



// FUNCTION 149484f92 FUN_149484f92 body=136 status=ok
// SIG undefined FUN_149484f92(void)

code * FUN_149484f92(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FontSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14948501a;
}



// FUNCTION 14948501a FUN_14948501a body=136 status=ok
// SIG undefined FUN_14948501a(void)

code * FUN_14948501a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Resolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494850a2;
}



// FUNCTION 1494850a2 FUN_1494850a2 body=130 status=ok
// SIG undefined FUN_1494850a2(void)

undefined1 * FUN_1494850a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalToWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x53;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_149485124;
}



// FUNCTION 149485128 FUN_149485128 body=258 status=ok
// SIG undefined FUN_149485128(void)

void FUN_149485128(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1c058) {
    FUN_144b3d300(&DAT_14cc1c058);
    if (DAT_14cc1c058 == -1) {
      FUN_14948522c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDuplicateVerticesDataInterfaceParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x40;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1bfd8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144527cc5);
      _Init_thread_footer(&DAT_14cc1c058);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948522c FUN_14948522c body=226 status=ok
// SIG undefined FUN_14948522c(void)

longlong * FUN_14948522c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_149485310;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149485310 FUN_149485310 body=136 status=ok
// SIG undefined FUN_149485310(void)

code * FUN_149485310(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DuplicateVertices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149485398;
}



// FUNCTION 149485398 FUN_149485398 body=136 status=ok
// SIG undefined FUN_149485398(void)

code * FUN_149485398(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DuplicateVertexStartAndLength";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149485420;
}



// FUNCTION 149485420 FUN_149485420 body=136 status=ok
// SIG undefined FUN_149485420(void)

code * FUN_149485420(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputStreamStart";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494854a8;
}



// FUNCTION 1494854a8 FUN_1494854a8 body=136 status=ok
// SIG undefined FUN_1494854a8(void)

code * FUN_1494854a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumDuplicateVertices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149485530;
}



// FUNCTION 149485530 FUN_149485530 body=130 status=ok
// SIG undefined FUN_149485530(void)

undefined1 * FUN_149485530(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumVertices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x41;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1494855b2;
}



// FUNCTION 1494855b6 FUN_1494855b6 body=118 status=ok
// SIG undefined FUN_1494855b6(void)

void FUN_1494855b6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14948562c FUN_14948562c body=60 status=ok
// SIG undefined FUN_14948562c(void)

void FUN_14948562c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_149485668(param_1,param_2);
    param_1 = param_1 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return;
}



// FUNCTION 149485668 FUN_149485668 body=278 status=ok
// SIG undefined FUN_149485668(void)

undefined8 * FUN_149485668(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 4);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar9 = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 5) = uVar9;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1);
  }
  FUN_14948577e(param_1 + 8,param_2 + 8);
  param_1[0xc] = param_2[0xc];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar4 = *(undefined4 *)(param_2 + 0xe);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0xe) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar5;
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14948577e FUN_14948577e body=148 status=ok
// SIG undefined FUN_14948577e(void)

undefined8 * FUN_14948577e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1447a127e(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_14945ad3e(param_1 + 2,iVar1,0);
    FUN_14945ada0(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 149485812 FUN_149485812 body=112 status=ok
// SIG undefined FUN_149485812(void)

void FUN_149485812(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 149485882 FUN_149485882 body=132 status=ok
// SIG undefined FUN_149485882(void)

void FUN_149485882(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149485908 FUN_149485908 body=98 status=ok
// SIG undefined FUN_149485908(void)

void FUN_149485908(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14948596a FUN_14948596a body=140 status=ok
// SIG undefined FUN_14948596a(void)

void FUN_14948596a(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001494859ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1494859f6 FUN_1494859f6 body=138 status=ok
// SIG undefined FUN_1494859f6(void)

code * FUN_1494859f6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderDataVertexToEdgeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149485a80;
}



// FUNCTION 149485a80 FUN_149485a80 body=138 status=ok
// SIG undefined FUN_149485a80(void)

code * FUN_149485a80(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bUseBufferFromRenderData";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000077;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149485b0a;
}



// FUNCTION 149485b0a FUN_149485b0a body=138 status=ok
// SIG undefined FUN_149485b0a(void)

code * FUN_149485b0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EdgeToTwinEdgeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000075;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14673806c;
}



// FUNCTION 149485b94 FUN_149485b94 body=138 status=ok
// SIG undefined FUN_149485b94(void)

code * FUN_149485b94(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputStreamStart";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000073;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d49204;
}



// FUNCTION 149485c1e FUN_149485c1e body=138 status=ok
// SIG undefined FUN_149485c1e(void)

code * FUN_149485c1e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumTriangles";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000071;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d49180;
}



// FUNCTION 149485ca8 FUN_149485ca8 body=23 status=ok
// SIG undefined FUN_149485ca8(void)

void FUN_149485ca8(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 149485cc0 FUN_149485cc0 body=147 status=ok
// SIG undefined FUN_149485cc0(void)

void FUN_149485cc0(longlong param_1,int param_2)

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



// FUNCTION 149485d54 FUN_149485d54 body=98 status=ok
// SIG undefined FUN_149485d54(void)

void FUN_149485d54(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_145a1114c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149485db6 FUN_149485db6 body=62 status=ok
// SIG undefined FUN_149485db6(void)

void FUN_149485db6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149485df4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 149485df4 FUN_149485df4 body=112 status=ok
// SIG undefined FUN_149485df4(void)

ulonglong FUN_149485df4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_149485e2e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_149485e2e:
  return param_2 & 0xffffffff;
}



// FUNCTION 149485e64 FUN_149485e64 body=48 status=ok
// SIG undefined FUN_149485e64(void)

void FUN_149485e64(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 149485e94 FUN_149485e94 body=172 status=ok
// SIG undefined FUN_149485e94(void)

void FUN_149485e94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bceda40;
  FUN_149483e99(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_149485f40(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_149485f6b(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14946a71c(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149485f40 FUN_149485f40 body=43 status=ok
// SIG undefined FUN_149485f40(void)

void FUN_149485f40(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 149485f6b FUN_149485f6b body=43 status=ok
// SIG undefined FUN_149485f6b(void)

void FUN_149485f6b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 149485f96 FUN_149485f96 body=112 status=ok
// SIG undefined FUN_149485f96(void)

void FUN_149485f96(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcee7d0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_145b26c9a(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149486006 FUN_149486006 body=112 status=ok
// SIG undefined FUN_149486006(void)

void FUN_149486006(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcf3460;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_145b26c9a(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14948607e FUN_14948607e body=480 status=ok
// SIG undefined FUN_14948607e(void)

longlong * FUN_14948607e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_60,"Index",1);
  FUN_1400b22c2(local_70,"ReadIndex");
  FUN_14946b838(&local_58,local_60,local_70,0);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = local_58;
  puVar2[1] = 0;
  puVar2[1] = local_50;
  local_50 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_48._4_4_;
  local_48 = 0;
  puVar2[3] = 0;
  puVar2[3] = local_40;
  local_40 = 0;
  *(undefined4 *)(puVar2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_38._4_4_;
  local_38 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = local_2c;
  *(undefined4 *)(puVar2 + 5) = local_30;
  FUN_14946649a(&local_58);
  FUN_1446ddc76(&local_78,"Count",1);
  FUN_1400b22c2(local_88,"ReadCount");
  FUN_14946b838(&local_58,local_78,local_88,0);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar4) = local_58;
  *(undefined8 *)(lVar3 + 8 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_50;
  local_50 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar4) = (undefined4)local_48;
  *(undefined4 *)(lVar3 + 0x14 + lVar4) = local_48._4_4_;
  local_48 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar4) = local_40;
  local_40 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar4) = (undefined4)local_38;
  *(undefined4 *)(lVar3 + 0x24 + lVar4) = local_38._4_4_;
  local_38 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar4) = local_2c;
  *(undefined4 *)(lVar3 + 0x28 + lVar4) = local_30;
  FUN_14946649a();
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149486260 FUN_149486260 body=49 status=ok
// SIG undefined FUN_149486260(void)

longlong * FUN_149486260(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a799b0();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149486292 FUN_149486292 body=171 status=ok
// SIG undefined FUN_149486292(void)

void FUN_149486292(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_30,L"ReadIndex");
  uVar1 = FUN_149459122(uVar1,local_30);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_40,L"ReadCount");
  uVar1 = FUN_149459122(uVar1,local_40);
  FUN_1494593ba(uVar1,2,0,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149486346 FUN_149486346 body=151 status=ok
// SIG undefined FUN_149486346(void)

void FUN_149486346(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1494d29c8();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1d100;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
  return;
}



// FUNCTION 1494863e6 FUN_1494863e6 body=43 status=ok
// SIG undefined FUN_1494863e6(void)

void FUN_1494863e6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceLoopTerminal.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 149486412 FUN_149486412 body=438 status=ok
// SIG undefined FUN_149486412(void)

void FUN_149486412(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceLoopTerminal.ush",0,&local_d8,0);
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494865ca FUN_1494865ca body=38 status=ok
// SIG undefined FUN_1494865ca(void)

void FUN_1494865ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1494865f0(DAT_14c951640);
  *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return;
}



// FUNCTION 1494865f0 FUN_1494865f0 body=148 status=ok
// SIG undefined FUN_1494865f0(void)

undefined8 FUN_1494865f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba54f8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149486686 FUN_149486686 body=47 status=ok
// SIG undefined FUN_149486686(void)

void FUN_149486686(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *puVar2 = &PTR_FUN_14bcff110;
  puVar2[1] = uVar1;
  return;
}



// FUNCTION 1494866fa FUN_1494866fa body=32 status=ok
// SIG undefined FUN_1494866fa(void)

undefined8 FUN_1494866fa(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Morph Target");
  return param_2;
}



// FUNCTION 14948671a FUN_14948671a body=578 status=ok
// SIG undefined FUN_14948671a(void)

longlong * FUN_14948671a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_78,"DeltaPosition",1);
  FUN_1400b22c2(local_88,"ReadDeltaPosition");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_98,"ReadNumVertices");
  local_d0 = 1;
  local_d8 = local_98;
  FUN_149466350(&local_70,local_78,local_88,uVar4);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = local_70;
  puVar2[1] = 0;
  puVar2[1] = local_68;
  local_68 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_60;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_60._4_4_;
  local_60 = 0;
  puVar2[3] = 0;
  puVar2[3] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar2 + 4) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = local_44;
  *(undefined4 *)(puVar2 + 5) = local_48;
  FUN_14946649a(&local_70);
  FUN_1446ddc76(&local_a0,"DeltaNormal",1);
  FUN_1400b22c2(local_b0,"ReadDeltaNormal");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_c0,"ReadNumVertices");
  local_d0 = 1;
  local_d8 = local_c0;
  FUN_149466350(&local_70,local_a0,local_b0,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar5) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar5) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar5) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar5) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar5) = local_48;
  FUN_14946649a();
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948695e FUN_14948695e body=49 status=ok
// SIG undefined FUN_14948695e(void)

longlong * FUN_14948695e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a745da();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149486990 FUN_149486990 body=281 status=ok
// SIG undefined FUN_149486990(void)

void FUN_149486990(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_38,L"ReadNumVertices");
  uVar1 = FUN_149459122(uVar1,local_38);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_48,L"ReadDeltaPosition");
  uVar1 = FUN_149459122(uVar1,local_48);
  uVar1 = FUN_1494593ba(uVar1,3,3,0);
  local_68 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_58,L"ReadDeltaNormal");
  uVar1 = FUN_149459122(uVar1,local_58);
  uVar1 = FUN_1494593ba(uVar1,3,3,0);
  local_68 = 0;
  FUN_149459206(uVar1,2,0,0);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149486ab2 FUN_149486ab2 body=43 status=ok
// SIG undefined FUN_149486ab2(void)

void FUN_149486ab2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceMorphTarget.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 149486ade FUN_149486ade body=438 status=ok
// SIG undefined FUN_149486ade(void)

void FUN_149486ade(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceMorphTarget.ush",0,&local_d8,0);
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149486c96 FUN_149486c96 body=122 status=ok
// SIG undefined FUN_149486c96(void)

longlong FUN_149486c96(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_149486d10();
  if (*param_2 != 0) {
    lVar4 = FUN_144a745da();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_149486cf8;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar5 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_149486cf8;
      }
    }
  }
  lVar5 = 0;
LAB_149486cf8:
  *(longlong *)(lVar3 + 0x28) = lVar5;
  return lVar3;
}



// FUNCTION 149486d10 FUN_149486d10 body=148 status=ok
// SIG undefined FUN_149486d10(void)

undefined8 FUN_149486d10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba56cc();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149486da6 FUN_149486da6 body=40 status=ok
// SIG undefined FUN_149486da6(void)

void FUN_149486da6(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x18,0x10);
  FUN_149486dce(uVar1,*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 149486dce FUN_149486dce body=101 status=ok
// SIG undefined FUN_149486dce(void)

undefined8 * FUN_149486dce(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bcffac0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (param_2 != 0) {
    lVar2 = FUN_144b20ea4(param_2);
    if (lVar2 != 0) {
      param_1[1] = *(undefined8 *)(param_2 + 0x8a8);
      plVar3 = (longlong *)FUN_144b20ea4(param_2);
      iVar1 = (**(code **)(*plVar3 + 0x490))(plVar3);
      *(int *)(param_1 + 2) = iVar1 + 1;
    }
  }
  return param_1;
}



// FUNCTION 149486e34 FUN_149486e34 body=65 status=ok
// SIG undefined FUN_149486e34(void)

undefined4 FUN_149486e34(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_2[1] == 0x10) && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
    plVar2 = (longlong *)plVar1[8];
    iVar3 = (**(code **)(*plVar1 + 0x90))();
    iVar3 = *(int *)(*(longlong *)(*plVar2 + (longlong)iVar3 * 8) + 0x18);
    uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == *param_2);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 149486e76 FUN_149486e76 body=155 status=ok
// SIG undefined FUN_149486e76(void)

void FUN_149486e76(longlong param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  FUN_149486f12(&local_2c,*(undefined8 *)(param_2 + 2));
  if (0 < *param_2) {
    uVar5 = 0;
    do {
      local_38 = 0;
      lVar3 = FUN_147d1cc78(*(undefined8 *)(param_1 + 8),uVar2,uVar5 & 0xffffffff,
                            *(undefined4 *)(param_1 + 0x10));
      uVar4 = 0;
      if (lVar3 != 0) {
        uVar4 = local_2c;
      }
      puVar1 = (uint *)(*(longlong *)(param_2 + 4) + uVar5 * 4);
      *puVar1 = *puVar1 | uVar4;
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149486f12 FUN_149486f12 body=280 status=ok
// SIG undefined FUN_149486f12(void)

undefined4 * FUN_149486f12(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
  *param_1 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1ceb0) && (FUN_144b3d300(&DAT_14cc1ceb0), DAT_14cc1ceb0 == -1)) {
    FUN_140056680(&DAT_14cc1cea0,L"ENABLE_DEFORMER_MORPHTARGET");
    atexit((_func_5014 *)&LAB_14452e8f8);
    _Init_thread_footer(&DAT_14cc1ceb0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1ceb8) && (FUN_144b3d300(&DAT_14cc1ceb8), DAT_14cc1ceb8 == -1)) {
    puVar3 = DAT_14cc1cea0;
    if (DAT_14cc1cea8 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1cea8 + -1;
    if (DAT_14cc1cea8 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1ceb4 = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1ceb8);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1cea0,DAT_14cc1ceb4,1);
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 14948702a FUN_14948702a body=208 status=ok
// SIG undefined FUN_14948702a(void)

void FUN_14948702a(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  lVar3 = *(longlong *)(DAT_14ca8c040 + 0x18);
  iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  iVar1 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar1) {
    iVar2 = *(int *)(param_2 + 0x14);
    lVar4 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar6 * 8);
    plVar9 = (longlong *)((longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18) + 8);
    lVar10 = 0x48;
    uVar8 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + 0x10);
      lVar7 = FUN_147d1cc78(*(undefined8 *)(param_1 + 8),iVar6,uVar8 & 0xffffffff,
                            *(undefined4 *)(param_1 + 0x10),0);
      *(undefined4 *)(plVar9 + -1) = *(undefined4 *)(lVar5 + lVar10);
      *(undefined4 *)((longlong)plVar9 + -4) = *(undefined4 *)(lVar5 + -0x38 + lVar10);
      if (lVar7 == 0) {
        lVar7 = lVar3;
      }
      *plVar9 = lVar7;
      uVar8 = uVar8 + 1;
      plVar9 = (longlong *)((longlong)plVar9 + (longlong)iVar2);
      lVar10 = lVar10 + 0xf8;
    } while ((longlong)iVar1 != uVar8);
  }
  return;
}



// FUNCTION 14948712a FUN_14948712a body=139 status=ok
// SIG undefined FUN_14948712a(void)

longlong FUN_14948712a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if ((((lVar2 == 0) || (lVar1 = FUN_14590aaa4(), lVar1 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
       lVar1 + 0x30 || (lVar2 = *(longlong *)(param_1 + 0x30), lVar2 == 0)))) {
    return 0;
  }
  lVar1 = FUN_14590aaa4();
  if ((lVar1 == 0) ||
     ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
       lVar1 + 0x30)))) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  if (*(longlong *)(lVar2 + 0x110) != 0) {
    return *(longlong *)(lVar2 + 0x110);
  }
  FUN_140aa6c08(lVar2);
  return *(longlong *)(lVar2 + 0x110);
}



// FUNCTION 1494871b6 FUN_1494871b6 body=230 status=ok
// SIG undefined FUN_1494871b6(void)

ulonglong FUN_1494871b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140f4f540();
  FUN_14948729e(&local_48);
  if ((longlong)local_40 == 0) {
    uVar7 = 0;
    local_40 = 0;
  }
  else {
    plVar8 = local_48 + (longlong)local_40 * 2;
    plVar6 = local_48;
    do {
      lVar3 = *plVar6;
      plVar4 = (longlong *)plVar6[1];
      if (plVar4 == (longlong *)0x0) {
        if (*(longlong *)(lVar3 + 0x18) == *(longlong *)(param_1 + 0x28)) goto LAB_14948724f;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        lVar3 = *(longlong *)(lVar3 + 0x18);
        lVar5 = *(longlong *)(param_1 + 0x28);
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
        if (lVar3 == lVar5) {
LAB_14948724f:
          uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          goto LAB_14948725f;
        }
      }
      plVar6 = plVar6 + 2;
    } while (plVar6 != plVar8);
    uVar7 = 0;
  }
LAB_14948725f:
  FUN_1494d2cbd(local_48,local_40);
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14948729e FUN_14948729e body=444 status=ok
// SIG undefined FUN_14948729e(void)

longlong * FUN_14948729e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
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
  *param_1 = 0;
  param_1[1] = 0;
  local_68 = 0x100000000;
  uStack_60 = &DAT_14cc1c858;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  if (DAT_14cc1c870 == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = DAT_14cc1c870;
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = &DAT_14cc1c848;
  if ((iStack_54 != iVar7) || (uStack_60 != &DAT_14cc1c858)) {
    do {
      FUN_140f4f5a6(&DAT_14cc1c7d8,&local_68,*(undefined8 *)(*local_90 + (longlong)iStack_74 * 0x10)
                   );
      lVar5 = local_68;
      if (local_68 == 0) {
LAB_1494873d3:
        plVar6 = uStack_60;
        if (uStack_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*uStack_60)(uStack_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
      }
      else {
        iVar3 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
          FUN_1494dacc4(param_1,iVar3);
        }
        lVar4 = *param_1;
        *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = lVar5;
        *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = uStack_60;
        if (uStack_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_60 + 1) = (int)uStack_60[1] + 1;
          UNLOCK();
          goto LAB_1494873d3;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != &DAT_14cc1c848 ||
             ((undefined8 *)CONCAT44(uStack_7c,uStack_80) != &DAT_14cc1c858 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14948745c FUN_14948745c body=119 status=ok
// SIG undefined FUN_14948745c(void)

undefined8 * FUN_14948745c(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = *(undefined1 **)(param_1 + 0x28);
  if ((puVar1[1] == '\x01') && (puVar1[2] == '\x03')) {
    uVar2 = FUN_1457dd0f4(*puVar1);
    local_18 = 0;
    FUN_149458322(uVar2,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494874d6 FUN_1494874d6 body=588 status=ok
// SIG undefined FUN_1494874d6(void)

longlong * FUN_1494874d6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_80,"ValueIn",1);
  FUN_1400b22c2(local_90,"ReadValue");
  uVar2 = **(undefined8 **)(param_1 + 0x38);
  FUN_1400b22c2(local_a0,"ReadNumValues");
  local_d0 = 1;
  local_d8 = local_a0;
  FUN_149466350(&local_78,local_80,local_90,uVar2);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar3 = (undefined8 *)*param_2;
  *puVar3 = local_78;
  puVar3[1] = 0;
  puVar3[1] = local_70;
  local_70 = 0;
  *(undefined4 *)(puVar3 + 2) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar3 + 0x14) = local_68._4_4_;
  local_68 = 0;
  puVar3[3] = 0;
  puVar3[3] = local_60;
  local_60 = 0;
  *(undefined4 *)(puVar3 + 4) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar3 + 0x24) = local_58._4_4_;
  local_58 = 0;
  *(undefined1 *)((longlong)puVar3 + 0x2c) = local_4c;
  *(undefined4 *)(puVar3 + 5) = local_50;
  FUN_14946649a(&local_78);
  FUN_1446ddc76(&local_a8,"ValueOut",1);
  FUN_1400b22c2(local_b8,"WriteValue");
  uVar2 = **(undefined8 **)(param_1 + 0x38);
  FUN_1400b22c2(local_c8,"ReadNumValues");
  local_d0 = 1;
  local_d8 = local_c8;
  FUN_149466350(&local_78,local_a8,local_b8,uVar2);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar4 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar4 + lVar5) = local_78;
  *(undefined8 *)(lVar4 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar4 + 8 + lVar5) = local_70;
  local_70 = 0;
  *(undefined4 *)(lVar4 + 0x10 + lVar5) = (undefined4)local_68;
  *(undefined4 *)(lVar4 + 0x14 + lVar5) = local_68._4_4_;
  local_68 = 0;
  *(undefined8 *)(lVar4 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar4 + 0x18 + lVar5) = local_60;
  local_60 = 0;
  *(undefined4 *)(lVar4 + 0x20 + lVar5) = (undefined4)local_58;
  *(undefined4 *)(lVar4 + 0x24 + lVar5) = local_58._4_4_;
  local_58 = 0;
  *(undefined1 *)(lVar4 + 0x2c + lVar5) = local_4c;
  *(undefined4 *)(lVar4 + 0x28 + lVar5) = local_50;
  FUN_14946649a();
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149487724 FUN_149487724 body=49 status=ok
// SIG undefined FUN_149487724(void)

longlong * FUN_149487724(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a799b0();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149487756 FUN_149487756 body=274 status=ok
// SIG undefined FUN_149487756(void)

void FUN_149487756(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_40,L"ReadNumValues");
  uVar1 = FUN_149459122(uVar1,local_40);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_50,L"ReadValue");
  uVar1 = FUN_149459122(uVar1,local_50);
  uVar1 = FUN_1494592f4(uVar1,*(undefined8 *)(param_1 + 0x28));
  local_68 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_60,L"ReadValueUAV");
  uVar1 = FUN_149459122(uVar1,local_60);
  uVar1 = FUN_1494592f4(uVar1,*(undefined8 *)(param_1 + 0x28));
  local_68 = 0;
  FUN_149459206(uVar1,2,0,0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948786a FUN_14948786a body=414 status=ok
// SIG undefined FUN_14948786a(void)

void FUN_14948786a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_40,L"WriteValue");
  uVar1 = FUN_149459122(uVar1,local_40);
  local_78 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  FUN_14945915c(uVar1,*(undefined8 *)(param_1 + 0x28),0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_50,L"WriteAtomicAdd");
  uVar1 = FUN_149459122(uVar1,local_50);
  uVar1 = FUN_1494592f4(uVar1,*(undefined8 *)(param_1 + 0x28));
  local_78 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  FUN_14945915c(uVar1,*(undefined8 *)(param_1 + 0x28),0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_60,L"WriteAtomicMin");
  uVar1 = FUN_149459122(uVar1,local_60);
  uVar1 = FUN_1494592f4(uVar1,*(undefined8 *)(param_1 + 0x28));
  local_78 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  FUN_14945915c(uVar1,*(undefined8 *)(param_1 + 0x28),0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_70,L"WriteAtomicMax");
  uVar1 = FUN_149459122(uVar1,local_70);
  uVar1 = FUN_1494592f4(uVar1,*(undefined8 *)(param_1 + 0x28));
  local_78 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  FUN_14945915c(uVar1,*(undefined8 *)(param_1 + 0x28),0);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149487a12 FUN_149487a12 body=151 status=ok
// SIG undefined FUN_149487a12(void)

void FUN_149487a12(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1494d2d90();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1d298;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x20;
  return;
}



// FUNCTION 149487ab2 FUN_149487ab2 body=151 status=ok
// SIG undefined FUN_149487ab2(void)

void FUN_149487ab2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1494d3196();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1d320;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
  return;
}



// FUNCTION 149487b52 FUN_149487b52 body=43 status=ok
// SIG undefined FUN_149487b52(void)

void FUN_149487b52(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceRawBuffer.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 149487b7e FUN_149487b7e body=1254 status=ok
// SIG undefined FUN_149487b7e(void)

void FUN_149487b7e(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  void **ppvVar5;
  void *pvVar6;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_280;
  undefined1 local_278 [16];
  longlong local_268;
  longlong local_258 [2];
  undefined1 local_248 [16];
  longlong local_238;
  longlong local_228 [2];
  undefined1 local_218 [16];
  longlong local_208;
  longlong local_1f8 [2];
  void *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d8 [16];
  longlong local_1c8;
  longlong local_1b8 [2];
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  undefined1 local_198 [16];
  longlong local_188;
  longlong local_178 [2];
  void *local_168;
  int local_160;
  undefined4 local_15c;
  longlong local_158;
  int local_150;
  longlong local_148;
  longlong local_138 [2];
  longlong **local_128;
  undefined1 *local_120;
  void *local_118;
  int local_110;
  void *local_108;
  int local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  undefined1 *local_e0;
  longlong *local_d8;
  undefined1 *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  longlong *local_b8;
  undefined1 *local_b0;
  longlong *local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [64];
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_f8 = (longlong *)0x0;
  local_280 = param_2;
  FUN_149458322(param_1[5],&local_108);
  FUN_14948745c(param_1,&local_118);
  FUN_140056680(local_138,L"DataInterfaceName");
  local_168 = (void *)0x0;
  local_160 = *(int *)(param_3 + 1);
  lVar4 = (longlong)local_160;
  pvVar6 = (void *)*param_3;
  if (lVar4 == 0) {
    local_15c = 0;
  }
  else {
    FUN_1446dd670(&local_168,local_160,0);
    memcpy(local_168,pvVar6,lVar4 * 2);
  }
  FUN_14146ec20(&local_158,&local_168);
  local_f8 = local_138;
  plStack_f0 = &local_158;
  FUN_140056680(local_178,L"PublicType");
  pvVar6 = local_108;
  local_1a8 = (void *)0x0;
  local_1a0 = local_100;
  if ((longlong)local_100 == 0) {
    local_19c = 0;
  }
  else {
    FUN_1446dd670(&local_1a8,local_100,0);
    memcpy(local_1a8,pvVar6,(longlong)local_100 * 2);
  }
  FUN_14146ec20(local_198,&local_1a8);
  local_e8 = local_178;
  local_e0 = local_198;
  FUN_140056680(local_1b8,L"BufferType");
  local_1e8 = (void *)0x0;
  ppvVar5 = &local_108;
  if (1 < local_110) {
    ppvVar5 = &local_118;
  }
  iVar1 = *(int *)(ppvVar5 + 1);
  local_1e0 = iVar1;
  if (iVar1 == 0) {
    local_1dc = 0;
  }
  else {
    pvVar6 = local_108;
    if (1 < local_110) {
      pvVar6 = local_118;
    }
    FUN_1446dd670(&local_1e8,iVar1,0);
    memcpy(local_1e8,pvVar6,(longlong)iVar1 * 2);
  }
  FUN_14146ec20(local_1d8,&local_1e8);
  local_d8 = local_1b8;
  local_d0 = local_1d8;
  FUN_140056680(local_1f8,L"BufferTypeRaw");
  FUN_142787b30(local_218,1 < local_110);
  local_c8 = local_1f8;
  local_c0 = local_218;
  FUN_140056680(local_228,L"SupportAtomic");
  uVar2 = FUN_1494871b6(param_1);
  FUN_142787b30(local_248,uVar2);
  local_b8 = local_228;
  local_b0 = local_248;
  FUN_140056680(local_258,L"SplitReadWrite");
  uVar2 = (**(code **)(*param_1 + 0x388))(param_1);
  FUN_142787b30(local_278,uVar2);
  local_128 = &local_f8;
  local_120 = local_98;
  local_a8 = local_258;
  local_a0 = local_278;
  FUN_1481b8c1c(local_98);
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  if (local_258[0] != 0) {
    FUN_1400020a8();
  }
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  if (local_228[0] != 0) {
    FUN_1400020a8();
  }
  if (local_208 != 0) {
    FUN_1400020a8();
  }
  if (local_1f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  if (local_1b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
  local_f8 = (longlong *)0x0;
  plStack_f0 = (longlong *)0x0;
  local_298 = 0;
  uStack_290 = 0;
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceRawBuffer.ush",0,&local_f8,0);
  plVar3 = local_f8;
  if ((int)plStack_f0 == 0) {
    plVar3 = (longlong *)&DAT_149dfb77a;
  }
  FUN_140a69a60(&local_158,plVar3,local_98);
  iVar1 = local_150 + -1;
  if (local_150 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(local_280,local_158,iVar1);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_98);
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149488066 FUN_149488066 body=32 status=ok
// SIG undefined FUN_149488066(void)

undefined8 FUN_149488066(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Transient");
  return param_2;
}



// FUNCTION 149488086 FUN_149488086 body=105 status=ok
// SIG undefined FUN_149488086(void)

void FUN_149488086(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = FUN_1494880f0(param_1,&local_18);
  *(undefined1 *)(lVar1 + 0x80) = *(undefined1 *)(param_1 + 0x90);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494880f0 FUN_1494880f0 body=240 status=ok
// SIG undefined FUN_1494880f0(void)

longlong FUN_1494880f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_1494d3513(DAT_14c951640);
  if (*param_2 != 0) {
    lVar4 = FUN_144a78d6a();
    if ((((*param_2 != 0) && (lVar4 != 0)) && (lVar1 = *(longlong *)(*param_2 + 0x10), lVar1 != 0))
       && ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)))) {
      FUN_14485c47a(lVar3 + 0x28);
      lVar4 = FUN_14479d2ce(param_1 + 0x70);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_14948712a(lVar4);
      }
      FUN_14485c47a(lVar3 + 0x30,uVar5);
      *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(param_1 + 0x30);
      FUN_1406fa324(lVar3 + 0x40,param_1 + 0x38);
      *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(param_1 + 0x48);
      FUN_144a787a6(lVar3 + 0x58,param_1 + 0x50);
      FUN_1406fa324(lVar3 + 0x68,param_1 + 0x60);
      uVar2 = FUN_145cc73c0(*(undefined8 *)(param_1 + 0x28));
      *(undefined4 *)(lVar3 + 0x78) = uVar2;
      if ((*(char *)(*(longlong *)(param_1 + 0x28) + 1) != '\x01') ||
         (uVar2 = 4, *(char *)(*(longlong *)(param_1 + 0x28) + 2) != '\x03')) {
        uVar2 = 0;
      }
      *(undefined4 *)(lVar3 + 0x7c) = uVar2;
    }
  }
  return lVar3;
}



// FUNCTION 1494881e0 FUN_1494881e0 body=32 status=ok
// SIG undefined FUN_1494881e0(void)

undefined8 FUN_1494881e0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"ImplicitPersistent");
  return param_2;
}



// FUNCTION 149488200 FUN_149488200 body=116 status=ok
// SIG undefined FUN_149488200(void)

void FUN_149488200(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = FUN_149488276(param_1,&local_18);
  *(undefined8 *)(lVar1 + 0x8c) = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 *)(lVar1 + 0x88) = *(undefined1 *)(param_1 + 0x90);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149488276 FUN_149488276 body=240 status=ok
// SIG undefined FUN_149488276(void)

longlong FUN_149488276(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_1494d35a8(DAT_14c951640);
  if (*param_2 != 0) {
    lVar4 = FUN_144a78d6a();
    if ((((*param_2 != 0) && (lVar4 != 0)) && (lVar1 = *(longlong *)(*param_2 + 0x10), lVar1 != 0))
       && ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)))) {
      FUN_14485c47a(lVar3 + 0x28);
      lVar4 = FUN_14479d2ce(param_1 + 0x70);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_14948712a(lVar4);
      }
      FUN_14485c47a(lVar3 + 0x30,uVar5);
      *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(param_1 + 0x30);
      FUN_1406fa324(lVar3 + 0x40,param_1 + 0x38);
      *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(param_1 + 0x48);
      FUN_144a787a6(lVar3 + 0x58,param_1 + 0x50);
      FUN_1406fa324(lVar3 + 0x68,param_1 + 0x60);
      uVar2 = FUN_145cc73c0(*(undefined8 *)(param_1 + 0x28));
      *(undefined4 *)(lVar3 + 0x78) = uVar2;
      if ((*(char *)(*(longlong *)(param_1 + 0x28) + 1) != '\x01') ||
         (uVar2 = 4, *(char *)(*(longlong *)(param_1 + 0x28) + 2) != '\x03')) {
        uVar2 = 0;
      }
      *(undefined4 *)(lVar3 + 0x7c) = uVar2;
    }
  }
  return lVar3;
}



// FUNCTION 149488366 FUN_149488366 body=32 status=ok
// SIG undefined FUN_149488366(void)

undefined8 FUN_149488366(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Persistent");
  return param_2;
}



// FUNCTION 149488386 FUN_149488386 body=107 status=ok
// SIG undefined FUN_149488386(void)

void FUN_149488386(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  if ((local_18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = FUN_1494883f2(param_1,&local_18);
  *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(param_1 + 0x90);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494883f2 FUN_1494883f2 body=240 status=ok
// SIG undefined FUN_1494883f2(void)

longlong FUN_1494883f2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_1494d363d(DAT_14c951640);
  if (*param_2 != 0) {
    lVar4 = FUN_144a78d6a();
    if ((((*param_2 != 0) && (lVar4 != 0)) && (lVar1 = *(longlong *)(*param_2 + 0x10), lVar1 != 0))
       && ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)))) {
      FUN_14485c47a(lVar3 + 0x28);
      lVar4 = FUN_14479d2ce(param_1 + 0x70);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_14948712a(lVar4);
      }
      FUN_14485c47a(lVar3 + 0x30,uVar5);
      *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(param_1 + 0x30);
      FUN_1406fa324(lVar3 + 0x40,param_1 + 0x38);
      *(undefined4 *)(lVar3 + 0x50) = *(undefined4 *)(param_1 + 0x48);
      FUN_144a787a6(lVar3 + 0x58,param_1 + 0x50);
      FUN_1406fa324(lVar3 + 0x68,param_1 + 0x60);
      uVar2 = FUN_145cc73c0(*(undefined8 *)(param_1 + 0x28));
      *(undefined4 *)(lVar3 + 0x78) = uVar2;
      if ((*(char *)(*(longlong *)(param_1 + 0x28) + 1) != '\x01') ||
         (uVar2 = 4, *(char *)(*(longlong *)(param_1 + 0x28) + 2) != '\x03')) {
        uVar2 = 0;
      }
      *(undefined4 *)(lVar3 + 0x7c) = uVar2;
    }
  }
  return lVar3;
}



// FUNCTION 1494884e2 FUN_1494884e2 body=2818 status=ok
// SIG undefined FUN_1494884e2(void)

ulonglong FUN_1494884e2(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  uint uVar20;
  float fVar21;
  undefined1 auStack_2c8 [32];
  undefined8 **local_2a8;
  longlong *local_298;
  longlong *local_290;
  ulonglong local_288;
  undefined1 *local_280;
  longlong **local_278;
  undefined1 *local_270;
  longlong **local_268;
  undefined8 local_260;
  int local_258;
  undefined4 local_250;
  undefined1 local_24c [4];
  undefined8 local_248;
  undefined1 *local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  longlong *local_228;
  undefined8 uStack_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined1 *local_1d8 [2];
  undefined8 *local_1c8;
  undefined8 *local_198;
  undefined4 *puStack_190;
  byte local_128;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  int local_e4;
  undefined1 local_e0 [8];
  undefined1 *local_d8;
  int local_d0;
  longlong local_c8 [2];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  int local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_298 = param_3;
  plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if ((plVar6 != (longlong *)0x0) && (lVar7 = FUN_14479d2ce(param_1 + 0x28), lVar7 != 0)) {
    uVar3 = (**(code **)(*plVar6 + 0x2c0))(plVar6,lVar7);
    plVar8 = local_298;
    *param_2 = uVar3;
    if (*(int *)(param_1 + 0x38) == 0) {
      if (*(int *)(param_1 + 0x48) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = **(undefined8 **)(param_1 + 0x40);
      }
      local_2a8 = &local_198;
      local_198 = (undefined8 *)0x0;
      puStack_190 = (undefined4 *)0x0;
      cVar2 = (**(code **)(*plVar6 + 0x2d0))(plVar6,uVar14,lVar7,uVar3);
      if ((cVar2 == '\0') || (*(int *)(param_1 + 0x48) != 1)) {
        uVar16 = 0;
      }
      else {
        FUN_144a9ff88(plVar8,(ulonglong)puStack_190 & 0xffffffff);
        puVar9 = local_198;
        lVar7 = (longlong)(int)puStack_190;
        if (lVar7 == 0) {
          uVar16 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
        }
        else {
          lVar15 = 0;
          do {
            iVar4 = *(int *)(param_1 + 0x50);
            if (iVar4 < 2) {
              iVar4 = 1;
            }
            *(int *)((longlong)puVar9 + lVar15) = iVar4 * *(int *)((longlong)puVar9 + lVar15);
            iVar4 = (int)plVar8[1];
            *(uint *)(plVar8 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)plVar8 + 0xc) < iVar4 + 1U) {
              FUN_1446f48e2(plVar8,iVar4);
            }
            *(undefined4 *)(*plVar8 + (longlong)iVar4 * 4) =
                 *(undefined4 *)((longlong)puVar9 + lVar15);
            lVar15 = lVar15 + 4;
          } while (lVar7 * 4 != lVar15);
          uVar16 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),1);
        }
      }
      if (local_198 != (undefined8 *)0x0) {
        FUN_1400020a8(local_198);
      }
      goto LAB_14948856b;
    }
    if (*(int *)(param_1 + 0x38) == 1) {
      bVar1 = false;
      local_a8 = 0;
      local_a0 = 0;
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_9c = 0xffffffff00000080;
      local_94 = 0;
      local_88 = 0;
      local_80 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_ec = 0xffffffff00000080;
      local_e4 = 0;
      local_d8 = (undefined1 *)0x0;
      local_d0 = 0;
      plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
      (**(code **)(*plVar8 + 0x2b8))(plVar8,&local_228);
      lVar15 = (longlong)(int)uStack_220;
      if (lVar15 == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        local_290 = local_228;
        uVar5 = 0xffffffff;
        lVar12 = 0;
        do {
          local_248 = *(undefined8 *)((longlong)local_290 + lVar12);
          local_250 = 0;
          puStack_190 = &local_250;
          local_198 = &local_248;
          FUN_140d12ea6(local_c8,local_24c,&local_198,0);
          uVar20 = (uint)((ulonglong)local_248 >> 0x10);
          uVar17 = (uint)local_248 & 0xffff;
          ppuVar10 = (undefined8 **)
                     FUN_1402b391e(&local_118,
                                   ((uint)local_248 << 0x10 | uVar17) +
                                   (int)((ulonglong)local_248 >> 0x20) +
                                   (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar17 >> 4),&local_248);
          local_2a8 = ppuVar10;
          cVar2 = (**(code **)(*plVar6 + 0x2d0))(plVar6,local_248,lVar7);
          if (cVar2 == '\0') {
            bVar1 = true;
            goto LAB_149488741;
          }
          uVar20 = *(uint *)(ppuVar10 + 1);
          if ((uVar5 != 0xffffffff) && (uVar20 = uVar5, uVar5 != *(uint *)(ppuVar10 + 1))) {
            bVar1 = true;
            goto LAB_149488741;
          }
          uVar5 = uVar20;
          lVar12 = lVar12 + 8;
        } while (lVar15 * 8 != lVar12);
        bVar1 = false;
      }
LAB_149488741:
      plVar6 = local_298;
      if (local_228 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar16 = 0;
      if (!bVar1 && 0 < (int)uVar5) {
        local_208 = 0;
        local_200 = 0;
        local_228 = (longlong *)0x0;
        uStack_220 = 0;
        local_1fc = 0xffffffff00000080;
        local_1f4 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        FUN_140d188f2(&local_228,local_c8);
        local_1d8[0] = (undefined1 *)0x0;
        puVar9 = (undefined8 *)FUN_14001cc68(0x58,8);
        *puVar9 = &PTR_FUN_14bd1d0d0;
        local_1c8 = puVar9;
        FUN_1408a467a(puVar9 + 1,&local_228);
        if (puVar9 != (undefined8 *)&DAT_fffffffffffffff8) {
          local_1d8[0] = &LAB_14452eeca;
        }
        local_260 = *(undefined8 *)(param_1 + 0x58);
        local_258 = *(int *)(param_1 + 0x60) + -1;
        if (*(int *)(param_1 + 0x60) == 0) {
          local_258 = 0;
        }
        FUN_149488fe6(0,&local_198,&local_260,local_1d8);
        local_1e0 = 0;
        if (local_1e8 != 0) {
          FUN_1400020a8();
        }
        FUN_14064e7da(&local_228);
        uVar16 = 0;
        if ((&DAT_14bcfe1f4)[local_128] == '\0') {
          FUN_144a9ff88(plVar6,uVar5);
          local_288 = (ulonglong)uVar5;
          uVar16 = 0;
          do {
            local_248 = 0x100000000;
            local_238 = 0xffffffff;
            local_230 = 0;
            iVar4 = 0;
            local_240 = local_b8;
            if (local_a0 != 0) {
              FUN_1449c0562(&local_248);
              iVar4 = local_a0;
            }
            local_210 = local_238;
            uVar14 = local_210;
            local_208 = CONCAT44(local_22c,local_230);
            uStack_220 = local_248;
            local_218 = local_240;
            local_210._4_4_ = (int)((ulonglong)local_238 >> 0x20);
            iVar11 = local_210._4_4_;
            local_228 = local_c8;
            if ((local_210._4_4_ != iVar4) || (local_210 = uVar14, local_240 != local_b8)) {
              do {
                local_210 = uVar14;
                if ((int)uStack_110 != local_e4) {
                  lVar7 = *(longlong *)(*local_228 + (longlong)iVar11 * 0x14);
                  uVar5 = (uint)((ulonglong)lVar7 >> 0x10);
                  uVar20 = (uint)lVar7 & 0xffff;
                  puVar19 = local_d8;
                  if (local_d8 == (undefined1 *)0x0) {
                    puVar19 = local_e0;
                  }
                  iVar13 = *(int *)(puVar19 +
                                   (ulonglong)
                                   (local_d0 - 1U &
                                   (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar20)
                                   + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar20 >> 4)) * 4);
                  while (iVar13 != -1) {
                    lVar15 = local_118 + (longlong)iVar13 * 0x20;
                    if (*(longlong *)(local_118 + (longlong)iVar13 * 0x20) == lVar7)
                    goto LAB_149488bd4;
                    iVar13 = *(int *)(lVar15 + 0x18);
                  }
                }
                lVar15 = 0;
LAB_149488bd4:
                iVar13 = 1;
                if ((longlong)uVar16 < (longlong)*(int *)(lVar15 + 0x10)) {
                  iVar13 = *(int *)(*(longlong *)(lVar15 + 8) + uVar16 * 4);
                }
                *(float *)(*local_228 + (longlong)iVar11 * 0x14 + 8) = (float)iVar13;
                local_210 = CONCAT44(local_210._4_4_,(uint)local_210 & ~uStack_220._4_4_);
                FUN_1449c0562(&uStack_220);
                iVar11 = local_210._4_4_;
                uVar14 = local_210;
              } while (local_228 != local_c8 || (local_218 != local_b8 || local_210._4_4_ != iVar4))
              ;
            }
            local_208 = 0;
            local_200 = 0;
            local_228 = (longlong *)0x0;
            uStack_220 = 0;
            local_1fc = 0xffffffff00000080;
            local_1f4 = 0;
            local_1e8 = 0;
            local_1e0 = 0;
            uVar3 = FUN_140d188f2(&local_228,local_c8);
            local_270 = &LAB_14452f052;
            local_268 = &local_228;
            fVar21 = (float)FUN_14948a246(uVar3,&local_198);
            local_1e0 = 0;
            if (local_1e8 != 0) {
              FUN_1400020a8();
            }
            FUN_14064e7da(&local_228);
            plVar6 = local_298;
            if ((int)fVar21 < 0) {
              uVar16 = 0;
              goto LAB_14948886f;
            }
            plVar8 = (longlong *)(longlong)(int)local_298[1];
            uVar5 = (int)local_298[1] + 1;
            *(uint *)(local_298 + 1) = uVar5;
            if (*(uint *)((longlong)local_298 + 0xc) < uVar5) {
              local_290 = plVar8;
              FUN_1446f48e2(local_298,plVar8);
              plVar8 = local_290;
            }
            *(int *)(*plVar6 + (longlong)plVar8 * 4) = (int)fVar21;
            uVar16 = uVar16 + 1;
          } while (uVar16 != local_288);
          uVar16 = 0;
          if ((longlong)(int)local_298[1] != 0) {
            lVar7 = 0;
            uVar16 = 0;
            do {
              uVar16 = (ulonglong)(uint)((int)uVar16 + *(int *)(*local_298 + lVar7));
              lVar7 = lVar7 + 4;
            } while ((longlong)(int)local_298[1] * 4 != lVar7);
          }
          local_248 = 0x100000000;
          local_238 = 0xffffffff;
          local_230 = 0;
          iVar4 = 0;
          local_240 = local_b8;
          if (local_a0 != 0) {
            FUN_1449c0562(&local_248);
            iVar4 = local_a0;
          }
          local_210 = local_238;
          uVar14 = local_210;
          local_208 = CONCAT44(local_22c,local_230);
          uStack_220 = local_248;
          local_218 = local_240;
          local_210._4_4_ = (int)((ulonglong)local_238 >> 0x20);
          if ((local_210._4_4_ != iVar4) || (local_240 != local_b8)) {
            iVar11 = local_210._4_4_;
            local_228 = local_c8;
            local_210 = uVar14;
            do {
              lVar7 = *local_228;
              lVar12 = (longlong)iVar11;
              lVar15 = *(longlong *)(lVar7 + lVar12 * 0x14);
              *(undefined4 *)(lVar7 + 8 + lVar12 * 0x14) = 0;
              if ((int)uStack_110 != local_e4) {
                uVar5 = (uint)((ulonglong)lVar15 >> 0x10);
                uVar20 = (uint)lVar15 & 0xffff;
                puVar19 = local_d8;
                if (local_d8 == (undefined1 *)0x0) {
                  puVar19 = local_e0;
                }
                iVar11 = *(int *)(puVar19 +
                                 (ulonglong)
                                 (local_d0 - 1U &
                                 (int)((ulonglong)lVar15 >> 0x20) + ((uint)lVar15 << 0x10 | uVar20)
                                 + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar20 >> 4)) * 4);
                while (iVar11 != -1) {
                  lVar18 = local_118 + (longlong)iVar11 * 0x20;
                  if (*(longlong *)(local_118 + (longlong)iVar11 * 0x20) == lVar15)
                  goto LAB_149488ed6;
                  iVar11 = *(int *)(lVar18 + 0x18);
                }
              }
              lVar18 = 0;
LAB_149488ed6:
              iVar11 = *(int *)(lVar18 + 0x10);
              if ((longlong)iVar11 != 0) {
                lVar15 = *(longlong *)(lVar18 + 8);
                fVar21 = 0.0;
                lVar18 = 0;
                do {
                  fVar21 = fVar21 + (float)*(int *)(lVar15 + lVar18);
                  *(float *)(lVar7 + lVar12 * 0x14 + 8) = fVar21;
                  lVar18 = lVar18 + 4;
                } while ((longlong)iVar11 * 4 != lVar18);
              }
              local_210 = CONCAT44(local_210._4_4_,(uint)local_210 & ~uStack_220._4_4_);
              FUN_1449c0562(&uStack_220);
              iVar11 = local_210._4_4_;
              uVar14 = local_210;
            } while (local_228 != local_c8 || (local_218 != local_b8 || local_210._4_4_ != iVar4));
          }
          local_210 = uVar14;
          local_208 = 0;
          local_200 = 0;
          local_228 = (longlong *)0x0;
          uStack_220 = 0;
          local_1fc = 0xffffffff00000080;
          local_1f4 = 0;
          local_1e8 = 0;
          local_1e0 = 0;
          uVar3 = FUN_140d188f2(&local_228,local_c8);
          local_280 = &LAB_14452f0fe;
          local_278 = &local_228;
          fVar21 = (float)FUN_14948a246(uVar3,&local_198);
          local_1e0 = 0;
          if (local_1e8 != 0) {
            FUN_1400020a8();
          }
          FUN_14064e7da(&local_228);
          uVar16 = CONCAT71((int7)(uVar16 >> 8),(int)uVar16 == (int)fVar21);
        }
LAB_14948886f:
        (*(code *)(&switchD_14452c9ce::switchdataD_14bcfe0e0)[local_128])();
      }
      local_d0 = 0;
      if (local_d8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_14575edd2(&local_118);
      local_80 = 0;
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_14064e7da(local_c8);
      goto LAB_14948856b;
    }
  }
  uVar16 = 0;
LAB_14948856b:
  if ((local_70 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149488fe6 FUN_149488fe6 body=4702 status=ok
// SIG undefined FUN_149488fe6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_149488fe6(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  int iVar13;
  longlong *plVar14;
  undefined2 **ppuVar15;
  wchar_t *pwVar16;
  undefined2 *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  bool bVar21;
  undefined1 auStack_b98 [32];
  longlong *local_b78;
  undefined8 *local_b70;
  int local_b64;
  undefined8 local_b60;
  int local_b54;
  undefined8 local_b50;
  undefined4 local_b48;
  undefined8 local_b40;
  undefined4 local_b38;
  undefined8 local_b30;
  undefined4 local_b28;
  undefined8 local_b20;
  undefined4 local_b18;
  undefined8 local_b10;
  undefined2 *local_b08;
  int local_b00;
  undefined4 local_af8;
  undefined4 uStack_af4;
  undefined4 uStack_af0;
  undefined4 uStack_aec;
  longlong local_ae0;
  int local_ad8;
  undefined2 *local_ad0;
  undefined8 uStack_ac8;
  byte local_ac0;
  int local_ab8;
  int iStack_ab4;
  undefined2 **local_a70;
  ulonglong local_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  char local_a50;
  undefined8 local_a48;
  int local_a40;
  char local_a38;
  int local_a30 [2];
  byte local_a28;
  char local_a24;
  undefined1 local_a20 [8];
  undefined1 *local_a18;
  undefined1 *local_a10;
  undefined1 local_a08 [768];
  undefined1 *local_708;
  undefined8 local_700;
  undefined1 local_6f8 [384];
  undefined1 *local_578;
  undefined8 local_570;
  undefined1 local_568 [512];
  undefined1 *local_368;
  undefined8 local_360;
  undefined1 local_358 [768];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cc18) && (FUN_144b3d300(&DAT_14cc1cc18), DAT_14cc1cc18 == -1)) {
    _DAT_14cc1cc00 = 0;
    _DAT_14cc1cbf0 = 0;
    uRam000000014cc1cbf8 = 0;
    _DAT_14cc1cbe0 = 0;
    uRam000000014cc1cbe8 = 0;
    _DAT_14cc1cbd0 = 0;
    uRam000000014cc1cbd8 = 0;
    _DAT_14cc1cbc0 = 0;
    uRam000000014cc1cbc8 = 0;
    _DAT_14cc1cbb0 = 0;
    uRam000000014cc1cbb8 = 0;
    DAT_14cc1cba0 = 0;
    uRam000000014cc1cba8 = 0;
    uRam000000014cc1cc08 = 0x800000000;
    DAT_14cc1cc10 = 0;
    atexit((_func_5014 *)&LAB_14452c9b9);
    _Init_thread_footer(&DAT_14cc1cc18);
  }
  FUN_144a8b87e(param_3,&local_ae0);
  if (local_ad8 == 0) {
    uVar11 = (ulonglong)DAT_14cc1cc10;
    *(byte *)(param_2 + 0xe) = DAT_14cc1cc10;
    (*(code *)(&PTR_LAB_14bd1e060)[uVar11])(param_2,&DAT_14cc1cba0);
  }
  else {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x4000000000;
    local_a10 = local_568;
    local_368 = (undefined1 *)0x0;
    local_360 = 0x4000000000;
    local_578 = (undefined1 *)0x0;
    local_570 = 0x2000000000;
    local_708 = (undefined1 *)0x0;
    local_700 = 0x2000000000;
    local_a24 = '\0';
    local_b78 = param_4;
    local_b70 = param_2;
    local_a18 = local_358;
    do {
      local_af8 = *param_3;
      uStack_af4 = param_3[1];
      uStack_af0 = param_3[2];
      uStack_aec = param_3[3];
      FUN_1494bc690(&local_ad0,&local_ae0,&local_af8);
      uVar5 = local_50;
      uVar11 = uStack_ac8;
      puVar17 = local_ad0;
      param_2 = local_b70;
      if ((&DAT_14bd1c860)[local_ac0] == '\x01') {
        iVar13 = (int)uStack_ac8;
        lVar18 = (longlong)(int)uStack_ac8;
        local_ad0 = (undefined2 *)0x0;
        uStack_ac8 = 0;
        *local_b70 = 0;
        *(int *)(local_b70 + 1) = iVar13;
        if (lVar18 == 0) {
          *(undefined4 *)((longlong)local_b70 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(local_b70,uVar11 & 0xffffffff,0);
          memcpy((void *)*param_2,puVar17,lVar18 * 2);
        }
        param_2[2] = CONCAT44(iStack_ab4,local_ab8);
        *(undefined1 *)(param_2 + 0xe) = 1;
        param_4 = local_b78;
        local_b08 = puVar17;
joined_r0x000149489dae:
        if (local_b08 != (undefined2 *)0x0) {
          FUN_1400020a8(local_b08);
        }
LAB_149489d27:
        (*(code *)(&PTR_FUN_14bd1c870)[local_ac0])();
        goto LAB_149489968;
      }
      iVar8 = (int)local_50;
      iVar13 = (int)local_ad0;
      if ((byte)uStack_ac8 == '\x02') {
        if ((local_a24 != '\x01') ||
           (((&DAT_14bd1e090)[local_a28] == '\0' && ((&DAT_14bd1e093)[local_a28] != '\x01')))) {
          local_a48 = (undefined2 *)CONCAT44(local_a48._4_4_,(int)local_ad0);
          local_a40 = CONCAT31(local_a40._1_3_,3);
          bVar6 = 3;
          goto LAB_1494892aa;
        }
LAB_149489f19:
        uVar10 = CONCAT44(iStack_ab4,local_ab8);
        pwVar16 = L"Expected an operator";
        ppuVar15 = (undefined2 **)&local_a48;
LAB_149489cf4:
        FUN_140056680(ppuVar15,pwVar16);
LAB_149489cfc:
        *local_b70 = *ppuVar15;
        *ppuVar15 = (undefined2 *)0x0;
        *(undefined4 *)(local_b70 + 1) = *(undefined4 *)(ppuVar15 + 1);
        *(undefined4 *)((longlong)local_b70 + 0xc) = *(undefined4 *)((longlong)ppuVar15 + 0xc);
        local_b70[2] = uVar10;
        *(undefined1 *)(local_b70 + 0xe) = 1;
        param_2 = local_b70;
        param_4 = local_b78;
        goto LAB_149489d27;
      }
      if ((byte)uStack_ac8 == '\x01') {
        if ((local_a24 == '\x01') &&
           (((&DAT_14bd1e090)[local_a28] != '\0' || ((&DAT_14bd1e093)[local_a28] == '\x01'))))
        goto LAB_149489f19;
        local_a48 = local_ad0;
        local_a40 = CONCAT31(local_a40._1_3_,1);
        bVar6 = 1;
LAB_1494892aa:
        uVar7 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar7);
        if (local_50._4_4_ < uVar7) {
          FUN_1494e263e(local_358,uVar5 & 0xffffffff);
          bVar6 = (byte)local_a40;
        }
        puVar12 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar12 = local_358;
        }
        (puVar12 + (longlong)iVar8 * 0xc)[8] = bVar6;
        (*(code *)(&PTR_LAB_14bd1e040)[bVar6])(puVar12 + (longlong)iVar8 * 0xc,&local_a48);
        uVar11 = local_360;
        lVar18 = (longlong)(int)local_360;
        uVar7 = (int)local_360 + 1;
        local_360 = CONCAT44(local_360._4_4_,uVar7);
        if (local_360._4_4_ < uVar7) {
          FUN_1494e275e(local_568,uVar11 & 0xffffffff);
        }
        puVar12 = local_368;
        if (local_368 == (undefined1 *)0x0) {
          puVar12 = local_568;
        }
        *(ulonglong *)(puVar12 + lVar18 * 8) = CONCAT44(iStack_ab4,local_ab8);
      }
      else {
        FUN_14452c9d2(&local_a48,(ulonglong)local_ad0 & 0xffffffff);
        if ((local_a24 != '\x01') || (local_a28 != 0)) goto LAB_1494894c9;
        FUN_14452c9d2(&local_a60,local_a30[0]);
        if ((local_a38 == '\x01') && (local_a50 == '\x01')) {
          pwVar16 = L"Expected an expression";
LAB_149489fe9:
          uVar10 = CONCAT44(iStack_ab4,local_ab8);
          ppuVar15 = &local_b08;
          goto LAB_149489cf4;
        }
        if (iVar13 == 8 && local_a30[0] == 9) {
          pwVar16 = L"Expected an operator";
          goto LAB_149489fe9;
        }
        if (iVar13 == 9 && local_a30[0] == 8) {
          if ((longlong)(int)local_700 != 0) {
            puVar12 = local_708;
            if (local_708 == (undefined1 *)0x0) {
              puVar12 = local_a08;
            }
            if (*(int *)(puVar12 + (longlong)(int)local_700 * 0x18 + -0x10) == (int)local_570)
            goto LAB_1494894c9;
          }
          pwVar16 = L"Empty Parentheses";
          goto LAB_149489fe9;
        }
LAB_1494894c9:
        uVar11 = local_570;
        switch(iVar13) {
        case 2:
          if ((local_a24 == '\x01') &&
             (((&DAT_14bd1e096)[local_a28] != '\x01' || (local_a30[0] == 9))))
          goto switchD_1494894e4_caseD_3;
          uVar10 = CONCAT44(iStack_ab4,local_ab8);
          lVar18 = (longlong)(int)local_570;
          uVar7 = (int)local_570 + 1;
          local_570 = CONCAT44(local_570._4_4_,uVar7);
          if (local_570._4_4_ < uVar7) {
            FUN_1494e2864(local_6f8,uVar11 & 0xffffffff);
          }
          puVar12 = local_578;
          if (local_578 == (undefined1 *)0x0) {
            puVar12 = local_6f8;
          }
          *(undefined4 *)(puVar12 + lVar18 * 0xc) = 0;
          break;
        default:
switchD_1494894e4_caseD_3:
          FUN_14452c9d2(&local_a60);
          if ((int)local_a58 == 1) {
            iVar8 = 0;
            if ((int)local_570 != 0) {
              iVar3 = local_a48._4_4_;
              do {
                puVar12 = local_578;
                if (local_578 == (undefined1 *)0x0) {
                  puVar12 = local_6f8;
                }
                FUN_14452c9d2(&local_a60,
                              *(undefined4 *)(puVar12 + (longlong)((int)local_570 + -1) * 0xc));
                iVar8 = (int)local_570;
                if (local_a60._4_4_ < iVar3) goto LAB_149489f3f;
                puVar12 = local_578;
                if (local_578 == (undefined1 *)0x0) {
                  puVar12 = local_6f8;
                }
                local_b30 = *(undefined8 *)(puVar12 + (longlong)(int)local_570 * 0xc + -0xc);
                local_b28 = *(undefined4 *)(puVar12 + (longlong)(int)local_570 * 0xc + -4);
                local_570 = CONCAT44(local_570._4_4_,(int)local_570 + -1);
                FUN_14452cb56(local_a20);
              } while ((int)local_570 != 0);
              iVar8 = 0;
            }
LAB_149489f3f:
            uVar10 = CONCAT44(iStack_ab4,local_ab8);
            local_570 = CONCAT44(local_570._4_4_,iVar8 + 1U);
            if (local_570._4_4_ < iVar8 + 1U) {
              FUN_1494e2864(local_6f8);
            }
            puVar12 = local_578;
            if (local_578 == (undefined1 *)0x0) {
              puVar12 = local_6f8;
            }
          }
          else {
            FUN_14452c9d2(&local_a60,(ulonglong)puVar17 & 0xffffffff);
            if ((int)local_a58 != 2) goto LAB_14948932b;
            iVar8 = 0;
            if ((int)local_570 != 0) {
              iVar3 = local_a48._4_4_;
              do {
                puVar12 = local_578;
                if (local_578 == (undefined1 *)0x0) {
                  puVar12 = local_6f8;
                }
                FUN_14452c9d2(&local_a60,
                              *(undefined4 *)(puVar12 + (longlong)((int)local_570 + -1) * 0xc));
                iVar8 = (int)local_570;
                if (local_a60._4_4_ <= iVar3) goto LAB_149489f9f;
                puVar12 = local_578;
                if (local_578 == (undefined1 *)0x0) {
                  puVar12 = local_6f8;
                }
                local_b40 = *(undefined8 *)(puVar12 + (longlong)(int)local_570 * 0xc + -0xc);
                local_b38 = *(undefined4 *)(puVar12 + (longlong)(int)local_570 * 0xc + -4);
                local_570 = CONCAT44(local_570._4_4_,(int)local_570 + -1);
                FUN_14452cb56(local_a20,&local_b40);
              } while ((int)local_570 != 0);
              iVar8 = 0;
            }
LAB_149489f9f:
            uVar10 = CONCAT44(iStack_ab4,local_ab8);
            local_570 = CONCAT44(local_570._4_4_,iVar8 + 1U);
            if (local_570._4_4_ < iVar8 + 1U) {
              FUN_1494e2864(local_6f8,iVar8);
            }
            puVar12 = local_578;
            if (local_578 == (undefined1 *)0x0) {
              puVar12 = local_6f8;
            }
          }
          lVar18 = (longlong)iVar8;
          *(int *)(puVar12 + lVar18 * 0xc) = iVar13;
          break;
        case 8:
          uVar10 = CONCAT44(iStack_ab4,local_ab8);
          lVar18 = (longlong)(int)local_570;
          uVar7 = (int)local_570 + 1;
          local_570 = CONCAT44(local_570._4_4_,uVar7);
          if (local_570._4_4_ < uVar7) {
            FUN_1494e2864(local_6f8,uVar11 & 0xffffffff);
          }
          puVar12 = local_578;
          if (local_578 == (undefined1 *)0x0) {
            puVar12 = local_6f8;
          }
          *(undefined4 *)(puVar12 + lVar18 * 0xc) = 8;
          *(undefined8 *)(puVar12 + lVar18 * 0xc + 4) = uVar10;
          lVar18 = (longlong)(int)local_50;
          if (lVar18 != 0) {
            puVar12 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar12 = local_358;
            }
            if ((&DAT_14bd1e099)[(byte)puVar12[(longlong)((int)local_50 + -1) * 0xc + 8]] == '\x01')
            {
              local_b10 = *(undefined8 *)(puVar12 + (longlong)((int)local_50 + -1) * 0xc);
              iVar13 = FUN_1494bc9d4();
              if (iVar13 == -1) {
                puVar12 = local_568;
                if (local_368 != (undefined1 *)0x0) {
                  puVar12 = local_368;
                }
                uVar10 = *(undefined8 *)(puVar12 + (longlong)((int)local_360 + -1) * 8);
                FUN_1400021e4(&local_b10,&local_b08);
                param_2 = local_b70;
                param_4 = local_b78;
                puVar17 = local_b08;
                if (local_b00 == 0) {
                  puVar17 = &DAT_149dfb77a;
                }
                FUN_140002266(&local_a60,L"Unknown function \'%s\'",puVar17);
                *param_2 = local_a60;
                local_a60 = (undefined2 *)0x0;
                *(int *)(param_2 + 1) = (int)local_a58;
                *(undefined4 *)((longlong)param_2 + 0xc) = local_a58._4_4_;
                local_a58 = 0;
                param_2[2] = uVar10;
                *(undefined1 *)(param_2 + 0xe) = 1;
                goto joined_r0x000149489dae;
              }
              local_a58 = CONCAT71(local_a58._1_7_,puVar12[lVar18 * 0xc + -4]);
              (*(code *)(&PTR_LAB_14bd1e040)[(byte)puVar12[lVar18 * 0xc + -4]])();
              local_50 = CONCAT44(local_50._4_4_,(int)local_50 + -1);
              FUN_1494e2984(local_358);
              puVar12 = local_368;
              if (local_368 == (undefined1 *)0x0) {
                puVar12 = local_568;
              }
              local_b60 = *(undefined8 *)(puVar12 + (longlong)(int)local_360 * 8 + -8);
              local_360 = CONCAT44(local_360._4_4_,(int)local_360 + -1);
              FUN_1494e2a4a();
              uVar11 = local_700;
              uVar4 = (int)local_570;
              lVar18 = (longlong)(int)local_700;
              uVar7 = (int)local_700 + 1;
              local_700 = CONCAT44(local_700._4_4_,uVar7);
              iVar8 = (int)local_50;
              if (local_700._4_4_ < uVar7) {
                local_b64 = (int)local_50;
                FUN_144532a9e(local_a08,uVar11 & 0xffffffff);
                iVar8 = local_b64;
              }
              puVar12 = local_708;
              if (local_708 == (undefined1 *)0x0) {
                puVar12 = local_a08;
              }
              *(int *)(puVar12 + lVar18 * 0x18) = iVar13;
              *(undefined4 *)(puVar12 + lVar18 * 0x18 + 4) = 0;
              *(undefined4 *)(puVar12 + lVar18 * 0x18 + 8) = uVar4;
              *(int *)(puVar12 + lVar18 * 0x18 + 0xc) = iVar8;
              *(undefined8 *)(puVar12 + lVar18 * 0x18 + 0x10) = local_b60;
            }
          }
          goto LAB_14948932b;
        case 9:
          while( true ) {
            if ((int)local_570 == 0) {
              uVar10 = CONCAT44(iStack_ab4,local_ab8);
              pwVar16 = L"Mismatched parentheses";
              goto LAB_149489cec;
            }
            puVar12 = local_578;
            if (local_578 == (undefined1 *)0x0) {
              puVar12 = local_6f8;
            }
            iVar13 = (int)local_570 + -1;
            if (*(int *)(puVar12 + (longlong)iVar13 * 0xc) == 8) break;
            local_b18 = *(undefined4 *)(puVar12 + (longlong)(int)local_570 * 0xc + -4);
            local_b20 = *(undefined8 *)(puVar12 + (longlong)(int)local_570 * 0xc + -0xc);
            local_570 = CONCAT44(local_570._4_4_,iVar13);
            FUN_14452cb56(local_a20,&local_b20);
          }
          lVar18 = (longlong)(int)local_700;
          if (lVar18 == 0) {
LAB_149489f0d:
            local_570 = CONCAT44(local_570._4_4_,iVar13);
            goto LAB_14948932b;
          }
          puVar12 = local_708;
          if (local_708 == (undefined1 *)0x0) {
            puVar12 = local_a08;
          }
          if (*(int *)(puVar12 + lVar18 * 0x18 + -0x10) != (int)local_570) goto LAB_149489f0d;
          iVar13 = *(int *)(puVar12 + lVar18 * 0x18 + -0x18);
          local_b60 = CONCAT44(local_b60._4_4_,*(undefined4 *)(puVar12 + lVar18 * 0x18 + -0x14));
          local_b64 = *(int *)(puVar12 + lVar18 * 0x18 + -0xc);
          local_b54 = *(int *)(puVar12 + lVar18 * 0x18 + -8);
          iVar8 = *(int *)(puVar12 + lVar18 * 0x18 + -4);
          local_700 = CONCAT44(local_700._4_4_,(int)local_700 + -1);
          FUN_144532c98(local_a08);
          uVar11 = local_50;
          lVar18 = (longlong)(int)local_50;
          if ((uint)(local_b64 != (int)local_50) + (int)local_b60 ==
              *(int *)(DAT_14cc1cb90 + (longlong)iVar13 * 0x50)) {
            local_a60 = (undefined2 *)CONCAT44(local_a60._4_4_,iVar13);
            local_a58 = CONCAT71(local_a58._1_7_,2);
            uVar7 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar7);
            bVar6 = 2;
            if (local_50._4_4_ < uVar7) {
              FUN_1494e263e(local_358,uVar11 & 0xffffffff);
              bVar6 = (byte)local_a58;
            }
            puVar12 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar12 = local_358;
            }
            (puVar12 + lVar18 * 0xc)[8] = bVar6;
            (*(code *)(&PTR_LAB_14bd1e040)[bVar6])(puVar12 + lVar18 * 0xc,&local_a60);
            uVar11 = local_360;
            lVar18 = (longlong)(int)local_360;
            uVar7 = (int)local_360 + 1;
            local_360 = CONCAT44(local_360._4_4_,uVar7);
            if (local_360._4_4_ < uVar7) {
              FUN_1494e275e(local_568,uVar11 & 0xffffffff);
            }
            puVar12 = local_368;
            if (local_368 == (undefined1 *)0x0) {
              puVar12 = local_568;
            }
            *(ulonglong *)(puVar12 + lVar18 * 8) = CONCAT44(iStack_ab4,local_ab8);
            iVar13 = (int)local_570 + -1;
            goto LAB_149489f0d;
          }
          if (iVar8 < iStack_ab4) {
            iVar8 = iStack_ab4;
          }
          iVar13 = local_ab8;
          if (local_b54 < local_ab8) {
            iVar13 = local_b54;
          }
          ppuVar15 = (undefined2 **)&local_a60;
          FUN_140002266(ppuVar15,L"Invalid argument count. Expected %d, got %d");
          uVar10 = CONCAT44(iVar8,iVar13);
          goto LAB_149489cfc;
        case 10:
          lVar18 = (longlong)(int)local_700;
          if (lVar18 != 0) {
            puVar12 = local_708;
            if (local_708 == (undefined1 *)0x0) {
              puVar12 = local_a08;
            }
            if (*(int *)(puVar12 + lVar18 * 0x18 + -0x10) == (int)local_570) {
              *(int *)(puVar12 + lVar18 * 0x18 + -0x14) =
                   *(int *)(puVar12 + lVar18 * 0x18 + -0x14) + 1;
              goto LAB_14948932b;
            }
          }
          uVar10 = CONCAT44(iStack_ab4,local_ab8);
          pwVar16 = L"Unexpected comma";
LAB_149489cec:
          ppuVar15 = (undefined2 **)&local_a60;
          goto LAB_149489cf4;
        }
        *(undefined8 *)(puVar12 + lVar18 * 0xc + 4) = uVar10;
      }
LAB_14948932b:
      local_a28 = (byte)uStack_ac8;
      (*(code *)(&PTR_LAB_14bd1e0a0)[uStack_ac8 & 0xff])(local_a30,&local_ad0);
      lVar18 = local_ae0;
      local_a24 = '\x01';
      lVar9 = (longlong)local_ad8;
      if (lVar9 == 0) {
        local_ad8 = 0;
        iVar13 = 0;
      }
      else {
        iVar13 = 0;
        lVar19 = 0;
        do {
          iVar8 = iswspace(*(wint_t *)(lVar18 + lVar19));
          iVar13 = (uint)(iVar8 != 0) + iVar13;
          if (iVar8 == 0) break;
          bVar21 = lVar9 * 2 + -2 != lVar19;
          lVar19 = lVar19 + 2;
        } while (bVar21);
      }
      local_ad8 = local_ad8 - iVar13;
      local_ae0 = local_ae0 + (longlong)iVar13 * 2;
      (*(code *)(&PTR_FUN_14bd1c870)[local_ac0])(&local_ad0);
    } while (local_ad8 != 0);
    if ((int)local_570 != 0) {
      do {
        puVar12 = local_578;
        if (local_578 == (undefined1 *)0x0) {
          puVar12 = local_6f8;
        }
        FUN_14452c9d2(&local_ad0,*(undefined4 *)(puVar12 + (longlong)((int)local_570 + -1) * 0xc));
        if (local_ac0 == 0) {
          puVar12 = local_6f8;
          if (local_578 != (undefined1 *)0x0) {
            puVar12 = local_578;
          }
          uVar10 = *(undefined8 *)(puVar12 + (longlong)((int)local_570 + -1) * 0xc + 4);
          FUN_140056680(&local_ad0,L"Mismatched parentheses");
          *local_b70 = local_ad0;
          local_ad0 = (undefined2 *)0x0;
          *(int *)(local_b70 + 1) = (int)uStack_ac8;
          *(undefined4 *)((longlong)local_b70 + 0xc) = uStack_ac8._4_4_;
          local_b70[2] = uVar10;
          *(undefined1 *)(local_b70 + 0xe) = 1;
          param_2 = local_b70;
          param_4 = local_b78;
          goto LAB_149489968;
        }
        puVar12 = local_578;
        if (local_578 == (undefined1 *)0x0) {
          puVar12 = local_6f8;
        }
        local_b50 = *(undefined8 *)(puVar12 + (longlong)(int)local_570 * 0xc + -0xc);
        local_b48 = *(undefined4 *)(puVar12 + (longlong)(int)local_570 * 0xc + -4);
        local_570 = CONCAT44(local_570._4_4_,(int)local_570 + -1);
        FUN_14452cb56(local_a20,&local_b50);
      } while ((int)local_570 != 0);
    }
    uVar11 = local_50 & 0xffffffff;
    if ((*local_b78 != 0) && (0 < (int)local_50)) {
      plVar20 = local_b78 + 4;
      lVar18 = 0;
      lVar9 = 0;
      do {
        puVar12 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar12 = local_358;
        }
        puVar1 = (undefined8 *)(puVar12 + lVar18);
        if (puVar1 != (undefined8 *)0x0 && puVar12[lVar18 + 8] == '\x01') {
          local_ad0 = (undefined2 *)*puVar1;
          pcVar2 = (code *)*local_b78;
          plVar14 = (longlong *)local_b78[2];
          if ((longlong *)local_b78[2] == (longlong *)0x0) {
            plVar14 = plVar20;
          }
          uVar10 = (**(code **)(*plVar14 + 8))();
          (*pcVar2)(&local_a48,uVar10,&local_ad0);
          if (local_a48._4_1_ != '\x01') {
            puVar12 = local_568;
            if (local_368 != (undefined1 *)0x0) {
              puVar12 = local_368;
            }
            uVar10 = *(undefined8 *)(puVar12 + lVar9 * 8);
            FUN_1400021e4(puVar1,&local_a60);
            puVar17 = &DAT_149dfb77a;
            if ((int)local_a58 != 0) {
              puVar17 = local_a60;
            }
            FUN_140002266(&local_a48,L"Unknown identifier \'%s\'",puVar17);
            param_2 = local_b70;
            param_4 = local_b78;
            puVar17 = &DAT_149dfb77a;
            if (local_a40 != 0) {
              puVar17 = local_a48;
            }
            FUN_140056680(&local_ad0,puVar17);
            *param_2 = local_ad0;
            local_ad0 = (undefined2 *)0x0;
            *(int *)(param_2 + 1) = (int)uStack_ac8;
            *(undefined4 *)((longlong)param_2 + 0xc) = uStack_ac8._4_4_;
            uStack_ac8 = 0;
            param_2[2] = uVar10;
            *(undefined1 *)(param_2 + 0xe) = 1;
            if (local_a48 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_a60 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_149489968;
          }
          uVar11 = local_50 & 0xffffffff;
        }
        lVar9 = lVar9 + 1;
        lVar18 = lVar18 + 0xc;
      } while (lVar9 < (int)uVar11);
    }
    local_a70 = (undefined2 **)0x0;
    local_a68 = 0x800000000;
    puVar12 = local_358;
    if (local_58 != (undefined1 *)0x0) {
      puVar12 = local_58;
    }
    FUN_1494e250e(&local_ad0,puVar12,uVar11,8);
    param_2 = local_b70;
    local_b70[0xc] = 0;
    ppuVar15 = local_a70;
    if (local_a70 == (undefined2 **)0x0) {
      ppuVar15 = &local_ad0;
    }
    FUN_1494e250e(local_b70,ppuVar15,local_a68 & 0xffffffff,0);
    *(undefined1 *)(param_2 + 0xe) = 0;
    param_4 = local_b78;
    if (local_a70 != (undefined2 **)0x0) {
      FUN_1400020a8();
      param_4 = local_b78;
    }
LAB_149489968:
    if (local_708 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_578 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_368 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*param_4 != 0) {
    plVar20 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar20 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar20 + 0x10))(plVar20);
  }
  if ((local_48 ^ (ulonglong)auStack_b98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948a246 FUN_14948a246 body=1563 status=ok
// SIG undefined FUN_14948a246(void)

void FUN_14948a246(undefined8 param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined1 *local_140;
  int local_138;
  undefined8 local_130;
  undefined4 local_128;
  char local_124;
  undefined1 local_120 [128];
  undefined1 *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((longlong)param_2[0x1a] != 0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = 0x2000000000;
    piVar13 = *(int **)(param_2 + 0x18);
    if (*(int **)(param_2 + 0x18) == (int *)0x0) {
      piVar13 = param_2;
    }
    piVar10 = piVar13 + (longlong)param_2[0x1a] * 3;
    local_148 = param_3;
    do {
      uVar4 = local_98;
      lVar12 = DAT_14cc1cb90;
      cVar2 = (char)piVar13[2];
      iVar11 = (int)local_98;
      if (piVar13 != (int *)0x0 && cVar2 == '\x03') {
        lVar12 = (longlong)(int)local_98;
        uVar6 = (int)local_98 + 1;
        local_98 = CONCAT44(local_98._4_4_,uVar6);
        if (local_98._4_4_ < uVar6) {
          FUN_140fb08bc(local_120,uVar4 & 0xffffffff);
        }
        puVar8 = local_a0;
        if (local_a0 == (undefined1 *)0x0) {
          puVar8 = local_120;
        }
        *(int *)(puVar8 + lVar12 * 4) = *piVar13;
        goto switchD_14948a4d9_default;
      }
      if (cVar2 == '\x01' && piVar13 != (int *)0x0) {
        local_130 = *(undefined8 *)piVar13;
        (*(code *)*param_3)(&local_128,param_3[1],&local_130);
        uVar4 = local_98;
        uVar15 = local_128;
        if (local_124 == '\0') {
          uVar15 = 0;
        }
        lVar12 = (longlong)(int)local_98;
        uVar6 = (int)local_98 + 1;
        local_98 = CONCAT44(local_98._4_4_,uVar6);
        if (local_98._4_4_ < uVar6) {
          FUN_140fb08bc(local_120,uVar4 & 0xffffffff);
        }
        puVar8 = local_a0;
        if (local_a0 == (undefined1 *)0x0) {
          puVar8 = local_120;
        }
        *(undefined4 *)(puVar8 + lVar12 * 4) = uVar15;
        goto switchD_14948a4d9_default;
      }
      if (cVar2 == '\0' && piVar13 != (int *)0x0) {
        puVar8 = local_a0;
        switch(*piVar13) {
        case 0:
          puVar8 = local_a0;
          if (local_a0 == (undefined1 *)0x0) {
            puVar8 = local_120;
          }
          lVar12 = (longlong)((int)local_98 + -1);
          uVar6 = *(uint *)(puVar8 + lVar12 * 4) ^ 0x80000000;
          goto LAB_14948a67a;
        case 1:
          if (local_a0 == (undefined1 *)0x0) {
            puVar8 = local_120;
          }
          lVar14 = (longlong)(int)local_98;
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 + -1);
          lVar12 = (longlong)(iVar11 + -2);
          fVar17 = *(float *)(puVar8 + lVar14 * 4 + -4) + *(float *)(puVar8 + lVar12 * 4);
          goto LAB_14948a6b6;
        case 2:
          if (local_a0 == (undefined1 *)0x0) {
            puVar8 = local_120;
          }
          lVar14 = (longlong)(int)local_98;
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 + -1);
          lVar12 = (longlong)(iVar11 + -2);
          fVar17 = *(float *)(puVar8 + lVar12 * 4) - *(float *)(puVar8 + lVar14 * 4 + -4);
LAB_14948a5c9:
          *(float *)(puVar8 + lVar12 * 4) = fVar17;
          break;
        case 3:
          if (local_a0 == (undefined1 *)0x0) {
            puVar8 = local_120;
          }
          lVar14 = (longlong)(int)local_98;
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 + -1);
          lVar12 = (longlong)(iVar11 + -2);
          fVar17 = *(float *)(puVar8 + lVar14 * 4 + -4) * *(float *)(puVar8 + lVar12 * 4);
          goto LAB_14948a6b6;
        case 4:
          if (local_a0 == (undefined1 *)0x0) {
            puVar8 = local_120;
          }
          lVar14 = (longlong)(int)local_98;
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 + -1);
          lVar12 = (longlong)(iVar11 + -2);
          if (1e-08 < ABS(*(float *)(puVar8 + lVar14 * 4 + -4))) {
            fVar17 = *(float *)(puVar8 + lVar12 * 4) / *(float *)(puVar8 + lVar14 * 4 + -4);
            goto LAB_14948a5c9;
          }
LAB_14948a721:
          *(undefined4 *)(puVar8 + lVar12 * 4) = 0;
          break;
        case 5:
          if (local_a0 == (undefined1 *)0x0) {
            puVar8 = local_120;
          }
          lVar14 = (longlong)(int)local_98;
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 + -1);
          lVar12 = (longlong)(iVar11 + -2);
          if (ABS(*(float *)(puVar8 + lVar14 * 4 + -4)) <= 1e-08) goto LAB_14948a721;
          fVar17 = (float)FUN_1447c7e44();
          puVar8 = local_a0;
          if (local_a0 == (undefined1 *)0x0) {
            puVar8 = local_120;
          }
          lVar12 = (longlong)((int)local_98 + -1);
LAB_14948a6b6:
          *(float *)(puVar8 + lVar12 * 4) = fVar17;
          break;
        case 6:
          puVar8 = local_a0;
          if (local_a0 == (undefined1 *)0x0) {
            puVar8 = local_120;
          }
          lVar12 = (longlong)(int)local_98;
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 + -1);
          fVar17 = powf(*(float *)(puVar8 + (longlong)(iVar11 + -2) * 4),
                        *(float *)(puVar8 + lVar12 * 4 + -4));
          puVar8 = local_a0;
          if (local_a0 == (undefined1 *)0x0) {
            puVar8 = local_120;
          }
          *(float *)(puVar8 + (longlong)((int)local_98 + -1) * 4) = fVar17;
          puVar8 = local_a0;
          if (local_a0 == (undefined1 *)0x0) {
            puVar8 = local_120;
          }
          iVar11 = _finite((double)*(float *)(puVar8 + (longlong)((int)local_98 + -1) * 4));
          if (iVar11 == 0) {
            puVar8 = local_a0;
            if (local_a0 == (undefined1 *)0x0) {
              puVar8 = local_120;
            }
            lVar12 = (longlong)((int)local_98 + -1);
            goto LAB_14948a721;
          }
          break;
        case 7:
          puVar8 = local_a0;
          if (local_a0 == (undefined1 *)0x0) {
            puVar8 = local_120;
          }
          lVar12 = (longlong)(int)local_98;
          local_98 = CONCAT44(local_98._4_4_,(int)local_98 + -1);
          fVar17 = 0.0;
          if (1e-08 < ABS(*(float *)(puVar8 + lVar12 * 4 + -4))) {
            fVar17 = *(float *)(puVar8 + (longlong)(iVar11 + -2) * 4) /
                     *(float *)(puVar8 + lVar12 * 4 + -4);
          }
          *(float *)(puVar8 + (longlong)(iVar11 + -2) * 4) = fVar17;
          puVar8 = local_a0;
          if (local_a0 == (undefined1 *)0x0) {
            puVar8 = local_120;
          }
          lVar12 = (longlong)((int)local_98 + -1);
          auVar16 = roundps(ZEXT416(*(uint *)(puVar8 + lVar12 * 4)),
                            ZEXT416(*(uint *)(puVar8 + lVar12 * 4)),1);
          uVar6 = auVar16._0_4_;
LAB_14948a67a:
          *(uint *)(puVar8 + lVar12 * 4) = uVar6;
        }
      }
      else if (cVar2 == '\x02' && piVar13 != (int *)0x0) {
        iVar11 = *piVar13;
        if ((-1 < (longlong)iVar11) && (iVar11 < DAT_14cc1cb98)) {
          lVar14 = (longlong)iVar11 * 0x50;
          piVar1 = (int *)(DAT_14cc1cb90 + lVar14);
          local_138 = *piVar1;
          local_140 = local_a0;
          if (local_a0 == (undefined1 *)0x0) {
            local_140 = local_120;
          }
          local_140 = local_140 + (longlong)local_138 * -4 + (longlong)(int)local_98 * 4;
          pcVar3 = *(code **)(piVar1 + 4);
          plVar9 = *(longlong **)(piVar1 + 8);
          if (*(longlong **)(piVar1 + 8) == (longlong *)0x0) {
            plVar9 = (longlong *)(piVar1 + 0xc);
          }
          uVar7 = (**(code **)(*plVar9 + 8))();
          uVar15 = (*pcVar3)(uVar7,&local_140);
          iVar11 = (int)local_98;
          if (0 < *piVar1) {
            iVar5 = 0;
            do {
              iVar11 = iVar11 + -1;
              local_98 = local_98 & 0xffffffff00000000;
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(lVar12 + lVar14));
          }
          local_98 = CONCAT44(local_98._4_4_,iVar11 + 1U);
          if (local_98._4_4_ < iVar11 + 1U) {
            FUN_140fb08bc(local_120,iVar11);
          }
          puVar8 = local_a0;
          if (local_a0 == (undefined1 *)0x0) {
            puVar8 = local_120;
          }
          *(undefined4 *)(puVar8 + (longlong)iVar11 * 4) = uVar15;
          param_3 = local_148;
          goto switchD_14948a4d9_default;
        }
        break;
      }
switchD_14948a4d9_default:
      piVar13 = piVar13 + 3;
    } while (piVar13 != piVar10);
    if (local_a0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948a862 FUN_14948a862 body=272 status=ok
// SIG undefined FUN_14948a862(void)

undefined8 FUN_14948a862(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *_Src;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  cVar3 = FUN_1494884e2(0,local_44);
  if ((cVar3 == '\0') &&
     (bVar6 = (longlong)uStack_50 < 0, uStack_50 = uStack_50 & 0xffffffff00000000, bVar6)) {
    FUN_14481578e(&local_58,0);
  }
  uVar4 = FUN_14001cc68(0x40,0x10);
  _Src = local_58;
  local_78 = *(undefined1 *)(param_1 + 0x80);
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  local_68 = (void *)0x0;
  lVar5 = (longlong)(int)uStack_50;
  local_60 = (int)uStack_50;
  if (lVar5 == 0) {
    local_5c = 0;
  }
  else {
    FUN_144a06ca8(&local_68,uStack_50 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar5 << 2);
  }
  FUN_14948a974(uVar4,&local_68,uVar1,uVar2);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948a974 FUN_14948a974 body=213 status=ok
// SIG undefined FUN_14948a974(void)

undefined8 *
FUN_14948a974(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_14bd02040;
  param_1[1] = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = param_3;
    *(undefined4 *)(param_1 + 4) = param_4;
    *(undefined1 *)((longlong)param_1 + 0x24) = param_5;
  }
  else {
    iVar3 = 0;
    FUN_144a06ca8(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 2);
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = param_3;
    *(undefined4 *)(param_1 + 4) = param_4;
    *(undefined1 *)((longlong)param_1 + 0x24) = param_5;
    if ((longlong)*(int *)(param_1 + 2) != 0) {
      lVar2 = 0;
      do {
        iVar3 = iVar3 + *(int *)(param_1[1] + lVar2);
        *(int *)(param_1 + 3) = iVar3;
        lVar2 = lVar2 + 4;
      } while ((longlong)*(int *)(param_1 + 2) * 4 != lVar2);
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14948aa4a FUN_14948aa4a body=352 status=ok
// SIG undefined FUN_14948aa4a(void)

undefined8 FUN_14948aa4a(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *_Src;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong local_70;
  void *local_68;
  ulonglong uStack_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  cVar4 = FUN_1494884e2(0,&local_4c);
  if ((cVar4 == '\0') &&
     (bVar7 = (longlong)uStack_60 < 0, uStack_60 = uStack_60 & 0xffffffff00000000, bVar7)) {
    FUN_14481578e(&local_68,0);
  }
  uVar5 = FUN_14001cc68(0x60,0x10);
  _Src = local_68;
  local_98 = *(undefined8 *)(param_1 + 0x8c);
  local_78 = *(undefined8 *)(param_1 + 0x98);
  local_70 = *(longlong *)(param_1 + 0xa0);
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  uVar1 = *(undefined1 *)(param_1 + 0x88);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  local_88 = (void *)0x0;
  lVar6 = (longlong)(int)uStack_60;
  local_80 = (int)uStack_60;
  if (lVar6 == 0) {
    local_7c = 0;
  }
  else {
    FUN_144a06ca8(&local_88,uStack_60 & 0xffffffff,0);
    memcpy(local_88,_Src,lVar6 << 2);
  }
  local_90 = local_4c;
  local_a0 = &local_78;
  local_a8 = uVar1;
  FUN_14948abac(uVar5,&local_88,uVar2,uVar3);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948abac FUN_14948abac body=310 status=ok
// SIG undefined FUN_14948abac(void)

undefined8 *
FUN_14948abac(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5,undefined8 *param_6,undefined8 param_7,undefined4 param_8)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14bd020b0;
  param_1[1] = 0;
  iVar4 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 1,iVar4,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar4 << 2);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x24) = param_5;
  param_1[5] = *param_6;
  lVar5 = param_6[1];
  param_1[6] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  param_1[7] = param_7;
  *(undefined4 *)(param_1 + 8) = param_8;
  if ((longlong)*(int *)(param_1 + 2) != 0) {
    iVar4 = *(int *)(param_1 + 3);
    lVar5 = 0;
    do {
      iVar4 = iVar4 + *(int *)(param_1[1] + lVar5);
      *(int *)(param_1 + 3) = iVar4;
      lVar5 = lVar5 + 4;
    } while ((longlong)*(int *)(param_1 + 2) * 4 != lVar5);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_6[1];
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



// FUNCTION 14948ace2 FUN_14948ace2 body=345 status=ok
// SIG undefined FUN_14948ace2(void)

undefined8 FUN_14948ace2(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *_Src;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong local_70;
  void *local_68;
  ulonglong uStack_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_4c = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  cVar3 = FUN_1494884e2();
  if ((cVar3 == '\0') &&
     (bVar6 = (longlong)uStack_60 < 0, uStack_60 = uStack_60 & 0xffffffff00000000, bVar6)) {
    FUN_14481578e(&local_68,0);
  }
  uVar4 = FUN_14001cc68(0x60,0x10);
  local_98 = local_4c;
  _Src = local_68;
  local_a0 = *(undefined8 *)(param_1 + 0x88);
  local_78 = *(undefined8 *)(param_1 + 0x90);
  local_70 = *(longlong *)(param_1 + 0x98);
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  local_88 = (void *)0x0;
  lVar5 = (longlong)(int)uStack_60;
  local_80 = (int)uStack_60;
  if (lVar5 == 0) {
    local_7c = 0;
  }
  else {
    FUN_144a06ca8(&local_88,uStack_60 & 0xffffffff,0);
    memcpy(local_88,_Src,lVar5 << 2);
  }
  local_a8 = &local_78;
  FUN_14948ae3c(uVar4,&local_88,uVar1,uVar2);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948ae3c FUN_14948ae3c body=300 status=ok
// SIG undefined FUN_14948ae3c(void)

undefined8 *
FUN_14948ae3c(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 param_6,undefined4 param_7)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14bd02100;
  param_1[1] = 0;
  iVar4 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 1,iVar4,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar4 << 2);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  param_1[5] = *param_5;
  lVar5 = param_5[1];
  param_1[6] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  param_1[7] = param_6;
  *(undefined4 *)(param_1 + 8) = param_7;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((longlong)*(int *)(param_1 + 2) != 0) {
    iVar4 = *(int *)(param_1 + 3);
    lVar5 = 0;
    do {
      iVar4 = iVar4 + *(int *)(param_1[1] + lVar5);
      *(int *)(param_1 + 3) = iVar4;
      lVar5 = lVar5 + 4;
    } while ((longlong)*(int *)(param_1 + 2) * 4 != lVar5);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_5[1];
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



// FUNCTION 14948af7a FUN_14948af7a body=392 status=ok
// SIG undefined FUN_14948af7a(void)

void FUN_14948af7a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_98 [32];
  wchar_t **local_78;
  uint local_68;
  int local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_50;
  wchar_t *local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *(uint *)(param_1 + 0x1c);
  uVar5 = *(uint *)(param_1 + 0x20);
  if (uVar5 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = (int)local_68 / (int)uVar5;
    local_68 = uVar5;
  }
  uVar5 = iVar4 * *(int *)(param_1 + 0x18);
  local_78 = (wchar_t **)&local_39;
  local_39 = 0;
  local_48 = L"TransientBuffer";
  if (DAT_14ca84e48 <= local_68) {
    local_68 = DAT_14ca84e48;
  }
  local_68 = local_68 + (local_68 == 0);
  uStack_60 = 0x10109;
  if (DAT_14ca84e48 <= uVar5) {
    uVar5 = DAT_14ca84e48;
  }
  local_58 = 0;
  local_64 = uVar5 + (uVar5 == 0);
  lVar1 = param_2 + 0x70;
  local_50 = FUN_144738de6(param_2 + 0x188,lVar1,&local_48,&local_68);
  *(longlong *)(param_1 + 0x28) = local_50;
  uVar5 = local_68 >> 8;
  local_68 = local_68 & 0xffffff00;
  local_64 = 0;
  uStack_60 = 0xffffffff;
  local_58 = 0;
  if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
    local_68 = CONCAT31((int3)uVar5,0x1c);
  }
  uVar3 = FUN_14475683e(param_2 + 0x198,lVar1,local_50 + 8,&local_68);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_68 = local_68 & 0xff000000;
  uStack_60 = (undefined4)lVar2;
  uStack_5c = (undefined4)((ulonglong)lVar2 >> 0x20);
  if ((*(byte *)(lVar2 + 0x68) & 0x80) != 0) {
    local_68 = CONCAT31(local_68._1_3_,0x1c);
  }
  local_48 = (wchar_t *)CONCAT71(local_48._1_7_,1);
  local_78 = &local_48;
  uVar3 = FUN_144a23c98(param_2 + 0x198,lVar1,lVar2 + 8,&local_68);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  if (*(char *)(param_1 + 0x24) == '\x01') {
    FUN_1405bfba3(param_2,uVar3,0,2);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948b104 FUN_14948b104 body=120 status=ok
// SIG undefined FUN_14948b104(void)

void FUN_14948b104(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  
  iVar1 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar1) {
    iVar2 = *(int *)(param_2 + 0x14);
    puVar7 = (undefined8 *)
             (*(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_2 + 0x10) + 0x10);
    lVar5 = 0;
    iVar6 = 0;
    do {
      iVar3 = iVar6;
      if (*(char *)(param_2 + 8) != '\0') {
        iVar3 = 0;
      }
      *(int *)(puVar7 + -2) = iVar3;
      puVar4 = (undefined4 *)(param_1 + 0x18);
      if (*(char *)(param_2 + 8) == '\0') {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 8) + lVar5);
      }
      *(undefined4 *)((longlong)puVar7 + -0xc) = *puVar4;
      puVar7[-1] = *(undefined8 *)(param_1 + 0x30);
      *puVar7 = *(undefined8 *)(param_1 + 0x38);
      iVar6 = iVar6 + *(int *)(*(longlong *)(param_1 + 8) + lVar5);
      lVar5 = lVar5 + 4;
      puVar7 = (undefined8 *)((longlong)puVar7 + (longlong)iVar2);
    } while ((longlong)iVar1 * 4 != lVar5);
  }
  return;
}



// FUNCTION 14948b196 FUN_14948b196 body=435 status=ok
// SIG undefined FUN_14948b196(void)

void FUN_14948b196(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined4 **local_b8;
  longlong **local_b0;
  char *local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  longlong local_88;
  char local_79;
  longlong *local_78;
  undefined8 uStack_70;
  undefined4 *local_68;
  undefined8 uStack_60;
  undefined1 local_51;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_1446f48e2(&local_68,0);
  *local_68 = *(undefined4 *)(param_1 + 0x18);
  local_b0 = &local_78;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_a8 = &local_79;
  local_79 = '\0';
  local_c0 = *(undefined4 *)(param_1 + 0x20);
  local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1c));
  local_b8 = &local_68;
  FUN_14948b34a(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x38),
                *(undefined4 *)(param_1 + 0x40));
  local_88 = *local_78;
  *(longlong *)(param_1 + 0x48) = local_88;
  local_a0._0_1_ = 0;
  local_9c = 0;
  uStack_98 = 0xffffffff;
  local_90 = 0;
  if ((*(byte *)(local_88 + 0x68) & 0x80) != 0) {
    local_a0._0_1_ = 0x1c;
  }
  uVar2 = FUN_14475683e(param_2 + 0x198,param_2 + 0x70,local_88 + 8,&local_a0);
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  lVar1 = *(longlong *)(param_1 + 0x48);
  local_a0 = 0;
  local_9e = 0;
  uStack_98 = (undefined4)lVar1;
  uStack_94 = (undefined4)((ulonglong)lVar1 >> 0x20);
  if ((*(byte *)(lVar1 + 0x68) & 0x80) != 0) {
    local_a0 = 0x1c;
  }
  local_c8 = &local_51;
  local_51 = 1;
  uVar2 = FUN_144a23c98(param_2 + 0x198,param_2 + 0x70,lVar1 + 8,&local_a0);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  if ((*(char *)(param_1 + 0x24) == '\x01') && (local_79 == '\x01')) {
    FUN_1405bfba3(param_2,uVar2,0,2);
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948b34a FUN_14948b34a body=449 status=ok
// SIG undefined FUN_14948b34a(void)

void FUN_14948b34a(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,longlong *param_8,
                  undefined1 *param_9)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  ulonglong uStack_80;
  uint local_6c;
  undefined8 local_68;
  uint *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_8 + 1) = 0;
  local_6c = param_4;
  local_68 = param_3;
  if (*(int *)((longlong)param_8 + 0xc) < 0) {
    FUN_149484272(param_8,0);
  }
  *param_9 = 0;
  uVar2 = (uint)((ulonglong)param_3 >> 0x10);
  uVar6 = (uint)param_3 & 0xffff;
  plVar3 = (longlong *)
           FUN_1494e04bc(param_1 + 0x50,
                         ((uint)param_3 << 0x10 | uVar6) + (int)((ulonglong)param_3 >> 0x20) +
                         (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4),&local_68);
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar4 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar3[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar3[9] - 1U & param_4) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *plVar3 + (longlong)iVar5 * 0x20;
        if (*(uint *)(*plVar3 + (longlong)iVar5 * 0x20) == param_4) {
          if (lVar1 != -8 && lVar1 != 0) {
            local_98 = param_8;
            FUN_1494b9f20(param_2,param_5,param_7);
            goto LAB_14948b496;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x18);
      } while (iVar5 != -1);
    }
  }
  local_88 = 0;
  uStack_80 = 0;
  local_90 = param_8;
  local_98 = &local_88;
  FUN_1494b9d40(param_2,param_5,param_6,param_7);
  local_60 = &local_6c;
  local_58 = &local_88;
  FUN_1494e0ef6(plVar3,local_4c);
  *param_9 = 1;
  FUN_1494e0ec0(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_14948b496:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14948b50c FUN_14948b50c body=120 status=ok
// SIG undefined FUN_14948b50c(void)

void FUN_14948b50c(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  
  iVar1 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar1) {
    iVar2 = *(int *)(param_2 + 0x14);
    puVar7 = (undefined8 *)
             (*(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_2 + 0x10) + 0x10);
    lVar5 = 0;
    iVar6 = 0;
    do {
      iVar3 = iVar6;
      if (*(char *)(param_2 + 8) != '\0') {
        iVar3 = 0;
      }
      *(int *)(puVar7 + -2) = iVar3;
      puVar4 = (undefined4 *)(param_1 + 0x18);
      if (*(char *)(param_2 + 8) == '\0') {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 8) + lVar5);
      }
      *(undefined4 *)((longlong)puVar7 + -0xc) = *puVar4;
      puVar7[-1] = *(undefined8 *)(param_1 + 0x50);
      *puVar7 = *(undefined8 *)(param_1 + 0x58);
      iVar6 = iVar6 + *(int *)(*(longlong *)(param_1 + 8) + lVar5);
      lVar5 = lVar5 + 4;
      puVar7 = (undefined8 *)((longlong)puVar7 + (longlong)iVar2);
    } while ((longlong)iVar1 * 4 != lVar5);
  }
  return;
}



// FUNCTION 14948b596 FUN_14948b596 body=437 status=ok
// SIG undefined FUN_14948b596(void)

void FUN_14948b596(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined4 **local_b8;
  undefined8 **local_b0;
  undefined1 *local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  longlong local_98;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined4 *local_78;
  undefined8 uStack_70;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = (undefined4 *)0x0;
  uStack_70 = 1;
  FUN_1446f48e2(&local_78,0);
  *local_78 = *(undefined4 *)(param_1 + 0x18);
  local_b0 = &local_88;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_c0 = *(undefined4 *)(param_1 + 0x20);
  local_a8 = &local_89;
  local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1c));
  local_b8 = &local_78;
  FUN_14948b74e(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x38),
                *(undefined4 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x48) = *local_88;
  iVar4 = *param_3;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x5c) < iVar4) {
    FUN_1494d36d2(plVar1);
    iVar4 = *param_3;
  }
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      local_98 = *(longlong *)(param_1 + 0x48);
      local_a0 = 0;
      local_9e = 0;
      if ((*(byte *)(local_98 + 0x68) & 0x80) != 0) {
        local_a0 = 0x1c;
      }
      local_61 = 1;
      local_c8 = &local_61;
      uVar3 = FUN_144a23c98(param_2 + 0x198,param_2 + 0x70,local_98 + 8,&local_a0);
      iVar2 = *(int *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
        FUN_1481cbcf4(plVar1,iVar2);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *param_3);
  }
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14948b74e FUN_14948b74e body=445 status=ok
// SIG undefined FUN_14948b74e(void)

void FUN_14948b74e(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,longlong *param_8,
                  undefined1 *param_9)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  ulonglong uStack_80;
  uint local_6c;
  undefined8 local_68;
  uint *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_8 + 1) = 0;
  local_6c = param_4;
  local_68 = param_3;
  if (*(int *)((longlong)param_8 + 0xc) < 0) {
    FUN_149484272(param_8,0);
  }
  *param_9 = 0;
  uVar2 = (uint)((ulonglong)param_3 >> 0x10);
  uVar6 = (uint)param_3 & 0xffff;
  plVar3 = (longlong *)
           FUN_1494e04bc(param_1,((uint)param_3 << 0x10 | uVar6) + (int)((ulonglong)param_3 >> 0x20)
                                 + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4),&local_68);
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar4 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar3[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar3[9] - 1U & param_4) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *plVar3 + (longlong)iVar5 * 0x20;
        if (*(uint *)(*plVar3 + (longlong)iVar5 * 0x20) == param_4) {
          if (lVar1 != -8 && lVar1 != 0) {
            local_98 = param_8;
            FUN_1494b9f20(param_2,param_5,param_7);
            goto LAB_14948b896;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x18);
      } while (iVar5 != -1);
    }
  }
  local_88 = 0;
  uStack_80 = 0;
  local_90 = param_8;
  local_98 = &local_88;
  FUN_1494b9d40(param_2,param_5,param_6,param_7);
  local_60 = &local_6c;
  local_58 = &local_88;
  FUN_1494e0ef6(plVar3,local_4c);
  *param_9 = 1;
  FUN_1494e0ec0(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_14948b896:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14948b90c FUN_14948b90c body=123 status=ok
// SIG undefined FUN_14948b90c(void)

void FUN_14948b90c(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  
  iVar1 = param_2[1];
  if (0 < (longlong)iVar1) {
    iVar2 = param_2[5];
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 6) + (longlong)param_2[4] + 8);
    lVar5 = 0;
    iVar6 = 0;
    do {
      iVar3 = iVar6;
      if ((char)param_2[2] != '\0') {
        iVar3 = 0;
      }
      *(int *)(puVar7 + -1) = iVar3;
      puVar4 = (undefined4 *)(param_1 + 0x18);
      if ((char)param_2[2] == '\0') {
        puVar4 = (undefined4 *)(*(longlong *)(param_1 + 8) + lVar5);
      }
      *(undefined4 *)((longlong)puVar7 + -4) = *puVar4;
      *puVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)*param_2 * 8);
      iVar6 = iVar6 + *(int *)(*(longlong *)(param_1 + 8) + lVar5);
      lVar5 = lVar5 + 4;
      puVar7 = (undefined8 *)((longlong)puVar7 + (longlong)iVar2);
    } while ((longlong)iVar1 * 4 != lVar5);
  }
  return;
}



// FUNCTION 14948b990 FUN_14948b990 body=32 status=ok
// SIG undefined FUN_14948b990(void)

undefined8 FUN_14948b990(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Scene Data");
  return param_2;
}



// FUNCTION 14948b9b0 FUN_14948b9b0 body=694 status=ok
// SIG undefined FUN_14948b9b0(void)

longlong * FUN_14948b9b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_58,"GameTime",1);
  FUN_1400b22c2(local_68,"ReadGameTime");
  FUN_14946b838(&local_50,local_58,local_68,1);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = local_50;
  puVar2[1] = 0;
  puVar2[1] = local_48;
  local_48 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_40;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_40._4_4_;
  local_40 = 0;
  puVar2[3] = 0;
  puVar2[3] = local_38;
  local_38 = 0;
  *(undefined4 *)(puVar2 + 4) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_30._4_4_;
  local_30 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = local_24;
  *(undefined4 *)(puVar2 + 5) = local_28;
  FUN_14946649a(&local_50);
  FUN_1446ddc76(&local_70,"GameTimeDelta",1);
  FUN_1400b22c2(local_80,"ReadGameTimeDelta");
  FUN_14946b838(&local_50,local_70,local_80,1);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar4) = local_50;
  *(undefined8 *)(lVar3 + 8 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_48;
  local_48 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar4) = (undefined4)local_40;
  *(undefined4 *)(lVar3 + 0x14 + lVar4) = local_40._4_4_;
  local_40 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar4) = local_38;
  local_38 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar4) = (undefined4)local_30;
  *(undefined4 *)(lVar3 + 0x24 + lVar4) = local_30._4_4_;
  local_30 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar4) = local_24;
  *(undefined4 *)(lVar3 + 0x28 + lVar4) = local_28;
  FUN_14946649a();
  FUN_1446ddc76(&local_88,"FrameNumber",1);
  FUN_1400b22c2(local_98,"ReadFrameNumber");
  FUN_14946b838(&local_50,local_88,local_98,1);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar4) = local_50;
  *(undefined8 *)(lVar3 + 8 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar4) = local_48;
  local_48 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar4) = (undefined4)local_40;
  *(undefined4 *)(lVar3 + 0x14 + lVar4) = local_40._4_4_;
  local_40 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar4) = local_38;
  local_38 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar4) = (undefined4)local_30;
  *(undefined4 *)(lVar3 + 0x24 + lVar4) = local_30._4_4_;
  local_30 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar4) = local_24;
  *(undefined4 *)(lVar3 + 0x28 + lVar4) = local_28;
  FUN_14946649a();
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948bc68 FUN_14948bc68 body=49 status=ok
// SIG undefined FUN_14948bc68(void)

longlong * FUN_14948bc68(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a799b0();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14948bc9a FUN_14948bc9a body=229 status=ok
// SIG undefined FUN_14948bc9a(void)

void FUN_14948bc9a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_30,L"ReadGameTime");
  uVar1 = FUN_149459122(uVar1,local_30);
  FUN_1494593ba(uVar1,3,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_40,L"ReadGameTimeDelta");
  uVar1 = FUN_149459122(uVar1,local_40);
  FUN_1494593ba(uVar1,3,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_50,L"ReadFrameNumber");
  uVar1 = FUN_149459122(uVar1,local_50);
  FUN_1494593ba(uVar1,2,0,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948bd88 FUN_14948bd88 body=151 status=ok
// SIG undefined FUN_14948bd88(void)

void FUN_14948bd88(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1494d3732();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1d3a8;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
  return;
}



// FUNCTION 14948be28 FUN_14948be28 body=43 status=ok
// SIG undefined FUN_14948be28(void)

void FUN_14948be28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceScene.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 14948be54 FUN_14948be54 body=438 status=ok
// SIG undefined FUN_14948be54(void)

void FUN_14948be54(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceScene.ush",0,&local_d8,0);
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14948c00c FUN_14948c00c body=122 status=ok
// SIG undefined FUN_14948c00c(void)

longlong FUN_14948c00c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_14948c086();
  if (*param_2 != 0) {
    lVar4 = FUN_144a799b0();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14948c06e;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar5 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_14948c06e;
      }
    }
  }
  lVar5 = 0;
LAB_14948c06e:
  *(longlong *)(lVar3 + 0x28) = lVar5;
  return lVar3;
}



// FUNCTION 14948c086 FUN_14948c086 body=148 status=ok
// SIG undefined FUN_14948c086(void)

undefined8 FUN_14948c086(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba5d32();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948c11c FUN_14948c11c body=40 status=ok
// SIG undefined FUN_14948c11c(void)

void FUN_14948c11c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x18,0x10);
  FUN_14948c144(uVar1,*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 14948c144 FUN_14948c144 body=142 status=ok
// SIG undefined FUN_14948c144(void)

undefined8 * FUN_14948c144(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd02a80;
  *(bool *)(param_1 + 1) = param_2 != 0;
  if (param_2 == 0) {
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    uVar1 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_2);
    }
    *(float *)((longlong)param_1 + 0xc) = (float)*(double *)(lVar2 + 0x6d0);
    lVar2 = *(longlong *)(param_2 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_2);
    }
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar2 + 0x6f4);
    plVar3 = (longlong *)FUN_144b20ea4(param_2);
    uVar1 = (**(code **)(*plVar3 + 0x490))(plVar3);
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  return param_1;
}



// FUNCTION 14948c22a FUN_14948c22a body=32 status=ok
// SIG undefined FUN_14948c22a(void)

undefined8 FUN_14948c22a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Skeleton");
  return param_2;
}



// FUNCTION 14948c24a FUN_14948c24a body=1286 status=ok
// SIG undefined FUN_14948c24a(void)

longlong * FUN_14948c24a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined1 local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 *local_120;
  ulonglong *local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 *local_f8;
  ulonglong *local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_b0,"NumBones",1);
  FUN_1400b22c2(local_c0,"ReadNumBones");
  uVar3 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_d0,"ReadNumVertices");
  local_150 = 1;
  local_158 = local_d0;
  FUN_149466350(&local_a8,local_b0,local_c0,uVar3);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = local_a8;
  puVar2[1] = 0;
  puVar2[1] = local_a0;
  local_a0 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_98;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_98._4_4_;
  local_98 = 0;
  puVar2[3] = 0;
  puVar2[3] = local_90;
  local_90 = 0;
  *(undefined4 *)(puVar2 + 4) = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_88._4_4_;
  local_88 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = local_7c;
  *(undefined4 *)(puVar2 + 5) = local_80;
  FUN_14946649a(&local_a8);
  FUN_1446ddc76(&local_d8,"BoneMatrix",1);
  FUN_1400b22c2(local_e8,"ReadBoneMatrix");
  local_78 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_70,"ReadNumVertices");
  local_60 = DAT_14cc1d7f8;
  FUN_1400b22c2(local_58,"ReadNumBones");
  local_158 = (undefined1 *)CONCAT71(local_158._1_7_,1);
  local_f8 = &local_78;
  local_f0 = &local_48;
  FUN_1494664d6(&local_a8,local_d8,local_e8);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar5 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar5 + lVar4) = local_a8;
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
  *(undefined1 *)(lVar5 + 0x2c + lVar4) = local_7c;
  *(undefined4 *)(lVar5 + 0x28 + lVar4) = local_80;
  FUN_14946649a();
  lVar5 = 0x30;
  do {
    if (*(longlong *)((longlong)&local_88 + lVar5) != 0) {
      FUN_1400020a8();
    }
    lVar5 = lVar5 + -0x18;
  } while (lVar5 != 0);
  FUN_1446ddc76(&local_100,"BoneWeight",1);
  FUN_1400b22c2(local_110,"ReadBoneWeight");
  local_78 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_70,"ReadNumVertices");
  local_60 = DAT_14cc1d7f8;
  FUN_1400b22c2(local_58,"ReadNumBones");
  local_158 = (undefined1 *)CONCAT71(local_158._1_7_,1);
  local_120 = &local_78;
  local_118 = &local_48;
  FUN_1494664d6(&local_a8,local_100,local_110);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar5 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar5 + lVar4) = local_a8;
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
  *(undefined1 *)(lVar5 + 0x2c + lVar4) = local_7c;
  *(undefined4 *)(lVar5 + 0x28 + lVar4) = local_80;
  FUN_14946649a();
  lVar5 = 0x30;
  do {
    if (*(longlong *)((longlong)&local_88 + lVar5) != 0) {
      FUN_1400020a8();
    }
    lVar5 = lVar5 + -0x18;
  } while (lVar5 != 0);
  FUN_1446ddc76(&local_128,"WeightedBoneMatrix",1);
  FUN_1400b22c2(local_138,"ReadWeightedBoneMatrix");
  uVar3 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_148,"ReadNumVertices");
  local_150 = 1;
  local_158 = local_148;
  FUN_149466350(&local_a8,local_128,local_138,uVar3);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar5 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar5 + lVar4) = local_a8;
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
  *(undefined1 *)(lVar5 + 0x2c + lVar4) = local_7c;
  *(undefined4 *)(lVar5 + 0x28 + lVar4) = local_80;
  FUN_14946649a();
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948c752 FUN_14948c752 body=49 status=ok
// SIG undefined FUN_14948c752(void)

longlong * FUN_14948c752(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a745da();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14948c784 FUN_14948c784 body=499 status=ok
// SIG undefined FUN_14948c784(void)

void FUN_14948c784(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_38,L"ReadNumVertices");
  uVar1 = FUN_149459122(uVar1,local_38);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_48,L"ReadNumBones");
  uVar1 = FUN_149459122(uVar1,local_48);
  uVar1 = FUN_1494593ba(uVar1,2,0,0);
  local_88 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_58,L"ReadBoneMatrix");
  uVar1 = FUN_149459122(uVar1,local_58);
  uVar1 = FUN_1494593ba(uVar1,3,3,4);
  local_88 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_88 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_68,L"ReadBoneWeight");
  uVar1 = FUN_149459122(uVar1,local_68);
  uVar1 = FUN_1494593ba(uVar1,3,0,0);
  local_88 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_88 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_78,L"ReadWeightedBoneMatrix");
  uVar1 = FUN_149459122(uVar1,local_78);
  uVar1 = FUN_1494593ba(uVar1,3,3,4);
  local_88 = 0;
  FUN_149459206(uVar1,2,0,0);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948c980 FUN_14948c980 body=43 status=ok
// SIG undefined FUN_14948c980(void)

void FUN_14948c980(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceSkeleton.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 14948c9ac FUN_14948c9ac body=438 status=ok
// SIG undefined FUN_14948c9ac(void)

void FUN_14948c9ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceSkeleton.ush",0,&local_d8,0);
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14948cb64 FUN_14948cb64 body=122 status=ok
// SIG undefined FUN_14948cb64(void)

longlong FUN_14948cb64(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_14948cbde();
  if (*param_2 != 0) {
    lVar4 = FUN_144a745da();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14948cbc6;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar5 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_14948cbc6;
      }
    }
  }
  lVar5 = 0;
LAB_14948cbc6:
  *(longlong *)(lVar3 + 0x28) = lVar5;
  return lVar3;
}



// FUNCTION 14948cbde FUN_14948cbde body=148 status=ok
// SIG undefined FUN_14948cbde(void)

undefined8 FUN_14948cbde(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba5f06();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948cc74 FUN_14948cc74 body=103 status=ok
// SIG undefined FUN_14948cc74(void)

undefined8 * FUN_14948cc74(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  lVar1 = *(longlong *)(param_1 + 0x28);
  *puVar3 = &PTR_FUN_14bd03350;
  if (lVar1 == 0) {
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar1 + 0x8a8);
    lVar4 = FUN_14479d2ce(lVar1 + 0x668);
    if (lVar4 == 0) {
      lVar4 = lVar1;
    }
    uVar2 = *(undefined4 *)(lVar4 + 0x720);
  }
  puVar3[1] = uVar5;
  *(undefined4 *)(puVar3 + 2) = uVar2;
  return puVar3;
}



// FUNCTION 14948ccdc FUN_14948ccdc body=65 status=ok
// SIG undefined FUN_14948ccdc(void)

undefined4 FUN_14948ccdc(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_2[1] == 0x30) && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
    plVar2 = (longlong *)plVar1[8];
    iVar3 = (**(code **)(*plVar1 + 0x90))();
    iVar3 = *(int *)(*(longlong *)(*plVar2 + (longlong)iVar3 * 8) + 0x18);
    uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == *param_2);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 14948cd1e FUN_14948cd1e body=344 status=ok
// SIG undefined FUN_14948cd1e(void)

void FUN_14948cd1e(longlong param_1,int *param_2)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  lVar4 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar6 * 8);
  local_60 = param_1;
  FUN_14948ce78(&local_58,*(undefined8 *)(param_2 + 2));
  if (0 < *param_2) {
    uVar12 = 0;
    do {
      lVar8 = FUN_147d1cbd0(*(undefined8 *)(local_60 + 8),iVar6,uVar12 & 0xffffffff,0);
      lVar13 = *(longlong *)(lVar4 + 0x2a0);
      if (lVar13 == 0) {
        lVar13 = lVar4 + 0x138;
      }
      lVar5 = *(longlong *)(lVar13 + 0x18);
      iVar7 = FUN_144b26f16();
      if (iVar7 == 1) {
        lVar10 = *(longlong *)(lVar13 + 0x60);
      }
      else {
        lVar10 = 0;
      }
      uVar9 = local_58;
      if (lVar10 == 0) {
        uVar9 = 0;
      }
      uVar11 = local_58;
      if (iVar7 == 1) {
        uVar11 = uVar9;
      }
      if (lVar5 == 0) {
        uVar11 = 0;
      }
      if (lVar8 == 0) {
        uVar11 = 0;
      }
      cVar2 = *(char *)(lVar13 + 0x28);
      cVar3 = *(char *)(lVar13 + 0x29);
      puVar1 = (uint *)(*(longlong *)(param_2 + 4) + uVar12 * 4);
      *puVar1 = *puVar1 | uVar11;
      uVar9 = 0;
      if (iVar7 == 1) {
        uVar9 = local_54;
      }
      puVar1 = (uint *)(*(longlong *)(param_2 + 4) + uVar12 * 4);
      *puVar1 = *puVar1 | uVar9;
      uVar9 = 0;
      if (cVar2 != '\0') {
        uVar9 = local_50;
      }
      puVar1 = (uint *)(*(longlong *)(param_2 + 4) + uVar12 * 4);
      *puVar1 = *puVar1 | uVar9;
      uVar9 = 0;
      if (cVar3 != '\0') {
        uVar9 = local_4c;
      }
      puVar1 = (uint *)(*(longlong *)(param_2 + 4) + uVar12 * 4);
      *puVar1 = *puVar1 | uVar9;
      uVar12 = uVar12 + 1;
    } while ((longlong)uVar12 < (longlong)*param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948ce78 FUN_14948ce78 body=1115 status=ok
// SIG undefined FUN_14948ce78(void)

undefined8 * FUN_14948ce78(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1ced0) && (FUN_144b3d300(&DAT_14cc1ced0), DAT_14cc1ced0 == -1)) {
    FUN_140056680(&DAT_14cc1cec0,L"ENABLE_DEFORMER_BONES");
    atexit((_func_5014 *)&LAB_14452e909);
    _Init_thread_footer(&DAT_14cc1ced0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1ced8) && (FUN_144b3d300(&DAT_14cc1ced8), DAT_14cc1ced8 == -1)) {
    puVar3 = DAT_14cc1cec0;
    if (DAT_14cc1cec8 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1cec8 + -1;
    if (DAT_14cc1cec8 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1ced4 = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1ced8);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1cec0,DAT_14cc1ced4,1);
  *(undefined4 *)param_1 = uVar2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cef0) && (FUN_144b3d300(&DAT_14cc1cef0), DAT_14cc1cef0 == -1)) {
    FUN_140056680(&DAT_14cc1cee0,L"GPUSKIN_UNLIMITED_BONE_INFLUENCE");
    atexit((_func_5014 *)&LAB_14452e91a);
    _Init_thread_footer(&DAT_14cc1cef0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cef8) && (FUN_144b3d300(&DAT_14cc1cef8), DAT_14cc1cef8 == -1)) {
    puVar3 = DAT_14cc1cee0;
    if (DAT_14cc1cee8 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1cee8 + -1;
    if (DAT_14cc1cee8 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1cef4 = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1cef8);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1cee0,DAT_14cc1cef4,1);
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cf10) && (FUN_144b3d300(&DAT_14cc1cf10), DAT_14cc1cf10 == -1)) {
    FUN_140056680(&DAT_14cc1cf00,L"GPUSKIN_BONE_INDEX_UINT16");
    atexit((_func_5014 *)&LAB_14452e92b);
    _Init_thread_footer(&DAT_14cc1cf10);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cf18) && (FUN_144b3d300(&DAT_14cc1cf18), DAT_14cc1cf18 == -1)) {
    puVar3 = DAT_14cc1cf00;
    if (DAT_14cc1cf08 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1cf08 + -1;
    if (DAT_14cc1cf08 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1cf14 = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1cf18);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1cf00,DAT_14cc1cf14,1);
  *(undefined4 *)(param_1 + 1) = uVar2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cf30) && (FUN_144b3d300(&DAT_14cc1cf30), DAT_14cc1cf30 == -1)) {
    FUN_140056680(&DAT_14cc1cf20,L"GPUSKIN_BONE_WEIGHTS_UINT16");
    atexit((_func_5014 *)&LAB_14452e93c);
    _Init_thread_footer(&DAT_14cc1cf30);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1cf38) && (FUN_144b3d300(&DAT_14cc1cf38), DAT_14cc1cf38 == -1)) {
    puVar3 = DAT_14cc1cf20;
    if (DAT_14cc1cf28 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1cf28 + -1;
    if (DAT_14cc1cf28 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1cf34 = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1cf38);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1cf20,DAT_14cc1cf34,1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  return param_1;
}



// FUNCTION 14948d2d4 FUN_14948d2d4 body=374 status=ok
// SIG undefined FUN_14948d2d4(void)

void FUN_14948d2d4(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  iVar1 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar1) {
    lVar3 = *(longlong *)(DAT_14ca8c040 + 0x18);
    puVar11 = (undefined4 *)((longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18));
    iVar2 = *(int *)(param_2 + 0x14);
    lVar4 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar6 * 8);
    lVar12 = 0x10;
    uVar10 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + 0x10);
      lVar8 = FUN_147d1cbd0(*(undefined8 *)(param_1 + 8),iVar6,uVar10 & 0xffffffff,0);
      lVar14 = *(longlong *)(lVar4 + 0x2a0);
      if (*(longlong *)(lVar4 + 0x2a0) == 0) {
        lVar14 = lVar4 + 0x138;
      }
      lVar13 = *(longlong *)(lVar14 + 0x18);
      iVar7 = FUN_144b26f16(lVar14);
      if (iVar7 == 1) {
        lVar9 = *(longlong *)(lVar14 + 0x60);
      }
      else {
        lVar9 = 0;
      }
      *puVar11 = *(undefined4 *)(lVar5 + 0x38 + lVar12);
      puVar11[1] = *(undefined4 *)(lVar5 + lVar12);
      iVar7 = *(int *)(lVar14 + 0x24);
      puVar11[2] = iVar7;
      puVar11[3] = iVar7 * *(int *)(lVar5 + lVar12) *
                   ((uint)*(byte *)(lVar14 + 0x28) + (uint)*(byte *)(lVar14 + 0x29) + 2) >> 2;
      puVar11[4] = ((uint)*(byte *)(lVar14 + 0x28) + (uint)*(byte *)(lVar14 + 0x29) + 2) *
                   *(int *)(lVar14 + 0x24);
      puVar11[5] = *(ushort *)(lVar14 + 0x28) + 0x101;
      if (lVar8 == 0) {
        lVar8 = lVar3;
      }
      *(longlong *)(puVar11 + 6) = lVar8;
      if (lVar13 == 0) {
        lVar13 = lVar3;
      }
      *(longlong *)(puVar11 + 8) = lVar13;
      if (lVar9 == 0) {
        lVar9 = lVar3;
      }
      *(longlong *)(puVar11 + 10) = lVar9;
      uVar10 = uVar10 + 1;
      puVar11 = (undefined4 *)((longlong)puVar11 + (longlong)iVar2);
      lVar12 = lVar12 + 0xf8;
    } while ((longlong)iVar1 != uVar10);
  }
  return;
}



// FUNCTION 14948d452 FUN_14948d452 body=32 status=ok
// SIG undefined FUN_14948d452(void)

undefined8 FUN_14948d452(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Skinned Mesh");
  return param_2;
}



// FUNCTION 14948d472 FUN_14948d472 body=2439 status=ok
// SIG undefined FUN_14948d472(void)

longlong * FUN_14948d472(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_218 [32];
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 local_1e8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined1 local_1b0 [16];
  undefined8 local_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 *local_170;
  ulonglong *local_168;
  undefined1 local_160 [16];
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined8 local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  uVar4 = DAT_14cc1c100;
  uVar3 = DAT_14cc1c0e8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_a8,"NumVertices",1);
  FUN_1400b22c2(local_b8,"ReadNumVertices");
  FUN_14946b838(&local_a0,local_a8,local_b8,0);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = local_a0;
  puVar2[1] = 0;
  puVar2[1] = local_98;
  local_98 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_90._4_4_;
  local_90 = 0;
  puVar2[3] = 0;
  puVar2[3] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar2 + 4) = (undefined4)local_80;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_80._4_4_;
  local_80 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = local_74;
  *(undefined4 *)(puVar2 + 5) = local_78;
  FUN_14946649a(&local_a0);
  FUN_1446ddc76(&local_c0,"Position",1);
  FUN_1400b22c2(local_d0,"ReadPosition");
  FUN_1400b22c2(local_e0,"ReadNumVertices");
  local_1f0 = (undefined1 *)((ulonglong)local_1f0 & 0xffffffffffffff00);
  local_1f8 = local_e0;
  FUN_149466350(&local_a0,local_c0,local_d0,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar6 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar6 + lVar5) = local_a0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = local_98;
  local_98 = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar5) = (undefined4)local_90;
  *(undefined4 *)(lVar6 + 0x14 + lVar5) = local_90._4_4_;
  local_90 = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = local_88;
  local_88 = 0;
  *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_80;
  *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_80._4_4_;
  local_80 = 0;
  *(undefined1 *)(lVar6 + 0x2c + lVar5) = local_74;
  *(undefined4 *)(lVar6 + 0x28 + lVar5) = local_78;
  FUN_14946649a();
  FUN_1446ddc76(&local_e8,"TangentX",1);
  FUN_1400b22c2(local_f8,"ReadTangentX");
  FUN_1400b22c2(local_108,"ReadNumVertices");
  local_1f0 = (undefined1 *)((ulonglong)local_1f0 & 0xffffffffffffff00);
  local_1f8 = local_108;
  FUN_149466350(&local_a0,local_e8,local_f8,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar6 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar6 + lVar5) = local_a0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = local_98;
  local_98 = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar5) = (undefined4)local_90;
  *(undefined4 *)(lVar6 + 0x14 + lVar5) = local_90._4_4_;
  local_90 = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = local_88;
  local_88 = 0;
  *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_80;
  *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_80._4_4_;
  local_80 = 0;
  *(undefined1 *)(lVar6 + 0x2c + lVar5) = local_74;
  *(undefined4 *)(lVar6 + 0x28 + lVar5) = local_78;
  FUN_14946649a();
  FUN_1446ddc76(&local_110,"TangentZ",1);
  FUN_1400b22c2(local_120,"ReadTangentZ");
  FUN_1400b22c2(local_130,"ReadNumVertices");
  local_1f0 = (undefined1 *)((ulonglong)local_1f0 & 0xffffffffffffff00);
  local_1f8 = local_130;
  FUN_149466350(&local_a0,local_110,local_120,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar6 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar6 + lVar5) = local_a0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = local_98;
  local_98 = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar5) = (undefined4)local_90;
  *(undefined4 *)(lVar6 + 0x14 + lVar5) = local_90._4_4_;
  local_90 = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = local_88;
  local_88 = 0;
  *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_80;
  *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_80._4_4_;
  local_80 = 0;
  *(undefined1 *)(lVar6 + 0x2c + lVar5) = local_74;
  *(undefined4 *)(lVar6 + 0x28 + lVar5) = local_78;
  FUN_14946649a();
  FUN_1446ddc76(&local_138,"NumUVChannels",1);
  FUN_1400b22c2(local_148,"ReadNumUVChannels");
  FUN_14946b838(&local_a0,local_138,local_148,0);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar6 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar6 + lVar5) = local_a0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = local_98;
  local_98 = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar5) = (undefined4)local_90;
  *(undefined4 *)(lVar6 + 0x14 + lVar5) = local_90._4_4_;
  local_90 = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = local_88;
  local_88 = 0;
  *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_80;
  *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_80._4_4_;
  local_80 = 0;
  *(undefined1 *)(lVar6 + 0x2c + lVar5) = local_74;
  *(undefined4 *)(lVar6 + 0x28 + lVar5) = local_78;
  FUN_14946649a();
  FUN_1446ddc76(&local_150,&DAT_149f636db,1);
  FUN_1400b22c2(local_160,"ReadUV");
  local_70 = uVar4;
  FUN_1400b22c2(local_68,"ReadNumVertices");
  local_58 = DAT_14cc1c2e0;
  FUN_1400b22c2(local_50,"ReadNumUVChannels");
  local_170 = &local_70;
  local_168 = &local_40;
  local_1f8 = (undefined1 *)((ulonglong)local_1f8 & 0xffffffffffffff00);
  FUN_1494664d6(&local_a0,local_150,local_160);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar6 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar6 + lVar5) = local_a0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = local_98;
  local_98 = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar5) = (undefined4)local_90;
  *(undefined4 *)(lVar6 + 0x14 + lVar5) = local_90._4_4_;
  local_90 = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = local_88;
  local_88 = 0;
  *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_80;
  *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_80._4_4_;
  local_80 = 0;
  *(undefined1 *)(lVar6 + 0x2c + lVar5) = local_74;
  *(undefined4 *)(lVar6 + 0x28 + lVar5) = local_78;
  FUN_14946649a();
  lVar6 = 0x30;
  do {
    if (*(longlong *)((longlong)&local_80 + lVar6) != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != 0);
  FUN_1446ddc76(&local_178,"Color",1);
  FUN_1400b22c2(local_188,"ReadColor");
  FUN_1400b22c2(local_198,"ReadColor");
  local_1f0 = (undefined1 *)((ulonglong)local_1f0 & 0xffffffffffffff00);
  local_1f8 = local_198;
  FUN_149466350(&local_a0,local_178,local_188,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar6 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar6 + lVar5) = local_a0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = local_98;
  local_98 = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar5) = (undefined4)local_90;
  *(undefined4 *)(lVar6 + 0x14 + lVar5) = local_90._4_4_;
  local_90 = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = local_88;
  local_88 = 0;
  *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_80;
  *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_80._4_4_;
  local_80 = 0;
  *(undefined1 *)(lVar6 + 0x2c + lVar5) = local_74;
  *(undefined4 *)(lVar6 + 0x28 + lVar5) = local_78;
  FUN_14946649a();
  FUN_1446ddc76(&local_1a0,"NumTriangles",1);
  FUN_1400b22c2(local_1b0,"ReadNumTriangles");
  FUN_14946b838(&local_a0,local_1a0,local_1b0,0);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar6 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar6 + lVar5) = local_a0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = local_98;
  local_98 = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar5) = (undefined4)local_90;
  *(undefined4 *)(lVar6 + 0x14 + lVar5) = local_90._4_4_;
  local_90 = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = local_88;
  local_88 = 0;
  *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_80;
  *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_80._4_4_;
  local_80 = 0;
  *(undefined1 *)(lVar6 + 0x2c + lVar5) = local_74;
  *(undefined4 *)(lVar6 + 0x28 + lVar5) = local_78;
  FUN_14946649a();
  FUN_1446ddc76(&local_1b8,"IndexBuffer",1);
  FUN_1400b22c2(local_1c8,"ReadIndexBuffer");
  FUN_1400b22c2(local_1d8,"ReadNumTriangles");
  local_1e8 = 0;
  local_1f8 = (undefined1 *)CONCAT44(local_1f8._4_4_,3);
  local_1f0 = local_1d8;
  FUN_149473d60(&local_a0,local_1b8,local_1c8,uVar3);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar6 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar6 + lVar5) = local_a0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = local_98;
  local_98 = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar5) = (undefined4)local_90;
  *(undefined4 *)(lVar6 + 0x14 + lVar5) = local_90._4_4_;
  local_90 = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = local_88;
  local_88 = 0;
  *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_80;
  *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_80._4_4_;
  local_80 = 0;
  *(undefined1 *)(lVar6 + 0x2c + lVar5) = local_74;
  *(undefined4 *)(lVar6 + 0x28 + lVar5) = local_78;
  FUN_14946649a();
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948ddfa FUN_14948ddfa body=49 status=ok
// SIG undefined FUN_14948ddfa(void)

longlong * FUN_14948ddfa(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a745da();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14948de2c FUN_14948de2c body=767 status=ok
// SIG undefined FUN_14948de2c(void)

void FUN_14948de2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_38,L"ReadNumVertices");
  uVar1 = FUN_149459122(uVar1,local_38);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_48,L"ReadNumTriangles");
  uVar1 = FUN_149459122(uVar1,local_48);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_58,L"ReadNumUVChannels");
  uVar1 = FUN_149459122(uVar1,local_58);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_68,L"ReadIndexBuffer");
  uVar1 = FUN_149459122(uVar1,local_68);
  uVar1 = FUN_1494593ba(uVar1,2,0,0);
  local_c8 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_78,L"ReadPosition");
  uVar1 = FUN_149459122(uVar1,local_78);
  uVar1 = FUN_1494593ba(uVar1,3,3,0);
  local_c8 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_88,L"ReadTangentX");
  uVar1 = FUN_149459122(uVar1,local_88);
  uVar1 = FUN_1494593ba(uVar1,3,4,0);
  local_c8 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_98,L"ReadTangentZ");
  uVar1 = FUN_149459122(uVar1,local_98);
  uVar1 = FUN_1494593ba(uVar1,3,4,0);
  local_c8 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_a8,L"ReadUV");
  uVar1 = FUN_149459122(uVar1,local_a8);
  uVar1 = FUN_1494593ba(uVar1,3,2,0);
  local_c8 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_c8 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_b8,L"ReadColor");
  uVar1 = FUN_149459122(uVar1,local_b8);
  uVar1 = FUN_1494593ba(uVar1,3,4,0);
  local_c8 = 0;
  FUN_149459206(uVar1,2,0,0);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948e134 FUN_14948e134 body=43 status=ok
// SIG undefined FUN_14948e134(void)

void FUN_14948e134(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceSkinnedMesh.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 14948e160 FUN_14948e160 body=438 status=ok
// SIG undefined FUN_14948e160(void)

void FUN_14948e160(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceSkinnedMesh.ush",0,&local_d8,0);
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14948e318 FUN_14948e318 body=122 status=ok
// SIG undefined FUN_14948e318(void)

longlong FUN_14948e318(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_14948e392();
  if (*param_2 != 0) {
    lVar4 = FUN_144a745da();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14948e37a;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar5 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_14948e37a;
      }
    }
  }
  lVar5 = 0;
LAB_14948e37a:
  *(longlong *)(lVar3 + 0x28) = lVar5;
  return lVar3;
}



// FUNCTION 14948e392 FUN_14948e392 body=148 status=ok
// SIG undefined FUN_14948e392(void)

undefined8 FUN_14948e392(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba60da();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948e428 FUN_14948e428 body=63 status=ok
// SIG undefined FUN_14948e428(void)

void FUN_14948e428(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  lVar1 = *(longlong *)(param_1 + 0x28);
  *puVar2 = &PTR_FUN_14bd03d70;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x8a8);
  }
  puVar2[1] = uVar3;
  return;
}



// FUNCTION 14948e468 FUN_14948e468 body=65 status=ok
// SIG undefined FUN_14948e468(void)

undefined4 FUN_14948e468(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_2[1] == 0x50) && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
    plVar2 = (longlong *)plVar1[8];
    iVar3 = (**(code **)(*plVar1 + 0x90))();
    iVar3 = *(int *)(*(longlong *)(*plVar2 + (longlong)iVar3 * 8) + 0x18);
    uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == *param_2);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 14948e4aa FUN_14948e4aa body=405 status=ok
// SIG undefined FUN_14948e4aa(void)

void FUN_14948e4aa(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  
  iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  iVar1 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar1) {
    lVar2 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar5 * 8);
    lVar3 = *(longlong *)(DAT_14ca8c040 + 0x18);
    puVar14 = (undefined4 *)((longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18));
    iVar5 = *(int *)(param_2 + 0x14);
    lVar10 = 0;
    do {
      lVar15 = *(longlong *)(lVar2 + 0x10);
      lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18);
      lVar11 = *(longlong *)(lVar2 + 0xd0);
      lVar13 = *(longlong *)(lVar2 + 0x78);
      lVar12 = *(longlong *)(lVar2 + 0x88);
      lVar4 = *(longlong *)(lVar2 + 0x118);
      puVar8 = (undefined4 *)(lVar15 + lVar10 + 0x48);
      if (*(char *)(param_2 + 8) != '\0') {
        puVar8 = (undefined4 *)(lVar2 + 0xec);
      }
      *puVar14 = *puVar8;
      if (*(char *)(param_2 + 8) == '\x01') {
        uVar6 = FUN_147d14f76(lVar2);
      }
      else {
        uVar6 = *(undefined4 *)(lVar15 + 8 + lVar10);
      }
      puVar14[1] = uVar6;
      puVar14[2] = *(undefined4 *)(lVar2 + 0xa8);
      uVar7 = 0;
      uVar6 = 0;
      if (*(char *)(param_2 + 8) == '\0') {
        uVar6 = *(undefined4 *)(lVar15 + 4 + lVar10);
      }
      puVar14[3] = uVar6;
      if (*(char *)(param_2 + 8) == '\0') {
        uVar7 = *(undefined4 *)(lVar15 + 0x10 + lVar10);
      }
      puVar14[4] = uVar7;
      if (lVar9 == 0) {
        lVar9 = lVar3;
      }
      *(longlong *)(puVar14 + 6) = lVar9;
      if (lVar11 == 0) {
        lVar11 = lVar3;
      }
      *(longlong *)(puVar14 + 8) = lVar11;
      if (lVar13 == 0) {
        lVar13 = lVar3;
      }
      *(longlong *)(puVar14 + 10) = lVar13;
      if (lVar12 == 0) {
        lVar12 = lVar3;
      }
      *(longlong *)(puVar14 + 0xc) = lVar12;
      lVar15 = lVar4;
      if (lVar4 == 0) {
        lVar15 = lVar3;
      }
      *(longlong *)(puVar14 + 0xe) = lVar15;
      puVar14[0x10] = -(uint)(lVar4 != 0);
      lVar10 = lVar10 + 0xf8;
      puVar14 = (undefined4 *)((longlong)puVar14 + (longlong)iVar5);
    } while ((longlong)iVar1 * 0xf8 != lVar10);
  }
  return;
}



// FUNCTION 14948e648 FUN_14948e648 body=32 status=ok
// SIG undefined FUN_14948e648(void)

undefined8 FUN_14948e648(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Execute Skinned Mesh");
  return param_2;
}



// FUNCTION 14948e676 FUN_14948e676 body=244 status=ok
// SIG undefined FUN_14948e676(void)

longlong * FUN_14948e676(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_58,"NumThreads",1);
  FUN_1400b22c2(local_68,"ReadNumThreads");
  FUN_14946b838(&local_50,local_58,local_68,1);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = local_50;
  puVar1[1] = 0;
  puVar1[1] = local_48;
  local_48 = 0;
  *(undefined4 *)(puVar1 + 2) = (undefined4)local_40;
  *(undefined4 *)((longlong)puVar1 + 0x14) = local_40._4_4_;
  local_40 = 0;
  puVar1[3] = 0;
  puVar1[3] = local_38;
  local_38 = 0;
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar1 + 0x24) = local_30._4_4_;
  local_30 = 0;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = local_24;
  *(undefined4 *)(puVar1 + 5) = local_28;
  FUN_14946649a(&local_50);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948e76c FUN_14948e76c body=49 status=ok
// SIG undefined FUN_14948e76c(void)

longlong * FUN_14948e76c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a745da();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14948e79e FUN_14948e79e body=111 status=ok
// SIG undefined FUN_14948e79e(void)

void FUN_14948e79e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_28,L"ReadNumThreads");
  uVar1 = FUN_149459122(uVar1,local_28);
  FUN_1494593ba(uVar1,1,3,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948e816 FUN_14948e816 body=43 status=ok
// SIG undefined FUN_14948e816(void)

void FUN_14948e816(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceSkinnedMeshExec.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 14948e842 FUN_14948e842 body=438 status=ok
// SIG undefined FUN_14948e842(void)

void FUN_14948e842(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceSkinnedMeshExec.ush",0,&local_d8,0);
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14948e9fa FUN_14948e9fa body=133 status=ok
// SIG undefined FUN_14948e9fa(void)

longlong FUN_14948e9fa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_14948ea7f();
  if (*param_2 != 0) {
    lVar4 = FUN_144a745da();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14948ea60;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar5 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_14948ea60;
      }
    }
  }
  lVar5 = 0;
LAB_14948ea60:
  *(longlong *)(lVar3 + 0x28) = lVar5;
  *(undefined1 *)(lVar3 + 0x30) = *(undefined1 *)(param_1 + 0x30);
  return lVar3;
}



// FUNCTION 14948ea7f FUN_14948ea7f body=148 status=ok
// SIG undefined FUN_14948ea7f(void)

undefined8 FUN_14948ea7f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba62ae();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948eb3e FUN_14948eb3e body=69 status=ok
// SIG undefined FUN_14948eb3e(void)

void FUN_14948eb3e(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x28);
  *puVar3 = &PTR_FUN_14bd048d0;
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x8a8);
  }
  puVar3[1] = uVar4;
  *(undefined1 *)(puVar3 + 2) = uVar1;
  return;
}



// FUNCTION 14948eb84 FUN_14948eb84 body=273 status=ok
// SIG undefined FUN_14948eb84(void)

ulonglong FUN_14948eb84(longlong param_1,longlong *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_146ea3024(param_2,0);
  }
  uVar7 = 0;
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
    lVar3 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar5 * 8);
    uVar1 = *(uint *)(lVar3 + 0x18);
    uVar6 = (ulonglong)uVar1;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    if (*(int *)((longlong)param_2 + 0xc) < (int)uVar1) {
      FUN_146ea3024(param_2,uVar1);
    }
    if (uVar1 != 0) {
      lVar8 = 0;
      do {
        uVar2 = *(undefined4 *)
                 (lVar8 + 8 +
                 (ulonglong)(*(char *)(param_1 + 0x10) == '\x01') * 0x40 +
                 *(longlong *)(lVar3 + 0x10));
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_146ddc768(param_2,iVar5);
        }
        lVar4 = *param_2;
        *(undefined4 *)(lVar4 + (longlong)iVar5 * 0xc) = uVar2;
        *(undefined1 **)(lVar4 + 4 + (longlong)iVar5 * 0xc) = &DAT_100000001;
        lVar8 = lVar8 + 0xf8;
        uVar7 = uVar6;
      } while (uVar6 * 0xf8 - lVar8 != 0);
    }
  }
  return uVar7;
}



// FUNCTION 14948ec96 FUN_14948ec96 body=65 status=ok
// SIG undefined FUN_14948ec96(void)

undefined4 FUN_14948ec96(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_2[1] == 0x10) && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
    plVar2 = (longlong *)plVar1[8];
    iVar3 = (**(code **)(*plVar1 + 0x90))();
    iVar3 = *(int *)(*(longlong *)(*plVar2 + (longlong)iVar3 * 8) + 0x18);
    uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == *param_2);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 14948ecd8 FUN_14948ecd8 body=200 status=ok
// SIG undefined FUN_14948ecd8(void)

void FUN_14948ecd8(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  iVar1 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar1) {
    lVar2 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar3 * 8);
    iVar3 = *(int *)(param_2 + 0x14);
    lVar5 = (longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18) + 8;
    lVar6 = 0;
    do {
      if (*(char *)(param_2 + 8) == '\x01') {
        if (*(char *)(param_1 + 0x10) == '\x01') {
          uVar4 = *(undefined4 *)(lVar2 + 0xec);
        }
        else {
          uVar4 = FUN_147d14f76(lVar2);
        }
      }
      else {
        uVar4 = *(undefined4 *)
                 (lVar6 + 8 +
                 (ulonglong)(*(char *)(param_1 + 0x10) == '\x01') * 0x40 +
                 *(longlong *)(lVar2 + 0x10));
      }
      *(undefined4 *)(lVar5 + -8) = uVar4;
      *(undefined1 **)(lVar5 + -4) = &DAT_100000001;
      lVar6 = lVar6 + 0xf8;
      lVar5 = lVar5 + iVar3;
    } while ((longlong)iVar1 * 0xf8 - lVar6 != 0);
  }
  return;
}



// FUNCTION 14948eda8 FUN_14948eda8 body=32 status=ok
// SIG undefined FUN_14948eda8(void)

undefined8 FUN_14948eda8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Read Skinned Mesh");
  return param_2;
}



// FUNCTION 14948edd6 FUN_14948edd6 body=1120 status=ok
// SIG undefined FUN_14948edd6(void)

longlong * FUN_14948edd6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 local_120;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_78,"Position",1);
  FUN_1400b22c2(local_88,"ReadPosition");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_98,"ReadNumVertices");
  local_120 = 1;
  local_128 = local_98;
  FUN_149466350(&local_70,local_78,local_88,uVar4);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = local_70;
  puVar2[1] = 0;
  puVar2[1] = local_68;
  local_68 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_60;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_60._4_4_;
  local_60 = 0;
  puVar2[3] = 0;
  puVar2[3] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar2 + 4) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = local_44;
  *(undefined4 *)(puVar2 + 5) = local_48;
  FUN_14946649a(&local_70);
  FUN_1446ddc76(&local_a0,"TangentX",1);
  FUN_1400b22c2(local_b0,"ReadTangentX");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_c0,"ReadNumVertices");
  local_120 = 1;
  local_128 = local_c0;
  FUN_149466350(&local_70,local_a0,local_b0,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar5) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar5) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar5) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar5) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar5) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_c8,"TangentZ",1);
  FUN_1400b22c2(local_d8,"ReadTangentZ");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_e8,"ReadNumVertices");
  local_120 = 1;
  local_128 = local_e8;
  FUN_149466350(&local_70,local_c8,local_d8,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar5) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar5) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar5) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar5) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar5) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_f0,"Color",1);
  FUN_1400b22c2(local_100,"ReadColor");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_110,"ReadNumVertices");
  local_120 = 1;
  local_128 = local_110;
  FUN_149466350(&local_70,local_f0,local_100,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar5) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar5) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar5) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar5) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar5) = local_48;
  FUN_14946649a();
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948f238 FUN_14948f238 body=49 status=ok
// SIG undefined FUN_14948f238(void)

longlong * FUN_14948f238(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a745da();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14948f26a FUN_14948f26a body=457 status=ok
// SIG undefined FUN_14948f26a(void)

void FUN_14948f26a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_38,L"ReadNumVertices");
  uVar1 = FUN_149459122(uVar1,local_38);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_48,L"ReadPosition");
  uVar1 = FUN_149459122(uVar1,local_48);
  uVar1 = FUN_1494593ba(uVar1,3,3,0);
  local_88 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_58,L"ReadTangentX");
  uVar1 = FUN_149459122(uVar1,local_58);
  uVar1 = FUN_1494593ba(uVar1,3,4,0);
  local_88 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_68,L"ReadTangentZ");
  uVar1 = FUN_149459122(uVar1,local_68);
  uVar1 = FUN_1494593ba(uVar1,3,4,0);
  local_88 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_78,L"ReadColor");
  uVar1 = FUN_149459122(uVar1,local_78);
  uVar1 = FUN_1494593ba(uVar1,3,4,0);
  local_88 = 0;
  FUN_149459206(uVar1,2,0,0);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948f43c FUN_14948f43c body=151 status=ok
// SIG undefined FUN_14948f43c(void)

void FUN_14948f43c(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1494d4120();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1d5c8;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x40;
  return;
}



// FUNCTION 14948f4dc FUN_14948f4dc body=43 status=ok
// SIG undefined FUN_14948f4dc(void)

void FUN_14948f4dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceSkinnedMeshRead.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 14948f508 FUN_14948f508 body=438 status=ok
// SIG undefined FUN_14948f508(void)

void FUN_14948f508(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceSkinnedMeshRead.ush",0,&local_d8,0);
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14948f6c0 FUN_14948f6c0 body=544 status=ok
// SIG undefined FUN_14948f6c0(void)

void FUN_14948f6c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  uStack_70 = 0;
  FUN_144a83b10(&local_78,1);
  FUN_140056680(&local_88,L"OPTIMUS_SKINNED_MESH_READ_POSITION");
  uVar6 = local_78;
  uVar3 = local_88;
  local_88 = 0;
  uVar4 = (undefined4)local_80;
  uVar5 = local_80._4_4_;
  local_80 = 0;
  local_78 = 0;
  uVar7 = (undefined4)uStack_70;
  uVar8 = uStack_70._4_4_;
  uStack_70 = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1494d47ce(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar9 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar2 + lVar9) = uVar3;
  *(undefined4 *)(lVar2 + 8 + lVar9) = uVar4;
  *(undefined4 *)(lVar2 + 0xc + lVar9) = uVar5;
  *(undefined8 *)(lVar2 + 0x10 + lVar9) = uVar6;
  *(undefined4 *)(lVar2 + 0x18 + lVar9) = uVar7;
  *(undefined4 *)(lVar2 + 0x1c + lVar9) = uVar8;
  local_98 = 0;
  uStack_90 = 0;
  FUN_144a83b10(&local_98,2);
  FUN_140056680(&local_a8,L"OPTIMUS_SKINNED_MESH_READ_TANGENTS");
  uVar6 = local_98;
  uVar3 = local_a8;
  local_a8 = 0;
  uVar4 = (undefined4)local_a0;
  uVar5 = local_a0._4_4_;
  local_a0 = 0;
  local_98 = 0;
  uVar7 = (undefined4)uStack_90;
  uVar8 = uStack_90._4_4_;
  uStack_90 = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1494d47ce(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar9 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar2 + lVar9) = uVar3;
  *(undefined4 *)(lVar2 + 8 + lVar9) = uVar4;
  *(undefined4 *)(lVar2 + 0xc + lVar9) = uVar5;
  *(undefined8 *)(lVar2 + 0x10 + lVar9) = uVar6;
  *(undefined4 *)(lVar2 + 0x18 + lVar9) = uVar7;
  *(undefined4 *)(lVar2 + 0x1c + lVar9) = uVar8;
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,4);
  FUN_140056680(&local_c8,L"OPTIMUS_SKINNED_MESH_READ_COLOR");
  uVar6 = local_b8;
  uVar3 = local_c8;
  local_c8 = 0;
  uVar4 = (undefined4)local_c0;
  uVar5 = local_c0._4_4_;
  local_c0 = 0;
  local_b8 = 0;
  uVar7 = (undefined4)uStack_b0;
  uVar8 = uStack_b0._4_4_;
  uStack_b0 = 0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1494d47ce(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar9 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar2 + lVar9) = uVar3;
  *(undefined4 *)(lVar2 + 8 + lVar9) = uVar4;
  *(undefined4 *)(lVar2 + 0xc + lVar9) = uVar5;
  *(undefined8 *)(lVar2 + 0x10 + lVar9) = uVar6;
  *(undefined4 *)(lVar2 + 0x18 + lVar9) = uVar7;
  *(undefined4 *)(lVar2 + 0x1c + lVar9) = uVar8;
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948f8e2 FUN_14948f8e2 body=103 status=ok
// SIG undefined FUN_14948f8e2(void)

void FUN_14948f8e2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,L"READABLE_OUTPUT_BUFFERS");
  FUN_14588e9a8(param_2,local_28,8);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948f94a FUN_14948f94a body=131 status=ok
// SIG undefined FUN_14948f94a(void)

longlong FUN_14948f94a(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_14948f9cd();
  if (*param_2 != 0) {
    lVar4 = FUN_144a745da();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14948f9b0;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar5 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_14948f9b0;
      }
    }
  }
  lVar5 = 0;
LAB_14948f9b0:
  *(longlong *)(lVar3 + 0x30) = lVar5;
  *(undefined8 *)(lVar3 + 0x38) = param_3;
  return lVar3;
}



// FUNCTION 14948f9cd FUN_14948f9cd body=148 status=ok
// SIG undefined FUN_14948f9cd(void)

undefined8 FUN_14948f9cd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba6482();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948fa62 FUN_14948fa62 body=105 status=ok
// SIG undefined FUN_14948fa62(void)

void FUN_14948fa62(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x2c);
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *puVar4 = &PTR_FUN_14bd05360;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 0x8a8);
  }
  puVar4[1] = uVar5;
  puVar4[2] = uVar3;
  *(undefined1 *)(puVar4 + 4) = uVar1;
  puVar4[3] = param_1 + 0x40;
  return;
}



// FUNCTION 14948facc FUN_14948facc body=47 status=ok
// SIG undefined FUN_14948facc(void)

void FUN_14948facc(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 14948fafc FUN_14948fafc body=82 status=ok
// SIG undefined FUN_14948fafc(void)

undefined4 FUN_14948fafc(longlong param_1,int *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  
  if (((param_2[1] == 0x40) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(), cVar2 == '\0')) {
    plVar1 = (longlong *)(*(longlong **)(param_1 + 8))[8];
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
    iVar3 = *(int *)(*(longlong *)(*plVar1 + (longlong)iVar3 * 8) + 0x18);
    return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == *param_2);
  }
  return 0;
}



// FUNCTION 14948fb4e FUN_14948fb4e body=579 status=ok
// SIG undefined FUN_14948fb4e(void)

void FUN_14948fb4e(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  bool *local_48;
  uint3 local_40;
  longlong local_38;
  bool local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  iVar1 = **(int **)(param_1 + 0x18);
  if (iVar2 != iVar1) {
    **(int **)(param_1 + 0x18) = iVar2;
  }
  bVar5 = (*(byte *)(param_1 + 0x10) & 2) != 0;
  if (bVar5) {
    local_48 = (bool *)0x14bd053b0;
    local_38 = FUN_147d1cefe(param_2,*(undefined8 *)(param_1 + 8),iVar2,iVar2 != iVar1);
  }
  else {
    local_38 = FUN_144735dd8(param_2,DAT_14ca8c050 + 0x10,0);
  }
  local_40 = 0xd;
  local_48 = &local_29;
  local_29 = bVar5;
  uVar3 = FUN_144a23c98(param_2 + 0x198,param_2 + 0x70,local_38 + 8);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  bVar4 = 0x3f;
  if (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca81490) {
    bVar4 = 0x23;
  }
  bVar5 = (*(byte *)(param_1 + 0x10) & 0xc) == 0;
  if (bVar5) {
    local_38 = FUN_144735dd8(param_2,DAT_14ca8c050 + 0x10,0);
  }
  else {
    local_38 = FUN_147d1d380(param_2,*(undefined8 *)(param_1 + 8),iVar2,L"OptimusSkinnedMeshTangent"
                            );
  }
  local_40 = (uint3)bVar4;
  local_29 = !bVar5;
  local_48 = &local_29;
  uVar3 = FUN_144a23c98(param_2 + 0x198,param_2 + 0x70,local_38 + 8);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  bVar5 = (*(byte *)(param_1 + 0x10) & 0x10) != 0;
  if (bVar5) {
    local_38 = FUN_147d1d5fc(param_2,*(undefined8 *)(param_1 + 8),iVar2,L"OptimusSkinnedMeshColor");
    local_40._0_2_ = 0x25;
  }
  else {
    local_38 = FUN_144735dd8(param_2,DAT_14ca8c050 + 0x10,0);
    local_40._0_2_ = 1;
  }
  local_40 = (uint3)(ushort)local_40;
  local_48 = &local_29;
  local_29 = bVar5;
  uVar3 = FUN_144a23c98(param_2 + 0x198,param_2 + 0x70,local_38 + 8);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  FUN_147d1d848(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_1 + 8),iVar2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948fd92 FUN_14948fd92 body=296 status=ok
// SIG undefined FUN_14948fd92(void)

void FUN_14948fd92(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  bVar2 = *(byte *)(param_1 + 0x20);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1c378) && (FUN_144b3d300(&DAT_14cc1c378), DAT_14cc1c378 == -1)) {
    FUN_140056680(&DAT_14cc1c368,L"READABLE_OUTPUT_BUFFERS");
    atexit((_func_5014 *)&LAB_1445288be);
    _Init_thread_footer(&DAT_14cc1c378);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1c380) && (FUN_144b3d300(&DAT_14cc1c380), DAT_14cc1c380 == -1)) {
    puVar6 = DAT_14cc1c368;
    if (DAT_14cc1c370 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    iVar3 = DAT_14cc1c370 + -1;
    if (DAT_14cc1c370 == 0) {
      iVar3 = 0;
    }
    DAT_14cc1c37c = FUN_144a49b4a(iVar3,puVar6);
    _Init_thread_footer(&DAT_14cc1c380);
  }
  uVar4 = FUN_149457ca6(*(undefined8 *)(param_2 + 2),&DAT_14cc1c368,DAT_14cc1c37c,bVar2 & 7);
  if (0 < *param_2) {
    lVar5 = 0;
    do {
      puVar1 = (uint *)(*(longlong *)(param_2 + 4) + lVar5 * 4);
      *puVar1 = *puVar1 | uVar4;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *param_2);
  }
  return;
}



// FUNCTION 14948feba FUN_14948feba body=259 status=ok
// SIG undefined FUN_14948feba(void)

void FUN_14948feba(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  
  iVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  iVar1 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar1) {
    lVar3 = *(longlong *)(DAT_14ca8c040 + 0x18);
    puVar7 = (undefined4 *)((longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18));
    iVar2 = *(int *)(param_2 + 0x14);
    lVar4 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar6 * 8);
    lVar10 = 0;
    do {
      lVar8 = *(longlong *)(lVar4 + 0x10);
      puVar11 = (undefined4 *)(lVar8 + 0x48 + lVar10);
      if (*(char *)(param_2 + 8) != '\0') {
        puVar11 = (undefined4 *)(lVar4 + 0xec);
      }
      *puVar7 = *puVar11;
      uVar9 = 0;
      if (*(char *)(param_2 + 8) == '\0') {
        uVar9 = *(undefined4 *)(lVar8 + 0x10 + lVar10);
      }
      puVar7[1] = uVar9;
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(param_1 + 0x38);
      lVar8 = *(longlong *)(lVar4 + 0x78);
      lVar5 = *(longlong *)(lVar4 + 0x118);
      lVar12 = *(longlong *)(lVar4 + 0xd0);
      if (*(longlong *)(lVar4 + 0xd0) == 0) {
        lVar12 = lVar3;
      }
      *(longlong *)(puVar7 + 8) = lVar12;
      if (lVar8 == 0) {
        lVar8 = lVar3;
      }
      *(longlong *)(puVar7 + 10) = lVar8;
      lVar8 = lVar5;
      if (lVar5 == 0) {
        lVar8 = lVar3;
      }
      *(longlong *)(puVar7 + 0xc) = lVar8;
      puVar7[0xe] = -(uint)(lVar5 != 0);
      lVar10 = lVar10 + 0xf8;
      puVar7 = (undefined4 *)((longlong)puVar7 + (longlong)iVar2);
    } while ((longlong)iVar1 * 0xf8 - lVar10 != 0);
  }
  return;
}



// FUNCTION 14948ffbe FUN_14948ffbe body=32 status=ok
// SIG undefined FUN_14948ffbe(void)

undefined8 FUN_14948ffbe(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Skinned Mesh Vertex Attribute");
  return param_2;
}



// FUNCTION 14948ffde FUN_14948ffde body=524 status=ok
// SIG undefined FUN_14948ffde(void)

longlong * FUN_14948ffde(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_70,"NumVertices",1);
  FUN_1400b22c2(local_80,"ReadNumVertices");
  FUN_14946b838(&local_68,local_70,local_80,0);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = local_68;
  puVar2[1] = 0;
  puVar2[1] = local_60;
  local_60 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_58._4_4_;
  local_58 = 0;
  puVar2[3] = 0;
  puVar2[3] = local_50;
  local_50 = 0;
  *(undefined4 *)(puVar2 + 4) = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_48._4_4_;
  local_48 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = local_3c;
  *(undefined4 *)(puVar2 + 5) = local_40;
  FUN_14946649a(&local_68);
  FUN_1446ddc76(&local_88,"Value",1);
  FUN_1400b22c2(local_98,"ReadValue");
  uVar4 = DAT_14cc1c100;
  FUN_1400b22c2(local_a8,"ReadNumVertices");
  local_b0 = 0;
  local_b8 = local_a8;
  FUN_149466350(&local_68,local_88,local_98,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar5) = local_68;
  *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar5) = local_60;
  local_60 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = (undefined4)local_58;
  *(undefined4 *)(lVar3 + 0x14 + lVar5) = local_58._4_4_;
  local_58 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = local_50;
  local_50 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5) = (undefined4)local_48;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = local_48._4_4_;
  local_48 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar5) = local_3c;
  *(undefined4 *)(lVar3 + 0x28 + lVar5) = local_40;
  FUN_14946649a();
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494901ec FUN_1494901ec body=365 status=ok
// SIG undefined FUN_1494901ec(void)

/* WARNING: Removing unreachable block (ram,0x0001494902f1) */

longlong * FUN_1494901ec(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140f4f540();
  puVar5 = (undefined8 *)FUN_144a63fc8();
  FUN_140f4f5a6(&DAT_14cc1c7d8,&local_30,*puVar5);
  FUN_1446f470e(&local_68,L"AttributeName",1);
  local_78 = local_30;
  local_70 = local_28;
  if (local_28 == (longlong *)0x0) {
    uVar7 = 0;
    iVar8 = 0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    iVar8 = (int)param_2[1];
    uVar7 = *(uint *)((longlong)param_2 + 0xc);
  }
  FUN_140e6511c(&local_60,&local_78);
  *(uint *)(param_2 + 1) = iVar8 + 1U;
  if (uVar7 < iVar8 + 1U) {
    FUN_14948307e(param_2,iVar8);
  }
  lVar4 = *param_2;
  lVar6 = (longlong)iVar8 * 0x38;
  *(undefined8 *)(lVar4 + lVar6) = local_68;
  *(undefined8 *)(lVar4 + 8 + lVar6) = local_60;
  *(undefined8 *)(lVar4 + 0x10 + lVar6) = local_58;
  puVar3 = (undefined4 *)(lVar4 + 0x18 + lVar6);
  *puVar3 = local_50;
  puVar3[1] = uStack_4c;
  puVar3[2] = uStack_48;
  puVar3[3] = uStack_44;
  *(undefined8 *)(lVar4 + 0x28 + lVar6) = 0;
  *(undefined8 *)(lVar4 + 0x28 + lVar6) = local_40;
  *(undefined4 *)(lVar4 + 0x30 + lVar6) = (undefined4)local_38;
  *(undefined4 *)(lVar4 + 0x34 + lVar6) = local_38._4_4_;
  local_38 = 0;
  local_40 = 0;
  if (local_28 != (longlong *)0x0) {
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
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14949035a FUN_14949035a body=25 status=ok
// SIG undefined FUN_14949035a(void)

undefined8 FUN_14949035a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_140f4f5a6(param_1,param_2,*param_3);
  return param_2;
}



// FUNCTION 149490374 FUN_149490374 body=49 status=ok
// SIG undefined FUN_149490374(void)

longlong * FUN_149490374(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a745da();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1494903a6 FUN_1494903a6 body=192 status=ok
// SIG undefined FUN_1494903a6(void)

void FUN_1494903a6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_30,L"ReadNumVertices");
  uVar1 = FUN_149459122(uVar1,local_30);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_40,L"ReadValue");
  uVar1 = FUN_149459122(uVar1,local_40);
  uVar1 = FUN_1494593ba(uVar1,3,0,0);
  local_48 = 0;
  FUN_149459206(uVar1,2,0,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149490470 FUN_149490470 body=151 status=ok
// SIG undefined FUN_149490470(void)

void FUN_149490470(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1494d4882();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1d650;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x20;
  return;
}



// FUNCTION 149490508 FUN_149490508 body=438 status=ok
// SIG undefined FUN_149490508(void)

void FUN_149490508(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b0 [2];
  longlong **local_a0;
  undefined1 *local_98;
  longlong *local_90;
  undefined2 **local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140056680(local_b0,L"DataInterfaceName");
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar3 = (longlong)local_e0;
  _Src = (void *)*param_3;
  if (lVar3 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,_Src,lVar3 * 2);
  }
  FUN_14146ec20(&local_d8,&local_e8);
  local_a0 = &local_90;
  local_98 = local_80;
  local_90 = local_b0;
  local_88 = &local_d8;
  FUN_1481b8c1c(local_80);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceSkinnedMeshVertexAttribute.ush",0,&local_d8,0
               );
  puVar2 = local_d8;
  if ((int)uStack_d0 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_90,puVar2,local_80);
  iVar1 = (int)local_88 + -1;
  if ((int)local_88 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_90,iVar1);
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_80);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494906c0 FUN_1494906c0 body=43 status=ok
// SIG undefined FUN_1494906c0(void)

void FUN_1494906c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceSkinnedMeshVertexAttribute.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 1494906ec FUN_1494906ec body=150 status=ok
// SIG undefined FUN_1494906ec(void)

longlong FUN_1494906ec(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_149490782();
  if (*param_2 != 0) {
    lVar4 = FUN_144a745da();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_149490752;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar5 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_149490752;
      }
    }
  }
  lVar5 = 0;
LAB_149490752:
  *(longlong *)(lVar3 + 0x30) = lVar5;
  *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(param_1 + 0x28);
  FUN_14485c47a(lVar3 + 0x40,param_1);
  return lVar3;
}



// FUNCTION 149490782 FUN_149490782 body=148 status=ok
// SIG undefined FUN_149490782(void)

undefined8 FUN_149490782(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145ba3b60();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149490818 FUN_149490818 body=92 status=ok
// SIG undefined FUN_149490818(void)

bool FUN_149490818(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((*(longlong *)(param_1 + 0x30) == 0) ||
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x8a8), plVar1 == (longlong *)0x0)) {
    bVar4 = false;
  }
  else {
    iVar2 = (**(code **)(*plVar1 + 0x90))();
    lVar3 = FUN_14793c26a(*(longlong *)
                           (**(longlong **)
                              (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x8a8) + 0x40) +
                           (longlong)iVar2 * 8) + 0x380,*(undefined8 *)(param_1 + 0x38));
    bVar4 = lVar3 != 0;
  }
  return bVar4;
}



// FUNCTION 149490874 FUN_149490874 body=262 status=ok
// SIG undefined FUN_149490874(void)

void FUN_149490874(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_14479d2ce(param_1 + 0x40);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    FUN_1446f470e(&local_50,L"AttributeName",1);
    FUN_14949097c(uVar1,local_48,lVar2,local_50);
    FUN_1446f470e(&local_58,L"Value",1);
    FUN_14688f02c(local_48,&local_38,local_58);
    if ((&DAT_14bcfe218)[local_30] == '\x01') {
      *(undefined8 *)(param_1 + 0x38) = local_38;
    }
    FUN_1401f9f5c(local_48);
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *puVar3 = &PTR_FUN_14bd05510;
  puVar3[1] = *(undefined8 *)(lVar2 + 0x8a8);
  puVar3[2] = uVar1;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


