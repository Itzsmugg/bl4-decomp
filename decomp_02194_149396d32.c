// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149396d32 FUN_149396d32 body=255 status=ok
// SIG undefined FUN_149396d32(void)

void FUN_149396d32(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  int local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_149396e32(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149396e32 FUN_149396e32 body=696 status=ok
// SIG undefined FUN_149396e32(void)

undefined4 FUN_149396e32(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
  FUN_144a882a8(local_50,&local_60,L".SetUseHighPrecisionSkinWeights");
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_1444bc65d(param_1[5],param_1 + 0x68,local_50,param_2);
  if ((param_3 & (byte)uVar3) == 1) {
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94660;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = &LAB_14939718e;
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14930926e(plVar5,iVar1);
    }
    lVar7 = *plVar5;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(undefined8 **)(lVar7 + lVar8) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = local_58;
    local_58 = 0;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc946d0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3);
    puVar2[4] = &LAB_149397192;
    lVar7 = plVar5[1];
    uVar4 = (int)lVar7 + 1;
    *(uint *)(plVar5 + 1) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar4) {
      FUN_14930926e(plVar5);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)(int)lVar7 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
    *(undefined8 **)(lVar8 + lVar7) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = local_58;
    local_58 = 0;
    FUN_1449db362();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493970ee FUN_1493970ee body=32 status=ok
// SIG undefined FUN_1493970ee(void)

undefined8 FUN_1493970ee(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SkeletalMeshNode");
  return param_2;
}



// FUNCTION 14939710e FUN_14939710e body=128 status=ok
// SIG undefined FUN_14939710e(void)

undefined8 FUN_14939710e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3b0);
  if (lVar1 != 0) {
    lVar2 = FUN_144a85a6c();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar1 = *(longlong *)(param_1 + 0x3b0), lVar1 != 0)) {
      lVar2 = FUN_144a85a6c();
      if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x3b0);
      }
      return uVar3;
    }
  }
  uVar3 = FUN_144a85a6c();
  return uVar3;
}



// FUNCTION 1493971bd FUN_1493971bd body=399 status=ok
// SIG undefined FUN_1493971bd(void)

ulonglong FUN_1493971bd(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_1493972f3;
  }
  FUN_1444be556(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_1493972de:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0x15))
    goto LAB_1493972de;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_14939724e:
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_58;
      pvVar1 = (void *)*param_2;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_68;
      pvVar1 = (void *)*param_3;
      if (lVar6 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,pvVar1,lVar6 * 2);
      }
      FUN_1444ba954(uVar5,&local_70,&local_60);
      goto LAB_1493972de;
    }
    uVar5 = FUN_14930380a(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_14939724e;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_1493972f3:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14939734d FUN_14939734d body=263 status=ok
// SIG undefined FUN_14939734d(void)

ulonglong FUN_14939734d(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_140c54a24(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
    }
    FUN_1444ba954(uVar2,&local_50,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149397458 FUN_149397458 body=56 status=ok
// SIG undefined FUN_149397458(void)

void FUN_149397458(void)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1427dc336(local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149397492 FUN_149397492 body=317 status=ok
// SIG undefined FUN_149397492(void)

void FUN_149397492(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_48);
  FUN_144a882a8(local_38,&local_48,L".GetAssetClassName");
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_48 = (wchar_t *)0x0;
  uStack_40 = 0;
  FUN_1444bba6a(param_1[5],param_1 + 0x5a,local_38,&local_48);
  lVar2 = FUN_144a85a6c();
  local_28 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_28,&local_58);
  if ((int)uStack_40 == local_50) {
    bVar3 = true;
    if (1 < (int)uStack_40) {
      iVar1 = wcscmp(local_48,local_58);
      bVar3 = iVar1 == 0;
    }
  }
  else {
    bVar3 = local_50 + (int)uStack_40 == 1;
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8(local_58);
  }
  if (bVar3) {
    lVar2 = FUN_144a85a6c();
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar2);
    }
    param_1[0x76] = lVar2;
    *(undefined1 *)(param_1 + 0x59) = 1;
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493975d0 FUN_1493975d0 body=42 status=ok
// SIG undefined FUN_1493975d0(void)

ulonglong FUN_1493975d0(longlong *param_1)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  undefined7 uVar3;
  undefined8 uVar2;
  
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar1 = 1;
  if ((char)param_1[0x59] == '\0') {
    uVar2 = (**(code **)(*param_1 + 0x300))();
    uVar1 = (undefined1)param_1[0x59];
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
  }
  return CONCAT71(uVar3,uVar1) & 0xffffffffffffff01;
}



// FUNCTION 1493975fa FUN_1493975fa body=3636 status=ok
// SIG undefined FUN_1493975fa(void)

void FUN_1493975fa(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_98 [44];
  undefined1 local_6c [4];
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1493929f2();
  if (param_2 != 0) {
    lVar5 = FUN_145a95408();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) == lVar5 + 0x30)) {
      local_48 = (**(code **)(*param_1 + 0x2e8))(param_1);
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_68);
      FUN_144a882a8(local_58,&local_68,L".GetUseHighPrecisionSkinWeights");
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_1444bc4d9(*(undefined8 *)(param_2 + 0x28),param_1 + 0x68,local_58,local_6c);
      if (cVar3 != '\0') {
        uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar6 = (longlong *)FUN_149308cea(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14a541050;
        uVar7 = FUN_144a3f946();
        puVar2[2] = uVar7;
        *puVar2 = &PTR_FUN_14bc94660;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3,param_1);
        puVar2[4] = &LAB_14939718e;
        iVar1 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar1 + 1U) {
          FUN_14930926e(plVar6,iVar1);
        }
        lVar5 = *plVar6;
        lVar8 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar5 + lVar8) = 0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = 0;
        *(undefined8 **)(lVar5 + lVar8) = local_68;
        local_68 = (undefined8 *)0x0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
        uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar6 = (longlong *)FUN_149308cea(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14a541050;
        uVar7 = FUN_144a3f946();
        puVar2[2] = uVar7;
        *puVar2 = &PTR_FUN_14bc946d0;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3);
        puVar2[4] = &LAB_149397192;
        lVar5 = plVar6[1];
        uVar4 = (int)lVar5 + 1;
        *(uint *)(plVar6 + 1) = uVar4;
        if (*(uint *)((longlong)plVar6 + 0xc) < uVar4) {
          FUN_14930926e(plVar6);
        }
        lVar8 = *plVar6;
        lVar5 = (longlong)(int)lVar5 * 0x10;
        *(undefined8 *)(lVar8 + lVar5) = 0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = 0;
        *(undefined8 **)(lVar8 + lVar5) = local_68;
        local_68 = (undefined8 *)0x0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = local_60;
        local_60 = 0;
        FUN_1449db362();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_68);
      FUN_144a882a8(local_58,&local_68,L".GetThresholdPosition");
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_149331bf9(*(undefined8 *)(param_2 + 0x28),param_1 + 0x6a,local_58,local_6c);
      if (cVar3 != '\0') {
        uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar6 = (longlong *)FUN_149308cea(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14a541050;
        uVar7 = FUN_144a3f946();
        puVar2[2] = uVar7;
        *puVar2 = &PTR_FUN_14bc94660;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3,param_1);
        puVar2[4] = &LAB_149397196;
        iVar1 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar1 + 1U) {
          FUN_14930926e(plVar6,iVar1);
        }
        lVar5 = *plVar6;
        lVar8 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar5 + lVar8) = 0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = 0;
        *(undefined8 **)(lVar5 + lVar8) = local_68;
        local_68 = (undefined8 *)0x0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
        uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar6 = (longlong *)FUN_149308cea(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14a541050;
        uVar7 = FUN_144a3f946();
        puVar2[2] = uVar7;
        *puVar2 = &PTR_FUN_14bc946d0;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3);
        puVar2[4] = &LAB_14939719a;
        lVar5 = plVar6[1];
        uVar4 = (int)lVar5 + 1;
        *(uint *)(plVar6 + 1) = uVar4;
        if (*(uint *)((longlong)plVar6 + 0xc) < uVar4) {
          FUN_14930926e(plVar6);
        }
        lVar8 = *plVar6;
        lVar5 = (longlong)(int)lVar5 * 0x10;
        *(undefined8 *)(lVar8 + lVar5) = 0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = 0;
        *(undefined8 **)(lVar8 + lVar5) = local_68;
        local_68 = (undefined8 *)0x0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = local_60;
        local_60 = 0;
        FUN_1449db362();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_68);
      FUN_144a882a8(local_58,&local_68,L".GetThresholdTangentNormal");
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_149331bf9(*(undefined8 *)(param_2 + 0x28),param_1 + 0x6c,local_58,local_6c);
      if (cVar3 != '\0') {
        uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar6 = (longlong *)FUN_149308cea(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14a541050;
        uVar7 = FUN_144a3f946();
        puVar2[2] = uVar7;
        *puVar2 = &PTR_FUN_14bc94660;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3,param_1);
        puVar2[4] = &LAB_14939719e;
        iVar1 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar1 + 1U) {
          FUN_14930926e(plVar6,iVar1);
        }
        lVar5 = *plVar6;
        lVar8 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar5 + lVar8) = 0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = 0;
        *(undefined8 **)(lVar5 + lVar8) = local_68;
        local_68 = (undefined8 *)0x0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
        uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar6 = (longlong *)FUN_149308cea(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14a541050;
        uVar7 = FUN_144a3f946();
        puVar2[2] = uVar7;
        *puVar2 = &PTR_FUN_14bc946d0;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3);
        puVar2[4] = &LAB_1493971a2;
        lVar5 = plVar6[1];
        uVar4 = (int)lVar5 + 1;
        *(uint *)(plVar6 + 1) = uVar4;
        if (*(uint *)((longlong)plVar6 + 0xc) < uVar4) {
          FUN_14930926e(plVar6);
        }
        lVar8 = *plVar6;
        lVar5 = (longlong)(int)lVar5 * 0x10;
        *(undefined8 *)(lVar8 + lVar5) = 0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = 0;
        *(undefined8 **)(lVar8 + lVar5) = local_68;
        local_68 = (undefined8 *)0x0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = local_60;
        local_60 = 0;
        FUN_1449db362();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_68);
      FUN_144a882a8(local_58,&local_68,L".GetThresholdUV");
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_149331bf9(*(undefined8 *)(param_2 + 0x28),param_1 + 0x6e,local_58,local_6c);
      if (cVar3 != '\0') {
        uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar6 = (longlong *)FUN_149308cea(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14a541050;
        uVar7 = FUN_144a3f946();
        puVar2[2] = uVar7;
        *puVar2 = &PTR_FUN_14bc94660;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3,param_1);
        puVar2[4] = &LAB_1493971a6;
        iVar1 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar1 + 1U) {
          FUN_14930926e(plVar6,iVar1);
        }
        lVar5 = *plVar6;
        lVar8 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar5 + lVar8) = 0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = 0;
        *(undefined8 **)(lVar5 + lVar8) = local_68;
        local_68 = (undefined8 *)0x0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
        uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar6 = (longlong *)FUN_149308cea(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14a541050;
        uVar7 = FUN_144a3f946();
        puVar2[2] = uVar7;
        *puVar2 = &PTR_FUN_14bc946d0;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3);
        puVar2[4] = &LAB_1493971aa;
        lVar5 = plVar6[1];
        uVar4 = (int)lVar5 + 1;
        *(uint *)(plVar6 + 1) = uVar4;
        if (*(uint *)((longlong)plVar6 + 0xc) < uVar4) {
          FUN_14930926e(plVar6);
        }
        lVar8 = *plVar6;
        lVar5 = (longlong)(int)lVar5 * 0x10;
        *(undefined8 *)(lVar8 + lVar5) = 0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = 0;
        *(undefined8 **)(lVar8 + lVar5) = local_68;
        local_68 = (undefined8 *)0x0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = local_60;
        local_60 = 0;
        FUN_1449db362();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_68);
      FUN_144a882a8(local_58,&local_68,L".GetMorphThresholdPosition");
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_149331bf9(*(undefined8 *)(param_2 + 0x28),param_1 + 0x70,local_58,local_6c);
      if (cVar3 != '\0') {
        uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar6 = (longlong *)FUN_149308cea(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14a541050;
        uVar7 = FUN_144a3f946();
        puVar2[2] = uVar7;
        *puVar2 = &PTR_FUN_14bc94660;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3,param_1);
        puVar2[4] = &LAB_1493971ae;
        iVar1 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar1 + 1U) {
          FUN_14930926e(plVar6,iVar1);
        }
        lVar5 = *plVar6;
        lVar8 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar5 + lVar8) = 0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = 0;
        *(undefined8 **)(lVar5 + lVar8) = local_68;
        local_68 = (undefined8 *)0x0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
        uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar6 = (longlong *)FUN_149308cea(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14a541050;
        uVar7 = FUN_144a3f946();
        puVar2[2] = uVar7;
        *puVar2 = &PTR_FUN_14bc946d0;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3);
        puVar2[4] = &LAB_1493971b2;
        lVar5 = plVar6[1];
        uVar4 = (int)lVar5 + 1;
        *(uint *)(plVar6 + 1) = uVar4;
        if (*(uint *)((longlong)plVar6 + 0xc) < uVar4) {
          FUN_14930926e(plVar6);
        }
        lVar8 = *plVar6;
        lVar5 = (longlong)(int)lVar5 * 0x10;
        *(undefined8 *)(lVar8 + lVar5) = 0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = 0;
        *(undefined8 **)(lVar8 + lVar5) = local_68;
        local_68 = (undefined8 *)0x0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = local_60;
        local_60 = 0;
        FUN_1449db362();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_68);
      FUN_144a882a8(local_58,&local_68,L".GetBoneInfluenceLimit");
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_1444bbfbb(*(undefined8 *)(param_2 + 0x28),param_1 + 0x72,local_58,local_6c);
      if (cVar3 != '\0') {
        uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar6 = (longlong *)FUN_149308cea(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14a541050;
        uVar7 = FUN_144a3f946();
        puVar2[2] = uVar7;
        *puVar2 = &PTR_FUN_14bc94660;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3,param_1);
        puVar2[4] = &LAB_1493971b6;
        iVar1 = (int)plVar6[1];
        *(uint *)(plVar6 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar6 + 0xc) < iVar1 + 1U) {
          FUN_14930926e(plVar6,iVar1);
        }
        lVar5 = *plVar6;
        lVar8 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar5 + lVar8) = 0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = 0;
        *(undefined8 **)(lVar5 + lVar8) = local_68;
        local_68 = (undefined8 *)0x0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
        uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar6 = (longlong *)FUN_149308cea(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4);
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        puVar2 = local_68;
        local_60 = 3;
        *local_68 = &PTR_LAB_14a541050;
        uVar7 = FUN_144a3f946();
        puVar2[2] = uVar7;
        *puVar2 = &PTR_FUN_14bc946d0;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3);
        puVar2[4] = &LAB_1493971ba;
        lVar5 = plVar6[1];
        uVar4 = (int)lVar5 + 1;
        *(uint *)(plVar6 + 1) = uVar4;
        if (*(uint *)((longlong)plVar6 + 0xc) < uVar4) {
          FUN_14930926e(plVar6);
        }
        lVar8 = *plVar6;
        lVar5 = (longlong)(int)lVar5 * 0x10;
        *(undefined8 *)(lVar8 + lVar5) = 0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = 0;
        *(undefined8 **)(lVar8 + lVar5) = local_68;
        local_68 = (undefined8 *)0x0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = local_60;
        local_60 = 0;
        FUN_1449db362();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149398436 FUN_149398436 body=185 status=ok
// SIG undefined FUN_149398436(void)

void FUN_149398436(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb06c(param_1 + 0x160,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493984f6 FUN_1493984f6 body=189 status=ok
// SIG undefined FUN_1493984f6(void)

void FUN_1493984f6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493985b4(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493985b4 FUN_1493985b4 body=159 status=ok
// SIG undefined FUN_1493985b4(void)

undefined4 FUN_1493985b4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSkeletonUid");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0x2a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149398654 FUN_149398654 body=198 status=ok
// SIG undefined FUN_149398654(void)

void FUN_149398654(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f1448(param_1 + 0x160,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939871c FUN_14939871c body=44 status=ok
// SIG undefined FUN_14939871c(void)

void FUN_14939871c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f125c(param_1 + 0x160);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939874c FUN_14939874c body=44 status=ok
// SIG undefined FUN_14939874c(void)

void FUN_14939874c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493989b6(param_1 + 0x160);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939877e FUN_14939877e body=185 status=ok
// SIG undefined FUN_14939877e(void)

void FUN_14939877e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb466(param_1 + 0x160,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939883e FUN_14939883e body=178 status=ok
// SIG undefined FUN_14939883e(void)

void FUN_14939883e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493988f2(param_1,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493988f2 FUN_1493988f2 body=159 status=ok
// SIG undefined FUN_1493988f2(void)

undefined4 FUN_1493988f2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetSkeletonUid");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0x2a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149398996 FUN_149398996 body=32 status=ok
// SIG undefined FUN_149398996(void)

undefined8 FUN_149398996(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SkeletalMeshLodDataNode");
  return param_2;
}



// FUNCTION 1493989b6 FUN_1493989b6 body=611 status=ok
// SIG undefined FUN_1493989b6(void)

ulonglong FUN_1493989b6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 uStack_54;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
LAB_149398b2a:
    uVar9 = 0;
    goto LAB_149398b2c;
  }
  iVar8 = (int)plVar3[1];
  do {
    if (iVar8 == 0) goto LAB_149398b2a;
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar12 = iVar8 == iVar6;
    if (bVar12) {
      *(int *)(plVar3 + 1) = iVar8 + 1;
      iVar6 = iVar8;
    }
    iVar8 = iVar6;
    UNLOCK();
  } while (!bVar12);
  lVar4 = *param_1;
  if (lVar4 == 0) {
LAB_149398b54:
    uVar9 = 0;
  }
  else {
    local_44 = 0;
    local_60 = (void *)0x0;
    local_58 = (int)param_1[3];
    lVar11 = (longlong)local_58;
    pvVar5 = (void *)param_1[2];
    if (lVar11 == 0) {
      uStack_54 = 0;
    }
    else {
      FUN_1446dd670(&local_60,local_58,0);
      memcpy(local_60,pvVar5,lVar11 * 2);
    }
    cVar7 = FUN_140c44378(lVar4,&local_60);
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (cVar7 == '\0') goto LAB_149398b54;
    local_70 = (void *)0x0;
    local_68 = (int)param_1[3];
    lVar11 = (longlong)local_68;
    pvVar5 = (void *)param_1[2];
    if (lVar11 == 0) {
      local_64 = 0;
    }
    else {
      FUN_1446dd670(&local_70,local_68,0);
      memcpy(local_70,pvVar5,lVar11 * 2);
    }
    FUN_1444bd3c6(&local_60,&local_70,lVar4);
    if (local_70 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 == (void *)0x0) {
LAB_149398b75:
      uVar9 = 0;
    }
    else {
      cVar7 = FUN_140c44378(local_60,&local_58);
      if ((cVar7 == '\0') || (iVar8 = FUN_1419073b0(local_60,&local_58), iVar8 != 0xc))
      goto LAB_149398b75;
      uVar10 = (undefined7)((ulonglong)param_1 >> 8);
      if (local_60 == (void *)0x0) {
        local_44 = 0;
        uVar9 = CONCAT71(uVar10,1);
      }
      else {
        FUN_1493027c6(local_60,&local_58,&local_44);
        if (0 < local_44) {
          iVar8 = 0;
          do {
            FUN_1493038d0(param_1,&local_70,iVar8);
            FUN_1492f0b5e(lVar4,&local_70);
            if (local_70 != (void *)0x0) {
              FUN_1400020a8();
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_44);
        }
        local_44 = 0;
        uVar9 = CONCAT71(uVar10,1);
        if (local_60 != (void *)0x0) {
          FUN_149303af2(local_60,&local_58,&local_44);
        }
      }
    }
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
  }
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
LAB_149398b2c:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 149398c20 FUN_149398c20 body=185 status=ok
// SIG undefined FUN_149398c20(void)

void FUN_149398c20(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb06c(param_1 + 0x3c0,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149398ce0 FUN_149398ce0 body=259 status=ok
// SIG undefined FUN_149398ce0(void)

void FUN_149398ce0(longlong param_1,longlong param_2,char *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar2 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((longlong)(int)plVar2[1] == 0) {
    cVar1 = '\x01';
  }
  else {
    lVar3 = *plVar2;
    lVar4 = (longlong)(int)plVar2[1] * 0x10;
    do {
      lVar4 = lVar4 + -0x10;
      cVar1 = FUN_1444bb06c(param_1 + 0x3c0,lVar3);
      if (cVar1 == '\0') break;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 != 0);
  }
  *param_3 = cVar1;
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149398de4 FUN_149398de4 body=80 status=ok
// SIG undefined FUN_149398de4(void)

char FUN_149398de4(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)(int)param_2[1] == 0) {
    cVar1 = '\x01';
  }
  else {
    lVar3 = *param_2;
    lVar2 = (longlong)(int)param_2[1] * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      cVar1 = FUN_1444bb06c(param_1 + 0x3c0,lVar3);
      if (cVar1 == '\0') {
        return '\0';
      }
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != 0);
  }
  return cVar1;
}



// FUNCTION 149398e3e FUN_149398e3e body=172 status=ok
// SIG undefined FUN_149398e3e(void)

void FUN_149398e3e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149398eec(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149398eec FUN_149398eec body=159 status=ok
// SIG undefined FUN_149398eec(void)

undefined4 FUN_149398eec(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAutoComputeLODScreenSizes");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x72,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149398f96 FUN_149398f96 body=172 status=ok
// SIG undefined FUN_149398f96(void)

void FUN_149398f96(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149399044(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399044 FUN_149399044 body=159 status=ok
// SIG undefined FUN_149399044(void)

undefined4 FUN_149399044(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetBuildNanite");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x70,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493990ee FUN_1493990ee body=172 status=ok
// SIG undefined FUN_1493990ee(void)

void FUN_1493990ee(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14939919c(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939919c FUN_14939919c body=159 status=ok
// SIG undefined FUN_14939919c(void)

undefined4 FUN_14939919c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetBuildReversedIndexBuffer");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x5a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399242 FUN_149399242 body=167 status=ok
// SIG undefined FUN_149399242(void)

void FUN_149399242(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493992ea(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493992ea FUN_1493992ea body=159 status=ok
// SIG undefined FUN_1493992ea(void)

undefined4 FUN_1493992ea(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetBuildScale3D");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149335ede(param_1[5],param_1 + 0x68,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399390 FUN_149399390 body=195 status=ok
// SIG undefined FUN_149399390(void)

void FUN_149399390(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149399454(param_1,puVar2);
  *param_3 = uVar1;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399454 FUN_149399454 body=159 status=ok
// SIG undefined FUN_149399454(void)

undefined4 FUN_149399454(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetDistanceFieldReplacementMesh");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbcf9(param_1[5],param_1 + 0x6c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493994fa FUN_1493994fa body=175 status=ok
// SIG undefined FUN_1493994fa(void)

void FUN_1493994fa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493995aa(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493995aa FUN_1493995aa body=159 status=ok
// SIG undefined FUN_1493995aa(void)

undefined4 FUN_1493995aa(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetDistanceFieldResolutionScale");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_149331bf9(param_1[5],param_1 + 0x6a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399650 FUN_149399650 body=175 status=ok
// SIG undefined FUN_149399650(void)

void FUN_149399650(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149399700(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399700 FUN_149399700 body=159 status=ok
// SIG undefined FUN_149399700(void)

undefined4 FUN_149399700(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetDstLightmapIndex");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0x66,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493997aa FUN_1493997aa body=172 status=ok
// SIG undefined FUN_1493997aa(void)

void FUN_1493997aa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149399858(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399858 FUN_149399858 body=159 status=ok
// SIG undefined FUN_149399858(void)

undefined4 FUN_149399858(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetGenerateDistanceFieldAsIfTwoSided");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x5e,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399902 FUN_149399902 body=172 status=ok
// SIG undefined FUN_149399902(void)

void FUN_149399902(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493999b0(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493999b0 FUN_1493999b0 body=159 status=ok
// SIG undefined FUN_1493999b0(void)

undefined4 FUN_1493999b0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetGenerateLightmapUVs");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x5c,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399a56 FUN_149399a56 body=175 status=ok
// SIG undefined FUN_149399a56(void)

void FUN_149399a56(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149399b06(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399b06 FUN_149399b06 body=159 status=ok
// SIG undefined FUN_149399b06(void)

undefined4 FUN_149399b06(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetMaxLumenMeshCards");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0x6e,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399bac FUN_149399bac body=175 status=ok
// SIG undefined FUN_149399bac(void)

void FUN_149399bac(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149399c5c(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399c5c FUN_149399c5c body=159 status=ok
// SIG undefined FUN_149399c5c(void)

undefined4 FUN_149399c5c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetMinLightmapResolution");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0x62,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399d02 FUN_149399d02 body=175 status=ok
// SIG undefined FUN_149399d02(void)

void FUN_149399d02(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149399db2(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399db2 FUN_149399db2 body=159 status=ok
// SIG undefined FUN_149399db2(void)

undefined4 FUN_149399db2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSrcLightmapIndex");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 100,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399e5c FUN_149399e5c body=172 status=ok
// SIG undefined FUN_149399e5c(void)

void FUN_149399e5c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149399f0a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399f0a FUN_149399f0a body=159 status=ok
// SIG undefined FUN_149399f0a(void)

undefined4 FUN_149399f0a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSupportFaceRemap");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x60,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149399faa FUN_149399faa body=44 status=ok
// SIG undefined FUN_149399faa(void)

void FUN_149399faa(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14939d274(param_1 + 0x3a0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 149399fd6 FUN_149399fd6 body=187 status=ok
// SIG undefined FUN_149399fd6(void)

void FUN_149399fd6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14939d460(param_1 + 0x3a0,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939a092 FUN_14939a092 body=42 status=ok
// SIG undefined FUN_14939a092(void)

void FUN_14939a092(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2e8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939a0bc FUN_14939a0bc body=44 status=ok
// SIG undefined FUN_14939a0bc(void)

void FUN_14939a0bc(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f125c(param_1 + 0x3c0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939a0e8 FUN_14939a0e8 body=198 status=ok
// SIG undefined FUN_14939a0e8(void)

void FUN_14939a0e8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f1448(param_1 + 0x3c0,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939a1b0 FUN_14939a1b0 body=12 status=ok
// SIG undefined FUN_14939a1b0(void)

void FUN_14939a1b0(longlong param_1)

{
  FUN_1492f1448(param_1 + 0x3c0);
  return;
}



// FUNCTION 14939a1bc FUN_14939a1bc body=351 status=ok
// SIG undefined FUN_14939a1bc(void)

void FUN_14939a1bc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48 [7];
  
  local_48[6] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[4] = 0;
  local_48[5] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14939a31c(param_1,local_48 + 4,local_48 + 2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[6] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939a31c FUN_14939a31c body=178 status=ok
// SIG undefined FUN_14939a31c(void)

void FUN_14939a31c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x59) = 0;
  FUN_1444ba64e();
  (**(code **)(*param_1 + 0x2a0))(param_1,local_40);
  FUN_144a882a8(local_30,local_40,L".SetAssetClassName");
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1444bbbee(param_1[5],param_1 + 0x57,local_30,param_4);
  (**(code **)(*param_1 + 0x300))(param_1);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939a3d6 FUN_14939a3d6 body=185 status=ok
// SIG undefined FUN_14939a3d6(void)

void FUN_14939a3d6(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb466(param_1 + 0x3c0,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939a49a FUN_14939a49a body=172 status=ok
// SIG undefined FUN_14939a49a(void)

void FUN_14939a49a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14939a548(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939a548 FUN_14939a548 body=159 status=ok
// SIG undefined FUN_14939a548(void)

undefined4 FUN_14939a548(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAutoComputeLODScreenSizes");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x72,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939a5f8 FUN_14939a5f8 body=214 status=ok
// SIG undefined FUN_14939a5f8(void)

void FUN_14939a5f8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939a6d0 FUN_14939a6d0 body=3 status=ok
// SIG undefined FUN_14939a6d0(void)

undefined8 FUN_14939a6d0(void)

{
  return 0;
}



// FUNCTION 14939a6e4 FUN_14939a6e4 body=255 status=ok
// SIG undefined FUN_14939a6e4(void)

void FUN_14939a6e4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  int local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14939a7e4(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939a7e4 FUN_14939a7e4 body=696 status=ok
// SIG undefined FUN_14939a7e4(void)

undefined4 FUN_14939a7e4(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
  FUN_144a882a8(local_50,&local_60,L".SetBuildReversedIndexBuffer");
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_1444bc65d(param_1[5],param_1 + 0x5a,local_50,param_2);
  if ((param_3 & (byte)uVar3) == 1) {
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94740;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = &LAB_14939df02;
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14930926e(plVar5,iVar1);
    }
    lVar7 = *plVar5;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(undefined8 **)(lVar7 + lVar8) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = local_58;
    local_58 = 0;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc947b0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3);
    puVar2[4] = &LAB_14939df06;
    lVar7 = plVar5[1];
    uVar4 = (int)lVar7 + 1;
    *(uint *)(plVar5 + 1) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar4) {
      FUN_14930926e(plVar5);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)(int)lVar7 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
    *(undefined8 **)(lVar8 + lVar7) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = local_58;
    local_58 = 0;
    FUN_1449db362();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939aaaa FUN_14939aaaa body=250 status=ok
// SIG undefined FUN_14939aaaa(void)

void FUN_14939aaaa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [36];
  int local_44;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14939aba6(param_1,puVar3,local_44 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939aba6 FUN_14939aba6 body=696 status=ok
// SIG undefined FUN_14939aba6(void)

undefined4 FUN_14939aba6(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
  FUN_144a882a8(local_50,&local_60,L".SetBuildScale3D");
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_14933606e(param_1[5],param_1 + 0x68,local_50,param_2);
  if ((param_3 & (byte)uVar3) == 1) {
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94740;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = &LAB_14939df3a;
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14930926e(plVar5,iVar1);
    }
    lVar7 = *plVar5;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(undefined8 **)(lVar7 + lVar8) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = local_58;
    local_58 = 0;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc947b0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3);
    puVar2[4] = &LAB_14939df3e;
    lVar7 = plVar5[1];
    uVar4 = (int)lVar7 + 1;
    *(uint *)(plVar5 + 1) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar4) {
      FUN_14930926e(plVar5);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)(int)lVar7 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
    *(undefined8 **)(lVar8 + lVar7) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = local_58;
    local_58 = 0;
    FUN_1449db362();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939ae6c FUN_14939ae6c body=278 status=ok
// SIG undefined FUN_14939ae6c(void)

void FUN_14939ae6c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14939af84(param_1,puVar2,local_4c != 0);
  *param_3 = uVar1;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939af84 FUN_14939af84 body=696 status=ok
// SIG undefined FUN_14939af84(void)

undefined4 FUN_14939af84(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
  FUN_144a882a8(local_50,&local_60,L".SetDistanceFieldReplacementMesh");
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_1444bbe7d(param_1[5],param_1 + 0x6c,local_50,param_2);
  if ((param_3 & (byte)uVar3) == 1) {
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94740;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = &LAB_14939df4a;
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14930926e(plVar5,iVar1);
    }
    lVar7 = *plVar5;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(undefined8 **)(lVar7 + lVar8) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = local_58;
    local_58 = 0;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc947b0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3);
    puVar2[4] = &LAB_14939df4e;
    lVar7 = plVar5[1];
    uVar4 = (int)lVar7 + 1;
    *(uint *)(plVar5 + 1) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar4) {
      FUN_14930926e(plVar5);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)(int)lVar7 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
    *(undefined8 **)(lVar8 + lVar7) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = local_58;
    local_58 = 0;
    FUN_1449db362();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939b24a FUN_14939b24a body=258 status=ok
// SIG undefined FUN_14939b24a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14939b24a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30 + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_30[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  piVar3 = local_30 + 1;
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14939b34e(param_1,piVar3,local_30[0] != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939b34e FUN_14939b34e body=696 status=ok
// SIG undefined FUN_14939b34e(void)

undefined4 FUN_14939b34e(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
  FUN_144a882a8(local_50,&local_60,L".SetDistanceFieldResolutionScale");
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_149331d89(param_1[5],param_1 + 0x6a,local_50,param_2);
  if ((param_3 & (byte)uVar3) == 1) {
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94740;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = &LAB_14939df42;
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14930926e(plVar5,iVar1);
    }
    lVar7 = *plVar5;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(undefined8 **)(lVar7 + lVar8) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = local_58;
    local_58 = 0;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc947b0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3);
    puVar2[4] = &LAB_14939df46;
    lVar7 = plVar5[1];
    uVar4 = (int)lVar7 + 1;
    *(uint *)(plVar5 + 1) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar4) {
      FUN_14930926e(plVar5);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)(int)lVar7 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
    *(undefined8 **)(lVar8 + lVar7) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = local_58;
    local_58 = 0;
    FUN_1449db362();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939b614 FUN_14939b614 body=258 status=ok
// SIG undefined FUN_14939b614(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14939b614(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30 + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_30[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  piVar3 = local_30 + 1;
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14939b718(param_1,piVar3,local_30[0] != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939b718 FUN_14939b718 body=696 status=ok
// SIG undefined FUN_14939b718(void)

undefined4 FUN_14939b718(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
  FUN_144a882a8(local_50,&local_60,L".SetDstLightmapIndex");
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_1444bc13f(param_1[5],param_1 + 0x66,local_50,param_2);
  if ((param_3 & (byte)uVar3) == 1) {
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94740;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = &LAB_14939df32;
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14930926e(plVar5,iVar1);
    }
    lVar7 = *plVar5;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(undefined8 **)(lVar7 + lVar8) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = local_58;
    local_58 = 0;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc947b0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3);
    puVar2[4] = &LAB_14939df36;
    lVar7 = plVar5[1];
    uVar4 = (int)lVar7 + 1;
    *(uint *)(plVar5 + 1) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar4) {
      FUN_14930926e(plVar5);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)(int)lVar7 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
    *(undefined8 **)(lVar8 + lVar7) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = local_58;
    local_58 = 0;
    FUN_1449db362();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939b9e2 FUN_14939b9e2 body=255 status=ok
// SIG undefined FUN_14939b9e2(void)

void FUN_14939b9e2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  int local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14939bae2(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939bae2 FUN_14939bae2 body=696 status=ok
// SIG undefined FUN_14939bae2(void)

undefined4 FUN_14939bae2(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
  FUN_144a882a8(local_50,&local_60,L".SetGenerateDistanceFieldAsIfTwoSided");
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_1444bc65d(param_1[5],param_1 + 0x5e,local_50,param_2);
  if ((param_3 & (byte)uVar3) == 1) {
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94740;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = &LAB_14939df12;
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14930926e(plVar5,iVar1);
    }
    lVar7 = *plVar5;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(undefined8 **)(lVar7 + lVar8) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = local_58;
    local_58 = 0;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc947b0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3);
    puVar2[4] = &LAB_14939df16;
    lVar7 = plVar5[1];
    uVar4 = (int)lVar7 + 1;
    *(uint *)(plVar5 + 1) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar4) {
      FUN_14930926e(plVar5);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)(int)lVar7 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
    *(undefined8 **)(lVar8 + lVar7) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = local_58;
    local_58 = 0;
    FUN_1449db362();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939bdac FUN_14939bdac body=255 status=ok
// SIG undefined FUN_14939bdac(void)

void FUN_14939bdac(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  int local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14939beac(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939beac FUN_14939beac body=696 status=ok
// SIG undefined FUN_14939beac(void)

undefined4 FUN_14939beac(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
  FUN_144a882a8(local_50,&local_60,L".SetGenerateLightmapUVs");
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_1444bc65d(param_1[5],param_1 + 0x5c,local_50,param_2);
  if ((param_3 & (byte)uVar3) == 1) {
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94740;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = &LAB_14939df0a;
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14930926e(plVar5,iVar1);
    }
    lVar7 = *plVar5;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(undefined8 **)(lVar7 + lVar8) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = local_58;
    local_58 = 0;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc947b0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3);
    puVar2[4] = &LAB_14939df0e;
    lVar7 = plVar5[1];
    uVar4 = (int)lVar7 + 1;
    *(uint *)(plVar5 + 1) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar4) {
      FUN_14930926e(plVar5);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)(int)lVar7 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
    *(undefined8 **)(lVar8 + lVar7) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = local_58;
    local_58 = 0;
    FUN_1449db362();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939c172 FUN_14939c172 body=258 status=ok
// SIG undefined FUN_14939c172(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14939c172(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30 + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_30[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  piVar3 = local_30 + 1;
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14939c276(param_1,piVar3,local_30[0] != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939c276 FUN_14939c276 body=696 status=ok
// SIG undefined FUN_14939c276(void)

undefined4 FUN_14939c276(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
  FUN_144a882a8(local_50,&local_60,L".SetMaxLumenMeshCards");
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_1444bc13f(param_1[5],param_1 + 0x6e,local_50,param_2);
  if ((param_3 & (byte)uVar3) == 1) {
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94740;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = &LAB_14939df52;
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14930926e(plVar5,iVar1);
    }
    lVar7 = *plVar5;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(undefined8 **)(lVar7 + lVar8) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = local_58;
    local_58 = 0;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc947b0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3);
    puVar2[4] = &LAB_14939df56;
    lVar7 = plVar5[1];
    uVar4 = (int)lVar7 + 1;
    *(uint *)(plVar5 + 1) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar4) {
      FUN_14930926e(plVar5);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)(int)lVar7 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
    *(undefined8 **)(lVar8 + lVar7) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = local_58;
    local_58 = 0;
    FUN_1449db362();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939c53c FUN_14939c53c body=258 status=ok
// SIG undefined FUN_14939c53c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14939c53c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30 + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_30[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  piVar3 = local_30 + 1;
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14939c640(param_1,piVar3,local_30[0] != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939c640 FUN_14939c640 body=696 status=ok
// SIG undefined FUN_14939c640(void)

undefined4 FUN_14939c640(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
  FUN_144a882a8(local_50,&local_60,L".SetMinLightmapResolution");
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_1444bc13f(param_1[5],param_1 + 0x62,local_50,param_2);
  if ((param_3 & (byte)uVar3) == 1) {
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94740;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = &LAB_14939df22;
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14930926e(plVar5,iVar1);
    }
    lVar7 = *plVar5;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(undefined8 **)(lVar7 + lVar8) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = local_58;
    local_58 = 0;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc947b0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3);
    puVar2[4] = &LAB_14939df26;
    lVar7 = plVar5[1];
    uVar4 = (int)lVar7 + 1;
    *(uint *)(plVar5 + 1) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar4) {
      FUN_14930926e(plVar5);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)(int)lVar7 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
    *(undefined8 **)(lVar8 + lVar7) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = local_58;
    local_58 = 0;
    FUN_1449db362();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939c906 FUN_14939c906 body=258 status=ok
// SIG undefined FUN_14939c906(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14939c906(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  int local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30 + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_30[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  piVar3 = local_30 + 1;
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14939ca0a(param_1,piVar3,local_30[0] != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939ca0a FUN_14939ca0a body=696 status=ok
// SIG undefined FUN_14939ca0a(void)

undefined4 FUN_14939ca0a(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
  FUN_144a882a8(local_50,&local_60,L".SetSrcLightmapIndex");
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_1444bc13f(param_1[5],param_1 + 100,local_50,param_2);
  if ((param_3 & (byte)uVar3) == 1) {
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94740;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = &LAB_14939df2a;
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14930926e(plVar5,iVar1);
    }
    lVar7 = *plVar5;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(undefined8 **)(lVar7 + lVar8) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = local_58;
    local_58 = 0;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc947b0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3);
    puVar2[4] = &LAB_14939df2e;
    lVar7 = plVar5[1];
    uVar4 = (int)lVar7 + 1;
    *(uint *)(plVar5 + 1) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar4) {
      FUN_14930926e(plVar5);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)(int)lVar7 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
    *(undefined8 **)(lVar8 + lVar7) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = local_58;
    local_58 = 0;
    FUN_1449db362();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939ccd4 FUN_14939ccd4 body=255 status=ok
// SIG undefined FUN_14939ccd4(void)

void FUN_14939ccd4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  int local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar3 = &local_29;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14939cdd4(param_1,puVar3,local_30 != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939cdd4 FUN_14939cdd4 body=696 status=ok
// SIG undefined FUN_14939cdd4(void)

undefined4 FUN_14939cdd4(longlong *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
  FUN_144a882a8(local_50,&local_60,L".SetSupportFaceRemap");
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_1444bc65d(param_1[5],param_1 + 0x60,local_50,param_2);
  if ((param_3 & (byte)uVar3) == 1) {
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc94740;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = &LAB_14939df1a;
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_14930926e(plVar5,iVar1);
    }
    lVar7 = *plVar5;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar7 + lVar8) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
    *(undefined8 **)(lVar7 + lVar8) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar7 + 8 + lVar8) = local_58;
    local_58 = 0;
    FUN_1449db362(&local_60);
    local_60 = (undefined8 *)(**(code **)(*param_1 + 0x2e8))(param_1);
    uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = (longlong *)FUN_1493770e0(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4,&local_60);
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &PTR_LAB_14a541050;
    uVar6 = FUN_144a3f946();
    puVar2[2] = uVar6;
    *puVar2 = &PTR_FUN_14bc947b0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3);
    puVar2[4] = &LAB_14939df1e;
    lVar7 = plVar5[1];
    uVar4 = (int)lVar7 + 1;
    *(uint *)(plVar5 + 1) = uVar4;
    if (*(uint *)((longlong)plVar5 + 0xc) < uVar4) {
      FUN_14930926e(plVar5);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)(int)lVar7 * 0x10;
    *(undefined8 *)(lVar8 + lVar7) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
    *(undefined8 **)(lVar8 + lVar7) = local_60;
    local_60 = (undefined8 *)0x0;
    *(undefined4 *)(lVar8 + 8 + lVar7) = local_58;
    local_58 = 0;
    FUN_1449db362();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939d094 FUN_14939d094 body=240 status=ok
// SIG undefined FUN_14939d094(void)

void FUN_14939d094(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar3 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14939d782(param_1 + 0x3a0);
  if ((longlong)(int)plVar3[1] != 0) {
    lVar1 = *plVar3;
    lVar2 = (longlong)(int)plVar3[1] << 2;
    do {
      FUN_14939d9ca(param_1 + 0x3a0,lVar1);
      lVar1 = lVar1 + 4;
      lVar2 = lVar2 + -4;
    } while (lVar2 != 0);
  }
  *param_3 = 1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939d186 FUN_14939d186 body=75 status=ok
// SIG undefined FUN_14939d186(void)

undefined1 FUN_14939d186(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14939d782(param_1 + 0x3a0);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar1 = (longlong)(int)param_2[1] << 2;
    do {
      FUN_14939d9ca(param_1 + 0x3a0,lVar2);
      lVar2 = lVar2 + 4;
      lVar1 = lVar1 + -4;
    } while (lVar1 != 0);
  }
  return 1;
}



// FUNCTION 14939d1d4 FUN_14939d1d4 body=32 status=ok
// SIG undefined FUN_14939d1d4(void)

undefined8 FUN_14939d1d4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"StaticMeshNode");
  return param_2;
}



// FUNCTION 14939d1f4 FUN_14939d1f4 body=128 status=ok
// SIG undefined FUN_14939d1f4(void)

undefined8 FUN_14939d1f4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  if (lVar1 != 0) {
    lVar2 = FUN_1406d0862();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar1 = *(longlong *)(param_1 + 0x3e0), lVar1 != 0)) {
      lVar2 = FUN_1406d0862();
      if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x3e0);
      }
      return uVar3;
    }
  }
  uVar3 = FUN_1406d0862();
  return uVar3;
}



// FUNCTION 14939d274 FUN_14939d274 body=490 status=ok
// SIG undefined FUN_14939d274(void)

undefined4 FUN_14939d274(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)param_1[1];
  uVar9 = 0;
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      uVar9 = 0;
      if (iVar8 == 0) goto LAB_14939d40b;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar11 = iVar8 == iVar6;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar11);
    lVar4 = *param_1;
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      local_44 = 0;
      local_60 = (void *)0x0;
      local_58 = (int)param_1[3];
      lVar10 = (longlong)local_58;
      pvVar5 = (void *)param_1[2];
      if (lVar10 == 0) {
        uStack_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar5,lVar10 * 2);
      }
      cVar7 = FUN_140c44378(lVar4,&local_60);
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar9 = 0;
      if (cVar7 != '\0') {
        local_70 = (void *)0x0;
        local_68 = (int)param_1[3];
        lVar10 = (longlong)local_68;
        pvVar5 = (void *)param_1[2];
        if (lVar10 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,local_68,0);
          memcpy(local_70,pvVar5,lVar10 * 2);
        }
        FUN_1444bd3c6(&local_60,&local_70,lVar4);
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_60 != (void *)0x0) {
          cVar7 = FUN_140c44378(local_60,&local_58);
          if (((cVar7 != '\0') && (iVar8 = FUN_1419073b0(local_60,&local_58), iVar8 == 0xc)) &&
             (local_60 != (void *)0x0)) {
            FUN_1493027c6(local_60,&local_58,&local_44);
          }
        }
        uVar9 = local_44;
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
          uVar9 = local_44;
        }
      }
    }
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
LAB_14939d40b:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14939d460 FUN_14939d460 body=775 status=ok
// SIG undefined FUN_14939d460(void)

void FUN_14939d460(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [40];
  void *local_90;
  int local_88;
  undefined4 uStack_84;
  longlong local_78 [2];
  void *local_68;
  int local_60;
  undefined4 uStack_5c;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
LAB_14939d6ac:
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    goto LAB_14939d714;
  }
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) goto LAB_14939d6ac;
    LOCK();
    iVar8 = (int)plVar3[1];
    bVar10 = iVar7 == iVar8;
    if (bVar10) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar8 = iVar7;
    }
    iVar7 = iVar8;
    UNLOCK();
  } while (!bVar10);
  lVar4 = *param_1;
  if (lVar4 == 0) {
LAB_14939d6e0:
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FUN_14482f6fa(param_2,0);
    }
  }
  else {
    local_4c = 0;
    local_68 = (void *)0x0;
    local_60 = (int)param_1[3];
    lVar9 = (longlong)local_60;
    pvVar5 = (void *)param_1[2];
    if (lVar9 == 0) {
      uStack_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_60,0);
      memcpy(local_68,pvVar5,lVar9 * 2);
    }
    cVar6 = FUN_140c44378(lVar4,&local_68);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (cVar6 == '\0') goto LAB_14939d6e0;
    local_90 = (void *)0x0;
    local_88 = (int)param_1[3];
    lVar9 = (longlong)local_88;
    pvVar5 = (void *)param_1[2];
    if (lVar9 == 0) {
      uStack_84 = 0;
    }
    else {
      FUN_1446dd670(&local_90,local_88,0);
      memcpy(local_90,pvVar5,lVar9 * 2);
    }
    FUN_1444bd3c6(&local_68,&local_90,lVar4);
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (void *)0x0) {
      cVar6 = FUN_140c44378(local_68,&local_60);
      if ((cVar6 != '\0') && (iVar7 = FUN_1419073b0(local_68,&local_60), iVar7 == 0xc)) {
        iVar7 = 0;
        if (local_68 != (void *)0x0) {
          FUN_1493027c6(local_68,&local_60,&local_4c);
          iVar7 = local_4c;
        }
        FUN_14005ea14(param_2,iVar7);
        if (0 < local_4c) {
          iVar7 = 0;
          do {
            FUN_1493aa168(param_1,local_78,iVar7);
            FUN_1444bd5f8(&local_90,local_78,lVar4);
            if (((local_90 != (void *)0x0) &&
                (cVar6 = FUN_140c44378(local_90,&local_88), cVar6 != '\0')) &&
               (iVar8 = FUN_1419073b0(local_90,&local_88), iVar8 == 8)) {
              iVar8 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                FUN_14475e4ac(param_2,iVar8);
              }
              lVar9 = *param_2;
              *(undefined4 *)(lVar9 + (longlong)iVar8 * 4) = 0;
              if (local_90 != (void *)0x0) {
                FUN_149302adc(local_90,&local_88,lVar9 + (longlong)iVar8 * 4);
              }
            }
            if (CONCAT44(uStack_84,local_88) != 0) {
              FUN_1400020a8();
            }
            if (local_78[0] != 0) {
              FUN_1400020a8();
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_4c);
        }
      }
    }
    if (CONCAT44(uStack_5c,local_60) != 0) {
      FUN_1400020a8();
    }
  }
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
LAB_14939d714:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14939d782 FUN_14939d782 body=583 status=ok
// SIG undefined FUN_14939d782(void)

void FUN_14939d782(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 uStack_54;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_14939d915;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    lVar4 = *param_1;
    if (lVar4 != 0) {
      local_44 = 0;
      local_60 = (void *)0x0;
      local_58 = (int)param_1[3];
      lVar9 = (longlong)local_58;
      pvVar5 = (void *)param_1[2];
      if (lVar9 == 0) {
        uStack_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar5,lVar9 * 2);
      }
      cVar7 = FUN_140c44378(lVar4,&local_60);
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (cVar7 != '\0') {
        local_70 = (void *)0x0;
        local_68 = (int)param_1[3];
        lVar9 = (longlong)local_68;
        pvVar5 = (void *)param_1[2];
        if (lVar9 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,local_68,0);
          memcpy(local_70,pvVar5,lVar9 * 2);
        }
        FUN_1444bd3c6(&local_60,&local_70,lVar4);
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_60 != (void *)0x0) {
          cVar7 = FUN_140c44378(local_60,&local_58);
          if ((cVar7 != '\0') && (iVar8 = FUN_1419073b0(local_60,&local_58), iVar8 == 0xc)) {
            if (local_60 == (void *)0x0) {
              local_44 = 0;
            }
            else {
              FUN_1493027c6(local_60,&local_58,&local_44);
              if (0 < local_44) {
                iVar8 = 0;
                do {
                  FUN_1493aa168(param_1,&local_70,iVar8);
                  FUN_1492f0b5e(lVar4,&local_70);
                  if (local_70 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < local_44);
              }
              local_44 = 0;
              if (local_60 != (void *)0x0) {
                FUN_149303af2(local_60,&local_58,&local_44);
              }
            }
          }
        }
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
        }
      }
    }
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
LAB_14939d915:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14939d9ca FUN_14939d9ca body=975 status=ok
// SIG undefined FUN_14939d9ca(void)

void FUN_14939d9ca(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  int local_94;
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  void *local_80;
  int local_78;
  undefined4 uStack_74;
  undefined1 local_68 [16];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) goto LAB_14939db52;
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) goto LAB_14939db52;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar11 = iVar7 == iVar5;
    if (bVar11) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar11);
  lVar9 = *param_1;
  if (lVar9 != 0) {
    local_80 = (void *)0x0;
    local_78 = (int)param_1[3];
    lVar10 = (longlong)local_78;
    pvVar4 = (void *)param_1[2];
    if (lVar10 == 0) {
      uStack_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar4,lVar10 * 2);
    }
    cVar6 = FUN_140c44378(lVar9,&local_80);
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (cVar6 == '\0') {
      local_90 = (void *)((ulonglong)local_90._4_4_ << 0x20);
      local_80 = (void *)0x0;
      local_78 = (int)param_1[3];
      lVar10 = (longlong)local_78;
      pvVar4 = (void *)param_1[2];
      if (lVar10 == 0) {
        uStack_74 = 0;
      }
      else {
        FUN_1446dd670(&local_80,local_78,0);
        memcpy(local_80,pvVar4,lVar10 * 2);
      }
      uVar8 = FUN_1413f0866(lVar9,&local_80,&local_90,0);
      if (local_80 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((uVar8 & 1) == 0) {
        local_58 = (void *)0x0;
        local_50 = (int)param_1[3];
        lVar9 = (longlong)local_50;
        pvVar4 = (void *)param_1[2];
        if (lVar9 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,pvVar4,lVar9 * 2);
        }
        FUN_140056680(local_68,L"TArrayAttributeHelper.AddName");
        FUN_1444ba954(uVar8,local_68,&local_58);
        goto LAB_14939db35;
      }
    }
    local_90 = (void *)0x0;
    local_88 = (int)param_1[3];
    lVar10 = (longlong)local_88;
    pvVar4 = (void *)param_1[2];
    if (lVar10 == 0) {
      local_84 = 0;
    }
    else {
      FUN_1446dd670(&local_90,local_88,0);
      memcpy(local_90,pvVar4,lVar10 * 2);
    }
    FUN_1444bd3c6(&local_80,&local_90,lVar9);
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_80 != (void *)0x0) {
      cVar6 = FUN_140c44378(local_80,&local_78);
      if ((cVar6 != '\0') && (iVar7 = FUN_1419073b0(local_80,&local_78), iVar7 == 0xc)) {
        local_94 = 0;
        if (local_80 != (void *)0x0) {
          FUN_1493027c6(local_80,&local_78,&local_94);
        }
        FUN_1493aa168(param_1,&local_90,local_94);
        uVar8 = FUN_14930288c(lVar9,&local_90,param_2,0);
        pvVar4 = local_90;
        if ((uVar8 & 1) == 0) {
          local_a8 = (void *)0x0;
          lVar9 = (longlong)local_88;
          local_a0 = local_88;
          if (lVar9 == 0) {
            local_9c = 0;
          }
          else {
            FUN_1446dd670(&local_a8,local_88,0);
            memcpy(local_a8,pvVar4,lVar9 * 2);
          }
          FUN_140056680(local_b8,L"TArrayAttributeHelper.AddName");
          FUN_1444ba954(uVar8,local_b8,&local_a8);
        }
        else {
          local_94 = local_94 + 1;
          if (local_80 != (void *)0x0) {
            FUN_149303af2(local_80,&local_78,&local_94);
          }
        }
        if (local_90 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    if (CONCAT44(uStack_74,local_78) != 0) {
      FUN_1400020a8();
    }
  }
LAB_14939db35:
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
LAB_14939db52:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14939dd9a FUN_14939dd9a body=317 status=ok
// SIG undefined FUN_14939dd9a(void)

void FUN_14939dd9a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_48);
  FUN_144a882a8(local_38,&local_48,L".GetAssetClassName");
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_48 = (wchar_t *)0x0;
  uStack_40 = 0;
  FUN_1444bba6a(param_1[5],param_1 + 0x57,local_38,&local_48);
  lVar2 = FUN_1406d0862();
  local_28 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_28,&local_58);
  if ((int)uStack_40 == local_50) {
    bVar3 = true;
    if (1 < (int)uStack_40) {
      iVar1 = wcscmp(local_48,local_58);
      bVar3 = iVar1 == 0;
    }
  }
  else {
    bVar3 = local_50 + (int)uStack_40 == 1;
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8(local_58);
  }
  if (bVar3) {
    lVar2 = FUN_1406d0862();
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar2);
    }
    param_1[0x7c] = lVar2;
    *(undefined1 *)(param_1 + 0x59) = 1;
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14939ded8 FUN_14939ded8 body=42 status=ok
// SIG undefined FUN_14939ded8(void)

ulonglong FUN_14939ded8(longlong *param_1)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  undefined7 uVar3;
  undefined8 uVar2;
  
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar1 = 1;
  if ((char)param_1[0x59] == '\0') {
    uVar2 = (**(code **)(*param_1 + 0x300))();
    uVar1 = (undefined1)param_1[0x59];
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
  }
  return CONCAT71(uVar3,uVar1) & 0xffffffffffffff01;
}



// FUNCTION 14939df60 FUN_14939df60 body=185 status=ok
// SIG undefined FUN_14939df60(void)

void FUN_14939df60(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb06c(param_1 + 0x170,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939e01a FUN_14939e01a body=12 status=ok
// SIG undefined FUN_14939e01a(void)

void FUN_14939e01a(longlong param_1)

{
  FUN_1444bb06c(param_1 + 0x170);
  return;
}



// FUNCTION 14939e02c FUN_14939e02c body=185 status=ok
// SIG undefined FUN_14939e02c(void)

void FUN_14939e02c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb06c(param_1 + 400,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939e0e6 FUN_14939e0e6 body=12 status=ok
// SIG undefined FUN_14939e0e6(void)

void FUN_14939e0e6(longlong param_1)

{
  FUN_1444bb06c(param_1 + 400);
  return;
}



// FUNCTION 14939e0f8 FUN_14939e0f8 body=185 status=ok
// SIG undefined FUN_14939e0f8(void)

void FUN_14939e0f8(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb06c(param_1 + 0x1d0,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939e1b2 FUN_14939e1b2 body=12 status=ok
// SIG undefined FUN_14939e1b2(void)

void FUN_14939e1b2(longlong param_1)

{
  FUN_1444bb06c(param_1 + 0x1d0);
  return;
}



// FUNCTION 14939e1c4 FUN_14939e1c4 body=185 status=ok
// SIG undefined FUN_14939e1c4(void)

void FUN_14939e1c4(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb06c(param_1 + 0x150,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939e27e FUN_14939e27e body=12 status=ok
// SIG undefined FUN_14939e27e(void)

void FUN_14939e27e(longlong param_1)

{
  FUN_1444bb06c(param_1 + 0x150);
  return;
}



// FUNCTION 14939e290 FUN_14939e290 body=185 status=ok
// SIG undefined FUN_14939e290(void)

void FUN_14939e290(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb06c(param_1 + 0x1b0,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939e34a FUN_14939e34a body=12 status=ok
// SIG undefined FUN_14939e34a(void)

void FUN_14939e34a(longlong param_1)

{
  FUN_1444bb06c(param_1 + 0x1b0);
  return;
}



// FUNCTION 14939e356 FUN_14939e356 body=198 status=ok
// SIG undefined FUN_14939e356(void)

void FUN_14939e356(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f1448(param_1 + 0x170,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939e41e FUN_14939e41e body=44 status=ok
// SIG undefined FUN_14939e41e(void)

void FUN_14939e41e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f125c(param_1 + 0x170);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939e44a FUN_14939e44a body=198 status=ok
// SIG undefined FUN_14939e44a(void)

void FUN_14939e44a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f1448(param_1 + 400,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939e512 FUN_14939e512 body=44 status=ok
// SIG undefined FUN_14939e512(void)

void FUN_14939e512(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f125c(param_1 + 400);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939e53e FUN_14939e53e body=198 status=ok
// SIG undefined FUN_14939e53e(void)

void FUN_14939e53e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f1448(param_1 + 0x1d0,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939e606 FUN_14939e606 body=44 status=ok
// SIG undefined FUN_14939e606(void)

void FUN_14939e606(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f125c(param_1 + 0x1d0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939e63c FUN_14939e63c body=172 status=ok
// SIG undefined FUN_14939e63c(void)

void FUN_14939e63c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14939e6ea(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939e6ea FUN_14939e6ea body=159 status=ok
// SIG undefined FUN_14939e6ea(void)

undefined4 FUN_14939e6ea(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetImportCollision");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x40,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939e790 FUN_14939e790 body=172 status=ok
// SIG undefined FUN_14939e790(void)

void FUN_14939e790(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14939e83e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939e83e FUN_14939e83e body=159 status=ok
// SIG undefined FUN_14939e83e(void)

undefined4 FUN_14939e83e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetImportCollisionType");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14939f4d6(param_1[5],param_1 + 0x42,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939e8de FUN_14939e8de body=198 status=ok
// SIG undefined FUN_14939e8de(void)

void FUN_14939e8de(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f1448(param_1 + 0x150,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939e9a6 FUN_14939e9a6 body=44 status=ok
// SIG undefined FUN_14939e9a6(void)

void FUN_14939e9a6(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f125c(param_1 + 0x150);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939e9dc FUN_14939e9dc body=172 status=ok
// SIG undefined FUN_14939e9dc(void)

void FUN_14939e9dc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14939ea8a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939ea8a FUN_14939ea8a body=159 status=ok
// SIG undefined FUN_14939ea8a(void)

undefined4 FUN_14939ea8a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetOneConvexHullPerUCX");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x3e,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939eb2a FUN_14939eb2a body=198 status=ok
// SIG undefined FUN_14939eb2a(void)

void FUN_14939eb2a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f1448(param_1 + 0x1b0,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939ebf2 FUN_14939ebf2 body=44 status=ok
// SIG undefined FUN_14939ebf2(void)

void FUN_14939ebf2(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f125c(param_1 + 0x1b0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939ec22 FUN_14939ec22 body=44 status=ok
// SIG undefined FUN_14939ec22(void)

void FUN_14939ec22(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493989b6(param_1 + 0x170);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939ec52 FUN_14939ec52 body=44 status=ok
// SIG undefined FUN_14939ec52(void)

void FUN_14939ec52(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493989b6(param_1 + 400);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939ec82 FUN_14939ec82 body=44 status=ok
// SIG undefined FUN_14939ec82(void)

void FUN_14939ec82(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493989b6(param_1 + 0x1d0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939ecb2 FUN_14939ecb2 body=44 status=ok
// SIG undefined FUN_14939ecb2(void)

void FUN_14939ecb2(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493989b6(param_1 + 0x150);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939ece2 FUN_14939ece2 body=44 status=ok
// SIG undefined FUN_14939ece2(void)

void FUN_14939ece2(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1493989b6(param_1 + 0x1b0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14939ed14 FUN_14939ed14 body=185 status=ok
// SIG undefined FUN_14939ed14(void)

void FUN_14939ed14(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb466(param_1 + 0x170,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939edd4 FUN_14939edd4 body=185 status=ok
// SIG undefined FUN_14939edd4(void)

void FUN_14939edd4(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb466(param_1 + 400,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939ee94 FUN_14939ee94 body=185 status=ok
// SIG undefined FUN_14939ee94(void)

void FUN_14939ee94(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb466(param_1 + 0x1d0,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939ef54 FUN_14939ef54 body=185 status=ok
// SIG undefined FUN_14939ef54(void)

void FUN_14939ef54(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb466(param_1 + 0x150,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939f014 FUN_14939f014 body=185 status=ok
// SIG undefined FUN_14939f014(void)

void FUN_14939f014(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444bb466(param_1 + 0x1b0,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939f0d8 FUN_14939f0d8 body=165 status=ok
// SIG undefined FUN_14939f0d8(void)

void FUN_14939f0d8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14939f17e(param_1,local_24 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939f17e FUN_14939f17e body=158 status=ok
// SIG undefined FUN_14939f17e(void)

undefined4 FUN_14939f17e(longlong *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_21 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetImportCollision");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x40,local_38,&local_21);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939f224 FUN_14939f224 body=158 status=ok
// SIG undefined FUN_14939f224(void)

void FUN_14939f224(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14939f2c4(param_1,local_21);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939f2c4 FUN_14939f2c4 body=158 status=ok
// SIG undefined FUN_14939f2c4(void)

undefined4 FUN_14939f2c4(longlong *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_21 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetImportCollisionType");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_14939f666(param_1[5],param_1 + 0x42,local_38,&local_21);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939f36e FUN_14939f36e body=165 status=ok
// SIG undefined FUN_14939f36e(void)

void FUN_14939f36e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14939f414(param_1,local_24 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939f414 FUN_14939f414 body=158 status=ok
// SIG undefined FUN_14939f414(void)

undefined4 FUN_14939f414(longlong *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_21 = param_2;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetOneConvexHullPerUCX");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x3e,local_38,&local_21);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939f4b6 FUN_14939f4b6 body=32 status=ok
// SIG undefined FUN_14939f4b6(void)

undefined8 FUN_14939f4b6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"StaticMeshLodDataNode");
  return param_2;
}



// FUNCTION 14939f4d6 FUN_14939f4d6 body=399 status=ok
// SIG undefined FUN_14939f4d6(void)

ulonglong FUN_14939f4d6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_14939f508;
  }
  FUN_1493aa874(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_14939f61b:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 0x15))
    goto LAB_14939f61b;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_14939f58b:
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_58;
      pvVar1 = (void *)*param_2;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_68;
      pvVar1 = (void *)*param_3;
      if (lVar6 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,pvVar1,lVar6 * 2);
      }
      FUN_1444ba954(uVar5,&local_70,&local_60);
      goto LAB_14939f61b;
    }
    uVar5 = FUN_1493aaa5a(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_14939f58b;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_14939f508:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14939f666 FUN_14939f666 body=260 status=ok
// SIG undefined FUN_14939f666(void)

ulonglong FUN_14939f666(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_1493aab20(param_1,param_2,param_4);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
    }
    FUN_1444ba954(uVar2,&local_50,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939f76c FUN_14939f76c body=32 status=ok
// SIG undefined FUN_14939f76c(void)

undefined8 FUN_14939f76c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SkeletonNode");
  return param_2;
}



// FUNCTION 14939f78c FUN_14939f78c body=26 status=ok
// SIG undefined FUN_14939f78c(void)

undefined8 FUN_14939f78c(longlong param_1,undefined8 param_2)

{
  FUN_1492f0c36(*(undefined8 *)(param_1 + 0x28));
  return param_2;
}



// FUNCTION 14939f7a6 FUN_14939f7a6 body=128 status=ok
// SIG undefined FUN_14939f7a6(void)

undefined8 FUN_14939f7a6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x170);
  if (lVar1 != 0) {
    lVar2 = FUN_140654dc2();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar1 = *(longlong *)(param_1 + 0x170), lVar1 != 0)) {
      lVar2 = FUN_140654dc2();
      if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x170);
      }
      return uVar3;
    }
  }
  uVar3 = FUN_140654dc2();
  return uVar3;
}



// FUNCTION 14939f82a FUN_14939f82a body=32 status=ok
// SIG undefined FUN_14939f82a(void)

undefined8 FUN_14939f82a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SceneVariantSetFactoryNode");
  return param_2;
}



// FUNCTION 14939f84e FUN_14939f84e body=32 status=ok
// SIG undefined FUN_14939f84e(void)

undefined8 FUN_14939f84e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SkeletonNode");
  return param_2;
}



// FUNCTION 14939f86e FUN_14939f86e body=26 status=ok
// SIG undefined FUN_14939f86e(void)

undefined8 FUN_14939f86e(longlong param_1,undefined8 param_2)

{
  FUN_1492f0c36(*(undefined8 *)(param_1 + 0x28));
  return param_2;
}



// FUNCTION 14939f888 FUN_14939f888 body=128 status=ok
// SIG undefined FUN_14939f888(void)

undefined8 FUN_14939f888(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 400);
  if (lVar1 != 0) {
    lVar2 = FUN_140f5e1c2();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar1 = *(longlong *)(param_1 + 400), lVar1 != 0)) {
      lVar2 = FUN_140f5e1c2();
      if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 400);
      }
      return uVar3;
    }
  }
  uVar3 = FUN_140f5e1c2();
  return uVar3;
}



// FUNCTION 14939f908 FUN_14939f908 body=32 status=ok
// SIG undefined FUN_14939f908(void)

undefined8 FUN_14939f908(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"TextureFactoryNode");
  return param_2;
}



// FUNCTION 14939f928 FUN_14939f928 body=26 status=ok
// SIG undefined FUN_14939f928(void)

undefined8 FUN_14939f928(longlong param_1,undefined8 param_2)

{
  FUN_1492f0c36(*(undefined8 *)(param_1 + 0x28));
  return param_2;
}



// FUNCTION 14939f954 FUN_14939f954 body=419 status=ok
// SIG undefined FUN_14939f954(void)

void FUN_14939f954(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14939fafe();
  if (param_2 != 0) {
    lVar2 = FUN_1459f6786();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
      FUN_144a882a8(local_38,local_48,L".GetAddressX");
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      cVar1 = FUN_1493a0594(*(undefined8 *)(param_2 + 0x28),param_1 + 0x7e,local_38,&local_49);
      if (cVar1 != '\0') {
        FUN_1446f470e(local_48,L"AddressX",1);
        lVar2 = local_48[0];
        uVar3 = FUN_144a79692();
        FUN_1493a0bae(param_1,param_1 + 0x7e,uVar3,lVar2);
      }
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
      FUN_144a882a8(local_38,local_48,L".GetAddressY");
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      cVar1 = FUN_1493a0594(*(undefined8 *)(param_2 + 0x28),param_1 + 0x80,local_38,&local_49);
      if (cVar1 != '\0') {
        FUN_1446f470e(local_48,L"AddressY",1);
        uVar3 = FUN_144a79692();
        FUN_1493a0bae(param_1,param_1 + 0x80,uVar3,local_48[0]);
      }
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14939fafe FUN_14939fafe body=1953 status=ok
// SIG undefined FUN_14939fafe(void)

void FUN_14939fafe(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1492f200c(param_2,param_1);
  if (param_2 != 0) {
    lVar5 = FUN_1458f3582();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) == lVar5 + 0x30)) {
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
      FUN_144a882a8(local_50,&local_60,L".GetVirtualTextureStreaming");
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_1444bc4d9(*(undefined8 *)(param_2 + 0x28),param_1 + 0x66,local_50,local_64);
      if (cVar3 != '\0') {
        FUN_1446f470e(&local_60,L"VirtualTextureStreaming",1);
        puVar2 = local_60;
        uVar6 = FUN_144a7937e();
        FUN_1492fdcb2(param_1,param_1 + 0x66,uVar6,puVar2);
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
      FUN_144a882a8(local_50,&local_60,L".GetCompressionSettings");
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_1493971bd(*(undefined8 *)(param_2 + 0x28),param_1 + 0x50,local_50,local_64);
      if (cVar3 != '\0') {
        FUN_1446f470e(&local_60,L"CompressionSettings",1);
        puVar2 = local_60;
        uVar6 = FUN_144a7937e();
        FUN_1492fe21a(param_1,param_1 + 0x50,uVar6,puVar2);
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
      FUN_144a882a8(local_50,&local_60,L".GetDownscale");
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_149331bf9(*(undefined8 *)(param_2 + 0x28),param_1 + 0x72,local_50,local_64);
      if (cVar3 != '\0') {
        local_60 = (undefined8 *)FUN_144a7937e();
        uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
                -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar7 = (longlong *)FUN_1493770e0(param_1 + 0x10,uVar4 >> 0x10 ^ uVar4,&local_60);
        local_60 = (undefined8 *)0x0;
        local_58 = 0;
        FUN_1446efa72(&local_60,0,3,0x10);
        puVar2 = local_60;
        local_58 = 3;
        *local_60 = &PTR_LAB_14a541050;
        uVar6 = FUN_144a3f946();
        puVar2[2] = uVar6;
        *puVar2 = &PTR_FUN_14bc94a20;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3,param_1);
        puVar2[4] = FUN_1493aad68;
        iVar1 = (int)plVar7[1];
        *(uint *)(plVar7 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar7 + 0xc) < iVar1 + 1U) {
          FUN_14930926e(plVar7,iVar1);
        }
        lVar5 = *plVar7;
        lVar8 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar5 + lVar8) = 0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = 0;
        *(undefined8 **)(lVar5 + lVar8) = local_60;
        local_60 = (undefined8 *)0x0;
        *(undefined4 *)(lVar5 + 8 + lVar8) = local_58;
        local_58 = 0;
        FUN_1449db362(&local_60);
        local_60 = (undefined8 *)FUN_144a7937e();
        uVar4 = ((uint)((ulonglong)local_60 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_60 >> 4)) *
                -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar7 = (longlong *)FUN_1493770e0(param_1 + 0x1a,uVar4 >> 0x10 ^ uVar4,&local_60);
        local_60 = (undefined8 *)0x0;
        local_58 = 0;
        FUN_1446efa72(&local_60,0,3,0x10);
        puVar2 = local_60;
        local_58 = 3;
        *local_60 = &PTR_LAB_14a541050;
        uVar6 = FUN_144a3f946();
        puVar2[2] = uVar6;
        *puVar2 = &PTR_FUN_14bc94a90;
        puVar2[3] = 0;
        FUN_14485c47a(puVar2 + 3);
        puVar2[4] = FUN_1493aadea;
        lVar5 = plVar7[1];
        uVar4 = (int)lVar5 + 1;
        *(uint *)(plVar7 + 1) = uVar4;
        if (*(uint *)((longlong)plVar7 + 0xc) < uVar4) {
          FUN_14930926e(plVar7);
        }
        lVar8 = *plVar7;
        lVar5 = (longlong)(int)lVar5 * 0x10;
        *(undefined8 *)(lVar8 + lVar5) = 0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = 0;
        *(undefined8 **)(lVar8 + lVar5) = local_60;
        local_60 = (undefined8 *)0x0;
        *(undefined4 *)(lVar8 + 8 + lVar5) = local_58;
        local_58 = 0;
        FUN_1449db362();
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
      FUN_144a882a8(local_50,&local_60,L".GetDownscaleOptions");
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_1493971bd(*(undefined8 *)(param_2 + 0x28),param_1 + 0x74,local_50,local_64);
      if (cVar3 != '\0') {
        FUN_1446f470e(&local_60,L"DownscaleOptions",1);
        puVar2 = local_60;
        uVar6 = FUN_144a7937e();
        FUN_1492fe21a(param_1,param_1 + 0x74,uVar6,puVar2);
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
      FUN_144a882a8(local_50,&local_60,L".GetFilter");
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_1493971bd(*(undefined8 *)(param_2 + 0x28),param_1 + 0x5e,local_50,local_64);
      if (cVar3 != '\0') {
        FUN_1446f470e(&local_60,L"Filter",1);
        puVar2 = local_60;
        uVar6 = FUN_144a7937e();
        FUN_1492fe21a(param_1,param_1 + 0x5e,uVar6,puVar2);
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
      FUN_144a882a8(local_50,&local_60,L".GetLODBias");
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_1444bbfbb(*(undefined8 *)(param_2 + 0x28),param_1 + 0x6e,local_50,local_64);
      if (cVar3 != '\0') {
        FUN_1446f470e(&local_60,L"LODBias",1);
        puVar2 = local_60;
        uVar6 = FUN_144a7937e();
        FUN_1492fdf66(param_1,param_1 + 0x6e,uVar6,puVar2);
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
      FUN_144a882a8(local_50,&local_60,L".GetLODGroup");
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_1493971bd(*(undefined8 *)(param_2 + 0x28),param_1 + 0x70,local_50,local_64);
      if (cVar3 != '\0') {
        FUN_1446f470e(&local_60,L"LODGroup",1);
        puVar2 = local_60;
        uVar6 = FUN_144a7937e();
        FUN_1492fe21a(param_1,param_1 + 0x70,uVar6,puVar2);
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
      FUN_144a882a8(local_50,&local_60,L".GetMipLoadOptions");
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_1493971bd(*(undefined8 *)(param_2 + 0x28),param_1 + 0x60,local_50,local_64);
      if (cVar3 != '\0') {
        FUN_1446f470e(&local_60,L"MipLoadOptions",1);
        puVar2 = local_60;
        uVar6 = FUN_144a7937e();
        FUN_1492fe21a(param_1,param_1 + 0x60,uVar6,puVar2);
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_60);
      FUN_144a882a8(local_50,&local_60,L".GetSRGB");
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      cVar3 = FUN_1444bc4d9(*(undefined8 *)(param_2 + 0x28),param_1 + 0x62,local_50,local_64);
      if (cVar3 != '\0') {
        FUN_1446f470e(&local_60,L"SRGB",1);
        puVar2 = local_60;
        uVar6 = FUN_144a7937e();
        FUN_1492fdcb2(param_1,param_1 + 0x62,uVar6,puVar2);
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a02bc FUN_1493a02bc body=41 status=ok
// SIG undefined FUN_1493a02bc(void)

void FUN_1493a02bc(void)

{
  FUN_140033559("..\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Public\\InterchangeMeshFactoryNode.h"
                ,0xd4,L"Pure virtual not implemented (%s)",L"\"FillAssetClassFromAttribute\"");
  return;
}



// FUNCTION 1493a02e6 FUN_1493a02e6 body=42 status=ok
// SIG undefined FUN_1493a02e6(void)

undefined8 FUN_1493a02e6(void)

{
  FUN_140033559("..\\Plugins\\Interchange\\Runtime\\Source\\FactoryNodes\\Public\\InterchangeMeshFactoryNode.h"
                ,0xd5,L"Pure virtual not implemented (%s)",L"\"SetNodeClassFromClassAttribute\"");
  return 0;
}



// FUNCTION 1493a0318 FUN_1493a0318 body=317 status=ok
// SIG undefined FUN_1493a0318(void)

void FUN_1493a0318(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_48);
  FUN_144a882a8(local_38,&local_48,L".GetAssetClassName");
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_48 = (wchar_t *)0x0;
  uStack_40 = 0;
  FUN_1444bba6a(param_1[5],param_1 + 0x2a,local_38,&local_48);
  lVar2 = FUN_140654dc2();
  local_28 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_28,&local_58);
  if ((int)uStack_40 == local_50) {
    bVar3 = true;
    if (1 < (int)uStack_40) {
      iVar1 = wcscmp(local_48,local_58);
      bVar3 = iVar1 == 0;
    }
  }
  else {
    bVar3 = local_50 + (int)uStack_40 == 1;
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8(local_58);
  }
  if (bVar3) {
    lVar2 = FUN_140654dc2();
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar2);
    }
    param_1[0x2e] = lVar2;
    *(undefined1 *)(param_1 + 0x2f) = 1;
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493a0456 FUN_1493a0456 body=317 status=ok
// SIG undefined FUN_1493a0456(void)

void FUN_1493a0456(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x2a0))(param_1,&local_48);
  FUN_144a882a8(local_38,&local_48,L".GetAssetClassName");
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_48 = (wchar_t *)0x0;
  uStack_40 = 0;
  FUN_1444bba6a(param_1[5],param_1 + 0x2a,local_38,&local_48);
  lVar2 = FUN_140f5e1c2();
  local_28 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_28,&local_58);
  if ((int)uStack_40 == local_50) {
    bVar3 = true;
    if (1 < (int)uStack_40) {
      iVar1 = wcscmp(local_48,local_58);
      bVar3 = iVar1 == 0;
    }
  }
  else {
    bVar3 = local_50 + (int)uStack_40 == 1;
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8(local_58);
  }
  if (bVar3) {
    lVar2 = FUN_140f5e1c2();
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar2);
    }
    param_1[0x32] = lVar2;
    *(undefined1 *)(param_1 + 0x33) = 1;
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493a0594 FUN_1493a0594 body=399 status=ok
// SIG undefined FUN_1493a0594(void)

ulonglong FUN_1493a0594(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140c44378();
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_1493a05c6;
  }
  FUN_1493a0724(&local_50,param_2,param_1);
  if (local_50 == 0) {
LAB_1493a06d9:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_50,local_48);
    if ((cVar2 == '\0') || (iVar3 = FUN_1419073b0(local_50,local_48), iVar3 != 7))
    goto LAB_1493a06d9;
    uVar5 = 0x4000000;
    if (local_50 == 0) {
LAB_1493a0649:
      local_60 = (void *)0x0;
      local_58 = *(int *)(param_2 + 1);
      lVar6 = (longlong)local_58;
      pvVar1 = (void *)*param_2;
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar1,lVar6 * 2);
      }
      local_70 = (void *)0x0;
      local_68 = *(int *)(param_3 + 1);
      lVar6 = (longlong)local_68;
      pvVar1 = (void *)*param_3;
      if (lVar6 == 0) {
        local_64 = 0;
      }
      else {
        FUN_1446dd670(&local_70,local_68,0);
        memcpy(local_70,pvVar1,lVar6 * 2);
      }
      FUN_1444ba954(uVar5,&local_70,&local_60);
      goto LAB_1493a06d9;
    }
    uVar5 = FUN_1493a090a(local_50,local_48,param_4);
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((uVar5 & 1) == 0) goto LAB_1493a0649;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_1493a05c6:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1493a0724 FUN_1493a0724 body=485 status=ok
// SIG undefined FUN_1493a0724(void)

longlong * FUN_1493a0724(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  FUN_144a787a6(plVar1);
  if (*param_1 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar6 = (longlong)local_38;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar6 * 2);
    }
    puVar7 = local_50;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_40;
    uVar5 = 0x4000000;
  }
  else {
    cVar3 = FUN_140c44378(*param_1,plVar1);
    if (cVar3 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar6 = (longlong)local_58;
      pvVar2 = (void *)param_1[1];
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar2,lVar6 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      FUN_1444ba954(0x800000,local_70,&local_60);
    }
    iVar4 = FUN_1419073b0(*param_1,plVar1);
    if (iVar4 == 7) goto LAB_1493a08b7;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar6 = (longlong)local_78;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar2,lVar6 * 2);
    }
    puVar7 = local_90;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_80;
    uVar5 = 0x100000;
  }
  FUN_1444ba954(uVar5,puVar7,ppvVar8);
LAB_1493a08b7:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a090a FUN_1493a090a body=198 status=ok
// SIG undefined FUN_1493a090a(void)

undefined8 FUN_1493a090a(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 7)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 1)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined1 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 1493a09d0 FUN_1493a09d0 body=214 status=ok
// SIG undefined FUN_1493a09d0(void)

ulonglong FUN_1493a09d0(longlong *param_1,uint param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  undefined8 unaff_RDI;
  undefined7 uVar9;
  bool bVar10;
  byte bVar11;
  ulonglong uVar8;
  
  plVar2 = (longlong *)param_1[0xe];
  if (plVar2 == (longlong *)0x0) {
LAB_1493a0a22:
    uVar8 = 0;
  }
  else {
    iVar4 = (int)plVar2[1];
    do {
      if (iVar4 == 0) goto LAB_1493a0a22;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
    if ((param_1[0xd] == 0) || ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34))) {
      uVar8 = 0;
    }
    else {
      plVar5 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[8];
      }
      iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
      if (iVar4 != -1) {
        plVar5 = (longlong *)(ulonglong)*param_3;
        do {
          lVar6 = *param_1 + (longlong)iVar4 * 0x40;
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x40) == *param_3) {
            plVar5 = (longlong *)(lVar6 + 8);
            if (((ulonglong)plVar5 & 0xfffffffffffffff7) != 0) {
              uVar9 = (undefined7)((ulonglong)unaff_RDI >> 8);
              bVar7 = 1;
              if (*(longlong *)(lVar6 + 0x20) == 0) {
                bVar11 = 0;
              }
              else {
                lVar6 = FUN_1492ff8ec(*(longlong *)(lVar6 + 0x20),lVar6 + 0x28,param_4);
                bVar11 = lVar6 == 1;
              }
              goto LAB_1493a0a70;
            }
            break;
          }
          iVar4 = *(int *)(lVar6 + 0x38);
        } while (iVar4 != -1);
      }
      bVar11 = (byte)plVar5;
      bVar7 = 0;
      uVar9 = 0;
LAB_1493a0a70:
      uVar8 = CONCAT71(uVar9,bVar7 & bVar11);
    }
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1493a0aa6 FUN_1493a0aa6 body=263 status=ok
// SIG undefined FUN_1493a0aa6(void)

ulonglong FUN_1493a0aa6(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 param_4)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_1493a0e62(param_1,param_2,param_4,0);
  if ((uVar2 & 1) == 0) {
    local_40 = (void *)0x0;
    local_38 = *(int *)(param_2 + 1);
    lVar3 = (longlong)local_38;
    pvVar1 = (void *)*param_2;
    if (lVar3 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar1,lVar3 * 2);
    }
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 1);
    lVar3 = (longlong)local_48;
    pvVar1 = (void *)*param_3;
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar1,lVar3 * 2);
    }
    FUN_1444ba954(uVar2,&local_50,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a0bae FUN_1493a0bae body=690 status=ok
// SIG undefined FUN_1493a0bae(void)

void FUN_1493a0bae(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  local_48 = param_3;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0x80,uVar4 >> 0x10 ^ uVar4,&local_48);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_1493a10aa(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = ((uint)(local_48 >> 0x14) & 0xffff ^ (uint)(local_48 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  plVar3 = (longlong *)FUN_149308cea(param_1 + 0xd0,uVar4 >> 0x10 ^ uVar4);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_70;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_58 = 0;
  local_50 = 0;
  local_68 = param_4;
  local_60 = param_1;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  FUN_1493a1518(local_58,&local_78);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14930926e(plVar3,iVar1);
  }
  lVar5 = *plVar3;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar5 + lVar6) = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar5 + lVar6) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar5 + 8 + lVar6) = local_50;
  local_50 = 0;
  FUN_1449db362();
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a0e62 FUN_1493a0e62 body=379 status=ok
// SIG undefined FUN_1493a0e62(void)

ulonglong FUN_1493a0e62(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  if (iVar3 == -1) {
LAB_1493a0f3e:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar5 = *param_1 + (longlong)local_4c * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 7;
    *(undefined8 *)(lVar5 + 0x18) = 1;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 1;
    if (param_1[0xc] == lVar5) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined1 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_1493a0f3e;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 7) goto LAB_1493a0f0a;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_1493a0f0a;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = param_4;
  uVar7 = FUN_1493a0fde(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1493a0f0a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a0fde FUN_1493a0fde body=202 status=ok
// SIG undefined FUN_1493a0fde(void)

undefined8 FUN_1493a0fde(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 7) && (uVar1 = 0x200000, param_2[1] == 1)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        uVar1 = 1;
        FUN_140c54cf0(&local_48,param_3,1);
        *(undefined4 *)(param_2 + 3) = local_48;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_44;
        *(undefined4 *)(param_2 + 4) = uStack_40;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
        *(undefined1 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a10aa FUN_1493a10aa body=135 status=ok
// SIG undefined FUN_1493a10aa(void)

undefined8 * FUN_1493a10aa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc93a50;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a1132 FUN_1493a1132 body=62 status=ok
// SIG undefined FUN_1493a1132(void)

undefined8 * FUN_1493a1132(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc93a50;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a1184 FUN_1493a1184 body=64 status=ok
// SIG undefined FUN_1493a1184(void)

void FUN_1493a1184(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a129a(*param_2,param_1);
  return;
}



// FUNCTION 1493a11c4 FUN_1493a11c4 body=64 status=ok
// SIG undefined FUN_1493a11c4(void)

void FUN_1493a11c4(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a129a(*param_2,param_1);
  return;
}



// FUNCTION 1493a1204 FUN_1493a1204 body=98 status=ok
// SIG undefined FUN_1493a1204(void)

void FUN_1493a1204(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a129a(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a1257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a127a FUN_1493a127a body=31 status=ok
// SIG undefined FUN_1493a127a(void)

undefined1 FUN_1493a127a(longlong param_1,undefined8 param_2)

{
  FUN_1493a1322(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a129a FUN_1493a129a body=135 status=ok
// SIG undefined FUN_1493a129a(void)

undefined8 * FUN_1493a129a(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc93a50;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a1322 FUN_1493a1322 body=204 status=ok
// SIG undefined FUN_1493a1322(void)

undefined4 FUN_1493a1322(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined1 local_41;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_4;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1493a13f0(param_1,param_2,&local_41);
    if ((char)uVar1 != '\0') {
      local_30 = 0;
      local_38 = param_3;
      FUN_1400021e4(&local_40,&local_68);
      local_58 = local_68;
      local_50 = local_60 + -1;
      if (local_60 == 0) {
        local_50 = 0;
      }
      lVar2 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        *(undefined1 *)(local_38 + *(int *)(lVar2 + 0x44)) = local_41;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a13f0 FUN_1493a13f0 body=295 status=ok
// SIG undefined FUN_1493a13f0(void)

ulonglong FUN_1493a13f0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1493a0724(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1493a14e5:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if ((cVar3 == '\0') || (iVar4 = FUN_1419073b0(local_58[2],plVar1), iVar4 != 7))
      goto LAB_1493a14e5;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_1493a090a(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1493a144b;
  }
  param_3 = 0;
LAB_1493a144b:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3 & 0xffffff01;
}



// FUNCTION 1493a1518 FUN_1493a1518 body=135 status=ok
// SIG undefined FUN_1493a1518(void)

undefined8 * FUN_1493a1518(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc93ac0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a15a0 FUN_1493a15a0 body=62 status=ok
// SIG undefined FUN_1493a15a0(void)

undefined8 * FUN_1493a15a0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc93ac0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a15f2 FUN_1493a15f2 body=64 status=ok
// SIG undefined FUN_1493a15f2(void)

void FUN_1493a15f2(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a1708(*param_2,param_1);
  return;
}



// FUNCTION 1493a1632 FUN_1493a1632 body=64 status=ok
// SIG undefined FUN_1493a1632(void)

void FUN_1493a1632(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a1708(*param_2,param_1);
  return;
}



// FUNCTION 1493a1672 FUN_1493a1672 body=98 status=ok
// SIG undefined FUN_1493a1672(void)

void FUN_1493a1672(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a1708(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a16c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a16e8 FUN_1493a16e8 body=31 status=ok
// SIG undefined FUN_1493a16e8(void)

undefined1 FUN_1493a16e8(longlong param_1,undefined8 param_2)

{
  FUN_1493a1790(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a1708 FUN_1493a1708 body=135 status=ok
// SIG undefined FUN_1493a1708(void)

undefined8 * FUN_1493a1708(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc93ac0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a1790 FUN_1493a1790 body=306 status=ok
// SIG undefined FUN_1493a1790(void)

ulonglong FUN_1493a1790(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined7 uStack_67;
  int local_60;
  int local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  local_48 = param_4;
  local_40 = param_3;
  FUN_1400021e4(&local_48,&local_68);
  local_50 = local_60 + -1;
  if (local_60 == 0) {
    local_50 = 0;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = FUN_1492f2092(&local_40,uVar5);
  lVar3 = lVar2;
  if (CONCAT71(uStack_67,local_68) != 0) {
    lVar3 = FUN_1400020a8();
  }
  bVar1 = (byte)lVar3;
  if (lVar2 == 0) goto LAB_1493a1811;
  lVar6 = *(int *)(lVar2 + 0x44) + local_40;
  lVar3 = *(longlong *)(lVar2 + 8);
  lVar4 = FUN_144a5ab96();
  if (*(ulonglong *)(lVar4 + 8) == 0) {
    bVar7 = lVar3 != 0;
    if (lVar3 != lVar4 && bVar7) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        bVar7 = lVar3 != 0;
        if (lVar3 == lVar4) break;
      } while (lVar3 != 0);
    }
    if (bVar7) {
LAB_1493a189f:
      local_68 = (*(byte *)(lVar6 + (ulonglong)*(byte *)(lVar2 + 0x71)) & *(byte *)(lVar2 + 0x73))
                 != 0;
      bVar1 = FUN_149309a42(param_1,param_2);
      uVar5 = param_2;
      goto LAB_1493a1811;
    }
  }
  else if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) goto LAB_1493a189f;
  bVar1 = FUN_1493a18c4(param_1,param_2,lVar6);
  uVar5 = param_2;
LAB_1493a1811:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a18c4 FUN_1493a18c4 body=177 status=ok
// SIG undefined FUN_1493a18c4(void)

ulonglong FUN_1493a18c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1493a1976(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 7);
      goto LAB_1493a1946;
    }
  }
  uVar3 = 0;
LAB_1493a1946:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a1976 FUN_1493a1976 body=253 status=ok
// SIG undefined FUN_1493a1976(void)

undefined8 *
FUN_1493a1976(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  void *_Src;
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1493a0e62(*(undefined8 *)(param_1 + 0x28),param_3,param_4,0);
  if ((uVar1 & 1) != 0) {
    FUN_1493a0724(param_2,param_3,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  FUN_140056680(local_50,L"RegisterAttribute");
  FUN_1444ba954(uVar1,local_50,&local_40);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a1a76 FUN_1493a1a76 body=661 status=ok
// SIG undefined FUN_1493a1a76(void)

ulonglong FUN_1493a1a76(longlong *param_1,uint param_2,int *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  int *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 == (longlong *)0x0) {
LAB_1493a1c78:
    uVar8 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1493a1c78;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = param_1[0xd];
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        plVar7 = param_1 + 7;
        if ((longlong *)param_1[8] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[8];
        }
        iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        if (iVar6 != -1) {
          do {
            lVar2 = *param_1 + (longlong)iVar6 * 0x40;
            if (*(int *)(*param_1 + (longlong)iVar6 * 0x40) == *param_3) {
              if ((lVar2 != 0) && (lVar2 != -8)) {
                if (*(longlong *)(lVar2 + 0x20) != 0) {
                  FUN_149306054(*(longlong *)(lVar2 + 0x20),lVar2 + 0x28,param_4);
                }
                goto LAB_1493a1cc9;
              }
              break;
            }
            iVar6 = *(int *)(lVar2 + 0x38);
          } while (iVar6 != -1);
        }
      }
      FUN_14934a610(param_1,local_70);
      FUN_14934a78a(param_1,local_80,param_3);
      FUN_1413f0866(lVar4,local_70,param_3,0);
      FUN_1492f0926(lVar4,local_80,param_4,0);
      FUN_1444be0f2(&local_c8,local_80,lVar4);
      FUN_1444bd3c6(&local_e0,local_70,lVar4);
      local_88 = local_b8;
      local_58 = &local_b0;
      local_b0 = local_e0;
      local_a8 = local_d8;
      uStack_a0 = uStack_d0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_98 = local_c8;
      uStack_94 = uStack_c4;
      uStack_90 = (undefined4)uStack_c0;
      uStack_8c = uStack_c0._4_4_;
      uStack_c0 = 0;
      local_b8 = 0;
      local_e8 = 0;
      local_60 = param_3;
      FUN_1493a1d0c(param_1,local_4c,param_2);
      if (CONCAT44(uStack_8c,uStack_90) != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      if (uStack_c0 != 0) {
        FUN_1400020a8();
      }
      local_b0 = CONCAT44(local_b0._4_4_,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
      if (param_1[10] != 0) {
        FUN_149303af2(param_1[10],param_1 + 0xb,&local_b0);
      }
      if (local_80[0] != 0) {
        FUN_1400020a8();
      }
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
    }
LAB_1493a1cc9:
    LOCK();
    plVar7 = plVar3 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1493a1d0c FUN_1493a1d0c body=374 status=ok
// SIG undefined FUN_1493a1d0c(void)

undefined4 *
FUN_1493a1d0c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14934ae22(param_1,local_58);
  puVar1 = (undefined8 *)param_4[1];
  *local_50 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_50 + 2) = *puVar1;
  *(undefined8 *)(local_50 + 4) = puVar1[1];
  puVar1[1] = 0;
  local_50[6] = *(undefined4 *)(puVar1 + 2);
  local_50[7] = *(undefined4 *)((longlong)puVar1 + 0x14);
  puVar1[2] = 0;
  *(undefined8 *)(local_50 + 8) = puVar1[3];
  *(undefined8 *)(local_50 + 10) = puVar1[4];
  puVar1[4] = 0;
  local_50[0xc] = *(undefined4 *)(puVar1 + 5);
  local_50[0xd] = *(undefined4 *)((longlong)puVar1 + 0x2c);
  puVar1[5] = 0;
  local_50[0xe] = 0xffffffff;
  local_68 = param_5;
  cVar2 = FUN_14934af08(param_1,param_3,local_50,local_58);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_50[0xf] = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_50[0xe] =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14934ab02(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a1e84 FUN_1493a1e84 body=406 status=ok
// SIG undefined FUN_1493a1e84(void)

longlong FUN_1493a1e84(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(param_1 + 0x70);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1493a1ee3;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar7 = iVar5 == iVar6;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      iVar5 = iVar6;
      UNLOCK();
    } while (!bVar7);
    uVar4 = local_68;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_1493a201c(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
      local_80 = (longlong *)
                 CONCAT44(local_80._4_4_,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_149303af2(*(longlong *)(param_1 + 0x50),param_1 + 0x58,&local_80);
      }
      plVar1 = param_2 + 2;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      uStack_50 = plVar1;
      if ((int)param_2[5] == 0) {
        iVar5 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar5 = (int)param_2[5];
      }
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      uStack_60 = CONCAT44(uStack_3c,uStack_40);
      local_68 = local_48;
      uVar4 = local_68;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      local_80 = param_2;
      if ((local_68._4_4_ != iVar5) || (uStack_50 != plVar1)) {
        iVar6 = local_68._4_4_;
        local_68 = uVar4;
        do {
          FUN_1493a1a76(param_1,*(undefined4 *)(*local_80 + (longlong)iVar6 * 0x20),
                        *local_80 + (longlong)iVar6 * 0x20);
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
          FUN_1449c0562(&local_78);
          iVar6 = local_68._4_4_;
          uVar4 = local_68;
        } while (local_80 != param_2 ||
                 ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || local_68._4_4_ != iVar5));
      }
    }
    local_68 = uVar4;
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
LAB_1493a1ee3:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1493a201c FUN_1493a201c body=425 status=ok
// SIG undefined FUN_1493a201c(void)

void FUN_1493a201c(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_b8 [36];
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)param_1[0xe];
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1493a207e;
      LOCK();
      iVar8 = (int)plVar3[1];
      bVar9 = iVar7 == iVar8;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar8 = iVar7;
      }
      iVar7 = iVar8;
      UNLOCK();
    } while (!bVar9);
    lVar4 = param_1[0xd];
    if (lVar4 != 0) {
      plVar1 = param_1 + 2;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      iVar7 = 0;
      local_94 = param_2;
      local_60 = plVar1;
      if ((int)param_1[5] != 0) {
        FUN_1449c0562(&local_68);
        iVar7 = (int)param_1[5];
      }
      local_78 = local_58;
      uVar6 = local_78;
      local_70 = local_50;
      local_6c = local_4c;
      local_88 = local_68;
      local_80 = local_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar8 = local_78._4_4_;
      local_90 = param_1;
      if ((local_78._4_4_ != iVar7) || (local_78 = uVar6, local_60 != plVar1)) {
        do {
          local_78 = uVar6;
          lVar5 = *local_90;
          FUN_1492f0b5e(lVar4,(longlong)iVar8 * 0x40 + lVar5 + 0x10);
          FUN_1492f0b5e(lVar4,(longlong)iVar8 * 0x40 + lVar5 + 0x28);
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar8 = local_78._4_4_;
          uVar6 = local_78;
        } while (local_90 != param_1 || (local_80 != plVar1 || local_78._4_4_ != iVar7));
      }
      FUN_14934a950(param_1,local_94);
      local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
      if (param_1[10] != 0) {
        FUN_149303af2(param_1[10],param_1 + 0xb,&local_90);
      }
    }
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
LAB_1493a207e:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493a21c6 FUN_1493a21c6 body=54 status=ok
// SIG undefined FUN_1493a21c6(void)

void FUN_1493a21c6(longlong *param_1)

{
  FUN_1493a21fc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1493a21fc FUN_1493a21fc body=388 status=ok
// SIG undefined FUN_1493a21fc(void)

void FUN_1493a21fc(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar4 = (longlong)iStack_64;
      if (*(longlong *)(lVar2 + 0x10 + lVar4 * 0x30) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar4 * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14494313c(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar5 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar5 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar3 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1493a2382 FUN_1493a2382 body=485 status=ok
// SIG undefined FUN_1493a2382(void)

longlong * FUN_1493a2382(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  void **ppvVar8;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [16];
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_3;
  FUN_144a787a6(plVar1);
  if (*param_1 == 0) {
    local_40 = (void *)0x0;
    local_38 = (int)param_1[2];
    lVar6 = (longlong)local_38;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_34 = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,pvVar2,lVar6 * 2);
    }
    puVar7 = local_50;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_40;
    uVar5 = 0x4000000;
  }
  else {
    cVar3 = FUN_140c44378(*param_1,plVar1);
    if (cVar3 == '\0') {
      local_60 = (void *)0x0;
      local_58 = (int)param_1[2];
      lVar6 = (longlong)local_58;
      pvVar2 = (void *)param_1[1];
      if (lVar6 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar2,lVar6 * 2);
      }
      FUN_140056680(local_70,L"GetAttributeHandle");
      FUN_1444ba954(0x800000,local_70,&local_60);
    }
    iVar4 = FUN_1419073b0(*param_1,plVar1);
    if (iVar4 == 4) goto LAB_1493a2515;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[2];
    lVar6 = (longlong)local_78;
    pvVar2 = (void *)param_1[1];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar2,lVar6 * 2);
    }
    puVar7 = local_90;
    FUN_140056680(puVar7,L"GetAttributeHandle");
    ppvVar8 = &local_80;
    uVar5 = 0x100000;
  }
  FUN_1444ba954(uVar5,puVar7,ppvVar8);
LAB_1493a2515:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a2568 FUN_1493a2568 body=198 status=ok
// SIG undefined FUN_1493a2568(void)

undefined8 FUN_1493a2568(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar5);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar6 = 0x800000;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x40 + *param_1;
    if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0 && lVar4 != 0) &&
        (uVar6 = 0x100000, *(int *)(lVar4 + 0x20) == 4)) &&
       (uVar6 = 0x200000, *(longlong *)(lVar4 + 0x18) == 4)) {
      lVar4 = *(longlong *)(lVar4 + 0x10);
      uVar6 = 0x400000;
      if ((-1 < lVar4) && (lVar4 < param_1[0xb])) {
        *param_3 = *(undefined4 *)(param_1[10] + lVar4);
        uVar6 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar6;
}



// FUNCTION 1493a262e FUN_1493a262e body=386 status=ok
// SIG undefined FUN_1493a262e(void)

ulonglong FUN_1493a262e(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar4);
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  if (iVar3 == -1) {
LAB_1493a270a:
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_4c,&local_58,0);
    lVar5 = *param_1 + (longlong)local_4c * 0x40;
    plVar6 = (longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x20) = 4;
    *(undefined8 *)(lVar5 + 0x18) = 4;
    lVar5 = param_1[0xb];
    param_1[0xb] = lVar5 + 4;
    if ((ulonglong)(param_1[0xc] - lVar5) < 4) {
      FUN_14112c458(param_1 + 10,lVar5);
    }
    *(undefined4 *)(param_1[10] + lVar5) = 0;
    *plVar6 = lVar5;
  }
  else {
    lVar5 = *param_1 + (longlong)iVar3 * 0x40;
    if (lVar5 == 0) goto LAB_1493a270a;
    uVar7 = 0x100000;
    if (*(int *)(lVar5 + 0x20) != 4) goto LAB_1493a26d6;
    plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x10);
    uVar7 = 0x400000;
    if ((*plVar6 < 0) || (param_1[0xb] <= *plVar6)) goto LAB_1493a26d6;
  }
  *(undefined4 *)((longlong)plVar6 + 0x14) = param_4;
  uVar7 = FUN_1493a27b2(param_1,plVar6,param_3);
  if ((uVar7 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1493a26d6:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a27b2 FUN_1493a27b2 body=200 status=ok
// SIG undefined FUN_1493a27b2(void)

undefined8 FUN_1493a27b2(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (param_2 == (longlong *)0x0) {
    uVar1 = 0x800000;
  }
  else {
    uVar1 = 0x100000;
    if (((int)param_2[2] == 4) && (uVar1 = 0x200000, param_2[1] == 4)) {
      uVar1 = 0x400000;
      if ((-1 < *param_2) && (*param_2 < *(longlong *)(param_1 + 0x58))) {
        FUN_140c54cf0(&local_40,param_3,4);
        *(undefined4 *)(param_2 + 3) = local_40;
        *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3c;
        *(undefined4 *)(param_2 + 4) = uStack_38;
        *(undefined4 *)((longlong)param_2 + 0x24) = uStack_34;
        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + *param_2) = *param_3;
        uVar1 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a287c FUN_1493a287c body=34 status=ok
// SIG undefined FUN_1493a287c(void)

undefined8 FUN_1493a287c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493a28b8 FUN_1493a28b8 body=29 status=ok
// SIG undefined FUN_1493a28b8(void)

bool FUN_1493a28b8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1493a28d6 FUN_1493a28d6 body=26 status=ok
// SIG undefined FUN_1493a28d6(void)

bool FUN_1493a28d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1493a28f0 FUN_1493a28f0 body=24 status=ok
// SIG undefined FUN_1493a28f0(void)

bool FUN_1493a28f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1493a2908 FUN_1493a2908 body=93 status=ok
// SIG undefined FUN_1493a2908(void)

void FUN_1493a2908(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc93dd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a2966 FUN_1493a2966 body=93 status=ok
// SIG undefined FUN_1493a2966(void)

void FUN_1493a2966(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc93dd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a29c4 FUN_1493a29c4 body=126 status=ok
// SIG undefined FUN_1493a29c4(void)

void FUN_1493a29c4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc93dd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a2a33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a2a42 FUN_1493a2a42 body=40 status=ok
// SIG undefined FUN_1493a2a42(void)

void FUN_1493a2a42(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001493a2a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1493a2a6a FUN_1493a2a6a body=140 status=ok
// SIG undefined FUN_1493a2a6a(void)

bool FUN_1493a2a6a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a2af8 FUN_1493a2af8 body=34 status=ok
// SIG undefined FUN_1493a2af8(void)

undefined8 FUN_1493a2af8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493a2b34 FUN_1493a2b34 body=29 status=ok
// SIG undefined FUN_1493a2b34(void)

bool FUN_1493a2b34(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1493a2b52 FUN_1493a2b52 body=26 status=ok
// SIG undefined FUN_1493a2b52(void)

bool FUN_1493a2b52(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1493a2b6c FUN_1493a2b6c body=24 status=ok
// SIG undefined FUN_1493a2b6c(void)

bool FUN_1493a2b6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1493a2b84 FUN_1493a2b84 body=93 status=ok
// SIG undefined FUN_1493a2b84(void)

void FUN_1493a2b84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc93e40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a2be2 FUN_1493a2be2 body=93 status=ok
// SIG undefined FUN_1493a2be2(void)

void FUN_1493a2be2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc93e40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a2c40 FUN_1493a2c40 body=126 status=ok
// SIG undefined FUN_1493a2c40(void)

void FUN_1493a2c40(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc93e40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a2caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a2cbe FUN_1493a2cbe body=40 status=ok
// SIG undefined FUN_1493a2cbe(void)

void FUN_1493a2cbe(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001493a2ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1493a2ce6 FUN_1493a2ce6 body=140 status=ok
// SIG undefined FUN_1493a2ce6(void)

bool FUN_1493a2ce6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a2d74 FUN_1493a2d74 body=418 status=ok
// SIG undefined FUN_1493a2d74(void)

void FUN_1493a2d74(longlong *param_1,uint param_2)

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
      FUN_14494313c(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_140044672(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x30 + lVar2 + -0x2c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = iVar8 + -1;
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
        puVar5 = puVar5 + -0xc;
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



// FUNCTION 1493a2f16 FUN_1493a2f16 body=480 status=ok
// SIG undefined FUN_1493a2f16(void)

void FUN_1493a2f16(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x30;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x2c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a30f8 FUN_1493a30f8 body=319 status=ok
// SIG undefined FUN_1493a30f8(void)

undefined4 * FUN_1493a30f8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1493a3238(param_1,local_48);
  FUN_1493a33b4(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1493a3326(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x2c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1493a2f16(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a3238 FUN_1493a3238 body=238 status=ok
// SIG undefined FUN_1493a3238(void)

int * FUN_1493a3238(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 1493a3326 FUN_1493a3326 body=141 status=ok
// SIG undefined FUN_1493a3326(void)

undefined8 FUN_1493a3326(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_1493a3434(), iVar10 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar10 * 0x30);
    if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar10 * 0x30) != 0) {
      FUN_1400020a8();
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    plVar1[4] = *(longlong *)(param_3 + 8);
    *(undefined4 *)(plVar1 + 2) = uVar6;
    *(undefined4 *)((longlong)plVar1 + 0x14) = uVar7;
    *(undefined4 *)(plVar1 + 3) = uVar8;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar9;
    *(undefined4 *)plVar1 = uVar2;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
    *(undefined4 *)(plVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
    FUN_1493a3504(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 1493a33b4 FUN_1493a33b4 body=127 status=ok
// SIG undefined FUN_1493a33b4(void)

undefined8 * FUN_1493a33b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  param_1[2] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 2);
  return param_1;
}



// FUNCTION 1493a3434 FUN_1493a3434 body=207 status=ok
// SIG undefined FUN_1493a3434(void)

int FUN_1493a3434(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1493a347e:
      lVar10 = (longlong)iVar1 * 0x30;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1493a34f8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1493a34f8;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1493a34e9;
    }
  }
  return -1;
LAB_1493a34f8:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1493a34e9:
  iVar1 = *(int *)(lVar4 + 0x28 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1493a347e;
}



// FUNCTION 1493a3504 FUN_1493a3504 body=122 status=ok
// SIG undefined FUN_1493a3504(void)

void FUN_1493a3504(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 1493a357e FUN_1493a357e body=34 status=ok
// SIG undefined FUN_1493a357e(void)

undefined8 FUN_1493a357e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493a35ba FUN_1493a35ba body=29 status=ok
// SIG undefined FUN_1493a35ba(void)

bool FUN_1493a35ba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1493a35d8 FUN_1493a35d8 body=26 status=ok
// SIG undefined FUN_1493a35d8(void)

bool FUN_1493a35d8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1493a35f2 FUN_1493a35f2 body=24 status=ok
// SIG undefined FUN_1493a35f2(void)

bool FUN_1493a35f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1493a360a FUN_1493a360a body=93 status=ok
// SIG undefined FUN_1493a360a(void)

void FUN_1493a360a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc93eb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a3668 FUN_1493a3668 body=93 status=ok
// SIG undefined FUN_1493a3668(void)

void FUN_1493a3668(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc93eb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a36c6 FUN_1493a36c6 body=126 status=ok
// SIG undefined FUN_1493a36c6(void)

void FUN_1493a36c6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc93eb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a3735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a3744 FUN_1493a3744 body=40 status=ok
// SIG undefined FUN_1493a3744(void)

void FUN_1493a3744(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001493a3769. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1493a376c FUN_1493a376c body=140 status=ok
// SIG undefined FUN_1493a376c(void)

bool FUN_1493a376c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a37fa FUN_1493a37fa body=34 status=ok
// SIG undefined FUN_1493a37fa(void)

undefined8 FUN_1493a37fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493a3836 FUN_1493a3836 body=29 status=ok
// SIG undefined FUN_1493a3836(void)

bool FUN_1493a3836(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1493a3854 FUN_1493a3854 body=26 status=ok
// SIG undefined FUN_1493a3854(void)

bool FUN_1493a3854(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1493a386e FUN_1493a386e body=24 status=ok
// SIG undefined FUN_1493a386e(void)

bool FUN_1493a386e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1493a3886 FUN_1493a3886 body=93 status=ok
// SIG undefined FUN_1493a3886(void)

void FUN_1493a3886(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc93f20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a38e4 FUN_1493a38e4 body=93 status=ok
// SIG undefined FUN_1493a38e4(void)

void FUN_1493a38e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc93f20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a3942 FUN_1493a3942 body=126 status=ok
// SIG undefined FUN_1493a3942(void)

void FUN_1493a3942(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a541050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc93f20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a39b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a39c0 FUN_1493a39c0 body=40 status=ok
// SIG undefined FUN_1493a39c0(void)

void FUN_1493a39c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001493a39e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1493a39e8 FUN_1493a39e8 body=140 status=ok
// SIG undefined FUN_1493a39e8(void)

bool FUN_1493a39e8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a3a76 FUN_1493a3a76 body=36 status=ok
// SIG undefined FUN_1493a3a76(void)

undefined8 FUN_1493a3a76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1493a3ab6 FUN_1493a3ab6 body=93 status=ok
// SIG undefined FUN_1493a3ab6(void)

void FUN_1493a3ab6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bc93f90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1493a3b14 FUN_1493a3b14 body=126 status=ok
// SIG undefined FUN_1493a3b14(void)

void FUN_1493a3b14(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bc93f90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a3b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a3b92 FUN_1493a3b92 body=21 status=ok
// SIG undefined FUN_1493a3b92(void)

undefined8 FUN_1493a3b92(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1493a3ba8 FUN_1493a3ba8 body=135 status=ok
// SIG undefined FUN_1493a3ba8(void)

undefined8 * FUN_1493a3ba8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc94040;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a3c30 FUN_1493a3c30 body=62 status=ok
// SIG undefined FUN_1493a3c30(void)

undefined8 * FUN_1493a3c30(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc94040;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1493a3c82 FUN_1493a3c82 body=64 status=ok
// SIG undefined FUN_1493a3c82(void)

void FUN_1493a3c82(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a3d98(*param_2,param_1);
  return;
}



// FUNCTION 1493a3cc2 FUN_1493a3cc2 body=64 status=ok
// SIG undefined FUN_1493a3cc2(void)

void FUN_1493a3cc2(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  FUN_1493a3d98(*param_2,param_1);
  return;
}



// FUNCTION 1493a3d02 FUN_1493a3d02 body=98 status=ok
// SIG undefined FUN_1493a3d02(void)

void FUN_1493a3d02(undefined8 param_1,LPCRITICAL_SECTION param_2)

{
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  FUN_1493a3d98(param_2[1].DebugInfo,param_1);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493a3d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493a3d78 FUN_1493a3d78 body=31 status=ok
// SIG undefined FUN_1493a3d78(void)

undefined1 FUN_1493a3d78(longlong param_1,undefined8 param_2)

{
  FUN_1493a3e20(*(undefined8 *)(param_1 + 0x30),param_1 + 0x18,param_2,
                *(undefined8 *)(param_1 + 0x28));
  return 1;
}



// FUNCTION 1493a3d98 FUN_1493a3d98 body=135 status=ok
// SIG undefined FUN_1493a3d98(void)

undefined8 * FUN_1493a3d98(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = &PTR_FUN_14bc94040;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar2;
  return param_1;
}



// FUNCTION 1493a3e20 FUN_1493a3e20 body=204 status=ok
// SIG undefined FUN_1493a3e20(void)

undefined4 FUN_1493a3e20(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_4;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1493a3eee(param_1,param_2,&local_44);
    if ((char)uVar1 != '\0') {
      local_30 = 0;
      local_38 = param_3;
      FUN_1400021e4(&local_40,&local_68);
      local_58 = local_68;
      local_50 = local_60 + -1;
      if (local_60 == 0) {
        local_50 = 0;
      }
      lVar2 = FUN_1492f2092(&local_38,*(undefined8 *)(param_3 + 0x10));
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        *(undefined4 *)(local_38 + *(int *)(lVar2 + 0x44)) = local_44;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493a3eee FUN_1493a3eee body=295 status=ok
// SIG undefined FUN_1493a3eee(void)

ulonglong FUN_1493a3eee(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1493a2382(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1493a3fe3:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if ((cVar3 == '\0') || (iVar4 = FUN_1419073b0(local_58[2],plVar1), iVar4 != 4))
      goto LAB_1493a3fe3;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_1493a2568(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1493a3f49;
  }
  param_3 = 0;
LAB_1493a3f49:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3 & 0xffffff01;
}



// FUNCTION 1493a4016 FUN_1493a4016 body=135 status=ok
// SIG undefined FUN_1493a4016(void)

undefined8 * FUN_1493a4016(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_14a541050;
  uVar2 = FUN_144a3f946();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_14bc940b0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_2[3];
  param_1[5] = param_2[2];
  param_1[6] = uVar2;
  return param_1;
}


