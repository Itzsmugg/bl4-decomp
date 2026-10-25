// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146fc5c6c FUN_146fc5c6c body=40 status=ok
// SIG undefined FUN_146fc5c6c(void)

void FUN_146fc5c6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 146fc5ce2 FUN_146fc5ce2 body=38 status=ok
// SIG undefined FUN_146fc5ce2(void)

undefined8 FUN_146fc5ce2(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc5d08 FUN_146fc5d08 body=38 status=ok
// SIG undefined FUN_146fc5d08(void)

undefined8 FUN_146fc5d08(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowVectorMakeVec4Node",1);
  return param_2;
}



// FUNCTION 146fc5d2e FUN_146fc5d2e body=38 status=ok
// SIG undefined FUN_146fc5d2e(void)

undefined8 FUN_146fc5d2e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MakeVector4",1);
  return param_2;
}



// FUNCTION 146fc5d54 FUN_146fc5d54 body=38 status=ok
// SIG undefined FUN_146fc5d54(void)

undefined8 FUN_146fc5d54(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vectors",1);
  return param_2;
}



// FUNCTION 146fc5d7a FUN_146fc5d7a body=32 status=ok
// SIG undefined FUN_146fc5d7a(void)

undefined8 FUN_146fc5d7a(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fc5d9a FUN_146fc5d9a body=123 status=ok
// SIG undefined FUN_146fc5d9a(void)

void FUN_146fc5d9a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cca0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cca0 = FUN_140002ddd(FUN_146291a5e,uVar1,L"DataflowVectorMakeVec4Node");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cca0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fc5e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fc5e16 FUN_146fc5e16 body=93 status=ok
// SIG undefined FUN_146fc5e16(void)

void FUN_146fc5e16(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cca0 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cca0 = FUN_140002ddd(FUN_146291a5e,uVar2,L"DataflowVectorMakeVec4Node");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cca0,param_1);
  return;
}



// FUNCTION 146fc5e74 FUN_146fc5e74 body=55 status=ok
// SIG undefined FUN_146fc5e74(void)

void FUN_146fc5e74(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cca0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cca0 = FUN_140002ddd(FUN_146291a5e,uVar1,L"DataflowVectorMakeVec4Node");
  }
  return;
}



// FUNCTION 146fc5eac FUN_146fc5eac body=233 status=ok
// SIG undefined FUN_146fc5eac(void)

ulonglong FUN_146fc5eac(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowVectorMakeVec4Node",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fc5f46;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fc5f46;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fc5f46;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fc5f46:
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



// FUNCTION 146fc5f98 FUN_146fc5f98 body=63 status=ok
// SIG undefined FUN_146fc5f98(void)

void FUN_146fc5f98(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9250;
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



// FUNCTION 146fc5fd8 FUN_146fc5fd8 body=63 status=ok
// SIG undefined FUN_146fc5fd8(void)

void FUN_146fc5fd8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9250;
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



// FUNCTION 146fc603c FUN_146fc603c body=118 status=ok
// SIG undefined FUN_146fc603c(void)

undefined1 FUN_146fc603c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    uVar1 = *(undefined4 *)(param_3 + 0x1a4);
    uVar2 = *(undefined4 *)(param_3 + 0x1a8);
    uVar3 = *(undefined4 *)(param_3 + 0x1ac);
    uVar4 = *(undefined4 *)(param_3 + 0x1b0);
    uVar5 = *(undefined4 *)(param_3 + 0x1b4);
    uVar6 = *(undefined4 *)(param_3 + 0x1b8);
    uVar7 = *(undefined4 *)(param_3 + 0x1bc);
    uVar8 = *(undefined4 *)(param_3 + 0x1c0);
    uVar9 = *(undefined4 *)(param_3 + 0x1c4);
    uVar10 = *(undefined4 *)(param_3 + 0x1c8);
    uVar11 = *(undefined4 *)(param_3 + 0x1cc);
    uVar12 = *(undefined4 *)(param_3 + 0x1d0);
    uVar13 = *(undefined4 *)(param_3 + 0x1d4);
    uVar14 = *(undefined4 *)(param_3 + 0x1d8);
    uVar15 = *(undefined4 *)(param_3 + 0x1dc);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    *(undefined4 *)(param_2 + 0x1a4) = uVar1;
    *(undefined4 *)(param_2 + 0x1a8) = uVar2;
    *(undefined4 *)(param_2 + 0x1ac) = uVar3;
    *(undefined4 *)(param_2 + 0x1b0) = uVar4;
    *(undefined4 *)(param_2 + 0x1b4) = uVar5;
    *(undefined4 *)(param_2 + 0x1b8) = uVar6;
    *(undefined4 *)(param_2 + 0x1bc) = uVar7;
    *(undefined4 *)(param_2 + 0x1c0) = uVar8;
    *(undefined4 *)(param_2 + 0x1c4) = uVar9;
    *(undefined4 *)(param_2 + 0x1c8) = uVar10;
    *(undefined4 *)(param_2 + 0x1cc) = uVar11;
    *(undefined4 *)(param_2 + 0x1d0) = uVar12;
    *(undefined4 *)(param_2 + 0x1d4) = uVar13;
    *(undefined4 *)(param_2 + 0x1d8) = uVar14;
    *(undefined4 *)(param_2 + 0x1dc) = uVar15;
    param_2 = param_2 + 0x1e0;
    param_3 = param_3 + 0x1e0;
  }
  return 1;
}



// FUNCTION 146fc60da FUN_146fc60da body=59 status=ok
// SIG undefined FUN_146fc60da(void)

undefined8 FUN_146fc60da(longlong *param_1)

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



// FUNCTION 146fc6126 FUN_146fc6126 body=40 status=ok
// SIG undefined FUN_146fc6126(void)

void FUN_146fc6126(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 146fc619c FUN_146fc619c body=38 status=ok
// SIG undefined FUN_146fc619c(void)

undefined8 FUN_146fc619c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc61c2 FUN_146fc61c2 body=38 status=ok
// SIG undefined FUN_146fc61c2(void)

undefined8 FUN_146fc61c2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowVectorBreakNode",1);
  return param_2;
}



// FUNCTION 146fc61e8 FUN_146fc61e8 body=38 status=ok
// SIG undefined FUN_146fc61e8(void)

undefined8 FUN_146fc61e8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"BreakVector",1);
  return param_2;
}



// FUNCTION 146fc620e FUN_146fc620e body=38 status=ok
// SIG undefined FUN_146fc620e(void)

undefined8 FUN_146fc620e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vectors",1);
  return param_2;
}



// FUNCTION 146fc6234 FUN_146fc6234 body=32 status=ok
// SIG undefined FUN_146fc6234(void)

undefined8 FUN_146fc6234(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fc6254 FUN_146fc6254 body=123 status=ok
// SIG undefined FUN_146fc6254(void)

void FUN_146fc6254(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99ccb8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ccb8 = FUN_140002ddd(FUN_146291abe,uVar1,L"DataflowVectorBreakNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99ccb8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fc62cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fc62d0 FUN_146fc62d0 body=93 status=ok
// SIG undefined FUN_146fc62d0(void)

void FUN_146fc62d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99ccb8 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99ccb8 = FUN_140002ddd(FUN_146291abe,uVar2,L"DataflowVectorBreakNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99ccb8,param_1);
  return;
}



// FUNCTION 146fc632e FUN_146fc632e body=55 status=ok
// SIG undefined FUN_146fc632e(void)

void FUN_146fc632e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99ccb8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ccb8 = FUN_140002ddd(FUN_146291abe,uVar1,L"DataflowVectorBreakNode");
  }
  return;
}



// FUNCTION 146fc6366 FUN_146fc6366 body=233 status=ok
// SIG undefined FUN_146fc6366(void)

ulonglong FUN_146fc6366(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowVectorBreakNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fc6400;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fc6400;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fc6400;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fc6400:
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



// FUNCTION 146fc6452 FUN_146fc6452 body=77 status=ok
// SIG undefined FUN_146fc6452(void)

void FUN_146fc6452(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9360;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  return;
}



// FUNCTION 146fc64a0 FUN_146fc64a0 body=77 status=ok
// SIG undefined FUN_146fc64a0(void)

void FUN_146fc64a0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9360;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  return;
}



// FUNCTION 146fc6512 FUN_146fc6512 body=96 status=ok
// SIG undefined FUN_146fc6512(void)

undefined1 FUN_146fc6512(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x1a0);
    puVar3 = (undefined8 *)(param_2 + 0x1a0);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2 = param_2 + 0x200;
    param_3 = param_3 + 0x200;
  }
  return 1;
}



// FUNCTION 146fc659a FUN_146fc659a body=59 status=ok
// SIG undefined FUN_146fc659a(void)

undefined8 FUN_146fc659a(longlong *param_1)

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



// FUNCTION 146fc65e6 FUN_146fc65e6 body=40 status=ok
// SIG undefined FUN_146fc65e6(void)

void FUN_146fc65e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x200) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x200) = 0;
  }
  return;
}



// FUNCTION 146fc665c FUN_146fc665c body=38 status=ok
// SIG undefined FUN_146fc665c(void)

undefined8 FUN_146fc665c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc6682 FUN_146fc6682 body=38 status=ok
// SIG undefined FUN_146fc6682(void)

undefined8 FUN_146fc6682(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowVectorAddNode",1);
  return param_2;
}



// FUNCTION 146fc66a8 FUN_146fc66a8 body=38 status=ok
// SIG undefined FUN_146fc66a8(void)

undefined8 FUN_146fc66a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"AddVector",1);
  return param_2;
}



// FUNCTION 146fc66ce FUN_146fc66ce body=38 status=ok
// SIG undefined FUN_146fc66ce(void)

undefined8 FUN_146fc66ce(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vectors",1);
  return param_2;
}



// FUNCTION 146fc66f4 FUN_146fc66f4 body=32 status=ok
// SIG undefined FUN_146fc66f4(void)

undefined8 FUN_146fc66f4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fc6714 FUN_146fc6714 body=123 status=ok
// SIG undefined FUN_146fc6714(void)

void FUN_146fc6714(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99ccd0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ccd0 = FUN_140002ddd(FUN_146291b1e,uVar1,L"DataflowVectorAddNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99ccd0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fc678c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fc6790 FUN_146fc6790 body=93 status=ok
// SIG undefined FUN_146fc6790(void)

void FUN_146fc6790(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99ccd0 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99ccd0 = FUN_140002ddd(FUN_146291b1e,uVar2,L"DataflowVectorAddNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99ccd0,param_1);
  return;
}



// FUNCTION 146fc67ee FUN_146fc67ee body=55 status=ok
// SIG undefined FUN_146fc67ee(void)

void FUN_146fc67ee(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99ccd0 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99ccd0 = FUN_140002ddd(FUN_146291b1e,uVar1,L"DataflowVectorAddNode");
  }
  return;
}



// FUNCTION 146fc6826 FUN_146fc6826 body=233 status=ok
// SIG undefined FUN_146fc6826(void)

ulonglong FUN_146fc6826(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowVectorAddNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fc68c0;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fc68c0;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fc68c0;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fc68c0:
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



// FUNCTION 146fc6912 FUN_146fc6912 body=77 status=ok
// SIG undefined FUN_146fc6912(void)

void FUN_146fc6912(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9470;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  return;
}



// FUNCTION 146fc6960 FUN_146fc6960 body=77 status=ok
// SIG undefined FUN_146fc6960(void)

void FUN_146fc6960(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9470;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  return;
}



// FUNCTION 146fc69d2 FUN_146fc69d2 body=96 status=ok
// SIG undefined FUN_146fc69d2(void)

undefined1 FUN_146fc69d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x1a0);
    puVar3 = (undefined8 *)(param_2 + 0x1a0);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2 = param_2 + 0x200;
    param_3 = param_3 + 0x200;
  }
  return 1;
}



// FUNCTION 146fc6a5a FUN_146fc6a5a body=59 status=ok
// SIG undefined FUN_146fc6a5a(void)

undefined8 FUN_146fc6a5a(longlong *param_1)

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



// FUNCTION 146fc6aa6 FUN_146fc6aa6 body=40 status=ok
// SIG undefined FUN_146fc6aa6(void)

void FUN_146fc6aa6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x200) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x200) = 0;
  }
  return;
}



// FUNCTION 146fc6b1c FUN_146fc6b1c body=38 status=ok
// SIG undefined FUN_146fc6b1c(void)

undefined8 FUN_146fc6b1c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc6b42 FUN_146fc6b42 body=38 status=ok
// SIG undefined FUN_146fc6b42(void)

undefined8 FUN_146fc6b42(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowVectorSubtractNode",1);
  return param_2;
}



// FUNCTION 146fc6b68 FUN_146fc6b68 body=38 status=ok
// SIG undefined FUN_146fc6b68(void)

undefined8 FUN_146fc6b68(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"SubtractVector",1);
  return param_2;
}



// FUNCTION 146fc6b8e FUN_146fc6b8e body=38 status=ok
// SIG undefined FUN_146fc6b8e(void)

undefined8 FUN_146fc6b8e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vectors",1);
  return param_2;
}



// FUNCTION 146fc6bb4 FUN_146fc6bb4 body=32 status=ok
// SIG undefined FUN_146fc6bb4(void)

undefined8 FUN_146fc6bb4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fc6bd4 FUN_146fc6bd4 body=123 status=ok
// SIG undefined FUN_146fc6bd4(void)

void FUN_146fc6bd4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cce8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cce8 = FUN_140002ddd(FUN_146291b7e,uVar1,L"DataflowVectorSubtractNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cce8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fc6c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fc6c50 FUN_146fc6c50 body=93 status=ok
// SIG undefined FUN_146fc6c50(void)

void FUN_146fc6c50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cce8 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cce8 = FUN_140002ddd(FUN_146291b7e,uVar2,L"DataflowVectorSubtractNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cce8,param_1);
  return;
}



// FUNCTION 146fc6cae FUN_146fc6cae body=55 status=ok
// SIG undefined FUN_146fc6cae(void)

void FUN_146fc6cae(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cce8 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cce8 = FUN_140002ddd(FUN_146291b7e,uVar1,L"DataflowVectorSubtractNode");
  }
  return;
}



// FUNCTION 146fc6ce6 FUN_146fc6ce6 body=233 status=ok
// SIG undefined FUN_146fc6ce6(void)

ulonglong FUN_146fc6ce6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowVectorSubtractNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fc6d80;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fc6d80;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fc6d80;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fc6d80:
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



// FUNCTION 146fc6dd2 FUN_146fc6dd2 body=74 status=ok
// SIG undefined FUN_146fc6dd2(void)

void FUN_146fc6dd2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9580;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  return;
}



// FUNCTION 146fc6e1c FUN_146fc6e1c body=74 status=ok
// SIG undefined FUN_146fc6e1c(void)

void FUN_146fc6e1c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9580;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  return;
}



// FUNCTION 146fc6e8a FUN_146fc6e8a body=96 status=ok
// SIG undefined FUN_146fc6e8a(void)

undefined1 FUN_146fc6e8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x1a0);
    puVar3 = (undefined8 *)(param_2 + 0x1a0);
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2 = param_2 + 0x1f0;
    param_3 = param_3 + 0x1f0;
  }
  return 1;
}



// FUNCTION 146fc6f12 FUN_146fc6f12 body=59 status=ok
// SIG undefined FUN_146fc6f12(void)

undefined8 FUN_146fc6f12(longlong *param_1)

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



// FUNCTION 146fc6f5e FUN_146fc6f5e body=40 status=ok
// SIG undefined FUN_146fc6f5e(void)

void FUN_146fc6f5e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1f0) = 0;
  }
  return;
}



// FUNCTION 146fc6fd4 FUN_146fc6fd4 body=38 status=ok
// SIG undefined FUN_146fc6fd4(void)

undefined8 FUN_146fc6fd4(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc6ffa FUN_146fc6ffa body=38 status=ok
// SIG undefined FUN_146fc6ffa(void)

undefined8 FUN_146fc6ffa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowVectorDotProductNode",1);
  return param_2;
}



// FUNCTION 146fc7020 FUN_146fc7020 body=38 status=ok
// SIG undefined FUN_146fc7020(void)

undefined8 FUN_146fc7020(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"VectorDotProduct",1);
  return param_2;
}



// FUNCTION 146fc7046 FUN_146fc7046 body=38 status=ok
// SIG undefined FUN_146fc7046(void)

undefined8 FUN_146fc7046(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vectors",1);
  return param_2;
}



// FUNCTION 146fc706c FUN_146fc706c body=32 status=ok
// SIG undefined FUN_146fc706c(void)

undefined8 FUN_146fc706c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fc708c FUN_146fc708c body=123 status=ok
// SIG undefined FUN_146fc708c(void)

void FUN_146fc708c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd00 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd00 = FUN_140002ddd(FUN_146291bde,uVar1,L"DataflowVectorDotProductNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cd00,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fc7104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fc7108 FUN_146fc7108 body=93 status=ok
// SIG undefined FUN_146fc7108(void)

void FUN_146fc7108(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cd00 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cd00 = FUN_140002ddd(FUN_146291bde,uVar2,L"DataflowVectorDotProductNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cd00,param_1);
  return;
}



// FUNCTION 146fc7166 FUN_146fc7166 body=55 status=ok
// SIG undefined FUN_146fc7166(void)

void FUN_146fc7166(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd00 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd00 = FUN_140002ddd(FUN_146291bde,uVar1,L"DataflowVectorDotProductNode");
  }
  return;
}



// FUNCTION 146fc719e FUN_146fc719e body=233 status=ok
// SIG undefined FUN_146fc719e(void)

ulonglong FUN_146fc719e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowVectorDotProductNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fc7238;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fc7238;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fc7238;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fc7238:
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



// FUNCTION 146fc728a FUN_146fc728a body=60 status=ok
// SIG undefined FUN_146fc728a(void)

void FUN_146fc728a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9690;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 146fc72c6 FUN_146fc72c6 body=60 status=ok
// SIG undefined FUN_146fc72c6(void)

void FUN_146fc72c6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9690;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 146fc7326 FUN_146fc7326 body=104 status=ok
// SIG undefined FUN_146fc7326(void)

undefined8 FUN_146fc7326(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    uVar1 = *(undefined4 *)(param_3 + 0x1a4);
    uVar2 = *(undefined4 *)(param_3 + 0x1a8);
    uVar3 = *(undefined4 *)(param_3 + 0x1ac);
    uVar4 = *(undefined4 *)(param_3 + 0x1b0);
    uVar5 = *(undefined4 *)(param_3 + 0x1b4);
    uVar6 = *(undefined4 *)(param_3 + 0x1b8);
    uVar7 = *(undefined4 *)(param_3 + 0x1bc);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    *(undefined4 *)(param_2 + 0x1a4) = uVar1;
    *(undefined4 *)(param_2 + 0x1a8) = uVar2;
    *(undefined4 *)(param_2 + 0x1ac) = uVar3;
    *(undefined4 *)(param_2 + 0x1b0) = uVar4;
    *(undefined4 *)(param_2 + 0x1b4) = uVar5;
    *(undefined4 *)(param_2 + 0x1b8) = uVar6;
    *(undefined4 *)(param_2 + 0x1bc) = uVar7;
    *(undefined8 *)(param_2 + 0x1c0) = *(undefined8 *)(param_3 + 0x1c0);
    param_2 = param_2 + 0x1d0;
    param_3 = param_3 + 0x1d0;
  }
  return 1;
}



// FUNCTION 146fc73b6 FUN_146fc73b6 body=59 status=ok
// SIG undefined FUN_146fc73b6(void)

undefined8 FUN_146fc73b6(longlong *param_1)

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



// FUNCTION 146fc7402 FUN_146fc7402 body=40 status=ok
// SIG undefined FUN_146fc7402(void)

void FUN_146fc7402(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 146fc7478 FUN_146fc7478 body=38 status=ok
// SIG undefined FUN_146fc7478(void)

undefined8 FUN_146fc7478(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc749e FUN_146fc749e body=38 status=ok
// SIG undefined FUN_146fc749e(void)

undefined8 FUN_146fc749e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowVectorLengthNode",1);
  return param_2;
}



// FUNCTION 146fc74c4 FUN_146fc74c4 body=38 status=ok
// SIG undefined FUN_146fc74c4(void)

undefined8 FUN_146fc74c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"VectorLength",1);
  return param_2;
}



// FUNCTION 146fc74ea FUN_146fc74ea body=38 status=ok
// SIG undefined FUN_146fc74ea(void)

undefined8 FUN_146fc74ea(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vectors",1);
  return param_2;
}



// FUNCTION 146fc7510 FUN_146fc7510 body=32 status=ok
// SIG undefined FUN_146fc7510(void)

undefined8 FUN_146fc7510(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fc7530 FUN_146fc7530 body=123 status=ok
// SIG undefined FUN_146fc7530(void)

void FUN_146fc7530(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd18 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd18 = FUN_140002ddd(FUN_146291c3e,uVar1,L"DataflowVectorLengthNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cd18,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fc75a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fc75ac FUN_146fc75ac body=93 status=ok
// SIG undefined FUN_146fc75ac(void)

void FUN_146fc75ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cd18 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cd18 = FUN_140002ddd(FUN_146291c3e,uVar2,L"DataflowVectorLengthNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cd18,param_1);
  return;
}



// FUNCTION 146fc760a FUN_146fc760a body=55 status=ok
// SIG undefined FUN_146fc760a(void)

void FUN_146fc760a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd18 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd18 = FUN_140002ddd(FUN_146291c3e,uVar1,L"DataflowVectorLengthNode");
  }
  return;
}



// FUNCTION 146fc7642 FUN_146fc7642 body=233 status=ok
// SIG undefined FUN_146fc7642(void)

ulonglong FUN_146fc7642(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowVectorLengthNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fc76dc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fc76dc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fc76dc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fc76dc:
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



// FUNCTION 146fc772e FUN_146fc772e body=60 status=ok
// SIG undefined FUN_146fc772e(void)

void FUN_146fc772e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb97a0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 146fc776a FUN_146fc776a body=60 status=ok
// SIG undefined FUN_146fc776a(void)

void FUN_146fc776a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb97a0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  return;
}



// FUNCTION 146fc77ca FUN_146fc77ca body=104 status=ok
// SIG undefined FUN_146fc77ca(void)

undefined8 FUN_146fc77ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    uVar1 = *(undefined4 *)(param_3 + 0x1a4);
    uVar2 = *(undefined4 *)(param_3 + 0x1a8);
    uVar3 = *(undefined4 *)(param_3 + 0x1ac);
    uVar4 = *(undefined4 *)(param_3 + 0x1b0);
    uVar5 = *(undefined4 *)(param_3 + 0x1b4);
    uVar6 = *(undefined4 *)(param_3 + 0x1b8);
    uVar7 = *(undefined4 *)(param_3 + 0x1bc);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    *(undefined4 *)(param_2 + 0x1a4) = uVar1;
    *(undefined4 *)(param_2 + 0x1a8) = uVar2;
    *(undefined4 *)(param_2 + 0x1ac) = uVar3;
    *(undefined4 *)(param_2 + 0x1b0) = uVar4;
    *(undefined4 *)(param_2 + 0x1b4) = uVar5;
    *(undefined4 *)(param_2 + 0x1b8) = uVar6;
    *(undefined4 *)(param_2 + 0x1bc) = uVar7;
    *(undefined8 *)(param_2 + 0x1c0) = *(undefined8 *)(param_3 + 0x1c0);
    param_2 = param_2 + 0x1d0;
    param_3 = param_3 + 0x1d0;
  }
  return 1;
}



// FUNCTION 146fc785a FUN_146fc785a body=59 status=ok
// SIG undefined FUN_146fc785a(void)

undefined8 FUN_146fc785a(longlong *param_1)

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



// FUNCTION 146fc78a6 FUN_146fc78a6 body=40 status=ok
// SIG undefined FUN_146fc78a6(void)

void FUN_146fc78a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 146fc791c FUN_146fc791c body=38 status=ok
// SIG undefined FUN_146fc791c(void)

undefined8 FUN_146fc791c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc7942 FUN_146fc7942 body=38 status=ok
// SIG undefined FUN_146fc7942(void)

undefined8 FUN_146fc7942(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowVectorSquaredLengthNode",1);
  return param_2;
}



// FUNCTION 146fc7968 FUN_146fc7968 body=38 status=ok
// SIG undefined FUN_146fc7968(void)

undefined8 FUN_146fc7968(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"VectorSquaredLength",1);
  return param_2;
}



// FUNCTION 146fc798e FUN_146fc798e body=38 status=ok
// SIG undefined FUN_146fc798e(void)

undefined8 FUN_146fc798e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vectors",1);
  return param_2;
}



// FUNCTION 146fc79b4 FUN_146fc79b4 body=32 status=ok
// SIG undefined FUN_146fc79b4(void)

undefined8 FUN_146fc79b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fc79d4 FUN_146fc79d4 body=123 status=ok
// SIG undefined FUN_146fc79d4(void)

void FUN_146fc79d4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd30 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd30 = FUN_140002ddd(FUN_146291c9e,uVar1,L"DataflowVectorSquaredLengthNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cd30,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fc7a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fc7a50 FUN_146fc7a50 body=93 status=ok
// SIG undefined FUN_146fc7a50(void)

void FUN_146fc7a50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cd30 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cd30 = FUN_140002ddd(FUN_146291c9e,uVar2,L"DataflowVectorSquaredLengthNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cd30,param_1);
  return;
}



// FUNCTION 146fc7aae FUN_146fc7aae body=55 status=ok
// SIG undefined FUN_146fc7aae(void)

void FUN_146fc7aae(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd30 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd30 = FUN_140002ddd(FUN_146291c9e,uVar1,L"DataflowVectorSquaredLengthNode");
  }
  return;
}



// FUNCTION 146fc7ae6 FUN_146fc7ae6 body=233 status=ok
// SIG undefined FUN_146fc7ae6(void)

ulonglong FUN_146fc7ae6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowVectorSquaredLengthNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fc7b80;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fc7b80;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fc7b80;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fc7b80:
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



// FUNCTION 146fc7bd2 FUN_146fc7bd2 body=74 status=ok
// SIG undefined FUN_146fc7bd2(void)

void FUN_146fc7bd2(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb98b0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  return;
}



// FUNCTION 146fc7c1c FUN_146fc7c1c body=74 status=ok
// SIG undefined FUN_146fc7c1c(void)

void FUN_146fc7c1c(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb98b0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  return;
}



// FUNCTION 146fc7c8a FUN_146fc7c8a body=96 status=ok
// SIG undefined FUN_146fc7c8a(void)

undefined1 FUN_146fc7c8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x1a0);
    puVar3 = (undefined8 *)(param_2 + 0x1a0);
    for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2 = param_2 + 0x1f0;
    param_3 = param_3 + 0x1f0;
  }
  return 1;
}



// FUNCTION 146fc7d12 FUN_146fc7d12 body=59 status=ok
// SIG undefined FUN_146fc7d12(void)

undefined8 FUN_146fc7d12(longlong *param_1)

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



// FUNCTION 146fc7d5e FUN_146fc7d5e body=40 status=ok
// SIG undefined FUN_146fc7d5e(void)

void FUN_146fc7d5e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1f0) = 0;
  }
  return;
}



// FUNCTION 146fc7dd4 FUN_146fc7dd4 body=38 status=ok
// SIG undefined FUN_146fc7dd4(void)

undefined8 FUN_146fc7dd4(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc7dfa FUN_146fc7dfa body=38 status=ok
// SIG undefined FUN_146fc7dfa(void)

undefined8 FUN_146fc7dfa(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowVectorDistanceNode",1);
  return param_2;
}



// FUNCTION 146fc7e20 FUN_146fc7e20 body=38 status=ok
// SIG undefined FUN_146fc7e20(void)

undefined8 FUN_146fc7e20(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"VectorDistance",1);
  return param_2;
}



// FUNCTION 146fc7e46 FUN_146fc7e46 body=38 status=ok
// SIG undefined FUN_146fc7e46(void)

undefined8 FUN_146fc7e46(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vectors",1);
  return param_2;
}



// FUNCTION 146fc7e6c FUN_146fc7e6c body=32 status=ok
// SIG undefined FUN_146fc7e6c(void)

undefined8 FUN_146fc7e6c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fc7e8c FUN_146fc7e8c body=123 status=ok
// SIG undefined FUN_146fc7e8c(void)

void FUN_146fc7e8c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd48 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd48 = FUN_140002ddd(FUN_146291cfe,uVar1,L"DataflowVectorDistanceNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cd48,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fc7f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fc7f08 FUN_146fc7f08 body=93 status=ok
// SIG undefined FUN_146fc7f08(void)

void FUN_146fc7f08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cd48 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cd48 = FUN_140002ddd(FUN_146291cfe,uVar2,L"DataflowVectorDistanceNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cd48,param_1);
  return;
}



// FUNCTION 146fc7f66 FUN_146fc7f66 body=55 status=ok
// SIG undefined FUN_146fc7f66(void)

void FUN_146fc7f66(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd48 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd48 = FUN_140002ddd(FUN_146291cfe,uVar1,L"DataflowVectorDistanceNode");
  }
  return;
}



// FUNCTION 146fc7f9e FUN_146fc7f9e body=233 status=ok
// SIG undefined FUN_146fc7f9e(void)

ulonglong FUN_146fc7f9e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowVectorDistanceNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fc8038;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fc8038;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fc8038;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fc8038:
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



// FUNCTION 146fc808a FUN_146fc808a body=77 status=ok
// SIG undefined FUN_146fc808a(void)

void FUN_146fc808a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb99c0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  return;
}



// FUNCTION 146fc80d8 FUN_146fc80d8 body=77 status=ok
// SIG undefined FUN_146fc80d8(void)

void FUN_146fc80d8(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb99c0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  return;
}



// FUNCTION 146fc814a FUN_146fc814a body=96 status=ok
// SIG undefined FUN_146fc814a(void)

undefined1 FUN_146fc814a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x1a0);
    puVar3 = (undefined8 *)(param_2 + 0x1a0);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2 = param_2 + 0x200;
    param_3 = param_3 + 0x200;
  }
  return 1;
}



// FUNCTION 146fc81d2 FUN_146fc81d2 body=59 status=ok
// SIG undefined FUN_146fc81d2(void)

undefined8 FUN_146fc81d2(longlong *param_1)

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



// FUNCTION 146fc821e FUN_146fc821e body=40 status=ok
// SIG undefined FUN_146fc821e(void)

void FUN_146fc821e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x200) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x200) = 0;
  }
  return;
}



// FUNCTION 146fc8294 FUN_146fc8294 body=38 status=ok
// SIG undefined FUN_146fc8294(void)

undefined8 FUN_146fc8294(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc82ba FUN_146fc82ba body=38 status=ok
// SIG undefined FUN_146fc82ba(void)

undefined8 FUN_146fc82ba(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowVectorCrossProductNode",1);
  return param_2;
}



// FUNCTION 146fc82e0 FUN_146fc82e0 body=38 status=ok
// SIG undefined FUN_146fc82e0(void)

undefined8 FUN_146fc82e0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"VectorCrossProduct",1);
  return param_2;
}



// FUNCTION 146fc8306 FUN_146fc8306 body=38 status=ok
// SIG undefined FUN_146fc8306(void)

undefined8 FUN_146fc8306(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vectors",1);
  return param_2;
}



// FUNCTION 146fc832c FUN_146fc832c body=32 status=ok
// SIG undefined FUN_146fc832c(void)

undefined8 FUN_146fc832c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fc834c FUN_146fc834c body=123 status=ok
// SIG undefined FUN_146fc834c(void)

void FUN_146fc834c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd60 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd60 = FUN_140002ddd(FUN_146291d5e,uVar1,L"DataflowVectorCrossProductNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cd60,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fc83c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fc83c8 FUN_146fc83c8 body=93 status=ok
// SIG undefined FUN_146fc83c8(void)

void FUN_146fc83c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cd60 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cd60 = FUN_140002ddd(FUN_146291d5e,uVar2,L"DataflowVectorCrossProductNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cd60,param_1);
  return;
}



// FUNCTION 146fc8426 FUN_146fc8426 body=55 status=ok
// SIG undefined FUN_146fc8426(void)

void FUN_146fc8426(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd60 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd60 = FUN_140002ddd(FUN_146291d5e,uVar1,L"DataflowVectorCrossProductNode");
  }
  return;
}



// FUNCTION 146fc845e FUN_146fc845e body=233 status=ok
// SIG undefined FUN_146fc845e(void)

ulonglong FUN_146fc845e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowVectorCrossProductNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fc84f8;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fc84f8;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fc84f8;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fc84f8:
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



// FUNCTION 146fc854a FUN_146fc854a body=74 status=ok
// SIG undefined FUN_146fc854a(void)

void FUN_146fc854a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9ad0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  return;
}



// FUNCTION 146fc8594 FUN_146fc8594 body=74 status=ok
// SIG undefined FUN_146fc8594(void)

void FUN_146fc8594(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9ad0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  return;
}



// FUNCTION 146fc8602 FUN_146fc8602 body=96 status=ok
// SIG undefined FUN_146fc8602(void)

undefined1 FUN_146fc8602(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    puVar2 = (undefined8 *)(param_3 + 0x1a0);
    puVar3 = (undefined8 *)(param_2 + 0x1a0);
    for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    param_2 = param_2 + 0x1f0;
    param_3 = param_3 + 0x1f0;
  }
  return 1;
}



// FUNCTION 146fc868a FUN_146fc868a body=59 status=ok
// SIG undefined FUN_146fc868a(void)

undefined8 FUN_146fc868a(longlong *param_1)

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



// FUNCTION 146fc86d6 FUN_146fc86d6 body=40 status=ok
// SIG undefined FUN_146fc86d6(void)

void FUN_146fc86d6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1f0) = 0;
  }
  return;
}



// FUNCTION 146fc874c FUN_146fc874c body=38 status=ok
// SIG undefined FUN_146fc874c(void)

undefined8 FUN_146fc874c(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc8772 FUN_146fc8772 body=38 status=ok
// SIG undefined FUN_146fc8772(void)

undefined8 FUN_146fc8772(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowVectorScaleNode",1);
  return param_2;
}



// FUNCTION 146fc8798 FUN_146fc8798 body=38 status=ok
// SIG undefined FUN_146fc8798(void)

undefined8 FUN_146fc8798(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ScaleVector",1);
  return param_2;
}



// FUNCTION 146fc87be FUN_146fc87be body=38 status=ok
// SIG undefined FUN_146fc87be(void)

undefined8 FUN_146fc87be(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vectors",1);
  return param_2;
}



// FUNCTION 146fc87e4 FUN_146fc87e4 body=32 status=ok
// SIG undefined FUN_146fc87e4(void)

undefined8 FUN_146fc87e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fc8804 FUN_146fc8804 body=123 status=ok
// SIG undefined FUN_146fc8804(void)

void FUN_146fc8804(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd78 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd78 = FUN_140002ddd(FUN_146291dbe,uVar1,L"DataflowVectorScaleNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cd78,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fc887c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fc8880 FUN_146fc8880 body=93 status=ok
// SIG undefined FUN_146fc8880(void)

void FUN_146fc8880(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cd78 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cd78 = FUN_140002ddd(FUN_146291dbe,uVar2,L"DataflowVectorScaleNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cd78,param_1);
  return;
}



// FUNCTION 146fc88de FUN_146fc88de body=55 status=ok
// SIG undefined FUN_146fc88de(void)

void FUN_146fc88de(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd78 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd78 = FUN_140002ddd(FUN_146291dbe,uVar1,L"DataflowVectorScaleNode");
  }
  return;
}



// FUNCTION 146fc8916 FUN_146fc8916 body=233 status=ok
// SIG undefined FUN_146fc8916(void)

ulonglong FUN_146fc8916(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowVectorScaleNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fc89b0;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fc89b0;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fc89b0;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fc89b0:
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



// FUNCTION 146fc8a02 FUN_146fc8a02 body=63 status=ok
// SIG undefined FUN_146fc8a02(void)

void FUN_146fc8a02(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9be0;
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



// FUNCTION 146fc8a42 FUN_146fc8a42 body=63 status=ok
// SIG undefined FUN_146fc8a42(void)

void FUN_146fc8a42(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_149fb9be0;
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



// FUNCTION 146fc8aa6 FUN_146fc8aa6 body=118 status=ok
// SIG undefined FUN_146fc8aa6(void)

undefined1 FUN_146fc8aa6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
    uVar1 = *(undefined4 *)(param_3 + 0x1a4);
    uVar2 = *(undefined4 *)(param_3 + 0x1a8);
    uVar3 = *(undefined4 *)(param_3 + 0x1ac);
    uVar4 = *(undefined4 *)(param_3 + 0x1b0);
    uVar5 = *(undefined4 *)(param_3 + 0x1b4);
    uVar6 = *(undefined4 *)(param_3 + 0x1b8);
    uVar7 = *(undefined4 *)(param_3 + 0x1bc);
    uVar8 = *(undefined4 *)(param_3 + 0x1c0);
    uVar9 = *(undefined4 *)(param_3 + 0x1c4);
    uVar10 = *(undefined4 *)(param_3 + 0x1c8);
    uVar11 = *(undefined4 *)(param_3 + 0x1cc);
    uVar12 = *(undefined4 *)(param_3 + 0x1d0);
    uVar13 = *(undefined4 *)(param_3 + 0x1d4);
    uVar14 = *(undefined4 *)(param_3 + 0x1d8);
    uVar15 = *(undefined4 *)(param_3 + 0x1dc);
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_3 + 0x1a0);
    *(undefined4 *)(param_2 + 0x1a4) = uVar1;
    *(undefined4 *)(param_2 + 0x1a8) = uVar2;
    *(undefined4 *)(param_2 + 0x1ac) = uVar3;
    *(undefined4 *)(param_2 + 0x1b0) = uVar4;
    *(undefined4 *)(param_2 + 0x1b4) = uVar5;
    *(undefined4 *)(param_2 + 0x1b8) = uVar6;
    *(undefined4 *)(param_2 + 0x1bc) = uVar7;
    *(undefined4 *)(param_2 + 0x1c0) = uVar8;
    *(undefined4 *)(param_2 + 0x1c4) = uVar9;
    *(undefined4 *)(param_2 + 0x1c8) = uVar10;
    *(undefined4 *)(param_2 + 0x1cc) = uVar11;
    *(undefined4 *)(param_2 + 0x1d0) = uVar12;
    *(undefined4 *)(param_2 + 0x1d4) = uVar13;
    *(undefined4 *)(param_2 + 0x1d8) = uVar14;
    *(undefined4 *)(param_2 + 0x1dc) = uVar15;
    param_2 = param_2 + 0x1e0;
    param_3 = param_3 + 0x1e0;
  }
  return 1;
}



// FUNCTION 146fc8b44 FUN_146fc8b44 body=59 status=ok
// SIG undefined FUN_146fc8b44(void)

undefined8 FUN_146fc8b44(longlong *param_1)

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



// FUNCTION 146fc8b90 FUN_146fc8b90 body=40 status=ok
// SIG undefined FUN_146fc8b90(void)

void FUN_146fc8b90(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 146fc8c06 FUN_146fc8c06 body=38 status=ok
// SIG undefined FUN_146fc8c06(void)

undefined8 FUN_146fc8c06(undefined8 param_1,int param_2)

{
  FUN_146fc8eba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc8c2c FUN_146fc8c2c body=38 status=ok
// SIG undefined FUN_146fc8c2c(void)

undefined8 FUN_146fc8c2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FDataflowVectorNormalize",1);
  return param_2;
}



// FUNCTION 146fc8c52 FUN_146fc8c52 body=38 status=ok
// SIG undefined FUN_146fc8c52(void)

undefined8 FUN_146fc8c52(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"NormalizeVector",1);
  return param_2;
}



// FUNCTION 146fc8c78 FUN_146fc8c78 body=38 status=ok
// SIG undefined FUN_146fc8c78(void)

undefined8 FUN_146fc8c78(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Math|Vectors",1);
  return param_2;
}



// FUNCTION 146fc8c9e FUN_146fc8c9e body=32 status=ok
// SIG undefined FUN_146fc8c9e(void)

undefined8 FUN_146fc8c9e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 146fc8cbe FUN_146fc8cbe body=123 status=ok
// SIG undefined FUN_146fc8cbe(void)

void FUN_146fc8cbe(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd90 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd90 = FUN_140002ddd(FUN_146291e1e,uVar1,L"DataflowVectorNormalize");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14c99cd90,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146fc8d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 146fc8d3a FUN_146fc8d3a body=93 status=ok
// SIG undefined FUN_146fc8d3a(void)

void FUN_146fc8d3a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14c99cd90 == 0) {
    uVar2 = FUN_140d02f86();
    DAT_14c99cd90 = FUN_140002ddd(FUN_146291e1e,uVar2,L"DataflowVectorNormalize");
  }
  FUN_1468fbe3e(uVar1,DAT_14c99cd90,param_1);
  return;
}



// FUNCTION 146fc8d98 FUN_146fc8d98 body=55 status=ok
// SIG undefined FUN_146fc8d98(void)

void FUN_146fc8d98(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99cd90 == 0) {
    uVar1 = FUN_140d02f86();
    DAT_14c99cd90 = FUN_140002ddd(FUN_146291e1e,uVar1,L"DataflowVectorNormalize");
  }
  return;
}



// FUNCTION 146fc8dd0 FUN_146fc8dd0 body=233 status=ok
// SIG undefined FUN_146fc8dd0(void)

ulonglong FUN_146fc8dd0(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FDataflowVectorNormalize",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_146fc8e6a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_146fc8e6a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_146fc8e6a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_146fc8e6a:
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



// FUNCTION 146fc8eba FUN_146fc8eba body=229 status=ok
// SIG undefined FUN_146fc8eba(void)

void FUN_146fc8eba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149fb9cf0;
  FUN_146fb7590();
  FUN_146fb7ac2(param_1);
  FUN_144760e21(param_1[0x30],*(undefined4 *)(param_1 + 0x31));
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc0402(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc04ba(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc0572(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc062a(param_1 + 5);
  return;
}



// FUNCTION 146fc907a FUN_146fc907a body=59 status=ok
// SIG undefined FUN_146fc907a(void)

undefined8 FUN_146fc907a(longlong *param_1)

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



// FUNCTION 146fc911c FUN_146fc911c body=132 status=ok
// SIG undefined FUN_146fc911c(void)

void FUN_146fc911c(longlong param_1,int param_2)

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



// FUNCTION 146fc91a2 FUN_146fc91a2 body=52 status=ok
// SIG undefined FUN_146fc91a2(void)

void FUN_146fc91a2(longlong *param_1)

{
  FUN_146fc91d6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fc91d6 FUN_146fc91d6 body=89 status=ok
// SIG undefined FUN_146fc91d6(void)

void FUN_146fc91d6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 146fc9230 FUN_146fc9230 body=52 status=ok
// SIG undefined FUN_146fc9230(void)

void FUN_146fc9230(longlong *param_1)

{
  FUN_146fc9264();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146fc9264 FUN_146fc9264 body=343 status=ok
// SIG undefined FUN_146fc9264(void)

void FUN_146fc9264(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
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
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc93bc FUN_146fc93bc body=151 status=ok
// SIG undefined FUN_146fc93bc(void)

void FUN_146fc93bc(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *param_2 = &PTR_LAB_149faf1c0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(ulong *)(param_2 + 5) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48._4_4_;
  *(undefined4 *)(param_2 + 6) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_48.Data4._4_4_;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x44) = 1;
  *(byte *)((longlong)param_2 + 0x45) = *(byte *)((longlong)param_2 + 0x45) & 0xf0;
  FUN_1461d1208(param_2);
  *param_2 = &PTR_FUN_149faf840;
  param_2[9] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc9454 FUN_146fc9454 body=151 status=ok
// SIG undefined FUN_146fc9454(void)

void FUN_146fc9454(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *param_2 = &PTR_LAB_149faf1c0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(ulong *)(param_2 + 5) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48._4_4_;
  *(undefined4 *)(param_2 + 6) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_48.Data4._4_4_;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x44) = 1;
  *(byte *)((longlong)param_2 + 0x45) = *(byte *)((longlong)param_2 + 0x45) & 0xf0;
  FUN_1461d1208(param_2);
  *param_2 = &PTR_FUN_149faf840;
  param_2[9] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc9584 FUN_146fc9584 body=59 status=ok
// SIG undefined FUN_146fc9584(void)

undefined8 FUN_146fc9584(longlong *param_1)

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



// FUNCTION 146fc9626 FUN_146fc9626 body=163 status=ok
// SIG undefined FUN_146fc9626(void)

void FUN_146fc9626(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *param_2 = &PTR_LAB_149faf1c0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(ulong *)(param_2 + 5) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48._4_4_;
  *(undefined4 *)(param_2 + 6) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_48.Data4._4_4_;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x44) = 1;
  *(byte *)((longlong)param_2 + 0x45) = *(byte *)((longlong)param_2 + 0x45) & 0xf0;
  FUN_1461d1208(param_2);
  param_2[9] = 0;
  *param_2 = &PTR_FUN_149faf890;
  param_2[10] = 0xffffffffffffffff;
  param_2[0xb] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc96ca FUN_146fc96ca body=163 status=ok
// SIG undefined FUN_146fc96ca(void)

void FUN_146fc96ca(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *param_2 = &PTR_LAB_149faf1c0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(ulong *)(param_2 + 5) = local_48.Data1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_48._4_4_;
  *(undefined4 *)(param_2 + 6) = local_48.Data4._0_4_;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_48.Data4._4_4_;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x44) = 1;
  *(byte *)((longlong)param_2 + 0x45) = *(byte *)((longlong)param_2 + 0x45) & 0xf0;
  FUN_1461d1208(param_2);
  param_2[9] = 0;
  *param_2 = &PTR_FUN_149faf890;
  param_2[10] = 0xffffffffffffffff;
  param_2[0xb] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc9812 FUN_146fc9812 body=59 status=ok
// SIG undefined FUN_146fc9812(void)

undefined8 FUN_146fc9812(longlong *param_1)

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



// FUNCTION 146fc98b4 FUN_146fc98b4 body=123 status=ok
// SIG undefined FUN_146fc98b4(void)

void FUN_146fc98b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uchar auVar2 [8];
  undefined1 auStack_98 [32];
  GUID local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulong local_44;
  ushort uStack_40;
  ushort uStack_3e;
  uchar auStack_3c [4];
  uchar auStack_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78.Data1 = 0;
  local_78.Data2 = 0;
  local_78.Data3 = 0;
  local_78.Data4[0] = '\0';
  local_78.Data4[1] = '\0';
  local_78.Data4[2] = '\0';
  local_78.Data4[3] = '\0';
  local_78.Data4[4] = '\0';
  local_78.Data4[5] = '\0';
  local_78.Data4[6] = '\0';
  local_78.Data4[7] = '\0';
  CoCreateGuid(&local_78);
  auVar2 = local_78.Data4;
  uVar1 = local_78._0_8_;
  local_44 = local_78.Data1;
  uStack_40 = local_78.Data2;
  uStack_3e = local_78.Data3;
  auStack_3c[0] = local_78.Data4[0];
  auStack_3c[1] = local_78.Data4[1];
  auStack_3c[2] = local_78.Data4[2];
  auStack_3c[3] = local_78.Data4[3];
  auStack_38[0] = local_78.Data4[4];
  auStack_38[1] = local_78.Data4[5];
  auStack_38[2] = local_78.Data4[6];
  auStack_38[3] = local_78.Data4[7];
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0xffffffff;
  local_78._0_8_ = uVar1;
  local_78.Data4 = auVar2;
  FUN_1461d10aa(param_2);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc9930 FUN_146fc9930 body=123 status=ok
// SIG undefined FUN_146fc9930(void)

void FUN_146fc9930(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uchar auVar2 [8];
  undefined1 auStack_98 [32];
  GUID local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulong local_44;
  ushort uStack_40;
  ushort uStack_3e;
  uchar auStack_3c [4];
  uchar auStack_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78.Data1 = 0;
  local_78.Data2 = 0;
  local_78.Data3 = 0;
  local_78.Data4[0] = '\0';
  local_78.Data4[1] = '\0';
  local_78.Data4[2] = '\0';
  local_78.Data4[3] = '\0';
  local_78.Data4[4] = '\0';
  local_78.Data4[5] = '\0';
  local_78.Data4[6] = '\0';
  local_78.Data4[7] = '\0';
  CoCreateGuid(&local_78);
  auVar2 = local_78.Data4;
  uVar1 = local_78._0_8_;
  local_44 = local_78.Data1;
  uStack_40 = local_78.Data2;
  uStack_3e = local_78.Data3;
  auStack_3c[0] = local_78.Data4[0];
  auStack_3c[1] = local_78.Data4[1];
  auStack_3c[2] = local_78.Data4[2];
  auStack_3c[3] = local_78.Data4[3];
  auStack_38[0] = local_78.Data4[4];
  auStack_38[1] = local_78.Data4[5];
  auStack_38[2] = local_78.Data4[6];
  auStack_38[3] = local_78.Data4[7];
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0xffffffff;
  local_78._0_8_ = uVar1;
  local_78.Data4 = auVar2;
  FUN_1461d10aa(param_2);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc99fe FUN_146fc99fe body=59 status=ok
// SIG undefined FUN_146fc99fe(void)

undefined8 FUN_146fc99fe(longlong *param_1)

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



// FUNCTION 146fc9a44 FUN_146fc9a44 body=34 status=ok
// SIG undefined FUN_146fc9a44(void)

void FUN_146fc9a44(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_146fb57f8(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 146fc9ab6 FUN_146fc9ab6 body=29 status=ok
// SIG undefined FUN_146fc9ab6(void)

undefined8 FUN_146fc9ab6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc9ad4 FUN_146fc9ad4 body=93 status=ok
// SIG undefined FUN_146fc9ad4(void)

undefined8 * FUN_146fc9ad4(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 2;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fb7ee0;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fc9b66 FUN_146fc9b66 body=63 status=ok
// SIG undefined FUN_146fc9b66(void)

undefined1 FUN_146fc9b66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    param_3 = param_3 + 0x198;
    param_2 = param_2 + 0x198;
  }
  return 1;
}



// FUNCTION 146fc9bce FUN_146fc9bce body=59 status=ok
// SIG undefined FUN_146fc9bce(void)

undefined8 FUN_146fc9bce(longlong *param_1)

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



// FUNCTION 146fc9c1a FUN_146fc9c1a body=40 status=ok
// SIG undefined FUN_146fc9c1a(void)

void FUN_146fc9c1a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 146fc9c92 FUN_146fc9c92 body=38 status=ok
// SIG undefined FUN_146fc9c92(void)

undefined8 FUN_146fc9c92(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc9cb8 FUN_146fc9cb8 body=38 status=ok
// SIG undefined FUN_146fc9cb8(void)

undefined8 FUN_146fc9cb8(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc9cde FUN_146fc9cde body=115 status=ok
// SIG undefined FUN_146fc9cde(void)

void FUN_146fc9cde(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146fc9d52 FUN_146fc9d52 body=122 status=ok
// SIG undefined FUN_146fc9d52(void)

void FUN_146fc9d52(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 146fc9dcc FUN_146fc9dcc body=34 status=ok
// SIG undefined FUN_146fc9dcc(void)

void FUN_146fc9dcc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149fb8330;
  return;
}



// FUNCTION 146fc9dee FUN_146fc9dee body=31 status=ok
// SIG undefined FUN_146fc9dee(void)

undefined8 FUN_146fc9dee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc9e2a FUN_146fc9e2a body=93 status=ok
// SIG undefined FUN_146fc9e2a(void)

void FUN_146fc9e2a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149fb82c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146fc9e88 FUN_146fc9e88 body=126 status=ok
// SIG undefined FUN_146fc9e88(void)

void FUN_146fc9e88(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149fb82c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146fc9ef7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146fc9f12 FUN_146fc9f12 body=21 status=ok
// SIG undefined FUN_146fc9f12(void)

undefined8 FUN_146fc9f12(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146fc9f28 FUN_146fc9f28 body=29 status=ok
// SIG undefined FUN_146fc9f28(void)

undefined8 FUN_146fc9f28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fc9f4a FUN_146fc9f4a body=22 status=ok
// SIG undefined FUN_146fc9f4a(void)

undefined8 FUN_146fc9f4a(undefined8 param_1)

{
  FUN_146fc9f60();
  return param_1;
}



// FUNCTION 146fc9f60 FUN_146fc9f60 body=153 status=ok
// SIG undefined FUN_146fc9f60(void)

undefined8 * FUN_146fc9f60(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb37b4(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fc9ffa FUN_146fc9ffa body=25 status=ok
// SIG undefined FUN_146fc9ffa(void)

undefined8 FUN_146fc9ffa(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fca032 FUN_146fca032 body=22 status=ok
// SIG undefined FUN_146fca032(void)

undefined8 FUN_146fca032(undefined8 param_1)

{
  FUN_146fca048();
  return param_1;
}



// FUNCTION 146fca048 FUN_146fca048 body=153 status=ok
// SIG undefined FUN_146fca048(void)

undefined8 * FUN_146fca048(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb3c8a(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fca0e2 FUN_146fca0e2 body=25 status=ok
// SIG undefined FUN_146fca0e2(void)

undefined8 FUN_146fca0e2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fca11a FUN_146fca11a body=22 status=ok
// SIG undefined FUN_146fca11a(void)

undefined8 FUN_146fca11a(undefined8 param_1)

{
  FUN_146fca130();
  return param_1;
}



// FUNCTION 146fca130 FUN_146fca130 body=153 status=ok
// SIG undefined FUN_146fca130(void)

undefined8 * FUN_146fca130(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1b0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb40a0(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fca1ca FUN_146fca1ca body=25 status=ok
// SIG undefined FUN_146fca1ca(void)

undefined8 FUN_146fca1ca(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fca202 FUN_146fca202 body=22 status=ok
// SIG undefined FUN_146fca202(void)

undefined8 FUN_146fca202(undefined8 param_1)

{
  FUN_146fca218();
  return param_1;
}



// FUNCTION 146fca218 FUN_146fca218 body=153 status=ok
// SIG undefined FUN_146fca218(void)

undefined8 * FUN_146fca218(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_2 + 6);
  local_40 = *(undefined8 *)(param_2 + 8);
  plVar1 = (longlong *)FUN_14001cc68(0x1a8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_146fb4c12(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fca2b2 FUN_146fca2b2 body=25 status=ok
// SIG undefined FUN_146fca2b2(void)

undefined8 FUN_146fca2b2(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 146fca2ee FUN_146fca2ee body=105 status=ok
// SIG undefined FUN_146fca2ee(void)

longlong FUN_146fca2ee(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_146fb8a66(param_1,param_2,param_4);
  if (*(longlong *)(lVar3 + 0x38) == 0) {
    *(undefined ***)(lVar3 + 0x38) = &PTR_PTR_14c75f4a0;
  }
  if (*param_3 != 0) {
    plVar4 = (longlong *)FUN_146fb461c(*(undefined8 *)(lVar3 + 0x18),param_3);
    uVar1 = (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    *(int *)(lVar3 + 0x5c) = (int)plVar4[8];
    *(undefined4 *)(lVar3 + 0x60) = uVar2;
    *(undefined4 *)(lVar3 + 100) = uVar1;
  }
  return lVar3;
}



// FUNCTION 146fca358 FUN_146fca358 body=334 status=ok
// SIG undefined FUN_146fca358(void)

longlong FUN_146fca358(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == 0) goto LAB_146fca37d;
  cVar4 = FUN_146fb5b98(lVar1);
  if (cVar4 == '\0') {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      local_38 = DAT_14c99d1d8;
      local_60 = 0;
LAB_146fca441:
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
    }
    else {
      local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
      local_60 = FUN_146fb332c();
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (lVar3 == 0) goto LAB_146fca441;
      local_48 = *(undefined4 *)(lVar3 + 8);
      uStack_44 = *(undefined4 *)(lVar3 + 0xc);
      uStack_40 = *(undefined4 *)(lVar3 + 0x10);
      uStack_3c = *(undefined4 *)(lVar3 + 0x14);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
    local_58 = &local_38;
    local_68 = &local_48;
    FUN_146fca4a8(param_2,uVar5,uVar2,param_3);
  }
  uVar2 = DAT_14c99d1d8;
  uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
  cVar4 = (**(code **)(*param_2 + 0x30))(param_2,uVar5,uVar2);
  if (cVar4 != '\0') {
    uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
    plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar5);
    while (plVar6 != (longlong *)0x0) {
      lVar1 = *plVar6;
      if (*(int *)(lVar1 + 8) != 1) {
        if (*(int *)(lVar1 + 8) == 0) {
          param_3 = lVar1 + 0x38;
        }
        break;
      }
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
    }
  }
LAB_146fca37d:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fca4a8 FUN_146fca4a8 body=200 status=ok
// SIG undefined FUN_146fca4a8(void)

void FUN_146fca4a8(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fb8498;
  *(undefined1 *)(local_48 + 7) = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fca572 FUN_146fca572 body=29 status=ok
// SIG undefined FUN_146fca572(void)

undefined8 FUN_146fca572(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fca590 FUN_146fca590 body=101 status=ok
// SIG undefined FUN_146fca590(void)

undefined8 * FUN_146fca590(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fb84a8;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fca5f6 FUN_146fca5f6 body=29 status=ok
// SIG undefined FUN_146fca5f6(void)

undefined8 FUN_146fca5f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fca614 FUN_146fca614 body=101 status=ok
// SIG undefined FUN_146fca614(void)

undefined8 * FUN_146fca614(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fb84a8;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fca67a FUN_146fca67a body=334 status=ok
// SIG undefined FUN_146fca67a(void)

longlong FUN_146fca67a(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == 0) goto LAB_146fca69f;
  cVar4 = FUN_146fb5b98(lVar1);
  if (cVar4 == '\0') {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      local_38 = DAT_14c99d1d8;
      local_60 = 0;
LAB_146fca763:
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
    }
    else {
      local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
      local_60 = FUN_146fb332c();
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (lVar3 == 0) goto LAB_146fca763;
      local_48 = *(undefined4 *)(lVar3 + 8);
      uStack_44 = *(undefined4 *)(lVar3 + 0xc);
      uStack_40 = *(undefined4 *)(lVar3 + 0x10);
      uStack_3c = *(undefined4 *)(lVar3 + 0x14);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
    local_58 = &local_38;
    local_68 = &local_48;
    FUN_146fca7ca(param_2,uVar5,uVar2,param_3);
  }
  uVar2 = DAT_14c99d1d8;
  uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
  cVar4 = (**(code **)(*param_2 + 0x30))(param_2,uVar5,uVar2);
  if (cVar4 != '\0') {
    uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
    plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar5);
    while (plVar6 != (longlong *)0x0) {
      lVar1 = *plVar6;
      if (*(int *)(lVar1 + 8) != 1) {
        if (*(int *)(lVar1 + 8) == 0) {
          param_3 = lVar1 + 0x38;
        }
        break;
      }
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,*(undefined4 *)(lVar1 + 0x38));
    }
  }
LAB_146fca69f:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fca7ca FUN_146fca7ca body=200 status=ok
// SIG undefined FUN_146fca7ca(void)

void FUN_146fca7ca(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  *(undefined4 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined4 *)(local_48 + 2) = uVar2;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar3;
  *(undefined4 *)(local_48 + 3) = uVar4;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_149fb84b8;
  *(undefined4 *)(local_48 + 7) = *param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_48);
  if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fca894 FUN_146fca894 body=29 status=ok
// SIG undefined FUN_146fca894(void)

undefined8 FUN_146fca894(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fca8b2 FUN_146fca8b2 body=101 status=ok
// SIG undefined FUN_146fca8b2(void)

undefined8 * FUN_146fca8b2(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fb84c8;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fca918 FUN_146fca918 body=29 status=ok
// SIG undefined FUN_146fca918(void)

undefined8 FUN_146fca918(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146fca936 FUN_146fca936 body=101 status=ok
// SIG undefined FUN_146fca936(void)

undefined8 * FUN_146fca936(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(puVar5 + 1) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = uVar2;
  *(undefined4 *)(puVar5 + 5) = uVar1;
  puVar5[6] = uVar3;
  *puVar5 = &PTR_FUN_149fb84c8;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 146fca99c FUN_146fca99c body=124 status=ok
// SIG undefined FUN_146fca99c(void)

void FUN_146fca99c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146fcaa1a FUN_146fcaa1a body=119 status=ok
// SIG undefined FUN_146fcaa1a(void)

void FUN_146fcaa1a(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 146fcaa9a FUN_146fcaa9a body=134 status=ok
// SIG undefined FUN_146fcaa9a(void)

ulonglong FUN_146fcaa9a(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if ((((DAT_14c99cf84 != param_1) && (DAT_14c99cf8c != param_1)) && (DAT_14c99cf94 != param_1)) &&
     (DAT_14c99cf9c != param_1)) {
    cVar1 = FUN_146fcab20(param_1);
    if (((((cVar1 == '\0') && (DAT_14c99cfe4 != param_1)) &&
         ((DAT_14c99cfec != param_1 && ((DAT_14c99cff4 != param_1 && (DAT_14c99cffc != param_1))))))
        && (DAT_14c99d004 != param_1)) && (DAT_14c99d00c != param_1)) {
      uVar2 = CONCAT71(uVar3,DAT_14c99d014 == param_1);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 146fcab20 FUN_146fcab20 body=79 status=ok
// SIG undefined FUN_146fcab20(void)

bool FUN_146fcab20(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((DAT_14c99cfa4 != param_1) && (DAT_14c99cfac != param_1)) && (DAT_14c99cfb4 != param_1)) &&
     (((DAT_14c99cfbc != param_1 && (DAT_14c99cfc4 != param_1)) && (DAT_14c99cfcc != param_1)))) {
    bVar1 = DAT_14c99cfdc == param_1 || DAT_14c99cfd4 == param_1;
  }
  return bVar1;
}



// FUNCTION 146fcab70 FUN_146fcab70 body=243 status=ok
// SIG undefined FUN_146fcab70(void)

undefined8 *
FUN_146fcab70(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong **local_48;
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    cVar3 = FUN_146fb5b98(lVar2,param_3);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar2 + 0x28,0x10);
      local_38 = (longlong *)(**(code **)(*param_3 + 0x28))(param_3,uVar4);
      if ((local_38 != (longlong *)0x0) && (*local_38 != 0)) {
        local_48 = &local_38;
        local_58 = param_1;
        local_50 = param_3;
        local_40 = param_2;
        FUN_146fcac64(*(undefined8 *)(param_1 + 8));
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcac64 FUN_146fcac64 body=190 status=ok
// SIG undefined FUN_146fcac64(void)

void FUN_146fcac64(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  cVar1 = FUN_146fcad24();
  if (cVar1 == '\0') {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    local_48 = param_2[4];
    uStack_44 = param_2[5];
    uStack_40 = param_2[6];
    uStack_3c = param_2[7];
    cVar1 = FUN_146fcada8(param_1);
    if (cVar1 == '\0') {
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      local_68 = param_2[4];
      uStack_64 = param_2[5];
      uStack_60 = param_2[6];
      uStack_5c = param_2[7];
      cVar1 = FUN_146fcae18(param_1);
      if (cVar1 == '\0') {
        local_98 = *param_2;
        uStack_94 = param_2[1];
        uStack_90 = param_2[2];
        uStack_8c = param_2[3];
        local_88 = param_2[4];
        uStack_84 = param_2[5];
        uStack_80 = param_2[6];
        uStack_7c = param_2[7];
        FUN_146fcae88(param_1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcad24 FUN_146fcad24 body=131 status=ok
// SIG undefined FUN_146fcad24(void)

ulonglong FUN_146fcad24(longlong param_1,undefined4 *param_2)

{
  undefined8 unaff_RBX;
  undefined7 uVar2;
  ulonglong uVar1;
  undefined1 auStack_78 [32];
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  uVar2 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (DAT_14c99cf84 == param_1) {
    FUN_146fcaf28(&local_58);
    uVar1 = CONCAT71(uVar2,1);
  }
  else {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    local_28 = param_2[4];
    uStack_24 = param_2[5];
    uStack_20 = param_2[6];
    uStack_1c = param_2[7];
    uVar1 = CONCAT71(uVar2,DAT_14c99cf8c == param_1);
    if (DAT_14c99cf8c == param_1) {
      FUN_146fcaff6(&local_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcada8 FUN_146fcada8 body=110 status=ok
// SIG undefined FUN_146fcada8(void)

undefined8 FUN_146fcada8(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cf94 == param_1) {
    FUN_146fcb1a4(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    uVar1 = FUN_146fcb134();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcae18 FUN_146fcae18 body=110 status=ok
// SIG undefined FUN_146fcae18(void)

undefined8 FUN_146fcae18(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cfe4 == param_1) {
    FUN_146fcc256(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    uVar1 = FUN_146fcc1e6();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcae88 FUN_146fcae88 body=158 status=ok
// SIG undefined FUN_146fcae88(void)

bool FUN_146fcae88(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  lVar3 = DAT_14c99d014;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c99d014 == param_1) {
    puVar5 = &local_31;
    local_31 = 0;
    plVar1 = *(longlong **)(param_2 + 8);
    plVar4 = (longlong *)**(undefined8 **)(param_2 + 0x10);
    do {
      lVar2 = *plVar4;
      if (*(int *)(lVar2 + 8) != 1) {
        if (*(int *)(lVar2 + 8) == 0) {
          puVar5 = (undefined1 *)(lVar2 + 0x38);
        }
        break;
      }
      plVar4 = (longlong *)(**(code **)(*plVar1 + 0x28))(plVar1,*(undefined4 *)(lVar2 + 0x38));
    } while (plVar4 != (longlong *)0x0);
    FUN_146fccc40(puVar5,*(undefined8 *)(param_2 + 0x18));
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 == param_1;
}



// FUNCTION 146fcaf28 FUN_146fcaf28 body=138 status=ok
// SIG undefined FUN_146fcaf28(void)

void FUN_146fcaf28(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 0) {
    plVar2 = (longlong *)(lVar1 + 0x38);
  }
  else if (*(int *)(lVar1 + 8) == 1) {
    plVar2 = (longlong *)
             FUN_146fcafb4(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),local_28);
  }
  else {
    plVar2 = local_28;
  }
  FUN_144a787a6(*(undefined8 *)(param_1 + 0x18),plVar2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcafb4 FUN_146fcafb4 body=66 status=ok
// SIG undefined FUN_146fcafb4(void)

longlong FUN_146fcafb4(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_3;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_3;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcaff6 FUN_146fcaff6 body=127 status=ok
// SIG undefined FUN_146fcaff6(void)

void FUN_146fcaff6(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined8 *)
             FUN_146fcb0f2(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),&local_18);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_18;
  }
  FUN_146fcb076(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb076 FUN_146fcb076 body=123 status=ok
// SIG undefined FUN_146fcb076(void)

void FUN_146fcb076(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(param_1,&local_28);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb0f2 FUN_146fcb0f2 body=66 status=ok
// SIG undefined FUN_146fcb0f2(void)

longlong FUN_146fcb0f2(longlong *param_1,ulonglong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_3;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_3;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcb134 FUN_146fcb134 body=110 status=ok
// SIG undefined FUN_146fcb134(void)

undefined8 FUN_146fcb134(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cf9c == param_1) {
    FUN_146fcb36a(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    uVar1 = FUN_146fcb2fa();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb1a4 FUN_146fcb1a4 body=130 status=ok
// SIG undefined FUN_146fcb1a4(void)

void FUN_146fcb1a4(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined8 *)
             FUN_146fcb2b8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_18);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_18;
  }
  FUN_146fcb234(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb234 FUN_146fcb234 body=130 status=ok
// SIG undefined FUN_146fcb234(void)

void FUN_146fcb234(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406112c4(&local_28,*param_1,0);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb2b8 FUN_146fcb2b8 body=66 status=ok
// SIG undefined FUN_146fcb2b8(void)

longlong FUN_146fcb2b8(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcb2fa FUN_146fcb2fa body=110 status=ok
// SIG undefined FUN_146fcb2fa(void)

undefined8 FUN_146fcb2fa(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cfa4 == param_1) {
    FUN_146fcb578(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    uVar1 = FUN_146fcb4be();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb36a FUN_146fcb36a body=129 status=ok
// SIG undefined FUN_146fcb36a(void)

void FUN_146fcb36a(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined4 *)
             FUN_146fcb47c(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_14);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined4 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_14;
  }
  FUN_146fcb3f8(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb3f8 FUN_146fcb3f8 body=130 status=ok
// SIG undefined FUN_146fcb3f8(void)

void FUN_146fcb3f8(float *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406112c4(&local_28,(double)*param_1,0);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb47c FUN_146fcb47c body=66 status=ok
// SIG undefined FUN_146fcb47c(void)

longlong FUN_146fcb47c(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcb4be FUN_146fcb4be body=185 status=ok
// SIG undefined FUN_146fcb4be(void)

undefined8 FUN_146fcb4be(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = *(undefined4 *)param_2;
  uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_70 = *(undefined4 *)(param_2 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_68 = *(undefined4 *)(param_2 + 2);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_60 = *(undefined4 *)(param_2 + 3);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
  if (DAT_14c99cfac == param_1) {
    FUN_146fcb6ce(&local_78);
    uVar2 = 1;
  }
  else {
    local_98 = *param_2;
    uStack_90 = param_2[1];
    local_88 = param_2[2];
    uStack_80 = param_2[3];
    local_38 = *(undefined4 *)param_2;
    uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_30 = *(undefined4 *)(param_2 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_28 = *(undefined4 *)(param_2 + 2);
    uStack_24 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_20 = *(undefined4 *)(param_2 + 3);
    uStack_1c = *(undefined4 *)((longlong)param_2 + 0x1c);
    cVar1 = FUN_146fcb836();
    uVar2 = 1;
    if (cVar1 == '\0') {
      local_48 = (undefined4)local_88;
      uStack_44 = local_88._4_4_;
      uStack_40 = (undefined4)uStack_80;
      uStack_3c = uStack_80._4_4_;
      local_58 = (undefined4)local_98;
      uStack_54 = local_98._4_4_;
      uStack_50 = (undefined4)uStack_90;
      uStack_4c = uStack_90._4_4_;
      uVar2 = FUN_146fcb8d8(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb578 FUN_146fcb578 body=130 status=ok
// SIG undefined FUN_146fcb578(void)

void FUN_146fcb578(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined8 *)
             FUN_146fcb68c(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_18);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_18;
  }
  FUN_146fcb608(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb608 FUN_146fcb608 body=131 status=ok
// SIG undefined FUN_146fcb608(void)

void FUN_146fcb608(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406112c4(&local_28,(double)*param_1,0);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb68c FUN_146fcb68c body=66 status=ok
// SIG undefined FUN_146fcb68c(void)

longlong FUN_146fcb68c(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcb6ce FUN_146fcb6ce body=130 status=ok
// SIG undefined FUN_146fcb6ce(void)

void FUN_146fcb6ce(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined8 *)
             FUN_146fcb7f4(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_18);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_18;
  }
  FUN_146fcb75e(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb75e FUN_146fcb75e body=149 status=ok
// SIG undefined FUN_146fcb75e(void)

void FUN_146fcb75e(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406112c4(&local_28,
                SUB84(((double)CONCAT44(0x43300000,(int)*param_1) - 4503599627370496.0) +
                      ((double)CONCAT44(0x45300000,(int)((ulonglong)*param_1 >> 0x20)) -
                      1.9342813113834067e+25),0),0);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb7f4 FUN_146fcb7f4 body=66 status=ok
// SIG undefined FUN_146fcb7f4(void)

longlong FUN_146fcb7f4(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcb836 FUN_146fcb836 body=161 status=ok
// SIG undefined FUN_146fcb836(void)

bool FUN_146fcb836(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  lVar3 = DAT_14c99cfb4;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c99cfb4 == param_1) {
    puVar5 = &local_34;
    local_34 = 0;
    plVar1 = *(longlong **)(param_2 + 8);
    plVar4 = (longlong *)**(undefined8 **)(param_2 + 0x10);
    do {
      lVar2 = *plVar4;
      if (*(int *)(lVar2 + 8) != 1) {
        if (*(int *)(lVar2 + 8) == 0) {
          puVar5 = (undefined4 *)(lVar2 + 0x38);
        }
        break;
      }
      plVar4 = (longlong *)(**(code **)(*plVar1 + 0x28))(plVar1,*(undefined4 *)(lVar2 + 0x38));
    } while (plVar4 != (longlong *)0x0);
    FUN_146fcb954(puVar5,*(undefined8 *)(param_2 + 0x18));
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 == param_1;
}



// FUNCTION 146fcb8d8 FUN_146fcb8d8 body=110 status=ok
// SIG undefined FUN_146fcb8d8(void)

undefined8 FUN_146fcb8d8(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cfbc == param_1) {
    FUN_146fcba48(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    uVar1 = FUN_146fcb9d8();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb954 FUN_146fcb954 body=130 status=ok
// SIG undefined FUN_146fcb954(void)

void FUN_146fcb954(int *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406112c4(&local_28,(double)*param_1,0);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcb9d8 FUN_146fcb9d8 body=110 status=ok
// SIG undefined FUN_146fcb9d8(void)

undefined8 FUN_146fcb9d8(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cfc4 == param_1) {
    FUN_146fcbc0e(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    uVar1 = FUN_146fcbb9e();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcba48 FUN_146fcba48 body=129 status=ok
// SIG undefined FUN_146fcba48(void)

void FUN_146fcba48(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined4 *)
             FUN_146fcbb5c(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_14);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined4 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_14;
  }
  FUN_146fcbad6(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcbad6 FUN_146fcbad6 body=133 status=ok
// SIG undefined FUN_146fcbad6(void)

void FUN_146fcbad6(uint *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406112c4(&local_28,(double)*param_1,0);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcbb5c FUN_146fcbb5c body=66 status=ok
// SIG undefined FUN_146fcbb5c(void)

longlong FUN_146fcbb5c(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcbb9e FUN_146fcbb9e body=110 status=ok
// SIG undefined FUN_146fcbb9e(void)

undefined8 FUN_146fcbb9e(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  if (DAT_14c99cfcc == param_1) {
    FUN_146fcbde8(&local_28);
    uVar1 = 1;
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    uVar1 = FUN_146fcbd64();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcbc0e FUN_146fcbc0e body=128 status=ok
// SIG undefined FUN_146fcbc0e(void)

void FUN_146fcbc0e(longlong param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_38 [38];
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_12 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined2 *)
             FUN_146fcbd22(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_12);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined2 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_12;
  }
  FUN_146fcbc9c(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcbc9c FUN_146fcbc9c body=133 status=ok
// SIG undefined FUN_146fcbc9c(void)

void FUN_146fcbc9c(short *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1406112c4(&local_28,(double)(int)*param_1,0);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcbd22 FUN_146fcbd22 body=66 status=ok
// SIG undefined FUN_146fcbd22(void)

longlong FUN_146fcbd22(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    plVar1 = (longlong *)(**(code **)(lVar2 + 0x28))(param_1,param_2);
    if (plVar1 == (longlong *)0x0) {
      return param_4;
    }
    lVar2 = *plVar1;
    if (*(int *)(lVar2 + 8) != 1) break;
    param_2 = (ulonglong)*(uint *)(lVar2 + 0x38);
    lVar2 = *param_1;
  }
  if (*(int *)(lVar2 + 8) != 0) {
    return param_4;
  }
  return lVar2 + 0x38;
}



// FUNCTION 146fcbd64 FUN_146fcbd64 body=131 status=ok
// SIG undefined FUN_146fcbd64(void)

ulonglong FUN_146fcbd64(longlong param_1,undefined4 *param_2)

{
  undefined8 unaff_RBX;
  undefined7 uVar2;
  ulonglong uVar1;
  undefined1 auStack_78 [32];
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  uVar2 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (DAT_14c99cfd4 == param_1) {
    FUN_146fcbf3e(&local_58);
    uVar1 = CONCAT71(uVar2,1);
  }
  else {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    local_28 = param_2[4];
    uStack_24 = param_2[5];
    uStack_20 = param_2[6];
    uStack_1c = param_2[7];
    uVar1 = CONCAT71(uVar2,DAT_14c99cfdc == param_1);
    if (DAT_14c99cfdc == param_1) {
      FUN_146fcc092(&local_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146fcbde8 FUN_146fcbde8 body=128 status=ok
// SIG undefined FUN_146fcbde8(void)

void FUN_146fcbde8(longlong param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_38 [38];
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_12 = 0;
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x10);
  if (*(int *)(lVar1 + 8) == 1) {
    puVar2 = (undefined2 *)
             FUN_146fcbefc(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar1 + 0x38),0,&local_12);
  }
  else if (*(int *)(lVar1 + 8) == 0) {
    puVar2 = (undefined2 *)(lVar1 + 0x38);
  }
  else {
    puVar2 = &local_12;
  }
  FUN_146fcbe76(puVar2,*(undefined8 *)(param_1 + 0x18));
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


