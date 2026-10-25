// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145587000 FUN_145587000 body=77 status=ok
// SIG undefined FUN_145587000(void)

undefined8 FUN_145587000(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xb;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 1455870b0 FUN_1455870b0 body=42 status=ok
// SIG undefined FUN_1455870b0(void)

undefined1 FUN_1455870b0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1455870e0 FUN_1455870e0 body=42 status=ok
// SIG undefined FUN_1455870e0(void)

undefined1 FUN_1455870e0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 145587110 FUN_145587110 body=42 status=ok
// SIG undefined FUN_145587110(void)

undefined1 FUN_145587110(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145587140 FUN_145587140 body=43 status=ok
// SIG undefined FUN_145587140(void)

undefined8 * FUN_145587140(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 145587170 FUN_145587170 body=118 status=ok
// SIG undefined FUN_145587170(void)

undefined8 * FUN_145587170(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149dae4f8;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c746824;
  param_1[3] = param_1;
  param_1[5] = &LAB_145587090;
  param_1[6] = FUN_1455870b0;
  param_1[7] = FUN_1455870e0;
  param_1[8] = FUN_145587110;
  param_1[4] = 0x38;
  *param_1 = &PTR_FUN_149dae520;
  param_1[9] = FUN_145587220;
  param_1[10] = FUN_1455873b0;
  return param_1;
}



// FUNCTION 1455871f0 FUN_1455871f0 body=43 status=ok
// SIG undefined FUN_1455871f0(void)

undefined8 * FUN_1455871f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 145587220 FUN_145587220 body=382 status=ok
// SIG undefined FUN_145587220(void)

void FUN_145587220(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1a8 [32];
  undefined ***local_188;
  undefined4 local_178 [2];
  longlong local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined8 local_158;
  undefined4 *local_150;
  undefined1 *local_148;
  undefined **local_138;
  undefined1 local_130 [24];
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  undefined1 local_e8 [144];
  longlong local_58;
  ulonglong local_48;
  
  local_158 = 0xfffffffffffffffe;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_178[0] = 0;
  if (((param_1 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    local_138 = &PTR_FUN_14ba6c7d8;
    memset(local_130,0,0xd8);
    local_58 = 0;
    FUN_145178f70(param_5,local_130,0);
    local_150 = local_178;
    local_148 = local_168;
    puVar1 = (undefined8 *)FUN_145586f80(&local_170,param_1);
    puVar1 = (undefined8 *)*puVar1;
    uVar2 = FUN_14516a920(local_178,param_4);
    uVar3 = FUN_14516a830(local_168,param_3);
    uVar4 = FUN_144d7a4e0(local_160,param_2);
    local_188 = &local_138;
    (**(code **)*puVar1)(puVar1,uVar4,uVar3,uVar2);
    if (local_170 != 0) {
      (**(code **)(*(longlong *)
                    (local_170 + 8 + (longlong)*(int *)(*(longlong *)(local_170 + 8) + 4)) + 8))();
    }
    local_138 = &PTR_FUN_14ba6c7d8;
    if (local_58 == 0) {
      cef_string_utf16_clear(local_130);
      cef_string_utf16_clear(local_118);
      cef_string_utf16_clear(local_100);
      cef_string_utf16_clear(local_e8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 1455873b0 FUN_1455873b0 body=405 status=ok
// SIG undefined FUN_1455873b0(void)

void FUN_1455873b0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined ***local_190;
  undefined4 local_188 [2];
  longlong local_180;
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined8 local_160;
  undefined4 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined **local_138;
  undefined1 local_130 [24];
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  undefined1 local_e8 [144];
  longlong local_58;
  ulonglong local_48;
  
  local_160 = 0xfffffffffffffffe;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_188[0] = 0;
  if ((((param_1 != 0) && (param_4 != 0)) && (param_5 != 0)) && (param_6 != 0)) {
    local_138 = &PTR_FUN_14ba6c7d8;
    memset(local_130,0,0xd8);
    local_58 = 0;
    FUN_145178f70(param_6,local_130,0);
    local_158 = local_188;
    local_150 = local_178;
    local_148 = local_170;
    puVar2 = (undefined8 *)FUN_145586f80(&local_180,param_1);
    plVar1 = (longlong *)*puVar2;
    uVar3 = FUN_1453e1080(local_188,param_5);
    uVar4 = FUN_14516a920(local_178,param_4);
    uVar5 = FUN_14516a830(local_170,param_3);
    uVar6 = FUN_144d7a4e0(local_168,param_2);
    local_190 = &local_138;
    local_198 = uVar3;
    (**(code **)(*plVar1 + 8))(plVar1,uVar6,uVar5,uVar4);
    if (local_180 != 0) {
      (**(code **)(*(longlong *)
                    (local_180 + 8 + (longlong)*(int *)(*(longlong *)(local_180 + 8) + 4)) + 8))();
    }
    local_138 = &PTR_FUN_14ba6c7d8;
    if (local_58 == 0) {
      cef_string_utf16_clear(local_130);
      cef_string_utf16_clear(local_118);
      cef_string_utf16_clear(local_100);
      cef_string_utf16_clear(local_e8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1b8);
}



// FUNCTION 145587560 FUN_145587560 body=58 status=ok
// SIG undefined FUN_145587560(void)

longlong * FUN_145587560(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 1455875a0 FUN_1455875a0 body=49 status=ok
// SIG undefined FUN_1455875a0(void)

int FUN_1455875a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x58);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 1455875e0 FUN_1455875e0 body=77 status=ok
// SIG undefined FUN_1455875e0(void)

undefined8 FUN_1455875e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 0xb;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 145587690 FUN_145587690 body=42 status=ok
// SIG undefined FUN_145587690(void)

undefined1 FUN_145587690(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 1455876c0 FUN_1455876c0 body=42 status=ok
// SIG undefined FUN_1455876c0(void)

undefined1 FUN_1455876c0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1455876f0 FUN_1455876f0 body=42 status=ok
// SIG undefined FUN_1455876f0(void)

undefined1 FUN_1455876f0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 145587720 FUN_145587720 body=43 status=ok
// SIG undefined FUN_145587720(void)

undefined8 * FUN_145587720(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 145587750 FUN_145587750 body=118 status=ok
// SIG undefined FUN_145587750(void)

undefined8 * FUN_145587750(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149dae598;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c746828;
  param_1[3] = param_1;
  param_1[5] = &LAB_145587670;
  param_1[6] = FUN_145587690;
  param_1[7] = FUN_1455876c0;
  param_1[8] = FUN_1455876f0;
  param_1[4] = 0x38;
  *param_1 = &PTR_FUN_149dae5c0;
  param_1[9] = FUN_145587830;
  param_1[10] = FUN_1455878a0;
  return param_1;
}



// FUNCTION 1455877d0 FUN_1455877d0 body=84 status=ok
// SIG undefined FUN_1455877d0(void)

undefined8 *
FUN_1455877d0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149dae5c0;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 145587830 FUN_145587830 body=106 status=ok
// SIG undefined FUN_145587830(void)

undefined1 FUN_145587830(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  local_res8 = 0;
  FUN_14516fec0();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_145587560(&local_res8,param_1);
    uVar2 = (*(code *)**(undefined8 **)*puVar3)();
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
  }
  return uVar2;
}



// FUNCTION 1455878a0 FUN_1455878a0 body=268 status=ok
// SIG undefined FUN_1455878a0(void)

undefined4
FUN_1455878a0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
             longlong param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong local_res8;
  undefined8 local_38;
  longlong local_30 [3];
  
  local_30[1] = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14516fec0();
  if ((((param_1 == 0) || (param_4 == (ulonglong *)0x0)) || (param_5 == 0)) ||
     (param_7 == (undefined8 *)0x0)) {
    uVar1 = 2;
  }
  else {
    local_res8 = *param_4;
    local_38 = *param_7;
    puVar2 = (undefined8 *)FUN_145587560(local_30,param_1);
    uVar1 = (**(code **)(*(longlong *)*puVar2 + 8))
                      ((longlong *)*puVar2,param_2,param_3,&local_res8,param_5,param_6,&local_38);
    if (local_30[0] != 0) {
      (**(code **)(*(longlong *)
                    (local_30[0] + 8 + (longlong)*(int *)(*(longlong *)(local_30[0] + 8) + 4)) + 8))
                ();
    }
    *param_4 = local_res8;
    *param_7 = local_38;
  }
  return uVar1;
}



// FUNCTION 1455879b0 FUN_1455879b0 body=48 status=ok
// SIG undefined FUN_1455879b0(void)

longlong FUN_1455879b0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x10,0x18);
    return param_1 + -0x10;
  }
  return param_1 + -0x10;
}



// FUNCTION 1455879e0 FUN_1455879e0 body=40 status=ok
// SIG undefined FUN_1455879e0(void)

int FUN_1455879e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(longlong *)(param_1 + -0x28) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145587a10 FUN_145587a10 body=105 status=ok
// SIG undefined FUN_145587a10(void)

undefined8 FUN_145587a10(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(code **)(param_1[-5] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[-5] + 0x10))();
  }
  LOCK();
  piVar1 = (int *)(param_1 + -2);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (param_1 + -6 != (undefined8 *)0x0) {
      FUN_145587bf0(param_1);
      *param_1 = &PTR__purecall_14ba6c6b0;
      thunk_FUN_1400020a8(param_1 + -6,0x38);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 145587a80 FUN_145587a80 body=34 status=ok
// SIG undefined FUN_145587a80(void)

bool FUN_145587a80(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_1 + -0x28) + 0x18);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)();
  return iVar2 != 0;
}



// FUNCTION 145587ab0 FUN_145587ab0 body=38 status=ok
// SIG undefined FUN_145587ab0(void)

bool FUN_145587ab0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + -0x28);
  if (*(longlong *)(lVar1 + 0x18) == 0) {
    return false;
  }
  iVar2 = (**(code **)(lVar1 + 0x20))(lVar1);
  return iVar2 != 0;
}



// FUNCTION 145587ae0 FUN_145587ae0 body=85 status=ok
// SIG undefined FUN_145587ae0(void)

longlong FUN_145587ae0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dae6b0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dae6d8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -0x20,0x28);
  }
  return param_1 + -0x20;
}



// FUNCTION 145587b40 FUN_145587b40 body=167 status=ok
// SIG undefined FUN_145587b40(void)

undefined8 * FUN_145587b40(undefined8 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &DAT_149dae750;
    param_1[4] = &PTR__purecall_14ba6c6b0;
  }
  *param_1 = &PTR__purecall_149dae660;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) =
       &PTR__purecall_149dae688;
  *param_1 = &PTR__purecall_149dae6b0;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dae6d8;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_149dae700;
  *(undefined ***)((longlong)*(int *)(param_1[1] + 4) + 8 + (longlong)param_1) = &PTR_LAB_149dae728;
  *(int *)((longlong)*(int *)(param_1[1] + 4) + 4 + (longlong)param_1) =
       *(int *)(param_1[1] + 4) + -0x18;
  return param_1;
}



// FUNCTION 145587bf0 FUN_145587bf0 body=124 status=ok
// SIG undefined FUN_145587bf0(void)

void FUN_145587bf0(longlong param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + -0x20) = &PTR_FUN_149dae700;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dae728;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  FUN_14516fec0();
  *(undefined ***)(param_1 + -0x20) = &PTR__purecall_149dae6b0;
  *(undefined ***)((longlong)*(int *)(*(longlong *)(param_1 + -0x18) + 4) + -0x18 + param_1) =
       &PTR_LAB_149dae6d8;
  iVar1 = *(int *)(*(longlong *)(param_1 + -0x18) + 4);
  *(int *)((longlong)iVar1 + -0x1c + param_1) = iVar1 + -0x18;
  return;
}



// FUNCTION 145587c70 FUN_145587c70 body=222 status=ok
// SIG undefined FUN_145587c70(void)

undefined8 * FUN_145587c70(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined **local_28;
  undefined8 *local_20;
  char local_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar4 = 0;
  uVar5 = 0;
  FUN_14516fec0();
  if ((**(ulonglong **)(param_1 + -8) < 0x30) ||
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[5], pcVar1 == (code *)0x0)) {
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else {
    uVar3 = (*pcVar1)();
    local_28 = &PTR_FUN_14ba6d600;
    local_20 = (undefined8 *)0x0;
    local_18 = '\0';
    FUN_144d73b20(&local_28,uVar3);
    puVar2 = local_20;
    *param_2 = &PTR_FUN_14ba6d600;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar3 = uVar4;
    if (local_20 != (undefined8 *)0x0) {
      uVar4 = *local_20;
      uVar3 = local_20[1];
    }
    FUN_149048250(param_2,uVar4,uVar3,1,uVar5,uVar6);
    if ((puVar2 != (undefined8 *)0x0) && (local_18 != '\0')) {
      cef_string_utf16_clear(puVar2);
      thunk_FUN_1400020a8(puVar2,0x18);
    }
  }
  return param_2;
}



// FUNCTION 145587d50 FUN_145587d50 body=96 status=ok
// SIG undefined FUN_145587d50(void)

undefined8 *
FUN_145587d50(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x37 < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[6], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_145178c10(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145587db0 FUN_145587db0 body=96 status=ok
// SIG undefined FUN_145587db0(void)

undefined8 *
FUN_145587db0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_14516fec0();
  if ((0x3f < **(ulonglong **)(param_1 + -8)) &&
     (pcVar1 = (code *)(*(ulonglong **)(param_1 + -8))[7], pcVar1 != (code *)0x0)) {
    uVar2 = (*pcVar1)();
    FUN_1453f2f90(param_2,uVar2,param_3,param_4,uVar3);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145587e10 FUN_145587e10 body=85 status=ok
// SIG undefined FUN_145587e10(void)

void FUN_145587e10(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  
  FUN_14516fec0();
  puVar1 = *(ulonglong **)(param_1 + -8);
  if (((0x47 < *puVar1) && ((code *)puVar1[8] != (code *)0x0)) && (param_2 != 0)) {
    (*(code *)puVar1[8])(puVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 145587e70 FUN_145587e70 body=47 status=ok
// SIG undefined FUN_145587e70(void)

void FUN_145587e70(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_14516fec0();
  if ((0x4f < **(ulonglong **)(param_1 + -8)) &&
     (UNRECOVERED_JUMPTABLE = (code *)(*(ulonglong **)(param_1 + -8))[9],
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145587e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



// FUNCTION 145587ea0 FUN_145587ea0 body=64 status=ok
// SIG undefined FUN_145587ea0(void)

undefined8 * FUN_145587ea0(undefined8 *param_1,ulonglong param_2)

{
  FUN_145587bf0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1 + -4,0x28);
  }
  return param_1 + -4;
}



// FUNCTION 145587f30 FUN_145587f30 body=58 status=ok
// SIG undefined FUN_145587f30(void)

longlong * FUN_145587f30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + -0x10);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)))();
  }
  return param_1;
}



// FUNCTION 145587f70 FUN_145587f70 body=49 status=ok
// SIG undefined FUN_145587f70(void)

int FUN_145587f70(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  (*(code *)**(undefined8 **)
              (*(longlong *)(param_1 + 0x10) + 8 +
              (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 4)))();
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2;
}



// FUNCTION 145587fb0 FUN_145587fb0 body=77 status=ok
// SIG undefined FUN_145587fb0(void)

undefined8 FUN_145587fb0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*(longlong *)(param_1[2] + 8 + (longlong)*(int *)(*(longlong *)(param_1[2] + 8) + 4))
              + 8))();
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
    return 1;
  }
  return 0;
}



// FUNCTION 145588060 FUN_145588060 body=42 status=ok
// SIG undefined FUN_145588060(void)

undefined1 FUN_145588060(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 8))();
  return uVar1;
}



// FUNCTION 145588090 FUN_145588090 body=42 status=ok
// SIG undefined FUN_145588090(void)

undefined1 FUN_145588090(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x10))();
  return uVar1;
}



// FUNCTION 1455880c0 FUN_1455880c0 body=42 status=ok
// SIG undefined FUN_1455880c0(void)

undefined1 FUN_1455880c0(longlong param_1)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + -8) + 0x18))();
  return uVar1;
}



// FUNCTION 1455880f0 FUN_1455880f0 body=43 status=ok
// SIG undefined FUN_1455880f0(void)

undefined8 * FUN_1455880f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 145588120 FUN_145588120 body=107 status=ok
// SIG undefined FUN_145588120(void)

undefined8 * FUN_145588120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149dae7a8;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 1) = DAT_14c746830;
  param_1[3] = param_1;
  param_1[5] = &LAB_145588040;
  param_1[6] = FUN_145588060;
  param_1[7] = FUN_145588090;
  param_1[8] = FUN_1455880c0;
  param_1[4] = 0x30;
  *param_1 = &PTR_FUN_149dae7d0;
  param_1[9] = FUN_1455881f0;
  return param_1;
}



// FUNCTION 145588190 FUN_145588190 body=84 status=ok
// SIG undefined FUN_145588190(void)

undefined8 *
FUN_145588190(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &PTR_FUN_149dae7d0;
  FUN_14516fec0();
  *param_1 = &PTR__purecall_14ba6c6b0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x58,param_3,param_4,uVar1);
  }
  return param_1;
}



// FUNCTION 1455881f0 FUN_1455881f0 body=285 status=ok
// SIG undefined FUN_1455881f0(void)

void FUN_1455881f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined8 uVar3;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  uVar3 = 0xfffffffffffffffe;
  local_res8 = 0;
  FUN_14516fec0();
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    local_58 = &PTR_FUN_149dae7f8;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    cef_string_utf16_set(*param_2,param_2[1],&local_50,0,uVar3);
    local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_2 + 3));
    cef_string_utf16_set(param_2[4],param_2[5],&local_30,0);
    puVar2 = (undefined8 *)FUN_145587f30(&local_res8,param_1);
    (*(code *)**(undefined8 **)*puVar2)((undefined8 *)*puVar2,&local_58);
    lVar1 = CONCAT44(uStackX_c,local_res8);
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8 + (longlong)*(int *)(*(longlong *)(lVar1 + 8) + 4)) + 8))
                ();
    }
    local_58 = &PTR_FUN_149dae7f8;
    if (local_18 == 0) {
      cef_string_utf16_clear(&local_50);
      cef_string_utf16_clear(&local_30);
    }
  }
  return;
}



// FUNCTION 145588310 FUN_145588310 body=61 status=ok
// SIG undefined FUN_145588310(void)

void FUN_145588310(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149dae7f8;
  if (param_1[8] == 0) {
    cef_string_utf16_clear(param_1 + 1);
    cef_string_utf16_clear(param_1 + 5);
    return;
  }
  return;
}



// FUNCTION 145588350 FUN_145588350 body=94 status=ok
// SIG undefined FUN_145588350(void)

undefined8 * FUN_145588350(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149dae7f8;
  if (param_1[8] == 0) {
    cef_string_utf16_clear(param_1 + 1);
    cef_string_utf16_clear(param_1 + 5);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1455883b0 FUN_1455883b0 body=87 status=ok
// SIG undefined FUN_1455883b0(void)

void FUN_1455883b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 145588410 thunk_FUN_145588fb0 body=5 status=ok
// SIG undefined thunk_FUN_145588fb0(void)

void thunk_FUN_145588fb0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  void *_Src;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  size_t _Size;
  undefined1 auStack_b8 [32];
  void *pvStack_98;
  longlong lStack_90;
  longlong lStack_88;
  void **appvStack_80 [2];
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_60;
  ulonglong uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  ulonglong uStack_38;
  
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145589580(param_1,&pvStack_98,param_2);
  if (*(char *)(lStack_88 + 0x19) == '\0') {
    cVar2 = FUN_144b66550(param_1,param_2,lStack_88 + 0x20);
    if ((cVar2 == '\0') && (lStack_88 != *param_1)) {
      FUN_1455891a0(param_1,appvStack_80,lStack_88);
    }
  }
  pvStack_98 = (void *)0x0;
  lStack_90 = 0;
  lStack_88 = 0;
  lVar4 = param_3[1];
  lVar1 = *param_3;
  FUN_1454113e0(&pvStack_98,lVar4 - lVar1);
  _Src = pvStack_98;
  memcpy(pvStack_98,(void *)*param_3,lVar4 - lVar1);
  FUN_144b65a50(&uStack_70,param_2);
  appvStack_80[0] = &pvStack_50;
  pvStack_50 = (void *)0x0;
  uStack_48 = 0;
  lStack_40 = 0;
  _Size = lStack_90 - (longlong)_Src;
  FUN_1454113e0(&pvStack_50,_Size);
  memcpy(pvStack_50,_Src,_Size);
  FUN_145589300(param_1,appvStack_80,&uStack_70);
  if (pvStack_50 != (void *)0x0) {
    uVar5 = lStack_40 - (longlong)pvStack_50;
    pvVar3 = pvStack_50;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      pvVar3 = *(void **)((longlong)pvStack_50 + -8);
      if (0x1f < (ulonglong)((longlong)pvStack_50 + (-8 - (longlong)pvVar3))) goto LAB_14558911a;
    }
    thunk_FUN_1400020a8(pvVar3,uVar5);
    pvStack_50 = (void *)0x0;
    uStack_48 = 0;
    lStack_40 = 0;
  }
  if (0xf < uStack_58) {
    uVar5 = uStack_58 + 1;
    lVar1 = CONCAT71(uStack_6f,uStack_70);
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      uVar5 = uStack_58 + 0x28;
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar4) - 8U) {
LAB_14558911a:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar5);
  }
  uStack_60 = 0;
  uStack_58 = 0xf;
  uStack_70 = 0;
  if (_Src != (void *)0x0) {
    uVar5 = lStack_88 - (longlong)_Src;
    pvVar3 = _Src;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      pvVar3 = *(void **)((longlong)_Src + -8);
      if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar3,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_38 ^ (ulonglong)auStack_b8);
}



// FUNCTION 145588420 FUN_145588420 body=152 status=ok
// SIG undefined FUN_145588420(void)

undefined1 FUN_145588420(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_28 [16];
  longlong local_18;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_145589480(plVar1,local_28,param_2);
  if (((*(char *)(local_18 + 0x19) == '\0') &&
      (cVar3 = FUN_144b66550(plVar1,param_2,local_18 + 0x20), cVar3 == '\0')) &&
     (local_18 != *plVar1)) {
    FUN_1453f50c0(param_3);
    return 0;
  }
  uVar2 = FUN_145588e10(plVar1,param_2);
  FUN_145588f00(uVar2,param_3);
  FUN_1453f50c0(param_3);
  return 1;
}



// FUNCTION 1455884c0 FUN_1455884c0 body=85 status=ok
// SIG undefined FUN_1455884c0(void)

void FUN_1455884c0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  *(longlong *)(param_2 + 0x10) = *plVar1;
  if (*(char *)(*plVar1 + 0x19) == '\0') {
    *(longlong *)(*plVar1 + 8) = param_2;
  }
  plVar1[1] = *(longlong *)(param_2 + 8);
  if (param_2 == *(longlong *)(*param_1 + 8)) {
    *(longlong **)(*param_1 + 8) = plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (param_2 == *plVar2) {
    *plVar2 = (longlong)plVar1;
    *plVar1 = param_2;
    *(longlong **)(param_2 + 8) = plVar1;
    return;
  }
  plVar2[2] = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



// FUNCTION 145588520 FUN_145588520 body=89 status=ok
// SIG undefined FUN_145588520(void)

void FUN_145588520(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  *param_2 = *(longlong *)(lVar1 + 0x10);
  if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x19) == '\0') {
    *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8) = param_2;
  }
  *(longlong *)(lVar1 + 8) = param_2[1];
  if (param_2 == *(longlong **)(*param_1 + 8)) {
    *(longlong *)(*param_1 + 8) = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  plVar2 = (longlong *)param_2[1];
  if (param_2 == (longlong *)plVar2[2]) {
    plVar2[2] = lVar1;
    *(longlong **)(lVar1 + 0x10) = param_2;
    param_2[1] = lVar1;
    return;
  }
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



// FUNCTION 145588580 FUN_145588580 body=974 status=ok
// SIG undefined FUN_145588580(void)

longlong * FUN_145588580(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar4 = (longlong *)param_2[2];
  plVar5 = param_2 + 2;
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar6 = (longlong *)*plVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar6 + 0x19);
      plVar4 = plVar6;
      plVar6 = (longlong *)*plVar6;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar7 = (longlong *)param_2[1];
    plVar6 = param_2;
    while ((plVar4 = plVar7, cVar1 == '\0' && (plVar6 == (longlong *)plVar4[2]))) {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar7 = (longlong *)plVar4[1];
      plVar6 = plVar4;
    }
  }
  plVar8 = param_2 + 1;
  plVar6 = (longlong *)*param_2;
  plVar7 = (longlong *)*plVar5;
  if (((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
      (plVar7 = plVar6, *(char *)(*plVar5 + 0x19) == '\0')) &&
     (plVar7 = (longlong *)plVar4[2], plVar4 != param_2)) {
    plVar6[1] = (longlong)plVar4;
    *plVar4 = *param_2;
    plVar6 = plVar4;
    if (plVar4 != (longlong *)*plVar5) {
      plVar6 = (longlong *)plVar4[1];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        plVar7[1] = (longlong)plVar6;
      }
      *plVar6 = (longlong)plVar7;
      plVar4[2] = *plVar5;
      *(longlong **)(*plVar5 + 8) = plVar4;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar4;
    }
    else {
      puVar3 = (undefined8 *)*plVar8;
      if ((longlong *)*puVar3 == param_2) {
        *puVar3 = plVar4;
      }
      else {
        puVar3[2] = plVar4;
      }
    }
    lVar2 = plVar4[3];
    plVar4[1] = *plVar8;
    *(char *)(plVar4 + 3) = (char)param_2[3];
    *(char *)(param_2 + 3) = (char)lVar2;
  }
  else {
    plVar6 = (longlong *)*plVar8;
    if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
      plVar7[1] = (longlong)plVar6;
    }
    if (*(longlong **)(*param_1 + 8) == param_2) {
      *(longlong **)(*param_1 + 8) = plVar7;
    }
    else if ((longlong *)*plVar6 == param_2) {
      *plVar6 = (longlong)plVar7;
    }
    else {
      plVar6[2] = (longlong)plVar7;
    }
    if (*(longlong **)*param_1 == param_2) {
      plVar5 = plVar6;
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar7 + 0x19);
        plVar4 = (longlong *)*plVar7;
        plVar5 = plVar7;
        while (plVar8 = plVar4, cVar1 == '\0') {
          plVar4 = (longlong *)*plVar8;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
          plVar5 = plVar8;
        }
      }
      *(longlong **)*param_1 = plVar5;
    }
    lVar2 = *param_1;
    if (*(longlong **)(lVar2 + 0x10) == param_2) {
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar1 = *(char *)(plVar7[2] + 0x19);
        plVar5 = (longlong *)plVar7[2];
        plVar4 = plVar7;
        while (plVar8 = plVar5, cVar1 == '\0') {
          plVar5 = (longlong *)plVar8[2];
          cVar1 = *(char *)((longlong)plVar5 + 0x19);
          plVar4 = plVar8;
        }
        *(longlong **)(lVar2 + 0x10) = plVar4;
      }
      else {
        *(longlong **)(lVar2 + 0x10) = plVar6;
      }
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (plVar7 != *(longlong **)(*param_1 + 8)) {
      do {
        plVar5 = plVar6;
        if ((char)plVar7[3] != '\x01') break;
        plVar4 = (longlong *)*plVar5;
        if (plVar7 == plVar4) {
          plVar4 = (longlong *)plVar5[2];
          if ((char)plVar4[3] == '\0') {
            *(undefined1 *)(plVar4 + 3) = 1;
            plVar4 = (longlong *)plVar5[2];
            *(undefined1 *)(plVar5 + 3) = 0;
            plVar5[2] = *plVar4;
            if (*(char *)(*plVar4 + 0x19) == '\0') {
              *(longlong **)(*plVar4 + 8) = plVar5;
            }
            plVar6 = plVar5 + 1;
            plVar4[1] = plVar5[1];
            if (plVar5 == *(longlong **)(*param_1 + 8)) {
              *(longlong **)(*param_1 + 8) = plVar4;
              *plVar4 = (longlong)plVar5;
              *plVar6 = (longlong)plVar4;
              plVar4 = (longlong *)plVar5[2];
            }
            else {
              puVar3 = (undefined8 *)*plVar6;
              if (plVar5 == (longlong *)*puVar3) {
                *puVar3 = plVar4;
                *plVar4 = (longlong)plVar5;
                *plVar6 = (longlong)plVar4;
                plVar4 = (longlong *)plVar5[2];
              }
              else {
                puVar3[2] = plVar4;
                *plVar4 = (longlong)plVar5;
                *plVar6 = (longlong)plVar4;
                plVar4 = (longlong *)plVar5[2];
              }
            }
          }
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            if ((*(char *)(*plVar4 + 0x18) != '\x01') || (*(char *)(plVar4[2] + 0x18) != '\x01')) {
              if (*(char *)(plVar4[2] + 0x18) == '\x01') {
                *(undefined1 *)(*plVar4 + 0x18) = 1;
                *(undefined1 *)(plVar4 + 3) = 0;
                FUN_145588520(param_1,plVar4);
                plVar4 = (longlong *)plVar5[2];
              }
              *(char *)(plVar4 + 3) = (char)plVar5[3];
              *(undefined1 *)(plVar5 + 3) = 1;
              *(undefined1 *)(plVar4[2] + 0x18) = 1;
              FUN_1455884c0(param_1,plVar5);
              break;
            }
LAB_1455888cb:
            *(undefined1 *)(plVar4 + 3) = 0;
          }
        }
        else {
          if ((char)plVar4[3] == '\0') {
            *(undefined1 *)(plVar4 + 3) = 1;
            lVar2 = *plVar5;
            *(undefined1 *)(plVar5 + 3) = 0;
            *plVar5 = *(longlong *)(lVar2 + 0x10);
            if (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x19) == '\0') {
              *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8) = plVar5;
            }
            plVar4 = plVar5 + 1;
            *(longlong *)(lVar2 + 8) = plVar5[1];
            if (plVar5 == *(longlong **)(*param_1 + 8)) {
              *(longlong *)(*param_1 + 8) = lVar2;
              *(longlong **)(lVar2 + 0x10) = plVar5;
              *plVar4 = lVar2;
              plVar4 = (longlong *)*plVar5;
            }
            else {
              plVar6 = (longlong *)*plVar4;
              if (plVar5 == (longlong *)plVar6[2]) {
                plVar6[2] = lVar2;
                *(longlong **)(lVar2 + 0x10) = plVar5;
                *plVar4 = lVar2;
                plVar4 = (longlong *)*plVar5;
              }
              else {
                *plVar6 = lVar2;
                *(longlong **)(lVar2 + 0x10) = plVar5;
                *plVar4 = lVar2;
                plVar4 = (longlong *)*plVar5;
              }
            }
          }
          if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
            if ((*(char *)(plVar4[2] + 0x18) == '\x01') && (*(char *)(*plVar4 + 0x18) == '\x01'))
            goto LAB_1455888cb;
            if (*(char *)(*plVar4 + 0x18) == '\x01') {
              *(undefined1 *)(plVar4[2] + 0x18) = 1;
              *(undefined1 *)(plVar4 + 3) = 0;
              FUN_1455884c0(param_1,plVar4);
              plVar4 = (longlong *)*plVar5;
            }
            *(char *)(plVar4 + 3) = (char)plVar5[3];
            *(undefined1 *)(plVar5 + 3) = 1;
            *(undefined1 *)(*plVar4 + 0x18) = 1;
            FUN_145588520(param_1,plVar5);
            break;
          }
        }
        plVar6 = (longlong *)plVar5[1];
        plVar7 = plVar5;
      } while (plVar5 != *(longlong **)(*param_1 + 8));
    }
    *(undefined1 *)(plVar7 + 3) = 1;
  }
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
  }
  return param_2;
}



// FUNCTION 145588950 FUN_145588950 body=603 status=ok
// SIG undefined FUN_145588950(void)

longlong * FUN_145588950(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar6 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar6;
  if (plVar6 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar6[2] = (longlong)param_3;
    if (plVar6 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar6 = (longlong)param_3;
    if (plVar6 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar6 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar7 = (longlong *)plVar6[1];
    lVar3 = *(longlong *)plVar7[1];
    if (plVar7 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar7[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar7 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar6[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar7[2];
        if (plVar6 == plVar8) {
          plVar7[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar7;
          }
          plVar8[1] = plVar7[1];
          if (plVar7 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar6 = (longlong *)plVar7[1];
            if (plVar7 == (longlong *)*plVar6) {
              *plVar6 = (longlong)plVar8;
            }
            else {
              plVar6[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar7;
          plVar7[1] = (longlong)plVar8;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)*plVar7;
        *plVar7 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar7;
        }
        else {
          plVar4 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
        }
LAB_145588b8d:
        plVar7[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar7;
        if (plVar6 == plVar8) {
          *plVar7 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar7;
          }
          plVar8[1] = plVar7[1];
          if (plVar7 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar7[1];
            if (plVar7 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar7;
          plVar7[1] = (longlong)plVar8;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)plVar7[2];
        plVar7[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar7[1];
          if (plVar7 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar7;
        goto LAB_145588b8d;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(plVar6[1] + 8);
    }
    cVar1 = *(char *)(plVar6[1] + 0x18);
  } while( true );
}



// FUNCTION 145588bb0 FUN_145588bb0 body=603 status=ok
// SIG undefined FUN_145588bb0(void)

longlong * FUN_145588bb0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar6 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar6;
  if (plVar6 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar6[2] = (longlong)param_3;
    if (plVar6 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar6 = (longlong)param_3;
    if (plVar6 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar6 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar7 = (longlong *)plVar6[1];
    lVar3 = *(longlong *)plVar7[1];
    if (plVar7 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar7[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar7 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar6[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar7[2];
        if (plVar6 == plVar8) {
          plVar7[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar7;
          }
          plVar8[1] = plVar7[1];
          if (plVar7 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar6 = (longlong *)plVar7[1];
            if (plVar7 == (longlong *)*plVar6) {
              *plVar6 = (longlong)plVar8;
            }
            else {
              plVar6[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar7;
          plVar7[1] = (longlong)plVar8;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)*plVar7;
        *plVar7 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar7;
        }
        else {
          plVar4 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
        }
LAB_145588ded:
        plVar7[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar7;
        if (plVar6 == plVar8) {
          *plVar7 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar7;
          }
          plVar8[1] = plVar7[1];
          if (plVar7 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar7[1];
            if (plVar7 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar7;
          plVar7[1] = (longlong)plVar8;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)plVar7[2];
        plVar7[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar7[1];
          if (plVar7 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar7;
        goto LAB_145588ded;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(plVar6[1] + 8);
    }
    cVar1 = *(char *)(plVar6[1] + 0x18);
  } while( true );
}



// FUNCTION 145588e10 FUN_145588e10 body=232 status=ok
// SIG undefined FUN_145588e10(void)

longlong FUN_145588e10(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *local_38;
  undefined8 *puStack_30;
  undefined1 local_28 [16];
  longlong local_18;
  
  FUN_145589480(param_1,local_28,param_2);
  if (*(char *)(local_18 + 0x19) == '\0') {
    cVar2 = FUN_144b66550(param_1,param_2,local_18 + 0x20);
    if (cVar2 == '\0') goto LAB_145588ed4;
  }
  if (param_1[1] == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1470a938d();
  }
  uVar1 = *param_1;
  puStack_30 = (undefined8 *)0x0;
  local_38 = param_1;
  puVar3 = (undefined8 *)FUN_14494321d(0x48);
  puStack_30 = puVar3;
  FUN_144b65a50(puVar3 + 4,param_2);
  puVar3[8] = 0;
  *puVar3 = uVar1;
  puVar3[1] = uVar1;
  puVar3[2] = uVar1;
  *(undefined2 *)(puVar3 + 3) = 0;
  local_18 = FUN_145588bb0(param_1,&local_38,puVar3);
LAB_145588ed4:
  return local_18 + 0x40;
}



// FUNCTION 145588f00 FUN_145588f00 body=170 status=ok
// SIG undefined FUN_145588f00(void)

longlong * FUN_145588f00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = *param_2;
  *param_2 = 0;
  plVar2 = (longlong *)*param_1;
  *param_1 = lVar1;
  if (plVar2 != (longlong *)0x0) {
    FUN_144d7ffa0(plVar2 + 2,plVar2 + 2,*(undefined8 *)(plVar2[2] + 8));
    thunk_FUN_1400020a8(plVar2[2],0x48);
    FUN_144d80090(plVar2,plVar2,*(undefined8 *)(*plVar2 + 8));
    thunk_FUN_1400020a8(*plVar2,0x58);
    thunk_FUN_1400020a8(plVar2,0x20);
    return param_1;
  }
  return param_1;
}



// FUNCTION 145588fb0 FUN_145588fb0 body=461 status=ok
// SIG undefined FUN_145588fb0(void)

void FUN_145588fb0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  void *_Src;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  size_t _Size;
  undefined1 auStack_b8 [32];
  void *local_98;
  longlong lStack_90;
  longlong local_88;
  void **local_80 [2];
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong uStack_58;
  void *local_50;
  undefined8 uStack_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145589580(param_1,&local_98,param_2);
  if (*(char *)(local_88 + 0x19) == '\0') {
    cVar2 = FUN_144b66550(param_1,param_2,local_88 + 0x20);
    if ((cVar2 == '\0') && (local_88 != *param_1)) {
      FUN_1455891a0(param_1,local_80,local_88);
    }
  }
  local_98 = (void *)0x0;
  lStack_90 = 0;
  local_88 = 0;
  lVar4 = param_3[1];
  lVar1 = *param_3;
  FUN_1454113e0(&local_98,lVar4 - lVar1);
  _Src = local_98;
  memcpy(local_98,(void *)*param_3,lVar4 - lVar1);
  FUN_144b65a50(&local_70,param_2);
  local_80[0] = &local_50;
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  _Size = lStack_90 - (longlong)_Src;
  FUN_1454113e0(&local_50,_Size);
  memcpy(local_50,_Src,_Size);
  FUN_145589300(param_1,local_80,&local_70);
  if (local_50 != (void *)0x0) {
    uVar5 = local_40 - (longlong)local_50;
    pvVar3 = local_50;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      pvVar3 = *(void **)((longlong)local_50 + -8);
      if (0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)pvVar3))) goto LAB_14558911a;
    }
    thunk_FUN_1400020a8(pvVar3,uVar5);
    local_50 = (void *)0x0;
    uStack_48 = 0;
    local_40 = 0;
  }
  if (0xf < uStack_58) {
    uVar5 = uStack_58 + 1;
    lVar1 = CONCAT71(uStack_6f,local_70);
    lVar4 = lVar1;
    if (0xfff < uVar5) {
      uVar5 = uStack_58 + 0x28;
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar4) - 8U) {
LAB_14558911a:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar5);
  }
  local_60 = 0;
  uStack_58 = 0xf;
  local_70 = 0;
  if (_Src != (void *)0x0) {
    uVar5 = local_88 - (longlong)_Src;
    pvVar3 = _Src;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      pvVar3 = *(void **)((longlong)_Src + -8);
      if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar3,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1455891a0 FUN_1455891a0 body=161 status=ok
// SIG undefined FUN_1455891a0(void)

longlong * FUN_1455891a0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)param_3[2];
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar5 + 0x19);
    plVar2 = (longlong *)*plVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar5 = plVar2;
      plVar2 = (longlong *)*plVar2;
    }
  }
  else {
    cVar1 = *(char *)(param_3[1] + 0x19);
    plVar3 = (longlong *)param_3[1];
    plVar2 = param_3;
    while ((plVar5 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar3 = (longlong *)plVar5[1];
      plVar2 = plVar5;
    }
  }
  lVar4 = FUN_145588580(param_1,param_3);
  FUN_145589640(param_1,lVar4 + 0x20);
  thunk_FUN_1400020a8(lVar4,0x58);
  *param_2 = (longlong)plVar5;
  return param_2;
}



// FUNCTION 145589250 FUN_145589250 body=167 status=ok
// SIG undefined FUN_145589250(void)

void FUN_145589250(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    uVar3 = param_1[6] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1455892f1;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  uVar3 = param_1[3];
  if (0xf < uVar3) {
    lVar1 = *param_1;
    uVar4 = uVar3 + 1;
    lVar2 = lVar1;
    if (0xfff < uVar4) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar4 = uVar3 + 0x28;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_1455892f1:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar4);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// FUNCTION 145589300 FUN_145589300 body=351 status=ok
// SIG undefined FUN_145589300(void)

longlong *
FUN_145589300(undefined8 *param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [32];
  
  puVar7 = (undefined8 *)FUN_145589580(param_1,local_48);
  local_58 = *puVar7;
  uStack_50 = puVar7[1];
  lVar9 = puVar7[2];
  if (*(char *)(lVar9 + 0x19) == '\0') {
    cVar5 = FUN_144b66550(param_1,param_3,lVar9 + 0x20);
    uVar6 = 0;
    if (cVar5 == '\0') goto LAB_145589437;
  }
  if (param_1[1] == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
    FUN_1470a938d();
  }
  uVar1 = *param_1;
  puVar7 = param_1;
  puVar8 = (undefined8 *)FUN_14494321d(0x58);
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(puVar8 + 4) = *param_3;
  *(undefined4 *)((longlong)puVar8 + 0x24) = uVar2;
  *(undefined4 *)(puVar8 + 5) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar4;
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  *(undefined4 *)(puVar8 + 6) = param_3[4];
  *(undefined4 *)((longlong)puVar8 + 0x34) = uVar2;
  *(undefined4 *)(puVar8 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x3c) = uVar4;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar10 = puVar8 + 8;
  *puVar10 = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar11 = puVar8;
  FUN_1454113e0(puVar10,*(longlong *)(param_3 + 10) - *(longlong *)(param_3 + 8));
  memcpy((void *)*puVar10,*(void **)(param_3 + 8),
         *(longlong *)(param_3 + 10) - (longlong)*(void **)(param_3 + 8));
  *puVar8 = uVar1;
  puVar8[1] = uVar1;
  puVar8[2] = uVar1;
  *(undefined2 *)(puVar8 + 3) = 0;
  lVar9 = FUN_145588950(param_1,&local_58,puVar8,param_4,puVar7,puVar11);
  uVar6 = 1;
LAB_145589437:
  *param_2 = lVar9;
  *(undefined1 *)(param_2 + 1) = uVar6;
  return param_2;
}



// FUNCTION 145589460 FUN_145589460 body=16 status=ok
// SIG undefined FUN_145589460(void)

void FUN_145589460(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xout_of_range("invalid vector subscript");
}



// FUNCTION 145589480 FUN_145589480 body=181 status=ok
// SIG undefined FUN_145589480(void)

longlong * FUN_145589480(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar7;
  ulonglong _Size;
  
  lVar1 = *param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = lVar1;
  puVar7 = *(undefined8 **)(lVar1 + 8);
  *param_2 = (longlong)puVar7;
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    do {
      *param_2 = (longlong)puVar7;
      _Buf2 = param_3;
      if (0xf < uVar3) {
        _Buf2 = (undefined8 *)*param_3;
      }
      _Buf1 = puVar7 + 4;
      if (0xf < (ulonglong)puVar7[7]) {
        _Buf1 = (undefined8 *)puVar7[4];
      }
      uVar4 = puVar7[6];
      _Size = uVar4;
      if (uVar2 < uVar4) {
        _Size = uVar2;
      }
      iVar5 = memcmp(_Buf1,_Buf2,_Size);
      if (iVar5 == 0) {
        if (uVar2 <= uVar4) goto LAB_1455894f8;
LAB_14558952d:
        puVar7 = (undefined8 *)puVar7[2];
        uVar6 = 0;
      }
      else {
        if (iVar5 < 0) goto LAB_14558952d;
LAB_1455894f8:
        param_2[2] = (longlong)puVar7;
        uVar6 = 1;
        puVar7 = (undefined8 *)*puVar7;
      }
      *(undefined4 *)(param_2 + 1) = uVar6;
    } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
  }
  return param_2;
}



// FUNCTION 145589580 FUN_145589580 body=181 status=ok
// SIG undefined FUN_145589580(void)

longlong * FUN_145589580(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar7;
  ulonglong _Size;
  
  lVar1 = *param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = lVar1;
  puVar7 = *(undefined8 **)(lVar1 + 8);
  *param_2 = (longlong)puVar7;
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    do {
      *param_2 = (longlong)puVar7;
      _Buf2 = param_3;
      if (0xf < uVar3) {
        _Buf2 = (undefined8 *)*param_3;
      }
      _Buf1 = puVar7 + 4;
      if (0xf < (ulonglong)puVar7[7]) {
        _Buf1 = (undefined8 *)puVar7[4];
      }
      uVar4 = puVar7[6];
      _Size = uVar4;
      if (uVar2 < uVar4) {
        _Size = uVar2;
      }
      iVar5 = memcmp(_Buf1,_Buf2,_Size);
      if (iVar5 == 0) {
        if (uVar2 <= uVar4) goto LAB_1455895f8;
LAB_14558962d:
        puVar7 = (undefined8 *)puVar7[2];
        uVar6 = 0;
      }
      else {
        if (iVar5 < 0) goto LAB_14558962d;
LAB_1455895f8:
        param_2[2] = (longlong)puVar7;
        uVar6 = 1;
        puVar7 = (undefined8 *)*puVar7;
      }
      *(undefined4 *)(param_2 + 1) = uVar6;
    } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
  }
  return param_2;
}



// FUNCTION 145589640 FUN_145589640 body=167 status=ok
// SIG undefined FUN_145589640(void)

void FUN_145589640(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = param_2[4];
  if (lVar1 != 0) {
    uVar3 = param_2[6] - lVar1;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_1455896e1;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  uVar3 = param_2[3];
  if (0xf < uVar3) {
    lVar1 = *param_2;
    uVar4 = uVar3 + 1;
    lVar2 = lVar1;
    if (0xfff < uVar4) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar4 = uVar3 + 0x28;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_1455896e1:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar4);
  }
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  return;
}



// FUNCTION 145589730 FUN_145589730 body=187 status=ok
// SIG undefined FUN_145589730(void)

undefined8 FUN_145589730(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    FUN_1453f5100(param_2);
    return 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 == *(longlong **)(param_1 + 0x30)) {
    FUN_1455898a0(param_1 + 0x20,plVar2,param_2);
  }
  else {
    *param_2 = 0;
    *plVar2 = lVar1;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
  }
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    FUN_144d7ffa0(param_2 + 2,param_2 + 2,*(undefined8 *)(param_2[2] + 8));
    thunk_FUN_1400020a8(param_2[2],0x48);
    FUN_144d80090(param_2,param_2,*(undefined8 *)(*param_2 + 8));
    thunk_FUN_1400020a8(*param_2,0x58);
    thunk_FUN_1400020a8(param_2,0x28);
  }
  return 1;
}



// FUNCTION 1455897f0 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_Parallelism_allocator<unsigned __int64>::deallocate(unsigned __int64
   * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct CHN * __ptr64>::deallocate(struct CHN * __ptr64 *
   __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<8,class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > >(class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const ,struct
   TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct
   `void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
     16 names - too many to list
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 145589840 FUN_145589840 body=16 status=ok
// SIG undefined FUN_145589840(void)

void FUN_145589840(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 145589860 FUN_145589860 body=49 status=ok
// SIG undefined FUN_145589860(void)

void FUN_145589860(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    FUN_1453f5100(param_1);
  }
  return;
}



// FUNCTION 1455898a0 FUN_1455898a0 body=566 status=ok
// SIG undefined FUN_1455898a0(void)

undefined8 * FUN_1455898a0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  lVar7 = *param_1;
  lVar12 = (longlong)param_2 - lVar7 >> 3;
  lVar6 = param_1[1] - lVar7 >> 3;
  if (lVar6 == 0x1fffffffffffffff) {
    FUN_145589840();
    pcVar4 = (code *)swi(3);
    puVar10 = (undefined8 *)(*pcVar4)();
    return puVar10;
  }
  uVar1 = lVar6 + 1;
  uVar8 = param_1[2] - lVar7 >> 3;
  if (0x1fffffffffffffff - (uVar8 >> 1) < uVar8) {
LAB_145589acc:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar8 = (uVar8 >> 1) + uVar8;
  uVar11 = uVar1;
  if (uVar1 <= uVar8) {
    uVar11 = uVar8;
  }
  if (0x1fffffffffffffff < uVar11) goto LAB_145589acc;
  uVar8 = uVar11 * 8;
  if (uVar8 < 0x1000) {
    if (uVar8 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar10 = (undefined8 *)FUN_14494321d(uVar8);
    }
  }
  else {
    if (uVar8 + 0x27 <= uVar8) goto LAB_145589acc;
    lVar7 = FUN_14494321d();
    if (lVar7 == 0) goto LAB_145589ac5;
    puVar10 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
    puVar10[-1] = lVar7;
  }
  uVar2 = *param_3;
  *param_3 = 0;
  puVar10[lVar12] = uVar2;
  puVar3 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)*param_1;
  puVar5 = puVar10;
  if (param_2 == puVar3) {
    for (; puVar9 != puVar3; puVar9 = puVar9 + 1) {
      uVar2 = *puVar9;
      *puVar9 = 0;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    for (; puVar9 != param_2; puVar9 = puVar9 + 1) {
      uVar2 = *puVar9;
      *puVar9 = 0;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    }
    puVar3 = (undefined8 *)param_1[1];
    if (param_2 != puVar3) {
      lVar7 = lVar12 * 8 - (longlong)param_2;
      do {
        uVar2 = *param_2;
        *param_2 = 0;
        *(undefined8 *)((longlong)puVar10 + lVar7 + 8 + (longlong)param_2) = uVar2;
        param_2 = param_2 + 1;
      } while (param_2 != puVar3);
    }
  }
  lVar7 = *param_1;
  if (lVar7 != 0) {
    lVar6 = param_1[1];
    for (; lVar7 != lVar6; lVar7 = lVar7 + 8) {
      FUN_1453f5100(lVar7);
    }
    lVar7 = *param_1;
    uVar8 = param_1[2] - lVar7 & 0xfffffffffffffff8;
    lVar6 = lVar7;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      lVar6 = *(longlong *)(lVar7 + -8);
      if (0x1f < (lVar7 - lVar6) - 8U) {
LAB_145589ac5:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar6,uVar8);
  }
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)(puVar10 + uVar1);
  param_1[2] = (longlong)(puVar10 + uVar11);
  return puVar10 + lVar12;
}



// FUNCTION 145589ae0 FUN_145589ae0 body=103 status=ok
// SIG undefined FUN_145589ae0(void)

undefined8 * FUN_145589ae0(undefined8 *param_1)

{
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
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xe] = param_1;
  return param_1;
}



// FUNCTION 145589b50 FUN_145589b50 body=180 status=ok
// SIG undefined FUN_145589b50(void)

undefined8 FUN_145589b50(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((-1 < (int)param_2) && (-1 < param_3)) && (param_2 < 0x55555556)) {
    FUN_145589c80(param_1,param_2 * 3,&DAT_149dae858);
    FUN_145589e20(param_1 + 0x18,param_2 * 3,&DAT_149dae85c);
    if ((ulonglong)(*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x30) >> 2) < uVar1) {
      if (0x3fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_1453f6310();
      }
      std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Reallocate_exactly
                ((vector<unsigned___int64,std::allocator<unsigned___int64>_> *)(param_1 + 0x30),
                 uVar1);
    }
    FUN_14558a040(param_1 + 0x70);
    FUN_145589fc0(param_1 + 0x70);
    return 1;
  }
  return 0;
}



// FUNCTION 145589c10 FUN_145589c10 body=110 status=ok
// SIG undefined FUN_145589c10(void)

ulonglong FUN_145589c10(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x4000000000000000) {
    param_2 = param_2 * 4;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = FUN_14494321d();
        return uVar2;
      }
      return 0;
    }
    if (param_2 < param_2 + 0x27) {
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 145589c80 FUN_145589c80 body=406 status=ok
// SIG undefined FUN_145589c80(void)

void FUN_145589c80(undefined8 *param_1,ulonglong param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  puVar3 = (undefined4 *)*param_1;
  uVar4 = param_1[2] - (longlong)puVar3 >> 2;
  if (param_2 <= uVar4) {
    puVar2 = (undefined4 *)param_1[1];
    uVar4 = (longlong)puVar2 - (longlong)puVar3 >> 2;
    if (param_2 <= uVar4) {
      puVar2 = puVar3 + param_2;
      for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
        *puVar3 = *param_3;
      }
      param_1[1] = puVar2;
      return;
    }
    for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
      *puVar3 = *param_3;
    }
    puVar3 = (undefined4 *)param_1[1];
    for (lVar5 = param_2 - uVar4; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar3 = *param_3;
      puVar3 = puVar3 + 1;
    }
    param_1[1] = puVar3;
    return;
  }
  if (0x3fffffffffffffff < param_2) {
    FUN_1453f65d0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar6 = 0x3fffffffffffffff;
  if ((uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) &&
     (uVar6 = (uVar4 >> 1) + uVar4, uVar6 < param_2)) {
    uVar6 = param_2;
  }
  if (puVar3 != (undefined4 *)0x0) {
    uVar4 = uVar4 * 4;
    puVar2 = puVar3;
    if (0xfff < uVar4) {
      puVar2 = *(undefined4 **)(puVar3 + -2);
      uVar4 = uVar4 + 0x27;
      if (0x1f < (ulonglong)((longlong)puVar3 + (-8 - (longlong)puVar2))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar2,uVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  puVar3 = (undefined4 *)FUN_145589c10(param_1,uVar6);
  *param_1 = puVar3;
  param_1[1] = puVar3;
  param_1[2] = puVar3 + uVar6;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *puVar3 = *param_3;
    puVar3 = puVar3 + 1;
  }
  param_1[1] = puVar3;
  return;
}



// FUNCTION 145589e20 FUN_145589e20 body=405 status=ok
// SIG undefined FUN_145589e20(void)

void FUN_145589e20(undefined8 *param_1,ulonglong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar2 = (undefined4 *)*param_1;
  uVar3 = param_1[2] - (longlong)puVar2 >> 2;
  if (param_2 <= uVar3) {
    puVar1 = (undefined4 *)param_1[1];
    uVar3 = (longlong)puVar1 - (longlong)puVar2 >> 2;
    if (param_2 <= uVar3) {
      puVar1 = puVar2 + param_2;
      for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
        *puVar2 = *param_3;
      }
      param_1[1] = puVar1;
      return;
    }
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar2 = *param_3;
    }
    puVar2 = (undefined4 *)param_1[1];
    for (lVar4 = param_2 - uVar3; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar2 = *param_3;
      puVar2 = puVar2 + 1;
    }
    param_1[1] = puVar2;
    return;
  }
  if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1453f6310();
  }
  uVar5 = 0x3fffffffffffffff;
  if ((uVar3 <= 0x3fffffffffffffff - (uVar3 >> 1)) &&
     (uVar5 = (uVar3 >> 1) + uVar3, uVar5 < param_2)) {
    uVar5 = param_2;
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = uVar3 * 4;
    puVar1 = puVar2;
    if (0xfff < uVar3) {
      puVar1 = *(undefined4 **)(puVar2 + -2);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)puVar2 + (-8 - (longlong)puVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar1,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  puVar2 = (undefined4 *)FUN_1453f6120(param_1,uVar5);
  *param_1 = puVar2;
  param_1[1] = puVar2;
  param_1[2] = puVar2 + uVar5;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  param_1[1] = puVar2;
  return;
}



// FUNCTION 145589fc0 FUN_145589fc0 body=114 status=ok
// SIG undefined FUN_145589fc0(void)

void FUN_145589fc0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_28 [5];
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8);
  }
  if (local_28 != plVar1) {
    lVar2 = *plVar1;
    lVar3 = *(longlong *)(param_1 + 0x18);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar2 != 0) {
      uVar4 = lVar3 - lVar2;
      lVar3 = lVar2;
      if (0xfff < uVar4) {
        lVar3 = *(longlong *)(lVar2 + -8);
        uVar4 = uVar4 + 0x27;
        if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar3,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14558a040 FUN_14558a040 body=118 status=ok
// SIG undefined FUN_14558a040(void)

void FUN_14558a040(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_28 [5];
  
  plVar1 = (longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) != *(longlong *)(param_1 + 0x28)) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20);
  }
  if (local_28 != plVar1) {
    lVar2 = *plVar1;
    lVar3 = *(longlong *)(param_1 + 0x30);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar2 != 0) {
      uVar4 = lVar3 - lVar2 & 0xfffffffffffffffc;
      lVar3 = lVar2;
      if (0xfff < uVar4) {
        lVar3 = *(longlong *)(lVar2 + -8);
        uVar4 = uVar4 + 0x27;
        if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar3,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14558a0c0 _Reallocate_exactly body=102 status=ok
// SIG void _Reallocate_exactly(vector<unsigned___int64,std::allocator<unsigned___int64>_> * this, __uint64 param_1)

/* Library Function - Single Match
    private: void __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::_Reallocate_exactly(unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Reallocate_exactly
          (vector<unsigned___int64,std::allocator<unsigned___int64>_> *this,__uint64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  __uint64 *_Dst;
  
  lVar1 = *(longlong *)(this + 8);
  lVar2 = *(longlong *)this;
  _Dst = (__uint64 *)FUN_14517d8c0();
  memmove(_Dst,*(void **)this,*(longlong *)(this + 8) - (longlong)*(void **)this);
  _Change_array(this,_Dst,lVar1 - lVar2 >> 2,param_1);
  return;
}



// FUNCTION 14558a130 _Change_array body=135 status=ok
// SIG void _Change_array(vector<unsigned___int64,std::allocator<unsigned___int64>_> * this, __uint64 * param_1, __uint64 param_2, __uint64 param_3)

/* Library Function - Single Match
    private: void __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::_Change_array(unsigned __int64 * __ptr64 const,unsigned __int64,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Change_array
          (vector<unsigned___int64,std::allocator<unsigned___int64>_> *this,__uint64 *param_1,
          __uint64 param_2,__uint64 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)this;
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(this + 0x10) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
  }
  *(__uint64 **)this = param_1;
  *(__uint64 *)(this + 8) = (longlong)param_1 + param_2 * 4;
  *(__uint64 *)(this + 0x10) = (longlong)param_1 + param_3 * 4;
  return;
}



// FUNCTION 14558a1c0 FUN_14558a1c0 body=139 status=ok
// SIG undefined FUN_14558a1c0(void)

undefined8 * FUN_14558a1c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
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
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x13] = param_1;
  return param_1;
}



// FUNCTION 14558a250 FUN_14558a250 body=298 status=ok
// SIG undefined FUN_14558a250(void)

undefined8 FUN_14558a250(longlong param_1,longlong *param_2)

{
  __uint64 _Var1;
  undefined1 local_res10 [8];
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  FUN_14558a780(param_1 + 0x98);
  FUN_14558a700(param_1 + 0x98);
  local_res10[0] = 0;
  FUN_14558a580(param_1,(longlong)(int)(param_2[1] - *param_2 >> 2),local_res10);
  local_res10[0] = 0;
  FUN_14558a580(param_1 + 0x20,(longlong)(int)(param_2[7] - param_2[6] >> 2),local_res10);
  FUN_145589c80(param_1 + 0x48,(longlong)(int)(param_2[1] - *param_2 >> 2),&DAT_149dae86c);
  _Var1 = (__uint64)(int)(param_2[7] - param_2[6] >> 2);
  if ((ulonglong)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x78) >> 2) < _Var1) {
    if (0x3fffffffffffffff < _Var1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d7dee0();
    }
    std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Reallocate_exactly
              ((vector<unsigned___int64,std::allocator<unsigned___int64>_> *)(param_1 + 0x78),_Var1)
    ;
  }
  _Var1 = (__uint64)(int)(param_2[7] - param_2[6] >> 2);
  if ((ulonglong)(*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x60) >> 2) < _Var1) {
    if (0x3fffffffffffffff < _Var1) {
                    /* WARNING: Subroutine does not return */
      FUN_1453f6310();
    }
    std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Reallocate_exactly
              ((vector<unsigned___int64,std::allocator<unsigned___int64>_> *)(param_1 + 0x60),_Var1)
    ;
  }
  *(longlong **)(param_1 + 0x90) = param_2;
  *(undefined1 *)(param_1 + 0x40) = 1;
  return 1;
}



// FUNCTION 14558a380 FUN_14558a380 body=479 status=ok
// SIG undefined FUN_14558a380(void)

void FUN_14558a380(longlong *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = (uint *)(*param_1 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << (param_2 & 0x1f);
  uVar4 = 0xffffffff;
  if (param_2 == 0xffffffff) {
LAB_14558a3f8:
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = 1;
    if (param_2 + 1 == ((param_2 + 1) / 3) * 3) {
      iVar2 = -2;
    }
    if (iVar2 + param_2 == 0xffffffff) goto LAB_14558a3f8;
    uVar3 = *(uint *)(*(longlong *)param_1[0x12] + (ulonglong)(iVar2 + param_2) * 4);
  }
  *(uint *)(param_1[4] + (ulonglong)(uVar3 >> 5) * 4) =
       *(uint *)(param_1[4] + (ulonglong)(uVar3 >> 5) * 4) | 1 << (uVar3 & 0x1f);
  if (param_2 != 0xffffffff) {
    uVar3 = param_2 - 1;
    if (param_2 == (param_2 / 3) * 3) {
      uVar3 = param_2 + 2;
    }
    if (uVar3 != 0xffffffff) {
      uVar3 = *(uint *)(*(longlong *)param_1[0x12] + (ulonglong)uVar3 * 4);
      goto LAB_14558a452;
    }
  }
  uVar3 = 0xffffffff;
LAB_14558a452:
  *(uint *)(param_1[4] + (ulonglong)(uVar3 >> 5) * 4) =
       *(uint *)(param_1[4] + (ulonglong)(uVar3 >> 5) * 4) | 1 << (uVar3 & 0x1f);
  uVar3 = 0xffffffff;
  if ((param_2 != 0xffffffff) &&
     (uVar5 = *(uint *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)param_2 * 4),
     uVar5 != 0xffffffff)) {
    *(undefined1 *)(param_1 + 8) = 0;
    *(uint *)(*param_1 + (ulonglong)(uVar5 >> 5) * 4) =
         *(uint *)(*param_1 + (ulonglong)(uVar5 >> 5) * 4) | 1 << (uVar5 & 0x1f);
    iVar2 = 1;
    if (uVar5 + 1 == ((uVar5 + 1) / 3) * 3) {
      iVar2 = -2;
    }
    if (iVar2 + uVar5 != 0xffffffff) {
      uVar3 = *(uint *)(*(longlong *)param_1[0x12] + (ulonglong)(iVar2 + uVar5) * 4);
    }
    puVar1 = (uint *)(param_1[4] + (ulonglong)(uVar3 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << (uVar3 & 0x1f);
    if (uVar5 == (uVar5 / 3) * 3) {
      uVar5 = uVar5 + 2;
    }
    else {
      uVar5 = uVar5 - 1;
    }
    if (uVar5 != 0xffffffff) {
      uVar4 = *(uint *)(*(longlong *)param_1[0x12] + (ulonglong)uVar5 * 4);
    }
    puVar1 = (uint *)(param_1[4] + (ulonglong)(uVar4 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << (uVar4 & 0x1f);
  }
  return;
}



// FUNCTION 14558a560 FUN_14558a560 body=24 status=ok
// SIG undefined FUN_14558a560(void)

ulonglong FUN_14558a560(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iStackX_8;
  uint auStackX_20 [2];
  uint auStack_58 [6];
  
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar5 = FUN_14558ace0(param_1,0,0);
    return uVar5;
  }
  if (param_1[0xf] != param_1[0x10]) {
    param_1[0x10] = param_1[0xf];
  }
  if (param_1[0xc] != param_1[0xd]) {
    param_1[0xd] = param_1[0xc];
  }
  lVar7 = param_1[0x12];
  iVar8 = 0;
  uVar11 = 0;
  lVar6 = *(longlong *)(lVar7 + 0x38) - *(longlong *)(lVar7 + 0x30) >> 2;
  if ((int)lVar6 != 0) {
    do {
      uVar1 = *(uint *)(*(longlong *)(lVar7 + 0x30) + (ulonglong)uVar11 * 4);
      iStackX_8 = iVar8;
      if (uVar1 != 0xffffffff) {
        iStackX_8 = iVar8 + 1;
        if ((int)uVar1 < 0) {
          auStackX_20[0] = 0xffffffff;
        }
        else {
          uVar9 = (int)uVar1 / 3 + ((int)uVar1 >> 0x1f) +
                  (int)(((longlong)(int)uVar1 / 3 + ((longlong)(int)uVar1 >> 0x3f) & 0xffffffffU) >>
                       0x1f);
          auStackX_20[0] =
               *(uint *)(*(longlong *)(param_2 + 0xc0) +
                        ((longlong)(int)(uVar1 + uVar9 * -3) + (ulonglong)uVar9 * 3) * 4);
        }
        if (*(char *)(param_3 + 100) == '\0') {
          auStackX_20[0] = *(uint *)(*(longlong *)(param_3 + 0x48) + (ulonglong)auStackX_20[0] * 4);
        }
        puVar2 = (uint *)param_1[0x10];
        if (puVar2 == (uint *)param_1[0x11]) {
          FUN_14558b0e0(param_1 + 0xf,puVar2,auStackX_20);
        }
        else {
          *puVar2 = auStackX_20[0];
          param_1[0x10] = param_1[0x10] + 4;
        }
        auStackX_20[0] = uVar1;
        if ((*(uint *)(param_1[4] + (ulonglong)(uVar11 >> 5) * 4) >> ((byte)uVar11 & 0x1f) & 1) != 0
           ) {
          uVar9 = uVar1 + 1;
          if (uVar9 == (uVar9 / 3) * 3) {
            uVar9 = uVar1 - 2;
          }
          if (((uVar9 != 0xffffffff) &&
              ((*(uint *)(*param_1 + (ulonglong)(uVar9 >> 5) * 4) >> ((byte)uVar9 & 0x1f) & 1) == 0)
              ) && (iVar4 = *(int *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)uVar9 * 4),
                   iVar4 != -1)) {
            uVar9 = iVar4 + 1;
            if (uVar9 == (uVar9 / 3) * 3) {
              uVar9 = iVar4 - 2;
            }
            uVar5 = (ulonglong)uVar9;
            while (uVar9 != 0xffffffff) {
              auStackX_20[0] = (uint)uVar5;
              iVar4 = 1;
              if (auStackX_20[0] + 1 == ((auStackX_20[0] + 1) / 3) * 3) {
                iVar4 = -2;
              }
              uVar9 = iVar4 + auStackX_20[0];
              if (((uVar9 == 0xffffffff) ||
                  ((*(uint *)(*param_1 + (ulonglong)(uVar9 >> 5) * 4) >> ((byte)uVar9 & 0x1f) & 1)
                   != 0)) ||
                 (iVar4 = *(int *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)uVar9 * 4),
                 iVar4 == -1)) break;
              uVar9 = iVar4 + 1;
              uVar5 = (ulonglong)uVar9;
              uVar3 = uVar5 * 0xaaaaaaab;
              if (uVar9 == (uVar9 / 3) * 3) {
                uVar5 = (ulonglong)(iVar4 - 2);
              }
              uVar9 = (uint)uVar5;
              if (uVar9 == uVar1) {
                return uVar3 & 0xffffff00;
              }
            }
          }
        }
        uVar1 = auStackX_20[0];
        *(int *)(param_1[9] + (ulonglong)auStackX_20[0] * 4) = iVar8;
        puVar2 = (uint *)param_1[0xd];
        if (puVar2 == (uint *)param_1[0xe]) {
          FUN_145406ab0(param_1 + 0xc,puVar2,auStackX_20);
        }
        else {
          *puVar2 = auStackX_20[0];
          param_1[0xd] = param_1[0xd] + 4;
        }
        if (uVar1 != 0xffffffff) {
          uVar9 = uVar1 - 1;
          if (uVar1 == (uVar1 / 3) * 3) {
            uVar9 = uVar1 + 2;
          }
          if ((uVar9 != 0xffffffff) &&
             (uVar9 = *(uint *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)uVar9 * 4),
             uVar9 != 0xffffffff)) {
            if (uVar9 == (uVar9 / 3) * 3) {
              uVar9 = uVar9 + 2;
            }
            else {
              uVar9 = uVar9 - 1;
            }
            if (uVar9 != 0xffffffff) {
              while (uVar9 != uVar1) {
                if (uVar9 == 0xffffffff) {
                  uVar10 = 0xffffffff;
                }
                else {
                  uVar10 = uVar9 + 1;
                  if (uVar10 == (uVar10 / 3) * 3) {
                    uVar10 = uVar9 - 2;
                  }
                }
                iVar4 = iStackX_8;
                if ((*(uint *)(*param_1 + (ulonglong)(uVar10 >> 5) * 4) >> ((byte)uVar10 & 0x1f) & 1
                    ) != 0) {
                  if (((int)uVar9 < 0) || (uVar9 == 0xffffffff)) {
                    auStack_58[0] = 0xffffffff;
                  }
                  else {
                    uVar10 = (int)uVar9 / 3 + ((int)uVar9 >> 0x1f) +
                             (int)(((longlong)(int)uVar9 / 3 + ((longlong)(int)uVar9 >> 0x3f) &
                                   0xffffffffU) >> 0x1f);
                    auStack_58[0] =
                         *(uint *)(*(longlong *)(param_2 + 0xc0) +
                                  ((longlong)(int)(uVar9 + uVar10 * -3) + (ulonglong)uVar10 * 3) * 4
                                  );
                  }
                  if (*(char *)(param_3 + 100) == '\0') {
                    auStack_58[0] =
                         *(uint *)(*(longlong *)(param_3 + 0x48) + (ulonglong)auStack_58[0] * 4);
                  }
                  puVar2 = (uint *)param_1[0x10];
                  auStackX_20[0] = uVar9;
                  if (puVar2 == (uint *)param_1[0x11]) {
                    FUN_14558b0e0(param_1 + 0xf,puVar2,auStack_58);
                  }
                  else {
                    *puVar2 = auStack_58[0];
                    param_1[0x10] = param_1[0x10] + 4;
                  }
                  puVar2 = (uint *)param_1[0xd];
                  iVar4 = iStackX_8 + 1;
                  iVar8 = iStackX_8;
                  if (puVar2 == (uint *)param_1[0xe]) {
                    FUN_145406ab0(param_1 + 0xc,puVar2,auStackX_20);
                  }
                  else {
                    *puVar2 = uVar9;
                    param_1[0xd] = param_1[0xd] + 4;
                  }
                }
                iStackX_8 = iVar4;
                *(int *)(param_1[9] + (ulonglong)uVar9 * 4) = iVar8;
                if (uVar9 == 0xffffffff) break;
                if (uVar9 == (uVar9 / 3) * 3) {
                  uVar9 = uVar9 + 2;
                }
                else {
                  uVar9 = uVar9 - 1;
                }
                if ((uVar9 == 0xffffffff) ||
                   (uVar9 = *(uint *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)uVar9 * 4),
                   uVar9 == 0xffffffff)) break;
                if (uVar9 == (uVar9 / 3) * 3) {
                  uVar9 = uVar9 + 2;
                }
                else {
                  uVar9 = uVar9 - 1;
                }
                if (uVar9 == 0xffffffff) break;
              }
            }
          }
        }
      }
      iVar8 = iStackX_8;
      lVar7 = param_1[0x12];
      uVar11 = uVar11 + 1;
      lVar6 = *(longlong *)(lVar7 + 0x38) - *(longlong *)(lVar7 + 0x30) >> 2;
    } while (uVar11 < (uint)lVar6);
  }
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
}



// FUNCTION 14558a580 FUN_14558a580 body=383 status=ok
// SIG undefined FUN_14558a580(void)

void FUN_14558a580(longlong *param_1,longlong param_2,char *param_3)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  longlong local_18 [2];
  
  local_18[0] = *param_1;
  if (local_18[0] != param_1[1]) {
    param_1[1] = local_18[0];
  }
  local_18[1] = 0;
  param_1[3] = 0;
  uVar3 = FUN_148277e9a((undefined4)local_18[0],local_18,param_2);
  if (((longlong)uVar3 < 0) && (uVar3 != 0)) {
    lVar1 = -((~uVar3 >> 5) * 4 + 4);
  }
  else {
    lVar1 = (uVar3 >> 5) * 4;
  }
  puVar9 = (uint *)(*param_1 + lVar1);
  uVar4 = (uint)uVar3 & 0x1f;
  uVar3 = (ulonglong)uVar4;
  if ((param_2 < 0) && (uVar3 < (ulonglong)-param_2)) {
    lVar1 = -((~(uVar3 + param_2) >> 5) * 4 + 4);
  }
  else {
    lVar1 = (uVar3 + param_2 >> 5) * 4;
  }
  puVar6 = (uint *)((longlong)puVar9 + lVar1);
  cVar2 = *param_3;
  uVar5 = uVar3 + param_2 & 0x1f;
  if ((puVar9 != puVar6) || (uVar3 != uVar5)) {
    uVar4 = -1 << (sbyte)uVar4;
    if (puVar9 == puVar6) {
      uVar7 = 0xffffffff >> (0x20U - (char)uVar5 & 0x1f);
      uVar8 = 0;
      if (cVar2 != '\0') {
        uVar8 = uVar7;
      }
      *puVar9 = uVar8 & uVar4 | (~uVar7 | ~uVar4) & *puVar9;
    }
    else {
      uVar8 = 0;
      if (cVar2 != '\0') {
        uVar8 = uVar4;
      }
      *puVar9 = uVar8 | *puVar9 & ~uVar4;
      memset(puVar9 + 1,-(uint)(cVar2 != '\0') & 0xff,(longlong)puVar6 - (longlong)(puVar9 + 1));
      if (uVar5 != 0) {
        uVar8 = 0xffffffff >> (0x20U - (char)uVar5 & 0x1f);
        uVar4 = 0;
        if (cVar2 != '\0') {
          uVar4 = uVar8;
        }
        *puVar6 = ~uVar8 & *puVar6 | uVar4;
      }
    }
  }
  return;
}



// FUNCTION 14558a700 FUN_14558a700 body=114 status=ok
// SIG undefined FUN_14558a700(void)

void FUN_14558a700(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_28 [5];
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x10)) {
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8);
  }
  if (local_28 != plVar1) {
    lVar2 = *plVar1;
    lVar3 = *(longlong *)(param_1 + 0x18);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar2 != 0) {
      uVar4 = lVar3 - lVar2;
      lVar3 = lVar2;
      if (0xfff < uVar4) {
        lVar3 = *(longlong *)(lVar2 + -8);
        uVar4 = uVar4 + 0x27;
        if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar3,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14558a780 FUN_14558a780 body=118 status=ok
// SIG undefined FUN_14558a780(void)

void FUN_14558a780(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_28 [5];
  
  plVar1 = (longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) != *(longlong *)(param_1 + 0x28)) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20);
  }
  if (local_28 != plVar1) {
    lVar2 = *plVar1;
    lVar3 = *(longlong *)(param_1 + 0x30);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar2 != 0) {
      uVar4 = lVar3 - lVar2 & 0xfffffffffffffffc;
      lVar3 = lVar2;
      if (0xfff < uVar4) {
        lVar3 = *(longlong *)(lVar2 + -8);
        uVar4 = uVar4 + 0x27;
        if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar3,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14558a800 FUN_14558a800 body=1236 status=ok
// SIG undefined FUN_14558a800(void)

ulonglong FUN_14558a800(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_res8;
  uint local_res20 [2];
  uint local_58 [6];
  
  if (param_1[0xf] != param_1[0x10]) {
    param_1[0x10] = param_1[0xf];
  }
  if (param_1[0xc] != param_1[0xd]) {
    param_1[0xd] = param_1[0xc];
  }
  lVar6 = param_1[0x12];
  iVar8 = 0;
  uVar11 = 0;
  lVar5 = *(longlong *)(lVar6 + 0x38) - *(longlong *)(lVar6 + 0x30) >> 2;
  if ((int)lVar5 != 0) {
    do {
      uVar1 = *(uint *)(*(longlong *)(lVar6 + 0x30) + (ulonglong)uVar11 * 4);
      local_res8 = iVar8;
      if (uVar1 != 0xffffffff) {
        local_res8 = iVar8 + 1;
        if ((int)uVar1 < 0) {
          local_res20[0] = 0xffffffff;
        }
        else {
          uVar9 = (int)uVar1 / 3 + ((int)uVar1 >> 0x1f) +
                  (int)(((longlong)(int)uVar1 / 3 + ((longlong)(int)uVar1 >> 0x3f) & 0xffffffffU) >>
                       0x1f);
          local_res20[0] =
               *(uint *)(*(longlong *)(param_2 + 0xc0) +
                        ((longlong)(int)(uVar1 + uVar9 * -3) + (ulonglong)uVar9 * 3) * 4);
        }
        if (*(char *)(param_3 + 100) == '\0') {
          local_res20[0] = *(uint *)(*(longlong *)(param_3 + 0x48) + (ulonglong)local_res20[0] * 4);
        }
        puVar2 = (uint *)param_1[0x10];
        if (puVar2 == (uint *)param_1[0x11]) {
          FUN_14558b0e0(param_1 + 0xf,puVar2,local_res20);
        }
        else {
          *puVar2 = local_res20[0];
          param_1[0x10] = param_1[0x10] + 4;
        }
        local_res20[0] = uVar1;
        if ((*(uint *)(param_1[4] + (ulonglong)(uVar11 >> 5) * 4) >> ((byte)uVar11 & 0x1f) & 1) != 0
           ) {
          uVar9 = uVar1 + 1;
          if (uVar9 == (uVar9 / 3) * 3) {
            uVar9 = uVar1 - 2;
          }
          if (((uVar9 != 0xffffffff) &&
              ((*(uint *)(*param_1 + (ulonglong)(uVar9 >> 5) * 4) >> ((byte)uVar9 & 0x1f) & 1) == 0)
              ) && (iVar4 = *(int *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)uVar9 * 4),
                   iVar4 != -1)) {
            uVar9 = iVar4 + 1;
            if (uVar9 == (uVar9 / 3) * 3) {
              uVar9 = iVar4 - 2;
            }
            uVar7 = (ulonglong)uVar9;
            while (uVar9 != 0xffffffff) {
              local_res20[0] = (uint)uVar7;
              iVar4 = 1;
              if (local_res20[0] + 1 == ((local_res20[0] + 1) / 3) * 3) {
                iVar4 = -2;
              }
              uVar9 = iVar4 + local_res20[0];
              if (((uVar9 == 0xffffffff) ||
                  ((*(uint *)(*param_1 + (ulonglong)(uVar9 >> 5) * 4) >> ((byte)uVar9 & 0x1f) & 1)
                   != 0)) ||
                 (iVar4 = *(int *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)uVar9 * 4),
                 iVar4 == -1)) break;
              uVar9 = iVar4 + 1;
              uVar7 = (ulonglong)uVar9;
              uVar3 = uVar7 * 0xaaaaaaab;
              if (uVar9 == (uVar9 / 3) * 3) {
                uVar7 = (ulonglong)(iVar4 - 2);
              }
              uVar9 = (uint)uVar7;
              if (uVar9 == uVar1) {
                return uVar3 & 0xffffff00;
              }
            }
          }
        }
        uVar1 = local_res20[0];
        *(int *)(param_1[9] + (ulonglong)local_res20[0] * 4) = iVar8;
        puVar2 = (uint *)param_1[0xd];
        if (puVar2 == (uint *)param_1[0xe]) {
          FUN_145406ab0(param_1 + 0xc,puVar2,local_res20);
        }
        else {
          *puVar2 = local_res20[0];
          param_1[0xd] = param_1[0xd] + 4;
        }
        if (uVar1 != 0xffffffff) {
          uVar9 = uVar1 - 1;
          if (uVar1 == (uVar1 / 3) * 3) {
            uVar9 = uVar1 + 2;
          }
          if ((uVar9 != 0xffffffff) &&
             (uVar9 = *(uint *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)uVar9 * 4),
             uVar9 != 0xffffffff)) {
            if (uVar9 == (uVar9 / 3) * 3) {
              uVar9 = uVar9 + 2;
            }
            else {
              uVar9 = uVar9 - 1;
            }
            if (uVar9 != 0xffffffff) {
              while (uVar9 != uVar1) {
                if (uVar9 == 0xffffffff) {
                  uVar10 = 0xffffffff;
                }
                else {
                  uVar10 = uVar9 + 1;
                  if (uVar10 == (uVar10 / 3) * 3) {
                    uVar10 = uVar9 - 2;
                  }
                }
                iVar4 = local_res8;
                if ((*(uint *)(*param_1 + (ulonglong)(uVar10 >> 5) * 4) >> ((byte)uVar10 & 0x1f) & 1
                    ) != 0) {
                  if (((int)uVar9 < 0) || (uVar9 == 0xffffffff)) {
                    local_58[0] = 0xffffffff;
                  }
                  else {
                    uVar10 = (int)uVar9 / 3 + ((int)uVar9 >> 0x1f) +
                             (int)(((longlong)(int)uVar9 / 3 + ((longlong)(int)uVar9 >> 0x3f) &
                                   0xffffffffU) >> 0x1f);
                    local_58[0] = *(uint *)(*(longlong *)(param_2 + 0xc0) +
                                           ((longlong)(int)(uVar9 + uVar10 * -3) +
                                           (ulonglong)uVar10 * 3) * 4);
                  }
                  if (*(char *)(param_3 + 100) == '\0') {
                    local_58[0] = *(uint *)(*(longlong *)(param_3 + 0x48) +
                                           (ulonglong)local_58[0] * 4);
                  }
                  puVar2 = (uint *)param_1[0x10];
                  local_res20[0] = uVar9;
                  if (puVar2 == (uint *)param_1[0x11]) {
                    FUN_14558b0e0(param_1 + 0xf,puVar2,local_58);
                  }
                  else {
                    *puVar2 = local_58[0];
                    param_1[0x10] = param_1[0x10] + 4;
                  }
                  puVar2 = (uint *)param_1[0xd];
                  iVar4 = local_res8 + 1;
                  iVar8 = local_res8;
                  if (puVar2 == (uint *)param_1[0xe]) {
                    FUN_145406ab0(param_1 + 0xc,puVar2,local_res20);
                  }
                  else {
                    *puVar2 = uVar9;
                    param_1[0xd] = param_1[0xd] + 4;
                  }
                }
                local_res8 = iVar4;
                *(int *)(param_1[9] + (ulonglong)uVar9 * 4) = iVar8;
                if (uVar9 == 0xffffffff) break;
                if (uVar9 == (uVar9 / 3) * 3) {
                  uVar9 = uVar9 + 2;
                }
                else {
                  uVar9 = uVar9 - 1;
                }
                if ((uVar9 == 0xffffffff) ||
                   (uVar9 = *(uint *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)uVar9 * 4),
                   uVar9 == 0xffffffff)) break;
                if (uVar9 == (uVar9 / 3) * 3) {
                  uVar9 = uVar9 + 2;
                }
                else {
                  uVar9 = uVar9 - 1;
                }
                if (uVar9 == 0xffffffff) break;
              }
            }
          }
        }
      }
      iVar8 = local_res8;
      lVar6 = param_1[0x12];
      uVar11 = uVar11 + 1;
      lVar5 = *(longlong *)(lVar6 + 0x38) - *(longlong *)(lVar6 + 0x30) >> 2;
    } while (uVar11 < (uint)lVar5);
  }
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
}



// FUNCTION 14558ace0 FUN_14558ace0 body=1016 status=ok
// SIG undefined FUN_14558ace0(void)

ulonglong FUN_14558ace0(longlong *param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int local_res8;
  uint local_res20 [2];
  int local_48 [4];
  
  if (param_1[0xf] != param_1[0x10]) {
    param_1[0x10] = param_1[0xf];
  }
  if (param_1[0xc] != param_1[0xd]) {
    param_1[0xd] = param_1[0xc];
  }
  lVar9 = param_1[0x12];
  local_res8 = 0;
  uVar12 = 0;
  lVar7 = *(longlong *)(lVar9 + 0x38) - *(longlong *)(lVar9 + 0x30) >> 2;
  if ((int)lVar7 != 0) {
    do {
      uVar1 = *(uint *)(*(longlong *)(lVar9 + 0x30) + (ulonglong)uVar12 * 4);
      if (uVar1 != 0xffffffff) {
        iVar11 = local_res8 + 1;
        piVar2 = (int *)param_1[0x10];
        local_48[0] = local_res8;
        if (piVar2 == (int *)param_1[0x11]) {
          FUN_14558b1e0(param_1 + 0xf,piVar2,local_48);
        }
        else {
          *piVar2 = local_res8;
          param_1[0x10] = param_1[0x10] + 4;
        }
        local_res20[0] = uVar1;
        if ((*(uint *)(param_1[4] + (ulonglong)(uVar12 >> 5) * 4) >> ((byte)uVar12 & 0x1f) & 1) != 0
           ) {
          uVar6 = uVar1 + 1;
          if (uVar6 == (uVar6 / 3) * 3) {
            uVar6 = uVar1 - 2;
          }
          if (((uVar6 != 0xffffffff) &&
              ((*(uint *)(*param_1 + (ulonglong)(uVar6 >> 5) * 4) >> ((byte)uVar6 & 0x1f) & 1) == 0)
              ) && (iVar5 = *(int *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)uVar6 * 4),
                   iVar5 != -1)) {
            uVar6 = iVar5 + 1;
            if (uVar6 == (uVar6 / 3) * 3) {
              uVar6 = iVar5 - 2;
            }
            uVar10 = (ulonglong)uVar6;
            while (uVar6 != 0xffffffff) {
              local_res20[0] = (uint)uVar10;
              iVar5 = 1;
              if (local_res20[0] + 1 == ((local_res20[0] + 1) / 3) * 3) {
                iVar5 = -2;
              }
              uVar6 = iVar5 + local_res20[0];
              if (((uVar6 == 0xffffffff) ||
                  ((*(uint *)(*param_1 + (ulonglong)(uVar6 >> 5) * 4) >> ((byte)uVar6 & 0x1f) & 1)
                   != 0)) ||
                 (iVar5 = *(int *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)uVar6 * 4),
                 iVar5 == -1)) break;
              uVar6 = iVar5 + 1;
              uVar10 = (ulonglong)uVar6;
              uVar4 = uVar10 * 0xaaaaaaab;
              if (uVar6 == (uVar6 / 3) * 3) {
                uVar10 = (ulonglong)(iVar5 - 2);
              }
              uVar6 = (uint)uVar10;
              if (uVar6 == uVar1) {
                return uVar4 & 0xffffff00;
              }
            }
          }
        }
        uVar1 = local_res20[0];
        *(int *)(param_1[9] + (ulonglong)local_res20[0] * 4) = local_res8;
        puVar3 = (uint *)param_1[0xd];
        if (puVar3 == (uint *)param_1[0xe]) {
          FUN_145406ab0(param_1 + 0xc,puVar3,local_res20);
        }
        else {
          *puVar3 = local_res20[0];
          param_1[0xd] = param_1[0xd] + 4;
        }
        if (uVar1 != 0xffffffff) {
          uVar6 = uVar1 - 1;
          if (uVar1 == (uVar1 / 3) * 3) {
            uVar6 = uVar1 + 2;
          }
          if ((uVar6 != 0xffffffff) &&
             (uVar6 = *(uint *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)uVar6 * 4),
             uVar6 != 0xffffffff)) {
            iVar5 = local_res8;
            if (uVar6 == (uVar6 / 3) * 3) {
              uVar6 = uVar6 + 2;
            }
            else {
              uVar6 = uVar6 - 1;
            }
            while ((local_res8 = iVar11, local_res20[0] = uVar6, uVar6 != 0xffffffff &&
                   (uVar6 != uVar1))) {
              if (uVar6 == 0xffffffff) {
                uVar8 = 0xffffffff;
              }
              else {
                uVar8 = uVar6 + 1;
                if (uVar8 == (uVar8 / 3) * 3) {
                  uVar8 = uVar6 - 2;
                }
              }
              iVar11 = local_res8;
              if ((*(uint *)(*param_1 + (ulonglong)(uVar8 >> 5) * 4) >> ((byte)uVar8 & 0x1f) & 1) !=
                  0) {
                piVar2 = (int *)param_1[0x10];
                local_48[0] = local_res8;
                if (piVar2 == (int *)param_1[0x11]) {
                  FUN_14558b1e0(param_1 + 0xf,piVar2,local_48);
                }
                else {
                  *piVar2 = local_res8;
                  param_1[0x10] = param_1[0x10] + 4;
                }
                puVar3 = (uint *)param_1[0xd];
                iVar11 = local_res8 + 1;
                iVar5 = local_res8;
                if (puVar3 == (uint *)param_1[0xe]) {
                  FUN_145406ab0(param_1 + 0xc,puVar3,local_res20);
                }
                else {
                  *puVar3 = uVar6;
                  param_1[0xd] = param_1[0xd] + 4;
                }
              }
              local_res8 = iVar11;
              *(int *)(param_1[9] + (ulonglong)uVar6 * 4) = iVar5;
              iVar11 = local_res8;
              if (uVar6 == 0xffffffff) goto LAB_14558b080;
              if (uVar6 == (uVar6 / 3) * 3) {
                uVar6 = uVar6 + 2;
              }
              else {
                uVar6 = uVar6 - 1;
              }
              if ((uVar6 == 0xffffffff) ||
                 (uVar6 = *(uint *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)uVar6 * 4),
                 uVar6 == 0xffffffff)) goto LAB_14558b080;
              if (uVar6 == (uVar6 / 3) * 3) {
                uVar6 = uVar6 + 2;
              }
              else {
                uVar6 = uVar6 - 1;
              }
            }
            goto LAB_14558b095;
          }
        }
LAB_14558b080:
        local_res8 = iVar11;
        local_res20[0] = 0xffffffff;
      }
LAB_14558b095:
      lVar9 = param_1[0x12];
      uVar12 = uVar12 + 1;
      lVar7 = *(longlong *)(lVar9 + 0x38) - *(longlong *)(lVar9 + 0x30) >> 2;
    } while (uVar12 < (uint)lVar7);
  }
  return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
}



// FUNCTION 14558b0e0 FUN_14558b0e0 body=242 status=ok
// SIG undefined FUN_14558b0e0(void)

undefined4 *
FUN_14558b0e0(vector<unsigned___int64,std::allocator<unsigned___int64>_> *param_1,void *param_2,
             undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  __uint64 *_Dst;
  ulonglong uVar5;
  __uint64 *_Dst_00;
  ulonglong uVar6;
  size_t _Size;
  
  lVar3 = *(longlong *)param_1;
  lVar4 = *(longlong *)(param_1 + 8) - lVar3 >> 2;
  if (lVar4 != 0x3fffffffffffffff) {
    uVar1 = lVar4 + 1;
    uVar5 = *(longlong *)(param_1 + 0x10) - lVar3 >> 2;
    uVar6 = 0x3fffffffffffffff;
    if ((uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) &&
       (uVar6 = (uVar5 >> 1) + uVar5, uVar6 < uVar1)) {
      uVar6 = uVar1;
    }
    _Dst = (__uint64 *)FUN_14517d8c0(param_1,uVar6);
    puVar2 = (undefined4 *)((longlong)_Dst + ((longlong)param_2 - lVar3 >> 2) * 4);
    *puVar2 = *param_3;
    _Src = *(void **)param_1;
    if (param_2 == *(void **)(param_1 + 8)) {
      _Size = (longlong)*(void **)(param_1 + 8) - (longlong)_Src;
      _Dst_00 = _Dst;
      param_2 = _Src;
    }
    else {
      memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
      _Dst_00 = (__uint64 *)(puVar2 + 1);
      _Size = *(longlong *)(param_1 + 8) - (longlong)param_2;
    }
    memmove(_Dst_00,param_2,_Size);
    std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Change_array
              (param_1,_Dst,uVar1,uVar6);
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d7dee0();
}



// FUNCTION 14558b1e0 FUN_14558b1e0 body=242 status=ok
// SIG undefined FUN_14558b1e0(void)

undefined4 *
FUN_14558b1e0(vector<unsigned___int64,std::allocator<unsigned___int64>_> *param_1,void *param_2,
             undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  __uint64 *_Dst;
  ulonglong uVar5;
  __uint64 *_Dst_00;
  ulonglong uVar6;
  size_t _Size;
  
  lVar3 = *(longlong *)param_1;
  lVar4 = *(longlong *)(param_1 + 8) - lVar3 >> 2;
  if (lVar4 != 0x3fffffffffffffff) {
    uVar1 = lVar4 + 1;
    uVar5 = *(longlong *)(param_1 + 0x10) - lVar3 >> 2;
    uVar6 = 0x3fffffffffffffff;
    if ((uVar5 <= 0x3fffffffffffffff - (uVar5 >> 1)) &&
       (uVar6 = (uVar5 >> 1) + uVar5, uVar6 < uVar1)) {
      uVar6 = uVar1;
    }
    _Dst = (__uint64 *)FUN_14517d8c0(param_1,uVar6);
    puVar2 = (undefined4 *)((longlong)_Dst + ((longlong)param_2 - lVar3 >> 2) * 4);
    *puVar2 = *param_3;
    _Src = *(void **)param_1;
    if (param_2 == *(void **)(param_1 + 8)) {
      _Size = (longlong)*(void **)(param_1 + 8) - (longlong)_Src;
      _Dst_00 = _Dst;
      param_2 = _Src;
    }
    else {
      memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
      _Dst_00 = (__uint64 *)(puVar2 + 1);
      _Size = *(longlong *)(param_1 + 8) - (longlong)param_2;
    }
    memmove(_Dst_00,param_2,_Size);
    std::vector<unsigned___int64,std::allocator<unsigned___int64>_>::_Change_array
              (param_1,_Dst,uVar1,uVar6);
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d7dee0();
}



// FUNCTION 14558b2e0 FUN_14558b2e0 body=48 status=ok
// SIG undefined FUN_14558b2e0(void)

undefined8 * FUN_14558b2e0(undefined8 *param_1)

{
  *param_1 = draco::AttributesDecoder::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 14558b310 FUN_14558b310 body=11 status=ok
// SIG undefined FUN_14558b310(void)

undefined1 FUN_14558b310(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return 1;
}



// FUNCTION 14558b320 FUN_14558b320 body=944 status=ok
// SIG undefined FUN_14558b320(void)

ulonglong FUN_14558b320(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  size_t _Size;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  void *pvVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint local_res18 [2];
  uint local_res20 [2];
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [60];
  uint local_3c;
  
  lVar16 = param_2[2];
  uVar11 = 0x200;
  if (CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x48),
               *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x49)) < 0x200) {
    if (param_2[1] < lVar16 + 4) goto LAB_14558b6b3;
    local_res20[0] = *(uint *)(lVar16 + *param_2);
    param_2[2] = lVar16 + 4;
  }
  else {
    if (param_2[1] < lVar16 + 1) goto LAB_14558b6b3;
    bVar4 = *(byte *)(lVar16 + *param_2);
    uVar17 = (uint)bVar4;
    param_2[2] = lVar16 + 1;
    if ((char)bVar4 < '\0') {
      uVar11 = FUN_14558b7d0(2,local_res20,param_2);
      if ((char)uVar11 == '\0') goto LAB_14558b6b3;
      local_res20[0] = uVar17 & 0x7f | local_res20[0] << 7;
    }
    else {
      local_res20[0] = (uint)bVar4;
    }
  }
  uVar11 = (ulonglong)local_res20[0];
  if (local_res20[0] == 0) {
LAB_14558b6b3:
    return uVar11 & 0xffffffffffffff00;
  }
  uVar14 = (ulonglong)local_res20[0];
  uVar11 = (param_2[1] - param_2[2]) * 5;
  if ((longlong)uVar11 < (longlong)uVar14) goto LAB_14558b6b3;
  plVar1 = (longlong *)(param_1 + 8);
  pvVar12 = *(void **)(param_1 + 0x10);
  lVar16 = *plVar1;
  uVar11 = (longlong)pvVar12 - lVar16 >> 2;
  if (uVar14 < uVar11) {
    pvVar12 = (void *)(lVar16 + uVar14 * 4);
  }
  else {
    if (uVar14 <= uVar11) goto LAB_14558b458;
    if ((ulonglong)(*(longlong *)(param_1 + 0x18) - lVar16 >> 2) < uVar14) {
      FUN_146c960b8(plVar1,uVar14,local_res18);
      goto LAB_14558b458;
    }
    _Size = (uVar14 - uVar11) * 4;
    memset(pvVar12,0,_Size);
    pvVar12 = (void *)((longlong)pvVar12 + _Size);
  }
  *(void **)(param_1 + 0x10) = pvVar12;
LAB_14558b458:
  lVar16 = *(longlong *)(param_1 + 0x40);
  uVar14 = 0;
  local_88 = lVar16;
  if (local_res20[0] != 0) {
    do {
      lVar8 = param_2[2];
      lVar16 = lVar8 + 1;
      uVar11 = param_2[1];
      if ((longlong)uVar11 < lVar16) goto LAB_14558b6b3;
      lVar9 = *param_2;
      bVar4 = *(byte *)(lVar8 + lVar9);
      param_2[2] = lVar16;
      lVar2 = lVar8 + 2;
      if ((longlong)uVar11 < lVar2) goto LAB_14558b6b3;
      bVar5 = *(byte *)(lVar16 + lVar9);
      param_2[2] = lVar2;
      lVar16 = lVar8 + 3;
      if ((longlong)uVar11 < lVar16) goto LAB_14558b6b3;
      bVar6 = *(byte *)(lVar2 + lVar9);
      param_2[2] = lVar16;
      if ((longlong)uVar11 < lVar8 + 4) goto LAB_14558b6b3;
      cVar7 = *(char *)(lVar16 + lVar9);
      param_2[2] = lVar8 + 4;
      if (((4 < bVar4) || (uVar11 = (ulonglong)(bVar5 - 1), 10 < (byte)(bVar5 - 1))) || (bVar6 == 0)
         ) goto LAB_14558b6b3;
      FUN_145411670(local_78);
      iVar10 = FUN_145411540(bVar5);
      uVar13 = 0;
      FUN_1454116a0(local_78,bVar4,0,bVar6,bVar5,cVar7 != '\0',(longlong)(int)(iVar10 * (uint)bVar6)
                    ,0);
      lVar16 = param_2[2];
      uVar11 = 0x103;
      if (CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x48),
                   *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x49)) < 0x103) {
        if (param_2[1] < lVar16 + 2) goto LAB_14558b6b3;
        local_res18[0] = (uint)*(ushort *)(lVar16 + *param_2);
        param_2[2] = lVar16 + 2;
      }
      else {
        if (param_2[1] < lVar16 + 1) goto LAB_14558b6b3;
        bVar4 = *(byte *)(lVar16 + *param_2);
        uVar17 = (uint)bVar4;
        param_2[2] = lVar16 + 1;
        if ((char)bVar4 < '\0') {
          uVar11 = FUN_14558b7d0(2,local_res18,param_2);
          if ((char)uVar11 == '\0') goto LAB_14558b6b3;
          local_res18[0] = uVar17 & 0x7f | local_res18[0] << 7;
        }
        else {
          local_res18[0] = (uint)bVar4;
        }
      }
      local_3c = local_res18[0];
      local_80 = FUN_14494321d(0x70);
      if (local_80 != 0) {
        uVar13 = FUN_14517d280(local_80,local_78);
      }
      lVar16 = local_88;
      local_98 = 0;
      local_90 = uVar13;
      iVar10 = FUN_144d7e2c0(local_88,&local_90);
      *(uint *)(*(longlong *)(*(longlong *)(lVar16 + 0x10) + (longlong)iVar10 * 8) + 0x3c) =
           local_res18[0];
      *(int *)(*plVar1 + uVar14 * 4) = iVar10;
      plVar3 = (longlong *)(param_1 + 0x20);
      pvVar12 = *(void **)(param_1 + 0x28);
      lVar16 = *plVar3;
      uVar11 = (longlong)pvVar12 - lVar16 >> 2;
      if ((int)uVar11 <= iVar10) {
        local_98 = CONCAT44(local_98._4_4_,0xffffffff);
        uVar15 = (ulonglong)(iVar10 + 1);
        if (uVar15 < uVar11) {
          *(ulonglong *)(param_1 + 0x28) = lVar16 + uVar15 * 4;
        }
        else if (uVar11 < uVar15) {
          if ((ulonglong)(*(longlong *)(param_1 + 0x30) - lVar16 >> 2) < uVar15) {
            FUN_146c96176(plVar3,uVar15,&local_98);
          }
          else {
            lVar16 = uVar15 - uVar11;
            if (lVar16 != 0) {
              memset(pvVar12,-1,lVar16 * 4);
              pvVar12 = (void *)((longlong)pvVar12 + lVar16 * 4);
            }
            *(void **)(param_1 + 0x28) = pvVar12;
          }
        }
      }
      lVar16 = *plVar3;
      *(int *)(lVar16 + (longlong)iVar10 * 4) = (int)uVar14;
      uVar17 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar17;
    } while (uVar17 < local_res20[0]);
  }
  return CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
}



// FUNCTION 14558b6d0 FUN_14558b6d0 body=3 status=ok
// SIG undefined FUN_14558b6d0(void)

undefined1 FUN_14558b6d0(void)

{
  return 1;
}



// FUNCTION 14558b6e0 FUN_14558b6e0 body=3 status=ok
// SIG undefined FUN_14558b6e0(void)

undefined1 FUN_14558b6e0(void)

{
  return 1;
}



// FUNCTION 14558b6f0 FUN_14558b6f0 body=210 status=ok
// SIG undefined FUN_14558b6f0(void)

longlong FUN_14558b6f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x30) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_14558b7bc;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x18) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_14558b7bc:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14558b7d0 FUN_14558b7d0 body=119 status=ok
// SIG undefined FUN_14558b7d0(void)

ulonglong FUN_14558b7d0(uint param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong in_RAX;
  
  if (param_1 < 6) {
    lVar1 = param_3[2] + 1;
    if (lVar1 <= param_3[1]) {
      lVar4 = *param_3;
      bVar2 = *(byte *)(param_3[2] + lVar4);
      param_3[2] = lVar1;
      if (-1 < (char)bVar2) {
        *param_2 = (uint)bVar2;
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
      in_RAX = FUN_14558b7d0(param_1 + 1,param_2);
      if ((char)in_RAX != '\0') {
        uVar3 = *param_2;
        *param_2 = bVar2 & 0x7f | uVar3 << 7;
        return CONCAT71((uint7)(uint3)((uVar3 << 7) >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14558b850 FUN_14558b850 body=35 status=ok
// SIG undefined FUN_14558b850(void)

undefined8 * FUN_14558b850(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = draco::SequentialAttributeDecoder::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 14558b880 FUN_14558b880 body=30 status=ok
// SIG undefined FUN_14558b880(void)

undefined8 FUN_14558b880(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  *(longlong *)(param_1 + 8) = param_2;
  uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x10) + (longlong)param_3 * 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(int *)(param_1 + 0x18) = param_3;
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}



// FUNCTION 14558b8a0 FUN_14558b8a0 body=14 status=ok
// SIG undefined FUN_14558b8a0(void)

undefined1 FUN_14558b8a0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return 1;
}



// FUNCTION 14558b8b0 FUN_14558b8b0 body=109 status=ok
// SIG undefined FUN_14558b8b0(void)

undefined8 FUN_14558b8b0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  if (*(char *)(param_1[2] + 0x18) != '\0') {
    cVar1 = FUN_14517d550(param_1[2],param_2[1] - *param_2 >> 2);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14558b920 FUN_14558b920 body=3 status=ok
// SIG undefined FUN_14558b920(void)

undefined1 FUN_14558b920(void)

{
  return 1;
}



// FUNCTION 14558b930 FUN_14558b930 body=3 status=ok
// SIG undefined FUN_14558b930(void)

undefined1 FUN_14558b930(void)

{
  return 1;
}



// FUNCTION 14558b940 FUN_14558b940 body=323 status=ok
// SIG undefined FUN_14558b940(void)

longlong FUN_14558b940(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  void *_Dst;
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar8 + 100) != '\0') {
    return *(longlong *)(param_1 + 0x20);
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 100) != '\0')) {
    lVar2 = *(longlong *)(lVar8 + 0x50);
    lVar8 = *(longlong *)(lVar8 + 0x48);
    *(undefined1 *)(lVar1 + 100) = 0;
    lVar3 = *(longlong *)(lVar1 + 0x48);
    _Dst = *(void **)(lVar1 + 0x50);
    uVar7 = lVar2 - lVar8 >> 2;
    uVar6 = (longlong)_Dst - lVar3 >> 2;
    if (uVar7 < uVar6) {
      *(ulonglong *)(lVar1 + 0x50) = lVar3 + uVar7 * 4;
    }
    else if (uVar6 < uVar7) {
      if ((ulonglong)(*(longlong *)(lVar1 + 0x58) - lVar3 >> 2) < uVar7) {
        FUN_144d801a0(lVar1 + 0x48,uVar7,&DAT_149dae8e4);
      }
      else {
        lVar8 = uVar7 - uVar6;
        if (lVar8 != 0) {
          memset(_Dst,-1,lVar8 * 4);
          _Dst = (void *)((longlong)_Dst + lVar8 * 4);
        }
        *(void **)(lVar1 + 0x50) = _Dst;
      }
    }
    uVar6 = 0;
    while( true ) {
      lVar8 = *(longlong *)(param_1 + 0x10);
      if (*(char *)(lVar8 + 100) == '\0') {
        uVar5 = (uint)(*(longlong *)(lVar8 + 0x50) - *(longlong *)(lVar8 + 0x48) >> 2);
      }
      else {
        uVar5 = 0;
      }
      uVar4 = (uint)uVar6;
      if (uVar5 <= uVar4) break;
      lVar1 = uVar6 * 4;
      if (*(char *)(lVar8 + 100) == '\0') {
        uVar6 = (ulonglong)(uVar4 + 1);
        *(undefined4 *)(lVar1 + *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x48)) =
             *(undefined4 *)(lVar1 + *(longlong *)(lVar8 + 0x48));
      }
      else {
        *(uint *)(lVar1 + *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x48)) = uVar4;
        uVar6 = (ulonglong)(uVar4 + 1);
      }
    }
    return *(longlong *)(param_1 + 0x20);
  }
  return lVar1;
}



// FUNCTION 14558ba90 FUN_14558ba90 body=239 status=ok
// SIG undefined FUN_14558ba90(void)

undefined8 FUN_14558ba90(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar3 = (**(code **)(*param_2 + 0x20))(param_2);
  if (0 < iVar3) {
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
      uVar4 = (**(code **)(*param_2 + 0x28))(param_2,iVar6);
      iVar3 = FUN_144d7e240(uVar1,uVar4);
      if (iVar3 == -1) {
        return 0;
      }
      lVar5 = *(longlong *)(param_1 + 8);
      if (CONCAT11(*(undefined1 *)(lVar5 + 0x48),*(undefined1 *)(lVar5 + 0x49)) < 0x200) {
        cVar2 = (**(code **)(*param_2 + 0x30))
                          (param_2,*(undefined8 *)
                                    (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) +
                                    (longlong)iVar3 * 8));
      }
      else {
        lVar5 = FUN_14517b370(lVar5,iVar3);
        if (lVar5 == 0) {
          return 0;
        }
        cVar2 = (**(code **)(*param_2 + 0x30))(param_2,lVar5);
      }
      if (cVar2 == '\0') {
        return 0;
      }
      iVar6 = iVar6 + 1;
      iVar3 = (**(code **)(*param_2 + 0x20))(param_2);
    } while (iVar6 < iVar3);
  }
  return 1;
}



// FUNCTION 14558bb80 FUN_14558bb80 body=205 status=ok
// SIG undefined FUN_14558bb80(void)

undefined8 FUN_14558bb80(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  undefined8 uVar5;
  size_t _Size;
  int iVar6;
  int iVar7;
  
  lVar2 = param_2[1];
  lVar3 = *param_2;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x28);
  _Size = (size_t)iVar1;
  _Dst = (void *)FUN_144a7d36f(_Size);
  iVar4 = 0;
  iVar6 = 0;
  iVar7 = (int)(lVar2 - lVar3 >> 2);
  if (0 < iVar7) {
    do {
      if (param_3[1] < (longlong)(param_3[2] + _Size)) {
        uVar5 = 0;
        goto LAB_14558bc1a;
      }
      memcpy(_Dst,(void *)(*param_3 + param_3[2]),_Size);
      param_3[2] = param_3[2] + _Size;
      memcpy((void *)((longlong)iVar4 + **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40)),_Dst,
             _Size);
      iVar4 = iVar4 + iVar1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  uVar5 = 1;
LAB_14558bc1a:
  if (_Dst != (void *)0x0) {
    thunk_FUN_1400020a8(_Dst);
  }
  return uVar5;
}



// FUNCTION 14558bc50 FUN_14558bc50 body=88 status=ok
// SIG undefined FUN_14558bc50(void)

longlong FUN_14558bc50(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_144d7df00(lVar1);
    thunk_FUN_1400020a8(lVar1,0x70);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14558bcb0 FUN_14558bcb0 body=41 status=ok
// SIG undefined FUN_14558bcb0(void)

undefined8 * FUN_14558bcb0(undefined8 *param_1)

{
  FUN_14558b850();
  *param_1 = draco::SequentialIntegerAttributeDecoder::vftable;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 14558bce0 FUN_14558bce0 body=19 status=ok
// SIG undefined FUN_14558bce0(void)

bool FUN_14558bce0(void)

{
  char cVar1;
  
  cVar1 = FUN_14558b880();
  return cVar1 != '\0';
}



// FUNCTION 14558bd00 FUN_14558bd00 body=67 status=ok
// SIG undefined FUN_14558bd00(void)

undefined8 FUN_14558bd00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[1];
  if ((lVar1 != 0) &&
     (CONCAT11(*(undefined1 *)(lVar1 + 0x48),*(undefined1 *)(lVar1 + 0x49)) < 0x200)) {
    return 0x201;
  }
                    /* WARNING: Could not recover jumptable at 0x00014558bd3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1,param_2[1] - *param_2 >> 2 & 0xffffffff);
  return uVar2;
}



// FUNCTION 14558bd50 FUN_14558bd50 body=328 status=ok
// SIG undefined FUN_14558bd50(void)

bool FUN_14558bd50(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *local_res18 [2];
  
  lVar4 = param_3[2];
  lVar1 = lVar4 + 1;
  if (param_3[1] < lVar1) {
    return false;
  }
  cVar6 = *(char *)(*param_3 + lVar4);
  param_3[2] = lVar1;
  if (cVar6 != -2) {
    if (param_3[1] < lVar4 + 2) {
      return false;
    }
    cVar3 = *(char *)(*param_3 + lVar1);
    param_3[2] = lVar4 + 2;
    if (4 < (byte)(cVar3 + 1U)) {
      return false;
    }
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1,local_res18,(int)cVar6,(int)cVar3);
    plVar2 = param_1 + 5;
    if (plVar2 != plVar7) {
      lVar1 = *plVar7;
      *plVar7 = 0;
      puVar5 = (undefined8 *)*plVar2;
      *plVar2 = lVar1;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    if (local_res18[0] != (undefined8 *)0x0) {
      (**(code **)*local_res18[0])(local_res18[0],1);
    }
  }
  if ((param_1[5] != 0) && (cVar6 = (**(code **)(*param_1 + 0x30))(param_1), cVar6 == '\0')) {
    return false;
  }
  cVar6 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
  if (cVar6 == '\0') {
    return false;
  }
  lVar1 = param_1[1];
  if ((lVar1 != 0) &&
     (CONCAT11(*(undefined1 *)(lVar1 + 0x48),*(undefined1 *)(lVar1 + 0x49)) < 0x200)) {
    cVar6 = (**(code **)(*param_1 + 0x58))(param_1,param_2[1] - *param_2 >> 2);
    return cVar6 != '\0';
  }
  return true;
}



// FUNCTION 14558bea0 FUN_14558bea0 body=751 status=ok
// SIG undefined FUN_14558bea0(void)

bool FUN_14558bea0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  void *pvVar14;
  ulonglong uVar15;
  void *_Dst;
  ulonglong uVar16;
  ulonglong in_stack_ffffffffffffff60;
  ulonglong local_88 [2];
  undefined1 local_78 [64];
  
  iVar8 = (**(code **)(*param_1 + 0x50))();
  if (iVar8 < 1) {
    return false;
  }
  lVar13 = param_2[1] - *param_2 >> 2;
  uVar15 = iVar8 * lVar13;
  FUN_145411670(local_78);
  uVar3 = *(undefined4 *)(param_1[2] + 0x38);
  iVar9 = FUN_145411540(5);
  uVar16 = 0;
  FUN_1454116a0(local_78,uVar3,0,(longlong)iVar8 & 0xff,5,
                in_stack_ffffffffffffff60 & 0xffffffffffffff00,(longlong)(iVar9 * iVar8),0);
  lVar11 = FUN_14494321d(0x70);
  uVar12 = uVar16;
  if (lVar11 != 0) {
    uVar12 = FUN_14517d280(lVar11,local_78);
  }
  *(undefined1 *)(uVar12 + 100) = 1;
  if (*(longlong *)(uVar12 + 0x48) != *(longlong *)(uVar12 + 0x50)) {
    *(longlong *)(uVar12 + 0x50) = *(longlong *)(uVar12 + 0x48);
  }
  FUN_14517d550(uVar12,(longlong)(int)lVar13);
  *(undefined4 *)(uVar12 + 0x3c) = *(undefined4 *)(param_1[2] + 0x3c);
  puVar1 = (ulonglong *)(param_1 + 4);
  if (puVar1 == local_88) {
    if (uVar12 != 0) {
      FUN_144d7df00(uVar12);
      goto LAB_14558bfca;
    }
  }
  else {
    uVar4 = *puVar1;
    *puVar1 = uVar12;
    if (uVar4 != 0) {
      FUN_144d7df00(uVar4);
      uVar12 = uVar4;
LAB_14558bfca:
      thunk_FUN_1400020a8(uVar12,0x70);
    }
  }
  puVar5 = (undefined8 *)*puVar1;
  if (*(int *)(puVar5 + 0xc) == 0) {
    return false;
  }
  pvVar14 = (void *)(puVar5[6] + *(longlong *)*puVar5);
  if (pvVar14 == (void *)0x0) {
    return false;
  }
  lVar13 = param_3[2];
  lVar11 = lVar13 + 1;
  if (param_3[1] < lVar11) {
    return false;
  }
  cVar7 = *(char *)(*param_3 + lVar13);
  param_3[2] = lVar11;
  if (cVar7 == '\0') {
    if (param_3[1] < lVar13 + 2) {
      return false;
    }
    bVar2 = *(byte *)(*param_3 + lVar11);
    uVar12 = (ulonglong)bVar2;
    param_3[2] = lVar13 + 2;
    uVar10 = FUN_145411540(5);
    plVar6 = *(longlong **)(*puVar1 + 0x40);
    if (bVar2 == uVar10) {
      if ((ulonglong)(plVar6[1] - *plVar6) < uVar15 * 4) {
        return false;
      }
      cVar7 = FUN_1453f4f90(param_3,pvVar14);
      goto LAB_14558c02c;
    }
    if ((ulonglong)(plVar6[1] - *plVar6) < uVar12 * uVar15) {
      return false;
    }
    lVar11 = param_3[1];
    lVar13 = param_3[2];
    if (lVar11 - lVar13 < (longlong)(uVar12 * uVar15)) {
      return false;
    }
    _Dst = pvVar14;
    if (uVar15 == 0) goto LAB_14558c05a;
    do {
      if (lVar11 < (longlong)(uVar12 + lVar13)) {
        return false;
      }
      memcpy(_Dst,(void *)(*param_3 + lVar13),uVar12);
      lVar13 = param_3[2] + uVar12;
      param_3[2] = lVar13;
      lVar11 = param_3[1];
      uVar16 = uVar16 + 1;
      _Dst = (void *)((longlong)_Dst + 4);
    } while (uVar16 < uVar15);
  }
  else {
    cVar7 = FUN_14540a820(uVar15 & 0xffffffff,iVar8,param_3,pvVar14);
LAB_14558c02c:
    if (cVar7 == '\0') {
      return false;
    }
    if (uVar15 == 0) goto LAB_14558c05a;
  }
  if (((longlong *)param_1[5] == (longlong *)0x0) ||
     (cVar7 = (**(code **)(*(longlong *)param_1[5] + 0x38))(), cVar7 == '\0')) {
    FUN_1455feed0(pvVar14,uVar15 & 0xffffffff,pvVar14);
  }
LAB_14558c05a:
  plVar6 = (longlong *)param_1[5];
  if (plVar6 != (longlong *)0x0) {
    cVar7 = (**(code **)(*plVar6 + 0x48))(plVar6,param_3);
    if (cVar7 == '\0') {
      return false;
    }
    if (uVar15 != 0) {
      cVar7 = (**(code **)(*(longlong *)param_1[5] + 0x50))
                        ((longlong *)param_1[5],pvVar14,pvVar14,uVar15 & 0xffffffff,iVar8,*param_2);
      return cVar7 != '\0';
    }
  }
  return true;
}



// FUNCTION 14558c190 FUN_14558c190 body=209 status=ok
// SIG undefined FUN_14558c190(void)

undefined8 * FUN_14558c190(longlong param_1,undefined8 *param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 uStack_18;
  longlong local_10;
  
  if (param_4 == 1) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    local_10 = 0;
    puVar2 = (undefined8 *)
             FUN_14558cf20(&local_40,param_3,*(undefined4 *)(param_1 + 0x18),
                           *(undefined8 *)(param_1 + 8),&local_38);
    uVar1 = *puVar2;
    *puVar2 = 0;
    if (local_40 != (undefined8 *)0x0) {
      (**(code **)*local_40)(local_40,1);
    }
    if (local_20 != 0) {
      uVar4 = local_10 - local_20 & 0xfffffffffffffffc;
      lVar3 = local_20;
      if (0xfff < uVar4) {
        uVar4 = uVar4 + 0x27;
        lVar3 = *(longlong *)(local_20 + -8);
        if (0x1f < (local_20 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar3,uVar4);
    }
    *param_2 = uVar1;
  }
  else {
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 14558c270 FUN_14558c270 body=9 status=ok
// SIG undefined FUN_14558c270(void)

undefined1 FUN_14558c270(longlong param_1)

{
  return *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x18);
}



// FUNCTION 14558c280 FUN_14558c280 body=1017 status=ok
// SIG undefined FUN_14558c280(void)

undefined8 FUN_14558c280(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  uVar5 = (ulonglong)param_2;
  lVar7 = *(longlong *)(param_1 + 0x10);
  switch(*(undefined4 *)(lVar7 + 0x1c)) {
  case 1:
    bVar2 = *(byte *)(lVar7 + 0x18);
    _Src = (void *)FUN_144a7d36f();
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    if (*(int *)(puVar3 + 0xc) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = puVar3[6] + *(longlong *)*puVar3;
    }
    iVar8 = 0;
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        lVar4 = 0;
        if (bVar2 != 0) {
          do {
            lVar1 = lVar6 * 4;
            lVar6 = lVar6 + 1;
            *(undefined1 *)(lVar4 + (longlong)_Src) = *(undefined1 *)(lVar7 + lVar1);
            lVar4 = lVar4 + 1;
          } while (lVar4 < (longlong)(ulonglong)bVar2);
        }
        memcpy((void *)((longlong)iVar8 + **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40)),
               _Src,(ulonglong)bVar2);
        iVar8 = iVar8 + (uint)bVar2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    break;
  case 2:
    bVar2 = *(byte *)(lVar7 + 0x18);
    _Src = (void *)FUN_144a7d36f();
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    if (*(int *)(puVar3 + 0xc) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = puVar3[6] + *(longlong *)*puVar3;
    }
    iVar8 = 0;
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        lVar4 = 0;
        if (bVar2 != 0) {
          do {
            lVar1 = lVar6 * 4;
            lVar6 = lVar6 + 1;
            *(undefined1 *)(lVar4 + (longlong)_Src) = *(undefined1 *)(lVar7 + lVar1);
            lVar4 = lVar4 + 1;
          } while (lVar4 < (longlong)(ulonglong)bVar2);
        }
        memcpy((void *)((longlong)iVar8 + **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40)),
               _Src,(ulonglong)bVar2);
        iVar8 = iVar8 + (uint)bVar2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    break;
  case 3:
    bVar2 = *(byte *)(lVar7 + 0x18);
    _Src = (void *)FUN_144a7d36f();
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    if (*(int *)(puVar3 + 0xc) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = puVar3[6] + *(longlong *)*puVar3;
    }
    iVar8 = 0;
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        lVar4 = 0;
        if ((ulonglong)bVar2 != 0) {
          do {
            lVar1 = lVar6 * 4;
            lVar6 = lVar6 + 1;
            *(undefined2 *)((longlong)_Src + lVar4 * 2) = *(undefined2 *)(lVar7 + lVar1);
            lVar4 = lVar4 + 1;
          } while (lVar4 < (longlong)(ulonglong)bVar2);
        }
        memcpy((void *)((longlong)iVar8 + **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40)),
               _Src,(ulonglong)((uint)bVar2 + (uint)bVar2));
        iVar8 = iVar8 + (uint)bVar2 + (uint)bVar2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    break;
  case 4:
    bVar2 = *(byte *)(lVar7 + 0x18);
    _Src = (void *)FUN_144a7d36f();
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    if (*(int *)(puVar3 + 0xc) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = puVar3[6] + *(longlong *)*puVar3;
    }
    iVar8 = 0;
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        lVar4 = 0;
        if ((ulonglong)bVar2 != 0) {
          do {
            lVar1 = lVar6 * 4;
            lVar6 = lVar6 + 1;
            *(undefined2 *)((longlong)_Src + lVar4 * 2) = *(undefined2 *)(lVar7 + lVar1);
            lVar4 = lVar4 + 1;
          } while (lVar4 < (longlong)(ulonglong)bVar2);
        }
        memcpy((void *)((longlong)iVar8 + **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40)),
               _Src,(ulonglong)((uint)bVar2 + (uint)bVar2));
        iVar8 = iVar8 + (uint)bVar2 + (uint)bVar2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    break;
  case 5:
    bVar2 = *(byte *)(lVar7 + 0x18);
    _Src = (void *)FUN_144a7d36f();
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    if (*(int *)(puVar3 + 0xc) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = puVar3[6] + *(longlong *)*puVar3;
    }
    iVar8 = 0;
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        lVar4 = 0;
        if ((ulonglong)bVar2 != 0) {
          do {
            lVar1 = lVar6 * 4;
            lVar6 = lVar6 + 1;
            *(undefined4 *)((longlong)_Src + lVar4 * 4) = *(undefined4 *)(lVar7 + lVar1);
            lVar4 = lVar4 + 1;
          } while (lVar4 < (longlong)(ulonglong)bVar2);
        }
        memcpy((void *)((longlong)iVar8 + **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40)),
               _Src,(ulonglong)((uint)bVar2 * 4));
        iVar8 = iVar8 + (uint)bVar2 * 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    break;
  case 6:
    bVar2 = *(byte *)(lVar7 + 0x18);
    _Src = (void *)FUN_144a7d36f();
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    if (*(int *)(puVar3 + 0xc) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = puVar3[6] + *(longlong *)*puVar3;
    }
    iVar8 = 0;
    if (param_2 != 0) {
      lVar6 = 0;
      do {
        lVar4 = 0;
        if ((ulonglong)bVar2 != 0) {
          do {
            lVar1 = lVar6 * 4;
            lVar6 = lVar6 + 1;
            *(undefined4 *)((longlong)_Src + lVar4 * 4) = *(undefined4 *)(lVar7 + lVar1);
            lVar4 = lVar4 + 1;
          } while (lVar4 < (longlong)(ulonglong)bVar2);
        }
        memcpy((void *)((longlong)iVar8 + **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40)),
               _Src,(ulonglong)((uint)bVar2 * 4));
        iVar8 = iVar8 + (uint)bVar2 * 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    break;
  default:
    return 0;
  }
  if (_Src != (void *)0x0) {
    thunk_FUN_1400020a8(_Src);
  }
  return 1;
}



// FUNCTION 14558c6a0 FUN_14558c6a0 body=107 status=ok
// SIG undefined FUN_14558c6a0(void)

longlong FUN_14558c6a0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_144d7df00(lVar2);
    thunk_FUN_1400020a8(lVar2,0x70);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14558c710 FUN_14558c710 body=78 status=ok
// SIG undefined FUN_14558c710(void)

ulonglong FUN_14558c710(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
    uVar2 = 1;
    for (uVar1 = param_1; 1 < uVar1; uVar1 = uVar1 >> 2) {
      uVar2 = uVar2 * 2;
    }
    do {
      uVar2 = uVar2 + param_1 / uVar2 >> 1;
    } while (param_1 <= uVar2 * uVar2 && uVar2 * uVar2 - param_1 != 0);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14558c780 FUN_14558c780 body=125 status=ok
// SIG undefined FUN_14558c780(void)

longlong * FUN_14558c780(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar2 = param_1[3];
  lVar3 = *param_1;
  if (((longlong)uVar2 < 0) && (uVar2 != 0)) {
    lVar1 = -((~uVar2 >> 5) * 4 + 4);
  }
  else {
    lVar1 = (uVar2 >> 5) * 4;
  }
  uVar4 = (ulonglong)((uint)uVar2 & 0x1f);
  uVar2 = uVar4 - 1;
  if (uVar4 == 0) {
    *param_2 = lVar3 + lVar1 + -4;
    param_2[1] = 0x1f;
    return param_2;
  }
  param_2[1] = (ulonglong)((uint)uVar2 & 0x1f);
  *param_2 = lVar3 + lVar1 + (uVar2 >> 5) * 4;
  return param_2;
}



// FUNCTION 14558c800 FUN_14558c800 body=157 status=ok
// SIG undefined FUN_14558c800(void)

void FUN_14558c800(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong local_28;
  ulonglong uStack_20;
  undefined1 local_18 [24];
  
  uVar2 = param_1[3];
  if (((longlong)uVar2 < 0) && (uVar2 != 0)) {
    lVar1 = -((~uVar2 >> 5) * 4 + 4);
  }
  else {
    lVar1 = (uVar2 >> 5) * 4;
  }
  uVar3 = (ulonglong)((uint)uVar2 & 0x1f);
  uVar2 = uVar3 - 1;
  if (uVar3 == 0) {
    local_28 = -4;
  }
  else {
    local_28 = (uVar2 >> 5) * 4;
  }
  local_28 = *param_1 + lVar1 + local_28;
  uStack_20 = (ulonglong)((uint)uVar2 & 0x1f);
  FUN_14558c8a0(param_1,local_18,&local_28);
  return;
}



// FUNCTION 14558c8a0 FUN_14558c8a0 body=421 status=ok
// SIG undefined FUN_14558c8a0(void)

undefined8 FUN_14558c8a0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint *local_28;
  ulonglong uStack_20;
  uint *local_18;
  ulonglong uStack_10;
  
  puVar2 = (uint *)*param_1;
  uVar6 = 0;
  uVar3 = param_1[3];
  puVar7 = puVar2;
  if (uVar3 != 0) {
    uVar6 = (*param_3 - (longlong)puVar2 >> 2) * 0x20 + param_3[1];
    if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
      lVar5 = -((~uVar6 >> 5) * 4 + 4);
    }
    else {
      lVar5 = (uVar6 >> 5) * 4;
    }
    puVar7 = (uint *)((longlong)puVar2 + lVar5);
    uVar6 = (ulonglong)((uint)uVar6 & 0x1f);
  }
  lVar5 = ((longlong)puVar7 - (longlong)puVar2 >> 2) * 0x20 + uVar6;
  if (((longlong)uVar3 < 0) && (uVar3 != 0)) {
    lVar1 = -((~uVar3 >> 5) * 4 + 4);
  }
  else {
    lVar1 = (uVar3 >> 5) * 4;
  }
  if (uVar6 < 0x1f) {
    uStack_20 = uVar6 + 1;
    local_28 = puVar7;
  }
  else {
    uStack_20 = 0;
    local_28 = puVar7 + 1;
  }
  local_18 = local_28;
  uStack_10 = uStack_20;
  while ((local_28 != (uint *)((longlong)puVar2 + lVar1) || (uStack_20 != ((uint)uVar3 & 0x1f)))) {
    if ((*local_28 & 1 << ((byte)uStack_20 & 0x1f)) == 0) {
      uVar4 = *puVar7 & ~(1 << ((uint)uVar6 & 0x1f));
    }
    else {
      uVar4 = *puVar7 | 1 << ((uint)uVar6 & 0x1f);
    }
    *puVar7 = uVar4;
    if (uVar6 < 0x1f) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar6 = 0;
      puVar7 = puVar7 + 1;
    }
    if (uStack_20 < 0x1f) {
      uStack_20 = uStack_20 + 1;
    }
    else {
      uStack_20 = 0;
      local_28 = local_28 + 1;
    }
  }
  FUN_148276c38(param_1,param_1[3] + -1);
  local_18 = (uint *)*param_1;
  uStack_10 = 0;
  FUN_145407110(&local_18,param_2,lVar5);
  return param_2;
}



// FUNCTION 14558ca50 FUN_14558ca50 body=152 status=ok
// SIG undefined FUN_14558ca50(void)

uint * FUN_14558ca50(longlong *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 != 0xffffffff) {
    uVar1 = param_3 - 1;
    if (param_3 == (param_3 / 3) * 3) {
      uVar1 = param_3 + 2;
    }
    if ((uVar1 != 0xffffffff) &&
       ((*(uint *)(*param_1 + (ulonglong)(uVar1 >> 5) * 4) >> ((byte)uVar1 & 0x1f) & 1) == 0)) {
      uVar1 = *(uint *)(*(longlong *)(param_1[0x12] + 0x18) + (ulonglong)uVar1 * 4);
      if (uVar1 != 0xffffffff) {
        if (uVar1 != (uVar1 / 3) * 3) {
          *param_2 = uVar1 - 1;
          return param_2;
        }
        *param_2 = uVar1 + 2;
        return param_2;
      }
      goto LAB_14558cae1;
    }
  }
  uVar1 = 0xffffffff;
LAB_14558cae1:
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 14558caf0 FUN_14558caf0 body=149 status=ok
// SIG undefined FUN_14558caf0(void)

void FUN_14558caf0(int *param_1,int param_2)

{
  size_t _Size;
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_res10 [8];
  
  *param_1 = param_2;
  pvVar2 = *(void **)(param_1 + 8);
  uVar4 = (ulonglong)param_2;
  lVar1 = *(longlong *)(param_1 + 6);
  uVar3 = (longlong)pvVar2 - lVar1 >> 2;
  if (uVar4 < uVar3) {
    pvVar2 = (void *)(lVar1 + uVar4 * 4);
  }
  else {
    if (uVar4 <= uVar3) {
      return;
    }
    if ((ulonglong)(*(longlong *)(param_1 + 10) - lVar1 >> 2) < uVar4) {
      FUN_146c960b8(param_1 + 6,uVar4,local_res10);
      return;
    }
    _Size = (uVar4 - uVar3) * 4;
    memset(pvVar2,0,_Size);
    pvVar2 = (void *)(_Size + (longlong)pvVar2);
  }
  *(void **)(param_1 + 8) = pvVar2;
  return;
}



// FUNCTION 14558cb90 FUN_14558cb90 body=184 status=ok
// SIG undefined FUN_14558cb90(void)

void FUN_14558cb90(int *param_1,longlong param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar2 = 0;
  if (0 < *param_1) {
    lVar4 = 0;
    do {
      iVar3 = *(int *)(lVar4 + param_2);
      if (param_1[2] < iVar3) {
        *(int *)(lVar4 + *(longlong *)(param_1 + 6)) = param_1[2];
      }
      else {
        if (iVar3 < param_1[1]) {
          iVar3 = param_1[1];
        }
        *(int *)(lVar4 + *(longlong *)(param_1 + 6)) = iVar3;
      }
      iVar2 = iVar2 + 1;
      lVar4 = lVar4 + 4;
    } while (iVar2 < *param_1);
    lVar4 = *(longlong *)(param_1 + 6);
    if (0 < *param_1) {
      lVar5 = lVar4 - (longlong)param_4;
      do {
        piVar1 = (int *)(lVar5 + (longlong)param_4);
        iVar2 = *(int *)((longlong)piVar1 + (param_3 - lVar4)) + *piVar1;
        *param_4 = iVar2;
        if (param_1[2] < iVar2) {
          *param_4 = iVar2 - param_1[3];
        }
        else if (iVar2 < param_1[1]) {
          *param_4 = param_1[3] + iVar2;
        }
        iVar6 = iVar6 + 1;
        param_4 = param_4 + 1;
      } while (iVar6 < *param_1);
    }
  }
  return;
}



// FUNCTION 14558cc50 FUN_14558cc50 body=122 status=ok
// SIG undefined FUN_14558cc50(void)

ulonglong FUN_14558cc50(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  
  lVar2 = param_2[2];
  uVar4 = lVar2 + 4;
  if ((longlong)uVar4 <= param_2[1]) {
    iVar3 = *(int *)(*param_2 + lVar2);
    param_2[2] = uVar4;
    if (lVar2 + 8 <= param_2[1]) {
      iVar1 = *(int *)(*param_2 + uVar4);
      uVar4 = (ulonglong)iVar1;
      param_2[2] = lVar2 + 8;
      if (iVar3 <= iVar1) {
        *(int *)(param_1 + 4) = iVar3;
        *(int *)(param_1 + 8) = iVar1;
        if (uVar4 - (longlong)iVar3 < 0x7fffffff) {
          uVar5 = (int)(uVar4 - (longlong)iVar3) + 1;
          *(uint *)(param_1 + 0xc) = uVar5;
          iVar3 = (int)uVar5 / 2;
          *(int *)(param_1 + 0x10) = iVar3;
          *(int *)(param_1 + 0x14) = -iVar3;
          if ((uVar5 & 1) == 0) {
            iVar3 = iVar3 + -1;
            *(int *)(param_1 + 0x10) = iVar3;
          }
          return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
        }
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14558ccd0 ~pair<> body=93 status=ok
// SIG undefined ~pair<>(void)

/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::pair<unsigned long const ,class std::vector<struct CHN * __ptr64,class
   std::allocator<struct CHN * __ptr64> > >::~pair<unsigned long const ,class std::vector<struct CHN
   * __ptr64,class std::allocator<struct CHN * __ptr64> > >(void) __ptr64
    public: __cdecl std::pair<unsigned long,class std::vector<struct CHN * __ptr64,class
   std::allocator<struct CHN * __ptr64> > >::~pair<unsigned long,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void ~pair<>(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x28) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14558cd30 FUN_14558cd30 body=228 status=ok
// SIG undefined FUN_14558cd30(void)

undefined8 * FUN_14558cd30(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  void *_Dst;
  longlong lVar2;
  ulonglong uVar3;
  size_t _Size;
  
  param_1[1] = param_2;
  *param_1 = draco::
             PredictionSchemeDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>_>::
             vftable;
  plVar1 = param_1 + 5;
  *(undefined4 *)(param_1 + 2) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3[1];
  *(undefined4 *)(param_1 + 3) = param_3[2];
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_3[3];
  *(undefined4 *)(param_1 + 4) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3[5];
  *plVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar3 = *(longlong *)(param_3 + 8) - *(longlong *)(param_3 + 6) >> 2;
  if (uVar3 != 0) {
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_14694aefc();
    }
    lVar2 = FUN_14627a224(plVar1,uVar3);
    *plVar1 = lVar2;
    param_1[6] = lVar2;
    param_1[7] = lVar2 + uVar3 * 4;
    _Dst = (void *)*plVar1;
    _Size = *(longlong *)(param_3 + 8) - (longlong)*(void **)(param_3 + 6);
    memmove(_Dst,*(void **)(param_3 + 6),_Size);
    param_1[6] = (void *)((longlong)_Dst + ((longlong)_Size >> 2) * 4);
  }
  return param_1;
}



// FUNCTION 14558ce20 FUN_14558ce20 body=23 status=ok
// SIG undefined FUN_14558ce20(void)

bool FUN_14558ce20(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14558cc50(param_1 + 0x10);
  return cVar1 != '\0';
}



// FUNCTION 14558ce40 FUN_14558ce40 body=5 status=ok
// SIG undefined FUN_14558ce40(void)

undefined8 FUN_14558ce40(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 14558ce50 FUN_14558ce50 body=3 status=ok
// SIG undefined FUN_14558ce50(void)

undefined8 FUN_14558ce50(void)

{
  return 0;
}



// FUNCTION 14558ce60 FUN_14558ce60 body=6 status=ok
// SIG undefined FUN_14558ce60(void)

undefined8 FUN_14558ce60(void)

{
  return 0xffffffff;
}



// FUNCTION 14558ce70 FUN_14558ce70 body=3 status=ok
// SIG undefined FUN_14558ce70(void)

undefined1 FUN_14558ce70(void)

{
  return 0;
}



// FUNCTION 14558ce80 FUN_14558ce80 body=3 status=ok
// SIG undefined FUN_14558ce80(void)

undefined1 FUN_14558ce80(void)

{
  return 0;
}



// FUNCTION 14558ce90 FUN_14558ce90 body=6 status=ok
// SIG undefined FUN_14558ce90(void)

undefined8 FUN_14558ce90(void)

{
  return 1;
}



// FUNCTION 14558cea0 FID_conflict:`scalar_deleting_destructor' body=126 status=ok
// SIG undefined FID_conflict:`scalar_deleting_destructor'(void)

/* Library Function - Multiple Matches With Different Base Names
    public: void * __ptr64 __cdecl std::pair<unsigned long const ,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
    public: void * __ptr64 __cdecl std::pair<unsigned long,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
   
   Library: Visual Studio 2019 Release */

longlong FID_conflict__scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14558cf20 FUN_14558cf20 body=511 status=ok
// SIG undefined FUN_14558cf20(void)

undefined8 *
FUN_14558cf20(undefined8 *param_1,int param_2,int param_3,longlong *param_4,undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_res10 [8];
  undefined8 *local_58;
  undefined8 *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  if (param_2 == -2) {
    *param_1 = 0;
    return param_1;
  }
  uVar2 = *(undefined8 *)((longlong)param_3 * 8 + *(longlong *)(param_4[1] + 0x10));
  iVar4 = (**(code **)(*param_4 + 8))(param_4);
  if (iVar4 == 1) {
    lVar3 = param_4[9];
    uVar1 = *(undefined1 *)((longlong)param_4 + 0x49);
    local_58 = *(undefined8 **)((longlong)param_3 * 8 + *(longlong *)(param_4[1] + 0x10));
    iVar4 = (**(code **)(*param_4 + 8))(param_4);
    if ((iVar4 == 1) && (param_2 - 1U < 6)) {
      lVar5 = (**(code **)(*param_4 + 0x40))(param_4);
      lVar6 = (**(code **)(*param_4 + 0x50))(param_4,param_3);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        local_40 = (**(code **)(*param_4 + 0x48))(param_4,param_3);
        local_38 = lVar6 + 0x18;
        local_48 = param_4[0xb];
        local_30 = lVar6;
        if (local_40 == 0) {
          local_40 = lVar5;
          puVar7 = (undefined8 *)
                   FUN_14558d740(local_res10,&local_50,param_2,local_58,param_5,&local_48,
                                 CONCAT11((char)lVar3,uVar1));
          puVar8 = (undefined8 *)*puVar7;
          *puVar7 = 0;
          if (local_50 != (undefined8 *)0x0) {
            (**(code **)*local_50)(local_50,1);
          }
        }
        else {
          puVar7 = (undefined8 *)
                   FUN_14558d3a0(local_res10,&local_58,param_2,local_58,param_5,&local_48);
          puVar8 = (undefined8 *)*puVar7;
          *puVar7 = 0;
          if (local_58 != (undefined8 *)0x0) {
            (**(code **)*local_58)(local_58,1);
          }
        }
        if (puVar8 != (undefined8 *)0x0) goto LAB_14558d0f8;
      }
    }
  }
  puVar8 = (undefined8 *)FUN_14494321d(0x40);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    local_50 = puVar8;
    FUN_14558cd30(puVar8,uVar2,param_5);
    *puVar8 = draco::
              PredictionSchemeDeltaDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>_>
              ::vftable;
  }
LAB_14558d0f8:
  *param_1 = puVar8;
  return param_1;
}



// FUNCTION 14558d130 FUN_14558d130 body=456 status=ok
// SIG undefined FUN_14558d130(void)

undefined8 FUN_14558d130(longlong param_1,longlong param_2,int *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  size_t _Size;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int *piVar8;
  int iVar9;
  void *local_res8;
  
  piVar1 = (int *)(param_1 + 0x10);
  uVar7 = (ulonglong)param_5;
  FUN_14558caf0(piVar1,param_5);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar7;
  _Size = SUB168(ZEXT816(4) * auVar3,0);
  if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
    _Size = 0xffffffffffffffff;
  }
  local_res8 = (void *)FUN_144a7d36f(_Size);
  if (local_res8 == (void *)0x0) {
    local_res8 = (void *)0x0;
  }
  else {
    memset(local_res8,0,_Size);
  }
  FUN_14558cb90(piVar1,local_res8,param_2);
  if ((longlong)uVar7 < (longlong)param_4) {
    param_2 = param_2 - (longlong)param_3;
    uVar6 = uVar7;
    do {
      param_3 = param_3 + uVar7;
      iVar9 = 0;
      iVar4 = *piVar1;
      if (0 < iVar4) {
        lVar5 = 0;
        do {
          iVar4 = *(int *)((longlong)param_3 + lVar5 + uVar7 * -4);
          if (*(int *)(param_1 + 0x18) < iVar4) {
            *(int *)(lVar5 + *(longlong *)(param_1 + 0x28)) = *(int *)(param_1 + 0x18);
          }
          else {
            if (iVar4 < *(int *)(param_1 + 0x14)) {
              iVar4 = *(int *)(param_1 + 0x14);
            }
            *(int *)(lVar5 + *(longlong *)(param_1 + 0x28)) = iVar4;
          }
          iVar4 = *piVar1;
          iVar9 = iVar9 + 1;
          lVar5 = lVar5 + 4;
        } while (iVar9 < iVar4);
      }
      lVar5 = *(longlong *)(param_1 + 0x28);
      iVar9 = 0;
      if (0 < iVar4) {
        piVar8 = param_3;
        do {
          piVar2 = (int *)((lVar5 - (longlong)param_3) + (longlong)piVar8);
          iVar4 = *(int *)((param_2 - lVar5) + (longlong)param_3 + (longlong)piVar2) + *piVar2;
          *piVar8 = iVar4;
          if (*(int *)(param_1 + 0x18) < iVar4) {
            *piVar8 = iVar4 - *(int *)(param_1 + 0x1c);
          }
          else if (iVar4 < *(int *)(param_1 + 0x14)) {
            *piVar8 = *(int *)(param_1 + 0x1c) + iVar4;
          }
          iVar9 = iVar9 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar9 < *piVar1);
      }
      uVar6 = uVar6 + uVar7;
    } while ((longlong)uVar6 < (longlong)param_4);
  }
  if (local_res8 != (void *)0x0) {
    thunk_FUN_1400020a8(local_res8);
  }
  return 1;
}



// FUNCTION 14558d300 FUN_14558d300 body=3 status=ok
// SIG undefined FUN_14558d300(void)

undefined8 FUN_14558d300(void)

{
  return 0;
}



// FUNCTION 14558d310 FUN_14558d310 body=3 status=ok
// SIG undefined FUN_14558d310(void)

undefined1 FUN_14558d310(void)

{
  return 1;
}



// FUNCTION 14558d320 FID_conflict:`scalar_deleting_destructor' body=126 status=ok
// SIG undefined FID_conflict:`scalar_deleting_destructor'(void)

/* Library Function - Multiple Matches With Different Base Names
    public: void * __ptr64 __cdecl std::pair<unsigned long const ,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
    public: void * __ptr64 __cdecl std::pair<unsigned long,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
   
   Library: Visual Studio 2019 Release */

longlong FID_conflict__scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14558d3a0 FUN_14558d3a0 body=923 status=ok
// SIG undefined FUN_14558d3a0(void)

undefined8 *
FUN_14558d3a0(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,ushort param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)0x0;
  if (param_3 == 1) {
    puVar5 = (undefined8 *)FUN_14494321d(0x60);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14558cd30(puVar5,param_4,param_5);
      *puVar5 = draco::
                MeshPredictionSchemeDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                ::vftable;
      uVar4 = param_6[1];
      puVar5[8] = *param_6;
      puVar5[9] = uVar4;
      uVar4 = param_6[3];
      puVar5[10] = param_6[2];
      puVar5[0xb] = uVar4;
      *puVar5 = draco::
                MeshPredictionSchemeParallelogramDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                ::vftable;
      puVar6 = puVar5;
    }
    *param_2 = puVar6;
  }
  else if (param_3 == 2) {
    puVar5 = (undefined8 *)FUN_14494321d(0x60);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14558cd30(puVar5,param_4,param_5);
      *puVar5 = draco::
                MeshPredictionSchemeDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                ::vftable;
      uVar4 = param_6[1];
      puVar5[8] = *param_6;
      puVar5[9] = uVar4;
      uVar4 = param_6[3];
      puVar5[10] = param_6[2];
      puVar5[0xb] = uVar4;
      *puVar5 = draco::
                MeshPredictionSchemeMultiParallelogramDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                ::vftable;
      puVar6 = puVar5;
    }
    *param_2 = puVar6;
  }
  else if (param_3 == 4) {
    puVar5 = (undefined8 *)FUN_14494321d(0xe8);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14558cd30(puVar5,param_4,param_5);
      *puVar5 = draco::
                MeshPredictionSchemeDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                ::vftable;
      uVar4 = param_6[1];
      puVar5[8] = *param_6;
      puVar5[9] = uVar4;
      uVar4 = param_6[3];
      puVar5[10] = param_6[2];
      puVar5[0xb] = uVar4;
      *puVar5 = draco::
                MeshPredictionSchemeConstrainedMultiParallelogramDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                ::vftable;
      _eh_vector_constructor_iterator_
                (puVar5 + 0xc,0x20,4,(_func_void_void_ptr *)&LAB_14558c760,FUN_144e59ed0);
      *(undefined4 *)(puVar5 + 0x1c) = 0;
      puVar6 = puVar5;
    }
    *param_2 = puVar6;
  }
  else if (param_3 == 3) {
    puVar5 = (undefined8 *)FUN_14494321d(0xa8);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14558cd30(puVar5,param_4,param_5);
      *puVar5 = draco::
                MeshPredictionSchemeDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                ::vftable;
      uVar4 = param_6[1];
      puVar5[8] = *param_6;
      puVar5[9] = uVar4;
      uVar4 = param_6[3];
      puVar5[10] = param_6[2];
      puVar5[0xb] = uVar4;
      *puVar5 = draco::
                MeshPredictionSchemeTexCoordsDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                ::vftable;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      *(undefined4 *)(puVar5 + 0xf) = 0;
      puVar5[0x10] = 0;
      puVar5[0x11] = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      *(uint *)(puVar5 + 0x14) = (uint)param_7;
      puVar6 = puVar5;
    }
    *param_2 = puVar6;
  }
  else if (param_3 == 5) {
    puVar5 = (undefined8 *)FUN_14494321d(0xb8);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14558cd30(puVar5,param_4,param_5);
      *puVar5 = draco::
                MeshPredictionSchemeDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                ::vftable;
      uVar4 = param_6[1];
      puVar5[8] = *param_6;
      puVar5[9] = uVar4;
      uVar4 = param_6[3];
      puVar5[10] = param_6[2];
      puVar5[0xb] = uVar4;
      *puVar5 = draco::
                MeshPredictionSchemeTexCoordsPortableDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                ::vftable;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0xf] = 0;
      puVar5[0x10] = 0;
      puVar5[0x11] = 0;
      puVar5[0x12] = 0;
      uVar4 = param_6[1];
      puVar5[0x13] = *param_6;
      puVar5[0x14] = uVar4;
      uVar4 = param_6[3];
      puVar5[0x15] = param_6[2];
      puVar5[0x16] = uVar4;
      puVar6 = puVar5;
    }
    *param_2 = puVar6;
  }
  else if (param_3 == 6) {
    puVar5 = (undefined8 *)FUN_14494321d(0xd0);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14558cd30(puVar5,param_4,param_5);
      *puVar5 = draco::
                MeshPredictionSchemeDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                ::vftable;
      uVar4 = param_6[1];
      puVar5[8] = *param_6;
      puVar5[9] = uVar4;
      uVar4 = param_6[3];
      puVar5[10] = param_6[2];
      puVar5[0xb] = uVar4;
      *puVar5 = draco::
                MeshPredictionSchemeGeometricNormalDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                ::vftable;
      puVar5[0xc] = draco::
                    MeshPredictionSchemeGeometricNormalPredictorBase<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                    ::vftable;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      uVar1 = *(undefined4 *)((longlong)param_6 + 4);
      uVar2 = *(undefined4 *)(param_6 + 1);
      uVar3 = *(undefined4 *)((longlong)param_6 + 0xc);
      *(undefined4 *)(puVar5 + 0xf) = *(undefined4 *)param_6;
      *(undefined4 *)((longlong)puVar5 + 0x7c) = uVar1;
      *(undefined4 *)(puVar5 + 0x10) = uVar2;
      *(undefined4 *)((longlong)puVar5 + 0x84) = uVar3;
      uVar1 = *(undefined4 *)((longlong)param_6 + 0x14);
      uVar2 = *(undefined4 *)(param_6 + 3);
      uVar3 = *(undefined4 *)((longlong)param_6 + 0x1c);
      *(undefined4 *)(puVar5 + 0x11) = *(undefined4 *)(param_6 + 2);
      *(undefined4 *)((longlong)puVar5 + 0x8c) = uVar1;
      *(undefined4 *)(puVar5 + 0x12) = uVar2;
      *(undefined4 *)((longlong)puVar5 + 0x94) = uVar3;
      puVar5[0xc] = draco::
                    MeshPredictionSchemeGeometricNormalPredictorArea<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
                    ::vftable;
      *(undefined4 *)(puVar5 + 0x13) = 1;
      puVar5[0x14] = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 0x15) = 0xffffffff;
      *(undefined4 *)((longlong)puVar5 + 0xac) = 0x3f800000;
      *(undefined4 *)(puVar5 + 0x16) = 0xffffffff;
      FUN_1453f5dc0(puVar5 + 0x17);
      puVar6 = puVar5;
    }
    *param_2 = puVar6;
  }
  else {
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 14558d740 FUN_14558d740 body=923 status=ok
// SIG undefined FUN_14558d740(void)

undefined8 *
FUN_14558d740(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,ushort param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)0x0;
  if (param_3 == 1) {
    puVar5 = (undefined8 *)FUN_14494321d(0x60);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14558cd30(puVar5,param_4,param_5);
      *puVar5 = draco::
                MeshPredictionSchemeDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                ::vftable;
      uVar4 = param_6[1];
      puVar5[8] = *param_6;
      puVar5[9] = uVar4;
      uVar4 = param_6[3];
      puVar5[10] = param_6[2];
      puVar5[0xb] = uVar4;
      *puVar5 = draco::
                MeshPredictionSchemeParallelogramDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                ::vftable;
      puVar6 = puVar5;
    }
    *param_2 = puVar6;
  }
  else if (param_3 == 2) {
    puVar5 = (undefined8 *)FUN_14494321d(0x60);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14558cd30(puVar5,param_4,param_5);
      *puVar5 = draco::
                MeshPredictionSchemeDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                ::vftable;
      uVar4 = param_6[1];
      puVar5[8] = *param_6;
      puVar5[9] = uVar4;
      uVar4 = param_6[3];
      puVar5[10] = param_6[2];
      puVar5[0xb] = uVar4;
      *puVar5 = draco::
                MeshPredictionSchemeMultiParallelogramDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                ::vftable;
      puVar6 = puVar5;
    }
    *param_2 = puVar6;
  }
  else if (param_3 == 4) {
    puVar5 = (undefined8 *)FUN_14494321d(0xe8);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14558cd30(puVar5,param_4,param_5);
      *puVar5 = draco::
                MeshPredictionSchemeDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                ::vftable;
      uVar4 = param_6[1];
      puVar5[8] = *param_6;
      puVar5[9] = uVar4;
      uVar4 = param_6[3];
      puVar5[10] = param_6[2];
      puVar5[0xb] = uVar4;
      *puVar5 = draco::
                MeshPredictionSchemeConstrainedMultiParallelogramDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                ::vftable;
      _eh_vector_constructor_iterator_
                (puVar5 + 0xc,0x20,4,(_func_void_void_ptr *)&LAB_14558c760,FUN_144e59ed0);
      *(undefined4 *)(puVar5 + 0x1c) = 0;
      puVar6 = puVar5;
    }
    *param_2 = puVar6;
  }
  else if (param_3 == 3) {
    puVar5 = (undefined8 *)FUN_14494321d(0xa8);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14558cd30(puVar5,param_4,param_5);
      *puVar5 = draco::
                MeshPredictionSchemeDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                ::vftable;
      uVar4 = param_6[1];
      puVar5[8] = *param_6;
      puVar5[9] = uVar4;
      uVar4 = param_6[3];
      puVar5[10] = param_6[2];
      puVar5[0xb] = uVar4;
      *puVar5 = draco::
                MeshPredictionSchemeTexCoordsDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                ::vftable;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      *(undefined4 *)(puVar5 + 0xf) = 0;
      puVar5[0x10] = 0;
      puVar5[0x11] = 0;
      puVar5[0x12] = 0;
      puVar5[0x13] = 0;
      *(uint *)(puVar5 + 0x14) = (uint)param_7;
      puVar6 = puVar5;
    }
    *param_2 = puVar6;
  }
  else if (param_3 == 5) {
    puVar5 = (undefined8 *)FUN_14494321d(0xb8);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14558cd30(puVar5,param_4,param_5);
      *puVar5 = draco::
                MeshPredictionSchemeDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                ::vftable;
      uVar4 = param_6[1];
      puVar5[8] = *param_6;
      puVar5[9] = uVar4;
      uVar4 = param_6[3];
      puVar5[10] = param_6[2];
      puVar5[0xb] = uVar4;
      *puVar5 = draco::
                MeshPredictionSchemeTexCoordsPortableDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                ::vftable;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar5[0xf] = 0;
      puVar5[0x10] = 0;
      puVar5[0x11] = 0;
      puVar5[0x12] = 0;
      uVar4 = param_6[1];
      puVar5[0x13] = *param_6;
      puVar5[0x14] = uVar4;
      uVar4 = param_6[3];
      puVar5[0x15] = param_6[2];
      puVar5[0x16] = uVar4;
      puVar6 = puVar5;
    }
    *param_2 = puVar6;
  }
  else if (param_3 == 6) {
    puVar5 = (undefined8 *)FUN_14494321d(0xd0);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14558cd30(puVar5,param_4,param_5);
      *puVar5 = draco::
                MeshPredictionSchemeDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                ::vftable;
      uVar4 = param_6[1];
      puVar5[8] = *param_6;
      puVar5[9] = uVar4;
      uVar4 = param_6[3];
      puVar5[10] = param_6[2];
      puVar5[0xb] = uVar4;
      *puVar5 = draco::
                MeshPredictionSchemeGeometricNormalDecoder<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                ::vftable;
      puVar5[0xc] = draco::
                    MeshPredictionSchemeGeometricNormalPredictorBase<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                    ::vftable;
      puVar5[0xd] = 0;
      puVar5[0xe] = 0;
      uVar1 = *(undefined4 *)((longlong)param_6 + 4);
      uVar2 = *(undefined4 *)(param_6 + 1);
      uVar3 = *(undefined4 *)((longlong)param_6 + 0xc);
      *(undefined4 *)(puVar5 + 0xf) = *(undefined4 *)param_6;
      *(undefined4 *)((longlong)puVar5 + 0x7c) = uVar1;
      *(undefined4 *)(puVar5 + 0x10) = uVar2;
      *(undefined4 *)((longlong)puVar5 + 0x84) = uVar3;
      uVar1 = *(undefined4 *)((longlong)param_6 + 0x14);
      uVar2 = *(undefined4 *)(param_6 + 3);
      uVar3 = *(undefined4 *)((longlong)param_6 + 0x1c);
      *(undefined4 *)(puVar5 + 0x11) = *(undefined4 *)(param_6 + 2);
      *(undefined4 *)((longlong)puVar5 + 0x8c) = uVar1;
      *(undefined4 *)(puVar5 + 0x12) = uVar2;
      *(undefined4 *)((longlong)puVar5 + 0x94) = uVar3;
      puVar5[0xc] = draco::
                    MeshPredictionSchemeGeometricNormalPredictorArea<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
                    ::vftable;
      *(undefined4 *)(puVar5 + 0x13) = 1;
      puVar5[0x14] = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 0x15) = 0xffffffff;
      *(undefined4 *)((longlong)puVar5 + 0xac) = 0x3f800000;
      *(undefined4 *)(puVar5 + 0x16) = 0xffffffff;
      FUN_1453f5dc0(puVar5 + 0x17);
      puVar6 = puVar5;
    }
    *param_2 = puVar6;
  }
  else {
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 14558dae0 ~pair<> body=93 status=ok
// SIG undefined ~pair<>(void)

/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::pair<unsigned long const ,class std::vector<struct CHN * __ptr64,class
   std::allocator<struct CHN * __ptr64> > >::~pair<unsigned long const ,class std::vector<struct CHN
   * __ptr64,class std::allocator<struct CHN * __ptr64> > >(void) __ptr64
    public: __cdecl std::pair<unsigned long,class std::vector<struct CHN * __ptr64,class
   std::allocator<struct CHN * __ptr64> > >::~pair<unsigned long,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void ~pair<>(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14558db40 FID_conflict:`scalar_deleting_destructor' body=126 status=ok
// SIG undefined FID_conflict:`scalar_deleting_destructor'(void)

/* Library Function - Multiple Matches With Different Base Names
    public: void * __ptr64 __cdecl std::pair<unsigned long const ,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
    public: void * __ptr64 __cdecl std::pair<unsigned long,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
   
   Library: Visual Studio 2019 Release */

longlong FID_conflict__scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14558dbc0 FUN_14558dbc0 body=977 status=ok
// SIG undefined FUN_14558dbc0(void)

undefined8
FUN_14558dbc0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  size_t _Size;
  void *_Dst;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  
  piVar1 = (int *)(param_1 + 0x10);
  FUN_14558caf0(piVar1,param_5);
  plVar5 = *(longlong **)(param_1 + 0x48);
  plVar6 = *(longlong **)(param_1 + 0x50);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (longlong)param_5;
  _Size = SUB168(ZEXT816(4) * auVar7,0);
  if (SUB168(ZEXT816(4) * auVar7,8) != 0) {
    _Size = 0xffffffffffffffff;
  }
  _Dst = (void *)FUN_144a7d36f(_Size);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    memset(_Dst,0,_Size);
  }
  FUN_14558cb90(piVar1,_Dst,param_2,param_3);
  iVar16 = 1;
  lVar8 = (longlong)
          (int)((*(longlong **)(param_1 + 0x58))[1] - **(longlong **)(param_1 + 0x58) >> 2);
  if (1 < lVar8) {
    uVar18 = 1;
    iVar17 = param_5;
    do {
      lVar10 = **(longlong **)(param_1 + 0x58);
      if ((ulonglong)((*(longlong **)(param_1 + 0x58))[1] - lVar10 >> 2) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_1453f6330();
      }
      uVar12 = *(uint *)(lVar10 + uVar18 * 4);
      if (uVar12 == 0xffffffff) {
LAB_14558de88:
        piVar13 = (int *)((longlong)iVar17 * 4 + param_3);
        iVar14 = 0;
        iVar11 = *piVar1;
        if (0 < iVar11) {
          lVar10 = 0;
          do {
            iVar11 = *(int *)(lVar10 + param_3 + (longlong)(iVar17 - param_5) * 4);
            lVar15 = *(longlong *)(param_1 + 0x28);
            if (*(int *)(param_1 + 0x18) < iVar11) {
              *(int *)(lVar10 + lVar15) = *(int *)(param_1 + 0x18);
            }
            else if (iVar11 < *(int *)(param_1 + 0x14)) {
              *(int *)(lVar10 + lVar15) = *(int *)(param_1 + 0x14);
            }
            else {
              *(int *)(lVar10 + lVar15) = iVar11;
            }
            iVar14 = iVar14 + 1;
            lVar10 = lVar10 + 4;
            iVar11 = *piVar1;
          } while (iVar14 < iVar11);
        }
        lVar10 = *(longlong *)(param_1 + 0x28);
        iVar14 = 0;
        if (0 < iVar11) {
          lVar15 = lVar10 - (longlong)piVar13;
          do {
            piVar2 = (int *)(lVar15 + (longlong)piVar13);
            iVar11 = *(int *)((longlong)piVar2 + ((param_2 + (longlong)iVar17 * 4) - lVar10)) +
                     *piVar2;
            *piVar13 = iVar11;
            if (*(int *)(param_1 + 0x18) < iVar11) {
              *piVar13 = iVar11 - *(int *)(param_1 + 0x1c);
            }
            else if (iVar11 < *(int *)(param_1 + 0x14)) {
              *piVar13 = *(int *)(param_1 + 0x1c) + iVar11;
            }
            iVar14 = iVar14 + 1;
            piVar13 = piVar13 + 1;
          } while (iVar14 < *piVar1);
        }
      }
      else {
        uVar12 = *(uint *)(plVar5[3] + (ulonglong)uVar12 * 4);
        if (uVar12 == 0xffffffff) goto LAB_14558de88;
        lVar10 = *plVar5;
        lVar15 = *plVar6;
        iVar11 = *(int *)(lVar15 + (ulonglong)*(uint *)(lVar10 + (ulonglong)uVar12 * 4) * 4);
        iVar14 = 1;
        if (uVar12 + 1 == ((uVar12 + 1) / 3) * 3) {
          iVar14 = -2;
        }
        if (iVar14 + uVar12 == 0xffffffff) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = *(uint *)(lVar10 + (ulonglong)(iVar14 + uVar12) * 4);
        }
        iVar14 = *(int *)(lVar15 + (ulonglong)uVar3 * 4);
        if (uVar12 == (uVar12 / 3) * 3) {
          uVar12 = uVar12 + 2;
        }
        else {
          uVar12 = uVar12 - 1;
        }
        uVar9 = 0xffffffff;
        if (uVar12 != 0xffffffff) {
          uVar9 = (ulonglong)*(uint *)(lVar10 + (ulonglong)uVar12 * 4);
        }
        iVar4 = *(int *)(lVar15 + uVar9 * 4);
        if (((iVar16 <= iVar11) || (iVar16 <= iVar14)) || (iVar16 <= iVar4)) goto LAB_14558de88;
        if (0 < param_5) {
          lVar10 = (longlong)(iVar4 * param_5);
          piVar13 = (int *)(lVar10 * 4 + param_3);
          uVar9 = (longlong)param_5;
          do {
            *(int *)((longlong)piVar13 + (longlong)_Dst + (lVar10 * -4 - param_3)) =
                 (piVar13[iVar14 * param_5 - lVar10] - piVar13[iVar11 * param_5 - lVar10]) +
                 *piVar13;
            piVar13 = piVar13 + 1;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        piVar13 = (int *)(param_3 + (longlong)iVar17 * 4);
        iVar14 = 0;
        iVar11 = *piVar1;
        if (0 < iVar11) {
          lVar10 = 0;
          do {
            iVar11 = *(int *)(lVar10 + (longlong)_Dst);
            lVar15 = *(longlong *)(param_1 + 0x28);
            if (*(int *)(param_1 + 0x18) < iVar11) {
              *(int *)(lVar10 + lVar15) = *(int *)(param_1 + 0x18);
            }
            else if (iVar11 < *(int *)(param_1 + 0x14)) {
              *(int *)(lVar10 + lVar15) = *(int *)(param_1 + 0x14);
            }
            else {
              *(int *)(lVar10 + lVar15) = iVar11;
            }
            iVar14 = iVar14 + 1;
            lVar10 = lVar10 + 4;
            iVar11 = *piVar1;
          } while (iVar14 < iVar11);
        }
        lVar10 = *(longlong *)(param_1 + 0x28);
        iVar14 = 0;
        if (0 < iVar11) {
          lVar15 = lVar10 - (longlong)piVar13;
          do {
            piVar2 = (int *)((longlong)piVar13 + lVar15);
            iVar11 = *(int *)((longlong)piVar2 + ((param_2 + (longlong)iVar17 * 4) - lVar10)) +
                     *piVar2;
            *piVar13 = iVar11;
            if (*(int *)(param_1 + 0x18) < iVar11) {
              *piVar13 = iVar11 - *(int *)(param_1 + 0x1c);
            }
            else if (iVar11 < *(int *)(param_1 + 0x14)) {
              *piVar13 = *(int *)(param_1 + 0x1c) + iVar11;
            }
            iVar14 = iVar14 + 1;
            piVar13 = piVar13 + 1;
          } while (iVar14 < *piVar1);
        }
      }
      iVar16 = iVar16 + 1;
      iVar17 = iVar17 + param_5;
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 < lVar8);
  }
  if (_Dst != (void *)0x0) {
    thunk_FUN_1400020a8(_Dst);
  }
  return 1;
}



// FUNCTION 14558dfa0 FUN_14558dfa0 body=6 status=ok
// SIG undefined FUN_14558dfa0(void)

undefined8 FUN_14558dfa0(void)

{
  return 1;
}



// FUNCTION 14558dfb0 FUN_14558dfb0 body=34 status=ok
// SIG undefined FUN_14558dfb0(void)

undefined1 FUN_14558dfb0(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
      (*(longlong *)(param_1 + 0x50) != 0)) && (*(longlong *)(param_1 + 0x58) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14558dfe0 FID_conflict:`scalar_deleting_destructor' body=126 status=ok
// SIG undefined FID_conflict:`scalar_deleting_destructor'(void)

/* Library Function - Multiple Matches With Different Base Names
    public: void * __ptr64 __cdecl std::pair<unsigned long const ,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
    public: void * __ptr64 __cdecl std::pair<unsigned long,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
   
   Library: Visual Studio 2019 Release */

longlong FID_conflict__scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14558e060 FUN_14558e060 body=1545 status=ok
// SIG undefined FUN_14558e060(void)

undefined8
FUN_14558e060(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,uint param_5)

{
  int *piVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  size_t sVar12;
  void *_Dst;
  longlong lVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  int local_88;
  void *local_70;
  ulonglong local_68;
  
  uVar23 = (ulonglong)(int)param_5;
  piVar1 = (int *)(param_1 + 0x10);
  FUN_14558caf0(piVar1,param_5);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar23;
  sVar12 = SUB168(ZEXT816(4) * auVar9,0);
  if (SUB168(ZEXT816(4) * auVar9,8) != 0) {
    sVar12 = 0xffffffffffffffff;
  }
  _Dst = (void *)FUN_144a7d36f(sVar12);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    memset(_Dst,0,sVar12);
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar23;
  sVar12 = SUB168(ZEXT816(4) * auVar10,0);
  if (SUB168(ZEXT816(4) * auVar10,8) != 0) {
    sVar12 = 0xffffffffffffffff;
  }
  local_70 = (void *)FUN_144a7d36f(sVar12);
  if (local_70 == (void *)0x0) {
    local_70 = (void *)0x0;
  }
  else {
    memset(local_70,0,sVar12);
  }
  FUN_14558cb90(piVar1,_Dst,param_2,param_3);
  plVar7 = *(longlong **)(param_1 + 0x48);
  plVar8 = *(longlong **)(param_1 + 0x50);
  local_88 = 1;
  lVar13 = (longlong)
           (int)((*(longlong **)(param_1 + 0x58))[1] - **(longlong **)(param_1 + 0x58) >> 2);
  if (1 < lVar13) {
    local_68 = 1;
    uVar14 = uVar23;
    do {
      lVar21 = **(longlong **)(param_1 + 0x58);
      if ((ulonglong)((*(longlong **)(param_1 + 0x58))[1] - lVar21 >> 2) <= local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_1453f6330();
      }
      uVar4 = *(uint *)(lVar21 + local_68 * 4);
      iVar17 = 0;
      if (0 < (int)uVar14) {
        memset(_Dst,0,uVar23 << 2);
      }
      uVar18 = uVar4;
      if (uVar4 != 0xffffffff) {
        do {
          plVar2 = plVar7 + 3;
          uVar19 = *(uint *)(*plVar2 + (ulonglong)uVar18 * 4);
          if (uVar19 == 0xffffffff) {
LAB_14558e3e3:
            if (uVar18 == 0xffffffff) break;
          }
          else {
            lVar21 = *plVar7;
            lVar16 = *plVar8;
            iVar20 = *(int *)(lVar16 + (ulonglong)*(uint *)(lVar21 + (ulonglong)uVar19 * 4) * 4);
            iVar11 = 1;
            if (uVar19 + 1 == ((uVar19 + 1) / 3) * 3) {
              iVar11 = -2;
            }
            if (iVar11 + uVar19 == 0xffffffff) {
              uVar5 = 0xffffffff;
            }
            else {
              uVar5 = *(uint *)(lVar21 + (ulonglong)(iVar11 + uVar19) * 4);
            }
            iVar11 = *(int *)(lVar16 + (ulonglong)uVar5 * 4);
            if (uVar19 == (uVar19 / 3) * 3) {
              uVar19 = uVar19 + 2;
            }
            else {
              uVar19 = uVar19 - 1;
            }
            uVar14 = 0xffffffff;
            if (uVar19 != 0xffffffff) {
              uVar14 = (ulonglong)*(uint *)(lVar21 + (ulonglong)uVar19 * 4);
            }
            iVar6 = *(int *)(lVar16 + uVar14 * 4);
            if (((local_88 <= iVar20) || (local_88 <= iVar11)) || (local_88 <= iVar6)) {
              uVar14 = (ulonglong)param_5;
              goto LAB_14558e3e3;
            }
            uVar14 = (ulonglong)(int)param_5;
            lVar21 = 0;
            if (0 < (longlong)uVar23) {
              lVar16 = (longlong)(int)(iVar6 * param_5);
              piVar15 = (int *)(param_3 + lVar16 * 4);
              do {
                *(int *)((longlong)local_70 + (lVar16 * -4 - param_3) + (longlong)piVar15) =
                     (piVar15[(int)(iVar11 * param_5) - lVar16] -
                     piVar15[(int)(iVar20 * param_5) - lVar16]) + *piVar15;
                lVar21 = lVar21 + 1;
                piVar15 = piVar15 + 1;
              } while (lVar21 < (longlong)uVar23);
            }
            lVar21 = 0;
            if (((0 < (int)param_5) && (0xf < param_5)) &&
               (((void *)((longlong)local_70 + (uVar14 - 1) * 4) < _Dst ||
                ((void *)(uVar14 * 4 + -4 + (longlong)_Dst) < local_70)))) {
              piVar15 = (int *)((longlong)_Dst + 0x10);
              lVar16 = (longlong)local_70 - (longlong)_Dst;
              do {
                piVar3 = (int *)(lVar16 + -0x10 + (longlong)piVar15);
                iVar20 = piVar3[1];
                iVar11 = piVar3[2];
                iVar6 = piVar3[3];
                piVar15[-4] = *piVar3 + piVar15[-4];
                piVar15[-3] = iVar20 + piVar15[-3];
                piVar15[-2] = iVar11 + piVar15[-2];
                piVar15[-1] = iVar6 + piVar15[-1];
                piVar3 = (int *)((longlong)piVar15 + lVar16);
                iVar20 = piVar3[1];
                iVar11 = piVar3[2];
                iVar6 = piVar3[3];
                *piVar15 = *piVar3 + *piVar15;
                piVar15[1] = iVar20 + piVar15[1];
                piVar15[2] = iVar11 + piVar15[2];
                piVar15[3] = iVar6 + piVar15[3];
                piVar3 = (int *)(lVar16 + 0x10 + (longlong)piVar15);
                iVar20 = piVar3[1];
                iVar11 = piVar3[2];
                iVar6 = piVar3[3];
                piVar15[4] = *piVar3 + piVar15[4];
                piVar15[5] = iVar20 + piVar15[5];
                piVar15[6] = iVar11 + piVar15[6];
                piVar15[7] = iVar6 + piVar15[7];
                piVar3 = (int *)(lVar16 + 0x20 + (longlong)piVar15);
                iVar20 = piVar3[1];
                iVar11 = piVar3[2];
                iVar6 = piVar3[3];
                piVar15[8] = *piVar3 + piVar15[8];
                piVar15[9] = iVar20 + piVar15[9];
                piVar15[10] = iVar11 + piVar15[10];
                piVar15[0xb] = iVar6 + piVar15[0xb];
                lVar21 = lVar21 + 0x10;
                piVar15 = piVar15 + 0x10;
              } while (lVar21 < (int)(param_5 & 0xfffffff0));
            }
            if (lVar21 < (longlong)uVar23) {
              piVar15 = (int *)(lVar21 * 4 + (longlong)_Dst);
              do {
                *piVar15 = *piVar15 +
                           *(int *)((longlong)piVar15 + ((longlong)local_70 - (longlong)_Dst));
                lVar21 = lVar21 + 1;
                piVar15 = piVar15 + 1;
              } while (lVar21 < (longlong)uVar23);
            }
            iVar17 = iVar17 + 1;
          }
          if (uVar18 == (uVar18 / 3) * 3) {
            uVar18 = uVar18 + 2;
          }
          else {
            uVar18 = uVar18 - 1;
          }
          if ((uVar18 == 0xffffffff) ||
             (uVar18 = *(uint *)(*plVar2 + (ulonglong)uVar18 * 4), uVar18 == 0xffffffff)) break;
          if (uVar18 == (uVar18 / 3) * 3) {
            uVar18 = uVar18 + 2;
          }
          else {
            uVar18 = uVar18 - 1;
          }
          if ((uVar18 == uVar4) || (uVar18 == 0xffffffff)) break;
        } while( true );
      }
      iVar20 = local_88 * (int)uVar14;
      if (iVar17 == 0) {
        lVar21 = (longlong)iVar20 * 4;
        piVar15 = (int *)(lVar21 + param_3);
        iVar20 = 0;
        iVar17 = *piVar1;
        if (0 < iVar17) {
          lVar16 = 0;
          do {
            iVar17 = *(int *)(lVar16 + param_3 + (longlong)((local_88 + -1) * (int)uVar14) * 4);
            lVar22 = *(longlong *)(param_1 + 0x28);
            if (*(int *)(param_1 + 0x18) < iVar17) {
              *(int *)(lVar16 + lVar22) = *(int *)(param_1 + 0x18);
            }
            else if (iVar17 < *(int *)(param_1 + 0x14)) {
              *(int *)(lVar16 + lVar22) = *(int *)(param_1 + 0x14);
            }
            else {
              *(int *)(lVar16 + lVar22) = iVar17;
            }
            iVar20 = iVar20 + 1;
            lVar16 = lVar16 + 4;
            iVar17 = *piVar1;
          } while (iVar20 < iVar17);
        }
        lVar16 = *(longlong *)(param_1 + 0x28);
        iVar20 = 0;
        if (0 < iVar17) {
          lVar22 = lVar16 - (longlong)piVar15;
          do {
            piVar3 = (int *)(lVar22 + (longlong)piVar15);
            iVar17 = *(int *)((longlong)piVar3 + ((param_2 + lVar21) - lVar16)) + *piVar3;
            *piVar15 = iVar17;
            if (*(int *)(param_1 + 0x18) < iVar17) {
              *piVar15 = iVar17 - *(int *)(param_1 + 0x1c);
            }
            else if (iVar17 < *(int *)(param_1 + 0x14)) {
              *piVar15 = *(int *)(param_1 + 0x1c) + iVar17;
            }
            iVar20 = iVar20 + 1;
            piVar15 = piVar15 + 1;
          } while (iVar20 < *piVar1);
        }
      }
      else {
        lVar21 = 0;
        if (0 < (longlong)uVar23) {
          do {
            *(int *)((longlong)_Dst + lVar21 * 4) = *(int *)((longlong)_Dst + lVar21 * 4) / iVar17;
            lVar21 = lVar21 + 1;
          } while (lVar21 < (longlong)uVar23);
        }
        lVar21 = (longlong)iVar20 * 4;
        piVar15 = (int *)(lVar21 + param_3);
        iVar20 = 0;
        iVar17 = *piVar1;
        if (0 < iVar17) {
          lVar16 = 0;
          do {
            iVar17 = *(int *)(lVar16 + (longlong)_Dst);
            lVar22 = *(longlong *)(param_1 + 0x28);
            if (*(int *)(param_1 + 0x18) < iVar17) {
              *(int *)(lVar16 + lVar22) = *(int *)(param_1 + 0x18);
            }
            else if (iVar17 < *(int *)(param_1 + 0x14)) {
              *(int *)(lVar16 + lVar22) = *(int *)(param_1 + 0x14);
            }
            else {
              *(int *)(lVar16 + lVar22) = iVar17;
            }
            iVar20 = iVar20 + 1;
            lVar16 = lVar16 + 4;
            iVar17 = *piVar1;
          } while (iVar20 < iVar17);
        }
        lVar16 = *(longlong *)(param_1 + 0x28);
        iVar20 = 0;
        if (0 < iVar17) {
          lVar22 = lVar16 - (longlong)piVar15;
          do {
            piVar3 = (int *)(lVar22 + (longlong)piVar15);
            iVar17 = *(int *)((longlong)piVar3 + ((param_2 + lVar21) - lVar16)) + *piVar3;
            *piVar15 = iVar17;
            if (*(int *)(param_1 + 0x18) < iVar17) {
              *piVar15 = iVar17 - *(int *)(param_1 + 0x1c);
            }
            else if (iVar17 < *(int *)(param_1 + 0x14)) {
              *piVar15 = *(int *)(param_1 + 0x1c) + iVar17;
            }
            iVar20 = iVar20 + 1;
            piVar15 = piVar15 + 1;
          } while (iVar20 < *piVar1);
        }
      }
      local_88 = local_88 + 1;
      local_68 = local_68 + 1;
    } while ((longlong)local_68 < lVar13);
  }
  if (local_70 != (void *)0x0) {
    thunk_FUN_1400020a8(local_70);
  }
  if (_Dst != (void *)0x0) {
    thunk_FUN_1400020a8(_Dst);
  }
  return 1;
}



// FUNCTION 14558e670 FUN_14558e670 body=6 status=ok
// SIG undefined FUN_14558e670(void)

undefined8 FUN_14558e670(void)

{
  return 2;
}



// FUNCTION 14558e680 FUN_14558e680 body=34 status=ok
// SIG undefined FUN_14558e680(void)

undefined1 FUN_14558e680(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
      (*(longlong *)(param_1 + 0x50) != 0)) && (*(longlong *)(param_1 + 0x58) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14558e6b0 FID_conflict:`scalar_deleting_destructor' body=126 status=ok
// SIG undefined FID_conflict:`scalar_deleting_destructor'(void)

/* Library Function - Multiple Matches With Different Base Names
    public: void * __ptr64 __cdecl std::pair<unsigned long const ,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
    public: void * __ptr64 __cdecl std::pair<unsigned long,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
   
   Library: Visual Studio 2019 Release */

longlong FID_conflict__scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14558e730 FUN_14558e730 body=2344 status=ok
// SIG undefined FUN_14558e730(void)

/* WARNING: Removing unreachable block (ram,0x00014558eff3) */
/* WARNING: Removing unreachable block (ram,0x00014558f05f) */
/* WARNING: Removing unreachable block (ram,0x00014558f008) */

void FUN_14558e730(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5
                  )

{
  int *piVar1;
  size_t _Size;
  uint uVar2;
  void *_Dst;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined1 auStackY_178 [32];
  int local_148 [2];
  int *local_140;
  int local_138;
  longlong *local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  int *local_f8;
  int *piStack_f0;
  int *local_e8;
  longlong *local_e0;
  int *local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  longlong local_a8;
  longlong local_a0 [11];
  ulonglong local_48;
  ulonglong uVar20;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_178;
  uVar22 = (ulonglong)param_5;
  local_138 = param_5;
  piVar14 = (int *)(param_1 + 0x10);
  local_128 = param_1;
  local_118 = param_3;
  local_110 = param_2;
  local_d8 = piVar14;
  FUN_14558caf0(piVar14,param_5);
  _eh_vector_constructor_iterator_
            (&local_a8,0x18,4,(_func_void_void_ptr *)&LAB_144d7efd0,FUN_144b73500);
  plVar10 = local_a0;
  lVar12 = 4;
  local_108 = uVar22;
  do {
    local_148[0] = 0;
    _Dst = (void *)*plVar10;
    lVar6 = plVar10[-1];
    uVar8 = (longlong)_Dst - lVar6 >> 2;
    if (uVar22 < uVar8) {
      *plVar10 = lVar6 + uVar22 * 4;
    }
    else if (uVar8 < uVar22) {
      if ((ulonglong)(plVar10[1] - lVar6 >> 2) < uVar22) {
        FUN_146c96176(plVar10 + -1,uVar22,local_148);
      }
      else {
        _Size = (uVar22 - uVar8) * 4;
        memset(_Dst,0,_Size);
        *plVar10 = (longlong)((longlong)_Dst + _Size);
      }
    }
    plVar10 = plVar10 + 3;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FUN_14558cb90(piVar14,local_a8,local_110,param_3);
  lVar12 = local_128;
  plVar10 = *(longlong **)(local_128 + 0x48);
  local_e0 = *(longlong **)(local_128 + 0x50);
  local_130 = plVar10;
  puVar5 = (undefined8 *)FUN_14494321d(0x10);
  local_c0 = puVar5 + 2;
  *puVar5 = 0;
  puVar5[1] = 0;
  local_f8 = (int *)0x0;
  piStack_f0 = (int *)0x0;
  local_e8 = (int *)0x0;
  local_c8 = puVar5;
  local_b8 = local_c0;
  if (uVar22 == 0) {
    piVar16 = (int *)0x0;
    local_140 = (int *)0x0;
  }
  else {
    if (0x3fffffffffffffff < uVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_14694aefc();
    }
    uVar8 = uVar22 * 4;
    if (uVar8 < 0x1000) {
      if (uVar8 == 0) {
        local_140 = (int *)0x0;
      }
      else {
        local_140 = (int *)FUN_14494321d(uVar8);
      }
    }
    else {
      if (uVar8 + 0x27 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar6 = FUN_14494321d();
      if (lVar6 == 0) goto LAB_14558efc2;
      local_140 = (int *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(local_140 + -2) = lVar6;
    }
    piVar16 = local_140;
    piVar1 = local_140 + uVar22;
    local_f8 = local_140;
    local_e8 = piVar1;
    memset(local_140,0,uVar8);
    plVar10 = local_130;
    piStack_f0 = piVar1;
  }
  plVar23 = *(longlong **)(lVar12 + 0x58);
  local_148[0] = 1;
  iVar7 = (int)(plVar23[1] - *plVar23 >> 2);
  if (1 < iVar7) {
    local_d0 = (longlong)iVar7;
    local_100 = 1;
    do {
      piVar1 = local_140;
      iVar7 = local_148[0];
      lVar13 = 0;
      lVar6 = **(longlong **)(lVar12 + 0x58);
      if ((ulonglong)((*(longlong **)(lVar12 + 0x58))[1] - lVar6 >> 2) <= local_100) {
                    /* WARNING: Subroutine does not return */
        FUN_1453f6330();
      }
      uVar19 = *(uint *)(lVar6 + local_100 * 4);
      local_120 = 0;
      bVar3 = true;
      if (uVar19 != 0xffffffff) {
        plVar23 = &local_a8;
        uVar15 = uVar19;
        do {
          do {
            lVar12 = *plVar23;
            plVar11 = plVar10;
            piVar14 = local_d8;
            uVar22 = local_108;
            if (uVar15 != 0xffffffff) {
              uVar17 = *(uint *)(plVar10[3] + (ulonglong)uVar15 * 4);
              if (uVar17 != 0xffffffff) {
                lVar6 = *plVar10;
                lVar13 = *local_e0;
                iVar9 = *(int *)(lVar13 + (ulonglong)*(uint *)(lVar6 + (ulonglong)uVar17 * 4) * 4);
                iVar18 = 1;
                if (uVar17 + 1 == ((uVar17 + 1) / 3) * 3) {
                  iVar18 = -2;
                }
                if (iVar18 + uVar17 == 0xffffffff) {
                  uVar2 = 0xffffffff;
                }
                else {
                  uVar2 = *(uint *)(lVar6 + (ulonglong)(iVar18 + uVar17) * 4);
                }
                iVar18 = *(int *)(lVar13 + (ulonglong)uVar2 * 4);
                if (uVar17 == (uVar17 / 3) * 3) {
                  uVar17 = uVar17 + 2;
                }
                else {
                  uVar17 = uVar17 - 1;
                }
                uVar8 = 0xffffffff;
                if (uVar17 != 0xffffffff) {
                  uVar8 = (ulonglong)*(uint *)(lVar6 + (ulonglong)uVar17 * 4);
                }
                iVar21 = *(int *)(lVar13 + uVar8 * 4);
                plVar11 = local_130;
                lVar13 = local_120;
                if (((iVar9 < local_148[0]) && (iVar18 < local_148[0])) && (iVar21 < local_148[0]))
                {
                  iVar4 = (int)local_108;
                  if (0 < (longlong)local_108) {
                    lVar6 = (longlong)(iVar4 * iVar21);
                    piVar16 = (int *)(local_118 + lVar6 * 4);
                    uVar8 = local_108;
                    do {
                      *(int *)((lVar12 - local_118) + lVar6 * -4 + (longlong)piVar16) =
                           (piVar16[iVar4 * iVar18 - lVar6] - piVar16[iVar4 * iVar9 - lVar6]) +
                           *piVar16;
                      piVar16 = piVar16 + 1;
                      uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                  }
                  lVar13 = local_120 + 1;
                  plVar23 = plVar23 + 3;
                  local_120 = lVar13;
                  if (lVar13 == 4) goto LAB_14558ec8d;
                }
              }
            }
            plVar24 = plVar10 + 3;
            if (bVar3) {
              if (uVar15 == 0xffffffff) goto LAB_14558ec0b;
              uVar17 = uVar15 + 1;
              if (uVar17 == (uVar17 / 3) * 3) {
                uVar17 = uVar15 - 2;
              }
              if ((uVar17 == 0xffffffff) ||
                 (iVar9 = *(int *)(*plVar24 + (ulonglong)uVar17 * 4), iVar9 == -1))
              goto LAB_14558ec0b;
              uVar15 = iVar9 + 1;
              if (uVar15 == (uVar15 / 3) * 3) {
                uVar15 = iVar9 - 2;
              }
            }
            else {
              if (uVar15 != 0xffffffff) {
                if (uVar15 == (uVar15 / 3) * 3) {
                  uVar15 = uVar15 + 2;
                }
                else {
                  uVar15 = uVar15 - 1;
                }
                if ((uVar15 != 0xffffffff) &&
                   (uVar15 = *(uint *)(*plVar24 + (ulonglong)uVar15 * 4), uVar15 != 0xffffffff)) {
                  if (uVar15 == (uVar15 / 3) * 3) {
                    uVar15 = uVar15 + 2;
                  }
                  else {
                    uVar15 = uVar15 - 1;
                  }
                  goto LAB_14558ec11;
                }
              }
LAB_14558ec0b:
              uVar15 = 0xffffffff;
            }
LAB_14558ec11:
            if (uVar15 == uVar19) goto LAB_14558ec8d;
            plVar10 = plVar11;
          } while (uVar15 != 0xffffffff);
          if (!bVar3) break;
          bVar3 = false;
          uVar15 = uVar19 - 1;
          if (uVar19 == (uVar19 / 3) * 3) {
            uVar15 = uVar19 + 2;
          }
          if ((uVar15 == 0xffffffff) ||
             (uVar15 = *(uint *)(*plVar24 + (ulonglong)uVar15 * 4), uVar15 == 0xffffffff)) break;
          if (uVar15 == (uVar15 / 3) * 3) {
            uVar15 = uVar15 + 2;
          }
          else {
            uVar15 = uVar15 - 1;
          }
          if (uVar15 == 0xffffffff) break;
        } while( true );
      }
LAB_14558ec8d:
      iVar9 = 0;
      if (0 < lVar13) {
        if (0 < local_138) {
          memset(local_140,0,uVar22 << 2);
        }
        lVar12 = 0;
        plVar10 = &local_a8;
        do {
          iVar18 = *(int *)((longlong)local_c8 + lVar13 * 4 + -4);
          *(int *)((longlong)local_c8 + lVar13 * 4 + -4) = iVar18 + 1;
          puVar5 = local_c8;
          piVar16 = local_140;
          if (*(ulonglong *)((lVar13 + -1) * 0x20 + local_128 + 0x78) <= (ulonglong)(longlong)iVar18
             ) goto LAB_14558ef85;
          if ((*(uint *)(*(longlong *)((lVar13 + 2) * 0x20 + local_128) +
                        ((ulonglong)(longlong)iVar18 >> 5) * 4) & 1 << ((byte)iVar18 & 0x1f)) == 0)
          {
            iVar9 = iVar9 + 1;
            lVar6 = 0;
            if (0 < (longlong)uVar22) {
              piVar16 = piVar1;
              do {
                *piVar16 = *piVar16 + *(int *)((longlong)piVar16 + (*plVar10 - (longlong)piVar1));
                lVar6 = lVar6 + 1;
                piVar16 = piVar16 + 1;
              } while (lVar6 < (longlong)uVar22);
            }
          }
          lVar12 = lVar12 + 1;
          plVar10 = plVar10 + 3;
        } while (lVar12 < lVar13);
      }
      if (iVar9 == 0) {
        lVar12 = (longlong)(local_138 * iVar7) * 4;
        piVar16 = (int *)(local_118 + lVar12);
        iVar18 = 0;
        iVar9 = *piVar14;
        if (0 < iVar9) {
          lVar6 = 0;
          iVar21 = iVar18;
          do {
            iVar9 = *(int *)(local_118 + (longlong)((iVar7 + -1) * local_138) * 4 + lVar6);
            lVar13 = *(longlong *)(piVar14 + 6);
            if (piVar14[2] < iVar9) {
              *(int *)(lVar6 + lVar13) = piVar14[2];
            }
            else if (iVar9 < piVar14[1]) {
              *(int *)(lVar6 + lVar13) = piVar14[1];
            }
            else {
              *(int *)(lVar6 + lVar13) = iVar9;
            }
            iVar21 = iVar21 + 1;
            lVar6 = lVar6 + 4;
            iVar9 = *piVar14;
          } while (iVar21 < iVar9);
        }
        lVar6 = *(longlong *)(piVar14 + 6);
        if (0 < iVar9) {
          lVar13 = lVar6 - (longlong)piVar16;
          do {
            piVar1 = (int *)(lVar13 + (longlong)piVar16);
            iVar9 = *(int *)((longlong)piVar1 + ((local_110 + lVar12) - lVar6)) + *piVar1;
            *piVar16 = iVar9;
            if (piVar14[2] < iVar9) {
              *piVar16 = iVar9 - piVar14[3];
            }
            else if (iVar9 < piVar14[1]) {
              *piVar16 = piVar14[3] + iVar9;
            }
            iVar18 = iVar18 + 1;
            piVar16 = piVar16 + 1;
          } while (iVar18 < *piVar14);
        }
      }
      else {
        iVar18 = 0;
        uVar20 = 0;
        uVar8 = uVar20;
        if (0 < (longlong)uVar22) {
          do {
            local_140[uVar8] = local_140[uVar8] / iVar9;
            uVar8 = uVar8 + 1;
          } while ((longlong)uVar8 < (longlong)uVar22);
        }
        lVar12 = (longlong)(local_138 * iVar7) * 4;
        piVar16 = (int *)(local_118 + lVar12);
        iVar9 = *piVar14;
        uVar8 = uVar20;
        if (0 < iVar9) {
          do {
            iVar9 = *(int *)(uVar8 + (longlong)local_140);
            lVar6 = *(longlong *)(piVar14 + 6);
            if (piVar14[2] < iVar9) {
              *(int *)(uVar8 + lVar6) = piVar14[2];
            }
            else if (iVar9 < piVar14[1]) {
              *(int *)(uVar8 + lVar6) = piVar14[1];
            }
            else {
              *(int *)(uVar8 + lVar6) = iVar9;
            }
            iVar18 = iVar18 + 1;
            iVar9 = *piVar14;
            uVar8 = uVar8 + 4;
          } while (iVar18 < iVar9);
        }
        lVar6 = *(longlong *)(piVar14 + 6);
        if (0 < iVar9) {
          lVar13 = lVar6 - (longlong)piVar16;
          do {
            piVar1 = (int *)(lVar13 + (longlong)piVar16);
            iVar9 = *(int *)((longlong)piVar1 + ((local_110 + lVar12) - lVar6)) + *piVar1;
            *piVar16 = iVar9;
            if (piVar14[2] < iVar9) {
              *piVar16 = iVar9 - piVar14[3];
            }
            else if (iVar9 < piVar14[1]) {
              *piVar16 = piVar14[3] + iVar9;
            }
            uVar19 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar19;
            piVar16 = piVar16 + 1;
          } while ((int)uVar19 < *piVar14);
        }
      }
      local_148[0] = iVar7 + 1;
      local_100 = local_100 + 1;
      plVar10 = local_130;
      lVar12 = local_128;
      puVar5 = local_c8;
      piVar16 = local_140;
    } while ((longlong)local_100 < local_d0);
  }
LAB_14558ef85:
  if (piVar16 != (int *)0x0) {
    uVar22 = ((longlong)local_e8 - (longlong)piVar16 >> 2) * 4;
    piVar14 = piVar16;
    if (0xfff < uVar22) {
      uVar22 = uVar22 + 0x27;
      piVar14 = *(int **)(piVar16 + -2);
      if (0x1f < (ulonglong)((longlong)piVar16 + (-8 - (longlong)piVar14))) {
LAB_14558efc2:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(piVar14,uVar22);
  }
  if (puVar5 != (undefined8 *)0x0) {
    thunk_FUN_1400020a8(puVar5,0x10);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x18,4,FUN_144b73500);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStackY_178);
}



// FUNCTION 14558f080 FUN_14558f080 body=457 status=ok
// SIG undefined FUN_14558f080(void)

bool FUN_14558f080(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  uint local_res10 [2];
  longlong *local_res18;
  undefined1 local_58 [32];
  
  local_res18 = param_2 + 1;
  if (*(ushort *)((longlong)param_2 + 0x32) < 0x202) {
    lVar1 = param_2[2] + 1;
    if (lVar1 <= *local_res18) {
      cVar4 = *(char *)(param_2[2] + *param_2);
      param_2[2] = lVar1;
      if (cVar4 == '\0') goto LAB_14558f0e3;
    }
LAB_14558f21c:
    bVar10 = false;
  }
  else {
LAB_14558f0e3:
    iVar7 = 0;
    plVar9 = (longlong *)(param_1 + 0x60);
    do {
      lVar1 = param_2[2] + 1;
      if (*local_res18 < lVar1) goto LAB_14558f21c;
      bVar3 = *(byte *)(param_2[2] + *param_2);
      uVar6 = (uint)bVar3;
      param_2[2] = lVar1;
      uVar5 = (uint)bVar3;
      if ((char)bVar3 < '\0') {
        cVar4 = FUN_145594f40(2,local_res10,param_2);
        if (cVar4 == '\0') goto LAB_14558f21c;
        uVar5 = uVar6 & 0x7f | local_res10[0] << 7;
      }
      local_res10[0] = uVar5;
      if ((uint)((*(longlong **)(param_1 + 0x48))[1] - **(longlong **)(param_1 + 0x48) >> 2) <
          local_res10[0]) goto LAB_14558f21c;
      if (local_res10[0] != 0) {
        FUN_148273992(((longlong)iVar7 + 3) * 0x20 + param_1,local_res10[0],0);
        FUN_1453f5dc0(local_58);
        cVar4 = FUN_1453f5de0(local_58,param_2);
        if (cVar4 == '\0') {
          FUN_1453f5dd0(local_58);
          goto LAB_14558f21c;
        }
        uVar8 = 0;
        if (local_res10[0] != 0) {
          do {
            puVar2 = (uint *)(*plVar9 + (uVar8 >> 5) * 4);
            cVar4 = FUN_1453f5f80(local_58);
            uVar6 = 1 << ((byte)uVar8 & 0x1f);
            uVar5 = *puVar2;
            if (cVar4 == '\0') {
              uVar5 = uVar5 & ~uVar6;
            }
            else {
              uVar5 = uVar5 | uVar6;
            }
            *puVar2 = uVar5;
            uVar5 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar5;
          } while (uVar5 < local_res10[0]);
        }
        FUN_1453f5dd0(local_58);
      }
      iVar7 = iVar7 + 1;
      plVar9 = plVar9 + 4;
    } while (iVar7 < 4);
    cVar4 = FUN_14558cc50(param_1 + 0x10,param_2);
    bVar10 = cVar4 != '\0';
  }
  return bVar10;
}



// FUNCTION 14558f250 FUN_14558f250 body=6 status=ok
// SIG undefined FUN_14558f250(void)

undefined8 FUN_14558f250(void)

{
  return 4;
}



// FUNCTION 14558f260 FUN_14558f260 body=34 status=ok
// SIG undefined FUN_14558f260(void)

undefined1 FUN_14558f260(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
      (*(longlong *)(param_1 + 0x50) != 0)) && (*(longlong *)(param_1 + 0x58) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14558f290 FUN_14558f290 body=159 status=ok
// SIG undefined FUN_14558f290(void)

longlong FUN_14558f290(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x60),0x20,4,FUN_144e59ed0);
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = (*(longlong *)(param_1 + 0x38) - lVar1 >> 2) * 4;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14558f330 FUN_14558f330 body=475 status=ok
// SIG undefined FUN_14558f330(void)

ulonglong FUN_14558f330(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       int param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ulonglong in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  longlong local_40;
  
  if (param_5 == 2) {
    *(undefined8 *)(param_1 + 0x68) = param_6;
    *(undefined4 *)(param_1 + 0x78) = 2;
    lVar5 = FUN_144a7d36f(8);
    plVar1 = (longlong *)(param_1 + 0x70);
    if (plVar1 != &local_40) {
      lVar8 = *plVar1;
      *plVar1 = lVar5;
      lVar5 = lVar8;
    }
    if (lVar5 != 0) {
      thunk_FUN_1400020a8(lVar5);
    }
    FUN_14558caf0(param_1 + 0x10,2);
    iVar7 = (int)((*(longlong **)(param_1 + 0x58))[1] - **(longlong **)(param_1 + 0x58) >> 2);
    uVar6 = (longlong)iVar7;
    if (0 < iVar7) {
      uVar9 = 0;
      iVar12 = 0;
      do {
        lVar5 = **(longlong **)(param_1 + 0x58);
        if ((ulonglong)((*(longlong **)(param_1 + 0x58))[1] - lVar5 >> 2) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_1453f6330();
        }
        in_RAX = FUN_14558f720(param_1,*(undefined4 *)(lVar5 + uVar9 * 4),param_3);
        if ((char)in_RAX == '\0') goto LAB_14558f4ef;
        iVar11 = 0;
        uVar4 = *(uint *)(param_1 + 0x10);
        puVar10 = (uint *)((longlong)iVar12 * 4 + param_3);
        lVar5 = *(longlong *)(param_1 + 0x70);
        if (0 < (int)uVar4) {
          lVar8 = 0;
          do {
            iVar3 = *(int *)(lVar8 + lVar5);
            if (*(int *)(param_1 + 0x18) < iVar3) {
              *(int *)(lVar8 + *(longlong *)(param_1 + 0x28)) = *(int *)(param_1 + 0x18);
            }
            else {
              if (iVar3 < *(int *)(param_1 + 0x14)) {
                iVar3 = *(int *)(param_1 + 0x14);
              }
              *(int *)(lVar8 + *(longlong *)(param_1 + 0x28)) = iVar3;
            }
            uVar4 = *(uint *)(param_1 + 0x10);
            iVar11 = iVar11 + 1;
            lVar8 = lVar8 + 4;
          } while (iVar11 < (int)uVar4);
        }
        uVar6 = (ulonglong)uVar4;
        iVar11 = 0;
        lVar5 = *(longlong *)(param_1 + 0x28);
        if (0 < (int)uVar4) {
          lVar8 = lVar5 - (longlong)puVar10;
          do {
            piVar2 = (int *)(lVar8 + (longlong)puVar10);
            uVar4 = *piVar2 + *(int *)((longlong)piVar2 + ((param_2 + (longlong)iVar12 * 4) - lVar5)
                                      );
            uVar6 = (ulonglong)uVar4;
            *puVar10 = uVar4;
            if (*(int *)(param_1 + 0x18) < (int)uVar4) {
              uVar4 = uVar4 - *(int *)(param_1 + 0x1c);
              uVar6 = (ulonglong)uVar4;
              *puVar10 = uVar4;
            }
            else if ((int)uVar4 < *(int *)(param_1 + 0x14)) {
              *puVar10 = *(int *)(param_1 + 0x1c) + uVar4;
            }
            iVar11 = iVar11 + 1;
            puVar10 = puVar10 + 1;
          } while (iVar11 < *(int *)(param_1 + 0x10));
        }
        iVar12 = iVar12 + 2;
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < (longlong)iVar7);
    }
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  else {
LAB_14558f4ef:
    uVar6 = in_RAX & 0xffffffffffffff00;
  }
  return uVar6;
}



// FUNCTION 14558f510 FUN_14558f510 body=387 status=ok
// SIG undefined FUN_14558f510(void)

ulonglong FUN_14558f510(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint local_res10 [2];
  undefined1 local_38 [32];
  
  uVar8 = 0;
  local_res10[0] = 0;
  lVar3 = param_2[2];
  plVar7 = (longlong *)param_2[1];
  if (*(ushort *)((longlong)param_2 + 0x32) < 0x202) {
    if ((longlong)plVar7 < lVar3 + 4) goto LAB_14558f67e;
    plVar7 = (longlong *)*param_2;
    local_res10[0] = *(uint *)(lVar3 + (longlong)plVar7);
    param_2[2] = lVar3 + 4;
  }
  else {
    if ((longlong)plVar7 < lVar3 + 1) goto LAB_14558f67e;
    plVar7 = (longlong *)*param_2;
    bVar2 = *(byte *)(lVar3 + (longlong)plVar7);
    uVar9 = (uint)bVar2;
    param_2[2] = lVar3 + 1;
    if ((char)bVar2 < '\0') {
      plVar7 = (longlong *)FUN_145594f40(2,local_res10,param_2);
      if ((char)plVar7 == '\0') goto LAB_14558f67e;
      plVar7 = (longlong *)(ulonglong)(local_res10[0] << 7);
      local_res10[0] = uVar9 & 0x7f | local_res10[0] << 7;
    }
    else {
      local_res10[0] = (uint)bVar2;
    }
  }
  if ((local_res10[0] != 0) &&
     (plVar7 = *(longlong **)(param_1 + 0x48), local_res10[0] <= (uint)(plVar7[1] - *plVar7 >> 2)))
  {
    FUN_148273992(param_1 + 0x80,local_res10[0],0);
    bVar10 = true;
    bVar4 = true;
    FUN_1453f5dc0(local_38);
    cVar5 = FUN_1453f5de0(local_38,param_2);
    if (cVar5 == '\0') {
      bVar10 = false;
    }
    else {
      if (local_res10[0] != 0) {
        do {
          cVar5 = FUN_1453f5f80(local_38);
          if (cVar5 == '\0') {
            bVar10 = !bVar10;
            bVar4 = bVar10;
          }
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x80) + (ulonglong)(uVar8 >> 5) * 4);
          uVar6 = 1 << ((byte)uVar8 & 0x1f);
          uVar9 = *puVar1;
          if (bVar4) {
            uVar6 = uVar6 | uVar9;
          }
          else {
            uVar6 = ~uVar6 & uVar9;
          }
          *puVar1 = uVar6;
          uVar8 = uVar8 + 1;
        } while (uVar8 < local_res10[0]);
      }
      cVar5 = FUN_14558cc50(param_1 + 0x10,param_2);
      bVar10 = cVar5 != '\0';
    }
    FUN_1453f5dd0(local_38);
    return (ulonglong)bVar10;
  }
LAB_14558f67e:
  return (ulonglong)plVar7 & 0xffffffffffffff00;
}



// FUNCTION 14558f6a0 FUN_14558f6a0 body=6 status=ok
// SIG undefined FUN_14558f6a0(void)

undefined8 FUN_14558f6a0(void)

{
  return 3;
}



// FUNCTION 14558f6b0 FUN_14558f6b0 body=41 status=ok
// SIG undefined FUN_14558f6b0(void)

undefined1 FUN_14558f6b0(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x60) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) &&
      (*(longlong *)(param_1 + 0x48) != 0)) &&
     ((*(longlong *)(param_1 + 0x50) != 0 && (*(longlong *)(param_1 + 0x58) != 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14558f6e0 FUN_14558f6e0 body=6 status=ok
// SIG undefined FUN_14558f6e0(void)

undefined8 FUN_14558f6e0(void)

{
  return 1;
}



// FUNCTION 14558f6f0 FUN_14558f6f0 body=3 status=ok
// SIG undefined FUN_14558f6f0(void)

undefined8 FUN_14558f6f0(void)

{
  return 0;
}



// FUNCTION 14558f700 FUN_14558f700 body=27 status=ok
// SIG undefined FUN_14558f700(void)

undefined1 FUN_14558f700(longlong param_1,longlong param_2)

{
  if (((param_2 != 0) && (*(int *)(param_2 + 0x38) == 0)) && (*(char *)(param_2 + 0x18) == '\x03'))
  {
    *(longlong *)(param_1 + 0x60) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 14558f720 FUN_14558f720 body=1547 status=ok
// SIG undefined FUN_14558f720(void)

void FUN_14558f720(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  double dVar12;
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
  undefined1 auStack_118 [32];
  int local_f8 [2];
  undefined8 local_f0;
  float local_e8;
  float local_e0 [4];
  undefined8 local_d0;
  float local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar10 = -1;
  if (param_2 == 0xffffffff) {
    uVar11 = 0xffffffff;
    iVar9 = -1;
  }
  else {
    iVar9 = 1;
    if (param_2 + 1 == ((param_2 + 1) / 3) * 3) {
      iVar9 = -2;
    }
    uVar11 = param_2 - 1;
    if (param_2 == (param_2 / 3) * 3) {
      uVar11 = param_2 + 2;
    }
    if (iVar9 + param_2 == 0xffffffff) {
      iVar9 = -1;
    }
    else {
      iVar9 = *(int *)(**(longlong **)(param_1 + 0x48) + (ulonglong)(iVar9 + param_2) * 4);
    }
  }
  if (uVar11 != 0xffffffff) {
    iVar10 = *(int *)(**(longlong **)(param_1 + 0x48) + (ulonglong)uVar11 * 4);
  }
  lVar2 = **(longlong **)(param_1 + 0x50);
  uVar4 = (*(longlong **)(param_1 + 0x50))[1] - lVar2 >> 2;
  if ((ulonglong)(longlong)iVar9 < uVar4) {
    iVar9 = *(int *)(lVar2 + (longlong)iVar9 * 4);
    if ((ulonglong)(longlong)iVar10 < uVar4) {
      iVar10 = *(int *)(lVar2 + (longlong)iVar10 * 4);
      if ((iVar10 < param_4) && (iVar9 < param_4)) {
        lVar5 = (longlong)(iVar9 * *(int *)(param_1 + 0x78));
        lVar2 = 0;
        lVar6 = (longlong)(iVar10 * *(int *)(param_1 + 0x78));
        fVar20 = (float)*(int *)(param_3 + 4 + lVar5 * 4);
        fVar15 = (float)*(int *)(param_3 + 4 + lVar6 * 4);
        fVar17 = (float)*(int *)(param_3 + lVar6 * 4);
        fVar14 = (float)*(int *)(param_3 + lVar5 * 4);
        local_f0 = CONCAT44(fVar15,fVar17);
        local_e0[1] = fVar20;
        local_e0[0] = fVar14;
        do {
          if (*(float *)((longlong)&local_f0 + lVar2) != *(float *)((longlong)local_e0 + lVar2)) {
            fVar18 = 0.0;
            uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)param_4 * 4);
            lVar2 = *(longlong *)(param_1 + 0x60);
            local_d0 = 0;
            local_c8 = 0.0;
            if (*(char *)(lVar2 + 100) == '\0') {
              uVar4 = (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x48) + uVar4 * 4);
            }
            FUN_14932a054(lVar2,uVar4,*(undefined1 *)(lVar2 + 0x18),&local_d0);
            lVar2 = *(longlong *)(param_1 + 0x60);
            local_f0 = 0;
            local_e8 = 0.0;
            uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar9 * 4);
            if (*(char *)(lVar2 + 100) == '\0') {
              uVar4 = (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x48) + uVar4 * 4);
            }
            FUN_14932a054(lVar2,uVar4,*(undefined1 *)(lVar2 + 0x18),&local_f0);
            lVar2 = *(longlong *)(param_1 + 0x60);
            local_e0[0] = 0.0;
            local_e0[1] = 0.0;
            local_e0[2] = 0.0;
            uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar10 * 4);
            if (*(char *)(lVar2 + 100) == '\0') {
              uVar4 = (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x48) + uVar4 * 4);
            }
            FUN_14932a054(lVar2,uVar4,*(undefined1 *)(lVar2 + 0x18),local_e0);
            fVar16 = local_e0[0] - (float)local_f0;
            fVar21 = local_e0[1] - local_f0._4_4_;
            fVar22 = local_e0[2] - local_e8;
            fVar13 = fVar16 * fVar16 + 0.0 + fVar21 * fVar21 + fVar22 * fVar22;
            if ((*(int *)(param_1 + 0xa0) < 0x102) || (0.0 < fVar13)) {
              fVar19 = (fVar16 * ((float)local_d0 - (float)local_f0) + 0.0 +
                        fVar21 * (local_d0._4_4_ - local_f0._4_4_) + fVar22 * (local_c8 - local_e8))
                       / fVar13;
              fVar18 = ((float)local_d0 - (float)local_f0) - fVar16 * fVar19;
              fVar16 = (local_d0._4_4_ - local_f0._4_4_) - fVar21 * fVar19;
              fVar21 = (local_c8 - local_e8) - fVar22 * fVar19;
              fVar13 = (fVar18 * fVar18 + 0.0 + fVar16 * fVar16 + fVar21 * fVar21) / fVar13;
              if (fVar13 < 0.0) {
                fVar18 = sqrtf(fVar13);
              }
              else {
                fVar18 = SQRT(fVar13);
              }
            }
            else {
              fVar19 = 0.0;
            }
            fVar17 = fVar17 - fVar14;
            fVar15 = fVar15 - fVar20;
            fVar13 = fVar17 * fVar18;
            fVar14 = fVar17 * fVar19 + fVar14;
            fVar18 = fVar15 * fVar18;
            fVar20 = fVar15 * fVar19 + fVar20;
            if (*(longlong *)(param_1 + 0x98) != 0) {
              puVar3 = (undefined8 *)FUN_14558c780(param_1 + 0x80,&local_d0);
              uVar1 = puVar3[1];
              uVar11 = *(uint *)*puVar3;
              FUN_14558c800(param_1 + 0x80);
              if ((uVar11 & 1 << ((byte)uVar1 & 0x1f)) == 0) {
                fVar14 = fVar18 + fVar14;
                fVar20 = fVar20 - fVar13;
              }
              else {
                fVar14 = fVar14 - fVar18;
                fVar20 = fVar20 + fVar13;
              }
              local_f0 = CONCAT44(fVar20,fVar14);
              dVar12 = floor((double)fVar14 + 0.5);
              if ((2147483647.0 < dVar12) || (dVar12 < -2147483648.0)) {
                **(undefined4 **)(param_1 + 0x70) = 0x80000000;
              }
              else {
                **(int **)(param_1 + 0x70) = (int)dVar12;
              }
              dVar12 = floor((double)local_f0._4_4_ + 0.5);
              if ((2147483647.0 < dVar12) || (dVar12 < -2147483648.0)) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 4) = 0x80000000;
              }
              else {
                *(int *)(*(longlong *)(param_1 + 0x70) + 4) = (int)dVar12;
              }
            }
            goto LAB_14558fb70;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 < 8);
        local_f8[0] = 0;
        piVar8 = local_f8;
        local_f8[1] = 1;
        do {
          lVar2 = (longlong)*piVar8;
          fVar14 = *(float *)((longlong)&local_f0 + lVar2 * 4);
          if ((2.1474836e+09 < fVar14) || (fVar14 < -2.1474836e+09)) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x70) + lVar2 * 4) = 0x80000000;
          }
          else {
            *(int *)(*(longlong *)(param_1 + 0x70) + lVar2 * 4) = (int)fVar14;
          }
          piVar8 = piVar8 + 1;
        } while (piVar8 != (int *)&local_f0);
      }
      else {
        iVar10 = *(int *)(param_1 + 0x78);
        if (param_4 <= iVar9) {
          if (param_4 < 1) {
            iVar9 = 0;
            if (0 < iVar10) {
              lVar2 = 0;
              do {
                iVar9 = iVar9 + 1;
                *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x70)) = 0;
                lVar2 = lVar2 + 4;
              } while (iVar9 < *(int *)(param_1 + 0x78));
            }
            goto LAB_14558fb70;
          }
          iVar9 = param_4 + -1;
        }
        iVar7 = 0;
        if (0 < iVar10) {
          lVar2 = 0;
          do {
            iVar7 = iVar7 + 1;
            *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x70)) =
                 *(undefined4 *)(param_3 + (longlong)(iVar10 * iVar9) * 4 + lVar2);
            lVar2 = lVar2 + 4;
          } while (iVar7 < *(int *)(param_1 + 0x78));
        }
      }
LAB_14558fb70:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_118);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_145589460();
}



// FUNCTION 14558fd50 FUN_14558fd50 body=239 status=ok
// SIG undefined FUN_14558fd50(void)

longlong FUN_14558fd50(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x90) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_14558fe39;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    thunk_FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_14558fe39:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14558fe40 FUN_14558fe40 body=403 status=ok
// SIG undefined FUN_14558fe40(void)

ulonglong FUN_14558fe40(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       int param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  if (param_5 == 2) {
    *(undefined8 *)(param_1 + 0x68) = param_6;
    FUN_14558caf0(param_1 + 0x10,2);
    iVar5 = (int)((*(longlong **)(param_1 + 0x58))[1] - **(longlong **)(param_1 + 0x58) >> 2);
    uVar4 = (longlong)iVar5;
    if (0 < iVar5) {
      uVar7 = 0;
      iVar11 = 0;
      do {
        lVar6 = **(longlong **)(param_1 + 0x58);
        if ((ulonglong)((*(longlong **)(param_1 + 0x58))[1] - lVar6 >> 2) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_1453f6330();
        }
        in_RAX = FUN_145593ec0(param_1 + 0x60,*(undefined4 *)(lVar6 + uVar7 * 4),param_3);
        if ((char)in_RAX == '\0') goto LAB_14558ffaf;
        iVar9 = 0;
        uVar3 = *(uint *)(param_1 + 0x10);
        puVar8 = (uint *)((longlong)iVar11 * 4 + param_3);
        if (0 < (int)uVar3) {
          lVar6 = 0;
          do {
            iVar2 = *(int *)(lVar6 + 0x70 + param_1);
            if (*(int *)(param_1 + 0x18) < iVar2) {
              *(int *)(lVar6 + *(longlong *)(param_1 + 0x28)) = *(int *)(param_1 + 0x18);
            }
            else {
              if (iVar2 < *(int *)(param_1 + 0x14)) {
                iVar2 = *(int *)(param_1 + 0x14);
              }
              *(int *)(lVar6 + *(longlong *)(param_1 + 0x28)) = iVar2;
            }
            uVar3 = *(uint *)(param_1 + 0x10);
            iVar9 = iVar9 + 1;
            lVar6 = lVar6 + 4;
          } while (iVar9 < (int)uVar3);
        }
        uVar4 = (ulonglong)uVar3;
        iVar9 = 0;
        lVar6 = *(longlong *)(param_1 + 0x28);
        if (0 < (int)uVar3) {
          lVar10 = lVar6 - (longlong)puVar8;
          do {
            piVar1 = (int *)(lVar10 + (longlong)puVar8);
            uVar3 = *piVar1 + *(int *)((longlong)piVar1 + ((param_2 + (longlong)iVar11 * 4) - lVar6)
                                      );
            uVar4 = (ulonglong)uVar3;
            *puVar8 = uVar3;
            if (*(int *)(param_1 + 0x18) < (int)uVar3) {
              uVar3 = uVar3 - *(int *)(param_1 + 0x1c);
              uVar4 = (ulonglong)uVar3;
              *puVar8 = uVar3;
            }
            else if ((int)uVar3 < *(int *)(param_1 + 0x14)) {
              *puVar8 = *(int *)(param_1 + 0x1c) + uVar3;
            }
            iVar9 = iVar9 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar9 < *(int *)(param_1 + 0x10));
        }
        iVar11 = iVar11 + 2;
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)iVar5);
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  else {
LAB_14558ffaf:
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  return uVar4;
}



// FUNCTION 14558ffe0 FUN_14558ffe0 body=262 status=ok
// SIG undefined FUN_14558ffe0(void)

ulonglong FUN_14558ffe0(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong in_RAX;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 local_38 [32];
  
  uVar6 = param_2[2] + 4;
  if ((longlong)uVar6 <= (longlong)param_2[1]) {
    in_RAX = *param_2;
    uVar5 = *(uint *)(param_2[2] + in_RAX);
    uVar7 = (ulonglong)uVar5;
    param_2[2] = uVar6;
    if (-1 < (int)uVar5) {
      FUN_148273992(param_1 + 0x78,(longlong)(int)uVar5,0);
      bVar8 = true;
      bVar2 = true;
      FUN_1453f5dc0(local_38);
      cVar3 = FUN_1453f5de0(local_38,param_2);
      if (cVar3 == '\0') {
        bVar8 = false;
      }
      else {
        if (0 < (int)uVar5) {
          uVar6 = 0;
          do {
            cVar3 = FUN_1453f5f80(local_38);
            if (cVar3 == '\0') {
              bVar8 = !bVar8;
              bVar2 = bVar8;
            }
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + (uVar6 >> 5) * 4);
            uVar4 = 1 << ((byte)uVar6 & 0x1f);
            uVar5 = *puVar1;
            if (bVar2) {
              uVar5 = uVar5 | uVar4;
            }
            else {
              uVar5 = uVar5 & ~uVar4;
            }
            *puVar1 = uVar5;
            uVar6 = uVar6 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        cVar3 = FUN_14558cc50(param_1 + 0x10,param_2);
        bVar8 = cVar3 != '\0';
      }
      FUN_1453f5dd0(local_38);
      return (ulonglong)bVar8;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1455900f0 FUN_1455900f0 body=6 status=ok
// SIG undefined FUN_1455900f0(void)

undefined8 FUN_1455900f0(void)

{
  return 5;
}



// FUNCTION 145590100 FUN_145590100 body=41 status=ok
// SIG undefined FUN_145590100(void)

undefined1 FUN_145590100(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x60) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) &&
      (*(longlong *)(param_1 + 0x48) != 0)) &&
     ((*(longlong *)(param_1 + 0x50) != 0 && (*(longlong *)(param_1 + 0x58) != 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 145590130 FUN_145590130 body=6 status=ok
// SIG undefined FUN_145590130(void)

undefined8 FUN_145590130(void)

{
  return 1;
}



// FUNCTION 145590140 FUN_145590140 body=3 status=ok
// SIG undefined FUN_145590140(void)

undefined8 FUN_145590140(void)

{
  return 0;
}



// FUNCTION 145590150 FUN_145590150 body=27 status=ok
// SIG undefined FUN_145590150(void)

undefined1 FUN_145590150(longlong param_1,longlong param_2)

{
  if (((param_2 != 0) && (*(int *)(param_2 + 0x38) == 0)) && (*(char *)(param_2 + 0x18) == '\x03'))
  {
    *(longlong *)(param_1 + 0x60) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 145590170 FUN_145590170 body=219 status=ok
// SIG undefined FUN_145590170(void)

longlong FUN_145590170(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x88) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_145590245;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_145590245:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 145590250 FUN_145590250 body=743 status=ok
// SIG undefined FUN_145590250(void)

void FUN_145590250(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  int local_58 [2];
  undefined8 local_50;
  uint local_48;
  int local_40;
  int iStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x70) = param_6;
  local_50 = 0;
  local_48 = 0;
  iVar4 = (int)((*(longlong **)(param_1 + 0x58))[1] - **(longlong **)(param_1 + 0x58) >> 2);
  if (0 < iVar4) {
    uVar12 = 0;
    param_3 = param_3 - param_2;
    do {
      lVar10 = **(longlong **)(param_1 + 0x58);
      if ((ulonglong)((*(longlong **)(param_1 + 0x58))[1] - lVar10 >> 2) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_1453f6330();
      }
      (**(code **)(*(longlong *)(param_1 + 0x60) + 0x18))
                (param_1 + 0x60,*(undefined4 *)(lVar10 + uVar12 * 4),&local_50);
      iVar5 = *(int *)(param_1 + 0xb0);
      lVar10 = (longlong)
               (int)(((uint)local_50 ^ (int)(uint)local_50 >> 0x1f) - ((int)(uint)local_50 >> 0x1f))
               + (longlong)
                 (int)((local_50._4_4_ ^ (int)local_50._4_4_ >> 0x1f) -
                      ((int)local_50._4_4_ >> 0x1f)) +
               (longlong)(int)((local_48 ^ (int)local_48 >> 0x1f) - ((int)local_48 >> 0x1f));
      if (lVar10 == 0) {
        local_50 = CONCAT44(local_50._4_4_,iVar5);
      }
      else {
        uVar6 = (uint)(((longlong)(int)(uint)local_50 * (longlong)iVar5) / lVar10);
        uVar3 = (uint)(((longlong)(int)local_50._4_4_ * (longlong)iVar5) / lVar10);
        local_50 = CONCAT44(uVar3,uVar6);
        iVar7 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
        iVar9 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
        if ((int)local_48 < 0) {
          local_48 = (iVar7 - iVar5) + iVar9;
        }
        else {
          local_48 = (iVar5 - iVar7) - iVar9;
        }
      }
      cVar2 = FUN_1453f5f80(param_1 + 0xb8);
      if (cVar2 != '\0') {
        local_40 = -(uint)local_50;
        iStack_3c = -local_50._4_4_;
        local_50 = CONCAT44(-local_50._4_4_,-(uint)local_50);
        local_48 = -local_48;
      }
      piVar8 = (int *)(param_1 + 0xa8);
      uVar3 = (uint)((ulonglong)local_50 >> 0x20);
      if ((int)(uint)local_50 < 0) {
        local_58[0] = (local_48 ^ (int)local_48 >> 0x1f) - ((int)local_48 >> 0x1f);
        if (-1 < local_50) {
          local_58[0] = *piVar8 - local_58[0];
        }
        local_58[1] = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
        if (-1 < (int)local_48) {
          local_58[1] = *piVar8 - local_58[1];
        }
      }
      else {
        local_58[0] = uVar3 + *(int *)(param_1 + 0xb0);
        local_58[1] = local_48 + *(int *)(param_1 + 0xb0);
      }
      if (((local_58[0] == 0) && ((local_58[1] == 0 || (local_58[1] == *piVar8)))) ||
         ((iVar5 = *piVar8, local_58[0] == iVar5 && (local_58[1] == 0)))) {
        local_58[0] = *piVar8;
        local_58[1] = local_58[0];
      }
      else {
        iVar9 = *(int *)(param_1 + 0xb0);
        if ((local_58[0] == 0) && (iVar9 < local_58[1])) {
          local_58[1] = iVar9 * 2 - local_58[1];
        }
        else if ((local_58[0] == iVar5) && (local_58[1] < iVar9)) {
          local_58[1] = iVar9 * 2 - local_58[1];
        }
        else if (((local_58[1] == iVar5) && (local_58[0] < iVar9)) ||
                ((local_58[1] == 0 && (iVar9 < local_58[0])))) {
          local_58[0] = iVar9 * 2 - local_58[0];
        }
      }
      iVar5 = *(int *)(param_1 + 0x10);
      iVar9 = 0;
      piVar8 = (int *)(param_3 + param_2);
      if (0 < iVar5) {
        lVar10 = 0;
        do {
          iVar5 = *(int *)((longlong)local_58 + lVar10);
          if (*(int *)(param_1 + 0x18) < iVar5) {
            *(int *)(lVar10 + *(longlong *)(param_1 + 0x28)) = *(int *)(param_1 + 0x18);
          }
          else {
            if (iVar5 < *(int *)(param_1 + 0x14)) {
              iVar5 = *(int *)(param_1 + 0x14);
            }
            *(int *)(lVar10 + *(longlong *)(param_1 + 0x28)) = iVar5;
          }
          iVar5 = *(int *)(param_1 + 0x10);
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 4;
        } while (iVar9 < iVar5);
      }
      lVar10 = *(longlong *)(param_1 + 0x28);
      iVar9 = 0;
      if (0 < iVar5) {
        lVar11 = param_2 - (longlong)piVar8;
        do {
          piVar1 = (int *)(lVar11 + (longlong)piVar8);
          iVar5 = *(int *)((longlong)piVar1 + (lVar10 - param_2)) + *piVar1;
          *piVar8 = iVar5;
          if (*(int *)(param_1 + 0x18) < iVar5) {
            *piVar8 = iVar5 - *(int *)(param_1 + 0x1c);
          }
          else if (iVar5 < *(int *)(param_1 + 0x14)) {
            *piVar8 = *(int *)(param_1 + 0x1c) + iVar5;
          }
          iVar9 = iVar9 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x10));
      }
      uVar12 = uVar12 + 1;
      param_2 = param_2 + 8;
    } while ((longlong)uVar12 < (longlong)iVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 145590560 FUN_145590560 body=123 status=ok
// SIG undefined FUN_145590560(void)

bool FUN_145590560(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  
  cVar3 = FUN_14558cc50(param_1 + 0x10);
  if (cVar3 != '\0') {
    if (0x201 < *(ushort *)((longlong)param_2 + 0x32)) {
LAB_1455905af:
      cVar3 = FUN_1453f5de0(param_1 + 0xb8,param_2);
      return cVar3 != '\0';
    }
    lVar1 = param_2[2] + 1;
    if (lVar1 <= param_2[1]) {
      uVar2 = *(undefined1 *)(param_2[2] + *param_2);
      param_2[2] = lVar1;
      cVar3 = (**(code **)(*(longlong *)(param_1 + 0x60) + 8))((longlong *)(param_1 + 0x60),uVar2);
      if (cVar3 != '\0') goto LAB_1455905af;
    }
  }
  return false;
}



// FUNCTION 1455905e0 FUN_1455905e0 body=6 status=ok
// SIG undefined FUN_1455905e0(void)

undefined8 FUN_1455905e0(void)

{
  return 6;
}



// FUNCTION 1455905f0 FUN_1455905f0 body=56 status=ok
// SIG undefined FUN_1455905f0(void)

bool FUN_1455905f0(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x68) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
      (*(longlong *)(param_1 + 0x40) != 0)) &&
     (((*(longlong *)(param_1 + 0x48) != 0 && (*(longlong *)(param_1 + 0x50) != 0)) &&
      (*(longlong *)(param_1 + 0x58) != 0)))) {
    return *(int *)(param_1 + 0xa0) != -1;
  }
  return false;
}



// FUNCTION 145590630 FUN_145590630 body=6 status=ok
// SIG undefined FUN_145590630(void)

undefined8 FUN_145590630(void)

{
  return 1;
}



// FUNCTION 145590640 FUN_145590640 body=3 status=ok
// SIG undefined FUN_145590640(void)

undefined8 FUN_145590640(void)

{
  return 0;
}



// FUNCTION 145590650 FUN_145590650 body=22 status=ok
// SIG undefined FUN_145590650(void)

undefined1 FUN_145590650(longlong param_1,longlong param_2)

{
  if ((*(int *)(param_2 + 0x38) == 0) && (*(char *)(param_2 + 0x18) == '\x03')) {
    *(longlong *)(param_1 + 0x68) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 145590670 FUN_145590670 body=4 status=ok
// SIG undefined FUN_145590670(void)

undefined4 FUN_145590670(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// FUNCTION 145590680 FUN_145590680 body=43 status=ok
// SIG undefined FUN_145590680(void)

undefined8 * FUN_145590680(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = draco::
             MeshPredictionSchemeGeometricNormalPredictorBase<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
             ::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1455906c0 FUN_1455906c0 body=1264 status=ok
// SIG undefined FUN_1455906c0(void)

void FUN_1455906c0(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  ulonglong local_a0;
  longlong lStack_98;
  longlong local_90;
  ulonglong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = *(longlong **)(param_1 + 0x20);
  bVar2 = true;
  if (param_2 == 0xffffffff) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = *(uint *)(*plVar1 + (ulonglong)param_2 * 4);
  }
  lVar3 = **(longlong **)(param_1 + 0x28);
  local_a8 = param_3;
  if ((ulonglong)((*(longlong **)(param_1 + 0x28))[1] - lVar3 >> 2) <= (ulonglong)uVar7) {
LAB_145590bbc:
                    /* WARNING: Subroutine does not return */
    FUN_145589460();
  }
  uVar10 = (ulonglong)
           *(uint *)(*(longlong *)(param_1 + 0x10) +
                    (longlong)*(int *)(lVar3 + (ulonglong)uVar7 * 4) * 4);
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar3 + 100) == '\0') {
    uVar10 = (ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x48) + uVar10 * 4);
  }
  uVar8 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  FUN_145594980(lVar3,uVar10,*(undefined1 *)(lVar3 + 0x18),&local_58);
  local_90 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  if (param_2 != 0xffffffff) {
    uVar10 = (ulonglong)param_2;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)(param_1 + 0x38) == 0) {
        iVar6 = 1;
        if (param_2 + 1 == ((param_2 + 1) / 3) * 3) {
          iVar6 = -2;
        }
        uVar7 = iVar6 + param_2;
        uVar5 = param_2 - 1;
        if (param_2 == (param_2 / 3) * 3) {
          uVar5 = param_2 + 2;
        }
      }
      else {
        if (iVar9 == -1) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = iVar9 + 1;
          if (uVar7 == (uVar7 / 3) * 3) {
            uVar7 = iVar9 - 2;
          }
        }
        if (iVar9 == -1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = iVar9 - 1;
          if (iVar9 == (int)(uVar10 / 3) * 3) {
            uVar5 = iVar9 + 2;
          }
        }
      }
      if (uVar7 == 0xffffffff) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(uint *)(**(longlong **)(param_1 + 0x20) + (ulonglong)uVar7 * 4);
      }
      lVar3 = **(longlong **)(param_1 + 0x28);
      if ((ulonglong)((*(longlong **)(param_1 + 0x28))[1] - lVar3 >> 2) <= (ulonglong)uVar7)
      goto LAB_145590bbc;
      uVar4 = (ulonglong)
              *(uint *)(*(longlong *)(param_1 + 0x10) +
                       (longlong)*(int *)(lVar3 + (ulonglong)uVar7 * 4) * 4);
      lVar3 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar3 + 100) == '\0') {
        uVar4 = (ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x48) + uVar4 * 4);
      }
      local_60 = 0;
      local_70 = 0;
      lStack_68 = 0;
      FUN_145594980(lVar3,uVar4,*(undefined1 *)(lVar3 + 0x18),&local_70);
      if (uVar5 == 0xffffffff) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(uint *)(**(longlong **)(param_1 + 0x20) + (ulonglong)uVar5 * 4);
      }
      lVar3 = **(longlong **)(param_1 + 0x28);
      if ((ulonglong)((*(longlong **)(param_1 + 0x28))[1] - lVar3 >> 2) <= (ulonglong)uVar7)
      goto LAB_145590bbc;
      uVar4 = (ulonglong)
              *(uint *)(*(longlong *)(param_1 + 0x10) +
                       (longlong)*(int *)(lVar3 + (ulonglong)uVar7 * 4) * 4);
      lVar3 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar3 + 100) == '\0') {
        uVar4 = (ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x48) + uVar4 * 4);
      }
      local_78 = 0;
      local_88 = 0;
      lStack_80 = 0;
      FUN_145594980(lVar3,uVar4,*(undefined1 *)(lVar3 + 0x18),&local_88);
      local_a0 = local_a0 +
                 ((lStack_68 - lStack_50) * (local_78 - local_48) -
                 (lStack_80 - lStack_50) * (local_60 - local_48));
      local_90 = local_90 +
                 ((local_70 - local_58) * (lStack_80 - lStack_50) -
                 (local_88 - local_58) * (lStack_68 - lStack_50));
      lStack_98 = lStack_98 +
                  ((local_88 - local_58) * (local_60 - local_48) -
                  (local_70 - local_58) * (local_78 - local_48));
      param_3 = local_a8;
      if (bVar2) {
        if (iVar9 != -1) {
          uVar7 = iVar9 + 1;
          if (uVar7 == (uVar7 / 3) * 3) {
            uVar7 = iVar9 - 2;
          }
          if ((uVar7 != 0xffffffff) &&
             (iVar9 = *(int *)(plVar1[3] + (ulonglong)uVar7 * 4), iVar9 != -1)) {
            uVar7 = iVar9 + 1;
            if (uVar7 == (uVar7 / 3) * 3) {
              uVar7 = iVar9 - 2;
            }
            uVar10 = (ulonglong)uVar7;
            if (uVar7 != 0xffffffff) {
              if (uVar7 != param_2) goto LAB_145590a71;
              break;
            }
          }
        }
        uVar7 = param_2 - 1;
        if (param_2 == (param_2 / 3) * 3) {
          uVar7 = param_2 + 2;
        }
        if ((uVar7 == 0xffffffff) ||
           (uVar7 = *(uint *)(plVar1[3] + (ulonglong)uVar7 * 4), uVar7 == 0xffffffff)) {
          uVar10 = 0xffffffff;
          bVar2 = false;
        }
        else if (uVar7 == (uVar7 / 3) * 3) {
          uVar10 = (ulonglong)(uVar7 + 2);
          bVar2 = false;
        }
        else {
          uVar10 = (ulonglong)(uVar7 - 1);
          bVar2 = false;
        }
      }
      else {
        if (iVar9 != -1) {
          if (iVar9 == (int)(uVar10 / 3) * 3) {
            uVar7 = iVar9 + 2;
          }
          else {
            uVar7 = iVar9 - 1;
          }
          if ((uVar7 != 0xffffffff) &&
             (uVar7 = *(uint *)(plVar1[3] + (ulonglong)uVar7 * 4), uVar7 != 0xffffffff)) {
            if (uVar7 == (uVar7 / 3) * 3) {
              uVar10 = (ulonglong)(uVar7 + 2);
            }
            else {
              uVar10 = (ulonglong)(uVar7 - 1);
            }
            goto LAB_145590a71;
          }
        }
        uVar10 = 0xffffffff;
      }
LAB_145590a71:
    } while ((int)uVar10 != -1);
  }
  uVar10 = uVar8;
  if (*(int *)(param_1 + 0x38) == 0) {
    do {
      uVar4 = (longlong)(&local_a0)[uVar8] >> 0x3f;
      lVar3 = ((&local_a0)[uVar8] ^ uVar4) - uVar4;
      if (0x7fffffffffffffff - lVar3 < (longlong)uVar10) {
        uVar10 = 0x7fffffffffffffff;
        break;
      }
      uVar10 = uVar10 + lVar3;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < 3);
    iVar9 = (int)uVar10;
    if (iVar9 < 0x20000001) goto LAB_145590b7e;
    uVar10 = (longlong)((ulonglong)(iVar9 >> 0x1f & 0x1fffffff) + (longlong)iVar9) >> 0x1d;
  }
  else {
    do {
      uVar4 = (longlong)(&local_a0)[uVar8] >> 0x3f;
      lVar3 = ((&local_a0)[uVar8] ^ uVar4) - uVar4;
      if (0x7fffffffffffffff - lVar3 < (longlong)uVar10) {
        uVar10 = 0x7fffffffffffffff;
        goto LAB_145590b42;
      }
      uVar10 = uVar10 + lVar3;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < 3);
    if ((longlong)uVar10 < 0x20000001) goto LAB_145590b7e;
LAB_145590b42:
    uVar10 = uVar10 >> 0x1d;
  }
  lStack_80 = lStack_98 / (longlong)uVar10;
  local_88 = (longlong)local_a0 / (longlong)uVar10;
  uVar4 = local_90 % (longlong)uVar10;
  local_90 = local_90 / (longlong)uVar10;
  local_a0 = local_88;
  lStack_98 = lStack_80;
  local_78 = local_90;
LAB_145590b7e:
  *param_3 = (undefined4)local_a0;
  param_3[1] = (undefined4)lStack_98;
  param_3[2] = (undefined4)local_90;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8,uVar4);
}



// FUNCTION 145590bd0 FUN_145590bd0 body=25 status=ok
// SIG undefined FUN_145590bd0(void)

undefined4 FUN_145590bd0(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return 1;
  }
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    return 1;
  }
  return 0;
}



// FUNCTION 145590bf0 FUN_145590bf0 body=43 status=ok
// SIG undefined FUN_145590bf0(void)

undefined8 * FUN_145590bf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = draco::
             MeshPredictionSchemeGeometricNormalPredictorBase<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
             ::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 145590c20 FUN_145590c20 body=149 status=ok
// SIG undefined FUN_145590c20(void)

longlong FUN_145590c20(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_1453f5dd0(param_1 + 0xb8);
  *(undefined ***)(param_1 + 0x60) =
       draco::
       MeshPredictionSchemeGeometricNormalPredictorBase<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::CornerTable>_>
       ::vftable;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 145590cc0 ~pair<> body=93 status=ok
// SIG undefined ~pair<>(void)

/* Library Function - Multiple Matches With Same Base Name
    public: __cdecl std::pair<unsigned long const ,class std::vector<struct CHN * __ptr64,class
   std::allocator<struct CHN * __ptr64> > >::~pair<unsigned long const ,class std::vector<struct CHN
   * __ptr64,class std::allocator<struct CHN * __ptr64> > >(void) __ptr64
    public: __cdecl std::pair<unsigned long,class std::vector<struct CHN * __ptr64,class
   std::allocator<struct CHN * __ptr64> > >::~pair<unsigned long,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void ~pair<>(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 145590d20 FID_conflict:`scalar_deleting_destructor' body=126 status=ok
// SIG undefined FID_conflict:`scalar_deleting_destructor'(void)

/* Library Function - Multiple Matches With Different Base Names
    public: void * __ptr64 __cdecl std::pair<unsigned long const ,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
    public: void * __ptr64 __cdecl std::pair<unsigned long,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
   
   Library: Visual Studio 2019 Release */

longlong FID_conflict__scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 145590da0 FUN_145590da0 body=987 status=ok
// SIG undefined FUN_145590da0(void)

undefined8
FUN_145590da0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  size_t _Size;
  void *_Dst;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  
  piVar1 = (int *)(param_1 + 0x10);
  FUN_14558caf0(piVar1,param_5);
  plVar4 = *(longlong **)(param_1 + 0x48);
  plVar5 = *(longlong **)(param_1 + 0x50);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (longlong)param_5;
  _Size = SUB168(ZEXT816(4) * auVar6,0);
  if (SUB168(ZEXT816(4) * auVar6,8) != 0) {
    _Size = 0xffffffffffffffff;
  }
  _Dst = (void *)FUN_144a7d36f(_Size);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    memset(_Dst,0,_Size);
  }
  FUN_14558cb90(piVar1,_Dst,param_2);
  iVar17 = 1;
  lVar7 = (longlong)
          (int)((*(longlong **)(param_1 + 0x58))[1] - **(longlong **)(param_1 + 0x58) >> 2);
  if (1 < lVar7) {
    uVar18 = 1;
    iVar12 = param_5;
    do {
      lVar9 = **(longlong **)(param_1 + 0x58);
      if ((ulonglong)((*(longlong **)(param_1 + 0x58))[1] - lVar9 >> 2) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_1453f6330();
      }
      uVar8 = *(uint *)(lVar9 + uVar18 * 4);
      if ((uVar8 == 0xffffffff) ||
         ((*(uint *)(*plVar4 + (ulonglong)(uVar8 >> 5) * 4) & 1 << ((byte)uVar8 & 0x1f)) != 0)) {
LAB_145591080:
        piVar14 = (int *)(param_3 + (longlong)iVar12 * 4);
        iVar15 = 0;
        iVar11 = *piVar1;
        if (0 < iVar11) {
          lVar9 = 0;
          do {
            iVar11 = *(int *)(lVar9 + param_3 + (longlong)(iVar12 - param_5) * 4);
            lVar16 = *(longlong *)(param_1 + 0x28);
            if (*(int *)(param_1 + 0x18) < iVar11) {
              *(int *)(lVar9 + lVar16) = *(int *)(param_1 + 0x18);
            }
            else if (iVar11 < *(int *)(param_1 + 0x14)) {
              *(int *)(lVar9 + lVar16) = *(int *)(param_1 + 0x14);
            }
            else {
              *(int *)(lVar9 + lVar16) = iVar11;
            }
            iVar15 = iVar15 + 1;
            lVar9 = lVar9 + 4;
            iVar11 = *piVar1;
          } while (iVar15 < iVar11);
        }
        lVar9 = *(longlong *)(param_1 + 0x28);
        iVar15 = 0;
        if (0 < iVar11) {
          lVar16 = lVar9 - (longlong)piVar14;
          do {
            piVar2 = (int *)(lVar16 + (longlong)piVar14);
            iVar11 = *(int *)((longlong)piVar2 + ((param_2 + (longlong)iVar12 * 4) - lVar9)) +
                     *piVar2;
            *piVar14 = iVar11;
            if (*(int *)(param_1 + 0x18) < iVar11) {
              *piVar14 = iVar11 - *(int *)(param_1 + 0x1c);
            }
            else if (iVar11 < *(int *)(param_1 + 0x14)) {
              *piVar14 = *(int *)(param_1 + 0x1c) + iVar11;
            }
            iVar15 = iVar15 + 1;
            piVar14 = piVar14 + 1;
          } while (iVar15 < *piVar1);
        }
      }
      else {
        uVar8 = *(uint *)(*(longlong *)(plVar4[0x12] + 0x18) + (ulonglong)uVar8 * 4);
        if (uVar8 == 0xffffffff) goto LAB_145591080;
        lVar9 = plVar4[9];
        lVar16 = *plVar5;
        iVar11 = *(int *)(lVar16 + (ulonglong)*(uint *)(lVar9 + (ulonglong)uVar8 * 4) * 4);
        uVar13 = uVar8 + 1;
        if (uVar13 == (uVar13 / 3) * 3) {
          uVar13 = uVar8 - 2;
        }
        iVar15 = *(int *)(lVar16 + (ulonglong)*(uint *)(lVar9 + (ulonglong)uVar13 * 4) * 4);
        if (uVar8 == (uVar8 / 3) * 3) {
          uVar8 = uVar8 + 2;
        }
        else {
          uVar8 = uVar8 - 1;
        }
        iVar3 = *(int *)(lVar16 + (ulonglong)*(uint *)(lVar9 + (ulonglong)uVar8 * 4) * 4);
        if (((iVar17 <= iVar11) || (iVar17 <= iVar15)) || (iVar17 <= iVar3)) goto LAB_145591080;
        if (0 < param_5) {
          lVar9 = (longlong)(iVar3 * param_5);
          piVar14 = (int *)(lVar9 * 4 + param_3);
          uVar10 = (longlong)param_5;
          do {
            *(int *)((longlong)piVar14 + (longlong)_Dst + (lVar9 * -4 - param_3)) =
                 (piVar14[iVar15 * param_5 - lVar9] - piVar14[iVar11 * param_5 - lVar9]) + *piVar14;
            piVar14 = piVar14 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        piVar14 = (int *)(param_3 + (longlong)iVar12 * 4);
        iVar15 = 0;
        iVar11 = *piVar1;
        if (0 < iVar11) {
          lVar9 = 0;
          do {
            iVar11 = *(int *)((longlong)_Dst + lVar9);
            lVar16 = *(longlong *)(param_1 + 0x28);
            if (*(int *)(param_1 + 0x18) < iVar11) {
              *(int *)(lVar9 + lVar16) = *(int *)(param_1 + 0x18);
            }
            else if (iVar11 < *(int *)(param_1 + 0x14)) {
              *(int *)(lVar9 + lVar16) = *(int *)(param_1 + 0x14);
            }
            else {
              *(int *)(lVar9 + lVar16) = iVar11;
            }
            iVar15 = iVar15 + 1;
            lVar9 = lVar9 + 4;
            iVar11 = *piVar1;
          } while (iVar15 < iVar11);
        }
        lVar9 = *(longlong *)(param_1 + 0x28);
        iVar15 = 0;
        if (0 < iVar11) {
          lVar16 = lVar9 - (longlong)piVar14;
          do {
            piVar2 = (int *)(lVar16 + (longlong)piVar14);
            iVar11 = *(int *)((longlong)piVar2 + ((param_2 + (longlong)iVar12 * 4) - lVar9)) +
                     *piVar2;
            *piVar14 = iVar11;
            if (*(int *)(param_1 + 0x18) < iVar11) {
              *piVar14 = iVar11 - *(int *)(param_1 + 0x1c);
            }
            else if (iVar11 < *(int *)(param_1 + 0x14)) {
              *piVar14 = *(int *)(param_1 + 0x1c) + iVar11;
            }
            iVar15 = iVar15 + 1;
            piVar14 = piVar14 + 1;
          } while (iVar15 < *piVar1);
        }
      }
      iVar17 = iVar17 + 1;
      iVar12 = iVar12 + param_5;
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 < lVar7);
  }
  if (_Dst != (void *)0x0) {
    thunk_FUN_1400020a8(_Dst);
  }
  return 1;
}



// FUNCTION 145591180 FUN_145591180 body=6 status=ok
// SIG undefined FUN_145591180(void)

undefined8 FUN_145591180(void)

{
  return 1;
}



// FUNCTION 145591190 FUN_145591190 body=34 status=ok
// SIG undefined FUN_145591190(void)

undefined1 FUN_145591190(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
      (*(longlong *)(param_1 + 0x50) != 0)) && (*(longlong *)(param_1 + 0x58) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1455911c0 FID_conflict:`scalar_deleting_destructor' body=126 status=ok
// SIG undefined FID_conflict:`scalar_deleting_destructor'(void)

/* Library Function - Multiple Matches With Different Base Names
    public: void * __ptr64 __cdecl std::pair<unsigned long const ,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
    public: void * __ptr64 __cdecl std::pair<unsigned long,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
   
   Library: Visual Studio 2019 Release */

longlong FID_conflict__scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 145591240 FUN_145591240 body=1604 status=ok
// SIG undefined FUN_145591240(void)

undefined8
FUN_145591240(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  size_t sVar10;
  void *_Dst;
  longlong lVar11;
  int *piVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int local_78;
  void *local_70;
  ulonglong local_58;
  
  uVar21 = (ulonglong)(int)param_5;
  piVar1 = (int *)(param_1 + 0x10);
  FUN_14558caf0(piVar1,param_5);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar21;
  sVar10 = SUB168(ZEXT816(4) * auVar8,0);
  if (SUB168(ZEXT816(4) * auVar8,8) != 0) {
    sVar10 = 0xffffffffffffffff;
  }
  _Dst = (void *)FUN_144a7d36f(sVar10);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    memset(_Dst,0,sVar10);
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar21;
  sVar10 = SUB168(ZEXT816(4) * auVar9,0);
  if (SUB168(ZEXT816(4) * auVar9,8) != 0) {
    sVar10 = 0xffffffffffffffff;
  }
  local_70 = (void *)FUN_144a7d36f(sVar10);
  if (local_70 == (void *)0x0) {
    local_70 = (void *)0x0;
  }
  else {
    memset(local_70,0,sVar10);
  }
  FUN_14558cb90(piVar1,_Dst,param_2);
  plVar6 = *(longlong **)(param_1 + 0x48);
  plVar7 = *(longlong **)(param_1 + 0x50);
  local_78 = 1;
  lVar11 = (longlong)
           (int)((*(longlong **)(param_1 + 0x58))[1] - **(longlong **)(param_1 + 0x58) >> 2);
  if (1 < lVar11) {
    local_58 = 1;
    uVar22 = uVar21;
    do {
      lVar19 = **(longlong **)(param_1 + 0x58);
      if ((ulonglong)((*(longlong **)(param_1 + 0x58))[1] - lVar19 >> 2) <= local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_1453f6330();
      }
      uVar3 = *(uint *)(lVar19 + local_58 * 4);
      iVar15 = 0;
      if (0 < (int)uVar22) {
        memset(_Dst,0,uVar21 << 2);
      }
      uVar16 = uVar3;
      iVar18 = 0;
      if (uVar3 != 0xffffffff) {
        do {
          iVar15 = iVar18;
          if ((*(uint *)(*plVar6 + (ulonglong)(uVar16 >> 5) * 4) & 1 << ((byte)uVar16 & 0x1f)) == 0)
          {
            uVar13 = *(uint *)(*(longlong *)(plVar6[0x12] + 0x18) + (ulonglong)uVar16 * 4);
            if (uVar13 == 0xffffffff) goto LAB_1455915ca;
            lVar19 = plVar6[9];
            lVar14 = *plVar7;
            iVar18 = *(int *)(lVar14 + (ulonglong)*(uint *)(lVar19 + (ulonglong)uVar13 * 4) * 4);
            uVar17 = uVar13 + 1;
            if (uVar17 == (uVar17 / 3) * 3) {
              uVar17 = uVar13 - 2;
            }
            iVar4 = *(int *)(lVar14 + (ulonglong)*(uint *)(lVar19 + (ulonglong)uVar17 * 4) * 4);
            if (uVar13 == (uVar13 / 3) * 3) {
              uVar13 = uVar13 + 2;
            }
            else {
              uVar13 = uVar13 - 1;
            }
            iVar5 = *(int *)(lVar14 + (ulonglong)*(uint *)(lVar19 + (ulonglong)uVar13 * 4) * 4);
            if (((iVar18 < local_78) && (iVar4 < local_78)) && (iVar5 < local_78)) {
              uVar22 = (ulonglong)(int)param_5;
              lVar19 = 0;
              if (0 < (longlong)uVar21) {
                lVar14 = (longlong)(int)(iVar5 * param_5);
                piVar12 = (int *)(param_3 + lVar14 * 4);
                do {
                  *(int *)((longlong)local_70 + (lVar14 * -4 - param_3) + (longlong)piVar12) =
                       (piVar12[(int)(iVar4 * param_5) - lVar14] -
                       piVar12[(int)(iVar18 * param_5) - lVar14]) + *piVar12;
                  lVar19 = lVar19 + 1;
                  piVar12 = piVar12 + 1;
                } while (lVar19 < (longlong)uVar21);
              }
              lVar19 = 0;
              if (((0 < (int)param_5) && (0xf < param_5)) &&
                 (((void *)((longlong)local_70 + (uVar22 - 1) * 4) < _Dst ||
                  ((void *)(uVar22 * 4 + -4 + (longlong)_Dst) < local_70)))) {
                piVar12 = (int *)((longlong)_Dst + 0x10);
                lVar14 = (longlong)local_70 - (longlong)_Dst;
                do {
                  piVar2 = (int *)((longlong)piVar12 + lVar14 + -0x10);
                  iVar18 = piVar2[1];
                  iVar4 = piVar2[2];
                  iVar5 = piVar2[3];
                  piVar12[-4] = *piVar2 + piVar12[-4];
                  piVar12[-3] = iVar18 + piVar12[-3];
                  piVar12[-2] = iVar4 + piVar12[-2];
                  piVar12[-1] = iVar5 + piVar12[-1];
                  piVar2 = (int *)((longlong)piVar12 + lVar14);
                  iVar18 = piVar2[1];
                  iVar4 = piVar2[2];
                  iVar5 = piVar2[3];
                  *piVar12 = *piVar2 + *piVar12;
                  piVar12[1] = iVar18 + piVar12[1];
                  piVar12[2] = iVar4 + piVar12[2];
                  piVar12[3] = iVar5 + piVar12[3];
                  piVar2 = (int *)((longlong)piVar12 + lVar14 + 0x10);
                  iVar18 = piVar2[1];
                  iVar4 = piVar2[2];
                  iVar5 = piVar2[3];
                  piVar12[4] = *piVar2 + piVar12[4];
                  piVar12[5] = iVar18 + piVar12[5];
                  piVar12[6] = iVar4 + piVar12[6];
                  piVar12[7] = iVar5 + piVar12[7];
                  piVar2 = (int *)((longlong)piVar12 + lVar14 + 0x20);
                  iVar18 = piVar2[1];
                  iVar4 = piVar2[2];
                  iVar5 = piVar2[3];
                  piVar12[8] = *piVar2 + piVar12[8];
                  piVar12[9] = iVar18 + piVar12[9];
                  piVar12[10] = iVar4 + piVar12[10];
                  piVar12[0xb] = iVar5 + piVar12[0xb];
                  lVar19 = lVar19 + 0x10;
                  piVar12 = piVar12 + 0x10;
                } while (lVar19 < (int)(param_5 & 0xfffffff0));
              }
              if (lVar19 < (longlong)uVar21) {
                piVar12 = (int *)(lVar19 * 4 + (longlong)_Dst);
                do {
                  *piVar12 = *piVar12 +
                             *(int *)((longlong)piVar12 + ((longlong)local_70 - (longlong)_Dst));
                  lVar19 = lVar19 + 1;
                  piVar12 = piVar12 + 1;
                } while (lVar19 < (longlong)uVar21);
              }
              iVar15 = iVar15 + 1;
            }
            else {
              uVar22 = (ulonglong)param_5;
            }
          }
          else {
LAB_1455915ca:
            if (uVar16 == 0xffffffff) break;
          }
          uVar13 = uVar16 - 1;
          if (uVar16 == (uVar16 / 3) * 3) {
            uVar13 = uVar16 + 2;
          }
          if (((uVar13 == 0xffffffff) ||
              ((*(uint *)(*plVar6 + (ulonglong)(uVar13 >> 5) * 4) & 1 << ((byte)uVar13 & 0x1f)) != 0
              )) || (uVar13 = *(uint *)(*(longlong *)(plVar6[0x12] + 0x18) + (ulonglong)uVar13 * 4),
                    uVar13 == 0xffffffff)) break;
          uVar16 = uVar13 - 1;
          if (uVar13 == (uVar13 / 3) * 3) {
            uVar16 = uVar13 + 2;
          }
          if ((uVar16 == uVar3) || (iVar18 = iVar15, uVar16 == 0xffffffff)) break;
        } while( true );
      }
      iVar18 = local_78 * (int)uVar22;
      if (iVar15 == 0) {
        lVar19 = (longlong)iVar18 * 4;
        piVar12 = (int *)(lVar19 + param_3);
        iVar18 = 0;
        iVar15 = *piVar1;
        if (0 < iVar15) {
          lVar14 = 0;
          do {
            iVar15 = *(int *)((longlong)((local_78 + -1) * (int)uVar22) * 4 + param_3 + lVar14);
            lVar20 = *(longlong *)(param_1 + 0x28);
            if (*(int *)(param_1 + 0x18) < iVar15) {
              *(int *)(lVar14 + lVar20) = *(int *)(param_1 + 0x18);
            }
            else if (iVar15 < *(int *)(param_1 + 0x14)) {
              *(int *)(lVar14 + lVar20) = *(int *)(param_1 + 0x14);
            }
            else {
              *(int *)(lVar14 + lVar20) = iVar15;
            }
            iVar18 = iVar18 + 1;
            lVar14 = lVar14 + 4;
            iVar15 = *piVar1;
          } while (iVar18 < iVar15);
        }
        lVar14 = *(longlong *)(param_1 + 0x28);
        iVar18 = 0;
        if (0 < iVar15) {
          lVar20 = lVar14 - (longlong)piVar12;
          do {
            piVar2 = (int *)(lVar20 + (longlong)piVar12);
            iVar15 = *(int *)((longlong)piVar2 + ((param_2 + lVar19) - lVar14)) + *piVar2;
            *piVar12 = iVar15;
            if (*(int *)(param_1 + 0x18) < iVar15) {
              *piVar12 = iVar15 - *(int *)(param_1 + 0x1c);
            }
            else if (iVar15 < *(int *)(param_1 + 0x14)) {
              *piVar12 = *(int *)(param_1 + 0x1c) + iVar15;
            }
            iVar18 = iVar18 + 1;
            piVar12 = piVar12 + 1;
          } while (iVar18 < *piVar1);
        }
      }
      else {
        lVar19 = 0;
        if (0 < (longlong)uVar21) {
          do {
            *(int *)((longlong)_Dst + lVar19 * 4) = *(int *)((longlong)_Dst + lVar19 * 4) / iVar15;
            lVar19 = lVar19 + 1;
          } while (lVar19 < (longlong)uVar21);
        }
        lVar19 = (longlong)iVar18 * 4;
        piVar12 = (int *)(param_3 + lVar19);
        iVar18 = 0;
        iVar15 = *piVar1;
        if (0 < iVar15) {
          lVar14 = 0;
          do {
            iVar15 = *(int *)(lVar14 + (longlong)_Dst);
            lVar20 = *(longlong *)(param_1 + 0x28);
            if (*(int *)(param_1 + 0x18) < iVar15) {
              *(int *)(lVar14 + lVar20) = *(int *)(param_1 + 0x18);
            }
            else if (iVar15 < *(int *)(param_1 + 0x14)) {
              *(int *)(lVar14 + lVar20) = *(int *)(param_1 + 0x14);
            }
            else {
              *(int *)(lVar14 + lVar20) = iVar15;
            }
            iVar18 = iVar18 + 1;
            lVar14 = lVar14 + 4;
            iVar15 = *piVar1;
          } while (iVar18 < iVar15);
        }
        lVar14 = *(longlong *)(param_1 + 0x28);
        iVar18 = 0;
        if (0 < iVar15) {
          lVar20 = lVar14 - (longlong)piVar12;
          do {
            piVar2 = (int *)(lVar20 + (longlong)piVar12);
            iVar15 = *(int *)((longlong)piVar2 + ((param_2 + lVar19) - lVar14)) + *piVar2;
            *piVar12 = iVar15;
            if (*(int *)(param_1 + 0x18) < iVar15) {
              *piVar12 = iVar15 - *(int *)(param_1 + 0x1c);
            }
            else if (iVar15 < *(int *)(param_1 + 0x14)) {
              *piVar12 = *(int *)(param_1 + 0x1c) + iVar15;
            }
            iVar18 = iVar18 + 1;
            piVar12 = piVar12 + 1;
          } while (iVar18 < *piVar1);
        }
      }
      local_78 = local_78 + 1;
      local_58 = local_58 + 1;
    } while ((longlong)local_58 < lVar11);
  }
  if (local_70 != (void *)0x0) {
    thunk_FUN_1400020a8(local_70);
  }
  if (_Dst != (void *)0x0) {
    thunk_FUN_1400020a8(_Dst);
  }
  return 1;
}



// FUNCTION 145591890 FUN_145591890 body=6 status=ok
// SIG undefined FUN_145591890(void)

undefined8 FUN_145591890(void)

{
  return 2;
}



// FUNCTION 1455918a0 FUN_1455918a0 body=34 status=ok
// SIG undefined FUN_1455918a0(void)

undefined1 FUN_1455918a0(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
      (*(longlong *)(param_1 + 0x50) != 0)) && (*(longlong *)(param_1 + 0x58) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1455918d0 FID_conflict:`scalar_deleting_destructor' body=126 status=ok
// SIG undefined FID_conflict:`scalar_deleting_destructor'(void)

/* Library Function - Multiple Matches With Different Base Names
    public: void * __ptr64 __cdecl std::pair<unsigned long const ,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
    public: void * __ptr64 __cdecl std::pair<unsigned long,class std::vector<struct CHN *
   __ptr64,class std::allocator<struct CHN * __ptr64> > >::`scalar deleting destructor'(unsigned
   int) __ptr64
   
   Library: Visual Studio 2019 Release */

longlong FID_conflict__scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 145591950 FUN_145591950 body=2425 status=ok
// SIG undefined FUN_145591950(void)

/* WARNING: Removing unreachable block (ram,0x000145592264) */
/* WARNING: Removing unreachable block (ram,0x0001455922d0) */
/* WARNING: Removing unreachable block (ram,0x000145592279) */

void FUN_145591950(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  uint param_5)

{
  int *piVar1;
  size_t _Size;
  int iVar2;
  void *_Dst;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStackY_168 [32];
  int local_138;
  int *local_130;
  ulonglong local_f8;
  int *local_e0;
  longlong local_a8;
  longlong local_a0 [11];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_168;
  uVar23 = (ulonglong)(int)param_5;
  piVar15 = (int *)(param_1 + 0x10);
  FUN_14558caf0(piVar15,param_5);
  _eh_vector_constructor_iterator_
            (&local_a8,0x18,4,(_func_void_void_ptr *)&LAB_144d7efd0,FUN_144b73500);
  plVar14 = local_a0;
  lVar13 = 4;
  do {
    _Dst = (void *)*plVar14;
    lVar24 = plVar14[-1];
    uVar10 = (longlong)_Dst - lVar24 >> 2;
    if (uVar23 < uVar10) {
      *plVar14 = lVar24 + uVar23 * 4;
    }
    else if (uVar10 < uVar23) {
      if ((ulonglong)(plVar14[1] - lVar24 >> 2) < uVar23) {
        FUN_146c96176(plVar14 + -1,uVar23);
      }
      else {
        _Size = (uVar23 - uVar10) * 4;
        memset(_Dst,0,_Size);
        *plVar14 = (longlong)((longlong)_Dst + _Size);
      }
    }
    plVar14 = plVar14 + 3;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  FUN_14558cb90(piVar15,local_a8,param_2,param_3);
  plVar14 = *(longlong **)(param_1 + 0x48);
  plVar3 = *(longlong **)(param_1 + 0x50);
  puVar6 = (undefined8 *)FUN_14494321d(0x10);
  *puVar6 = 0;
  puVar6[1] = 0;
  local_e0 = (int *)0x0;
  if (param_5 == 0) {
    local_130 = (int *)0x0;
  }
  else {
    if (0x3fffffffffffffff < uVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_14694aefc();
    }
    uVar10 = uVar23 * 4;
    if (uVar10 < 0x1000) {
      if (uVar10 == 0) {
        local_130 = (int *)0x0;
      }
      else {
        local_130 = (int *)FUN_14494321d(uVar10);
      }
    }
    else {
      if (uVar10 + 0x27 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar13 = FUN_14494321d();
      if (lVar13 == 0) goto LAB_145592233;
      local_130 = (int *)(lVar13 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)(local_130 + -2) = lVar13;
    }
    local_e0 = local_130 + uVar23;
    memset(local_130,0,uVar10);
  }
  local_138 = 1;
  iVar8 = (int)((*(longlong **)(param_1 + 0x58))[1] - **(longlong **)(param_1 + 0x58) >> 2);
  if (1 < iVar8) {
    local_f8 = 1;
    uVar10 = uVar23;
LAB_145591bc0:
    lVar24 = 0;
    lVar13 = **(longlong **)(param_1 + 0x58);
    if ((ulonglong)((*(longlong **)(param_1 + 0x58))[1] - lVar13 >> 2) <= local_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_1453f6330();
    }
    uVar20 = *(uint *)(lVar13 + local_f8 * 4);
    bVar5 = true;
    if (uVar20 != 0xffffffff) {
      plVar21 = &local_a8;
      uVar16 = uVar20;
      do {
        do {
          lVar13 = *plVar21;
          if ((uVar16 != 0xffffffff) &&
             ((*(uint *)(*plVar14 + (ulonglong)(uVar16 >> 5) * 4) & 1 << ((byte)uVar16 & 0x1f)) == 0
             )) {
            uVar9 = *(uint *)(*(longlong *)(plVar14[0x12] + 0x18) + (ulonglong)uVar16 * 4);
            if (uVar9 != 0xffffffff) {
              lVar12 = plVar14[9];
              lVar4 = *plVar3;
              iVar17 = *(int *)(lVar4 + (ulonglong)*(uint *)(lVar12 + (ulonglong)uVar9 * 4) * 4);
              uVar19 = uVar9 + 1;
              if (uVar19 == (uVar19 / 3) * 3) {
                uVar19 = uVar9 - 2;
              }
              iVar18 = *(int *)(lVar4 + (ulonglong)*(uint *)(lVar12 + (ulonglong)uVar19 * 4) * 4);
              if (uVar9 == (uVar9 / 3) * 3) {
                uVar9 = uVar9 + 2;
              }
              else {
                uVar9 = uVar9 - 1;
              }
              iVar2 = *(int *)(lVar4 + (ulonglong)*(uint *)(lVar12 + (ulonglong)uVar9 * 4) * 4);
              if (((iVar17 < local_138) && (iVar18 < local_138)) && (iVar2 < local_138)) {
                if (0 < (longlong)uVar23) {
                  lVar12 = (longlong)(int)(iVar2 * param_5);
                  piVar7 = (int *)(param_3 + lVar12 * 4);
                  uVar10 = uVar23;
                  do {
                    *(int *)(((lVar13 + lVar12 * -4) - param_3) + (longlong)piVar7) =
                         (piVar7[(int)(iVar18 * param_5) - lVar12] -
                         piVar7[(int)(iVar17 * param_5) - lVar12]) + *piVar7;
                    piVar7 = piVar7 + 1;
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
                lVar24 = lVar24 + 1;
                plVar21 = plVar21 + 3;
                if (lVar24 == 4) goto LAB_145591ee5;
              }
            }
          }
          if (bVar5) {
            if (uVar16 == 0xffffffff) goto LAB_145591e45;
            uVar9 = uVar16 + 1;
            if (uVar9 == (uVar9 / 3) * 3) {
              uVar9 = uVar16 - 2;
            }
            if (((uVar9 == 0xffffffff) ||
                ((*(uint *)(*plVar14 + (ulonglong)(uVar9 >> 5) * 4) & 1 << ((byte)uVar9 & 0x1f)) !=
                 0)) || (iVar17 = *(int *)(*(longlong *)(plVar14[0x12] + 0x18) +
                                          (ulonglong)uVar9 * 4), iVar17 == -1)) goto LAB_145591e45;
            uVar16 = iVar17 + 1;
            if (uVar16 == (uVar16 / 3) * 3) {
              uVar16 = iVar17 - 2;
            }
          }
          else {
            if (uVar16 != 0xffffffff) {
              if (uVar16 == (uVar16 / 3) * 3) {
                uVar16 = uVar16 + 2;
              }
              else {
                uVar16 = uVar16 - 1;
              }
              if (((uVar16 != 0xffffffff) &&
                  ((*(uint *)(*plVar14 + (ulonglong)(uVar16 >> 5) * 4) & 1 << ((byte)uVar16 & 0x1f))
                   == 0)) &&
                 (uVar16 = *(uint *)(*(longlong *)(plVar14[0x12] + 0x18) + (ulonglong)uVar16 * 4),
                 uVar16 != 0xffffffff)) {
                if (uVar16 == (uVar16 / 3) * 3) {
                  uVar16 = uVar16 + 2;
                }
                else {
                  uVar16 = uVar16 - 1;
                }
                goto LAB_145591e4b;
              }
            }
LAB_145591e45:
            uVar16 = 0xffffffff;
          }
LAB_145591e4b:
          if (uVar16 == uVar20) goto LAB_145591ee5;
        } while (uVar16 != 0xffffffff);
        if (!bVar5) goto LAB_145591ee5;
        bVar5 = false;
        uVar16 = uVar20 - 1;
        if (uVar20 == (uVar20 / 3) * 3) {
          uVar16 = uVar20 + 2;
        }
        if (((uVar16 == 0xffffffff) ||
            ((*(uint *)(*plVar14 + (ulonglong)(uVar16 >> 5) * 4) & 1 << ((byte)uVar16 & 0x1f)) != 0)
            ) || (uVar16 = *(uint *)(*(longlong *)(plVar14[0x12] + 0x18) + (ulonglong)uVar16 * 4),
                 uVar16 == 0xffffffff)) goto LAB_145591ee5;
        if (uVar16 == (uVar16 / 3) * 3) {
          uVar16 = uVar16 + 2;
        }
        else {
          uVar16 = uVar16 - 1;
        }
        if (uVar16 == 0xffffffff) goto LAB_145591ee5;
      } while( true );
    }
    goto LAB_145591ef2;
  }
LAB_1455921f6:
  if (local_130 != (int *)0x0) {
    uVar23 = ((longlong)local_e0 - (longlong)local_130 >> 2) * 4;
    piVar15 = local_130;
    if (0xfff < uVar23) {
      uVar23 = uVar23 + 0x27;
      piVar15 = *(int **)(local_130 + -2);
      if (0x1f < (ulonglong)((longlong)local_130 + (-8 - (longlong)piVar15))) {
LAB_145592233:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(piVar15,uVar23);
  }
  if (puVar6 != (undefined8 *)0x0) {
    thunk_FUN_1400020a8(puVar6,0x10);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x18,4,FUN_144b73500);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStackY_168);
LAB_145591ee5:
  uVar10 = (ulonglong)param_5;
LAB_145591ef2:
  iVar17 = 0;
  iVar18 = (int)uVar10;
  if (0 < lVar24) {
    if (0 < iVar18) {
      memset(local_130,0,uVar23 << 2);
    }
    lVar13 = 0;
    plVar21 = &local_a8;
    iVar17 = 0;
    do {
      lVar12 = 0;
      iVar2 = *(int *)((longlong)puVar6 + lVar24 * 4 + -4);
      *(int *)((longlong)puVar6 + lVar24 * 4 + -4) = iVar2 + 1;
      if (*(ulonglong *)((lVar24 + -1) * 0x20 + param_1 + 0x78) <= (ulonglong)(longlong)iVar2)
      goto LAB_1455921f6;
      if (((*(uint *)(*(longlong *)((lVar24 + 2) * 0x20 + param_1) +
                     ((ulonglong)(longlong)iVar2 >> 5) * 4) & 1 << ((byte)iVar2 & 0x1f)) == 0) &&
         (iVar17 = iVar17 + 1, 0 < (longlong)uVar23)) {
        piVar7 = local_130;
        do {
          *piVar7 = *piVar7 + *(int *)((longlong)piVar7 + (*plVar21 - (longlong)local_130));
          lVar12 = lVar12 + 1;
          piVar7 = piVar7 + 1;
        } while (lVar12 < (longlong)uVar23);
      }
      lVar13 = lVar13 + 1;
      plVar21 = plVar21 + 3;
    } while (lVar13 < lVar24);
  }
  uVar11 = 0;
  if (iVar17 == 0) {
    lVar13 = (longlong)(iVar18 * local_138) * 4;
    piVar7 = (int *)(lVar13 + param_3);
    iVar17 = *piVar15;
    uVar22 = uVar11;
    if (0 < iVar17) {
      do {
        iVar17 = *(int *)(uVar11 + param_3 + (longlong)((local_138 + -1) * iVar18) * 4);
        lVar24 = *(longlong *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x18) < iVar17) {
          *(int *)(uVar11 + lVar24) = *(int *)(param_1 + 0x18);
        }
        else if (iVar17 < *(int *)(param_1 + 0x14)) {
          *(int *)(uVar11 + lVar24) = *(int *)(param_1 + 0x14);
        }
        else {
          *(int *)(uVar11 + lVar24) = iVar17;
        }
        uVar20 = (int)uVar22 + 1;
        uVar11 = uVar11 + 4;
        iVar17 = *piVar15;
        uVar22 = (ulonglong)uVar20;
      } while ((int)uVar20 < iVar17);
    }
    iVar18 = 0;
    lVar24 = *(longlong *)(param_1 + 0x28);
    if (0 < iVar17) {
      lVar12 = lVar24 - (longlong)piVar7;
      do {
        piVar1 = (int *)((longlong)piVar7 + lVar12);
        iVar17 = *(int *)((longlong)piVar1 + ((param_2 + lVar13) - lVar24)) + *piVar1;
        *piVar7 = iVar17;
        if (*(int *)(param_1 + 0x18) < iVar17) {
          *piVar7 = iVar17 - *(int *)(param_1 + 0x1c);
        }
        else if (iVar17 < *(int *)(param_1 + 0x14)) {
          *piVar7 = *(int *)(param_1 + 0x1c) + iVar17;
        }
        iVar18 = iVar18 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar18 < *piVar15);
    }
  }
  else {
    if (0 < (longlong)uVar23) {
      do {
        local_130[uVar11] = local_130[uVar11] / iVar17;
        uVar11 = uVar11 + 1;
      } while ((longlong)uVar11 < (longlong)uVar23);
    }
    lVar13 = (longlong)(iVar18 * local_138) * 4;
    piVar7 = (int *)(param_3 + lVar13);
    iVar18 = 0;
    iVar17 = *piVar15;
    if (0 < iVar17) {
      lVar24 = 0;
      do {
        iVar17 = *(int *)((longlong)local_130 + lVar24);
        lVar12 = *(longlong *)(param_1 + 0x28);
        if (*(int *)(param_1 + 0x18) < iVar17) {
          *(int *)(lVar24 + lVar12) = *(int *)(param_1 + 0x18);
        }
        else if (iVar17 < *(int *)(param_1 + 0x14)) {
          *(int *)(lVar24 + lVar12) = *(int *)(param_1 + 0x14);
        }
        else {
          *(int *)(lVar24 + lVar12) = iVar17;
        }
        iVar18 = iVar18 + 1;
        lVar24 = lVar24 + 4;
        iVar17 = *piVar15;
      } while (iVar18 < iVar17);
    }
    lVar24 = *(longlong *)(param_1 + 0x28);
    iVar18 = 0;
    if (0 < iVar17) {
      lVar12 = lVar24 - (longlong)piVar7;
      do {
        piVar1 = (int *)(lVar12 + (longlong)piVar7);
        iVar17 = *(int *)((longlong)piVar1 + ((param_2 + lVar13) - lVar24)) + *piVar1;
        *piVar7 = iVar17;
        if (*(int *)(param_1 + 0x18) < iVar17) {
          *piVar7 = iVar17 - *(int *)(param_1 + 0x1c);
        }
        else if (iVar17 < *(int *)(param_1 + 0x14)) {
          *piVar7 = *(int *)(param_1 + 0x1c) + iVar17;
        }
        iVar18 = iVar18 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar18 < *piVar15);
    }
  }
  local_138 = local_138 + 1;
  local_f8 = local_f8 + 1;
  if ((longlong)iVar8 <= (longlong)local_f8) goto LAB_1455921f6;
  goto LAB_145591bc0;
}



// FUNCTION 1455922f0 FUN_1455922f0 body=441 status=ok
// SIG undefined FUN_1455922f0(void)

bool FUN_1455922f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint *puVar2;
  byte bVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  uint local_res10 [2];
  undefined1 local_58 [32];
  
  if (*(ushort *)((longlong)param_2 + 0x32) < 0x202) {
    lVar10 = param_2[2] + 1;
    if (lVar10 <= param_2[1]) {
      cVar5 = *(char *)(param_2[2] + *param_2);
      param_2[2] = lVar10;
      if (cVar5 == '\0') goto LAB_14559233f;
    }
LAB_14559248f:
    bVar12 = false;
  }
  else {
LAB_14559233f:
    iVar8 = 0;
    plVar11 = (longlong *)(param_1 + 0x60);
    lVar10 = param_1;
    do {
      lVar1 = param_2[2] + 1;
      if (param_2[1] < lVar1) goto LAB_14559248f;
      bVar3 = *(byte *)(param_2[2] + *param_2);
      uVar7 = (uint)bVar3;
      param_2[2] = lVar1;
      uVar6 = (uint)bVar3;
      if ((char)bVar3 < '\0') {
        cVar5 = FUN_145594f40(2,local_res10,param_2);
        if (cVar5 == '\0') goto LAB_14559248f;
        uVar6 = uVar7 & 0x7f | local_res10[0] << 7;
      }
      local_res10[0] = uVar6;
      plVar4 = *(longlong **)(*(longlong *)(lVar10 + 0x48) + 0x90);
      if ((uint)(plVar4[1] - *plVar4 >> 2) < local_res10[0]) goto LAB_14559248f;
      if (local_res10[0] != 0) {
        FUN_148273992(((longlong)iVar8 + 3) * 0x20 + lVar10,local_res10[0],0);
        FUN_1453f5dc0(local_58);
        cVar5 = FUN_1453f5de0(local_58,param_2);
        if (cVar5 == '\0') {
          FUN_1453f5dd0(local_58);
          goto LAB_14559248f;
        }
        uVar9 = 0;
        if (local_res10[0] != 0) {
          do {
            puVar2 = (uint *)(*plVar11 + (uVar9 >> 5) * 4);
            cVar5 = FUN_1453f5f80(local_58);
            uVar7 = 1 << ((byte)uVar9 & 0x1f);
            uVar6 = *puVar2;
            if (cVar5 == '\0') {
              uVar6 = uVar6 & ~uVar7;
            }
            else {
              uVar6 = uVar6 | uVar7;
            }
            *puVar2 = uVar6;
            uVar6 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar6;
          } while (uVar6 < local_res10[0]);
        }
        FUN_1453f5dd0(local_58);
        lVar10 = param_1;
      }
      iVar8 = iVar8 + 1;
      plVar11 = plVar11 + 4;
    } while (iVar8 < 4);
    cVar5 = FUN_14558cc50(lVar10 + 0x10,param_2);
    bVar12 = cVar5 != '\0';
  }
  return bVar12;
}



// FUNCTION 1455924b0 FUN_1455924b0 body=6 status=ok
// SIG undefined FUN_1455924b0(void)

undefined8 FUN_1455924b0(void)

{
  return 4;
}



// FUNCTION 1455924c0 FUN_1455924c0 body=34 status=ok
// SIG undefined FUN_1455924c0(void)

undefined1 FUN_1455924c0(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) &&
      (*(longlong *)(param_1 + 0x50) != 0)) && (*(longlong *)(param_1 + 0x58) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1455924f0 FUN_1455924f0 body=159 status=ok
// SIG undefined FUN_1455924f0(void)

longlong FUN_1455924f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x60),0x20,4,FUN_144e59ed0);
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = (*(longlong *)(param_1 + 0x38) - lVar1 >> 2) * 4;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      lVar2 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 145592590 FUN_145592590 body=475 status=ok
// SIG undefined FUN_145592590(void)

ulonglong FUN_145592590(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       int param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ulonglong in_RAX;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  longlong local_40;
  
  if (param_5 == 2) {
    *(undefined8 *)(param_1 + 0x68) = param_6;
    *(undefined4 *)(param_1 + 0x78) = 2;
    lVar5 = FUN_144a7d36f(8);
    plVar1 = (longlong *)(param_1 + 0x70);
    if (plVar1 != &local_40) {
      lVar8 = *plVar1;
      *plVar1 = lVar5;
      lVar5 = lVar8;
    }
    if (lVar5 != 0) {
      thunk_FUN_1400020a8(lVar5);
    }
    FUN_14558caf0(param_1 + 0x10,2);
    iVar7 = (int)((*(longlong **)(param_1 + 0x58))[1] - **(longlong **)(param_1 + 0x58) >> 2);
    uVar6 = (longlong)iVar7;
    if (0 < iVar7) {
      uVar9 = 0;
      iVar12 = 0;
      do {
        lVar5 = **(longlong **)(param_1 + 0x58);
        if ((ulonglong)((*(longlong **)(param_1 + 0x58))[1] - lVar5 >> 2) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_1453f6330();
        }
        in_RAX = FUN_145592980(param_1,*(undefined4 *)(lVar5 + uVar9 * 4),param_3);
        if ((char)in_RAX == '\0') goto LAB_14559274f;
        iVar11 = 0;
        uVar4 = *(uint *)(param_1 + 0x10);
        puVar10 = (uint *)((longlong)iVar12 * 4 + param_3);
        lVar5 = *(longlong *)(param_1 + 0x70);
        if (0 < (int)uVar4) {
          lVar8 = 0;
          do {
            iVar3 = *(int *)(lVar8 + lVar5);
            if (*(int *)(param_1 + 0x18) < iVar3) {
              *(int *)(lVar8 + *(longlong *)(param_1 + 0x28)) = *(int *)(param_1 + 0x18);
            }
            else {
              if (iVar3 < *(int *)(param_1 + 0x14)) {
                iVar3 = *(int *)(param_1 + 0x14);
              }
              *(int *)(lVar8 + *(longlong *)(param_1 + 0x28)) = iVar3;
            }
            uVar4 = *(uint *)(param_1 + 0x10);
            iVar11 = iVar11 + 1;
            lVar8 = lVar8 + 4;
          } while (iVar11 < (int)uVar4);
        }
        uVar6 = (ulonglong)uVar4;
        iVar11 = 0;
        lVar5 = *(longlong *)(param_1 + 0x28);
        if (0 < (int)uVar4) {
          lVar8 = lVar5 - (longlong)puVar10;
          do {
            piVar2 = (int *)(lVar8 + (longlong)puVar10);
            uVar4 = *piVar2 + *(int *)((longlong)piVar2 + ((param_2 + (longlong)iVar12 * 4) - lVar5)
                                      );
            uVar6 = (ulonglong)uVar4;
            *puVar10 = uVar4;
            if (*(int *)(param_1 + 0x18) < (int)uVar4) {
              uVar4 = uVar4 - *(int *)(param_1 + 0x1c);
              uVar6 = (ulonglong)uVar4;
              *puVar10 = uVar4;
            }
            else if ((int)uVar4 < *(int *)(param_1 + 0x14)) {
              *puVar10 = *(int *)(param_1 + 0x1c) + uVar4;
            }
            iVar11 = iVar11 + 1;
            puVar10 = puVar10 + 1;
          } while (iVar11 < *(int *)(param_1 + 0x10));
        }
        iVar12 = iVar12 + 2;
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < (longlong)iVar7);
    }
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  }
  else {
LAB_14559274f:
    uVar6 = in_RAX & 0xffffffffffffff00;
  }
  return uVar6;
}



// FUNCTION 145592770 FUN_145592770 body=387 status=ok
// SIG undefined FUN_145592770(void)

ulonglong FUN_145592770(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint local_res10 [2];
  undefined1 local_38 [32];
  
  uVar9 = 0;
  local_res10[0] = 0;
  uVar3 = param_2[2];
  uVar8 = param_2[1];
  if (*(ushort *)((longlong)param_2 + 0x32) < 0x202) {
    if ((longlong)uVar8 < (longlong)(uVar3 + 4)) goto LAB_1455928de;
    uVar8 = *param_2;
    local_res10[0] = *(uint *)(uVar3 + uVar8);
    param_2[2] = uVar3 + 4;
  }
  else {
    if ((longlong)uVar8 < (longlong)(uVar3 + 1)) goto LAB_1455928de;
    uVar8 = *param_2;
    bVar2 = *(byte *)(uVar3 + uVar8);
    uVar10 = (uint)bVar2;
    param_2[2] = uVar3 + 1;
    if ((char)bVar2 < '\0') {
      uVar8 = FUN_145594f40(2,local_res10,param_2);
      if ((char)uVar8 == '\0') goto LAB_1455928de;
      uVar8 = (ulonglong)(local_res10[0] << 7);
      local_res10[0] = uVar10 & 0x7f | local_res10[0] << 7;
    }
    else {
      local_res10[0] = (uint)bVar2;
    }
  }
  if ((local_res10[0] != 0) &&
     (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x48) + 0x90),
     uVar8 = plVar4[1] - *plVar4 >> 2, local_res10[0] <= (uint)uVar8)) {
    FUN_148273992(param_1 + 0x80,local_res10[0],0);
    bVar11 = true;
    bVar5 = true;
    FUN_1453f5dc0(local_38);
    cVar6 = FUN_1453f5de0(local_38,param_2);
    if (cVar6 == '\0') {
      bVar11 = false;
    }
    else {
      if (local_res10[0] != 0) {
        do {
          cVar6 = FUN_1453f5f80(local_38);
          if (cVar6 == '\0') {
            bVar11 = !bVar11;
            bVar5 = bVar11;
          }
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x80) + (ulonglong)(uVar9 >> 5) * 4);
          uVar7 = 1 << ((byte)uVar9 & 0x1f);
          uVar10 = *puVar1;
          if (bVar5) {
            uVar7 = uVar7 | uVar10;
          }
          else {
            uVar7 = ~uVar7 & uVar10;
          }
          *puVar1 = uVar7;
          uVar9 = uVar9 + 1;
        } while (uVar9 < local_res10[0]);
      }
      cVar6 = FUN_14558cc50(param_1 + 0x10,param_2);
      bVar11 = cVar6 != '\0';
    }
    FUN_1453f5dd0(local_38);
    return (ulonglong)bVar11;
  }
LAB_1455928de:
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 145592900 FUN_145592900 body=6 status=ok
// SIG undefined FUN_145592900(void)

undefined8 FUN_145592900(void)

{
  return 3;
}



// FUNCTION 145592910 FUN_145592910 body=41 status=ok
// SIG undefined FUN_145592910(void)

undefined1 FUN_145592910(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x60) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) &&
      (*(longlong *)(param_1 + 0x48) != 0)) &&
     ((*(longlong *)(param_1 + 0x50) != 0 && (*(longlong *)(param_1 + 0x58) != 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 145592940 FUN_145592940 body=6 status=ok
// SIG undefined FUN_145592940(void)

undefined8 FUN_145592940(void)

{
  return 1;
}



// FUNCTION 145592950 FUN_145592950 body=3 status=ok
// SIG undefined FUN_145592950(void)

undefined8 FUN_145592950(void)

{
  return 0;
}



// FUNCTION 145592960 FUN_145592960 body=27 status=ok
// SIG undefined FUN_145592960(void)

undefined1 FUN_145592960(longlong param_1,longlong param_2)

{
  if (((param_2 != 0) && (*(int *)(param_2 + 0x38) == 0)) && (*(char *)(param_2 + 0x18) == '\x03'))
  {
    *(longlong *)(param_1 + 0x60) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 145592980 FUN_145592980 body=1515 status=ok
// SIG undefined FUN_145592980(void)

void FUN_145592980(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  double dVar15;
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
  undefined1 auStack_118 [32];
  int local_f8 [2];
  undefined8 local_f0;
  float local_e8;
  float local_e0 [4];
  undefined8 local_d0;
  float local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar13 = 0xffffffff;
  uVar12 = 0xffffffff;
  if (param_2 != 0xffffffff) {
    iVar6 = 1;
    if (param_2 + 1 == ((param_2 + 1) / 3) * 3) {
      iVar6 = -2;
    }
    uVar13 = iVar6 + param_2;
    uVar12 = param_2 - 1;
    if (param_2 == (param_2 / 3) * 3) {
      uVar12 = param_2 + 2;
    }
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48);
  uVar14 = (ulonglong)*(int *)(lVar3 + (ulonglong)uVar12 * 4);
  uVar11 = (ulonglong)*(int *)(lVar3 + (ulonglong)uVar13 * 4);
  lVar3 = **(longlong **)(param_1 + 0x50);
  uVar7 = (*(longlong **)(param_1 + 0x50))[1] - lVar3 >> 2;
  if (uVar11 < uVar7) {
    iVar6 = *(int *)(lVar3 + uVar11 * 4);
    if (uVar14 < uVar7) {
      iVar1 = *(int *)(lVar3 + uVar14 * 4);
      if ((iVar1 < param_4) && (iVar6 < param_4)) {
        lVar8 = (longlong)(*(int *)(param_1 + 0x78) * iVar6);
        lVar3 = (longlong)(*(int *)(param_1 + 0x78) * iVar1);
        lVar4 = 0;
        fVar18 = (float)*(int *)(param_3 + 4 + lVar3 * 4);
        fVar20 = (float)*(int *)(param_3 + lVar3 * 4);
        fVar23 = (float)*(int *)(param_3 + 4 + lVar8 * 4);
        fVar17 = (float)*(int *)(param_3 + lVar8 * 4);
        local_f0 = CONCAT44(fVar18,fVar20);
        local_e0[1] = fVar23;
        local_e0[0] = fVar17;
        do {
          if (*(float *)((longlong)&local_f0 + lVar4) != *(float *)((longlong)local_e0 + lVar4)) {
            fVar21 = 0.0;
            uVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)param_4 * 4);
            lVar3 = *(longlong *)(param_1 + 0x60);
            local_d0 = 0;
            local_c8 = 0.0;
            if (*(char *)(lVar3 + 100) == '\0') {
              uVar7 = (ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x48) + uVar7 * 4);
            }
            FUN_14932a054(lVar3,uVar7,*(undefined1 *)(lVar3 + 0x18),&local_d0);
            lVar3 = *(longlong *)(param_1 + 0x60);
            local_f0 = 0;
            local_e8 = 0.0;
            uVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar6 * 4);
            if (*(char *)(lVar3 + 100) == '\0') {
              uVar7 = (ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x48) + uVar7 * 4);
            }
            FUN_14932a054(lVar3,uVar7,*(undefined1 *)(lVar3 + 0x18),&local_f0);
            lVar3 = *(longlong *)(param_1 + 0x60);
            local_e0[0] = 0.0;
            local_e0[1] = 0.0;
            local_e0[2] = 0.0;
            uVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar1 * 4);
            if (*(char *)(lVar3 + 100) == '\0') {
              uVar7 = (ulonglong)*(uint *)(*(longlong *)(lVar3 + 0x48) + uVar7 * 4);
            }
            FUN_14932a054(lVar3,uVar7,*(undefined1 *)(lVar3 + 0x18),local_e0);
            fVar19 = local_e0[0] - (float)local_f0;
            fVar24 = local_e0[1] - local_f0._4_4_;
            fVar25 = local_e0[2] - local_e8;
            fVar16 = fVar19 * fVar19 + 0.0 + fVar24 * fVar24 + fVar25 * fVar25;
            if ((*(int *)(param_1 + 0xa0) < 0x102) || (0.0 < fVar16)) {
              fVar22 = (fVar19 * ((float)local_d0 - (float)local_f0) + 0.0 +
                        fVar24 * (local_d0._4_4_ - local_f0._4_4_) + fVar25 * (local_c8 - local_e8))
                       / fVar16;
              fVar21 = ((float)local_d0 - (float)local_f0) - fVar19 * fVar22;
              fVar19 = (local_d0._4_4_ - local_f0._4_4_) - fVar24 * fVar22;
              fVar24 = (local_c8 - local_e8) - fVar25 * fVar22;
              fVar16 = (fVar21 * fVar21 + 0.0 + fVar19 * fVar19 + fVar24 * fVar24) / fVar16;
              if (fVar16 < 0.0) {
                fVar21 = sqrtf(fVar16);
              }
              else {
                fVar21 = SQRT(fVar16);
              }
            }
            else {
              fVar22 = 0.0;
            }
            fVar20 = fVar20 - fVar17;
            fVar18 = fVar18 - fVar23;
            fVar16 = fVar20 * fVar21;
            fVar17 = fVar20 * fVar22 + fVar17;
            fVar21 = fVar18 * fVar21;
            fVar23 = fVar18 * fVar22 + fVar23;
            if (*(longlong *)(param_1 + 0x98) != 0) {
              puVar5 = (undefined8 *)FUN_14558c780(param_1 + 0x80,&local_d0);
              uVar2 = puVar5[1];
              uVar12 = *(uint *)*puVar5;
              FUN_14558c800(param_1 + 0x80);
              if ((uVar12 & 1 << ((byte)uVar2 & 0x1f)) == 0) {
                fVar17 = fVar21 + fVar17;
                fVar23 = fVar23 - fVar16;
              }
              else {
                fVar17 = fVar17 - fVar21;
                fVar23 = fVar23 + fVar16;
              }
              local_f0 = CONCAT44(fVar23,fVar17);
              dVar15 = floor((double)fVar17 + 0.5);
              if ((2147483647.0 < dVar15) || (dVar15 < -2147483648.0)) {
                **(undefined4 **)(param_1 + 0x70) = 0x80000000;
              }
              else {
                **(int **)(param_1 + 0x70) = (int)dVar15;
              }
              dVar15 = floor((double)local_f0._4_4_ + 0.5);
              if ((2147483647.0 < dVar15) || (dVar15 < -2147483648.0)) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 4) = 0x80000000;
              }
              else {
                *(int *)(*(longlong *)(param_1 + 0x70) + 4) = (int)dVar15;
              }
            }
            goto LAB_145592db0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 < 8);
        local_f8[0] = 0;
        piVar10 = local_f8;
        local_f8[1] = 1;
        do {
          lVar3 = (longlong)*piVar10;
          fVar17 = *(float *)((longlong)&local_f0 + lVar3 * 4);
          if ((2.1474836e+09 < fVar17) || (fVar17 < -2.1474836e+09)) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x70) + lVar3 * 4) = 0x80000000;
          }
          else {
            *(int *)(*(longlong *)(param_1 + 0x70) + lVar3 * 4) = (int)fVar17;
          }
          piVar10 = piVar10 + 1;
        } while (piVar10 != (int *)&local_f0);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x78);
        if (param_4 <= iVar6) {
          if (param_4 < 1) {
            iVar6 = 0;
            if (0 < iVar1) {
              lVar3 = 0;
              do {
                iVar6 = iVar6 + 1;
                *(undefined4 *)(lVar3 + *(longlong *)(param_1 + 0x70)) = 0;
                lVar3 = lVar3 + 4;
              } while (iVar6 < *(int *)(param_1 + 0x78));
            }
            goto LAB_145592db0;
          }
          iVar6 = param_4 + -1;
        }
        iVar9 = 0;
        if (0 < iVar1) {
          lVar3 = 0;
          do {
            iVar9 = iVar9 + 1;
            *(undefined4 *)(lVar3 + *(longlong *)(param_1 + 0x70)) =
                 *(undefined4 *)(param_3 + (longlong)(iVar1 * iVar6) * 4 + lVar3);
            lVar3 = lVar3 + 4;
          } while (iVar9 < *(int *)(param_1 + 0x78));
        }
      }
LAB_145592db0:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_118);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_145589460();
}



// FUNCTION 145592f90 FUN_145592f90 body=239 status=ok
// SIG undefined FUN_145592f90(void)

longlong FUN_145592f90(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x90) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_145593079;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    thunk_FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_145593079:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 145593080 FUN_145593080 body=403 status=ok
// SIG undefined FUN_145593080(void)

ulonglong FUN_145593080(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       int param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  if (param_5 == 2) {
    *(undefined8 *)(param_1 + 0x68) = param_6;
    FUN_14558caf0(param_1 + 0x10,2);
    iVar5 = (int)((*(longlong **)(param_1 + 0x58))[1] - **(longlong **)(param_1 + 0x58) >> 2);
    uVar4 = (longlong)iVar5;
    if (0 < iVar5) {
      uVar7 = 0;
      iVar11 = 0;
      do {
        lVar6 = **(longlong **)(param_1 + 0x58);
        if ((ulonglong)((*(longlong **)(param_1 + 0x58))[1] - lVar6 >> 2) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_1453f6330();
        }
        in_RAX = FUN_145594430(param_1 + 0x60,*(undefined4 *)(lVar6 + uVar7 * 4),param_3);
        if ((char)in_RAX == '\0') goto LAB_1455931ef;
        iVar9 = 0;
        uVar3 = *(uint *)(param_1 + 0x10);
        puVar8 = (uint *)((longlong)iVar11 * 4 + param_3);
        if (0 < (int)uVar3) {
          lVar6 = 0;
          do {
            iVar2 = *(int *)(lVar6 + 0x70 + param_1);
            if (*(int *)(param_1 + 0x18) < iVar2) {
              *(int *)(lVar6 + *(longlong *)(param_1 + 0x28)) = *(int *)(param_1 + 0x18);
            }
            else {
              if (iVar2 < *(int *)(param_1 + 0x14)) {
                iVar2 = *(int *)(param_1 + 0x14);
              }
              *(int *)(lVar6 + *(longlong *)(param_1 + 0x28)) = iVar2;
            }
            uVar3 = *(uint *)(param_1 + 0x10);
            iVar9 = iVar9 + 1;
            lVar6 = lVar6 + 4;
          } while (iVar9 < (int)uVar3);
        }
        uVar4 = (ulonglong)uVar3;
        iVar9 = 0;
        lVar6 = *(longlong *)(param_1 + 0x28);
        if (0 < (int)uVar3) {
          lVar10 = lVar6 - (longlong)puVar8;
          do {
            piVar1 = (int *)(lVar10 + (longlong)puVar8);
            uVar3 = *piVar1 + *(int *)((longlong)piVar1 + ((param_2 + (longlong)iVar11 * 4) - lVar6)
                                      );
            uVar4 = (ulonglong)uVar3;
            *puVar8 = uVar3;
            if (*(int *)(param_1 + 0x18) < (int)uVar3) {
              uVar3 = uVar3 - *(int *)(param_1 + 0x1c);
              uVar4 = (ulonglong)uVar3;
              *puVar8 = uVar3;
            }
            else if ((int)uVar3 < *(int *)(param_1 + 0x14)) {
              *puVar8 = *(int *)(param_1 + 0x1c) + uVar3;
            }
            iVar9 = iVar9 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar9 < *(int *)(param_1 + 0x10));
        }
        iVar11 = iVar11 + 2;
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)iVar5);
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  else {
LAB_1455931ef:
    uVar4 = in_RAX & 0xffffffffffffff00;
  }
  return uVar4;
}



// FUNCTION 145593220 FUN_145593220 body=262 status=ok
// SIG undefined FUN_145593220(void)

ulonglong FUN_145593220(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  ulonglong in_RAX;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 local_38 [32];
  
  uVar6 = param_2[2] + 4;
  if ((longlong)uVar6 <= (longlong)param_2[1]) {
    in_RAX = *param_2;
    uVar5 = *(uint *)(param_2[2] + in_RAX);
    uVar7 = (ulonglong)uVar5;
    param_2[2] = uVar6;
    if (-1 < (int)uVar5) {
      FUN_148273992(param_1 + 0x78,(longlong)(int)uVar5,0);
      bVar8 = true;
      bVar2 = true;
      FUN_1453f5dc0(local_38);
      cVar3 = FUN_1453f5de0(local_38,param_2);
      if (cVar3 == '\0') {
        bVar8 = false;
      }
      else {
        if (0 < (int)uVar5) {
          uVar6 = 0;
          do {
            cVar3 = FUN_1453f5f80(local_38);
            if (cVar3 == '\0') {
              bVar8 = !bVar8;
              bVar2 = bVar8;
            }
            puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + (uVar6 >> 5) * 4);
            uVar4 = 1 << ((byte)uVar6 & 0x1f);
            uVar5 = *puVar1;
            if (bVar2) {
              uVar5 = uVar5 | uVar4;
            }
            else {
              uVar5 = uVar5 & ~uVar4;
            }
            *puVar1 = uVar5;
            uVar6 = uVar6 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        cVar3 = FUN_14558cc50(param_1 + 0x10,param_2);
        bVar8 = cVar3 != '\0';
      }
      FUN_1453f5dd0(local_38);
      return (ulonglong)bVar8;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 145593330 FUN_145593330 body=6 status=ok
// SIG undefined FUN_145593330(void)

undefined8 FUN_145593330(void)

{
  return 5;
}



// FUNCTION 145593340 FUN_145593340 body=41 status=ok
// SIG undefined FUN_145593340(void)

undefined1 FUN_145593340(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x60) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) &&
      (*(longlong *)(param_1 + 0x48) != 0)) &&
     ((*(longlong *)(param_1 + 0x50) != 0 && (*(longlong *)(param_1 + 0x58) != 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 145593370 FUN_145593370 body=6 status=ok
// SIG undefined FUN_145593370(void)

undefined8 FUN_145593370(void)

{
  return 1;
}



// FUNCTION 145593380 FUN_145593380 body=3 status=ok
// SIG undefined FUN_145593380(void)

undefined8 FUN_145593380(void)

{
  return 0;
}



// FUNCTION 145593390 FUN_145593390 body=27 status=ok
// SIG undefined FUN_145593390(void)

undefined1 FUN_145593390(longlong param_1,longlong param_2)

{
  if (((param_2 != 0) && (*(int *)(param_2 + 0x38) == 0)) && (*(char *)(param_2 + 0x18) == '\x03'))
  {
    *(longlong *)(param_1 + 0x60) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 1455933b0 FUN_1455933b0 body=219 status=ok
// SIG undefined FUN_1455933b0(void)

longlong FUN_1455933b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x88) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) goto LAB_145593485;
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
LAB_145593485:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 145593490 FUN_145593490 body=743 status=ok
// SIG undefined FUN_145593490(void)

void FUN_145593490(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  int local_58 [2];
  undefined8 local_50;
  uint local_48;
  int local_40;
  int iStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x70) = param_6;
  local_50 = 0;
  local_48 = 0;
  iVar4 = (int)((*(longlong **)(param_1 + 0x58))[1] - **(longlong **)(param_1 + 0x58) >> 2);
  if (0 < iVar4) {
    uVar12 = 0;
    param_3 = param_3 - param_2;
    do {
      lVar10 = **(longlong **)(param_1 + 0x58);
      if ((ulonglong)((*(longlong **)(param_1 + 0x58))[1] - lVar10 >> 2) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_1453f6330();
      }
      (**(code **)(*(longlong *)(param_1 + 0x60) + 0x18))
                (param_1 + 0x60,*(undefined4 *)(lVar10 + uVar12 * 4),&local_50);
      iVar5 = *(int *)(param_1 + 0xb0);
      lVar10 = (longlong)
               (int)(((uint)local_50 ^ (int)(uint)local_50 >> 0x1f) - ((int)(uint)local_50 >> 0x1f))
               + (longlong)
                 (int)((local_50._4_4_ ^ (int)local_50._4_4_ >> 0x1f) -
                      ((int)local_50._4_4_ >> 0x1f)) +
               (longlong)(int)((local_48 ^ (int)local_48 >> 0x1f) - ((int)local_48 >> 0x1f));
      if (lVar10 == 0) {
        local_50 = CONCAT44(local_50._4_4_,iVar5);
      }
      else {
        uVar6 = (uint)(((longlong)(int)(uint)local_50 * (longlong)iVar5) / lVar10);
        uVar3 = (uint)(((longlong)(int)local_50._4_4_ * (longlong)iVar5) / lVar10);
        local_50 = CONCAT44(uVar3,uVar6);
        iVar7 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
        iVar9 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
        if ((int)local_48 < 0) {
          local_48 = (iVar7 - iVar5) + iVar9;
        }
        else {
          local_48 = (iVar5 - iVar7) - iVar9;
        }
      }
      cVar2 = FUN_1453f5f80(param_1 + 0xb8);
      if (cVar2 != '\0') {
        local_40 = -(uint)local_50;
        iStack_3c = -local_50._4_4_;
        local_50 = CONCAT44(-local_50._4_4_,-(uint)local_50);
        local_48 = -local_48;
      }
      piVar8 = (int *)(param_1 + 0xa8);
      uVar3 = (uint)((ulonglong)local_50 >> 0x20);
      if ((int)(uint)local_50 < 0) {
        local_58[0] = (local_48 ^ (int)local_48 >> 0x1f) - ((int)local_48 >> 0x1f);
        if (-1 < local_50) {
          local_58[0] = *piVar8 - local_58[0];
        }
        local_58[1] = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
        if (-1 < (int)local_48) {
          local_58[1] = *piVar8 - local_58[1];
        }
      }
      else {
        local_58[0] = uVar3 + *(int *)(param_1 + 0xb0);
        local_58[1] = local_48 + *(int *)(param_1 + 0xb0);
      }
      if (((local_58[0] == 0) && ((local_58[1] == 0 || (local_58[1] == *piVar8)))) ||
         ((iVar5 = *piVar8, local_58[0] == iVar5 && (local_58[1] == 0)))) {
        local_58[0] = *piVar8;
        local_58[1] = local_58[0];
      }
      else {
        iVar9 = *(int *)(param_1 + 0xb0);
        if ((local_58[0] == 0) && (iVar9 < local_58[1])) {
          local_58[1] = iVar9 * 2 - local_58[1];
        }
        else if ((local_58[0] == iVar5) && (local_58[1] < iVar9)) {
          local_58[1] = iVar9 * 2 - local_58[1];
        }
        else if (((local_58[1] == iVar5) && (local_58[0] < iVar9)) ||
                ((local_58[1] == 0 && (iVar9 < local_58[0])))) {
          local_58[0] = iVar9 * 2 - local_58[0];
        }
      }
      iVar5 = *(int *)(param_1 + 0x10);
      iVar9 = 0;
      piVar8 = (int *)(param_3 + param_2);
      if (0 < iVar5) {
        lVar10 = 0;
        do {
          iVar5 = *(int *)((longlong)local_58 + lVar10);
          if (*(int *)(param_1 + 0x18) < iVar5) {
            *(int *)(lVar10 + *(longlong *)(param_1 + 0x28)) = *(int *)(param_1 + 0x18);
          }
          else {
            if (iVar5 < *(int *)(param_1 + 0x14)) {
              iVar5 = *(int *)(param_1 + 0x14);
            }
            *(int *)(lVar10 + *(longlong *)(param_1 + 0x28)) = iVar5;
          }
          iVar5 = *(int *)(param_1 + 0x10);
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 4;
        } while (iVar9 < iVar5);
      }
      lVar10 = *(longlong *)(param_1 + 0x28);
      iVar9 = 0;
      if (0 < iVar5) {
        lVar11 = param_2 - (longlong)piVar8;
        do {
          piVar1 = (int *)(lVar11 + (longlong)piVar8);
          iVar5 = *(int *)((longlong)piVar1 + (lVar10 - param_2)) + *piVar1;
          *piVar8 = iVar5;
          if (*(int *)(param_1 + 0x18) < iVar5) {
            *piVar8 = iVar5 - *(int *)(param_1 + 0x1c);
          }
          else if (iVar5 < *(int *)(param_1 + 0x14)) {
            *piVar8 = *(int *)(param_1 + 0x1c) + iVar5;
          }
          iVar9 = iVar9 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x10));
      }
      uVar12 = uVar12 + 1;
      param_2 = param_2 + 8;
    } while ((longlong)uVar12 < (longlong)iVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 1455937a0 FUN_1455937a0 body=123 status=ok
// SIG undefined FUN_1455937a0(void)

bool FUN_1455937a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  
  cVar3 = FUN_14558cc50(param_1 + 0x10);
  if (cVar3 != '\0') {
    if (0x201 < *(ushort *)((longlong)param_2 + 0x32)) {
LAB_1455937ef:
      cVar3 = FUN_1453f5de0(param_1 + 0xb8,param_2);
      return cVar3 != '\0';
    }
    lVar1 = param_2[2] + 1;
    if (lVar1 <= param_2[1]) {
      uVar2 = *(undefined1 *)(param_2[2] + *param_2);
      param_2[2] = lVar1;
      cVar3 = (**(code **)(*(longlong *)(param_1 + 0x60) + 8))((longlong *)(param_1 + 0x60),uVar2);
      if (cVar3 != '\0') goto LAB_1455937ef;
    }
  }
  return false;
}



// FUNCTION 145593820 FUN_145593820 body=6 status=ok
// SIG undefined FUN_145593820(void)

undefined8 FUN_145593820(void)

{
  return 6;
}



// FUNCTION 145593830 FUN_145593830 body=56 status=ok
// SIG undefined FUN_145593830(void)

bool FUN_145593830(longlong param_1)

{
  if ((((*(longlong *)(param_1 + 0x68) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) &&
      (*(longlong *)(param_1 + 0x40) != 0)) &&
     (((*(longlong *)(param_1 + 0x48) != 0 && (*(longlong *)(param_1 + 0x50) != 0)) &&
      (*(longlong *)(param_1 + 0x58) != 0)))) {
    return *(int *)(param_1 + 0xa0) != -1;
  }
  return false;
}



// FUNCTION 145593870 FUN_145593870 body=6 status=ok
// SIG undefined FUN_145593870(void)

undefined8 FUN_145593870(void)

{
  return 1;
}



// FUNCTION 145593880 FUN_145593880 body=3 status=ok
// SIG undefined FUN_145593880(void)

undefined8 FUN_145593880(void)

{
  return 0;
}



// FUNCTION 145593890 FUN_145593890 body=22 status=ok
// SIG undefined FUN_145593890(void)

undefined1 FUN_145593890(longlong param_1,longlong param_2)

{
  if ((*(int *)(param_2 + 0x38) == 0) && (*(char *)(param_2 + 0x18) == '\x03')) {
    *(longlong *)(param_1 + 0x68) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 1455938b0 FUN_1455938b0 body=4 status=ok
// SIG undefined FUN_1455938b0(void)

undefined4 FUN_1455938b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// FUNCTION 1455938c0 FUN_1455938c0 body=43 status=ok
// SIG undefined FUN_1455938c0(void)

undefined8 * FUN_1455938c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = draco::
             MeshPredictionSchemeGeometricNormalPredictorBase<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
             ::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 145593900 FUN_145593900 body=1198 status=ok
// SIG undefined FUN_145593900(void)

void FUN_145593900(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [32];
  char local_b8;
  undefined1 local_b4 [4];
  undefined4 *local_b0;
  ulonglong local_a8;
  longlong lStack_a0;
  longlong local_98;
  ulonglong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = *(longlong **)(param_1 + 0x20);
  local_b8 = '\x01';
  uVar12 = (ulonglong)*(uint *)(plVar1[9] + (ulonglong)param_2 * 4);
  lVar10 = **(longlong **)(param_1 + 0x28);
  local_b0 = param_3;
  if ((ulonglong)((*(longlong **)(param_1 + 0x28))[1] - lVar10 >> 2) <= uVar12) {
LAB_145593dc5:
                    /* WARNING: Subroutine does not return */
    FUN_145589460();
  }
  uVar12 = (ulonglong)
           *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(lVar10 + uVar12 * 4) * 4);
  lVar10 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar10 + 100) == '\0') {
    uVar12 = (ulonglong)*(uint *)(*(longlong *)(lVar10 + 0x48) + uVar12 * 4);
  }
  uVar9 = 0;
  local_60 = 0;
  lStack_58 = 0;
  local_50 = 0;
  FUN_145594980(lVar10,uVar12,*(undefined1 *)(lVar10 + 0x18),&local_60);
  local_98 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  lVar10 = 0;
  if (param_2 != 0xffffffff) {
    uVar12 = (ulonglong)param_2;
    do {
      iVar11 = (int)uVar12;
      if (*(int *)(param_1 + 0x38) == 0) {
        iVar7 = 1;
        if (param_2 + 1 == ((param_2 + 1) / 3) * 3) {
          iVar7 = -2;
        }
        uVar8 = iVar7 + param_2;
        uVar2 = param_2 - 1;
        if (param_2 == (param_2 / 3) * 3) {
          uVar2 = param_2 + 2;
        }
        uVar6 = (ulonglong)uVar2;
      }
      else {
        if (iVar11 == -1) {
          uVar8 = 0xffffffff;
        }
        else {
          uVar8 = iVar11 + 1;
          if (uVar8 == (uVar8 / 3) * 3) {
            uVar8 = iVar11 - 2;
          }
        }
        uVar6 = uVar12;
        if ((iVar11 != -1) && (uVar6 = (ulonglong)(iVar11 - 1), iVar11 == (int)(uVar12 / 3) * 3)) {
          uVar6 = (ulonglong)(iVar11 + 2);
        }
      }
      uVar5 = (ulonglong)
              *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x48) + (ulonglong)uVar8 * 4);
      lVar4 = **(longlong **)(param_1 + 0x28);
      if ((ulonglong)((*(longlong **)(param_1 + 0x28))[1] - lVar4 >> 2) <= uVar5)
      goto LAB_145593dc5;
      uVar5 = (ulonglong)
              *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(lVar4 + uVar5 * 4) * 4);
      lVar4 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar4 + 100) == '\0') {
        uVar5 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x48) + uVar5 * 4);
      }
      local_68 = 0;
      local_78 = 0;
      lStack_70 = 0;
      FUN_145594980(lVar4,uVar5,*(undefined1 *)(lVar4 + 0x18),&local_78);
      uVar6 = (ulonglong)*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x48) + uVar6 * 4);
      lVar4 = **(longlong **)(param_1 + 0x28);
      if ((ulonglong)((*(longlong **)(param_1 + 0x28))[1] - lVar4 >> 2) <= uVar6)
      goto LAB_145593dc5;
      uVar6 = (ulonglong)
              *(uint *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(lVar4 + uVar6 * 4) * 4);
      lVar4 = *(longlong *)(param_1 + 8);
      if (*(char *)(lVar4 + 100) == '\0') {
        uVar6 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x48) + uVar6 * 4);
      }
      local_80 = 0;
      local_90 = 0;
      lStack_88 = 0;
      FUN_145594980(lVar4,uVar6,*(undefined1 *)(lVar4 + 0x18),&local_90);
      local_a8 = local_a8 +
                 ((local_80 - local_50) * (lStack_70 - lStack_58) -
                 (lStack_88 - lStack_58) * (local_68 - local_50));
      lVar10 = lVar10 + ((local_68 - local_50) * (local_90 - local_60) -
                        (local_78 - local_60) * (local_80 - local_50));
      local_98 = local_98 +
                 ((lStack_88 - lStack_58) * (local_78 - local_60) -
                 (local_90 - local_60) * (lStack_70 - lStack_58));
      lStack_a0 = lVar10;
      if (local_b8 == '\0') {
        if (iVar11 != -1) {
          if (iVar11 == (int)(uVar12 / 3) * 3) {
            uVar8 = iVar11 + 2;
          }
          else {
            uVar8 = iVar11 - 1;
          }
          if (((uVar8 != 0xffffffff) &&
              ((*(uint *)(*plVar1 + (ulonglong)(uVar8 >> 5) * 4) >> ((byte)uVar8 & 0x1f) & 1) == 0))
             && (uVar8 = *(uint *)(*(longlong *)(plVar1[0x12] + 0x18) + (ulonglong)uVar8 * 4),
                uVar8 != 0xffffffff)) {
            if (uVar8 == (uVar8 / 3) * 3) {
              uVar12 = (ulonglong)(uVar8 + 2);
            }
            else {
              uVar12 = (ulonglong)(uVar8 - 1);
            }
            goto LAB_145593c89;
          }
        }
        uVar12 = 0xffffffff;
      }
      else {
        if (iVar11 != -1) {
          uVar8 = iVar11 + 1;
          if (uVar8 == (uVar8 / 3) * 3) {
            uVar8 = iVar11 - 2;
          }
          if (((uVar8 != 0xffffffff) &&
              ((*(uint *)(*plVar1 + (ulonglong)(uVar8 >> 5) * 4) >> ((byte)uVar8 & 0x1f) & 1) == 0))
             && (iVar11 = *(int *)(*(longlong *)(plVar1[0x12] + 0x18) + (ulonglong)uVar8 * 4),
                iVar11 != -1)) {
            uVar8 = iVar11 + 1;
            if (uVar8 == (uVar8 / 3) * 3) {
              uVar8 = iVar11 - 2;
            }
            uVar12 = (ulonglong)uVar8;
            if (uVar8 != 0xffffffff) {
              param_3 = local_b0;
              if (uVar8 != param_2) goto LAB_145593c89;
              break;
            }
          }
        }
        puVar3 = (uint *)FUN_14558ca50(plVar1,local_b4,param_2);
        uVar12 = (ulonglong)*puVar3;
        local_b8 = '\0';
      }
LAB_145593c89:
      param_3 = local_b0;
    } while ((int)uVar12 != -1);
  }
  uVar12 = uVar9;
  if (*(int *)(param_1 + 0x38) == 0) {
    do {
      uVar6 = (longlong)(&local_a8)[uVar9] >> 0x3f;
      lVar4 = ((&local_a8)[uVar9] ^ uVar6) - uVar6;
      if (0x7fffffffffffffff - lVar4 < (longlong)uVar12) {
        uVar12 = 0x7fffffffffffffff;
        break;
      }
      uVar12 = uVar12 + lVar4;
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < 3);
    iVar11 = (int)uVar12;
    if (iVar11 < 0x20000001) goto LAB_145593d8d;
    uVar12 = (longlong)((ulonglong)(iVar11 >> 0x1f & 0x1fffffff) + (longlong)iVar11) >> 0x1d;
  }
  else {
    do {
      uVar6 = (longlong)(&local_a8)[uVar9] >> 0x3f;
      lVar4 = ((&local_a8)[uVar9] ^ uVar6) - uVar6;
      if (0x7fffffffffffffff - lVar4 < (longlong)uVar12) {
        uVar12 = 0x7fffffffffffffff;
        goto LAB_145593d52;
      }
      uVar12 = uVar12 + lVar4;
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < 3);
    if ((longlong)uVar12 < 0x20000001) goto LAB_145593d8d;
LAB_145593d52:
    uVar12 = uVar12 >> 0x1d;
  }
  lStack_88 = lVar10 / (longlong)uVar12;
  local_90 = (longlong)local_a8 / (longlong)uVar12;
  uVar6 = local_98 % (longlong)uVar12;
  local_98 = local_98 / (longlong)uVar12;
  local_a8 = local_90;
  lStack_a0 = lStack_88;
  local_80 = local_98;
LAB_145593d8d:
  *param_3 = (undefined4)local_a8;
  param_3[1] = (undefined4)lStack_a0;
  param_3[2] = (undefined4)local_98;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8,uVar6);
}



// FUNCTION 145593dd0 FUN_145593dd0 body=25 status=ok
// SIG undefined FUN_145593dd0(void)

undefined4 FUN_145593dd0(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    return 1;
  }
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x38) = 1;
    return 1;
  }
  return 0;
}



// FUNCTION 145593df0 FUN_145593df0 body=43 status=ok
// SIG undefined FUN_145593df0(void)

undefined8 * FUN_145593df0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = draco::
             MeshPredictionSchemeGeometricNormalPredictorBase<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
             ::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 145593e20 FUN_145593e20 body=149 status=ok
// SIG undefined FUN_145593e20(void)

longlong FUN_145593e20(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_1453f5dd0(param_1 + 0xb8);
  *(undefined ***)(param_1 + 0x60) =
       draco::
       MeshPredictionSchemeGeometricNormalPredictorBase<int,draco::PredictionSchemeWrapDecodingTransform<int,int>,draco::MeshPredictionSchemeData<draco::MeshAttributeCornerTable>_>
       ::vftable;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    uVar3 = *(longlong *)(param_1 + 0x38) - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 145593ec0 FUN_145593ec0 body=1361 status=ok
// SIG undefined FUN_145593ec0(void)

void FUN_145593ec0(longlong *param_1,uint param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8 [4];
  ulonglong local_88;
  ulonglong uStack_80;
  longlong local_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar11 = -1;
  if (param_2 == 0xffffffff) {
    uVar17 = 0xffffffff;
    iVar12 = -1;
  }
  else {
    iVar12 = 1;
    if (param_2 + 1 == ((param_2 + 1) / 3) * 3) {
      iVar12 = -2;
    }
    uVar17 = param_2 - 1;
    if (param_2 == (param_2 / 3) * 3) {
      uVar17 = param_2 + 2;
    }
    if (iVar12 + param_2 == 0xffffffff) {
      iVar12 = -1;
    }
    else {
      iVar12 = *(int *)(*(longlong *)param_1[8] + (ulonglong)(iVar12 + param_2) * 4);
    }
  }
  if (uVar17 != 0xffffffff) {
    iVar11 = *(int *)(*(longlong *)param_1[8] + (ulonglong)uVar17 * 4);
  }
  lVar16 = *(longlong *)param_1[9];
  uVar8 = ((longlong *)param_1[9])[1] - lVar16 >> 2;
  if (uVar8 <= (ulonglong)(longlong)iVar12) {
LAB_145594420:
                    /* WARNING: Subroutine does not return */
    FUN_145589460();
  }
  iVar12 = *(int *)(lVar16 + (longlong)iVar12 * 4);
  if (uVar8 <= (ulonglong)(longlong)iVar11) goto LAB_145594420;
  lVar9 = 0;
  iVar11 = *(int *)(lVar16 + (longlong)iVar11 * 4);
  if (iVar11 < param_4) {
    if (iVar12 < param_4) {
      local_a8[2] = (ulonglong)*(int *)(param_3 + (longlong)(iVar12 * 2) * 4);
      local_a8[0] = local_a8[2];
      local_a8[1] = (longlong)*(int *)(param_3 + 4 + (longlong)(iVar12 * 2) * 4);
      iVar1 = *(int *)(param_3 + (longlong)(iVar11 * 2) * 4);
      iVar2 = *(int *)(param_3 + 4 + (longlong)(iVar11 * 2) * 4);
      local_b8 = (longlong)iVar1;
      uStack_b0 = (longlong)iVar2;
      do {
        if (*(longlong *)((longlong)&local_b8 + lVar9) != *(longlong *)((longlong)local_a8 + lVar9))
        {
          lVar16 = *param_1;
          local_58 = 0;
          lStack_50 = 0;
          local_48 = 0;
          uVar8 = (ulonglong)*(uint *)(param_1[1] + (longlong)param_4 * 4);
          if (*(char *)(lVar16 + 100) == '\0') {
            uVar8 = (ulonglong)*(uint *)(*(longlong *)(lVar16 + 0x48) + uVar8 * 4);
          }
          FUN_145594980(lVar16,uVar8,*(undefined1 *)(lVar16 + 0x18),&local_58);
          lVar16 = *param_1;
          local_70 = 0;
          lStack_68 = 0;
          local_60 = 0;
          uVar8 = (ulonglong)*(uint *)(param_1[1] + (longlong)iVar12 * 4);
          if (*(char *)(lVar16 + 100) == '\0') {
            uVar8 = (ulonglong)*(uint *)(*(longlong *)(lVar16 + 0x48) + uVar8 * 4);
          }
          FUN_145594980(lVar16,uVar8,*(undefined1 *)(lVar16 + 0x18),&local_70);
          lVar16 = *param_1;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uVar8 = (ulonglong)*(uint *)(param_1[1] + (longlong)iVar11 * 4);
          if (*(char *)(lVar16 + 100) == '\0') {
            uVar8 = (ulonglong)*(uint *)(*(longlong *)(lVar16 + 0x48) + uVar8 * 4);
          }
          FUN_145594980(lVar16,uVar8,*(undefined1 *)(lVar16 + 0x18),&local_88);
          local_c8 = uStack_80 - lStack_68;
          uVar8 = local_78 - local_60;
          uVar18 = local_88 - local_70;
          uVar19 = uVar8 * uVar8 + local_c8 * local_c8 + uVar18 * uVar18;
          local_88 = uVar8;
          if (uVar19 == 0) goto LAB_1455943e3;
          uVar20 = local_b8 - local_a8[0];
          uStack_b0 = uStack_b0 - local_a8[1];
          lVar16 = (local_48 - local_60) * uVar8 + (lStack_50 - lStack_68) * local_c8 +
                   (local_58 - local_70) * uVar18;
          uVar13 = (local_a8[1] ^ (longlong)local_a8[1] >> 0x3f) - ((longlong)local_a8[1] >> 0x3f);
          uVar10 = (local_a8[2] ^ (longlong)local_a8[2] >> 0x3f) - ((longlong)local_a8[2] >> 0x3f);
          if ((longlong)uVar10 < (longlong)uVar13) {
            uVar10 = uVar13;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar19;
          local_b8 = uVar20;
          if (uVar10 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar4,0)) {
            lVar14 = (uStack_b0 ^ (longlong)uStack_b0 >> 0x3f) - ((longlong)uStack_b0 >> 0x3f);
            lVar9 = (uVar20 ^ (longlong)uVar20 >> 0x3f) - ((longlong)uVar20 >> 0x3f);
            if (lVar9 < lVar14) {
              lVar9 = lVar14;
            }
            auVar5._8_8_ = 0;
            auVar5._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8);
            if (lVar16 <= SUB168((auVar5 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar9),0))
            {
              lVar9 = local_a8[2] * uVar19;
              local_a8[2] = uVar20 * lVar16;
              local_a8[3] = lVar16 * uStack_b0;
              local_a8[0] = lVar9 + local_a8[2];
              local_a8[1] = uVar19 * local_a8[1] + local_a8[3];
              lVar15 = (uVar8 ^ (longlong)uVar8 >> 0x3f) - ((longlong)uVar8 >> 0x3f);
              lVar14 = (local_c8 ^ (longlong)local_c8 >> 0x3f) - ((longlong)local_c8 >> 0x3f);
              lVar9 = (uVar18 ^ (longlong)uVar18 >> 0x3f) - ((longlong)uVar18 >> 0x3f);
              if (lVar9 < lVar14) {
                lVar9 = lVar14;
              }
              if (lVar9 < lVar15) {
                lVar9 = lVar15;
              }
              auVar6._8_8_ = 0;
              auVar6._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8);
              if (lVar16 <= SUB168((auVar6 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar9),0
                                  )) {
                lVar15 = (local_58 - (longlong)(lVar16 * uVar18) / (longlong)uVar19) - local_70;
                lVar9 = (lStack_50 - (longlong)(lVar16 * local_c8) / (longlong)uVar19) - lStack_68;
                lVar14 = (local_48 - (longlong)(lVar16 * uVar8) / (longlong)uVar19) - local_60;
                lVar16 = FUN_14558c710((lVar9 * lVar9 + lVar14 * lVar14 + lVar15 * lVar15) * uVar19,
                                       (longlong)(lVar16 * uVar8) % (longlong)uVar19);
                uVar20 = uVar20 * lVar16;
                local_a8[2] = lVar16 * uStack_b0;
                uVar8 = -uVar20;
                if (param_1[6] != 0) {
                  puVar7 = (undefined8 *)FUN_14558c780(param_1 + 3,&local_b8);
                  uVar3 = puVar7[1];
                  uVar17 = *(uint *)*puVar7;
                  FUN_14558c800(param_1 + 3);
                  uVar10 = local_a8[1];
                  uVar18 = local_a8[0];
                  if ((uVar17 & 1 << ((byte)uVar3 & 0x1f)) == 0) {
                    local_88 = local_a8[2];
                    uVar13 = -local_a8[2];
                    uStack_80 = uVar8;
                  }
                  else {
                    local_a8[0] = local_a8[2];
                    local_a8[1] = uVar8;
                    uVar13 = local_a8[2];
                    uVar20 = uVar8;
                  }
                  local_b8 = (longlong)(uVar18 + uVar13) / (longlong)uVar19;
                  uStack_b0 = (longlong)(uVar10 + uVar20) / (longlong)uVar19;
                  *(undefined4 *)(param_1 + 2) = (undefined4)local_b8;
                  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_b0;
                }
              }
            }
          }
          goto LAB_145594032;
        }
        lVar9 = lVar9 + 8;
      } while (lVar9 < 0x10);
      *(int *)(param_1 + 2) = iVar1;
      *(int *)((longlong)param_1 + 0x14) = iVar2;
      goto LAB_145594032;
    }
LAB_1455943e7:
    if (param_4 < 1) {
      param_1[2] = 0;
      goto LAB_145594032;
    }
    iVar11 = param_4 * 2 + -2;
  }
  else {
LAB_1455943e3:
    iVar11 = iVar12 * 2;
    if (param_4 <= iVar12) goto LAB_1455943e7;
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)iVar11 * 4 + param_3);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)iVar11 * 4 + 4 + param_3);
LAB_145594032:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 145594430 FUN_145594430 body=1329 status=ok
// SIG undefined FUN_145594430(void)

void FUN_145594430(longlong *param_1,uint param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8 [4];
  ulonglong local_88;
  ulonglong uStack_80;
  longlong local_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar20 = 0xffffffff;
  uVar18 = 0xffffffff;
  if (param_2 != 0xffffffff) {
    iVar19 = 1;
    if (param_2 + 1 == ((param_2 + 1) / 3) * 3) {
      iVar19 = -2;
    }
    uVar20 = iVar19 + param_2;
    uVar18 = param_2 - 1;
    if (param_2 == (param_2 / 3) * 3) {
      uVar18 = param_2 + 2;
    }
  }
  uVar16 = (ulonglong)*(int *)(*(longlong *)(param_1[8] + 0x48) + (ulonglong)uVar18 * 4);
  uVar13 = (ulonglong)*(int *)(*(longlong *)(param_1[8] + 0x48) + (ulonglong)uVar20 * 4);
  lVar9 = *(longlong *)param_1[9];
  uVar8 = ((longlong *)param_1[9])[1] - lVar9 >> 2;
  if (uVar8 <= uVar13) {
LAB_145594970:
                    /* WARNING: Subroutine does not return */
    FUN_145589460();
  }
  iVar19 = *(int *)(lVar9 + uVar13 * 4);
  if (uVar8 <= uVar16) goto LAB_145594970;
  iVar12 = *(int *)(lVar9 + uVar16 * 4);
  lVar9 = 0;
  if (iVar12 < param_4) {
    if (iVar19 < param_4) {
      local_a8[2] = (ulonglong)*(int *)(param_3 + (longlong)(iVar19 * 2) * 4);
      local_a8[0] = local_a8[2];
      local_a8[1] = (longlong)*(int *)(param_3 + 4 + (longlong)(iVar19 * 2) * 4);
      iVar1 = *(int *)(param_3 + (longlong)(iVar12 * 2) * 4);
      iVar2 = *(int *)(param_3 + 4 + (longlong)(iVar12 * 2) * 4);
      local_b8 = (longlong)iVar1;
      uStack_b0 = (longlong)iVar2;
      do {
        if (*(longlong *)((longlong)&local_b8 + lVar9) != *(longlong *)((longlong)local_a8 + lVar9))
        {
          lVar9 = *param_1;
          local_58 = 0;
          lStack_50 = 0;
          local_48 = 0;
          uVar8 = (ulonglong)*(uint *)(param_1[1] + (longlong)param_4 * 4);
          if (*(char *)(lVar9 + 100) == '\0') {
            uVar8 = (ulonglong)*(uint *)(*(longlong *)(lVar9 + 0x48) + uVar8 * 4);
          }
          FUN_145594980(lVar9,uVar8,*(undefined1 *)(lVar9 + 0x18),&local_58);
          lVar9 = *param_1;
          local_70 = 0;
          lStack_68 = 0;
          local_60 = 0;
          uVar8 = (ulonglong)*(uint *)(param_1[1] + (longlong)iVar19 * 4);
          if (*(char *)(lVar9 + 100) == '\0') {
            uVar8 = (ulonglong)*(uint *)(*(longlong *)(lVar9 + 0x48) + uVar8 * 4);
          }
          FUN_145594980(lVar9,uVar8,*(undefined1 *)(lVar9 + 0x18),&local_70);
          lVar9 = *param_1;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uVar8 = (ulonglong)*(uint *)(param_1[1] + (longlong)iVar12 * 4);
          if (*(char *)(lVar9 + 100) == '\0') {
            uVar8 = (ulonglong)*(uint *)(*(longlong *)(lVar9 + 0x48) + uVar8 * 4);
          }
          FUN_145594980(lVar9,uVar8,*(undefined1 *)(lVar9 + 0x18),&local_88);
          local_c8 = uStack_80 - lStack_68;
          uVar8 = local_78 - local_60;
          uVar13 = local_88 - local_70;
          uVar16 = uVar8 * uVar8 + local_c8 * local_c8 + uVar13 * uVar13;
          local_88 = uVar8;
          if (uVar16 == 0) goto LAB_145594933;
          uVar21 = local_b8 - local_a8[0];
          uStack_b0 = uStack_b0 - local_a8[1];
          lVar9 = (local_48 - local_60) * uVar8 + (lStack_50 - lStack_68) * local_c8 +
                  (local_58 - local_70) * uVar13;
          uVar14 = (local_a8[1] ^ (longlong)local_a8[1] >> 0x3f) - ((longlong)local_a8[1] >> 0x3f);
          uVar10 = (local_a8[2] ^ (longlong)local_a8[2] >> 0x3f) - ((longlong)local_a8[2] >> 0x3f);
          if ((longlong)uVar10 < (longlong)uVar14) {
            uVar10 = uVar14;
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar16;
          local_b8 = uVar21;
          if (uVar10 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar4,0)) {
            lVar15 = (uStack_b0 ^ (longlong)uStack_b0 >> 0x3f) - ((longlong)uStack_b0 >> 0x3f);
            lVar11 = (uVar21 ^ (longlong)uVar21 >> 0x3f) - ((longlong)uVar21 >> 0x3f);
            if (lVar11 < lVar15) {
              lVar11 = lVar15;
            }
            auVar5._8_8_ = 0;
            auVar5._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8);
            if (lVar9 <= SUB168((auVar5 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar11),0))
            {
              lVar11 = local_a8[2] * uVar16;
              local_a8[2] = uVar21 * lVar9;
              local_a8[3] = lVar9 * uStack_b0;
              local_a8[0] = lVar11 + local_a8[2];
              local_a8[1] = uVar16 * local_a8[1] + local_a8[3];
              lVar17 = (uVar8 ^ (longlong)uVar8 >> 0x3f) - ((longlong)uVar8 >> 0x3f);
              lVar15 = (local_c8 ^ (longlong)local_c8 >> 0x3f) - ((longlong)local_c8 >> 0x3f);
              lVar11 = (uVar13 ^ (longlong)uVar13 >> 0x3f) - ((longlong)uVar13 >> 0x3f);
              if (lVar11 < lVar15) {
                lVar11 = lVar15;
              }
              if (lVar11 < lVar17) {
                lVar11 = lVar17;
              }
              auVar6._8_8_ = 0;
              auVar6._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8);
              if (lVar9 <= SUB168((auVar6 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar11),0
                                 )) {
                lVar17 = (local_58 - (longlong)(uVar13 * lVar9) / (longlong)uVar16) - local_70;
                lVar11 = (lStack_50 - (longlong)(lVar9 * local_c8) / (longlong)uVar16) - lStack_68;
                lVar15 = (local_48 - (longlong)(lVar9 * uVar8) / (longlong)uVar16) - local_60;
                lVar9 = FUN_14558c710((lVar11 * lVar11 + lVar15 * lVar15 + lVar17 * lVar17) * uVar16
                                      ,(longlong)(lVar9 * uVar8) % (longlong)uVar16);
                uVar21 = uVar21 * lVar9;
                local_a8[2] = lVar9 * uStack_b0;
                uVar8 = -uVar21;
                if (param_1[6] != 0) {
                  puVar7 = (undefined8 *)FUN_14558c780(param_1 + 3,&local_b8);
                  uVar3 = puVar7[1];
                  uVar18 = *(uint *)*puVar7;
                  FUN_14558c800(param_1 + 3);
                  uVar10 = local_a8[1];
                  uVar13 = local_a8[0];
                  if ((uVar18 & 1 << ((byte)uVar3 & 0x1f)) == 0) {
                    local_88 = local_a8[2];
                    uVar14 = -local_a8[2];
                    uStack_80 = uVar8;
                  }
                  else {
                    local_a8[0] = local_a8[2];
                    local_a8[1] = uVar8;
                    uVar14 = local_a8[2];
                    uVar21 = uVar8;
                  }
                  local_b8 = (longlong)(uVar13 + uVar14) / (longlong)uVar16;
                  uStack_b0 = (longlong)(uVar10 + uVar21) / (longlong)uVar16;
                  *(undefined4 *)(param_1 + 2) = (undefined4)local_b8;
                  *(undefined4 *)((longlong)param_1 + 0x14) = (undefined4)uStack_b0;
                }
              }
            }
          }
          goto LAB_145594582;
        }
        lVar9 = lVar9 + 8;
      } while (lVar9 < 0x10);
      *(int *)(param_1 + 2) = iVar1;
      *(int *)((longlong)param_1 + 0x14) = iVar2;
      goto LAB_145594582;
    }
LAB_145594937:
    if (param_4 < 1) {
      param_1[2] = 0;
      goto LAB_145594582;
    }
    iVar12 = param_4 * 2 + -2;
  }
  else {
LAB_145594933:
    iVar12 = iVar19 * 2;
    if (param_4 <= iVar19) goto LAB_145594937;
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)iVar12 * 4 + param_3);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)iVar12 * 4 + 4 + param_3);
LAB_145594582:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
}



// FUNCTION 145594980 FUN_145594980 body=1427 status=ok
// SIG undefined FUN_145594980(void)

undefined8 FUN_145594980(longlong *param_1,uint param_2,byte param_3,ulonglong *param_4)

{
  float fVar1;
  double dVar2;
  short sVar3;
  undefined8 uVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  float *pfVar9;
  double *pdVar10;
  ulonglong uVar11;
  char *pcVar12;
  short *psVar13;
  ushort *puVar14;
  int *piVar15;
  uint *puVar16;
  ulonglong *puVar17;
  byte *pbVar18;
  ulonglong *puVar19;
  longlong *plVar20;
  
  uVar11 = (ulonglong)param_3;
  if ((param_4 == (ulonglong *)0x0) || (10 < *(int *)((longlong)param_1 + 0x1c) - 1U)) {
LAB_145594ee5:
    uVar4 = 0;
  }
  else {
    switch(*(int *)((longlong)param_1 + 0x1c)) {
    case 1:
      plVar20 = (longlong *)*param_1;
      iVar8 = 0;
      bVar5 = *(byte *)(param_1 + 3);
      uVar7 = (ulonglong)bVar5;
      pcVar12 = (char *)((ulonglong)param_2 * param_1[5] + param_1[6] + *plVar20);
      if (param_3 < bVar5) {
        bVar5 = param_3;
      }
      puVar17 = param_4;
      if (bVar5 != 0) {
        do {
          if ((char *)plVar20[1] <= pcVar12) goto LAB_145594ee5;
          iVar8 = iVar8 + 1;
          *puVar17 = (longlong)*pcVar12;
          pcVar12 = pcVar12 + 1;
          uVar7 = (ulonglong)*(byte *)(param_1 + 3);
          puVar17 = puVar17 + 1;
          plVar20 = (longlong *)*param_1;
          uVar6 = uVar7;
          if (param_3 < *(byte *)(param_1 + 3)) {
            uVar6 = (ulonglong)param_3;
          }
        } while (iVar8 < (int)uVar6);
      }
      break;
    case 2:
      plVar20 = (longlong *)*param_1;
      iVar8 = 0;
      bVar5 = *(byte *)(param_1 + 3);
      uVar7 = (ulonglong)bVar5;
      pbVar18 = (byte *)((ulonglong)param_2 * param_1[5] + param_1[6] + *plVar20);
      if (param_3 < bVar5) {
        bVar5 = param_3;
      }
      puVar17 = param_4;
      if (bVar5 != 0) {
        do {
          if ((byte *)plVar20[1] <= pbVar18) goto LAB_145594ee5;
          iVar8 = iVar8 + 1;
          *puVar17 = (ulonglong)*pbVar18;
          pbVar18 = pbVar18 + 1;
          uVar7 = (ulonglong)*(byte *)(param_1 + 3);
          puVar17 = puVar17 + 1;
          plVar20 = (longlong *)*param_1;
          uVar6 = uVar7;
          if (param_3 < *(byte *)(param_1 + 3)) {
            uVar6 = uVar11;
          }
        } while (iVar8 < (int)uVar6);
      }
      break;
    case 3:
      plVar20 = (longlong *)*param_1;
      iVar8 = 0;
      bVar5 = *(byte *)(param_1 + 3);
      uVar7 = (ulonglong)bVar5;
      psVar13 = (short *)((ulonglong)param_2 * param_1[5] + param_1[6] + *plVar20);
      if (param_3 < bVar5) {
        bVar5 = param_3;
      }
      puVar17 = param_4;
      if (bVar5 != 0) {
        do {
          if ((short *)plVar20[1] <= psVar13) goto LAB_145594ee5;
          iVar8 = iVar8 + 1;
          *puVar17 = (longlong)*psVar13;
          psVar13 = psVar13 + 1;
          uVar7 = (ulonglong)*(byte *)(param_1 + 3);
          plVar20 = (longlong *)*param_1;
          uVar6 = uVar7;
          if (param_3 < *(byte *)(param_1 + 3)) {
            uVar6 = uVar11;
          }
          puVar17 = puVar17 + 1;
        } while (iVar8 < (int)uVar6);
      }
      break;
    case 4:
      plVar20 = (longlong *)*param_1;
      iVar8 = 0;
      bVar5 = *(byte *)(param_1 + 3);
      uVar7 = (ulonglong)bVar5;
      puVar14 = (ushort *)((ulonglong)param_2 * param_1[5] + param_1[6] + *plVar20);
      if (param_3 < bVar5) {
        bVar5 = param_3;
      }
      puVar17 = param_4;
      if (bVar5 != 0) {
        do {
          if ((ushort *)plVar20[1] <= puVar14) goto LAB_145594ee5;
          iVar8 = iVar8 + 1;
          *puVar17 = (ulonglong)*puVar14;
          puVar14 = puVar14 + 1;
          uVar7 = (ulonglong)*(byte *)(param_1 + 3);
          puVar17 = puVar17 + 1;
          plVar20 = (longlong *)*param_1;
          uVar6 = uVar7;
          if (param_3 < *(byte *)(param_1 + 3)) {
            uVar6 = uVar11;
          }
        } while (iVar8 < (int)uVar6);
      }
      break;
    case 5:
      plVar20 = (longlong *)*param_1;
      iVar8 = 0;
      bVar5 = *(byte *)(param_1 + 3);
      uVar7 = (ulonglong)bVar5;
      piVar15 = (int *)((ulonglong)param_2 * param_1[5] + param_1[6] + *plVar20);
      if (param_3 < bVar5) {
        bVar5 = param_3;
      }
      puVar17 = param_4;
      if (bVar5 != 0) {
        do {
          if ((int *)plVar20[1] <= piVar15) goto LAB_145594ee5;
          iVar8 = iVar8 + 1;
          *puVar17 = (longlong)*piVar15;
          piVar15 = piVar15 + 1;
          uVar7 = (ulonglong)*(byte *)(param_1 + 3);
          puVar17 = puVar17 + 1;
          plVar20 = (longlong *)*param_1;
          uVar6 = uVar7;
          if (param_3 < *(byte *)(param_1 + 3)) {
            uVar6 = uVar11;
          }
        } while (iVar8 < (int)uVar6);
      }
      break;
    case 6:
      plVar20 = (longlong *)*param_1;
      iVar8 = 0;
      bVar5 = *(byte *)(param_1 + 3);
      uVar7 = (ulonglong)bVar5;
      puVar16 = (uint *)((ulonglong)param_2 * param_1[5] + param_1[6] + *plVar20);
      if (param_3 < bVar5) {
        bVar5 = param_3;
      }
      puVar17 = param_4;
      if (bVar5 != 0) {
        do {
          if ((uint *)plVar20[1] <= puVar16) goto LAB_145594ee5;
          iVar8 = iVar8 + 1;
          *puVar17 = (ulonglong)*puVar16;
          puVar16 = puVar16 + 1;
          uVar7 = (ulonglong)*(byte *)(param_1 + 3);
          puVar17 = puVar17 + 1;
          plVar20 = (longlong *)*param_1;
          uVar6 = uVar7;
          if (param_3 < *(byte *)(param_1 + 3)) {
            uVar6 = uVar11;
          }
        } while (iVar8 < (int)uVar6);
      }
      break;
    case 7:
      plVar20 = (longlong *)*param_1;
      iVar8 = 0;
      bVar5 = *(byte *)(param_1 + 3);
      uVar7 = (ulonglong)bVar5;
      puVar17 = (ulonglong *)((ulonglong)param_2 * param_1[5] + param_1[6] + *plVar20);
      if (param_3 < bVar5) {
        bVar5 = param_3;
      }
      puVar19 = param_4;
      if (bVar5 != 0) {
        do {
          if ((ulonglong *)plVar20[1] <= puVar17) goto LAB_145594ee5;
          iVar8 = iVar8 + 1;
          *puVar19 = *puVar17;
          puVar17 = puVar17 + 1;
          uVar7 = (ulonglong)*(byte *)(param_1 + 3);
          puVar19 = puVar19 + 1;
          plVar20 = (longlong *)*param_1;
          uVar6 = uVar7;
          if (param_3 < *(byte *)(param_1 + 3)) {
            uVar6 = uVar11;
          }
        } while (iVar8 < (int)uVar6);
      }
      break;
    case 8:
      plVar20 = (longlong *)*param_1;
      iVar8 = 0;
      bVar5 = *(byte *)(param_1 + 3);
      uVar7 = (ulonglong)bVar5;
      puVar17 = (ulonglong *)((ulonglong)param_2 * param_1[5] + param_1[6] + *plVar20);
      if (param_3 < bVar5) {
        bVar5 = param_3;
      }
      puVar19 = param_4;
      if (bVar5 != 0) {
        do {
          if (((ulonglong *)plVar20[1] <= puVar17) || (0x7fffffffffffffff < *puVar17))
          goto LAB_145594ee5;
          *puVar19 = *puVar17;
          puVar17 = puVar17 + 1;
          uVar7 = (ulonglong)*(byte *)(param_1 + 3);
          plVar20 = (longlong *)*param_1;
          iVar8 = iVar8 + 1;
          uVar6 = uVar7;
          if (param_3 < *(byte *)(param_1 + 3)) {
            uVar6 = uVar11;
          }
          puVar19 = puVar19 + 1;
        } while (iVar8 < (int)uVar6);
      }
      break;
    case 9:
      iVar8 = 0;
      bVar5 = *(byte *)(param_1 + 3);
      uVar7 = (ulonglong)bVar5;
      pfVar9 = (float *)((ulonglong)param_2 * param_1[5] + param_1[6] + *(longlong *)*param_1);
      if (param_3 < bVar5) {
        bVar5 = param_3;
      }
      puVar17 = param_4;
      if (bVar5 != 0) {
        do {
          if (((*(float **)(*param_1 + 8) <= pfVar9) || (fVar1 = *pfVar9, NAN(fVar1))) ||
             ((sVar3 = _fdclass(fVar1), sVar3 == 1 ||
              (((fVar1 < -9.223372e+18 || (9.223372e+18 <= fVar1)) || ((char)param_1[4] != '\0')))))
             ) goto LAB_145594ee5;
          pfVar9 = pfVar9 + 1;
          iVar8 = iVar8 + 1;
          *puVar17 = (longlong)fVar1;
          uVar7 = (ulonglong)*(byte *)(param_1 + 3);
          uVar6 = uVar7;
          if (param_3 < *(byte *)(param_1 + 3)) {
            uVar6 = (ulonglong)(uint)param_3;
          }
          puVar17 = puVar17 + 1;
        } while (iVar8 < (int)uVar6);
      }
      break;
    case 10:
      iVar8 = 0;
      bVar5 = *(byte *)(param_1 + 3);
      uVar7 = (ulonglong)bVar5;
      pdVar10 = (double *)((ulonglong)param_2 * param_1[5] + param_1[6] + *(longlong *)*param_1);
      if (param_3 < bVar5) {
        bVar5 = param_3;
      }
      puVar17 = param_4;
      if (bVar5 != 0) {
        do {
          if (*(double **)(*param_1 + 8) <= pdVar10) goto LAB_145594ee5;
          dVar2 = *pdVar10;
          if ((((NAN(dVar2)) || (sVar3 = _dclass(SUB84(dVar2,0)), sVar3 == 1)) ||
              (dVar2 < -9.223372036854776e+18)) ||
             ((9.223372036854776e+18 <= dVar2 || ((char)param_1[4] != '\0')))) goto LAB_145594ee5;
          pdVar10 = pdVar10 + 1;
          iVar8 = iVar8 + 1;
          *puVar17 = (longlong)dVar2;
          uVar7 = (ulonglong)*(byte *)(param_1 + 3);
          uVar6 = uVar7;
          if (param_3 < *(byte *)(param_1 + 3)) {
            uVar6 = (ulonglong)(uint)param_3;
          }
          puVar17 = puVar17 + 1;
        } while (iVar8 < (int)uVar6);
      }
      break;
    case 0xb:
      iVar8 = 0;
      bVar5 = *(byte *)(param_1 + 3);
      uVar7 = (ulonglong)bVar5;
      pbVar18 = (byte *)((ulonglong)param_2 * param_1[5] + param_1[6] + *(longlong *)*param_1);
      if (param_3 < bVar5) {
        bVar5 = param_3;
      }
      puVar17 = param_4;
      if (bVar5 != 0) {
        do {
          if (*(byte **)(*param_1 + 8) <= pbVar18) goto LAB_145594ee5;
          iVar8 = iVar8 + 1;
          *puVar17 = (ulonglong)*pbVar18;
          pbVar18 = pbVar18 + 1;
          bVar5 = *(byte *)(param_1 + 3);
          uVar7 = (ulonglong)bVar5;
          puVar17 = puVar17 + 1;
          if (param_3 < bVar5) {
            bVar5 = param_3;
          }
        } while (iVar8 < (int)(uint)bVar5);
      }
    }
    if (uVar7 < uVar11) {
      memset(param_4 + uVar7,0,(uVar11 - uVar7) * 8);
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 145594f40 FUN_145594f40 body=119 status=ok
// SIG undefined FUN_145594f40(void)

ulonglong FUN_145594f40(uint param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong in_RAX;
  
  if (param_1 < 6) {
    lVar1 = param_3[2] + 1;
    if (lVar1 <= param_3[1]) {
      lVar4 = *param_3;
      bVar2 = *(byte *)(param_3[2] + lVar4);
      param_3[2] = lVar1;
      if (-1 < (char)bVar2) {
        *param_2 = (uint)bVar2;
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
      in_RAX = FUN_145594f40(param_1 + 1,param_2);
      if ((char)in_RAX != '\0') {
        uVar3 = *param_2;
        *param_2 = bVar2 & 0x7f | uVar3 << 7;
        return CONCAT71((uint7)(uint3)((uVar3 << 7) >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 145594fc0 FUN_145594fc0 body=6 status=ok
// SIG undefined FUN_145594fc0(void)

undefined8 FUN_145594fc0(void)

{
  return 2;
}



// FUNCTION 145594fd0 FUN_145594fd0 body=6 status=ok
// SIG undefined FUN_145594fd0(void)

undefined8 FUN_145594fd0(void)

{
  return 6;
}



// FUNCTION 145594fe0 FUN_145594fe0 body=6 status=ok
// SIG undefined FUN_145594fe0(void)

undefined8 FUN_145594fe0(void)

{
  return 2;
}



// FUNCTION 145594ff0 FUN_145594ff0 body=33 status=ok
// SIG undefined FUN_145594ff0(void)

undefined8 FUN_145594ff0(undefined8 param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 145595020 FUN_145595020 body=51 status=ok
// SIG undefined FUN_145595020(void)

undefined8 * FUN_145595020(undefined8 *param_1)

{
  FUN_14558bcb0();
  *param_1 = draco::SequentialNormalAttributeDecoder::vftable;
  param_1[6] = draco::AttributeOctahedronTransform::vftable;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  return param_1;
}



// FUNCTION 145595060 FUN_145595060 body=49 status=ok
// SIG undefined FUN_145595060(void)

ulonglong FUN_145595060(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_14558bce0();
  if (((char)uVar1 != '\0') &&
     (uVar1 = *(ulonglong *)(param_1 + 0x10), *(char *)(uVar1 + 0x18) == '\x03')) {
    return CONCAT71((int7)(uVar1 >> 8),*(int *)(uVar1 + 0x1c) == 9);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1455950a0 FUN_1455950a0 body=6 status=ok
// SIG undefined FUN_1455950a0(void)

undefined8 FUN_1455950a0(void)

{
  return 2;
}



// FUNCTION 1455950b0 FUN_1455950b0 body=121 status=ok
// SIG undefined FUN_1455950b0(void)

void FUN_1455950b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  if (CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x48),
               *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x49)) < 0x200) {
    cVar1 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x38))
                      (param_1 + 0x30,*(undefined8 *)(param_1 + 0x10));
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_14558bea0(param_1,param_2,param_3);
  return;
}



// FUNCTION 145595130 FUN_145595130 body=130 status=ok
// SIG undefined FUN_145595130(void)

void FUN_145595130(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (0x1ff < CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x48),
                       *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x49))) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    uVar3 = FUN_14558b940();
    cVar2 = (**(code **)(lVar1 + 0x38))(param_1 + 0x30,uVar3,param_3);
    if (cVar2 == '\0') {
      return;
    }
  }
  FUN_1455991f0(param_1 + 0x30,*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 1455951c0 FUN_1455951c0 body=60 status=ok
// SIG undefined FUN_1455951c0(void)

void FUN_1455951c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  uVar2 = FUN_14558b940();
                    /* WARNING: Could not recover jumptable at 0x0001455951f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x28))(param_1 + 0x30,uVar2,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 145595200 FUN_145595200 body=510 status=ok
// SIG undefined FUN_145595200(void)

longlong * FUN_145595200(longlong param_1,longlong *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if (param_4 == 2) {
    plVar3 = *(longlong **)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 0x18);
    uStack_2c = 0x3f800000;
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffff;
    local_28 = 0xffffffff;
    puVar6 = (undefined8 *)0x0;
    if (param_3 == -2) goto LAB_1455953de;
    uVar7 = *(undefined8 *)(*(longlong *)(plVar3[1] + 0x10) + (longlong)iVar1 * 8);
    iVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    if (iVar2 == 1) {
      plVar3 = (longlong *)
               FUN_145595b50(&local_40,plVar3,param_3,iVar1,&local_38,
                             CONCAT11((char)plVar3[9],*(undefined1 *)((longlong)plVar3 + 0x49)));
      puVar6 = (undefined8 *)*plVar3;
      *plVar3 = 0;
      if (local_40 != (undefined8 *)0x0) {
        (**(code **)*local_40)(local_40,1);
      }
      if (puVar6 != (undefined8 *)0x0) goto LAB_1455953de;
    }
    puVar4 = (undefined8 *)FUN_14494321d(0x28);
    puVar6 = (undefined8 *)0x0;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1455953de;
    ppuVar5 = draco::
              PredictionSchemeDeltaDecoder<int,draco::PredictionSchemeNormalOctahedronDecodingTransform<int>_>
              ::vftable;
  }
  else {
    if (param_4 != 3) {
      *param_2 = 0;
      return param_2;
    }
    plVar3 = *(longlong **)(param_1 + 8);
    iVar1 = *(int *)(param_1 + 0x18);
    uStack_2c = 0x3f800000;
    local_38 = 0xffffffffffffffff;
    uStack_30 = 0xffffffff;
    local_28 = 0xffffffff;
    puVar6 = (undefined8 *)0x0;
    if (param_3 == -2) goto LAB_1455953de;
    uVar7 = *(undefined8 *)(*(longlong *)(plVar3[1] + 0x10) + (longlong)iVar1 * 8);
    iVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    if (iVar2 == 1) {
      plVar3 = (longlong *)
               FUN_145596060(&local_40,plVar3,param_3,iVar1,&local_38,
                             CONCAT11((char)plVar3[9],*(undefined1 *)((longlong)plVar3 + 0x49)));
      puVar6 = (undefined8 *)*plVar3;
      *plVar3 = 0;
      if (local_40 != (undefined8 *)0x0) {
        (**(code **)*local_40)(local_40,1);
      }
      if (puVar6 != (undefined8 *)0x0) goto LAB_1455953de;
    }
    puVar4 = (undefined8 *)FUN_14494321d(0x28);
    puVar6 = (undefined8 *)0x0;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1455953de;
    ppuVar5 = draco::
              PredictionSchemeDeltaDecoder<int,draco::PredictionSchemeNormalOctahedronCanonicalizedDecodingTransform<int>_>
              ::vftable;
  }
  puVar4[2] = local_38;
  puVar4[3] = CONCAT44(uStack_2c,uStack_30);
  *puVar4 = ppuVar5;
  *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  puVar4[1] = uVar7;
  puVar6 = puVar4;
LAB_1455953de:
  *param_2 = (longlong)puVar6;
  return param_2;
}



// FUNCTION 145595400 FUN_145595400 body=107 status=ok
// SIG undefined FUN_145595400(void)

longlong FUN_145595400(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_144d7df00(lVar2);
    thunk_FUN_1400020a8(lVar2,0x70);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 145595470 FUN_145595470 body=83 status=ok
// SIG undefined FUN_145595470(void)

ulonglong FUN_145595470(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulonglong in_RAX;
  
  if ((param_2 & 1) != 0) {
    iVar1 = 0x1f;
    if (param_2 != 0) {
      for (; param_2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    in_RAX = (ulonglong)(iVar1 - 1U);
    if (iVar1 - 1U < 0x1d) {
      iVar2 = 1 << ((byte)(iVar1 + 1) & 0x1f);
      *param_1 = iVar1 + 1;
      param_1[1] = iVar2 + -1;
      iVar2 = iVar2 + -2;
      param_1[2] = iVar2;
      param_1[4] = iVar2 / 2;
      param_1[3] = (int)(2.0 / (float)iVar2);
      return CONCAT71((uint7)(uint3)(iVar2 - (iVar2 >> 0x1f) >> 9),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1455954d0 FUN_1455954d0 body=204 status=ok
// SIG undefined FUN_1455954d0(void)

void FUN_1455954d0(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *param_2;
  if (iVar4 < 0) {
LAB_14559550b:
    if (*param_3 < 1) {
      iVar1 = *(int *)(param_1 + 0x10);
      iVar5 = -iVar1;
      iVar6 = -iVar1;
      iVar4 = iVar4 * 2 + iVar1;
      iVar1 = *param_3 * 2 + iVar1;
    }
    else {
LAB_14559552c:
      iVar3 = -1;
      iVar2 = -1;
      if (0 < iVar4) {
        iVar2 = 1;
      }
      if (0 < *param_3) {
        iVar3 = 1;
      }
      iVar6 = iVar3 * *(int *)(param_1 + 0x10);
      iVar5 = iVar2 * *(int *)(param_1 + 0x10);
      iVar1 = *param_3 * 2 - iVar6;
      iVar4 = iVar4 * 2 - iVar5;
      if (iVar3 * iVar2 < 0) goto LAB_145595573;
    }
  }
  else {
    if (*param_3 < 0) {
      if (iVar4 < 1) goto LAB_14559550b;
      goto LAB_14559552c;
    }
    iVar5 = *(int *)(param_1 + 0x10);
    iVar4 = iVar4 * 2 - iVar5;
    iVar1 = *param_3 * 2 - iVar5;
    iVar6 = iVar5;
  }
  iVar1 = -iVar1;
  iVar4 = -iVar4;
LAB_145595573:
  *param_2 = iVar1 + iVar5;
  *param_3 = iVar4 + iVar6;
  *param_2 = *param_2 / 2;
  *param_3 = *param_3 / 2;
  return;
}



// FUNCTION 1455955a0 FUN_1455955a0 body=137 status=ok
// SIG undefined FUN_1455955a0(void)

ulonglong FUN_1455955a0(int *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong in_RAX;
  
  lVar2 = param_2[2];
  if (lVar2 + 4 <= param_2[1]) {
    uVar1 = *(uint *)(lVar2 + *param_2);
    in_RAX = 0x202;
    param_2[2] = lVar2 + 4;
    if (*(ushort *)((longlong)param_2 + 0x32) < 0x202) {
      in_RAX = lVar2 + 8;
      if (param_2[1] < (longlong)in_RAX) goto LAB_145595626;
      param_2[2] = in_RAX;
    }
    if ((uVar1 & 1) != 0) {
      iVar3 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      in_RAX = (ulonglong)(iVar3 - 1U);
      if (iVar3 - 1U < 0x1d) {
        iVar4 = 1 << ((byte)(iVar3 + 1) & 0x1f);
        *param_1 = iVar3 + 1;
        param_1[1] = iVar4 + -1;
        iVar4 = iVar4 + -2;
        param_1[2] = iVar4;
        param_1[4] = iVar4 / 2;
        param_1[3] = (int)(2.0 / (float)iVar4);
        return CONCAT71((uint7)(uint3)(iVar4 - (iVar4 >> 0x1f) >> 9),1);
      }
    }
  }
LAB_145595626:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 145595630 FUN_145595630 body=282 status=ok
// SIG undefined FUN_145595630(void)

void FUN_145595630(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_58 [32];
  uint local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 0x10);
  uStack_34 = param_2[1] - uVar1;
  iVar2 = *param_3;
  local_38 = *param_2 - uVar1;
  iVar3 = param_3[1];
  uVar4 = ((uStack_34 ^ (int)uStack_34 >> 0x1f) - ((int)uStack_34 >> 0x1f)) +
          ((local_38 ^ (int)local_38 >> 0x1f) - ((int)local_38 >> 0x1f));
  if (uVar1 < uVar4) {
    FUN_1455954d0(param_1,&local_38,&uStack_34);
  }
  local_38 = iVar2 + local_38;
  iVar2 = *(int *)(param_1 + 0x10);
  uStack_34 = uStack_34 + iVar3;
  if (iVar2 < (int)local_38) {
    local_38 = local_38 - *(int *)(param_1 + 4);
  }
  else if ((int)local_38 < -iVar2) {
    local_38 = local_38 + *(int *)(param_1 + 4);
  }
  if (iVar2 < (int)uStack_34) {
    uStack_34 = uStack_34 - *(int *)(param_1 + 4);
  }
  else if ((int)uStack_34 < -iVar2) {
    uStack_34 = uStack_34 + *(int *)(param_1 + 4);
  }
  if (uVar1 < uVar4) {
    FUN_1455954d0(param_1,&local_38,&uStack_34);
  }
  iVar3 = uVar1 + local_38;
  iVar2 = uVar1 + uStack_34;
  _local_38 = CONCAT44(iVar2,iVar3);
  param_4[1] = iVar2;
  *param_4 = iVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}


