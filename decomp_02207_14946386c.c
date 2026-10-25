// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14946386c FUN_14946386c body=244 status=ok
// SIG undefined FUN_14946386c(void)

undefined8 * FUN_14946386c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bcfe390;
  param_1[3] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_1 + 4);
  param_1[3] = param_3;
  param_1[4] = *param_2;
  param_1[5] = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 8,param_2 + 4);
  FUN_1400021e4(param_1 + 3,&local_50);
  local_40 = local_50;
  if (local_48 == 0) {
    local_40 = &DAT_149dfb77a;
  }
  FUN_1494632f0(param_1,L"Add variable \'%s\'");
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149463962 FUN_149463962 body=216 status=ok
// SIG undefined FUN_149463962(void)

undefined8 FUN_149463962(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (longlong *)0x0) {
LAB_1494639b3:
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 == 0) goto LAB_1494639b3;
    lVar3 = FUN_1458f36a4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1494639b3;
  }
  lVar3 = FUN_1494acc16(lVar2,*(undefined8 *)(param_1 + 0x18));
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(lVar3 + 0x18);
    FUN_14945f130(local_58,param_1 + 0x20);
    FUN_1494e842a(lVar3,local_58);
    cVar1 = FUN_1494acd38(lVar2,lVar3,0xffffffff);
    if (cVar1 != '\0') {
      uVar4 = *(undefined8 *)(lVar3 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      goto LAB_1494639c8;
    }
    FUN_1494acfa0(lVar3);
  }
  uVar4 = 0;
LAB_1494639c8:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149463a3c FUN_149463a3c body=112 status=ok
// SIG undefined FUN_149463a3c(void)

undefined8 FUN_149463a3c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = (**(code **)(*param_2 + 0x38))(param_2,*(undefined8 *)(param_1 + 0x18));
  if (lVar1 == 0) {
    return 0;
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 != 0) {
      lVar3 = FUN_1458f36a4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_149463a92;
    }
  }
  lVar2 = 0;
LAB_149463a92:
  uVar4 = FUN_1494acec6(lVar2,lVar1);
  return uVar4;
}



// FUNCTION 149463aac FUN_149463aac body=196 status=ok
// SIG undefined FUN_149463aac(void)

undefined8 FUN_149463aac(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [168];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_1458f36a4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_149463b05;
    }
  }
  lVar1 = 0;
LAB_149463b05:
  lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x38))
                    (lVar1 + 0x30,*(undefined8 *)(param_1 + 0x18));
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_1494604ec(local_d0,lVar2,param_1 + 0x58);
    FUN_144a7fc42(local_d0);
    uVar3 = FUN_1494acec6(lVar1,lVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149463b72 FUN_149463b72 body=210 status=ok
// SIG undefined FUN_149463b72(void)

undefined8 FUN_149463b72(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [160];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == (longlong *)0x0) {
LAB_149463bc9:
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 == 0) goto LAB_149463bc9;
    lVar3 = FUN_1458f36a4();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_149463bc9;
  }
  lVar3 = FUN_1494acc16(lVar2,*(undefined8 *)(param_1 + 0x18));
  if (lVar3 != 0) {
    FUN_149460648(local_c8,lVar3,param_1 + 0x58);
    FUN_144a7fc42(local_c8);
    cVar1 = FUN_1494acd38(lVar2,lVar3,*(undefined4 *)(param_1 + 0x50));
    uVar4 = 1;
    if (cVar1 != '\0') goto LAB_149463bde;
    FUN_1494acfa0(lVar3);
  }
  uVar4 = 0;
LAB_149463bde:
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149463c46 FUN_149463c46 body=115 status=ok
// SIG undefined FUN_149463c46(void)

undefined8 FUN_149463c46(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_1458f36a4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_149463c87;
    }
  }
  lVar1 = 0;
LAB_149463c87:
  lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x38))
                    (lVar1 + 0x30,*(undefined8 *)(param_1 + 0x20));
  if (lVar2 != 0) {
    uVar3 = FUN_1494ad012(lVar1,lVar2,*(undefined8 *)(param_1 + 0x18));
    return uVar3;
  }
  return 0;
}



// FUNCTION 149463cba FUN_149463cba body=115 status=ok
// SIG undefined FUN_149463cba(void)

undefined8 FUN_149463cba(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_1458f36a4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_149463cfb;
    }
  }
  lVar1 = 0;
LAB_149463cfb:
  lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x38))
                    (lVar1 + 0x30,*(undefined8 *)(param_1 + 0x18));
  if (lVar2 != 0) {
    uVar3 = FUN_1494ad012(lVar1,lVar2,*(undefined8 *)(param_1 + 0x20));
    return uVar3;
  }
  return 0;
}



// FUNCTION 149463d2e FUN_149463d2e body=89 status=ok
// SIG undefined FUN_149463d2e(void)

void FUN_149463d2e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14945f130(local_50,param_1 + 0x20);
  FUN_149463d88(param_1,param_2,local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149463d88 FUN_149463d88 body=152 status=ok
// SIG undefined FUN_149463d88(void)

undefined4 FUN_149463d88(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = (**(code **)(*param_2 + 0x38))(param_2,*(undefined8 *)(param_1 + 0x18));
  if (lVar2 != 0) {
    lVar3 = FUN_1494e84f6(lVar2);
    if (lVar3 != 0) {
      FUN_14945f130(local_58,param_3);
      uVar1 = FUN_1494ad118(lVar3,lVar2,local_58);
      goto LAB_149463dcb;
    }
  }
  uVar1 = 0;
LAB_149463dcb:
  if (*(longlong *)(param_3 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149463e22 FUN_149463e22 body=89 status=ok
// SIG undefined FUN_149463e22(void)

void FUN_149463e22(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [48];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14945f130(local_50,param_1 + 0x50);
  FUN_149463d88(param_1,param_2,local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149463e80 FUN_149463e80 body=152 status=ok
// SIG undefined FUN_149463e80(void)

undefined8 FUN_149463e80(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"SceneComponent";
  local_28 = 0xe;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"OptimusSceneComponentSource";
  local_28 = 0x1b;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Scene Component");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149463f1a FUN_149463f1a body=49 status=ok
// SIG undefined FUN_149463f1a(void)

longlong * FUN_149463f1a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a799b0();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149463f5a FUN_149463f5a body=49 status=ok
// SIG undefined FUN_149463f5a(void)

longlong * FUN_149463f5a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a74fb4();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149463f8c FUN_149463f8c body=152 status=ok
// SIG undefined FUN_149463f8c(void)

undefined8 FUN_149463f8c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"SkeletalMeshComponent";
  local_28 = 0x15;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"OptimusSkeletalMeshComponentSource";
  local_28 = 0x22;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Skeletal Mesh Component");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946402a FUN_14946402a body=152 status=ok
// SIG undefined FUN_14946402a(void)

undefined8 FUN_14946402a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"SkinnedMeshComponent";
  local_28 = 0x14;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"OptimusSkinnedMeshComponentSource";
  local_28 = 0x21;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Skinned Mesh Component");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494640c4 FUN_1494640c4 body=49 status=ok
// SIG undefined FUN_1494640c4(void)

longlong * FUN_1494640c4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a745da();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1494640f6 FUN_1494640f6 body=75 status=ok
// SIG undefined FUN_1494640f6(void)

longlong * FUN_1494640f6(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = DAT_14cc1c100;
  uVar2 = DAT_14cc1c0e8;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 2;
  FUN_1401b309e(param_2,2,0);
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = uVar3;
  puVar1[1] = uVar2;
  return param_2;
}



// FUNCTION 149464142 FUN_149464142 body=63 status=ok
// SIG undefined FUN_149464142(void)

undefined4 FUN_149464142(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    lVar1 = FUN_144a745da();
    uVar2 = 0;
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      uVar2 = *(undefined4 *)(param_2 + 0x854);
    }
  }
  return uVar2;
}



// FUNCTION 149464182 FUN_149464182 body=93 status=ok
// SIG undefined FUN_149464182(void)

undefined4 FUN_149464182(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    lVar1 = FUN_144a745da();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (uVar2 = 0, *(longlong *)(param_2 + 0x8a8) != 0)) {
      uVar2 = *(undefined4 *)
               (*(longlong *)
                 (**(longlong **)(*(longlong *)(param_2 + 0x8a8) + 0x40) + (longlong)param_3 * 8) +
               0x18);
    }
  }
  return uVar2;
}



// FUNCTION 1494641e0 FUN_1494641e0 body=311 status=ok
// SIG undefined FUN_1494641e0(void)

undefined8
FUN_1494641e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4,longlong *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_3 != 0) {
    lVar4 = FUN_144a745da();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
       (*(longlong *)(param_3 + 0x8a8) != 0)) {
      lVar4 = *(longlong *)
               (**(longlong **)(*(longlong *)(param_3 + 0x8a8) + 0x40) + (longlong)param_4 * 8);
      *(undefined4 *)(param_5 + 1) = 0;
      if (*(int *)((longlong)param_5 + 0xc) < 0) {
        FUN_14481578e(param_5,0);
      }
      if ((DAT_14cc1c0e8 == param_2) || (DAT_14cc1c100 == param_2)) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar7 = (ulonglong)uVar1;
        *(undefined4 *)(param_5 + 1) = 0;
        if (*(int *)((longlong)param_5 + 0xc) < 0) {
          FUN_14481578e(param_5,0);
        }
        if (-1 < (int)uVar1) {
          if (*(int *)((longlong)param_5 + 0xc) < (int)uVar1) {
            FUN_14481578e(param_5,uVar1);
          }
          uVar5 = CONCAT71((uint7)(uint3)((uint)param_4 >> 8),1);
          if (uVar7 == 0) {
            return uVar5;
          }
          lVar6 = 0;
          do {
            uVar2 = *(undefined4 *)
                     (lVar6 + 8 +
                     (ulonglong)(DAT_14cc1c100 == param_2) * 0x40 + *(longlong *)(lVar4 + 0x10));
            iVar3 = (int)param_5[1];
            *(uint *)(param_5 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
              FUN_1446f48e2(param_5,iVar3);
            }
            *(undefined4 *)(*param_5 + (longlong)iVar3 * 4) = uVar2;
            lVar6 = lVar6 + 0xf8;
          } while (uVar7 * 0xf8 - lVar6 != 0);
          return uVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar7);
      }
    }
  }
  return 0;
}



// FUNCTION 149464318 FUN_149464318 body=32 status=ok
// SIG undefined FUN_149464318(void)

undefined8 FUN_149464318(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Deformer Graph Asset");
  return param_2;
}



// FUNCTION 149464344 FUN_149464344 body=204 status=ok
// SIG undefined FUN_149464344(void)

void FUN_149464344(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  void *_Src;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar3 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar3 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar3 * 2);
    puVar2 = local_48;
    if (local_40 != 0) goto LAB_1494643be;
  }
  puVar2 = &DAT_149dfb77a;
LAB_1494643be:
  FUN_1446f470e(&local_38,puVar2,1);
  FUN_1494b622e(param_2,local_38,uVar1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149464412 FUN_149464412 body=205 status=ok
// SIG undefined FUN_149464412(void)

void FUN_149464412(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_14946448d;
  }
  puVar1 = &DAT_149dfb77a;
LAB_14946448d:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b5ec2(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494644e0 FUN_1494644e0 body=205 status=ok
// SIG undefined FUN_1494644e0(void)

void FUN_1494644e0(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_14946455b;
  }
  puVar1 = &DAT_149dfb77a;
LAB_14946455b:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b4d26(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494645ae FUN_1494645ae body=205 status=ok
// SIG undefined FUN_1494645ae(void)

void FUN_1494645ae(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149464629;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149464629:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b49a4(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946467c FUN_14946467c body=205 status=ok
// SIG undefined FUN_14946467c(void)

void FUN_14946467c(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_1494646f7;
  }
  puVar1 = &DAT_149dfb77a;
LAB_1494646f7:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b5430(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946474a FUN_14946474a body=205 status=ok
// SIG undefined FUN_14946474a(void)

void FUN_14946474a(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_1494647c5;
  }
  puVar1 = &DAT_149dfb77a;
LAB_1494647c5:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b50ae(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149464818 FUN_149464818 body=205 status=ok
// SIG undefined FUN_149464818(void)

void FUN_149464818(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149464893;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149464893:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b5b3a(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494648e6 FUN_1494648e6 body=205 status=ok
// SIG undefined FUN_1494648e6(void)

void FUN_1494648e6(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149464961;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149464961:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b57b8(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494649b4 FUN_1494649b4 body=212 status=ok
// SIG undefined FUN_1494649b4(void)

void FUN_1494649b4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *_Src;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  local_58 = (undefined2 *)0x0;
  local_50 = *(int *)(param_1 + 0x10);
  lVar3 = (longlong)local_50;
  _Src = *(void **)(param_1 + 8);
  if (lVar3 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar3 * 2);
    puVar2 = local_58;
    if (local_50 != 0) goto LAB_149464a33;
  }
  puVar2 = &DAT_149dfb77a;
LAB_149464a33:
  FUN_1446f470e(&local_48,puVar2,1);
  FUN_1494b43ba(param_2,local_48,(int)uVar1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149464a8a FUN_149464a8a body=205 status=ok
// SIG undefined FUN_149464a8a(void)

void FUN_149464a8a(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149464b05;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149464b05:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b404c(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149464b58 FUN_149464b58 body=205 status=ok
// SIG undefined FUN_149464b58(void)

void FUN_149464b58(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149464bd3;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149464bd3:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b8c92(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149464c26 FUN_149464c26 body=205 status=ok
// SIG undefined FUN_149464c26(void)

void FUN_149464c26(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149464ca1;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149464ca1:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b8910(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149464cf4 FUN_149464cf4 body=205 status=ok
// SIG undefined FUN_149464cf4(void)

void FUN_149464cf4(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149464d6f;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149464d6f:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b9ac4(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149464dc2 FUN_149464dc2 body=205 status=ok
// SIG undefined FUN_149464dc2(void)

void FUN_149464dc2(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149464e3d;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149464e3d:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b9742(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149464e90 FUN_149464e90 body=205 status=ok
// SIG undefined FUN_149464e90(void)

void FUN_149464e90(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149464f0b;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149464f0b:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b93ba(param_2,local_38,param_1 + 0x20);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149464f5e FUN_149464f5e body=205 status=ok
// SIG undefined FUN_149464f5e(void)

void FUN_149464f5e(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149464fd9;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149464fd9:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b901a(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946502c FUN_14946502c body=205 status=ok
// SIG undefined FUN_14946502c(void)

void FUN_14946502c(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_1494650a7;
  }
  puVar1 = &DAT_149dfb77a;
LAB_1494650a7:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b692e(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494650fa FUN_1494650fa body=205 status=ok
// SIG undefined FUN_1494650fa(void)

void FUN_1494650fa(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149465175;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149465175:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b65ac(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494651c8 FUN_1494651c8 body=205 status=ok
// SIG undefined FUN_1494651c8(void)

void FUN_1494651c8(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149465243;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149465243:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b7724(param_2,local_38,param_1 + 0x20);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149465296 FUN_149465296 body=205 status=ok
// SIG undefined FUN_149465296(void)

void FUN_149465296(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149465311;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149465311:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b73a2(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149465364 FUN_149465364 body=205 status=ok
// SIG undefined FUN_149465364(void)

void FUN_149465364(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_1494653df;
  }
  puVar1 = &DAT_149dfb77a;
LAB_1494653df:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b7e2e(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149465432 FUN_149465432 body=205 status=ok
// SIG undefined FUN_149465432(void)

void FUN_149465432(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_1494654ad;
  }
  puVar1 = &DAT_149dfb77a;
LAB_1494654ad:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b7aac(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149465500 FUN_149465500 body=205 status=ok
// SIG undefined FUN_149465500(void)

void FUN_149465500(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_14946557b;
  }
  puVar1 = &DAT_149dfb77a;
LAB_14946557b:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b8588(param_2,local_38,param_1 + 0x20);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494655ce FUN_1494655ce body=205 status=ok
// SIG undefined FUN_1494655ce(void)

void FUN_1494655ce(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149465649;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149465649:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b81b6(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946569c FUN_14946569c body=205 status=ok
// SIG undefined FUN_14946569c(void)

void FUN_14946569c(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149465717;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149465717:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b7030(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946576a FUN_14946576a body=205 status=ok
// SIG undefined FUN_14946576a(void)

void FUN_14946576a(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_1494657e5;
  }
  puVar1 = &DAT_149dfb77a;
LAB_1494657e5:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b6cb6(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149465838 FUN_149465838 body=204 status=ok
// SIG undefined FUN_149465838(void)

void FUN_149465838(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined8 unaff_RBX;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar3 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar3 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar3 * 2);
    puVar2 = local_48;
    if (local_40 != 0) goto LAB_1494658b2;
  }
  puVar2 = &DAT_149dfb77a;
LAB_1494658b2:
  FUN_1446f470e(&local_38,puVar2,1);
  FUN_1494b3cce(param_2,local_38,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149465906 FUN_149465906 body=205 status=ok
// SIG undefined FUN_149465906(void)

void FUN_149465906(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_40;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar2 * 2);
    puVar1 = local_48;
    if (local_40 != 0) goto LAB_149465981;
  }
  puVar1 = &DAT_149dfb77a;
LAB_149465981:
  FUN_1446f470e(&local_38,puVar1,1);
  FUN_1494b3958(param_2,local_38,param_1 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494659e2 FUN_1494659e2 body=2413 status=ok
// SIG undefined FUN_1494659e2(void)

longlong * FUN_1494659e2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined1 local_1d0;
  longlong local_1c0;
  undefined8 *local_1b8;
  ulonglong *local_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined8 *local_170;
  ulonglong *local_168;
  undefined1 local_160 [16];
  undefined8 local_150;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *param_2 = 0;
  param_2[1] = 0;
  local_1c0 = param_1;
  FUN_1446ddc76(&local_b0,"NumBones",1);
  FUN_1400b22c2(local_c0,"ReadNumBones");
  uVar3 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_d0,"ReadNumVertices");
  local_1d0 = 1;
  local_1d8 = local_d0;
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
  local_f8 = &local_78;
  local_f0 = &local_48;
  local_1d8 = (undefined1 *)CONCAT71(local_1d8._1_7_,1);
  FUN_1494664d6(&local_a8,local_d8,local_e8);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar6 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar6 + lVar5) = local_a8;
  *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = local_a0;
  local_a0 = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar5) = (undefined4)local_98;
  *(undefined4 *)(lVar6 + 0x14 + lVar5) = local_98._4_4_;
  local_98 = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = local_90;
  local_90 = 0;
  *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_88;
  *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_88._4_4_;
  local_88 = 0;
  *(undefined1 *)(lVar6 + 0x2c + lVar5) = local_7c;
  *(undefined4 *)(lVar6 + 0x28 + lVar5) = local_80;
  FUN_14946649a();
  lVar6 = 0x30;
  do {
    if (*(longlong *)((longlong)&local_88 + lVar6) != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != 0);
  FUN_1446ddc76(&local_100,"BoneWeight",1);
  FUN_1400b22c2(local_110,"ReadBoneWeight");
  local_78 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_70,"ReadNumVertices");
  local_60 = DAT_14cc1d7f8;
  FUN_1400b22c2(local_58,"ReadNumBones");
  local_120 = &local_78;
  local_118 = &local_48;
  local_1d8 = (undefined1 *)CONCAT71(local_1d8._1_7_,1);
  FUN_1494664d6(&local_a8,local_100,local_110);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar6 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar6 + lVar5) = local_a8;
  *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = local_a0;
  local_a0 = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar5) = (undefined4)local_98;
  *(undefined4 *)(lVar6 + 0x14 + lVar5) = local_98._4_4_;
  local_98 = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = local_90;
  local_90 = 0;
  *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_88;
  *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_88._4_4_;
  local_88 = 0;
  *(undefined1 *)(lVar6 + 0x2c + lVar5) = local_7c;
  *(undefined4 *)(lVar6 + 0x28 + lVar5) = local_80;
  FUN_14946649a();
  lVar6 = 0x30;
  do {
    if (*(longlong *)((longlong)&local_88 + lVar6) != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + -0x18;
  } while (lVar6 != 0);
  FUN_1446ddc76(&local_128,"WeightedBoneMatrix",1);
  FUN_1400b22c2(local_138,"ReadWeightedBoneMatrix");
  uVar3 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_148,"ReadNumVertices");
  local_1d0 = 1;
  local_1d8 = local_148;
  FUN_149466350(&local_a8,local_128,local_138,uVar3);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar6 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar6 + lVar5) = local_a8;
  *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 8 + lVar5) = local_a0;
  local_a0 = 0;
  *(undefined4 *)(lVar6 + 0x10 + lVar5) = (undefined4)local_98;
  *(undefined4 *)(lVar6 + 0x14 + lVar5) = local_98._4_4_;
  local_98 = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar5) = local_90;
  local_90 = 0;
  *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_88;
  *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_88._4_4_;
  local_88 = 0;
  *(undefined1 *)(lVar6 + 0x2c + lVar5) = local_7c;
  *(undefined4 *)(lVar6 + 0x28 + lVar5) = local_80;
  FUN_14946649a();
  if (*(char *)(local_1c0 + 0x30) == '\x01') {
    FUN_1446ddc76(&local_150,"LayeredBoneMatrix",1);
    FUN_1400b22c2(local_160,"ReadLayeredBoneMatrix");
    local_78 = DAT_14cc1d7f0;
    FUN_1400b22c2(local_70,"ReadNumVertices");
    local_60 = DAT_14cc1d7f8;
    FUN_1400b22c2(local_58,"ReadNumBones");
    local_170 = &local_78;
    local_168 = &local_48;
    local_1d8 = (undefined1 *)CONCAT71(local_1d8._1_7_,1);
    FUN_1494664d6(&local_a8,local_150,local_160);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_149482fea(param_2,iVar1);
    }
    lVar6 = *param_2;
    lVar5 = (longlong)iVar1 * 0x30;
    *(undefined8 *)(lVar6 + lVar5) = local_a8;
    *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
    *(undefined8 *)(lVar6 + 8 + lVar5) = local_a0;
    local_a0 = 0;
    *(undefined4 *)(lVar6 + 0x10 + lVar5) = (undefined4)local_98;
    *(undefined4 *)(lVar6 + 0x14 + lVar5) = local_98._4_4_;
    local_98 = 0;
    *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
    *(undefined8 *)(lVar6 + 0x18 + lVar5) = local_90;
    local_90 = 0;
    *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_88;
    *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_88._4_4_;
    local_88 = 0;
    *(undefined1 *)(lVar6 + 0x2c + lVar5) = local_7c;
    *(undefined4 *)(lVar6 + 0x28 + lVar5) = local_80;
    FUN_14946649a();
    lVar6 = 0x30;
    do {
      if (*(longlong *)((longlong)&local_88 + lVar6) != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
    FUN_1446ddc76(&local_178,"WeightedLayeredBoneMatrix",1);
    FUN_1400b22c2(local_188,"ReadWeightedLayeredBoneMatrix");
    uVar3 = DAT_14cc1d7f0;
    FUN_1400b22c2(local_198,"ReadNumVertices");
    local_1d0 = 1;
    local_1d8 = local_198;
    FUN_149466350(&local_a8,local_178,local_188,uVar3);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_149482fea(param_2,iVar1);
    }
    lVar6 = *param_2;
    lVar5 = (longlong)iVar1 * 0x30;
    *(undefined8 *)(lVar6 + lVar5) = local_a8;
    *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
    *(undefined8 *)(lVar6 + 8 + lVar5) = local_a0;
    local_a0 = 0;
    *(undefined4 *)(lVar6 + 0x10 + lVar5) = (undefined4)local_98;
    *(undefined4 *)(lVar6 + 0x14 + lVar5) = local_98._4_4_;
    local_98 = 0;
    *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
    *(undefined8 *)(lVar6 + 0x18 + lVar5) = local_90;
    local_90 = 0;
    *(undefined4 *)(lVar6 + 0x20 + lVar5) = (undefined4)local_88;
    *(undefined4 *)(lVar6 + 0x24 + lVar5) = local_88._4_4_;
    local_88 = 0;
    *(undefined1 *)(lVar6 + 0x2c + lVar5) = local_7c;
    *(undefined4 *)(lVar6 + 0x28 + lVar5) = local_80;
    FUN_14946649a();
  }
  if (0 < *(int *)(local_1c0 + 0x40)) {
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(local_1c0 + 0x38);
      lVar4 = lVar6 * 0x68;
      puVar7 = &DAT_149dfb77a;
      if (*(int *)(lVar5 + 0x58 + lVar4) != 0) {
        puVar7 = *(undefined2 **)(lVar5 + lVar4 + 0x50);
      }
      uVar3 = *(undefined8 *)(lVar5 + 0x60 + lVar4);
      FUN_140002266(local_1a8,L"Read%s",puVar7);
      local_78 = DAT_14cc1d7f0;
      FUN_1400b22c2(local_70,"ReadNumVertices");
      local_60 = DAT_14cc1d7f8;
      FUN_1400b22c2(local_58,"ReadNumBones");
      local_1b8 = &local_78;
      local_1b0 = &local_48;
      local_1d8 = (undefined1 *)CONCAT71(local_1d8._1_7_,1);
      FUN_1494664d6(&local_a8,uVar3,local_1a8,&local_1b8);
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
      FUN_14946649a(&local_a8);
      lVar5 = 0x30;
      do {
        if (*(longlong *)((longlong)&local_88 + lVar5) != 0) {
          FUN_1400020a8();
        }
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(local_1c0 + 0x40));
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149466350 FUN_149466350 body=329 status=ok
// SIG undefined FUN_149466350(void)

undefined8 *
FUN_149466350(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5,undefined1 param_6)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  ulonglong *local_60;
  undefined8 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = param_2;
  param_1[1] = 0;
  iVar1 = (int)param_3[1];
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  local_50 = (void *)0x0;
  local_48 = (int)param_5[1];
  lVar3 = (longlong)local_48;
  pvVar2 = (void *)*param_5;
  local_58 = param_4;
  if (lVar3 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar2,lVar3 * 2);
  }
  local_68 = &local_58;
  local_60 = &local_40;
  FUN_1494818a2(param_1 + 3);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = param_6;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946649a FUN_14946649a body=60 status=ok
// SIG undefined FUN_14946649a(void)

void FUN_14946649a(longlong param_1)

{
  FUN_149481a01(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494664d6 FUN_1494664d6 body=482 status=ok
// SIG undefined FUN_1494664d6(void)

undefined8 *
FUN_1494664d6(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             undefined1 param_5)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = param_2;
  param_1[1] = 0;
  iVar1 = (int)param_3[1];
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 2) = iVar1;
  local_68 = param_3;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = param_5;
  puVar5 = (undefined8 *)*param_4;
  puVar3 = (undefined8 *)param_4[1];
  if (puVar5 != puVar3) {
    do {
      local_60 = *puVar5;
      local_58 = (void *)0x0;
      local_50 = *(int *)(puVar5 + 2);
      lVar7 = (longlong)local_50;
      pvVar2 = (void *)puVar5[1];
      if (lVar7 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,pvVar2,lVar7 * 2);
      }
      iVar1 = *(int *)(param_1 + 4);
      lVar7 = (longlong)iVar1;
      *(uint *)(param_1 + 4) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24) < iVar1 + 1U) {
        FUN_149481a30(param_1 + 3,iVar1);
      }
      pvVar2 = local_58;
      lVar4 = param_1[3];
      *(undefined8 *)(lVar4 + lVar7 * 0x18) = local_60;
      *(undefined8 *)(lVar4 + 8 + lVar7 * 0x18) = 0;
      lVar8 = (longlong)local_50;
      *(int *)(lVar4 + 0x10 + lVar7 * 0x18) = local_50;
      if (lVar8 == 0) {
        *(undefined4 *)(lVar4 + lVar7 * 0x18 + 0x14) = 0;
      }
      else {
        puVar6 = (undefined8 *)(lVar4 + lVar7 * 0x18 + 8);
        FUN_1446dd670(puVar6,local_50,0);
        memcpy((void *)*puVar6,pvVar2,lVar8 * 2);
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar5 = puVar5 + 3;
    } while (puVar5 != puVar3);
  }
  if (*local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494666ba FUN_1494666ba body=199 status=ok
// SIG undefined FUN_1494666ba(void)

undefined8 FUN_1494666ba(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(&local_28,L"Default Skin Weights");
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400021e4(param_1 + 0x28,&local_38);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_28 = local_38;
    local_20 = local_30;
    local_1c = local_2c;
  }
  puVar1 = &DAT_149dfb77a;
  if (local_20 != 0) {
    puVar1 = local_28;
  }
  FUN_140002266(param_2,L"Skeleton - %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149466782 FUN_149466782 body=22 status=ok
// SIG undefined FUN_149466782(void)

undefined8 FUN_149466782(undefined8 param_1,undefined8 param_2)

{
  FUN_1494659e2();
  return param_2;
}



// FUNCTION 149466798 FUN_149466798 body=364 status=ok
// SIG undefined FUN_149466798(void)

/* WARNING: Removing unreachable block (ram,0x00014946689c) */

longlong * FUN_149466798(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
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
  uVar5 = FUN_140f4f540();
  uVar6 = FUN_144a63fc8();
  FUN_14949035a(uVar5,&local_30,uVar6);
  FUN_1446f470e(&local_68,L"SkinWeightProfile",1);
  local_78 = local_30;
  local_70 = local_28;
  if (local_28 == (longlong *)0x0) {
    uVar8 = 0;
    iVar9 = 0;
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    iVar9 = (int)param_2[1];
    uVar8 = *(uint *)((longlong)param_2 + 0xc);
  }
  FUN_140e6511c(&local_60,&local_78);
  *(uint *)(param_2 + 1) = iVar9 + 1U;
  if (uVar8 < iVar9 + 1U) {
    FUN_14948307e(param_2,iVar9);
  }
  lVar4 = *param_2;
  lVar7 = (longlong)iVar9 * 0x38;
  *(undefined8 *)(lVar4 + lVar7) = local_68;
  *(undefined8 *)(lVar4 + 8 + lVar7) = local_60;
  *(undefined8 *)(lVar4 + 0x10 + lVar7) = local_58;
  puVar3 = (undefined4 *)(lVar4 + 0x18 + lVar7);
  *puVar3 = local_50;
  puVar3[1] = uStack_4c;
  puVar3[2] = uStack_48;
  puVar3[3] = uStack_44;
  *(undefined8 *)(lVar4 + 0x28 + lVar7) = 0;
  *(undefined8 *)(lVar4 + 0x28 + lVar7) = local_40;
  *(undefined4 *)(lVar4 + 0x30 + lVar7) = (undefined4)local_38;
  *(undefined4 *)(lVar4 + 0x34 + lVar7) = local_38._4_4_;
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



// FUNCTION 149466906 FUN_149466906 body=49 status=ok
// SIG undefined FUN_149466906(void)

longlong * FUN_149466906(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a74fb4();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14946693a FUN_14946693a body=256 status=ok
// SIG undefined FUN_14946693a(void)

void FUN_14946693a(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x30,param_1 + 0x48);
  *puVar1 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bcfe220;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = FUN_1494924a4;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x30,param_1 + 0x58);
  *puVar1 = &PTR_LAB_14bcfe300;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bcfe290;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = FUN_1494927fe;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x30,param_1 + 0x68);
  *puVar1 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bcfe220;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = FUN_149492892;
  return;
}



// FUNCTION 149466a3a FUN_149466a3a body=128 status=ok
// SIG undefined FUN_149466a3a(void)

void FUN_149466a3a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x40) * 0x68;
    lVar1 = *(longlong *)(param_1 + 0x38) + 0x40;
    do {
      if (*(longlong *)(lVar1 + -0x30) == param_2) {
        FUN_14945f130(local_58,lVar1 + -0x30);
        FUN_1494e817e(lVar1,local_58);
      }
      lVar1 = lVar1 + 0x68;
      lVar2 = lVar2 + -0x68;
    } while (lVar2 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149466abe FUN_149466abe body=911 status=ok
// SIG undefined FUN_149466abe(void)

void FUN_149466abe(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_58,L"ReadNumVertices");
  uVar1 = FUN_149459122(uVar1,local_58);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_68,L"ReadNumBones");
  uVar1 = FUN_149459122(uVar1,local_68);
  uVar1 = FUN_1494593ba(uVar1,2,0,0);
  local_d8 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_78,L"ReadBoneMatrix");
  uVar1 = FUN_149459122(uVar1,local_78);
  uVar1 = FUN_1494593ba(uVar1,3,3,4);
  local_d8 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_d8 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_88,L"ReadBoneWeight");
  uVar1 = FUN_149459122(uVar1,local_88);
  uVar1 = FUN_1494593ba(uVar1,3,0,0);
  local_d8 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_d8 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_98,L"ReadWeightedBoneMatrix");
  uVar1 = FUN_149459122(uVar1,local_98);
  uVar1 = FUN_1494593ba(uVar1,3,3,4);
  local_d8 = 0;
  FUN_149459206(uVar1,2,0,0);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = FUN_149466e4e(param_2);
    FUN_140056680(local_a8,L"ReadLayeredBoneMatrix");
    uVar1 = FUN_149459122(uVar1,local_a8);
    uVar1 = FUN_1494593ba(uVar1,3,3,4);
    local_d8 = 0;
    uVar1 = FUN_149459206(uVar1,2,0,0);
    local_d8 = 0;
    FUN_149459206(uVar1,2,0,0);
    uVar1 = FUN_149466e4e(param_2);
    FUN_140056680(local_b8,L"ReadWeightedLayeredBoneMatrix");
    uVar1 = FUN_149459122(uVar1,local_b8);
    uVar1 = FUN_1494593ba(uVar1,3,3,4);
    local_d8 = 0;
    FUN_149459206(uVar1,2,0,0);
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar5 = 0x58;
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x38);
      uVar1 = FUN_149466e4e(param_2);
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + lVar5) != 0) {
        puVar4 = *(undefined2 **)(lVar2 + -8 + lVar5);
      }
      FUN_140002266(local_c8,L"Read%s",puVar4);
      uVar1 = FUN_149459122(uVar1,local_c8);
      lVar2 = FUN_149466e92(lVar2 + lVar5 + -0x48);
      uVar1 = FUN_1494592f4(uVar1,*(undefined8 *)(lVar2 + 0x18));
      local_d8 = 0;
      uVar1 = FUN_149459206(uVar1,2,0,0);
      local_d8 = 0;
      FUN_149459206(uVar1,2,0);
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x68;
    } while (lVar3 < *(int *)(param_1 + 0x40));
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149466e4e FUN_149466e4e body=68 status=ok
// SIG undefined FUN_149466e4e(void)

longlong FUN_149466e4e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494835ac(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_149483590(lVar2,1);
  return lVar2;
}



// FUNCTION 149466e92 FUN_149466e92 body=107 status=ok
// SIG undefined FUN_149466e92(void)

undefined8 FUN_149466e92(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1494947ba(param_1,&local_28);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149466efe FUN_149466efe body=453 status=ok
// SIG undefined FUN_149466efe(void)

void FUN_149466efe(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78[0] = 0;
  local_78[1] = 0;
  local_68 = 0;
  local_a0 = param_3;
  local_98 = param_2;
  FUN_149483640();
  FUN_140968440(local_78,&DAT_14cc1bdb8,0);
  local_88 = (void *)0x0;
  uStack_80 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar7 = 0x58;
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x38);
      piVar1 = (int *)(lVar3 + lVar7);
      lVar4 = FUN_149466e92(piVar1 + -0x12);
      local_90 = FUN_1457dd03c(lVar4 + 0x18);
      puVar6 = &DAT_149dfb77a;
      if (*piVar1 != 0) {
        puVar6 = *(undefined2 **)(lVar3 + -8 + lVar7);
      }
      FUN_145929ff4(local_78,puVar6,&local_90,&local_88);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x68;
    } while (lVar8 < *(int *)(param_1 + 0x40));
  }
  uVar5 = FUN_140b494da(local_78,0,L"AnimAttributeBuffers");
  iVar2 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
    FUN_1457752be(param_4,iVar2);
  }
  *(undefined8 *)(*param_4 + (longlong)iVar2 * 8) = uVar5;
  lVar7 = (longlong)(int)(uint)uStack_80;
  if (lVar7 != 0) {
    iVar2 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar2 + (uint)uStack_80;
    if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar2) < (uint)uStack_80) {
      FUN_1457752be(param_4,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_4),local_88,lVar7 << 3);
  }
  FUN_145900f28(local_a0,local_98,uVar5,0);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494670c4 FUN_1494670c4 body=253 status=ok
// SIG undefined FUN_1494670c4(void)

void FUN_1494670c4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,L"ENABLE_DEFORMER_BONES");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_28,L"GPUSKIN_UNLIMITED_BONE_INFLUENCE");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_28,L"GPUSKIN_BONE_INDEX_UINT16");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_28,L"GPUSKIN_BONE_WEIGHTS_UINT16");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494671c4 FUN_1494671c4 body=1376 status=ok
// SIG undefined FUN_1494671c4(void)

void FUN_1494671c4(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 *local_2a0;
  void *local_298;
  int local_290;
  undefined4 local_28c;
  undefined1 local_288 [16];
  longlong local_278;
  longlong local_268 [2];
  undefined8 local_258;
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  longlong local_230;
  longlong local_220 [2];
  void *local_210;
  int local_208;
  undefined4 local_204;
  undefined1 local_200 [16];
  longlong local_1f0;
  longlong local_1e0 [2];
  longlong **local_1d0;
  longlong ***local_1c8;
  longlong local_1c0;
  int local_1b8;
  longlong local_1b0 [8];
  void *local_170;
  int local_168;
  undefined2 *local_158;
  undefined8 uStack_150;
  undefined2 *local_148;
  undefined8 uStack_140;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  longlong ***local_128;
  undefined1 *local_120;
  longlong *local_118;
  undefined1 *local_110;
  longlong *local_108;
  undefined1 *local_100;
  longlong *local_f8;
  undefined1 *local_f0;
  longlong **local_e8;
  longlong *local_e0;
  undefined1 local_d8 [48];
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98 [64];
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_140056680(&local_118,L"DataInterfaceName");
  local_138 = (void *)0x0;
  local_130 = *(int *)(param_3 + 1);
  lVar6 = (longlong)local_130;
  pvVar1 = (void *)*param_3;
  local_2a0 = param_3;
  if (lVar6 == 0) {
    local_12c = 0;
  }
  else {
    FUN_1446dd670(&local_138,local_130,0);
    memcpy(local_138,pvVar1,lVar6 * 2);
  }
  FUN_14146ec20(&local_1c0,&local_138);
  local_128 = &local_e8;
  local_120 = local_d8;
  local_e8 = &local_118;
  local_e0 = &local_1c0;
  FUN_1481b8c1c(local_98);
  if (local_1b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_118 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_148 = (undefined2 *)0x0;
  uStack_140 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceAdvancedSkeleton.ush",0,&local_148,0);
  puVar4 = local_148;
  if ((int)uStack_140 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140a69a60(&local_1c0,puVar4,local_98);
  iVar2 = local_1b8 + -1;
  if (local_1b8 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(param_2,local_1c0,iVar2);
  if (local_1c0 != 0) {
    FUN_1400020a8();
  }
  local_158 = (undefined2 *)0x0;
  uStack_150 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceAdvancedSkeletonAnimAttribute.ush",0,
                &local_158,0);
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar7 = 0;
    lVar6 = 0;
    local_2b0 = param_2;
    local_2a8 = param_1;
    do {
      FUN_149467726(&local_1c0,*(longlong *)(param_1 + 0x38) + lVar7);
      FUN_140056680(local_1e0,L"DataInterfaceName");
      local_210 = (void *)0x0;
      local_208 = *(int *)(local_2a0 + 1);
      lVar5 = (longlong)local_208;
      pvVar1 = (void *)*local_2a0;
      if (lVar5 == 0) {
        local_204 = 0;
      }
      else {
        FUN_1446dd670(&local_210,local_208,0);
        memcpy(local_210,pvVar1,lVar5 * 2);
      }
      FUN_14146ec20(local_200,&local_210);
      local_118 = local_1e0;
      local_110 = local_200;
      FUN_140056680(local_220,L"TypeName");
      lVar5 = FUN_149466e92(local_1b0);
      local_258 = 0;
      FUN_149458322(*(undefined8 *)(lVar5 + 0x18),local_250,&local_258);
      FUN_14146ec20(local_240,local_250);
      local_108 = local_220;
      local_100 = local_240;
      FUN_140056680(local_268,L"AttributeName");
      pvVar1 = local_170;
      local_298 = (void *)0x0;
      lVar5 = (longlong)local_168;
      local_290 = local_168;
      if (lVar5 == 0) {
        local_28c = 0;
      }
      else {
        FUN_1446dd670(&local_298,local_168,0);
        memcpy(local_298,pvVar1,lVar5 * 2);
      }
      uVar3 = local_2b0;
      FUN_14146ec20(local_288,&local_298);
      local_1c8 = &local_e8;
      local_1d0 = &local_118;
      local_f8 = local_268;
      local_f0 = local_288;
      FUN_1481b8c1c(&local_e8,&local_1d0);
      param_1 = local_2a8;
      if (local_278 != 0) {
        FUN_1400020a8();
      }
      if (local_268[0] != 0) {
        FUN_1400020a8();
      }
      if (local_230 != 0) {
        FUN_1400020a8();
      }
      if (local_220[0] != 0) {
        FUN_1400020a8();
      }
      if (local_1f0 != 0) {
        FUN_1400020a8();
      }
      if (local_1e0[0] != 0) {
        FUN_1400020a8();
      }
      puVar4 = &DAT_149dfb77a;
      if ((int)uStack_150 != 0) {
        puVar4 = local_158;
      }
      FUN_140a69a60(&local_118,puVar4,&local_e8);
      FUN_1400020e8(uVar3,local_118);
      if (local_118 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_a0 = 0;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_140b40bda(&local_e8);
      FUN_1494677f4(&local_1c0);
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x68;
    } while (lVar6 < *(int *)(param_1 + 0x40));
  }
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(local_98);
  if ((local_48 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149467726 FUN_149467726 body=205 status=ok
// SIG undefined FUN_149467726(void)

undefined8 * FUN_149467726(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  FUN_14945f130(param_1 + 2,param_2 + 2);
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_1401fa0f0(param_1 + 8,param_2[8],param_2[9]);
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xc] = param_2[0xc];
  return param_1;
}



// FUNCTION 1494677f4 FUN_1494677f4 body=70 status=ok
// SIG undefined FUN_1494677f4(void)

void FUN_1494677f4(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9f5c(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14946783a FUN_14946783a body=497 status=ok
// SIG undefined FUN_14946783a(void)

undefined8 * FUN_14946783a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [48];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar11 = &DAT_149dfb77a;
  puVar10 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar10 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_88,puVar10,1);
  *param_1 = local_88;
  if (*(int *)(param_2 + 0xb) != 0) {
    puVar11 = (undefined2 *)param_2[10];
  }
  FUN_1446f470e(&local_88,puVar11,1);
  param_1[1] = local_88;
  *(undefined4 *)(param_1 + 2) = 0;
  lVar6 = FUN_149466e92(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(lVar6 + 0x20);
  uVar7 = FUN_140f4f540();
  FUN_140fc897e(uVar7,&local_c8,param_2[2]);
  lVar6 = param_1[4];
  uStack_80 = param_1[5];
  plVar9 = (longlong *)param_1[6];
  uStack_70 = param_1[7];
  local_68 = param_1[8];
  uStack_60 = param_1[9];
  local_58 = param_1[10];
  uStack_50 = param_1[0xb];
  uVar4 = local_58;
  uVar5 = uStack_50;
  uVar2 = local_68;
  uVar3 = uStack_60;
  local_78 = plVar9;
  plVar9 = local_78;
  uVar1 = uStack_70;
  local_88 = lVar6;
  lVar6 = local_88;
  uVar8 = uStack_80;
  param_1[10] = CONCAT44(uStack_94,local_98);
  param_1[0xb] = CONCAT44(uStack_8c,uStack_90);
  param_1[8] = CONCAT44(uStack_a4,local_a8);
  param_1[9] = CONCAT44(uStack_9c,uStack_a0);
  param_1[6] = CONCAT44(uStack_b4,local_b8);
  param_1[7] = CONCAT44(uStack_ac,uStack_b0);
  param_1[4] = CONCAT44(uStack_c4,local_c8);
  param_1[5] = CONCAT44(uStack_bc,uStack_c0);
  local_88._0_4_ = (undefined4)lVar6;
  local_88._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_78._0_4_ = SUB84(plVar9,0);
  local_78._4_4_ = (undefined4)((ulonglong)plVar9 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c8 = (undefined4)local_88;
  uStack_c4 = local_88._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_88 = lVar6;
  uStack_80 = uVar8;
  local_78 = plVar9;
  uStack_70 = uVar1;
  local_68 = uVar2;
  uStack_60 = uVar3;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if (lVar6 != 0) {
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)&local_a8;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  uVar8 = FUN_1494abd40(uVar7,param_2[2]);
  param_1[0xc] = uVar8;
  FUN_14945f130(local_f8,param_2 + 2);
  FUN_1494e82f0(param_2 + 8,&local_88,local_f8);
  FUN_149467a2c(param_1 + 0xd,&local_88);
  FUN_145b26c5e(&local_88);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149467a2c FUN_149467a2c body=83 status=ok
// SIG undefined FUN_149467a2c(void)

longlong * FUN_149467a2c(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  FUN_149481ac4(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 149467a80 FUN_149467a80 body=120 status=ok
// SIG undefined FUN_149467a80(void)

undefined8 FUN_149467a80(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_149467af8(DAT_14c951640);
  if (*param_2 != 0) {
    lVar4 = FUN_144a74fb4();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_149467ae2;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_149467ae2;
      }
    }
  }
  lVar5 = 0;
LAB_149467ae2:
  FUN_149467b8e(uVar3,param_1,lVar5);
  return uVar3;
}



// FUNCTION 149467af8 FUN_149467af8 body=148 status=ok
// SIG undefined FUN_149467af8(void)

undefined8 FUN_149467af8(undefined8 param_1)

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
  uVar1 = FUN_145ba42b0();
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



// FUNCTION 149467b8e FUN_149467b8e body=736 status=ok
// SIG undefined FUN_149467b8e(void)

void FUN_149467b8e(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_128 [40];
  longlong *local_100;
  longlong local_f8 [2];
  undefined4 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  longlong *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14485c47a(param_1 + 0xd0);
  *(char *)(param_1 + 0x54) = (char)param_2[6];
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *(longlong *)(param_1 + 0x30) = param_3;
  *(longlong *)(param_1 + 0x4c) = param_2[5];
  local_100 = param_2;
  if ((longlong)(int)param_2[8] != 0) {
    lVar7 = param_2[7];
    lVar8 = (longlong)(int)param_2[8] * 0x68;
    do {
      FUN_14946783a(&local_d8,lVar7);
      iVar2 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
        FUN_149483d76((longlong *)(param_1 + 0x38),iVar2);
      }
      lVar3 = *(longlong *)(param_1 + 0x38);
      lVar5 = (longlong)iVar2 * 0x90;
      *(undefined8 *)(lVar3 + 0x10 + lVar5) = local_c8;
      *(undefined8 *)(lVar3 + lVar5) = local_d8;
      ((undefined8 *)(lVar3 + lVar5))[1] = uStack_d0;
      *(ulonglong *)(lVar3 + 0x20 + lVar5) = local_b8;
      *(longlong **)(lVar3 + 0x30 + lVar5) = local_a8;
      local_a8 = (longlong *)0x0;
      puVar1 = (undefined4 *)(lVar3 + 0x50 + lVar5);
      *puVar1 = local_88;
      puVar1[1] = uStack_84;
      puVar1[2] = uStack_80;
      puVar1[3] = uStack_7c;
      puVar1 = (undefined4 *)(lVar3 + 0x40 + lVar5);
      *puVar1 = local_98;
      puVar1[1] = uStack_94;
      puVar1[2] = uStack_90;
      puVar1[3] = uStack_8c;
      if (*(longlong *)(lVar3 + 0x20 + lVar5) != 0) {
        local_b8 = 0;
      }
      lVar3 = lVar3 + lVar5;
      *(undefined8 *)(lVar3 + 0x60) = local_78;
      *(undefined8 *)(lVar3 + 0x68) = 0;
      *(undefined8 *)(lVar3 + 0x68) = local_70;
      local_70 = 0;
      *(undefined4 *)(lVar3 + 0x70) = (undefined4)local_68;
      *(undefined4 *)(lVar3 + 0x74) = local_68._4_4_;
      local_68 = 0;
      *(undefined8 *)(lVar3 + 0x78) = 0;
      *(undefined8 *)(lVar3 + 0x78) = local_60;
      local_60 = 0;
      *(undefined4 *)(lVar3 + 0x80) = (undefined4)local_58;
      *(undefined4 *)(lVar3 + 0x84) = local_58._4_4_;
      local_58 = 0;
      FUN_145b26c5e(&local_70);
      if (local_b8 != 0) {
        plVar6 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar6 = (longlong *)&local_98;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      lVar7 = lVar7 + 0x68;
      lVar8 = lVar8 + -0x68;
    } while (lVar8 != 0);
  }
  local_e8 = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_b8 = local_b8 & 0xffffffff00000000;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_145775214(&local_c8,0);
  (**(code **)(*local_100 + 0x2d8))(local_100,L"Dummy",local_f8);
  puVar4 = (undefined8 *)FUN_140b494da(local_f8,0,L"UAnimAttributeDataInterface");
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar7 = *(longlong *)(puVar4[10] + 0x28 + (longlong)(*(int *)(puVar4 + 0xb) + -1) * 0x30);
    lVar8 = 0x10;
    lVar3 = 0x44;
    lVar5 = 0;
    do {
      lVar5 = lVar5 + 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar8) =
           *(undefined4 *)(*(longlong *)(lVar7 + 0x50) + lVar3);
      lVar8 = lVar8 + 0x90;
      lVar3 = lVar3 + 0x30;
    } while (lVar5 < *(int *)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((longlong)puVar4 + 0x3c);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  FUN_145973f1a(&local_d8);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149467e70 FUN_149467e70 body=666 status=ok
// SIG undefined FUN_149467e70(void)

void FUN_149467e70(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  size_t _Size;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  int local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1446f470e(&local_50,L"3x4 float",1);
  uVar8 = FUN_140f4f540();
  FUN_140f4f5a6(uVar8,&local_60,local_50);
  iVar4 = *(int *)(local_60 + 0x20);
  plVar1 = (longlong *)(param_1 + 0x20);
  uVar5 = *(uint *)(param_2 + 0x18);
  iVar6 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar6 + uVar5;
  if ((uint)(*(int *)(param_1 + 0x2c) - iVar6) < uVar5) {
    FUN_146b28064(plVar1);
  }
  local_90 = param_3;
  memset((void *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x20)),0,
         (longlong)(int)uVar5 << 4);
  plVar2 = (longlong *)(param_1 + 0x30);
  uVar5 = *(uint *)(param_2 + 0x18);
  iVar6 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = uVar5 + iVar6;
  if ((uint)(*(int *)(param_1 + 0x3c) - iVar6) < uVar5) {
    FUN_1446f48e2(plVar2);
  }
  memset((void *)((longlong)iVar6 * 4 + *plVar2),0,(longlong)(int)uVar5 << 2);
  if (0 < *(int *)(param_2 + 0x18)) {
    lVar9 = *plVar2;
    lVar11 = 0;
    local_98 = param_2;
    do {
      local_a8 = *(longlong **)(local_98 + 0x10);
      local_88 = lVar11 * 0xf8;
      *(int *)(lVar9 + lVar11 * 4) = (int)local_a8[lVar11 * 0x1f + 8];
      lVar9 = *plVar1;
      lVar10 = lVar11 * 0x10;
      _Size = (longlong)*(int *)(*plVar2 + lVar11 * 4) * (longlong)iVar4;
      iVar6 = *(int *)(lVar9 + 8 + lVar10);
      uVar5 = (uint)_Size;
      *(uint *)(lVar9 + 8 + lVar10) = uVar5 + iVar6;
      local_a0 = lVar11;
      if ((uint)(*(int *)(lVar9 + 0xc + lVar10) - iVar6) < uVar5) {
        FUN_1447403be((longlong *)(lVar9 + lVar10));
      }
      memset((void *)((longlong)iVar6 + *(longlong *)(lVar9 + lVar10)),0,_Size);
      plVar7 = local_90;
      lVar9 = *plVar2;
      if (0 < *(int *)(lVar9 + local_a0 * 4)) {
        local_a8 = (longlong *)((longlong)local_a8 + local_88 + 0x38);
        lVar11 = 0;
        lVar12 = 0;
        do {
          local_80 = *(longlong *)(*plVar1 + lVar10) + lVar11;
          local_70 = 0;
          local_68 = 0;
          local_78 = iVar4;
          FUN_1494bcf41((ulonglong)((uint)*(ushort *)(*local_a8 + lVar12 * 2) * 0x60) + *plVar7,
                        &local_80);
          lVar12 = lVar12 + 1;
          lVar9 = *plVar2;
          lVar11 = lVar11 + iVar4;
        } while (lVar12 < *(int *)(lVar9 + local_a0 * 4));
      }
      lVar11 = local_a0 + 1;
    } while (lVar11 < *(int *)(local_98 + 0x18));
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)local_58 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946810c FUN_14946810c body=508 status=ok
// SIG undefined FUN_14946810c(void)

void FUN_14946810c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  longlong local_88;
  longlong local_80;
  uint local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = param_2;
  if ((int)param_1[1] == 0) {
    uVar3 = *(uint *)(param_1 + 5);
    *(uint *)(param_1 + 1) = uVar3;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
      FUN_1471a5e98(param_1);
    }
    memset((void *)*param_1,0,(longlong)(int)uVar3 << 3);
    uVar3 = *(uint *)(param_1 + 5);
    iVar4 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar4 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0x1c) - iVar4) < uVar3) {
      FUN_1471b0eda(param_1 + 2);
    }
    memset((void *)((longlong)iVar4 * 8 + param_1[2]),0,(longlong)(int)uVar3 << 3);
    if (0 < (int)param_1[5]) {
      local_80 = local_88 + 0x188;
      lVar1 = local_88 + 0x70;
      lVar2 = local_88 + 0x198;
      lVar9 = 8;
      lVar8 = 0;
      do {
        uVar3 = *(uint *)(param_1[6] + lVar8 * 4);
        local_78 = *(int *)(param_1[4] + lVar9) / (int)uVar3;
        local_49 = 0;
        local_58 = L"BoneTransformBuffer";
        local_68 = 0;
        if (DAT_14ca84e48 <= local_78) {
          local_78 = DAT_14ca84e48;
        }
        local_78 = local_78 + (local_78 == 0);
        uVar7 = DAT_14ca84e48;
        if (uVar3 < DAT_14ca84e48) {
          uVar7 = uVar3;
        }
        local_74 = CONCAT44(0x10109,uVar7 + (uVar7 == 0));
        local_98 = &local_49;
        lVar5 = FUN_144738de6(local_80,lVar1,&local_58,&local_78);
        uVar3 = local_78 >> 8;
        local_78 = local_78 & 0xffffff00;
        local_74 = 0xffffffff00000000;
        local_68 = 0;
        if ((*(byte *)(lVar5 + 0x68) & 0x80) != 0) {
          local_78 = CONCAT31((int3)uVar3,0x1c);
        }
        local_60 = lVar5;
        uVar6 = FUN_14475683e(lVar2,lVar1,lVar5 + 8,&local_78);
        *(longlong *)(*param_1 + lVar8 * 8) = lVar5;
        *(undefined8 *)(param_1[2] + lVar8 * 8) = uVar6;
        local_98 = (undefined1 *)((ulonglong)local_98 & 0xffffffffffffff00);
        FUN_1447759b4(local_88,lVar5,*(undefined8 *)(param_1[4] + -8 + lVar9),
                      (longlong)*(int *)(param_1[4] + lVar9));
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 0x10;
      } while (lVar8 < (int)param_1[5]);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946830a FUN_14946830a body=50 status=ok
// SIG undefined FUN_14946830a(void)

void FUN_14946830a(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0xa0) = param_2;
  return;
}



// FUNCTION 14946833c FUN_14946833c body=6894 status=ok
// SIG undefined FUN_14946833c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14946833c(longlong param_1,undefined8 param_2,longlong param_3,longlong **param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong *plVar12;
  char cVar13;
  short sVar14;
  int iVar15;
  longlong lVar16;
  double *pdVar17;
  longlong lVar18;
  double *pdVar19;
  longlong lVar20;
  int iVar21;
  double *pdVar22;
  int iVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  uint uVar28;
  longlong **pplVar29;
  longlong lVar30;
  uint uVar31;
  longlong *plVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar43;
  undefined1 auVar42 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar51;
  double dVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar63;
  double dVar64;
  undefined1 auVar60 [16];
  double dVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar77;
  double dVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar82;
  double dVar83;
  undefined1 auStack_368 [40];
  longlong local_340;
  longlong *local_338;
  double dStack_330;
  longlong local_320;
  longlong *local_318;
  double dStack_310;
  longlong **local_308;
  undefined8 local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  longlong *local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  uint uStack_2c0;
  int iStack_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined8 *local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  longlong *local_218;
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
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_340 = param_1;
  local_320 = param_3;
  local_308 = param_4;
  local_300 = param_2;
  if (*(char *)(param_1 + 0x55) == '\x01') {
    uVar34 = (ulonglong)*(uint *)(param_4 + 5);
  }
  else {
    *(undefined1 *)(param_1 + 0x55) = 1;
    plVar25 = (longlong *)(param_1 + 0x58);
    pplVar29 = param_4;
    FUN_146f44312(plVar25);
    plVar32 = (longlong *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if (*(int *)(param_1 + 0xb4) < 0) {
      FUN_14481578e(plVar32,0);
    }
    local_338 = (longlong *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(int *)(param_1 + 0xc4) < 0) {
      FUN_1401a2688(local_338,0);
    }
    uVar28 = *(uint *)(param_4 + 5);
    lVar18 = local_340;
    local_318 = plVar32;
    if ((uint)(*(int *)(local_340 + 0x60) - *(int *)(local_340 + 0x8c)) < uVar28) {
      if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar28);
      }
      FUN_146b7f620(plVar25,uVar28);
      lVar18 = local_340;
      iVar21 = 1;
      if (3 < uVar28) {
        uVar28 = (uVar28 | 1) + 0xe;
        iVar21 = 0x1f;
        if (uVar28 != 0) {
          for (; uVar28 >> iVar21 == 0; iVar21 = iVar21 + -1) {
          }
        }
        iVar21 = 1 << ((byte)iVar21 & 0x1f);
      }
      if ((*(int *)(local_340 + 0xa0) == 0) || (*(int *)(local_340 + 0xa0) < iVar21)) {
        *(int *)(local_340 + 0xa0) = iVar21;
        FUN_1449809d4(plVar25);
      }
    }
    lVar16 = local_320 + 0x138;
    if (*(longlong *)(local_320 + 0x2a0) != 0) {
      lVar16 = *(longlong *)(local_320 + 0x2a0);
    }
    lVar20 = local_320 + 0x298;
    cVar13 = FUN_14793dad4(lVar20,(double *)(lVar18 + 0x4c));
    if (cVar13 != '\0') {
      local_178 = *(double *)(lVar18 + 0x4c);
      local_170 = 0.0;
      lVar16 = FUN_1433f2764(lVar20);
    }
    if (*(int *)(lVar16 + 0x40) != 0) {
      uVar28 = 0;
      do {
        local_178 = (double)CONCAT44(local_178._4_4_,0xffffffff);
        local_1f8 = (double)CONCAT44(local_1f8._4_4_,0xffffffff);
        FUN_147d18614(local_320,uVar28,&local_178,&local_1f8);
        local_278 = (double)((ulonglong)local_278 & 0xffffffff00000000);
        local_2d8 = (longlong *)((ulonglong)local_2d8 & 0xffffffff00000000);
        pplVar29 = &local_2d8;
        FUN_147cceba8(lVar16,uVar28,&local_278);
        if ((uint)local_2d8 != 0) {
          uVar31 = 0;
          do {
            sVar14 = FUN_147ccec3a(lVar16,uVar28,uVar31);
            if (sVar14 != 0) {
              iVar21 = FUN_147ccebe4(lVar16,uVar28,uVar31);
              local_298._0_4_ =
                   (uint)*(ushort *)
                          (*(longlong *)
                            (*(longlong *)(local_320 + 0x10) + 0x38 +
                            (longlong)local_178._0_4_ * 0xf8) + (longlong)iVar21 * 2);
              pplVar29 = (longlong **)0x0;
              FUN_140db0a94(plVar25,&local_2a8,&local_298);
            }
            uVar31 = uVar31 + 1;
          } while (uVar31 < (uint)local_2d8);
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 < *(uint *)(lVar16 + 0x40));
    }
    param_4 = local_308;
    plVar12 = local_318;
    local_178 = (double)CONCAT44(local_178._4_4_,0xffffffff);
    FUN_1448156a8(local_318,&local_178,*(undefined4 *)(local_308 + 5));
    plVar32 = local_338;
    param_1 = local_340;
    iVar21 = *(int *)(param_4 + 5);
    if (1 < iVar21) {
      uVar34 = 1;
      do {
        lVar18 = *plVar12;
        uVar28 = *(uint *)(lVar18 + (longlong)*(int *)((longlong)param_4[4] + uVar34 * 0xc + 8) * 4)
        ;
        if (uVar28 == 0xffffffff) {
          if (*(int *)(local_340 + 0x60) != *(int *)(local_340 + 0x8c)) {
            lVar16 = *(longlong *)(local_340 + 0x98);
            if (*(longlong *)(local_340 + 0x98) == 0) {
              lVar16 = local_340 + 0x90;
            }
            uVar28 = (uint)uVar34;
            iVar23 = *(int *)(lVar16 + (ulonglong)
                                       (*(int *)(local_340 + 0xa0) + 0x7fffffffU & uVar28) * 4);
            if (iVar23 != -1) {
              do {
                if (uVar34 == *(uint *)(*plVar25 + (longlong)iVar23 * 0xc)) goto LAB_149468762;
                iVar23 = *(int *)(*plVar25 + (longlong)iVar23 * 0xc + 4);
              } while (iVar23 != -1);
            }
          }
        }
        else {
LAB_149468762:
          *(uint *)(lVar18 + uVar34 * 4) = uVar28;
          iVar21 = *(int *)(param_4 + 5);
        }
        uVar34 = uVar34 + 1;
        pplVar29 = (longlong **)(longlong)iVar21;
      } while ((longlong)uVar34 < (longlong)pplVar29);
    }
    FUN_146ed49ae(local_338);
    uVar34 = (ulonglong)*(uint *)(param_4 + 5);
    if (1 < (int)*(uint *)(param_4 + 5)) {
      lVar16 = 1;
      lVar18 = 0;
      do {
        auVar70 = _DAT_149934d80;
        lVar20 = *plVar12;
        if (*(int *)(lVar20 + lVar16 * 4) != -1) {
          plVar25 = param_4[6];
          lVar33 = (longlong)*(int *)((longlong)param_4[4] + lVar18 + 0x14);
          lVar30 = *plVar32;
          if (*(int *)(lVar20 + lVar33 * 4) == -1) {
            plVar25 = plVar25 + lVar18 + 0xc;
            plVar27 = (longlong *)(lVar30 + 0x60 + lVar18 * 8);
            for (lVar20 = 0xc; plVar32 = local_338, param_1 = local_340, lVar20 != 0;
                lVar20 = lVar20 + -1) {
              *plVar27 = *plVar25;
              plVar25 = plVar25 + 1;
              plVar27 = plVar27 + 1;
            }
          }
          else {
            lVar33 = lVar33 * 0x60;
            pdVar17 = (double *)(lVar30 + lVar33);
            auVar46 = *(undefined1 (*) [16])(lVar30 + 0x40 + lVar33);
            dVar1 = auVar46._0_8_;
            dVar56 = auVar46._8_8_;
            auVar81 = *(undefined1 (*) [16])(lVar30 + 0x50 + lVar33);
            dVar55 = auVar81._0_8_;
            auVar75 = *(undefined1 (*) [16])(plVar25 + lVar18 + 0x14);
            auVar35 = *(undefined1 (*) [16])(plVar25 + lVar18 + 0x16);
            auVar46 = minpd(auVar75,auVar46);
            auVar61 = minpd(auVar35,auVar81);
            auVar58._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
            auVar58._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
            uVar28 = movmskpd((int)lVar33,auVar58);
            auVar46._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
            auVar46._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
            iVar21 = movmskpd((int)pplVar29,auVar46);
            uVar28 = iVar21 << 2 | uVar28;
            pplVar29 = (longlong **)(ulonglong)uVar28;
            if (uVar28 == 0) {
              dVar53 = (double)plVar25[lVar18 + 0xc];
              dVar63 = (double)(plVar25 + lVar18 + 0xc)[1];
              dVar82 = (double)plVar25[lVar18 + 0xe];
              dVar73 = (double)(plVar25 + lVar18 + 0xe)[1];
              dVar40 = *pdVar17;
              dVar7 = pdVar17[1];
              dVar41 = pdVar17[2];
              dVar83 = pdVar17[3];
              dVar44 = pdVar17[3];
              dVar64 = pdVar17[3];
              dVar65 = pdVar17[1];
              dVar57 = pdVar17[1];
              dVar54 = pdVar17[2];
              dVar51 = pdVar17[2];
              dVar52 = dVar63 * dVar54 * -1.0 +
                       dVar82 * dVar65 + dVar73 * *pdVar17 * 1.0 + dVar53 * dVar44;
              dVar45 = dVar53 * dVar51 * 1.0 +
                       dVar73 * dVar57 + dVar82 * *pdVar17 * -1.0 + dVar63 * dVar64;
              auVar70._0_8_ =
                   dVar73 * dVar54 * 1.0 +
                   ((*pdVar17 * dVar63 * 1.0 + dVar82 * dVar44) - dVar53 * dVar65);
              auVar70._8_8_ =
                   dVar82 * dVar51 * -1.0 +
                   ((*pdVar17 * dVar53 * -1.0 + dVar73 * dVar64) - dVar63 * dVar57);
              dVar65 = (double)plVar25[lVar18 + 0x10] * dVar1;
              dVar57 = (double)(plVar25 + lVar18 + 0x10)[1] * dVar56;
              dVar82 = (double)plVar25[lVar18 + 0x12] * dVar55;
              dVar73 = (double)(plVar25 + lVar18 + 0x12)[1] * auVar81._8_8_;
              dVar53 = dVar57 * dVar40 - dVar7 * dVar65;
              dVar63 = dVar82 * dVar7 - dVar41 * dVar57;
              dVar54 = dVar65 * dVar41 - dVar40 * dVar82;
              dVar51 = dVar73 * dVar83 - dVar83 * dVar73;
              dVar63 = dVar63 + dVar63;
              dVar54 = dVar54 + dVar54;
              dVar53 = dVar53 + dVar53;
              dVar51 = dVar51 + dVar51;
              dVar65 = (dVar53 * dVar7 - dVar41 * dVar54) + dVar44 * dVar63 + dVar65 + pdVar17[4];
              dVar57 = (dVar63 * dVar41 - dVar53 * dVar40) + dVar64 * dVar54 + dVar57 + pdVar17[5];
              auVar61._0_8_ =
                   (dVar54 * dVar40 - dVar7 * dVar63) + dVar44 * dVar53 + dVar82 + pdVar17[6];
              auVar61._8_8_ =
                   (dVar51 * dVar83 - dVar51 * dVar83) + dVar64 * dVar51 + dVar73 + pdVar17[7];
            }
            else {
              dVar44 = *pdVar17;
              dVar65 = pdVar17[1];
              dVar64 = pdVar17[2];
              dVar57 = dVar65 + dVar65;
              dVar54 = dVar64 + dVar64;
              dVar51 = dVar44 * (dVar44 + dVar44);
              local_1f8 = ((double)DAT_149934d80 - (dVar64 * dVar54 + dVar65 * dVar57)) * dVar1;
              dStack_1d0 = (DAT_149934d80._8_8_ - (dVar64 * dVar54 + dVar51)) * dVar56;
              local_1a8 = (1.0 - (dVar51 + dVar65 * dVar57)) * dVar55;
              dVar64 = pdVar17[3];
              dVar51 = dVar54 * dVar64;
              dVar53 = (dVar44 + dVar44) * pdVar17[3];
              dVar64 = dVar57 * dVar64;
              dStack_1f0 = (dVar57 * dVar44 + dVar51) * dVar1;
              local_1c8 = (dVar54 * dVar65 + dVar53) * dVar56;
              local_1b8 = (dVar64 + *pdVar17 * dVar54) * dVar55;
              local_1d8 = (dVar57 * dVar44 - dVar51) * dVar56;
              dStack_1b0 = (dVar54 * dVar65 - dVar53) * dVar55;
              local_1e8 = (*pdVar17 * dVar54 - dVar64) * dVar1;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = pdVar17[4];
              dStack_190 = pdVar17[5];
              local_188 = pdVar17[6];
              uStack_180 = 0x3ff0000000000000;
              dVar44 = (double)plVar25[lVar18 + 0xc];
              dVar65 = (double)(plVar25 + lVar18 + 0xc)[1];
              dVar57 = (double)plVar25[lVar18 + 0xe];
              local_268 = (double)plVar25[lVar18 + 0x14];
              dVar54 = (double)(plVar25 + lVar18 + 0x14)[1];
              dStack_230 = (double)plVar25[lVar18 + 0x16];
              dVar82 = dVar65 + dVar65;
              dVar51 = dVar57 + dVar57;
              dVar73 = dVar44 * (dVar44 + dVar44);
              local_278 = ((double)DAT_149934d80 - (dVar57 * dVar51 + dVar65 * dVar82)) * local_268;
              local_228 = (1.0 - (dVar73 + dVar65 * dVar82)) * dStack_230;
              dVar64 = (double)plVar25[lVar18 + 0xf];
              dVar53 = dVar51 * dVar64;
              dVar63 = (dVar44 + dVar44) * (double)plVar25[lVar18 + 0xf];
              dVar64 = dVar82 * dVar64;
              dStack_270 = (dVar82 * dVar44 + dVar53) * local_268;
              local_238 = (dVar64 + (double)plVar25[lVar18 + 0xc] * dVar51) * dStack_230;
              local_268 = ((double)plVar25[lVar18 + 0xc] * dVar51 - dVar64) * local_268;
              dStack_230 = (dVar51 * dVar65 - dVar63) * dStack_230;
              local_248._8_8_ = 0;
              local_248._0_8_ = (dVar51 * dVar65 + dVar63) * dVar54;
              uStack_260 = 0;
              local_258._8_8_ = (DAT_149934d80._8_8_ - (dVar57 * dVar51 + dVar73)) * dVar54;
              local_258._0_8_ = (dVar82 * dVar44 - dVar53) * dVar54;
              uStack_220 = 0;
              local_218 = (longlong *)plVar25[lVar18 + 0x10];
              dStack_210 = (double)(plVar25 + lVar18 + 0x10)[1];
              local_208 = (double)plVar25[lVar18 + 0x12];
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178,&local_278,&local_1f8);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar38._8_8_ = -(ulonglong)(0.0 <= auVar75._8_8_ * dVar56);
              auVar38._0_8_ = -(ulonglong)(0.0 <= auVar75._0_8_ * dVar1);
              auVar46 = blendvpd(_DAT_149936790,auVar70,auVar38);
              uVar34 = -(ulonglong)(0.0 <= auVar35._0_8_ * dVar55);
              dVar64 = (double)(~uVar34 & 0xbff0000000000000 | uVar34 & 0x3ff0000000000000);
              dVar44 = auVar46._0_8_;
              local_168 = local_168 * dVar44;
              local_170 = local_170 * dVar44;
              local_178 = local_178 * dVar44;
              dVar44 = auVar46._8_8_;
              local_148 = local_148 * dVar44;
              local_150 = local_150 * dVar44;
              local_158 = dVar44 * local_158;
              local_128 = local_128 * dVar64;
              local_130 = local_130 * dVar64;
              local_138 = dVar64 * local_138;
              FUN_14481fd10(&local_2d8,&local_178);
              auVar11._8_4_ = uStack_2c0;
              auVar11._0_8_ = local_2c8;
              auVar11._12_4_ = iStack_2bc;
              dVar64 = auVar11._8_8_;
              dVar44 = local_2c8 * local_2c8 + (double)local_2d8 * (double)local_2d8;
              dVar65 = dVar64 * dVar64 + uStack_2d0 * uStack_2d0;
              auVar62._0_8_ = dVar44 + dVar65;
              auVar62._8_8_ = dVar44 + dVar65;
              auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_);
              auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_);
              auVar46 = sqrtpd(auVar62,auVar62);
              auVar70 = divpd(auVar70,auVar46);
              auVar69._0_8_ = auVar70._0_8_ * local_2c8;
              auVar69._8_8_ = auVar70._8_8_ * dVar64;
              dVar52 = (double)((ulonglong)((double)local_2d8 * auVar70._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_));
              dVar45 = (double)((ulonglong)(uStack_2d0 * auVar70._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_));
              auVar70 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar69,auVar39);
              auVar61._8_8_ = 0.0;
              auVar61._0_8_ = local_108;
              lVar30 = *plVar32;
              dVar65 = local_118;
              dVar57 = dStack_110;
            }
            dVar56 = auVar75._8_8_ * dVar56;
            pdVar17 = (double *)(lVar30 + 0x60 + lVar18 * 8);
            *pdVar17 = dVar52;
            pdVar17[1] = dVar45;
            *(undefined1 (*) [16])(lVar30 + 0x70 + lVar18 * 8) = auVar70;
            pdVar17 = (double *)(lVar30 + 0x80 + lVar18 * 8);
            *pdVar17 = dVar65;
            pdVar17[1] = dVar57;
            *(undefined1 (*) [16])(lVar30 + 0x90 + lVar18 * 8) = auVar61;
            auVar6._8_4_ = SUB84(dVar56,0);
            auVar6._0_8_ = auVar75._0_8_ * dVar1;
            auVar6._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
            *(undefined1 (*) [16])(lVar30 + 0xa0 + lVar18 * 8) = auVar6;
            pdVar17 = (double *)(lVar30 + 0xb0 + lVar18 * 8);
            *pdVar17 = auVar35._0_8_ * dVar55;
            pdVar17[1] = auVar35._8_8_ * auVar81._8_8_;
          }
        }
        lVar16 = lVar16 + 1;
        uVar34 = (ulonglong)*(int *)(param_4 + 5);
        lVar18 = lVar18 + 0xc;
      } while (lVar16 < (longlong)uVar34);
    }
  }
  lVar18 = *(longlong *)(param_1 + 0x30);
  iVar21 = *(int *)(lVar18 + 0x718);
  local_2a8 = (undefined8 *)0x0;
  uStack_2a0 = 0;
  FUN_146ed49ae(&local_2a8,uVar34);
  plVar25 = (longlong *)(param_1 + 0x58);
  dVar1 = (double)(param_1 + 0x68);
  local_178 = 2.12199579096527e-314;
  local_168 = 2.12199579047121e-314;
  local_160 = 0;
  iVar23 = 0;
  local_170 = dVar1;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_178);
    iVar23 = *(int *)(local_340 + 0x80);
  }
  plVar32 = (longlong *)(lVar18 + (longlong)iVar21 * 0x10 + 0x6d0);
  uStack_2c0 = SUB84(local_168,0);
  iStack_2bc = (int)((ulonglong)local_168 >> 0x20);
  local_2b8 = local_160;
  local_2b4 = local_15c;
  uStack_2d0 = local_178;
  local_2c8 = local_170;
  lVar18 = local_340;
  local_2d8 = plVar25;
  if ((iStack_2bc != iVar23) || (local_170 != dVar1)) {
    do {
      auVar70 = _DAT_149934d80;
      lVar16 = (longlong)*(int *)(*local_2d8 + (longlong)iStack_2bc * 0xc);
      if (lVar16 == 0) {
        puVar24 = &DAT_14c846480;
        puVar26 = local_2a8;
        for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
          *puVar26 = *puVar24;
          puVar24 = puVar24 + 1;
          puVar26 = puVar26 + 1;
        }
      }
      else {
        iVar21 = *(int *)(*(longlong *)(lVar18 + 0xa8) + lVar16 * 4);
        iVar15 = -1;
        if ((-1 < (longlong)iVar21) && (iVar21 < *(int *)(param_4 + 5))) {
          iVar15 = *(int *)((longlong)param_4[4] + (longlong)iVar21 * 0xc + 8);
        }
        lVar18 = *(longlong *)(lVar18 + 0xb8);
        lVar33 = lVar16 * 0x60;
        pdVar17 = (double *)(lVar18 + lVar33);
        lVar20 = *plVar32;
        lVar30 = (longlong)iVar15 * 0x60;
        pdVar19 = (double *)(lVar20 + lVar30);
        auVar46 = *(undefined1 (*) [16])(lVar20 + 0x40 + lVar30);
        dVar55 = auVar46._0_8_;
        dVar64 = auVar46._8_8_;
        auVar81 = *(undefined1 (*) [16])(lVar20 + 0x50 + lVar30);
        dVar56 = auVar81._0_8_;
        auVar75 = *(undefined1 (*) [16])(lVar18 + 0x40 + lVar33);
        auVar35 = *(undefined1 (*) [16])(lVar18 + 0x50 + lVar33);
        auVar46 = minpd(auVar75,auVar46);
        auVar58 = minpd(auVar35,auVar81);
        auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
        auVar47._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
        iVar21 = movmskpd((int)lVar18,auVar47);
        auVar59._8_8_ = -(ulonglong)(auVar58._8_8_ < 0.0);
        auVar59._0_8_ = -(ulonglong)(auVar58._0_8_ < 0.0);
        uVar28 = movmskpd((int)lVar20,auVar59);
        if ((uVar28 & 0x3fffffff) == 0 && iVar21 == 0) {
          dVar63 = *pdVar17;
          dVar82 = pdVar17[1];
          dVar73 = pdVar17[2];
          dVar40 = pdVar17[3];
          dVar7 = *pdVar19;
          dVar41 = pdVar19[1];
          dVar83 = pdVar19[2];
          dVar44 = pdVar19[3];
          dVar65 = pdVar19[3];
          dVar57 = pdVar19[1];
          dVar54 = pdVar19[1];
          dVar53 = pdVar19[2];
          dVar51 = pdVar19[2];
          dVar45 = dVar82 * dVar53 * -1.0 +
                   dVar73 * dVar57 + dVar40 * *pdVar19 * 1.0 + dVar63 * dVar44;
          dVar52 = dVar63 * dVar51 * 1.0 +
                   dVar40 * dVar54 + dVar73 * *pdVar19 * -1.0 + dVar82 * dVar65;
          auVar74._0_8_ =
               dVar40 * dVar53 * 1.0 +
               ((*pdVar19 * dVar82 * 1.0 + dVar73 * dVar44) - dVar63 * dVar57);
          auVar74._8_8_ =
               dVar73 * dVar51 * -1.0 +
               ((*pdVar19 * dVar63 * -1.0 + dVar40 * dVar65) - dVar82 * dVar54);
          dVar57 = pdVar17[4] * dVar55;
          dVar54 = pdVar17[5] * dVar64;
          dVar51 = pdVar17[6] * dVar56;
          dVar53 = dVar54 * dVar7 - dVar41 * dVar57;
          dVar63 = dVar51 * dVar41 - dVar83 * dVar54;
          dVar82 = dVar57 * dVar83 - dVar7 * dVar51;
          dVar63 = dVar63 + dVar63;
          dVar82 = dVar82 + dVar82;
          dVar53 = dVar53 + dVar53;
          dVar57 = (dVar53 * dVar41 - dVar83 * dVar82) + dVar44 * dVar63 + dVar57 + pdVar19[4];
          dVar65 = (dVar63 * dVar83 - dVar53 * dVar7) + dVar65 * dVar82 + dVar54 + pdVar19[5];
          dVar44 = (dVar82 * dVar7 - dVar41 * dVar63) + dVar44 * dVar53 + dVar51 + pdVar19[6];
          auVar79._0_8_ = auVar75._0_8_ * dVar55;
          auVar79._8_8_ = auVar75._8_8_ * dVar64;
          auVar75._0_8_ = auVar35._0_8_ * dVar56;
          auVar75._8_8_ = auVar35._8_8_ * auVar81._8_8_;
        }
        else {
          auVar79._0_8_ = auVar75._0_8_ * dVar55;
          auVar79._8_8_ = auVar75._8_8_ * dVar64;
          auVar75._0_8_ = auVar35._0_8_ * dVar56;
          auVar75._8_8_ = auVar35._8_8_ * auVar81._8_8_;
          dVar65 = *pdVar19;
          dVar57 = pdVar19[1];
          dVar54 = pdVar19[2];
          dVar51 = dVar57 + dVar57;
          dVar53 = dVar54 + dVar54;
          dVar44 = dVar65 * (dVar65 + dVar65);
          local_1f8 = ((double)DAT_149934d80 - (dVar54 * dVar53 + dVar57 * dVar51)) * dVar55;
          dStack_1d0 = (DAT_149934d80._8_8_ - (dVar54 * dVar53 + dVar44)) * dVar64;
          local_1a8 = (1.0 - (dVar44 + dVar57 * dVar51)) * dVar56;
          dVar44 = pdVar19[3];
          dVar54 = dVar53 * dVar44;
          dVar63 = (dVar65 + dVar65) * pdVar19[3];
          dVar44 = dVar51 * dVar44;
          dStack_1f0 = (dVar51 * dVar65 + dVar54) * dVar55;
          local_1c8 = (dVar53 * dVar57 + dVar63) * dVar64;
          local_1b8 = (dVar44 + *pdVar19 * dVar53) * dVar56;
          local_1d8 = (dVar51 * dVar65 - dVar54) * dVar64;
          dStack_1b0 = (dVar53 * dVar57 - dVar63) * dVar56;
          local_1e8 = (*pdVar19 * dVar53 - dVar44) * dVar55;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = pdVar19[4];
          dStack_190 = pdVar19[5];
          local_188 = pdVar19[6];
          uStack_180 = 0x3ff0000000000000;
          dVar64 = *pdVar17;
          dVar44 = pdVar17[1];
          dVar65 = pdVar17[2];
          local_268 = pdVar17[8];
          dVar57 = pdVar17[9];
          dStack_230 = pdVar17[10];
          dVar63 = dVar44 + dVar44;
          dVar54 = dVar65 + dVar65;
          dVar56 = dVar64 * (dVar64 + dVar64);
          local_278 = ((double)DAT_149934d80 - (dVar65 * dVar54 + dVar44 * dVar63)) * local_268;
          local_228 = (1.0 - (dVar56 + dVar44 * dVar63)) * dStack_230;
          dVar55 = pdVar17[3];
          dVar51 = dVar54 * dVar55;
          dVar53 = (dVar64 + dVar64) * pdVar17[3];
          dVar55 = dVar63 * dVar55;
          dStack_270 = (dVar63 * dVar64 + dVar51) * local_268;
          local_238 = (dVar55 + *pdVar17 * dVar54) * dStack_230;
          local_268 = (*pdVar17 * dVar54 - dVar55) * local_268;
          dStack_230 = (dVar54 * dVar44 - dVar53) * dStack_230;
          uStack_260 = 0;
          local_258._8_8_ = (DAT_149934d80._8_8_ - (dVar65 * dVar54 + dVar56)) * dVar57;
          local_258._0_8_ = (dVar63 * dVar64 - dVar51) * dVar57;
          local_248._8_8_ = 0;
          local_248._0_8_ = (dVar54 * dVar44 + dVar53) * dVar57;
          uStack_220 = 0;
          local_218 = (longlong *)pdVar17[4];
          dStack_210 = pdVar17[5];
          local_208 = pdVar17[6];
          uStack_200 = 0x3ff0000000000000;
          pdVar22 = &local_178;
          FUN_1447fea8d(pdVar22);
          FUN_144a1c686(pdVar22,0x3e45798ee0000000);
          auVar81._8_8_ = -(ulonglong)(0.0 <= auVar79._8_8_);
          auVar81._0_8_ = -(ulonglong)(0.0 <= auVar79._0_8_);
          auVar46 = blendvpd(_DAT_149936790,auVar70,auVar81);
          dVar55 = (double)(~-(ulonglong)(0.0 <= auVar75._0_8_) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= auVar75._0_8_) & 0x3ff0000000000000);
          dVar56 = auVar46._0_8_;
          local_168 = local_168 * dVar56;
          local_170 = local_170 * dVar56;
          local_178 = local_178 * dVar56;
          dVar56 = auVar46._8_8_;
          local_148 = local_148 * dVar56;
          local_150 = local_150 * dVar56;
          local_158 = dVar56 * local_158;
          local_128 = local_128 * dVar55;
          local_130 = local_130 * dVar55;
          local_138 = dVar55 * local_138;
          pdVar19 = (double *)&local_298;
          pdVar17 = (double *)FUN_14481fd10();
          iVar21 = (int)pdVar22;
          dVar55 = (double)CONCAT44(local_298._4_4_,(uint)local_298);
          dVar56 = local_288 * local_288 + dVar55 * dVar55;
          dVar64 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar60._0_8_ = dVar56 + dVar64;
          auVar60._8_8_ = dVar56 + dVar64;
          auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_);
          auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_);
          auVar46 = sqrtpd(auVar60,auVar60);
          auVar70 = divpd(auVar70,auVar46);
          auVar71._0_8_ = auVar70._0_8_ * local_288;
          auVar71._8_8_ = auVar70._8_8_ * dStack_280;
          dVar45 = (double)((ulonglong)(dVar55 * auVar70._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_));
          dVar52 = (double)((ulonglong)(dStack_290 * auVar70._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_));
          auVar74 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar71,auVar35);
          dVar44 = local_108;
          dVar57 = local_118;
          dVar65 = dStack_110;
        }
        auVar70 = _DAT_149934d80;
        auVar67._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar79._8_8_));
        auVar67._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar79._0_8_));
        iVar15 = movmskpd((int)pdVar17,auVar67);
        auVar68._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar75._8_8_));
        auVar68._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar75._0_8_));
        uVar28 = movmskpd((int)pdVar19,auVar68);
        if ((uVar28 & 0x3fffffff) == 0 && iVar15 == 0) {
          local_318 = DAT_14c8464a0;
          dStack_310 = DAT_14c8464a8;
          local_338 = DAT_14c8464d0;
          dStack_330 = dRam000000014c8464d8;
          dVar55 = DAT_14c846480;
          dVar52 = DAT_14c846488;
          dVar56 = DAT_14c846490;
          dVar64 = DAT_14c846498;
          dVar54 = DAT_14c8464c0;
          dVar51 = DAT_14c8464c8;
          dVar44 = DAT_14c8464b0;
          dVar65 = DAT_14c8464b8;
        }
        else {
          auVar81 = divpd(_DAT_149934d80,auVar79);
          auVar46 = divpd(ZEXT816(0x3ff0000000000000),auVar75);
          dVar54 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar79._0_8_)) & auVar81._0_8_)
          ;
          dVar51 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar79._8_8_)) & auVar81._8_8_)
          ;
          local_338 = (longlong *)
                      (-(ulonglong)(9.99999993922529e-09 < ABS(auVar75._0_8_)) & auVar46._0_8_);
          dVar55 = -dVar45;
          dVar52 = -dVar52;
          dVar56 = auVar74._0_8_ * -1.0;
          dVar64 = auVar74._8_8_ * 1.0;
          dVar57 = dVar57 * dVar54;
          dVar65 = dVar65 * dVar51;
          dStack_330 = 0.0;
          dVar44 = dVar44 * (double)local_338;
          dVar53 = dVar65 * dVar55 - dVar57 * dVar52;
          dVar82 = dVar44 * dVar52 - dVar65 * dVar56;
          dVar63 = dVar57 * dVar56 - dVar55 * dVar44;
          dVar82 = dVar82 + dVar82;
          dVar63 = dVar63 + dVar63;
          dVar53 = dVar53 + dVar53;
          local_318 = (longlong *)
                      (0.0 - ((dVar53 * dVar52 - dVar63 * dVar56) + dVar64 * dVar82 + dVar57));
          dStack_310 = 0.0 - (dVar53 * dVar45 + dVar56 * dVar82 + dVar64 * dVar63 + dVar65);
          dVar44 = 0.0 - (dVar64 * dVar53 + dVar44 + (dVar63 * dVar55 - dVar82 * dVar52));
          dVar65 = 0.0;
        }
        dVar73 = dStack_330;
        plVar12 = local_338;
        lVar18 = *plVar32;
        pdVar17 = (double *)(lVar18 + lVar33);
        auVar46 = *(undefined1 (*) [16])(lVar18 + 0x40 + lVar33);
        dVar57 = auVar46._0_8_;
        dVar63 = auVar46._8_8_;
        auVar81 = *(undefined1 (*) [16])(lVar18 + 0x50 + lVar33);
        dVar53 = auVar81._0_8_;
        dVar82 = auVar81._8_8_;
        auVar48._8_8_ = dVar51;
        auVar48._0_8_ = dVar54;
        auVar46 = minpd(auVar48,auVar46);
        auVar10._8_8_ = dStack_330;
        auVar10._0_8_ = local_338;
        auVar81 = minpd(auVar10,auVar81);
        auVar49._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
        auVar49._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
        iVar15 = movmskpd((int)lVar18,auVar49);
        auVar80._8_8_ = -(ulonglong)(auVar81._8_8_ < 0.0);
        auVar80._0_8_ = -(ulonglong)(auVar81._0_8_ < 0.0);
        uVar28 = movmskpd(iVar21,auVar80);
        if ((uVar28 & 0x3fffffff) == 0 && iVar15 == 0) {
          dVar77 = *pdVar17;
          dVar78 = pdVar17[1];
          dVar7 = pdVar17[3];
          dVar40 = pdVar17[3];
          dVar83 = pdVar17[1];
          dVar41 = pdVar17[1];
          dVar8 = pdVar17[2];
          dVar9 = pdVar17[3];
          dVar45 = pdVar17[2];
          dVar2 = pdVar17[2];
          dVar5 = dVar52 * dVar45 * -1.0 +
                  dVar56 * dVar83 + dVar64 * *pdVar17 * 1.0 + dVar55 * dVar7;
          dVar43 = dVar55 * dVar2 * 1.0 +
                   dVar64 * dVar41 + dVar56 * *pdVar17 * -1.0 + dVar52 * dVar40;
          auVar76._0_8_ =
               dVar64 * dVar45 * 1.0 +
               ((*pdVar17 * dVar52 * 1.0 + dVar56 * dVar7) - dVar55 * dVar83);
          auVar76._8_8_ =
               dVar56 * dVar2 * -1.0 +
               ((*pdVar17 * dVar55 * -1.0 + dVar64 * dVar40) - dVar52 * dVar41);
          dVar64 = (double)local_318 * dVar57;
          dVar41 = dStack_310 * dVar63;
          dVar44 = dVar44 * dVar53;
          dVar65 = dVar65 * dVar82;
          dVar55 = dVar41 * dVar77 - dVar64 * dVar78;
          dVar52 = dVar44 * dVar78 - dVar41 * dVar8;
          dVar83 = dVar64 * dVar8 - dVar44 * dVar77;
          dVar56 = dVar65 * dVar9 - dVar65 * dVar9;
          dVar52 = dVar52 + dVar52;
          dVar83 = dVar83 + dVar83;
          dVar55 = dVar55 + dVar55;
          dVar56 = dVar56 + dVar56;
          auVar66._0_8_ = (dVar55 * dVar78 - dVar8 * dVar83) + dVar7 * dVar52 + dVar64 + pdVar17[4];
          auVar66._8_8_ = (dVar52 * dVar8 - dVar55 * dVar77) + dVar40 * dVar83 + dVar41 + pdVar17[5]
          ;
          dVar55 = (dVar83 * dVar77 - dVar78 * dVar52) + dVar7 * dVar55 + dVar44 + pdVar17[6];
          dVar56 = (dVar56 * dVar9 - dVar56 * dVar9) + dVar40 * dVar56 + dVar65 + pdVar17[7];
        }
        else {
          dVar45 = *pdVar17;
          dVar2 = pdVar17[1];
          dVar5 = pdVar17[2];
          dVar43 = dVar2 + dVar2;
          dVar7 = dVar5 + dVar5;
          dVar77 = dVar45 * (dVar45 + dVar45);
          dVar40 = pdVar17[3];
          dVar41 = dVar7 * dVar40;
          dVar83 = (dVar45 + dVar45) * pdVar17[3];
          dVar40 = dVar43 * dVar40;
          dVar78 = (double)local_338 * dVar53;
          dStack_2f0 = dStack_330 * dVar82;
          local_1a8 = (1.0 - (dVar77 + dVar2 * dVar43)) * dVar53;
          local_1b8 = (dVar40 + *pdVar17 * dVar7) * dVar53;
          local_1d8 = (dVar43 * dVar45 - dVar41) * dVar63;
          dStack_1b0 = (dVar7 * dVar2 - dVar83) * dVar53;
          local_1f8 = ((double)DAT_149934d80 - (dVar5 * dVar7 + dVar2 * dVar43)) * dVar57;
          dStack_1d0 = (DAT_149934d80._8_8_ - (dVar5 * dVar7 + dVar77)) * dVar63;
          dStack_1f0 = (dVar43 * dVar45 + dVar41) * dVar57;
          local_1c8 = (dVar7 * dVar2 + dVar83) * dVar63;
          local_1e8 = (*pdVar17 * dVar7 - dVar40) * dVar57;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = pdVar17[4];
          dStack_190 = pdVar17[5];
          local_188 = pdVar17[6];
          uStack_180 = 0x3ff0000000000000;
          dVar83 = dVar52 + dVar52;
          dVar40 = dVar56 + dVar56;
          dVar41 = dVar55 * (dVar55 + dVar55);
          local_228 = (1.0 - (dVar41 + dVar52 * dVar83)) * (double)local_338;
          dVar7 = (dVar55 + dVar55) * dVar64;
          local_238 = (dVar55 * dVar40 + dVar83 * dVar64) * (double)local_338;
          dStack_230 = (dVar40 * dVar52 - dVar7) * (double)local_338;
          local_278 = ((double)DAT_149934d80 - (dVar56 * dVar40 + dVar52 * dVar83)) * dVar54;
          dVar56 = (DAT_149934d80._8_8_ - (dVar56 * dVar40 + dVar41)) * dVar51;
          dStack_270 = (dVar83 * dVar55 + dVar40 * dVar64) * dVar54;
          local_268 = (dVar55 * dVar40 - dVar83 * dVar64) * dVar54;
          uStack_260 = 0;
          local_258._8_4_ = SUB84(dVar56,0);
          local_258._0_8_ = (dVar83 * dVar55 - dVar40 * dVar64) * dVar51;
          local_258._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
          local_248._8_8_ = 0;
          local_248._0_8_ = (dVar40 * dVar52 + dVar7) * dVar51;
          uStack_220 = 0;
          local_218 = local_318;
          dStack_210 = dStack_310;
          uStack_200 = 0x3ff0000000000000;
          local_2f8 = dVar78;
          local_2e8 = dVar44;
          dStack_2e0 = dVar65;
          local_208 = dVar44;
          FUN_1447fea8d(&local_178);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar36._8_8_ = -(ulonglong)(0.0 <= dVar51 * dVar63);
          auVar36._0_8_ = -(ulonglong)(0.0 <= dVar54 * dVar57);
          auVar46 = blendvpd(_DAT_149936790,auVar70,auVar36);
          uVar34 = -(ulonglong)(0.0 <= dVar78);
          dVar55 = (double)(~uVar34 & 0xbff0000000000000 | uVar34 & 0x3ff0000000000000);
          dVar56 = auVar46._0_8_;
          local_168 = local_168 * dVar56;
          local_170 = local_170 * dVar56;
          local_178 = local_178 * dVar56;
          dVar56 = auVar46._8_8_;
          local_148 = local_148 * dVar56;
          local_150 = local_150 * dVar56;
          local_158 = dVar56 * local_158;
          local_128 = local_128 * dVar55;
          local_130 = local_130 * dVar55;
          local_138 = dVar55 * local_138;
          FUN_14481fd10(&local_298,&local_178);
          dVar55 = (double)CONCAT44(local_298._4_4_,(uint)local_298);
          auVar42._0_8_ = dVar55 * dVar55;
          auVar42._8_8_ = dStack_290 * dStack_290;
          dVar56 = local_288 * local_288 + auVar42._0_8_;
          dVar64 = dStack_280 * dStack_280 + auVar42._8_8_;
          auVar50._0_8_ = dVar56 + dVar64;
          auVar50._8_8_ = dVar56 + dVar64;
          auVar46 = sqrtpd(auVar42,auVar50);
          auVar70 = divpd(auVar70,auVar46);
          auVar72._0_8_ = auVar70._0_8_ * local_288;
          auVar72._8_8_ = auVar70._8_8_ * dStack_280;
          dVar5 = (double)((ulonglong)(dVar55 * auVar70._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_));
          dVar43 = (double)((ulonglong)(dStack_290 * auVar70._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_));
          auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
          auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
          auVar76 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar72,auVar37);
          auVar66._8_8_ = dStack_110;
          auVar66._0_8_ = local_118;
          dVar56 = 0.0;
          dVar55 = local_108;
        }
        auVar4._8_4_ = SUB84(dVar43,0);
        auVar4._0_8_ = dVar5;
        auVar4._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
        *(undefined1 (*) [16])(local_2a8 + lVar16 * 0xc) = auVar4;
        *(undefined1 (*) [16])(local_2a8 + lVar16 * 0xc + 2) = auVar76;
        *(undefined1 (*) [16])(local_2a8 + lVar16 * 0xc + 4) = auVar66;
        local_2a8[lVar16 * 0xc + 6] = dVar55;
        (local_2a8 + lVar16 * 0xc + 6)[1] = dVar56;
        auVar3._8_4_ = SUB84(dVar51 * dVar63,0);
        auVar3._0_8_ = dVar54 * dVar57;
        auVar3._12_4_ = (int)((ulonglong)(dVar51 * dVar63) >> 0x20);
        *(undefined1 (*) [16])(local_2a8 + lVar16 * 0xc + 8) = auVar3;
        local_2a8[lVar16 * 0xc + 10] = (double)plVar12 * dVar53;
        (local_2a8 + lVar16 * 0xc + 10)[1] = dVar73 * dVar82;
        param_4 = local_308;
      }
      lVar18 = local_340;
      uStack_2c0 = uStack_2c0 & ~uStack_2d0._4_4_;
      FUN_1449c0562(&uStack_2d0);
    } while (local_2d8 != plVar25 || (local_2c8 != dVar1 || iStack_2bc != iVar23));
  }
  FUN_149467e70(local_300,local_320,&local_2a8);
  if (local_2a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149469e2c FUN_149469e2c body=2017 status=ok
// SIG undefined FUN_149469e2c(void)

undefined8 * FUN_149469e2c(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined ***pppuVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  size_t _Size;
  void *_Dst;
  uint uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auStack_1d8 [32];
  code **local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  undefined8 *local_198;
  longlong *local_190;
  undefined8 *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  uint local_158;
  void *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  uint local_120;
  void *local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  code *local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined ***local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar7 = (undefined8 *)FUN_14001cc68(0xb8);
  *puVar7 = &PTR_FUN_14bceda40;
  puVar18 = puVar7 + 4;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 3) = 0;
  memset(puVar18,0,0x98);
  if ((*(longlong *)(param_1 + 0x30) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x8a8) == 0)) goto LAB_14946a0bb;
  lVar8 = FUN_14479d2ce(param_1 + 0xd0);
  if (lVar8 != 0) {
    uVar12 = *(undefined8 *)(param_1 + 200);
    FUN_1446f470e(&local_100,L"SkinWeightProfile",1);
    FUN_14949097c(uVar12,&local_a8,lVar8,local_100);
    FUN_1446f470e(&local_108,L"Value",1);
    FUN_14688f02c(&local_a8,&local_f8,local_108);
    if ((((&DAT_14bcfe218)[uStack_f0 & 0xff] == '\x01') && (*(code **)(param_1 + 0x4c) != local_f8))
       && (*(code **)(param_1 + 0x4c) = local_f8, *(char *)(param_1 + 0x54) == '\x01')) {
      *(undefined1 *)(param_1 + 0x55) = 0;
    }
    FUN_1401f9f5c(&local_a8);
  }
  plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x8a8);
  iVar6 = (**(code **)(*plVar14 + 0x90))(plVar14);
  lVar8 = *(longlong *)(*(longlong *)plVar14[8] + (longlong)iVar6 * 8);
  if (*(longlong *)(param_1 + 0x4c) == 0) {
LAB_14946a0f4:
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (undefined **)0x0;
    puStack_80 = (undefined *)0x0;
    local_98 = (undefined ***)0x0;
    uStack_90 = 0;
    local_a8 = (code *)0x0;
    uStack_a0 = 0;
    local_198 = puVar18;
    if (*(char *)(param_1 + 0x54) == '\x01') {
      plVar11 = (longlong *)FUN_144a7954a(*(undefined8 *)(param_1 + 0x30));
      uVar12 = (**(code **)(*plVar11 + 0x310))(plVar11);
      FUN_14946833c(param_1,&local_a8,lVar8,uVar12);
    }
    lVar9 = *(longlong *)(param_1 + 0x30);
    iVar6 = *(int *)(lVar9 + 0x718);
    local_118 = (void *)0x0;
    uVar17 = *(uint *)(lVar8 + 0x18);
    uStack_110 = (ulonglong)uVar17;
    local_1a8 = lVar8;
    if ((longlong)(int)uVar17 != 0) {
      FUN_149483ed0(&local_118);
    }
    local_190 = plVar14;
    local_188 = puVar7;
    memset(local_118,0,(longlong)(int)uVar17 << 4);
    if (*(int *)(local_1a8 + 0x18) < 1) {
      uVar17 = *(uint *)(param_1 + 0x40);
    }
    else {
      local_178 = lVar9 + (longlong)iVar6 * 0x40 + 0x10a8;
      uVar19 = (ulonglong)*(uint *)(param_1 + 0x40);
      lVar8 = 0;
      lVar9 = local_1a8;
      local_170 = param_1;
      do {
        lVar3 = *(longlong *)(lVar9 + 0x10);
        lVar16 = lVar8 * 0x10;
        plVar14 = (longlong *)((longlong)local_118 + lVar16);
        iVar6 = *(int *)((longlong)local_118 + lVar16 + 8);
        uVar17 = (uint)uVar19;
        *(uint *)((longlong)local_118 + lVar16 + 8) = iVar6 + uVar17;
        if ((uint)(*(int *)((longlong)local_118 + lVar16 + 0xc) - iVar6) < uVar17) {
          FUN_146b28064(plVar14);
        }
        memset((void *)((longlong)iVar6 * 0x10 + *plVar14),0,(longlong)(int)uVar17 << 4);
        uVar19 = (ulonglong)*(uint *)(param_1 + 0x40);
        if (0 < (int)*(uint *)(param_1 + 0x40)) {
          lVar3 = lVar3 + lVar8 * 0xf8;
          lVar15 = 0;
          local_180 = lVar8;
          do {
            lVar8 = *(longlong *)(param_1 + 0x38);
            iVar6 = *(int *)(lVar3 + 0x40);
            lVar9 = *(longlong *)((longlong)local_118 + lVar16);
            lVar20 = lVar15 * 0x10;
            _Size = (longlong)*(int *)(lVar8 + 0x14 + lVar15 * 0x90) * (longlong)iVar6;
            iVar2 = *(int *)(lVar9 + 8 + lVar20);
            uVar17 = (uint)_Size;
            *(uint *)(lVar9 + 8 + lVar20) = iVar2 + uVar17;
            plVar14 = (longlong *)(lVar9 + lVar20);
            local_168 = lVar15;
            if ((uint)(*(int *)(lVar9 + 0xc + lVar20) - iVar2) < uVar17) {
              local_1a0 = (longlong *)(lVar9 + lVar20);
              FUN_1447403be();
              plVar14 = local_1a0;
            }
            memset((void *)((longlong)iVar2 + *plVar14),0,_Size);
            if (0 < iVar6) {
              puVar18 = (undefined8 *)(lVar8 + lVar15 * 0x90);
              lVar8 = 0;
              do {
                _Dst = (void *)((longlong)(int)lVar8 * (longlong)*(int *)((longlong)puVar18 + 0x14)
                               + *(longlong *)(*(longlong *)((longlong)local_118 + lVar16) + lVar20)
                               );
                local_130 = DAT_14cc1b318;
                local_128 = *puVar18;
                local_120 = (uint)*(ushort *)(*(longlong *)(lVar3 + 0x38) + lVar8 * 2);
                local_f8 = (code *)puVar18[4];
                local_e8 = (longlong *)0x0;
                if (local_f8 != (code *)0x0) {
                  puVar7 = (undefined8 *)puVar18[6];
                  if ((undefined8 *)puVar18[6] == (undefined8 *)0x0) {
                    puVar7 = puVar18 + 8;
                  }
                  (**(code **)*puVar7)();
                  if (local_f8 != (code *)0x0) {
                    local_1a0 = (longlong *)puVar18[0xc];
                    lVar9 = FUN_147937f22(local_178,local_1a0,&local_130);
                    pcVar4 = local_f8;
                    if (lVar9 == 0) {
                      memcpy(_Dst,(void *)puVar18[0xd],(ulonglong)*(uint *)(puVar18 + 0xe));
                    }
                    else {
                      local_158 = -*(int *)((longlong)local_1a0 + 0x5c) &
                                  ((int)local_1a0[0xb] + *(int *)((longlong)local_1a0 + 0x5c)) - 1U;
                      local_148 = *(undefined4 *)((longlong)puVar18 + 0x14);
                      local_140 = 0;
                      local_138 = 0;
                      plVar14 = local_e8;
                      if (local_e8 == (longlong *)0x0) {
                        plVar14 = local_d8;
                      }
                      local_160 = lVar9;
                      local_150 = _Dst;
                      uVar12 = (**(code **)(*plVar14 + 8))();
                      (*pcVar4)(uVar12,&local_160,&local_150);
                    }
                    if (local_f8 != (code *)0x0) {
                      plVar14 = local_e8;
                      if (local_e8 == (longlong *)0x0) {
                        plVar14 = local_d8;
                      }
                      (**(code **)(*plVar14 + 0x10))();
                    }
                  }
                }
                lVar8 = lVar8 + 1;
              } while (iVar6 != lVar8);
            }
            lVar15 = local_168 + 1;
            uVar19 = (ulonglong)*(int *)(local_170 + 0x40);
            param_1 = local_170;
            lVar8 = local_180;
            lVar9 = local_1a8;
          } while (lVar15 < (longlong)uVar19);
        }
        uVar17 = (uint)uVar19;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(lVar9 + 0x18));
    }
    local_f8 = (code *)0x0;
    uStack_f0 = (ulonglong)uVar17;
    if ((uVar17 != 0) && (FUN_1446f48e2(), 0 < *(int *)(param_1 + 0x40))) {
      lVar8 = 4;
      lVar9 = 0;
      do {
        *(undefined4 *)(local_f8 + lVar9 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x38) + lVar8 * 4);
        lVar9 = lVar9 + 1;
        lVar8 = lVar8 + 0x24;
      } while (lVar9 < *(int *)(param_1 + 0x40));
    }
    puVar7 = local_188;
    local_188[1] = local_190;
    local_188[2] = *(undefined8 *)(param_1 + 0x4c);
    lVar8 = *(longlong *)(param_1 + 0x30);
    lVar9 = FUN_14479d2ce(lVar8 + 0x668);
    if (lVar9 == 0) {
      lVar9 = lVar8;
    }
    *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(lVar9 + 0x720);
    uVar17 = *(uint *)(param_1 + 0x48);
    iVar6 = *(int *)(puVar7 + 5);
    *(uint *)(puVar7 + 5) = iVar6 + uVar17;
    if ((uint)(*(int *)((longlong)puVar7 + 0x2c) - iVar6) < uVar17) {
      FUN_1447403be(local_198);
    }
    memset((void *)((longlong)iVar6 + puVar7[4]),0,(longlong)(int)uVar17);
    FUN_14946a60e(puVar7 + 6,&local_a8);
    if (puVar7[0xe] != 0) {
      FUN_1400020a8();
    }
    puVar7[0xe] = local_f8;
    local_f8 = (code *)0x0;
    *(undefined4 *)(puVar7 + 0xf) = (undefined4)uStack_f0;
    *(undefined4 *)((longlong)puVar7 + 0x7c) = uStack_f0._4_4_;
    uStack_f0 = 0;
    FUN_14946a6cc(puVar7 + 0x14,&local_118);
    if (local_f8 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_149483e99(local_118,uStack_110 & 0xffffffff);
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_14946a71c(&local_a8);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x4c);
    cVar5 = FUN_14793dad4(lVar8 + 0x298,puVar1);
    if (cVar5 != '\0') {
      local_a8 = (code *)*puVar1;
      uStack_a0 = 0;
      lVar9 = FUN_1433f2764();
      if (lVar9 != 0) goto LAB_14946a0f4;
    }
    cVar5 = FUN_14793dad4(lVar8 + 0x298,puVar1);
    if (cVar5 != '\0') {
      uVar12 = *(undefined8 *)(param_1 + 0x4c);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xb0);
      if (lVar8 == 0) {
        lVar8 = FUN_1448abda6(*(longlong *)(param_1 + 0x30));
      }
      lVar8 = FUN_140a2dd74(lVar8);
      if (lVar8 != 0) {
        local_98 = (undefined ***)0x0;
        local_88 = &PTR_LAB_14bcfe370;
        puStack_80 = &DAT_1445276e0;
        local_a8 = FUN_149483e0a;
        uVar10 = FUN_144a7954a(*(undefined8 *)(param_1 + 0x30));
        local_b0 = 0;
        local_1b0 = 0xffffffff;
        local_1b8 = &local_a8;
        local_b8 = uVar12;
        FUN_1433f28d2(lVar8,&local_b8,uVar10,param_1);
        if (local_a8 != (code *)0x0) {
          pppuVar13 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar13 = &local_88;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
    }
  }
LAB_14946a0bb:
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar7;
}



// FUNCTION 14946a60e FUN_14946a60e body=189 status=ok
// SIG undefined FUN_14946a60e(void)

longlong * FUN_14946a60e(longlong *param_1,longlong *param_2)

{
  if (param_1 == param_2) {
    FUN_1490f532a(param_1 + 4,param_2 + 4);
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    FUN_1490f532a(param_1 + 4,param_2 + 4);
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = param_2[6];
    param_2[6] = 0;
    *(int *)(param_1 + 7) = (int)param_2[7];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
  }
  return param_1;
}



// FUNCTION 14946a6cc FUN_14946a6cc body=80 status=ok
// SIG undefined FUN_14946a6cc(void)

longlong * FUN_14946a6cc(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_149483e99(*param_1,(int)param_1[1]);
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



// FUNCTION 14946a71c FUN_14946a71c body=87 status=ok
// SIG undefined FUN_14946a71c(void)

void FUN_14946a71c(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1459ab2e7(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14946a774 FUN_14946a774 body=199 status=ok
// SIG undefined FUN_14946a774(void)

bool FUN_14946a774(longlong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2[1] == *(int *)(param_1 + 0x28)) && (*(longlong **)(param_1 + 8) != (longlong *)0x0))
  {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
    lVar1 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar3 * 8);
    if (*(int *)(lVar1 + 0x18) == *param_2) {
      lVar4 = lVar1 + 0x138;
      if (*(longlong *)(lVar1 + 0x2a0) != 0) {
        lVar4 = *(longlong *)(lVar1 + 0x2a0);
      }
      cVar2 = FUN_14793dad4(lVar1 + 0x298,(undefined8 *)(param_1 + 0x10));
      if (cVar2 != '\0') {
        local_30 = *(undefined8 *)(param_1 + 0x10);
        local_28 = 0;
        lVar4 = FUN_1433f2764(lVar1 + 0x298);
      }
      bVar5 = lVar4 != 0;
      goto LAB_14946a81d;
    }
  }
  bVar5 = false;
LAB_14946a81d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946a83c FUN_14946a83c body=1035 status=ok
// SIG undefined FUN_14946a83c(void)

void FUN_14946a83c(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  uint local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  lVar8 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar2 * 8);
  local_b0 = param_2;
  local_60 = FUN_144735828(&DAT_14ca63b10,param_2,4);
  uVar1 = local_78 >> 8;
  local_78 = local_78 & 0xffffff00;
  local_74 = 0xffffffff00000000;
  local_68 = 0;
  if ((*(byte *)(local_60 + 0x68) & 0x80) != 0) {
    local_78 = CONCAT31((int3)uVar1,0x1c);
  }
  local_80 = local_b0 + 0x198;
  local_a0 = local_b0 + 0x70;
  uVar3 = FUN_14475683e(local_80,local_a0,local_60 + 8,&local_78);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  FUN_14946810c(param_1 + 0x30);
  local_a8 = (longlong *)(param_1 + 0x80);
  uVar1 = *(uint *)(lVar8 + 0x18);
  iVar2 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar2 + uVar1;
  if ((uint)(*(int *)(param_1 + 0x8c) - iVar2) < uVar1) {
    FUN_149483f4e(local_a8);
  }
  memset((void *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x80)),0,
         (longlong)(int)uVar1 << 4);
  uVar1 = *(uint *)(lVar8 + 0x18);
  iVar2 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar2 + uVar1;
  if ((uint)(*(int *)(param_1 + 0x9c) - iVar2) < uVar1) {
    FUN_149483fd4((longlong *)(param_1 + 0x90));
  }
  memset((void *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x90)),0,
         (longlong)(int)uVar1 << 4);
  if (0 < *(int *)(lVar8 + 0x18)) {
    local_88 = local_b0 + 0x188;
    lVar5 = *(longlong *)(param_1 + 0xa0);
    lVar9 = 0;
    local_98 = lVar8;
    do {
      lVar4 = local_98;
      lVar8 = *local_a8;
      lVar7 = lVar9 * 0x10;
      uVar1 = *(uint *)(lVar5 + 8 + lVar7);
      iVar2 = *(int *)(lVar8 + 8 + lVar7);
      *(uint *)(lVar8 + 8 + lVar7) = uVar1 + iVar2;
      if ((uint)(*(int *)(lVar8 + 0xc + lVar7) - iVar2) < uVar1) {
        FUN_1471a5e98((longlong *)(lVar8 + lVar7));
      }
      memset((void *)((longlong)iVar2 * 8 + *(longlong *)(lVar8 + lVar7)),0,
             (longlong)(int)uVar1 << 3);
      lVar8 = *(longlong *)(param_1 + 0x90);
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 8 + lVar7);
      iVar2 = *(int *)(lVar8 + 8 + lVar7);
      *(uint *)(lVar8 + 8 + lVar7) = uVar1 + iVar2;
      if ((uint)(*(int *)(lVar8 + 0xc + lVar7) - iVar2) < uVar1) {
        FUN_1471b0eda((longlong *)(lVar8 + lVar7));
      }
      memset((void *)((longlong)iVar2 * 8 + *(longlong *)(lVar8 + lVar7)),0,
             (longlong)(int)uVar1 << 3);
      lVar5 = *(longlong *)(param_1 + 0xa0);
      local_90 = lVar9;
      if (0 < *(int *)(lVar5 + 8 + lVar7)) {
        uVar1 = *(uint *)(*(longlong *)(lVar4 + 0x10) + 0x40 + lVar9 * 0xf8);
        lVar9 = 8;
        lVar8 = 0;
        do {
          lVar5 = *(longlong *)(lVar5 + lVar7);
          local_78 = *(int *)(lVar5 + lVar9) / (int)uVar1;
          local_49 = 0;
          local_58 = L"AttributeBuffer";
          local_68 = 0;
          if (DAT_14ca84e48 <= local_78) {
            local_78 = DAT_14ca84e48;
          }
          local_78 = local_78 + (local_78 == 0);
          uVar6 = DAT_14ca84e48;
          if (uVar1 < DAT_14ca84e48) {
            uVar6 = uVar1;
          }
          local_74 = CONCAT44(0x10109,uVar6 + (uVar6 == 0));
          local_b8 = &local_49;
          lVar4 = FUN_144738de6(local_88,local_a0,&local_58,&local_78);
          uVar6 = local_78 >> 8;
          local_78 = local_78 & 0xffffff00;
          local_74 = 0xffffffff00000000;
          local_68 = 0;
          if ((*(byte *)(lVar4 + 0x68) & 0x80) != 0) {
            local_78 = CONCAT31((int3)uVar6,0x1c);
          }
          local_60 = lVar4;
          uVar3 = FUN_14475683e(local_80,local_a0,lVar4 + 8,&local_78);
          *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + lVar7) + lVar8 * 8) = lVar4;
          *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + lVar7) + lVar8 * 8) = uVar3;
          local_b8 = (undefined1 *)((ulonglong)local_b8 & 0xffffffffffffff00);
          FUN_1447759b4(local_b0,lVar4,*(undefined8 *)(lVar5 + -8 + lVar9),
                        (longlong)*(int *)(lVar5 + lVar9));
          lVar8 = lVar8 + 1;
          lVar5 = *(longlong *)(param_1 + 0xa0);
          lVar9 = lVar9 + 0x10;
        } while (lVar8 < *(int *)(lVar5 + 8 + lVar7));
      }
      lVar9 = local_90 + 1;
    } while (lVar9 < *(int *)(local_98 + 0x18));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946ac48 FUN_14946ac48 body=431 status=ok
// SIG undefined FUN_14946ac48(void)

void FUN_14946ac48(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  char cVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong local_78;
  longlong local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_7c = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  local_78 = *(longlong *)
              (**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)local_7c * 8);
  local_70 = param_1;
  FUN_14946adf8(&local_68,*(undefined8 *)(param_2 + 2));
  if (0 < *param_2) {
    lVar2 = local_78 + 0x138;
    lVar3 = local_78 + 0x298;
    puVar1 = (undefined8 *)(local_70 + 0x10);
    uVar14 = 0;
    do {
      lVar9 = FUN_147d1cbd0(*(undefined8 *)(local_70 + 8),local_7c,uVar14 & 0xffffffff,0);
      lVar10 = *(longlong *)(local_78 + 0x2a0);
      if (*(longlong *)(local_78 + 0x2a0) == 0) {
        lVar10 = lVar2;
      }
      cVar7 = FUN_14793dad4(lVar3);
      if (cVar7 != '\0') {
        local_58 = *puVar1;
        local_50 = 0;
        lVar10 = FUN_1433f2764(lVar3);
      }
      lVar6 = *(longlong *)(lVar10 + 0x18);
      iVar8 = FUN_144b26f16();
      if (iVar8 == 1) {
        lVar12 = *(longlong *)(lVar10 + 0x60);
      }
      else {
        lVar12 = 0;
      }
      uVar11 = local_68;
      if (lVar12 == 0) {
        uVar11 = 0;
      }
      uVar13 = local_68;
      if (iVar8 == 1) {
        uVar13 = uVar11;
      }
      if (lVar6 == 0) {
        uVar13 = 0;
      }
      if (lVar9 == 0) {
        uVar13 = 0;
      }
      cVar7 = *(char *)(lVar10 + 0x28);
      cVar5 = *(char *)(lVar10 + 0x29);
      puVar4 = (uint *)(*(longlong *)(param_2 + 4) + uVar14 * 4);
      *puVar4 = *puVar4 | uVar13;
      uVar11 = 0;
      if (iVar8 == 1) {
        uVar11 = local_64;
      }
      puVar4 = (uint *)(*(longlong *)(param_2 + 4) + uVar14 * 4);
      *puVar4 = *puVar4 | uVar11;
      uVar11 = 0;
      if (cVar7 != '\0') {
        uVar11 = local_60;
      }
      puVar4 = (uint *)(*(longlong *)(param_2 + 4) + uVar14 * 4);
      *puVar4 = *puVar4 | uVar11;
      uVar11 = 0;
      if (cVar5 != '\0') {
        uVar11 = local_5c;
      }
      puVar4 = (uint *)(*(longlong *)(param_2 + 4) + uVar14 * 4);
      *puVar4 = *puVar4 | uVar11;
      uVar14 = uVar14 + 1;
    } while ((longlong)uVar14 < (longlong)*param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946adf8 FUN_14946adf8 body=1115 status=ok
// SIG undefined FUN_14946adf8(void)

undefined8 * FUN_14946adf8(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1bd08) && (FUN_144b3d300(&DAT_14cc1bd08), DAT_14cc1bd08 == -1)) {
    FUN_140056680(&DAT_14cc1bcf8,L"ENABLE_DEFORMER_BONES");
    atexit((_func_5014 *)&LAB_144526e00);
    _Init_thread_footer(&DAT_14cc1bd08);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1bd10) && (FUN_144b3d300(&DAT_14cc1bd10), DAT_14cc1bd10 == -1)) {
    puVar3 = DAT_14cc1bcf8;
    if (DAT_14cc1bd00 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1bd00 + -1;
    if (DAT_14cc1bd00 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1bd0c = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1bd10);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1bcf8,DAT_14cc1bd0c,1);
  *(undefined4 *)param_1 = uVar2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1bd28) && (FUN_144b3d300(&DAT_14cc1bd28), DAT_14cc1bd28 == -1)) {
    FUN_140056680(&DAT_14cc1bd18,L"GPUSKIN_UNLIMITED_BONE_INFLUENCE");
    atexit((_func_5014 *)&LAB_144526e11);
    _Init_thread_footer(&DAT_14cc1bd28);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1bd30) && (FUN_144b3d300(&DAT_14cc1bd30), DAT_14cc1bd30 == -1)) {
    puVar3 = DAT_14cc1bd18;
    if (DAT_14cc1bd20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1bd20 + -1;
    if (DAT_14cc1bd20 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1bd2c = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1bd30);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1bd18,DAT_14cc1bd2c,1);
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1bd48) && (FUN_144b3d300(&DAT_14cc1bd48), DAT_14cc1bd48 == -1)) {
    FUN_140056680(&DAT_14cc1bd38,L"GPUSKIN_BONE_INDEX_UINT16");
    atexit((_func_5014 *)&LAB_144526e22);
    _Init_thread_footer(&DAT_14cc1bd48);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1bd50) && (FUN_144b3d300(&DAT_14cc1bd50), DAT_14cc1bd50 == -1)) {
    puVar3 = DAT_14cc1bd38;
    if (DAT_14cc1bd40 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1bd40 + -1;
    if (DAT_14cc1bd40 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1bd4c = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1bd50);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1bd38,DAT_14cc1bd4c,1);
  *(undefined4 *)(param_1 + 1) = uVar2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1bd68) && (FUN_144b3d300(&DAT_14cc1bd68), DAT_14cc1bd68 == -1)) {
    FUN_140056680(&DAT_14cc1bd58,L"GPUSKIN_BONE_WEIGHTS_UINT16");
    atexit((_func_5014 *)&LAB_144526e33);
    _Init_thread_footer(&DAT_14cc1bd68);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1bd70) && (FUN_144b3d300(&DAT_14cc1bd70), DAT_14cc1bd70 == -1)) {
    puVar3 = DAT_14cc1bd58;
    if (DAT_14cc1bd60 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1bd60 + -1;
    if (DAT_14cc1bd60 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1bd6c = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1bd70);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1bd58,DAT_14cc1bd6c,1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  return param_1;
}



// FUNCTION 14946b254 FUN_14946b254 body=589 status=ok
// SIG undefined FUN_14946b254(void)

void FUN_14946b254(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined1 auStack_b8 [44];
  int local_8c;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_8c = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  if (0 < *(int *)(param_2 + 4)) {
    local_68 = *(longlong *)(DAT_14ca8c040 + 0x18);
    local_70 = *(longlong *)
                (**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)local_8c * 8);
    local_78 = local_70 + 0x138;
    local_80 = local_70 + 0x298;
    local_88 = (undefined8 *)(param_1 + 0x10);
    uVar10 = 0;
    local_60 = param_2;
    do {
      lVar9 = local_70;
      iVar1 = *(int *)(local_60 + 0x10);
      lVar8 = *(longlong *)(local_60 + 0x18);
      iVar2 = *(int *)(local_60 + 0x14);
      lVar11 = uVar10 * 0xf8 + *(longlong *)(local_70 + 0x10);
      lVar5 = FUN_147d1cbd0(*(undefined8 *)(param_1 + 8),local_8c,uVar10 & 0xffffffff,0);
      lVar6 = *(longlong *)(lVar9 + 0x2a0);
      if (*(longlong *)(lVar9 + 0x2a0) == 0) {
        lVar6 = local_78;
      }
      cVar3 = FUN_14793dad4(local_80,local_88);
      if (cVar3 != '\0') {
        local_58 = *local_88;
        local_50 = 0;
        lVar6 = FUN_1433f2764(local_80,&local_58);
      }
      lVar9 = *(longlong *)(lVar6 + 0x18);
      iVar4 = FUN_144b26f16(lVar6);
      if (iVar4 == 1) {
        lVar7 = *(longlong *)(lVar6 + 0x60);
      }
      else {
        lVar7 = 0;
      }
      puVar12 = (undefined4 *)(iVar1 + lVar8 + (longlong)iVar2 * (longlong)(int)uVar10);
      *puVar12 = *(undefined4 *)(lVar11 + 0x48);
      puVar12[1] = *(undefined4 *)(lVar11 + 0x10);
      iVar1 = *(int *)(lVar6 + 0x24);
      puVar12[2] = iVar1;
      puVar12[3] = iVar1 * *(int *)(lVar11 + 0x10) *
                   ((uint)*(byte *)(lVar6 + 0x28) + (uint)*(byte *)(lVar6 + 0x29) + 2) >> 2;
      puVar12[4] = ((uint)*(byte *)(lVar6 + 0x28) + (uint)*(byte *)(lVar6 + 0x29) + 2) *
                   *(int *)(lVar6 + 0x24);
      if (lVar5 == 0) {
        lVar5 = local_68;
      }
      puVar12[5] = *(ushort *)(lVar6 + 0x28) + 0x101;
      if (lVar9 == 0) {
        lVar9 = local_68;
      }
      *(longlong *)(puVar12 + 6) = lVar5;
      if (lVar7 == 0) {
        lVar7 = local_68;
      }
      *(longlong *)(puVar12 + 8) = lVar9;
      *(longlong *)(puVar12 + 10) = lVar7;
      if ((*(int *)(param_1 + 0x68) < 1) ||
         (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar10 * 8), lVar8 == 0)) {
        lVar8 = *(longlong *)(param_1 + 0xb0);
      }
      *(longlong *)(puVar12 + 0xc) = lVar8;
      if (0 < *(int *)(param_1 + 0x78)) {
        lVar8 = 0;
        do {
          *(undefined8 *)
           ((longlong)puVar12 + (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + lVar8 * 4)) =
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x90) + uVar10 * 0x10) + lVar8 * 8);
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)(param_1 + 0x78));
      }
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)*(int *)(local_60 + 4));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946b4aa FUN_14946b4aa body=230 status=ok
// SIG undefined FUN_14946b4aa(void)

longlong FUN_14946b4aa(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [48];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a787a6();
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = *param_4;
  *(undefined8 *)(param_1 + 0x20) = param_4[1];
  uVar1 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar2 = *(undefined4 *)(param_4 + 3);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x1c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_144a787a6(param_1 + 0x38,param_4 + 4);
  FUN_1494947ba(param_1 + 0x18,local_70);
  FUN_140e6511c(local_60,local_70);
  FUN_1494e817e(param_1 + 0x48,local_60);
  FUN_144a787a6(param_1 + 0x58,param_2);
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_78,puVar4,1);
  *(undefined8 *)(param_1 + 0x68) = local_78;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946b592 FUN_14946b592 body=291 status=ok
// SIG undefined FUN_14946b592(void)

void FUN_14946b592(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446e0b6e();
  local_58 = 0x93ede1aa;
  uStack_54 = 0x10ca7375;
  uStack_50 = 0x4df98a28;
  uStack_4c = 0x49b157a0;
  iVar2 = FUN_1448a256a(param_1);
  if ((iVar2 < 10) && (iVar2 = *(int *)(param_1 + 0x30), (longlong)iVar2 != 0)) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar5 + 0x70 + lVar4) != 0) {
        FUN_1400337aa();
      }
      lVar4 = lVar4 + 0x78;
    } while ((longlong)iVar2 * 0x78 - lVar4 != 0);
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      lVar5 = (longlong)*(int *)(param_1 + 0x30) * 0x78;
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x48);
      do {
        if (plVar3[5] != 0) {
          FUN_1494e7f6c(plVar3[5],&local_68);
          if (plVar3 != &local_68) {
            FUN_1401f9f5c(plVar3);
            lVar1 = lStack_60;
            lVar4 = local_68;
            if ((local_68 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(local_68);
            }
            *plVar3 = lVar4;
            plVar3[1] = lVar1;
            local_68 = 0;
            lStack_60 = 0;
          }
          FUN_1401f9f5c(&local_68);
          plVar3[5] = 0;
        }
        plVar3 = plVar3 + 0xf;
        lVar5 = lVar5 + -0x78;
      } while (lVar5 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946b6b6 FUN_14946b6b6 body=32 status=ok
// SIG undefined FUN_14946b6b6(void)

undefined8 FUN_14946b6b6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Animation Attributes");
  return param_2;
}



// FUNCTION 14946b6d6 FUN_14946b6d6 body=353 status=ok
// SIG undefined FUN_14946b6d6(void)

longlong * FUN_14946b6d6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar7 = 0x68;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x28);
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + -8 + lVar7) != 0) {
        puVar6 = *(undefined2 **)(lVar2 + -0x10 + lVar7);
      }
      uVar3 = *(undefined8 *)(lVar2 + lVar7);
      FUN_140002266(local_88,L"Read%s",puVar6);
      FUN_14946b838(&local_78,uVar3,local_88,1);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149482fea(param_2,iVar1);
      }
      lVar2 = *param_2;
      lVar4 = (longlong)iVar1 * 0x30;
      *(undefined8 *)(lVar2 + lVar4) = local_78;
      *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
      *(undefined8 *)(lVar2 + 8 + lVar4) = local_70;
      local_70 = 0;
      *(undefined4 *)(lVar2 + 0x10 + lVar4) = (undefined4)local_68;
      *(undefined4 *)(lVar2 + 0x14 + lVar4) = local_68._4_4_;
      local_68 = 0;
      *(undefined8 *)(lVar2 + 0x18 + lVar4) = 0;
      *(undefined8 *)(lVar2 + 0x18 + lVar4) = local_60;
      local_60 = 0;
      *(undefined4 *)(lVar2 + 0x20 + lVar4) = (undefined4)local_58;
      *(undefined4 *)(lVar2 + 0x24 + lVar4) = local_58._4_4_;
      local_58 = 0;
      *(undefined1 *)(lVar2 + 0x2c + lVar4) = local_4c;
      *(undefined4 *)(lVar2 + 0x28 + lVar4) = local_50;
      FUN_14946649a(&local_78);
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0x78;
    } while (lVar5 < *(int *)(param_1 + 0x30));
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946b838 FUN_14946b838 body=141 status=ok
// SIG undefined FUN_14946b838(void)

undefined8 *
FUN_14946b838(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_2;
  param_1[1] = 0;
  iVar1 = (int)param_3[1];
  _Src = (void *)*param_3;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2c) = param_4;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14946b8c6 FUN_14946b8c6 body=49 status=ok
// SIG undefined FUN_14946b8c6(void)

longlong * FUN_14946b8c6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a74fb4();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14946b8f8 FUN_14946b8f8 body=174 status=ok
// SIG undefined FUN_14946b8f8(void)

void FUN_14946b8f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [32];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_140f4f540();
  uVar2 = FUN_144a64e42();
  FUN_14949035a(uVar1,local_60,uVar2);
  FUN_140e6511c(local_50,local_60);
  FUN_140056680(local_70,L"EmptyName");
  FUN_14946b9a8(param_1,local_70,0,local_50);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946b9a8 FUN_14946b9a8 body=141 status=ok
// SIG undefined FUN_14946b9a8(void)

undefined8 FUN_14946b9a8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14946caea(param_1 + 0x28);
  FUN_14946cb26(param_1,local_48,param_2);
  FUN_14946b4aa(uVar1,local_48,param_3,param_4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946ba36 FUN_14946ba36 body=185 status=ok
// SIG undefined FUN_14946ba36(void)

void FUN_14946ba36(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x30,param_1 + 0x38);
  *puVar1 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bcfe220;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = FUN_1494924a4;
  puVar1 = (undefined8 *)FUN_144a72ab6(0x30,param_1 + 0x48);
  *puVar1 = &PTR_LAB_14bcfe300;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bcfe290;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_2);
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[4] = FUN_1494927fe;
  return;
}



// FUNCTION 14946baf0 FUN_14946baf0 body=208 status=ok
// SIG undefined FUN_14946baf0(void)

void FUN_14946baf0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar4 = 0x60;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x28);
      uVar1 = FUN_149466e4e(param_2);
      puVar3 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + lVar4) != 0) {
        puVar3 = *(undefined2 **)(lVar2 + -8 + lVar4);
      }
      FUN_140002266(local_58,L"Read%s",puVar3);
      uVar1 = FUN_149459122(uVar1,local_58);
      lVar2 = FUN_149466e92(lVar4 + lVar2 + -0x48);
      FUN_1494592f4(uVar1,*(undefined8 *)(lVar2 + 0x18));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x78;
    } while (lVar5 < *(int *)(param_1 + 0x30));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946bbc2 FUN_14946bbc2 body=398 status=ok
// SIG undefined FUN_14946bbc2(void)

void FUN_14946bbc2(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = 0;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_88 = param_3;
  local_80 = param_2;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar7 = 0x60;
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x28);
      piVar1 = (int *)(lVar3 + lVar7);
      lVar4 = FUN_149466e92(piVar1 + -0x12);
      puVar6 = &DAT_149dfb77a;
      if (*piVar1 != 0) {
        puVar6 = *(undefined2 **)(lVar3 + -8 + lVar7);
      }
      FUN_145929ff4(local_68,puVar6,lVar4 + 0x18,&local_78);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x78;
    } while (lVar8 < *(int *)(param_1 + 0x30));
  }
  uVar5 = FUN_140b494da(local_68,0,L"UAnimAttributeDataInterface");
  iVar2 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
    FUN_1457752be(param_4,iVar2);
  }
  *(undefined8 *)(*param_4 + (longlong)iVar2 * 8) = uVar5;
  lVar7 = (longlong)(int)(uint)uStack_70;
  if (lVar7 != 0) {
    iVar2 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar2 + (uint)uStack_70;
    if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar2) < (uint)uStack_70) {
      FUN_1457752be(param_4,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *param_4),local_78,lVar7 << 3);
  }
  FUN_145900f28(local_88,local_80,uVar5,0);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946bd52 FUN_14946bd52 body=1352 status=ok
// SIG undefined FUN_14946bd52(void)

void FUN_14946bd52(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined2 *local_e0;
  undefined2 *local_d8;
  undefined8 *local_d0;
  void **local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  int local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined2 *local_80;
  int local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar9 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x28);
      lVar6 = lVar9 * 0x78 + 0x18 + lVar7;
      lVar2 = FUN_149466e92(lVar6);
      local_a8 = 0;
      FUN_149458322(*(undefined8 *)(lVar2 + 0x18),&local_80,&local_a8);
      lVar2 = FUN_149466e92(lVar6);
      if (1 < local_78) {
        lVar7 = lVar7 + lVar9 * 0x78;
        if (**(char **)(lVar2 + 0x18) == '\x04') {
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_70 = (void *)0x0;
          local_68 = *(int *)(lVar7 + 0x60);
          lVar2 = (longlong)local_68;
          if (lVar2 == 0) {
            local_64 = 0;
          }
          else {
            local_d0 = *(undefined8 **)(lVar7 + 0x58);
            FUN_1446dd670(&local_70,local_68,0);
            memcpy(local_70,local_d0,lVar2 * 2);
          }
          local_c8 = &local_70;
          local_c0 = local_60;
          FUN_141469cae(&local_b8,&local_c8);
          lVar2 = FUN_149466e92(lVar6);
          FUN_144526244(&local_a8,param_3,*(undefined8 *)(lVar2 + 0x18),&local_b8);
          FUN_1447a1747(local_b8,local_b0);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          local_d0 = param_3;
          if (local_70 != (void *)0x0) {
            FUN_1400020a8();
          }
          lVar2 = local_a8;
          lVar6 = (longlong)(int)uStack_a0;
          if (lVar6 != 0) {
            lVar8 = 0;
            do {
              iVar3 = *(int *)(lVar2 + 8 + lVar8);
              iVar1 = iVar3 + -1;
              if (iVar3 == 0) {
                iVar1 = 0;
              }
              FUN_1400020e8(param_2,*(undefined8 *)(lVar2 + lVar8),iVar1);
              lVar8 = lVar8 + 0x10;
            } while (lVar6 << 4 != lVar8);
          }
          param_3 = local_d0;
          local_e8 = &DAT_149dfb77a;
          if (*(int *)(local_d0 + 1) != 0) {
            local_e8 = (undefined2 *)*local_d0;
          }
          puVar5 = &DAT_149dfb77a;
          if (*(int *)(lVar7 + 0x60) != 0) {
            puVar5 = *(undefined2 **)(lVar7 + 0x58);
          }
          puVar4 = &DAT_149dfb77a;
          if (local_78 != 0) {
            puVar4 = local_80;
          }
          FUN_140002266(&local_b8,L"%s Read%s_%s()\n",puVar4,puVar5);
          iVar3 = local_b0 + -1;
          if (local_b0 == 0) {
            iVar3 = 0;
          }
          FUN_1400020e8(param_2,local_b8,iVar3);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          FUN_140002266(&local_b8,&DAT_14aa8448a);
          iVar3 = local_b0 + -1;
          if (local_b0 == 0) {
            iVar3 = 0;
          }
          FUN_1400020e8(param_2,local_b8,iVar3);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          puVar5 = &DAT_149dfb77a;
          if (*(int *)(lVar7 + 0x60) != 0) {
            puVar5 = *(undefined2 **)(lVar7 + 0x58);
          }
          puVar4 = &DAT_149dfb77a;
          if (local_78 != 0) {
            puVar4 = local_80;
          }
          FUN_140002266(&local_b8,L"\t%s %s;\n",puVar4,puVar5);
          iVar3 = local_b0 + -1;
          if (local_b0 == 0) {
            iVar3 = 0;
          }
          FUN_1400020e8(param_2,local_b8,iVar3);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          if ((longlong)(int)uStack_90 != 0) {
            lVar6 = (longlong)(int)uStack_90 << 4;
            lVar2 = local_98;
            do {
              FUN_140b1283a(&local_b8,&DAT_149e01e02,lVar2);
              iVar3 = local_b0 + -1;
              if (local_b0 == 0) {
                iVar3 = 0;
              }
              FUN_1400020e8(param_2,local_b8,iVar3);
              if (local_b8 != 0) {
                FUN_1400020a8();
              }
              lVar2 = lVar2 + 0x10;
              lVar6 = lVar6 + -0x10;
            } while (lVar6 != 0);
          }
          puVar5 = &DAT_149dfb77a;
          if (*(int *)(lVar7 + 0x60) != 0) {
            puVar5 = *(undefined2 **)(lVar7 + 0x58);
          }
          FUN_140002266(&local_b8,L"\treturn %s;\n",puVar5);
          iVar3 = local_b0 + -1;
          if (local_b0 == 0) {
            iVar3 = 0;
          }
          FUN_1400020e8(param_2,local_b8,iVar3);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          FUN_140002266(&local_b8,&DAT_14a476686);
          iVar3 = local_b0 + -1;
          if (local_b0 == 0) {
            iVar3 = 0;
          }
          FUN_1400020e8(param_2,local_b8,iVar3);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
        }
        else {
          local_e8 = &DAT_149dfb77a;
          if (*(int *)(lVar7 + 0x60) != 0) {
            local_e8 = *(undefined2 **)(lVar7 + 0x58);
          }
          puVar5 = &DAT_149dfb77a;
          if (*(int *)(param_3 + 1) != 0) {
            puVar5 = (undefined2 *)*param_3;
          }
          FUN_140002266(&local_a8,L"%s %s_%s;\n",local_80,puVar5);
          iVar3 = (int)uStack_a0 + -1;
          if ((int)uStack_a0 == 0) {
            iVar3 = 0;
          }
          FUN_1400020e8(param_2,local_a8,iVar3);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
          local_d8 = &DAT_149dfb77a;
          if (*(int *)(lVar7 + 0x60) != 0) {
            local_d8 = *(undefined2 **)(lVar7 + 0x58);
          }
          local_e8 = &DAT_149dfb77a;
          if (*(int *)(param_3 + 1) != 0) {
            local_e8 = (undefined2 *)*param_3;
          }
          puVar5 = &DAT_149dfb77a;
          if (local_78 != 0) {
            puVar5 = local_80;
          }
          local_e0 = local_e8;
          FUN_140002266(&local_a8,L"%s Read%s_%s()\n{\n\treturn %s_%s;\n}\n",puVar5);
          iVar3 = (int)uStack_a0 + -1;
          if ((int)uStack_a0 == 0) {
            iVar3 = 0;
          }
          FUN_1400020e8(param_2,local_a8,iVar3);
        }
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_80 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x30));
  }
  if ((local_60[0] ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946c29c FUN_14946c29c body=740 status=ok
// SIG undefined FUN_14946c29c(void)

/* WARNING: Removing unreachable block (ram,0x00014946c448) */

void FUN_14946c29c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  int local_d0;
  longlong local_c8;
  uint local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x28);
    lVar8 = (longlong)*(int *)(param_1 + 0x30) * 0x78 + lVar7;
    do {
      lVar9 = lVar7 + 0x18;
      lVar6 = FUN_149466e92(lVar9);
      if (**(char **)(lVar6 + 0x18) == '\x04') {
        local_108 = lVar8;
        lVar8 = FUN_149466e92(lVar9);
        FUN_149458d9c(*(undefined8 *)(lVar8 + 0x18),&local_c8);
        lVar8 = FUN_149466e92(lVar9);
        uVar5 = local_c0;
        lVar9 = (longlong)(int)local_c0;
        local_c0 = local_c0 + 1;
        if (local_bc < local_c0) {
          FUN_14945b542(&local_c8,uVar5);
        }
        lVar6 = local_c8;
        *(undefined8 *)(local_c8 + lVar9 * 8) = *(undefined8 *)(lVar8 + 0x18);
        if ((longlong)(int)local_c0 != 0) {
          lVar8 = (longlong)(int)local_c0 << 3;
          lVar9 = 0;
          local_100 = lVar8;
          do {
            local_b8 = 0;
            FUN_149458322(*(undefined8 *)(lVar6 + lVar9),&local_d8,&local_b8);
            iVar4 = local_d0 + -1;
            puVar2 = local_d8;
            if (local_d0 == 0) {
              iVar4 = 0;
              puVar2 = &DAT_149dfb77a;
            }
            uVar3 = FUN_144a49b4a(iVar4,puVar2);
            iVar4 = FUN_1456cf568(param_2,uVar3,&local_d8);
            if (iVar4 == -1) {
              local_98 = 0;
              uStack_80 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_a8 = 0;
              uStack_a0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              uStack_90 = 0x8000000000;
              local_88 = 0xffffffff;
              FUN_1494584c4(*(undefined8 *)(lVar6 + lVar9),local_f8,&local_b8,0);
              FUN_144a882a8(&local_e8,local_f8,&DAT_14bcfe0f0);
              lVar8 = param_3[1];
              uVar5 = (int)lVar8 + 1;
              *(uint *)(param_3 + 1) = uVar5;
              if (*(uint *)((longlong)param_3 + 0xc) < uVar5) {
                FUN_1447a1bd6(param_3);
              }
              lVar1 = *param_3;
              lVar8 = (longlong)(int)lVar8 * 0x10;
              *(undefined8 *)(lVar1 + lVar8) = 0;
              *(undefined8 *)(lVar1 + lVar8) = local_e8;
              *(undefined4 *)(lVar1 + 8 + lVar8) = (undefined4)local_e0;
              *(undefined4 *)(lVar1 + 0xc + lVar8) = local_e0._4_4_;
              local_e0 = 0;
              local_e8 = 0;
              if (local_f8[0] != 0) {
                FUN_1400020a8();
              }
              uStack_70 = uStack_70 & 0xffffffff00000000;
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              FUN_140105116(&local_b8);
              FUN_14482b35e(param_2,&local_b8,&local_d8);
              lVar8 = local_100;
            }
            if (local_d8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            lVar9 = lVar9 + 8;
          } while (lVar8 != lVar9);
        }
        lVar8 = local_108;
        if (local_c8 != 0) {
          FUN_1400020a8(local_c8);
        }
      }
      lVar7 = lVar7 + 0x78;
    } while (lVar7 != lVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946c584 FUN_14946c584 body=121 status=ok
// SIG undefined FUN_14946c584(void)

undefined8 FUN_14946c584(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_14946c5fd(DAT_14c951640);
  if (*param_2 != 0) {
    lVar4 = FUN_144a74fb4();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14946c5e3;
      if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar5 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          lVar5 = lVar1;
        }
        goto LAB_14946c5e3;
      }
    }
  }
  lVar5 = 0;
LAB_14946c5e3:
  FUN_14946c692(uVar3,lVar5,param_1 + 0x28);
  return uVar3;
}



// FUNCTION 14946c5fd FUN_14946c5fd body=148 status=ok
// SIG undefined FUN_14946c5fd(void)

undefined8 FUN_14946c5fd(undefined8 param_1)

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
  uVar1 = FUN_145ba4484();
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



// FUNCTION 14946c692 FUN_14946c692 body=1111 status=ok
// SIG undefined FUN_14946c692(void)

void FUN_14946c692(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_138 [32];
  void *local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x28) = param_2;
  if ((longlong)(int)param_3[1] != 0) {
    lVar14 = *param_3;
    lVar17 = (longlong)(int)param_3[1] * 0x78;
    do {
      FUN_14946cddc(&local_f8,lVar14);
      iVar13 = *(int *)(param_1 + 0x38);
      *(uint *)(param_1 + 0x38) = iVar13 + 1U;
      if (*(uint *)(param_1 + 0x3c) < iVar13 + 1U) {
        FUN_149484158((longlong *)(param_1 + 0x30),iVar13);
      }
      lVar7 = *(longlong *)(param_1 + 0x30);
      lVar10 = (longlong)iVar13 * 0xb0;
      *(undefined8 *)(lVar7 + 0x20 + lVar10) = local_d8;
      puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar10);
      *puVar1 = CONCAT44(uStack_e4,local_e8);
      puVar1[1] = uStack_e0;
      *(longlong *)(lVar7 + lVar10) = local_f8;
      ((longlong *)(lVar7 + lVar10))[1] = lStack_f0;
      *(undefined8 *)(lVar7 + 0x30 + lVar10) = local_c8;
      *(undefined8 *)(lVar7 + 0x40 + lVar10) = local_b8;
      local_b8 = 0;
      puVar2 = (undefined4 *)(lVar7 + 0x60 + lVar10);
      *puVar2 = local_98;
      puVar2[1] = uStack_94;
      puVar2[2] = uStack_90;
      puVar2[3] = uStack_8c;
      puVar2 = (undefined4 *)(lVar7 + 0x50 + lVar10);
      *puVar2 = local_a8;
      puVar2[1] = uStack_a4;
      puVar2[2] = uStack_a0;
      puVar2[3] = uStack_9c;
      if (*(longlong *)(lVar7 + 0x30 + lVar10) != 0) {
        local_c8 = 0;
      }
      lVar7 = lVar7 + lVar10;
      *(undefined8 *)(lVar7 + 0x70) = 0;
      *(undefined8 *)(lVar7 + 0x70) = local_88;
      local_88 = 0;
      *(undefined4 *)(lVar7 + 0x78) = (undefined4)local_80;
      *(undefined4 *)(lVar7 + 0x7c) = local_80._4_4_;
      local_80 = 0;
      *(undefined8 *)(lVar7 + 0x80) = local_78;
      *(undefined8 *)(lVar7 + 0x88) = 0;
      *(undefined8 *)(lVar7 + 0x88) = local_70;
      local_70 = 0;
      *(undefined4 *)(lVar7 + 0x90) = (undefined4)local_68;
      *(undefined4 *)(lVar7 + 0x94) = local_68._4_4_;
      local_68 = 0;
      *(undefined8 *)(lVar7 + 0x98) = 0;
      *(undefined8 *)(lVar7 + 0x98) = local_60;
      local_60 = 0;
      *(undefined4 *)(lVar7 + 0xa0) = (undefined4)local_58;
      *(undefined4 *)(lVar7 + 0xa4) = local_58._4_4_;
      local_58 = 0;
      FUN_14946d056(&local_f8);
      lVar14 = lVar14 + 0x78;
      lVar17 = lVar17 + -0x78;
    } while (lVar17 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar14 = (longlong)*(int *)(param_1 + 0x38) * 0xb0;
    plVar15 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
    do {
      if ((*(longlong *)(param_1 + 0x28) != 0) && (lVar17 = FUN_144a81888(), lVar17 != 0)) {
        if (*plVar15 == 0) {
          uVar4 = 0;
        }
        else {
          plVar8 = (longlong *)FUN_144a81888(*(undefined8 *)(param_1 + 0x28));
          uVar9 = (**(code **)(*plVar8 + 0x310))(plVar8);
          uVar4 = FUN_144a750a0(uVar9);
        }
        *(undefined4 *)(plVar15 + 1) = uVar4;
      }
      plVar15 = plVar15 + 0x16;
      lVar14 = lVar14 + -0xb0;
    } while (lVar14 != 0);
  }
  local_f8 = 0;
  lStack_f0 = 0;
  local_e8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (void *)0x0;
  uStack_110 = 0;
  lVar14 = param_3[1];
  if ((longlong)(int)lVar14 == 0) {
    uVar16 = 0;
    iVar13 = 0;
  }
  else {
    lVar17 = *param_3;
    lVar7 = 0;
    do {
      lVar10 = FUN_149466e92(lVar17 + 0x18 + lVar7);
      puVar11 = &DAT_149dfb77a;
      if (*(int *)(lVar17 + 0x60 + lVar7) != 0) {
        puVar11 = *(undefined2 **)(lVar17 + 0x58 + lVar7);
      }
      FUN_145929ff4(&local_f8,puVar11,lVar10 + 0x18,&local_118);
      lVar7 = lVar7 + 0x78;
    } while ((longlong)(int)lVar14 * 0x78 - lVar7 != 0);
    iVar13 = (uint)uStack_100;
    uVar16 = uStack_100._4_4_;
  }
  lVar14 = FUN_140b494da(&local_f8,0,L"UAnimAttributeDataInterface");
  uVar5 = iVar13 + 1;
  uStack_100._0_4_ = uVar5;
  if (uVar16 < uVar5) {
    FUN_1457752be(&local_108);
  }
  uVar16 = (uint)uStack_100;
  *(longlong *)(local_108 + (longlong)iVar13 * 8) = lVar14;
  lVar17 = (longlong)(int)(uint)uStack_110;
  if (lVar17 != 0) {
    lVar7 = (longlong)(int)(uint)uStack_100;
    uVar5 = (uint)uStack_100 + (uint)uStack_110;
    uVar6 = uStack_100._4_4_ - (uint)uStack_100;
    uStack_100._0_4_ = uVar5;
    if (uVar6 < (uint)uStack_110) {
      FUN_1457752be(&local_108,uVar16);
    }
    memcpy((void *)(lVar7 * 8 + local_108),local_118,lVar17 << 3);
  }
  lVar17 = local_108;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar7 = 0x14;
    lVar10 = 0x1c;
    lVar12 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x30);
      *(undefined4 *)(lVar3 + lVar10) = *(undefined4 *)(*(longlong *)(lVar14 + 0x50) + lVar7);
      iVar13 = *(int *)(param_1 + 0x44);
      *(int *)(lVar3 + 8 + lVar10) = iVar13;
      *(int *)(param_1 + 0x44) = iVar13 + *(int *)(lVar3 + 0x5c + lVar10);
      lVar12 = lVar12 + 1;
      lVar7 = lVar7 + 0x30;
      lVar10 = lVar10 + 0xb0;
    } while (lVar12 < *(int *)(param_1 + 0x38));
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar14 + 0x3c);
  lVar14 = (longlong)(int)(uint)uStack_100;
  if (lVar14 != 0) {
    lVar7 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar17 + lVar7);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar7 = lVar7 + 8;
    } while (lVar14 * 8 != lVar7);
  }
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946caea FUN_14946caea body=59 status=ok
// SIG undefined FUN_14946caea(void)

longlong FUN_14946caea(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1494840c8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x78 + *param_1;
  FUN_149484059(lVar2);
  return lVar2;
}



// FUNCTION 14946cb26 FUN_14946cb26 body=562 status=ok
// SIG undefined FUN_14946cb26(void)

longlong * FUN_14946cb26(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *_Src;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      iVar3 = *(int *)(lVar1 + 8 + lVar6);
      puVar5 = &DAT_149dfb77a;
      if (iVar3 != 0) {
        puVar5 = *(undefined2 **)(lVar1 + lVar6);
      }
      iVar4 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      uVar2 = FUN_144a49b4a(iVar4,puVar5);
      FUN_1467d5fec(&local_98,uVar2,lVar1 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x78;
    } while (lVar7 < *(int *)(param_1 + 0x30));
  }
  *param_2 = 0;
  iVar3 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_2 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    puVar5 = &DAT_149dfb77a;
    iVar3 = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar3,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar3 * 2);
    iVar3 = (int)param_2[1];
    if (iVar3 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar4,puVar5);
  iVar3 = FUN_144a7df4c(&local_98,uVar2,param_2);
  if (iVar3 != -1) {
    iVar3 = 0;
    do {
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(param_3 + 1) != 0) {
        puVar5 = (undefined2 *)*param_3;
      }
      FUN_140002266(&local_a8,L"%s_%d",puVar5,iVar3);
      if (&local_a8 == param_2) {
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_a8;
        local_a8 = 0;
        *(undefined4 *)(param_2 + 1) = local_a0;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_9c;
      }
      puVar5 = &DAT_149dfb77a;
      iVar4 = 0;
      if ((int)param_2[1] != 0) {
        puVar5 = (undefined2 *)*param_2;
        iVar4 = (int)param_2[1] + -1;
      }
      iVar3 = iVar3 + 1;
      uVar2 = FUN_144a49b4a(iVar4,puVar5);
      iVar4 = FUN_144a7df4c(&local_98,uVar2,param_2);
    } while (iVar4 != -1);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946cd5a FUN_14946cd5a body=128 status=ok
// SIG undefined FUN_14946cd5a(void)

void FUN_14946cd5a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x30) * 0x78;
    lVar1 = *(longlong *)(param_1 + 0x28) + 0x48;
    do {
      if (*(longlong *)(lVar1 + -0x30) == param_2) {
        FUN_14945f130(local_58,lVar1 + -0x30);
        FUN_1494e817e(lVar1,local_58);
      }
      lVar1 = lVar1 + 0x78;
      lVar2 = lVar2 + -0x78;
    } while (lVar2 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946cddc FUN_14946cddc body=632 status=ok
// SIG undefined FUN_14946cddc(void)

longlong * FUN_14946cddc(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [48];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  puVar12 = &DAT_149dfb77a;
  puVar11 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar11 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_88,puVar11,1);
  *param_1 = local_88;
  if (*(int *)(param_2 + 0xc) != 0) {
    puVar12 = (undefined2 *)param_2[0xb];
  }
  FUN_1446f470e(&local_88,puVar12,1);
  param_1[1] = local_88;
  param_1[2] = param_2[2];
  param_1[3] = 0;
  puVar1 = param_2 + 3;
  lVar8 = FUN_149466e92(puVar1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar8 + 0x20);
  uVar9 = FUN_140f4f540();
  FUN_140fc897e(uVar9,&local_c8,param_2[3]);
  lVar8 = param_1[6];
  uStack_80 = param_1[7];
  plVar10 = (longlong *)param_1[8];
  uStack_70 = param_1[9];
  local_68 = param_1[10];
  uStack_60 = param_1[0xb];
  local_58 = param_1[0xc];
  uStack_50 = param_1[0xd];
  lVar6 = local_58;
  lVar7 = uStack_50;
  lVar4 = local_68;
  lVar5 = uStack_60;
  local_78 = plVar10;
  plVar10 = local_78;
  lVar3 = uStack_70;
  local_88 = lVar8;
  lVar8 = local_88;
  lVar2 = uStack_80;
  param_1[0xc] = CONCAT44(uStack_94,local_98);
  param_1[0xd] = CONCAT44(uStack_8c,uStack_90);
  param_1[10] = CONCAT44(uStack_a4,local_a8);
  param_1[0xb] = CONCAT44(uStack_9c,uStack_a0);
  param_1[8] = CONCAT44(uStack_b4,local_b8);
  param_1[9] = CONCAT44(uStack_ac,uStack_b0);
  param_1[6] = CONCAT44(uStack_c4,local_c8);
  param_1[7] = CONCAT44(uStack_bc,uStack_c0);
  local_88._0_4_ = (undefined4)lVar8;
  local_88._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_78._0_4_ = SUB84(plVar10,0);
  local_78._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c8 = (undefined4)local_88;
  uStack_c4 = local_88._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_88 = lVar8;
  uStack_80 = lVar2;
  local_78 = plVar10;
  uStack_70 = lVar3;
  local_68 = lVar4;
  uStack_60 = lVar5;
  local_58 = lVar6;
  uStack_50 = lVar7;
  if (lVar8 != 0) {
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)&local_a8;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  FUN_140fc8a88(uVar9,&local_88,*puVar1);
  if (param_1 + 0xe == &local_88) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    param_1[0xe] = local_88;
    local_88 = 0;
    *(undefined4 *)(param_1 + 0xf) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_80._4_4_;
  }
  lVar8 = FUN_1494abd40(uVar9,param_2[3]);
  param_1[0x10] = lVar8;
  FUN_14945f130(local_f8,puVar1);
  FUN_1494e82f0(param_2 + 9,&local_88,local_f8);
  FUN_149467a2c(param_1 + 0x11,&local_88);
  FUN_145b26c5e(&local_88);
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946d056 FUN_14946d056 body=78 status=ok
// SIG undefined FUN_14946d056(void)

void FUN_14946d056(longlong param_1)

{
  longlong *plVar1;
  
  FUN_145b26c5e(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x00014946d099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14946d0a4 FUN_14946d0a4 body=696 status=ok
// SIG undefined FUN_14946d0a4(void)

longlong FUN_14946d0a4(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  uint local_c8;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  code *local_88;
  longlong *local_78 [2];
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = FUN_14001cc68(0x58,0x10);
  FUN_14946d35e(lVar3,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  FUN_140f4f540();
  if (0 < *(int *)(param_1 + 0x38)) {
    local_d8 = *(longlong *)(param_1 + 0x28) +
               (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x718) * 0x40 + 0x10a8;
    lVar13 = 0;
    do {
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar13 * 0xb0);
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x78 + lVar13 * 0xb0);
      if (0 < iVar7) {
        lVar4 = 0;
        do {
          uVar11 = (ulonglong)*(uint *)((longlong)puVar1 + 0x24) + lVar4;
          iVar8 = (int)uVar11;
          if ((-1 < iVar8) && (iVar8 < *(int *)(lVar3 + 0x20))) {
            lVar5 = puVar1[0xe];
            lVar12 = (uVar11 & 0xffffffff) * 8;
            *(int *)(*(longlong *)(lVar3 + 0x18) + lVar12) =
                 *(int *)(lVar5 + 4 + lVar4 * 8) + *(int *)((longlong)puVar1 + 0x1c);
            *(undefined4 *)(*(longlong *)(lVar3 + 0x18) + 4 + lVar12) =
                 *(undefined4 *)(lVar5 + lVar4 * 8);
            iVar7 = *(int *)(puVar1 + 0xf);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar7);
      }
      local_90 = *(undefined4 *)(puVar1 + 3);
      local_a0 = DAT_14cc1b318;
      local_98 = *puVar1;
      local_88 = (code *)puVar1[6];
      local_78[0] = (longlong *)0x0;
      if (local_88 != (code *)0x0) {
        puVar9 = puVar1 + 10;
        if ((undefined8 *)puVar1[8] != (undefined8 *)0x0) {
          puVar9 = (undefined8 *)puVar1[8];
        }
        (**(code **)*puVar9)(puVar9,local_78);
        if (local_88 != (code *)0x0) {
          lVar4 = puVar1[0x10];
          lVar5 = FUN_147937f22(local_d8,lVar4,&local_a0);
          pcVar2 = local_88;
          if (lVar5 == 0) {
            memcpy((void *)((longlong)*(int *)((longlong)puVar1 + 0x1c) + *(longlong *)(lVar3 + 8)),
                   (void *)puVar1[0x11],(ulonglong)*(uint *)(puVar1 + 0x12));
            iVar7 = *(int *)(puVar1 + 0xf);
            if ((0 < iVar7) && (iVar7 == *(int *)(puVar1 + 0x14))) {
              lVar4 = 0;
              lVar5 = 0;
              do {
                uVar11 = (ulonglong)*(uint *)((longlong)puVar1 + 0x24) + lVar5;
                iVar8 = (int)uVar11;
                if ((-1 < iVar8) && (iVar8 < *(int *)(lVar3 + 0x30))) {
                  FUN_1447a122a((uVar11 & 0xffffffff) * 0x10 + *(longlong *)(lVar3 + 0x28),
                                puVar1[0x13] + lVar4);
                  iVar7 = *(int *)(puVar1 + 0x14);
                }
                lVar5 = lVar5 + 1;
                lVar4 = lVar4 + 0x10;
              } while (lVar5 < iVar7);
            }
          }
          else {
            local_c8 = -*(int *)(lVar4 + 0x5c) &
                       (*(int *)(lVar4 + 0x58) + *(int *)(lVar4 + 0x5c)) - 1U;
            local_c0 = (longlong)*(int *)((longlong)puVar1 + 0x1c) + *(longlong *)(lVar3 + 8);
            local_b0 = (longlong)*(int *)((longlong)puVar1 + 0x24) * 0x10 +
                       *(longlong *)(lVar3 + 0x28);
            local_b8 = *(undefined4 *)(puVar1 + 4);
            local_a8 = *(undefined4 *)(puVar1 + 0xf);
            plVar10 = local_78[0];
            if (local_78[0] == (longlong *)0x0) {
              plVar10 = local_68;
            }
            local_d0 = lVar5;
            uVar6 = (**(code **)(*plVar10 + 8))();
            (*pcVar2)(uVar6,&local_d0,&local_c0);
          }
          if (local_88 != (code *)0x0) {
            plVar10 = local_78[0];
            if (local_78[0] == (longlong *)0x0) {
              plVar10 = local_68;
            }
            (**(code **)(*plVar10 + 0x10))();
          }
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x38));
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14946d35e FUN_14946d35e body=139 status=ok
// SIG undefined FUN_14946d35e(void)

undefined8 * FUN_14946d35e(undefined8 *param_1,int param_2,uint param_3)

{
  int iVar1;
  void *_Dst;
  
  *param_1 = &PTR_FUN_14bcee7d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(int *)(param_1 + 2) = param_2;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    FUN_1447403be(param_1 + 1);
    _Dst = (void *)param_1[1];
  }
  memset(_Dst,0,(longlong)param_2);
  iVar1 = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 4) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0x24) - iVar1) < param_3) {
    FUN_1494841ec(param_1 + 3);
  }
  FUN_14946d3ea(param_1 + 5,param_3);
  return param_1;
}



// FUNCTION 14946d3ea FUN_14946d3ea body=68 status=ok
// SIG undefined FUN_14946d3ea(void)

int FUN_14946d3ea(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_149482b64(param_1,iVar1);
  }
  FUN_149482b51((longlong)iVar1 * 0x10 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 14946d444 FUN_14946d444 body=604 status=ok
// SIG undefined FUN_14946d444(void)

void FUN_14946d444(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  uint local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_1 + 0x38;
  *(undefined4 *)(param_1 + 0x40) = 0;
  local_90 = param_2;
  if (*(int *)(param_1 + 0x44) < 0) {
    FUN_149484272(local_98,0);
  }
  local_a0 = param_1 + 0x48;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) < 0) {
    FUN_1471b0e7a(local_a0,0);
  }
  if ((0 < *(int *)(param_1 + 0x30)) && (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x20))) {
    local_80 = local_90 + 0x188;
    lVar1 = local_90 + 0x70;
    local_88 = local_90 + 0x198;
    lVar6 = 8;
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x28);
      local_78 = *(uint *)(*(longlong *)(param_1 + 0x18) + 4 + lVar7 * 8);
      uVar4 = *(int *)(lVar3 + lVar6) / (int)local_78;
      if ((int)uVar4 < 2) {
        uVar4 = 1;
      }
      local_49 = 0;
      local_58 = L"Optimus.AnimAttributeInnerBuffer";
      local_68 = 0;
      if (DAT_14ca84e48 <= local_78) {
        local_78 = DAT_14ca84e48;
      }
      local_78 = local_78 + (local_78 == 0);
      if (DAT_14ca84e48 <= uVar4) {
        uVar4 = DAT_14ca84e48;
      }
      local_74 = CONCAT44(0x10109,uVar4 + (uVar4 == 0));
      local_a8 = &local_49;
      uVar5 = FUN_144738de6(local_80,lVar1,&local_58,&local_78);
      iVar2 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
        FUN_1471a5e98(local_98,iVar2);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 8) = uVar5;
      local_60 = *(longlong *)
                  (*(longlong *)(param_1 + 0x38) + (longlong)(*(int *)(param_1 + 0x40) + -1) * 8);
      uVar4 = local_78 >> 8;
      local_78 = local_78 & 0xffffff00;
      local_74 = 0xffffffff00000000;
      local_68 = 0;
      if ((*(byte *)(local_60 + 0x68) & 0x80) != 0) {
        local_78 = CONCAT31((int3)uVar4,0x1c);
      }
      uVar5 = FUN_14475683e(local_88,lVar1,local_60 + 8,&local_78);
      iVar2 = *(int *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
        FUN_1471b0eda(local_a0,iVar2);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 8) = uVar5;
      local_a8 = (undefined1 *)((ulonglong)local_a8 & 0xffffffffffffff00);
      FUN_1447759b4(local_90,*(undefined8 *)
                              (*(longlong *)(param_1 + 0x38) +
                              (longlong)(*(int *)(param_1 + 0x40) + -1) * 8),
                    *(undefined8 *)(lVar3 + -8 + lVar6),(longlong)*(int *)(lVar3 + lVar6));
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < *(int *)(param_1 + 0x20));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946d6a2 FUN_14946d6a2 body=121 status=ok
// SIG undefined FUN_14946d6a2(void)

void FUN_14946d6a2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  void *_Dst;
  int iVar2;
  
  if (0 < *(int *)(param_2 + 4)) {
    iVar2 = 0;
    do {
      _Dst = (void *)((longlong)iVar2 * (longlong)*(int *)(param_2 + 0x14) +
                     (longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18));
      memcpy(_Dst,*(void **)(param_1 + 8),(longlong)*(int *)(param_2 + 0xc));
      if (0 < *(int *)(param_1 + 0x20)) {
        lVar1 = 0;
        do {
          *(undefined8 *)
           ((longlong)_Dst + (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar1 * 8)) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar1 * 8);
          lVar1 = lVar1 + 1;
        } while (lVar1 < *(int *)(param_1 + 0x20));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_2 + 4));
  }
  return;
}



// FUNCTION 14946d724 FUN_14946d724 body=32 status=ok
// SIG undefined FUN_14946d724(void)

undefined8 FUN_14946d724(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Cloth");
  return param_2;
}



// FUNCTION 14946d744 FUN_14946d744 body=1339 status=ok
// SIG undefined FUN_14946d744(void)

longlong * FUN_14946d744(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_68,"ClothToLocal",1);
  FUN_1400b22c2(local_78,"ReadClothToLocal");
  FUN_14946b838(&local_60,local_68,local_78,1);
  *(undefined4 *)(param_2 + 1) = 1;
  FUN_149482fea(param_2,0);
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = local_60;
  puVar2[1] = 0;
  puVar2[1] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar2 + 2) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar2 + 0x14) = local_50._4_4_;
  local_50 = 0;
  puVar2[3] = 0;
  puVar2[3] = local_48;
  local_48 = 0;
  *(undefined4 *)(puVar2 + 4) = (undefined4)local_40;
  *(undefined4 *)((longlong)puVar2 + 0x24) = local_40._4_4_;
  local_40 = 0;
  *(undefined1 *)((longlong)puVar2 + 0x2c) = local_34;
  *(undefined4 *)(puVar2 + 5) = local_38;
  FUN_14946649a(&local_60);
  FUN_1446ddc76(&local_80,"ClothWeight",1);
  FUN_1400b22c2(local_90,"ReadClothWeight");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_a0,"ReadNumVertices");
  local_120 = 1;
  local_128 = local_a0;
  FUN_149466350(&local_60,local_80,local_90,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar5) = local_60;
  *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar5) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x14 + lVar5) = local_50._4_4_;
  local_50 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = local_48;
  local_48 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5) = (undefined4)local_40;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = local_40._4_4_;
  local_40 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar5) = local_34;
  *(undefined4 *)(lVar3 + 0x28 + lVar5) = local_38;
  FUN_14946649a();
  FUN_1446ddc76(&local_a8,"ClothPosition",1);
  FUN_1400b22c2(local_b8,"ReadClothPosition");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_c8,"ReadNumVertices");
  local_120 = 1;
  local_128 = local_c8;
  FUN_149466350(&local_60,local_a8,local_b8,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar5) = local_60;
  *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar5) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x14 + lVar5) = local_50._4_4_;
  local_50 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = local_48;
  local_48 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5) = (undefined4)local_40;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = local_40._4_4_;
  local_40 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar5) = local_34;
  *(undefined4 *)(lVar3 + 0x28 + lVar5) = local_38;
  FUN_14946649a();
  FUN_1446ddc76(&local_d0,"ClothTangentX",1);
  FUN_1400b22c2(local_e0,"ReadClothTangentX");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_f0,"ReadNumVertices");
  local_120 = 1;
  local_128 = local_f0;
  FUN_149466350(&local_60,local_d0,local_e0,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar5) = local_60;
  *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar5) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x14 + lVar5) = local_50._4_4_;
  local_50 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = local_48;
  local_48 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5) = (undefined4)local_40;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = local_40._4_4_;
  local_40 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar5) = local_34;
  *(undefined4 *)(lVar3 + 0x28 + lVar5) = local_38;
  FUN_14946649a();
  FUN_1446ddc76(&local_f8,"ClothTangentZ",1);
  FUN_1400b22c2(local_108,"ReadClothTangentZ");
  uVar4 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_118,"ReadNumVertices");
  local_120 = 1;
  local_128 = local_118;
  FUN_149466350(&local_60,local_f8,local_108,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar5) = local_60;
  *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar5) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x14 + lVar5) = local_50._4_4_;
  local_50 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = local_48;
  local_48 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5) = (undefined4)local_40;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = local_40._4_4_;
  local_40 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar5) = local_34;
  *(undefined4 *)(lVar3 + 0x28 + lVar5) = local_38;
  FUN_14946649a();
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946dc80 FUN_14946dc80 body=49 status=ok
// SIG undefined FUN_14946dc80(void)

longlong * FUN_14946dc80(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a745da();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14946dcb2 FUN_14946dcb2 body=521 status=ok
// SIG undefined FUN_14946dcb2(void)

void FUN_14946dcb2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_38,L"ReadNumVertices");
  uVar1 = FUN_149459122(uVar1,local_38);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_48,L"ReadClothToLocal");
  uVar1 = FUN_149459122(uVar1,local_48);
  FUN_1494593ba(uVar1,3,4,4);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_58,L"ReadClothWeight");
  uVar1 = FUN_149459122(uVar1,local_58);
  uVar1 = FUN_1494593ba(uVar1,3,0,0);
  local_98 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_68,L"ReadClothPosition");
  uVar1 = FUN_149459122(uVar1,local_68);
  uVar1 = FUN_1494593ba(uVar1,3,3,0);
  local_98 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_78,L"ReadClothTangentX");
  uVar1 = FUN_149459122(uVar1,local_78);
  uVar1 = FUN_1494593ba(uVar1,3,3,0);
  local_98 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_88,L"ReadClothTangentZ");
  uVar1 = FUN_149459122(uVar1,local_88);
  uVar1 = FUN_1494593ba(uVar1,3,3,0);
  local_98 = 0;
  FUN_149459206(uVar1,2,0,0);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946dec4 FUN_14946dec4 body=43 status=ok
// SIG undefined FUN_14946dec4(void)

void FUN_14946dec4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceCloth.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 14946def0 FUN_14946def0 body=438 status=ok
// SIG undefined FUN_14946def0(void)

void FUN_14946def0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceCloth.ush",0,&local_d8,0);
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



// FUNCTION 14946e0a8 FUN_14946e0a8 body=122 status=ok
// SIG undefined FUN_14946e0a8(void)

longlong FUN_14946e0a8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_14946e122();
  if (*param_2 != 0) {
    lVar4 = FUN_144a745da();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14946e10a;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar5 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_14946e10a;
      }
    }
  }
  lVar5 = 0;
LAB_14946e10a:
  *(longlong *)(lVar3 + 0x28) = lVar5;
  return lVar3;
}



// FUNCTION 14946e122 FUN_14946e122 body=148 status=ok
// SIG undefined FUN_14946e122(void)

undefined8 FUN_14946e122(undefined8 param_1)

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
  uVar1 = FUN_145ba4658();
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



// FUNCTION 14946e1b8 FUN_14946e1b8 body=40 status=ok
// SIG undefined FUN_14946e1b8(void)

void FUN_14946e1b8(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x28,0x10);
  FUN_14946e1e0(uVar1,*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 14946e1e0 FUN_14946e1e0 body=219 status=ok
// SIG undefined FUN_14946e1e0(void)

undefined8 * FUN_14946e1e0(undefined8 *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_14bcef250;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x14) = DAT_14c846350;
  *(undefined4 *)((longlong)param_1 + 0x1c) = DAT_14c846358;
  *(undefined4 *)(param_1 + 4) = 0;
  if (param_2 != 0) {
    lVar4 = FUN_144b20ea4(param_2);
    if (lVar4 != 0) {
      param_1[1] = *(undefined8 *)(param_2 + 0x8a8);
      plVar5 = (longlong *)FUN_144b20ea4(param_2);
      iVar3 = (**(code **)(*plVar5 + 0x490))(plVar5);
      *(int *)(param_1 + 4) = iVar3 + 1;
      lVar4 = FUN_144a74fb4();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0xc78);
        dVar1 = *(double *)(param_2 + 0x290);
        dVar2 = *(double *)(param_2 + 0x288);
        *(float *)((longlong)param_1 + 0x14) = (float)*(double *)(param_2 + 0x280);
        *(float *)(param_1 + 3) = (float)dVar2;
        *(float *)((longlong)param_1 + 0x1c) = (float)dVar1;
      }
    }
  }
  return param_1;
}



// FUNCTION 14946e2bc FUN_14946e2bc body=65 status=ok
// SIG undefined FUN_14946e2bc(void)

undefined4 FUN_14946e2bc(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_2[1] == 0x70) && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
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



// FUNCTION 14946e2fe FUN_14946e2fe body=203 status=ok
// SIG undefined FUN_14946e2fe(void)

void FUN_14946e2fe(longlong param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_b0;
  uint local_9c;
  undefined1 local_98 [8];
  longlong local_90;
  longlong local_88;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  FUN_14946e3ca(&local_9c,*(undefined8 *)(param_2 + 2));
  if (0 < *param_2) {
    uVar4 = 0;
    do {
      local_b8 = *(undefined4 *)(param_1 + 0x20);
      local_b0 = 0;
      FUN_147d1ccc4(local_98,*(undefined8 *)(param_1 + 8),uVar2,uVar4 & 0xffffffff);
      uVar3 = 0;
      if (local_88 != 0) {
        uVar3 = local_9c;
      }
      if (local_90 == 0) {
        uVar3 = 0;
      }
      puVar1 = (uint *)(*(longlong *)(param_2 + 4) + uVar4 * 4);
      *puVar1 = *puVar1 | uVar3;
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946e3ca FUN_14946e3ca body=280 status=ok
// SIG undefined FUN_14946e3ca(void)

undefined4 * FUN_14946e3ca(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
  *param_1 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1bd88) && (FUN_144b3d300(&DAT_14cc1bd88), DAT_14cc1bd88 == -1)) {
    FUN_140056680(&DAT_14cc1bd78,L"ENABLE_DEFORMER_CLOTH");
    atexit((_func_5014 *)&LAB_144526e60);
    _Init_thread_footer(&DAT_14cc1bd88);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1bd90) && (FUN_144b3d300(&DAT_14cc1bd90), DAT_14cc1bd90 == -1)) {
    puVar3 = DAT_14cc1bd78;
    if (DAT_14cc1bd80 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1bd80 + -1;
    if (DAT_14cc1bd80 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1bd8c = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1bd90);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1bd78,DAT_14cc1bd8c,1);
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 14946e4e2 FUN_14946e4e2 body=472 status=ok
// SIG undefined FUN_14946e4e2(void)

void FUN_14946e4e2(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_e0;
  int local_d4;
  undefined8 *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined4 local_a8 [2];
  longlong local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  local_b0 = (ulonglong)*(int *)(param_2 + 4);
  if (0 < (longlong)local_b0) {
    local_c8 = *(longlong *)(DAT_14ca8c040 + 0x18);
    puVar8 = (undefined4 *)((longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18));
    local_b8 = (longlong)*(int *)(param_2 + 0x14);
    local_c0 = *(longlong *)
                (**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)local_d4 * 8);
    local_d0 = (undefined8 *)(param_1 + 0x14);
    lVar6 = 0x48;
    uVar5 = 0;
    do {
      lVar2 = *(longlong *)(local_c0 + 0x10);
      uVar9 = 0;
      if (0 < *(int *)(lVar2 + -0x18 + lVar6)) {
        uVar9 = *(uint *)(*(longlong *)(lVar2 + -0x20 + lVar6) + 8);
      }
      uVar1 = *(uint *)(lVar2 + lVar6);
      local_e8 = *(undefined4 *)(param_1 + 0x20);
      local_e0 = 0;
      FUN_147d1ccc4(local_a8,*(undefined8 *)(param_1 + 8),local_d4,uVar5 & 0xffffffff);
      *puVar8 = *(undefined4 *)(lVar2 + lVar6);
      puVar8[1] = local_a8[0];
      if (local_98 == 0 || local_a0 == 0) {
        uVar10 = 0;
        iVar4 = 0;
        puVar7 = &DAT_14c846350;
        lVar2 = local_c8;
        lVar3 = local_c8;
      }
      else {
        iVar4 = (uint)(uVar1 < uVar9) * 4 + 1;
        uVar10 = *(undefined4 *)(param_1 + 0x10);
        lVar2 = local_98;
        lVar3 = local_a0;
        puVar7 = local_d0;
      }
      puVar8[3] = uVar10;
      *(undefined8 *)(puVar8 + 4) = *puVar7;
      puVar8[6] = *(undefined4 *)(puVar7 + 1);
      puVar8[2] = iVar4;
      puVar8[8] = local_88;
      puVar8[9] = uStack_84;
      puVar8[10] = uStack_80;
      puVar8[0xb] = uStack_7c;
      *(undefined8 *)(puVar8 + 0xc) = local_78;
      *(undefined8 *)(puVar8 + 0xe) = uStack_70;
      *(undefined8 *)(puVar8 + 0x10) = local_68;
      *(undefined8 *)(puVar8 + 0x12) = uStack_60;
      *(undefined8 *)(puVar8 + 0x14) = local_58;
      *(undefined8 *)(puVar8 + 0x16) = uStack_50;
      *(longlong *)(puVar8 + 0x18) = lVar3;
      *(longlong *)(puVar8 + 0x1a) = lVar2;
      uVar5 = uVar5 + 1;
      puVar8 = (undefined4 *)((longlong)puVar8 + local_b8);
      lVar6 = lVar6 + 0xf8;
    } while (local_b0 != uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946e6c4 FUN_14946e6c4 body=32 status=ok
// SIG undefined FUN_14946e6c4(void)

undefined8 FUN_14946e6c4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Connectivity");
  return param_2;
}



// FUNCTION 14946e6e4 FUN_14946e6e4 body=673 status=ok
// SIG undefined FUN_14946e6e4(void)

longlong * FUN_14946e6e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 local_100;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_b0,"NumConnectedVertices",1);
  FUN_1400b22c2(local_c0,"ReadNumConnectedVertices");
  uVar3 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_d0,"ReadNumVertices");
  local_100 = 1;
  local_108 = local_d0;
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
  FUN_1446ddc76(&local_d8,"ConnectedVertex",1);
  FUN_1400b22c2(local_e8,"ReadConnectedVertex");
  local_78 = DAT_14cc1d7f0;
  FUN_1400b22c2(local_70,"ReadNumVertices");
  local_60 = DAT_14cc1d800;
  FUN_1400b22c2(local_58,"ReadNumConnectedVertices");
  local_f8 = &local_78;
  local_f0 = &local_48;
  local_108 = (undefined1 *)CONCAT71(local_108._1_7_,1);
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
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946e986 FUN_14946e986 body=49 status=ok
// SIG undefined FUN_14946e986(void)

longlong * FUN_14946e986(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a745da();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14946e9b8 FUN_14946e9b8 body=296 status=ok
// SIG undefined FUN_14946e9b8(void)

void FUN_14946e9b8(undefined8 param_1,undefined8 param_2)

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
  FUN_140056680(local_48,L"ReadNumConnectedVertices");
  uVar1 = FUN_149459122(uVar1,local_48);
  uVar1 = FUN_1494593ba(uVar1,2,0,0);
  local_68 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_58,L"ReadConnectedVertex");
  uVar1 = FUN_149459122(uVar1,local_58);
  uVar1 = FUN_1494593ba(uVar1,2,0,0);
  local_68 = 0;
  uVar1 = FUN_149459206(uVar1,2,0,0);
  local_68 = 0;
  FUN_149459206(uVar1,2,0,0);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946eaea FUN_14946eaea body=151 status=ok
// SIG undefined FUN_14946eaea(void)

void FUN_14946eaea(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_14948446e();
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
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1bec8;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x20;
  return;
}



// FUNCTION 14946eb8a FUN_14946eb8a body=43 status=ok
// SIG undefined FUN_14946eb8a(void)

void FUN_14946eb8a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceConnectivity.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 14946ebb6 FUN_14946ebb6 body=438 status=ok
// SIG undefined FUN_14946ebb6(void)

void FUN_14946ebb6(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceConnectivity.ush",0,&local_d8,0);
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



// FUNCTION 14946ed6e FUN_14946ed6e body=1324 status=ok
// SIG undefined FUN_14946ed6e(void)

longlong FUN_14946ed6e(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  int *piVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  bool bVar24;
  longlong lVar25;
  int iVar26;
  undefined1 local_1a8 [44];
  int local_17c;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  longlong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  longlong local_138;
  uint local_12c;
  longlong local_128 [2];
  double local_118 [4];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  uint local_c4 [3];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_1a8;
  lVar16 = FUN_14946f29b(DAT_14c951640);
  if (*param_2 != 0) {
    lVar17 = FUN_144a745da();
    param_2 = (longlong *)*param_2;
    if ((((param_2 != (longlong *)0x0) && (lVar17 != 0)) && (lVar25 = param_2[2], lVar25 != 0)) &&
       ((*(int *)(lVar17 + 0x38) <= *(int *)(lVar25 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar25 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) ==
         lVar17 + 0x30)))) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *(longlong **)(lVar16 + 0x28) = param_2;
      plVar18 = (longlong *)(**(code **)(*param_2 + 0xa90))(param_2);
      if (plVar18 != (longlong *)0x0) {
        FUN_14946f330((longlong *)(lVar16 + 0x30),*(undefined1 *)((longlong)plVar18 + 0x19));
        if (*(char *)((longlong)plVar18 + 0x19) != '\0') {
          uVar21 = 0;
          local_170 = plVar18;
          local_168 = (longlong *)(lVar16 + 0x30);
          local_160 = lVar16;
          do {
            lVar16 = *(longlong *)(*local_170 + uVar21 * 8);
            lVar17 = *local_168;
            lVar25 = uVar21 * 0x10;
            plVar18 = *(longlong **)(lVar16 + 0x28);
            local_158 = uVar21;
            (**(code **)(*plVar18 + 0x50))(plVar18);
            local_150 = (ulonglong)*(uint *)(lVar16 + 0xec);
            uVar21 = (ulonglong)(*(uint *)(lVar16 + 0xec) * 0xc);
            local_178 = (longlong *)(lVar17 + lVar25);
            FUN_14478085e((longlong *)(lVar17 + lVar25),uVar21,1);
            memset(*(void **)(lVar17 + lVar25),(int)CONCAT71((int7)(uVar21 >> 8),0xff),
                   (longlong)*(int *)(lVar17 + 8 + lVar25) << 2);
            if (0 < *(int *)(lVar16 + 0x18)) {
              lVar17 = 0;
              local_17c = 0;
              uVar21 = 0;
              do {
                iVar26 = local_17c;
                iVar20 = *(int *)(*(longlong *)(lVar16 + 0x10) + 8 + lVar17 * 0xf8);
                local_148 = (ulonglong)
                            *(uint *)(*(longlong *)(lVar16 + 0x10) + 0x48 + lVar17 * 0xf8);
                local_128[0] = 0;
                local_128[1] = 0;
                local_140 = uVar21;
                local_138 = lVar17;
                FUN_14478085e(local_128,local_150,1);
                local_98 = 0;
                local_90 = 0;
                local_b8 = 0;
                uStack_b0 = 0;
                local_8c = 0xffffffff00000080;
                local_84 = 0;
                local_78 = 0;
                local_70 = 0;
                local_17c = iVar20 + iVar26;
                if (0 < iVar20) {
LAB_14946ef6a:
                  uVar13 = (**(code **)(*plVar18 + 0x60))(plVar18,iVar26 * 3);
                  local_c4[0] = uVar13;
                  iVar14 = (**(code **)(*plVar18 + 0x60))(plVar18,iVar26 * 3 + 1);
                  local_c4[1] = iVar14;
                  local_c4[2] = (**(code **)(*plVar18 + 0x60))(plVar18,iVar26 * 3 + 2);
                  lVar17 = *(longlong *)(lVar16 + 0xe0);
                  iVar20 = *(int *)(lVar16 + 0xe8);
                  uVar21 = (ulonglong)(uVar13 * iVar20);
                  local_118[2] = (double)*(float *)(lVar17 + 8 + uVar21);
                  local_118[1] = (double)*(float *)(lVar17 + 4 + uVar21);
                  local_118[0] = (double)*(float *)(lVar17 + uVar21);
                  uVar21 = (ulonglong)(uint)(iVar14 * iVar20);
                  local_f0 = (double)*(float *)(lVar17 + 8 + uVar21);
                  local_f8 = (double)*(float *)(lVar17 + 4 + uVar21);
                  local_118[3] = (double)*(float *)(lVar17 + uVar21);
                  uVar21 = (ulonglong)(iVar20 * local_c4[2]);
                  local_d8 = (double)*(float *)(lVar17 + 8 + uVar21);
                  local_e0 = (double)*(float *)(lVar17 + 4 + uVar21);
                  local_e8 = (double)*(float *)(lVar17 + uVar21);
                  lVar17 = 0;
LAB_14946f069:
                  local_12c = local_c4[lVar17];
                  lVar25 = (longlong)(int)local_12c;
                  uVar15 = FUN_1448eb174(local_118 + lVar17 * 3,0x18,0);
                  piVar19 = (int *)FUN_149482190(&local_b8,uVar15,local_118 + lVar17 * 3,&local_12c)
                  ;
                  iVar20 = *piVar19;
                  *(int *)(local_128[0] + lVar25 * 4) = iVar20;
                  lVar25 = (ulonglong)(uint)(iVar20 * 0xc) * 4 + *local_178;
                  iVar20 = 1;
                  bVar12 = false;
LAB_14946f0d2:
                  bVar24 = bVar12;
                  uVar13 = local_c4[(uint)(iVar20 + (int)lVar17) % 3];
                  lVar22 = 0;
LAB_14946f0ee:
                  uVar5 = *(uint *)(lVar25 + lVar22 * 4);
                  if (uVar5 == 0xffffffff) goto LAB_14946f131;
                  if (uVar13 != uVar5) {
                    if (uVar5 <= uVar13) goto code_r0x00014946f0ff;
                    lVar23 = 0xc;
                    do {
                      lVar2 = lVar23 * 4;
                      lVar23 = lVar23 + -1;
                    } while (*(int *)(lVar25 + -8 + lVar2) == -1);
                    do {
                      *(undefined4 *)(lVar25 + lVar23 * 4) =
                           *(undefined4 *)(lVar25 + -4 + lVar23 * 4);
                      lVar23 = lVar23 + -1;
                    } while (lVar22 < lVar23);
LAB_14946f131:
                    *(uint *)(lVar25 + lVar22 * 4) = uVar13;
                  }
                  goto LAB_14946f134;
                }
LAB_14946f160:
                uVar13 = (int)local_148 + (int)local_140;
                if (1 < (int)local_148) {
                  lVar25 = (longlong)((int)local_140 + 1);
                  lVar17 = lVar25 * 0x30;
                  do {
                    iVar20 = *(int *)(local_128[0] + lVar25 * 4);
                    if ((int)lVar25 != iVar20) {
                      lVar22 = *local_178;
                      lVar23 = (longlong)iVar20 * 0x30;
                      puVar1 = (undefined4 *)(lVar22 + lVar23);
                      uVar15 = *puVar1;
                      uVar6 = puVar1[1];
                      uVar7 = puVar1[2];
                      uVar8 = puVar1[3];
                      puVar3 = (undefined8 *)(lVar22 + 0x10 + lVar23);
                      uVar9 = *puVar3;
                      uVar10 = puVar3[1];
                      puVar3 = (undefined8 *)(lVar22 + 0x20 + lVar23);
                      uVar11 = puVar3[1];
                      puVar4 = (undefined8 *)(lVar22 + 0x20 + lVar17);
                      *puVar4 = *puVar3;
                      puVar4[1] = uVar11;
                      puVar3 = (undefined8 *)(lVar22 + 0x10 + lVar17);
                      *puVar3 = uVar9;
                      puVar3[1] = uVar10;
                      puVar1 = (undefined4 *)(lVar22 + lVar17);
                      *puVar1 = uVar15;
                      puVar1[1] = uVar6;
                      puVar1[2] = uVar7;
                      puVar1[3] = uVar8;
                    }
                    lVar25 = lVar25 + 1;
                    lVar17 = lVar17 + 0x30;
                  } while (lVar25 < (int)uVar13);
                }
                local_70 = 0;
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
                FUN_14948273e(&local_b8);
                if (local_128[0] != 0) {
                  FUN_1400020a8();
                }
                lVar17 = local_138 + 1;
                uVar21 = (ulonglong)uVar13;
              } while (lVar17 < *(int *)(lVar16 + 0x18));
            }
            uVar21 = local_158 + 1;
            lVar16 = local_160;
          } while (uVar21 < *(byte *)((longlong)local_170 + 0x19));
        }
      }
      goto LAB_14946f255;
    }
  }
  *(undefined8 *)(lVar16 + 0x28) = 0;
LAB_14946f255:
  if ((local_60 ^ (ulonglong)local_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar16;
code_r0x00014946f0ff:
  lVar22 = lVar22 + 1;
  if (lVar22 == 0xc) goto LAB_14946f134;
  goto LAB_14946f0ee;
LAB_14946f134:
  iVar20 = 2;
  bVar12 = true;
  if (bVar24) goto code_r0x00014946f142;
  goto LAB_14946f0d2;
code_r0x00014946f142:
  lVar17 = lVar17 + 1;
  if (lVar17 == 3) goto code_r0x00014946f14f;
  goto LAB_14946f069;
code_r0x00014946f14f:
  iVar26 = iVar26 + 1;
  if (local_17c <= iVar26) goto LAB_14946f160;
  goto LAB_14946ef6a;
}



// FUNCTION 14946f29b FUN_14946f29b body=148 status=ok
// SIG undefined FUN_14946f29b(void)

undefined8 FUN_14946f29b(undefined8 param_1)

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
  uVar1 = FUN_145ba482c();
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



// FUNCTION 14946f330 FUN_14946f330 body=119 status=ok
// SIG undefined FUN_14946f330(void)

void FUN_14946f330(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1474396d0(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_149484874(param_1,param_2,iVar1 - param_2);
  FUN_1494848ce(param_1);
  return;
}



// FUNCTION 14946f3a8 FUN_14946f3a8 body=78 status=ok
// SIG undefined FUN_14946f3a8(void)

void FUN_14946f3a8(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  lVar1 = *(longlong *)(param_1 + 0x28);
  *puVar2 = &PTR_FUN_14bcefbf0;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x8a8);
  }
  puVar2[1] = uVar3;
  puVar2[2] = param_1 + 0x30;
  puVar2[3] = 0;
  puVar2[4] = 0;
  return;
}



// FUNCTION 14946f3f6 FUN_14946f3f6 body=78 status=ok
// SIG undefined FUN_14946f3f6(void)

undefined4 FUN_14946f3f6(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((param_2[1] == 0x20) && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) &&
     (*(int *)(*(longlong *)(param_1 + 0x10) + 8) != 0)) {
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



// FUNCTION 14946f444 FUN_14946f444 body=316 status=ok
// SIG undefined FUN_14946f444(void)

void FUN_14946f444(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  uint local_68;
  undefined8 local_64;
  undefined8 local_58;
  longlong local_50;
  wchar_t *local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  puVar1 = (undefined8 *)(**(longlong **)(param_1 + 0x10) + (longlong)iVar4 * 0x10);
  uVar2 = *(uint *)(**(longlong **)(param_1 + 0x10) + 8 + (longlong)iVar4 * 0x10);
  local_78 = &local_39;
  local_39 = 0;
  local_48 = L"Optimus.Connectivity";
  local_68 = 4;
  if (DAT_14ca84e48 < 4) {
    local_68 = DAT_14ca84e48;
  }
  local_68 = local_68 + (local_68 == 0);
  uVar3 = DAT_14ca84e48;
  if (uVar2 < DAT_14ca84e48) {
    uVar3 = uVar2;
  }
  local_58 = 0;
  local_64 = CONCAT44(0x10109,uVar3 + (uVar3 == 0));
  local_50 = FUN_144738de6(param_2 + 0x188,param_2 + 0x70,&local_48,&local_68);
  *(longlong *)(param_1 + 0x18) = local_50;
  uVar2 = local_68 >> 8;
  local_68 = local_68 & 0xffffff00;
  local_64 = 0xffffffff00000000;
  local_58 = 0;
  if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
    local_68 = CONCAT31((int3)uVar2,0x1c);
  }
  uVar5 = FUN_14475683e(param_2 + 0x198,param_2 + 0x70,local_50 + 8,&local_68);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  local_78 = (undefined1 *)((ulonglong)local_78 & 0xffffffffffffff00);
  FUN_1447759b4(param_2,*(undefined8 *)(param_1 + 0x18),*puVar1,(longlong)*(int *)(puVar1 + 1) << 2)
  ;
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946f582 FUN_14946f582 body=139 status=ok
// SIG undefined FUN_14946f582(void)

void FUN_14946f582(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  iVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  iVar1 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar1) {
    iVar2 = *(int *)(param_2 + 0x14);
    lVar3 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar5 * 8);
    puVar6 = (undefined8 *)
             (*(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_2 + 0x10) + 0x10);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + 0x10);
      *(undefined4 *)(puVar6 + -2) = *(undefined4 *)(lVar4 + 0x48 + lVar7);
      *(undefined4 *)((longlong)puVar6 + -0xc) = *(undefined4 *)(lVar4 + 0x10 + lVar7);
      *(undefined4 *)(puVar6 + -1) = 0xc;
      *puVar6 = *(undefined8 *)(param_1 + 0x20);
      lVar7 = lVar7 + 0xf8;
      puVar6 = (undefined8 *)((longlong)puVar6 + (longlong)iVar2);
    } while ((longlong)iVar1 * 0xf8 - lVar7 != 0);
  }
  return;
}



// FUNCTION 14946f616 FUN_14946f616 body=143 status=ok
// SIG undefined FUN_14946f616(void)

void FUN_14946f616(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_149466e4e(param_2);
  puVar3 = DAT_14cc1bbc8;
  if (DAT_14cc1bbd0 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140002266(local_28,L"Read%s",puVar3);
  uVar1 = FUN_149459122(uVar1,local_28);
  uVar2 = FUN_1413622f8(1,3);
  FUN_1494592f4(uVar1,uVar2);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946f6a6 FUN_14946f6a6 body=344 status=ok
// SIG undefined FUN_14946f6a6(void)

void FUN_14946f6a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  void *local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = 0;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_70 = FUN_1413622f8(1,3);
  puVar3 = DAT_14cc1bbc8;
  if (DAT_14cc1bbd0 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_145929ff4(local_58,puVar3,&local_70,&local_68);
  uVar2 = FUN_140b494da(local_58,0,L"UCopyKernelDataInterface");
  iVar1 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
    FUN_1457752be(param_4,iVar1);
  }
  *(undefined8 *)(*param_4 + (longlong)iVar1 * 8) = uVar2;
  lVar4 = (longlong)(int)(uint)uStack_60;
  if (lVar4 != 0) {
    iVar1 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar1 + (uint)uStack_60;
    if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar1) < (uint)uStack_60) {
      FUN_1457752be(param_4,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 8 + *param_4),local_68,lVar4 << 3);
  }
  FUN_145900f28(param_3,param_2,uVar2,0);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14946f802 FUN_14946f802 body=358 status=ok
// SIG undefined FUN_14946f802(void)

void FUN_14946f802(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  longlong local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_1413622f8(1,3);
  local_40 = 0;
  FUN_149458322(uVar2,&local_30);
  if (1 < local_28) {
    puVar3 = &DAT_149dfb77a;
    local_58 = &DAT_149dfb77a;
    if (DAT_14cc1bbd0 != 0) {
      local_58 = DAT_14cc1bbc8;
    }
    if (*(int *)(param_3 + 1) != 0) {
      puVar3 = (undefined2 *)*param_3;
    }
    FUN_140002266(&local_40,L"%s %s_%s;\n",local_30,puVar3);
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_40,iVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_48 = &DAT_149dfb77a;
    if (DAT_14cc1bbd0 != 0) {
      local_48 = DAT_14cc1bbc8;
    }
    local_58 = &DAT_149dfb77a;
    if (*(int *)(param_3 + 1) != 0) {
      local_58 = (undefined2 *)*param_3;
    }
    puVar3 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar3 = local_30;
    }
    local_50 = local_58;
    FUN_140002266(&local_40,L"%s Read%s_%s()\n{\n\treturn %s_%s;\n}\n",puVar3);
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_40,iVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946f96a FUN_14946f96a body=53 status=ok
// SIG undefined FUN_14946f96a(void)

undefined8 FUN_14946f96a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14946f99f(DAT_14c951640);
  FUN_14946fa34(uVar1,param_1,*param_2);
  return uVar1;
}



// FUNCTION 14946f99f FUN_14946f99f body=148 status=ok
// SIG undefined FUN_14946f99f(void)

undefined8 FUN_14946f99f(undefined8 param_1)

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
  uVar1 = FUN_145ba4a00();
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



// FUNCTION 14946fa34 FUN_14946fa34 body=89 status=ok
// SIG undefined FUN_14946fa34(void)

void FUN_14946fa34(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = FUN_144a78d6a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14946fa6b;
  }
  param_3 = 0;
LAB_14946fa6b:
  FUN_14485c47a(param_1 + 0x28,param_3);
  FUN_14485c47a(param_1 + 0x30,param_2);
  return;
}



// FUNCTION 14946faa2 FUN_14946faa2 body=167 status=ok
// SIG undefined FUN_14946faa2(void)

void FUN_14946faa2(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_2c = 0;
  cVar2 = FUN_14946fb4a(0,&local_28);
  lVar1 = uStack_20;
  uVar4 = uStack_20._4_4_;
  if ((cVar2 == '\0') && (uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20, lVar1 < 0)) {
    FUN_14481578e(&local_28,0);
    uVar4 = uStack_20._4_4_;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar3 = &PTR_FUN_14bcf04e0;
  puVar3[1] = local_28;
  *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_20;
  *(uint *)((longlong)puVar3 + 0x14) = uVar4;
  *(undefined4 *)(puVar3 + 3) = local_2c;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14946fb4a FUN_14946fb4a body=2643 status=ok
// SIG undefined FUN_14946fb4a(void)

ulonglong FUN_14946fb4a(longlong param_1,longlong *param_2,int *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  float fVar20;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  ulonglong local_2a0;
  undefined4 local_294;
  longlong local_290;
  int *local_288;
  undefined1 *local_280;
  longlong **local_278;
  undefined1 *local_270;
  longlong **local_268;
  undefined8 local_260;
  int local_258;
  undefined4 local_250;
  undefined1 local_24c [4];
  undefined8 local_248;
  undefined1 *puStack_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong *local_228;
  undefined8 uStack_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined1 *local_1d8 [2];
  undefined8 *local_1c8;
  undefined8 *local_190;
  undefined4 *local_188;
  byte local_120;
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
  lVar11 = param_1 + 0x30;
  cVar4 = FUN_144729dda(lVar11);
  if (cVar4 != '\0') {
    lVar8 = FUN_14479d2ce(lVar11);
    cVar4 = FUN_144729dda(lVar8 + 0x30);
    if (cVar4 != '\0') {
      lVar8 = FUN_14479d2ce(lVar11);
      uVar9 = FUN_14479d2ce(lVar8 + 0x30);
      plVar10 = (longlong *)FUN_14948712a(uVar9);
      lVar11 = FUN_14479d2ce(lVar11);
      cVar4 = FUN_144729dda(param_1 + 0x28);
      if (plVar10 != (longlong *)0x0 && cVar4 == '\x01') {
        uVar9 = FUN_14479d2ce(param_1 + 0x28);
        uVar5 = (**(code **)(*plVar10 + 0x2c0))(plVar10,uVar9);
        iVar6 = (**(code **)(*plVar10 + 0x2c8))(plVar10,uVar9,uVar5);
        uVar16 = 0;
        if (0 < iVar6) {
          local_2a0 = CONCAT44(local_2a0._4_4_,iVar6);
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
          local_294 = uVar5;
          local_288 = param_3;
          (**(code **)(*plVar10 + 0x2b8))(plVar10,&local_228);
          plVar3 = local_228;
          lVar8 = (longlong)(int)uStack_220;
          if (lVar8 != 0) {
            lVar15 = 0;
            local_290 = lVar11;
            do {
              local_248 = *(undefined8 *)((longlong)plVar3 + lVar15);
              local_250 = 0;
              local_188 = &local_250;
              local_190 = &local_248;
              FUN_140d12ea6(local_c8,local_24c,&local_190,0);
              uVar7 = (uint)((ulonglong)local_248 >> 0x10);
              uVar17 = (uint)local_248 & 0xffff;
              lVar11 = FUN_1402b391e(&local_118,
                                     ((uint)local_248 << 0x10 | uVar17) +
                                     (int)((ulonglong)local_248 >> 0x20) +
                                     (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4),&local_248);
              local_2a8 = lVar11;
              cVar4 = (**(code **)(*plVar10 + 0x2d0))(plVar10,local_248,uVar9);
              if ((cVar4 == '\0') || ((int)local_2a0 != *(int *)(lVar11 + 8))) {
                if (local_228 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                uVar16 = 0;
                goto LAB_14946fe15;
              }
              lVar15 = lVar15 + 8;
              lVar11 = local_290;
            } while (lVar8 * 8 != lVar15);
          }
          if (local_228 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          uStack_208 = 0;
          local_200 = 0;
          local_228 = (longlong *)0x0;
          uStack_220 = 0;
          local_1fc = 0xffffffff00000080;
          local_1f4 = 0;
          local_1e8 = 0;
          local_1e0 = 0;
          FUN_140d188f2(&local_228,local_c8);
          local_1d8[0] = (undefined1 *)0x0;
          puVar12 = (undefined8 *)FUN_14001cc68(0x58,8);
          *puVar12 = &PTR_FUN_14bcfda40;
          local_1c8 = puVar12;
          FUN_1408a467a(puVar12 + 1,&local_228);
          if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
            local_1d8[0] = &LAB_1445276fa;
          }
          local_260 = *(undefined8 *)(lVar11 + 0x38);
          local_258 = *(int *)(lVar11 + 0x40) + -1;
          if (*(int *)(lVar11 + 0x40) == 0) {
            local_258 = 0;
          }
          FUN_149488fe6(local_24c,&local_190,&local_260,local_1d8);
          local_1e0 = 0;
          if (local_1e8 != 0) {
            FUN_1400020a8();
          }
          FUN_14064e7da(&local_228);
          uVar1 = local_2a0;
          uVar16 = 0;
          if ((&DAT_14bcfe1f4)[local_120] == '\0') {
            FUN_144a9ff88(param_2,local_2a0 & 0xffffffff);
            local_2a0 = uVar1 & 0xffffffff;
            uVar16 = 0;
            do {
              local_248 = 0x100000000;
              local_238 = 0xffffffff;
              uStack_230 = 0;
              puStack_240 = local_b8;
              if (local_a0 == 0) {
                iVar6 = 0;
              }
              else {
                FUN_1449c0562(&local_248);
                iVar6 = local_a0;
              }
              uStack_208 = CONCAT44(uStack_22c,uStack_230);
              local_210 = local_238;
              uVar9 = local_210;
              uStack_220._0_4_ = (int)local_248;
              uStack_220._4_4_ = local_248._4_4_;
              local_218 = puStack_240;
              local_210._4_4_ = (int)((ulonglong)local_238 >> 0x20);
              iVar13 = local_210._4_4_;
              local_228 = local_c8;
              if ((local_210._4_4_ != iVar6) || (local_210 = uVar9, puStack_240 != local_b8)) {
                do {
                  local_210 = uVar9;
                  if ((int)uStack_110 != local_e4) {
                    lVar11 = *(longlong *)(*local_228 + (longlong)iVar13 * 0x14);
                    uVar7 = (uint)((ulonglong)lVar11 >> 0x10);
                    uVar17 = (uint)lVar11 & 0xffff;
                    puVar19 = local_d8;
                    if (local_d8 == (undefined1 *)0x0) {
                      puVar19 = local_e0;
                    }
                    iVar14 = *(int *)(puVar19 +
                                     (ulonglong)
                                     (local_d0 - 1U &
                                     (int)((ulonglong)lVar11 >> 0x20) +
                                     ((uint)lVar11 << 0x10 | uVar17) +
                                     (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4)) * 4);
                    while (iVar14 != -1) {
                      lVar8 = local_118 + (longlong)iVar14 * 0x20;
                      if (*(longlong *)(local_118 + (longlong)iVar14 * 0x20) == lVar11)
                      goto LAB_14947018b;
                      iVar14 = *(int *)(lVar8 + 0x18);
                    }
                  }
                  lVar8 = 0;
LAB_14947018b:
                  iVar14 = 1;
                  if ((longlong)uVar16 < (longlong)*(int *)(lVar8 + 0x10)) {
                    iVar14 = *(int *)(*(longlong *)(lVar8 + 8) + uVar16 * 4);
                  }
                  *(float *)(*local_228 + (longlong)iVar13 * 0x14 + 8) = (float)iVar14;
                  local_210 = CONCAT44(local_210._4_4_,(uint)local_210 & ~uStack_220._4_4_);
                  FUN_1449c0562(&uStack_220);
                  iVar13 = local_210._4_4_;
                  uVar9 = local_210;
                } while (local_228 != local_c8 ||
                         (local_218 != local_b8 || local_210._4_4_ != iVar6));
              }
              uStack_208 = 0;
              local_200 = 0;
              local_228 = (longlong *)0x0;
              uStack_220 = 0;
              local_1fc = 0xffffffff00000080;
              local_1f4 = 0;
              local_1e8 = 0;
              local_1e0 = 0;
              FUN_140d188f2(&local_228,local_c8);
              local_270 = &LAB_144527882;
              local_268 = &local_228;
              fVar20 = (float)FUN_14948a246(local_24c);
              local_1e0 = 0;
              if (local_1e8 != 0) {
                FUN_1400020a8();
              }
              FUN_14064e7da(&local_228);
              if ((int)fVar20 < 0) {
                uVar16 = 0;
                goto LAB_14946fdff;
              }
              lVar11 = param_2[1];
              uVar7 = (int)lVar11 + 1;
              *(uint *)(param_2 + 1) = uVar7;
              if (*(uint *)((longlong)param_2 + 0xc) < uVar7) {
                FUN_1446f48e2(param_2);
              }
              piVar2 = local_288;
              *(int *)(*param_2 + (longlong)(int)lVar11 * 4) = (int)fVar20;
              uVar16 = uVar16 + 1;
            } while (uVar16 != local_2a0);
            *local_288 = 0;
            lVar11 = param_2[1];
            if ((longlong)(int)lVar11 != 0) {
              lVar8 = *param_2;
              lVar15 = 0;
              iVar6 = 0;
              do {
                iVar6 = iVar6 + *(int *)(lVar8 + lVar15);
                *local_288 = iVar6;
                lVar15 = lVar15 + 4;
              } while ((longlong)(int)lVar11 * 4 != lVar15);
            }
            local_248 = 0x100000000;
            local_238 = 0xffffffff;
            uStack_230 = 0;
            iVar6 = 0;
            puStack_240 = local_b8;
            if (local_a0 != 0) {
              FUN_1449c0562(&local_248);
              iVar6 = local_a0;
            }
            local_210 = local_238;
            uVar9 = local_210;
            uStack_208 = CONCAT44(uStack_22c,uStack_230);
            uStack_220 = local_248;
            local_218 = puStack_240;
            local_210._4_4_ = (int)((ulonglong)local_238 >> 0x20);
            if ((local_210._4_4_ != iVar6) || (puStack_240 != local_b8)) {
              iVar13 = local_210._4_4_;
              local_228 = local_c8;
              local_210 = uVar9;
              do {
                lVar11 = *local_228;
                lVar15 = (longlong)iVar13;
                lVar8 = *(longlong *)(lVar11 + lVar15 * 0x14);
                *(undefined4 *)(lVar11 + 8 + lVar15 * 0x14) = 0;
                if ((int)uStack_110 != local_e4) {
                  uVar7 = (uint)((ulonglong)lVar8 >> 0x10);
                  uVar17 = (uint)lVar8 & 0xffff;
                  puVar19 = local_d8;
                  if (local_d8 == (undefined1 *)0x0) {
                    puVar19 = local_e0;
                  }
                  iVar13 = *(int *)(puVar19 +
                                   (ulonglong)
                                   (local_d0 - 1U &
                                   (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar17)
                                   + (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4)) * 4);
                  while (iVar13 != -1) {
                    lVar18 = local_118 + (longlong)iVar13 * 0x20;
                    if (*(longlong *)(local_118 + (longlong)iVar13 * 0x20) == lVar8)
                    goto LAB_149470487;
                    iVar13 = *(int *)(lVar18 + 0x18);
                  }
                }
                lVar18 = 0;
LAB_149470487:
                iVar13 = *(int *)(lVar18 + 0x10);
                if ((longlong)iVar13 != 0) {
                  lVar8 = *(longlong *)(lVar18 + 8);
                  fVar20 = 0.0;
                  lVar18 = 0;
                  do {
                    fVar20 = fVar20 + (float)*(int *)(lVar8 + lVar18);
                    *(float *)(lVar11 + lVar15 * 0x14 + 8) = fVar20;
                    lVar18 = lVar18 + 4;
                  } while ((longlong)iVar13 * 4 != lVar18);
                }
                local_210 = CONCAT44(local_210._4_4_,(uint)local_210 & ~uStack_220._4_4_);
                FUN_1449c0562(&uStack_220);
                iVar13 = local_210._4_4_;
                uVar9 = local_210;
              } while (local_228 != local_c8 || (local_218 != local_b8 || local_210._4_4_ != iVar6))
              ;
            }
            local_210 = uVar9;
            uStack_208 = 0;
            local_200 = 0;
            local_228 = (longlong *)0x0;
            uStack_220 = 0;
            local_1fc = 0xffffffff00000080;
            local_1f4 = 0;
            local_1e8 = 0;
            local_1e0 = 0;
            FUN_140d188f2(&local_228,local_c8);
            local_280 = &LAB_14452792e;
            local_278 = &local_228;
            fVar20 = (float)FUN_14948a246(local_24c,&local_190);
            local_1e0 = 0;
            if (local_1e8 != 0) {
              FUN_1400020a8();
            }
            FUN_14064e7da(&local_228);
            uVar16 = CONCAT71((int7)((ulonglong)local_c8 >> 8),*piVar2 == (int)fVar20);
          }
LAB_14946fdff:
          (*(code *)(&switchD_14452c9ce::switchdataD_14bcfe0e0)[local_120])();
LAB_14946fe15:
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
        }
        goto LAB_14946fe6e;
      }
    }
  }
  uVar16 = 0;
LAB_14946fe6e:
  if ((local_70 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494705b0 FUN_1494705b0 body=136 status=ok
// SIG undefined FUN_1494705b0(void)

undefined4 FUN_1494705b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_14856db62(param_2,*(undefined4 *)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar4 + lVar6);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_146ddc768(param_2,iVar3);
      }
      lVar5 = *param_2;
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0xc) = uVar2;
      *(undefined1 **)(lVar5 + 4 + (longlong)iVar3 * 0xc) = &DAT_100000001;
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar1 * 4 != lVar6);
  }
  return (int)param_2[1];
}



// FUNCTION 149470638 FUN_149470638 body=96 status=ok
// SIG undefined FUN_149470638(void)

void FUN_149470638(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  if (0 < *(int *)(param_2 + 4)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      puVar5 = (undefined4 *)(param_1 + 0x18);
      if (*(char *)(param_2 + 8) == '\0') {
        puVar5 = (undefined4 *)(*(longlong *)(param_1 + 8) + lVar3);
      }
      lVar2 = (longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18);
      lVar1 = (longlong)(int)lVar4 * (longlong)*(int *)(param_2 + 0x14);
      *(undefined4 *)(lVar1 + lVar2) = *puVar5;
      *(undefined1 **)(lVar1 + 4 + lVar2) = &DAT_100000001;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 4;
    } while (lVar4 < *(int *)(param_2 + 4));
  }
  return;
}



// FUNCTION 1494706a0 FUN_1494706a0 body=143 status=ok
// SIG undefined FUN_1494706a0(void)

void FUN_1494706a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_149466e4e(param_2);
  puVar3 = DAT_14cc1c0f0;
  if (DAT_14cc1c0f8 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140002266(local_28,L"Read%s",puVar3);
  uVar1 = FUN_149459122(uVar1,local_28);
  uVar2 = FUN_1413622f8(1,3);
  FUN_1494592f4(uVar1,uVar2);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149470732 FUN_149470732 body=358 status=ok
// SIG undefined FUN_149470732(void)

void FUN_149470732(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  longlong local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_1413622f8(1,3);
  local_40 = 0;
  FUN_149458322(uVar2,&local_30);
  if (1 < local_28) {
    puVar3 = &DAT_149dfb77a;
    local_58 = &DAT_149dfb77a;
    if (DAT_14cc1c0f8 != 0) {
      local_58 = DAT_14cc1c0f0;
    }
    if (*(int *)(param_3 + 1) != 0) {
      puVar3 = (undefined2 *)*param_3;
    }
    FUN_140002266(&local_40,L"%s %s_%s;\n",local_30,puVar3);
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_40,iVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_48 = &DAT_149dfb77a;
    if (DAT_14cc1c0f8 != 0) {
      local_48 = DAT_14cc1c0f0;
    }
    local_58 = &DAT_149dfb77a;
    if (*(int *)(param_3 + 1) != 0) {
      local_58 = (undefined2 *)*param_3;
    }
    puVar3 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar3 = local_30;
    }
    local_50 = local_58;
    FUN_140002266(&local_40,L"%s Read%s_%s()\n{\n\treturn %s_%s;\n}\n",puVar3);
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(param_2,local_40,iVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947089a FUN_14947089a body=53 status=ok
// SIG undefined FUN_14947089a(void)

undefined8 FUN_14947089a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1494708cf(DAT_14c951640);
  FUN_149470964(uVar1,param_1,*param_2);
  return uVar1;
}



// FUNCTION 1494708cf FUN_1494708cf body=148 status=ok
// SIG undefined FUN_1494708cf(void)

undefined8 FUN_1494708cf(undefined8 param_1)

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
  uVar1 = FUN_145ba4bd4();
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



// FUNCTION 149470964 FUN_149470964 body=89 status=ok
// SIG undefined FUN_149470964(void)

void FUN_149470964(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = FUN_144a78d6a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14947099b;
  }
  param_3 = 0;
LAB_14947099b:
  FUN_14485c47a(param_1 + 0x28,param_3);
  FUN_14485c47a(param_1 + 0x30,param_2);
  return;
}



// FUNCTION 1494709d2 FUN_1494709d2 body=167 status=ok
// SIG undefined FUN_1494709d2(void)

void FUN_1494709d2(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_2c = 0;
  cVar2 = FUN_149470a7a(0,&local_28);
  lVar1 = uStack_20;
  uVar4 = uStack_20._4_4_;
  if ((cVar2 == '\0') && (uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20, lVar1 < 0)) {
    FUN_14481578e(&local_28,0);
    uVar4 = uStack_20._4_4_;
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar3 = &PTR_FUN_14bcf0e40;
  puVar3[1] = local_28;
  *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_20;
  *(uint *)((longlong)puVar3 + 0x14) = uVar4;
  *(undefined4 *)(puVar3 + 3) = local_2c;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149470a7a FUN_149470a7a body=2643 status=ok
// SIG undefined FUN_149470a7a(void)

ulonglong FUN_149470a7a(longlong param_1,longlong *param_2,int *param_3)

{
  ulonglong uVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 *puVar19;
  float fVar20;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  ulonglong local_2a0;
  undefined4 local_294;
  longlong local_290;
  int *local_288;
  undefined1 *local_280;
  longlong **local_278;
  undefined1 *local_270;
  longlong **local_268;
  undefined8 local_260;
  int local_258;
  undefined4 local_250;
  undefined1 local_24c [4];
  undefined8 local_248;
  undefined1 *puStack_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong *local_228;
  undefined8 uStack_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined1 *local_1d8 [2];
  undefined8 *local_1c8;
  undefined8 *local_190;
  undefined4 *local_188;
  byte local_120;
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
  lVar11 = param_1 + 0x30;
  cVar4 = FUN_144729dda(lVar11);
  if (cVar4 != '\0') {
    lVar8 = FUN_14479d2ce(lVar11);
    cVar4 = FUN_144729dda(lVar8 + 0x30);
    if (cVar4 != '\0') {
      lVar8 = FUN_14479d2ce(lVar11);
      uVar9 = FUN_14479d2ce(lVar8 + 0x30);
      plVar10 = (longlong *)FUN_14948712a(uVar9);
      lVar11 = FUN_14479d2ce(lVar11);
      cVar4 = FUN_144729dda(param_1 + 0x28);
      if (plVar10 != (longlong *)0x0 && cVar4 == '\x01') {
        uVar9 = FUN_14479d2ce(param_1 + 0x28);
        uVar5 = (**(code **)(*plVar10 + 0x2c0))(plVar10,uVar9);
        iVar6 = (**(code **)(*plVar10 + 0x2c8))(plVar10,uVar9,uVar5);
        uVar16 = 0;
        if (0 < iVar6) {
          local_2a0 = CONCAT44(local_2a0._4_4_,iVar6);
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
          local_294 = uVar5;
          local_288 = param_3;
          (**(code **)(*plVar10 + 0x2b8))(plVar10,&local_228);
          plVar3 = local_228;
          lVar8 = (longlong)(int)uStack_220;
          if (lVar8 != 0) {
            lVar15 = 0;
            local_290 = lVar11;
            do {
              local_248 = *(undefined8 *)((longlong)plVar3 + lVar15);
              local_250 = 0;
              local_188 = &local_250;
              local_190 = &local_248;
              FUN_140d12ea6(local_c8,local_24c,&local_190,0);
              uVar7 = (uint)((ulonglong)local_248 >> 0x10);
              uVar17 = (uint)local_248 & 0xffff;
              lVar11 = FUN_1402b391e(&local_118,
                                     ((uint)local_248 << 0x10 | uVar17) +
                                     (int)((ulonglong)local_248 >> 0x20) +
                                     (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4),&local_248);
              local_2a8 = lVar11;
              cVar4 = (**(code **)(*plVar10 + 0x2d0))(plVar10,local_248,uVar9);
              if ((cVar4 == '\0') || ((int)local_2a0 != *(int *)(lVar11 + 8))) {
                if (local_228 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                uVar16 = 0;
                goto LAB_149470d45;
              }
              lVar15 = lVar15 + 8;
              lVar11 = local_290;
            } while (lVar8 * 8 != lVar15);
          }
          if (local_228 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          uStack_208 = 0;
          local_200 = 0;
          local_228 = (longlong *)0x0;
          uStack_220 = 0;
          local_1fc = 0xffffffff00000080;
          local_1f4 = 0;
          local_1e8 = 0;
          local_1e0 = 0;
          FUN_140d188f2(&local_228,local_c8);
          local_1d8[0] = (undefined1 *)0x0;
          puVar12 = (undefined8 *)FUN_14001cc68(0x58,8);
          *puVar12 = &PTR_FUN_14bcfda60;
          local_1c8 = puVar12;
          FUN_1408a467a(puVar12 + 1,&local_228);
          if (puVar12 != (undefined8 *)&DAT_fffffffffffffff8) {
            local_1d8[0] = &LAB_1445279da;
          }
          local_260 = *(undefined8 *)(lVar11 + 0x38);
          local_258 = *(int *)(lVar11 + 0x40) + -1;
          if (*(int *)(lVar11 + 0x40) == 0) {
            local_258 = 0;
          }
          FUN_149488fe6(local_24c,&local_190,&local_260,local_1d8);
          local_1e0 = 0;
          if (local_1e8 != 0) {
            FUN_1400020a8();
          }
          FUN_14064e7da(&local_228);
          uVar1 = local_2a0;
          uVar16 = 0;
          if ((&DAT_14bcfe1f4)[local_120] == '\0') {
            FUN_144a9ff88(param_2,local_2a0 & 0xffffffff);
            local_2a0 = uVar1 & 0xffffffff;
            uVar16 = 0;
            do {
              local_248 = 0x100000000;
              local_238 = 0xffffffff;
              uStack_230 = 0;
              puStack_240 = local_b8;
              if (local_a0 == 0) {
                iVar6 = 0;
              }
              else {
                FUN_1449c0562(&local_248);
                iVar6 = local_a0;
              }
              uStack_208 = CONCAT44(uStack_22c,uStack_230);
              local_210 = local_238;
              uVar9 = local_210;
              uStack_220._0_4_ = (int)local_248;
              uStack_220._4_4_ = local_248._4_4_;
              local_218 = puStack_240;
              local_210._4_4_ = (int)((ulonglong)local_238 >> 0x20);
              iVar13 = local_210._4_4_;
              local_228 = local_c8;
              if ((local_210._4_4_ != iVar6) || (local_210 = uVar9, puStack_240 != local_b8)) {
                do {
                  local_210 = uVar9;
                  if ((int)uStack_110 != local_e4) {
                    lVar11 = *(longlong *)(*local_228 + (longlong)iVar13 * 0x14);
                    uVar7 = (uint)((ulonglong)lVar11 >> 0x10);
                    uVar17 = (uint)lVar11 & 0xffff;
                    puVar19 = local_d8;
                    if (local_d8 == (undefined1 *)0x0) {
                      puVar19 = local_e0;
                    }
                    iVar14 = *(int *)(puVar19 +
                                     (ulonglong)
                                     (local_d0 - 1U &
                                     (int)((ulonglong)lVar11 >> 0x20) +
                                     ((uint)lVar11 << 0x10 | uVar17) +
                                     (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4)) * 4);
                    while (iVar14 != -1) {
                      lVar8 = local_118 + (longlong)iVar14 * 0x20;
                      if (*(longlong *)(local_118 + (longlong)iVar14 * 0x20) == lVar11)
                      goto LAB_1494710bb;
                      iVar14 = *(int *)(lVar8 + 0x18);
                    }
                  }
                  lVar8 = 0;
LAB_1494710bb:
                  iVar14 = 1;
                  if ((longlong)uVar16 < (longlong)*(int *)(lVar8 + 0x10)) {
                    iVar14 = *(int *)(*(longlong *)(lVar8 + 8) + uVar16 * 4);
                  }
                  *(float *)(*local_228 + (longlong)iVar13 * 0x14 + 8) = (float)iVar14;
                  local_210 = CONCAT44(local_210._4_4_,(uint)local_210 & ~uStack_220._4_4_);
                  FUN_1449c0562(&uStack_220);
                  iVar13 = local_210._4_4_;
                  uVar9 = local_210;
                } while (local_228 != local_c8 ||
                         (local_218 != local_b8 || local_210._4_4_ != iVar6));
              }
              uStack_208 = 0;
              local_200 = 0;
              local_228 = (longlong *)0x0;
              uStack_220 = 0;
              local_1fc = 0xffffffff00000080;
              local_1f4 = 0;
              local_1e8 = 0;
              local_1e0 = 0;
              FUN_140d188f2(&local_228,local_c8);
              local_270 = &LAB_144527b62;
              local_268 = &local_228;
              fVar20 = (float)FUN_14948a246(local_24c);
              local_1e0 = 0;
              if (local_1e8 != 0) {
                FUN_1400020a8();
              }
              FUN_14064e7da(&local_228);
              if ((int)fVar20 < 0) {
                uVar16 = 0;
                goto LAB_149470d2f;
              }
              lVar11 = param_2[1];
              uVar7 = (int)lVar11 + 1;
              *(uint *)(param_2 + 1) = uVar7;
              if (*(uint *)((longlong)param_2 + 0xc) < uVar7) {
                FUN_1446f48e2(param_2);
              }
              piVar2 = local_288;
              *(int *)(*param_2 + (longlong)(int)lVar11 * 4) = (int)fVar20;
              uVar16 = uVar16 + 1;
            } while (uVar16 != local_2a0);
            *local_288 = 0;
            lVar11 = param_2[1];
            if ((longlong)(int)lVar11 != 0) {
              lVar8 = *param_2;
              lVar15 = 0;
              iVar6 = 0;
              do {
                iVar6 = iVar6 + *(int *)(lVar8 + lVar15);
                *local_288 = iVar6;
                lVar15 = lVar15 + 4;
              } while ((longlong)(int)lVar11 * 4 != lVar15);
            }
            local_248 = 0x100000000;
            local_238 = 0xffffffff;
            uStack_230 = 0;
            iVar6 = 0;
            puStack_240 = local_b8;
            if (local_a0 != 0) {
              FUN_1449c0562(&local_248);
              iVar6 = local_a0;
            }
            local_210 = local_238;
            uVar9 = local_210;
            uStack_208 = CONCAT44(uStack_22c,uStack_230);
            uStack_220 = local_248;
            local_218 = puStack_240;
            local_210._4_4_ = (int)((ulonglong)local_238 >> 0x20);
            if ((local_210._4_4_ != iVar6) || (puStack_240 != local_b8)) {
              iVar13 = local_210._4_4_;
              local_228 = local_c8;
              local_210 = uVar9;
              do {
                lVar11 = *local_228;
                lVar15 = (longlong)iVar13;
                lVar8 = *(longlong *)(lVar11 + lVar15 * 0x14);
                *(undefined4 *)(lVar11 + 8 + lVar15 * 0x14) = 0;
                if ((int)uStack_110 != local_e4) {
                  uVar7 = (uint)((ulonglong)lVar8 >> 0x10);
                  uVar17 = (uint)lVar8 & 0xffff;
                  puVar19 = local_d8;
                  if (local_d8 == (undefined1 *)0x0) {
                    puVar19 = local_e0;
                  }
                  iVar13 = *(int *)(puVar19 +
                                   (ulonglong)
                                   (local_d0 - 1U &
                                   (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar17)
                                   + (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4)) * 4);
                  while (iVar13 != -1) {
                    lVar18 = local_118 + (longlong)iVar13 * 0x20;
                    if (*(longlong *)(local_118 + (longlong)iVar13 * 0x20) == lVar8)
                    goto LAB_1494713b7;
                    iVar13 = *(int *)(lVar18 + 0x18);
                  }
                }
                lVar18 = 0;
LAB_1494713b7:
                iVar13 = *(int *)(lVar18 + 0x10);
                if ((longlong)iVar13 != 0) {
                  lVar8 = *(longlong *)(lVar18 + 8);
                  fVar20 = 0.0;
                  lVar18 = 0;
                  do {
                    fVar20 = fVar20 + (float)*(int *)(lVar8 + lVar18);
                    *(float *)(lVar11 + lVar15 * 0x14 + 8) = fVar20;
                    lVar18 = lVar18 + 4;
                  } while ((longlong)iVar13 * 4 != lVar18);
                }
                local_210 = CONCAT44(local_210._4_4_,(uint)local_210 & ~uStack_220._4_4_);
                FUN_1449c0562(&uStack_220);
                iVar13 = local_210._4_4_;
                uVar9 = local_210;
              } while (local_228 != local_c8 || (local_218 != local_b8 || local_210._4_4_ != iVar6))
              ;
            }
            local_210 = uVar9;
            uStack_208 = 0;
            local_200 = 0;
            local_228 = (longlong *)0x0;
            uStack_220 = 0;
            local_1fc = 0xffffffff00000080;
            local_1f4 = 0;
            local_1e8 = 0;
            local_1e0 = 0;
            FUN_140d188f2(&local_228,local_c8);
            local_280 = &LAB_144527c0e;
            local_278 = &local_228;
            fVar20 = (float)FUN_14948a246(local_24c,&local_190);
            local_1e0 = 0;
            if (local_1e8 != 0) {
              FUN_1400020a8();
            }
            FUN_14064e7da(&local_228);
            uVar16 = CONCAT71((int7)((ulonglong)local_c8 >> 8),*piVar2 == (int)fVar20);
          }
LAB_149470d2f:
          (*(code *)(&switchD_14452c9ce::switchdataD_14bcfe0e0)[local_120])();
LAB_149470d45:
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
        }
        goto LAB_149470d9e;
      }
    }
  }
  uVar16 = 0;
LAB_149470d9e:
  if ((local_70 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494714e0 FUN_1494714e0 body=136 status=ok
// SIG undefined FUN_1494714e0(void)

undefined4 FUN_1494714e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_14856db62(param_2,*(undefined4 *)(param_1 + 0x10));
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar4 + lVar6);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_146ddc768(param_2,iVar3);
      }
      lVar5 = *param_2;
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 0xc) = uVar2;
      *(undefined1 **)(lVar5 + 4 + (longlong)iVar3 * 0xc) = &DAT_100000001;
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar1 * 4 != lVar6);
  }
  return (int)param_2[1];
}



// FUNCTION 149471568 FUN_149471568 body=96 status=ok
// SIG undefined FUN_149471568(void)

void FUN_149471568(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  if (0 < *(int *)(param_2 + 4)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      puVar5 = (undefined4 *)(param_1 + 0x18);
      if (*(char *)(param_2 + 8) == '\0') {
        puVar5 = (undefined4 *)(*(longlong *)(param_1 + 8) + lVar3);
      }
      lVar2 = (longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18);
      lVar1 = (longlong)(int)lVar4 * (longlong)*(int *)(param_2 + 0x14);
      *(undefined4 *)(lVar1 + lVar2) = *puVar5;
      *(undefined1 **)(lVar1 + 4 + lVar2) = &DAT_100000001;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 4;
    } while (lVar4 < *(int *)(param_2 + 4));
  }
  return;
}



// FUNCTION 1494715da FUN_1494715da body=32 status=ok
// SIG undefined FUN_1494715da(void)

undefined8 FUN_1494715da(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Debug Draw");
  return param_2;
}



// FUNCTION 149471608 FUN_149471608 body=244 status=ok
// SIG undefined FUN_149471608(void)

longlong * FUN_149471608(undefined8 param_1,longlong *param_2)

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
  FUN_1446ddc76(&local_58,"DebugDraw",1);
  FUN_1400b22c2(local_68,"ReadDebugDraw");
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



// FUNCTION 1494716fe FUN_1494716fe body=49 status=ok
// SIG undefined FUN_1494716fe(void)

longlong * FUN_1494716fe(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a745da();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149471730 FUN_149471730 body=219 status=ok
// SIG undefined FUN_149471730(void)

undefined8 * FUN_149471730(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x28) == '\0') {
    local_38 = L"Unsupported Platform Setting";
    local_30 = 0x1c;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"OptimusDebugDrawDataInterface";
    local_30 = 0x1d;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,
                  L"Deformer Graph contains unsupported DebugDraw Data Interface and may not function properly. Either make sure DirectX 12 and Shader Model 6 are enabled in Project Settings, or remove the data interface from your graph completely"
                 );
    FUN_14023423e(param_2,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
  }
  else {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947180c FUN_14947180c body=206 status=ok
// SIG undefined FUN_14947180c(void)

void FUN_14947180c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_140f4f540();
  FUN_1446ddc76(&local_38,"FDebugDraw",1);
  FUN_140f4f5a6(uVar3,&local_30,local_38);
  uVar3 = *(undefined8 *)(local_30 + 0x18);
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
  uVar4 = FUN_149466e4e(param_2);
  FUN_140056680(local_48,L"ReadDebugDraw");
  uVar4 = FUN_149459122(uVar4,local_48);
  FUN_1494592f4(uVar4,uVar3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494718e4 FUN_1494718e4 body=151 status=ok
// SIG undefined FUN_1494718e4(void)

void FUN_1494718e4(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_14948496a();
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
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1bf50;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x80;
  return;
}



// FUNCTION 149471984 FUN_149471984 body=43 status=ok
// SIG undefined FUN_149471984(void)

void FUN_149471984(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceDebugDraw.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 1494719b0 FUN_1494719b0 body=438 status=ok
// SIG undefined FUN_1494719b0(void)

void FUN_1494719b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceDebugDraw.ush",0,&local_d8,0);
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



// FUNCTION 149471b67 FUN_149471b67 body=148 status=ok
// SIG undefined FUN_149471b67(void)

undefined8 FUN_149471b67(undefined8 param_1)

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
  uVar1 = FUN_145ba4da8();
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



// FUNCTION 149471bfc FUN_149471bfc body=47 status=ok
// SIG undefined FUN_149471bfc(void)

void FUN_149471bfc(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_149471c2c(uVar1,*(undefined8 *)(param_1 + 0x28),param_1 + 0x30);
  return;
}



// FUNCTION 149471c2c FUN_149471c2c body=865 status=ok
// SIG undefined FUN_149471c2c(void)

undefined8 * FUN_149471c2c(undefined8 *param_1,longlong *param_2,char *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  double dStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_1 = &PTR_FUN_14bcf1d10;
  local_178 = 0;
  uStack_170 = 0x43800000780;
  FUN_1472eb824(param_1 + 10);
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if (param_2 == (longlong *)0x0) {
    param_1[1] = 0;
    local_f8 = 0;
    dStack_f0 = 0.0;
    local_108 = 0.0;
    dStack_100 = 0.0;
    local_118 = 0.0;
    dStack_110 = 0.0;
    local_128 = 0.0;
    dStack_120 = 0.0;
    local_138 = 0.0;
    dStack_130 = 0.0;
    local_148 = 0.0;
    dStack_140 = 0.0;
    local_158 = 0.0;
    dStack_150 = 0.0;
    local_168 = 0.0;
    dStack_160 = 0.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar1 = FUN_144b20ea4(param_2);
    param_1[1] = uVar1;
    (**(code **)(*param_2 + 0x7a8))(param_2,&local_168);
    fVar18 = (float)local_168;
    fVar17 = (float)dStack_160;
    fVar16 = (float)local_158;
    fVar15 = (float)dStack_150;
    fVar14 = (float)local_148;
    fVar13 = (float)dStack_140;
    fVar12 = (float)local_138;
    fVar11 = (float)dStack_130;
    fVar10 = (float)local_128;
    fVar7 = (float)dStack_120;
    uVar8 = (undefined4)local_f8;
    uVar9 = (undefined4)((ulonglong)local_f8 >> 0x20);
    fVar6 = (float)local_118;
    fVar5 = (float)dStack_110;
    fVar4 = (float)dStack_f0;
  }
  *(float *)(param_1 + 2) = fVar18;
  *(float *)((longlong)param_1 + 0x14) = fVar17;
  *(float *)(param_1 + 3) = fVar16;
  *(float *)((longlong)param_1 + 0x1c) = fVar15;
  *(float *)(param_1 + 4) = fVar14;
  *(float *)((longlong)param_1 + 0x24) = fVar13;
  *(float *)(param_1 + 5) = fVar12;
  *(float *)((longlong)param_1 + 0x2c) = fVar11;
  *(float *)(param_1 + 6) = fVar10;
  *(float *)((longlong)param_1 + 0x34) = fVar7;
  *(float *)(param_1 + 7) = fVar6;
  *(float *)((longlong)param_1 + 0x3c) = fVar5;
  *(float *)(param_1 + 8) = (float)(local_108 - local_108);
  *(float *)((longlong)param_1 + 0x44) = (float)(dStack_100 - dStack_100);
  *(float *)(param_1 + 9) = (float)((double)CONCAT44(uVar9,uVar8) - (double)CONCAT44(uVar9,uVar8));
  *(float *)((longlong)param_1 + 0x4c) = fVar4;
  *(ulonglong *)((longlong)param_1 + 0x8c) =
       CONCAT44(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x10));
  bVar3 = *(char *)(param_1 + 10) == '\0';
  uVar2 = *(undefined4 *)(param_3 + 4);
  if (bVar3) {
    uVar2 = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar2;
  uVar2 = *(undefined4 *)(param_3 + 8);
  if (bVar3) {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x15) = uVar2;
  uVar2 = 0;
  if (!bVar3) {
    uVar2 = *(undefined4 *)(param_3 + 0xc);
  }
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
  param_1[0xe] = -local_108;
  param_1[0xf] = -dStack_100;
  param_1[0x10] = CONCAT44(uVar9,uVar8) ^ 0x8000000000000000;
  FUN_14303e858(param_1 + 10,param_1 + 0x16);
  if (*param_3 == '\x01') {
    FUN_1472ea668(1);
  }
  if ((local_e0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149471fae FUN_149471fae body=248 status=ok
// SIG undefined FUN_149471fae(void)

void FUN_149471fae(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108 [96];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 local_98 [96];
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1472ebab8(local_98,param_2,param_1 + 0x50);
  FUN_1472ea582(param_2,local_98,param_1 + 0x100);
  cVar4 = FUN_14303e96b(local_98);
  if (cVar4 != '\0') {
    FUN_1472ebad1(local_108,param_2,local_98);
    FUN_1472ea679(local_108,*(undefined8 *)(param_1 + 8));
    if (local_a0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_a0 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_a0)(local_a0,1);
      }
    }
    if (local_a8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_a8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_a8)(local_a8,1);
      }
    }
  }
  if (local_38 != 0) {
    LOCK();
    puVar2 = (uint *)(local_38 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149472176 FUN_149472176 body=32 status=ok
// SIG undefined FUN_149472176(void)

undefined8 FUN_149472176(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Duplicate Vertices");
  return param_2;
}



// FUNCTION 149472196 FUN_149472196 body=810 status=ok
// SIG undefined FUN_149472196(void)

longlong * FUN_149472196(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
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
  
  uVar5 = DAT_14cc1c100;
  uVar4 = DAT_14cc1ba50;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_78,"NumVertices",1);
  FUN_1400b22c2(local_88,"ReadNumVertices");
  FUN_14946b838(&local_70,local_78,local_88,1);
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
  FUN_1446ddc76(&local_90,"DuplicateVerticesStartAndLength",1);
  FUN_1400b22c2(local_a0,"ReadDuplicateVerticesStartAndLength");
  FUN_1400b22c2(local_b0,"ReadDuplicateVerticesStartAndLength");
  local_e0 = 1;
  local_e8 = local_b0;
  FUN_149466350(&local_70,local_90,local_a0,uVar5);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  FUN_1446ddc76(&local_b8,"DuplicateVertex",1);
  FUN_1400b22c2(local_c8,"ReadDuplicateVertex");
  FUN_1400b22c2(local_d8,"ReadDuplicateVertex");
  local_e0 = 1;
  local_e8 = local_d8;
  FUN_149466350(&local_70,local_b8,local_c8,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494724c2 FUN_1494724c2 body=49 status=ok
// SIG undefined FUN_1494724c2(void)

longlong * FUN_1494724c2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a745da();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1494724f4 FUN_1494724f4 body=336 status=ok
// SIG undefined FUN_1494724f4(void)

void FUN_1494724f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_38,L"ReadNumVertices");
  uVar1 = FUN_149459122(uVar1,local_38);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_48,L"ReadNumDuplicateVertices");
  uVar1 = FUN_149459122(uVar1,local_48);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_58,L"ReadDuplicateVerticesStartAndLength");
  uVar1 = FUN_149459122(uVar1,local_58);
  uVar1 = FUN_1494593ba(uVar1,1,2,0);
  local_78 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_68,L"ReadDuplicateVertex");
  uVar1 = FUN_149459122(uVar1,local_68);
  uVar1 = FUN_1494593ba(uVar1,2,0,0);
  local_78 = 0;
  FUN_149459206(uVar1,2,0,0);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947264e FUN_14947264e body=151 status=ok
// SIG undefined FUN_14947264e(void)

void FUN_14947264e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_149485128();
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
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc1bfd8;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x20;
  return;
}



// FUNCTION 1494726e6 FUN_1494726e6 body=103 status=ok
// SIG undefined FUN_1494726e6(void)

void FUN_1494726e6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,L"ENABLE_DUPLICATED_VERTICES");
  FUN_14588e9a8(param_2,local_28,2);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149472756 FUN_149472756 body=43 status=ok
// SIG undefined FUN_149472756(void)

void FUN_149472756(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceDuplicateVertices.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 149472782 FUN_149472782 body=438 status=ok
// SIG undefined FUN_149472782(void)

void FUN_149472782(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceDuplicateVertices.ush",0,&local_d8,0);
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



// FUNCTION 14947293a FUN_14947293a body=122 status=ok
// SIG undefined FUN_14947293a(void)

longlong FUN_14947293a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_1494729b4();
  if (*param_2 != 0) {
    lVar4 = FUN_144a745da();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      lVar5 = 0;
      if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_14947299c;
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        lVar5 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_14947299c;
      }
    }
  }
  lVar5 = 0;
LAB_14947299c:
  *(longlong *)(lVar3 + 0x28) = lVar5;
  return lVar3;
}



// FUNCTION 1494729b4 FUN_1494729b4 body=148 status=ok
// SIG undefined FUN_1494729b4(void)

undefined8 FUN_1494729b4(undefined8 param_1)

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
  uVar1 = FUN_145ba4f7c();
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



// FUNCTION 149472a4a FUN_149472a4a body=63 status=ok
// SIG undefined FUN_149472a4a(void)

void FUN_149472a4a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  lVar1 = *(longlong *)(param_1 + 0x28);
  *puVar2 = &PTR_FUN_14bcf2760;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x8a8);
  }
  puVar2[1] = uVar3;
  return;
}



// FUNCTION 149472a8a FUN_149472a8a body=65 status=ok
// SIG undefined FUN_149472a8a(void)

undefined4 FUN_149472a8a(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_2[1] == 0x20) && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
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



// FUNCTION 149472acc FUN_149472acc body=165 status=ok
// SIG undefined FUN_149472acc(void)

void FUN_149472acc(longlong param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  lVar2 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar4 * 8);
  FUN_149472b72(&local_1c,*(undefined8 *)(param_2 + 2));
  if (0 < *param_2) {
    lVar5 = 0x24;
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x10);
      uVar7 = 0;
      if (*(longlong *)(lVar3 + -0x10 + lVar5 * 4) != 0) {
        uVar7 = local_1c;
      }
      if (*(longlong *)(lVar3 + lVar5 * 4) == 0) {
        uVar7 = 0;
      }
      puVar1 = (uint *)(*(longlong *)(param_2 + 4) + lVar6 * 4);
      *puVar1 = *puVar1 | uVar7;
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x3e;
    } while (lVar6 < *param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149472b72 FUN_149472b72 body=280 status=ok
// SIG undefined FUN_149472b72(void)

undefined4 * FUN_149472b72(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  
  *param_1 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1bda8) && (FUN_144b3d300(&DAT_14cc1bda8), DAT_14cc1bda8 == -1)) {
    FUN_140056680(&DAT_14cc1bd98,L"ENABLE_DUPLICATED_VERTICES");
    atexit((_func_5014 *)&LAB_144526e80);
    _Init_thread_footer(&DAT_14cc1bda8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1bdb0) && (FUN_144b3d300(&DAT_14cc1bdb0), DAT_14cc1bdb0 == -1)) {
    puVar3 = DAT_14cc1bd98;
    if (DAT_14cc1bda0 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    iVar1 = DAT_14cc1bda0 + -1;
    if (DAT_14cc1bda0 == 0) {
      iVar1 = 0;
    }
    DAT_14cc1bdac = FUN_144a49b4a(iVar1,puVar3);
    _Init_thread_footer(&DAT_14cc1bdb0);
  }
  uVar2 = FUN_149457ca6(param_2,&DAT_14cc1bd98,DAT_14cc1bdac,1);
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 149472c8a FUN_149472c8a body=206 status=ok
// SIG undefined FUN_149472c8a(void)

void FUN_149472c8a(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  iVar1 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar1) {
    lVar3 = *(longlong *)(DAT_14ca8c040 + 0x18);
    puVar9 = (undefined4 *)((longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18));
    iVar2 = *(int *)(param_2 + 0x14);
    lVar4 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar8 * 8);
    lVar12 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + 0x10);
      lVar6 = *(longlong *)(lVar5 + 0x90 + lVar12);
      lVar7 = *(longlong *)(lVar5 + 0x80 + lVar12);
      *puVar9 = *(undefined4 *)(lVar5 + 0x48 + lVar12);
      uVar10 = 0;
      lVar11 = lVar3;
      lVar13 = lVar3;
      if ((lVar6 != 0) && (lVar7 != 0)) {
        uVar10 = *(undefined4 *)(lVar5 + 0xb0 + lVar12);
        lVar11 = lVar7;
        lVar13 = lVar6;
      }
      puVar9[1] = uVar10;
      puVar9[2] = *(undefined4 *)(lVar5 + 0x10 + lVar12);
      *(longlong *)(puVar9 + 4) = lVar13;
      *(longlong *)(puVar9 + 6) = lVar11;
      lVar12 = lVar12 + 0xf8;
      puVar9 = (undefined4 *)((longlong)puVar9 + (longlong)iVar2);
    } while ((longlong)iVar1 * 0xf8 - lVar12 != 0);
  }
  return;
}



// FUNCTION 149472d60 FUN_149472d60 body=95 status=ok
// SIG undefined FUN_149472d60(void)

undefined8 * FUN_149472d60(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145834761(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1494855b6(param_1,iVar1);
      FUN_14948562c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149472dc0 FUN_149472dc0 body=64 status=ok
// SIG undefined FUN_149472dc0(void)

ulonglong FUN_149472dc0(longlong param_1,char *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0x30)) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x1c);
    uVar2 = 0;
    do {
      if ((*(char *)((longlong)plVar1 + -4) == *param_2) && (*plVar1 == *(longlong *)(param_2 + 4)))
      {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 0x11;
    } while ((longlong)*(int *)(param_1 + 0x30) != uVar2);
  }
  return 0xffffffff;
}



// FUNCTION 149472e00 FUN_149472e00 body=238 status=ok
// SIG undefined FUN_149472e00(void)

void FUN_149472e00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x30);
  iVar4 = *(int *)(param_2 + 8) + iVar2;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (*(int *)(param_2 + 0xc) < iVar4) {
    FUN_149485812(param_2);
    iVar2 = *(int *)(param_1 + 0x30);
  }
  if (iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    lVar6 = 0;
    do {
      uVar3 = FUN_149466e4e(param_2);
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar6) != 0) {
        puVar5 = *(undefined2 **)(lVar1 + lVar6);
      }
      FUN_140002266(local_58,L"Read%s",puVar5);
      uVar3 = FUN_149459122(uVar3,local_58);
      FUN_1494592f4(uVar3,*(undefined8 *)(lVar1 + 0x10 + lVar6));
      lVar6 = lVar6 + 0x88;
    } while ((longlong)iVar2 * 0x88 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149472ef0 FUN_149472ef0 body=380 status=ok
// SIG undefined FUN_149472ef0(void)

void FUN_149472ef0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  void *local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = 0;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x30) * 0x88;
    lVar5 = *(longlong *)(param_1 + 0x28) + 0x10;
    do {
      puVar3 = &DAT_149dfb77a;
      if (*(int *)(lVar5 + -8) != 0) {
        puVar3 = *(undefined2 **)(lVar5 + -0x10);
      }
      FUN_145929ff4(local_68,puVar3,lVar5,&local_78);
      lVar5 = lVar5 + 0x88;
      lVar4 = lVar4 + -0x88;
    } while (lVar4 != 0);
  }
  uVar2 = FUN_140b494da(local_68,0,L"UGraphDataInterface");
  iVar1 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
    FUN_1457752be(param_4,iVar1);
  }
  *(undefined8 *)(*param_4 + (longlong)iVar1 * 8) = uVar2;
  lVar4 = (longlong)(int)(uint)uStack_70;
  if (lVar4 != 0) {
    iVar1 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar1 + (uint)uStack_70;
    if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar1) < (uint)uStack_70) {
      FUN_1457752be(param_4,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 8 + *param_4),local_78,lVar4 << 3);
  }
  FUN_145900f28(param_3,param_2,uVar2,0);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947306e FUN_14947306e body=519 status=ok
// SIG undefined FUN_14947306e(void)

void FUN_14947306e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined2 *local_90;
  undefined2 *local_88;
  longlong local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar6 = 0;
    local_78 = param_1;
    do {
      puVar7 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + 8 + lVar6) != 0) {
        puVar7 = *(undefined2 **)(lVar2 + lVar6);
      }
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(param_3 + 1) != 0) {
        puVar4 = (undefined2 *)*param_3;
      }
      local_70 = 0;
      FUN_149458322(*(undefined8 *)(lVar2 + 0x10 + lVar6),&local_68,&local_70);
      puVar5 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar5 = local_68;
      }
      local_98 = puVar7;
      FUN_140002266(&local_58,L"%s %s_%s;\n",puVar5,puVar4);
      iVar3 = local_50 + -1;
      if (local_50 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_2,local_58,iVar3);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x88;
    } while ((longlong)iVar1 * 0x88 != lVar6);
    iVar1 = *(int *)(local_78 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(local_78 + 0x28);
      lVar6 = 0;
      do {
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(lVar2 + 8 + lVar6) != 0) {
          puVar7 = *(undefined2 **)(lVar2 + lVar6);
        }
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(param_3 + 1) != 0) {
          puVar4 = (undefined2 *)*param_3;
        }
        local_70 = 0;
        FUN_149458322(*(undefined8 *)(lVar2 + 0x10 + lVar6),&local_68,&local_70);
        puVar5 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar5 = local_68;
        }
        local_98 = puVar4;
        local_90 = puVar4;
        local_88 = puVar7;
        FUN_140002266(&local_58,L"%s Read%s_%s()\n{\n\treturn %s_%s;\n}\n",puVar5,puVar7);
        iVar3 = local_50 + -1;
        if (local_50 == 0) {
          iVar3 = 0;
        }
        FUN_1400020e8(param_2,local_58,iVar3);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar6 = lVar6 + 0x88;
      } while ((longlong)iVar1 * 0x88 != lVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149473276 FUN_149473276 body=131 status=ok
// SIG undefined FUN_149473276(void)

undefined8 FUN_149473276(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = FUN_1494732f9(DAT_14c951640);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  if (*param_2 != 0) {
    lVar5 = FUN_14081cebe();
    lVar2 = *param_2;
    if (lVar2 != 0) {
      lVar6 = 0;
      if ((lVar5 == 0) || (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 == 0)) goto LAB_1494732da;
      if (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar2;
        }
        goto LAB_1494732da;
      }
    }
  }
  lVar6 = 0;
LAB_1494732da:
  FUN_14947338e(uVar4,lVar6,param_1 + 0x28,uVar1);
  return uVar4;
}



// FUNCTION 1494732f9 FUN_1494732f9 body=148 status=ok
// SIG undefined FUN_1494732f9(void)

undefined8 FUN_1494732f9(undefined8 param_1)

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
  uVar1 = FUN_145ba5150();
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



// FUNCTION 14947338e FUN_14947338e body=576 status=ok
// SIG undefined FUN_14947338e(void)

void FUN_14947338e(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x30) = param_2;
  FUN_149472d60(param_1 + 0x38,param_3);
  *(undefined4 *)(param_1 + 0x48) = param_4;
  iVar7 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar7 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x38);
    lVar10 = 0;
    uVar12 = 0;
    do {
      uVar4 = FUN_140f4f540();
      uVar5 = FUN_140f4f540();
      FUN_14452aaf6(uVar5,&local_68,*(undefined8 *)(lVar11 + 0x10 + lVar10));
      FUN_140fc8a88(uVar4,&local_58,*local_68);
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      *(uint *)(lVar11 + 0x28 + lVar10) = uVar12;
      uVar12 = uVar12 + local_50;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 0x88;
    } while ((longlong)iVar7 * 0x88 != lVar10);
    iVar7 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar7 + uVar12;
    if ((uint)(*(int *)(param_1 + 0x5c) - iVar7) < uVar12) {
      FUN_149485882(param_1 + 0x50);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x38);
    lVar10 = (longlong)*(int *)(param_1 + 0x40) * 0x88 + lVar11;
    do {
      uVar4 = FUN_140f4f540();
      uVar5 = FUN_140f4f540();
      FUN_14452aaf6(uVar5,&local_68,*(undefined8 *)(lVar11 + 0x10));
      FUN_140fc8a88(uVar4,&local_58,*local_68);
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (0 < local_50) {
        lVar6 = 0;
        do {
          uVar8 = (ulonglong)*(uint *)(lVar11 + 0x28) + lVar6;
          iVar7 = (int)uVar8;
          if ((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x58))) {
            lVar9 = (uVar8 & 0xffffffff) * 8;
            *(int *)(*(longlong *)(param_1 + 0x50) + lVar9) =
                 *(int *)(local_58 + 4 + lVar6 * 8) + *(int *)(lVar11 + 0x24);
            *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 4 + lVar9) =
                 *(undefined4 *)(local_58 + lVar6 * 8);
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < local_50);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + 0x88;
    } while (lVar11 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494735d0 FUN_1494735d0 body=69 status=ok
// SIG undefined FUN_1494735d0(void)

undefined8 FUN_1494735d0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x58,0x10);
  FUN_149473616(uVar1,*(undefined8 *)(param_1 + 0x60),param_1 + 0x38,*(undefined4 *)(param_1 + 0x48)
                ,param_1 + 0x50);
  return uVar1;
}



// FUNCTION 149473616 FUN_149473616 body=365 status=ok
// SIG undefined FUN_149473616(void)

undefined8 *
FUN_149473616(undefined8 *param_1,longlong param_2,longlong *param_3,int param_4,undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *_Dst;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_1 = &PTR_FUN_14bcf3460;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(int *)(param_1 + 2) = param_4;
  if (param_4 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    FUN_1447403be(plVar1);
    _Dst = (void *)*plVar1;
  }
  memset(_Dst,0,(longlong)param_4);
  FUN_1494737b4(param_1 + 3,param_5);
  FUN_14946d3ea(param_1 + 5,*(undefined4 *)(param_1 + 4));
  if ((param_2 != 0) && ((longlong)(int)param_3[1] != 0)) {
    lVar8 = *param_3;
    lVar4 = (longlong)(int)param_3[1] * 0x88 + lVar8;
    do {
      puVar5 = (undefined8 *)FUN_1494bbf94(param_2,lVar8 + 0x18);
      if (*(int *)(puVar5 + 1) + *(int *)(lVar8 + 0x24) <= *(int *)(param_1 + 2)) {
        iVar2 = *(int *)(lVar8 + 0x28);
        memcpy((void *)((longlong)*(int *)(lVar8 + 0x24) + *plVar1),(void *)*puVar5,
               (longlong)*(int *)(puVar5 + 1));
        iVar3 = *(int *)(puVar5 + 3);
        if (0 < iVar3) {
          lVar7 = 0;
          lVar9 = 0;
          do {
            lVar6 = iVar2 + lVar9;
            if ((-1 < lVar6) && (lVar6 < *(int *)(param_1 + 6))) {
              FUN_1447a122a(param_1[5] + (longlong)iVar2 * 0x10 + lVar7,puVar5[2] + lVar7);
              iVar3 = *(int *)(puVar5 + 3);
            }
            lVar9 = lVar9 + 1;
            lVar7 = lVar7 + 0x10;
          } while (lVar9 < iVar3);
        }
      }
      lVar8 = lVar8 + 0x88;
    } while (lVar8 != lVar4);
  }
  return param_1;
}



// FUNCTION 149473784 FUN_149473784 body=47 status=ok
// SIG undefined FUN_149473784(void)

void FUN_149473784(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 1494737b4 FUN_1494737b4 body=88 status=ok
// SIG undefined FUN_1494737b4(void)

undefined8 * FUN_1494737b4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149485908(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14947381e FUN_14947381e body=594 status=ok
// SIG undefined FUN_14947381e(void)

void FUN_14947381e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  uint local_78;
  undefined8 local_74;
  undefined8 local_68;
  longlong local_60;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_1 + 0x38;
  *(undefined4 *)(param_1 + 0x40) = 0;
  local_90 = param_2;
  if (*(int *)(param_1 + 0x44) < 0) {
    FUN_149484272(local_98,0);
  }
  local_a0 = param_1 + 0x48;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) < 0) {
    FUN_1471b0e7a(local_a0,0);
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    local_80 = local_90 + 0x188;
    lVar1 = local_90 + 0x70;
    local_88 = local_90 + 0x198;
    lVar6 = 8;
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x28);
      local_78 = *(uint *)(*(longlong *)(param_1 + 0x18) + 4 + lVar7 * 8);
      uVar4 = *(int *)(lVar3 + lVar6) / (int)local_78;
      if ((int)uVar4 < 2) {
        uVar4 = 1;
      }
      local_49 = 0;
      local_58 = L"Optimus.GraphDataInterfaceInnerBuffer";
      local_68 = 0;
      if (DAT_14ca84e48 <= local_78) {
        local_78 = DAT_14ca84e48;
      }
      local_78 = local_78 + (local_78 == 0);
      if (DAT_14ca84e48 <= uVar4) {
        uVar4 = DAT_14ca84e48;
      }
      local_74 = CONCAT44(0x10109,uVar4 + (uVar4 == 0));
      local_a8 = &local_49;
      uVar5 = FUN_144738de6(local_80,lVar1,&local_58,&local_78);
      iVar2 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
        FUN_1471a5e98(local_98,iVar2);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 8) = uVar5;
      local_60 = *(longlong *)
                  (*(longlong *)(param_1 + 0x38) + (longlong)(*(int *)(param_1 + 0x40) + -1) * 8);
      uVar4 = local_78 >> 8;
      local_78 = local_78 & 0xffffff00;
      local_74 = 0xffffffff00000000;
      local_68 = 0;
      if ((*(byte *)(local_60 + 0x68) & 0x80) != 0) {
        local_78 = CONCAT31((int3)uVar4,0x1c);
      }
      uVar5 = FUN_14475683e(local_88,lVar1,local_60 + 8,&local_78);
      iVar2 = *(int *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
        FUN_1471b0eda(local_a0,iVar2);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 8) = uVar5;
      local_a8 = (undefined1 *)((ulonglong)local_a8 & 0xffffffffffffff00);
      FUN_1447759b4(local_90,*(undefined8 *)
                              (*(longlong *)(param_1 + 0x38) +
                              (longlong)(*(int *)(param_1 + 0x40) + -1) * 8),
                    *(undefined8 *)(lVar3 + -8 + lVar6),(longlong)*(int *)(lVar3 + lVar6));
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < *(int *)(param_1 + 0x20));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149473a72 FUN_149473a72 body=121 status=ok
// SIG undefined FUN_149473a72(void)

void FUN_149473a72(longlong param_1,longlong param_2)

{
  longlong lVar1;
  void *_Dst;
  int iVar2;
  
  if (0 < *(int *)(param_2 + 4)) {
    iVar2 = 0;
    do {
      _Dst = (void *)((longlong)iVar2 * (longlong)*(int *)(param_2 + 0x14) +
                     (longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18));
      memcpy(_Dst,*(void **)(param_1 + 8),(longlong)*(int *)(param_1 + 0x10));
      if (0 < *(int *)(param_1 + 0x20)) {
        lVar1 = 0;
        do {
          *(undefined8 *)
           ((longlong)_Dst + (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar1 * 8)) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar1 * 8);
          lVar1 = lVar1 + 1;
        } while (lVar1 < *(int *)(param_1 + 0x20));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_2 + 4));
  }
  return;
}



// FUNCTION 149473af4 FUN_149473af4 body=32 status=ok
// SIG undefined FUN_149473af4(void)

undefined8 FUN_149473af4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"HalfEdge");
  return param_2;
}



// FUNCTION 149473b14 FUN_149473b14 body=586 status=ok
// SIG undefined FUN_149473b14(void)

longlong * FUN_149473b14(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 local_c8;
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
  
  uVar5 = DAT_14cc1c100;
  uVar4 = DAT_14cc1c0e8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1446ddc76(&local_78,"EdgesPerVertex",1);
  FUN_1400b22c2(local_88,"ReadEdge");
  FUN_1400b22c2(local_98,"ReadNumVertices");
  local_d0 = (undefined1 *)((ulonglong)local_d0 & 0xffffffffffffff00);
  local_d8 = local_98;
  FUN_149466350(&local_70,local_78,local_88,uVar5);
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
  FUN_1446ddc76(&local_a0,"TwinEdges",1);
  FUN_1400b22c2(local_b0,"ReadTwinEdge");
  FUN_1400b22c2(local_c0,"ReadNumTriangles");
  local_c8 = 0;
  local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,3);
  local_d0 = local_c0;
  FUN_149473d60(&local_70,local_a0,local_b0,uVar4);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_149482fea(param_2,iVar1);
  }
  lVar3 = *param_2;
  lVar6 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = local_70;
  *(undefined8 *)(lVar3 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar6) = local_68;
  local_68 = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar6) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = local_60._4_4_;
  local_60 = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x24 + lVar6) = local_50._4_4_;
  local_50 = 0;
  *(undefined1 *)(lVar3 + 0x2c + lVar6) = local_44;
  *(undefined4 *)(lVar3 + 0x28 + lVar6) = local_48;
  FUN_14946649a();
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149473d60 FUN_149473d60 body=345 status=ok
// SIG undefined FUN_149473d60(void)

undefined8 *
FUN_149473d60(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             int param_5,longlong *param_6,undefined1 param_7)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  ulonglong *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = param_2;
  param_1[1] = 0;
  iVar2 = (int)param_3[1];
  pvVar1 = (void *)*param_3;
  *(int *)(param_1 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar2,0);
    memcpy((void *)param_1[1],pvVar1,(longlong)iVar2 * 2);
  }
  local_58 = (void *)0x0;
  local_50 = (int)param_6[1];
  lVar3 = (longlong)local_50;
  pvVar1 = (void *)*param_6;
  local_60 = param_4;
  if (lVar3 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar1,lVar3 * 2);
  }
  local_70 = &local_60;
  local_68 = &local_48;
  FUN_1494818a2(param_1 + 3);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar2 = 1;
  if (1 < param_5) {
    iVar2 = param_5;
  }
  *(int *)(param_1 + 5) = iVar2;
  *(undefined1 *)((longlong)param_1 + 0x2c) = param_7;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149473eba FUN_149473eba body=49 status=ok
// SIG undefined FUN_149473eba(void)

longlong * FUN_149473eba(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a745da();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149473eec FUN_149473eec body=333 status=ok
// SIG undefined FUN_149473eec(void)

void FUN_149473eec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_38,L"ReadNumVertices");
  uVar1 = FUN_149459122(uVar1,local_38);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_48,L"ReadNumTriangles");
  uVar1 = FUN_149459122(uVar1,local_48);
  FUN_1494593ba(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_58,L"ReadEdge");
  uVar1 = FUN_149459122(uVar1,local_58);
  uVar1 = FUN_1494593ba(uVar1,1,0,0);
  local_78 = 0;
  FUN_149459206(uVar1,2,0,0);
  uVar1 = FUN_149466e4e(param_2);
  FUN_140056680(local_68,L"ReadTwinEdge");
  uVar1 = FUN_149459122(uVar1,local_68);
  uVar1 = FUN_1494593ba(uVar1,1,0,0);
  local_78 = 0;
  FUN_149459206(uVar1,2,0,0);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149474042 FUN_149474042 body=43 status=ok
// SIG undefined FUN_149474042(void)

void FUN_149474042(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14743cff1(L"/Plugin/Optimus/Private/DataInterfaceHalfEdge.ush",0);
  FUN_1407c8a86(uVar1,0x14,param_2);
  return;
}



// FUNCTION 14947406e FUN_14947406e body=438 status=ok
// SIG undefined FUN_14947406e(void)

void FUN_14947406e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_14743cfee(L"/Plugin/Optimus/Private/DataInterfaceHalfEdge.ush",0,&local_d8,0);
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



// FUNCTION 149474226 FUN_149474226 body=155 status=ok
// SIG undefined FUN_149474226(void)

longlong FUN_149474226(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1494742c1(DAT_14c951640);
  if (*param_2 != 0) {
    lVar3 = FUN_144a745da();
    param_2 = (longlong *)*param_2;
    if ((((param_2 != (longlong *)0x0) && (lVar3 != 0)) && (lVar1 = param_2[2], lVar1 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *(longlong **)(lVar2 + 0x28) = param_2;
      lVar3 = (**(code **)(*param_2 + 0xa90))(param_2);
      if (lVar3 == 0) {
        return lVar2;
      }
      FUN_149474356(lVar2 + 0x30,*(undefined4 *)(lVar3 + 8));
      return lVar2;
    }
  }
  *(undefined8 *)(lVar2 + 0x28) = 0;
  return lVar2;
}



// FUNCTION 1494742c1 FUN_1494742c1 body=148 status=ok
// SIG undefined FUN_1494742c1(void)

undefined8 FUN_1494742c1(undefined8 param_1)

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
  uVar1 = FUN_145ba5324();
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



// FUNCTION 149474356 FUN_149474356 body=122 status=ok
// SIG undefined FUN_149474356(void)

void FUN_149474356(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149485cc0(param_1,iVar1);
    }
    FUN_149485ca8((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149485d54(param_1,param_2,iVar1 - param_2);
    FUN_149485db6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1494743d2 FUN_1494743d2 body=90 status=ok
// SIG undefined FUN_1494743d2(void)

void FUN_1494743d2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  lVar1 = *(longlong *)(param_1 + 0x28);
  *puVar2 = &PTR_FUN_14bcf3df0;
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x8a8);
  }
  puVar2[1] = uVar3;
  puVar2[2] = param_1 + 0x30;
  *(undefined1 *)(puVar2 + 3) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  return;
}



// FUNCTION 14947442c FUN_14947442c body=133 status=ok
// SIG undefined FUN_14947442c(void)

undefined8 FUN_14947442c(longlong param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  
  if (((param_2[1] == 0x40) && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) &&
     (plVar2 = (longlong *)plVar1[8], (int)plVar2[1] == *(int *)(*(longlong *)(param_1 + 0x10) + 8))
     ) {
    iVar5 = (**(code **)(*plVar1 + 0x90))();
    lVar3 = *(longlong *)(*plVar2 + (longlong)iVar5 * 8);
    if (*(int *)(lVar3 + 0x18) == *param_2) {
      plVar1 = *(longlong **)(lVar3 + 0x28);
      cVar4 = FUN_147cce9ce(lVar3 + 0x3d0);
      if ((cVar4 != '\0') ||
         ((cVar4 = (**(code **)(*plVar1 + 0x48))(plVar1), cVar4 != '\0' &&
          (cVar4 = FUN_1461c3a34(lVar3 + 0xb8), cVar4 != '\0')))) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1494744b2 FUN_1494744b2 body=559 status=ok
// SIG undefined FUN_1494744b2(void)

void FUN_1494744b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = FUN_144735828(&DAT_14ca63b10,param_2,4);
  uVar5 = local_68 >> 8;
  local_68 = local_68 & 0xffffff00;
  uStack_64 = 0;
  uStack_60 = 0xffffffff;
  local_58 = 0;
  if ((*(byte *)(local_50 + 0x68) & 0x80) != 0) {
    local_68 = CONCAT31((int3)uVar5,0x1c);
  }
  lVar3 = param_2 + 0x198;
  lVar1 = param_2 + 0x70;
  uVar8 = FUN_14475683e(lVar3,lVar1,local_50 + 8,&local_68);
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  iVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  lVar11 = (longlong)iVar7;
  lVar10 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + lVar11 * 8);
  cVar6 = FUN_147cce9ce(lVar10 + 0x3d0);
  if (cVar6 == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    lVar9 = **(longlong **)(param_1 + 0x10);
    if (*(char *)(lVar9 + lVar11 * 0x18) == '\0') {
      FUN_1494746e2(lVar9 + lVar11 * 0x18,param_2,lVar10);
      lVar9 = **(longlong **)(param_1 + 0x10);
    }
    lVar10 = *(longlong *)(lVar9 + 8 + lVar11 * 0x18);
    local_68 = (uint)lVar10;
    uStack_64 = (undefined4)((ulonglong)lVar10 >> 0x20);
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    lVar10 = FUN_144735dd8(param_2,&local_68,0);
    puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    uVar5 = local_68 >> 8;
    local_68 = local_68 & 0xffffff00;
    uStack_64 = 0;
    uStack_60 = 0xffffffff;
    local_58 = 0;
    if ((*(byte *)(lVar10 + 0x68) & 0x80) != 0) {
      local_68 = CONCAT31((int3)uVar5,0x1c);
    }
    local_50 = lVar10;
    uVar8 = FUN_14475683e(lVar3,lVar1,lVar10 + 8,&local_68);
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    lVar10 = *(longlong *)(**(longlong **)(param_1 + 0x10) + 0x10 + lVar11 * 0x18);
    local_68 = (uint)lVar10;
    uStack_64 = (undefined4)((ulonglong)lVar10 >> 0x20);
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    lVar10 = FUN_144735dd8(param_2,&local_68,0);
    puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    uVar5 = local_68 >> 8;
    local_68 = local_68 & 0xffffff00;
    uStack_64 = 0;
    uStack_60 = 0xffffffff;
    local_58 = 0;
    if ((*(byte *)(lVar10 + 0x68) & 0x80) != 0) {
      local_68 = CONCAT31((int3)uVar5,0x1c);
    }
    local_50 = lVar10;
    uVar8 = FUN_14475683e(lVar3,lVar1,lVar10 + 8,&local_68);
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 1;
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x20) = uVar8;
  }
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494746e2 FUN_1494746e2 body=677 status=ok
// SIG undefined FUN_1494746e2(void)

void FUN_1494746e2(undefined1 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 *local_b8;
  undefined **local_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined **local_90;
  ulonglong local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = &PTR_FUN_14aa68d10;
  local_78 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b0 = &PTR_FUN_14aa68d10;
  local_98 = 0;
  local_b8 = param_1;
  FUN_147ccdc0b(param_3,&local_90,&local_b0);
  local_c8 = &local_49;
  local_49 = 0;
  local_58 = L"Optimus.VertexToEdge";
  uVar7 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar7 = DAT_14ca84e48;
  }
  local_68 = 0x10109;
  local_70 = uVar7 + (uVar7 == 0);
  local_60 = 0;
  uVar7 = DAT_14ca84e48;
  if ((uint)uStack_80 < DAT_14ca84e48) {
    uVar7 = (uint)uStack_80;
  }
  local_6c = uVar7 + (uVar7 == 0);
  uVar5 = FUN_144738de6(param_2 + 0x188,param_2 + 0x70);
  puVar4 = local_b8;
  uVar8 = (longlong)&local_88 + ((longlong)local_88 >> 0x18);
  if ((local_88 & 1) == 0) {
    uVar8 = local_88;
  }
  local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffffffffff00);
  FUN_1447759b4(param_2,uVar5,uVar8,(longlong)(int)(uint)uStack_80 << 2);
  plVar6 = (longlong *)FUN_1449609de(param_2,uVar5);
  puVar2 = (undefined8 *)*plVar6;
  puVar3 = *(undefined8 **)(puVar4 + 8);
  if (puVar3 != puVar2) {
    *(undefined8 **)(puVar4 + 8) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  local_49 = 0;
  local_58 = L"Optimus.EdgeToTwinEdge";
  local_68 = 0x10109;
  uVar7 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar7 = DAT_14ca84e48;
  }
  local_60 = 0;
  local_70 = uVar7 + (uVar7 == 0);
  uVar7 = DAT_14ca84e48;
  if ((uint)uStack_a0 < DAT_14ca84e48) {
    uVar7 = (uint)uStack_a0;
  }
  local_6c = uVar7 + (uVar7 == 0);
  local_c8 = &local_49;
  uVar5 = FUN_144738de6(param_2 + 0x188,param_2 + 0x70);
  uVar8 = (longlong)&local_a8 + ((longlong)local_a8 >> 0x18);
  if ((local_a8 & 1) == 0) {
    uVar8 = local_a8;
  }
  local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffffffffff00);
  FUN_1447759b4(param_2,uVar5,uVar8,(longlong)(int)(uint)uStack_a0 << 2);
  plVar6 = (longlong *)FUN_1449609de(param_2,uVar5);
  puVar2 = (undefined8 *)*plVar6;
  puVar3 = *(undefined8 **)(puVar4 + 0x10);
  if (puVar3 != puVar2) {
    *(undefined8 **)(puVar4 + 0x10) = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  *puVar4 = 1;
  if (local_a8 != 0 && (local_a8 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0 && (local_88 & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149474988 FUN_149474988 body=333 status=ok
// SIG undefined FUN_149474988(void)

void FUN_149474988(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  
  iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
  iVar1 = *(int *)(param_2 + 4);
  if (0 < (longlong)iVar1) {
    lVar2 = *(longlong *)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x40) + (longlong)iVar4 * 8);
    puVar11 = (undefined4 *)((longlong)*(int *)(param_2 + 0x10) + *(longlong *)(param_2 + 0x18));
    iVar4 = *(int *)(param_2 + 0x14);
    lVar10 = *(longlong *)(lVar2 + 0x428);
    if (*(longlong *)(lVar2 + 0x428) == 0) {
      lVar10 = *(longlong *)(DAT_14ca8c028 + 0x18);
    }
    lVar9 = *(longlong *)(lVar2 + 0x438);
    if (*(longlong *)(lVar2 + 0x438) == 0) {
      lVar9 = *(longlong *)(DAT_14ca8c028 + 0x18);
    }
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + 0x10);
      puVar7 = (undefined4 *)(lVar3 + lVar8 + 0x48);
      if (*(char *)(param_2 + 8) != '\0') {
        puVar7 = (undefined4 *)(lVar2 + 0xec);
      }
      *puVar11 = *puVar7;
      if (*(char *)(param_2 + 8) == '\x01') {
        uVar5 = FUN_147d14f76();
      }
      else {
        uVar5 = *(undefined4 *)(lVar3 + 8 + lVar8);
      }
      puVar11[1] = uVar5;
      uVar6 = 0;
      uVar5 = 0;
      if (*(char *)(param_2 + 8) == '\0') {
        uVar5 = *(undefined4 *)(lVar3 + 4 + lVar8);
      }
      puVar11[2] = uVar5;
      if (*(char *)(param_2 + 8) == '\0') {
        uVar6 = *(undefined4 *)(lVar3 + 0x10 + lVar8);
      }
      puVar11[3] = uVar6;
      *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(puVar11 + 6) = *(undefined8 *)(param_1 + 0x28);
      puVar11[8] = (uint)*(byte *)(param_1 + 0x18);
      *(longlong *)(puVar11 + 10) = lVar10;
      *(longlong *)(puVar11 + 0xc) = lVar9;
      lVar8 = lVar8 + 0xf8;
      puVar11 = (undefined4 *)((longlong)puVar11 + (longlong)iVar4);
    } while ((longlong)iVar1 * 0xf8 != lVar8);
  }
  return;
}



// FUNCTION 149474b04 FUN_149474b04 body=45 status=ok
// SIG undefined FUN_149474b04(void)

longlong FUN_149474b04(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474b40 FUN_149474b40 body=45 status=ok
// SIG undefined FUN_149474b40(void)

longlong FUN_149474b40(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c9dec8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474b74 FUN_149474b74 body=89 status=ok
// SIG undefined FUN_149474b74(void)

undefined8 * FUN_149474b74(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  _Src = *(void **)(param_1 + 0x98);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 149474bce FUN_149474bce body=57 status=ok
// SIG undefined FUN_149474bce(void)

undefined8 * FUN_149474bce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474c08 FUN_149474c08 body=42 status=ok
// SIG undefined FUN_149474c08(void)

undefined8 FUN_149474c08(void)

{
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/Actions\\OptimusAction.h"
                ,0x2a,L"Pure virtual not implemented (%s)",L"FOptimusAction::Do");
  return 0;
}



// FUNCTION 149474c32 FUN_149474c32 body=42 status=ok
// SIG undefined FUN_149474c32(void)

undefined8 FUN_149474c32(void)

{
  FUN_140033559(".\\../Plugins/Animation/DeformerGraph/Source/OptimusCore/Private/Actions\\OptimusAction.h"
                ,0x2d,L"Pure virtual not implemented (%s)",L"FOptimusAction::Undo");
  return 0;
}



// FUNCTION 149474c5c FUN_149474c5c body=57 status=ok
// SIG undefined FUN_149474c5c(void)

undefined8 * FUN_149474c5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474c96 FUN_149474c96 body=38 status=ok
// SIG undefined FUN_149474c96(void)

undefined8 FUN_149474c96(undefined8 param_1,int param_2)

{
  FUN_14947ba08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474cbc FUN_149474cbc body=57 status=ok
// SIG undefined FUN_149474cbc(void)

undefined8 * FUN_149474cbc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474cf6 FUN_149474cf6 body=57 status=ok
// SIG undefined FUN_149474cf6(void)

undefined8 * FUN_149474cf6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474d30 FUN_149474d30 body=38 status=ok
// SIG undefined FUN_149474d30(void)

undefined8 FUN_149474d30(undefined8 param_1,int param_2)

{
  FUN_14947bff6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474d56 FUN_149474d56 body=38 status=ok
// SIG undefined FUN_149474d56(void)

undefined8 FUN_149474d56(undefined8 param_1,int param_2)

{
  FUN_14947c1ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474d7c FUN_149474d7c body=38 status=ok
// SIG undefined FUN_149474d7c(void)

undefined8 FUN_149474d7c(undefined8 param_1,int param_2)

{
  FUN_14947c3f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474da2 FUN_149474da2 body=38 status=ok
// SIG undefined FUN_149474da2(void)

undefined8 FUN_149474da2(undefined8 param_1,int param_2)

{
  FUN_14947c5de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474dc8 FUN_149474dc8 body=38 status=ok
// SIG undefined FUN_149474dc8(void)

undefined8 FUN_149474dc8(undefined8 param_1,int param_2)

{
  FUN_14947c7ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474dee FUN_149474dee body=38 status=ok
// SIG undefined FUN_149474dee(void)

undefined8 FUN_149474dee(undefined8 param_1,int param_2)

{
  FUN_14947ca7e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474e14 FUN_149474e14 body=38 status=ok
// SIG undefined FUN_149474e14(void)

undefined8 FUN_149474e14(undefined8 param_1,int param_2)

{
  FUN_14947d522();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474e3a FUN_149474e3a body=38 status=ok
// SIG undefined FUN_149474e3a(void)

undefined8 FUN_149474e3a(undefined8 param_1,int param_2)

{
  FUN_14947d766();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474e74 FUN_149474e74 body=38 status=ok
// SIG undefined FUN_149474e74(void)

undefined8 FUN_149474e74(undefined8 param_1,int param_2)

{
  FUN_14947d9e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474e9a FUN_149474e9a body=38 status=ok
// SIG undefined FUN_149474e9a(void)

undefined8 FUN_149474e9a(undefined8 param_1,int param_2)

{
  FUN_14947dc2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474ec0 FUN_149474ec0 body=38 status=ok
// SIG undefined FUN_149474ec0(void)

undefined8 FUN_149474ec0(undefined8 param_1,int param_2)

{
  FUN_14947de52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474ee6 FUN_149474ee6 body=38 status=ok
// SIG undefined FUN_149474ee6(void)

undefined8 FUN_149474ee6(undefined8 param_1,int param_2)

{
  FUN_14947e0d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474f0c FUN_149474f0c body=38 status=ok
// SIG undefined FUN_149474f0c(void)

undefined8 FUN_149474f0c(undefined8 param_1,int param_2)

{
  FUN_14947e3a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474f32 FUN_149474f32 body=38 status=ok
// SIG undefined FUN_149474f32(void)

undefined8 FUN_149474f32(undefined8 param_1,int param_2)

{
  FUN_14947e634();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474f58 FUN_149474f58 body=38 status=ok
// SIG undefined FUN_149474f58(void)

undefined8 FUN_149474f58(undefined8 param_1,int param_2)

{
  FUN_14947ec22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474f7e FUN_149474f7e body=38 status=ok
// SIG undefined FUN_149474f7e(void)

undefined8 FUN_149474f7e(undefined8 param_1,int param_2)

{
  FUN_14947ea48();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474fa4 FUN_149474fa4 body=38 status=ok
// SIG undefined FUN_149474fa4(void)

undefined8 FUN_149474fa4(undefined8 param_1,int param_2)

{
  FUN_14947ec22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149474fca FUN_149474fca body=77 status=ok
// SIG undefined FUN_149474fca(void)

void FUN_149474fca(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x18);
  uVar2 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x28);
  uVar3 = FUN_149494c46(uVar1);
  FUN_1494cc658(uVar3,uVar1,uVar2);
  return;
}



// FUNCTION 149475018 FUN_149475018 body=77 status=ok
// SIG undefined FUN_149475018(void)

void FUN_149475018(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x18);
  uVar2 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x28);
  uVar3 = FUN_149494c46(uVar1);
  FUN_1494cc474(uVar3,uVar1,uVar2);
  return;
}



// FUNCTION 149475066 FUN_149475066 body=38 status=ok
// SIG undefined FUN_149475066(void)

undefined8 FUN_149475066(undefined8 param_1,int param_2)

{
  FUN_14947f1d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14947508c FUN_14947508c body=38 status=ok
// SIG undefined FUN_14947508c(void)

undefined8 FUN_14947508c(undefined8 param_1,int param_2)

{
  FUN_14947f1d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494750be FUN_1494750be body=38 status=ok
// SIG undefined FUN_1494750be(void)

undefined8 FUN_1494750be(undefined8 param_1,int param_2)

{
  FUN_14947f1d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1494750f0 FUN_1494750f0 body=38 status=ok
// SIG undefined FUN_1494750f0(void)

undefined8 FUN_1494750f0(undefined8 param_1,int param_2)

{
  FUN_14947f4ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149475116 FUN_149475116 body=38 status=ok
// SIG undefined FUN_149475116(void)

undefined8 FUN_149475116(undefined8 param_1,int param_2)

{
  FUN_14947f7d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14947513c FUN_14947513c body=38 status=ok
// SIG undefined FUN_14947513c(void)

undefined8 FUN_14947513c(undefined8 param_1,int param_2)

{
  FUN_14947fa62();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149475162 FUN_149475162 body=38 status=ok
// SIG undefined FUN_149475162(void)

undefined8 FUN_149475162(undefined8 param_1,int param_2)

{
  FUN_14947fdd6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


