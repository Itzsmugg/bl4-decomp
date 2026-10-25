// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14977403c FUN_14977403c body=38 status=ok
// SIG undefined FUN_14977403c(void)

undefined8 FUN_14977403c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDotProductDataflowNode",1);
  return param_2;
}



// FUNCTION 149774062 FUN_149774062 body=38 status=ok
// SIG undefined FUN_149774062(void)

undefined8 FUN_149774062(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"DotProduct",1);
  return param_2;
}



// FUNCTION 149774088 FUN_149774088 body=38 status=ok
// SIG undefined FUN_149774088(void)

undefined8 FUN_149774088(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vector",1);
  return param_2;
}



// FUNCTION 1497740ae FUN_1497740ae body=32 status=ok
// SIG undefined FUN_1497740ae(void)

undefined8 FUN_1497740ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497740ce FUN_1497740ce body=123 status=ok
// SIG undefined FUN_1497740ce(void)

void FUN_1497740ce(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc254f8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc254f8 = FUN_140002ddd(FUN_1467559c7,uVar1,L"DotProductDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc254f8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149774146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14977414a FUN_14977414a body=93 status=ok
// SIG undefined FUN_14977414a(void)

void FUN_14977414a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc254f8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc254f8 = FUN_140002ddd(FUN_1467559c7,uVar2,L"DotProductDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc254f8,param_1);
  return;
}



// FUNCTION 1497741a8 FUN_1497741a8 body=55 status=ok
// SIG undefined FUN_1497741a8(void)

void FUN_1497741a8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc254f8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc254f8 = FUN_140002ddd(FUN_1467559c7,uVar1,L"DotProductDataflowNode");
  }
  return;
}



// FUNCTION 1497741e0 FUN_1497741e0 body=233 status=ok
// SIG undefined FUN_1497741e0(void)

ulonglong FUN_1497741e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDotProductDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14977427a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14977427a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14977427a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14977427a:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497742cc FUN_1497742cc body=74 status=ok
// SIG undefined FUN_1497742cc(void)

void FUN_1497742cc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be58640;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  return;
}



// FUNCTION 149774316 FUN_149774316 body=74 status=ok
// SIG undefined FUN_149774316(void)

void FUN_149774316(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be58640;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  return;
}



// FUNCTION 149774384 FUN_149774384 body=96 status=ok
// SIG undefined FUN_149774384(void)

undefined1 FUN_149774384(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x198);
    puVar3 = (undefined8 *)(param_2 + 0x198);
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2 = param_2 + 0x1e0;
    param_3 = param_3 + 0x1e0;
  }
  return 1;
}



// FUNCTION 14977440c FUN_14977440c body=59 status=ok
// SIG undefined FUN_14977440c(void)

undefined8 FUN_14977440c(longlong *param_1)

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



// FUNCTION 149774458 FUN_149774458 body=40 status=ok
// SIG undefined FUN_149774458(void)

void FUN_149774458(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 1497744ce FUN_1497744ce body=38 status=ok
// SIG undefined FUN_1497744ce(void)

undefined8 FUN_1497744ce(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497744f4 FUN_1497744f4 body=38 status=ok
// SIG undefined FUN_1497744f4(void)

undefined8 FUN_1497744f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCrossProductDataflowNode",1);
  return param_2;
}



// FUNCTION 14977451a FUN_14977451a body=38 status=ok
// SIG undefined FUN_14977451a(void)

undefined8 FUN_14977451a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CrossProduct",1);
  return param_2;
}



// FUNCTION 149774540 FUN_149774540 body=38 status=ok
// SIG undefined FUN_149774540(void)

undefined8 FUN_149774540(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vector",1);
  return param_2;
}



// FUNCTION 149774566 FUN_149774566 body=32 status=ok
// SIG undefined FUN_149774566(void)

undefined8 FUN_149774566(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149774586 FUN_149774586 body=123 status=ok
// SIG undefined FUN_149774586(void)

void FUN_149774586(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25510 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25510 = FUN_140002ddd(FUN_146755a5d,uVar1,L"CrossProductDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25510,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497745fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149774602 FUN_149774602 body=93 status=ok
// SIG undefined FUN_149774602(void)

void FUN_149774602(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25510 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25510 = FUN_140002ddd(FUN_146755a5d,uVar2,L"CrossProductDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25510,param_1);
  return;
}



// FUNCTION 149774660 FUN_149774660 body=55 status=ok
// SIG undefined FUN_149774660(void)

void FUN_149774660(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25510 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25510 = FUN_140002ddd(FUN_146755a5d,uVar1,L"CrossProductDataflowNode");
  }
  return;
}



// FUNCTION 149774698 FUN_149774698 body=233 status=ok
// SIG undefined FUN_149774698(void)

ulonglong FUN_149774698(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FCrossProductDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149774732;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149774732;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149774732;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149774732:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149774784 FUN_149774784 body=75 status=ok
// SIG undefined FUN_149774784(void)

void FUN_149774784(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be588d0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined4 *)(param_2 + 0x36) = 0x38d1b717;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 1497747d0 FUN_1497747d0 body=75 status=ok
// SIG undefined FUN_1497747d0(void)

void FUN_1497747d0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be588d0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined4 *)(param_2 + 0x36) = 0x38d1b717;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 149774840 FUN_149774840 body=118 status=ok
// SIG undefined FUN_149774840(void)

undefined8 FUN_149774840(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    uVar4 = *(undefined4 *)(param_3 + 0x1a8);
    uVar5 = *(undefined4 *)(param_3 + 0x1ac);
    uVar6 = *(undefined4 *)(param_3 + 0x1b0);
    uVar7 = *(undefined4 *)(param_3 + 0x1b4);
    uVar8 = *(undefined4 *)(param_3 + 0x1b8);
    uVar9 = *(undefined4 *)(param_3 + 0x1bc);
    uVar10 = *(undefined4 *)(param_3 + 0x1c0);
    uVar11 = *(undefined4 *)(param_3 + 0x1c4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a8) = uVar4;
    *(undefined4 *)(param_2 + 0x1ac) = uVar5;
    *(undefined4 *)(param_2 + 0x1b0) = uVar6;
    *(undefined4 *)(param_2 + 0x1b4) = uVar7;
    *(undefined4 *)(param_2 + 0x1b8) = uVar8;
    *(undefined4 *)(param_2 + 0x1bc) = uVar9;
    *(undefined4 *)(param_2 + 0x1c0) = uVar10;
    *(undefined4 *)(param_2 + 0x1c4) = uVar11;
    *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_3 + 0x1c8);
    param_2 = param_2 + 0x1d0;
    param_3 = param_3 + 0x1d0;
  }
  return 1;
}



// FUNCTION 1497748de FUN_1497748de body=59 status=ok
// SIG undefined FUN_1497748de(void)

undefined8 FUN_1497748de(longlong *param_1)

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



// FUNCTION 14977492a FUN_14977492a body=40 status=ok
// SIG undefined FUN_14977492a(void)

void FUN_14977492a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 1497749a0 FUN_1497749a0 body=38 status=ok
// SIG undefined FUN_1497749a0(void)

undefined8 FUN_1497749a0(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497749c6 FUN_1497749c6 body=38 status=ok
// SIG undefined FUN_1497749c6(void)

undefined8 FUN_1497749c6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FNormalizeDataflowNode",1);
  return param_2;
}



// FUNCTION 1497749ec FUN_1497749ec body=38 status=ok
// SIG undefined FUN_1497749ec(void)

undefined8 FUN_1497749ec(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Normalize",1);
  return param_2;
}



// FUNCTION 149774a12 FUN_149774a12 body=38 status=ok
// SIG undefined FUN_149774a12(void)

undefined8 FUN_149774a12(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vector",1);
  return param_2;
}



// FUNCTION 149774a38 FUN_149774a38 body=32 status=ok
// SIG undefined FUN_149774a38(void)

undefined8 FUN_149774a38(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149774a58 FUN_149774a58 body=123 status=ok
// SIG undefined FUN_149774a58(void)

void FUN_149774a58(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25528 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25528 = FUN_140002ddd(FUN_146755af3,uVar1,L"NormalizeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25528,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149774ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149774ad4 FUN_149774ad4 body=93 status=ok
// SIG undefined FUN_149774ad4(void)

void FUN_149774ad4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25528 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25528 = FUN_140002ddd(FUN_146755af3,uVar2,L"NormalizeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25528,param_1);
  return;
}



// FUNCTION 149774b32 FUN_149774b32 body=55 status=ok
// SIG undefined FUN_149774b32(void)

void FUN_149774b32(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25528 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25528 = FUN_140002ddd(FUN_146755af3,uVar1,L"NormalizeDataflowNode");
  }
  return;
}



// FUNCTION 149774b6a FUN_149774b6a body=233 status=ok
// SIG undefined FUN_149774b6a(void)

ulonglong FUN_149774b6a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FNormalizeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149774c04;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149774c04;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149774c04;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149774c04:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149774c56 FUN_149774c56 body=49 status=ok
// SIG undefined FUN_149774c56(void)

void FUN_149774c56(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be58b60;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  return;
}



// FUNCTION 149774c88 FUN_149774c88 body=49 status=ok
// SIG undefined FUN_149774c88(void)

void FUN_149774c88(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be58b60;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  return;
}



// FUNCTION 149774cde FUN_149774cde body=90 status=ok
// SIG undefined FUN_149774cde(void)

undefined1 FUN_149774cde(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    uVar4 = *(undefined4 *)(param_3 + 0x1a4);
    uVar5 = *(undefined4 *)(param_3 + 0x1a8);
    uVar6 = *(undefined4 *)(param_3 + 0x1ac);
    uVar7 = *(undefined4 *)(param_3 + 0x1b0);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a4) = uVar4;
    *(undefined4 *)(param_2 + 0x1a8) = uVar5;
    *(undefined4 *)(param_2 + 0x1ac) = uVar6;
    *(undefined4 *)(param_2 + 0x1b0) = uVar7;
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 149774d60 FUN_149774d60 body=59 status=ok
// SIG undefined FUN_149774d60(void)

undefined8 FUN_149774d60(longlong *param_1)

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



// FUNCTION 149774dac FUN_149774dac body=40 status=ok
// SIG undefined FUN_149774dac(void)

void FUN_149774dac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 149774e22 FUN_149774e22 body=38 status=ok
// SIG undefined FUN_149774e22(void)

undefined8 FUN_149774e22(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149774e48 FUN_149774e48 body=38 status=ok
// SIG undefined FUN_149774e48(void)

undefined8 FUN_149774e48(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FLengthDataflowNode",1);
  return param_2;
}



// FUNCTION 149774e6e FUN_149774e6e body=38 status=ok
// SIG undefined FUN_149774e6e(void)

undefined8 FUN_149774e6e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Length",1);
  return param_2;
}



// FUNCTION 149774e94 FUN_149774e94 body=38 status=ok
// SIG undefined FUN_149774e94(void)

undefined8 FUN_149774e94(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vector",1);
  return param_2;
}



// FUNCTION 149774eba FUN_149774eba body=32 status=ok
// SIG undefined FUN_149774eba(void)

undefined8 FUN_149774eba(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149774eda FUN_149774eda body=123 status=ok
// SIG undefined FUN_149774eda(void)

void FUN_149774eda(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25540 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25540 = FUN_140002ddd(FUN_146755b89,uVar1,L"LengthDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25540,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149774f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149774f56 FUN_149774f56 body=93 status=ok
// SIG undefined FUN_149774f56(void)

void FUN_149774f56(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25540 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25540 = FUN_140002ddd(FUN_146755b89,uVar2,L"LengthDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25540,param_1);
  return;
}



// FUNCTION 149774fb4 FUN_149774fb4 body=55 status=ok
// SIG undefined FUN_149774fb4(void)

void FUN_149774fb4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25540 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25540 = FUN_140002ddd(FUN_146755b89,uVar1,L"LengthDataflowNode");
  }
  return;
}



// FUNCTION 149774fec FUN_149774fec body=233 status=ok
// SIG undefined FUN_149774fec(void)

ulonglong FUN_149774fec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FLengthDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149775086;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149775086;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149775086;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149775086:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497750d8 FUN_1497750d8 body=66 status=ok
// SIG undefined FUN_1497750d8(void)

void FUN_1497750d8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be58df0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x39) = 0;
  return;
}



// FUNCTION 14977511a FUN_14977511a body=66 status=ok
// SIG undefined FUN_14977511a(void)

void FUN_14977511a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be58df0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x39) = 0;
  return;
}



// FUNCTION 149775180 FUN_149775180 body=116 status=ok
// SIG undefined FUN_149775180(void)

undefined8 FUN_149775180(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    uVar4 = *(undefined4 *)(param_3 + 0x1a8);
    uVar5 = *(undefined4 *)(param_3 + 0x1ac);
    uVar6 = *(undefined4 *)(param_3 + 0x1b0);
    uVar7 = *(undefined4 *)(param_3 + 0x1b4);
    uVar8 = *(undefined4 *)(param_3 + 0x1b8);
    uVar9 = *(undefined4 *)(param_3 + 0x1bc);
    uVar10 = *(undefined4 *)(param_3 + 0x1c0);
    uVar11 = *(undefined4 *)(param_3 + 0x1c4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a8) = uVar4;
    *(undefined4 *)(param_2 + 0x1ac) = uVar5;
    *(undefined4 *)(param_2 + 0x1b0) = uVar6;
    *(undefined4 *)(param_2 + 0x1b4) = uVar7;
    *(undefined4 *)(param_2 + 0x1b8) = uVar8;
    *(undefined4 *)(param_2 + 0x1bc) = uVar9;
    *(undefined4 *)(param_2 + 0x1c0) = uVar10;
    *(undefined4 *)(param_2 + 0x1c4) = uVar11;
    *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_3 + 0x1c8);
    param_2 = param_2 + 0x1d0;
    param_3 = param_3 + 0x1d0;
  }
  return 1;
}



// FUNCTION 14977521c FUN_14977521c body=59 status=ok
// SIG undefined FUN_14977521c(void)

undefined8 FUN_14977521c(longlong *param_1)

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



// FUNCTION 149775268 FUN_149775268 body=40 status=ok
// SIG undefined FUN_149775268(void)

void FUN_149775268(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 1497752de FUN_1497752de body=38 status=ok
// SIG undefined FUN_1497752de(void)

undefined8 FUN_1497752de(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149775304 FUN_149775304 body=38 status=ok
// SIG undefined FUN_149775304(void)

undefined8 FUN_149775304(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDistanceDataflowNode",1);
  return param_2;
}



// FUNCTION 14977532a FUN_14977532a body=38 status=ok
// SIG undefined FUN_14977532a(void)

undefined8 FUN_14977532a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Distance",1);
  return param_2;
}



// FUNCTION 149775350 FUN_149775350 body=38 status=ok
// SIG undefined FUN_149775350(void)

undefined8 FUN_149775350(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Points",1);
  return param_2;
}



// FUNCTION 149775376 FUN_149775376 body=32 status=ok
// SIG undefined FUN_149775376(void)

undefined8 FUN_149775376(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149775396 FUN_149775396 body=123 status=ok
// SIG undefined FUN_149775396(void)

void FUN_149775396(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25558 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25558 = FUN_140002ddd(FUN_146755c1f,uVar1,L"DistanceDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25558,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977540e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149775412 FUN_149775412 body=93 status=ok
// SIG undefined FUN_149775412(void)

void FUN_149775412(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25558 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25558 = FUN_140002ddd(FUN_146755c1f,uVar2,L"DistanceDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25558,param_1);
  return;
}



// FUNCTION 149775470 FUN_149775470 body=55 status=ok
// SIG undefined FUN_149775470(void)

void FUN_149775470(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25558 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25558 = FUN_140002ddd(FUN_146755c1f,uVar1,L"DistanceDataflowNode");
  }
  return;
}



// FUNCTION 1497754a8 FUN_1497754a8 body=233 status=ok
// SIG undefined FUN_1497754a8(void)

ulonglong FUN_1497754a8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDistanceDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149775542;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149775542;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149775542;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149775542:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149775594 FUN_149775594 body=49 status=ok
// SIG undefined FUN_149775594(void)

void FUN_149775594(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be59090;
  *(undefined4 *)(param_2 + 0x33) = 0;
  *(undefined1 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 1497755c6 FUN_1497755c6 body=49 status=ok
// SIG undefined FUN_1497755c6(void)

void FUN_1497755c6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be59090;
  *(undefined4 *)(param_2 + 0x33) = 0;
  *(undefined1 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 14977561c FUN_14977561c body=86 status=ok
// SIG undefined FUN_14977561c(void)

undefined8 FUN_14977561c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined1 *)(param_2 + 0x19c) = *(undefined1 *)(param_3 + 0x19c);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14977569a FUN_14977569a body=59 status=ok
// SIG undefined FUN_14977569a(void)

undefined8 FUN_14977569a(longlong *param_1)

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



// FUNCTION 1497756e6 FUN_1497756e6 body=40 status=ok
// SIG undefined FUN_1497756e6(void)

void FUN_1497756e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 14977575c FUN_14977575c body=38 status=ok
// SIG undefined FUN_14977575c(void)

undefined8 FUN_14977575c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149775782 FUN_149775782 body=38 status=ok
// SIG undefined FUN_149775782(void)

undefined8 FUN_149775782(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FIsNearlyZeroDataflowNode",1);
  return param_2;
}



// FUNCTION 1497757a8 FUN_1497757a8 body=38 status=ok
// SIG undefined FUN_1497757a8(void)

undefined8 FUN_1497757a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"IsNearlyZero",1);
  return param_2;
}



// FUNCTION 1497757ce FUN_1497757ce body=38 status=ok
// SIG undefined FUN_1497757ce(void)

undefined8 FUN_1497757ce(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Utilities",1);
  return param_2;
}



// FUNCTION 1497757f4 FUN_1497757f4 body=32 status=ok
// SIG undefined FUN_1497757f4(void)

undefined8 FUN_1497757f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149775814 FUN_149775814 body=123 status=ok
// SIG undefined FUN_149775814(void)

void FUN_149775814(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25570 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25570 = FUN_140002ddd(FUN_146755cb5,uVar1,L"IsNearlyZeroDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25570,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014977588c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149775890 FUN_149775890 body=93 status=ok
// SIG undefined FUN_149775890(void)

void FUN_149775890(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25570 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25570 = FUN_140002ddd(FUN_146755cb5,uVar2,L"IsNearlyZeroDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25570,param_1);
  return;
}



// FUNCTION 1497758ee FUN_1497758ee body=55 status=ok
// SIG undefined FUN_1497758ee(void)

void FUN_1497758ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25570 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25570 = FUN_140002ddd(FUN_146755cb5,uVar1,L"IsNearlyZeroDataflowNode");
  }
  return;
}



// FUNCTION 149775926 FUN_149775926 body=233 status=ok
// SIG undefined FUN_149775926(void)

ulonglong FUN_149775926(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FIsNearlyZeroDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497759c0;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497759c0;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497759c0;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497759c0:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149775a12 FUN_149775a12 body=50 status=ok
// SIG undefined FUN_149775a12(void)

void FUN_149775a12(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be59340;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 149775a44 FUN_149775a44 body=50 status=ok
// SIG undefined FUN_149775a44(void)

void FUN_149775a44(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be59340;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 149775a9a FUN_149775a9a body=88 status=ok
// SIG undefined FUN_149775a9a(void)

undefined8 FUN_149775a9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149775b1a FUN_149775b1a body=59 status=ok
// SIG undefined FUN_149775b1a(void)

undefined8 FUN_149775b1a(longlong *param_1)

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



// FUNCTION 149775b66 FUN_149775b66 body=40 status=ok
// SIG undefined FUN_149775b66(void)

void FUN_149775b66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 149775bdc FUN_149775bdc body=38 status=ok
// SIG undefined FUN_149775bdc(void)

undefined8 FUN_149775bdc(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149775c02 FUN_149775c02 body=38 status=ok
// SIG undefined FUN_149775c02(void)

undefined8 FUN_149775c02(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRandomFloatDataflowNode",1);
  return param_2;
}



// FUNCTION 149775c28 FUN_149775c28 body=38 status=ok
// SIG undefined FUN_149775c28(void)

undefined8 FUN_149775c28(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RandomFloat",1);
  return param_2;
}



// FUNCTION 149775c4e FUN_149775c4e body=38 status=ok
// SIG undefined FUN_149775c4e(void)

undefined8 FUN_149775c4e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Random",1);
  return param_2;
}



// FUNCTION 149775c74 FUN_149775c74 body=32 status=ok
// SIG undefined FUN_149775c74(void)

undefined8 FUN_149775c74(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149775c94 FUN_149775c94 body=123 status=ok
// SIG undefined FUN_149775c94(void)

void FUN_149775c94(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25588 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25588 = FUN_140002ddd(FUN_146755d4b,uVar1,L"RandomFloatDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25588,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149775d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149775d10 FUN_149775d10 body=93 status=ok
// SIG undefined FUN_149775d10(void)

void FUN_149775d10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25588 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25588 = FUN_140002ddd(FUN_146755d4b,uVar2,L"RandomFloatDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25588,param_1);
  return;
}



// FUNCTION 149775d6e FUN_149775d6e body=55 status=ok
// SIG undefined FUN_149775d6e(void)

void FUN_149775d6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25588 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25588 = FUN_140002ddd(FUN_146755d4b,uVar1,L"RandomFloatDataflowNode");
  }
  return;
}



// FUNCTION 149775da6 FUN_149775da6 body=233 status=ok
// SIG undefined FUN_149775da6(void)

ulonglong FUN_149775da6(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FRandomFloatDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149775e40;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149775e40;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149775e40;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149775e40:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149775e92 FUN_149775e92 body=53 status=ok
// SIG undefined FUN_149775e92(void)

void FUN_149775e92(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be595e0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0x3f800000;
  return;
}



// FUNCTION 149775ec8 FUN_149775ec8 body=53 status=ok
// SIG undefined FUN_149775ec8(void)

void FUN_149775ec8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be595e0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0x3f800000;
  return;
}



// FUNCTION 149775f22 FUN_149775f22 body=88 status=ok
// SIG undefined FUN_149775f22(void)

undefined8 FUN_149775f22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a8) = *(undefined4 *)(param_3 + 0x1a8);
    param_2 = param_2 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return 1;
}



// FUNCTION 149775fa2 FUN_149775fa2 body=59 status=ok
// SIG undefined FUN_149775fa2(void)

undefined8 FUN_149775fa2(longlong *param_1)

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



// FUNCTION 149775fee FUN_149775fee body=40 status=ok
// SIG undefined FUN_149775fee(void)

void FUN_149775fee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 149776064 FUN_149776064 body=38 status=ok
// SIG undefined FUN_149776064(void)

undefined8 FUN_149776064(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14977608a FUN_14977608a body=38 status=ok
// SIG undefined FUN_14977608a(void)

undefined8 FUN_14977608a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRandomFloatInRangeDataflowNode",1);
  return param_2;
}



// FUNCTION 1497760b0 FUN_1497760b0 body=38 status=ok
// SIG undefined FUN_1497760b0(void)

undefined8 FUN_1497760b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RandomFloatInRange",1);
  return param_2;
}



// FUNCTION 1497760d6 FUN_1497760d6 body=38 status=ok
// SIG undefined FUN_1497760d6(void)

undefined8 FUN_1497760d6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Random",1);
  return param_2;
}



// FUNCTION 1497760fc FUN_1497760fc body=32 status=ok
// SIG undefined FUN_1497760fc(void)

undefined8 FUN_1497760fc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977611c FUN_14977611c body=123 status=ok
// SIG undefined FUN_14977611c(void)

void FUN_14977611c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc255a0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc255a0 = FUN_140002ddd(FUN_146755de1,uVar1,L"RandomFloatInRangeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc255a0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149776194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149776198 FUN_149776198 body=93 status=ok
// SIG undefined FUN_149776198(void)

void FUN_149776198(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc255a0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc255a0 = FUN_140002ddd(FUN_146755de1,uVar2,L"RandomFloatInRangeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc255a0,param_1);
  return;
}



// FUNCTION 1497761f6 FUN_1497761f6 body=55 status=ok
// SIG undefined FUN_1497761f6(void)

void FUN_1497761f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc255a0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc255a0 = FUN_140002ddd(FUN_146755de1,uVar1,L"RandomFloatInRangeDataflowNode");
  }
  return;
}



// FUNCTION 14977622e FUN_14977622e body=233 status=ok
// SIG undefined FUN_14977622e(void)

ulonglong FUN_14977622e(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FRandomFloatInRangeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497762c8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497762c8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497762c8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497762c8:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14977631a FUN_14977631a body=56 status=ok
// SIG undefined FUN_14977631a(void)

void FUN_14977631a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be59870;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 149776352 FUN_149776352 body=56 status=ok
// SIG undefined FUN_149776352(void)

void FUN_149776352(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be59870;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  return;
}



// FUNCTION 1497763ae FUN_1497763ae body=90 status=ok
// SIG undefined FUN_1497763ae(void)

undefined1 FUN_1497763ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    uVar4 = *(undefined4 *)(param_3 + 0x1a8);
    uVar5 = *(undefined4 *)(param_3 + 0x1ac);
    uVar6 = *(undefined4 *)(param_3 + 0x1b0);
    uVar7 = *(undefined4 *)(param_3 + 0x1b4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a8) = uVar4;
    *(undefined4 *)(param_2 + 0x1ac) = uVar5;
    *(undefined4 *)(param_2 + 0x1b0) = uVar6;
    *(undefined4 *)(param_2 + 0x1b4) = uVar7;
    param_2 = param_2 + 0x1b8;
    param_3 = param_3 + 0x1b8;
  }
  return 1;
}



// FUNCTION 149776430 FUN_149776430 body=59 status=ok
// SIG undefined FUN_149776430(void)

undefined8 FUN_149776430(longlong *param_1)

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



// FUNCTION 14977647c FUN_14977647c body=40 status=ok
// SIG undefined FUN_14977647c(void)

void FUN_14977647c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 1497764f2 FUN_1497764f2 body=38 status=ok
// SIG undefined FUN_1497764f2(void)

undefined8 FUN_1497764f2(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149776518 FUN_149776518 body=38 status=ok
// SIG undefined FUN_149776518(void)

undefined8 FUN_149776518(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRandomUnitVectorDataflowNode",1);
  return param_2;
}



// FUNCTION 14977653e FUN_14977653e body=38 status=ok
// SIG undefined FUN_14977653e(void)

undefined8 FUN_14977653e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RandomUnitVector",1);
  return param_2;
}



// FUNCTION 149776564 FUN_149776564 body=38 status=ok
// SIG undefined FUN_149776564(void)

undefined8 FUN_149776564(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Random",1);
  return param_2;
}



// FUNCTION 14977658a FUN_14977658a body=32 status=ok
// SIG undefined FUN_14977658a(void)

undefined8 FUN_14977658a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497765aa FUN_1497765aa body=123 status=ok
// SIG undefined FUN_1497765aa(void)

void FUN_1497765aa(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc255b8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc255b8 = FUN_140002ddd(FUN_146755e77,uVar1,L"RandomUnitVectorDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc255b8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149776622. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149776626 FUN_149776626 body=93 status=ok
// SIG undefined FUN_149776626(void)

void FUN_149776626(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc255b8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc255b8 = FUN_140002ddd(FUN_146755e77,uVar2,L"RandomUnitVectorDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc255b8,param_1);
  return;
}



// FUNCTION 149776684 FUN_149776684 body=55 status=ok
// SIG undefined FUN_149776684(void)

void FUN_149776684(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc255b8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc255b8 = FUN_140002ddd(FUN_146755e77,uVar1,L"RandomUnitVectorDataflowNode");
  }
  return;
}



// FUNCTION 1497766bc FUN_1497766bc body=233 status=ok
// SIG undefined FUN_1497766bc(void)

ulonglong FUN_1497766bc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FRandomUnitVectorDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149776756;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149776756;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149776756;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149776756:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497767a8 FUN_1497767a8 body=104 status=ok
// SIG undefined FUN_1497767a8(void)

void FUN_1497767a8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be59b00;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1ac) = 0;
  param_2[0x36] = 0x3ff0000000000000;
  *(undefined4 *)(param_2 + 0x37) = 0x3f490fdb;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  return;
}



// FUNCTION 149776810 FUN_149776810 body=104 status=ok
// SIG undefined FUN_149776810(void)

void FUN_149776810(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be59b00;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined8 *)((longlong)param_2 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1ac) = 0;
  param_2[0x36] = 0x3ff0000000000000;
  *(undefined4 *)(param_2 + 0x37) = 0x3f490fdb;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  return;
}



// FUNCTION 14977689c FUN_14977689c body=118 status=ok
// SIG undefined FUN_14977689c(void)

undefined1 FUN_14977689c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    uVar4 = *(undefined4 *)(param_3 + 0x1a8);
    uVar5 = *(undefined4 *)(param_3 + 0x1ac);
    uVar6 = *(undefined4 *)(param_3 + 0x1b0);
    uVar7 = *(undefined4 *)(param_3 + 0x1b4);
    uVar8 = *(undefined4 *)(param_3 + 0x1b8);
    uVar9 = *(undefined4 *)(param_3 + 0x1bc);
    uVar10 = *(undefined4 *)(param_3 + 0x1c0);
    uVar11 = *(undefined4 *)(param_3 + 0x1c4);
    uVar12 = *(undefined4 *)(param_3 + 0x1c8);
    uVar13 = *(undefined4 *)(param_3 + 0x1cc);
    uVar14 = *(undefined4 *)(param_3 + 0x1d0);
    uVar15 = *(undefined4 *)(param_3 + 0x1d4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a8) = uVar4;
    *(undefined4 *)(param_2 + 0x1ac) = uVar5;
    *(undefined4 *)(param_2 + 0x1b0) = uVar6;
    *(undefined4 *)(param_2 + 0x1b4) = uVar7;
    *(undefined4 *)(param_2 + 0x1b8) = uVar8;
    *(undefined4 *)(param_2 + 0x1bc) = uVar9;
    *(undefined4 *)(param_2 + 0x1c0) = uVar10;
    *(undefined4 *)(param_2 + 0x1c4) = uVar11;
    *(undefined4 *)(param_2 + 0x1c8) = uVar12;
    *(undefined4 *)(param_2 + 0x1cc) = uVar13;
    *(undefined4 *)(param_2 + 0x1d0) = uVar14;
    *(undefined4 *)(param_2 + 0x1d4) = uVar15;
    param_2 = param_2 + 0x1d8;
    param_3 = param_3 + 0x1d8;
  }
  return 1;
}



// FUNCTION 14977693a FUN_14977693a body=59 status=ok
// SIG undefined FUN_14977693a(void)

undefined8 FUN_14977693a(longlong *param_1)

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



// FUNCTION 149776986 FUN_149776986 body=40 status=ok
// SIG undefined FUN_149776986(void)

void FUN_149776986(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d8) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1d8) = 0;
  }
  return;
}



// FUNCTION 1497769fc FUN_1497769fc body=38 status=ok
// SIG undefined FUN_1497769fc(void)

undefined8 FUN_1497769fc(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149776a22 FUN_149776a22 body=38 status=ok
// SIG undefined FUN_149776a22(void)

undefined8 FUN_149776a22(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRandomUnitVectorInConeDataflowNode",1);
  return param_2;
}



// FUNCTION 149776a48 FUN_149776a48 body=38 status=ok
// SIG undefined FUN_149776a48(void)

undefined8 FUN_149776a48(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RandomUnitVectorInCone",1);
  return param_2;
}



// FUNCTION 149776a6e FUN_149776a6e body=38 status=ok
// SIG undefined FUN_149776a6e(void)

undefined8 FUN_149776a6e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Random",1);
  return param_2;
}



// FUNCTION 149776a94 FUN_149776a94 body=32 status=ok
// SIG undefined FUN_149776a94(void)

undefined8 FUN_149776a94(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149776ab4 FUN_149776ab4 body=123 status=ok
// SIG undefined FUN_149776ab4(void)

void FUN_149776ab4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc255d0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc255d0 = FUN_140002ddd(FUN_146755f0d,uVar1,L"RandomUnitVectorInConeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc255d0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149776b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149776b30 FUN_149776b30 body=93 status=ok
// SIG undefined FUN_149776b30(void)

void FUN_149776b30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc255d0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc255d0 = FUN_140002ddd(FUN_146755f0d,uVar2,L"RandomUnitVectorInConeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc255d0,param_1);
  return;
}



// FUNCTION 149776b8e FUN_149776b8e body=55 status=ok
// SIG undefined FUN_149776b8e(void)

void FUN_149776b8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc255d0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc255d0 = FUN_140002ddd(FUN_146755f0d,uVar1,L"RandomUnitVectorInConeDataflowNode");
  }
  return;
}



// FUNCTION 149776bc6 FUN_149776bc6 body=233 status=ok
// SIG undefined FUN_149776bc6(void)

ulonglong FUN_149776bc6(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FRandomUnitVectorInConeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149776c60;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149776c60;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149776c60;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149776c60:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149776cb2 FUN_149776cb2 body=43 status=ok
// SIG undefined FUN_149776cb2(void)

void FUN_149776cb2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be59db0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149776cde FUN_149776cde body=43 status=ok
// SIG undefined FUN_149776cde(void)

void FUN_149776cde(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be59db0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149776d2e FUN_149776d2e body=76 status=ok
// SIG undefined FUN_149776d2e(void)

undefined8 FUN_149776d2e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 149776da2 FUN_149776da2 body=59 status=ok
// SIG undefined FUN_149776da2(void)

undefined8 FUN_149776da2(longlong *param_1)

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



// FUNCTION 149776dee FUN_149776dee body=40 status=ok
// SIG undefined FUN_149776dee(void)

void FUN_149776dee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 149776e64 FUN_149776e64 body=38 status=ok
// SIG undefined FUN_149776e64(void)

undefined8 FUN_149776e64(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149776e8a FUN_149776e8a body=38 status=ok
// SIG undefined FUN_149776e8a(void)

undefined8 FUN_149776e8a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRadiansToDegreesDataflowNode",1);
  return param_2;
}



// FUNCTION 149776eb0 FUN_149776eb0 body=38 status=ok
// SIG undefined FUN_149776eb0(void)

undefined8 FUN_149776eb0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RadiansToDegrees",1);
  return param_2;
}



// FUNCTION 149776ed6 FUN_149776ed6 body=38 status=ok
// SIG undefined FUN_149776ed6(void)

undefined8 FUN_149776ed6(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trigonometry",1);
  return param_2;
}



// FUNCTION 149776efc FUN_149776efc body=32 status=ok
// SIG undefined FUN_149776efc(void)

undefined8 FUN_149776efc(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149776f1c FUN_149776f1c body=123 status=ok
// SIG undefined FUN_149776f1c(void)

void FUN_149776f1c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc255e8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc255e8 = FUN_140002ddd(FUN_146755fa3,uVar1,L"RadiansToDegreesDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc255e8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149776f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149776f98 FUN_149776f98 body=93 status=ok
// SIG undefined FUN_149776f98(void)

void FUN_149776f98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc255e8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc255e8 = FUN_140002ddd(FUN_146755fa3,uVar2,L"RadiansToDegreesDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc255e8,param_1);
  return;
}



// FUNCTION 149776ff6 FUN_149776ff6 body=55 status=ok
// SIG undefined FUN_149776ff6(void)

void FUN_149776ff6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc255e8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc255e8 = FUN_140002ddd(FUN_146755fa3,uVar1,L"RadiansToDegreesDataflowNode");
  }
  return;
}



// FUNCTION 14977702e FUN_14977702e body=233 status=ok
// SIG undefined FUN_14977702e(void)

ulonglong FUN_14977702e(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FRadiansToDegreesDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497770c8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497770c8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497770c8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497770c8:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14977711a FUN_14977711a body=43 status=ok
// SIG undefined FUN_14977711a(void)

void FUN_14977711a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5a040;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149777146 FUN_149777146 body=43 status=ok
// SIG undefined FUN_149777146(void)

void FUN_149777146(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5a040;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149777196 FUN_149777196 body=76 status=ok
// SIG undefined FUN_149777196(void)

undefined8 FUN_149777196(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14977720a FUN_14977720a body=59 status=ok
// SIG undefined FUN_14977720a(void)

undefined8 FUN_14977720a(longlong *param_1)

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



// FUNCTION 149777256 FUN_149777256 body=40 status=ok
// SIG undefined FUN_149777256(void)

void FUN_149777256(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 1497772cc FUN_1497772cc body=38 status=ok
// SIG undefined FUN_1497772cc(void)

undefined8 FUN_1497772cc(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497772f2 FUN_1497772f2 body=38 status=ok
// SIG undefined FUN_1497772f2(void)

undefined8 FUN_1497772f2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDegreesToRadiansDataflowNode",1);
  return param_2;
}



// FUNCTION 149777318 FUN_149777318 body=38 status=ok
// SIG undefined FUN_149777318(void)

undefined8 FUN_149777318(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"DegreesToRadians",1);
  return param_2;
}



// FUNCTION 14977733e FUN_14977733e body=38 status=ok
// SIG undefined FUN_14977733e(void)

undefined8 FUN_14977733e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Trigonometry",1);
  return param_2;
}



// FUNCTION 149777364 FUN_149777364 body=32 status=ok
// SIG undefined FUN_149777364(void)

undefined8 FUN_149777364(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149777384 FUN_149777384 body=123 status=ok
// SIG undefined FUN_149777384(void)

void FUN_149777384(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25600 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25600 = FUN_140002ddd(FUN_146756039,uVar1,L"DegreesToRadiansDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25600,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497773fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149777400 FUN_149777400 body=93 status=ok
// SIG undefined FUN_149777400(void)

void FUN_149777400(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25600 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25600 = FUN_140002ddd(FUN_146756039,uVar2,L"DegreesToRadiansDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25600,param_1);
  return;
}



// FUNCTION 14977745e FUN_14977745e body=55 status=ok
// SIG undefined FUN_14977745e(void)

void FUN_14977745e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25600 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25600 = FUN_140002ddd(FUN_146756039,uVar1,L"DegreesToRadiansDataflowNode");
  }
  return;
}



// FUNCTION 149777496 FUN_149777496 body=233 status=ok
// SIG undefined FUN_149777496(void)

ulonglong FUN_149777496(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FDegreesToRadiansDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149777530;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149777530;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149777530;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149777530:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149777582 FUN_149777582 body=49 status=ok
// SIG undefined FUN_149777582(void)

void FUN_149777582(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5a5f0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined4 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 1497775b4 FUN_1497775b4 body=49 status=ok
// SIG undefined FUN_1497775b4(void)

void FUN_1497775b4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5a5f0;
  *(undefined1 *)(param_2 + 0x33) = 0;
  *(undefined4 *)((longlong)param_2 + 0x19c) = 0;
  return;
}



// FUNCTION 14977760a FUN_14977760a body=76 status=ok
// SIG undefined FUN_14977760a(void)

undefined8 FUN_14977760a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 14977767e FUN_14977767e body=59 status=ok
// SIG undefined FUN_14977767e(void)

undefined8 FUN_14977767e(longlong *param_1)

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



// FUNCTION 1497776ca FUN_1497776ca body=40 status=ok
// SIG undefined FUN_1497776ca(void)

void FUN_1497776ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 149777740 FUN_149777740 body=38 status=ok
// SIG undefined FUN_149777740(void)

undefined8 FUN_149777740(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149777766 FUN_149777766 body=38 status=ok
// SIG undefined FUN_149777766(void)

undefined8 FUN_149777766(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMathConstantsDataflowNode",1);
  return param_2;
}



// FUNCTION 14977778c FUN_14977778c body=38 status=ok
// SIG undefined FUN_14977778c(void)

undefined8 FUN_14977778c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MathConstants",1);
  return param_2;
}



// FUNCTION 1497777b2 FUN_1497777b2 body=38 status=ok
// SIG undefined FUN_1497777b2(void)

undefined8 FUN_1497777b2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Utilities",1);
  return param_2;
}



// FUNCTION 1497777d8 FUN_1497777d8 body=32 status=ok
// SIG undefined FUN_1497777d8(void)

undefined8 FUN_1497777d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497777f8 FUN_1497777f8 body=123 status=ok
// SIG undefined FUN_1497777f8(void)

void FUN_1497777f8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25630 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25630 = FUN_140002ddd(FUN_1467560ff,uVar1,L"MathConstantsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25630,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149777870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149777874 FUN_149777874 body=93 status=ok
// SIG undefined FUN_149777874(void)

void FUN_149777874(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25630 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25630 = FUN_140002ddd(FUN_1467560ff,uVar2,L"MathConstantsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25630,param_1);
  return;
}



// FUNCTION 1497778d2 FUN_1497778d2 body=55 status=ok
// SIG undefined FUN_1497778d2(void)

void FUN_1497778d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25630 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25630 = FUN_140002ddd(FUN_1467560ff,uVar1,L"MathConstantsDataflowNode");
  }
  return;
}



// FUNCTION 14977790a FUN_14977790a body=233 status=ok
// SIG undefined FUN_14977790a(void)

ulonglong FUN_14977790a(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FMathConstantsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497779a4;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497779a4;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497779a4;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497779a4:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497779f6 FUN_1497779f6 body=43 status=ok
// SIG undefined FUN_1497779f6(void)

void FUN_1497779f6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5a890;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149777a22 FUN_149777a22 body=43 status=ok
// SIG undefined FUN_149777a22(void)

void FUN_149777a22(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5a890;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 149777a72 FUN_149777a72 body=76 status=ok
// SIG undefined FUN_149777a72(void)

undefined8 FUN_149777a72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_3 + 0x198);
    param_2 = param_2 + 0x1a0;
    param_3 = param_3 + 0x1a0;
  }
  return 1;
}



// FUNCTION 149777ae6 FUN_149777ae6 body=59 status=ok
// SIG undefined FUN_149777ae6(void)

undefined8 FUN_149777ae6(longlong *param_1)

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



// FUNCTION 149777b32 FUN_149777b32 body=40 status=ok
// SIG undefined FUN_149777b32(void)

void FUN_149777b32(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1a0) = 0;
  }
  return;
}



// FUNCTION 149777ba8 FUN_149777ba8 body=38 status=ok
// SIG undefined FUN_149777ba8(void)

undefined8 FUN_149777ba8(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149777bce FUN_149777bce body=38 status=ok
// SIG undefined FUN_149777bce(void)

undefined8 FUN_149777bce(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FOneMinusDataflowNode",1);
  return param_2;
}



// FUNCTION 149777bf4 FUN_149777bf4 body=38 status=ok
// SIG undefined FUN_149777bf4(void)

undefined8 FUN_149777bf4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"OneMinus",1);
  return param_2;
}



// FUNCTION 149777c1a FUN_149777c1a body=38 status=ok
// SIG undefined FUN_149777c1a(void)

undefined8 FUN_149777c1a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Float",1);
  return param_2;
}



// FUNCTION 149777c40 FUN_149777c40 body=32 status=ok
// SIG undefined FUN_149777c40(void)

undefined8 FUN_149777c40(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149777c60 FUN_149777c60 body=123 status=ok
// SIG undefined FUN_149777c60(void)

void FUN_149777c60(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25648 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25648 = FUN_140002ddd(FUN_146756195,uVar1,L"OneMinusDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25648,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149777cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149777cdc FUN_149777cdc body=93 status=ok
// SIG undefined FUN_149777cdc(void)

void FUN_149777cdc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25648 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25648 = FUN_140002ddd(FUN_146756195,uVar2,L"OneMinusDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25648,param_1);
  return;
}



// FUNCTION 149777d3a FUN_149777d3a body=55 status=ok
// SIG undefined FUN_149777d3a(void)

void FUN_149777d3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25648 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25648 = FUN_140002ddd(FUN_146756195,uVar1,L"OneMinusDataflowNode");
  }
  return;
}



// FUNCTION 149777d72 FUN_149777d72 body=233 status=ok
// SIG undefined FUN_149777d72(void)

ulonglong FUN_149777d72(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FOneMinusDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149777e0c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149777e0c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149777e0c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149777e0c:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149777e5e FUN_149777e5e body=59 status=ok
// SIG undefined FUN_149777e5e(void)

void FUN_149777e5e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be3ae70;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0;
  return;
}



// FUNCTION 149777e9a FUN_149777e9a body=59 status=ok
// SIG undefined FUN_149777e9a(void)

void FUN_149777e9a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be3ae70;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  *(undefined4 *)(param_2 + 0x37) = 0;
  return;
}



// FUNCTION 149777efa FUN_149777efa body=115 status=ok
// SIG undefined FUN_149777efa(void)

undefined1 FUN_149777efa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    FUN_144a787a6(param_2 + 0x1a8,param_3 + 0x1a8);
    *(undefined4 *)(param_2 + 0x1b8) = *(undefined4 *)(param_3 + 0x1b8);
    param_2 = param_2 + 0x1c0;
    param_3 = param_3 + 0x1c0;
  }
  return 1;
}



// FUNCTION 149777f96 FUN_149777f96 body=59 status=ok
// SIG undefined FUN_149777f96(void)

undefined8 FUN_149777f96(longlong *param_1)

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



// FUNCTION 149777fe2 FUN_149777fe2 body=67 status=ok
// SIG undefined FUN_149777fe2(void)

void FUN_149777fe2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    *param_2 = &PTR_FUN_14be3ae70;
    if (param_2[0x35] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 149778076 FUN_149778076 body=67 status=ok
// SIG undefined FUN_149778076(void)

void FUN_149778076(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be3af90;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 1497780ba FUN_1497780ba body=67 status=ok
// SIG undefined FUN_1497780ba(void)

void FUN_1497780ba(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be3af90;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  return;
}



// FUNCTION 149778122 FUN_149778122 body=127 status=ok
// SIG undefined FUN_149778122(void)

undefined8 FUN_149778122(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x19c);
    uVar2 = *(undefined4 *)(param_3 + 0x1a0);
    uVar3 = *(undefined4 *)(param_3 + 0x1a4);
    uVar4 = *(undefined4 *)(param_3 + 0x1a8);
    uVar5 = *(undefined4 *)(param_3 + 0x1ac);
    uVar6 = *(undefined4 *)(param_3 + 0x1b0);
    uVar7 = *(undefined4 *)(param_3 + 0x1b4);
    *(undefined4 *)(param_2 + 0x198) = *(undefined4 *)(param_3 + 0x198);
    *(undefined4 *)(param_2 + 0x19c) = uVar1;
    *(undefined4 *)(param_2 + 0x1a0) = uVar2;
    *(undefined4 *)(param_2 + 0x1a4) = uVar3;
    *(undefined4 *)(param_2 + 0x1a8) = uVar4;
    *(undefined4 *)(param_2 + 0x1ac) = uVar5;
    *(undefined4 *)(param_2 + 0x1b0) = uVar6;
    *(undefined4 *)(param_2 + 0x1b4) = uVar7;
    FUN_144a787a6(param_2 + 0x1b8,param_3 + 0x1b8);
    *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_3 + 0x1c8);
    param_2 = param_2 + 0x1d0;
    param_3 = param_3 + 0x1d0;
  }
  return 1;
}



// FUNCTION 1497781ca FUN_1497781ca body=59 status=ok
// SIG undefined FUN_1497781ca(void)

undefined8 FUN_1497781ca(longlong *param_1)

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



// FUNCTION 149778216 FUN_149778216 body=67 status=ok
// SIG undefined FUN_149778216(void)

void FUN_149778216(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    *param_2 = &PTR_FUN_14be3af90;
    if (param_2[0x37] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x3a) = 0;
  }
  return;
}



// FUNCTION 1497782aa FUN_1497782aa body=49 status=ok
// SIG undefined FUN_1497782aa(void)

void FUN_1497782aa(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5ade0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  return;
}



// FUNCTION 1497782dc FUN_1497782dc body=49 status=ok
// SIG undefined FUN_1497782dc(void)

void FUN_1497782dc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5ade0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ac) = 0;
  return;
}



// FUNCTION 149778332 FUN_149778332 body=63 status=ok
// SIG undefined FUN_149778332(void)

undefined1 FUN_149778332(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14977874a(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 14977839a FUN_14977839a body=59 status=ok
// SIG undefined FUN_14977839a(void)

undefined8 FUN_14977839a(longlong *param_1)

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



// FUNCTION 1497783e6 FUN_1497783e6 body=67 status=ok
// SIG undefined FUN_1497783e6(void)

void FUN_1497783e6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x37) == '\x01') {
    *param_2 = &PTR_FUN_14be5ade0;
    if (param_2[0x33] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x37) = 0;
  }
  return;
}



// FUNCTION 149778478 FUN_149778478 body=68 status=ok
// SIG undefined FUN_149778478(void)

undefined8 * FUN_149778478(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be5ade0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497784bc FUN_1497784bc body=38 status=ok
// SIG undefined FUN_1497784bc(void)

undefined8 FUN_1497784bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FPointsToMeshDataflowNode",1);
  return param_2;
}



// FUNCTION 1497784e2 FUN_1497784e2 body=38 status=ok
// SIG undefined FUN_1497784e2(void)

undefined8 FUN_1497784e2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"PointsToMesh",1);
  return param_2;
}



// FUNCTION 149778508 FUN_149778508 body=38 status=ok
// SIG undefined FUN_149778508(void)

undefined8 FUN_149778508(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Mesh|Utilities",1);
  return param_2;
}



// FUNCTION 14977852e FUN_14977852e body=32 status=ok
// SIG undefined FUN_14977852e(void)

undefined8 FUN_14977852e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 14977854e FUN_14977854e body=123 status=ok
// SIG undefined FUN_14977854e(void)

void FUN_14977854e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc25690 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25690 = FUN_140002ddd(FUN_146756357,uVar1,L"PointsToMeshDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc25690,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497785c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497785ca FUN_1497785ca body=93 status=ok
// SIG undefined FUN_1497785ca(void)

void FUN_1497785ca(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc25690 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc25690 = FUN_140002ddd(FUN_146756357,uVar2,L"PointsToMeshDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc25690,param_1);
  return;
}



// FUNCTION 149778628 FUN_149778628 body=55 status=ok
// SIG undefined FUN_149778628(void)

void FUN_149778628(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25690 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25690 = FUN_140002ddd(FUN_146756357,uVar1,L"PointsToMeshDataflowNode");
  }
  return;
}



// FUNCTION 149778660 FUN_149778660 body=233 status=ok
// SIG undefined FUN_149778660(void)

ulonglong FUN_149778660(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FPointsToMeshDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497786fa;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497786fa;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497786fa;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497786fa:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14977874a FUN_14977874a body=100 status=ok
// SIG undefined FUN_14977874a(void)

longlong FUN_14977874a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  FUN_1405b70a4(param_1 + 0x198,param_2 + 0x198);
  lVar1 = *(longlong *)(param_2 + 0x1a8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x1a8);
    }
  }
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  return param_1;
}



// FUNCTION 1497787b0 FUN_1497787b0 body=84 status=ok
// SIG undefined FUN_1497787b0(void)

void FUN_1497787b0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5b090;
  param_2[0x3a] = 0;
  *(undefined4 *)(param_2 + 0x3b) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  *(undefined1 *)(param_2 + 0x39) = 0;
  return;
}



// FUNCTION 149778804 FUN_149778804 body=84 status=ok
// SIG undefined FUN_149778804(void)

void FUN_149778804(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5b090;
  param_2[0x3a] = 0;
  *(undefined4 *)(param_2 + 0x3b) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  *(undefined1 *)(param_2 + 0x39) = 0;
  return;
}



// FUNCTION 14977887c FUN_14977887c body=63 status=ok
// SIG undefined FUN_14977887c(void)

undefined1 FUN_14977887c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149778d9e(param_2,param_3);
    param_3 = param_3 + 0x1e0;
    param_2 = param_2 + 0x1e0;
  }
  return 1;
}



// FUNCTION 1497788e4 FUN_1497788e4 body=59 status=ok
// SIG undefined FUN_1497788e4(void)

undefined8 FUN_1497788e4(longlong *param_1)

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



// FUNCTION 149778930 FUN_149778930 body=40 status=ok
// SIG undefined FUN_149778930(void)

void FUN_149778930(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 1497789a6 FUN_1497789a6 body=38 status=ok
// SIG undefined FUN_1497789a6(void)

undefined8 FUN_1497789a6(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497789cc FUN_1497789cc body=38 status=ok
// SIG undefined FUN_1497789cc(void)

undefined8 FUN_1497789cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FBoxToMeshDataflowNode",1);
  return param_2;
}



// FUNCTION 1497789f2 FUN_1497789f2 body=38 status=ok
// SIG undefined FUN_1497789f2(void)

undefined8 FUN_1497789f2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BoxToMesh",1);
  return param_2;
}



// FUNCTION 149778a18 FUN_149778a18 body=38 status=ok
// SIG undefined FUN_149778a18(void)

undefined8 FUN_149778a18(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Mesh|Utilities",1);
  return param_2;
}



// FUNCTION 149778a3e FUN_149778a3e body=32 status=ok
// SIG undefined FUN_149778a3e(void)

undefined8 FUN_149778a3e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149778a5e FUN_149778a5e body=123 status=ok
// SIG undefined FUN_149778a5e(void)

void FUN_149778a5e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc256a8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc256a8 = FUN_140002ddd(FUN_1467563ed,uVar1,L"BoxToMeshDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc256a8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149778ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149778ada FUN_149778ada body=93 status=ok
// SIG undefined FUN_149778ada(void)

void FUN_149778ada(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc256a8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc256a8 = FUN_140002ddd(FUN_1467563ed,uVar2,L"BoxToMeshDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc256a8,param_1);
  return;
}



// FUNCTION 149778b38 FUN_149778b38 body=55 status=ok
// SIG undefined FUN_149778b38(void)

void FUN_149778b38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc256a8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc256a8 = FUN_140002ddd(FUN_1467563ed,uVar1,L"BoxToMeshDataflowNode");
  }
  return;
}



// FUNCTION 149778b70 FUN_149778b70 body=233 status=ok
// SIG undefined FUN_149778b70(void)

ulonglong FUN_149778b70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FBoxToMeshDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149778c0a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149778c0a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149778c0a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149778c0a:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 149778c5a FUN_149778c5a body=323 status=ok
// SIG undefined FUN_149778c5a(void)

undefined8 * FUN_149778c5a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(local_80,"SurfaceRender");
  FUN_1446ddc76(&local_88,"FDynamicMesh3",1);
  FUN_1446ddc76(&local_48,&DAT_14a1ac36b,1);
  local_98 = (undefined8 *)0x0;
  local_90 = 1;
  FUN_1401b309e(&local_98,1,0);
  *local_98 = local_48;
  FUN_1496fe870(&local_70,local_80,local_88,&local_98);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_1496fcee0(param_2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = 0;
  *puVar1 = local_70;
  local_70 = 0;
  *(undefined4 *)(puVar1 + 1) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar1 + 0xc) = local_68._4_4_;
  local_68 = 0;
  puVar1[2] = local_60;
  puVar1[3] = 0;
  puVar1[3] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar1 + 4) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar1 + 0x24) = local_50._4_4_;
  local_50 = 0;
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149778d9e FUN_149778d9e body=139 status=ok
// SIG undefined FUN_149778d9e(void)

longlong FUN_149778d9e(longlong param_1,longlong param_2)

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
  longlong lVar12;
  
  FUN_146fc06e2();
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  uVar1 = *(undefined4 *)(param_2 + 0x198);
  uVar2 = *(undefined4 *)(param_2 + 0x19c);
  uVar3 = *(undefined4 *)(param_2 + 0x1a0);
  uVar4 = *(undefined4 *)(param_2 + 0x1a4);
  uVar5 = *(undefined4 *)(param_2 + 0x1a8);
  uVar6 = *(undefined4 *)(param_2 + 0x1ac);
  uVar7 = *(undefined4 *)(param_2 + 0x1b0);
  uVar8 = *(undefined4 *)(param_2 + 0x1b4);
  uVar9 = *(undefined4 *)(param_2 + 0x1bc);
  uVar10 = *(undefined4 *)(param_2 + 0x1c0);
  uVar11 = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = uVar9;
  *(undefined4 *)(param_1 + 0x1c0) = uVar10;
  *(undefined4 *)(param_1 + 0x1c4) = uVar11;
  *(undefined4 *)(param_1 + 0x1a8) = uVar5;
  *(undefined4 *)(param_1 + 0x1ac) = uVar6;
  *(undefined4 *)(param_1 + 0x1b0) = uVar7;
  *(undefined4 *)(param_1 + 0x1b4) = uVar8;
  *(undefined4 *)(param_1 + 0x198) = uVar1;
  *(undefined4 *)(param_1 + 0x19c) = uVar2;
  *(undefined4 *)(param_1 + 0x1a0) = uVar3;
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  lVar12 = *(longlong *)(param_2 + 0x1d0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0x1d0);
    }
  }
  *(longlong *)(param_1 + 0x1d0) = lVar12;
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  return param_1;
}



// FUNCTION 149778e2a FUN_149778e2a body=64 status=ok
// SIG undefined FUN_149778e2a(void)

void FUN_149778e2a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5b330;
  param_2[0x33] = 0;
  FUN_1400b22c2(param_2 + 0x34,&DAT_149e02088);
  return;
}



// FUNCTION 149778e6a FUN_149778e6a body=64 status=ok
// SIG undefined FUN_149778e6a(void)

void FUN_149778e6a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5b330;
  param_2[0x33] = 0;
  FUN_1400b22c2(param_2 + 0x34,&DAT_149e02088);
  return;
}



// FUNCTION 149778ece FUN_149778ece body=63 status=ok
// SIG undefined FUN_149778ece(void)

undefined1 FUN_149778ece(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497792e6(param_2,param_3);
    param_3 = param_3 + 0x1b0;
    param_2 = param_2 + 0x1b0;
  }
  return 1;
}



// FUNCTION 149778f36 FUN_149778f36 body=59 status=ok
// SIG undefined FUN_149778f36(void)

undefined8 FUN_149778f36(longlong *param_1)

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



// FUNCTION 149778f82 FUN_149778f82 body=67 status=ok
// SIG undefined FUN_149778f82(void)

void FUN_149778f82(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x36) == '\x01') {
    *param_2 = &PTR_FUN_14be5b330;
    if (param_2[0x34] != 0) {
      FUN_1400020a8();
    }
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x36) = 0;
  }
  return;
}



// FUNCTION 149779014 FUN_149779014 body=68 status=ok
// SIG undefined FUN_149779014(void)

undefined8 * FUN_149779014(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be5b330;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149779058 FUN_149779058 body=38 status=ok
// SIG undefined FUN_149779058(void)

undefined8 FUN_149779058(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMeshInfoDataflowNode",1);
  return param_2;
}



// FUNCTION 14977907e FUN_14977907e body=38 status=ok
// SIG undefined FUN_14977907e(void)

undefined8 FUN_14977907e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MeshInfo",1);
  return param_2;
}



// FUNCTION 1497790a4 FUN_1497790a4 body=38 status=ok
// SIG undefined FUN_1497790a4(void)

undefined8 FUN_1497790a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Mesh|Utilities",1);
  return param_2;
}



// FUNCTION 1497790ca FUN_1497790ca body=32 status=ok
// SIG undefined FUN_1497790ca(void)

undefined8 FUN_1497790ca(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497790ea FUN_1497790ea body=123 status=ok
// SIG undefined FUN_1497790ea(void)

void FUN_1497790ea(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc256c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc256c0 = FUN_140002ddd(FUN_146756483,uVar1,L"MeshInfoDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc256c0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149779162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149779166 FUN_149779166 body=93 status=ok
// SIG undefined FUN_149779166(void)

void FUN_149779166(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc256c0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc256c0 = FUN_140002ddd(FUN_146756483,uVar2,L"MeshInfoDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc256c0,param_1);
  return;
}



// FUNCTION 1497791c4 FUN_1497791c4 body=55 status=ok
// SIG undefined FUN_1497791c4(void)

void FUN_1497791c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc256c0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc256c0 = FUN_140002ddd(FUN_146756483,uVar1,L"MeshInfoDataflowNode");
  }
  return;
}



// FUNCTION 1497791fc FUN_1497791fc body=233 status=ok
// SIG undefined FUN_1497791fc(void)

ulonglong FUN_1497791fc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  wchar_t *pwVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = param_2;
  FUN_1400021e4(&local_38,&local_48);
  FUN_1446ddc76(local_60,"FMeshInfoDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149779296;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149779296;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149779296;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149779296:
  if (pwVar5 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar5);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1497792e6 FUN_1497792e6 body=91 status=ok
// SIG undefined FUN_1497792e6(void)

longlong FUN_1497792e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_146fc06e2();
  lVar1 = *(longlong *)(param_2 + 0x198);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x198);
    }
  }
  *(longlong *)(param_1 + 0x198) = lVar1;
  FUN_144a787a6(param_1 + 0x1a0,param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 149779342 FUN_149779342 body=57 status=ok
// SIG undefined FUN_149779342(void)

void FUN_149779342(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5b5c0;
  param_2[0x33] = 0;
  FUN_1414db454(param_2 + 0x34);
  return;
}



// FUNCTION 14977937c FUN_14977937c body=57 status=ok
// SIG undefined FUN_14977937c(void)

void FUN_14977937c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be5b5c0;
  param_2[0x33] = 0;
  FUN_1414db454(param_2 + 0x34);
  return;
}



// FUNCTION 1497793da FUN_1497793da body=63 status=ok
// SIG undefined FUN_1497793da(void)

undefined1 FUN_1497793da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14977992c(param_2,param_3);
    param_3 = param_3 + 0x250;
    param_2 = param_2 + 0x250;
  }
  return 1;
}



// FUNCTION 149779442 FUN_149779442 body=59 status=ok
// SIG undefined FUN_149779442(void)

undefined8 FUN_149779442(longlong *param_1)

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


