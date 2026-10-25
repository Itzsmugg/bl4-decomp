// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149722b7a FUN_149722b7a body=59 status=ok
// SIG undefined FUN_149722b7a(void)

undefined8 FUN_149722b7a(longlong *param_1)

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



// FUNCTION 149722c18 FUN_149722c18 body=51 status=ok
// SIG undefined FUN_149722c18(void)

void FUN_149722c18(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 149722c80 FUN_149722c80 body=63 status=ok
// SIG undefined FUN_149722c80(void)

undefined1 FUN_149722c80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149723164(param_2,param_3);
    param_3 = param_3 + 0x2c0;
    param_2 = param_2 + 0x2c0;
  }
  return 1;
}



// FUNCTION 149722ce8 FUN_149722ce8 body=59 status=ok
// SIG undefined FUN_149722ce8(void)

undefined8 FUN_149722ce8(longlong *param_1)

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



// FUNCTION 149722d34 FUN_149722d34 body=40 status=ok
// SIG undefined FUN_149722d34(void)

void FUN_149722d34(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c0) == '\x01') {
    FUN_149723106(param_2);
    *(undefined1 *)(param_2 + 0x2c0) = 0;
  }
  return;
}



// FUNCTION 149722daa FUN_149722daa body=161 status=ok
// SIG undefined FUN_149722daa(void)

undefined8 * FUN_149722daa(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be2b910;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 2;
  param_1[0x4e] = 0;
  *(undefined2 *)(param_1 + 0x4f) = 1;
  param_1[0x52] = 0;
  param_1[0x53] = 0x8000000000;
  param_1[0x54] = 0x3200000000;
  param_1[0x55] = 0x3ff0000000000000;
  param_1[0x56] = 0x4000000000000000;
  param_1[0x57] = 0x4024000000000000;
  return param_1;
}



// FUNCTION 149722e4c FUN_149722e4c body=43 status=ok
// SIG undefined FUN_149722e4c(void)

undefined8 FUN_149722e4c(undefined8 param_1,int param_2)

{
  FUN_149723106();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2c0);
  }
  return param_1;
}



// FUNCTION 149722e78 FUN_149722e78 body=38 status=ok
// SIG undefined FUN_149722e78(void)

undefined8 FUN_149722e78(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGenerateClusterConvexHullsFromLeafHullsDataflowNode",1);
  return param_2;
}



// FUNCTION 149722e9e FUN_149722e9e body=38 status=ok
// SIG undefined FUN_149722e9e(void)

undefined8 FUN_149722e9e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GenerateClusterConvexHullsFromLeafHulls",1);
  return param_2;
}



// FUNCTION 149722ec4 FUN_149722ec4 body=38 status=ok
// SIG undefined FUN_149722ec4(void)

undefined8 FUN_149722ec4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 149722eea FUN_149722eea body=32 status=ok
// SIG undefined FUN_149722eea(void)

undefined8 FUN_149722eea(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149722f0a FUN_149722f0a body=123 status=ok
// SIG undefined FUN_149722f0a(void)

void FUN_149722f0a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ad0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ad0 =
         FUN_140002ddd(FUN_146751b77,uVar1,L"GenerateClusterConvexHullsFromLeafHullsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24ad0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149722f82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149722f86 FUN_149722f86 body=93 status=ok
// SIG undefined FUN_149722f86(void)

void FUN_149722f86(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24ad0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24ad0 =
         FUN_140002ddd(FUN_146751b77,uVar2,L"GenerateClusterConvexHullsFromLeafHullsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24ad0,param_1);
  return;
}



// FUNCTION 149722fe4 FUN_149722fe4 body=55 status=ok
// SIG undefined FUN_149722fe4(void)

void FUN_149722fe4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ad0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ad0 =
         FUN_140002ddd(FUN_146751b77,uVar1,L"GenerateClusterConvexHullsFromLeafHullsDataflowNode");
  }
  return;
}



// FUNCTION 14972301c FUN_14972301c body=233 status=ok
// SIG undefined FUN_14972301c(void)

ulonglong FUN_14972301c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FGenerateClusterConvexHullsFromLeafHullsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497230b6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497230b6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497230b6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497230b6:
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



// FUNCTION 149723106 FUN_149723106 body=94 status=ok
// SIG undefined FUN_149723106(void)

void FUN_149723106(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be2b910;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149723164 FUN_149723164 body=156 status=ok
// SIG undefined FUN_149723164(void)

longlong FUN_149723164(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_1405b70a4(param_1 + 0x248,param_2 + 0x248);
  FUN_1408fdf38(param_1 + 600,param_2 + 600);
  uVar1 = *(undefined4 *)(param_2 + 0x26c);
  uVar2 = *(undefined4 *)(param_2 + 0x270);
  uVar3 = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x26c) = uVar1;
  *(undefined4 *)(param_1 + 0x270) = uVar2;
  *(undefined4 *)(param_1 + 0x274) = uVar3;
  *(undefined2 *)(param_1 + 0x278) = *(undefined2 *)(param_2 + 0x278);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x280,param_2 + 0x280);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x2a0);
  uVar5 = *(undefined8 *)(param_2 + 0x2a8);
  uVar6 = *(undefined8 *)(param_2 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar6;
  *(undefined8 *)(param_1 + 0x2a0) = uVar4;
  *(undefined8 *)(param_1 + 0x2a8) = uVar5;
  return param_1;
}



// FUNCTION 149723236 FUN_149723236 body=63 status=ok
// SIG undefined FUN_149723236(void)

undefined1 FUN_149723236(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149723718(param_2,param_3);
    param_3 = param_3 + 0x2c0;
    param_2 = param_2 + 0x2c0;
  }
  return 1;
}



// FUNCTION 14972329e FUN_14972329e body=59 status=ok
// SIG undefined FUN_14972329e(void)

undefined8 FUN_14972329e(longlong *param_1)

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



// FUNCTION 1497232ea FUN_1497232ea body=40 status=ok
// SIG undefined FUN_1497232ea(void)

void FUN_1497232ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c0) == '\x01') {
    FUN_1497236ba(param_2);
    *(undefined1 *)(param_2 + 0x2c0) = 0;
  }
  return;
}



// FUNCTION 149723360 FUN_149723360 body=159 status=ok
// SIG undefined FUN_149723360(void)

undefined8 * FUN_149723360(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be2bbe0;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 2;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 1;
  param_1[0x52] = 0;
  param_1[0x53] = 0x8000000000;
  param_1[0x54] = 0x3200000000;
  param_1[0x55] = 0x3ff0000000000000;
  param_1[0x56] = 0x4000000000000000;
  param_1[0x57] = 0x4024000000000000;
  return param_1;
}



// FUNCTION 149723400 FUN_149723400 body=43 status=ok
// SIG undefined FUN_149723400(void)

undefined8 FUN_149723400(undefined8 param_1,int param_2)

{
  FUN_1497236ba();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2c0);
  }
  return param_1;
}



// FUNCTION 14972342c FUN_14972342c body=38 status=ok
// SIG undefined FUN_14972342c(void)

undefined8 FUN_14972342c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGenerateClusterConvexHullsFromChildrenHullsDataflowNode",1);
  return param_2;
}



// FUNCTION 149723452 FUN_149723452 body=38 status=ok
// SIG undefined FUN_149723452(void)

undefined8 FUN_149723452(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GenerateClusterConvexHullsFromChildrenHulls",1);
  return param_2;
}



// FUNCTION 149723478 FUN_149723478 body=38 status=ok
// SIG undefined FUN_149723478(void)

undefined8 FUN_149723478(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 14972349e FUN_14972349e body=32 status=ok
// SIG undefined FUN_14972349e(void)

undefined8 FUN_14972349e(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497234be FUN_1497234be body=123 status=ok
// SIG undefined FUN_1497234be(void)

void FUN_1497234be(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ae8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ae8 =
         FUN_140002ddd(FUN_146751bd6,uVar1,
                       L"GenerateClusterConvexHullsFromChildrenHullsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24ae8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149723536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14972353a FUN_14972353a body=93 status=ok
// SIG undefined FUN_14972353a(void)

void FUN_14972353a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24ae8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24ae8 =
         FUN_140002ddd(FUN_146751bd6,uVar2,
                       L"GenerateClusterConvexHullsFromChildrenHullsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24ae8,param_1);
  return;
}



// FUNCTION 149723598 FUN_149723598 body=55 status=ok
// SIG undefined FUN_149723598(void)

void FUN_149723598(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ae8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ae8 =
         FUN_140002ddd(FUN_146751bd6,uVar1,
                       L"GenerateClusterConvexHullsFromChildrenHullsDataflowNode");
  }
  return;
}



// FUNCTION 1497235d0 FUN_1497235d0 body=233 status=ok
// SIG undefined FUN_1497235d0(void)

ulonglong FUN_1497235d0(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FGenerateClusterConvexHullsFromChildrenHullsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14972366a;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14972366a;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14972366a;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14972366a:
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



// FUNCTION 1497236ba FUN_1497236ba body=94 status=ok
// SIG undefined FUN_1497236ba(void)

void FUN_1497236ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be2bbe0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149723718 FUN_149723718 body=154 status=ok
// SIG undefined FUN_149723718(void)

longlong FUN_149723718(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_1405b70a4(param_1 + 0x248,param_2 + 0x248);
  FUN_1408fdf38(param_1 + 600,param_2 + 600);
  uVar1 = *(undefined4 *)(param_2 + 0x26c);
  uVar2 = *(undefined4 *)(param_2 + 0x270);
  uVar3 = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x26c) = uVar1;
  *(undefined4 *)(param_1 + 0x270) = uVar2;
  *(undefined4 *)(param_1 + 0x274) = uVar3;
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x278);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x280,param_2 + 0x280);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x2a0);
  uVar5 = *(undefined8 *)(param_2 + 0x2a8);
  uVar6 = *(undefined8 *)(param_2 + 0x2b8);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar6;
  *(undefined8 *)(param_1 + 0x2a0) = uVar4;
  *(undefined8 *)(param_1 + 0x2a8) = uVar5;
  return param_1;
}



// FUNCTION 1497237b4 FUN_1497237b4 body=72 status=ok
// SIG undefined FUN_1497237b4(void)

void FUN_1497237b4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2bec0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 1497237fc FUN_1497237fc body=72 status=ok
// SIG undefined FUN_1497237fc(void)

void FUN_1497237fc(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2bec0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  return;
}



// FUNCTION 149723868 FUN_149723868 body=63 status=ok
// SIG undefined FUN_149723868(void)

undefined1 FUN_149723868(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149723c88(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 1497238d0 FUN_1497238d0 body=59 status=ok
// SIG undefined FUN_1497238d0(void)

undefined8 FUN_1497238d0(longlong *param_1)

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



// FUNCTION 14972391c FUN_14972391c body=40 status=ok
// SIG undefined FUN_14972391c(void)

void FUN_14972391c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_149723c4c(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 149723992 FUN_149723992 body=43 status=ok
// SIG undefined FUN_149723992(void)

undefined8 FUN_149723992(undefined8 param_1,int param_2)

{
  FUN_149723c4c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 1497239be FUN_1497239be body=38 status=ok
// SIG undefined FUN_1497239be(void)

undefined8 FUN_1497239be(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FClearConvexHullsDataflowNode",1);
  return param_2;
}



// FUNCTION 1497239e4 FUN_1497239e4 body=38 status=ok
// SIG undefined FUN_1497239e4(void)

undefined8 FUN_1497239e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ClearConvexHulls",1);
  return param_2;
}



// FUNCTION 149723a0a FUN_149723a0a body=38 status=ok
// SIG undefined FUN_149723a0a(void)

undefined8 FUN_149723a0a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 149723a30 FUN_149723a30 body=32 status=ok
// SIG undefined FUN_149723a30(void)

undefined8 FUN_149723a30(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149723a50 FUN_149723a50 body=123 status=ok
// SIG undefined FUN_149723a50(void)

void FUN_149723a50(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b00 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b00 = FUN_140002ddd(FUN_146751c36,uVar1,L"ClearConvexHullsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24b00,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149723ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149723acc FUN_149723acc body=93 status=ok
// SIG undefined FUN_149723acc(void)

void FUN_149723acc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24b00 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24b00 = FUN_140002ddd(FUN_146751c36,uVar2,L"ClearConvexHullsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24b00,param_1);
  return;
}



// FUNCTION 149723b2a FUN_149723b2a body=55 status=ok
// SIG undefined FUN_149723b2a(void)

void FUN_149723b2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b00 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b00 = FUN_140002ddd(FUN_146751c36,uVar1,L"ClearConvexHullsDataflowNode");
  }
  return;
}



// FUNCTION 149723b62 FUN_149723b62 body=233 status=ok
// SIG undefined FUN_149723b62(void)

ulonglong FUN_149723b62(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FClearConvexHullsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149723bfc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149723bfc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149723bfc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149723bfc:
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



// FUNCTION 149723c4c FUN_149723c4c body=60 status=ok
// SIG undefined FUN_149723c4c(void)

void FUN_149723c4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be2bec0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149723c88 FUN_149723c88 body=68 status=ok
// SIG undefined FUN_149723c88(void)

longlong FUN_149723c88(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  return param_1;
}



// FUNCTION 149723d02 FUN_149723d02 body=63 status=ok
// SIG undefined FUN_149723d02(void)

undefined1 FUN_149723d02(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497241fa(param_2,param_3);
    param_3 = param_3 + 0x2c0;
    param_2 = param_2 + 0x2c0;
  }
  return 1;
}



// FUNCTION 149723d6a FUN_149723d6a body=59 status=ok
// SIG undefined FUN_149723d6a(void)

undefined8 FUN_149723d6a(longlong *param_1)

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



// FUNCTION 149723db6 FUN_149723db6 body=40 status=ok
// SIG undefined FUN_149723db6(void)

void FUN_149723db6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2c0) == '\x01') {
    FUN_14972419c(param_2);
    *(undefined1 *)(param_2 + 0x2c0) = 0;
  }
  return;
}



// FUNCTION 149723e2c FUN_149723e2c body=182 status=ok
// SIG undefined FUN_149723e2c(void)

undefined8 * FUN_149723e2c(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be2c160;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0x8000000000;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x32;
  param_1[0x55] = 0x3ff0000000000000;
  param_1[0x56] = 0x4000000000000000;
  param_1[0x57] = 0x4024000000000000;
  return param_1;
}



// FUNCTION 149723ee2 FUN_149723ee2 body=43 status=ok
// SIG undefined FUN_149723ee2(void)

undefined8 FUN_149723ee2(undefined8 param_1,int param_2)

{
  FUN_14972419c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2c0);
  }
  return param_1;
}



// FUNCTION 149723f0e FUN_149723f0e body=38 status=ok
// SIG undefined FUN_149723f0e(void)

undefined8 FUN_149723f0e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FMergeConvexHullsDataflowNode",1);
  return param_2;
}



// FUNCTION 149723f34 FUN_149723f34 body=38 status=ok
// SIG undefined FUN_149723f34(void)

undefined8 FUN_149723f34(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"MergeConvexHulls",1);
  return param_2;
}



// FUNCTION 149723f5a FUN_149723f5a body=38 status=ok
// SIG undefined FUN_149723f5a(void)

undefined8 FUN_149723f5a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 149723f80 FUN_149723f80 body=32 status=ok
// SIG undefined FUN_149723f80(void)

undefined8 FUN_149723f80(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149723fa0 FUN_149723fa0 body=123 status=ok
// SIG undefined FUN_149723fa0(void)

void FUN_149723fa0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b18 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b18 = FUN_140002ddd(FUN_146751c96,uVar1,L"MergeConvexHullsDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24b18,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149724018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 14972401c FUN_14972401c body=93 status=ok
// SIG undefined FUN_14972401c(void)

void FUN_14972401c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24b18 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24b18 = FUN_140002ddd(FUN_146751c96,uVar2,L"MergeConvexHullsDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24b18,param_1);
  return;
}



// FUNCTION 14972407a FUN_14972407a body=55 status=ok
// SIG undefined FUN_14972407a(void)

void FUN_14972407a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b18 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b18 = FUN_140002ddd(FUN_146751c96,uVar1,L"MergeConvexHullsDataflowNode");
  }
  return;
}



// FUNCTION 1497240b2 FUN_1497240b2 body=233 status=ok
// SIG undefined FUN_1497240b2(void)

ulonglong FUN_1497240b2(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FMergeConvexHullsDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_14972414c;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_14972414c;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_14972414c;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_14972414c:
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



// FUNCTION 14972419c FUN_14972419c body=94 status=ok
// SIG undefined FUN_14972419c(void)

void FUN_14972419c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be2c160;
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497241fa FUN_1497241fa body=156 status=ok
// SIG undefined FUN_1497241fa(void)

longlong FUN_1497241fa(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  FUN_1405b70a4(param_1 + 0x248,param_2 + 0x248);
  FUN_1408fdf38(param_1 + 600,param_2 + 600);
  uVar1 = *(undefined4 *)(param_2 + 0x26c);
  uVar2 = *(undefined4 *)(param_2 + 0x270);
  uVar3 = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x26c) = uVar1;
  *(undefined4 *)(param_1 + 0x270) = uVar2;
  *(undefined4 *)(param_1 + 0x274) = uVar3;
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x278,param_2 + 0x278);
  }
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x2b8);
  uVar4 = *(undefined8 *)(param_2 + 0x298);
  uVar5 = *(undefined8 *)(param_2 + 0x2a0);
  uVar6 = *(undefined8 *)(param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2b0) = uVar6;
  *(undefined8 *)(param_1 + 0x298) = uVar4;
  *(undefined8 *)(param_1 + 0x2a0) = uVar5;
  return param_1;
}



// FUNCTION 149724298 FUN_149724298 body=46 status=ok
// SIG undefined FUN_149724298(void)

void FUN_149724298(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2c400;
  FUN_1414db454(param_2 + 0x33);
  return;
}



// FUNCTION 1497242c6 FUN_1497242c6 body=46 status=ok
// SIG undefined FUN_1497242c6(void)

void FUN_1497242c6(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2c400;
  FUN_1414db454(param_2 + 0x33);
  return;
}



// FUNCTION 149724318 FUN_149724318 body=85 status=ok
// SIG undefined FUN_149724318(void)

undefined1 FUN_149724318(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    param_2 = param_2 + 0x248;
    param_3 = param_3 + 0x248;
  }
  return 1;
}



// FUNCTION 149724396 FUN_149724396 body=59 status=ok
// SIG undefined FUN_149724396(void)

undefined8 FUN_149724396(longlong *param_1)

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



// FUNCTION 1497243e2 FUN_1497243e2 body=62 status=ok
// SIG undefined FUN_1497243e2(void)

void FUN_1497243e2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x49) == '\x01') {
    *param_2 = &PTR_FUN_14be2c400;
    FUN_14054b30a(param_2 + 0x33);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x49) = 0;
  }
  return;
}



// FUNCTION 14972446e FUN_14972446e body=68 status=ok
// SIG undefined FUN_14972446e(void)

undefined8 * FUN_14972446e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2c400;
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x248);
  }
  return param_1;
}



// FUNCTION 1497244b2 FUN_1497244b2 body=38 status=ok
// SIG undefined FUN_1497244b2(void)

undefined8 FUN_1497244b2(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FUpdateVolumeAttributesDataflowNode",1);
  return param_2;
}



// FUNCTION 1497244d8 FUN_1497244d8 body=38 status=ok
// SIG undefined FUN_1497244d8(void)

undefined8 FUN_1497244d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"UpdateVolumeAttributes",1);
  return param_2;
}



// FUNCTION 1497244fe FUN_1497244fe body=38 status=ok
// SIG undefined FUN_1497244fe(void)

undefined8 FUN_1497244fe(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 149724524 FUN_149724524 body=32 status=ok
// SIG undefined FUN_149724524(void)

undefined8 FUN_149724524(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149724544 FUN_149724544 body=123 status=ok
// SIG undefined FUN_149724544(void)

void FUN_149724544(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b30 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b30 = FUN_140002ddd(FUN_146751cf6,uVar1,L"UpdateVolumeAttributesDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24b30,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497245bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497245c0 FUN_1497245c0 body=93 status=ok
// SIG undefined FUN_1497245c0(void)

void FUN_1497245c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24b30 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24b30 = FUN_140002ddd(FUN_146751cf6,uVar2,L"UpdateVolumeAttributesDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24b30,param_1);
  return;
}



// FUNCTION 14972461e FUN_14972461e body=55 status=ok
// SIG undefined FUN_14972461e(void)

void FUN_14972461e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b30 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b30 = FUN_140002ddd(FUN_146751cf6,uVar1,L"UpdateVolumeAttributesDataflowNode");
  }
  return;
}



// FUNCTION 149724656 FUN_149724656 body=233 status=ok
// SIG undefined FUN_149724656(void)

ulonglong FUN_149724656(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FUpdateVolumeAttributesDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497246f0;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497246f0;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497246f0;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497246f0:
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



// FUNCTION 149724742 FUN_149724742 body=91 status=ok
// SIG undefined FUN_149724742(void)

void FUN_149724742(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2c6b0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined4 *)(param_2 + 0x4d) = 0;
  *(undefined2 *)((longlong)param_2 + 0x26c) = 1;
  return;
}



// FUNCTION 14972479e FUN_14972479e body=91 status=ok
// SIG undefined FUN_14972479e(void)

void FUN_14972479e(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2c6b0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined4 *)(param_2 + 0x4d) = 0;
  *(undefined2 *)((longlong)param_2 + 0x26c) = 1;
  return;
}



// FUNCTION 14972481e FUN_14972481e body=63 status=ok
// SIG undefined FUN_14972481e(void)

undefined1 FUN_14972481e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149724c3e(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 149724886 FUN_149724886 body=59 status=ok
// SIG undefined FUN_149724886(void)

undefined8 FUN_149724886(longlong *param_1)

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



// FUNCTION 1497248d2 FUN_1497248d2 body=40 status=ok
// SIG undefined FUN_1497248d2(void)

void FUN_1497248d2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_149724c02(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 149724948 FUN_149724948 body=43 status=ok
// SIG undefined FUN_149724948(void)

undefined8 FUN_149724948(undefined8 param_1,int param_2)

{
  FUN_149724c02();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 149724974 FUN_149724974 body=38 status=ok
// SIG undefined FUN_149724974(void)

undefined8 FUN_149724974(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FGetConvexHullVolumeDataflowNode",1);
  return param_2;
}



// FUNCTION 14972499a FUN_14972499a body=38 status=ok
// SIG undefined FUN_14972499a(void)

undefined8 FUN_14972499a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GetConvexHullVolume",1);
  return param_2;
}



// FUNCTION 1497249c0 FUN_1497249c0 body=38 status=ok
// SIG undefined FUN_1497249c0(void)

undefined8 FUN_1497249c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Utilities",1);
  return param_2;
}



// FUNCTION 1497249e6 FUN_1497249e6 body=32 status=ok
// SIG undefined FUN_1497249e6(void)

undefined8 FUN_1497249e6(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149724a06 FUN_149724a06 body=123 status=ok
// SIG undefined FUN_149724a06(void)

void FUN_149724a06(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b48 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b48 = FUN_140002ddd(FUN_146751d56,uVar1,L"GetConvexHullVolumeDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24b48,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149724a7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149724a82 FUN_149724a82 body=93 status=ok
// SIG undefined FUN_149724a82(void)

void FUN_149724a82(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24b48 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24b48 = FUN_140002ddd(FUN_146751d56,uVar2,L"GetConvexHullVolumeDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24b48,param_1);
  return;
}



// FUNCTION 149724ae0 FUN_149724ae0 body=55 status=ok
// SIG undefined FUN_149724ae0(void)

void FUN_149724ae0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b48 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b48 = FUN_140002ddd(FUN_146751d56,uVar1,L"GetConvexHullVolumeDataflowNode");
  }
  return;
}



// FUNCTION 149724b18 FUN_149724b18 body=233 status=ok
// SIG undefined FUN_149724b18(void)

ulonglong FUN_149724b18(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FGetConvexHullVolumeDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149724bb2;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149724bb2;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149724bb2;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149724bb2:
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



// FUNCTION 149724c02 FUN_149724c02 body=60 status=ok
// SIG undefined FUN_149724c02(void)

void FUN_149724c02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be2c6b0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149724c3e FUN_149724c3e body=92 status=ok
// SIG undefined FUN_149724c3e(void)

longlong FUN_149724c3e(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  *(undefined2 *)(param_1 + 0x26c) = *(undefined2 *)(param_2 + 0x26c);
  *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  return param_1;
}



// FUNCTION 149724cd0 FUN_149724cd0 body=63 status=ok
// SIG undefined FUN_149724cd0(void)

undefined1 FUN_149724cd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149725194(param_2,param_3);
    param_3 = param_3 + 0x288;
    param_2 = param_2 + 0x288;
  }
  return 1;
}



// FUNCTION 149724d38 FUN_149724d38 body=59 status=ok
// SIG undefined FUN_149724d38(void)

undefined8 FUN_149724d38(longlong *param_1)

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



// FUNCTION 149724d84 FUN_149724d84 body=40 status=ok
// SIG undefined FUN_149724d84(void)

void FUN_149724d84(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x288) == '\x01') {
    FUN_149725158(param_2);
    *(undefined1 *)(param_2 + 0x288) = 0;
  }
  return;
}



// FUNCTION 149724dfa FUN_149724dfa body=163 status=ok
// SIG undefined FUN_149724dfa(void)

undefined8 * FUN_149724dfa(undefined8 *param_1)

{
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be2c960;
  FUN_1414db454(param_1 + 0x33);
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x8000000000;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x269) = 1;
  *(undefined1 *)((longlong)param_1 + 0x26a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26b) = 1;
  *(undefined1 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x26f) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0x3c23d70a3f800000;
  *(undefined1 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x42480000;
  return param_1;
}



// FUNCTION 149724e9e FUN_149724e9e body=43 status=ok
// SIG undefined FUN_149724e9e(void)

undefined8 FUN_149724e9e(undefined8 param_1,int param_2)

{
  FUN_149725158();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x288);
  }
  return param_1;
}



// FUNCTION 149724eca FUN_149724eca body=38 status=ok
// SIG undefined FUN_149724eca(void)

undefined8 FUN_149724eca(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FFixTinyGeoDataflowNode",1);
  return param_2;
}



// FUNCTION 149724ef0 FUN_149724ef0 body=38 status=ok
// SIG undefined FUN_149724ef0(void)

undefined8 FUN_149724ef0(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FixTinyGeo",1);
  return param_2;
}



// FUNCTION 149724f16 FUN_149724f16 body=38 status=ok
// SIG undefined FUN_149724f16(void)

undefined8 FUN_149724f16(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Fracture|Utilities",1);
  return param_2;
}



// FUNCTION 149724f3c FUN_149724f3c body=32 status=ok
// SIG undefined FUN_149724f3c(void)

undefined8 FUN_149724f3c(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149724f5c FUN_149724f5c body=123 status=ok
// SIG undefined FUN_149724f5c(void)

void FUN_149724f5c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b60 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b60 = FUN_140002ddd(FUN_146751db6,uVar1,L"FixTinyGeoDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24b60,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149724fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149724fd8 FUN_149724fd8 body=93 status=ok
// SIG undefined FUN_149724fd8(void)

void FUN_149724fd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24b60 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24b60 = FUN_140002ddd(FUN_146751db6,uVar2,L"FixTinyGeoDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24b60,param_1);
  return;
}



// FUNCTION 149725036 FUN_149725036 body=55 status=ok
// SIG undefined FUN_149725036(void)

void FUN_149725036(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b60 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b60 = FUN_140002ddd(FUN_146751db6,uVar1,L"FixTinyGeoDataflowNode");
  }
  return;
}



// FUNCTION 14972506e FUN_14972506e body=233 status=ok
// SIG undefined FUN_14972506e(void)

ulonglong FUN_14972506e(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FFixTinyGeoDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149725108;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149725108;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149725108;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149725108:
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



// FUNCTION 149725158 FUN_149725158 body=60 status=ok
// SIG undefined FUN_149725158(void)

void FUN_149725158(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be2c960;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149725194 FUN_149725194 body=94 status=ok
// SIG undefined FUN_149725194(void)

longlong FUN_149725194(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x268);
  uVar2 = *(undefined8 *)(param_2 + 0x270);
  uVar3 = *(undefined8 *)(param_2 + 0x27c);
  *(undefined8 *)(param_1 + 0x274) = *(undefined8 *)(param_2 + 0x274);
  *(undefined8 *)(param_1 + 0x27c) = uVar3;
  *(undefined8 *)(param_1 + 0x268) = uVar1;
  *(undefined8 *)(param_1 + 0x270) = uVar2;
  return param_1;
}



// FUNCTION 1497251f4 FUN_1497251f4 body=98 status=ok
// SIG undefined FUN_1497251f4(void)

void FUN_1497251f4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2cc20;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined2 *)(param_2 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_2 + 0x26c) = 0x42700000;
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}



// FUNCTION 149725256 FUN_149725256 body=98 status=ok
// SIG undefined FUN_149725256(void)

void FUN_149725256(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2cc20;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined2 *)(param_2 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_2 + 0x26c) = 0x42700000;
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}



// FUNCTION 1497252dc FUN_1497252dc body=63 status=ok
// SIG undefined FUN_1497252dc(void)

undefined1 FUN_1497252dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1497256fc(param_2,param_3);
    param_3 = param_3 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return 1;
}



// FUNCTION 149725344 FUN_149725344 body=59 status=ok
// SIG undefined FUN_149725344(void)

undefined8 FUN_149725344(longlong *param_1)

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



// FUNCTION 149725390 FUN_149725390 body=40 status=ok
// SIG undefined FUN_149725390(void)

void FUN_149725390(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x278) == '\x01') {
    FUN_1497256c0(param_2);
    *(undefined1 *)(param_2 + 0x278) = 0;
  }
  return;
}



// FUNCTION 149725406 FUN_149725406 body=43 status=ok
// SIG undefined FUN_149725406(void)

undefined8 FUN_149725406(undefined8 param_1,int param_2)

{
  FUN_1497256c0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 149725432 FUN_149725432 body=38 status=ok
// SIG undefined FUN_149725432(void)

undefined8 FUN_149725432(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FRecomputeNormalsInGeometryCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 149725458 FUN_149725458 body=38 status=ok
// SIG undefined FUN_149725458(void)

undefined8 FUN_149725458(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"RecomputeNormalsInGeometryCollection",1);
  return param_2;
}



// FUNCTION 14972547e FUN_14972547e body=38 status=ok
// SIG undefined FUN_14972547e(void)

undefined8 FUN_14972547e(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Fracture|Utilities",1);
  return param_2;
}



// FUNCTION 1497254a4 FUN_1497254a4 body=32 status=ok
// SIG undefined FUN_1497254a4(void)

undefined8 FUN_1497254a4(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 1497254c4 FUN_1497254c4 body=123 status=ok
// SIG undefined FUN_1497254c4(void)

void FUN_1497254c4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b78 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b78 =
         FUN_140002ddd(FUN_146751e16,uVar1,L"RecomputeNormalsInGeometryCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24b78,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00014972553c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149725540 FUN_149725540 body=93 status=ok
// SIG undefined FUN_149725540(void)

void FUN_149725540(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24b78 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24b78 =
         FUN_140002ddd(FUN_146751e16,uVar2,L"RecomputeNormalsInGeometryCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24b78,param_1);
  return;
}



// FUNCTION 14972559e FUN_14972559e body=55 status=ok
// SIG undefined FUN_14972559e(void)

void FUN_14972559e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b78 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b78 =
         FUN_140002ddd(FUN_146751e16,uVar1,L"RecomputeNormalsInGeometryCollectionDataflowNode");
  }
  return;
}



// FUNCTION 1497255d6 FUN_1497255d6 body=233 status=ok
// SIG undefined FUN_1497255d6(void)

ulonglong FUN_1497255d6(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FRecomputeNormalsInGeometryCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149725670;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149725670;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149725670;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149725670:
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



// FUNCTION 1497256c0 FUN_1497256c0 body=60 status=ok
// SIG undefined FUN_1497256c0(void)

void FUN_1497256c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be2cc20;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 1497256fc FUN_1497256fc body=92 status=ok
// SIG undefined FUN_1497256fc(void)

longlong FUN_1497256fc(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x270);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  return param_1;
}



// FUNCTION 14972575a FUN_14972575a body=89 status=ok
// SIG undefined FUN_14972575a(void)

void FUN_14972575a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2cef0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_2 + 0x26c) = 0x42480000;
  return;
}



// FUNCTION 1497257b4 FUN_1497257b4 body=89 status=ok
// SIG undefined FUN_1497257b4(void)

void FUN_1497257b4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2cef0;
  FUN_1414db454(param_2 + 0x33);
  param_2[0x4b] = 0;
  param_2[0x4c] = 0x8000000000;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined4 *)((longlong)param_2 + 0x26c) = 0x42480000;
  return;
}



// FUNCTION 149725832 FUN_149725832 body=63 status=ok
// SIG undefined FUN_149725832(void)

undefined1 FUN_149725832(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149725c52(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 14972589a FUN_14972589a body=59 status=ok
// SIG undefined FUN_14972589a(void)

undefined8 FUN_14972589a(longlong *param_1)

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



// FUNCTION 1497258e6 FUN_1497258e6 body=40 status=ok
// SIG undefined FUN_1497258e6(void)

void FUN_1497258e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_149725c16(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 14972595c FUN_14972595c body=43 status=ok
// SIG undefined FUN_14972595c(void)

undefined8 FUN_14972595c(undefined8 param_1,int param_2)

{
  FUN_149725c16();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 149725988 FUN_149725988 body=38 status=ok
// SIG undefined FUN_149725988(void)

undefined8 FUN_149725988(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FResampleGeometryCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 1497259ae FUN_1497259ae body=38 status=ok
// SIG undefined FUN_1497259ae(void)

undefined8 FUN_1497259ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ResampleGeometryCollection",1);
  return param_2;
}



// FUNCTION 1497259d4 FUN_1497259d4 body=38 status=ok
// SIG undefined FUN_1497259d4(void)

undefined8 FUN_1497259d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Fracture|Utilities",1);
  return param_2;
}



// FUNCTION 1497259fa FUN_1497259fa body=32 status=ok
// SIG undefined FUN_1497259fa(void)

undefined8 FUN_1497259fa(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149725a1a FUN_149725a1a body=123 status=ok
// SIG undefined FUN_149725a1a(void)

void FUN_149725a1a(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b90 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b90 = FUN_140002ddd(FUN_146751e76,uVar1,L"ResampleGeometryCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24b90,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149725a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149725a96 FUN_149725a96 body=93 status=ok
// SIG undefined FUN_149725a96(void)

void FUN_149725a96(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24b90 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24b90 = FUN_140002ddd(FUN_146751e76,uVar2,L"ResampleGeometryCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24b90,param_1);
  return;
}



// FUNCTION 149725af4 FUN_149725af4 body=55 status=ok
// SIG undefined FUN_149725af4(void)

void FUN_149725af4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24b90 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24b90 = FUN_140002ddd(FUN_146751e76,uVar1,L"ResampleGeometryCollectionDataflowNode");
  }
  return;
}



// FUNCTION 149725b2c FUN_149725b2c body=233 status=ok
// SIG undefined FUN_149725b2c(void)

ulonglong FUN_149725b2c(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FResampleGeometryCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149725bc6;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149725bc6;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149725bc6;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149725bc6:
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



// FUNCTION 149725c16 FUN_149725c16 body=60 status=ok
// SIG undefined FUN_149725c16(void)

void FUN_149725c16(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be2cef0;
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 149725c52 FUN_149725c52 body=80 status=ok
// SIG undefined FUN_149725c52(void)

longlong FUN_149725c52(longlong param_1,longlong param_2)

{
  FUN_146fc06e2();
  FUN_146ecd102(param_1 + 0x198,param_2 + 0x198);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x248,param_2 + 0x248);
  }
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  return param_1;
}



// FUNCTION 149725ca4 FUN_149725ca4 body=60 status=ok
// SIG undefined FUN_149725ca4(void)

void FUN_149725ca4(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2d1b0;
  FUN_1414db454(param_2 + 0x33);
  *(undefined2 *)(param_2 + 0x49) = 1;
  *(undefined1 *)((longlong)param_2 + 0x24a) = 0;
  return;
}



// FUNCTION 149725ce0 FUN_149725ce0 body=60 status=ok
// SIG undefined FUN_149725ce0(void)

void FUN_149725ce0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146fc02b8(param_2);
  *param_2 = &PTR_FUN_14be2d1b0;
  FUN_1414db454(param_2 + 0x33);
  *(undefined2 *)(param_2 + 0x49) = 1;
  *(undefined1 *)((longlong)param_2 + 0x24a) = 0;
  return;
}



// FUNCTION 149725d40 FUN_149725d40 body=111 status=ok
// SIG undefined FUN_149725d40(void)

undefined8 FUN_149725d40(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_146ecd102(param_2 + 0x198,param_3 + 0x198);
    *(undefined2 *)(param_2 + 0x248) = *(undefined2 *)(param_3 + 0x248);
    *(undefined1 *)(param_2 + 0x24a) = *(undefined1 *)(param_3 + 0x24a);
    param_2 = param_2 + 0x250;
    param_3 = param_3 + 0x250;
  }
  return 1;
}



// FUNCTION 149725dd8 FUN_149725dd8 body=59 status=ok
// SIG undefined FUN_149725dd8(void)

undefined8 FUN_149725dd8(longlong *param_1)

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



// FUNCTION 149725e24 FUN_149725e24 body=62 status=ok
// SIG undefined FUN_149725e24(void)

void FUN_149725e24(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *param_2 = &PTR_FUN_14be2d1b0;
    FUN_14054b30a(param_2 + 0x33);
    FUN_146fc8eba(param_2);
    *(undefined1 *)(param_2 + 0x4a) = 0;
  }
  return;
}



// FUNCTION 149725eb0 FUN_149725eb0 body=68 status=ok
// SIG undefined FUN_149725eb0(void)

undefined8 * FUN_149725eb0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d1b0;
  FUN_14054b30a(param_1 + 0x33);
  FUN_146fc8eba(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 149725ef4 FUN_149725ef4 body=38 status=ok
// SIG undefined FUN_149725ef4(void)

undefined8 FUN_149725ef4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FValidateGeometryCollectionDataflowNode",1);
  return param_2;
}



// FUNCTION 149725f1a FUN_149725f1a body=38 status=ok
// SIG undefined FUN_149725f1a(void)

undefined8 FUN_149725f1a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"ValidateGeometryCollection",1);
  return param_2;
}



// FUNCTION 149725f40 FUN_149725f40 body=38 status=ok
// SIG undefined FUN_149725f40(void)

undefined8 FUN_149725f40(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"GeometryCollection|Fracture|Utilities",1);
  return param_2;
}



// FUNCTION 149725f66 FUN_149725f66 body=32 status=ok
// SIG undefined FUN_149725f66(void)

undefined8 FUN_149725f66(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149725f86 FUN_149725f86 body=123 status=ok
// SIG undefined FUN_149725f86(void)

void FUN_149725f86(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ba8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ba8 = FUN_140002ddd(FUN_146751ed6,uVar1,L"ValidateGeometryCollectionDataflowNode");
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24ba8,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000149725ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 149726002 FUN_149726002 body=93 status=ok
// SIG undefined FUN_149726002(void)

void FUN_149726002(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24ba8 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24ba8 = FUN_140002ddd(FUN_146751ed6,uVar2,L"ValidateGeometryCollectionDataflowNode");
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24ba8,param_1);
  return;
}



// FUNCTION 149726060 FUN_149726060 body=55 status=ok
// SIG undefined FUN_149726060(void)

void FUN_149726060(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ba8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ba8 = FUN_140002ddd(FUN_146751ed6,uVar1,L"ValidateGeometryCollectionDataflowNode");
  }
  return;
}



// FUNCTION 149726098 FUN_149726098 body=233 status=ok
// SIG undefined FUN_149726098(void)

ulonglong FUN_149726098(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FValidateGeometryCollectionDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_149726132;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_149726132;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_149726132;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_149726132:
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



// FUNCTION 1497261b8 FUN_1497261b8 body=134 status=ok
// SIG undefined FUN_1497261b8(void)

undefined8 FUN_1497261b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146fc06e2(param_2,param_3);
    FUN_144a67f5c(param_2 + 0x198,param_3 + 0x198);
    FUN_14479f9aa(param_2 + 0x1a8,param_3 + 0x1a8);
    uVar1 = *(undefined4 *)(param_3 + 0x1bc);
    uVar2 = *(undefined4 *)(param_3 + 0x1c0);
    uVar3 = *(undefined4 *)(param_3 + 0x1c4);
    *(undefined4 *)(param_2 + 0x1b8) = *(undefined4 *)(param_3 + 0x1b8);
    *(undefined4 *)(param_2 + 0x1bc) = uVar1;
    *(undefined4 *)(param_2 + 0x1c0) = uVar2;
    *(undefined4 *)(param_2 + 0x1c4) = uVar3;
    *(undefined4 *)(param_2 + 0x1c8) = *(undefined4 *)(param_3 + 0x1c8);
    param_2 = param_2 + 0x1d0;
    param_3 = param_3 + 0x1d0;
  }
  return 1;
}



// FUNCTION 149726266 FUN_149726266 body=59 status=ok
// SIG undefined FUN_149726266(void)

undefined8 FUN_149726266(longlong *param_1)

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



// FUNCTION 1497262b2 FUN_1497262b2 body=40 status=ok
// SIG undefined FUN_1497262b2(void)

void FUN_1497262b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_14972664c(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 149726328 FUN_149726328 body=106 status=ok
// SIG undefined FUN_149726328(void)

undefined8 * FUN_149726328(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_146fc02b8();
  *param_1 = &PTR_FUN_14be2d480;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 1;
  uVar1 = DAT_14c75905c;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = DAT_14c75905c;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = DAT_14c75905c;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  return param_1;
}



// FUNCTION 149726392 FUN_149726392 body=43 status=ok
// SIG undefined FUN_149726392(void)

undefined8 FUN_149726392(undefined8 param_1,int param_2)

{
  FUN_14972664c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 1497263be FUN_1497263be body=38 status=ok
// SIG undefined FUN_1497263be(void)

undefined8 FUN_1497263be(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"FCreateColorArrayFromFloatArrayDataflowNode",1);
  return param_2;
}



// FUNCTION 1497263e4 FUN_1497263e4 body=38 status=ok
// SIG undefined FUN_1497263e4(void)

undefined8 FUN_1497263e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"CreateColorArrayFromFloatArray",1);
  return param_2;
}



// FUNCTION 14972640a FUN_14972640a body=38 status=ok
// SIG undefined FUN_14972640a(void)

undefined8 FUN_14972640a(undefined8 param_1,undefined8 param_2)

{
  FUN_1446ddc76(param_2,"Collection|Utilities",1);
  return param_2;
}



// FUNCTION 149726430 FUN_149726430 body=32 status=ok
// SIG undefined FUN_149726430(void)

undefined8 FUN_149726430(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  return param_2;
}



// FUNCTION 149726450 FUN_149726450 body=123 status=ok
// SIG undefined FUN_149726450(void)

void FUN_149726450(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_14cc24bc0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24bc0 = FUN_140002ddd(FUN_146751f36,uVar1,L"CreateColorArrayFromFloatArrayDataflowNode")
    ;
  }
  FUN_14496b17c(0,param_2,param_1,DAT_14cc24bc0,0,0);
  (**(code **)(*param_1 + 0x98))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001497264c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  return;
}



// FUNCTION 1497264cc FUN_1497264cc body=93 status=ok
// SIG undefined FUN_1497264cc(void)

void FUN_1497264cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  if (DAT_14cc24bc0 == 0) {
    uVar2 = FUN_140a6b3ed();
    DAT_14cc24bc0 = FUN_140002ddd(FUN_146751f36,uVar2,L"CreateColorArrayFromFloatArrayDataflowNode")
    ;
  }
  FUN_1468fbe3e(uVar1,DAT_14cc24bc0,param_1);
  return;
}



// FUNCTION 14972652a FUN_14972652a body=55 status=ok
// SIG undefined FUN_14972652a(void)

void FUN_14972652a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24bc0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24bc0 = FUN_140002ddd(FUN_146751f36,uVar1,L"CreateColorArrayFromFloatArrayDataflowNode")
    ;
  }
  return;
}



// FUNCTION 149726562 FUN_149726562 body=233 status=ok
// SIG undefined FUN_149726562(void)

ulonglong FUN_149726562(undefined8 param_1,undefined8 param_2)

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
  FUN_1446ddc76(local_60,"FCreateColorArrayFromFloatArrayDataflowNode",1);
  FUN_1400021e4(local_60,&local_58);
  pwVar5 = local_58;
  uVar4 = (undefined7)((ulonglong)&local_48 >> 8);
  if (local_40 == local_50) {
    uVar3 = CONCAT71(uVar4,1);
    if (local_40 < 2) goto LAB_1497265fc;
    iVar1 = wcscmp(local_48,local_58);
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) goto LAB_1497265fc;
  }
  else {
    uVar3 = CONCAT71(uVar4,1);
    if (local_50 + local_40 == 1) goto LAB_1497265fc;
  }
  uVar2 = FUN_146fb9c5e(param_1,param_2);
  uVar3 = (ulonglong)uVar2;
  pwVar5 = local_58;
LAB_1497265fc:
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



// FUNCTION 14972664c FUN_14972664c body=65 status=ok
// SIG undefined FUN_14972664c(void)

void FUN_14972664c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be2d480;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_146fc8eba(param_1);
  return;
}



// FUNCTION 14972668e FUN_14972668e body=311 status=ok
// SIG undefined FUN_14972668e(void)

longlong FUN_14972668e(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_1497267c6(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
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
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497267c6 FUN_1497267c6 body=208 status=ok
// SIG undefined FUN_1497267c6(void)

void FUN_1497267c6(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_149726898(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149726898 FUN_149726898 body=189 status=ok
// SIG undefined FUN_149726898(void)

undefined8 *
FUN_149726898(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar2;
  local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar3;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be2d5f0;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar2;
  uStack_30 = uVar3;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 << 2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149726956 FUN_149726956 body=62 status=ok
// SIG undefined FUN_149726956(void)

undefined8 * FUN_149726956(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d5f0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 149726994 FUN_149726994 body=101 status=ok
// SIG undefined FUN_149726994(void)

undefined8 * FUN_149726994(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be2d600;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497269fa FUN_1497269fa body=34 status=ok
// SIG undefined FUN_1497269fa(void)

undefined8 FUN_1497269fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149726a1c FUN_149726a1c body=101 status=ok
// SIG undefined FUN_149726a1c(void)

undefined8 * FUN_149726a1c(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be2d600;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149726a82 FUN_149726a82 body=177 status=ok
// SIG undefined FUN_149726a82(void)

void FUN_149726a82(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_149726b34(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149726b34 FUN_149726b34 body=223 status=ok
// SIG undefined FUN_149726b34(void)

void FUN_149726b34(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4,
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
  local_48 = (undefined8 *)FUN_14001cc68(0x48,0x10);
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
  *local_48 = &PTR_FUN_14be2d610;
  local_48[7] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(local_48 + 8) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)local_48 + 0x44) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
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



// FUNCTION 149726c14 FUN_149726c14 body=62 status=ok
// SIG undefined FUN_149726c14(void)

undefined8 * FUN_149726c14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d610;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 149726c52 FUN_149726c52 body=101 status=ok
// SIG undefined FUN_149726c52(void)

undefined8 * FUN_149726c52(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be2d620;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149726cb8 FUN_149726cb8 body=34 status=ok
// SIG undefined FUN_149726cb8(void)

undefined8 FUN_149726cb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149726cda FUN_149726cda body=101 status=ok
// SIG undefined FUN_149726cda(void)

undefined8 * FUN_149726cda(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be2d620;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149726d40 FUN_149726d40 body=22 status=ok
// SIG undefined FUN_149726d40(void)

undefined8 FUN_149726d40(undefined8 param_1)

{
  FUN_149726d56();
  return param_1;
}



// FUNCTION 149726d56 FUN_149726d56 body=153 status=ok
// SIG undefined FUN_149726d56(void)

undefined8 * FUN_149726d56(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149726df0(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149726df0 FUN_149726df0 body=258 status=ok
// SIG undefined FUN_149726df0(void)

undefined8 * FUN_149726df0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be1d610;
  *(undefined4 *)(param_1 + 0x33) = 0;
  local_58 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x36;
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149726ef4 FUN_149726ef4 body=25 status=ok
// SIG undefined FUN_149726ef4(void)

undefined8 FUN_149726ef4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 149726f2c FUN_149726f2c body=22 status=ok
// SIG undefined FUN_149726f2c(void)

undefined8 FUN_149726f2c(undefined8 param_1)

{
  FUN_149726f42();
  return param_1;
}



// FUNCTION 149726f42 FUN_149726f42 body=153 status=ok
// SIG undefined FUN_149726f42(void)

undefined8 * FUN_149726f42(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1c0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149726fdc(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149726fdc FUN_149726fdc body=210 status=ok
// SIG undefined FUN_149726fdc(void)

undefined8 * FUN_149726fdc(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be1dae0;
  *(undefined1 *)(param_1 + 0x33) = 4;
  local_50 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x36;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497270b0 FUN_1497270b0 body=120 status=ok
// SIG undefined FUN_1497270b0(void)

void FUN_1497270b0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0xffffffff;
  local_18 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_2;
  local_28 = param_3;
  uVar1 = FUN_146fb8a66(param_1,&local_40,param_4);
  if (param_3 != 0) {
    FUN_146fb39ca(uVar1,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972712a FUN_14972712a body=25 status=ok
// SIG undefined FUN_14972712a(void)

undefined8 FUN_14972712a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 149727162 FUN_149727162 body=22 status=ok
// SIG undefined FUN_149727162(void)

undefined8 FUN_149727162(undefined8 param_1)

{
  FUN_149727178();
  return param_1;
}



// FUNCTION 149727178 FUN_149727178 body=153 status=ok
// SIG undefined FUN_149727178(void)

undefined8 * FUN_149727178(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1c8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149727212(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149727212 FUN_149727212 body=268 status=ok
// SIG undefined FUN_149727212(void)

undefined8 * FUN_149727212(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be1dda0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  local_58 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x36;
  FUN_146fb8a66(param_1,&local_58,&local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149727320 FUN_149727320 body=25 status=ok
// SIG undefined FUN_149727320(void)

undefined8 FUN_149727320(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 149727358 FUN_149727358 body=22 status=ok
// SIG undefined FUN_149727358(void)

undefined8 FUN_149727358(undefined8 param_1)

{
  FUN_14972736e();
  return param_1;
}



// FUNCTION 14972736e FUN_14972736e body=153 status=ok
// SIG undefined FUN_14972736e(void)

undefined8 * FUN_14972736e(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1e0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149727408(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149727408 FUN_149727408 body=377 status=ok
// SIG undefined FUN_149727408(void)

undefined8 * FUN_149727408(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be1e040;
  local_60 = param_1 + 0x33;
  local_88 = param_1 + 0x3b;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x37;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149727582 FUN_149727582 body=25 status=ok
// SIG undefined FUN_149727582(void)

undefined8 FUN_149727582(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497275ba FUN_1497275ba body=22 status=ok
// SIG undefined FUN_1497275ba(void)

undefined8 FUN_1497275ba(undefined8 param_1)

{
  FUN_1497275d0();
  return param_1;
}



// FUNCTION 1497275d0 FUN_1497275d0 body=153 status=ok
// SIG undefined FUN_1497275d0(void)

undefined8 * FUN_1497275d0(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1c8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14972766a(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972766a FUN_14972766a body=220 status=ok
// SIG undefined FUN_14972766a(void)

undefined8 * FUN_14972766a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be1e2f0;
  local_50 = param_1 + 0x33;
  param_1[0x37] = 0;
  param_1[0x38] = 0x8000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x35;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149727748 FUN_149727748 body=25 status=ok
// SIG undefined FUN_149727748(void)

undefined8 FUN_149727748(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 149727780 FUN_149727780 body=22 status=ok
// SIG undefined FUN_149727780(void)

undefined8 FUN_149727780(undefined8 param_1)

{
  FUN_149727796();
  return param_1;
}



// FUNCTION 149727796 FUN_149727796 body=153 status=ok
// SIG undefined FUN_149727796(void)

undefined8 * FUN_149727796(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1d0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149727830(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149727830 FUN_149727830 body=237 status=ok
// SIG undefined FUN_149727830(void)

undefined8 * FUN_149727830(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be1e700;
  local_50 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 3;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0x8000000000;
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  FUN_146fb824a(param_1,&local_50,&local_70);
  local_70 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = param_1 + 0x36;
  FUN_146fb8a66(param_1,&local_50,&local_70);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972791e FUN_14972791e body=25 status=ok
// SIG undefined FUN_14972791e(void)

undefined8 FUN_14972791e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 149727956 FUN_149727956 body=22 status=ok
// SIG undefined FUN_149727956(void)

undefined8 FUN_149727956(undefined8 param_1)

{
  FUN_14972796c();
  return param_1;
}



// FUNCTION 14972796c FUN_14972796c body=153 status=ok
// SIG undefined FUN_14972796c(void)

undefined8 * FUN_14972796c(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1e0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149727a06(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149727a06 FUN_149727a06 body=394 status=ok
// SIG undefined FUN_149727a06(void)

undefined8 * FUN_149727a06(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be1e9c0;
  local_60 = param_1 + 0x33;
  param_1[0x37] = 0;
  param_1[0x38] = 0x8000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x39] = 0x3f80000000000000;
  local_88 = param_1 + 0x3a;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x1cc);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149727b92 FUN_149727b92 body=120 status=ok
// SIG undefined FUN_149727b92(void)

void FUN_149727b92(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0xffffffff;
  local_18 = 0;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = param_2;
  local_28 = param_3;
  uVar1 = FUN_146fb8a66(param_1,&local_40,param_4);
  if (param_3 != 0) {
    FUN_146fb39ca(uVar1,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149727c0c FUN_149727c0c body=25 status=ok
// SIG undefined FUN_149727c0c(void)

undefined8 FUN_149727c0c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 149727c44 FUN_149727c44 body=22 status=ok
// SIG undefined FUN_149727c44(void)

undefined8 FUN_149727c44(undefined8 param_1)

{
  FUN_149727c5a();
  return param_1;
}



// FUNCTION 149727c5a FUN_149727c5a body=153 status=ok
// SIG undefined FUN_149727c5a(void)

undefined8 * FUN_149727c5a(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1e0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149727cf4(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149727cf4 FUN_149727cf4 body=333 status=ok
// SIG undefined FUN_149727cf4(void)

undefined8 * FUN_149727cf4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be1ec70;
  local_60 = param_1 + 0x33;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x3f80000000000080;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x39;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3a;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149727e42 FUN_149727e42 body=25 status=ok
// SIG undefined FUN_149727e42(void)

undefined8 FUN_149727e42(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 149727e7a FUN_149727e7a body=22 status=ok
// SIG undefined FUN_149727e7a(void)

undefined8 FUN_149727e7a(undefined8 param_1)

{
  FUN_149727e90();
  return param_1;
}



// FUNCTION 149727e90 FUN_149727e90 body=153 status=ok
// SIG undefined FUN_149727e90(void)

undefined8 * FUN_149727e90(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1c8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_149727f2a(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149727f2a FUN_149727f2a body=252 status=ok
// SIG undefined FUN_149727f2a(void)

undefined8 * FUN_149727f2a(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be1ef30;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_1497270b0(param_1,param_1 + 0x37,param_1 + 0x33,&local_60);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149728028 FUN_149728028 body=25 status=ok
// SIG undefined FUN_149728028(void)

undefined8 FUN_149728028(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 149728060 FUN_149728060 body=22 status=ok
// SIG undefined FUN_149728060(void)

undefined8 FUN_149728060(undefined8 param_1)

{
  FUN_149728076();
  return param_1;
}



// FUNCTION 149728076 FUN_149728076 body=153 status=ok
// SIG undefined FUN_149728076(void)

undefined8 * FUN_149728076(undefined8 *param_1,undefined4 *param_2)

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
  FUN_149728110(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149728110 FUN_149728110 body=244 status=ok
// SIG undefined FUN_149728110(void)

undefined8 * FUN_149728110(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be1f1e0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 1;
  puVar1 = param_1 + 0x34;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = puVar1;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_70 = 0;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = param_1 + 0x33;
  FUN_146fb824a(param_1,&local_58,&local_70);
  local_58 = (undefined8 *)0x0;
  FUN_149727b92(param_1,puVar1,puVar1,&local_58);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149728206 FUN_149728206 body=25 status=ok
// SIG undefined FUN_149728206(void)

undefined8 FUN_149728206(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14972823e FUN_14972823e body=22 status=ok
// SIG undefined FUN_14972823e(void)

undefined8 FUN_14972823e(undefined8 param_1)

{
  FUN_149728254();
  return param_1;
}



// FUNCTION 149728254 FUN_149728254 body=153 status=ok
// SIG undefined FUN_149728254(void)

undefined8 * FUN_149728254(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1e0,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1497282ee(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497282ee FUN_1497282ee body=340 status=ok
// SIG undefined FUN_1497282ee(void)

undefined8 * FUN_1497282ee(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be1f670;
  local_60 = param_1 + 0x33;
  param_1[0x37] = 0;
  param_1[0x38] = 0x8000000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x1cc);
  FUN_146fb8a66(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x3a;
  FUN_146fb8a66(param_1,&local_60,&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149728444 FUN_149728444 body=25 status=ok
// SIG undefined FUN_149728444(void)

undefined8 FUN_149728444(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 14972847c FUN_14972847c body=22 status=ok
// SIG undefined FUN_14972847c(void)

undefined8 FUN_14972847c(undefined8 param_1)

{
  FUN_149728492();
  return param_1;
}



// FUNCTION 149728492 FUN_149728492 body=153 status=ok
// SIG undefined FUN_149728492(void)

undefined8 * FUN_149728492(undefined8 *param_1,undefined4 *param_2)

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
  plVar1 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14972852c(plVar1,&local_48);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  (**(code **)(*plVar1 + 0xe0))(plVar1);
  *param_1 = plVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972852c FUN_14972852c body=350 status=ok
// SIG undefined FUN_14972852c(void)

undefined8 * FUN_14972852c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  FUN_146fb38ca();
  *param_1 = &PTR_FUN_14be1f930;
  puVar1 = param_1 + 0x33;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  local_88 = param_1 + 0x36;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = puVar1;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = param_1 + 0x35;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = (undefined8 *)((longlong)param_1 + 0x1ac);
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_80 = 0;
  local_60 = local_88;
  local_58 = 0xffffffff;
  local_50 = 0;
  FUN_146fb824a(param_1,&local_60,&local_80);
  local_60 = (undefined8 *)0x0;
  FUN_149727b92(param_1,puVar1,puVar1,&local_60);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14972868c FUN_14972868c body=25 status=ok
// SIG undefined FUN_14972868c(void)

undefined8 FUN_14972868c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  (*(code *)*param_2)(param_1,param_3);
  return param_1;
}



// FUNCTION 1497286c4 FUN_1497286c4 body=177 status=ok
// SIG undefined FUN_1497286c4(void)

void FUN_1497286c4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_149728776(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149728776 FUN_149728776 body=204 status=ok
// SIG undefined FUN_149728776(void)

void FUN_149728776(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar2 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar2;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be2d7b0;
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



// FUNCTION 149728844 FUN_149728844 body=34 status=ok
// SIG undefined FUN_149728844(void)

undefined8 FUN_149728844(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149728866 FUN_149728866 body=101 status=ok
// SIG undefined FUN_149728866(void)

undefined8 * FUN_149728866(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be2d7c0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 1497288cc FUN_1497288cc body=34 status=ok
// SIG undefined FUN_1497288cc(void)

undefined8 FUN_1497288cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1497288ee FUN_1497288ee body=101 status=ok
// SIG undefined FUN_1497288ee(void)

undefined8 * FUN_1497288ee(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be2d7c0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149728954 FUN_149728954 body=311 status=ok
// SIG undefined FUN_149728954(void)

longlong FUN_149728954(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    cVar3 = FUN_146fb5b98(lVar1);
    if (cVar3 == '\0') {
      FUN_146fb32fc(param_1,local_48);
      uVar4 = FUN_146fb331c(param_1);
      FUN_146fb32e0(param_1,local_58);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = FUN_1447addd0(lVar1 + 0x28,0x10);
      local_78 = local_58;
      local_70 = uVar4;
      local_68 = local_48;
      FUN_149728a8c(param_2,uVar5,uVar2,param_3);
    }
    uVar2 = DAT_14c99d1d8;
    uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
    cVar3 = (**(code **)(*param_2 + 0x30))(param_2,uVar4,uVar2);
    if (cVar3 != '\0') {
      uVar4 = FUN_1447addd0(lVar1 + 0x28,0x10);
      plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2,uVar4);
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
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149728a8c FUN_149728a8c body=208 status=ok
// SIG undefined FUN_149728a8c(void)

void FUN_149728a8c(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  local_60 = *param_7;
  local_58 = (undefined8 *)*param_5;
  uStack_50 = *(undefined4 *)(param_5 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_68 = param_6;
  FUN_149728b5e(puVar1,&local_58,param_3,param_4);
  local_58 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149728b5e FUN_149728b5e body=190 status=ok
// SIG undefined FUN_149728b5e(void)

undefined8 *
FUN_149728b5e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_38._0_4_ = (undefined4)uVar2;
  local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar3;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 2) = local_38._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 3) = uStack_30._4_4_;
  param_1[4] = param_3;
  *(undefined4 *)(param_1 + 5) = param_5;
  param_1[6] = param_6;
  *param_1 = &PTR_FUN_14be2d7d0;
  param_1[7] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 8) = iVar1;
  local_38 = uVar2;
  uStack_30 = uVar3;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],_Src,(longlong)iVar1 * 0x18);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149728c1e FUN_149728c1e body=62 status=ok
// SIG undefined FUN_149728c1e(void)

undefined8 * FUN_149728c1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be2d7d0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 149728c5c FUN_149728c5c body=101 status=ok
// SIG undefined FUN_149728c5c(void)

undefined8 * FUN_149728c5c(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be2d7e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149728cc2 FUN_149728cc2 body=34 status=ok
// SIG undefined FUN_149728cc2(void)

undefined8 FUN_149728cc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149728ce4 FUN_149728ce4 body=101 status=ok
// SIG undefined FUN_149728ce4(void)

undefined8 * FUN_149728ce4(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be2d7e0;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149728d4a FUN_149728d4a body=177 status=ok
// SIG undefined FUN_149728d4a(void)

void FUN_149728d4a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_146fb32fc(param_1,local_48);
    uVar2 = FUN_146fb331c(param_1);
    FUN_146fb32e0(param_1,local_58);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = FUN_1447addd0(param_1 + 0x28,0x10);
    local_78 = local_58;
    local_70 = uVar2;
    local_68 = local_48;
    FUN_149728dfc(param_3,uVar3,uVar1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149728dfc FUN_149728dfc body=210 status=ok
// SIG undefined FUN_149728dfc(void)

void FUN_149728dfc(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  uVar1 = *param_7;
  *(undefined4 *)(local_48 + 1) = 0;
  uVar5 = param_5[1];
  *(undefined8 *)((longlong)local_48 + 0xc) = *param_5;
  *(undefined8 *)((longlong)local_48 + 0x14) = uVar5;
  local_48[4] = param_3;
  *(undefined4 *)(local_48 + 5) = param_6;
  local_48[6] = uVar1;
  *local_48 = &PTR_FUN_14be2d7f0;
  local_48[9] = *(undefined8 *)(param_4 + 4);
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(local_48 + 7) = *param_4;
  *(undefined4 *)((longlong)local_48 + 0x3c) = uVar2;
  *(undefined4 *)(local_48 + 8) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x44) = uVar4;
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



// FUNCTION 149728ed0 FUN_149728ed0 body=34 status=ok
// SIG undefined FUN_149728ed0(void)

undefined8 FUN_149728ed0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 149728ef2 FUN_149728ef2 body=101 status=ok
// SIG undefined FUN_149728ef2(void)

undefined8 * FUN_149728ef2(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be2d800;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}



// FUNCTION 149728f58 FUN_149728f58 body=34 status=ok
// SIG undefined FUN_149728f58(void)

undefined8 FUN_149728f58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 149728f7a FUN_149728f7a body=101 status=ok
// SIG undefined FUN_149728f7a(void)

undefined8 * FUN_149728f7a(longlong param_1,undefined8 *param_2,undefined4 param_3)

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
  *puVar5 = &PTR_FUN_14be2d800;
  *(undefined4 *)(puVar5 + 7) = param_3;
  *param_2 = puVar5;
  return param_2;
}


