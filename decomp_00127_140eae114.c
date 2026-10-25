// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140eae114 FUN_140eae114 body=682 status=ok
// SIG undefined FUN_140eae114(void)

undefined8 * FUN_140eae114(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar2 = FUN_1400d1928();
    lVar3 = *(longlong *)(param_2 + 0x10);
    iVar1 = *(int *)(lVar3 + 0x38);
    if ((iVar1 < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      if (DAT_14caf9cd0 == 0) {
        local_50 = local_30;
        local_30[0] = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1463c0cc2;
        local_58 = &LAB_147c9db5b;
        local_60 = &LAB_1463f9c44;
        local_68 = &DAT_149e063b2;
        local_70 = 0x2000000000;
        local_78 = 0x10000004;
        local_80 = 8;
        local_88 = 0x958;
        FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
        lVar3 = *(longlong *)(param_2 + 0x10);
        iVar1 = *(int *)(lVar3 + 0x38);
      }
      if ((iVar1 < *(int *)(DAT_14caf9cd0 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8)
          != DAT_14caf9cd0 + 0x30)) {
        if (DAT_14cacf818 == 0) {
          local_50 = local_30;
          local_30[0] = FUN_141030f22;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1463b216c;
          local_58 = &LAB_1479977e3;
          local_60 = &LAB_1463b2171;
          local_68 = &DAT_149e063b2;
          local_70 = 0;
          local_78 = 0x10000004;
          local_80 = 0x10;
          local_88 = 0x750;
          FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
          lVar3 = *(longlong *)(param_2 + 0x10);
          iVar1 = *(int *)(lVar3 + 0x38);
        }
        if ((iVar1 < *(int *)(DAT_14cacf818 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) !=
            DAT_14cacf818 + 0x30)) {
          lVar3 = FUN_1449db7f2();
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) != lVar3 + 0x30)) goto LAB_140eae1d9;
          FUN_14485c47a(param_1 + 1,param_2);
          FUN_141237a6a(local_30,param_2,0);
          param_2 = FUN_1459afa08(local_30);
        }
        else {
          FUN_14485c47a(param_1 + 2,param_2);
          param_2 = *(longlong *)(param_2 + 0x3b0);
        }
      }
      else {
        FUN_14485c47a(param_1,param_2);
        param_2 = *(longlong *)(param_2 + 0x398);
      }
    }
    FUN_140eae3c0(param_1,param_2);
  }
LAB_140eae1d9:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140eae3c0 FUN_140eae3c0 body=150 status=ok
// SIG undefined FUN_140eae3c0(void)

void FUN_140eae3c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    return;
  }
  FUN_14485c47a(param_1 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x408);
  if (lVar2 != 0) {
    lVar1 = FUN_144a7cacc();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_140eae411;
  }
  lVar2 = 0;
LAB_140eae411:
  FUN_14485c47a(param_1 + 0x10,lVar2);
  lVar2 = FUN_1401b2ade(param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_14485c47a(param_1,lVar2);
  uVar3 = FUN_144a7ba4c(lVar2);
  FUN_14485c47a(param_1 + 8,uVar3);
  return;
}



// FUNCTION 140eae456 FUN_140eae456 body=241 status=ok
// SIG undefined FUN_140eae456(void)

undefined4 * FUN_140eae456(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  pvVar2 = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 2);
  }
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
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if (iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_1404dd0ca(param_1 + 0xc,iVar1,0);
    FUN_1404dd017(*(undefined8 *)(param_1 + 0xc),uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 140eae548 FUN_140eae548 body=139 status=ok
// SIG undefined FUN_140eae548(void)

void FUN_140eae548(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14010edaa();
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) goto LAB_140eae5a3;
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 != 0) goto LAB_140eae58b;
    local_20 = 0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_140eae58b:
    local_20 = param_1 + 0x2a8;
  }
  local_28 = param_1;
  FUN_140eae5d4(param_1 + 0x380);
LAB_140eae5a3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eae5d4 FUN_140eae5d4 body=610 status=ok
// SIG undefined FUN_140eae5d4(void)

void FUN_140eae5d4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c950c29 == '\x01') {
    if (*param_2 != 0) {
      FUN_1456cec3c();
      goto LAB_140eae600;
    }
    *(undefined8 *)(param_1 + 0x598) = 0;
    *(longlong *)(param_1 + 0x5a0) = param_2[1];
  }
  else {
LAB_140eae600:
    lVar1 = *param_2;
    *(longlong *)(param_1 + 0x598) = lVar1;
    *(longlong *)(param_1 + 0x5a0) = param_2[1];
    if (lVar1 != 0) {
      if (DAT_14cac9ca8 == 0) {
        local_40 = &local_28;
        local_28 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_1478c0a72;
        local_50 = &LAB_1417b2375;
        local_58 = L"Engine";
        local_60 = 0x1000000000;
        local_68 = 0x10000004;
        local_70 = 8;
        local_78 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
        *(longlong *)(param_1 + 0x5a8) = lVar1;
        goto LAB_140eae69e;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x20);
  if (lVar1 == 0) {
LAB_140eae803:
    lVar1 = 0;
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_140eae803;
  }
  *(longlong *)(param_1 + 0x5a8) = lVar1;
LAB_140eae69e:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eae838 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eae83e FUN_140eae83e body=2315 status=ok
// SIG undefined FUN_140eae83e(void)

void FUN_140eae83e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  code *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar7 = param_1[4];
  if (lVar7 == 0) {
LAB_140eaede3:
    lVar7 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_a0 = &local_58;
      local_58 = FUN_141864c34;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1464cee30;
      local_a8 = &LAB_148bfac22;
      local_b0 = &LAB_140f21842;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_140eaede3;
  }
  plVar6 = (longlong *)FUN_140eaf14a(lVar7);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = FUN_144a5dd5e();
    if ((((*(int *)(lVar7 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)) && ((*(byte *)(plVar6 + 0x84) & 2) != 0)) &&
       (cVar5 = (**(code **)(*plVar6 + 0x6c8))(plVar6), cVar5 != '\0')) {
      *(undefined1 *)(param_1 + 10) = 1;
    }
  }
  lVar7 = FUN_140eaf26f(param_1);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  param_1[0x30] = lVar7;
  local_58 = (code *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  pcVar4 = local_58;
  local_50._0_4_ = 3;
  iVar12 = (int)local_50;
  local_50._0_4_ = 3;
  *(undefined ***)local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar16 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar16 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar16;
  *(longlong *)(local_58 + 0x10) = lVar11;
  *(undefined ***)local_58 = &PTR_FUN_14b9aa200;
  *(undefined8 *)(local_58 + 0x18) = 0;
  iVar15 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 0x18) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar15 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar15 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar15;
      local_50._0_4_ = iVar12;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar15 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar15 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar13;
        iVar15 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar15 = iVar13;
      }
    }
  }
  *(int *)(pcVar4 + 0x1c) = iVar15;
  *(code **)(pcVar4 + 0x20) = FUN_1458ba486;
  *(undefined4 *)(pcVar4 + 0x28) = 0;
  FUN_1448b6402(lVar7 + 0xd0,&local_68,&local_58);
  if ((int)local_50 != 0) {
    if (local_58 == (code *)0x0) goto LAB_140eae9e2;
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
  }
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_140eae9e2:
  local_58 = FUN_1457427f8;
  local_50 = (longlong *)((ulonglong)local_50._4_4_ << 0x20);
  FUN_140eaf400(param_1[0x30] + 0xe8,&local_68,param_1,&local_58);
  local_58 = FUN_140773b2c;
  local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_140eaf400(param_1[0x30] + 0x100,&local_68,param_1,&local_58);
  plVar6 = (longlong *)param_1[4];
  if (plVar6 != (longlong *)0x0) {
    if (DAT_14cba8288 == 0) {
      local_58 = FUN_141864c34;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1464cee30;
      local_a8 = &LAB_148bfac22;
      local_b0 = &LAB_140f21842;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = 0x9cd0;
      local_a0 = &local_58;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
         DAT_14cba8288 + 0x30)) &&
       ((lVar7 = (**(code **)(*param_1 + 0x180))(param_1), lVar7 != 0 &&
        ((lVar7 = *(longlong *)(lVar7 + 0x1f0), lVar7 != 0 &&
         ((longlong)*(int *)(lVar7 + 0x40) != 0)))))) {
      plVar14 = *(longlong **)(lVar7 + 0x38);
      local_80 = plVar14 + *(int *)(lVar7 + 0x40);
      do {
        if ((*plVar14 != 0) && (lVar7 = FUN_140281660(), lVar7 != 0)) {
          uVar8 = FUN_140eaf18a();
          plVar9 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar8);
          if (plVar9 != (longlong *)0x0) {
            uVar8 = FUN_140eaf18a();
            plVar10 = (longlong *)FUN_144718840(plVar9,uVar8);
            if (((plVar9 != plVar10) && (plVar10 != (longlong *)0x0)) &&
               (plVar9 = (longlong *)(**(code **)(*plVar10 + 0x10))(plVar10),
               plVar9 != (longlong *)0x0)) {
              FUN_1402815f4(lVar7,&local_58);
              lVar16 = *(longlong *)(local_58 + 0x1d0);
              AcquireSRWLockExclusive((PSRWLOCK)(lVar16 + 0x38));
              plVar10 = local_50;
              if (local_50 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_50 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_50)(local_50);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar10 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
              if (0 < (int)*(uint *)(lVar16 + 0x18)) {
                lVar11 = *(longlong *)(lVar16 + 0x10);
                iVar12 = *(int *)(lVar16 + 0x20) + 2;
                iVar15 = 0;
                local_88 = 0;
                do {
                  uVar3 = *(uint *)((longlong)plVar6 + 0xc);
                  *(int *)(lVar16 + 0x20) = iVar12 + -1;
                  if (*(ulonglong *)(lVar11 + local_88) == (ulonglong)uVar3) {
                    *(int *)(lVar16 + 0x20) = iVar12;
                    local_58 = *(code **)(lVar11 + 0x70 + local_88);
                    local_50 = *(longlong **)(lVar11 + 0x78 + local_88);
                    if (local_50 != (longlong *)0x0) {
                      LOCK();
                      *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
                      UNLOCK();
                    }
                    (**(code **)(*plVar9 + 0x18))(plVar9,&local_58);
                    FUN_1402815f4(lVar7,&local_68);
                    lVar7 = local_68;
                    switch(iVar15) {
                    case 0:
                      local_78 = *(undefined8 *)(local_68 + 0x580);
                      local_70 = *(longlong *)(local_68 + 0x588);
                      if (local_70 != 0) {
                        LOCK();
                        *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
                        UNLOCK();
                      }
                      (**(code **)(*plVar9 + 0x10))(plVar9,&local_78);
                      *(int *)(lVar16 + 0x20) = *(int *)(lVar16 + 0x20) + 1;
                      lVar11 = *(longlong *)(lVar16 + 0x10);
                      *(undefined8 *)(lVar11 + 0x70 + local_88) = *(undefined8 *)(lVar7 + 0x580);
                      plVar9 = *(longlong **)(lVar7 + 0x588);
                      break;
                    case 1:
                      local_78 = *(undefined8 *)(local_68 + 0x590);
                      local_70 = *(longlong *)(local_68 + 0x598);
                      if (local_70 != 0) {
                        LOCK();
                        *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
                        UNLOCK();
                      }
                      (**(code **)(*plVar9 + 0x10))(plVar9,&local_78);
                      *(int *)(lVar16 + 0x20) = *(int *)(lVar16 + 0x20) + 1;
                      lVar11 = *(longlong *)(lVar16 + 0x10);
                      *(undefined8 *)(lVar11 + 0x70 + local_88) = *(undefined8 *)(lVar7 + 0x590);
                      plVar9 = *(longlong **)(lVar7 + 0x598);
                      break;
                    case 2:
                      local_78 = *(undefined8 *)(local_68 + 0x5a0);
                      local_70 = *(longlong *)(local_68 + 0x5a8);
                      if (local_70 != 0) {
                        LOCK();
                        *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
                        UNLOCK();
                      }
                      (**(code **)(*plVar9 + 0x10))(plVar9,&local_78);
                      *(int *)(lVar16 + 0x20) = *(int *)(lVar16 + 0x20) + 1;
                      lVar11 = *(longlong *)(lVar16 + 0x10);
                      *(undefined8 *)(lVar11 + 0x70 + local_88) = *(undefined8 *)(lVar7 + 0x5a0);
                      plVar9 = *(longlong **)(lVar7 + 0x5a8);
                      break;
                    case 3:
                      local_78 = *(undefined8 *)(local_68 + 0x5b0);
                      local_70 = *(longlong *)(local_68 + 0x5b8);
                      if (local_70 != 0) {
                        LOCK();
                        *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
                        UNLOCK();
                      }
                      (**(code **)(*plVar9 + 0x10))(plVar9,&local_78);
                      *(int *)(lVar16 + 0x20) = *(int *)(lVar16 + 0x20) + 1;
                      lVar11 = *(longlong *)(lVar16 + 0x10);
                      *(undefined8 *)(lVar11 + 0x70 + local_88) = *(undefined8 *)(lVar7 + 0x5b0);
                      plVar9 = *(longlong **)(lVar7 + 0x5b8);
                      break;
                    default:
                      goto switchD_140eaeef6_default;
                    }
                    plVar10 = *(longlong **)(lVar11 + 0x78 + local_88);
                    if (plVar10 != plVar9) {
                      if (plVar9 != (longlong *)0x0) {
                        LOCK();
                        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
                        UNLOCK();
                        plVar10 = *(longlong **)(lVar11 + 0x78 + local_88);
                      }
                      if (plVar10 != (longlong *)0x0) {
                        LOCK();
                        piVar2 = (int *)((longlong)plVar10 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar10 + 0x10))();
                        }
                      }
                      *(longlong **)(lVar11 + 0x78 + local_88) = plVar9;
                    }
switchD_140eaeef6_default:
                    plVar9 = local_60;
                    *(int *)(lVar16 + 0x30) = *(int *)(lVar16 + 0x30) + 1;
                    if (local_60 != (longlong *)0x0) {
                      LOCK();
                      plVar10 = local_60 + 1;
                      *(int *)plVar10 = (int)*plVar10 + -1;
                      UNLOCK();
                      if ((int)*plVar10 == 0) {
                        (**(code **)*local_60)(local_60);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar9 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar9 + 0x10))(plVar9);
                        }
                      }
                    }
                    break;
                  }
                  iVar12 = iVar12 + 1;
                  local_88 = local_88 + 0x80;
                  iVar15 = iVar15 + 1;
                } while ((ulonglong)*(uint *)(lVar16 + 0x18) << 7 != local_88);
              }
              ReleaseSRWLockExclusive((PSRWLOCK)(lVar16 + 0x38));
            }
          }
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != local_80);
    }
  }
  FUN_140eaf988(param_1,1);
  FUN_140b9b50c(param_1);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eaf14a FUN_140eaf14a body=63 status=ok
// SIG undefined FUN_140eaf14a(void)

longlong FUN_140eaf14a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140eaf760();
  if (lVar1 != 0) {
    lVar2 = FUN_144a75eb4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140eaf18a FUN_140eaf18a body=228 status=ok
// SIG undefined FUN_140eaf18a(void)

longlong FUN_140eaf18a(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaf248 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148c45edf;
    local_40 = FUN_1465eec3b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakSubsystemProvider",&DAT_14cbaf248,&DAT_148c45ede);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaf248;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eaf26f FUN_140eaf26f body=177 status=ok
// SIG undefined FUN_140eaf26f(void)

undefined8 FUN_140eaf26f(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140eaf322();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eaf322 FUN_140eaf322 body=221 status=ok
// SIG undefined FUN_140eaf322(void)

longlong FUN_140eaf322(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc0670 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148cba4bf;
    local_40 = FUN_14409b1a0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x168;
    FUN_14081cfa3(L"/Script/OakGame",L"UIVitalsListener",&DAT_14cbc0670,&DAT_148cba4be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc0670;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eaf400 FUN_140eaf400 body=772 status=ok
// SIG undefined FUN_140eaf400(void)

undefined8 * FUN_140eaf400(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b41bb90;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b9aa270;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_140eaf5b4;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_140eaf59e;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_140eaf59e:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140eaf5b4:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140eaf760 FUN_140eaf760 body=551 status=ok
// SIG undefined FUN_140eaf760(void)

longlong FUN_140eaf760(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 == 0) {
LAB_140eaf96f:
    param_1 = 0;
  }
  else {
    if (DAT_14cad3ae0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147a36475;
      local_40 = &LAB_1463c0cc7;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000005;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Controller",&DAT_14cad3ae0,FUN_1463c0ca0);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    iVar1 = *(int *)(lVar2 + 0x38);
    if ((*(int *)(DAT_14cad3ae0 + 0x38) <= iVar1) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad3ae0 + 0x38) * 8) ==
        DAT_14cad3ae0 + 0x30)) goto LAB_140eaf7e3;
    if (DAT_14caf64b8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147c45ce0;
      local_40 = &LAB_1463f1ff4;
      local_48 = L"Game";
      local_50 = 0x4000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      lVar2 = *(longlong *)(param_1 + 0x10);
      iVar1 = *(int *)(lVar2 + 0x38);
    }
    if ((iVar1 < *(int *)(DAT_14caf64b8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
        DAT_14caf64b8 + 0x30)) {
      lVar2 = FUN_1400d1928();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30 ||
          (param_1 = *(longlong *)(param_1 + 0x408), param_1 == 0)))) goto LAB_140eaf96f;
    }
    param_1 = *(longlong *)(param_1 + 0x3c0);
  }
LAB_140eaf7e3:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140eaf988 FUN_140eaf988 body=770 status=ok
// SIG undefined FUN_140eaf988(void)

void FUN_140eaf988(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar10 = *(longlong *)(param_1 + 0x180);
  if (lVar10 == 0) goto LAB_140eafa5d;
  lVar12 = *(longlong *)(param_1 + 0x20);
  if (lVar12 == 0) {
LAB_140eafc74:
    lVar12 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464cee30;
      local_58 = &LAB_148bfac22;
      local_60 = &LAB_140f21842;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_140eafc74;
  }
  FUN_140eafca4(lVar10,param_2,lVar12);
  lVar10 = *(longlong *)(param_1 + 0x20);
  if (lVar10 == 0) {
LAB_140eafc7c:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  if (DAT_14cba8288 == 0) {
    local_50 = &local_30;
    local_30 = FUN_141864c34;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1464cee30;
    local_58 = &LAB_148bfac22;
    local_60 = &LAB_140f21842;
    local_68 = &DAT_149e063b2;
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_140eafc7c;
  if ((((char)param_2 == '\0') &&
      (plVar11 = *(longlong **)(param_1 + 0x60), plVar11 != (longlong *)0x0)) &&
     (*(int *)(param_1 + 0x5c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x58);
    if (((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
       ((lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar12 != 0 &&
        ((*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 0x5c) &&
         ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*plVar11 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar11 = plVar11 + 0xd9;
      }
      else {
        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x10))();
      }
      cVar9 = FUN_14486eb0e(plVar11,(uint *)(param_1 + 0x58));
      if (cVar9 != '\0') goto LAB_140eafa5d;
    }
  }
  lVar10 = FUN_14018ffce(lVar10);
  if (lVar10 != 0) {
    uVar2 = *(undefined4 *)(lVar10 + 0x9c8);
    uVar3 = *(undefined4 *)(lVar10 + 0x9cc);
    uVar4 = *(undefined4 *)(lVar10 + 0x9d0);
    uVar5 = *(undefined4 *)(lVar10 + 0x9d4);
    uVar6 = *(undefined4 *)(lVar10 + 0x9dc);
    uVar7 = *(undefined4 *)(lVar10 + 0x9e0);
    uVar8 = *(undefined4 *)(lVar10 + 0x9e4);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar10 + 0x9d8);
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
    *(undefined4 *)(param_1 + 0x70) = uVar7;
    *(undefined4 *)(param_1 + 0x74) = uVar8;
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(undefined4 *)(param_1 + 100) = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
LAB_140eafa5d:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eafca4 FUN_140eafca4 body=2012 status=ok
// SIG undefined FUN_140eafca4(void)

void FUN_140eafca4(longlong param_1,char param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 *puVar22;
  uint *puVar23;
  longlong lVar24;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  char local_71;
  uint *local_70;
  longlong *local_68;
  longlong local_60;
  code *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar13 = *(longlong **)(param_1 + 0x118);
  if (plVar13 != (longlong *)0x0 && plVar13 != param_3) {
    if (DAT_14cb56270 == 0) {
      local_90 = &local_58;
      local_58 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_1427b09ee;
      local_98 = &LAB_148630fef;
      local_a0 = FUN_1464b6a91;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10004001;
      local_c0 = 8;
      local_c8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar13 = (longlong *)(**(code **)(*plVar13 + 0x288))(plVar13,DAT_14cb56270);
    if (plVar13 != (longlong *)0x0) {
      if (DAT_14cb56270 == 0) {
        local_90 = &local_58;
        local_58 = FUN_1449e2820;
        local_80 = FUN_14081d0ea;
        local_88 = FUN_1427b09ee;
        local_98 = &LAB_148630fef;
        local_a0 = FUN_1464b6a91;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10004001;
        local_c0 = 8;
        local_c8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar14 = (longlong *)FUN_144718840(plVar13,DAT_14cb56270);
      if ((plVar14 != (longlong *)0x0 && plVar13 != plVar14) &&
         (lVar15 = (**(code **)(*plVar14 + 0x10))(plVar14), lVar15 != 0)) {
        FUN_140d9179c(lVar15,param_1 + 0x150);
        FUN_140d916fa(lVar15,param_1 + 0x158);
        if (*(longlong *)(param_1 + 0x160) != 0) {
          FUN_14480f766(lVar15 + 0x18);
        }
        *(undefined8 *)(param_1 + 0x160) = 0;
      }
    }
  }
  if ((param_3 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    *(longlong **)(param_1 + 0x118) = param_3;
    if (param_3 == (longlong *)0x0) goto LAB_140eb01ab;
  }
  else {
    FUN_1456cec3c(param_3);
    *(longlong **)(param_1 + 0x118) = param_3;
  }
  if (DAT_14cb56270 == 0) {
    local_90 = &local_58;
    local_58 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_1427b09ee;
    local_98 = &LAB_148630fef;
    local_a0 = FUN_1464b6a91;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10004001;
    local_c0 = 8;
    local_c8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  plVar13 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,DAT_14cb56270);
  if (plVar13 != (longlong *)0x0) {
    if (DAT_14cb56270 == 0) {
      local_90 = &local_58;
      local_58 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_1427b09ee;
      local_98 = &LAB_148630fef;
      local_a0 = FUN_1464b6a91;
      local_a8 = L"Engine";
      local_b0 = 0;
      local_b8 = 0x10004001;
      local_c0 = 8;
      local_c8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar14 = (longlong *)FUN_144718840(plVar13,DAT_14cb56270);
    if ((plVar14 != (longlong *)0x0 && plVar13 != plVar14) &&
       (lVar15 = (**(code **)(*plVar14 + 0x10))(plVar14), lVar15 != 0)) {
      iVar2 = *(int *)(lVar15 + 0x40);
      lVar24 = (longlong)iVar2;
      if (0 < lVar24) {
        *(undefined1 *)(param_1 + 0x140) = 0;
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(lVar15 + 0x58);
        *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(lVar15 + 0x5c);
        plVar13 = (longlong *)(param_1 + 0x130);
        uVar19 = (ulonglong)*(uint *)(param_1 + 0x138);
        if (iVar2 < (int)*(uint *)(param_1 + 0x138)) {
          lVar18 = uVar19 * 0x58 + -0x48;
          do {
            uVar19 = uVar19 - 1;
            FUN_140f0fae4(*plVar13 + lVar18);
            lVar18 = lVar18 + -0x58;
          } while (lVar24 < (longlong)uVar19);
        }
        FUN_140f0fb1e(plVar13,iVar2,1);
        lVar18 = 0x48;
        lVar20 = 0;
        local_71 = param_2;
        local_68 = plVar13;
        local_60 = lVar15;
        do {
          lVar15 = *local_68;
          puVar4 = *(uint **)(local_60 + 0x38);
          if (param_2 == '\0') {
            puVar23 = (uint *)(lVar15 + lVar18 + -0x38);
            if (*(char *)(lVar15 + lVar18 + -0x40) == '\x01') {
              plVar13 = *(longlong **)(lVar15 + -0x30 + lVar18);
              if (((((plVar13 != (longlong *)0x0) &&
                    (iVar2 = *(int *)(lVar15 + -0x34 + lVar18), iVar2 != 0)) &&
                   (uVar3 = *puVar23, -1 < (int)uVar3)) &&
                  (((int)uVar3 < DAT_14c9647dc &&
                   (lVar21 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8),
                   lVar21 != 0)))) &&
                 ((*(int *)(lVar21 + 0x10) == iVar2 && ((*(uint *)(lVar21 + 8) & 0x10200000) == 0)))
                 ) {
                if (*(code **)(*plVar13 + 0x10) == (code *)&LAB_1447a1f2e) {
                  plVar13 = plVar13 + 0xd9;
                }
                else {
                  plVar13 = (longlong *)(**(code **)(*plVar13 + 0x10))();
                }
                cVar12 = FUN_14486eb0e(plVar13,puVar23);
                if (cVar12 != '\0') goto LAB_140eb0082;
              }
              goto LAB_140eafeab;
            }
LAB_140eb0082:
            lVar21 = *(longlong *)(lVar15 + -0x48 + lVar18);
            local_70 = puVar23;
            lVar17 = FUN_1409d448e((longlong)puVar4 + lVar20 + 0x18);
            if (((lVar21 != lVar17) ||
                (*(char *)(lVar15 + -0x40 + lVar18) != *(char *)((longlong)puVar4 + lVar20))) ||
               (cVar12 = FUN_140280fd6(local_70,(longlong)puVar4 + lVar20 + 0x30), cVar12 == '\0'))
            goto LAB_140eafeab;
          }
          else {
LAB_140eafeab:
            lVar21 = lVar15 + lVar18;
            puVar22 = (undefined4 *)(lVar21 + -0x38);
            FUN_140f0fae4(puVar22);
            local_70 = puVar4;
            uVar16 = FUN_1409d448e((longlong)puVar4 + lVar20 + 0x18);
            *(undefined8 *)(lVar21 + -0x48) = uVar16;
            local_58 = (code *)0x0;
            iVar2 = *(int *)((longlong)puVar4 + lVar20 + 0x68);
            uVar16 = *(undefined8 *)((longlong)puVar4 + lVar20 + 0x60);
            local_50 = CONCAT44(local_50._4_4_,iVar2);
            if (iVar2 == 0) {
              local_50 = 0;
            }
            else {
              FUN_1470d8626(&local_58,iVar2,0);
              FUN_1470d8699(local_58,uVar16);
            }
            puVar4 = local_70;
            param_2 = local_71;
            if ((code **)(lVar15 + lVar18) == &local_58) {
              uVar19 = local_50 & 0xffffffff;
            }
            else {
              FUN_1408bd9f2(*(undefined8 *)(lVar15 + lVar18));
              if (*(longlong *)(lVar15 + lVar18) != 0) {
                FUN_1400020a8();
              }
              *(code **)(lVar15 + lVar18) = local_58;
              uVar19 = 0;
              local_58 = (code *)0x0;
              *(undefined4 *)(lVar15 + 8 + lVar18) = (undefined4)local_50;
              *(undefined4 *)(lVar15 + 0xc + lVar18) = local_50._4_4_;
              local_50 = 0;
            }
            FUN_1408bd9f2(local_58,uVar19);
            if (local_58 != (code *)0x0) {
              FUN_1400020a8();
            }
            cVar12 = *(char *)((longlong)puVar4 + lVar20);
            *(char *)(lVar15 + -0x40 + lVar18) = cVar12;
            puVar1 = (undefined4 *)((longlong)puVar4 + lVar20 + 0x30);
            uVar5 = *puVar1;
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            puVar1 = (undefined4 *)((longlong)puVar4 + lVar20 + 0x40);
            uVar9 = puVar1[1];
            uVar10 = puVar1[2];
            uVar11 = puVar1[3];
            *(undefined4 *)(lVar21 + -0x28) = *puVar1;
            *(undefined4 *)(lVar21 + -0x24) = uVar9;
            *(undefined4 *)(lVar21 + -0x20) = uVar10;
            *(undefined4 *)(lVar21 + -0x1c) = uVar11;
            *puVar22 = uVar5;
            *(undefined4 *)(lVar21 + -0x34) = uVar6;
            *(undefined4 *)(lVar21 + -0x30) = uVar7;
            *(undefined4 *)(lVar21 + -0x2c) = uVar8;
            if ((cVar12 == '\x01') && (cVar12 = FUN_1403ae288(puVar22), cVar12 == '\0')) {
              *(undefined1 *)(param_1 + 0x140) = 1;
            }
          }
          lVar20 = lVar20 + 0x88;
          lVar18 = lVar18 + 0x58;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        goto LAB_140eb01ab;
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x138)) {
    lVar24 = 0x10;
    lVar15 = 0;
    do {
      FUN_140f0fae4(*(longlong *)(param_1 + 0x130) + lVar24);
      lVar15 = lVar15 + 1;
      lVar24 = lVar24 + 0x58;
    } while (lVar15 < *(int *)(param_1 + 0x138));
  }
  iVar2 = *(int *)(param_1 + 0x13c);
  FUN_1408bd9b6(*(undefined8 *)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x138) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x13c) != 0)) {
    FUN_148e6796a(param_1 + 0x130,0);
  }
  *(undefined8 *)(param_1 + 0x144) = 0xffffffffffffffff;
LAB_140eb01ab:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eb0482 FUN_140eb0482 body=39 status=ok
// SIG undefined FUN_140eb0482(void)

void FUN_140eb0482(longlong param_1,undefined4 param_2)

{
  FUN_140eb04aa(param_1 + 0x42b8);
  FUN_140eb0538(param_1,param_2);
  return;
}



// FUNCTION 140eb04aa FUN_140eb04aa body=142 status=ok
// SIG undefined FUN_140eb04aa(void)

void FUN_140eb04aa(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = param_1 + 0x48;
  cVar2 = FUN_1403ae288(lVar1);
  if (cVar2 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar3 = FUN_14008e0ae(lVar1);
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_14480f766(lVar3 + 0x168);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar3 = FUN_14008e0ae(lVar1);
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_14480f766(lVar3 + 0x180);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  FUN_140609c6a(lVar1);
  return;
}



// FUNCTION 140eb0538 FUN_140eb0538 body=574 status=ok
// SIG undefined FUN_140eb0538(void)

void FUN_140eb0538(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(longlong *)(param_1 + 0x2b98) != 0) && (*(longlong *)(param_1 + 0x2ba0) != 0)) {
    FUN_140ccfb62();
  }
  if ((*(longlong *)(param_1 + 0x1e88) != 0) && (*(longlong *)(param_1 + 0x1e90) != 0)) {
    FUN_140ccfb62();
  }
  if ((*(int *)(param_1 + 0x35e0) != *(int *)(param_1 + 0x360c)) &&
     (*(longlong *)(param_1 + 0x35b8) != 0)) {
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_1457bff82(param_1 + 0x35d8,local_98);
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    iVar5 = 0;
    local_b0 = local_88;
    if (local_70 != 0) {
      FUN_1449c0562(&local_b8);
      iVar5 = local_70;
    }
    local_c8 = local_a8;
    uVar2 = local_c8;
    local_c0 = local_a0;
    local_bc = local_9c;
    local_d8 = local_b8;
    local_d0 = local_b0;
    local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_e0 = local_98;
    if ((local_c8._4_4_ != iVar5) || (local_b0 != local_88)) {
      iVar3 = local_c8._4_4_;
      local_c8 = uVar2;
      do {
        lVar1 = *local_e0;
        lVar4 = *(longlong *)(param_1 + 0xb0);
        if (lVar4 == 0) {
          lVar4 = FUN_1448abda6(param_1);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x35b8);
        lVar4 = FUN_140149a73(lVar4,0);
        if (lVar4 != 0) {
          FUN_140825b72((longlong)iVar3 * 0x40 + lVar1,uVar2,lVar4,0);
        }
        local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
        FUN_1449c0562(&local_d8);
        iVar3 = local_c8._4_4_;
        uVar2 = local_c8;
      } while (local_e0 != local_98 || (local_d0 != local_88 || local_c8._4_4_ != iVar5));
    }
    local_c8 = uVar2;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140292ea0(local_98);
  }
  FUN_140e286c0(param_1);
  FUN_1401c3216(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb077e FUN_140eb077e body=57 status=ok
// SIG undefined FUN_140eb077e(void)

void FUN_140eb077e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba46e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba46e8 = FUN_140002ddd(FUN_1465be5ad,uVar1,L"GrenadeBehaviorDef_PayloadTargetCombo");
  }
  return;
}



// FUNCTION 140eb07b8 FUN_140eb07b8 body=496 status=ok
// SIG undefined FUN_140eb07b8(void)

void FUN_140eb07b8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14066e964();
  local_48 = FUN_140343d7a(param_1);
  FUN_140eb09aa(&local_40);
  *(undefined4 *)(param_1 + 0xd8) = (undefined4)local_40;
  *(undefined4 *)(param_1 + 0xdc) = local_40._4_4_;
  *(undefined4 *)(param_1 + 0xe0) = uStack_38;
  *(undefined4 *)(param_1 + 0xe4) = uStack_34;
  lVar2 = FUN_140343d7a(param_1);
  if (lVar2 != 0) {
    if (DAT_14cb22240 == 0) {
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464376fa;
      local_68 = &LAB_147f28935;
      local_70 = FUN_146437c39;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      local_60 = &local_40;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    lVar3 = FUN_144718840(lVar2,DAT_14cb22240);
    if (lVar3 != 0) {
      uVar5 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar2 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar2 = 0;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
      if (*(int *)(lVar2 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar1 = *(int *)(lVar2 + 0x10);
        bVar6 = iVar1 == 0;
        if (bVar6) {
          *(int *)(lVar2 + 0x10) = iVar4;
          iVar1 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar1 = iVar4;
        }
      }
      goto LAB_140eb0875;
    }
  }
  lVar3 = 0;
  uVar5 = 0;
  iVar1 = 0;
LAB_140eb0875:
  *(uint *)(param_1 + 0xe8) = uVar5;
  *(int *)(param_1 + 0xec) = iVar1;
  *(longlong *)(param_1 + 0xf0) = lVar3;
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eb09aa FUN_140eb09aa body=419 status=ok
// SIG undefined FUN_140eb09aa(void)

uint * FUN_140eb09aa(uint *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
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
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    if (DAT_14cb20e58 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147f14d13;
      local_50 = FUN_1464313b0;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxAggroInterface",&DAT_14cb20e58,&DAT_147f14d12);
    }
    lVar3 = FUN_144718840(lVar3,DAT_14cb20e58);
    *(longlong *)(param_1 + 2) = lVar3;
    if (lVar3 != 0) {
      if (*param_2 == 0) {
        *param_1 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(*param_2 + 0xc);
        *param_1 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        uVar2 = *(uint *)(lVar3 + 0x10);
        if (*(uint *)(lVar3 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar4 = DAT_14c964868 + 1;
          bVar5 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar5) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar4);
          }
          LOCK();
          uVar2 = *(uint *)(lVar3 + 0x10);
          bVar5 = uVar2 == 0;
          if (bVar5) {
            *(uint *)(lVar3 + 0x10) = uVar4;
            uVar2 = 0;
          }
          UNLOCK();
          if (bVar5) {
            uVar2 = uVar4;
          }
        }
      }
      param_1[1] = uVar2;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140eb0b6a FUN_140eb0b6a body=199 status=ok
// SIG undefined FUN_140eb0b6a(void)

void FUN_140eb0b6a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_140eb0dba(0,local_28);
  FUN_140eb0c32(param_1,local_28);
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x1c))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      uVar3 = FUN_140eb0cd4();
      plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
    }
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb0c32 FUN_140eb0c32 body=162 status=ok
// SIG undefined FUN_140eb0c32(void)

void FUN_140eb0c32(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140eb0cbf;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140eb0cbf:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140eb0cd4 FUN_140eb0cd4 body=228 status=ok
// SIG undefined FUN_140eb0cd4(void)

longlong FUN_140eb0cd4(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaf770 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148c4a00d;
    local_40 = FUN_1465f0005;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakTraitOwner",&DAT_14cbaf770,&DAT_148c4a00c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaf770;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb0dba FUN_140eb0dba body=304 status=ok
// SIG undefined FUN_140eb0dba(void)

void FUN_140eb0dba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x20);
    lVar10 = (longlong)*(int *)(param_1 + 0x28) * 0x28;
    do {
      lVar9 = plVar8[1];
      if (lVar9 == 0) {
        uVar6 = FUN_14117f018();
        lVar9 = FUN_14477b664(uVar6);
        plVar8[1] = lVar9;
      }
      lVar7 = plVar8[2];
      if (lVar7 == 0) {
        if ((lVar9 != 0) && (*plVar8 != 0)) {
          plVar4 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
            plVar8[2] = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar7 = FUN_144aff482(uVar6,plVar8);
            plVar8[2] = lVar7;
            if (lVar7 != 0) goto LAB_140eb0e01;
          }
        }
      }
      else {
LAB_140eb0e01:
        iVar2 = (int)param_2[1];
        lVar9 = (longlong)iVar2;
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_140eb0eea(param_2,iVar2);
        }
        lVar3 = *param_2;
        puVar1 = (undefined8 *)(lVar3 + lVar9 * 0x18);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar3 + 0x10 + lVar9 * 0x18) = 0;
        *(undefined8 *)(lVar3 + lVar9 * 0x18) = *(undefined8 *)(lVar7 + 0x50);
        uVar6 = FUN_14477b664(*(undefined8 *)(lVar7 + 0x58));
        uVar6 = FUN_14477b664(uVar6);
        *(undefined8 *)(lVar3 + 8 + lVar9 * 0x18) = uVar6;
        *(undefined8 *)(lVar3 + 0x10 + lVar9 * 0x18) = *(undefined8 *)(lVar7 + 0x60);
      }
      plVar8 = plVar8 + 5;
      lVar10 = lVar10 + -0x28;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 140eb0eea FUN_140eb0eea body=370 status=ok
// SIG undefined FUN_140eb0eea(void)

void FUN_140eb0eea(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140eb0f73;
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
LAB_140eb0f73:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140eb1084 FUN_140eb1084 body=76 status=ok
// SIG undefined FUN_140eb1084(void)

undefined8 FUN_140eb1084(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140eb10d0(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000140eb10c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140eb10d0 FUN_140eb10d0 body=191 status=ok
// SIG undefined FUN_140eb10d0(void)

longlong FUN_140eb10d0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140eb1190();
  lVar3 = *param_1;
  if (DAT_14cb8c008 != DAT_14cb8c034) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb8c038;
    if (DAT_14cb8c040 != (undefined *)0x0) {
      puVar7 = DAT_14cb8c040;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb8c048 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb8c000 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb8bff8;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140eb1190 FUN_140eb1190 body=152 status=ok
// SIG undefined FUN_140eb1190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140eb1190(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8c050) {
    FUN_144b3d300(&DAT_14cb8c050);
    if (DAT_14cb8c050 == -1) {
      DAT_14cb8c020 = 0;
      DAT_14cb8c028 = 0;
      DAT_14cb8c000 = 0;
      _DAT_14cb8c008 = 0;
      _DAT_14cb8c02c = 0xffffffff00000080;
      DAT_14cb8c034 = 0;
      DAT_14cb8c040 = 0;
      DAT_14cb8c048 = 0;
      atexit(FUN_143e3f8b8);
      _Init_thread_footer(&DAT_14cb8c050);
      return;
    }
  }
  return;
}



// FUNCTION 140eb1230 FUN_140eb1230 body=722 status=ok
// SIG undefined FUN_140eb1230(void)

undefined8 * FUN_140eb1230(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eb1504();
  *param_1 = &PTR_FUN_14b6778d0;
  *(undefined4 *)(param_1 + 0xc) = 0x40800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xf00000d0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xf00000d0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x101) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xf00000d0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xf00000d0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0xf00000d0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x42) = 0x3f800000;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xf00000d0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0x3f800000;
  param_1[0x4c] = 0x420c000041200000;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x273) = 0;
  *(undefined8 *)((longlong)param_1 + 0x292) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29a) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0x44e10000;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xf00000d0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0x3f800000;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xf00000d0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0x3f800000;
  param_1[0x6c] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = L"/Script/OakGame.GrenadeBehavior_PayloadMirv";
  local_30 = 0x2b;
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 5) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0x20) = (*(byte *)(param_1 + 0x20) & 0xf0) + 1;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb1504 FUN_140eb1504 body=256 status=ok
// SIG undefined FUN_140eb1504(void)

undefined8 * FUN_140eb1504(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppvVar1 = (void **)(param_1 + 4);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b975930;
  param_1[0xb] = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_40 = L"/Script/OakGame.GrenadeBehavior_Payload";
  local_38 = 0x27;
  FUN_14475bf92(&local_68);
  _Src = local_58;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_68._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_60._4_4_;
  if (ppvVar1 != &local_58) {
    iVar2 = (int)uStack_50;
    lVar3 = (longlong)(int)uStack_50;
    *(int *)(param_1 + 5) = (int)uStack_50;
    if ((int)uStack_50 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_50 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb1606 FUN_140eb1606 body=2079 status=ok
// SIG undefined FUN_140eb1606(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140eb1606(LARGE_INTEGER param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  LARGE_INTEGER local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  ulonglong uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  lVar13 = DAT_14caec570;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*(byte *)(param_1.QuadPart + 0x17b) & 0x20) != 0) && (0 < DAT_14caec578)) &&
     (0 < DAT_14c7615c4)) {
    param_1.QuadPart = FUN_14001cc68(0x308,0x10);
    FUN_14009016e(param_1.QuadPart,~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0);
    uVar12 = 1;
    FUN_14002049c(param_1.QuadPart,1);
    bVar4 = true;
    goto LAB_140eb16cf;
  }
  if (DAT_14caec570 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar2 = *(int *)(DAT_14caec570 + 0x1c);
      if ((2 < iVar2) && (bVar8 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar8 < 3))
      {
        local_e8.QuadPart = 0x20100000001;
        uStack_e0 = 0x30100000101;
        local_d8 = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000;
        uStack_d0 = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x30000000100;
        local_c8 = 0x20000000000;
        uStack_c0 = 0x30000000100;
        if (*(byte *)((longlong)&local_e8 + (ulonglong)(iVar2 - 3) * 4) == bVar8)
        goto LAB_140eb1e19;
      }
      QueryPerformanceCounter(&local_e8);
      uStack_e0 = 0xffffffffffffffff;
      FUN_140056092(lVar13,&local_e8);
    }
    else {
LAB_140eb1e19:
      FUN_140082318(lVar13);
    }
  }
  uVar12 = 0;
  bVar4 = false;
LAB_140eb16cf:
  LOCK();
  bVar14 = DAT_14caec5e8 == '\0';
  if (bVar14) {
    DAT_14caec5e8 = '\x01';
  }
  UNLOCK();
  if (!bVar14) {
    FUN_1447d2058(&DAT_14caec5e8);
  }
  uVar11 = _DAT_14caec5c0;
  local_80 = DAT_14caec598;
  uStack_78 = _DAT_14caec5a0;
  DAT_14caec598 = 0;
  _DAT_14caec5a0 = 0;
  if (DAT_14caec5b8 == 0) {
    local_70 = _DAT_14caec5a8;
    uStack_68 = uRam000000014caec5b0;
  }
  local_60 = DAT_14caec5b8;
  uStack_58._4_4_ = DAT_14caec5c4;
  DAT_14caec5b8 = 0;
  _DAT_14caec5c0 = 0;
  uStack_58._0_4_ = (undefined4)uVar11;
  uStack_50._0_4_ = (undefined4)_DAT_14caec5c8;
  uStack_50._4_4_ = _DAT_14caec5cc;
  _DAT_14caec5c8 = 0xffffffff;
  if (DAT_14caec5d8 == 0) {
    local_48 = DAT_14caec5d0;
  }
  local_40 = DAT_14caec5d8;
  DAT_14caec5d8 = 0;
  local_38 = DAT_14caec5e0;
  DAT_14caec5e0 = 0;
  LOCK();
  bVar14 = DAT_14caec5e8 == '\x01';
  if (bVar14) {
    DAT_14caec5e8 = '\0';
  }
  UNLOCK();
  if (!bVar14) {
    FUN_14008cdb0(&DAT_14caec5e8);
  }
  uVar7 = uStack_58._4_4_;
  uVar6 = (undefined4)uStack_58;
  uStack_e0 = CONCAT71(uStack_e0._1_7_,uVar12);
  local_d8 = local_80;
  uStack_d0 = uStack_78;
  local_80 = 0;
  uStack_78 = 0;
  if (local_60 == 0) {
    local_c8 = local_70;
    uStack_c0 = uStack_68;
  }
  local_b8 = local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_b0 = CONCAT44(uVar7,uVar6);
  uStack_a8 = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50);
  uStack_50 = 0xffffffff;
  if (local_40 == 0) {
    local_a0 = local_48;
  }
  local_98 = local_40;
  local_40 = 0;
  local_90 = local_38;
  local_38 = 0;
  local_e8 = param_1;
  if (bVar4 && param_2 != (longlong *)0x0) {
    puVar10 = (undefined8 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0x108,0x10);
    *puVar10 = UE::Tasks::Private::FTaskBase::vftable;
    puVar10[1] = &DAT_100000002;
    puVar10[2] = 0;
    *(undefined4 *)(puVar10 + 3) = 0;
    *(undefined4 *)(puVar10 + 4) = 0xffffffff;
    puVar10[6] = 0;
    puVar10[7] = 0x100000000;
    *(undefined1 *)(puVar10 + 8) = 1;
    puVar10[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0xe800000000000020;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0x100000000;
    *(undefined2 *)(puVar10 + 0x14) = 0;
    LOCK();
    bVar14 = *(char *)(puVar10 + 8) == '\x01';
    if (bVar14) {
      *(char *)(puVar10 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar14) {
      FUN_14008cdb0(puVar10 + 8);
    }
    *puVar10 = &PTR_FUN_14a9db920;
    if (*(code **)(puVar10[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar10[0xe] + 0x18))(puVar10 + 0xe,puVar10 + 9);
    }
    puVar10[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar10[9] = puVar10;
    puVar10[10] = puVar10;
    lVar13 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar13 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(lVar13 + 0x30);
    }
    puVar10[0xf] = uVar11;
    puVar10[0x10] = 0xc8000052a7639800;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = 0;
    ((LARGE_INTEGER *)(puVar10 + 0x15))->QuadPart = (LONGLONG)local_e8;
    *(undefined1 *)(puVar10 + 0x16) = (undefined1)uStack_e0;
    puVar10[0x1b] = 0;
    *(undefined4 *)(puVar10 + 0x1c) = 0;
    puVar10[0x17] = 0;
    puVar10[0x18] = 0;
    *(undefined8 *)((longlong)puVar10 + 0xe4) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar10 + 0xec) = 0;
    if (puVar10 + 0x17 != &local_d8) {
      puVar10[0x17] = local_d8;
      local_d8 = 0;
      *(undefined4 *)(puVar10 + 0x18) = (undefined4)uStack_d0;
      *(undefined4 *)((longlong)puVar10 + 0xc4) = uStack_d0._4_4_;
      uStack_d0 = 0;
      if (local_b8 == 0) {
        *(undefined4 *)(puVar10 + 0x19) = (undefined4)local_c8;
        *(undefined4 *)((longlong)puVar10 + 0xcc) = local_c8._4_4_;
        *(undefined4 *)(puVar10 + 0x1a) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)puVar10 + 0xd4) = uStack_c0._4_4_;
      }
      puVar10[0x1b] = local_b8;
      local_b8 = 0;
      puVar10[0x1c] = local_b0;
      local_b0 = 0;
      puVar10[0x1d] = uStack_a8;
      uStack_a8 = 0xffffffff;
    }
    if (local_98 == 0) {
      *(undefined4 *)(puVar10 + 0x1e) = local_a0;
    }
    puVar10[0x1f] = local_98;
    local_98 = 0;
    *(undefined4 *)(puVar10 + 0x20) = local_90;
    local_90 = 0;
    *puVar10 = &PTR_FUN_14a9db910;
    local_f8 = CONCAT71(local_f8._1_7_,1);
    FUN_1447439e4(puVar10);
    puVar3 = (undefined8 *)*param_2;
    *param_2 = (longlong)puVar10;
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
  else {
    FUN_143579622(&local_e8);
  }
  if (bVar4) {
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_144775d28(&local_f8,1);
    uVar5 = uStack_f0;
    lVar13 = (longlong)(int)uStack_f0;
    uVar9 = (int)uStack_f0 + 1;
    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar9);
    if (uStack_f0._4_4_ < uVar9) {
      FUN_14741464c(&local_f8,uVar5 & 0xffffffff);
    }
    ((LARGE_INTEGER *)(local_f8 + lVar13 * 8))->QuadPart = (LONGLONG)param_1;
    local_108 = local_f8;
    local_100 = (int)uStack_f0;
    FUN_14007658c(&DAT_14ca850c8,&local_108,0);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  uVar5 = uStack_d0 >> 0x20;
  uStack_d0 = uStack_d0 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    FUN_14474875a(&local_d8,0);
  }
  uStack_a8 = 0xffffffff;
  uVar5 = local_b0 >> 0x20;
  local_b0 = local_b0 & 0xffffffff00000000;
  if (0x80 < (uint)uVar5) {
    local_b0 = 0x8000000000;
    FUN_1446efbd8(&local_c8,0);
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  uVar5 = uStack_78 >> 0x20;
  uStack_78 = uStack_78 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    FUN_14474875a(&local_80,0);
  }
  uStack_50 = 0xffffffff;
  uVar5 = uStack_58 >> 0x20;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  if (0x80 < (uint)uVar5) {
    uStack_58 = 0x8000000000;
    FUN_1446efbd8(&local_70,0);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb1e26 FUN_140eb1e26 body=1463 status=ok
// SIG undefined FUN_140eb1e26(void)

undefined8 FUN_140eb1e26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  longlong lVar23;
  byte bVar24;
  longlong lVar25;
  
  if (param_4 != 0) {
    lVar25 = 0;
    do {
      plVar3 = (longlong *)(param_3 + lVar25);
      lVar23 = *(longlong *)(param_3 + lVar25);
      if (DAT_14c950c29 == 1) {
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar23 = *plVar3;
        }
      }
      bVar24 = DAT_14c950c29;
      plVar4 = (longlong *)(param_2 + lVar25);
      *plVar4 = lVar23;
      lVar23 = *(longlong *)(param_3 + 8 + lVar25);
      if ((bVar24 & 1) != 0) {
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar23 = *(longlong *)(param_3 + 8 + lVar25);
        }
      }
      plVar4[1] = lVar23;
      lVar23 = param_3 + lVar25;
      plVar4[2] = *(longlong *)(lVar23 + 0x10);
      *(undefined1 *)(plVar4 + 3) = *(undefined1 *)(lVar23 + 0x18);
      FUN_140b177d4(plVar4 + 4,lVar23 + 0x20);
      *(undefined1 *)(plVar4 + 8) = *(undefined1 *)(lVar23 + 0x40);
      lVar23 = *(longlong *)(lVar23 + 0x48);
      if (DAT_14c950c29 == 1) {
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar23 = *(longlong *)(param_3 + 0x48 + lVar25);
        }
      }
      lVar5 = param_2 + lVar25;
      *(longlong *)(lVar5 + 0x48) = lVar23;
      lVar23 = param_3 + 0x60 + lVar25;
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar23 + -0x10);
      *(undefined4 *)(lVar5 + 0x58) = *(undefined4 *)(lVar23 + -8);
      FUN_140eb23de(lVar5 + 0x60,lVar23);
      *(undefined1 *)(lVar5 + 0xa8) = *(undefined1 *)(lVar23 + 0x48);
      lVar23 = *(longlong *)(lVar23 + 0x50);
      if (DAT_14c950c29 == 1) {
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar23 = *(longlong *)(param_3 + 0xb0 + lVar25);
        }
      }
      *(longlong *)(param_2 + 0xb0 + lVar25) = lVar23;
      *(undefined8 *)(param_2 + 0xb8 + lVar25) = *(undefined8 *)(param_3 + 0xb8 + lVar25);
      *(undefined4 *)(param_2 + 0xc0 + lVar25) = *(undefined4 *)(param_3 + 0xc0 + lVar25);
      FUN_140eb23de(plVar4 + 0x19,plVar3 + 0x19);
      *(undefined1 *)(param_2 + 0x110 + lVar25) = *(undefined1 *)(param_3 + 0x110 + lVar25);
      lVar23 = *(longlong *)(param_3 + 0x118 + lVar25);
      if (DAT_14c950c29 == 1) {
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar23 = *(longlong *)(param_3 + 0x118 + lVar25);
        }
      }
      *(longlong *)(param_2 + 0x118 + lVar25) = lVar23;
      *(undefined8 *)(param_2 + 0x120 + lVar25) = *(undefined8 *)(param_3 + 0x120 + lVar25);
      *(undefined4 *)(param_2 + 0x128 + lVar25) = *(undefined4 *)(param_3 + 0x128 + lVar25);
      FUN_140eb23de(plVar4 + 0x26,plVar3 + 0x26);
      *(undefined1 *)(param_2 + 0x178 + lVar25) = *(undefined1 *)(param_3 + 0x178 + lVar25);
      lVar23 = *(longlong *)(param_3 + 0x180 + lVar25);
      if (DAT_14c950c29 == 1) {
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar23 = *(longlong *)(param_3 + 0x180 + lVar25);
        }
      }
      bVar24 = DAT_14c950c29;
      plVar4[0x30] = lVar23;
      plVar4[0x31] = *(longlong *)(param_3 + 0x188 + lVar25);
      *(undefined4 *)(plVar4 + 0x32) = *(undefined4 *)(param_3 + 400 + lVar25);
      lVar23 = *(longlong *)(param_3 + 0x198 + lVar25);
      if ((bVar24 & 1) != 0) {
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar23 = *(longlong *)(param_3 + 0x198 + lVar25);
          bVar24 = DAT_14c950c29;
        }
      }
      plVar4[0x33] = lVar23;
      lVar23 = param_3 + lVar25;
      plVar4[0x34] = *(longlong *)(lVar23 + 0x1a0);
      *(undefined4 *)(plVar4 + 0x35) = *(undefined4 *)(lVar23 + 0x1a8);
      *(undefined1 *)(plVar4 + 0x36) = *(undefined1 *)(lVar23 + 0x1b0);
      memcpy(plVar4 + 0x37,(void *)(lVar23 + 0x1b8),0x98);
      lVar23 = *(longlong *)(lVar23 + 0x250);
      if ((bVar24 & 1) != 0) {
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar23 = *(longlong *)(param_3 + 0x250 + lVar25);
          bVar24 = DAT_14c950c29;
        }
      }
      plVar4[0x4a] = lVar23;
      lVar23 = *(longlong *)(param_3 + 600 + lVar25);
      if ((bVar24 & 1) != 0) {
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar23 = *(longlong *)(param_3 + 600 + lVar25);
          bVar24 = DAT_14c950c29;
        }
      }
      plVar4[0x4b] = lVar23;
      lVar23 = *(longlong *)(param_3 + 0x260 + lVar25);
      if ((bVar24 & 1) != 0) {
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar23 = *(longlong *)(param_3 + 0x260 + lVar25);
        }
      }
      plVar4[0x4c] = lVar23;
      plVar4[0x4d] = *(longlong *)(param_3 + 0x268 + lVar25);
      *(undefined4 *)(plVar4 + 0x4e) = *(undefined4 *)(param_3 + 0x270 + lVar25);
      plVar6 = (longlong *)(param_3 + 0x278 + lVar25);
      lVar23 = plVar6[1];
      plVar4[0x4f] = *plVar6;
      plVar4[0x50] = lVar23;
      plVar4[0x51] = *(longlong *)(param_3 + 0x288 + lVar25);
      plVar6 = (longlong *)(param_3 + 0x290 + lVar25);
      lVar23 = plVar6[1];
      plVar4[0x52] = *plVar6;
      plVar4[0x53] = lVar23;
      puVar7 = (undefined4 *)(param_3 + 0x2a0 + lVar25);
      uVar8 = *puVar7;
      uVar9 = puVar7[1];
      uVar10 = puVar7[2];
      uVar11 = puVar7[3];
      puVar7 = (undefined4 *)(param_3 + 0x2b0 + lVar25);
      uVar12 = *puVar7;
      uVar13 = puVar7[1];
      uVar14 = puVar7[2];
      uVar15 = puVar7[3];
      puVar7 = (undefined4 *)(param_3 + 0x2c0 + lVar25);
      uVar16 = *puVar7;
      uVar17 = puVar7[1];
      uVar18 = puVar7[2];
      uVar19 = puVar7[3];
      puVar7 = (undefined4 *)(param_3 + 0x2c9 + lVar25);
      uVar20 = puVar7[1];
      uVar21 = puVar7[2];
      uVar22 = puVar7[3];
      *(undefined4 *)((longlong)plVar4 + 0x2c9) = *puVar7;
      *(undefined4 *)((longlong)plVar4 + 0x2cd) = uVar20;
      *(undefined4 *)((longlong)plVar4 + 0x2d1) = uVar21;
      *(undefined4 *)((longlong)plVar4 + 0x2d5) = uVar22;
      *(undefined4 *)(plVar4 + 0x58) = uVar16;
      *(undefined4 *)((longlong)plVar4 + 0x2c4) = uVar17;
      *(undefined4 *)(plVar4 + 0x59) = uVar18;
      *(undefined4 *)((longlong)plVar4 + 0x2cc) = uVar19;
      *(undefined4 *)(plVar4 + 0x56) = uVar12;
      *(undefined4 *)((longlong)plVar4 + 0x2b4) = uVar13;
      *(undefined4 *)(plVar4 + 0x57) = uVar14;
      *(undefined4 *)((longlong)plVar4 + 700) = uVar15;
      *(undefined4 *)(plVar4 + 0x54) = uVar8;
      *(undefined4 *)((longlong)plVar4 + 0x2a4) = uVar9;
      *(undefined4 *)(plVar4 + 0x55) = uVar10;
      *(undefined4 *)((longlong)plVar4 + 0x2ac) = uVar11;
      lVar23 = *(longlong *)(param_3 + 0x2e0 + lVar25);
      lVar5 = *(longlong *)(param_3 + 0x2e8 + lVar25);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)plVar4[0x5d];
      plVar4[0x5c] = lVar23;
      plVar4[0x5d] = lVar5;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      FUN_140311eb6(plVar4 + 0x5e,param_3 + lVar25 + 0x2f0);
      if (plVar3 != plVar4) {
        FUN_140eb2488(plVar4 + 0x60,plVar3 + 0x60);
      }
      FUN_140311eb6(plVar4 + 99,plVar3 + 99);
      FUN_140311eb6(plVar4 + 0x65,plVar3 + 0x65);
      FUN_140311eb6(plVar4 + 0x67,plVar3 + 0x67);
      FUN_140311eb6(plVar4 + 0x69,plVar3 + 0x69);
      FUN_140311eb6(plVar4 + 0x6b,plVar3 + 0x6b);
      FUN_140311eb6(plVar4 + 0x6d,plVar3 + 0x6d);
      if (plVar3 != plVar4) {
        FUN_140eb2488(plVar4 + 0x6f,plVar3 + 0x6f);
      }
      lVar25 = lVar25 + 0x390;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140eb23de FUN_140eb23de body=170 status=ok
// SIG undefined FUN_140eb23de(void)

undefined1 * FUN_140eb23de(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2b0))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  lVar5 = *(longlong *)(param_2 + 0x20);
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 0x20);
    }
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x20) = lVar5;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  lVar5 = *(longlong *)(param_2 + 0x40);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *(longlong *)(param_2 + 0x40);
    }
  }
  *(longlong *)(param_1 + 0x40) = lVar5;
  *(undefined8 *)(param_2 + 0x40) = 0;
  return param_1;
}



// FUNCTION 140eb2488 FUN_140eb2488 body=395 status=ok
// SIG undefined FUN_140eb2488(void)

void FUN_140eb2488(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar5 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          FUN_1447a71f6(&local_58,uVar5 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  if (&local_58 == param_1) {
    uVar5 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_144760e21(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_58;
    local_58 = 0;
    *(int *)(param_1 + 1) = (int)uStack_50;
    *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    uVar5 = 0;
  }
  FUN_144760e21(local_58,uVar5);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eb2614 FUN_140eb2614 body=342 status=ok
// SIG undefined FUN_140eb2614(void)

undefined4 * FUN_140eb2614(longlong param_1,undefined4 *param_2,void *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eb286a(param_1,local_48);
  memcpy(local_40,param_3,0x150);
  local_40[0x54] = -1;
  local_4c = local_48[0];
  uVar2 = FUN_1447addd0(local_40 + 1,*local_40 * 2);
  local_58 = param_4;
  cVar1 = FUN_140eb276c(param_1,uVar2,local_40,&local_4c);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      local_40[0x55] = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_40[0x54] =
           *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140eb2bca(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb276c FUN_140eb276c body=253 status=ok
// SIG undefined FUN_140eb276c(void)

void FUN_140eb276c(longlong *param_1,uint param_2,uint *param_3,int *param_4,undefined1 *param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  uVar3 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar3 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 == -1) {
      uVar3 = 0;
    }
    else {
      lVar2 = *param_1;
      uVar1 = *param_3;
      do {
        lVar7 = (longlong)iVar6 * 0x158;
        if (*(uint *)(lVar2 + lVar7) == uVar1) {
          iVar4 = memcmp((void *)(lVar7 + lVar2 + 4),param_3 + 1,(ulonglong)uVar1 * 2);
          if (iVar4 == 0) {
            memmove((void *)(lVar7 + lVar2),param_3,0x150);
            FUN_1457c00a4(param_1,*param_4,1);
            *param_4 = iVar6;
            uVar3 = 1;
            goto LAB_140eb284a;
          }
        }
        iVar6 = *(int *)(lVar2 + 0x150 + lVar7);
      } while (iVar6 != -1);
      uVar3 = 0;
    }
  }
LAB_140eb284a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 140eb286a FUN_140eb286a body=490 status=ok
// SIG undefined FUN_140eb286a(void)

int * FUN_140eb286a(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140eb2a54(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x158);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x158) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x158 + *param_1;
  return param_2;
}



// FUNCTION 140eb2a54 FUN_140eb2a54 body=372 status=ok
// SIG undefined FUN_140eb2a54(void)

void FUN_140eb2a54(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x158;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140eb2ade;
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
LAB_140eb2ade:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x158)) {
    uVar7 = uVar5 / 0x158 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x158,8);
  return;
}



// FUNCTION 140eb2bca FUN_140eb2bca body=582 status=ok
// SIG undefined FUN_140eb2bca(void)

void FUN_140eb2bca(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar12,4);
    if (0 < (int)uVar12) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar12 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar13 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar13 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar14 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        piVar2 = (int *)(*param_1 + (longlong)iVar7 * 0x158);
        iVar5 = FUN_1447addd0(piVar2 + 1,*piVar2 * 2);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        piVar2[0x55] = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        piVar2[0x54] = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar12 = ~(uint)uVar13 & uVar12;
        plVar8 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar5 = (int)plVar1[3];
        lVar11 = (longlong)iVar14;
        uVar4 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar12;
        if (uVar4 == 0) {
          iVar7 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar7 = iVar5 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar14) {
            iVar3 = iVar14;
          }
          if (iVar7 <= iVar14) break;
          lVar9 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar11 * 4 + 4);
            if (uVar4 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar3 - lVar11 == lVar9) goto LAB_140eb2dd3;
          }
          iVar14 = iVar14 + (int)lVar9 + 1;
          uVar12 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar5);
    }
  }
LAB_140eb2dd3:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb2e18 FUN_140eb2e18 body=261 status=ok
// SIG undefined FUN_140eb2e18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140eb2e18(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98ead0) {
    FUN_144b3d300(&DAT_14c98ead0);
    if (DAT_14c98ead0 == -1) {
      FUN_1446ddc76(&local_28,"SBorder",1);
      DAT_14c98eab8 = 0;
      _DAT_14c98eac0 = 0x100000000;
      DAT_14c98ea98 = 0;
      _DAT_14c98eaa0 = 0;
      _DAT_14c98eac8 = local_28;
      uVar1 = FUN_140a56032();
      FUN_145b26348(local_20,&DAT_14c98ea98,uVar1);
      FUN_1457c013c(local_20);
      FUN_140a5f69a(local_20);
      atexit(FUN_1428fbee7);
      _Init_thread_footer(&DAT_14c98ead0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return &DAT_14c98ea98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb2f1e FUN_140eb2f1e body=40 status=ok
// SIG undefined FUN_140eb2f1e(void)

undefined8 FUN_140eb2f1e(undefined8 param_1,int param_2)

{
  FUN_140eb2f46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140eb2f46 FUN_140eb2f46 body=200 status=ok
// SIG undefined FUN_140eb2f46(void)

void FUN_140eb2f46(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b536610;
  if (param_1[0x38] != 0) {
    plVar3 = param_1 + 0x3c;
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x3a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(char *)(param_1 + 0x36) == '\x01') {
    *(undefined1 *)(param_1 + 0x36) = 0;
  }
  if (*(char *)(param_1 + 0x34) == '\x01') {
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  plVar3 = (longlong *)param_1[0x2a];
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
  plVar3 = (longlong *)param_1[0x28];
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
  FUN_140ee3dc0(param_1);
  return;
}



// FUNCTION 140eb301a FUN_140eb301a body=36 status=ok
// SIG undefined FUN_140eb301a(void)

undefined8 FUN_140eb301a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140eb303e FUN_140eb303e body=9 status=ok
// SIG undefined FUN_140eb303e(void)

void FUN_140eb303e(longlong param_1)

{
  FUN_140eb3048(param_1 + 0x10);
  return;
}



// FUNCTION 140eb3048 FUN_140eb3048 body=159 status=ok
// SIG undefined FUN_140eb3048(void)

void FUN_140eb3048(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x78) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_140eb3063;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140eb3063:
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140eb30d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140eb30e8 FUN_140eb30e8 body=497 status=ok
// SIG undefined FUN_140eb30e8(void)

void FUN_140eb30e8(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar10 = *(longlong *)(param_1 + 0x20);
  if (lVar10 == 0) {
LAB_140eb325a:
    FUN_140eb32da(param_1,param_2);
    return;
  }
  if (0.0 < *(float *)(lVar10 + 0x178)) {
    plVar4 = *(longlong **)(param_1 + 0x30);
    lVar11 = lVar10 + 0x4f8;
    if (*(longlong *)(lVar10 + 0x878) != 0) {
      lVar11 = *(longlong *)(lVar10 + 0x878);
    }
    if ((longlong)*(int *)(lVar10 + 0x880) != 0) {
      iVar2 = *(int *)(param_1 + 0x38);
      lVar10 = (longlong)*(int *)(lVar10 + 0x880) * 0x38;
      while ((*(byte *)(lVar11 + 0x34) & 1) == 0) {
        bVar1 = *(byte *)(lVar11 + 0x20);
        cVar6 = '\x01';
        if (bVar1 != 7) {
          uVar9 = (uint)bVar1 * 0x120;
          if (*(code **)(&DAT_14c9a8560 + uVar9) == (code *)0x0) {
LAB_140eb31a4:
            if ((DAT_14c9a8d48 == (code *)0x0) || (cVar6 = (*DAT_14c9a8d48)(bVar1), cVar6 == '\0'))
            {
              if ((((&DAT_14c9a8514)[uVar9] & 0x20) != 0) && ((DAT_14c9a8cf4 & 0x20) == 0)) {
                cVar6 = '\x01';
                if (*(code **)(&DAT_14c9a8588 + uVar9) != (code *)0x0) {
                  cVar6 = (**(code **)(&DAT_14c9a8588 + uVar9))(7);
                }
                goto LAB_140eb31c4;
              }
              break;
            }
          }
          else {
            cVar6 = (**(code **)(&DAT_14c9a8560 + uVar9))(0x14c9a8507);
            if (cVar6 == '\0') goto LAB_140eb31a4;
          }
          cVar6 = '\x01';
        }
LAB_140eb31c4:
        iVar8 = (int)plVar4[1];
        if ((cVar6 == '\0') || (iVar2 <= iVar8)) goto LAB_140eb320c;
        uVar7 = FUN_14030a32e(lVar11);
        iVar8 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar8 + 1U) {
          FUN_1447d05f2(plVar4,iVar8);
        }
        *(undefined8 *)(*plVar4 + (longlong)iVar8 * 8) = uVar7;
        lVar11 = lVar11 + 0x38;
        lVar10 = lVar10 + -0x38;
        if (lVar10 == 0) break;
      }
    }
    iVar8 = (int)plVar4[1];
LAB_140eb320c:
    if (iVar8 < 1) goto LAB_140eb325a;
    **(undefined1 **)(param_1 + 0x40) = 0;
    uVar7 = *(undefined8 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0xc);
    *(undefined1 *)(param_2 + 0x60) = 1;
    iVar2 = *(int *)(param_2 + 0x58);
    lVar10 = (longlong)iVar2;
    *(uint *)(param_2 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
      FUN_14579eadc(param_2,iVar2);
    }
    lVar11 = *(longlong *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      lVar11 = param_2;
    }
    *(undefined8 *)(lVar11 + lVar10 * 0x14) = uVar5;
    *(undefined4 *)(lVar11 + 8 + lVar10 * 0x14) = uVar3;
    *(undefined8 *)(lVar11 + 0xc + lVar10 * 0x14) = uVar7;
  }
  return;
}



// FUNCTION 140eb32da FUN_140eb32da body=101 status=ok
// SIG undefined FUN_140eb32da(void)

void FUN_140eb32da(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  **(undefined1 **)(param_1 + 0x40) = 1;
  uVar3 = *(undefined8 *)(param_1 + 0x14);
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  *(undefined1 *)(param_2 + 0x60) = 1;
  iVar2 = *(int *)(param_2 + 0x58);
  lVar6 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar5 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar5 = param_2;
  }
  *(undefined8 *)(lVar5 + lVar6 * 0x14) = uVar4;
  *(undefined4 *)(lVar5 + 8 + lVar6 * 0x14) = uVar1;
  *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  return;
}



// FUNCTION 140eb3340 FUN_140eb3340 body=355 status=ok
// SIG undefined FUN_140eb3340(void)

undefined8 * FUN_140eb3340(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0xa0,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951f40) {
    FUN_144b3d300(&DAT_14c951f40);
    if (DAT_14c951f40 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140eb3340;
      local_58 = 0x400000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
      atexit(FUN_142815b60);
      _Init_thread_footer(&DAT_14c951f40);
    }
  }
  puVar1[1] = &DAT_14c951ef0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149ea6520;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  local_58 = local_58 & 0xffffffffffffff00;
  FUN_140eb34a4(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb34a4 FUN_140eb34a4 body=200 status=ok
// SIG undefined FUN_140eb34a4(void)

undefined8 *
FUN_140eb34a4(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  ulonglong uVar1;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  local_40 = uVar1;
  if (((uVar1 & 1) != 0) && (uVar1 = uVar1 & 0xfffffffffffffffe, uVar1 != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(uVar1);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(uVar1);
    }
  }
  FUN_1403a630a(param_1,&local_40,param_3,param_4);
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x50;
  *param_1 = &PTR_LAB_149ea6520;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x13) = param_5;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140eb356e FUN_140eb356e body=364 status=ok
// SIG undefined FUN_140eb356e(void)

undefined8 * FUN_140eb356e(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_4 + 8) != 0) &&
      (plVar4 = *(longlong **)(param_4 + 0x10), plVar4 != (longlong *)0x0)) && (0 < (int)plVar4[1]))
  {
    iVar7 = (int)plVar4[1];
    do {
      iVar5 = iVar7;
      if (iVar5 == 0) {
        local_48 = (longlong *)0x0;
        plStack_40 = (longlong *)0x0;
        goto LAB_140eb35e4;
      }
      LOCK();
      iVar7 = (int)plVar4[1];
      bVar9 = iVar5 == iVar7;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar5 + 1;
        iVar7 = iVar5;
      }
      UNLOCK();
    } while (!bVar9);
    local_48 = *(longlong **)(param_4 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plStack_40 = plVar4;
LAB_140eb35e4:
    plVar4 = plStack_40;
    uVar6 = (**(code **)(*local_48 + 0x40))();
    iVar7 = FUN_140eb36de((longlong *)(param_1 + 0x70),uVar6,&local_48);
    plVar2 = plStack_40;
    if (iVar7 == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)iVar7 * 0x28 + *(longlong *)(param_1 + 0x70);
    }
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (iVar5 != 0) {
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
    if (lVar8 != 0) {
      *param_2 = *(undefined8 *)(lVar8 + 0x10);
      lVar8 = *(longlong *)(lVar8 + 0x18);
      param_2[1] = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 140eb36de FUN_140eb36de body=181 status=ok
// SIG undefined FUN_140eb36de(void)

int FUN_140eb36de(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar6 = *param_1;
      do {
        lVar7 = (longlong)iVar8;
        puVar3 = *(undefined8 **)(lVar6 + lVar7 * 0x28);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar7 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        if (puVar3 == (undefined8 *)*param_3) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = (**(code **)*puVar3)();
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (cVar4 != '\0') {
          return iVar8;
        }
        lVar6 = *param_1;
        iVar8 = *(int *)(lVar6 + 0x20 + lVar7 * 0x28);
      } while (iVar8 != -1);
    }
  }
  return -1;
}



// FUNCTION 140eb3794 FUN_140eb3794 body=55 status=ok
// SIG undefined FUN_140eb3794(void)

void FUN_140eb3794(longlong *param_1)

{
  FUN_140eb37cc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140eb37cc FUN_140eb37cc body=496 status=ok
// SIG undefined FUN_140eb37cc(void)

void FUN_140eb37cc(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar12 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar12 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar12;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar12) goto LAB_140eb3920;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar8[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar12 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar13 = 0xffffffff;
    do {
      FUN_140d01c8a(*param_1 + (longlong)iVar4 * 0x48 + 8);
      uVar13 = ~(uint)uVar14 & uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar12;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_140eb3920;
        }
        uVar12 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_140eb3920:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar5 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140eb39be FUN_140eb39be body=96 status=ok
// SIG undefined FUN_140eb39be(void)

ulonglong FUN_140eb39be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140eb3a01:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140eb3a01;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 140eb3a80 FUN_140eb3a80 body=3041 status=ok
// SIG undefined FUN_140eb3a80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140eb3a80(code *param_1)

{
  ulonglong uVar1;
  code **ppcVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  code **ppcVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  code *pcVar16;
  code **ppcVar17;
  code *pcVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  undefined2 uVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  longlong *plVar27;
  int iVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined1 auStack_a08 [32];
  undefined4 local_9e8;
  undefined4 local_9e0;
  code **local_9d8;
  undefined8 local_9d0;
  wchar_t *local_9c8;
  code *local_9c0;
  undefined1 *local_9b8;
  code **local_9b0;
  code *local_9a8;
  code *local_9a0;
  code *local_998;
  code *local_990;
  ulonglong local_988;
  code *local_980;
  undefined8 local_978;
  code *pcStack_970;
  code **local_968;
  undefined4 *local_960;
  code *local_958;
  undefined8 uStack_950;
  double local_948;
  code *local_938;
  code **local_930;
  code *local_928 [224];
  code **local_228;
  undefined8 local_218;
  undefined4 local_208;
  char local_204;
  longlong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_a08;
  if (0 < *(int *)(param_1 + 0x98) || *(int *)(param_1 + 0x98) == -1) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    pcVar18 = param_1 + 0x48;
    uVar14 = *(uint *)(param_1 + 0x60);
    if (uVar14 == 0) {
      uVar30 = 1;
      uVar33 = 0;
      iVar26 = 0;
      uVar13 = 0;
    }
    else {
      pcVar16 = *(code **)(param_1 + 0x58);
      if (*(code **)(param_1 + 0x58) == (code *)0x0) {
        pcVar16 = pcVar18;
      }
      uVar13 = *(uint *)pcVar16;
      if (uVar13 == 0) {
        iVar26 = uVar14 + 0x1e;
        if (-1 < (int)(uVar14 - 1)) {
          iVar26 = uVar14 - 1;
        }
        uVar33 = 0;
        uVar30 = (ulonglong)(uint)(iVar26 >> 5);
        if (iVar26 >> 5 < 1) {
          uVar30 = uVar33;
        }
        iVar26 = 0;
        do {
          if (uVar30 == uVar33) goto LAB_140eb3bba;
          iVar26 = iVar26 + 0x20;
          uVar13 = *(uint *)(pcVar16 + (uVar33 + 1) * 4);
          uVar33 = uVar33 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar33 = 0;
        iVar26 = 0;
      }
      uVar30 = (ulonglong)(-uVar13 & uVar13);
      uVar1 = uVar30 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      uVar13 = (iVar26 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
      if ((int)uVar14 <= (int)uVar13) {
        uVar13 = uVar14;
      }
    }
    if (uVar13 != uVar14) {
      uVar31 = 0xffffffff;
      local_990 = pcVar18;
      local_988 = (ulonglong)uVar14;
      local_980 = param_1;
      do {
        local_998 = (code *)CONCAT44(local_998._4_4_,iVar26);
        iVar26 = *(int *)(*(longlong *)(local_980 + 0x38) + 0x18 + (longlong)(int)uVar13 * 0x28);
        iVar15 = iVar26;
        if (0 < iVar26) {
          lVar29 = *(longlong *)(local_980 + 0x38) + (longlong)(int)uVar13 * 0x28;
          lVar32 = 0;
          bVar19 = false;
          do {
            lVar3 = *(longlong *)(lVar29 + 0x10);
            uVar14 = (uint)lVar32;
            lVar32 = (longlong)(int)uVar14;
            lVar34 = lVar3 + lVar32 * 8;
            lVar25 = 0;
            while ((lVar4 = *(longlong *)(*(longlong *)(lVar34 + lVar25 * 8) + 8), lVar4 != 0 &&
                   ((*(byte *)(lVar4 + 0x11) & 8) != 0))) {
              lVar4 = lVar32 + lVar25;
              lVar25 = lVar25 + 1;
              if ((longlong)iVar15 <= lVar4 + 1) {
                if (bVar19) goto LAB_140eb4283;
                goto LAB_140eb41ad;
              }
            }
            iVar24 = (int)lVar25;
            if (~uVar14 + iVar15 != iVar24) {
              iVar28 = (~uVar14 + iVar15) - iVar24;
              if (0 < iVar28) {
                iVar28 = 1;
              }
              memmove((void *)(lVar34 + lVar25 * 8),
                      (void *)(lVar3 + (longlong)(iVar15 - iVar28) * 8),(longlong)iVar28 << 3);
              iVar15 = *(int *)(lVar29 + 0x18);
              pcVar18 = local_990;
            }
            lVar32 = lVar32 + lVar25;
            iVar15 = iVar15 + -1;
            *(int *)(lVar29 + 0x18) = iVar15;
            bVar19 = true;
          } while ((int)(uVar14 + iVar24) < iVar15);
LAB_140eb4283:
          FUN_14980f14e((longlong *)(lVar29 + 0x10));
          iVar15 = *(int *)(lVar29 + 0x18);
          pcVar18 = local_990;
        }
LAB_140eb41ad:
        *(int *)(local_980 + 0x88) = *(int *)(local_980 + 0x88) + (iVar15 - iVar26);
        uVar31 = uVar31 & ~(uint)uVar30;
        pcVar16 = *(code **)(local_980 + 0x58);
        if (*(code **)(local_980 + 0x58) == (code *)0x0) {
          pcVar16 = pcVar18;
        }
        uVar14 = *(uint *)(local_980 + 0x60);
        iVar15 = (int)uVar33;
        lVar29 = (longlong)iVar15;
        uVar13 = *(uint *)(pcVar16 + lVar29 * 4) & uVar31;
        iVar26 = (int)local_998;
        if (uVar13 == 0) {
          iVar24 = uVar14 + 0x1e;
          if (-1 < (int)(uVar14 - 1)) {
            iVar24 = uVar14 - 1;
          }
          iVar24 = iVar24 >> 5;
          iVar26 = (int)local_998 + 0x20;
          iVar28 = iVar24;
          if (iVar24 < iVar15) {
            iVar28 = iVar15;
          }
          if (iVar15 < iVar24) {
            lVar32 = 0;
            do {
              uVar13 = *(uint *)(pcVar16 + (lVar29 + lVar32 + 1) * 4);
              if (uVar13 != 0) {
                uVar33 = (ulonglong)(iVar15 + (int)lVar32 + 1);
                uVar31 = 0xffffffff;
                goto LAB_140eb4241;
              }
              iVar26 = iVar26 + 0x20;
              lVar32 = lVar32 + 1;
            } while (iVar28 - lVar29 != lVar32);
            uVar31 = 0xffffffff;
            iVar15 = iVar28;
          }
          uVar33 = (ulonglong)(iVar15 + 1);
          pcVar18 = local_990;
          uVar13 = uVar14;
        }
        else {
LAB_140eb4241:
          uVar30 = (ulonglong)(-uVar13 & uVar13);
          uVar1 = uVar30 * 2 + 1;
          lVar29 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
            }
          }
          uVar13 = (iVar26 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
          if ((int)uVar14 <= (int)uVar13) {
            uVar13 = uVar14;
          }
        }
        param_1 = local_980;
      } while (uVar13 != (uint)local_988);
    }
  }
LAB_140eb3bba:
  uStack_950 = (code **)CONCAT44(uStack_950._4_4_,(undefined4)uStack_950);
  if ((*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) &&
     (lVar29 = *(longlong *)(param_1 + 0x20),
     uStack_950 = (code **)CONCAT44(uStack_950._4_4_,(undefined4)uStack_950), lVar29 != 0)) {
    if (DAT_14cb10130 == 0) {
      local_9b0 = local_928;
      local_928[0] = FUN_140754f84;
      local_9a0 = FUN_14081d0ea;
      local_9a8 = FUN_14081d0ea;
      local_9b8 = &LAB_147da9a76;
      local_9c0 = FUN_1409f3105;
      local_9c8 = L"Engine";
      local_9d0 = 0;
      local_9d8 = (code **)CONCAT44(local_9d8._4_4_,0x10000000);
      local_9e0 = 8;
      local_9e8 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    uStack_950 = (code **)CONCAT44(uStack_950._4_4_,(undefined4)uStack_950);
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar29 + 0x10) + 0x38)) &&
       (uStack_950 = (code **)CONCAT44(uStack_950._4_4_,(undefined4)uStack_950),
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar29 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) {
      local_208 = 0;
      local_204 = '\0';
      local_100 = 0;
      local_f8 = 0x2000000000;
      local_228 = (code **)0x0;
      local_218 = 0x1000000000;
      uVar14 = *(uint *)(lVar29 + 0x228);
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar14);
      }
      if (0x10 < uVar14) {
        FUN_14980f1ea(local_928);
      }
      auVar9 = _DAT_1499387d0;
      iVar26 = *(int *)(lVar29 + 0x238);
      if (0 < iVar26) {
        lVar32 = 0;
        dVar5 = (double)DAT_1499387d0;
        dVar6 = DAT_1499387d0._8_8_;
        do {
          iVar15 = *(int *)(*(longlong *)(lVar29 + 0x230) + 4 + lVar32 * 8);
          if ((((iVar15 != 0) &&
               (uVar14 = *(uint *)(*(longlong *)(lVar29 + 0x230) + lVar32 * 8), -1 < (int)uVar14))
              && ((int)uVar14 < DAT_14c9647dc)) &&
             (((plVar27 = (longlong *)
                          ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
               plVar27 != (longlong *)0x0 && ((int)plVar27[2] == iVar15)) &&
              (((*(uint *)(plVar27 + 1) & 0x10200000) == 0 &&
               (plVar27 = (longlong *)*plVar27, plVar27 != (longlong *)0x0)))))) {
            uVar23 = 2;
            if ((((*(byte *)(plVar27 + 0x84) & 2) != 0) &&
                (cVar12 = (**(code **)(*plVar27 + 0x6c8))(plVar27), cVar12 != '\0')) &&
               (lVar34 = plVar27[0x86], lVar34 != 0)) {
              if (DAT_14cae9568 == 0) {
                local_978 = FUN_1417de738;
                local_9a0 = (code *)&LAB_145893408;
                local_9a8 = (code *)&LAB_1458cbbd2;
                local_9b8 = &LAB_147ba21f1;
                local_9c0 = (code *)&LAB_1463e9233;
                local_9c8 = L"Engine";
                local_9d0 = 0;
                local_9d8 = (code **)CONCAT44(local_9d8._4_4_,0x1000000c);
                local_9e0 = 8;
                local_9e8 = 0x2b8;
                local_9b0 = (code **)&local_978;
                FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
                lVar34 = plVar27[0x86];
                if (lVar34 == 0) goto LAB_140eb3da1;
              }
              if (((((DAT_14cae9568 != 0) && (lVar3 = *(longlong *)(lVar34 + 0x10), lVar3 != 0)) &&
                   (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
                  (*(longlong *)
                    (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
                   DAT_14cae9568 + 0x30)) &&
                 ((0.0 < *(double *)(lVar34 + 0x90) || (0.0 < *(double *)(lVar34 + 0x98))))) {
                uVar23 = 1;
              }
            }
LAB_140eb3da1:
            (**(code **)(*plVar27 + 0x718))(plVar27,&local_978,&local_958);
            auVar41._8_4_ = (undefined4)uStack_950;
            auVar41._0_8_ = local_958;
            auVar41._12_4_ = uStack_950._4_4_;
            auVar41 = divpd(auVar41,auVar9);
            auVar42._8_8_ = 0;
            auVar42._0_8_ = local_948;
            auVar42 = divpd(auVar42,auVar9);
            auVar41 = roundpd(auVar41,auVar41,3);
            auVar42 = roundpd(auVar42,auVar42,3);
            dVar38 = ((double)local_958 - auVar41._0_8_ * dVar5) * 0.008726646259971648;
            dVar39 = ((double)CONCAT44(uStack_950._4_4_,(undefined4)uStack_950) -
                     auVar41._8_8_ * dVar6) * 0.008726646259971648;
            dVar40 = (local_948 - auVar42._0_8_ * dVar5) * 0.008726646259971648;
            dVar8 = (0.0 - auVar42._8_8_ * dVar6) * 0.008726646259971648;
            dVar35 = sin(dVar38);
            dVar36 = sin(dVar39);
            dVar37 = sin(dVar40);
            sin(dVar8);
            dVar38 = cos(dVar38);
            dVar39 = cos(dVar39);
            dVar40 = cos(dVar40);
            cos(dVar8);
            uVar33 = local_218;
            ppcVar11 = local_968;
            uVar22 = (undefined4)local_978;
            uVar10 = local_978._4_4_;
            uVar43 = SUB84(pcStack_970,0);
            uVar30 = (ulonglong)pcStack_970 >> 0x20;
            lVar34 = (longlong)(int)local_218;
            uVar14 = (int)local_218 + 1;
            local_218 = CONCAT44(local_218._4_4_,uVar14);
            if (local_218._4_4_ < uVar14) {
              FUN_14980f2d8(local_928,uVar33 & 0xffffffff);
            }
            dVar8 = dVar36 * dVar35 * dVar37 + dVar39 * dVar38 * dVar40;
            ppcVar17 = local_228;
            if (local_228 == (code **)0x0) {
              ppcVar17 = local_928;
            }
            *(undefined2 *)(ppcVar17 + lVar34 * 0xe) = uVar23;
            ppcVar17[lVar34 * 0xe + 2] =
                 (code *)(dVar35 * dVar36 * dVar40 - dVar38 * dVar39 * dVar37);
            (ppcVar17 + lVar34 * 0xe + 2)[1] =
                 (code *)(-(dVar35 * dVar39 * dVar40) - dVar38 * dVar36 * dVar37);
            auVar7._8_4_ = SUB84(dVar8,0);
            auVar7._0_8_ = -(dVar39 * dVar35 * dVar37) + dVar36 * dVar38 * dVar40;
            auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            *(undefined1 (*) [16])(ppcVar17 + lVar34 * 0xe + 4) = auVar7;
            ppcVar2 = ppcVar17 + lVar34 * 0xe + 6;
            *(undefined4 *)ppcVar2 = uVar22;
            *(undefined4 *)((longlong)ppcVar2 + 4) = uVar10;
            *(undefined4 *)(ppcVar2 + 1) = uVar43;
            *(int *)((longlong)ppcVar2 + 0xc) = (int)uVar30;
            ppcVar17[lVar34 * 0xe + 8] = (code *)ppcVar11;
            (ppcVar17 + lVar34 * 0xe + 8)[1] = (code *)0x0;
            ppcVar17[lVar34 * 0xe + 10] = (code *)0x3ff0000000000000;
            (ppcVar17 + lVar34 * 0xe + 10)[1] = (code *)0x3ff0000000000000;
            ppcVar17[lVar34 * 0xe + 0xc] = (code *)0x3ff0000000000000;
            (ppcVar17 + lVar34 * 0xe + 0xc)[1] = (code *)0x0;
            iVar26 = *(int *)(lVar29 + 0x238);
          }
          lVar32 = lVar32 + 1;
        } while (lVar32 < iVar26);
      }
      iVar26 = *(int *)(param_1 + 0x60);
      if (iVar26 == 0) {
        uVar33 = 1;
        uVar30 = 0;
        iVar24 = 0;
        iVar15 = 0;
      }
      else {
        pcVar18 = *(code **)(param_1 + 0x58);
        if (*(code **)(param_1 + 0x58) == (code *)0x0) {
          pcVar18 = param_1 + 0x48;
        }
        uVar14 = *(uint *)pcVar18;
        if (uVar14 == 0) {
          iVar15 = iVar26 + 0x1e;
          if (-1 < iVar26 + -1) {
            iVar15 = iVar26 + -1;
          }
          uVar30 = 0;
          uVar33 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar33 = uVar30;
          }
          iVar24 = 0;
          do {
            if (uVar33 == uVar30) {
              uVar22 = 0;
              goto LAB_140eb43be;
            }
            iVar24 = iVar24 + 0x20;
            uVar14 = *(uint *)(pcVar18 + (uVar30 + 1) * 4);
            uVar30 = uVar30 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar30 = 0;
          iVar24 = 0;
        }
        uVar33 = (ulonglong)(-uVar14 & uVar14);
        uVar1 = uVar33 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar15 = (iVar24 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
        if (iVar26 <= iVar15) {
          iVar15 = iVar26;
        }
      }
      uVar22 = 0;
      if (iVar15 != iVar26) {
        uVar14 = 0xffffffff;
        local_998 = param_1 + 0x48;
        do {
          FUN_14980d670(&local_208,*(longlong *)(param_1 + 0x38) + (longlong)iVar15 * 0x28 + 8);
          uVar14 = ~(uint)uVar33 & uVar14;
          pcVar18 = *(code **)(param_1 + 0x58);
          if (*(code **)(param_1 + 0x58) == (code *)0x0) {
            pcVar18 = local_998;
          }
          iVar28 = *(int *)(param_1 + 0x60);
          iVar15 = (int)uVar30;
          lVar29 = (longlong)iVar15;
          uVar13 = *(uint *)(pcVar18 + lVar29 * 4) & uVar14;
          if (uVar13 == 0) {
            iVar20 = iVar28 + 0x1e;
            if (-1 < iVar28 + -1) {
              iVar20 = iVar28 + -1;
            }
            iVar20 = iVar20 >> 5;
            iVar24 = iVar24 + 0x20;
            iVar21 = iVar20;
            if (iVar20 < iVar15) {
              iVar21 = iVar15;
            }
            if (iVar15 < iVar20) {
              lVar32 = 0;
              do {
                uVar13 = *(uint *)(pcVar18 + (lVar29 + lVar32 + 1) * 4);
                if (uVar13 != 0) {
                  uVar30 = (ulonglong)(iVar15 + (int)lVar32 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_140eb436e;
                }
                iVar24 = iVar24 + 0x20;
                lVar32 = lVar32 + 1;
              } while (iVar21 - lVar29 != lVar32);
              uVar14 = 0xffffffff;
              iVar15 = iVar21;
            }
            uVar30 = (ulonglong)(iVar15 + 1);
            iVar15 = iVar28;
          }
          else {
LAB_140eb436e:
            uVar33 = (ulonglong)(-uVar13 & uVar13);
            uVar1 = uVar33 * 2 + 1;
            lVar29 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar29 == 0; lVar29 = lVar29 + -1) {
              }
            }
            iVar15 = (iVar24 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
            if (iVar28 <= iVar15) {
              iVar15 = iVar28;
            }
          }
          uVar22 = local_208;
        } while (iVar15 != iVar26);
      }
LAB_140eb43be:
      local_968 = local_928;
      local_9d8 = &local_958;
      local_958 = (code *)0x0;
      uStack_950._0_4_ = 0;
      local_938 = FUN_1446469aa;
      local_9e0 = 0;
      local_978 = param_1;
      pcStack_970 = param_1;
      local_960 = &local_208;
      local_930 = (code **)&local_978;
      FUN_1401f8d10(L"ParallelFor Task",uVar22,1,&local_938);
      local_978 = (code *)0x0;
      pcStack_970 = (code *)((ulonglong)pcStack_970 & 0xffffffff00000000);
      local_958 = FUN_144646b24;
      local_9e0 = 0;
      local_9d8 = (code **)&local_978;
      local_938 = param_1;
      local_930 = (code **)&local_208;
      uStack_950 = &local_938;
      FUN_1401f8d10(L"ParallelFor Task",local_f8 & 0xffffffff,1,&local_958);
      if (local_204 != '\0') {
        local_978 = (code *)0x0;
        pcStack_970 = (code *)((ulonglong)pcStack_970 & 0xffffffff00000000);
        local_958 = FUN_144646f36;
        local_9e0 = 0;
        local_9d8 = (code **)&local_978;
        local_938 = param_1;
        local_930 = (code **)&local_208;
        uStack_950 = &local_938;
        FUN_1401f8d10(L"ParallelFor Task",local_208,1);
      }
      if (local_228 != (code **)0x0) {
        FUN_1400020a8();
      }
      if (local_100 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_a08) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eb4670 FUN_140eb4670 body=31 status=ok
// SIG undefined FUN_140eb4670(void)

undefined8 FUN_140eb4670(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140eb469e FUN_140eb469e body=31 status=ok
// SIG undefined FUN_140eb469e(void)

undefined8 FUN_140eb469e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140eb46be FUN_140eb46be body=19 status=ok
// SIG undefined FUN_140eb46be(void)

bool FUN_140eb46be(void)

{
  int iVar1;
  
  iVar1 = FUN_140eb46d2();
  return iVar1 == 0;
}



// FUNCTION 140eb46d2 FUN_140eb46d2 body=220 status=ok
// SIG undefined FUN_140eb46d2(void)

ulonglong FUN_140eb46d2(double *param_1,longlong param_2)

{
  double dVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  double local_38 [6];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = 0;
  do {
    lVar4 = param_2 + 0x18;
    lVar5 = param_2;
    if (0.0 <= param_1[lVar3]) {
      lVar4 = param_2;
      lVar5 = param_2 + 0x18;
    }
    dVar1 = *(double *)(lVar5 + lVar3 * 8);
    local_38[lVar3 + 3] = *(double *)(lVar4 + lVar3 * 8);
    local_38[lVar3] = dVar1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  uVar2 = 0xffffffff;
  if (param_1[3] <= local_38[2] * param_1[2] + local_38[0] * *param_1 + local_38[1] * param_1[1]) {
    uVar2 = (ulonglong)
            (param_1[3] <
            param_1[2] * local_38[5] + *param_1 * local_38[3] + param_1[1] * local_38[4]);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb47b0 FUN_140eb47b0 body=104 status=ok
// SIG undefined FUN_140eb47b0(void)

ulonglong FUN_140eb47b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140eb47fb:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140eb47fb;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 140eb48b0 FUN_140eb48b0 body=106 status=ok
// SIG undefined FUN_140eb48b0(void)

void FUN_140eb48b0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x2c0);
  FUN_140eb491a(param_2);
  *param_2 = &PTR_FUN_14b602bd0;
  param_2[0x50] = 0;
  *(undefined2 *)(param_2 + 0x54) = 4;
  *(undefined4 *)(param_2 + 0x51) = 0;
  *(undefined1 *)(param_2 + 0x55) = 1;
  *(bool *)(param_2 + 0x56) = (DAT_14c9a8634 & 0x20) == 0;
  *(undefined1 *)(param_2 + 0x57) = 0;
  return;
}



// FUNCTION 140eb491a FUN_140eb491a body=463 status=ok
// SIG undefined FUN_140eb491a(void)

undefined8 * FUN_140eb491a(undefined8 *param_1)

{
  bool bVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *param_1 = &PTR_FUN_14b0d2f80;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x14) = 4;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(bool *)(param_1 + 0x16) = (DAT_14c9a8634 & 0x20) == 0;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(bool *)(param_1 + 0x1d) = (DAT_14c9a8634 & 0x20) == 0;
  param_1[0x1e] = 0;
  *(undefined2 *)(param_1 + 0x22) = 4;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(bool *)(param_1 + 0x24) = (DAT_14c9a8634 & 0x20) == 0;
  param_1[0x25] = 0;
  *(undefined2 *)(param_1 + 0x29) = 4;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  bVar1 = (DAT_14c9a8634 & 0x20) == 0;
  *(bool *)(param_1 + 0x2b) = bVar1;
  param_1[0x2c] = 0;
  *(undefined2 *)(param_1 + 0x30) = 4;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(bool *)(param_1 + 0x32) = bVar1;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined2 *)(param_1 + 0x3d) = 4;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  *(bool *)(param_1 + 0x3f) = bVar1;
  param_1[0x40] = 0;
  *(undefined2 *)(param_1 + 0x44) = 4;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x45) = 1;
  *(bool *)(param_1 + 0x46) = bVar1;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x47] = 0;
  *(undefined2 *)(param_1 + 0x4d) = 4;
  *(undefined4 *)(param_1 + 0x4a) = 1;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  *(bool *)(param_1 + 0x4f) = bVar1;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 140eb4aea FUN_140eb4aea body=324 status=ok
// SIG undefined FUN_140eb4aea(void)

undefined8 FUN_140eb4aea(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_140eb4c46(param_2);
  if (lVar1 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146431698;
      local_48 = &LAB_1486775cb;
      local_50 = &LAB_1464cee35;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
       (*(longlong *)(lVar1 + 0x13f8) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb4c46 FUN_140eb4c46 body=336 status=ok
// SIG undefined FUN_140eb4c46(void)

longlong FUN_140eb4c46(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((*(int *)(param_1 + 100) != 0) && (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 100))))) &&
     (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (lVar3 = *plVar2, lVar3 != 0)))) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_140eb4cd3;
  }
  lVar3 = 0;
LAB_140eb4cd3:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb4d9e FUN_140eb4d9e body=57 status=ok
// SIG undefined FUN_140eb4d9e(void)

void FUN_140eb4d9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a798 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a798 = FUN_140002ddd(FUN_1464cad10,uVar1,L"GbxBodyNodeState_RandomSwitch");
  }
  return;
}



// FUNCTION 140eb4de0 FUN_140eb4de0 body=401 status=ok
// SIG undefined FUN_140eb4de0(void)

undefined8 FUN_140eb4de0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  undefined1 local_28 [4];
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_2 == 0) {
    puVar5 = &DAT_14c9a1308;
  }
  else {
    puVar5 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb84418);
  }
  if (((byte *)*puVar5 != (byte *)0x0) &&
     (bVar3 = *(byte *)*puVar5, (bVar3 & 0x68) == 0 && (bVar3 & 3) != 0)) {
    if (*param_2 == 0) {
      puVar5 = &DAT_14c9a1308;
    }
    else {
      puVar5 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb84420);
    }
    if (((byte *)*puVar5 == (byte *)0x0) ||
       (bVar3 = *(byte *)*puVar5, (bVar3 & 3) == 0 || (bVar3 & 0x68) != 0)) {
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_24 = 0;
      if (*param_2 == 0) {
        puVar5 = &DAT_14c9a1308;
      }
      else {
        puVar5 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb84418);
      }
      FUN_140008118(&local_78,puVar5,local_28,&local_90);
      local_60 = local_78;
      local_58 = local_70;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      plStack_38 = (longlong *)0x0;
      local_30 = 0;
      FUN_1488d58d0(param_1 + 0x10,&local_60);
      plVar4 = plStack_38;
      if (plStack_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_38)(plStack_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 140eb4f72 FUN_140eb4f72 body=130 status=ok
// SIG undefined FUN_140eb4f72(void)

void FUN_140eb4f72(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x118) == 0) {
    cVar2 = FUN_140eb4ff4();
    if (cVar2 != '\0') {
      lVar1 = *(longlong *)(param_1 + 0xa8);
      lVar3 = FUN_1411aa7cb(lVar1);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(param_1 + 0x118) = lVar3;
      if (((lVar1 != 0) && ((*(byte *)(lVar1 + 99) & 8) != 0)) &&
         (*(longlong *)(param_1 + 0xa8) != 0)) {
        FUN_140fb79ba(*(longlong *)(param_1 + 0xa8),param_1,lVar3,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140eb4ff4 FUN_140eb4ff4 body=350 status=ok
// SIG undefined FUN_140eb4ff4(void)

undefined1 FUN_140eb4ff4(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0xa8);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x178) == '\x03') {
      return true;
    }
    if ((*(byte *)(lVar7 + 99) & 8) != 0) {
      iVar4 = FUN_14487fd02();
      return iVar4 != 3;
    }
    lVar7 = *(longlong *)(param_1 + 0x138);
    if (lVar7 == 0) {
      uVar5 = FUN_14043db3a();
      lVar7 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x138) = lVar7;
    }
    plVar1 = (longlong *)(param_1 + 0x130);
    lVar6 = *(longlong *)(param_1 + 0x140);
    if (lVar6 != 0) {
LAB_140eb50c5:
      if (lVar7 == 0) {
        uVar5 = FUN_14043db3a();
        lVar7 = FUN_14477b664(uVar5);
        *(longlong *)(param_1 + 0x138) = lVar7;
        lVar6 = *(longlong *)(param_1 + 0x140);
        if (((lVar6 == 0) && (lVar6 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
          plVar2 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            lVar6 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar5,plVar1);
          }
          *(longlong *)(param_1 + 0x140) = lVar6;
        }
      }
      return *(undefined1 *)(lVar6 + 0x19);
    }
    if ((*plVar1 != 0) && (lVar7 != 0)) {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x140) = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(param_1 + 0x140) = lVar6;
        if (lVar6 != 0) {
          lVar7 = *(longlong *)(param_1 + 0x138);
          goto LAB_140eb50c5;
        }
      }
    }
  }
  return false;
}



// FUNCTION 140eb5152 FUN_140eb5152 body=255 status=ok
// SIG undefined FUN_140eb5152(void)

void FUN_140eb5152(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0x680) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0x6a0) != *(int *)(param_1 + 0x6cc)) {
    FUN_140eb5252(param_1 + 0x698);
    FUN_140eb539c(param_1 + 0x698);
  }
  iVar1 = *(int *)(param_1 + 0x690);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x688);
    lVar2 = 0;
    do {
      *(undefined8 *)(lVar3 + 8 + lVar2) = 0;
      *(undefined8 *)(lVar3 + 0x10 + lVar2) = 0x47efffffe0000000;
      *(undefined8 *)(lVar3 + 0x18 + lVar2) = 0xb810000000000000;
      lVar2 = lVar2 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar2);
  }
  lVar3 = param_1 + 0xa8;
  if (*(longlong *)(param_1 + 0x628) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x628);
  }
  if ((longlong)*(int *)(param_1 + 0x630) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x630) * 0xb0;
    lVar3 = lVar3 + 0x60;
    do {
      if (*(int *)(lVar3 + 8) != *(int *)(lVar3 + 0x34)) {
        FUN_140eb5252(lVar3);
        FUN_140eb539c(lVar3);
      }
      *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar3 + -0x40);
      *(undefined4 *)(lVar3 + -0x20) = *(undefined4 *)(lVar3 + -0x50);
      *(undefined4 *)(lVar3 + -0x1c) = *(undefined4 *)(lVar3 + -0x4c);
      *(undefined4 *)(lVar3 + -0x18) = *(undefined4 *)(lVar3 + -0x48);
      *(undefined4 *)(lVar3 + -0x14) = *(undefined4 *)(lVar3 + -0x44);
      *(undefined4 *)(lVar3 + -0x38) = *(undefined4 *)(lVar3 + -0x50);
      *(undefined4 *)(lVar3 + -0x34) = *(undefined4 *)(lVar3 + -0x4c);
      *(undefined4 *)(lVar3 + -0x30) = *(undefined4 *)(lVar3 + -0x48);
      *(undefined4 *)(lVar3 + -0x2c) = *(undefined4 *)(lVar3 + -0x44);
      *(undefined8 *)(lVar3 + -0x28) = *(undefined8 *)(lVar3 + -0x40);
      lVar3 = lVar3 + 0xb0;
      lVar2 = lVar2 + -0xb0;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 140eb5252 FUN_140eb5252 body=329 status=ok
// SIG undefined FUN_140eb5252(void)

void FUN_140eb5252(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eb539c FUN_140eb539c body=579 status=ok
// SIG undefined FUN_140eb539c(void)

void FUN_140eb539c(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar12 = 0;
    uVar10 = 1;
    iVar3 = 0;
    iVar8 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 2);
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar10 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar10 = uVar12;
      }
      iVar8 = 0;
      do {
        if (uVar10 == uVar12) goto LAB_140eb5549;
        iVar8 = iVar8 + 0x20;
        uVar11 = puVar7[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar12 = 0;
      iVar8 = 0;
    }
    uVar10 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar3 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      lVar13 = *param_1;
      lVar9 = (longlong)iVar3 * 0x60;
      *(undefined4 *)(lVar13 + 0x50 + lVar9) = 0;
      if (*(longlong *)(lVar13 + 0x48 + lVar9) != 0) {
        FUN_1400020a8();
      }
      lVar13 = lVar13 + lVar9;
      *(undefined4 *)(lVar13 + 0x10) = 0;
      if (*(int *)(lVar13 + 0x14) != 0) {
        FUN_14472eb64((longlong *)(lVar13 + 8),0);
      }
      *(undefined8 *)(lVar13 + 0x38) = 0xffffffff;
      *(undefined4 *)(lVar13 + 0x30) = 0;
      if (0x80 < *(uint *)(lVar13 + 0x34)) {
        *(undefined4 *)(lVar13 + 0x34) = 0x80;
        FUN_1446efbd8(lVar13 + 0x18,0);
      }
      if (*(longlong *)(lVar13 + 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar13 + 8) != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar10;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 2);
      }
      iVar2 = (int)param_1[5];
      iVar3 = (int)uVar12;
      lVar13 = (longlong)iVar3;
      uVar4 = puVar7[lVar13] & uVar11;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) break;
        lVar9 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar4 = puVar7[lVar13 + lVar9 + 1];
          if (uVar4 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar6 - lVar13 == lVar9) goto LAB_140eb5549;
        }
        uVar12 = (ulonglong)(iVar3 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar3 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
LAB_140eb5549:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 140eb55e0 FUN_140eb55e0 body=1963 status=ok
// SIG undefined FUN_140eb55e0(void)

ulonglong FUN_140eb55e0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_58 [40];
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3906c);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  iVar8 = FUN_1448332aa(param_2,&DAT_149e3906c);
  if ((iVar8 < 0xc) && (iVar8 = FUN_1448332aa(param_2,&DAT_149e3cbb8), iVar8 < 0x35)) {
    uVar11 = 0;
    goto LAB_140eb5904;
  }
  iVar8 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  puVar4 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_3 + 0x50),1);
  }
  else {
    *(undefined1 *)(param_3 + 0x50) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar4 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_3 + 0x51),1);
  }
  else {
    *(undefined1 *)(param_3 + 0x51) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      local_2c = 4;
      puVar5 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_2c);
        }
      }
      else {
        local_2c = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(param_3 + 0x60) << 2,
                 (longlong)*(int *)(param_3 + 100) << 2);
      local_30 = *(uint *)(param_3 + 0x60);
      puVar5 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_30);
        }
      }
      else {
        local_30 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      if (0 < (int)local_30) {
        (**(code **)(*param_2 + 0x170))
                  (param_2,*(undefined8 *)(param_3 + 0x58),
                   (longlong)(int)local_30 * (longlong)(int)local_2c);
      }
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(param_3 + 0x70) * 0x1c,
                 (longlong)*(int *)(param_3 + 0x74) * 0x1c);
      local_2c = 0x1c;
      puVar5 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_2c);
        }
      }
      else {
        local_2c = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      local_30 = *(uint *)(param_3 + 0x70);
      puVar5 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_30);
        }
      }
      else {
        local_30 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      if (0 < (int)local_30) {
        lVar12 = (longlong)(int)local_30 * (longlong)(int)local_2c;
        uVar9 = *(undefined8 *)(param_3 + 0x68);
LAB_140eb583f:
        (**(code **)(*param_2 + 0x170))(param_2,uVar9,lVar12);
      }
    }
  }
  else {
    local_2c = 0;
    puVar5 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar1;
    }
    if ((local_2c == 4) && ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0)) {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(param_3 + 0x60) << 2,
                 (longlong)*(int *)(param_3 + 100) << 2);
      local_30 = 0;
      puVar5 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_30);
        }
      }
      else {
        local_30 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      if ((int)local_30 < 0) goto LAB_140eb5949;
      puVar2 = (undefined8 *)(param_3 + 0x58);
      *(undefined4 *)(param_3 + 0x60) = 0;
      if (*(uint *)(param_3 + 100) != local_30) {
        FUN_140aba11c(puVar2);
      }
      if (0 < (int)local_30) {
        iVar3 = *(int *)(param_3 + 0x60);
        *(uint *)(param_3 + 0x60) = iVar3 + local_30;
        if ((uint)(*(int *)(param_3 + 100) - iVar3) < local_30) {
          FUN_14753e8f2(puVar2,iVar3);
        }
        (**(code **)(*param_2 + 0x170))
                  (param_2,*puVar2,(longlong)(int)local_30 * (longlong)(int)local_2c);
      }
    }
    else {
      FUN_14753ef10(param_2,param_3 + 0x58);
    }
    puVar5 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar1;
    }
    if ((local_2c == 0x1c) && ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0)) {
      (**(code **)(*param_2 + 0x10))
                (param_2,(longlong)*(int *)(param_3 + 0x70) * 0x1c,
                 (longlong)*(int *)(param_3 + 0x74) * 0x1c);
      local_30 = 0;
      puVar5 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar5 + 1;
      if ((uint *)puVar5[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_30);
        }
      }
      else {
        local_30 = *(uint *)*puVar5;
        *puVar5 = (ulonglong)puVar1;
      }
      if ((int)local_30 < 0) {
LAB_140eb5949:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_30);
      }
      puVar2 = (undefined8 *)(param_3 + 0x68);
      *(undefined4 *)(param_3 + 0x70) = 0;
      if (*(uint *)(param_3 + 0x74) != local_30) {
        FUN_140eb5d8c(puVar2);
      }
      if (0 < (int)local_30) {
        iVar3 = *(int *)(param_3 + 0x70);
        *(uint *)(param_3 + 0x70) = iVar3 + local_30;
        if ((uint)(*(int *)(param_3 + 0x74) - iVar3) < local_30) {
          FUN_14753f2b0(puVar2,iVar3);
        }
        lVar12 = (longlong)(int)local_30 * (longlong)(int)local_2c;
        uVar9 = *puVar2;
        goto LAB_140eb583f;
      }
    }
    else {
      FUN_14753f0c8(param_2,param_3 + 0x68);
    }
  }
  puVar6 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_3 + 0x78),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x78) = *puVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar7 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar7 + 1) {
    local_2c = (uint)*(byte *)(param_3 + 0x7c);
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_3 + 0x7c) = local_2c != 0;
  }
  else {
    *(bool *)(param_3 + 0x7c) = *piVar7 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar6 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_3 + 0x108),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_3 + 0x108) = *puVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar10 = (undefined4 *)(param_3 + 0x10c);
  puVar6 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar10,4);
    }
    else {
      thunk_FUN_14572512c(param_2,puVar10);
    }
  }
  else {
    *puVar10 = *puVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
  if (0x34 < iVar8) {
    puVar5 = (ulonglong *)param_2[1];
    if (puVar5[1] < *puVar5 + 4) {
      local_2c = 0;
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      if (1 < local_2c) {
        FUN_14572541c(param_2);
      }
    }
    else {
      *puVar5 = *puVar5 + 4;
    }
  }
LAB_140eb5904:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 140eb5d8c FUN_140eb5d8c body=338 status=ok
// SIG undefined FUN_140eb5d8c(void)

void FUN_140eb5d8c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x1c;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140eb5dfd;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_140eb5dfd:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x1c)) {
      uVar5 = uVar3 / 0x1c & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x1c,4);
  }
  return;
}



// FUNCTION 140eb5ede FUN_140eb5ede body=800 status=ok
// SIG undefined FUN_140eb5ede(void)

void FUN_140eb5ede(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_20 = 0;
  uStack_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_20 = (undefined4)uVar2;
      uStack_1c = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_20);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (int)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140eb6200(param_1,CONCAT44(uStack_1c,uStack_20),local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb6200 FUN_140eb6200 body=68 status=ok
// SIG undefined FUN_140eb6200(void)

void FUN_140eb6200(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x70);
    lVar2 = (longlong)*(int *)(param_1 + 0x78) * 0x28;
    do {
      if ((longlong *)*plVar1 == (longlong *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)*plVar1;
      }
      if (lVar3 == param_2) {
        if (plVar1 == (longlong *)0x0) {
          return;
        }
        FUN_1409d1d6a(param_1,plVar1);
        return;
      }
      plVar1 = plVar1 + 5;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 140eb6244 FUN_140eb6244 body=253 status=ok
// SIG undefined FUN_140eb6244(void)

void FUN_140eb6244(longlong param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_2 == '\x01') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4))) {
    lVar1 = *param_3;
    lVar3 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40) == lVar1) {
          if ((lVar3 != 0) && (lVar3 + 8 != 0)) {
            local_20 = *(undefined8 *)(param_2 + 8);
            local_18 = *(undefined4 *)(param_2 + 0x10);
            FUN_140eb6350(lVar3 + 8,&DAT_14ca85100);
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x38);
      } while (iVar2 != -1);
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eb6350 FUN_140eb6350 body=1925 status=ok
// SIG undefined FUN_140eb6350(void)

void FUN_140eb6350(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  void *_Dst;
  longlong *plVar10;
  byte bVar11;
  undefined *puVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar14 = *(int *)((longlong)param_1 + 0x24);
  if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_3 + 1)) {
    iVar14 = *(int *)(param_3 + 1);
  }
  if (iVar14 == (int)param_1[5]) goto LAB_140eb6850;
  FUN_140931b9a(param_1);
  *(int *)(param_1 + 5) = iVar14;
  *(int *)(param_1 + 4) = iVar14 * 0x10 + 0x10;
  bVar16 = *(int *)((longlong)param_1 + 0x2c) != -1;
  bVar11 = 0xd;
  if (!bVar16) {
    bVar11 = 1;
  }
  puVar12 = &DAT_14c873680;
  if (!bVar16) {
    puVar12 = &DAT_14c873440;
  }
  uVar15 = 0x400;
  if (!bVar16) {
    uVar15 = 0x10;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"NiagaraDataInterfaceArray";
  local_60 = 0;
  uStack_58 = 0;
  iVar14 = iVar14 * 0x10 + 0x10;
  local_a8 = (undefined8 *)CONCAT44(*(undefined4 *)(puVar12 + 0x18),iVar14);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)bVar16 * 8 + 0x4121);
  if (iVar14 == 0) {
    FUN_14570b4be(param_2,&local_98);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar15);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar15;
    FUN_14002049c(param_2,0);
  }
  else {
    local_d0 = &local_98;
    local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,uVar15);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_2,&local_a8);
    *(undefined4 *)(local_b0 + 0x18) = uVar15;
  }
  lVar13 = local_b0;
  plVar10 = param_1 + 1;
  if (plVar10 == &local_b0) {
LAB_140eb656e:
    lVar13 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar2 = (uint *)(local_b0 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_b0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar13;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar16) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
    lVar13 = *plVar10;
  }
  else {
    lVar6 = *plVar10;
    *plVar10 = local_b0;
    local_b0 = 0;
    if (lVar6 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar6 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar6 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar6 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar6;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar16) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
      goto LAB_140eb656e;
    }
  }
  if ((lVar13 == 0) || ((*(byte *)(lVar13 + 0x28) & 0x10) == 0)) {
    local_a8._0_2_ = (ushort)bVar11 << 8;
    local_a8._0_3_ = CONCAT12(1,(short)local_a8);
  }
  else {
    local_a8._0_3_ = 0x40000;
  }
  local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
  uStack_a0 = 0;
  local_d8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,param_2);
  plVar9 = param_1 + 3;
  if (plVar9 == &local_b0) {
LAB_140eb66a7:
    lVar13 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar2 = (uint *)(local_b0 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(local_b0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar13;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar16) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
  }
  else {
    lVar13 = *plVar9;
    *plVar9 = local_b0;
    local_b0 = 0;
    if (lVar13 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar13 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar13 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar13 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar13;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar16) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
      goto LAB_140eb66a7;
    }
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
      local_a8._0_2_ = CONCAT11(bVar11,1);
      local_a8._0_3_ = CONCAT12(1,(short)local_a8);
    }
    else {
      local_a8._0_3_ = 0x40001;
    }
    local_a8 = (undefined8 *)(ulonglong)(uint3)local_a8;
    uStack_a0 = 0;
    local_d8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2);
    plVar10 = param_1 + 2;
    if (plVar10 != &local_b0) {
      lVar13 = *plVar10;
      *plVar10 = local_b0;
      local_b0 = 0;
      if (lVar13 == 0) goto LAB_140eb6850;
      LOCK();
      puVar2 = (uint *)(lVar13 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar13 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar11 = *(byte *)(lVar13 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar13;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar11 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar16 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar16) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar16) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
    lVar13 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar2 = (uint *)(local_b0 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_b0 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar11 = *(byte *)(local_b0 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar13;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar11 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar16 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar16) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar16 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar16) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
  }
LAB_140eb6850:
  lVar6 = param_1[4];
  lVar13 = param_1[1];
  cVar5 = *(char *)(param_2 + 0x69);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_d8 = (undefined8 *)CONCAT44(local_d8._4_4_,(int)lVar6);
  local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar13,0);
  if (cVar5 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (0 < (longlong)*(int *)(param_3 + 1)) {
    memcpy(_Dst,(void *)*param_3,(longlong)*(int *)(param_3 + 1) << 4);
  }
  puVar1 = (undefined4 *)((longlong)_Dst + (longlong)(int)param_1[5] * 0x10);
  *puVar1 = 0x3f800000;
  puVar1[1] = 0x3f800000;
  puVar1[2] = 0x3f800000;
  puVar1[3] = 0x3f800000;
  lVar13 = param_1[1];
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar13);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar13);
  }
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    lVar13 = *param_1;
    local_b0 = CONCAT44(*(undefined4 *)(param_3 + 1),*(int *)((longlong)param_1 + 0x2c));
    local_98 = 0xffffffffffffffff;
    uStack_90._0_4_ = 0xffffffff;
    local_88 = (undefined4)*(undefined8 *)(lVar13 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x60) >> 0x20);
    uStack_80._0_1_ = 3;
    uStack_7c = 0x400000000f0;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0._0_4_ = 1;
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
    local_b8 = 1;
    local_c0 = &local_b0;
    FUN_1438f931f(param_2,*(undefined8 *)(lVar13 + 0x60));
    local_98 = 0xffffffffffffffff;
    uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
    local_88 = (undefined4)*(undefined8 *)(lVar13 + 0x60);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(lVar13 + 0x60) >> 0x20);
    uStack_80 = CONCAT31(uStack_80._1_3_,3);
    uStack_7c = 0xf000000400;
    local_74 = 0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffffffffff00);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,1);
    local_a8 = &local_98;
    FUN_144760590(param_2,&local_a8,0);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eb6ad6 FUN_140eb6ad6 body=1602 status=ok
// SIG undefined FUN_140eb6ad6(void)

undefined8 * FUN_140eb6ad6(undefined8 *param_1,undefined4 *param_2,longlong *param_3)

{
  void *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  float *pfVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 *puVar23;
  longlong lVar24;
  longlong lVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  undefined4 *local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  undefined8 *local_198;
  ulonglong local_190;
  longlong local_188;
  undefined4 local_180;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  code *local_158;
  longlong *local_148;
  longlong local_138 [4];
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  longlong local_100;
  uint uStack_f8;
  undefined4 uStack_f4;
  code *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  puVar13 = (undefined4 *)FUN_14001cc68(0xc0,0x10);
  iVar11 = 0;
  *(undefined8 *)(puVar13 + 0x1a) = 0;
  puVar13[0x1c] = 0;
  *(undefined8 *)(puVar13 + 0x20) = 0;
  *(undefined8 *)(puVar13 + 0x24) = 0;
  *(undefined8 *)(puVar13 + 0xe) = 0;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  *(undefined8 *)(puVar13 + 0x14) = 0;
  *(undefined8 *)(puVar13 + 0x16) = 0;
  *(undefined1 *)(puVar13 + 0x18) = 0;
  *(undefined8 *)(puVar13 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar27 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar15 = *(undefined8 *)(param_2 + 4);
  uVar4 = *(undefined8 *)(param_2 + 6);
  uVar5 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(puVar13 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(puVar13 + 10) = uVar5;
  *(undefined8 *)(puVar13 + 4) = uVar15;
  *(undefined8 *)(puVar13 + 6) = uVar4;
  *puVar13 = uVar27;
  puVar13[1] = uVar1;
  puVar13[2] = uVar2;
  puVar13[3] = uVar3;
  puVar23 = puVar13;
  if (*(char *)(param_2 + 1) != '\x01') goto LAB_140eb6b6f;
  local_1b0 = puVar13;
  local_198 = param_1;
  if ((longlong)(int)param_3[1] == 0) {
    plVar18 = (longlong *)0x0;
  }
  else {
    local_1b8 = (longlong *)(puVar13 + 0xe);
    lVar19 = *param_3;
    local_1a8 = (longlong)(int)param_3[1] * 0xa0;
    uVar21 = 0;
    do {
      iVar11 = local_1b0[0x10];
      local_1b0[0x10] = iVar11 + 1U;
      if ((uint)local_1b0[0x11] < iVar11 + 1U) {
        FUN_140eb711a(local_1b8,iVar11);
      }
      lVar24 = *local_1b8;
      lVar25 = (longlong)iVar11 * 0x10;
      puVar14 = (undefined8 *)(lVar24 + lVar25);
      *(undefined8 *)(lVar24 + lVar25) = 0;
      iVar11 = *(int *)(lVar19 + 8 + uVar21);
      _Src = *(void **)(lVar19 + uVar21);
      *(int *)(lVar24 + 8 + lVar25) = iVar11;
      if ((longlong)iVar11 == 0) {
        *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
      }
      else {
        FUN_1447c510a(puVar14,iVar11,0);
        memcpy((void *)*puVar14,_Src,(longlong)iVar11 << 2);
      }
      uVar21 = uVar21 + 0xa0;
    } while (local_1a8 != uVar21);
    plVar18 = *(longlong **)(local_1b0 + 0xe);
    iVar11 = local_1b0[0x10];
  }
  if (*(char *)((longlong)param_2 + 0xf) == '\x01') {
    local_108 = 0;
    uStack_110 = 0x3ff0000000000000;
LAB_140eb6ce0:
    local_118 = 0;
  }
  else {
    local_108 = 0x3ff0000000000000;
    if (*(char *)((longlong)param_2 + 0xf) == '\x02') {
      uStack_110 = 0;
      goto LAB_140eb6ce0;
    }
    local_118 = 0x3ff0000000000000;
    uStack_110 = 0;
    local_108 = 0;
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    if (iVar11 == 0) {
      fVar28 = NAN;
    }
    else {
      local_1b8 = plVar18 + (longlong)iVar11 * 2;
      lVar19 = 0;
      fVar28 = 0.0;
      iVar20 = 0;
      plVar17 = plVar18;
      do {
        lVar24 = 0;
        do {
          if (lVar19 != lVar24) {
            fVar26 = (float)FUN_1405f4a21(plVar17,(longlong)plVar18 + lVar24,
                                          *(undefined1 *)((longlong)param_2 + 0xe),&local_118);
            fVar28 = fVar28 + fVar26;
            iVar20 = iVar20 + 1;
          }
          lVar24 = lVar24 + 0x10;
        } while ((longlong)iVar11 * 0x10 != lVar24);
        plVar17 = plVar17 + 2;
        lVar19 = lVar19 + 0x10;
      } while (plVar17 != local_1b8);
      fVar28 = fVar28 / (float)iVar20;
    }
  }
  else {
    fVar28 = (float)param_2[2] * 0.017453292;
  }
  puVar23 = local_1b0;
  local_160 = local_108;
  local_170 = (undefined4)local_118;
  uStack_16c = local_118._4_4_;
  uStack_168 = (undefined4)uStack_110;
  uStack_164 = uStack_110._4_4_;
  local_158 = (code *)0x0;
  local_148 = (longlong *)FUN_14001cc68(0x30);
  *local_148 = (longlong)&PTR_FUN_14a44d610;
  pfVar16 = (float *)(local_148 + 1);
  *pfVar16 = fVar28;
  *(undefined4 *)(local_148 + 3) = uStack_168;
  *(undefined4 *)((longlong)local_148 + 0x1c) = uStack_164;
  *(undefined4 *)(local_148 + 4) = (undefined4)local_160;
  *(undefined4 *)((longlong)local_148 + 0x24) = local_160._4_4_;
  *(ulonglong *)((longlong)local_148 + 0xc) = CONCAT44(local_170,uStack_174);
  *(ulonglong *)((longlong)local_148 + 0x14) = CONCAT44(uStack_168,uStack_16c);
  local_148[5] = (longlong)param_2;
  if (pfVar16 == (float *)0x0) {
    local_e8 = (code *)0x0;
  }
  else {
    local_e8 = FUN_1432b3e52;
    local_158 = FUN_1432b3e52;
  }
  local_118 = 0;
  uStack_110 = 0;
  local_108 = local_108 & 0xffffffffffffff00;
  local_100 = *(longlong *)(puVar23 + 0xe);
  uStack_f8 = puVar23[0x10];
  local_d8 = (longlong *)0x0;
  if (pfVar16 != (float *)0x0) {
    plVar18 = local_138;
    if (local_148 != (longlong *)0x0) {
      plVar18 = local_148;
    }
    (**(code **)*plVar18)(0,&local_d8);
  }
  uVar21 = (ulonglong)uStack_f8;
  if ((int)uStack_f8 < 2) {
    local_108 = CONCAT71(local_108._1_7_,1);
  }
  else {
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_140eb7228(&local_a8,(uStack_f8 - 1) * uStack_f8 >> 1);
    plVar18 = (longlong *)0x0;
    uVar22 = 0;
    local_1a0 = uVar21;
    local_190 = uVar21;
    do {
      local_1b8 = plVar18;
      local_1a8 = uVar21;
      do {
        pcVar6 = local_e8;
        lVar19 = local_100 + (longlong)plVar18;
        lVar24 = local_100 + uVar22 * 0x10;
        plVar17 = local_d8;
        if (local_d8 == (longlong *)0x0) {
          plVar17 = (longlong *)&local_c8;
        }
        uVar15 = (**(code **)(*plVar17 + 8))();
        uVar27 = (*pcVar6)(uVar15,lVar24,lVar19);
        uVar7 = uStack_a0;
        lVar19 = (longlong)(int)uStack_a0;
        uVar12 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar12);
        if (uStack_a0._4_4_ < uVar12) {
          FUN_14481013a(&local_a8,uVar7 & 0xffffffff);
        }
        *(undefined4 *)(local_a8 + lVar19 * 4) = uVar27;
        plVar18 = plVar18 + 2;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      uVar22 = uVar22 + 1;
      uVar21 = local_1a8 - 1;
      plVar18 = local_1b8 + 2;
    } while (uVar22 != local_190);
    local_188 = local_a8;
    local_180 = (int)uStack_a0;
    uVar10 = FUN_140eb73ae(&local_118,&local_188,local_1a0);
    local_108 = CONCAT71(local_108._1_7_,uVar10);
  }
  if (local_158 != (code *)0x0) {
    plVar18 = local_148;
    if (local_148 == (longlong *)0x0) {
      plVar18 = local_138;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (*(longlong *)(puVar13 + 0x14) != 0) {
    FUN_1400020a8();
  }
  puVar23 = local_1b0;
  *(longlong *)(local_1b0 + 0x14) = local_118;
  local_118 = 0;
  local_1b0[0x16] = (undefined4)uStack_110;
  local_1b0[0x17] = uStack_110._4_4_;
  uStack_110 = 0;
  *(undefined1 *)(local_1b0 + 0x18) = (undefined1)local_108;
  *(longlong *)(puVar13 + 0x1a) = local_100;
  *(ulonglong *)(puVar13 + 0x1c) = CONCAT44(uStack_f4,uStack_f8);
  local_a8 = *(longlong *)(puVar13 + 0x20);
  uStack_a0 = *(ulonglong *)(puVar13 + 0x22);
  local_98 = *(longlong **)(puVar13 + 0x24);
  uStack_90 = *(undefined8 *)(puVar13 + 0x26);
  local_88 = *(undefined8 *)(puVar13 + 0x28);
  uStack_80 = *(undefined8 *)(puVar13 + 0x2a);
  local_78 = *(undefined8 *)(puVar13 + 0x2c);
  uStack_70 = *(undefined8 *)(puVar13 + 0x2e);
  uVar8 = local_78;
  uVar9 = uStack_70;
  uVar4 = local_88;
  uVar5 = uStack_80;
  uVar15 = uStack_90;
  uVar21 = uStack_a0;
  *(ulonglong *)(puVar13 + 0x2c) = CONCAT44(uStack_b4,local_b8);
  *(ulonglong *)(puVar13 + 0x2e) = CONCAT44(uStack_ac,uStack_b0);
  *(ulonglong *)(puVar13 + 0x28) = CONCAT44(uStack_c4,local_c8);
  *(ulonglong *)(puVar13 + 0x2a) = CONCAT44(uStack_bc,uStack_c0);
  *(longlong **)(puVar13 + 0x24) = local_d8;
  *(ulonglong *)(puVar13 + 0x26) = CONCAT44(uStack_cc,uStack_d0);
  *(code **)(puVar13 + 0x20) = local_e8;
  *(ulonglong *)(puVar13 + 0x22) = CONCAT44(uStack_dc,uStack_e0);
  uStack_a0._4_4_ = (uint)(uStack_a0 >> 0x20);
  uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_b8 = (undefined4)local_78;
  uStack_b4 = local_78._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  local_c8 = (undefined4)local_88;
  uStack_c4 = local_88._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_d8 = local_98;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  local_e8 = (code *)local_a8;
  uStack_e0 = (int)uStack_a0;
  uStack_dc = uStack_a0._4_4_;
  param_1 = local_198;
  uStack_a0 = uVar21;
  uStack_90 = uVar15;
  local_88 = uVar4;
  uStack_80 = uVar5;
  local_78 = uVar8;
  uStack_70 = uVar9;
  if (local_a8 != 0) {
    plVar18 = local_d8;
    if (local_98 == (longlong *)0x0) {
      plVar18 = (longlong *)&local_c8;
    }
    (**(code **)(*plVar18 + 0x10))();
    param_1 = local_198;
    if (local_118 != 0) {
      FUN_1400020a8();
      param_1 = local_198;
    }
  }
LAB_140eb6b6f:
  *param_1 = puVar23;
  puVar14 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar14[1] = &DAT_100000001;
  *puVar14 = &PTR_FUN_14a44d630;
  puVar14[2] = puVar23;
  param_1[1] = puVar14;
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140eb711a FUN_140eb711a body=269 status=ok
// SIG undefined FUN_140eb711a(void)

void FUN_140eb711a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140eb7228 FUN_140eb7228 body=388 status=ok
// SIG undefined FUN_140eb7228(void)

void FUN_140eb7228(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  void *_Src;
  DWORD DVar3;
  uint uVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  int local_50;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    *(int *)((longlong)param_1 + 0xc) = param_2;
    if (param_2 != 0) {
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_146815189(param_2,4);
      }
      local_50 = *(int *)(param_1 + 1);
      _Src = (void *)*param_1;
      dwTlsIndex = DAT_14c7585d0;
      if (DAT_14c7585d0 == 0xffffffff) {
        dwTlsIndex = TlsAlloc();
        DVar5 = 0xffffffff;
        LOCK();
        bVar10 = DAT_14c7585d0 != 0xffffffff;
        DVar3 = dwTlsIndex;
        if (bVar10) {
          DVar5 = DAT_14c7585d0;
          DVar3 = DAT_14c7585d0;
        }
        DAT_14c7585d0 = DVar3;
        UNLOCK();
        if (bVar10) {
          TlsFree(dwTlsIndex);
          dwTlsIndex = DVar5;
        }
      }
      lpTlsValue = TlsGetValue(dwTlsIndex);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(dwTlsIndex,lpTlsValue);
      }
      puVar1 = (ulonglong *)((longlong)lpTlsValue + 0x10);
      uVar4 = param_2 * 4;
      uVar7 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
      uVar6 = (uint)(uVar4 >= 0x10) * 8;
      lVar2 = (ulonglong)uVar6 + 7;
      _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar2 & uVar7);
      uVar9 = (longlong)_Dst + (longlong)(int)uVar4;
      if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar9) {
        FUN_140023dd8(puVar1,uVar6 + 8 + uVar4);
        _Dst = (void *)(lVar2 + *puVar1 & uVar7);
        uVar9 = (longlong)(int)uVar4 + (longlong)_Dst;
      }
      *puVar1 = uVar9;
      *param_1 = _Dst;
      if (local_50 != 0 && _Src != (void *)0x0) {
        iVar8 = local_50;
        if (param_2 < local_50) {
          iVar8 = param_2;
        }
        memcpy(_Dst,_Src,(longlong)iVar8 << 2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eb73ae FUN_140eb73ae body=1598 status=ok
// SIG undefined FUN_140eb73ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140eb73ae(longlong ****param_1,longlong *param_2,uint param_3)

{
  longlong ***ppplVar1;
  undefined1 auVar2 [16];
  longlong ***ppplVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  float *pfVar10;
  int iVar11;
  longlong ****pppplVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined1 auVar16 [16];
  longlong lVar17;
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined1 auStack_1d8 [32];
  longlong **local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined1 *local_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong **local_178 [3];
  undefined8 local_160;
  undefined8 local_150;
  undefined8 local_138;
  longlong ***local_130;
  longlong ***local_128;
  longlong local_120;
  undefined8 local_110;
  char local_fc;
  undefined1 local_f8 [16];
  longlong local_e8;
  longlong local_e0;
  longlong ***local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar7 = (longlong)(int)param_3;
  local_198 = 0;
  lStack_190 = 0;
  local_188 = 0;
  if (param_3 != 0) {
    if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar7),0) < lVar7) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    FUN_140eb7caa(&local_198,lVar7 * lVar7,lVar7);
    if (0 < local_188) {
      lVar5 = 0;
      lVar4 = local_198;
      do {
        if (0 < lStack_190) {
          lVar8 = 0;
          do {
            in_XMM1 = ZEXT816(0x3f800000);
            if (lVar5 != lVar8) {
              in_XMM1 = ZEXT816(0);
            }
            *(int *)(lVar4 + lVar8 * 4) = in_XMM1._0_4_;
            lVar8 = lVar8 + 1;
          } while (lVar8 < lStack_190);
        }
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + lStack_190 * 4;
      } while (lVar5 < local_188);
    }
    if (0 < (int)param_3) {
      lVar4 = 0;
      uVar9 = 0;
      iVar11 = 0;
      uVar6 = (ulonglong)param_3;
      do {
        lVar5 = (longlong)iVar11;
        uVar13 = uVar9;
        do {
          uVar24 = *(undefined4 *)(*param_2 + lVar5 * 4);
          *(undefined4 *)(lStack_190 * lVar4 + local_198 + uVar13 * 4) = uVar24;
          lVar5 = lVar5 + 1;
          *(undefined4 *)(lStack_190 * uVar13 * 4 + local_198 + uVar9 * 4) = uVar24;
          uVar13 = uVar13 + 1;
        } while (param_3 != (uint)uVar13);
        iVar11 = iVar11 + (int)uVar6;
        uVar9 = uVar9 + 1;
        uVar6 = (ulonglong)((int)uVar6 - 1);
        lVar4 = lVar4 + 4;
      } while (uVar9 != param_3);
    }
  }
  local_138._0_4_ = 0;
  FUN_1448158c6(param_1,&local_138,param_3 * param_3);
  ppplVar1 = *param_1;
  if (lStack_190 == 0) {
    fVar15 = 1.0;
  }
  else {
    param_1 = (longlong ****)&local_138;
    FUN_140eb79ee(param_1,&local_198);
    pppplVar12 = (longlong ****)local_128;
    if ((longlong)local_130 <= (longlong)local_128) {
      pppplVar12 = (longlong ****)local_130;
    }
    if (pppplVar12 == (longlong ****)0x0) {
      fVar15 = 1.0;
    }
    else {
      fVar15 = *(float *)CONCAT44(local_138._4_4_,(undefined4)local_138);
      if (1 < (longlong)pppplVar12) {
        lVar4 = (longlong)pppplVar12 + -1;
        pfVar10 = (float *)CONCAT44(local_138._4_4_,(undefined4)local_138) + (longlong)local_130 + 1
        ;
        do {
          fVar15 = fVar15 * *pfVar10;
          pfVar10 = pfVar10 + (longlong)local_130 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    fVar15 = (float)(int)local_fc * fVar15;
    FUN_1400020a8(local_110);
    FUN_1400020a8(local_120);
    FUN_1400020a8(CONCAT44(local_138._4_4_,(undefined4)local_138));
  }
  if (ABS(fVar15) <= 1e-08) goto LAB_140eb7939;
  param_1 = (longlong ****)local_178;
  FUN_140eb79ee(param_1,&local_198);
  FUN_140eb81b4(&local_138,param_1);
  ppplVar3 = local_130;
  auVar2 = _DAT_149931e80;
  if ((longlong)local_128 < 1) {
    if ((longlong ****)local_128 != (longlong ****)0x0) goto LAB_140eb7798;
  }
  else {
    lVar4 = lVar7 + -1;
    auVar16._8_4_ = (int)lVar4;
    auVar16._0_8_ = lVar4;
    auVar16._12_4_ = (int)((ulonglong)lVar4 >> 0x20);
    pppplVar12 = (longlong ****)0x0;
    auVar18 = pmovsxbq(in_XMM1,0x302);
    auVar19 = pmovsxbq(in_XMM2,0x100);
    auVar16 = auVar16 ^ _DAT_149931e80;
    lVar4 = auVar16._0_8_;
    auVar20 = pmovsxbq(unaff_XMM8,0x404);
    do {
      if (0 < (int)param_3) {
        puVar14 = (undefined4 *)
                  ((longlong)ppplVar1 + (longlong)*(int *)(local_120 + (longlong)pppplVar12 * 4) * 4
                  );
        lVar5 = 0;
        auVar21 = auVar19;
        auVar22 = auVar18;
        do {
          lVar8 = (longlong)pppplVar12 + lVar5;
          auVar23 = auVar21 ^ auVar2;
          lVar17 = auVar16._8_8_;
          if ((bool)(~(lVar4 < auVar23._0_8_) & 1)) {
            uVar24 = 0x3f800000;
            if (lVar8 != 0) {
              uVar24 = 0;
            }
            *puVar14 = uVar24;
          }
          if (auVar23._8_8_ <= lVar17) {
            uVar24 = 0x3f800000;
            if (lVar8 != 1) {
              uVar24 = 0;
            }
            puVar14[lVar7] = uVar24;
          }
          auVar23 = auVar22 ^ auVar2;
          if (auVar23._0_8_ <= lVar4) {
            uVar24 = 0x3f800000;
            if (lVar8 != 2) {
              uVar24 = 0;
            }
            puVar14[lVar7 * 2] = uVar24;
          }
          if (auVar23._8_8_ <= lVar17) {
            uVar24 = 0x3f800000;
            if (lVar8 != 3) {
              uVar24 = 0;
            }
            puVar14[lVar7 * 3] = uVar24;
          }
          lVar8 = auVar21._8_8_;
          auVar21._0_8_ = auVar21._0_8_ + auVar20._0_8_;
          auVar21._8_8_ = lVar8 + auVar20._8_8_;
          lVar8 = auVar22._8_8_;
          auVar22._0_8_ = auVar22._0_8_ + auVar20._0_8_;
          auVar22._8_8_ = lVar8 + auVar20._8_8_;
          puVar14 = puVar14 + lVar7 * 4;
          lVar5 = lVar5 + -4;
        } while (-lVar5 != (ulonglong)(param_3 + 3 & 0xfffffffc));
      }
      pppplVar12 = (longlong ****)((longlong)pppplVar12 + 1);
    } while (pppplVar12 != (longlong ****)local_128);
LAB_140eb7798:
    local_f8 = (undefined1  [16])0x0;
    local_d8 = local_130;
    local_e8 = lVar7;
    local_e0 = lVar7;
    local_b8 = lVar7;
    FUN_140eb83c2(&local_d8,&local_e8,&local_b8,1);
    local_d0 = local_e8 * (longlong)local_d8;
    local_c8 = (longlong)local_d8 * local_e0;
    local_1b0 = 1;
    local_1b8 = (longlong **)ppplVar1;
    local_1a8 = lVar7;
    local_1a0 = local_f8;
    FUN_140eb9374(ppplVar3,lVar7,CONCAT44(local_138._4_4_,(undefined4)local_138),local_130);
    FUN_1400020a8(local_f8._0_8_);
    FUN_1400020a8(local_f8._8_8_);
    ppplVar3 = local_130;
    param_1 = &local_d8;
    if ((longlong ****)local_128 != (longlong ****)0x0) {
      local_f8 = (undefined1  [16])0x0;
      local_d8 = local_130;
      local_e8 = lVar7;
      local_e0 = lVar7;
      local_b8 = lVar7;
      FUN_140eb83c2(&local_d8,&local_e8,&local_b8,1);
      local_d0 = local_e8 * (longlong)local_d8;
      local_c8 = (longlong)local_d8 * local_e0;
      local_1b0 = 1;
      local_1b8 = (longlong **)ppplVar1;
      local_1a8 = lVar7;
      local_1a0 = local_f8;
      FUN_140eba53a(ppplVar3,lVar7,CONCAT44(local_138._4_4_,(undefined4)local_138),local_130);
      FUN_1400020a8(local_f8._0_8_);
      FUN_1400020a8(local_f8._8_8_);
      param_1 = (longlong ****)ppplVar3;
    }
  }
  FUN_1400020a8(local_110);
  FUN_1400020a8(local_120);
  FUN_1400020a8(CONCAT44(local_138._4_4_,(undefined4)local_138));
  FUN_1400020a8(local_150);
  FUN_1400020a8(local_160);
  FUN_1400020a8(local_178[0]);
LAB_140eb7939:
  FUN_1400020a8(local_198);
  if ((local_b0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),1e-08 < ABS(fVar15)) & 0xffffffff;
}



// FUNCTION 140eb79ee FUN_140eb79ee body=661 status=ok
// SIG undefined FUN_140eb79ee(void)

longlong * FUN_140eb79ee(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  longlong *local_80;
  longlong *local_78;
  undefined1 *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = param_2[1];
  lVar6 = param_2[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (((lVar6 != 0) && (lVar7 != 0)) &&
     (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar6),0) < lVar7)) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  FUN_140eb7caa(param_1,lVar7 * lVar6,lVar7,lVar6);
  uVar8 = param_2[1];
  param_1[3] = 0;
  param_1[4] = 0;
  if (uVar8 != 0) {
    if ((longlong)uVar8 < 1) {
LAB_140eb7c4f:
      lVar6 = 0;
    }
    else {
      if (uVar8 >> 0x3e != 0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
      }
      lVar7 = uVar8 * 4;
      lVar6 = FUN_14001cc68(lVar7 + (ulonglong)(lVar7 == 0),0x10);
      if (lVar7 != 0 && lVar6 == 0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
        goto LAB_140eb7c4f;
      }
    }
    param_1[3] = lVar6;
  }
  param_1[4] = uVar8;
  uVar8 = param_2[1];
  param_1[5] = 0;
  param_1[6] = 0;
  if (uVar8 == 0) goto LAB_140eb7b20;
  if ((longlong)uVar8 < 1) {
LAB_140eb7c7d:
    lVar6 = 0;
  }
  else {
    if (uVar8 >> 0x3e != 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    lVar7 = uVar8 * 4;
    lVar6 = FUN_14001cc68(lVar7 + (ulonglong)(lVar7 == 0),0x10);
    if (lVar7 != 0 && lVar6 == 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
      goto LAB_140eb7c7d;
    }
  }
  param_1[5] = lVar6;
LAB_140eb7b20:
  param_1[6] = uVar8;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0;
  local_50 = *param_2;
  local_58 = param_2[1];
  lVar7 = param_2[2];
  local_48 = local_58;
  if ((param_1[1] != local_58) || (param_1[2] != lVar7)) {
    FUN_1475090be(param_1);
    local_58 = param_1[1];
    lVar7 = param_1[2];
  }
  local_60 = *param_1;
  local_80 = &local_60;
  local_78 = &local_50;
  local_70 = &local_81;
  uVar9 = lVar7 * local_58;
  uVar8 = uVar9 + 3;
  if (-1 < (longlong)uVar9) {
    uVar8 = uVar9;
  }
  if (3 < (longlong)uVar9) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(local_50 + lVar7 * 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(local_60 + lVar7 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar7 = lVar7 + 4;
    } while (lVar7 < (longlong)(uVar8 & 0xfffffffffffffffc));
  }
  local_68 = param_1;
  FUN_140eb7c84(&local_80);
  FUN_140eb7d4a(param_1);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb7c84 FUN_140eb7c84 body=38 status=ok
// SIG undefined FUN_140eb7c84(void)

void FUN_140eb7c84(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + param_2 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 140eb7caa FUN_140eb7caa body=159 status=ok
// SIG undefined FUN_140eb7caa(void)

void FUN_140eb7caa(longlong *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[2] * param_1[1] - param_2 == 0) goto LAB_140eb7d0f;
  FUN_1400020a8(*param_1);
  if ((longlong)param_2 < 1) {
LAB_140eb7d45:
    lVar1 = 0;
  }
  else {
    if (param_2 >> 0x3e != 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    lVar2 = param_2 * 4;
    lVar1 = FUN_14001cc68(lVar2 + (ulonglong)(lVar2 == 0),0x10);
    if (lVar2 != 0 && lVar1 == 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
      goto LAB_140eb7d45;
    }
  }
  *param_1 = lVar1;
LAB_140eb7d0f:
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



// FUNCTION 140eb7d4a FUN_140eb7d4a body=628 status=ok
// SIG undefined FUN_140eb7d4a(void)

void FUN_140eb7d4a(undefined8 *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined1 local_a9;
  undefined4 local_a8 [2];
  undefined8 *local_a0;
  undefined8 local_90;
  longlong lStack_88;
  longlong local_80;
  undefined1 local_70 [8];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = param_1[2];
  if (lVar3 < 1) {
    fVar6 = 0.0;
  }
  else {
    local_90 = 0;
    lStack_88 = 0;
    local_80 = param_1[1];
    local_a0 = param_1;
    if (local_80 == 0) {
      fVar6 = 0.0;
    }
    else {
      local_68 = *param_1;
      local_58 = 0;
      lStack_50 = 0;
      local_48 = 0;
      local_60 = local_80;
      fVar6 = (float)FUN_140eb7fc0(local_70,&local_a9,local_a8);
      lVar3 = param_1[2];
    }
    if (1 < lVar3) {
      lVar5 = 1;
      fVar7 = fVar6;
      do {
        local_90 = 0;
        local_80 = param_1[1];
        lStack_88 = lVar5;
        if (local_80 == 0) {
          fVar6 = 0.0;
          local_a0 = param_1;
        }
        else {
          local_68 = *param_1;
          local_58 = 0;
          local_48 = local_80 * lVar5;
          local_a0 = param_1;
          local_60 = local_80;
          lStack_50 = lVar5;
          fVar6 = (float)FUN_140eb7fc0(local_70,&local_a9,local_a8);
          lVar3 = param_1[2];
        }
        if (fVar6 <= fVar7) {
          fVar6 = fVar7;
        }
        lVar5 = lVar5 + 1;
        fVar7 = fVar6;
      } while (lVar5 < lVar3);
    }
  }
  *(float *)(param_1 + 7) = fVar6;
  uVar1 = param_1[1];
  uVar4 = uVar1;
  if (param_1[6] == uVar1) goto LAB_140eb7ed8;
  FUN_1400020a8(param_1[5]);
  if ((longlong)uVar1 < 1) {
LAB_140eb7fb8:
    lVar5 = 0;
  }
  else {
    if (uVar1 >> 0x3e != 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    lVar3 = uVar1 * 4;
    lVar5 = FUN_14001cc68(lVar3 + (ulonglong)(lVar3 == 0),0x10);
    if (lVar3 != 0 && lVar5 == 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
      goto LAB_140eb7fb8;
    }
  }
  param_1[5] = lVar5;
  uVar4 = param_1[1];
LAB_140eb7ed8:
  param_1[6] = uVar1;
  if ((uVar4 == 0) || (param_1[2] == 0)) {
    local_a8[0] = 0;
    bVar2 = 1;
  }
  else {
    local_c8 = param_1[5];
    local_c0 = local_a8;
    local_b8 = 0x100;
    FUN_140eb8756(uVar4,param_1[2],*param_1,uVar4);
    bVar2 = -((byte)local_a8[0] & 1) | 1;
  }
  *(byte *)((longlong)param_1 + 0x3c) = bVar2;
  FUN_140eb80c4(param_1 + 3,param_1 + 5);
  *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eb7fc0 FUN_140eb7fc0 body=259 status=ok
// SIG undefined FUN_140eb7fc0(void)

undefined8 FUN_140eb7fc0(longlong param_1,undefined8 param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  ulonglong uVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar3 = *(ulonglong *)(param_3 + 0x28);
  uVar6 = uVar3;
  uVar7 = uVar3;
  if ((longlong)uVar3 < 0) {
    uVar6 = uVar3 + 3;
    uVar7 = uVar3 + 7;
  }
  pfVar5 = (float *)(*(longlong *)(param_1 + 0x28) * 4 + *(longlong *)(param_1 + 8));
  if (uVar3 + 3 < 7) {
    fVar12 = ABS(*pfVar5);
    fVar13 = 0.0;
    if (1 < (longlong)uVar3) {
      uVar7 = 1;
      do {
        fVar12 = fVar12 + ABS(pfVar5[uVar7]);
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
  }
  else {
    uVar6 = uVar6 & 0xfffffffffffffffc;
    fVar12 = ABS(*pfVar5);
    fVar13 = ABS(pfVar5[1]);
    fVar14 = ABS(pfVar5[2]);
    fVar15 = ABS(pfVar5[3]);
    if (7 < (longlong)uVar3) {
      uVar7 = uVar7 & 0xfffffffffffffff8;
      fVar8 = ABS(pfVar5[4]);
      fVar9 = ABS(pfVar5[5]);
      fVar10 = ABS(pfVar5[6]);
      fVar11 = ABS(pfVar5[7]);
      if (0xf < uVar3) {
        lVar4 = 8;
        do {
          pfVar1 = pfVar5 + lVar4;
          pfVar2 = pfVar5 + lVar4 + 4;
          fVar12 = fVar12 + ABS(*pfVar1);
          fVar13 = fVar13 + ABS(pfVar1[1]);
          fVar14 = fVar14 + ABS(pfVar1[2]);
          fVar15 = fVar15 + ABS(pfVar1[3]);
          fVar8 = fVar8 + ABS(*pfVar2);
          fVar9 = fVar9 + ABS(pfVar2[1]);
          fVar10 = fVar10 + ABS(pfVar2[2]);
          fVar11 = fVar11 + ABS(pfVar2[3]);
          lVar4 = lVar4 + 8;
        } while (lVar4 < (longlong)uVar7);
      }
      fVar12 = fVar8 + fVar12;
      fVar13 = fVar9 + fVar13;
      fVar14 = fVar10 + fVar14;
      fVar15 = fVar11 + fVar15;
      if ((longlong)uVar7 < (longlong)uVar6) {
        pfVar1 = pfVar5 + uVar7;
        fVar12 = fVar12 + ABS(*pfVar1);
        fVar13 = fVar13 + ABS(pfVar1[1]);
        fVar14 = fVar14 + ABS(pfVar1[2]);
        fVar15 = fVar15 + ABS(pfVar1[3]);
      }
    }
    fVar12 = fVar14 + fVar12 + fVar15 + fVar13;
    fVar13 = fVar14 + fVar14 + fVar15 + fVar15;
    if ((longlong)uVar6 < (longlong)uVar3) {
      do {
        fVar12 = fVar12 + ABS(pfVar5[uVar6]);
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
    }
  }
  return CONCAT44(fVar13,fVar12);
}



// FUNCTION 140eb80c4 FUN_140eb80c4 body=240 status=ok
// SIG undefined FUN_140eb80c4(void)

longlong * FUN_140eb80c4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = param_2[1];
  if (param_1[1] == uVar5) goto LAB_140eb812b;
  FUN_1400020a8(*param_1);
  if ((longlong)uVar5 < 1) {
LAB_140eb81ad:
    lVar3 = 0;
  }
  else {
    if (uVar5 >> 0x3e != 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    lVar1 = uVar5 * 4;
    lVar3 = FUN_14001cc68(lVar1 + (ulonglong)(lVar1 == 0),0x10);
    if (lVar1 != 0 && lVar3 == 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
      goto LAB_140eb81ad;
    }
  }
  *param_1 = lVar3;
LAB_140eb812b:
  param_1[1] = uVar5;
  if (0 < (int)(uint)uVar5) {
    uVar4 = 0;
    do {
      *(int *)(*param_1 + uVar4 * 4) = (int)uVar4;
      uVar4 = uVar4 + 1;
    } while (((uint)uVar5 & 0x7fffffff) != uVar4);
    uVar5 = param_1[1];
  }
  if (0 < (longlong)uVar5) {
    uVar5 = uVar5 + 1;
    do {
      lVar3 = (longlong)*(int *)(*param_2 + -8 + uVar5 * 4);
      lVar1 = *param_1;
      uVar2 = *(undefined4 *)(lVar1 + -8 + uVar5 * 4);
      *(undefined4 *)(lVar1 + -8 + uVar5 * 4) = *(undefined4 *)(lVar1 + lVar3 * 4);
      *(undefined4 *)(lVar1 + lVar3 * 4) = uVar2;
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  return param_1;
}



// FUNCTION 140eb81b4 FUN_140eb81b4 body=349 status=ok
// SIG undefined FUN_140eb81b4(void)

longlong FUN_140eb81b4(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong lVar3;
  
  FUN_140eb8312();
  uVar1 = *(ulonglong *)(param_2 + 0x20);
  if (uVar1 == 0) {
LAB_140eb82dc:
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x3fffffffffffffff < uVar1) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    lVar3 = uVar1 * 4;
    pvVar2 = (void *)FUN_14001cc68(lVar3 + (ulonglong)(lVar3 == 0),0x10);
    if (lVar3 != 0 && pvVar2 == (void *)0x0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
      goto LAB_140eb82dc;
    }
  }
  *(void **)(param_1 + 0x18) = pvVar2;
  lVar3 = *(longlong *)(param_2 + 0x20);
  *(longlong *)(param_1 + 0x20) = lVar3;
  if (lVar3 != 0) {
    memcpy(pvVar2,*(void **)(param_2 + 0x18),lVar3 << 2);
  }
  uVar1 = *(ulonglong *)(param_2 + 0x30);
  if (uVar1 != 0) {
    if (0x3fffffffffffffff < uVar1) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    lVar3 = uVar1 * 4;
    pvVar2 = (void *)FUN_14001cc68(lVar3 + (ulonglong)(lVar3 == 0),0x10);
    if (lVar3 == 0 || pvVar2 != (void *)0x0) goto LAB_140eb8279;
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  pvVar2 = (void *)0x0;
LAB_140eb8279:
  *(void **)(param_1 + 0x28) = pvVar2;
  lVar3 = *(longlong *)(param_2 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar3;
  if (lVar3 != 0) {
    memcpy(pvVar2,*(void **)(param_2 + 0x28),lVar3 << 2);
  }
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}



// FUNCTION 140eb8312 FUN_140eb8312 body=176 status=ok
// SIG undefined FUN_140eb8312(void)

undefined8 * FUN_140eb8312(undefined8 *param_1,undefined8 *param_2)

{
  void *_Dst;
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = param_2[2] * param_2[1];
  if (uVar1 != 0) {
    if (uVar1 >> 0x3e != 0) {
      FUN_14001cc68(0xffffffffffffffff,0x10);
    }
    lVar2 = uVar1 * 4;
    _Dst = (void *)FUN_14001cc68(lVar2 + (ulonglong)(lVar2 == 0),0x10);
    if (lVar2 == 0 || _Dst != (void *)0x0) goto LAB_140eb8363;
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  _Dst = (void *)0x0;
LAB_140eb8363:
  *param_1 = _Dst;
  param_1[1] = param_2[1];
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  lVar2 = lVar2 * param_2[1];
  if (lVar2 != 0) {
    memcpy(_Dst,(void *)*param_2,lVar2 * 4);
  }
  return param_1;
}



// FUNCTION 140eb83c2 FUN_140eb83c2 body=916 status=ok
// SIG undefined FUN_140eb83c2(void)

void FUN_140eb83c2(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caabc00) && (FUN_144b3d300(&DAT_14caabc00), DAT_14caabc00 == -1)) {
    FUN_1457c02e6(&DAT_14caabbe8);
    _Init_thread_footer(&DAT_14caabc00);
  }
  lVar5 = DAT_14caabbf8;
  uVar2 = DAT_14caabbf0;
  uVar8 = DAT_14caabbe8;
  if (param_4 < 2) {
    uVar9 = *param_2;
    uVar7 = *param_3;
    if ((longlong)*param_3 < (longlong)uVar9) {
      uVar7 = uVar9;
    }
    uVar1 = *param_1;
    if ((longlong)uVar7 < (longlong)uVar1) {
      uVar7 = uVar1;
    }
    if ((longlong)uVar7 < 0x30) {
      return;
    }
    lVar6 = DAT_14caabbe8 - 0x80;
    uVar10 = lVar6 / 0xc0 & 0xfffffffffffffff8;
    uVar7 = 1;
    if (1 < (longlong)uVar10) {
      uVar7 = uVar10;
    }
    uVar10 = uVar1;
    if ((longlong)uVar7 < (longlong)uVar1) {
      uVar10 = uVar7;
      if (uVar1 % uVar7 != 0) {
        uVar10 = uVar7 + ((longlong)(~(uVar1 % uVar7) + uVar7) / (longlong)((uVar1 / uVar7) * 8 + 8)
                         ) * -8;
      }
      *param_1 = uVar10;
      uVar9 = *param_2;
    }
    uVar11 = lVar6 - uVar10 * 4 * uVar9;
    if ((longlong)uVar11 < (longlong)(uVar10 * 0x10)) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar7 << 4;
      uVar11 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x480000)) / auVar3,0);
    }
    else {
      uVar11 = uVar11 / (uVar10 * 4);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar10 * 8;
    uVar7 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x180000)) / auVar4,0);
    if ((longlong)uVar11 < (longlong)uVar7) {
      uVar7 = uVar11;
    }
    uVar7 = uVar7 & 0xfffffffffffffffc;
    uVar11 = *param_3;
    if ((longlong)uVar7 < (longlong)uVar11) {
      if ((longlong)uVar11 % (longlong)uVar7 != 0) {
        uVar7 = uVar7 + ((longlong)(uVar7 - (longlong)uVar11 % (longlong)uVar7) /
                        (((longlong)uVar11 / (longlong)uVar7) * 4 + 4)) * -4;
      }
      *param_3 = uVar7;
      return;
    }
    if (uVar1 != uVar10) {
      return;
    }
    uVar10 = uVar11 * uVar1 * 4;
    uVar7 = uVar9;
    if (((0x400 < (longlong)uVar10) && (uVar8 = 0x180000, uVar10 < 0x8001 && lVar5 != 0)) &&
       (uVar8 = uVar2, uVar7 = 0x240, (longlong)uVar9 < 0x240)) {
      uVar7 = uVar9;
    }
    uVar8 = uVar8 / (uVar1 * 0xc);
    if ((longlong)uVar7 < (longlong)uVar8) {
      uVar8 = uVar7;
    }
    if ((longlong)uVar8 < 9) {
      if (uVar8 == 0) {
        return;
      }
    }
    else {
      uVar8 = uVar8 & 0x7ffffffffffffff8;
    }
    if ((longlong)uVar9 % (longlong)uVar8 != 0) {
      uVar8 = uVar8 + ((longlong)(uVar8 - (longlong)uVar9 % (longlong)uVar8) /
                      (((longlong)uVar9 / (longlong)uVar8) * 8 + 8)) * -8;
    }
  }
  else {
    uVar9 = (longlong)(DAT_14caabbe8 - 0x80) / 0xc0;
    if (0x13f < (longlong)uVar9) {
      uVar9 = 0x140;
    }
    uVar7 = 8;
    if (8 < (longlong)uVar9) {
      uVar7 = uVar9;
    }
    uVar9 = *param_1;
    if ((longlong)uVar7 < (longlong)uVar9) {
      uVar9 = uVar7 & 0x7ffffffffffffff8;
      *param_1 = uVar9;
    }
    uVar9 = (uVar2 - uVar8) / (uVar9 << 4);
    uVar8 = *param_3;
    lVar6 = (longlong)(uVar8 + param_4 + -1) / param_4;
    if (lVar6 < (longlong)uVar9) {
      uVar7 = lVar6 + 6;
      if (-1 < (longlong)(lVar6 + 3U)) {
        uVar7 = lVar6 + 3U;
      }
      uVar9 = uVar7 & 0xfffffffffffffffc;
      if ((longlong)uVar8 <= (longlong)(uVar7 & 0xfffffffffffffffc)) {
        uVar9 = uVar8;
      }
    }
    else {
      uVar8 = uVar9 + 3;
      if (-1 < (longlong)uVar9) {
        uVar8 = uVar9;
      }
      uVar9 = uVar8 & 0xfffffffffffffffc;
    }
    *param_3 = uVar9;
    if (lVar5 - uVar2 == 0 || lVar5 < (longlong)uVar2) {
      return;
    }
    uVar8 = (lVar5 - uVar2) / (*param_1 * param_4 * 4);
    uVar2 = *param_2;
    param_4 = (longlong)(param_4 + -1 + uVar2) / param_4;
    if ((longlong)uVar8 < 8 || param_4 <= (longlong)uVar8) {
      uVar8 = param_4 + 0xe;
      if (-1 < (longlong)(param_4 + 7U)) {
        uVar8 = param_4 + 7U;
      }
      uVar9 = uVar8 & 0xfffffffffffffff8;
      if ((longlong)uVar2 <= (longlong)(uVar8 & 0xfffffffffffffff8)) {
        uVar9 = uVar2;
      }
      *param_2 = uVar9;
      return;
    }
    uVar8 = uVar8 & 0x7ffffffffffffff8;
  }
  *param_2 = uVar8;
  return;
}



// FUNCTION 140eb8756 FUN_140eb8756 body=1215 status=ok
// SIG undefined FUN_140eb8756(void)

longlong FUN_140eb8756(ulonglong param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                      longlong param_5,int *param_6,ulonglong param_7)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  int *local_1a0;
  undefined8 local_198;
  longlong local_190;
  ulonglong local_188;
  longlong local_180;
  longlong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  longlong local_158;
  ulonglong local_150;
  ulonglong local_148;
  longlong local_140;
  longlong local_138;
  ulonglong local_130;
  ulonglong local_128;
  longlong local_120;
  int local_114;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar7 = param_4;
  if (param_4 == 0) {
    uVar7 = param_1;
  }
  if (param_2 == 1) {
    uVar7 = param_1;
  }
  uVar11 = param_2;
  if ((longlong)param_1 <= (longlong)param_2) {
    uVar11 = param_1;
  }
  local_70 = param_3;
  local_68 = param_1;
  local_60 = param_2;
  local_58 = uVar7;
  if ((longlong)uVar11 < 0x11) {
    lVar3 = FUN_140eb8c16(&local_70,param_5,param_6);
  }
  else {
    uVar5 = uVar11 >> 3 & 0xffffffffffffff0;
    local_130 = 8;
    if (uVar5 != 0) {
      local_130 = uVar5;
    }
    local_160 = param_7;
    if ((longlong)local_130 < (longlong)param_7) {
      local_160 = local_130;
    }
    *param_6 = 0;
    local_138 = local_160 * 4;
    local_140 = uVar7 * 4;
    lVar3 = -1;
    local_178 = 0;
    local_190 = 0;
    local_168 = uVar11;
    do {
      lVar4 = local_190;
      local_128 = param_7;
      if ((longlong)local_130 < (longlong)param_7) {
        local_128 = local_130;
      }
      if ((longlong)local_168 <= (longlong)local_128) {
        local_128 = local_168;
      }
      local_188 = uVar11 - local_190;
      if ((longlong)local_160 < (longlong)(uVar11 - local_190)) {
        local_188 = local_160;
      }
      local_170 = param_1 - local_190;
      local_108 = local_170 - local_188;
      local_158 = local_188 + local_190;
      local_180 = uVar11 - local_158;
      local_148 = uVar7;
      if (local_190 == 1) {
        local_148 = param_1;
      }
      bVar12 = uVar7 == 0;
      if (bVar12) {
        local_148 = param_1;
      }
      lVar10 = local_190 * uVar7;
      local_80 = uVar7;
      if (local_188 == 1 || bVar12) {
        local_80 = local_188;
      }
      local_c0 = param_3 + local_190 * 4;
      local_98 = local_c0 + lVar10 * 4;
      local_d0 = uVar7;
      if (local_188 == 1 || bVar12) {
        local_d0 = local_108;
      }
      local_c0 = local_c0 + local_158 * uVar7 * 4;
      local_a8 = uVar7;
      if (local_180 == 1 || bVar12) {
        local_a8 = local_188;
      }
      local_110 = param_3 + local_158 * 4;
      local_e8 = local_110 + lVar10 * 4;
      local_110 = local_110 + local_158 * uVar7 * 4;
      local_150 = uVar7;
      local_f8 = uVar7;
      if (local_180 == 1 || bVar12) {
        local_150 = param_1;
        local_f8 = local_108;
      }
      local_1a8 = param_5 + local_190 * 4;
      local_1a0 = &local_114;
      local_198 = 0x10;
      local_120 = lVar3;
      local_100 = local_180;
      local_e0 = local_108;
      local_d8 = local_188;
      local_b8 = local_188;
      local_b0 = local_180;
      local_90 = local_188;
      local_88 = local_188;
      lVar10 = FUN_140eb8756(local_170,local_188,param_3 + lVar10 * 4 + local_190 * 4,param_4);
      lVar3 = lVar4 + lVar10;
      if (local_120 != -1) {
        lVar3 = local_120;
      }
      if (lVar10 < 0) {
        lVar3 = local_120;
      }
      *param_6 = *param_6 + local_114;
      if (lVar4 < local_158) {
        local_148 = local_148 * 4;
        lVar4 = local_178;
        lVar10 = local_190;
        do {
          iVar2 = *(int *)(param_5 + lVar10 * 4);
          *(int *)(param_5 + lVar10 * 4) = iVar2 + (int)local_190;
          if (0 < local_190) {
            lVar6 = (longlong)(iVar2 + (int)local_190);
            lVar9 = 0;
            lVar8 = param_3;
            do {
              uVar1 = *(undefined4 *)(lVar8 + lVar4);
              *(undefined4 *)(lVar8 + lVar4) = *(undefined4 *)(lVar8 + lVar6 * 4);
              *(undefined4 *)(lVar8 + lVar6 * 4) = uVar1;
              lVar9 = lVar9 + 1;
              lVar8 = lVar8 + local_148;
            } while (lVar9 < local_190);
          }
          lVar10 = lVar10 + 1;
          lVar4 = lVar4 + 4;
        } while (lVar10 < local_158);
        if (local_170 != local_188) {
          local_150 = local_150 * 4;
          lVar4 = local_178;
          lVar10 = local_190;
          do {
            if (0 < local_180) {
              lVar6 = (longlong)*(int *)(param_5 + lVar10 * 4);
              lVar9 = 0;
              lVar8 = (local_128 + local_190) * local_140 + param_3;
              do {
                uVar1 = *(undefined4 *)(lVar8 + lVar4);
                *(undefined4 *)(lVar8 + lVar4) = *(undefined4 *)(lVar8 + lVar6 * 4);
                *(undefined4 *)(lVar8 + lVar6 * 4) = uVar1;
                lVar9 = lVar9 + 1;
                lVar8 = lVar8 + local_150;
              } while (lVar9 < local_180);
            }
            lVar10 = lVar10 + 1;
            lVar4 = lVar4 + 4;
          } while (lVar10 < local_158);
LAB_140eb8bd7:
          if (local_88 != 0) {
            FUN_14750911c(&local_98,&local_c0);
          }
          FUN_147509496(&local_110,&local_e8,&local_c0);
        }
      }
      else if (local_170 != local_188) goto LAB_140eb8bd7;
      local_190 = local_190 + local_160;
      local_178 = local_178 + local_138;
      local_168 = local_168 - local_160;
    } while (local_190 < (longlong)uVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb8c16 FUN_140eb8c16 body=1263 status=ok
// SIG undefined FUN_140eb8c16(void)

ulonglong FUN_140eb8c16(ulonglong *param_1,longlong param_2,int *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_218 [32];
  ulonglong *local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  int *local_1e0;
  ulonglong local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  ulonglong *local_1a0;
  undefined4 *local_198;
  undefined1 *local_190;
  ulonglong *local_188;
  longlong local_180;
  longlong local_178;
  ulonglong local_170;
  undefined1 local_161;
  undefined4 local_160 [2];
  ulonglong local_158;
  undefined4 *local_150;
  longlong local_140;
  ulonglong local_138;
  ulonglong *local_128;
  undefined8 local_120;
  ulonglong local_118;
  ulonglong local_110;
  longlong local_108;
  ulonglong local_f8;
  longlong local_f0 [2];
  undefined1 *local_e0;
  longlong local_d8;
  ulonglong local_c8;
  ulonglong *local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88 [2];
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar5 = param_1[1];
  local_1d8 = param_1[2];
  local_1c0 = uVar5;
  if ((longlong)local_1d8 < (longlong)uVar5) {
    local_1c0 = local_1d8;
  }
  *param_3 = 0;
  local_1e8 = param_2;
  local_1e0 = param_3;
  if ((longlong)local_1c0 < 1) {
    local_1f0 = 0xffffffffffffffff;
  }
  else {
    local_1d0 = uVar5 - 1;
    lVar12 = uVar5 * -4;
    local_1f0 = 0xffffffffffffffff;
    lVar13 = 0;
    uVar10 = 0;
    local_1c8 = uVar5;
    do {
      local_1b8 = local_1c8 + ~uVar10;
      lVar7 = local_1c8 - uVar10;
      fVar14 = *(float *)(*param_1 + param_1[3] * uVar10 * 4 + (param_1[1] - lVar7) * 4);
      local_1b0 = lVar13;
      local_1a8 = lVar12;
      if (lVar7 < 2) {
        *(int *)(local_1e8 + uVar10 * 4) = (int)uVar10;
        if ((fVar14 == 0.0) && (!NAN(fVar14))) goto LAB_140eb90a3;
LAB_140eb8d56:
        local_110 = param_1[3];
        local_140 = local_110 * uVar10 * 4 + *param_1;
        local_138 = param_1[1];
        puVar8 = (undefined4 *)(longlong)(int)local_1b8;
        local_108 = local_138 - (longlong)puVar8;
        local_158 = local_140 + local_108 * 4;
        local_120 = 0;
        local_160[0] = *(undefined4 *)(local_140 + uVar10 * 4);
        local_1a0 = local_88;
        local_198 = local_160;
        local_190 = &local_161;
        local_188 = &local_158;
        puVar4 = puVar8;
        if (((local_158 & 3) == 0) &&
           (puVar4 = (undefined4 *)(ulonglong)(-((uint)(local_158 >> 2) & 0x3fffffff) & 3),
           (longlong)puVar8 <= (longlong)puVar4)) {
          puVar4 = puVar8;
        }
        uVar9 = (longlong)puVar8 - (longlong)puVar4;
        uVar5 = uVar9 + 3;
        if (-1 < (longlong)uVar9) {
          uVar5 = uVar9;
        }
        lVar13 = (uVar5 & 0xfffffffffffffffc) + (longlong)puVar4;
        local_150 = puVar8;
        local_128 = param_1;
        local_118 = uVar10;
        local_f8 = local_110;
        local_88[0] = local_158;
        local_78 = local_110;
        FUN_140eb9106(&local_1a0,0,puVar4);
        if (3 < (longlong)uVar9) {
          do {
            uVar1 = *local_198;
            auVar16._4_4_ = uVar1;
            auVar16._0_4_ = uVar1;
            auVar16._8_4_ = uVar1;
            auVar16._12_4_ = uVar1;
            auVar16 = divps(*(undefined1 (*) [16])(*local_1a0 + (longlong)puVar4 * 4),auVar16);
            *(undefined1 (*) [16])(*local_1a0 + (longlong)puVar4 * 4) = auVar16;
            puVar4 = puVar4 + 1;
          } while ((longlong)puVar4 < lVar13);
        }
        FUN_140eb9106(&local_1a0,lVar13,puVar8);
      }
      else {
        lVar11 = 1;
        lVar6 = 0;
        fVar14 = ABS(fVar14);
        do {
          fVar15 = ABS(*(float *)(*param_1 + param_1[3] * lVar13 + lVar12 + param_1[1] * 4 +
                                 lVar11 * 4));
          lVar3 = lVar11;
          if (fVar15 <= fVar14) {
            fVar15 = fVar14;
            lVar3 = lVar6;
          }
          lVar6 = lVar3;
          lVar11 = lVar11 + 1;
          fVar14 = fVar15;
        } while (lVar11 < lVar7);
        *(int *)(local_1e8 + uVar10 * 4) = (int)lVar6 + (int)uVar10;
        if ((fVar15 != 0.0) || (NAN(fVar15))) {
          if (lVar6 != 0) {
            uVar5 = param_1[2];
            if (0 < (longlong)uVar5) {
              uVar9 = *param_1;
              uVar2 = param_1[3];
              lVar12 = lVar13 + lVar6 * 4;
              do {
                uVar1 = *(undefined4 *)(uVar9 + lVar13);
                *(undefined4 *)(uVar9 + lVar13) = *(undefined4 *)(uVar9 + lVar12);
                *(undefined4 *)(uVar9 + lVar12) = uVar1;
                uVar9 = uVar9 + uVar2 * 4;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            *local_1e0 = *local_1e0 + 1;
          }
          goto LAB_140eb8d56;
        }
LAB_140eb90a3:
        if (local_1f0 == 0xffffffffffffffff) {
          local_1f0 = uVar10;
        }
      }
      if ((longlong)uVar10 < local_1d0) {
        uVar5 = *param_1;
        local_138 = param_1[1];
        local_170 = param_1[3];
        local_140 = uVar5 + local_170 * uVar10 * 4;
        local_198 = (undefined4 *)(longlong)(int)local_1b8;
        local_180 = local_138 - (longlong)local_198;
        local_158 = local_140 + local_180 * 4;
        local_c8 = param_1[2];
        local_d8 = uVar5 + uVar10 * 4;
        local_190 = (undefined1 *)(longlong)((int)~uVar10 + (int)local_1d8);
        local_178 = local_c8 - (longlong)local_190;
        local_f0[0] = local_d8 + local_178 * local_170 * 4;
        local_120 = 0;
        local_1a0 = (ulonglong *)(uVar5 + local_180 * 4 + local_178 * local_170 * 4);
        local_b0 = 0;
        local_a8 = 1;
        local_90 = 1;
        local_1f8 = local_88;
        local_188 = param_1;
        local_150 = local_198;
        local_128 = param_1;
        local_118 = uVar10;
        local_110 = local_170;
        local_108 = local_180;
        local_f8 = local_170;
        local_e0 = local_190;
        local_c0 = param_1;
        local_b8 = uVar10;
        local_98 = local_178;
        FUN_140eb912d(&local_1a0,&local_158,local_f0,local_160);
      }
      uVar10 = uVar10 + 1;
      lVar12 = local_1a8 + 4;
      lVar13 = local_1b0 + 4;
    } while (uVar10 != local_1c0);
  }
  if ((local_70 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return local_1f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eb9106 FUN_140eb9106 body=39 status=ok
// SIG undefined FUN_140eb9106(void)

void FUN_140eb9106(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(float *)(*(longlong *)*param_1 + param_2 * 4) =
           *(float *)(*(longlong *)*param_1 + param_2 * 4) / *(float *)param_1[1];
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 140eb912d FUN_140eb912d body=528 status=ok
// SIG undefined FUN_140eb912d(void)

void FUN_140eb912d(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  undefined1 local_111;
  ulonglong *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  ulonglong *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88 [2];
  undefined8 local_78;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined8 local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar5 = param_1[2];
  if (0 < lVar5) {
    local_120 = *param_3;
    local_128 = *(longlong *)(param_3[6] + 0x18);
    local_130 = *param_2;
    local_138 = param_2[6];
    lVar14 = 0;
    do {
      local_6c = *(undefined4 *)(local_120 + lVar14 * local_128 * 4);
      uVar6 = param_1[1];
      local_f0 = *(longlong *)(param_1[3] + 0x18) * lVar14 * 4 + *param_1;
      local_a8 = param_1[6];
      local_d8 = (undefined4)*param_1;
      uStack_d4 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_d0 = (undefined4)param_1[1];
      uStack_cc = *(undefined4 *)((longlong)param_1 + 0xc);
      local_c8 = (undefined4)param_1[2];
      uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x14);
      uStack_c0 = (undefined4)param_1[3];
      uStack_bc = *(undefined4 *)((longlong)param_1 + 0x1c);
      lVar17 = param_1[3];
      local_b8 = (undefined4)param_1[4];
      uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x24);
      uStack_b0 = (undefined4)param_1[5];
      uStack_ac = *(undefined4 *)((longlong)param_1 + 0x2c);
      local_a0 = 0;
      local_90 = *(undefined8 *)(lVar17 + 0x18);
      local_60 = local_130;
      local_50 = *(undefined8 *)(local_138 + 0x18);
      local_78 = *(undefined8 *)(lVar17 + 0x18);
      local_110 = local_88;
      local_108 = local_70;
      local_100 = &local_111;
      local_f8 = &local_f0;
      uVar15 = uVar6;
      if (((local_f0 & 3) == 0) &&
         (uVar15 = (ulonglong)(-((uint)(local_f0 >> 2) & 0x3fffffff) & 3),
         (longlong)uVar6 <= (longlong)uVar15)) {
        uVar15 = uVar6;
      }
      uVar13 = uVar6 - uVar15;
      uVar16 = uVar13 + 3;
      if (-1 < (longlong)uVar13) {
        uVar16 = uVar13;
      }
      lVar17 = (uVar16 & 0xfffffffffffffffc) + uVar15;
      local_e8 = uVar6;
      local_98 = lVar14;
      local_88[0] = local_f0;
      FUN_140eb933e(&local_110,0,uVar15);
      if (3 < (longlong)uVar13) {
        do {
          pfVar1 = (float *)(*(longlong *)(local_108 + 0x10) + uVar15 * 4);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          fVar9 = pfVar1[3];
          fVar4 = *(float *)(local_108 + 4);
          pfVar2 = (float *)(*local_110 + uVar15 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(*local_110 + uVar15 * 4);
          *pfVar3 = *pfVar2 - fVar4 * *pfVar1;
          pfVar3[1] = fVar10 - fVar4 * fVar7;
          pfVar3[2] = fVar11 - fVar4 * fVar8;
          pfVar3[3] = fVar12 - fVar4 * fVar9;
          uVar15 = uVar15 + 4;
        } while ((longlong)uVar15 < lVar17);
      }
      FUN_140eb933e(&local_110,lVar17,uVar6);
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eb933e FUN_140eb933e body=54 status=ok
// SIG undefined FUN_140eb933e(void)

void FUN_140eb933e(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 < param_3) {
    do {
      *(float *)(*(longlong *)*param_1 + param_2 * 4) =
           *(float *)(*(longlong *)*param_1 + param_2 * 4) -
           *(float *)(param_1[1] + 4) * *(float *)(*(longlong *)(param_1[1] + 0x10) + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 140eb9374 FUN_140eb9374 body=3604 status=ok
// SIG undefined FUN_140eb9374(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140eb9374(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,longlong *param_8)

{
  longlong lVar1;
  float fVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_2c8 [8];
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  ulonglong local_290;
  ulonglong local_288;
  longlong local_280;
  longlong local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  ulonglong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined1 *local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)&local_248;
  local_a0 = param_8[4];
  local_f0 = param_8[2];
  if (param_1 <= param_8[2]) {
    local_f0 = param_1;
  }
  uVar15 = local_f0 * local_a0;
  local_198 = param_3;
  local_100 = param_4;
  if (uVar15 >> 0x3e != 0) {
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  uVar17 = local_a0 * param_2;
  puVar4 = (undefined1 *)*param_8;
  uVar15 = uVar15 * 4;
  puVar10 = auStack_2c8;
  if (puVar4 == (undefined1 *)0x0) {
    if (uVar15 < 0x20001) {
      lVar14 = -(uVar15 + 0x1e & 0xfffffffffffffff0);
      puVar4 = auStack_2c8 + lVar14;
      puVar10 = auStack_2c8 + lVar14;
    }
    else {
      puVar4 = (undefined1 *)FUN_14001cc68(uVar15,0x10);
      puVar10 = auStack_2c8;
      if (puVar4 == (undefined1 *)0x0) {
        FUN_14001cc68(0xffffffffffffffff,0x10);
        puVar4 = (undefined1 *)0x0;
        puVar10 = auStack_2c8;
      }
    }
  }
  local_270 = (undefined1 *)0x0;
  if (*param_8 == 0) {
    local_270 = puVar4;
  }
  if (0x3fffffffffffffff < uVar17) {
    *(undefined8 *)(puVar10 + -0x28) = 0x140eb9f3b;
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  lVar14 = local_a0;
  local_c8 = (undefined1 *)param_8[1];
  uVar17 = uVar17 * 4;
  if (local_c8 == (undefined1 *)0x0) {
    if (uVar17 < 0x20001) {
      *(undefined8 *)(puVar10 + -8) = 0x140eb947a;
      lVar9 = -(uVar17 + 0x1e & 0xfffffffffffffff0);
      local_c8 = puVar10 + lVar9;
      puVar10 = puVar10 + lVar9;
    }
    else {
      *(undefined8 *)(puVar10 + -0x28) = 0x140eb9f5c;
      local_c8 = (undefined1 *)FUN_14001cc68(uVar17,0x10);
      lVar14 = local_a0;
      if (local_c8 == (undefined1 *)0x0) {
        *(undefined8 *)(puVar10 + -0x28) = 0x140eb9f88;
        FUN_14001cc68(0xffffffffffffffff,0x10);
        local_c8 = (undefined1 *)0x0;
        lVar14 = local_a0;
      }
    }
  }
  puVar11 = (undefined1 *)0x0;
  if (param_8[1] == 0) {
    puVar11 = local_c8;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caabc00) {
    *(undefined8 *)(puVar10 + -0x28) = 0x140eb9e5f;
    FUN_144b3d300();
    lVar14 = local_a0;
    if (DAT_14caabc00 == -1) {
      *(undefined8 *)(puVar10 + -0x28) = 0x140eb9e8e;
      FUN_1457c02e6(&DAT_14caabbe8);
      *(undefined8 *)(puVar10 + -0x28) = 0x140eb9e9a;
      _Init_thread_footer();
      lVar14 = local_a0;
    }
  }
  if (param_2 < 1) {
    uVar5 = 0;
  }
  else {
    lVar9 = param_1;
    if (param_1 < param_7) {
      lVar9 = param_7;
    }
    uVar3 = DAT_14caabbf0 / (ulonglong)(lVar9 << 4);
    uVar5 = uVar3 + 3;
    if (-1 < (longlong)uVar3) {
      uVar5 = uVar3;
    }
    uVar5 = uVar5 & 0xfffffffffffffffc;
  }
  uVar3 = 4;
  if (4 < (longlong)uVar5) {
    uVar3 = uVar5;
  }
  local_290 = uVar17;
  local_268 = puVar11;
  local_d0 = puVar4;
  if (0 < param_1) {
    local_178 = param_5 + 4;
    local_258 = lVar14 * 4;
    local_280 = param_7 * uVar3 * 4;
    local_2b0 = param_7 * 4;
    local_170 = local_198 + 4;
    local_250 = (local_100 * 4 + 4) * lVar14;
    local_2a8 = local_100 * 0x20 + 0x20;
    local_168 = local_198 + local_100 * 0xc + 0x10;
    local_160 = local_100 * 0x10 + local_198 + 0x14;
    local_158 = local_198 + 0x18 + local_100 * 0x14;
    local_150 = local_198 + local_100 * 0x18 + 0x1c;
    local_180 = param_1 - lVar14;
    local_148 = param_5 + 8;
    local_140 = local_198 + 8 + local_100 * 4;
    local_138 = param_5 + 0xc;
    local_130 = local_198 + 0xc + local_100 * 8;
    local_128 = param_5 + 0x10;
    local_120 = param_5 + 0x14;
    local_118 = param_5 + 0x18;
    local_110 = param_5 + 0x1c;
    local_e0 = param_5 + lVar14 * 4;
    local_248 = local_f0 * 4;
    local_d8 = local_198 + lVar14 * 4;
    lVar9 = 0;
    local_288 = uVar15;
    local_210 = uVar3;
    local_188 = param_1;
    local_e8 = param_2;
    while( true ) {
      local_278 = param_1;
      if (lVar14 < param_1) {
        local_278 = lVar14;
      }
      lVar6 = local_188 - lVar9;
      if (lVar14 < local_188 - lVar9) {
        lVar6 = lVar14;
      }
      local_260 = param_1;
      local_190 = lVar6;
      if (0 < local_e8) {
        local_208 = local_118;
        local_200 = local_128;
        local_1f8 = local_138;
        local_1f0 = local_148;
        local_1e8 = local_178;
        lVar16 = 0;
        lVar7 = local_110;
        puVar4 = local_c8;
        lVar8 = local_120;
        do {
          local_b0 = local_e8 - lVar16;
          local_108 = local_b0;
          if ((longlong)local_210 < (longlong)local_b0) {
            local_108 = local_210;
          }
          lVar13 = lVar7;
          local_a8 = lVar16;
          if (0 < lVar6) {
            lVar1 = local_108 + lVar16;
            local_1a8 = param_5 + lVar16 * param_7 * 4;
            local_1a0 = puVar4 + lVar16 * lVar6 * 4;
            local_228 = local_150;
            local_1c0 = local_158;
            local_1b8 = local_208;
            local_230 = local_160;
            local_1d0 = local_200;
            local_220 = local_130;
            local_1d8 = local_1f8;
            local_238 = local_140;
            local_1e0 = local_1f0;
            local_218 = local_1e8;
            local_b8 = local_278;
            lVar18 = 0;
            lVar16 = local_168;
            lVar12 = local_170;
            local_2a0 = lVar7;
            local_298 = lVar8;
            local_1c8 = lVar8;
            local_f8 = lVar9;
            do {
              lVar14 = lVar6 - lVar18;
              local_c0 = 8;
              if (lVar14 < 8) {
                local_c0 = lVar14;
              }
              lVar9 = lVar18 + local_f8;
              if (0 < lVar14) {
                if (0 < (longlong)local_b0) {
                  lVar6 = local_218;
                  lVar8 = local_a8;
                  do {
                    if (lVar14 != 1) {
                      fVar2 = *(float *)(param_5 + lVar8 * param_7 * 4 + lVar9 * 4);
                      lVar13 = 0;
                      do {
                        *(float *)(lVar6 + lVar13 * 4) =
                             *(float *)(lVar12 + lVar13 * 4) * -fVar2 +
                             *(float *)(lVar6 + lVar13 * 4);
                        lVar13 = lVar13 + 1;
                      } while (lVar13 < local_c0 + -1);
                    }
                    lVar8 = lVar8 + 1;
                    lVar6 = lVar6 + local_2b0;
                  } while (lVar8 < lVar1);
                }
                if (1 < local_b8) {
                  if (0 < (longlong)local_b0) {
                    lVar6 = local_1e0;
                    lVar8 = local_a8;
                    do {
                      if (2 < lVar14) {
                        fVar2 = *(float *)(param_5 + lVar8 * param_7 * 4 + 4 + lVar9 * 4);
                        lVar13 = 0;
                        do {
                          *(float *)(lVar6 + lVar13 * 4) =
                               *(float *)(local_238 + lVar13 * 4) * -fVar2 +
                               *(float *)(lVar6 + lVar13 * 4);
                          lVar13 = lVar13 + 1;
                        } while (lVar13 < local_c0 + -2);
                      }
                      lVar8 = lVar8 + 1;
                      lVar6 = lVar6 + local_2b0;
                    } while (lVar8 < lVar1);
                  }
                  if (local_b8 != 2) {
                    if (0 < (longlong)local_b0) {
                      lVar6 = local_1d8;
                      lVar8 = local_a8;
                      do {
                        if (3 < lVar14) {
                          fVar2 = *(float *)(param_5 + lVar8 * param_7 * 4 + 8 + lVar9 * 4);
                          lVar13 = 0;
                          do {
                            *(float *)(lVar6 + lVar13 * 4) =
                                 *(float *)(local_220 + lVar13 * 4) * -fVar2 +
                                 *(float *)(lVar6 + lVar13 * 4);
                            lVar13 = lVar13 + 1;
                          } while (lVar13 < local_c0 + -3);
                        }
                        lVar8 = lVar8 + 1;
                        lVar6 = lVar6 + local_2b0;
                      } while (lVar8 < lVar1);
                    }
                    if (local_b8 != 3) {
                      if (0 < (longlong)local_b0) {
                        lVar6 = local_1d0;
                        lVar8 = local_a8;
                        do {
                          if (4 < lVar14) {
                            fVar2 = *(float *)(param_5 + lVar8 * param_7 * 4 + 0xc + lVar9 * 4);
                            lVar13 = 0;
                            do {
                              *(float *)(lVar6 + lVar13 * 4) =
                                   *(float *)(lVar16 + lVar13 * 4) * -fVar2 +
                                   *(float *)(lVar6 + lVar13 * 4);
                              lVar13 = lVar13 + 1;
                            } while (lVar13 < local_c0 + -4);
                          }
                          lVar8 = lVar8 + 1;
                          lVar6 = lVar6 + local_2b0;
                        } while (lVar8 < lVar1);
                      }
                      if (local_b8 != 4) {
                        if (0 < (longlong)local_b0) {
                          lVar6 = local_1c8;
                          lVar8 = local_a8;
                          do {
                            if (5 < lVar14) {
                              fVar2 = *(float *)(param_5 + lVar8 * param_7 * 4 + 0x10 + lVar9 * 4);
                              lVar13 = 0;
                              do {
                                *(float *)(lVar6 + lVar13 * 4) =
                                     *(float *)(local_230 + lVar13 * 4) * -fVar2 +
                                     *(float *)(lVar6 + lVar13 * 4);
                                lVar13 = lVar13 + 1;
                              } while (lVar13 < local_c0 + -5);
                            }
                            lVar8 = lVar8 + 1;
                            lVar6 = lVar6 + local_2b0;
                          } while (lVar8 < lVar1);
                        }
                        if (local_b8 != 5) {
                          if (0 < (longlong)local_b0) {
                            lVar6 = local_1b8;
                            lVar8 = local_a8;
                            do {
                              if (6 < lVar14) {
                                fVar2 = *(float *)(param_5 + lVar8 * param_7 * 4 + 0x14 + lVar9 * 4)
                                ;
                                lVar13 = 0;
                                do {
                                  *(float *)(lVar6 + lVar13 * 4) =
                                       *(float *)(local_1c0 + lVar13 * 4) * -fVar2 +
                                       *(float *)(lVar6 + lVar13 * 4);
                                  lVar13 = lVar13 + 1;
                                } while (lVar13 < local_c0 + -6);
                              }
                              lVar8 = lVar8 + 1;
                              lVar6 = lVar6 + local_2b0;
                            } while (lVar8 < lVar1);
                          }
                          if (local_b8 != 6) {
                            if (0 < (longlong)local_b0) {
                              lVar6 = lVar7;
                              lVar8 = local_a8;
                              do {
                                if (7 < lVar14) {
                                  fVar2 = *(float *)(param_5 + lVar8 * param_7 * 4 + 0x18 +
                                                    lVar9 * 4);
                                  lVar13 = 0;
                                  do {
                                    *(float *)(lVar6 + lVar13 * 4) =
                                         *(float *)(local_228 + lVar13 * 4) * -fVar2 +
                                         *(float *)(lVar6 + lVar13 * 4);
                                    lVar13 = lVar13 + 1;
                                  } while (lVar13 < local_c0 + -7);
                                }
                                lVar8 = lVar8 + 1;
                                lVar6 = lVar6 + local_2b0;
                              } while (lVar8 < lVar1);
                            }
                            if ((local_b8 != 7) && (lVar6 = local_a8, 0 < (longlong)local_b0)) {
                              do {
                                lVar6 = lVar6 + 1;
                              } while (lVar6 < lVar1);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              local_98 = local_1a8 + lVar9 * 4;
              local_2c0 = lVar16;
              local_2b8 = lVar18;
              local_1b0 = lVar7;
              local_90 = param_7;
              *(longlong *)(puVar10 + -0x10) = lVar18;
              lVar6 = local_190;
              *(longlong *)(puVar10 + -0x18) = local_190;
              *(ulonglong *)(puVar10 + -0x20) = local_108;
              lVar7 = local_c0;
              puVar4 = local_1a0;
              *(undefined8 *)(puVar10 + -0x48) = 0x140eb9bfb;
              FUN_140eba18e(&local_83,puVar4,&local_98,lVar7);
              lVar8 = lVar14 - lVar7;
              if (lVar8 != 0 && lVar7 <= lVar14) {
                local_240 = lVar7 + lVar9;
                local_98 = local_198 + lVar9 * local_100 * 4 + local_240 * 4;
                local_90 = local_100;
                *(undefined8 *)(puVar10 + -0x18) = 0;
                *(undefined8 *)(puVar10 + -0x10) = 0;
                *(longlong *)(puVar10 + -0x20) = lVar8;
                puVar11 = local_d0;
                *(undefined8 *)(puVar10 + -0x48) = 0x140eb9dc7;
                FUN_140eba42a(&local_82,puVar11,&local_98,lVar7);
                local_98 = local_1a8 + local_240 * 4;
                local_90 = param_7;
                *(longlong *)(puVar10 + -8) = lVar18;
                *(longlong *)(puVar10 + -0x18) = lVar6;
                *(longlong *)(puVar10 + -0x20) = lVar7;
                *(ulonglong *)(puVar10 + -0x30) = local_108;
                *(longlong *)(puVar10 + -0x38) = lVar7;
                *(longlong *)(puVar10 + -0x40) = lVar8;
                *(undefined8 *)(puVar10 + -0x10) = 0;
                *(undefined4 *)(puVar10 + -0x28) = 0xbf800000;
                puVar4 = local_1a0;
                *(undefined8 *)(puVar10 + -0x68) = 0x140eb9e46;
                FUN_140ebb53c(&local_81,&local_98,puVar11,puVar4);
              }
              lVar18 = lVar18 + 8;
              local_b8 = local_b8 + -8;
              local_218 = local_218 + 0x20;
              lVar12 = lVar12 + local_2a8;
              local_1e0 = local_1e0 + 0x20;
              local_238 = local_238 + local_2a8;
              local_1d8 = local_1d8 + 0x20;
              local_220 = local_220 + local_2a8;
              local_1d0 = local_1d0 + 0x20;
              lVar16 = local_2c0 + local_2a8;
              local_1c8 = local_1c8 + 0x20;
              local_230 = local_230 + local_2a8;
              local_1b8 = local_1b8 + 0x20;
              local_1c0 = local_1c0 + local_2a8;
              lVar7 = local_1b0 + 0x20;
              local_228 = local_228 + local_2a8;
              lVar9 = local_f8;
              lVar13 = local_2a0;
              lVar14 = local_a0;
              puVar4 = local_c8;
              lVar8 = local_298;
            } while (lVar18 < lVar6);
          }
          lVar16 = local_a8 + local_210;
          local_1e8 = local_1e8 + local_280;
          local_1f0 = local_1f0 + local_280;
          local_1f8 = local_1f8 + local_280;
          local_200 = local_200 + local_280;
          lVar8 = lVar8 + local_280;
          local_208 = local_208 + local_280;
          lVar7 = lVar13 + local_280;
        } while (lVar16 < local_e8);
      }
      lVar9 = lVar9 + lVar14;
      lVar14 = lVar9;
      lVar6 = local_180;
      lVar7 = local_d8;
      uVar15 = local_288;
      lVar8 = local_e0;
      if (local_188 <= lVar9) break;
      do {
        lVar16 = lVar6 - local_f0;
        if (local_f0 <= lVar6) {
          lVar6 = local_f0;
        }
        local_f8 = lVar14;
        if (0 < lVar6) {
          local_90 = local_100;
          local_98 = lVar7;
          *(undefined8 *)(puVar10 + -0x18) = 0;
          *(undefined8 *)(puVar10 + -0x10) = 0;
          *(longlong *)(puVar10 + -0x20) = lVar6;
          puVar4 = local_d0;
          lVar14 = local_190;
          *(undefined8 *)(puVar10 + -0x48) = 0x140eba037;
          FUN_140eba42a(&local_82,puVar4,&local_98,lVar14);
          local_90 = param_7;
          local_98 = lVar8;
          *(undefined8 *)(puVar10 + -0x10) = 0;
          *(undefined8 *)(puVar10 + -8) = 0;
          *(undefined8 *)(puVar10 + -0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar10 + -0x20) = 0xffffffffffffffff;
          *(longlong *)(puVar10 + -0x30) = local_e8;
          *(longlong *)(puVar10 + -0x38) = lVar14;
          *(longlong *)(puVar10 + -0x40) = lVar6;
          *(undefined4 *)(puVar10 + -0x28) = 0xbf800000;
          puVar11 = local_c8;
          puVar4 = local_d0;
          *(undefined8 *)(puVar10 + -0x68) = 0x140eba0a3;
          FUN_140ebb53c(&local_81,&local_98,puVar4,puVar11);
        }
        lVar9 = lVar9 + local_f0;
        lVar8 = lVar8 + local_248;
        lVar7 = lVar7 + local_248;
        lVar14 = local_f8;
        lVar6 = lVar16;
      } while (lVar9 < local_188);
      param_1 = local_260 - local_a0;
      local_178 = local_178 + local_258;
      local_170 = local_170 + local_250;
      local_148 = local_148 + local_258;
      local_140 = local_140 + local_250;
      local_138 = local_138 + local_258;
      local_130 = local_130 + local_250;
      local_128 = local_128 + local_258;
      local_168 = local_168 + local_250;
      local_120 = local_120 + local_258;
      local_160 = local_160 + local_250;
      local_118 = local_118 + local_258;
      local_158 = local_158 + local_250;
      local_110 = local_110 + local_258;
      local_150 = local_150 + local_250;
      local_e0 = local_e0 + local_258;
      local_d8 = local_d8 + local_250;
      local_180 = local_180 - local_a0;
      lVar9 = local_f8;
      lVar14 = local_a0;
    }
  }
  puVar4 = local_268;
  if (0x20000 < local_290) {
    *(undefined8 *)(puVar10 + -0x28) = 0x140eb9faf;
    FUN_1400020a8(puVar4);
  }
  puVar4 = local_270;
  if (0x20000 < uVar15) {
    *(undefined8 *)(puVar10 + -0x28) = 0x140eb9fc5;
    FUN_1400020a8(puVar4);
  }
  if ((local_80 ^ (ulonglong)&local_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar10 + -0x28) = &UNK_140eb9d64;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eba18e FUN_140eba18e body=667 status=ok
// SIG undefined FUN_140eba18e(void)

void FUN_140eba18e(undefined8 param_1,longlong param_2,longlong *param_3,ulonglong param_4,
                  ulonglong param_5,longlong param_6,longlong param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  
  uVar24 = param_5 + 3;
  if (-1 < (longlong)param_5) {
    uVar24 = param_5;
  }
  uVar27 = uVar24 & 0xfffffffffffffffc;
  uVar21 = param_4 + 3;
  if (-1 < (longlong)param_4) {
    uVar21 = param_4;
  }
  if ((longlong)param_5 < 4) {
    lVar28 = 0;
  }
  else {
    lVar29 = 0xc;
    lVar26 = 8;
    lVar30 = 4;
    lVar31 = 0;
    lVar22 = 0;
    lVar28 = 0;
    do {
      lVar28 = lVar28 + param_7 * 4;
      lVar4 = *param_3;
      lVar5 = param_3[1];
      if ((longlong)param_4 < 4) {
        lVar32 = 0;
      }
      else {
        lVar32 = 0;
        do {
          puVar1 = (undefined4 *)(lVar5 * lVar31 + lVar4 + lVar32 * 4);
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          puVar2 = (undefined4 *)(lVar5 * lVar30 + lVar4 + lVar32 * 4);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          uVar11 = puVar2[2];
          uVar12 = puVar2[3];
          puVar2 = (undefined4 *)(lVar5 * lVar26 + lVar4 + lVar32 * 4);
          uVar13 = *puVar2;
          uVar14 = puVar2[1];
          uVar15 = puVar2[2];
          uVar16 = puVar2[3];
          puVar2 = (undefined4 *)(lVar5 * lVar29 + lVar4 + lVar32 * 4);
          uVar17 = *puVar2;
          uVar18 = puVar2[1];
          uVar19 = puVar2[2];
          uVar20 = puVar2[3];
          puVar2 = (undefined4 *)(param_2 + lVar28 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar9;
          puVar2[2] = uVar13;
          puVar2[3] = uVar17;
          puVar1 = (undefined4 *)(param_2 + 0x10 + lVar28 * 4);
          *puVar1 = uVar6;
          puVar1[1] = uVar10;
          puVar1[2] = uVar14;
          puVar1[3] = uVar18;
          puVar1 = (undefined4 *)(param_2 + 0x20 + lVar28 * 4);
          *puVar1 = uVar7;
          puVar1[1] = uVar11;
          puVar1[2] = uVar15;
          puVar1[3] = uVar19;
          puVar1 = (undefined4 *)(param_2 + 0x30 + lVar28 * 4);
          *puVar1 = uVar8;
          puVar1[1] = uVar12;
          puVar1[2] = uVar16;
          puVar1[3] = uVar20;
          lVar28 = lVar28 + 0x10;
          lVar32 = lVar32 + 4;
        } while (lVar32 < (longlong)(uVar21 & 0xfffffffffffffffc));
      }
      lVar25 = param_4 - lVar32;
      if (lVar25 != 0 && lVar32 <= (longlong)param_4) {
        lVar3 = param_2 + 0xc + lVar28 * 4;
        lVar23 = 0;
        do {
          *(undefined4 *)(lVar3 + -0xc + lVar23 * 4) =
               *(undefined4 *)(lVar5 * lVar31 + lVar32 * 4 + lVar4 + lVar23);
          *(undefined4 *)(lVar3 + -8 + lVar23 * 4) =
               *(undefined4 *)(lVar5 * lVar30 + lVar32 * 4 + lVar4 + lVar23);
          *(undefined4 *)(lVar3 + -4 + lVar23 * 4) =
               *(undefined4 *)(lVar5 * lVar26 + lVar32 * 4 + lVar4 + lVar23);
          *(undefined4 *)(lVar3 + lVar23 * 4) =
               *(undefined4 *)(lVar5 * lVar29 + lVar32 * 4 + lVar4 + lVar23);
          lVar23 = lVar23 + 4;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar28 = lVar28 + lVar23;
      }
      lVar28 = lVar28 + ((param_6 - param_4) - param_7) * 4;
      lVar22 = lVar22 + 4;
      lVar29 = lVar29 + 0x10;
      lVar26 = lVar26 + 0x10;
      lVar30 = lVar30 + 0x10;
      lVar31 = lVar31 + 0x10;
    } while (lVar22 < (longlong)uVar27);
  }
  if ((longlong)uVar27 < (longlong)param_5) {
    lVar22 = ((longlong)uVar24 >> 2) << 4;
    do {
      lVar28 = lVar28 + param_7;
      if (0 < (longlong)param_4) {
        lVar26 = param_3[1];
        lVar29 = *param_3;
        uVar24 = 0;
        do {
          *(undefined4 *)(param_2 + lVar28 * 4 + uVar24 * 4) =
               *(undefined4 *)(lVar26 * lVar22 + lVar29 + uVar24 * 4);
          uVar24 = uVar24 + 1;
        } while (param_4 != uVar24);
        lVar28 = lVar28 + uVar24;
      }
      lVar28 = lVar28 + ((param_6 - param_4) - param_7);
      uVar27 = uVar27 + 1;
      lVar22 = lVar22 + 4;
    } while (uVar27 != param_5);
  }
  return;
}



// FUNCTION 140eba42a FUN_140eba42a body=271 status=ok
// SIG undefined FUN_140eba42a(void)

void FUN_140eba42a(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4,
                  ulonglong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar7 = param_5 + 7;
  if (-1 < (longlong)param_5) {
    uVar7 = param_5;
  }
  uVar6 = (longlong)param_5 % 8;
  uVar9 = uVar6 + 3;
  if (-1 < (longlong)uVar6) {
    uVar9 = uVar6;
  }
  if ((longlong)param_5 < 8) {
    lVar8 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    lVar8 = 0;
    do {
      if (0 < param_4) {
        lVar10 = 0;
        do {
          lVar11 = param_3[1] * lVar10 * 4 + *param_3;
          puVar1 = (undefined8 *)(lVar11 + uVar6 * 4);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(lVar11 + (uVar6 | 4) * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(param_2 + lVar8 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(param_2 + 0x10 + lVar8 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar8 = lVar8 + 8;
          lVar10 = lVar10 + 1;
        } while (param_4 != lVar10);
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)uVar6 < (longlong)(uVar7 & 0xfffffffffffffff8));
  }
  for (; (longlong)uVar6 < (longlong)((uVar9 & 0xfffffffffffffffc) + (uVar7 & 0xfffffffffffffff8));
      uVar6 = uVar6 + 4) {
    if (0 < param_4) {
      lVar10 = 0;
      do {
        puVar1 = (undefined8 *)(param_3[1] * lVar10 * 4 + *param_3 + uVar6 * 4);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(param_2 + lVar8 * 4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        lVar8 = lVar8 + 4;
        lVar10 = lVar10 + 1;
      } while (param_4 != lVar10);
    }
  }
  if ((longlong)uVar6 < (longlong)param_5) {
    do {
      if (0 < param_4) {
        lVar10 = 0;
        do {
          *(undefined4 *)(param_2 + lVar8 * 4 + lVar10 * 4) =
               *(undefined4 *)(param_3[1] * lVar10 * 4 + *param_3 + uVar6 * 4);
          lVar10 = lVar10 + 1;
        } while (param_4 != lVar10);
        lVar8 = lVar8 + lVar10;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_5);
  }
  return;
}



// FUNCTION 140eba53a FUN_140eba53a body=4093 status=ok
// SIG undefined FUN_140eba53a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140eba53a(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7,longlong *param_8)

{
  float fVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  float fVar18;
  undefined1 auStack_258 [8];
  longlong local_250;
  longlong local_248;
  ulonglong local_240;
  longlong local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined1 *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  longlong local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)&local_1d8;
  lVar7 = param_8[4];
  lVar10 = param_8[2];
  if (param_1 <= param_8[2]) {
    lVar10 = param_1;
  }
  local_a8 = param_3;
  local_a0 = param_4;
  if ((ulonglong)(lVar10 * lVar7) >> 0x3e != 0) {
    FUN_14001cc68(0xffffffffffffffff);
  }
  uVar6 = lVar7 * param_2;
  local_f0 = (undefined1 *)*param_8;
  uVar16 = lVar10 * lVar7 * 4;
  puVar11 = auStack_258;
  if (local_f0 == (undefined1 *)0x0) {
    if (uVar16 < 0x20001) {
      lVar4 = -(uVar16 + 0x1e & 0xfffffffffffffff0);
      local_f0 = auStack_258 + lVar4;
      puVar11 = auStack_258 + lVar4;
    }
    else {
      local_e0 = uVar6;
      local_f0 = (undefined1 *)FUN_14001cc68(uVar16);
      uVar6 = local_e0;
      puVar11 = auStack_258;
      if (local_f0 == (undefined1 *)0x0) {
        FUN_14001cc68(0xffffffffffffffff);
        local_f0 = (undefined1 *)0x0;
        uVar6 = local_e0;
        puVar11 = auStack_258;
      }
    }
  }
  local_230 = (undefined1 *)0x0;
  if (*param_8 == 0) {
    local_230 = local_f0;
  }
  if (0x3fffffffffffffff < uVar6) {
    *(undefined8 *)(puVar11 + -0x28) = 0x140ebb31b;
    FUN_14001cc68(0xffffffffffffffff,0x10);
  }
  local_e8 = (undefined1 *)param_8[1];
  uVar6 = uVar6 * 4;
  local_e0 = uVar6;
  if (local_e8 == (undefined1 *)0x0) {
    if (uVar6 < 0x20001) {
      *(undefined8 *)(puVar11 + -8) = 0x140eba643;
      lVar4 = -(uVar6 + 0x1e & 0xfffffffffffffff0);
      local_e8 = puVar11 + lVar4;
      puVar11 = puVar11 + lVar4;
    }
    else {
      *(undefined8 *)(puVar11 + -0x28) = 0x140ebb342;
      local_e8 = (undefined1 *)FUN_14001cc68(uVar6,0x10);
      if (local_e8 == (undefined1 *)0x0) {
        *(undefined8 *)(puVar11 + -0x28) = 0x140ebb36a;
        FUN_14001cc68(0xffffffffffffffff,0x10);
        local_e8 = (undefined1 *)0x0;
      }
    }
  }
  puVar12 = (undefined1 *)0x0;
  if (param_8[1] == 0) {
    puVar12 = local_e8;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caabc00) {
    *(undefined8 *)(puVar11 + -0x28) = 0x140ebb236;
    FUN_144b3d300();
    if (DAT_14caabc00 == -1) {
      *(undefined8 *)(puVar11 + -0x28) = 0x140ebb261;
      FUN_1457c02e6(&DAT_14caabbe8);
      *(undefined8 *)(puVar11 + -0x28) = 0x140ebb26d;
      _Init_thread_footer();
    }
  }
  if (param_2 < 1) {
    uVar6 = 0;
  }
  else {
    lVar4 = param_1;
    if (param_1 < param_7) {
      lVar4 = param_7;
    }
    uVar3 = DAT_14caabbf0 / (ulonglong)(lVar4 << 4);
    uVar6 = uVar3 + 3;
    if (-1 < (longlong)uVar3) {
      uVar6 = uVar3;
    }
    uVar6 = uVar6 & 0xfffffffffffffffc;
  }
  uVar3 = 4;
  if (4 < (longlong)uVar6) {
    uVar3 = uVar6;
  }
  local_228 = puVar12;
  if (0 < param_1) {
    local_190 = param_5 + param_1 * 4;
    local_220 = lVar7 * -4;
    local_238 = param_7 * uVar3 * 4;
    local_d0 = param_7 * 4;
    local_188 = param_1 * 4 + (param_1 + -1) * local_a0 * 4 + local_a8;
    local_d8 = local_a0 * 4;
    local_218 = (local_d8 ^ 0xfffffffffffffffc) * lVar7;
    local_250 = ~local_a0 << 5;
    local_180 = param_5 + param_1 * 4 + 8;
    local_118 = param_1 - lVar7;
    local_110 = local_a8 + local_a0 * local_118 * 4;
    local_210 = lVar7 * local_a0 * -4;
    local_150 = param_1 + 2;
    local_178 = param_5 + 0xc + param_1 * 4;
    local_148 = param_1 + 3;
    local_170 = param_5 + 0x10 + param_1 * 4;
    local_140 = param_1 + 4;
    local_168 = param_5 + 0x14 + param_1 * 4;
    local_138 = param_1 + 5;
    local_160 = param_5 + 0x18 + param_1 * 4;
    local_130 = param_1 + 6;
    local_158 = param_5 + 0x1c + param_1 * 4;
    local_128 = param_1 + 7;
    local_208 = lVar10 * 4;
    local_240 = uVar16;
    local_1a0 = lVar7;
    local_198 = uVar3;
    local_120 = lVar10;
    local_f8 = param_2;
    while( true ) {
      local_1a8 = param_1;
      if (local_1a0 < param_1) {
        local_1a8 = local_1a0;
      }
      if (0 < local_f8) {
        local_1e0 = local_178;
        local_1e8 = local_180;
        local_1f0 = local_190;
        lVar8 = 0;
        lVar7 = local_158;
        lVar10 = local_1a8;
        lVar4 = local_168;
        lVar13 = param_5;
        lVar9 = local_160;
        puVar12 = local_e8;
        lVar15 = local_170;
        do {
          local_c0 = local_f8 - lVar8;
          local_100 = local_c0;
          if ((longlong)local_198 < (longlong)local_c0) {
            local_100 = local_198;
          }
          lVar14 = lVar10;
          local_1d8 = lVar15;
          local_1d0 = lVar4;
          local_1c8 = lVar9;
          local_1c0 = lVar7;
          local_b0 = lVar8;
          if (0 < lVar10) {
            lVar7 = local_100 + lVar8;
            local_1b8 = param_5 + lVar8 * param_7 * 4;
            local_1b0 = puVar12 + lVar8 * lVar10 * 4;
            local_108 = local_188;
            local_1f8 = local_1f0;
            uVar6 = 0;
            local_248 = lVar13;
            do {
              lVar4 = 8;
              if (lVar10 < 8) {
                lVar4 = lVar10;
              }
              lVar9 = lVar14 - uVar6;
              lVar13 = 8;
              if (lVar9 < 8) {
                lVar13 = lVar9;
              }
              if (0 < lVar9) {
                if (0 < (longlong)local_c0) {
                  lVar8 = local_1f8 + lVar4 * -4;
                  lVar14 = ~uVar6 + param_1;
                  fVar1 = *(float *)(local_a8 + lVar14 * local_a0 * 4 + lVar14 * 4);
                  lVar15 = local_b0;
                  do {
                    lVar17 = param_5 + lVar15 * param_7 * 4;
                    fVar18 = *(float *)(lVar17 + lVar14 * 4) * (1.0 / fVar1);
                    *(float *)(lVar17 + lVar14 * 4) = fVar18;
                    if (lVar9 != 1) {
                      lVar17 = 0;
                      do {
                        *(float *)(lVar8 + lVar17 * 4) =
                             *(float *)(local_108 + lVar4 * -4 + lVar17 * 4) * -fVar18 +
                             *(float *)(lVar8 + lVar17 * 4);
                        lVar17 = lVar17 + 1;
                      } while (lVar17 < lVar13 + -1);
                    }
                    lVar15 = lVar15 + 1;
                    lVar8 = lVar8 + local_d0;
                  } while (lVar15 < lVar7);
                }
                if (1 < lVar10) {
                  if (0 < (longlong)local_c0) {
                    uVar16 = uVar6 ^ 0xfffffffffffffffe;
                    lVar15 = param_1 + uVar16;
                    fVar1 = *(float *)(local_a8 + lVar15 * local_a0 * 4 + lVar15 * 4);
                    lVar14 = uVar16 * 4 + lVar4 * -4 + local_1e8;
                    lVar8 = local_b0;
                    do {
                      lVar17 = param_5 + lVar8 * param_7 * 4;
                      fVar18 = *(float *)(lVar17 + lVar15 * 4) * (1.0 / fVar1);
                      *(float *)(lVar17 + lVar15 * 4) = fVar18;
                      if (2 < lVar9) {
                        lVar17 = 0;
                        do {
                          *(float *)(lVar14 + lVar17 * 4) =
                               *(float *)(local_d8 * lVar15 + ((uVar16 + local_150) - lVar4) * 4 +
                                          local_a8 + lVar17 * 4) * -fVar18 +
                               *(float *)(lVar14 + lVar17 * 4);
                          lVar17 = lVar17 + 1;
                        } while (lVar17 < lVar13 + -2);
                      }
                      lVar8 = lVar8 + 1;
                      lVar14 = lVar14 + local_d0;
                    } while (lVar8 < lVar7);
                  }
                  if (lVar10 != 2) {
                    if (0 < (longlong)local_c0) {
                      uVar16 = uVar6 ^ 0xfffffffffffffffd;
                      lVar15 = param_1 + uVar16;
                      fVar1 = *(float *)(local_a8 + lVar15 * local_a0 * 4 + lVar15 * 4);
                      lVar14 = uVar16 * 4 + lVar4 * -4 + local_1e0;
                      lVar8 = local_b0;
                      do {
                        lVar17 = param_5 + lVar8 * param_7 * 4;
                        fVar18 = *(float *)(lVar17 + lVar15 * 4) * (1.0 / fVar1);
                        *(float *)(lVar17 + lVar15 * 4) = fVar18;
                        if (3 < lVar9) {
                          lVar17 = 0;
                          do {
                            *(float *)(lVar14 + lVar17 * 4) =
                                 *(float *)(local_d8 * lVar15 + ((uVar16 + local_148) - lVar4) * 4 +
                                            local_a8 + lVar17 * 4) * -fVar18 +
                                 *(float *)(lVar14 + lVar17 * 4);
                            lVar17 = lVar17 + 1;
                          } while (lVar17 < lVar13 + -3);
                        }
                        lVar8 = lVar8 + 1;
                        lVar14 = lVar14 + local_d0;
                      } while (lVar8 < lVar7);
                    }
                    if (lVar10 != 3) {
                      if (0 < (longlong)local_c0) {
                        uVar16 = uVar6 ^ 0xfffffffffffffffc;
                        lVar15 = param_1 + uVar16;
                        fVar1 = *(float *)(local_a8 + lVar15 * local_a0 * 4 + lVar15 * 4);
                        lVar14 = uVar16 * 4 + lVar4 * -4 + local_1d8;
                        lVar8 = local_b0;
                        do {
                          lVar17 = param_5 + lVar8 * param_7 * 4;
                          fVar18 = *(float *)(lVar17 + lVar15 * 4) * (1.0 / fVar1);
                          *(float *)(lVar17 + lVar15 * 4) = fVar18;
                          if (4 < lVar9) {
                            lVar17 = 0;
                            do {
                              *(float *)(lVar14 + lVar17 * 4) =
                                   *(float *)(local_d8 * lVar15 + ((uVar16 + local_140) - lVar4) * 4
                                              + local_a8 + lVar17 * 4) * -fVar18 +
                                   *(float *)(lVar14 + lVar17 * 4);
                              lVar17 = lVar17 + 1;
                            } while (lVar17 < lVar13 + -4);
                          }
                          lVar8 = lVar8 + 1;
                          lVar14 = lVar14 + local_d0;
                        } while (lVar8 < lVar7);
                      }
                      if (lVar10 != 4) {
                        if (0 < (longlong)local_c0) {
                          uVar16 = uVar6 ^ 0xfffffffffffffffb;
                          lVar15 = param_1 + uVar16;
                          fVar1 = *(float *)(local_a8 + lVar15 * local_a0 * 4 + lVar15 * 4);
                          lVar14 = uVar16 * 4 + lVar4 * -4 + local_1d0;
                          lVar8 = local_b0;
                          do {
                            lVar17 = param_5 + lVar8 * param_7 * 4;
                            fVar18 = *(float *)(lVar17 + lVar15 * 4) * (1.0 / fVar1);
                            *(float *)(lVar17 + lVar15 * 4) = fVar18;
                            if (5 < lVar9) {
                              lVar17 = 0;
                              do {
                                *(float *)(lVar14 + lVar17 * 4) =
                                     *(float *)(local_d8 * lVar15 +
                                                ((uVar16 + local_138) - lVar4) * 4 + local_a8 +
                                               lVar17 * 4) * -fVar18 +
                                     *(float *)(lVar14 + lVar17 * 4);
                                lVar17 = lVar17 + 1;
                              } while (lVar17 < lVar13 + -5);
                            }
                            lVar8 = lVar8 + 1;
                            lVar14 = lVar14 + local_d0;
                          } while (lVar8 < lVar7);
                        }
                        if (lVar10 != 5) {
                          if (0 < (longlong)local_c0) {
                            uVar16 = uVar6 ^ 0xfffffffffffffffa;
                            lVar15 = param_1 + uVar16;
                            fVar1 = *(float *)(local_a8 + lVar15 * local_a0 * 4 + lVar15 * 4);
                            lVar14 = uVar16 * 4 + lVar4 * -4 + local_1c8;
                            lVar8 = local_b0;
                            do {
                              lVar17 = param_5 + lVar8 * param_7 * 4;
                              fVar18 = *(float *)(lVar17 + lVar15 * 4) * (1.0 / fVar1);
                              *(float *)(lVar17 + lVar15 * 4) = fVar18;
                              if (6 < lVar9) {
                                lVar17 = 0;
                                do {
                                  *(float *)(lVar14 + lVar17 * 4) =
                                       *(float *)(local_d8 * lVar15 +
                                                  ((uVar16 + local_130) - lVar4) * 4 + local_a8 +
                                                 lVar17 * 4) * -fVar18 +
                                       *(float *)(lVar14 + lVar17 * 4);
                                  lVar17 = lVar17 + 1;
                                } while (lVar17 < lVar13 + -6);
                              }
                              lVar8 = lVar8 + 1;
                              lVar14 = lVar14 + local_d0;
                            } while (lVar8 < lVar7);
                          }
                          if (lVar10 != 6) {
                            if (0 < (longlong)local_c0) {
                              uVar16 = uVar6 ^ 0xfffffffffffffff9;
                              lVar15 = param_1 + uVar16;
                              fVar1 = *(float *)(local_a8 + lVar15 * local_a0 * 4 + lVar15 * 4);
                              lVar14 = uVar16 * 4 + lVar4 * -4 + local_1c0;
                              lVar8 = local_b0;
                              do {
                                lVar17 = param_5 + lVar8 * param_7 * 4;
                                fVar18 = *(float *)(lVar17 + lVar15 * 4) * (1.0 / fVar1);
                                *(float *)(lVar17 + lVar15 * 4) = fVar18;
                                if (7 < lVar9) {
                                  lVar17 = 0;
                                  do {
                                    *(float *)(lVar14 + lVar17 * 4) =
                                         *(float *)(local_d8 * lVar15 +
                                                    ((uVar16 + local_128) - lVar4) * 4 + local_a8 +
                                                   lVar17 * 4) * -fVar18 +
                                         *(float *)(lVar14 + lVar17 * 4);
                                    lVar17 = lVar17 + 1;
                                  } while (lVar17 < lVar13 + -7);
                                }
                                lVar8 = lVar8 + 1;
                                lVar14 = lVar14 + local_d0;
                              } while (lVar8 < lVar7);
                            }
                            if ((lVar10 != 7) && (0 < (longlong)local_c0)) {
                              lVar4 = (uVar6 ^ 0xfffffffffffffff8) + param_1;
                              fVar1 = *(float *)(local_a8 + lVar4 * local_a0 * 4 + lVar4 * 4);
                              pfVar5 = (float *)(local_248 + lVar4 * 4);
                              lVar4 = local_b0;
                              do {
                                *pfVar5 = *pfVar5 * (1.0 / fVar1);
                                lVar4 = lVar4 + 1;
                                pfVar5 = (float *)((longlong)pfVar5 + local_d0);
                              } while (lVar4 < lVar7);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              lVar4 = (param_1 - uVar6) - lVar13;
              local_98 = local_1b8 + lVar4 * 4;
              local_90 = param_7;
              local_c8 = lVar10;
              local_b8 = uVar6;
              *(longlong *)(puVar11 + -0x10) = lVar9 - lVar13;
              lVar14 = local_1a8;
              *(longlong *)(puVar11 + -0x18) = local_1a8;
              *(ulonglong *)(puVar11 + -0x20) = local_100;
              puVar12 = local_1b0;
              *(undefined8 *)(puVar11 + -0x48) = 0x140ebb02b;
              FUN_140eba18e(&local_83,puVar12,&local_98,lVar13);
              lVar10 = lVar9 - lVar13;
              if (lVar10 != 0 && lVar13 <= lVar9) {
                local_200 = local_1b8 + (param_1 - lVar14) * 4;
                local_98 = local_a8 + (param_1 - lVar14) * 4 + lVar4 * local_a0 * 4;
                local_90 = local_a0;
                *(undefined8 *)(puVar11 + -0x18) = 0;
                *(undefined8 *)(puVar11 + -0x10) = 0;
                *(longlong *)(puVar11 + -0x20) = lVar10;
                puVar2 = local_f0;
                *(undefined8 *)(puVar11 + -0x48) = 0x140ebb1a9;
                FUN_140eba42a(&local_82,puVar2,&local_98,lVar13);
                local_98 = local_200;
                local_90 = param_7;
                *(longlong *)(puVar11 + -8) = lVar10;
                *(longlong *)(puVar11 + -0x18) = lVar14;
                *(longlong *)(puVar11 + -0x20) = lVar13;
                *(ulonglong *)(puVar11 + -0x30) = local_100;
                *(longlong *)(puVar11 + -0x38) = lVar13;
                *(longlong *)(puVar11 + -0x40) = lVar10;
                *(undefined8 *)(puVar11 + -0x10) = 0;
                *(undefined4 *)(puVar11 + -0x28) = 0xbf800000;
                puVar12 = local_1b0;
                *(undefined8 *)(puVar11 + -0x68) = 0x140ebb21a;
                FUN_140ebb53c(&local_81,&local_98,puVar2,puVar12);
              }
              uVar6 = uVar6 + 8;
              lVar10 = local_c8 + -8;
              local_1f8 = local_1f8 + -0x20;
              local_108 = local_108 + local_250;
              lVar13 = local_248;
              puVar12 = local_e8;
            } while ((longlong)uVar6 < lVar14);
          }
          lVar8 = local_b0 + local_198;
          local_1f0 = local_1f0 + local_238;
          local_1e8 = local_1e8 + local_238;
          local_1e0 = local_1e0 + local_238;
          lVar15 = local_1d8 + local_238;
          lVar4 = local_1d0 + local_238;
          lVar9 = local_1c8 + local_238;
          lVar7 = local_1c0 + local_238;
          lVar13 = lVar13 + local_238;
          lVar10 = lVar14;
        } while (lVar8 < local_f8);
      }
      lVar7 = param_1 - local_1a0;
      uVar16 = local_240;
      if (lVar7 == 0 || param_1 < local_1a0) break;
      lVar9 = 0;
      lVar10 = local_118;
      lVar4 = param_5;
      lVar13 = local_110;
      do {
        lVar15 = lVar10 - local_120;
        if (local_120 <= lVar10) {
          lVar10 = local_120;
        }
        if (0 < lVar10) {
          local_90 = local_a0;
          local_98 = lVar13;
          *(undefined8 *)(puVar11 + -0x18) = 0;
          *(undefined8 *)(puVar11 + -0x10) = 0;
          *(longlong *)(puVar11 + -0x20) = lVar10;
          puVar12 = local_f0;
          lVar8 = local_1a8;
          *(undefined8 *)(puVar11 + -0x48) = 0x140ebb422;
          FUN_140eba42a(&local_82,puVar12,&local_98,lVar8);
          local_90 = param_7;
          local_98 = lVar4;
          *(undefined8 *)(puVar11 + -0x10) = 0;
          *(undefined8 *)(puVar11 + -8) = 0;
          *(undefined8 *)(puVar11 + -0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + -0x20) = 0xffffffffffffffff;
          *(longlong *)(puVar11 + -0x30) = local_f8;
          *(longlong *)(puVar11 + -0x38) = lVar8;
          *(longlong *)(puVar11 + -0x40) = lVar10;
          *(undefined4 *)(puVar11 + -0x28) = 0xbf800000;
          puVar2 = local_e8;
          puVar12 = local_f0;
          *(undefined8 *)(puVar11 + -0x68) = 0x140ebb495;
          FUN_140ebb53c(&local_81,&local_98,puVar12,puVar2);
        }
        lVar9 = lVar9 + local_120;
        lVar4 = lVar4 + local_208;
        lVar13 = lVar13 + local_208;
        lVar10 = lVar15;
      } while (lVar9 < lVar7);
      local_190 = local_190 + local_220;
      local_188 = local_188 + local_218;
      local_180 = local_180 + local_220;
      local_150 = local_150 - local_1a0;
      local_178 = local_178 + local_220;
      local_148 = local_148 - local_1a0;
      local_170 = local_170 + local_220;
      local_140 = local_140 - local_1a0;
      local_168 = local_168 + local_220;
      local_138 = local_138 - local_1a0;
      local_160 = local_160 + local_220;
      local_130 = local_130 - local_1a0;
      local_158 = local_158 + local_220;
      local_128 = local_128 - local_1a0;
      local_110 = local_110 + local_210;
      local_118 = local_118 - local_1a0;
      param_1 = lVar7;
    }
  }
  puVar12 = local_228;
  if (0x20000 < local_e0) {
    *(undefined8 *)(puVar11 + -0x28) = 0x140ebb38d;
    FUN_1400020a8(puVar12);
  }
  puVar12 = local_230;
  if (0x20000 < uVar16) {
    *(undefined8 *)(puVar11 + -0x28) = 0x140ebb3a3;
    FUN_1400020a8(puVar12);
  }
  if ((local_80 ^ (ulonglong)&local_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -0x28) = &UNK_140ebb13b;
  FUN_144d8e3a0();
}



// FUNCTION 140ebb53c FUN_140ebb53c body=4033 status=ok
// SIG undefined FUN_140ebb53c(void)

void FUN_140ebb53c(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6,ulonglong param_7,float param_8,
                  ulonglong param_9,ulonglong param_10,longlong param_11,longlong param_12)

{
  undefined8 uVar1;
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
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  ulonglong uVar98;
  float *pfVar99;
  ulonglong uVar100;
  ulonglong uVar101;
  ulonglong uVar102;
  longlong lVar103;
  ulonglong uVar104;
  longlong lVar105;
  float *pfVar106;
  longlong lVar107;
  float *pfVar108;
  float *pfVar109;
  ulonglong uVar110;
  longlong lVar111;
  ulonglong uVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar120;
  float fVar121;
  float fVar122;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  undefined1 auStack_238 [32];
  float local_218;
  ulonglong local_210;
  longlong local_208;
  ulonglong local_200;
  ulonglong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined4 local_1e0;
  ulonglong local_1d8;
  undefined8 local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1a8;
  ulonglong local_1a0;
  longlong *local_198;
  ulonglong local_190;
  ulonglong local_188;
  longlong local_180;
  longlong local_178;
  ulonglong local_170;
  ulonglong local_168;
  float *local_160;
  longlong local_158;
  longlong local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  longlong local_138;
  longlong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f1;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (param_9 == 0xffffffffffffffff) {
    param_9 = param_6;
  }
  if (param_10 == 0xffffffffffffffff) {
    param_10 = param_6;
  }
  local_110 = param_7 + 3;
  if (-1 < (longlong)param_7) {
    local_110 = param_7;
  }
  uVar112 = local_110 & 0xfffffffffffffffc;
  local_210 = param_5 + 7;
  if (-1 < (longlong)param_5) {
    local_210 = param_5;
  }
  local_210 = local_210 & 0xfffffffffffffff8;
  uVar101 = (longlong)param_5 % 8;
  uVar104 = uVar101 + 3;
  if (-1 < (longlong)uVar101) {
    uVar104 = uVar101;
  }
  local_208 = (uVar104 & 0xfffffffffffffffc) + local_210;
  lVar107 = param_5 - local_208;
  lVar103 = lVar107 + 3;
  if (-1 < lVar107) {
    lVar103 = lVar107;
  }
  lVar107 = (lVar103 >> 2) + ((longlong)uVar104 >> 2);
  lVar103 = local_210 + lVar107 * 4;
  uVar101 = param_5 - lVar103;
  uVar104 = (param_5 - lVar103) + 3;
  if (-1 < (longlong)uVar101) {
    uVar104 = uVar101;
  }
  local_1d8 = param_6 & 0xfffffffffffffff8;
  uVar98 = (param_6 * -0x10 + 0x7f80) / (param_6 << 5);
  uVar101 = 1;
  if (1 < (longlong)uVar98) {
    uVar101 = uVar98;
  }
  lVar103 = local_210 + ((uVar104 >> 2) + lVar107) * 4;
  if (7 < (longlong)param_5) {
    local_150 = param_11 * 0x20 + param_3;
    local_170 = 0;
    do {
      local_188 = local_170;
      uVar104 = local_170 + uVar101 * 8;
      uVar98 = uVar104;
      if ((longlong)local_210 < (longlong)uVar104) {
        uVar98 = local_210;
      }
      if (3 < (longlong)param_7) {
        local_130 = param_12 * 0x10 + param_4;
        uVar102 = 0;
        do {
          if ((longlong)local_170 < (longlong)local_210) {
            local_118 = uVar102 | 1;
            local_120 = uVar102 | 2;
            local_128 = uVar102 | 3;
            local_160 = (float *)(local_130 + uVar102 * param_10 * 4);
            uVar100 = local_170;
            do {
              pfVar99 = (float *)(local_150 + uVar100 * param_9 * 4);
              lVar107 = *param_2;
              lVar111 = param_2[1];
              pfVar109 = local_160;
              if ((longlong)local_1d8 < 1) {
                fVar113 = 0.0;
                fVar114 = 0.0;
                fVar115 = 0.0;
                fVar116 = 0.0;
                fVar123 = 0.0;
                fVar124 = 0.0;
                fVar125 = 0.0;
                fVar126 = 0.0;
                fVar135 = 0.0;
                fVar136 = 0.0;
                fVar137 = 0.0;
                fVar138 = 0.0;
                fVar131 = 0.0;
                fVar132 = 0.0;
                fVar133 = 0.0;
                fVar134 = 0.0;
                fVar117 = 0.0;
                fVar120 = 0.0;
                fVar121 = 0.0;
                fVar122 = 0.0;
                fVar127 = 0.0;
                fVar128 = 0.0;
                fVar129 = 0.0;
                fVar130 = 0.0;
                fVar143 = 0.0;
                fVar144 = 0.0;
                fVar145 = 0.0;
                fVar146 = 0.0;
                fVar139 = 0.0;
                fVar140 = 0.0;
                fVar141 = 0.0;
                fVar142 = 0.0;
              }
              else {
                fVar139 = 0.0;
                fVar140 = 0.0;
                fVar141 = 0.0;
                fVar142 = 0.0;
                lVar105 = 0;
                fVar143 = 0.0;
                fVar144 = 0.0;
                fVar145 = 0.0;
                fVar146 = 0.0;
                fVar127 = 0.0;
                fVar128 = 0.0;
                fVar129 = 0.0;
                fVar130 = 0.0;
                fVar117 = 0.0;
                fVar120 = 0.0;
                fVar121 = 0.0;
                fVar122 = 0.0;
                fVar131 = 0.0;
                fVar132 = 0.0;
                fVar133 = 0.0;
                fVar134 = 0.0;
                fVar135 = 0.0;
                fVar136 = 0.0;
                fVar137 = 0.0;
                fVar138 = 0.0;
                fVar123 = 0.0;
                fVar124 = 0.0;
                fVar125 = 0.0;
                fVar126 = 0.0;
                fVar113 = 0.0;
                fVar114 = 0.0;
                fVar115 = 0.0;
                fVar116 = 0.0;
                do {
                  fVar2 = *pfVar109;
                  fVar3 = pfVar109[1];
                  fVar4 = pfVar109[2];
                  fVar5 = pfVar109[3];
                  fVar6 = *pfVar99;
                  fVar7 = pfVar99[1];
                  fVar8 = pfVar99[2];
                  fVar9 = pfVar99[3];
                  fVar10 = pfVar99[4];
                  fVar11 = pfVar99[5];
                  fVar12 = pfVar99[6];
                  fVar13 = pfVar99[7];
                  fVar14 = pfVar109[4];
                  fVar15 = pfVar109[5];
                  fVar16 = pfVar109[6];
                  fVar17 = pfVar109[7];
                  fVar18 = pfVar99[8];
                  fVar19 = pfVar99[9];
                  fVar20 = pfVar99[10];
                  fVar21 = pfVar99[0xb];
                  fVar22 = pfVar99[0xc];
                  fVar23 = pfVar99[0xd];
                  fVar24 = pfVar99[0xe];
                  fVar25 = pfVar99[0xf];
                  fVar26 = pfVar109[8];
                  fVar27 = pfVar109[9];
                  fVar28 = pfVar109[10];
                  fVar29 = pfVar109[0xb];
                  fVar30 = pfVar99[0x10];
                  fVar31 = pfVar99[0x11];
                  fVar32 = pfVar99[0x12];
                  fVar33 = pfVar99[0x13];
                  fVar34 = pfVar99[0x14];
                  fVar35 = pfVar99[0x15];
                  fVar36 = pfVar99[0x16];
                  fVar37 = pfVar99[0x17];
                  fVar38 = pfVar109[0xc];
                  fVar39 = pfVar109[0xd];
                  fVar40 = pfVar109[0xe];
                  fVar41 = pfVar109[0xf];
                  fVar42 = pfVar99[0x18];
                  fVar43 = pfVar99[0x19];
                  fVar44 = pfVar99[0x1a];
                  fVar45 = pfVar99[0x1b];
                  fVar46 = pfVar99[0x1c];
                  fVar47 = pfVar99[0x1d];
                  fVar48 = pfVar99[0x1e];
                  fVar49 = pfVar99[0x1f];
                  local_148 = fVar42 * fVar38 +
                              fVar30 * fVar26 + fVar18 * fVar14 + fVar6 * fVar2 + fVar139;
                  fStack_144 = fVar43 * fVar38 +
                               fVar31 * fVar26 + fVar19 * fVar14 + fVar7 * fVar2 + fVar140;
                  fStack_140 = fVar44 * fVar38 +
                               fVar32 * fVar26 + fVar20 * fVar14 + fVar8 * fVar2 + fVar141;
                  fStack_13c = fVar45 * fVar38 +
                               fVar33 * fVar26 + fVar21 * fVar14 + fVar9 * fVar2 + fVar142;
                  fVar50 = pfVar109[0x10];
                  fVar51 = pfVar109[0x11];
                  fVar52 = pfVar109[0x12];
                  fVar53 = pfVar109[0x13];
                  fVar54 = pfVar99[0x20];
                  fVar55 = pfVar99[0x21];
                  fVar56 = pfVar99[0x22];
                  fVar57 = pfVar99[0x23];
                  fVar58 = pfVar99[0x24];
                  fVar59 = pfVar99[0x25];
                  fVar60 = pfVar99[0x26];
                  fVar61 = pfVar99[0x27];
                  fVar62 = pfVar109[0x14];
                  fVar63 = pfVar109[0x15];
                  fVar64 = pfVar109[0x16];
                  fVar65 = pfVar109[0x17];
                  fVar66 = pfVar99[0x28];
                  fVar67 = pfVar99[0x29];
                  fVar68 = pfVar99[0x2a];
                  fVar69 = pfVar99[0x2b];
                  fVar70 = pfVar99[0x2c];
                  fVar71 = pfVar99[0x2d];
                  fVar72 = pfVar99[0x2e];
                  fVar73 = pfVar99[0x2f];
                  fVar74 = pfVar109[0x18];
                  fVar75 = pfVar109[0x19];
                  fVar76 = pfVar109[0x1a];
                  fVar77 = pfVar109[0x1b];
                  fVar78 = pfVar99[0x30];
                  fVar79 = pfVar99[0x31];
                  fVar80 = pfVar99[0x32];
                  fVar81 = pfVar99[0x33];
                  fVar82 = pfVar99[0x34];
                  fVar83 = pfVar99[0x35];
                  fVar84 = pfVar99[0x36];
                  fVar85 = pfVar99[0x37];
                  fVar86 = pfVar109[0x1c];
                  fVar87 = pfVar109[0x1d];
                  fVar88 = pfVar109[0x1e];
                  fVar89 = pfVar109[0x1f];
                  fVar90 = pfVar99[0x38];
                  fVar91 = pfVar99[0x39];
                  fVar92 = pfVar99[0x3a];
                  fVar93 = pfVar99[0x3b];
                  fVar94 = pfVar99[0x3c];
                  fVar95 = pfVar99[0x3d];
                  fVar96 = pfVar99[0x3e];
                  fVar97 = pfVar99[0x3f];
                  fVar139 = fVar90 * fVar86 +
                            fVar78 * fVar74 + fVar66 * fVar62 + fVar54 * fVar50 + local_148;
                  fVar140 = fVar91 * fVar86 +
                            fVar79 * fVar74 + fVar67 * fVar62 + fVar55 * fVar50 + fStack_144;
                  fVar141 = fVar92 * fVar86 +
                            fVar80 * fVar74 + fVar68 * fVar62 + fVar56 * fVar50 + fStack_140;
                  fVar142 = fVar93 * fVar86 +
                            fVar81 * fVar74 + fVar69 * fVar62 + fVar57 * fVar50 + fStack_13c;
                  fVar131 = fVar86 * fVar94 +
                            fVar74 * fVar82 +
                            fVar62 * fVar70 +
                            fVar50 * fVar58 +
                            fVar38 * fVar46 +
                            fVar26 * fVar34 + fVar14 * fVar22 + fVar2 * fVar10 + fVar131;
                  fVar132 = fVar86 * fVar95 +
                            fVar74 * fVar83 +
                            fVar62 * fVar71 +
                            fVar50 * fVar59 +
                            fVar38 * fVar47 +
                            fVar26 * fVar35 + fVar14 * fVar23 + fVar2 * fVar11 + fVar132;
                  fVar133 = fVar86 * fVar96 +
                            fVar74 * fVar84 +
                            fVar62 * fVar72 +
                            fVar50 * fVar60 +
                            fVar38 * fVar48 +
                            fVar26 * fVar36 + fVar14 * fVar24 + fVar2 * fVar12 + fVar133;
                  fVar134 = fVar86 * fVar97 +
                            fVar74 * fVar85 +
                            fVar62 * fVar73 +
                            fVar50 * fVar61 +
                            fVar38 * fVar49 +
                            fVar26 * fVar37 + fVar14 * fVar25 + fVar2 * fVar13 + fVar134;
                  fVar143 = fVar90 * fVar87 +
                            fVar78 * fVar75 +
                            fVar66 * fVar63 +
                            fVar54 * fVar51 +
                            fVar42 * fVar39 +
                            fVar30 * fVar27 + fVar18 * fVar15 + fVar6 * fVar3 + fVar143;
                  fVar144 = fVar91 * fVar87 +
                            fVar79 * fVar75 +
                            fVar67 * fVar63 +
                            fVar55 * fVar51 +
                            fVar43 * fVar39 +
                            fVar31 * fVar27 + fVar19 * fVar15 + fVar7 * fVar3 + fVar144;
                  fVar145 = fVar92 * fVar87 +
                            fVar80 * fVar75 +
                            fVar68 * fVar63 +
                            fVar56 * fVar51 +
                            fVar44 * fVar39 +
                            fVar32 * fVar27 + fVar20 * fVar15 + fVar8 * fVar3 + fVar145;
                  fVar146 = fVar93 * fVar87 +
                            fVar81 * fVar75 +
                            fVar69 * fVar63 +
                            fVar57 * fVar51 +
                            fVar45 * fVar39 +
                            fVar33 * fVar27 + fVar21 * fVar15 + fVar9 * fVar3 + fVar146;
                  fVar135 = fVar87 * fVar94 +
                            fVar75 * fVar82 +
                            fVar63 * fVar70 +
                            fVar51 * fVar58 +
                            fVar39 * fVar46 +
                            fVar27 * fVar34 + fVar15 * fVar22 + fVar3 * fVar10 + fVar135;
                  fVar136 = fVar87 * fVar95 +
                            fVar75 * fVar83 +
                            fVar63 * fVar71 +
                            fVar51 * fVar59 +
                            fVar39 * fVar47 +
                            fVar27 * fVar35 + fVar15 * fVar23 + fVar3 * fVar11 + fVar136;
                  fVar137 = fVar87 * fVar96 +
                            fVar75 * fVar84 +
                            fVar63 * fVar72 +
                            fVar51 * fVar60 +
                            fVar39 * fVar48 +
                            fVar27 * fVar36 + fVar15 * fVar24 + fVar3 * fVar12 + fVar137;
                  fVar138 = fVar87 * fVar97 +
                            fVar75 * fVar85 +
                            fVar63 * fVar73 +
                            fVar51 * fVar61 +
                            fVar39 * fVar49 +
                            fVar27 * fVar37 + fVar15 * fVar25 + fVar3 * fVar13 + fVar138;
                  fVar127 = fVar90 * fVar88 +
                            fVar78 * fVar76 +
                            fVar66 * fVar64 +
                            fVar54 * fVar52 +
                            fVar42 * fVar40 +
                            fVar30 * fVar28 + fVar18 * fVar16 + fVar6 * fVar4 + fVar127;
                  fVar128 = fVar91 * fVar88 +
                            fVar79 * fVar76 +
                            fVar67 * fVar64 +
                            fVar55 * fVar52 +
                            fVar43 * fVar40 +
                            fVar31 * fVar28 + fVar19 * fVar16 + fVar7 * fVar4 + fVar128;
                  fVar129 = fVar92 * fVar88 +
                            fVar80 * fVar76 +
                            fVar68 * fVar64 +
                            fVar56 * fVar52 +
                            fVar44 * fVar40 +
                            fVar32 * fVar28 + fVar20 * fVar16 + fVar8 * fVar4 + fVar129;
                  fVar130 = fVar93 * fVar88 +
                            fVar81 * fVar76 +
                            fVar69 * fVar64 +
                            fVar57 * fVar52 +
                            fVar45 * fVar40 +
                            fVar33 * fVar28 + fVar21 * fVar16 + fVar9 * fVar4 + fVar130;
                  fVar123 = fVar88 * fVar94 +
                            fVar76 * fVar82 +
                            fVar64 * fVar70 +
                            fVar52 * fVar58 +
                            fVar40 * fVar46 +
                            fVar28 * fVar34 + fVar16 * fVar22 + fVar4 * fVar10 + fVar123;
                  fVar124 = fVar88 * fVar95 +
                            fVar76 * fVar83 +
                            fVar64 * fVar71 +
                            fVar52 * fVar59 +
                            fVar40 * fVar47 +
                            fVar28 * fVar35 + fVar16 * fVar23 + fVar4 * fVar11 + fVar124;
                  fVar125 = fVar88 * fVar96 +
                            fVar76 * fVar84 +
                            fVar64 * fVar72 +
                            fVar52 * fVar60 +
                            fVar40 * fVar48 +
                            fVar28 * fVar36 + fVar16 * fVar24 + fVar4 * fVar12 + fVar125;
                  fVar126 = fVar88 * fVar97 +
                            fVar76 * fVar85 +
                            fVar64 * fVar73 +
                            fVar52 * fVar61 +
                            fVar40 * fVar49 +
                            fVar28 * fVar37 + fVar16 * fVar25 + fVar4 * fVar13 + fVar126;
                  fVar117 = fVar90 * fVar89 +
                            fVar78 * fVar77 +
                            fVar66 * fVar65 +
                            fVar54 * fVar53 +
                            fVar42 * fVar41 +
                            fVar30 * fVar29 + fVar18 * fVar17 + fVar6 * fVar5 + fVar117;
                  fVar120 = fVar91 * fVar89 +
                            fVar79 * fVar77 +
                            fVar67 * fVar65 +
                            fVar55 * fVar53 +
                            fVar43 * fVar41 +
                            fVar31 * fVar29 + fVar19 * fVar17 + fVar7 * fVar5 + fVar120;
                  fVar121 = fVar92 * fVar89 +
                            fVar80 * fVar77 +
                            fVar68 * fVar65 +
                            fVar56 * fVar53 +
                            fVar44 * fVar41 +
                            fVar32 * fVar29 + fVar20 * fVar17 + fVar8 * fVar5 + fVar121;
                  fVar122 = fVar93 * fVar89 +
                            fVar81 * fVar77 +
                            fVar69 * fVar65 +
                            fVar57 * fVar53 +
                            fVar45 * fVar41 +
                            fVar33 * fVar29 + fVar21 * fVar17 + fVar9 * fVar5 + fVar122;
                  fVar113 = fVar89 * fVar94 +
                            fVar77 * fVar82 +
                            fVar65 * fVar70 +
                            fVar53 * fVar58 +
                            fVar41 * fVar46 +
                            fVar29 * fVar34 + fVar17 * fVar22 + fVar5 * fVar10 + fVar113;
                  fVar114 = fVar89 * fVar95 +
                            fVar77 * fVar83 +
                            fVar65 * fVar71 +
                            fVar53 * fVar59 +
                            fVar41 * fVar47 +
                            fVar29 * fVar35 + fVar17 * fVar23 + fVar5 * fVar11 + fVar114;
                  fVar115 = fVar89 * fVar96 +
                            fVar77 * fVar84 +
                            fVar65 * fVar72 +
                            fVar53 * fVar60 +
                            fVar41 * fVar48 +
                            fVar29 * fVar36 + fVar17 * fVar24 + fVar5 * fVar12 + fVar115;
                  fVar116 = fVar89 * fVar97 +
                            fVar77 * fVar85 +
                            fVar65 * fVar73 +
                            fVar53 * fVar61 +
                            fVar41 * fVar49 +
                            fVar29 * fVar37 + fVar17 * fVar25 + fVar5 * fVar13 + fVar116;
                  pfVar109 = pfVar109 + 0x20;
                  pfVar99 = pfVar99 + 0x40;
                  lVar105 = lVar105 + 8;
                } while (lVar105 < (longlong)local_1d8);
              }
              if (local_1d8 != param_6) {
                lVar105 = 0;
                uVar110 = local_1d8;
                do {
                  pfVar106 = (float *)((longlong)pfVar99 + lVar105 * 2);
                  fVar2 = *pfVar106;
                  fVar3 = pfVar106[1];
                  fVar4 = pfVar106[2];
                  fVar5 = pfVar106[3];
                  pfVar106 = (float *)((longlong)pfVar99 + lVar105 * 2 + 0x10);
                  fVar6 = *pfVar106;
                  fVar7 = pfVar106[1];
                  fVar8 = pfVar106[2];
                  fVar9 = pfVar106[3];
                  pfVar106 = (float *)((longlong)pfVar109 + lVar105);
                  fVar10 = *pfVar106;
                  fVar11 = pfVar106[1];
                  fVar12 = pfVar106[2];
                  fVar13 = pfVar106[3];
                  fVar139 = fVar139 + fVar2 * fVar10;
                  fVar140 = fVar140 + fVar3 * fVar10;
                  fVar141 = fVar141 + fVar4 * fVar10;
                  fVar142 = fVar142 + fVar5 * fVar10;
                  fVar131 = fVar131 + fVar10 * fVar6;
                  fVar132 = fVar132 + fVar10 * fVar7;
                  fVar133 = fVar133 + fVar10 * fVar8;
                  fVar134 = fVar134 + fVar10 * fVar9;
                  fVar143 = fVar143 + fVar2 * fVar11;
                  fVar144 = fVar144 + fVar3 * fVar11;
                  fVar145 = fVar145 + fVar4 * fVar11;
                  fVar146 = fVar146 + fVar5 * fVar11;
                  fVar135 = fVar135 + fVar11 * fVar6;
                  fVar136 = fVar136 + fVar11 * fVar7;
                  fVar137 = fVar137 + fVar11 * fVar8;
                  fVar138 = fVar138 + fVar11 * fVar9;
                  fVar127 = fVar127 + fVar2 * fVar12;
                  fVar128 = fVar128 + fVar3 * fVar12;
                  fVar129 = fVar129 + fVar4 * fVar12;
                  fVar130 = fVar130 + fVar5 * fVar12;
                  fVar123 = fVar123 + fVar12 * fVar6;
                  fVar124 = fVar124 + fVar12 * fVar7;
                  fVar125 = fVar125 + fVar12 * fVar8;
                  fVar126 = fVar126 + fVar12 * fVar9;
                  fVar117 = fVar117 + fVar2 * fVar13;
                  fVar120 = fVar120 + fVar3 * fVar13;
                  fVar121 = fVar121 + fVar4 * fVar13;
                  fVar122 = fVar122 + fVar5 * fVar13;
                  fVar113 = fVar113 + fVar13 * fVar6;
                  fVar114 = fVar114 + fVar13 * fVar7;
                  fVar115 = fVar115 + fVar13 * fVar8;
                  fVar116 = fVar116 + fVar13 * fVar9;
                  uVar110 = uVar110 + 1;
                  lVar105 = lVar105 + 0x10;
                } while ((longlong)uVar110 < (longlong)param_6);
              }
              pfVar99 = (float *)(lVar107 + lVar111 * uVar102 * 4 + uVar100 * 4);
              pfVar109 = (float *)(lVar107 + lVar111 * local_118 * 4 + uVar100 * 4);
              pfVar108 = (float *)(uVar100 * 4 + lVar107 + lVar111 * local_120 * 4);
              pfVar106 = (float *)(lVar107 + lVar111 * local_128 * 4 + uVar100 * 4);
              fVar2 = *pfVar109;
              fVar3 = pfVar109[1];
              fVar4 = pfVar109[2];
              fVar5 = pfVar109[3];
              fVar6 = pfVar109[4];
              fVar7 = pfVar109[5];
              fVar8 = pfVar109[6];
              fVar9 = pfVar109[7];
              *pfVar99 = fVar139 * param_8 + *pfVar99;
              pfVar99[1] = fVar140 * param_8 + pfVar99[1];
              pfVar99[2] = fVar141 * param_8 + pfVar99[2];
              pfVar99[3] = fVar142 * param_8 + pfVar99[3];
              pfVar99[4] = fVar131 * param_8 + pfVar99[4];
              pfVar99[5] = fVar132 * param_8 + pfVar99[5];
              pfVar99[6] = fVar133 * param_8 + pfVar99[6];
              pfVar99[7] = fVar134 * param_8 + pfVar99[7];
              *pfVar109 = fVar143 * param_8 + fVar2;
              pfVar109[1] = fVar144 * param_8 + fVar3;
              pfVar109[2] = fVar145 * param_8 + fVar4;
              pfVar109[3] = fVar146 * param_8 + fVar5;
              pfVar109[4] = fVar135 * param_8 + fVar6;
              pfVar109[5] = fVar136 * param_8 + fVar7;
              pfVar109[6] = fVar137 * param_8 + fVar8;
              pfVar109[7] = fVar138 * param_8 + fVar9;
              fVar131 = *pfVar106;
              fVar132 = pfVar106[1];
              fVar133 = pfVar106[2];
              fVar134 = pfVar106[3];
              fVar135 = pfVar106[4];
              fVar136 = pfVar106[5];
              fVar137 = pfVar106[6];
              fVar138 = pfVar106[7];
              *pfVar108 = fVar127 * param_8 + *pfVar108;
              pfVar108[1] = fVar128 * param_8 + pfVar108[1];
              pfVar108[2] = fVar129 * param_8 + pfVar108[2];
              pfVar108[3] = fVar130 * param_8 + pfVar108[3];
              pfVar108[4] = fVar123 * param_8 + pfVar108[4];
              pfVar108[5] = fVar124 * param_8 + pfVar108[5];
              pfVar108[6] = fVar125 * param_8 + pfVar108[6];
              pfVar108[7] = fVar126 * param_8 + pfVar108[7];
              *pfVar106 = fVar117 * param_8 + fVar131;
              pfVar106[1] = fVar120 * param_8 + fVar132;
              pfVar106[2] = fVar121 * param_8 + fVar133;
              pfVar106[3] = fVar122 * param_8 + fVar134;
              pfVar106[4] = fVar113 * param_8 + fVar135;
              pfVar106[5] = fVar114 * param_8 + fVar136;
              pfVar106[6] = fVar115 * param_8 + fVar137;
              pfVar106[7] = fVar116 * param_8 + fVar138;
              uVar100 = uVar100 + 8;
            } while ((longlong)uVar100 < (longlong)uVar98);
          }
          uVar102 = uVar102 + 4;
        } while ((longlong)uVar102 < (longlong)uVar112);
      }
      if ((longlong)uVar112 < (longlong)param_7) {
        uVar102 = uVar112;
        do {
          if ((longlong)local_170 < (longlong)local_210) {
            pfVar99 = (float *)(param_4 + param_12 * 4 + uVar102 * param_10 * 4);
            uVar100 = local_170;
            do {
              pfVar109 = (float *)(local_150 + uVar100 * param_9 * 4);
              pfVar106 = pfVar99;
              if ((longlong)local_1d8 < 1) {
                fVar113 = 0.0;
                fVar114 = 0.0;
                fVar115 = 0.0;
                fVar116 = 0.0;
                fVar117 = 0.0;
                fVar120 = 0.0;
                fVar121 = 0.0;
                fVar122 = 0.0;
              }
              else {
                fVar117 = 0.0;
                fVar120 = 0.0;
                fVar121 = 0.0;
                fVar122 = 0.0;
                lVar107 = 0;
                fVar113 = 0.0;
                fVar114 = 0.0;
                fVar115 = 0.0;
                fVar116 = 0.0;
                do {
                  fVar123 = *pfVar106;
                  fVar124 = pfVar106[1];
                  fVar125 = pfVar106[2];
                  fVar126 = pfVar106[3];
                  fVar127 = pfVar106[4];
                  fVar128 = pfVar106[5];
                  fVar129 = pfVar106[6];
                  fVar130 = pfVar106[7];
                  fVar117 = pfVar109[0x38] * fVar130 +
                            pfVar109[0x30] * fVar129 +
                            pfVar109[0x28] * fVar128 +
                            pfVar109[0x20] * fVar127 +
                            pfVar109[0x18] * fVar126 +
                            pfVar109[0x10] * fVar125 +
                            pfVar109[8] * fVar124 + *pfVar109 * fVar123 + fVar117;
                  fVar120 = pfVar109[0x39] * fVar130 +
                            pfVar109[0x31] * fVar129 +
                            pfVar109[0x29] * fVar128 +
                            pfVar109[0x21] * fVar127 +
                            pfVar109[0x19] * fVar126 +
                            pfVar109[0x11] * fVar125 +
                            pfVar109[9] * fVar124 + pfVar109[1] * fVar123 + fVar120;
                  fVar121 = pfVar109[0x3a] * fVar130 +
                            pfVar109[0x32] * fVar129 +
                            pfVar109[0x2a] * fVar128 +
                            pfVar109[0x22] * fVar127 +
                            pfVar109[0x1a] * fVar126 +
                            pfVar109[0x12] * fVar125 +
                            pfVar109[10] * fVar124 + pfVar109[2] * fVar123 + fVar121;
                  fVar122 = pfVar109[0x3b] * fVar130 +
                            pfVar109[0x33] * fVar129 +
                            pfVar109[0x2b] * fVar128 +
                            pfVar109[0x23] * fVar127 +
                            pfVar109[0x1b] * fVar126 +
                            pfVar109[0x13] * fVar125 +
                            pfVar109[0xb] * fVar124 + pfVar109[3] * fVar123 + fVar122;
                  fVar113 = fVar130 * pfVar109[0x3c] +
                            fVar129 * pfVar109[0x34] +
                            fVar128 * pfVar109[0x2c] +
                            fVar127 * pfVar109[0x24] +
                            fVar126 * pfVar109[0x1c] +
                            fVar125 * pfVar109[0x14] +
                            fVar124 * pfVar109[0xc] + fVar123 * pfVar109[4] + fVar113;
                  fVar114 = fVar130 * pfVar109[0x3d] +
                            fVar129 * pfVar109[0x35] +
                            fVar128 * pfVar109[0x2d] +
                            fVar127 * pfVar109[0x25] +
                            fVar126 * pfVar109[0x1d] +
                            fVar125 * pfVar109[0x15] +
                            fVar124 * pfVar109[0xd] + fVar123 * pfVar109[5] + fVar114;
                  fVar115 = fVar130 * pfVar109[0x3e] +
                            fVar129 * pfVar109[0x36] +
                            fVar128 * pfVar109[0x2e] +
                            fVar127 * pfVar109[0x26] +
                            fVar126 * pfVar109[0x1e] +
                            fVar125 * pfVar109[0x16] +
                            fVar124 * pfVar109[0xe] + fVar123 * pfVar109[6] + fVar115;
                  fVar116 = fVar130 * pfVar109[0x3f] +
                            fVar129 * pfVar109[0x37] +
                            fVar128 * pfVar109[0x2f] +
                            fVar127 * pfVar109[0x27] +
                            fVar126 * pfVar109[0x1f] +
                            fVar125 * pfVar109[0x17] +
                            fVar124 * pfVar109[0xf] + fVar123 * pfVar109[7] + fVar116;
                  pfVar106 = pfVar106 + 8;
                  pfVar109 = pfVar109 + 0x40;
                  lVar107 = lVar107 + 8;
                } while (lVar107 < (longlong)local_1d8);
              }
              if (local_1d8 != param_6) {
                lVar107 = 0;
                uVar110 = local_1d8;
                do {
                  fVar123 = *(float *)((longlong)pfVar106 + lVar107);
                  pfVar108 = pfVar109 + lVar107 * 2;
                  fVar117 = fVar117 + *pfVar108 * fVar123;
                  fVar120 = fVar120 + pfVar108[1] * fVar123;
                  fVar121 = fVar121 + pfVar108[2] * fVar123;
                  fVar122 = fVar122 + pfVar108[3] * fVar123;
                  pfVar108 = pfVar109 + lVar107 * 2 + 4;
                  fVar113 = fVar113 + fVar123 * *pfVar108;
                  fVar114 = fVar114 + fVar123 * pfVar108[1];
                  fVar115 = fVar115 + fVar123 * pfVar108[2];
                  fVar116 = fVar116 + fVar123 * pfVar108[3];
                  uVar110 = uVar110 + 1;
                  lVar107 = lVar107 + 4;
                } while ((longlong)uVar110 < (longlong)param_6);
              }
              pfVar109 = (float *)(param_2[1] * uVar102 * 4 + *param_2 + uVar100 * 4);
              *pfVar109 = fVar117 * param_8 + *pfVar109;
              pfVar109[1] = fVar120 * param_8 + pfVar109[1];
              pfVar109[2] = fVar121 * param_8 + pfVar109[2];
              pfVar109[3] = fVar122 * param_8 + pfVar109[3];
              pfVar109[4] = fVar113 * param_8 + pfVar109[4];
              pfVar109[5] = fVar114 * param_8 + pfVar109[5];
              pfVar109[6] = fVar115 * param_8 + pfVar109[6];
              pfVar109[7] = fVar116 * param_8 + pfVar109[7];
              uVar100 = uVar100 + 8;
            } while ((longlong)uVar100 < (longlong)uVar98);
          }
          uVar102 = uVar102 + 1;
        } while (uVar102 != param_7);
      }
      local_1a8 = local_1d8;
      local_190 = uVar112;
      local_170 = uVar104;
      local_168 = local_210;
      local_138 = local_208;
      local_108 = param_8;
      fStack_104 = param_8;
      fStack_100 = param_8;
      fStack_fc = param_8;
    } while ((longlong)uVar104 < (longlong)local_210);
  }
  local_1c0 = param_6;
  local_1c8 = param_7;
  local_1e8 = param_12;
  local_1f0 = param_11;
  local_218 = param_8;
  local_1d0 = 8;
  local_1e0 = 8;
  local_200 = param_9;
  local_1f8 = param_10;
  local_1b8 = uVar112;
  local_1a0 = param_10;
  local_198 = param_2;
  local_180 = param_3;
  local_178 = lVar103;
  local_158 = param_4;
  FUN_1457c0528(&local_f1,param_2,param_3);
  if (lVar103 < (longlong)param_5) {
    if (3 < (longlong)param_7) {
      uVar104 = param_6 + 3;
      if (-1 < (longlong)param_6) {
        uVar104 = param_6;
      }
      lVar103 = 0;
      do {
        pfVar99 = (float *)(param_12 * 0x10 + param_4 + lVar103 * local_1a0 * 4);
        lVar107 = local_178;
        do {
          pfVar109 = (float *)(local_180 + param_11 * 4 + lVar107 * param_9 * 4);
          pfVar106 = pfVar99;
          if ((longlong)param_6 < 4) {
            fVar113 = 0.0;
            fVar114 = 0.0;
            fVar115 = 0.0;
            fVar116 = 0.0;
            lVar111 = 0;
          }
          else {
            fVar117 = 0.0;
            fVar120 = 0.0;
            fVar121 = 0.0;
            fVar122 = 0.0;
            lVar111 = 0;
            fVar123 = 0.0;
            fVar124 = 0.0;
            fVar125 = 0.0;
            fVar126 = 0.0;
            fVar127 = 0.0;
            fVar128 = 0.0;
            fVar129 = 0.0;
            fVar130 = 0.0;
            fVar113 = 0.0;
            fVar114 = 0.0;
            fVar115 = 0.0;
            fVar116 = 0.0;
            do {
              fVar131 = *pfVar109;
              fVar132 = pfVar109[1];
              fVar133 = pfVar109[2];
              fVar134 = pfVar109[3];
              fVar113 = fVar113 + *pfVar106 * fVar131;
              fVar114 = fVar114 + pfVar106[1] * fVar131;
              fVar115 = fVar115 + pfVar106[2] * fVar131;
              fVar116 = fVar116 + pfVar106[3] * fVar131;
              fVar127 = fVar127 + pfVar106[4] * fVar132;
              fVar128 = fVar128 + pfVar106[5] * fVar132;
              fVar129 = fVar129 + pfVar106[6] * fVar132;
              fVar130 = fVar130 + pfVar106[7] * fVar132;
              fVar123 = fVar123 + fVar133 * pfVar106[8];
              fVar124 = fVar124 + fVar133 * pfVar106[9];
              fVar125 = fVar125 + fVar133 * pfVar106[10];
              fVar126 = fVar126 + fVar133 * pfVar106[0xb];
              fVar117 = fVar117 + fVar134 * pfVar106[0xc];
              fVar120 = fVar120 + fVar134 * pfVar106[0xd];
              fVar121 = fVar121 + fVar134 * pfVar106[0xe];
              fVar122 = fVar122 + fVar134 * pfVar106[0xf];
              pfVar106 = pfVar106 + 0x10;
              pfVar109 = pfVar109 + 4;
              lVar111 = lVar111 + 4;
            } while (lVar111 < (longlong)(uVar104 & 0xfffffffffffffffc));
            fVar113 = fVar113 + fVar127 + fVar123 + fVar117;
            fVar114 = fVar114 + fVar128 + fVar124 + fVar120;
            fVar115 = fVar115 + fVar129 + fVar125 + fVar121;
            fVar116 = fVar116 + fVar130 + fVar126 + fVar122;
          }
          if (lVar111 < (longlong)param_6) {
            lVar105 = 0;
            do {
              fVar117 = pfVar109[lVar105];
              fVar113 = fVar113 + fVar117 * *pfVar106;
              fVar114 = fVar114 + fVar117 * pfVar106[1];
              fVar115 = fVar115 + fVar117 * pfVar106[2];
              fVar116 = fVar116 + fVar117 * pfVar106[3];
              pfVar106 = pfVar106 + 4;
              lVar105 = lVar105 + 1;
            } while (param_6 - lVar111 != lVar105);
          }
          lVar111 = local_198[1];
          pfVar109 = (float *)(lVar111 * lVar103 * 4 + *local_198 + lVar107 * 4);
          auVar118 = insertps(ZEXT416((uint)*pfVar109),pfVar109[lVar111],0x10);
          auVar118 = insertps(auVar118,pfVar109[lVar111 * 2],0x20);
          auVar118 = insertps(auVar118,pfVar109[lVar111 * 3],0x30);
          auVar119._0_4_ = auVar118._0_4_ + fVar113 * param_8;
          auVar119._4_4_ = auVar118._4_4_ + fVar114 * param_8;
          auVar119._8_4_ = auVar118._8_4_ + fVar115 * param_8;
          auVar119._12_4_ = auVar118._12_4_ + fVar116 * param_8;
          *pfVar109 = auVar119._0_4_;
          uVar1 = extractps(auVar119,1);
          *(undefined8 *)(pfVar109 + lVar111) = uVar1;
          uVar1 = extractps(auVar119,2);
          *(undefined8 *)(pfVar109 + lVar111 * 2) = uVar1;
          uVar1 = extractps(auVar119,3);
          *(undefined8 *)(pfVar109 + lVar111 * 3) = uVar1;
          lVar107 = lVar107 + 1;
        } while (lVar107 < (longlong)param_5);
        lVar103 = lVar103 + 4;
      } while (lVar103 < (longlong)uVar112);
    }
    if ((longlong)uVar112 < (longlong)param_7) {
      param_4 = param_4 + ((longlong)local_110 >> 2) * local_1a0 * 0x10 + param_12 * 4;
      lVar111 = local_180 + param_11 * 4 + param_9 * local_178 * 4;
      lVar103 = lVar111;
      lVar107 = local_178;
      do {
        do {
          fVar113 = 0.0;
          if (0 < (longlong)param_6) {
            uVar104 = 0;
            do {
              fVar113 = fVar113 + *(float *)(lVar103 + uVar104 * 4) *
                                  *(float *)(param_4 + uVar104 * 4);
              uVar104 = uVar104 + 1;
            } while (param_6 != uVar104);
          }
          lVar105 = local_198[1] * uVar112 * 4 + *local_198;
          *(float *)(lVar105 + lVar107 * 4) = fVar113 * param_8 + *(float *)(lVar105 + lVar107 * 4);
          lVar107 = lVar107 + 1;
          lVar103 = lVar103 + param_9 * 4;
        } while (lVar107 < (longlong)param_5);
        uVar112 = uVar112 + 1;
        param_4 = param_4 + local_1a0 * 4;
        lVar103 = lVar111;
        lVar107 = local_178;
      } while (uVar112 != param_7);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ebc504 FUN_140ebc504 body=228 status=ok
// SIG undefined FUN_140ebc504(void)

longlong FUN_140ebc504(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9f9a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c1ca;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148b82b8b;
    local_40 = &LAB_14081a769;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2920;
    FUN_14081cfa3(L"/Script/OakGame",L"CarryableObject",&DAT_14cb9f9a8,FUN_1465a5cda);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9f9a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebc5ea FUN_140ebc5ea body=164 status=ok
// SIG undefined FUN_140ebc5ea(void)

undefined8 FUN_140ebc5ea(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9493b8) {
    FUN_144b3d300(&DAT_14c9493b8);
    if (DAT_14c9493b8 == -1) {
      FUN_1446f470e(&local_18,L"GbxDefPtr",1);
      DAT_14c9493b0 = FUN_141473ad5(local_18);
      _Init_thread_footer(&DAT_14c9493b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c9493b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebc690 FUN_140ebc690 body=29 status=ok
// SIG undefined FUN_140ebc690(void)

void FUN_140ebc690(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xb92) = 0;
  *(undefined4 *)(param_1 + 0xc10) = 0;
  *(undefined1 *)(param_1 + 0xcd0) = 0;
  FUN_140ebc6ae();
  return;
}



// FUNCTION 140ebc6ae FUN_140ebc6ae body=1427 status=ok
// SIG undefined FUN_140ebc6ae(void)

void FUN_140ebc6ae(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined1 local_f0;
  longlong *local_e0;
  longlong *local_d8;
  undefined2 local_d0 [2];
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  byte local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar5 = (longlong *)FUN_1401654a2();
  if (plVar5 == (longlong *)0x0) goto LAB_140ebcacf;
  if (((*(longlong *)(param_1 + 0xb18) != 0) && (*(longlong **)(param_1 + 0xb20) != (longlong *)0x0)
      ) && (cVar3 = (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x68))(), cVar3 != '\0')) {
    *(undefined1 *)(param_1 + 0xd46) = 1;
  }
  if (*(char *)(param_1 + 0xd46) == '\x01') {
    cVar3 = (**(code **)(*plVar5 + 0x48))(plVar5,1);
    if (cVar3 != '\0') {
      uVar4 = (**(code **)(*plVar5 + 0x38))(plVar5);
      (**(code **)(*plVar5 + 0x80))(plVar5,1,uVar4);
    }
    FUN_141229268(param_1,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_118);
  }
  pcVar6 = (char *)(**(code **)(*plVar5 + 0x20))();
  if ((*pcVar6 == '\x02') || (pcVar6[1] != '\0')) {
    lVar9 = *plVar5;
  }
  else {
    lVar9 = *plVar5;
    if (*pcVar6 != '\x01') {
      cVar3 = (**(code **)(lVar9 + 0x50))(plVar5);
      if (cVar3 == '\0') {
        FUN_141229268(param_1,0);
        fVar16 = *(float *)(param_1 + 0xb98);
        if ((*(longlong *)(param_1 + 0xb18) != 0) &&
           (*(longlong **)(param_1 + 0xb20) != (longlong *)0x0)) {
          fVar15 = (float)(**(code **)(**(longlong **)(param_1 + 0xb20) + 0x40))();
          fVar16 = fVar16 * fVar15;
        }
        uVar7 = DAT_14cb94e08;
        if (*(char *)(param_1 + 0xd46) != '\0') {
          uVar7 = 0;
        }
        local_f0 = 1;
        local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffffffffff00);
        cVar3 = FUN_140dd024a(param_1,uVar7,0x3f800000,fVar16);
        *(char *)(param_1 + 0xba8) = cVar3;
        if ((((cVar3 != '\0') && (*(longlong *)(param_1 + 0xb38) != 0)) &&
            (*(longlong **)(param_1 + 0xb40) != (longlong *)0x0)) &&
           (plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0xb40) + 8))(),
           plVar5 != (longlong *)0x0)) {
          uVar7 = FUN_1407ca880();
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar7);
          if (plVar5 != (longlong *)0x0) {
            uVar7 = FUN_1407ca880();
            plVar8 = (longlong *)FUN_144718840(plVar5,uVar7);
            if (((plVar5 != plVar8) && (plVar8 != (longlong *)0x0)) &&
               (lVar9 = (**(code **)(*plVar8 + 0x50))(plVar8), lVar9 != 0)) {
              FUN_140dc01da(lVar9,&local_c8,*(undefined1 *)(param_1 + 0xba8));
              plVar5 = local_c8;
              if (local_c8 != (longlong *)0x0) {
                if ((*(longlong *)(param_1 + 0xb18) != 0) &&
                   (*(longlong **)(param_1 + 0xb20) != (longlong *)0x0)) {
                  uVar7 = (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x18))();
                  local_e0 = plVar5;
                  plVar5 = (longlong *)CONCAT44(uStack_bc,local_c0);
                  local_d8 = plVar5;
                  if (plVar5 == (longlong *)0x0) {
                    FUN_140ebccae(uVar7,*(undefined1 *)(param_1 + 0xd44),&local_e0);
                  }
                  else {
                    LOCK();
                    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
                    UNLOCK();
                    FUN_140ebccae(uVar7,*(undefined1 *)(param_1 + 0xd44));
                    if (plVar5 != (longlong *)0x0) {
                      LOCK();
                      plVar8 = plVar5 + 1;
                      *(int *)plVar8 = (int)*plVar8 + -1;
                      UNLOCK();
                      if ((int)*plVar8 == 0) {
                        (**(code **)*plVar5)(plVar5);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar5 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar5 + 0x10))(plVar5);
                        }
                      }
                    }
                  }
                }
                if (fVar16 <= 0.0) {
                  fVar16 = (float)(**(code **)(*local_c8 + 0x28))();
                }
              }
              plVar5 = (longlong *)CONCAT44(uStack_bc,local_c0);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar8 = plVar5 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar5 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
              }
            }
          }
        }
        if (fVar16 <= 0.01) {
          fVar16 = 0.01;
        }
        uVar7 = FUN_1401b4c98(param_1);
        fVar15 = *(float *)(param_1 + 0x74);
        uVar14 = -(uint)(0.0001 < fVar15);
        local_e0 = (longlong *)0x0;
        local_d8._0_4_ = 0;
        FUN_1446efa72(&local_e0,0,3,0x10);
        plVar5 = local_e0;
        local_d8 = (longlong *)CONCAT44(local_d8._4_4_,3);
        *local_e0 = (longlong)&PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_e0[2] = lVar10;
        *local_e0 = (longlong)&PTR_FUN_14b4ab980;
        local_e0[3] = 0;
        iVar11 = 0;
        if (param_1 != 0) {
          uVar2 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_e0 + 3) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar11 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar11 = DAT_14c964868 + 1;
            UNLOCK();
            iVar12 = DAT_14c964868 + 1;
            bVar13 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar11;
            if (bVar13) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar12);
            }
            LOCK();
            iVar11 = *(int *)(lVar9 + 0x10);
            bVar13 = iVar11 == 0;
            if (bVar13) {
              *(int *)(lVar9 + 0x10) = iVar12;
              iVar11 = 0;
            }
            UNLOCK();
            if (bVar13) {
              iVar11 = iVar12;
            }
          }
        }
        *(int *)((longlong)plVar5 + 0x1c) = iVar11;
        plVar5[4] = (longlong)&LAB_1418be8ec;
        *(undefined4 *)(plVar5 + 5) = 0;
        local_c8 = (longlong *)0x0;
        local_c0 = 0;
        FUN_14487d8d8(&local_c8,&local_e0);
        local_88 = 1;
        local_f8 = local_d0;
        local_d0[0] = 0;
        local_cc = 0xbf800000;
        FUN_1406f4044(uVar7,param_1 + 0xba0,&local_c8,
                      fVar16 * (float)(~uVar14 & 0x3f800000 | (uint)(1.0 / fVar15) & uVar14));
        (*(code *)(&PTR_LAB_14a1c87a0)[local_88])(&local_c8);
        if ((int)local_d8 != 0) {
          if (local_e0 == (longlong *)0x0) goto LAB_140ebcacf;
          (**(code **)*local_e0)(local_e0,0);
          FUN_1446efa72(&local_e0,0,0,0x10);
          local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffff00000000);
        }
        if (local_e0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_140ebcacf:
      if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  (**(code **)(lVar9 + 0x38))(plVar5);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_118);
}



// FUNCTION 140ebccae FUN_140ebccae body=809 status=ok
// SIG undefined FUN_140ebccae(void)

void FUN_140ebccae(longlong param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Dst;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  void *local_68;
  ulonglong uStack_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xa8) <= (int)param_2)) goto LAB_140ebceb1;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  (**(code **)(*(longlong *)*param_3 + 0x38))((longlong *)*param_3,&local_68);
  _Src = local_68;
  lVar6 = (longlong)(int)uStack_60;
  if (lVar6 != 0) {
    lVar8 = *(longlong *)(param_1 + 0xa0) + (ulonglong)param_2 * 0x170;
    *(int *)(lVar8 + 0x90) = (int)uStack_60;
    FUN_140b1783e((void *)(lVar8 + 0x78),uStack_60 & 0xffffffff,*(undefined4 *)(lVar8 + 0x94));
    _Dst = *(void **)(lVar8 + 0x88);
    if (*(void **)(lVar8 + 0x88) == (void *)0x0) {
      _Dst = (void *)(lVar8 + 0x78);
    }
    memcpy(_Dst,_Src,lVar6 << 3);
    lVar6 = *param_3;
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar8 = 0;
      uVar10 = 0;
      iVar5 = 0;
    }
    else {
      uVar10 = *(uint *)(*(longlong *)(param_1 + 0x150) + 0xc);
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar5 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar5 = *(int *)(lVar8 + 0x10);
        bVar11 = iVar5 == 0;
        if (bVar11) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar5 = iVar7;
        }
      }
      lVar8 = *(longlong *)(param_1 + 0x150);
    }
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar2 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_14b3e9c20;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_58[2] = lVar4;
    *local_58 = &PTR_FUN_14b4a9be0;
    local_58[3] = 0;
    iVar7 = 0;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar8 + 0xc);
      *(uint *)(local_58 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar7 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar7 = *(int *)(lVar8 + 0x10);
        bVar11 = iVar7 == 0;
        if (bVar11) {
          *(int *)(lVar8 + 0x10) = iVar9;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar7 = iVar9;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar7;
    *(uint *)(puVar2 + 4) = param_2;
    *(uint *)((longlong)puVar2 + 0x24) = uVar10;
    *(int *)(puVar2 + 5) = iVar5;
    FUN_140ebcfd8(lVar6 + 0x18,local_70,&local_58);
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_140ebcea2;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140ebcea2:
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_140ebceb1:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ebcfd8 FUN_140ebcfd8 body=370 status=ok
// SIG undefined FUN_140ebcfd8(void)

undefined8 * FUN_140ebcfd8(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140ebd158 FUN_140ebd158 body=1238 status=ok
// SIG undefined FUN_140ebd158(void)

void FUN_140ebd158(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  longlong local_68 [3];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1409e12a0;
      local_80 = 0;
      local_88 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1468d96f0;
      local_80 = 0;
      local_88 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_50);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_50 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_50);
    }
  }
  local_68[0] = 0;
  local_68[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_140dafe7a;
      local_80 = 0;
      local_88 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_68);
    }
  }
  uVar2 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_48;
  FUN_1409c23dd(&local_30,local_68);
  local_40 = local_30;
  local_38 = 0xffffffff;
  uVar4 = FUN_140ebd630(uVar2);
  *param_3 = uVar4;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebd630 FUN_140ebd630 body=343 status=ok
// SIG undefined FUN_140ebd630(void)

bool FUN_140ebd630(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  if ((param_1 == (longlong *)0x0) || ((*param_2 == 0 && ((int)param_2[1] == -1)))) {
    return false;
  }
  uVar3 = FUN_140437988();
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar3);
  if (plVar4 == (longlong *)0x0) {
    return false;
  }
  uVar3 = FUN_140437988();
  plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
  if (plVar5 == (longlong *)0x0 || plVar4 == plVar5) {
    return false;
  }
  plVar4 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5);
  lVar2 = *param_2;
  uVar7 = *(uint *)(param_2 + 1);
  if (lVar2 == 0 && uVar7 == 0xffffffff) {
    return false;
  }
  if ((int)uVar7 < 0) {
    lVar6 = *plVar4;
    uVar9 = *(uint *)(plVar4 + 1);
LAB_140ebd6c6:
    if (uVar9 != 0) {
      uVar8 = (ulonglong)(int)uVar9;
      goto LAB_140ebd6d9;
    }
  }
  else {
    uVar9 = *(uint *)(plVar4 + 1);
    uVar8 = (ulonglong)uVar9;
    lVar6 = *plVar4;
    if ((int)uVar9 <= (int)uVar7) goto LAB_140ebd6c6;
    if (*(longlong *)(lVar6 + 0x68 + (ulonglong)uVar7 * 0x88) == lVar2) {
      bVar11 = true;
      goto LAB_140ebd71e;
    }
LAB_140ebd6d9:
    uVar10 = 0;
    do {
      if (*(longlong *)(lVar6 + 0x68 + uVar10) == lVar2) {
        uVar7 = (int)(uVar10 >> 3) * -0xf0f0f0f;
        goto LAB_140ebd710;
      }
      lVar1 = lVar6 + uVar10;
      uVar10 = uVar10 + 0x88;
    } while (lVar1 + 0x88 != uVar8 * 0x88 + lVar6);
  }
  uVar7 = 0xffffffff;
LAB_140ebd710:
  *(uint *)(param_2 + 1) = uVar7;
  bVar11 = uVar7 != 0xffffffff;
  lVar6 = *plVar4;
LAB_140ebd71e:
  if (!bVar11) {
    return false;
  }
  lVar6 = lVar6 + (longlong)(int)uVar7 * 0x88;
  if (lVar6 != 0) {
    return 0 < *(int *)(lVar6 + 0x80);
  }
  return false;
}



// FUNCTION 140ebd788 FUN_140ebd788 body=142 status=ok
// SIG undefined FUN_140ebd788(void)

longlong FUN_140ebd788(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140279a58();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x40;
    if (lVar3 + lVar2 != 0) goto LAB_140ebd7de;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_140ebd818(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 6;
LAB_140ebd7de:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 0x30;
}



// FUNCTION 140ebd818 FUN_140ebd818 body=438 status=ok
// SIG undefined FUN_140ebd818(void)

undefined4 *
FUN_140ebd818(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4,undefined8 param_5
             )

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ddef16(param_1,local_58);
  puVar1 = (undefined8 *)*param_4;
  local_50[2] = 0;
  *local_50 = 0;
  local_50[1] = 0;
  *local_50 = *puVar1;
  uVar4 = FUN_14477b664(puVar1[1]);
  uVar4 = FUN_14477b664(uVar4);
  local_50[1] = uVar4;
  local_50[2] = puVar1[2];
  local_50[3] = 0;
  iVar6 = *(int *)(puVar1 + 4);
  _Src = (void *)puVar1[3];
  *(int *)(local_50 + 4) = iVar6;
  if ((longlong)iVar6 == 0) {
    *(undefined4 *)((longlong)local_50 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(local_50 + 3,iVar6,0);
    memcpy((void *)local_50[3],_Src,(longlong)iVar6 * 2);
  }
  local_50[5] = puVar1[5];
  *(undefined4 *)(local_50 + 6) = 0;
  *(undefined4 *)(local_50 + 7) = 0xffffffff;
  local_68 = param_5;
  cVar2 = FUN_140ddee74(param_1,param_3,local_50);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar3 < 4) {
      iVar6 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_50 + 0x3c) = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 7) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140ddf0fc(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebd9e6 FUN_140ebd9e6 body=214 status=ok
// SIG undefined FUN_140ebd9e6(void)

void FUN_140ebd9e6(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(byte *)(param_1 + 0xb2a) & 1) != 0) && (*(longlong *)(param_1 + 0xb30) != 0)) {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0xb30) + 8);
    puVar3 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
    }
    if (DAT_14c947fe0 == 0) {
      lVar2 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar2);
      DAT_14c947fe0 = lVar2;
    }
    FUN_140045924(DAT_14c947fe0,&local_30,puVar3,1);
    if (local_30 != *(longlong *)(param_1 + 0xaa0)) {
      local_40 = *(undefined4 *)(param_1 + 0xaa8);
      local_38 = 0;
      local_48 = *(longlong *)(param_1 + 0xaa0);
      FUN_1488bce7a(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebdabe FUN_140ebdabe body=115 status=ok
// SIG undefined FUN_140ebdabe(void)

undefined8 * FUN_140ebdabe(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_28 = *param_2;
  local_38 = &local_28;
  local_20 = *param_3;
  local_30 = 2;
  FUN_140ebdb32(param_1,&local_38,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebdb32 FUN_140ebdb32 body=395 status=ok
// SIG undefined FUN_140ebdb32(void)

void FUN_140ebdb32(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  code *local_120;
  undefined1 **local_118;
  undefined1 local_110 [192];
  undefined1 *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x1000000000;
  local_118 = &local_128;
  local_120 = FUN_1427b87f8;
  lVar4 = *param_2;
  lVar2 = param_2[1];
  local_128 = local_110;
  if (DAT_14c947fe0 == 0) {
    lVar3 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar3);
    DAT_14c947fe0 = lVar3;
  }
  lVar3 = DAT_14c947fe0;
  if ((int)lVar2 != 0) {
    lVar6 = 0;
    do {
      cVar1 = FUN_14493bb52(lVar3,*(undefined8 *)(lVar4 + lVar6),&local_120);
      if (cVar1 == '\0') break;
      bVar8 = (longlong)(int)lVar2 * 8 + -8 != lVar6;
      lVar6 = lVar6 + 8;
    } while (bVar8);
  }
  FUN_1447a993c(param_1,local_48 & 0xffffffff);
  if (0 < (int)local_48) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      puVar7 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar7 = local_110;
      }
      uVar5 = uVar5 + 1;
      FUN_1447a993c(param_1,uVar5 & 0xffffffff);
      if ((*(int *)(param_1 + 0x24) < 1) && (*(int *)(param_1 + 4) < 2)) {
        lVar2 = param_1 + 8;
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x18);
      }
      *(undefined4 *)(lVar2 + 8 + lVar4) = *(undefined4 *)((longlong)(puVar7 + lVar4) + 8);
      *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(puVar7 + lVar4);
      lVar4 = lVar4 + 0xc;
    } while ((longlong)uVar5 < (longlong)(int)local_48);
  }
  FUN_14009404e(param_1);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebdd2e FUN_140ebdd2e body=327 status=ok
// SIG undefined FUN_140ebdd2e(void)

void FUN_140ebdd2e(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0xb90) = *(byte *)(param_1 + 0xb90) & 0xbe;
  *(undefined1 *)(param_1 + 0xb91) = 0;
  if ((*(longlong *)(param_1 + 0xd60) == DAT_14cb94e30) || (*(longlong *)(param_1 + 0xb78) != 0)) {
    *(undefined8 *)(param_1 + 0xb78) = 0;
    local_20 = param_1;
    FUN_1447cd2ec(param_1 + 0x9a8,&local_20);
    local_20 = param_1;
    FUN_1447cd2ec(param_1 + 0x9b8,&local_20);
    bVar1 = *(byte *)(param_1 + 0xbd8);
    if (((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) &&
       (lVar2 = *(longlong *)
                 (*(longlong *)(param_1 + 0xbe8) + 0x10 +
                 (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar2 != 0)) {
      FUN_1447f69b6(lVar2 + 0x40);
    }
    if (*(char *)(param_1 + 0xb92) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    bVar1 = *(byte *)(param_1 + 0xbd8);
    if (((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) &&
       (plVar3 = *(longlong **)
                  (*(longlong *)(param_1 + 0xbe8) + 8 +
                  (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x370))();
    }
    FUN_1408bd412(param_1,&DAT_14cb95128);
    local_20 = param_1;
    FUN_1447cd2ec(param_1 + 0x9c8);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ebde88 FUN_140ebde88 body=409 status=ok
// SIG undefined FUN_140ebde88(void)

void FUN_140ebde88(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  
  if ((((*param_2 == 0) || ((*param_2 & 1) != 0)) && ((longlong *)param_1[0x29] != (longlong *)0x0))
     && ((cVar3 = (**(code **)(*(longlong *)param_1[0x29] + 0x3c0))(), cVar3 == '\0' &&
         ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))))) {
    uVar1 = *param_2;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (int)param_1[9] - 1;
    iVar9 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)uVar1 + (int)(uVar1 >> 0x20) * 0x17 & uVar6) * 4);
    if (iVar9 != -1) {
      lVar5 = *param_1;
      do {
        lVar7 = lVar5 + (longlong)iVar9 * 0x40;
        if (*(ulonglong *)(lVar5 + (longlong)iVar9 * 0x40) == uVar1) goto LAB_140ebdf17;
        iVar9 = *(int *)(lVar7 + 0x38);
      } while (iVar9 != -1);
    }
  }
  return;
LAB_140ebdf17:
  while( true ) {
    if (lVar7 == 0) {
      return;
    }
    puVar8 = (uint *)(lVar7 + 8);
    if (puVar8 == (uint *)0x0) {
      return;
    }
    lVar2 = *(longlong *)(lVar7 + 0x10);
    if (lVar2 == 0) break;
    iVar9 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17 & uVar6) * 4);
    while( true ) {
      if (iVar9 == -1) {
        return;
      }
      lVar7 = lVar5 + (longlong)iVar9 * 0x40;
      if (*(longlong *)(lVar5 + (longlong)iVar9 * 0x40) == lVar2) break;
      iVar9 = *(int *)(lVar7 + 0x38);
    }
  }
  if ((*(byte *)(lVar7 + 0x30) & 4) != 0) {
    return;
  }
  cVar3 = FUN_14493c216(puVar8,0);
  if (cVar3 != '\0') {
    return;
  }
  if (*(int *)(lVar7 + 0xc) != 0) {
    uVar6 = *puVar8;
    lVar5 = 0;
    if (((int)uVar6 < 0) || (DAT_14c9647dc <= (int)uVar6)) goto LAB_140ebdfcd;
    plVar4 = (longlong *)
             ((ulonglong)((uVar6 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)(lVar7 + 0xc) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      lVar5 = *plVar4;
      goto LAB_140ebdfcd;
    }
  }
  lVar5 = 0;
LAB_140ebdfcd:
  lVar7 = lVar5;
  lVar5 = lVar7;
  if (*(longlong *)(lVar7 + 0x20) != 0) goto code_r0x000140ebdfdc;
  goto LAB_140ebdfe7;
code_r0x000140ebdfdc:
  lVar5 = *(longlong *)(lVar7 + 0x20);
  if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) != 0) {
    lVar5 = FUN_142840154(lVar7);
LAB_140ebdfe7:
    if (lVar5 != 0) {
      FUN_140ebe022();
      return;
    }
    lVar5 = *(longlong *)(lVar7 + 0x20);
  }
  goto LAB_140ebdfcd;
}



// FUNCTION 140ebe022 FUN_140ebe022 body=283 status=ok
// SIG undefined FUN_140ebe022(void)

ulonglong FUN_140ebe022(longlong param_1)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = CONCAT71((int7)(local_18 >> 8),1);
  if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
    if ((*(longlong *)(param_1 + 0x48) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x28) == 0)) {
      uVar1 = *(uint *)(param_1 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        if ((*(byte *)(param_1 + 0x2c) & 0x10) == 0) {
          cVar2 = FUN_1427b9942(param_1 + 0x38);
          if (cVar2 == '\0') {
            FUN_1427b945c(local_28,param_1 + 0x38);
          }
          else {
            local_28[0] = *(undefined8 *)(param_1 + 0x18);
            FUN_1400021e4(local_28,&local_48);
            local_38 = local_48;
            local_30 = local_40 + -1;
            if (local_40 == 0) {
              local_30 = 0;
            }
            FUN_1427b9488(local_28);
            if (local_48 != 0) {
              FUN_1400020a8();
            }
          }
          uVar3 = FUN_1427b6e88(local_28,local_28);
          if ((char)uVar3 == '\0') {
            *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
          }
          uVar3 = uVar3 ^ 1;
        }
        else {
          *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
        }
        goto LAB_140ebe044;
      }
    }
    uVar3 = 0;
  }
LAB_140ebe044:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebe13e FUN_140ebe13e body=38 status=ok
// SIG undefined FUN_140ebe13e(void)

undefined8 FUN_140ebe13e(undefined8 param_1,int param_2)

{
  FUN_140ebe164();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ebe164 FUN_140ebe164 body=69 status=ok
// SIG undefined FUN_140ebe164(void)

void FUN_140ebe164(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149ef1b68;
  param_1[4] = &PTR_LAB_149ef1b70;
  if ((param_1[1] != 0) && (lVar1 = *(longlong *)(param_1[1] + 8), lVar1 != 0)) {
    FUN_140c4c666(lVar1,param_1 + 4);
  }
  FUN_140cc7538(param_1);
  return;
}



// FUNCTION 140ebe1aa thunk_FUN_140ebe1b0 body=5 status=ok
// SIG undefined thunk_FUN_140ebe1b0(void)

void thunk_FUN_140ebe1b0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [8];
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  byte bStack_38;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 6;
  cVar3 = (**(code **)(param_1[6] + 0x10))(plVar1);
  if (cVar3 == '\0') {
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar5;
      puStack_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      FUN_1446efa72(&puStack_88,0,3,0x10);
      puVar5 = puStack_88;
      uStack_80 = 3;
      *puStack_88 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      puStack_88[2] = lVar6;
      *puStack_88 = &PTR_FUN_14b9a6a50;
      puStack_88[3] = 0;
      FUN_14485c47a(puStack_88 + 3,param_1);
      puVar5[4] = param_1;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_14487d8d8(&uStack_78,&puStack_88);
      bStack_38 = 1;
      FUN_14016fdb0(uVar2,auStack_90,&uStack_78);
      (*(code *)(&PTR_LAB_14a1c87a0)[bStack_38])(&uStack_78);
      FUN_1449db362(&puStack_88);
    }
  }
  else {
    (**(code **)(param_1[6] + 0x38))(plVar1);
    (**(code **)(param_1[6] + 0x30))(plVar1);
    (**(code **)(param_1[6] + 0x20))(plVar1);
    (**(code **)(param_1[6] + 0x18))(plVar1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if ((uStack_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebe1b0 FUN_140ebe1b0 body=417 status=ok
// SIG undefined FUN_140ebe1b0(void)

void FUN_140ebe1b0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  byte local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_1 + 6;
  cVar3 = (**(code **)(param_1[6] + 0x10))(plVar1);
  if (cVar3 == '\0') {
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar5 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar5;
      local_88 = (undefined8 *)0x0;
      local_80 = 0;
      FUN_1446efa72(&local_88,0,3,0x10);
      puVar5 = local_88;
      local_80 = 3;
      *local_88 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_88[2] = lVar6;
      *local_88 = &PTR_FUN_14b9a6a50;
      local_88[3] = 0;
      FUN_14485c47a(local_88 + 3,param_1);
      puVar5[4] = param_1;
      local_78 = 0;
      local_70 = 0;
      FUN_14487d8d8(&local_78,&local_88);
      local_38 = 1;
      FUN_14016fdb0(uVar2,local_90,&local_78);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_38])(&local_78);
      FUN_1449db362(&local_88);
    }
  }
  else {
    (**(code **)(param_1[6] + 0x38))(plVar1);
    (**(code **)(param_1[6] + 0x30))(plVar1);
    (**(code **)(param_1[6] + 0x20))(plVar1);
    (**(code **)(param_1[6] + 0x18))(plVar1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebe35a FUN_140ebe35a body=611 status=ok
// SIG undefined FUN_140ebe35a(void)

void FUN_140ebe35a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  float fVar14;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined4 local_b0 [8];
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar10 = FUN_1409231c6(param_2);
  if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x178) != 0)) {
    lVar11 = FUN_14041aabe();
    lVar10 = *(longlong *)(lVar10 + 0x178);
    if ((lVar10 != 0) &&
       ((((lVar11 != 0 && (lVar1 = *(longlong *)(lVar10 + 0x10), lVar1 != 0)) &&
         (*(int *)(lVar11 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30 && (lVar10 = *(longlong *)(lVar10 + 0x488), lVar10 != 0)))))) {
      if (DAT_14cbae3d8 == 0) {
        local_d0 = &local_58;
        local_58 = FUN_141030f22;
        local_c0 = FUN_14081d0ea;
        local_c8 = &LAB_1464f5fc4;
        local_d8 = &LAB_148c3dd26;
        local_e0 = &LAB_1459673ba;
        local_e8 = L"Engine";
        local_f0 = 0;
        local_f8 = 0x10000004;
        local_100 = 0x10;
        local_108 = 0x1360;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      }
      if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
        fVar14 = (float)FUN_140ebe5be(lVar10);
        if (0.0 < fVar14) {
          (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
          *(double *)(param_1 + 8) = (double)fVar14;
          *(undefined1 *)(param_1 + 0x28) = 3;
          goto LAB_140ebe45a;
        }
      }
    }
  }
  local_90 = 0;
  puVar13 = (undefined4 *)(param_1 + 8);
  if (local_b0 == puVar13) {
    uVar12 = 0;
  }
  else {
    local_68 = local_68 & 0xffffffffffffff00;
    local_38 = local_68;
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    local_58 = (code *)CONCAT44(uStack_84,local_88);
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    uVar12 = *(ulonglong *)(param_1 + 0x28);
    uVar2 = *puVar13;
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    uVar7 = *(undefined4 *)(param_1 + 0x1c);
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    uVar9 = *(undefined4 *)(param_1 + 0x24);
    *(ulonglong *)(param_1 + 0x28) = local_68;
    *(undefined4 *)(param_1 + 0x18) = local_78;
    *(undefined4 *)(param_1 + 0x1c) = uStack_74;
    *(undefined4 *)(param_1 + 0x20) = uStack_70;
    *(undefined4 *)(param_1 + 0x24) = uStack_6c;
    *puVar13 = local_88;
    *(undefined4 *)(param_1 + 0xc) = uStack_84;
    *(undefined4 *)(param_1 + 0x10) = uStack_80;
    *(undefined4 *)(param_1 + 0x14) = uStack_7c;
    local_88 = uVar2;
    uStack_84 = uVar3;
    uStack_80 = uVar4;
    uStack_7c = uVar5;
    local_78 = uVar6;
    uStack_74 = uVar7;
    uStack_70 = uVar8;
    uStack_6c = uVar9;
    local_68 = uVar12;
    (*(code *)(&PTR_FUN_14a1842f0)[uVar12 & 0xff])();
    uVar12 = (ulonglong)local_90;
  }
  (*(code *)(&PTR_FUN_14a1842f0)[uVar12])(local_b0);
LAB_140ebe45a:
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebe5be FUN_140ebe5be body=154 status=ok
// SIG undefined FUN_140ebe5be(void)

float FUN_140ebe5be(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_1 + 0xef8);
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1403ca102(param_1);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x498))(plVar3);
      if (cVar1 == '\b') {
        lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,lVar2,1);
        if (lVar2 == 0) {
          fVar5 = 0.0;
        }
        else {
          fVar5 = (float)*(double *)(lVar2 + 0x6d0);
        }
        uVar4 = -(uint)(*(float *)(param_1 + 0xef4) < fVar5);
        fVar6 = (float)(~uVar4 & (uint)fVar6 |
                       (uint)((fVar5 - *(float *)(param_1 + 0xef4)) + fVar6) & uVar4);
      }
    }
  }
  return fVar6;
}



// FUNCTION 140ebe658 FUN_140ebe658 body=286 status=ok
// SIG undefined FUN_140ebe658(void)

undefined8 FUN_140ebe658(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140ebe770;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140ebe770;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140ebe770:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140ebe71d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140ebe71d;
    }
  }
  uVar6 = 0;
LAB_140ebe71d:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebe778 FUN_140ebe778 body=40 status=ok
// SIG undefined FUN_140ebe778(void)

void FUN_140ebe778(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140e0b1f6(param_1 + 0x48);
  if (iVar1 < 1) {
    return;
  }
  FUN_1457b3914(param_1);
  return;
}



// FUNCTION 140ebe7a0 FUN_140ebe7a0 body=41 status=ok
// SIG undefined FUN_140ebe7a0(void)

void FUN_140ebe7a0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140ebe7ca(param_1);
    param_1 = param_1 + 0xc0;
  }
  return;
}



// FUNCTION 140ebe7ca FUN_140ebe7ca body=148 status=ok
// SIG undefined FUN_140ebe7ca(void)

void FUN_140ebe7ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_140ebe994(*(undefined8 *)(lVar1 + 0x58),*(undefined4 *)(lVar1 + 0x60));
    if (*(longlong *)(lVar1 + 0x58) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_140ebe85e(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_140ebe85e(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140ebe85e FUN_140ebe85e body=88 status=ok
// SIG undefined FUN_140ebe85e(void)

void FUN_140ebe85e(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (param_1[10] != 0) {
      FUN_1400020a8();
    }
    FUN_140ebe8e2(param_1 + 2);
    FUN_140ebe8b6(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0xc;
  }
  return;
}



// FUNCTION 140ebe8b6 FUN_140ebe8b6 body=43 status=ok
// SIG undefined FUN_140ebe8b6(void)

void FUN_140ebe8b6(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140ebe8e2 FUN_140ebe8e2 body=55 status=ok
// SIG undefined FUN_140ebe8e2(void)

void FUN_140ebe8e2(longlong *param_1)

{
  FUN_140ebe91a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ebe91a FUN_140ebe91a body=121 status=ok
// SIG undefined FUN_140ebe91a(void)

void FUN_140ebe91a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140ebe994 FUN_140ebe994 body=189 status=ok
// SIG undefined FUN_140ebe994(void)

void FUN_140ebe994(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x48;
    do {
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(param_1 + -8) = 0;
      if (*(int *)(param_1 + -4) != 0) {
        FUN_144727cd0((longlong *)(param_1 + -0x10),0);
      }
      *(undefined8 *)(param_1 + 0x20) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (0x80 < *(uint *)(param_1 + 0x1c)) {
        *(undefined4 *)(param_1 + 0x1c) = 0x80;
        FUN_1446efbd8(param_1);
      }
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x20) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x88;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ebea52 FUN_140ebea52 body=358 status=ok
// SIG undefined FUN_140ebea52(void)

void FUN_140ebea52(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_7;
  local_70 = CONCAT31(local_70._1_3_,param_6);
  local_78 = param_5;
  FUN_140ebebcc(param_1,param_2,param_3);
  if (param_3 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146431698;
      local_48 = &LAB_1486775cb;
      local_50 = &LAB_1464cee35;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = CONCAT44(local_68._4_4_,0x10000005);
      local_70 = 0x10;
      local_78 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
      cVar1 = FUN_1457c1072(param_3);
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebebcc FUN_140ebebcc body=64 status=ok
// SIG undefined FUN_140ebebcc(void)

void FUN_140ebebcc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if ((longlong)*(int *)(param_1 + 0x5f8) != 0) {
    lVar9 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x5f0) + 8 + lVar9) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x5f0) + lVar9) != 0)) {
        iVar1 = *(int *)(param_1 + 0x604);
        *(int *)(param_1 + 0x604) = iVar1 + 1;
        uVar6 = (ulonglong)*(int *)(param_1 + 0x5f8);
        if ((longlong)uVar6 < 1) {
          *(int *)(param_1 + 0x604) = iVar1;
          return;
        }
        bVar7 = false;
        do {
          lVar9 = uVar6 * 0x10 + -8;
          uVar8 = uVar6;
          while (((lVar2 = *(longlong *)(param_1 + 0x5f0), *(int *)(lVar2 + lVar9) != 0 &&
                  (plVar3 = *(longlong **)(lVar2 + -8 + lVar9), plVar3 != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(*plVar3 + 0x60))
                                    (plVar3,param_2,param_3,param_4,param_5,param_6,param_7),
                 cVar5 != '\0'))) {
            lVar9 = lVar9 + -0x10;
            bVar4 = uVar8 < 2;
            uVar8 = uVar8 - 1;
            if (bVar4) {
              *(int *)(param_1 + 0x604) = *(int *)(param_1 + 0x604) + -1;
              if (!bVar7) {
                return;
              }
              goto LAB_1479fe124;
            }
          }
          uVar6 = uVar8 - 1;
          bVar7 = true;
        } while (1 < uVar8);
        *(int *)(param_1 + 0x604) = *(int *)(param_1 + 0x604) + -1;
LAB_1479fe124:
        FUN_14474d06a((longlong *)(param_1 + 0x5f0),0);
        return;
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x5f8) * 0x10 != lVar9);
  }
  return;
}



// FUNCTION 140ebec0c FUN_140ebec0c body=111 status=ok
// SIG undefined FUN_140ebec0c(void)

undefined8 * FUN_140ebec0c(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = cohtml::Property::operator_new(0x88);
  FUN_140841c04(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b455950;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))();
  puVar1[6] = uVar2;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  return puVar1;
}



// FUNCTION 140ebec7c FUN_140ebec7c body=94 status=ok
// SIG undefined FUN_140ebec7c(void)

undefined8 * FUN_140ebec7c(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140841c04(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b455680;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return puVar1;
}



// FUNCTION 140ebecda FUN_140ebecda body=94 status=ok
// SIG undefined FUN_140ebecda(void)

undefined8 * FUN_140ebecda(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140841c04(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b455f80;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return puVar1;
}



// FUNCTION 140ebed38 FUN_140ebed38 body=277 status=ok
// SIG undefined FUN_140ebed38(void)

undefined8 FUN_140ebed38(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140ebee47;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140ebee47;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140ebee47:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140ebedf5;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_140ebedf5;
    }
  }
  uVar6 = 0;
LAB_140ebedf5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebee6c FUN_140ebee6c body=122 status=ok
// SIG undefined FUN_140ebee6c(void)

void FUN_140ebee6c(undefined8 *param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (param_3 == '\0') {
    FUN_1400bc8c2(param_1 + 1,&local_20);
  }
  else {
    FUN_1400bc96c();
  }
  if (((~*(byte *)(param_1 + 6) & 10) == 0) && (*(char *)(param_1 + 1) == '\0')) {
    (**(code **)(*(longlong *)*param_1 + 0x2a8))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140ebeee8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebeee8 FUN_140ebeee8 body=73 status=ok
// SIG undefined FUN_140ebeee8(void)

void FUN_140ebeee8(longlong *param_1)

{
  char cVar1;
  
  if ((*param_1 != 0) && ((*(byte *)(param_1 + 6) & 1) != 0)) {
    cVar1 = FUN_140ebef32(param_1);
    if (((*(byte *)(param_1 + 6) & 4) == 0) == (bool)cVar1) {
      if (cVar1 != '\0') {
        FUN_140ebef6a();
        return;
      }
      FUN_14881649a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140ebef32 FUN_140ebef32 body=56 status=ok
// SIG undefined FUN_140ebef32(void)

bool FUN_140ebef32(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((char)param_1[1] == '\0') {
    iVar1 = FUN_14487fd02(*param_1);
    bVar2 = true;
    if ((iVar1 != 0) && ((*(byte *)(*param_1 + 0x61) & 1) == 0)) {
      bVar2 = (*(byte *)(param_1 + 6) & 2) == 0;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 140ebef6a FUN_140ebef6a body=184 status=ok
// SIG undefined FUN_140ebef6a(void)

void FUN_140ebef6a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 4;
  uVar5 = FUN_1447210f0(*param_1);
  FUN_140ebf024(&local_28,uVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_140ebf15c(local_28,*param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ebf024 FUN_140ebf024 body=310 status=ok
// SIG undefined FUN_140ebf024(void)

longlong * FUN_140ebf024(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb717e8;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebf15c FUN_140ebf15c body=620 status=ok
// SIG undefined FUN_140ebf15c(void)

void FUN_140ebf15c(longlong param_1,longlong param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  uint local_60;
  int local_5c;
  uint *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    if (0 < *(int *)(param_1 + 0x38)) {
      local_5c = 0;
      local_60 = *(uint *)(param_2 + 0xc);
      if ((int)local_60 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((local_60 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_60 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar3 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar3 = *(int *)(lVar9 + 0x10);
        bVar11 = iVar3 == 0;
        if (bVar11) {
          *(int *)(lVar9 + 0x10) = iVar6;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar3 = iVar6;
        }
      }
      local_58 = &local_60;
      local_5c = iVar3;
      FUN_140bf0ae6(param_1 + 0x30);
    }
    for (puVar4 = *(uint **)(param_1 + 0x48); puVar4 != (uint *)0x0; puVar4 = *(uint **)(puVar4 + 4)
        ) {
      if ((puVar4[1] == 0) || (uVar2 = *puVar4, (int)uVar2 < 0)) {
LAB_140ebf25f:
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        if ((int)uVar2 < DAT_14c9647dc) {
          plVar8 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (((plVar8 == (longlong *)0x0) || (*(uint *)(plVar8 + 2) != puVar4[1])) ||
             ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) goto LAB_140ebf25f;
          lVar9 = *plVar8;
        }
      }
      if (lVar9 == param_2) goto LAB_140ebf306;
    }
    lVar9 = (**(code **)(*(longlong *)(param_1 + 0x20) + 0x48))(param_1 + 0x20);
    uVar2 = *(uint *)(param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    dVar1 = *(double *)(lVar9 + 0x6d0);
    uVar5 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar5 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar5 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar7;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar5 = uVar7;
      }
    }
    puVar4 = (uint *)FUN_14001cc68(0x20,0x10);
    *puVar4 = uVar2;
    puVar4[1] = uVar5;
    puVar4[2] = (uint)(float)dVar1;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    if (puVar4 != (uint *)0x0) {
      if (*(longlong *)(param_1 + 0x50) == 0) {
        *(uint **)(param_1 + 0x48) = puVar4;
      }
      else {
        *(uint **)(*(longlong *)(param_1 + 0x50) + 0x10) = puVar4;
        *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(param_1 + 0x50);
      }
      *(uint **)(param_1 + 0x50) = puVar4;
      (**(code **)(*(longlong *)(param_1 + 0x40) + 8))(param_1 + 0x40,*(int *)(param_1 + 0x58) + 1);
    }
  }
LAB_140ebf306:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebf3ca FUN_140ebf3ca body=42 status=ok
// SIG undefined FUN_140ebf3ca(void)

void FUN_140ebf3ca(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140eb10d0(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140ebf3df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_140ebf40a();
  FUN_140f28720(uVar2);
  return;
}



// FUNCTION 140ebf3f4 FUN_140ebf3f4 body=21 status=ok
// SIG undefined FUN_140ebf3f4(void)

void FUN_140ebf3f4(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140ebf40a();
  FUN_140f28720(uVar1);
  return;
}



// FUNCTION 140ebf40a FUN_140ebf40a body=113 status=ok
// SIG undefined FUN_140ebf40a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ebf40a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb8c058;
  if (DAT_14cb8c058 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0xe00,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x1c;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb8c058;
    DAT_14cb8c060 = DAT_14cb8c060 + 0x10;
  }
  DAT_14cb8c058 = (undefined8 *)*puVar2;
  _DAT_14cb8c064 = _DAT_14cb8c064 + 1;
  return;
}



// FUNCTION 140ebf47c FUN_140ebf47c body=73 status=ok
// SIG undefined FUN_140ebf47c(void)

void FUN_140ebf47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140a478a2(param_1,param_2,0);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_140a47a08(param_1,param_2,1);
  }
  FUN_140ebf4c6(*puVar1,param_3,param_4);
  return;
}



// FUNCTION 140ebf4c6 FUN_140ebf4c6 body=1160 status=ok
// SIG undefined FUN_140ebf4c6(void)

void FUN_140ebf4c6(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *_Src;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  void *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    plVar7 = (longlong *)(param_1 + 0x68);
    iVar1 = *(int *)(param_1 + 0x70);
    lVar11 = (longlong)iVar1;
    if (0 < lVar11) {
      plVar6 = (longlong *)*plVar7;
      lVar8 = 0;
      plVar10 = plVar6;
      do {
        if (*plVar10 == *(longlong *)(param_2 + 0x18)) goto LAB_140ebf560;
        lVar8 = lVar8 + 1;
        plVar10 = plVar10 + 3;
      } while (lVar11 != lVar8);
    }
    *(uint *)(param_1 + 0x70) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x74) < iVar1 + 1U) {
      FUN_1417c4678(plVar7,iVar1);
    }
    *(undefined8 *)(*plVar7 + lVar11 * 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(*plVar7 + 8 + lVar11 * 0x18) = 0;
    plVar6 = (longlong *)*plVar7;
    lVar8 = lVar11;
LAB_140ebf560:
    lVar11 = plVar6[lVar8 * 3 + 1];
    *(int *)(plVar6 + lVar8 * 3 + 1) = (int)lVar11 + 1;
    lVar3 = DAT_14cad54b8;
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar9 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar9 = 1;
    }
    if ((int)lVar11 < *(int *)(lVar3 + uVar9 * 4)) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x10 + lVar8 * 0x18) =
           *(undefined8 *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x28) + 0x58) + 0x300);
      plVar7 = *(longlong **)(param_1 + 0x60);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)FUN_14001cc68(0x138,0x10);
        lVar11 = *(longlong *)(param_1 + 0x58);
        lVar8 = *(longlong *)(lVar11 + 0x28);
        FUN_144a679e2(plVar7,*(undefined8 *)(lVar8 + 0x68),
                      (longlong)((*(int *)(lVar8 + 0xa0) * 8 - *(int *)(lVar8 + 0x130)) + -0x235));
        *plVar7 = (longlong)&PTR_FUN_14a8a3730;
        plVar7[0x19] = 0;
        plVar7[0x1a] = lVar11;
        plVar7[0x1b] = 0;
        *(undefined4 *)(plVar7 + 0x1c) = *(undefined4 *)(lVar11 + 0x34);
        *(undefined8 *)((longlong)plVar7 + 0xe4) = *(undefined8 *)(lVar11 + 0x40);
        *(undefined1 *)((longlong)plVar7 + 0xf4) = 0;
        *(undefined8 *)((longlong)plVar7 + 0xec) = 0;
        *(byte *)((longlong)plVar7 + 0xf5) = *(byte *)((longlong)plVar7 + 0xf5) & 0xf8;
        *(undefined1 *)((longlong)plVar7 + 0xf6) = 0;
        plVar7[0x25] = 0;
        plVar7[0x26] = 0x400000000;
        plVar7[0x21] = 0;
        plVar7[0x22] = 0;
        plVar7[0x1f] = 0;
        plVar7[0x20] = 0;
        *(byte *)((longlong)plVar7 + 0x2a) =
             *(byte *)((longlong)plVar7 + 0x2a) & 0xfd |
             *(char *)(*(longlong *)(lVar11 + 0x28) + 0x158) * '\x02';
        if (0x1fe < *(int *)(lVar11 + 0x4c)) {
          *(byte *)((longlong)plVar7 + 0x29) = *(byte *)((longlong)plVar7 + 0x29) | 2;
          for (lVar11 = plVar7[0x11]; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x88)) {
            *(byte *)(lVar11 + 0x29) = *(byte *)(lVar11 + 0x29) | 2;
          }
        }
        *(longlong **)(param_1 + 0x60) = plVar7;
      }
      (**(code **)(*plVar7 + 0x178))
                (plVar7,*(undefined8 *)(param_3 + 0x90),*(undefined8 *)(param_3 + 0xa0));
      uVar2 = *(uint *)(param_3 + 0x130);
      if ((longlong)(int)uVar2 != 0) {
        lVar11 = *(longlong *)(param_1 + 0x60);
        iVar1 = *(int *)(lVar11 + 0x130);
        *(uint *)(lVar11 + 0x130) = iVar1 + uVar2;
        if ((uint)(*(int *)(lVar11 + 0x134) - iVar1) < uVar2) {
          FUN_146f01f82(lVar11 + 0x118,iVar1);
        }
        _Src = *(void **)(param_3 + 0x128);
        if (*(void **)(param_3 + 0x128) == (void *)0x0) {
          _Src = (void *)(param_3 + 0x118);
        }
        lVar8 = lVar11 + 0x118;
        if (*(longlong *)(lVar11 + 0x128) != 0) {
          lVar8 = *(longlong *)(lVar11 + 0x128);
        }
        memcpy((void *)(lVar8 + (longlong)iVar1 * 4),_Src,(longlong)(int)uVar2 << 2);
      }
      *(undefined4 *)(param_3 + 0x130) = 0;
      if (*(int *)(param_3 + 0x134) < 0) {
        FUN_1479d8eae((void *)(param_3 + 0x118),0);
      }
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x68);
      if (lVar11 != 0) {
        uVar2 = *(uint *)(lVar11 + 0x328);
        if ((longlong)(int)uVar2 != 0) {
          lVar8 = *(longlong *)(param_1 + 0x58);
          iVar1 = *(int *)(lVar8 + 0x178);
          *(uint *)(lVar8 + 0x178) = iVar1 + uVar2;
          if ((uint)(*(int *)(lVar8 + 0x17c) - iVar1) < uVar2) {
            FUN_140b3b51e((longlong *)(lVar8 + 0x170),iVar1);
          }
          memcpy((void *)((longlong)iVar1 * 8 + *(longlong *)(lVar8 + 0x170)),
                 *(void **)(lVar11 + 800),(longlong)(int)uVar2 << 3);
          *(undefined4 *)(lVar11 + 0x328) = 0;
          if (*(int *)(lVar11 + 0x32c) < 0) {
            FUN_1417c3e4a(lVar11 + 800,0);
          }
        }
        if ((*(byte *)(*(longlong *)(param_1 + 0x50) + 0xa4) & 2) == 0) {
          FUN_1401b08a2(lVar11,&local_50,param_3,0);
          if ((longlong)(int)local_48 != 0) {
            lVar11 = *(longlong *)(param_1 + 0x58);
            iVar1 = *(int *)(lVar11 + 0x188);
            *(uint *)(lVar11 + 0x188) = iVar1 + local_48;
            if ((uint)(*(int *)(lVar11 + 0x18c) - iVar1) < local_48) {
              FUN_1401b0d4a((longlong *)(lVar11 + 0x180),iVar1);
            }
            memmove((void *)((longlong)iVar1 * 8 + *(longlong *)(lVar11 + 0x180)),local_50,
                    (longlong)(int)local_48 << 3);
            local_48 = 0;
          }
          if (local_50 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
    else {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x68);
      if (*(int *)(lVar11 + 0x32c) < 0) {
        *(undefined4 *)(lVar11 + 0x328) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
      *(undefined4 *)(lVar11 + 0x328) = 0;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ebf96e FUN_140ebf96e body=57 status=ok
// SIG undefined FUN_140ebf96e(void)

void FUN_140ebf96e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5640 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5640 = FUN_140002ddd(FUN_1465c32aa,uVar1,L"MainMenuStationObjectBodySettings");
  }
  return;
}



// FUNCTION 140ebf9a8 FUN_140ebf9a8 body=62 status=ok
// SIG undefined FUN_140ebf9a8(void)

void FUN_140ebf9a8(longlong param_1,undefined4 param_2)

{
  FUN_140457ffc(*(longlong *)(param_1 + 0xa8) + 0x300,param_1);
  FUN_1448c4a0e(param_1,param_2);
  FUN_140ebf9e6(param_1 + 0x380);
  return;
}



// FUNCTION 140ebf9e6 FUN_140ebf9e6 body=4572 status=ok
// SIG undefined FUN_140ebf9e6(void)

void FUN_140ebf9e6(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  longlong lVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  undefined8 unaff_RDI;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  longlong *local_b8;
  uint local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  code *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = FUN_140ec0ca4(param_1 + 0x638,0);
  if ((*(byte *)(param_1 + 0x5e8) & 0x10) == 0) {
    uVar8 = CONCAT71((int7)((ulonglong)uVar5 >> 8),*(byte *)(param_1 + 0x5e8)) & 0xffffffffffffffe9
            | 0x10;
    *(char *)(param_1 + 0x5e8) = (char)uVar8;
    plVar9 = *(longlong **)(param_1 + 0x5e0);
    uVar18 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (plVar9 == (longlong *)0x0) {
LAB_140ebfb21:
      lVar21 = 0;
      plVar9 = (longlong *)0x0;
      uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
    }
    else {
      uVar8 = (ulonglong)*(uint *)(plVar9 + 1);
      do {
        uVar16 = (uint)uVar8;
        if (uVar16 == 0) goto LAB_140ebfb21;
        LOCK();
        uVar12 = *(uint *)(plVar9 + 1);
        if (uVar16 == uVar12) {
          *(uint *)(plVar9 + 1) = uVar16 + 1;
        }
        else {
          uVar8 = (ulonglong)uVar12;
        }
        UNLOCK();
      } while (uVar16 != uVar12);
      lVar21 = *(longlong *)(param_1 + 0x5d8);
      if (lVar21 == 0) {
        lVar21 = 0;
      }
      else {
        FUN_140ec1160(lVar21 + 200,param_1 + 0x598);
        FUN_140ec1160(lVar21 + 0xd8,param_1 + 0x598);
        plVar7 = (longlong *)0x0;
        if (*(longlong *)(param_1 + 0x598) != 0) {
          plVar7 = *(longlong **)(param_1 + 0x5a0);
        }
        lVar6 = (**(code **)(*plVar7 + 0x10))();
        pcVar2 = *(code **)(lVar6 + 0x5a8);
        if (pcVar2 != (code *)0x0) {
          lVar6 = FUN_141048d22();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(pcVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pcVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            local_78 = pcVar2;
            FUN_140ec1232(lVar21 + 0xe8,&local_78);
            FUN_140ec1232(lVar21 + 0xf8,&local_78);
          }
        }
        FUN_1405fa972();
        uVar18 = 0;
      }
      uVar8 = 0;
    }
    if ((*(byte *)(param_1 + 0x5e8) & 1) != 0) {
      local_b0 = (uint)uVar8;
      if (*(longlong *)(param_1 + 0x590) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x5a8);
        if (lVar6 != 0) {
          if (DAT_14cb56270 == 0) {
            local_d0 = &local_78;
            local_78 = FUN_1449e2820;
            local_c0 = FUN_14081d0ea;
            local_c8 = FUN_1427b09ee;
            local_d8 = &LAB_148630fef;
            local_e0 = FUN_1464b6a91;
            local_e8 = L"Engine";
            local_f0 = 0;
            local_f8 = 0x10004001;
            local_100 = 8;
            local_108 = CONCAT44(local_108._4_4_,0x28);
            FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270);
          }
          plVar7 = (longlong *)FUN_144718840(lVar6,DAT_14cb56270);
          if (((plVar7 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar7 + 0x20))(), lVar6 != 0))
             && ((**(code **)(*plVar7 + 0x20))(), *(longlong *)(param_1 + 0x590) != 0)) {
            FUN_14480f766();
          }
        }
        *(undefined8 *)(param_1 + 0x590) = 0;
      }
      local_ac = uVar18;
      local_a8 = plVar9;
      if (*(longlong *)(param_1 + 0x80) != 0 && (char)uVar18 == '\0') {
        iVar4 = *(int *)(param_1 + 0x120);
        if (iVar4 == 0) {
          uVar23 = 1;
          uVar8 = 0;
          iVar11 = 0;
          iVar25 = 0;
        }
        else {
          puVar15 = *(uint **)(param_1 + 0x118);
          if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
            puVar15 = (uint *)(param_1 + 0x108);
          }
          uVar16 = *puVar15;
          if (uVar16 == 0) {
            iVar11 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar11 = iVar4 + -1;
            }
            uVar8 = 0;
            uVar23 = (ulonglong)(uint)(iVar11 >> 5);
            if (iVar11 >> 5 < 1) {
              uVar23 = uVar8;
            }
            iVar25 = 0;
            do {
              if (uVar23 == uVar8) goto LAB_140ebfc3e;
              iVar25 = iVar25 + 0x20;
              uVar16 = puVar15[uVar8 + 1];
              uVar8 = uVar8 + 1;
            } while (uVar16 == 0);
          }
          else {
            uVar8 = 0;
            iVar25 = 0;
          }
          uVar23 = (ulonglong)(-uVar16 & uVar16);
          uVar22 = uVar23 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar11 = (iVar25 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar11) {
            iVar11 = iVar4;
          }
        }
        if (iVar11 < iVar4) {
          uVar16 = 0xffffffff;
          do {
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar11 * 0x18);
            if ((lVar6 != 0) &&
               (*(int *)(*(longlong *)(param_1 + 0xf8) + 0xc + (longlong)iVar11 * 0x18) == 0)) {
              local_108 = 0;
              FUN_140ec12ee(lVar21,lVar6,param_1,*(undefined8 *)(param_1 + 0x80));
              iVar4 = *(int *)(param_1 + 0x120);
            }
            uVar16 = uVar16 & ~(uint)uVar23;
            puVar15 = *(uint **)(param_1 + 0x118);
            if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
              puVar15 = (uint *)(param_1 + 0x108);
            }
            iVar11 = (int)uVar8;
            lVar6 = (longlong)iVar11;
            uVar12 = puVar15[lVar6] & uVar16;
            if (uVar12 == 0) {
              iVar13 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar13 = iVar4 + -1;
              }
              iVar13 = iVar13 >> 5;
              iVar19 = iVar13;
              if (iVar13 < iVar11) {
                iVar19 = iVar11;
              }
              if (iVar13 <= iVar11) break;
              lVar17 = 0;
              while( true ) {
                iVar25 = iVar25 + 0x20;
                uVar12 = puVar15[lVar6 + lVar17 + 1];
                if (uVar12 != 0) break;
                lVar17 = lVar17 + 1;
                if (iVar19 - lVar6 == lVar17) goto LAB_140ebfc3e;
              }
              uVar8 = (ulonglong)(iVar11 + (int)lVar17 + 1);
              uVar16 = 0xffffffff;
            }
            uVar23 = (ulonglong)(-uVar12 & uVar12);
            uVar22 = uVar23 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar11 = (iVar25 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          } while (iVar11 < iVar4);
        }
      }
LAB_140ebfc3e:
      iVar4 = *(int *)(param_1 + 0x140);
      local_a0 = lVar21;
      if (iVar4 < 2) {
        lVar21 = param_1 + 0x130;
        if (*(longlong *)(param_1 + 0x138) != 0) {
          lVar21 = *(longlong *)(param_1 + 0x138);
        }
        iVar11 = iVar4 + 3;
        if (-1 < iVar4) {
          iVar11 = iVar4;
        }
        if (*(int *)(param_1 + 0x100) - *(int *)(param_1 + 300) < iVar11 >> 2) {
          iVar4 = *(int *)(param_1 + 0x120);
          if (iVar4 != 0) {
            puVar15 = *(uint **)(param_1 + 0x118);
            if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
              puVar15 = (uint *)(param_1 + 0x108);
            }
            uVar16 = *puVar15;
            if (uVar16 == 0) {
              uVar8 = 0;
              iVar11 = 0;
              do {
                iVar25 = iVar4 + -1;
                if (iVar4 + -1 < 0) {
                  iVar25 = iVar4 + 0x1e;
                }
                uVar16 = iVar25 >> 5;
                if (iVar25 >> 5 < 1) {
                  uVar16 = 0;
                }
                if (uVar8 == uVar16) goto LAB_140ebfc9d;
                iVar11 = iVar11 + 0x20;
                uVar16 = puVar15[uVar8 + 1];
                uVar8 = uVar8 + 1;
              } while (uVar16 == 0);
            }
            else {
              iVar11 = 0;
              uVar8 = 0;
            }
            uVar22 = (ulonglong)(-uVar16 & uVar16);
            uVar23 = uVar22 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar25 = (iVar11 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
            if (iVar25 < iVar4) {
              uVar16 = 0xffffffff;
              do {
                *(undefined4 *)
                 (lVar21 + (longlong)
                           *(int *)(*(longlong *)(param_1 + 0xf8) + 0x14 + (longlong)iVar25 * 0x18)
                           * 4) = 0xffffffff;
                uVar16 = ~(uint)uVar22 & uVar16;
                puVar15 = *(uint **)(param_1 + 0x118);
                if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
                  puVar15 = (uint *)(param_1 + 0x108);
                }
                iVar13 = *(int *)(param_1 + 0x120);
                iVar25 = (int)uVar8;
                lVar6 = (longlong)iVar25;
                uVar12 = puVar15[lVar6] & uVar16;
                if (uVar12 == 0) {
                  iVar19 = iVar13 + 0x1e;
                  if (-1 < iVar13 + -1) {
                    iVar19 = iVar13 + -1;
                  }
                  iVar19 = iVar19 >> 5;
                  iVar11 = iVar11 + 0x20;
                  iVar20 = iVar19;
                  if (iVar19 < iVar25) {
                    iVar20 = iVar25;
                  }
                  if (iVar25 < iVar19) {
                    lVar17 = 0;
                    do {
                      uVar12 = puVar15[lVar6 + lVar17 + 1];
                      if (uVar12 != 0) {
                        uVar8 = (ulonglong)(iVar25 + (int)lVar17 + 1);
                        uVar16 = 0xffffffff;
                        goto LAB_140ec0a9a;
                      }
                      iVar11 = iVar11 + 0x20;
                      lVar17 = lVar17 + 1;
                    } while (iVar20 - lVar6 != lVar17);
                    uVar16 = 0xffffffff;
                    iVar25 = iVar20;
                  }
                  uVar8 = (ulonglong)(iVar25 + 1);
                  iVar25 = iVar13;
                }
                else {
LAB_140ec0a9a:
                  uVar22 = (ulonglong)(-uVar12 & uVar12);
                  uVar23 = uVar22 * 2 + 1;
                  lVar6 = 0x3f;
                  if (uVar23 != 0) {
                    for (; uVar23 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                    }
                  }
                  iVar25 = (iVar11 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
                  if (iVar13 <= iVar25) {
                    iVar25 = iVar13;
                  }
                }
              } while (iVar25 != iVar4);
            }
          }
        }
        else if (iVar4 == 1) {
          lVar6 = 0;
          do {
            *(undefined4 *)(lVar21 + lVar6 * 4) = 0xffffffff;
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(param_1 + 0x140));
        }
LAB_140ebfc9d:
        FUN_140c3baee(param_1 + 0xf8,0);
      }
      else {
        FUN_140c3baee(param_1 + 0xf8,0);
        *(undefined4 *)(param_1 + 0x140) = 1;
        FUN_140ec35ba();
      }
      plVar9 = (longlong *)(param_1 + 0x160);
      puVar15 = (uint *)(param_1 + 0x170);
      iVar4 = *(int *)(param_1 + 0x188);
      if (iVar4 == 0) {
        uVar8 = 1;
        uVar23 = 0;
        iVar11 = 0;
        iVar25 = 0;
      }
      else {
        puVar14 = *(uint **)(param_1 + 0x180);
        if (*(uint **)(param_1 + 0x180) == (uint *)0x0) {
          puVar14 = puVar15;
        }
        uVar16 = *puVar14;
        if (uVar16 == 0) {
          iVar11 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar11 = iVar4 + -1;
          }
          uVar23 = 0;
          uVar8 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar8 = uVar23;
          }
          iVar25 = 0;
          do {
            if (uVar8 == uVar23) goto LAB_140ec01ca;
            iVar25 = iVar25 + 0x20;
            uVar16 = puVar14[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar23 = 0;
          iVar25 = 0;
        }
        uVar8 = (ulonglong)(-uVar16 & uVar16);
        uVar22 = uVar8 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar11 = (iVar25 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar11) {
          iVar11 = iVar4;
        }
      }
      if (iVar11 < iVar4) {
        uVar16 = 0xffffffff;
        local_b8 = plVar9;
        do {
          pcVar2 = *(code **)(*local_b8 + (longlong)iVar11 * 0x18);
          if ((pcVar2 == (code *)0x0) || (DAT_14c950c29 == 0)) {
            if (pcVar2 != (code *)0x0) goto LAB_140ebfd81;
            plStack_70 = (longlong *)0x0;
            local_78 = pcVar2;
          }
          else {
            FUN_1456cec3c(pcVar2);
LAB_140ebfd81:
            local_78 = pcVar2;
            uVar5 = FUN_1405fa766();
            plStack_70 = (longlong *)FUN_144718840(pcVar2,uVar5);
          }
          lVar6 = (**(code **)(*plStack_70 + 0x10))();
          lVar21 = *(longlong *)(param_1 + 0x598);
          if (lVar21 != 0 && DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar21);
          }
          local_88 = lVar21;
          if ((lVar21 != 0) && ((DAT_14c950c29 & 1) != 0)) {
            FUN_1456cec3c(lVar21);
          }
          FUN_1457c10f0(lVar6 + 0x160,&local_88);
          if ((char)local_ac == '\0') {
            FUN_1405fac16(local_a0,&local_78);
          }
          uVar16 = uVar16 & ~(uint)uVar8;
          puVar14 = *(uint **)(param_1 + 0x180);
          if (*(uint **)(param_1 + 0x180) == (uint *)0x0) {
            puVar14 = puVar15;
          }
          iVar4 = *(int *)(param_1 + 0x188);
          iVar11 = (int)uVar23;
          lVar21 = (longlong)iVar11;
          uVar12 = puVar14[lVar21] & uVar16;
          plVar9 = local_b8;
          if (uVar12 == 0) {
            iVar13 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar13 = iVar4 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar19 = iVar13;
            if (iVar13 < iVar11) {
              iVar19 = iVar11;
            }
            if (iVar13 <= iVar11) break;
            lVar6 = 0;
            while( true ) {
              iVar25 = iVar25 + 0x20;
              uVar12 = puVar14[lVar21 + lVar6 + 1];
              if (uVar12 != 0) break;
              lVar6 = lVar6 + 1;
              if (iVar19 - lVar21 == lVar6) goto LAB_140ec01ca;
            }
            uVar23 = (ulonglong)(iVar11 + (int)lVar6 + 1);
            uVar16 = 0xffffffff;
          }
          uVar8 = (ulonglong)(-uVar12 & uVar12);
          uVar22 = uVar8 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar11 = (iVar25 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        } while (iVar11 < iVar4);
      }
LAB_140ec01ca:
      iVar11 = *(int *)(param_1 + 0x1a8);
      if (iVar11 < 2) {
        lVar21 = param_1 + 0x198;
        if (*(longlong *)(param_1 + 0x1a0) != 0) {
          lVar21 = *(longlong *)(param_1 + 0x1a0);
        }
        iVar25 = iVar11 + 3;
        if (-1 < iVar11) {
          iVar25 = iVar11;
        }
        if (*(int *)(param_1 + 0x168) - *(int *)(param_1 + 0x194) < iVar25 >> 2) {
          if (iVar4 != 0) {
            puVar14 = *(uint **)(param_1 + 0x180);
            if (*(uint **)(param_1 + 0x180) == (uint *)0x0) {
              puVar14 = puVar15;
            }
            uVar16 = *puVar14;
            if (uVar16 == 0) {
              uVar8 = 0;
              iVar11 = 0;
              do {
                iVar25 = iVar4 + -1;
                if (iVar4 + -1 < 0) {
                  iVar25 = iVar4 + 0x1e;
                }
                uVar23 = (ulonglong)(uint)(iVar25 >> 5);
                if (iVar25 >> 5 < 1) {
                  uVar23 = 0;
                }
                if (uVar8 == uVar23) goto LAB_140ec021c;
                iVar11 = iVar11 + 0x20;
                uVar16 = puVar14[uVar8 + 1];
                uVar8 = uVar8 + 1;
              } while (uVar16 == 0);
            }
            else {
              uVar8 = 0;
              iVar11 = 0;
            }
            uVar22 = (ulonglong)(-uVar16 & uVar16);
            uVar23 = uVar22 * 2 + 1;
            lVar6 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar6 == 0; lVar6 = lVar6 + -1) {
              }
            }
            iVar25 = (iVar11 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
            if (iVar25 < iVar4) {
              uVar16 = 0xffffffff;
              do {
                *(undefined4 *)
                 (lVar21 + (longlong)
                           *(int *)(*(longlong *)(param_1 + 0x160) + 0x14 + (longlong)iVar25 * 0x18)
                           * 4) = 0xffffffff;
                uVar16 = ~(uint)uVar22 & uVar16;
                puVar14 = *(uint **)(param_1 + 0x180);
                if (*(uint **)(param_1 + 0x180) == (uint *)0x0) {
                  puVar14 = puVar15;
                }
                iVar13 = *(int *)(param_1 + 0x188);
                iVar25 = (int)uVar8;
                lVar6 = (longlong)iVar25;
                uVar12 = puVar14[lVar6] & uVar16;
                if (uVar12 == 0) {
                  iVar19 = iVar13 + 0x1e;
                  if (-1 < iVar13 + -1) {
                    iVar19 = iVar13 + -1;
                  }
                  iVar19 = iVar19 >> 5;
                  iVar11 = iVar11 + 0x20;
                  iVar20 = iVar19;
                  if (iVar19 < iVar25) {
                    iVar20 = iVar25;
                  }
                  if (iVar25 < iVar19) {
                    lVar17 = 0;
                    do {
                      uVar12 = puVar14[lVar6 + lVar17 + 1];
                      if (uVar12 != 0) {
                        uVar8 = (ulonglong)(iVar25 + (int)lVar17 + 1);
                        uVar16 = 0xffffffff;
                        goto LAB_140ec0916;
                      }
                      iVar11 = iVar11 + 0x20;
                      lVar17 = lVar17 + 1;
                    } while (iVar20 - lVar6 != lVar17);
                    uVar16 = 0xffffffff;
                    iVar25 = iVar20;
                  }
                  uVar8 = (ulonglong)(iVar25 + 1);
                  iVar25 = iVar13;
                }
                else {
LAB_140ec0916:
                  uVar22 = (ulonglong)(-uVar12 & uVar12);
                  uVar23 = uVar22 * 2 + 1;
                  lVar6 = 0x3f;
                  if (uVar23 != 0) {
                    for (; uVar23 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                    }
                  }
                  iVar25 = (iVar11 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
                  if (iVar13 <= iVar25) {
                    iVar25 = iVar13;
                  }
                }
              } while (iVar25 != iVar4);
            }
          }
        }
        else if (iVar11 == 1) {
          lVar6 = 0;
          do {
            *(undefined4 *)(lVar21 + lVar6 * 4) = 0xffffffff;
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(param_1 + 0x1a8));
        }
LAB_140ec021c:
        FUN_140c3ba72(plVar9,0);
      }
      else {
        FUN_140c3ba72(plVar9,0);
        *(undefined4 *)(param_1 + 0x1a8) = 1;
        FUN_1488bfe54(plVar9);
      }
      iVar4 = *(int *)(param_1 + 200);
      if ((longlong)iVar4 != 0) {
        lVar21 = *(longlong *)(param_1 + 0xc0);
        lVar6 = 0;
        do {
          lVar17 = *(longlong *)(lVar21 + lVar6);
          if (lVar17 != 0) {
            local_88 = 0;
            uStack_80 = 0;
            local_78 = (code *)0x14b2ecfe0;
            plStack_70 = (longlong *)CONCAT35(plStack_70._5_3_,0x1a);
            uVar8 = FUN_14001a6c0(&local_78,1);
            if (*(longlong *)(param_1 + 0x598) == 0) {
              local_88 = 0;
              iVar11 = 0;
            }
            else {
              uVar16 = *(uint *)(*(longlong *)(param_1 + 0x598) + 0xc);
              local_88 = CONCAT44(local_88._4_4_,uVar16);
              if ((int)uVar16 < DAT_14c9647dc) {
                lVar24 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
              }
              else {
                lVar24 = 0;
              }
              iVar11 = *(int *)(lVar24 + 0x10);
              if (*(int *)(lVar24 + 0x10) == 0) {
                LOCK();
                iVar11 = DAT_14c964868 + 1;
                UNLOCK();
                iVar25 = DAT_14c964868 + 1;
                bVar26 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar11;
                if (bVar26) {
                  local_b8 = (longlong *)CONCAT44(local_b8._4_4_,iVar25);
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar25);
                  iVar25 = (int)local_b8;
                }
                LOCK();
                iVar11 = *(int *)(lVar24 + 0x10);
                bVar26 = iVar11 == 0;
                if (bVar26) {
                  *(int *)(lVar24 + 0x10) = iVar25;
                  iVar11 = 0;
                }
                UNLOCK();
                if (bVar26) {
                  iVar11 = iVar25;
                }
              }
            }
            uStack_80 = uVar8 & 0xffffffff;
            local_88 = CONCAT44(iVar11,(undefined4)local_88);
            local_98 = 0;
            uStack_90 = 0;
            local_78 = (code *)0x14b2ecffb;
            plStack_70 = (longlong *)CONCAT35(plStack_70._5_3_,0x18);
            uVar8 = FUN_14001a6c0(&local_78,1);
            if (*(longlong *)(param_1 + 0x598) == 0) {
              local_98 = 0;
              iVar11 = 0;
            }
            else {
              uVar16 = *(uint *)(*(longlong *)(param_1 + 0x598) + 0xc);
              local_98 = CONCAT44(local_98._4_4_,uVar16);
              if ((int)uVar16 < DAT_14c9647dc) {
                lVar24 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
              }
              else {
                lVar24 = 0;
              }
              iVar11 = *(int *)(lVar24 + 0x10);
              if (*(int *)(lVar24 + 0x10) == 0) {
                LOCK();
                iVar11 = DAT_14c964868 + 1;
                UNLOCK();
                iVar25 = DAT_14c964868 + 1;
                bVar26 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar11;
                if (bVar26) {
                  local_b8 = (longlong *)CONCAT44(local_b8._4_4_,iVar25);
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar25);
                  iVar25 = (int)local_b8;
                }
                LOCK();
                iVar11 = *(int *)(lVar24 + 0x10);
                bVar26 = iVar11 == 0;
                if (bVar26) {
                  *(int *)(lVar24 + 0x10) = iVar25;
                  iVar11 = 0;
                }
                UNLOCK();
                if (bVar26) {
                  iVar11 = iVar25;
                }
              }
            }
            uStack_90 = uVar8 & 0xffffffff;
            local_98 = CONCAT44(iVar11,(undefined4)local_98);
            FUN_140ec0be8(lVar17 + 0x599,&local_88);
            FUN_140ec0c46(lVar17 + 0x59a,&local_98);
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar4 * 8 != lVar6);
      }
      iVar4 = *(int *)(param_1 + 0xd8);
      if ((longlong)iVar4 != 0) {
        lVar21 = *(longlong *)(param_1 + 0xd0);
        lVar6 = 0;
        do {
          lVar17 = *(longlong *)(lVar21 + lVar6);
          if (lVar17 != 0) {
            local_88 = 0;
            uStack_80 = 0;
            local_78 = (code *)0x14b2ed014;
            plStack_70 = (longlong *)CONCAT35(plStack_70._5_3_,0x1f);
            uVar8 = FUN_14001a6c0(&local_78,1);
            if (*(longlong *)(param_1 + 0x598) == 0) {
              local_88 = 0;
              iVar11 = 0;
            }
            else {
              uVar16 = *(uint *)(*(longlong *)(param_1 + 0x598) + 0xc);
              local_88 = CONCAT44(local_88._4_4_,uVar16);
              if ((int)uVar16 < DAT_14c9647dc) {
                lVar24 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
              }
              else {
                lVar24 = 0;
              }
              iVar11 = *(int *)(lVar24 + 0x10);
              if (*(int *)(lVar24 + 0x10) == 0) {
                LOCK();
                iVar11 = DAT_14c964868 + 1;
                UNLOCK();
                iVar25 = DAT_14c964868 + 1;
                bVar26 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar11;
                if (bVar26) {
                  local_b8 = (longlong *)CONCAT44(local_b8._4_4_,iVar25);
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar25);
                  iVar25 = (int)local_b8;
                }
                LOCK();
                iVar11 = *(int *)(lVar24 + 0x10);
                bVar26 = iVar11 == 0;
                if (bVar26) {
                  *(int *)(lVar24 + 0x10) = iVar25;
                  iVar11 = 0;
                }
                UNLOCK();
                if (bVar26) {
                  iVar11 = iVar25;
                }
              }
            }
            uStack_80 = uVar8 & 0xffffffff;
            local_88 = CONCAT44(iVar11,(undefined4)local_88);
            local_98 = 0;
            uStack_90 = 0;
            local_78 = (code *)0x14b2ed034;
            plStack_70 = (longlong *)CONCAT35(plStack_70._5_3_,0x1d);
            uVar8 = FUN_14001a6c0(&local_78,1);
            if (*(longlong *)(param_1 + 0x598) == 0) {
              local_98 = 0;
              iVar11 = 0;
            }
            else {
              uVar16 = *(uint *)(*(longlong *)(param_1 + 0x598) + 0xc);
              local_98 = CONCAT44(local_98._4_4_,uVar16);
              if ((int)uVar16 < DAT_14c9647dc) {
                lVar24 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
              }
              else {
                lVar24 = 0;
              }
              iVar11 = *(int *)(lVar24 + 0x10);
              if (*(int *)(lVar24 + 0x10) == 0) {
                LOCK();
                iVar11 = DAT_14c964868 + 1;
                UNLOCK();
                iVar25 = DAT_14c964868 + 1;
                bVar26 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar11;
                if (bVar26) {
                  local_b8 = (longlong *)CONCAT44(local_b8._4_4_,iVar25);
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar25);
                  iVar25 = (int)local_b8;
                }
                LOCK();
                iVar11 = *(int *)(lVar24 + 0x10);
                bVar26 = iVar11 == 0;
                if (bVar26) {
                  *(int *)(lVar24 + 0x10) = iVar25;
                  iVar11 = 0;
                }
                UNLOCK();
                if (bVar26) {
                  iVar11 = iVar25;
                }
              }
            }
            uStack_90 = uVar8 & 0xffffffff;
            local_98 = CONCAT44(iVar11,(undefined4)local_98);
            FUN_140ec0be8(lVar17 + 0x599,&local_88);
            FUN_140ec0c46(lVar17 + 0x59a,&local_98);
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar4 * 8 != lVar6);
      }
      *(undefined4 *)(param_1 + 200) = 0;
      if (*(int *)(param_1 + 0xcc) != 0) {
        FUN_140ec0d20(param_1 + 0xc0,0);
      }
      lVar21 = local_a0;
      plVar9 = local_a8;
      uVar18 = local_ac;
      *(undefined4 *)(param_1 + 0xd8) = 0;
      if (*(int *)(param_1 + 0xdc) != 0) {
        FUN_140ec0d20(param_1 + 0xd0,0);
      }
      uVar8 = (ulonglong)local_b0;
      if ((((char)uVar18 == '\0') && (lVar6 = *(longlong *)(param_1 + 0x5a8), lVar6 != 0)) &&
         ((*(byte *)(lVar6 + 0x65) & 2) == 0)) {
        local_78 = (code *)0x0;
        plStack_70 = (longlong *)0x0;
        local_88 = 0;
        FUN_140d0a558(lVar6,&local_78);
        pcVar2 = local_78;
        lVar6 = (longlong)(int)plStack_70;
        if (lVar6 != 0) {
          lVar17 = 0;
          do {
            lVar24 = *(longlong *)(pcVar2 + lVar17);
            if (lVar24 != 0) {
              uVar5 = FUN_1405fa766();
              plVar9 = (longlong *)FUN_144718840(lVar24,uVar5);
              if (((plVar9 != (longlong *)0x0) &&
                  (lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9), *(longlong *)(lVar10 + 0x80) != 0
                  )) && (cVar3 = FUN_1457c122c(lVar10,*(undefined8 *)(param_1 + 0x5a8)),
                        cVar3 != '\0')) {
                local_108 = *(undefined8 *)(lVar10 + 0x80);
                FUN_140ec12ee(lVar21,lVar24,lVar10,0);
              }
            }
            lVar17 = lVar17 + 8;
            plVar9 = local_a8;
          } while (lVar6 * 8 != lVar17);
        }
        if (local_78 != (code *)0x0) {
          FUN_1400020a8(local_78);
        }
        uVar8 = (ulonglong)local_b0;
      }
    }
    if ((char)uVar8 == '\0') {
      LOCK();
      plVar7 = plVar9 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  lVar21 = *(longlong *)(param_1 + 0x5e0);
  *(undefined8 *)(param_1 + 0x5d8) = 0;
  *(undefined8 *)(param_1 + 0x5e0) = 0;
  if (lVar21 != 0) {
    LOCK();
    piVar1 = (int *)(lVar21 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_128);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec0be8 FUN_140ec0be8 body=93 status=ok
// SIG undefined FUN_140ec0be8(void)

void FUN_140ec0be8(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140838726(param_1,&local_20);
  if (*param_1 == '\x01') {
    cVar1 = FUN_140ec0d80(param_1 + -0x599,local_20,param_2);
    *param_1 = cVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec0c46 FUN_140ec0c46 body=93 status=ok
// SIG undefined FUN_140ec0c46(void)

void FUN_140ec0c46(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140852908(param_1,&local_20);
  if (*param_1 == '\x01') {
    cVar1 = FUN_140ec0d80(param_1 + -0x59a,local_20,param_2);
    *param_1 = cVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec0ca4 FUN_140ec0ca4 body=124 status=ok
// SIG undefined FUN_140ec0ca4(void)

void FUN_140ec0ca4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140ec0d20 FUN_140ec0d20 body=96 status=ok
// SIG undefined FUN_140ec0d20(void)

void FUN_140ec0d20(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 140ec0d80 FUN_140ec0d80 body=991 status=ok
// SIG undefined FUN_140ec0d80(void)

ulonglong FUN_140ec0d80(ulonglong param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *_Dst;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  bool bVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  if (DAT_14c963d90 != DAT_14c963dbc) {
    uVar5 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    puVar7 = DAT_14c963dc8;
    if (DAT_14c963dc8 == (undefined *)0x0) {
      puVar7 = &DAT_14c963dc0;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)(DAT_14c963dd0 - 1U & uVar5) * 4);
    while (iVar6 != -1) {
      lVar1 = DAT_14c963d88 + (longlong)iVar6 * 0x60;
      if (*(ulonglong *)(DAT_14c963d88 + (longlong)iVar6 * 0x60) == param_1) {
        uVar9 = 0;
        if ((lVar1 == 0) || (plVar10 = (longlong *)(lVar1 + 8), plVar10 == (longlong *)0x0))
        goto LAB_140ec1000;
        if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) goto LAB_140ec0ff6;
        uVar2 = (uint)(param_2 >> 0x10);
        uVar8 = (uint)param_2 & 0xffff;
        lVar14 = lVar1 + 0x40;
        if (*(longlong *)(lVar1 + 0x48) != 0) {
          lVar14 = *(longlong *)(lVar1 + 0x48);
        }
        iVar6 = *(int *)(lVar14 + (ulonglong)
                                  (*(int *)(lVar1 + 0x50) - 1U &
                                  (int)(param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar8) +
                                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar6 == -1) goto LAB_140ec0ff6;
        goto LAB_140ec0eb4;
      }
      iVar6 = *(int *)(lVar1 + 0x58);
    }
  }
  uVar9 = 0;
  goto LAB_140ec1000;
LAB_140ec0eb4:
  lVar14 = *plVar10 + (longlong)iVar6 * 0x20;
  if (*(ulonglong *)(*plVar10 + (longlong)iVar6 * 0x20) != param_2) {
    iVar6 = *(int *)(lVar14 + 0x18);
    if (iVar6 == -1) goto LAB_140ec0ff6;
    goto LAB_140ec0eb4;
  }
  uVar9 = 0;
  if ((lVar14 == 0) || ((longlong *)(lVar14 + 8) == (longlong *)0x0)) goto LAB_140ec0ff8;
  plVar3 = *(longlong **)(lVar14 + 8);
  if (plVar3 == (longlong *)0x0) goto LAB_140ec0feb;
  local_58 = (undefined **)*param_3;
  local_50 = param_3[1];
  FUN_140805e68(plVar3);
  iVar6 = (int)plVar3[1];
  if (iVar6 < 1) goto LAB_140ec0feb;
  lVar14 = 0;
  bVar11 = false;
  do {
    local_60 = lVar14 << 4;
    while( true ) {
      lVar4 = *plVar3;
      _Dst = (uint *)(lVar4 + local_60);
      if (((((*(longlong *)(lVar4 + 8 + local_60) != 0) && (_Dst[1] != 0)) &&
           (uVar2 = *_Dst, -1 < (int)uVar2)) &&
          (((int)uVar2 < DAT_14c9647dc &&
           (plVar13 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           uVar9 = param_2, plVar13 != (longlong *)0x0)))) &&
         ((*(uint *)(plVar13 + 2) == _Dst[1] &&
          (((*(uint *)(plVar13 + 1) >> 0x1c & 1) == 0 && (*plVar13 != 0)))))) break;
      iVar12 = ~(uint)lVar14 + iVar6;
      if (iVar12 != 0) {
        if (0 < iVar12) {
          iVar12 = 1;
        }
        memmove(_Dst,(void *)(lVar4 + (longlong)(iVar6 - iVar12) * 0x10),(longlong)iVar12 << 4);
        iVar6 = (int)plVar3[1];
      }
      iVar6 = iVar6 + -1;
      *(int *)(plVar3 + 1) = iVar6;
      bVar11 = true;
      if (iVar6 <= lVar14) goto LAB_140ec1132;
    }
    lVar14 = lVar14 + 1;
  } while (lVar14 < iVar6);
  if (bVar11) {
LAB_140ec1132:
    FUN_1400bbcfc(plVar3);
    iVar6 = (int)plVar3[1];
  }
  uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
  if (iVar6 < 1) {
LAB_140ec0feb:
    FUN_140819aae(plVar10,param_2);
LAB_140ec0ff6:
    uVar9 = 0;
  }
LAB_140ec0ff8:
  if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) {
    if (DAT_14c963d90 != DAT_14c963dbc) {
      puVar7 = &DAT_14c963dc0;
      if (DAT_14c963dc8 != (undefined *)0x0) {
        puVar7 = DAT_14c963dc8;
      }
      for (iVar6 = *(int *)(puVar7 + ((longlong)(int)uVar5 & (longlong)DAT_14c963dd0 - 1U) * 4);
          iVar6 != -1; iVar6 = *(int *)((longlong)iVar6 * 0x60 + DAT_14c963d88 + 0x58)) {
        if (*(ulonglong *)(DAT_14c963d88 + (longlong)iVar6 * 0x60) == param_1) {
          FUN_14007eed8(&DAT_14c963d88);
          break;
        }
      }
      if (DAT_14c963d90 != DAT_14c963dbc) goto LAB_140ec1000;
    }
    local_58 = &PTR_PTR_14c75ecc8;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
    FUN_140f933a4(&DAT_14c964830,&local_58,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
  }
LAB_140ec1000:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec1160 FUN_140ec1160 body=210 status=ok
// SIG undefined FUN_140ec1160(void)

void FUN_140ec1160(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *_Dst;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 1) {
    return;
  }
  lVar2 = 0;
  bVar3 = false;
  do {
    lVar2 = (longlong)(int)lVar2;
    _Dst = (longlong *)(lVar2 * 0x10 + *param_1);
    while( true ) {
      if (*_Dst == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = _Dst[1];
      }
      lVar6 = 0;
      if (*param_2 != 0) {
        lVar6 = param_2[1];
      }
      if ((*_Dst == *param_2) && (lVar5 == lVar6)) break;
      lVar2 = lVar2 + 1;
      _Dst = _Dst + 2;
      if (iVar1 <= lVar2) {
        if (!bVar3) {
          return;
        }
        goto LAB_140ec121e;
      }
    }
    iVar4 = (iVar1 + -1) - (int)lVar2;
    if (iVar4 != 0) {
      if (0 < iVar4) {
        iVar4 = 1;
      }
      memmove(_Dst,(void *)(*param_1 + (longlong)(iVar1 - iVar4) * 0x10),(longlong)iVar4 << 4);
      iVar1 = (int)param_1[1];
    }
    iVar1 = iVar1 + -1;
    *(int *)(param_1 + 1) = iVar1;
    bVar3 = true;
  } while ((int)lVar2 < iVar1);
LAB_140ec121e:
  FUN_1488c08d2(param_1);
  return;
}



// FUNCTION 140ec1232 FUN_140ec1232 body=188 status=ok
// SIG undefined FUN_140ec1232(void)

void FUN_140ec1232(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  lVar7 = 0;
  bVar4 = false;
  do {
    uVar5 = (uint)lVar7;
    lVar7 = (longlong)(int)uVar5;
    lVar1 = *param_1 + lVar7 * 8;
    lVar9 = 0;
    while (*(longlong *)(lVar1 + lVar9 * 8) != *param_2) {
      lVar2 = lVar7 + lVar9;
      lVar9 = lVar9 + 1;
      if ((longlong)iVar3 <= lVar2 + 1) {
        if (!bVar4) {
          return;
        }
        goto LAB_140ec12da;
      }
    }
    iVar8 = (int)lVar9;
    if (~uVar5 + iVar3 != iVar8) {
      iVar6 = (~uVar5 + iVar3) - iVar8;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar1 + lVar9 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar6) * 8),
              (longlong)iVar6 << 3);
      iVar3 = (int)param_1[1];
    }
    lVar7 = lVar7 + lVar9;
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 1) = iVar3;
    bVar4 = true;
  } while ((int)(uVar5 + iVar8) < iVar3);
LAB_140ec12da:
  FUN_1405fa8e4(param_1);
  return;
}



// FUNCTION 140ec12ee FUN_140ec12ee body=8906 status=ok
// SIG undefined FUN_140ec12ee(void)

void FUN_140ec12ee(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  uint *puVar2;
  void *_Dst;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint *puVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong *plVar25;
  int iVar26;
  longlong *plVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  longlong *plVar34;
  ulonglong uVar35;
  ulonglong *puVar36;
  bool bVar37;
  float fVar38;
  undefined1 auStack_1b8 [40];
  longlong *local_190;
  longlong local_188;
  uint *local_180;
  ulonglong local_178;
  ulonglong local_170;
  longlong local_168;
  ulonglong local_160;
  uint local_154;
  ulonglong local_150;
  undefined8 local_148;
  uint uStack_140;
  undefined4 uStack_13c;
  int local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  ulonglong *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  longlong local_98;
  uint local_90;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 local_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined4 uStack_5e;
  undefined4 uStack_5a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_2 != 0) {
    uVar11 = FUN_1405fa766();
    lVar12 = FUN_144718840(param_2,uVar11);
    if (lVar12 != 0) goto LAB_140ec2dd4;
  }
  uVar15 = 0;
  uVar14 = 0;
  if (param_5 != 0) {
    uVar14 = *(uint *)(param_5 + 0x38);
    uVar11 = *(undefined8 *)(param_5 + 0x30);
    uVar28 = (uint)((ulonglong)uVar11 >> 0x10);
    uVar31 = (uint)uVar11 & 0xffff;
    uVar28 = uVar14 >> 0xd ^
             uVar31 + (int)((ulonglong)uVar11 >> 0x20) + ((uint)uVar11 * 0x10000 - uVar14) +
             (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar31 >> 4);
    uVar31 = uVar28 << 8 ^ (-0x61c88647 - uVar14) - uVar28;
    uVar32 = uVar31 >> 0xd ^ (uVar14 - uVar28) - uVar31;
    uVar14 = uVar32 >> 0xc ^ (uVar28 - uVar31) - uVar32;
    uVar28 = uVar14 << 0x10 ^ (uVar31 - uVar32) - uVar14;
    uVar31 = uVar28 >> 5 ^ (uVar32 - uVar14) - uVar28;
    uVar32 = uVar31 >> 3 ^ (uVar14 - uVar28) - uVar31;
    uVar14 = uVar32 << 10 ^ (uVar28 - uVar31) - uVar32;
    uVar31 = uVar14 >> 0xf ^ uVar31 - (uVar32 + uVar14);
    uVar14 = *(uint *)(param_5 + 0x50);
    uVar11 = *(undefined8 *)(param_5 + 0x48);
    uVar28 = (uint)((ulonglong)uVar11 >> 0x10);
    uVar32 = (uint)uVar11 & 0xffff;
    uVar32 = uVar14 >> 0xd ^
             uVar32 + (int)((ulonglong)uVar11 >> 0x20) + ((uint)uVar11 * 0x10000 - uVar14) +
             (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar32 >> 4);
    uVar28 = uVar32 << 8 ^ (-0x61c88647 - uVar14) - uVar32;
    uVar14 = uVar28 >> 0xd ^ (uVar14 - uVar32) - uVar28;
    uVar32 = uVar14 >> 0xc ^ (uVar32 - uVar28) - uVar14;
    uVar28 = uVar32 << 0x10 ^ (uVar28 - uVar14) - uVar32;
    uVar14 = uVar28 >> 5 ^ (uVar14 - uVar32) - uVar28;
    uVar32 = uVar14 >> 3 ^ (uVar32 - uVar28) - uVar14;
    uVar28 = uVar32 << 10 ^ (uVar28 - uVar14) - uVar32;
    uVar28 = uVar31 >> 0xd ^ (uVar28 >> 0xf ^ uVar14 - (uVar32 + uVar28)) - uVar31;
    uVar32 = uVar28 << 8 ^ (-0x61c88647 - uVar31) - uVar28;
    uVar14 = uVar32 >> 0xd ^ (uVar31 - uVar28) - uVar32;
    uVar28 = uVar14 >> 0xc ^ (uVar28 - uVar32) - uVar14;
    uVar31 = uVar28 << 0x10 ^ (uVar32 - uVar14) - uVar28;
    uVar32 = uVar31 >> 5 ^ (uVar14 - uVar28) - uVar31;
    uVar14 = uVar32 >> 3 ^ (uVar28 - uVar31) - uVar32;
    uVar28 = uVar14 << 10 ^ (uVar31 - uVar32) - uVar14;
    uVar14 = uVar28 >> 0xf ^ uVar32 - (uVar14 + uVar28);
  }
  if (param_4 != 0) {
    uVar15 = *(uint *)(param_4 + 0x38);
    uVar11 = *(undefined8 *)(param_4 + 0x30);
    uVar28 = (uint)((ulonglong)uVar11 >> 0x10);
    uVar31 = (uint)uVar11 & 0xffff;
    uVar28 = uVar15 >> 0xd ^
             uVar31 + (int)((ulonglong)uVar11 >> 0x20) + ((uint)uVar11 * 0x10000 - uVar15) +
             (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar31 >> 4);
    uVar31 = uVar28 << 8 ^ (-0x61c88647 - uVar15) - uVar28;
    uVar32 = uVar31 >> 0xd ^ (uVar15 - uVar28) - uVar31;
    uVar15 = uVar32 >> 0xc ^ (uVar28 - uVar31) - uVar32;
    uVar28 = uVar15 << 0x10 ^ (uVar31 - uVar32) - uVar15;
    uVar31 = uVar28 >> 5 ^ (uVar32 - uVar15) - uVar28;
    uVar32 = uVar31 >> 3 ^ (uVar15 - uVar28) - uVar31;
    uVar15 = uVar32 << 10 ^ (uVar28 - uVar31) - uVar32;
    uVar31 = uVar15 >> 0xf ^ uVar31 - (uVar32 + uVar15);
    uVar15 = *(uint *)(param_4 + 0x50);
    uVar11 = *(undefined8 *)(param_4 + 0x48);
    uVar28 = (uint)((ulonglong)uVar11 >> 0x10);
    uVar32 = (uint)uVar11 & 0xffff;
    uVar32 = uVar15 >> 0xd ^
             uVar32 + (int)((ulonglong)uVar11 >> 0x20) + ((uint)uVar11 * 0x10000 - uVar15) +
             (uVar28 << 0x13 | uVar28 & 0xffff) + (uVar32 >> 4);
    uVar28 = uVar32 << 8 ^ (-0x61c88647 - uVar15) - uVar32;
    uVar15 = uVar28 >> 0xd ^ (uVar15 - uVar32) - uVar28;
    uVar32 = uVar15 >> 0xc ^ (uVar32 - uVar28) - uVar15;
    uVar28 = uVar32 << 0x10 ^ (uVar28 - uVar15) - uVar32;
    uVar15 = uVar28 >> 5 ^ (uVar15 - uVar32) - uVar28;
    uVar32 = uVar15 >> 3 ^ (uVar32 - uVar28) - uVar15;
    uVar28 = uVar32 << 10 ^ (uVar28 - uVar15) - uVar32;
    uVar28 = uVar31 >> 0xd ^ (uVar28 >> 0xf ^ uVar15 - (uVar32 + uVar28)) - uVar31;
    uVar32 = uVar28 << 8 ^ (-0x61c88647 - uVar31) - uVar28;
    uVar15 = uVar32 >> 0xd ^ (uVar31 - uVar28) - uVar32;
    uVar28 = uVar15 >> 0xc ^ (uVar28 - uVar32) - uVar15;
    uVar31 = uVar28 << 0x10 ^ (uVar32 - uVar15) - uVar28;
    uVar32 = uVar31 >> 5 ^ (uVar15 - uVar28) - uVar31;
    uVar15 = uVar32 >> 3 ^ (uVar28 - uVar31) - uVar32;
    uVar28 = uVar15 << 10 ^ (uVar31 - uVar32) - uVar15;
    uVar15 = uVar28 >> 0xf ^ uVar32 - (uVar15 + uVar28);
  }
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_148._0_2_ = (undefined2)param_2;
  local_148._2_2_ = (undefined2)(param_2 >> 0x10);
  local_148._4_4_ = (uint)(param_2 >> 0x20);
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  plVar25 = (longlong *)(param_1 + 0x78);
  local_188 = param_1;
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar28 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  local_154 = (uVar28 >> 0xd ^ uVar28) * -0x3d4d51cb;
  local_154 = local_154 >> 0x10 ^ local_154;
  iVar8 = FUN_143d9884e(plVar25,local_154,&local_148);
  uVar17 = 0;
  if (iVar8 == -1) {
    plVar24 = (longlong *)0x0;
  }
  else {
    plVar24 = (longlong *)((longlong)iVar8 * 0x68 + *plVar25);
  }
  plVar34 = plVar24 + 1;
  if (plVar24 != (longlong *)0x0) {
    plVar24 = plVar34;
  }
  uVar20 = 0;
  local_190 = plVar25;
  if (*(longlong *)(param_3 + 0x598) != 0) {
    uVar28 = *(uint *)(*(longlong *)(param_3 + 0x598) + 0xc);
    uVar17 = (ulonglong)uVar28;
    if ((int)uVar28 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar28 & 0xffff) * 0x18) + DAT_14c9647c8[uVar28 >> 0x10];
    }
    else {
      lVar12 = 0;
    }
    uVar28 = *(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      uVar31 = DAT_14c964868 + 1;
      bVar37 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar37) {
        local_178 = CONCAT44(local_178._4_4_,uVar31);
        local_170 = uVar17;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
        uVar17 = local_170;
        uVar31 = (uint)local_178;
      }
      LOCK();
      uVar28 = *(uint *)(lVar12 + 0x10);
      bVar37 = uVar28 == 0;
      if (bVar37) {
        *(uint *)(lVar12 + 0x10) = uVar31;
        uVar28 = 0;
      }
      UNLOCK();
      if (bVar37) {
        uVar28 = uVar31;
      }
    }
    uVar20 = (ulonglong)uVar28;
  }
  if (uVar14 == uVar15) {
    if (uVar14 != 0) {
      if ((int)plVar24[1] != *(int *)((longlong)plVar24 + 0x34)) {
        plVar25 = plVar24 + 7;
        if ((longlong *)plVar24[8] != (longlong *)0x0) {
          plVar25 = (longlong *)plVar24[8];
        }
        iVar8 = *(int *)((longlong)plVar25 + (ulonglong)((int)plVar24[9] - 1U & uVar14) * 4);
        if (iVar8 != -1) {
          do {
            lVar12 = *plVar24 + (longlong)iVar8 * 0x108;
            if (*(uint *)(*plVar24 + (longlong)iVar8 * 0x108) == uVar14) goto LAB_140ec18d6;
            iVar8 = *(int *)(lVar12 + 0x100);
          } while (iVar8 != -1);
        }
      }
      lVar12 = 0;
LAB_140ec18d6:
      lVar30 = lVar12 + 8;
      if (lVar12 == 0) {
        lVar30 = 0;
      }
      local_148._0_2_ = (undefined2)(uVar17 & 0xffffffff);
      local_148._2_2_ = (undefined2)((uVar17 & 0xffffffff) >> 0x10);
      local_148._4_4_ = (uint)uVar20;
      iVar8 = FUN_1418925d8((longlong *)(lVar30 + 0x70),local_148._4_4_ ^ (uint)uVar17);
      if (iVar8 == -1) {
        lVar12 = 0;
      }
      else {
        lVar12 = (longlong)iVar8 * 0x28 + *(longlong *)(lVar30 + 0x70);
      }
      FUN_140cd6918(param_3,lVar12 + 8,param_2);
      FUN_1405facea(lVar30,param_2);
      if (0.0 <= *(float *)(lVar30 + 0xe4)) {
        if (*(float *)(lVar30 + 0xe0) < *(float *)(lVar30 + 0xe4)) {
          *(float *)(lVar30 + 0xe4) = *(float *)(lVar30 + 0xe0);
        }
      }
      else {
        *(undefined4 *)(lVar30 + 0xe4) = *(undefined4 *)(lVar30 + 0xdc);
      }
    }
    goto LAB_140ec2dd4;
  }
  lVar12 = local_188;
  local_178 = uVar20;
  local_170 = uVar17;
  if (uVar14 != 0) {
    local_168 = param_3;
    if (plVar24 == (longlong *)0x0) {
      local_128 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      local_148._0_2_ = 0;
      local_148._2_2_ = 0;
      local_148._4_4_ = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_120 = 0x8000000000;
      local_118 = 0xffffffff;
      local_f8 = 0;
      if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(param_2);
      }
      if (*(int *)(local_188 + 0xac) == 0) {
        iVar8 = *(int *)(local_188 + 0x80);
        *(int *)(local_188 + 0x80) = iVar8 + 1;
        if (*(int *)(local_188 + 0x84) == iVar8) {
          FUN_1406a7630(local_190,iVar8);
        }
        lVar30 = local_188;
        lVar33 = (longlong)iVar8;
        lVar12 = local_188 + 0x88;
        iVar26 = FUN_144a54ea4(lVar12,1);
        lVar23 = *(longlong *)(lVar30 + 0x98);
        if (*(longlong *)(lVar30 + 0x98) == 0) {
          lVar23 = lVar12;
        }
        iVar9 = iVar26 + 0x1f;
        if (-1 < iVar26) {
          iVar9 = iVar26;
        }
        bVar13 = (byte)iVar26 & 0x1f;
        puVar18 = (uint *)(lVar23 + (longlong)(iVar9 >> 5) * 4);
        *puVar18 = *puVar18 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
      }
      else {
        iVar8 = *(int *)(local_188 + 0xa8);
        lVar33 = (longlong)iVar8;
        iVar26 = *(int *)(*(longlong *)(local_188 + 0x78) + 4 + lVar33 * 0x68);
        *(int *)(local_188 + 0xa8) = iVar26;
        iVar9 = *(int *)(local_188 + 0xac) + -1;
        *(int *)(local_188 + 0xac) = iVar9;
        if (iVar9 != 0) {
          *(undefined4 *)(*(longlong *)(local_188 + 0x78) + (longlong)iVar26 * 0x68) = 0xffffffff;
        }
      }
      lVar12 = local_188 + 0x88;
      if (*(longlong *)(local_188 + 0x98) != 0) {
        lVar12 = *(longlong *)(local_188 + 0x98);
      }
      iVar26 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar26 = iVar8;
      }
      puVar18 = (uint *)(lVar12 + (longlong)(iVar26 >> 5) * 4);
      *puVar18 = *puVar18 | 1 << ((byte)iVar8 & 0x1f);
      puVar21 = (ulonglong *)(*(longlong *)(local_188 + 0x78) + lVar33 * 0x68);
      *(ulonglong *)(*(longlong *)(local_188 + 0x78) + lVar33 * 0x68) = param_2;
      if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c();
      }
      lVar12 = local_188;
      puVar21[5] = 0;
      *(undefined4 *)(puVar21 + 6) = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
      *(undefined8 *)((longlong)puVar21 + 0x34) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar21 + 0x3c) = 0;
      if (puVar21 + 1 != &local_148) {
        puVar21[1] = CONCAT44(local_148._4_4_,CONCAT22(local_148._2_2_,(undefined2)local_148));
        local_148._0_2_ = 0;
        local_148._2_2_ = 0;
        local_148._4_4_ = 0;
        *(uint *)(puVar21 + 2) = uStack_140;
        *(undefined4 *)((longlong)puVar21 + 0x14) = uStack_13c;
        uStack_140 = 0;
        uStack_13c = 0;
        if (local_128 == 0) {
          *(int *)(puVar21 + 3) = local_138;
          *(undefined4 *)((longlong)puVar21 + 0x1c) = uStack_134;
          *(undefined4 *)(puVar21 + 4) = (undefined4)uStack_130;
          *(undefined4 *)((longlong)puVar21 + 0x24) = uStack_130._4_4_;
        }
        puVar21[5] = local_128;
        local_128 = 0;
        puVar21[6] = uStack_120;
        uStack_120 = 0;
        puVar21[7] = local_118;
        local_118 = 0xffffffff;
      }
      if (local_108 == 0) {
        *(undefined4 *)(puVar21 + 8) = (undefined4)uStack_110;
      }
      puVar21[9] = local_108;
      local_108 = 0;
      *(undefined4 *)(puVar21 + 10) = (undefined4)uStack_100;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      *(undefined4 *)(puVar21 + 0xb) = (undefined4)local_f8;
      *(undefined4 *)(puVar21 + 0xc) = 0xffffffff;
      uVar17 = *puVar21;
      if ((DAT_14c950c29 == 1) && (uVar17 != 0)) {
        FUN_1456cec3c(uVar17);
      }
      uVar28 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
      uVar28 = (uVar28 >> 0xd ^ uVar28) * -0x3d4d51cb;
      uVar28 = uVar28 >> 0x10 ^ uVar28;
      iVar26 = 1;
      if (*(int *)(lVar12 + 0x80) - *(int *)(lVar12 + 0xac) == 1) {
        uVar31 = 1;
LAB_140ec1ca6:
        plVar25 = local_190;
        iVar9 = iVar8;
        if (((int)uVar31 < 1) || (iVar26 <= *(int *)(lVar12 + 0xc0))) {
          uVar28 = *(int *)(lVar12 + 0xc0) - 1U & uVar28;
          *(uint *)((longlong)puVar21 + 100) = uVar28;
          lVar30 = *(longlong *)(lVar12 + 0xb8);
          if (*(longlong *)(lVar12 + 0xb8) == 0) {
            lVar30 = lVar12 + 0xb0;
          }
          *(undefined4 *)(puVar21 + 0xc) =
               *(undefined4 *)
                (lVar30 + ((longlong)*(int *)(lVar12 + 0xc0) - 1U & (longlong)(int)uVar28) * 4);
          lVar30 = *(longlong *)(lVar12 + 0xb8);
          if (*(longlong *)(lVar12 + 0xb8) == 0) {
            lVar30 = lVar12 + 0xb0;
          }
          *(int *)(lVar30 + ((longlong)*(int *)(lVar12 + 0xc0) - 1U & (longlong)(int)uVar28) * 4) =
               iVar8;
        }
        else {
          *(int *)(lVar12 + 0xc0) = iVar26;
          FUN_1465535c8(local_190);
        }
      }
      else {
        local_150 = *puVar21;
        if ((DAT_14c950c29 == 1) && (local_150 != 0)) {
          FUN_1456cec3c();
        }
        iVar9 = FUN_143d9884e(local_190,uVar28,&local_150);
        if (iVar9 == -1) {
          uVar31 = *(int *)(local_188 + 0x80) - *(int *)(local_188 + 0xac);
          lVar12 = local_188;
          if (3 < uVar31) {
            uVar17 = (ulonglong)(uVar31 & 0xfffffffe) + 0xf;
            lVar30 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar30 == 0; lVar30 = lVar30 + -1) {
              }
            }
            iVar26 = 1 << ((byte)lVar30 & 0x1f);
          }
          goto LAB_140ec1ca6;
        }
        lVar12 = *local_190;
        lVar30 = (longlong)iVar9 * 0x68;
        *(undefined4 *)(lVar12 + 0x50 + lVar30) = 0;
        if (*(longlong *)(lVar12 + 0x48 + lVar30) != 0) {
          FUN_1400020a8();
        }
        FUN_140600b9a(lVar12 + lVar30 + 8);
        memmove((void *)(lVar12 + lVar30),puVar21,0x60);
        plVar25 = local_190;
        FUN_1405ff5c8(local_190);
      }
      param_3 = local_168;
      lVar12 = *plVar25;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      plVar34 = (longlong *)(lVar12 + (longlong)iVar9 * 0x68 + 8);
      FUN_140600b9a(&local_148);
    }
    if ((int)plVar34[1] != *(int *)((longlong)plVar34 + 0x34)) {
      plVar25 = plVar34 + 7;
      if ((longlong *)plVar34[8] != (longlong *)0x0) {
        plVar25 = (longlong *)plVar34[8];
      }
      iVar8 = *(int *)((longlong)plVar25 + (ulonglong)((int)plVar34[9] - 1U & uVar14) * 4);
      if (iVar8 != -1) {
        do {
          lVar12 = *plVar34 + (longlong)iVar8 * 0x108;
          if (*(uint *)(*plVar34 + (longlong)iVar8 * 0x108) == uVar14) {
            if (lVar12 != 0) {
              plVar25 = (longlong *)(lVar12 + 8);
              goto LAB_140ec249a;
            }
            break;
          }
          iVar8 = *(int *)(lVar12 + 0x100);
        } while (iVar8 != -1);
      }
    }
    memset(&local_148,0,0xf8);
    uStack_140 = 0x3005;
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = 0;
    local_128 = CONCAT44(local_128._4_4_,0x3002);
    local_dc = 2;
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_ac = 0x80;
    uStack_a8 = 0xffffffff;
    local_88 = 0x100;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_66 = 0;
    local_64 = 0;
    uStack_62 = 0xbf80;
    uStack_5a._0_3_ = CONCAT12(1,(undefined2)uStack_5a);
    if (*(int *)((longlong)plVar34 + 0x34) == 0) {
      iVar8 = (int)plVar34[1];
      *(int *)(plVar34 + 1) = iVar8 + 1;
      if (*(int *)((longlong)plVar34 + 0xc) == iVar8) {
        FUN_1417a255a(plVar34,iVar8);
      }
      iVar26 = (int)plVar34[5];
      if (iVar26 == 0) {
        iVar9 = -1;
      }
      else {
        iVar9 = iVar26 + 0x1e;
        if (-1 < iVar26 + -1) {
          iVar9 = iVar26 + -1;
        }
        iVar9 = iVar9 >> 5;
      }
      plVar25 = plVar34 + 2;
      iVar16 = iVar26 + 1;
      iVar19 = iVar26 + 0x1f;
      if (-1 < iVar26) {
        iVar19 = iVar26;
      }
      if (iVar19 >> 5 == iVar9) {
        *(int *)(plVar34 + 5) = iVar16;
      }
      else {
        if (*(int *)((longlong)plVar34 + 0x2c) <= iVar26) {
          iVar9 = iVar26;
          if (iVar26 + 0x20U < 0xa0) {
            iVar16 = 0x80;
          }
          else {
            uVar28 = iVar26 + 0x20U >> 5;
            if (*(int *)((longlong)plVar34 + 0x2c) + 0x1fU < 0xa0) {
              uVar31 = 4;
              if (4 < uVar28) {
                uVar31 = uVar28;
              }
            }
            else {
              uVar31 = uVar28 + (uVar28 * 3 >> 3) + 0x10;
            }
            uVar17 = (ulonglong)(uVar31 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar32 = (uint)(uVar17 + 0xf);
                if (uVar31 < 0x1ffd) {
                  uVar17 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar32 >> 4]];
                }
                else {
                  uVar20 = uVar17 + 0xf & 0xfffffffffffffff0;
                  if (uVar20 < 0x7ff1) {
                    bVar13 = (&DAT_14c841e00)[uVar32 >> 4];
                    uVar35 = 0x32;
                    if (0x32 < bVar13) {
                      uVar35 = (ulonglong)bVar13;
                    }
                    uVar29 = 0x32 - (ulonglong)bVar13;
                    do {
                      uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar29 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar29 & 0xffffffff] & 0xf) == 0) goto LAB_140ec318a;
                      lVar12 = uVar35 + 1 + uVar29;
                      uVar29 = uVar29 - 1;
                    } while (lVar12 != 0x33);
                  }
                  uVar17 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar17 = (ulonglong)DAT_14c841df8;
                  }
                  uVar17 = -uVar17 & (uVar20 + uVar17) - 1;
                }
              }
              else {
                local_180 = (uint *)(ulonglong)uVar28;
                uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                uVar28 = (uint)local_180;
                iVar9 = (int)plVar34[5];
              }
            }
LAB_140ec318a:
            iVar10 = (int)(uVar17 >> 2);
            iVar16 = -0x20;
            if ((int)uVar28 <= iVar10) {
              iVar16 = iVar10 << 5;
            }
          }
          *(int *)((longlong)plVar34 + 0x2c) = iVar16;
          FUN_1446efbd8(plVar25,iVar9);
          iVar16 = (int)plVar34[5] + 1;
        }
        iVar9 = iVar16 + 0x1f;
        if (-1 < iVar16) {
          iVar9 = iVar16;
        }
        *(int *)(plVar34 + 5) = iVar16;
        if (iVar16 % 0x20 != 0) {
          plVar24 = (longlong *)plVar34[4];
          if ((longlong *)plVar34[4] == (longlong *)0x0) {
            plVar24 = plVar25;
          }
          bVar13 = -(char)(iVar16 % 0x20);
          *(uint *)((longlong)plVar24 + (longlong)(iVar9 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar24 + (longlong)(iVar9 >> 5) * 4) << (bVar13 & 0x1f))
               >> (bVar13 & 0x1f);
        }
      }
      lVar12 = (longlong)iVar8;
      if ((longlong *)plVar34[4] != (longlong *)0x0) {
        plVar25 = (longlong *)plVar34[4];
      }
      bVar13 = (byte)iVar26 & 0x1f;
      puVar18 = (uint *)((longlong)plVar25 + (longlong)(iVar19 >> 5) * 4);
      *puVar18 = *puVar18 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
    }
    else {
      iVar8 = (int)plVar34[6];
      lVar12 = (longlong)iVar8;
      iVar26 = *(int *)(*plVar34 + 4 + lVar12 * 0x108);
      *(int *)(plVar34 + 6) = iVar26;
      iVar9 = *(int *)((longlong)plVar34 + 0x34) + -1;
      *(int *)((longlong)plVar34 + 0x34) = iVar9;
      if (iVar9 != 0) {
        *(undefined4 *)(*plVar34 + (longlong)iVar26 * 0x108) = 0xffffffff;
      }
    }
    local_180 = (uint *)(plVar34 + 2);
    puVar18 = (uint *)plVar34[4];
    if ((uint *)plVar34[4] == (uint *)0x0) {
      puVar18 = local_180;
    }
    iVar26 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar26 = iVar8;
    }
    puVar18[iVar26 >> 5] = puVar18[iVar26 >> 5] | 1 << ((byte)iVar8 & 0x1f);
    lVar30 = *plVar34;
    lVar12 = lVar12 * 0x108;
    puVar18 = (uint *)(lVar30 + lVar12);
    puVar2 = (uint *)(lVar30 + lVar12);
    *puVar2 = uVar14;
    *(ulonglong *)(puVar2 + 2) =
         CONCAT44(local_148._4_4_,CONCAT22(local_148._2_2_,(undefined2)local_148));
    puVar2[4] = uStack_140;
    puVar2[6] = 0;
    puVar2[7] = 0;
    *(undefined8 *)(puVar2 + 8) = uStack_130;
    puVar2[10] = (uint)local_128;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar21 = local_e8;
    if (local_e8 == (ulonglong *)0x0) {
      puVar21 = &local_118;
    }
    FUN_1400709d4(puVar2 + 0xe,puVar21,local_e0,0);
    lVar30 = lVar30 + lVar12;
    *(undefined8 *)(lVar30 + 0x98) = 0;
    *(undefined4 *)(lVar30 + 0xa0) = 0;
    *(undefined8 *)(lVar30 + 0x78) = 0;
    *(undefined8 *)(lVar30 + 0x80) = 0;
    *(undefined8 *)(lVar30 + 0xa4) = 0xffffffff00000080;
    *(undefined4 *)(lVar30 + 0xac) = 0;
    *(undefined8 *)(lVar30 + 0xb8) = 0;
    *(undefined4 *)(lVar30 + 0xc0) = 0;
    if ((undefined8 *)(lVar30 + 0x78) != &local_d8) {
      *(undefined8 *)(puVar18 + 0x1e) = local_d8;
      local_d8 = 0;
      puVar18[0x20] = (uint)uStack_d0;
      puVar18[0x21] = uStack_d0._4_4_;
      uStack_d0 = 0;
      if (local_b8 == 0) {
        puVar18[0x22] = local_c8;
        puVar18[0x23] = uStack_c4;
        puVar18[0x24] = uStack_c0;
        puVar18[0x25] = uStack_bc;
      }
      if (*(longlong *)(puVar18 + 0x26) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(puVar18 + 0x26) = local_b8;
      local_b8 = 0;
      puVar18[0x28] = local_b0;
      puVar18[0x29] = uStack_ac;
      local_b0 = 0;
      uStack_ac = 0;
      puVar18[0x2a] = uStack_a8;
      puVar18[0x2b] = uStack_a4;
      uStack_a8 = 0xffffffff;
      uStack_a4 = 0;
    }
    if (local_98 == 0) {
      puVar18[0x2c] = local_a0;
    }
    if (*(longlong *)(puVar18 + 0x2e) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(puVar18 + 0x2e) = local_98;
    local_98 = 0;
    puVar18[0x30] = local_90;
    local_90 = 0;
    *(ulonglong *)(puVar18 + 0x32) = CONCAT44(uStack_84,CONCAT22(uStack_86,local_88));
    puVar18[0x34] = 0;
    puVar18[0x35] = 0;
    *(ulonglong *)(puVar18 + 0x34) = CONCAT44(uStack_7c,uStack_80);
    uStack_80 = 0;
    uStack_7c = 0;
    puVar18[0x36] = uStack_78;
    puVar18[0x37] = uStack_74;
    uStack_78 = 0;
    uStack_74 = 0;
    *(uint *)((longlong)puVar18 + 0xea) = CONCAT22(local_64,uStack_66);
    *(uint *)((longlong)puVar18 + 0xee) = CONCAT22(uStack_60,uStack_62);
    *(undefined4 *)((longlong)puVar18 + 0xf2) = uStack_5e;
    *(undefined4 *)((longlong)puVar18 + 0xf6) = uStack_5a;
    puVar18[0x38] = uStack_70;
    puVar18[0x39] = uStack_6c;
    puVar18[0x3a] = CONCAT22(uStack_66,uStack_68);
    puVar18[0x3b] = CONCAT22(uStack_62,local_64);
    puVar18[0x40] = 0xffffffff;
    uVar14 = *puVar18;
    uVar28 = (int)plVar34[1] - *(int *)((longlong)plVar34 + 0x34);
    if (1 < uVar28) {
      plVar25 = plVar34 + 7;
      if ((longlong *)plVar34[8] != (longlong *)0x0) {
        plVar25 = (longlong *)plVar34[8];
      }
      iVar26 = *(int *)((longlong)plVar25 + (ulonglong)((int)plVar34[9] - 1U & uVar14) * 4);
      if (iVar26 != -1) {
        do {
          _Dst = (void *)(*plVar34 + (longlong)iVar26 * 0x108);
          if (*(uint *)(*plVar34 + (longlong)iVar26 * 0x108) == uVar14) {
            if (*(longlong *)((longlong)_Dst + 0xd0) != 0) {
              FUN_1400020a8();
            }
            *(undefined4 *)((longlong)_Dst + 0xc0) = 0;
            if (*(longlong *)((longlong)_Dst + 0xb8) != 0) {
              FUN_1400020a8();
            }
            FUN_140fa7444((longlong)_Dst + 0x78);
            if (*(longlong *)((longlong)_Dst + 0x68) != 0) {
              FUN_1400020a8();
            }
            memmove(_Dst,puVar18,0x100);
            FUN_1405ff63c(plVar34,iVar8);
            iVar8 = iVar26;
            goto LAB_140ec23b9;
          }
          iVar26 = *(int *)((longlong)_Dst + 0x100);
        } while (iVar26 != -1);
      }
    }
    uVar31 = 1;
    if (3 < uVar28) {
      uVar17 = (ulonglong)(uVar28 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar31 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar28 < 1) || ((int)uVar31 <= (int)plVar34[9])) {
      uVar14 = (int)plVar34[9] - 1U & uVar14;
      puVar18[0x41] = uVar14;
      plVar25 = (longlong *)plVar34[8];
      if ((longlong *)plVar34[8] == (longlong *)0x0) {
        plVar25 = plVar34 + 7;
      }
      puVar18[0x40] =
           *(uint *)((longlong)plVar25 +
                    ((longlong)(int)plVar34[9] - 1U & (longlong)(int)uVar14) * 4);
      plVar25 = (longlong *)plVar34[8];
      if ((longlong *)plVar34[8] == (longlong *)0x0) {
        plVar25 = plVar34 + 7;
      }
      *(int *)((longlong)plVar25 + ((longlong)(int)plVar34[9] - 1U & (longlong)(int)uVar14) * 4) =
           iVar8;
    }
    else {
      *(uint *)(plVar34 + 9) = uVar31;
      plVar25 = plVar34 + 8;
      if (plVar34[8] != 0) {
        FUN_1446efa72(plVar25,0,0,4);
        uVar31 = *(uint *)(plVar34 + 9);
      }
      plVar24 = plVar34 + 7;
      if (uVar31 == 1) {
        if (*plVar25 != 0) {
          FUN_1446efa72(plVar25,0,0,4);
        }
LAB_140ec21c6:
        uVar14 = 0;
        do {
          plVar25 = (longlong *)plVar34[8];
          if ((longlong *)plVar34[8] == (longlong *)0x0) {
            plVar25 = plVar24;
          }
          *(undefined4 *)
           ((longlong)plVar25 + (ulonglong)((int)plVar34[9] + 0x7fffffffU & uVar14) * 4) =
               0xffffffff;
          uVar14 = uVar14 + 1;
        } while (uVar31 != uVar14);
      }
      else {
        if (uVar31 == 0) goto LAB_140ec23b9;
        FUN_1446efa72(plVar25,0,uVar31,4);
        if (0 < (int)uVar31) goto LAB_140ec21c6;
      }
      iVar26 = (int)plVar34[5];
      if (iVar26 == 0) {
        uVar17 = 0;
        uVar20 = 1;
        iVar9 = 0;
        iVar16 = 0;
      }
      else {
        puVar18 = (uint *)plVar34[4];
        if ((uint *)plVar34[4] == (uint *)0x0) {
          puVar18 = local_180;
        }
        uVar14 = *puVar18;
        if (uVar14 == 0) {
          iVar9 = iVar26 + 0x1e;
          if (-1 < iVar26 + -1) {
            iVar9 = iVar26 + -1;
          }
          uVar17 = 0;
          uVar20 = (ulonglong)(uint)(iVar9 >> 5);
          if (iVar9 >> 5 < 1) {
            uVar20 = uVar17;
          }
          iVar16 = 0;
          do {
            if (uVar20 == uVar17) goto LAB_140ec23b9;
            iVar16 = iVar16 + 0x20;
            uVar14 = puVar18[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar17 = 0;
          iVar16 = 0;
        }
        uVar20 = (ulonglong)(-uVar14 & uVar14);
        uVar35 = uVar20 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar35 != 0) {
          for (; uVar35 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar9 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar26 <= iVar9) {
          iVar9 = iVar26;
        }
      }
      if (iVar9 < iVar26) {
        uVar14 = 0xffffffff;
        do {
          lVar12 = *plVar34;
          lVar30 = (longlong)iVar9 * 0x108;
          uVar35 = (longlong)(int)plVar34[9] - 1U & (longlong)*(int *)(lVar12 + lVar30);
          iVar26 = (int)uVar35;
          *(int *)(lVar12 + 0x104 + lVar30) = iVar26;
          plVar25 = (longlong *)plVar34[8];
          if ((longlong *)plVar34[8] == (longlong *)0x0) {
            plVar25 = plVar24;
          }
          *(undefined4 *)(lVar12 + 0x100 + lVar30) =
               *(undefined4 *)((longlong)plVar25 + ((longlong)(int)plVar34[9] - 1U & uVar35) * 4);
          plVar25 = (longlong *)plVar34[8];
          if ((longlong *)plVar34[8] == (longlong *)0x0) {
            plVar25 = plVar24;
          }
          *(int *)((longlong)plVar25 + ((longlong)iVar26 & (longlong)(int)plVar34[9] - 1U) * 4) =
               iVar9;
          uVar14 = ~(uint)uVar20 & uVar14;
          puVar18 = (uint *)plVar34[4];
          if ((uint *)plVar34[4] == (uint *)0x0) {
            puVar18 = local_180;
          }
          iVar26 = (int)plVar34[5];
          iVar9 = (int)uVar17;
          lVar12 = (longlong)iVar9;
          uVar28 = puVar18[lVar12] & uVar14;
          if (uVar28 == 0) {
            iVar19 = iVar26 + 0x1e;
            if (-1 < iVar26 + -1) {
              iVar19 = iVar26 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar10 = iVar19;
            if (iVar19 < iVar9) {
              iVar10 = iVar9;
            }
            if (iVar19 <= iVar9) break;
            lVar30 = 0;
            while( true ) {
              iVar16 = iVar16 + 0x20;
              uVar28 = puVar18[lVar12 + lVar30 + 1];
              if (uVar28 != 0) break;
              lVar30 = lVar30 + 1;
              if (iVar10 - lVar12 == lVar30) goto LAB_140ec23b9;
            }
            uVar17 = (ulonglong)(iVar9 + (int)lVar30 + 1);
            uVar14 = 0xffffffff;
          }
          uVar20 = (ulonglong)(-uVar28 & uVar28);
          uVar35 = uVar20 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar35 != 0) {
            for (; uVar35 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar9 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        } while (iVar9 < iVar26);
      }
    }
LAB_140ec23b9:
    lVar12 = *plVar34;
    if (CONCAT44(uStack_7c,uStack_80) != 0) {
      FUN_1400020a8();
    }
    param_3 = local_168;
    local_90 = 0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar12 = (longlong)iVar8 * 0x108 + lVar12;
    plVar25 = (longlong *)(lVar12 + 8);
    FUN_140fa7444(&local_d8);
    if (local_e8 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    if ((*plVar25 != *(longlong *)(param_5 + 0x30)) ||
       (*(int *)(lVar12 + 0x10) != *(int *)(param_5 + 0x38))) {
      *plVar25 = *(longlong *)(param_5 + 0x30);
      *(undefined4 *)(lVar12 + 0x10) = *(undefined4 *)(param_5 + 0x38);
      *(undefined8 *)(lVar12 + 0x18) = 0;
    }
    if ((*(longlong *)(lVar12 + 0x20) != *(longlong *)(param_5 + 0x48)) ||
       (*(int *)(lVar12 + 0x28) != *(int *)(param_5 + 0x50))) {
      *(longlong *)(lVar12 + 0x20) = *(longlong *)(param_5 + 0x48);
      *(undefined4 *)(lVar12 + 0x28) = *(undefined4 *)(param_5 + 0x50);
      *(undefined8 *)(lVar12 + 0x30) = 0;
    }
    if (lVar12 + 0x38 != param_3 + 0x5f8) {
      lVar30 = param_3 + 0x5f8;
      if (*(longlong *)(param_3 + 0x628) != 0) {
        lVar30 = *(longlong *)(param_3 + 0x628);
      }
      FUN_1400709d4(lVar12 + 0x38,lVar30,*(undefined4 *)(param_3 + 0x630),
                    *(undefined4 *)(lVar12 + 0x74));
    }
LAB_140ec249a:
    lVar12 = plVar25[0x1b];
    *(int *)(plVar25 + 0x1b) = (int)lVar12 + 1;
    if ((int)lVar12 == 0) {
      *(int *)(plVar34 + 10) = (int)plVar34[10] + 1;
    }
    local_148._0_2_ = 0x100;
    local_148._4_4_ = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    local_138 = 0;
    uStack_134 = 0;
    FUN_140cd6918(param_3,&local_148,param_2);
    plVar24 = plVar25 + 0xe;
    local_160 = param_2;
    if (*(int *)((longlong)plVar25 + 0xa4) == 0) {
      iVar8 = (int)plVar25[0xf];
      *(int *)(plVar25 + 0xf) = iVar8 + 1;
      if (*(int *)((longlong)plVar25 + 0x7c) == iVar8) {
        FUN_140549c28(plVar24,iVar8);
      }
      iVar26 = (int)plVar25[0x13];
      if (iVar26 == 0) {
        iVar9 = -1;
      }
      else {
        iVar9 = iVar26 + 0x1e;
        if (-1 < iVar26 + -1) {
          iVar9 = iVar26 + -1;
        }
        iVar9 = iVar9 >> 5;
      }
      plVar27 = plVar25 + 0x10;
      iVar16 = iVar26 + 1;
      iVar19 = iVar26 + 0x1f;
      if (-1 < iVar26) {
        iVar19 = iVar26;
      }
      if (iVar19 >> 5 == iVar9) {
        *(int *)(plVar25 + 0x13) = iVar16;
      }
      else {
        if (*(int *)((longlong)plVar25 + 0x9c) <= iVar26) {
          iVar9 = iVar26;
          if (iVar26 + 0x20U < 0xa0) {
            iVar16 = 0x80;
          }
          else {
            uVar14 = iVar26 + 0x20U >> 5;
            if (*(int *)((longlong)plVar25 + 0x9c) + 0x1fU < 0xa0) {
              uVar28 = 4;
              if (4 < uVar14) {
                uVar28 = uVar14;
              }
            }
            else {
              uVar28 = uVar14 + (uVar14 * 3 >> 3) + 0x10;
            }
            uVar17 = (ulonglong)(uVar28 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar31 = (uint)(uVar17 + 0xf);
                if (uVar28 < 0x1ffd) {
                  uVar17 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar31 >> 4]];
                }
                else {
                  uVar20 = uVar17 + 0xf & 0xfffffffffffffff0;
                  if (uVar20 < 0x7ff1) {
                    bVar13 = (&DAT_14c841e00)[uVar31 >> 4];
                    uVar35 = 0x32;
                    if (0x32 < bVar13) {
                      uVar35 = (ulonglong)bVar13;
                    }
                    uVar29 = 0x32 - (ulonglong)bVar13;
                    do {
                      uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar29 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar29 & 0xffffffff] & 0xf) == 0) goto LAB_140ec30da;
                      lVar12 = uVar35 + 1 + uVar29;
                      uVar29 = uVar29 - 1;
                    } while (lVar12 != 0x33);
                  }
                  uVar17 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar17 = (ulonglong)DAT_14c841df8;
                  }
                  uVar17 = -uVar17 & (uVar20 + uVar17) - 1;
                }
              }
              else {
                local_180 = (uint *)(ulonglong)uVar14;
                uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
                uVar14 = (uint)local_180;
                iVar9 = (int)plVar25[0x13];
              }
            }
LAB_140ec30da:
            iVar10 = (int)(uVar17 >> 2);
            iVar16 = -0x20;
            if ((int)uVar14 <= iVar10) {
              iVar16 = iVar10 << 5;
            }
          }
          *(int *)((longlong)plVar25 + 0x9c) = iVar16;
          FUN_1446efbd8(plVar27,iVar9);
          iVar16 = (int)plVar25[0x13] + 1;
        }
        iVar9 = iVar16 + 0x1f;
        if (-1 < iVar16) {
          iVar9 = iVar16;
        }
        *(int *)(plVar25 + 0x13) = iVar16;
        if (iVar16 % 0x20 != 0) {
          plVar22 = (longlong *)plVar25[0x12];
          if ((longlong *)plVar25[0x12] == (longlong *)0x0) {
            plVar22 = plVar27;
          }
          bVar13 = -(char)(iVar16 % 0x20);
          *(uint *)((longlong)plVar22 + (longlong)(iVar9 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar9 >> 5) * 4) << (bVar13 & 0x1f))
               >> (bVar13 & 0x1f);
        }
      }
      lVar12 = (longlong)iVar8;
      if ((longlong *)plVar25[0x12] != (longlong *)0x0) {
        plVar27 = (longlong *)plVar25[0x12];
      }
      bVar13 = (byte)iVar26 & 0x1f;
      puVar18 = (uint *)((longlong)plVar27 + (longlong)(iVar19 >> 5) * 4);
      *puVar18 = *puVar18 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
    }
    else {
      iVar8 = (int)plVar25[0x14];
      lVar12 = (longlong)iVar8;
      iVar26 = *(int *)(plVar25[0xe] + 4 + lVar12 * 0x28);
      *(int *)(plVar25 + 0x14) = iVar26;
      iVar9 = *(int *)((longlong)plVar25 + 0xa4) + -1;
      *(int *)((longlong)plVar25 + 0xa4) = iVar9;
      if (iVar9 != 0) {
        *(undefined4 *)(plVar25[0xe] + (longlong)iVar26 * 0x28) = 0xffffffff;
      }
    }
    iVar26 = local_138;
    local_180 = (uint *)(plVar25 + 0x10);
    puVar18 = (uint *)plVar25[0x12];
    if ((uint *)plVar25[0x12] == (uint *)0x0) {
      puVar18 = local_180;
    }
    iVar9 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar9 = iVar8;
    }
    puVar18[iVar9 >> 5] = puVar18[iVar9 >> 5] | 1 << ((byte)iVar8 & 0x1f);
    lVar30 = plVar25[0xe];
    puVar21 = (ulonglong *)(lVar30 + lVar12 * 0x28);
    uVar17 = local_170 & 0xffffffff | local_178 << 0x20;
    *puVar21 = uVar17;
    puVar21[1] = CONCAT44(local_148._4_4_,CONCAT22(local_148._2_2_,(undefined2)local_148));
    puVar21[2] = 0;
    uVar11 = CONCAT44(uStack_13c,uStack_140);
    *(int *)(puVar21 + 3) = local_138;
    if (local_138 == 0) {
      *(undefined4 *)((longlong)puVar21 + 0x1c) = 0;
    }
    else {
      FUN_1403e10ec(lVar30 + lVar12 * 0x28 + 0x10,local_138,0);
      FUN_1403e107f(puVar21[2],uVar11,iVar26);
      uVar17 = *puVar21;
    }
    *(undefined4 *)(puVar21 + 4) = 0xffffffff;
    uVar28 = (uint)(uVar17 >> 0x20) ^ (uint)uVar17;
    uVar14 = 1;
    if ((int)plVar25[0xf] - *(int *)((longlong)plVar25 + 0xa4) == 1) {
      uVar31 = 1;
LAB_140ec2668:
      param_2 = local_160;
      if (((int)uVar31 < 1) || ((int)uVar14 <= (int)plVar25[0x17])) {
        uVar28 = (int)plVar25[0x17] - 1U & uVar28;
        *(uint *)((longlong)puVar21 + 0x24) = uVar28;
        plVar24 = (longlong *)plVar25[0x16];
        if ((longlong *)plVar25[0x16] == (longlong *)0x0) {
          plVar24 = plVar25 + 0x15;
        }
        *(undefined4 *)(puVar21 + 4) =
             *(undefined4 *)
              ((longlong)plVar24 + ((longlong)(int)plVar25[0x17] - 1U & (longlong)(int)uVar28) * 4);
        plVar24 = (longlong *)plVar25[0x16];
        if ((longlong *)plVar25[0x16] == (longlong *)0x0) {
          plVar24 = plVar25 + 0x15;
        }
        *(int *)((longlong)plVar24 + ((longlong)(int)plVar25[0x17] - 1U & (longlong)(int)uVar28) * 4
                ) = iVar8;
      }
      else {
        *(uint *)(plVar25 + 0x17) = uVar14;
        plVar24 = plVar25 + 0x16;
        if (plVar25[0x16] != 0) {
          FUN_1446efa72(plVar24,0,0,4);
          uVar14 = *(uint *)(plVar25 + 0x17);
        }
        plVar27 = plVar25 + 0x15;
        if (uVar14 == 1) {
          if (*plVar24 != 0) {
            FUN_1446efa72(plVar24,0,0,4);
          }
LAB_140ec2733:
          uVar28 = 0;
          do {
            plVar24 = (longlong *)plVar25[0x16];
            if ((longlong *)plVar25[0x16] == (longlong *)0x0) {
              plVar24 = plVar27;
            }
            *(undefined4 *)
             ((longlong)plVar24 + (ulonglong)((int)plVar25[0x17] + 0x7fffffffU & uVar28) * 4) =
                 0xffffffff;
            uVar28 = uVar28 + 1;
          } while (uVar14 != uVar28);
        }
        else {
          if (uVar14 == 0) goto LAB_140ec2917;
          FUN_1446efa72(plVar24,0,uVar14,4);
          if (0 < (int)uVar14) goto LAB_140ec2733;
        }
        iVar8 = (int)plVar25[0x13];
        if (iVar8 == 0) {
          uVar17 = 0;
          uVar20 = 1;
          iVar26 = 0;
          iVar9 = 0;
        }
        else {
          puVar18 = (uint *)plVar25[0x12];
          if ((uint *)plVar25[0x12] == (uint *)0x0) {
            puVar18 = local_180;
          }
          uVar14 = *puVar18;
          if (uVar14 == 0) {
            iVar26 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar26 = iVar8 + -1;
            }
            uVar17 = 0;
            uVar20 = (ulonglong)(uint)(iVar26 >> 5);
            if (iVar26 >> 5 < 1) {
              uVar20 = uVar17;
            }
            iVar9 = 0;
            do {
              if (uVar20 == uVar17) goto LAB_140ec2917;
              iVar9 = iVar9 + 0x20;
              uVar14 = puVar18[uVar17 + 1];
              uVar17 = uVar17 + 1;
            } while (uVar14 == 0);
          }
          else {
            uVar17 = 0;
            iVar9 = 0;
          }
          uVar20 = (ulonglong)(-uVar14 & uVar14);
          uVar35 = uVar20 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar35 != 0) {
            for (; uVar35 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar26 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar26) {
            iVar26 = iVar8;
          }
        }
        if (iVar26 < iVar8) {
          uVar14 = 0xffffffff;
          do {
            lVar12 = plVar25[0xe];
            lVar30 = (longlong)iVar26;
            uVar11 = *(undefined8 *)(lVar12 + lVar30 * 0x28);
            uVar35 = (longlong)(int)((uint)((ulonglong)uVar11 >> 0x20) ^ (uint)uVar11) &
                     (longlong)(int)plVar25[0x17] - 1U;
            iVar8 = (int)uVar35;
            *(int *)(lVar12 + 0x24 + lVar30 * 0x28) = iVar8;
            plVar24 = (longlong *)plVar25[0x16];
            if ((longlong *)plVar25[0x16] == (longlong *)0x0) {
              plVar24 = plVar27;
            }
            *(undefined4 *)(lVar12 + 0x20 + lVar30 * 0x28) =
                 *(undefined4 *)
                  ((longlong)plVar24 + ((longlong)(int)plVar25[0x17] - 1U & uVar35) * 4);
            plVar24 = (longlong *)plVar25[0x16];
            if ((longlong *)plVar25[0x16] == (longlong *)0x0) {
              plVar24 = plVar27;
            }
            *(int *)((longlong)plVar24 + ((longlong)iVar8 & (longlong)(int)plVar25[0x17] - 1U) * 4)
                 = iVar26;
            uVar14 = ~(uint)uVar20 & uVar14;
            puVar18 = (uint *)plVar25[0x12];
            if ((uint *)plVar25[0x12] == (uint *)0x0) {
              puVar18 = local_180;
            }
            iVar8 = (int)plVar25[0x13];
            iVar26 = (int)uVar17;
            lVar12 = (longlong)iVar26;
            uVar28 = puVar18[lVar12] & uVar14;
            if (uVar28 == 0) {
              iVar16 = iVar8 + 0x1e;
              if (-1 < iVar8 + -1) {
                iVar16 = iVar8 + -1;
              }
              iVar16 = iVar16 >> 5;
              iVar19 = iVar16;
              if (iVar16 < iVar26) {
                iVar19 = iVar26;
              }
              if (iVar16 <= iVar26) break;
              lVar30 = 0;
              while( true ) {
                iVar9 = iVar9 + 0x20;
                uVar28 = puVar18[lVar12 + lVar30 + 1];
                if (uVar28 != 0) break;
                lVar30 = lVar30 + 1;
                if (iVar19 - lVar12 == lVar30) goto LAB_140ec2917;
              }
              uVar17 = (ulonglong)(iVar26 + (int)lVar30 + 1);
              uVar14 = 0xffffffff;
            }
            uVar20 = (ulonglong)(-uVar28 & uVar28);
            uVar35 = uVar20 * 2 + 1;
            lVar12 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar26 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          } while (iVar26 < iVar8);
        }
      }
    }
    else {
      local_150 = uVar17;
      iVar26 = FUN_1418925d8(plVar24,uVar28);
      if (iVar26 == -1) {
        uVar31 = (int)plVar25[0xf] - *(int *)((longlong)plVar25 + 0xa4);
        if (3 < uVar31) {
          uVar17 = (ulonglong)(uVar31 & 0xfffffffe) + 0xf;
          lVar12 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar14 = 1 << ((byte)lVar12 & 0x1f);
        }
        goto LAB_140ec2668;
      }
      puVar3 = (undefined4 *)(*plVar24 + (longlong)iVar26 * 0x28);
      if (*(longlong *)(puVar3 + 4) != 0) {
        FUN_1400020a8();
      }
      uVar17 = *puVar21;
      uVar4 = *(undefined4 *)((longlong)puVar21 + 4);
      uVar20 = puVar21[1];
      uVar5 = *(undefined4 *)((longlong)puVar21 + 0xc);
      uVar6 = *(undefined4 *)((longlong)puVar21 + 0x14);
      uVar35 = puVar21[3];
      uVar7 = *(undefined4 *)((longlong)puVar21 + 0x1c);
      puVar3[4] = (int)puVar21[2];
      puVar3[5] = uVar6;
      puVar3[6] = (int)uVar35;
      puVar3[7] = uVar7;
      *puVar3 = (int)uVar17;
      puVar3[1] = uVar4;
      puVar3[2] = (int)uVar20;
      puVar3[3] = uVar5;
      FUN_140600b26(plVar24,iVar8);
      param_2 = local_160;
    }
LAB_140ec2917:
    FUN_1405facea(plVar25,param_2);
    lVar12 = local_188;
    if (0.0 <= *(float *)((longlong)plVar25 + 0xe4)) {
      fVar38 = *(float *)(plVar25 + 0x1c);
      if (fVar38 < *(float *)((longlong)plVar25 + 0xe4)) goto LAB_140ec2953;
    }
    else {
      fVar38 = *(float *)((longlong)plVar25 + 0xdc);
LAB_140ec2953:
      *(float *)((longlong)plVar25 + 0xe4) = fVar38;
    }
    plVar24 = plVar34;
    if (CONCAT44(uStack_13c,uStack_140) != 0) {
      FUN_1400020a8();
    }
  }
  if ((uVar15 != 0) && (plVar24 != (longlong *)0x0)) {
    if ((int)plVar24[1] != *(int *)((longlong)plVar24 + 0x34)) {
      plVar25 = plVar24 + 7;
      if ((longlong *)plVar24[8] != (longlong *)0x0) {
        plVar25 = (longlong *)plVar24[8];
      }
      iVar8 = *(int *)((longlong)plVar25 + (ulonglong)((int)plVar24[9] - 1U & uVar15) * 4);
      if (iVar8 != -1) {
        do {
          lVar30 = *plVar24 + (longlong)iVar8 * 0x108;
          if (*(uint *)(*plVar24 + (longlong)iVar8 * 0x108) == uVar15) goto LAB_140ec29d8;
          iVar8 = *(int *)(lVar30 + 0x100);
        } while (iVar8 != -1);
      }
    }
    lVar30 = 0;
LAB_140ec29d8:
    lVar23 = lVar30 + 8;
    if (lVar30 == 0) {
      lVar23 = 0;
    }
    piVar1 = (int *)(lVar23 + 0xd8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if ((int)plVar24[1] != *(int *)((longlong)plVar24 + 0x34)) {
        plVar25 = plVar24 + 7;
        if ((longlong *)plVar24[8] != (longlong *)0x0) {
          plVar25 = (longlong *)plVar24[8];
        }
        iVar8 = *(int *)((longlong)plVar25 +
                        ((longlong)(int)uVar15 & (longlong)(int)plVar24[9] - 1U) * 4);
        if (iVar8 != -1) {
          do {
            if (*(uint *)(*plVar24 + (longlong)iVar8 * 0x108) == uVar15) {
              FUN_1405fc9b2(plVar24);
              break;
            }
            iVar8 = *(int *)((longlong)iVar8 * 0x108 + *plVar24 + 0x100);
          } while (iVar8 != -1);
        }
      }
      plVar24 = plVar24 + 10;
      *(int *)plVar24 = (int)*plVar24 + -1;
      if ((int)*plVar24 == 0) {
        if (DAT_14c950c29 == 1 && param_2 != 0) {
          FUN_1456cec3c(param_2);
        }
        if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(param_2);
        }
        if (*(int *)(lVar12 + 0x80) != *(int *)(lVar12 + 0xac)) {
          if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(param_2);
          }
          plVar25 = local_190;
          lVar30 = lVar12 + 0xb0;
          if (*(longlong *)(lVar12 + 0xb8) != 0) {
            lVar30 = *(longlong *)(lVar12 + 0xb8);
          }
          uVar17 = (longlong)(int)local_154 & (longlong)*(int *)(lVar12 + 0xc0) - 1U;
          iVar8 = *(int *)(lVar30 + uVar17 * 4);
          if (iVar8 != -1) {
            puVar21 = (ulonglong *)(lVar30 + uVar17 * 4);
            bVar13 = DAT_14c950c29;
            do {
              puVar36 = (ulonglong *)((longlong)iVar8 * 0x68 + *plVar25);
              if ((param_2 != 0) && ((bVar13 & 1) != 0)) {
                FUN_1456cec3c(param_2);
                bVar13 = DAT_14c950c29;
              }
              uVar17 = *puVar36;
              if (((bVar13 & 1) != 0) && (uVar17 != 0)) {
                FUN_1456cec3c(uVar17);
                bVar13 = DAT_14c950c29;
              }
              if ((param_2 != 0) && ((bVar13 & 1) != 0)) {
                FUN_1456cec3c(param_2);
                bVar13 = DAT_14c950c29;
              }
              if (uVar17 == param_2) {
                FUN_1405fa84c(plVar25,(int)*puVar21);
                break;
              }
              iVar8 = (int)puVar36[0xc];
              puVar21 = puVar36 + 0xc;
            } while (iVar8 != -1);
          }
        }
      }
    }
    else {
      if (*(int *)(lVar23 + 0x78) != *(int *)(lVar23 + 0xa4)) {
        uVar15 = (uint)local_178;
        uVar14 = (uint)local_170;
        lVar12 = lVar23 + 0xa8;
        if (*(longlong *)(lVar23 + 0xb0) != 0) {
          lVar12 = *(longlong *)(lVar23 + 0xb0);
        }
        iVar8 = *(int *)(lVar12 + ((longlong)(int)(uVar15 ^ uVar14) &
                                  (longlong)*(int *)(lVar23 + 0xb8) - 1U) * 4);
        if (iVar8 != -1) {
          local_190 = DAT_14c9647c8;
          do {
            uVar17 = *(ulonglong *)(*(longlong *)(lVar23 + 0x70) + (longlong)iVar8 * 0x28);
            uVar31 = (uint)uVar17;
            uVar28 = (uint)(uVar17 >> 0x20);
            if (((uVar14 == uVar31) && (uVar28 == uVar15)) ||
               (((uVar17 >> 0x20 == 0 ||
                 (((((int)uVar31 < 0 || (DAT_14c9647dc <= (int)uVar31)) ||
                   (lVar12 = (ulonglong)((uVar31 & 0xffff) * 0x18) +
                             *(longlong *)
                              ((longlong)DAT_14c9647c8 + (ulonglong)(uVar31 >> 0xd & 0x3fff8)),
                   lVar12 == 0)) ||
                  ((*(uint *)(lVar12 + 0x10) != uVar28 ||
                   ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)))))) &&
                ((((int)uVar14 < 0 || uVar15 == 0) || DAT_14c9647dc <= (int)uVar14 ||
                 (((lVar12 = DAT_14c9647c8[local_170 >> 0x10 & 0xffff] +
                             (ulonglong)((uVar14 & 0xffff) * 0x18), lVar12 == 0 ||
                   (*(uint *)(lVar12 + 0x10) != uVar15)) ||
                  ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)))))))) {
              FUN_1405fa6ea();
              break;
            }
            iVar8 = *(int *)(*(longlong *)(lVar23 + 0x70) + (longlong)iVar8 * 0x28 + 0x20);
          } while (iVar8 != -1);
        }
      }
      FUN_1405facea(lVar23,param_2);
      lVar12 = local_188;
      if (0.0 <= *(float *)(lVar23 + 0xe4)) {
        if (*(float *)(lVar23 + 0xe0) < *(float *)(lVar23 + 0xe4)) {
          *(float *)(lVar23 + 0xe4) = *(float *)(lVar23 + 0xe0);
        }
      }
      else {
        *(undefined4 *)(lVar23 + 0xe4) = *(undefined4 *)(lVar23 + 0xdc);
      }
    }
  }
  FUN_1405fa972(lVar12);
LAB_140ec2dd4:
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec35ba FUN_140ec35ba body=739 status=ok
// SIG undefined FUN_140ec35ba(void)

void FUN_140ec35ba(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar14 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar14,4);
    if ((int)uVar14 < 1) goto LAB_140ec3620;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar14 != uVar3);
LAB_140ec3620:
  iVar10 = (int)param_1[5];
  if (iVar10 == 0) {
    uVar16 = 0;
    uVar15 = 1;
    iVar9 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar4;
    if (uVar14 == 0) {
      iVar9 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar9 = iVar10 + -1;
      }
      uVar16 = 0;
      uVar15 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar15 = uVar16;
      }
      iVar8 = 0;
      do {
        if (uVar15 == uVar16) {
          return;
        }
        iVar8 = iVar8 + 0x20;
        uVar14 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar16 = 0;
      iVar8 = 0;
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14);
    uVar11 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar9 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar9) {
      iVar9 = iVar10;
    }
  }
  if (iVar9 < iVar10) {
    uVar14 = 0xffffffff;
    bVar2 = DAT_14c950c29;
    do {
      lVar13 = *param_1;
      uVar11 = *(ulonglong *)(lVar13 + (longlong)iVar9 * 0x18);
      if (((bVar2 & 1) != 0) && (uVar11 != 0)) {
        FUN_1456cec3c(uVar11);
        bVar2 = DAT_14c950c29;
      }
      lVar13 = lVar13 + (longlong)iVar9 * 0x18;
      uVar3 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar11 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
      iVar10 = (int)uVar11;
      *(int *)(lVar13 + 0x14) = iVar10;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar13 + 0x10) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
      uVar14 = uVar14 & ~(uint)uVar15;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 2);
      }
      iVar10 = (int)param_1[5];
      iVar9 = (int)uVar16;
      lVar13 = (longlong)iVar9;
      uVar3 = puVar4[lVar13] & uVar14;
      if (uVar3 == 0) {
        iVar6 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar6 = iVar10 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar9) {
          iVar7 = iVar9;
        }
        if (iVar6 <= iVar9) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar3 = puVar4[lVar13 + lVar12 + 1];
          if (uVar3 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar7 - lVar13 == lVar12) {
            return;
          }
        }
        uVar16 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar3 & uVar3);
      uVar11 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar10);
  }
  return;
}



// FUNCTION 140ec389e FUN_140ec389e body=77 status=ok
// SIG undefined FUN_140ec389e(void)

void FUN_140ec389e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar2 = param_1 + 0x28;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      FUN_140ec398c(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  FUN_140ec38ec(param_1 + 0x28,0);
  return;
}



// FUNCTION 140ec38ec FUN_140ec38ec body=77 status=ok
// SIG undefined FUN_140ec38ec(void)

void FUN_140ec38ec(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_140c02a9b(lVar1,*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != param_2) {
    FUN_140ec393a(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140ec393a FUN_140ec393a body=81 status=ok
// SIG undefined FUN_140ec393a(void)

void FUN_140ec393a(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    uVar1 = (uint)(uVar2 >> 4);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x1c)) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar3;
  FUN_140ec3a62(param_1,*(undefined4 *)(param_1 + 0x18),uVar3);
  return;
}



// FUNCTION 140ec398c FUN_140ec398c body=129 status=ok
// SIG undefined FUN_140ec398c(void)

void FUN_140ec398c(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_140ec3ae6();
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  uVar2 = 0;
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      FUN_140ec3de0(*(undefined8 *)(lVar3 + lVar4));
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  FUN_140ec3a0d(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  FUN_140ec3e5c(param_1 + 0x20,0);
  return;
}



// FUNCTION 140ec3a0d FUN_140ec3a0d body=75 status=ok
// SIG undefined FUN_140ec3a0d(void)

void FUN_140ec3a0d(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ec3a58 FUN_140ec3a58 body=9 status=ok
// SIG undefined FUN_140ec3a58(void)

void FUN_140ec3a58(longlong param_1)

{
  FUN_140fae274(param_1 + 0x10);
  return;
}



// FUNCTION 140ec3a62 FUN_140ec3a62 body=131 status=ok
// SIG undefined FUN_140ec3a62(void)

void FUN_140ec3a62(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,0x10);
  return;
}



// FUNCTION 140ec3ae6 FUN_140ec3ae6 body=239 status=ok
// SIG undefined FUN_140ec3ae6(void)

void FUN_140ec3ae6(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x20))();
  local_58 = 0;
  uStack_50 = 0;
  lVar7 = param_1[0xe];
  if ((longlong)(int)lVar7 != 0) {
    lVar6 = param_1[0xd];
    lVar8 = 0;
    do {
      uVar2 = uStack_50;
      puVar1 = *(undefined8 **)(lVar6 + lVar8);
      lVar5 = (longlong)(int)uStack_50;
      uVar3 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
      if (uStack_50._4_4_ < uVar3) {
        FUN_140155462(&local_58,uVar2 & 0xffffffff);
      }
      *(undefined8 *)(local_58 + lVar5 * 8) = *puVar1;
      lVar8 = lVar8 + 0x10;
    } while ((longlong)(int)lVar7 * 0x10 != lVar8);
    if ((longlong)(int)uStack_50 != 0) {
      lVar6 = (longlong)(int)uStack_50 << 3;
      lVar7 = local_58;
      do {
        uVar4 = FUN_14479d2ce(lVar7);
        FUN_14110eb88(param_1,uVar4);
        lVar7 = lVar7 + 8;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ec3bd6 FUN_140ec3bd6 body=142 status=ok
// SIG undefined FUN_140ec3bd6(void)

void FUN_140ec3bd6(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    uVar1 = FUN_140ec3c88(param_1);
    plVar2 = (longlong *)FUN_140ec3c65(uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x78))(plVar2,param_1 + 0x78,*(undefined8 *)(param_1 + 0xb0));
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
  }
  local_20 = 0;
  local_18 = 0;
  FUN_140ec3f1c(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec3c65 FUN_140ec3c65 body=35 status=ok
// SIG undefined FUN_140ec3c65(void)

undefined8 FUN_140ec3c65(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140149a73(param_1,0);
  if (lVar1 != 0) {
    uVar2 = FUN_1401499e8(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140ec3c88 FUN_140ec3c88 body=115 status=ok
// SIG undefined FUN_140ec3c88(void)

undefined8 FUN_140ec3c88(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x48) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x50), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar6 = FUN_140ec3cfc(0);
        return uVar6;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = FUN_140ec3cfc(*(undefined8 *)(param_1 + 0x48));
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
  return uVar6;
}



// FUNCTION 140ec3cfc FUN_140ec3cfc body=133 status=ok
// SIG undefined FUN_140ec3cfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140ec3cfc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x10) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar6 = FUN_140ec3d82(*(undefined8 *)(_DAT_00000010 + 8));
        return uVar6;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = FUN_140ec3d82(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 8));
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
  return uVar6;
}



// FUNCTION 140ec3d82 FUN_140ec3d82 body=94 status=ok
// SIG undefined FUN_140ec3d82(void)

undefined8 FUN_140ec3d82(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar3 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (plVar4 == (longlong *)0x0) {
      return 0;
    }
    if ((int)plVar4[2] != *(int *)(param_1 + 0x54)) {
      return 0;
    }
    if ((*(uint *)(plVar4 + 1) & 0x10200000) != 0) {
      return 0;
    }
    if (*plVar4 == 0) {
      return 0;
    }
    lVar2 = *(longlong *)(*plVar4 + 0x30);
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x360);
  }
  return uVar3;
}



// FUNCTION 140ec3de0 FUN_140ec3de0 body=121 status=ok
// SIG undefined FUN_140ec3de0(void)

void FUN_140ec3de0(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  (**(code **)(*param_1 + 0x28))();
  lVar3 = param_1[9];
  lVar1 = param_1[10];
  uVar2 = 0;
  if ((longlong)(int)lVar1 != 0) {
    lVar4 = 0;
    do {
      FUN_140ec398c(*(undefined8 *)(lVar3 + lVar4));
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar1 * 0x10 != lVar4);
    uVar2 = (undefined4)param_1[10];
    lVar3 = param_1[9];
  }
  FUN_140c02a9b(lVar3,uVar2);
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) == 0) {
    return;
  }
  FUN_140ec3ebc(param_1 + 9,0);
  return;
}



// FUNCTION 140ec3e5c FUN_140ec3e5c body=96 status=ok
// SIG undefined FUN_140ec3e5c(void)

void FUN_140ec3e5c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 140ec3ebc FUN_140ec3ebc body=96 status=ok
// SIG undefined FUN_140ec3ebc(void)

void FUN_140ec3ebc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 140ec3f1c FUN_140ec3f1c body=1125 status=ok
// SIG undefined FUN_140ec3f1c(void)

void FUN_140ec3f1c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  undefined1 local_70 [32];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x400000000;
  lVar11 = param_3[1];
  if ((longlong)(int)lVar11 != 0) {
    lVar8 = *param_3;
    lVar12 = 0;
    do {
      iVar2 = *(int *)(lVar8 + 4 + lVar12);
      if (iVar2 != 0) {
        uVar6 = *(uint *)(lVar8 + lVar12);
        if (((((int)uVar6 < 0) || (DAT_14c9647dc <= (int)uVar6)) ||
            (plVar9 = (longlong *)
                      ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
            plVar9 == (longlong *)0x0)) ||
           ((((int)plVar9[2] != iVar2 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) ||
            (lVar13 = *plVar9, lVar13 == 0)))) {
LAB_140ec4103:
          iVar2 = *(int *)(lVar8 + 4 + lVar12);
          if ((((iVar2 != 0) &&
               (((uVar6 = *(uint *)(lVar8 + lVar12), -1 < (int)uVar6 && ((int)uVar6 < DAT_14c9647dc)
                 ) && (plVar9 = (longlong *)
                                ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                      plVar9 != (longlong *)0x0)))) &&
              (((int)plVar9[2] == iVar2 && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) &&
             (lVar13 = *plVar9, lVar13 != 0)) {
            if (DAT_14cad00c8 == 0) {
              local_90 = &local_78;
              local_78 = FUN_144a7958c;
              local_80 = FUN_14081d0ea;
              local_88 = FUN_14081d0ea;
              local_98 = &LAB_1479b7a0c;
              local_a0 = &LAB_1463b464e;
              local_a8 = L"Engine";
              local_b0 = 0;
              local_b8 = 0x10000005;
              local_c0 = 8;
              local_c8 = 0x110;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            }
            if (((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38))
                && (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                     (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) == DAT_14cad00c8 + 0x30)) &&
               (lVar13 = *(longlong *)(lVar13 + 0xa8), lVar13 != 0)) goto LAB_140ec4194;
          }
        }
        else {
          if (DAT_14cac9ca8 == 0) {
            local_90 = &local_78;
            local_78 = FUN_141030f22;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_14081d0ea;
            local_98 = &LAB_1478c0a72;
            local_a0 = &LAB_1417b2375;
            local_a8 = L"Engine";
            local_b0 = 0x1000000000;
            local_b8 = 0x10000004;
            local_c0 = 8;
            local_c8 = 0x390;
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          }
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
          goto LAB_140ec4103;
LAB_140ec4194:
          uVar5 = local_48;
          lVar10 = (longlong)(int)local_48;
          uVar6 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,uVar6);
          if (local_48._4_4_ < uVar6) {
            FUN_14885072a(local_70,uVar5 & 0xffffffff);
          }
          puVar7 = local_50;
          if (local_50 == (undefined1 *)0x0) {
            puVar7 = local_70;
          }
          *(longlong *)(puVar7 + lVar10 * 8) = lVar13;
        }
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)(int)lVar11 * 8 != lVar12);
    lVar11 = (longlong)(int)local_48;
    puVar7 = local_70;
    if (local_50 != (undefined1 *)0x0) {
      puVar7 = local_50;
    }
    if (lVar11 != 0) {
      lVar8 = 0;
      do {
        FUN_140ec4382(param_1,*(undefined8 *)(puVar7 + lVar8));
        lVar8 = lVar8 + 8;
      } while (lVar11 * 8 != lVar8);
    }
  }
  if (0 < (longlong)*(int *)(param_1 + 0x70)) {
    lVar11 = (longlong)*(int *)(param_1 + 0x70);
    do {
      puVar3 = *(uint **)(*(longlong *)(param_1 + 0x68) + (lVar11 + -1) * 0x10);
      uVar6 = puVar3[1];
      if ((uVar6 == 0) || (uVar1 = *puVar3, (int)uVar1 < 0)) {
LAB_140ec4224:
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if ((int)uVar1 < DAT_14c9647dc) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((((plVar9 == (longlong *)0x0) || (*(uint *)(plVar9 + 2) != uVar6)) ||
              ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) || (lVar8 = *plVar9, lVar8 == 0))
          goto LAB_140ec4224;
          puVar7 = local_50;
          if (local_50 == (undefined1 *)0x0) {
            puVar7 = local_70;
          }
          if ((longlong)(int)local_48 != 0) {
            lVar12 = 0;
            do {
              if (*(longlong *)(puVar7 + lVar12) == lVar8) goto LAB_140ec4065;
              lVar12 = lVar12 + 8;
            } while ((longlong)(int)local_48 * 8 != lVar12);
          }
        }
      }
      FUN_14110eb88(param_1,lVar8);
LAB_140ec4065:
      bVar4 = 1 < lVar11;
      lVar11 = lVar11 + -1;
    } while (bVar4);
  }
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ec4382 FUN_140ec4382 body=2861 status=ok
// SIG undefined FUN_140ec4382(void)

void FUN_140ec4382(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong *local_70;
  int local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) goto LAB_140ec498b;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x68);
    lVar11 = (longlong)*(int *)(param_1 + 0x70) << 4;
    do {
      lVar15 = FUN_14479d2ce(*puVar10);
      if (lVar15 == param_2) {
        if (puVar10 != (undefined8 *)0x0) goto LAB_140ec498b;
        break;
      }
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  plVar8 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b418f50;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  iVar6 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar6 + 1U) {
    FUN_140ec5046((longlong *)(param_1 + 0x68),iVar6);
  }
  lVar11 = *(longlong *)(param_1 + 0x68);
  lVar15 = (longlong)iVar6 * 0x10;
  *(longlong **)(lVar11 + lVar15) = plVar8 + 2;
  *(longlong **)(lVar11 + 8 + lVar15) = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  puVar2 = *(uint **)(lVar11 + lVar15);
  uVar5 = *(uint *)(param_2 + 0xc);
  *puVar2 = uVar5;
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar16 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar16 = 0;
  }
  uVar5 = *(uint *)(lVar16 + 0x10);
  if (*(uint *)(lVar16 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    uVar9 = DAT_14c964868 + 1;
    bVar18 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar18) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar9);
    }
    LOCK();
    uVar5 = *(uint *)(lVar16 + 0x10);
    bVar18 = uVar5 == 0;
    if (bVar18) {
      *(uint *)(lVar16 + 0x10) = uVar9;
      uVar5 = 0;
    }
    UNLOCK();
    if (bVar18) {
      uVar5 = uVar9;
    }
  }
  puVar2[1] = uVar5;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  local_68 = 3;
  plVar8 = *(longlong **)(param_1 + 0x10);
  local_a0 = param_1;
  if (plVar8 == (longlong *)0x0) {
LAB_140ec4b48:
    *local_70 = (longlong)&PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar16 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar16 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar16;
    local_70[2] = lVar14;
    *local_70 = (longlong)&PTR_FUN_14b418f70;
    local_70[3] = 0;
    local_70[4] = 0;
    local_70[5] = (longlong)&LAB_1488fb216;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_140ec4b48;
      LOCK();
      iVar7 = (int)plVar8[1];
      bVar18 = iVar6 == iVar7;
      if (bVar18) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar18);
    lVar16 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *local_70 = (longlong)&PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    local_70[2] = lVar13;
    *local_70 = (longlong)&PTR_FUN_14b418f70;
    local_70[3] = lVar16;
    local_70[4] = (longlong)plVar8;
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    local_70[5] = (longlong)&LAB_1488fb216;
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (((local_68 == 0) || (local_70 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_70 + 0x30))(), cVar4 == '\0')) {
    param_1 = local_a0;
    if (local_68 == 0) goto LAB_140ec4620;
    if (local_70 != (longlong *)0x0) {
      (**(code **)*local_70)(local_70,0);
      FUN_1446efa72(&local_70,0,0,0x10);
      goto LAB_140ec4613;
    }
  }
  else {
    plVar8 = (longlong *)(param_2 + 0x2b8);
    if (*(int *)(param_2 + 0x2cc) < 1) {
      iVar6 = *(int *)(param_2 + 0x2c0);
      iVar7 = *(int *)(param_2 + 0x2c8) + -1;
      *(int *)(param_2 + 0x2c8) = iVar7;
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
        if (0 < iVar6) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar8 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar8 + (longlong)iVar12 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar8,iVar12);
              FUN_14005b248(plVar8);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar7 = *(int *)(param_2 + 0x2c0);
          } while (iVar12 < iVar7);
        }
        param_1 = local_a0;
        iVar12 = 2;
        if (2 < iVar7 * 2) {
          iVar12 = iVar7 * 2;
        }
        *(int *)(param_2 + 0x2c8) = iVar12;
        if ((iVar12 < iVar6) && (*(int *)(param_2 + 0x2c4) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_68 != 0) && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x38))(local_70,&local_88);
    }
    iVar6 = *(int *)(param_2 + 0x2c0);
    *(uint *)(param_2 + 0x2c0) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x2c4) < iVar6 + 1U) {
      FUN_1447a71f6(plVar8,iVar6);
    }
    lVar16 = *plVar8;
    lVar14 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar16 + lVar14) = 0;
    *(undefined4 *)(lVar16 + 8 + lVar14) = 0;
    *(longlong **)(lVar16 + lVar14) = local_70;
    local_70 = (longlong *)0x0;
    *(int *)(lVar16 + 8 + lVar14) = local_68;
LAB_140ec4613:
    local_68 = 0;
LAB_140ec4620:
    if (local_70 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  local_70 = (longlong *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  local_68 = 3;
  plVar8 = *(longlong **)(param_1 + 0x10);
  if (plVar8 == (longlong *)0x0) {
LAB_140ec4b98:
    *local_70 = (longlong)&PTR_LAB_14a1c7440;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar16 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar16 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar16;
    local_70[2] = lVar14;
    *local_70 = (longlong)&PTR_FUN_14b418fe0;
    local_70[3] = 0;
    local_70[4] = 0;
    local_70[5] = (longlong)&LAB_14110eb82;
    param_1 = local_a0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_140ec4b98;
      LOCK();
      iVar7 = (int)plVar8[1];
      bVar18 = iVar6 == iVar7;
      if (bVar18) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar18);
    lVar16 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *local_70 = (longlong)&PTR_LAB_14a1c7440;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    local_70[2] = lVar13;
    *local_70 = (longlong)&PTR_FUN_14b418fe0;
    local_70[3] = lVar16;
    local_70[4] = (longlong)plVar8;
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    local_70[5] = (longlong)&LAB_14110eb82;
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (((local_68 == 0) || (local_70 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_70 + 0x30))(), cVar4 == '\0')) {
    param_1 = local_a0;
    if (local_68 == 0) goto LAB_140ec47c4;
    if (local_70 != (longlong *)0x0) {
      (**(code **)*local_70)(local_70,0);
      FUN_1446efa72(&local_70,0,0,0x10);
      goto LAB_140ec47b7;
    }
  }
  else {
    plVar8 = (longlong *)(param_2 + 0x2d0);
    if (*(int *)(param_2 + 0x2e4) < 1) {
      iVar6 = *(int *)(param_2 + 0x2d8);
      iVar7 = *(int *)(param_2 + 0x2e0) + -1;
      *(int *)(param_2 + 0x2e0) = iVar7;
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
        if (0 < iVar6) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar8 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar8 + (longlong)iVar12 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar8,iVar12);
              FUN_14005b248(plVar8);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar7 = *(int *)(param_2 + 0x2d8);
          } while (iVar12 < iVar7);
        }
        param_1 = local_a0;
        iVar12 = 2;
        if (2 < iVar7 * 2) {
          iVar12 = iVar7 * 2;
        }
        *(int *)(param_2 + 0x2e0) = iVar12;
        if ((iVar12 < iVar6) && (*(int *)(param_2 + 0x2dc) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_68 != 0) && (local_70 != (longlong *)0x0)) {
      (**(code **)(*local_70 + 0x38))(local_70,&local_88);
    }
    iVar6 = *(int *)(param_2 + 0x2d8);
    *(uint *)(param_2 + 0x2d8) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x2dc) < iVar6 + 1U) {
      FUN_1447a71f6(plVar8,iVar6);
    }
    lVar16 = *plVar8;
    lVar14 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar16 + lVar14) = 0;
    *(undefined4 *)(lVar16 + 8 + lVar14) = 0;
    *(longlong **)(lVar16 + lVar14) = local_70;
    local_70 = (longlong *)0x0;
    *(int *)(lVar16 + 8 + lVar14) = local_68;
LAB_140ec47b7:
    local_68 = 0;
LAB_140ec47c4:
    if (local_70 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (((*(longlong *)(param_1 + 0x48) == 0) ||
      (plVar8 = *(longlong **)(param_1 + 0x50), plVar8 == (longlong *)0x0)) || ((int)plVar8[1] < 1))
  {
    lVar16 = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) {
        lVar16 = FUN_140ec4eb0(0);
        goto LAB_140ec481e;
      }
      LOCK();
      iVar7 = (int)plVar8[1];
      bVar18 = iVar6 == iVar7;
      if (bVar18) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar18);
    lVar16 = FUN_140ec4eb0(*(undefined8 *)(param_1 + 0x48));
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      param_1 = local_a0;
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        param_1 = local_a0;
      }
    }
  }
LAB_140ec481e:
  if ((longlong)*(int *)(lVar16 + 0x50) != 0) {
    puVar10 = *(undefined8 **)(lVar16 + 0x48);
    puVar17 = puVar10 + (longlong)*(int *)(lVar16 + 0x50) * 2;
    do {
      cVar4 = (**(code **)(*(longlong *)*puVar10 + 0x10))();
      if (cVar4 != '\0') {
        (**(code **)(*(longlong *)*puVar10 + 0x20))((longlong *)*puVar10,&local_70);
        plVar8 = local_70;
        if (local_70 != (longlong *)0x0) {
          lVar16 = *(longlong *)(lVar11 + lVar15);
          plVar3 = (longlong *)CONCAT44(uStack_64,local_68);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          iVar6 = *(int *)(lVar16 + 0x10);
          *(uint *)(lVar16 + 0x10) = iVar6 + 1U;
          if (*(uint *)(lVar16 + 0x14) < iVar6 + 1U) {
            FUN_141168bc8((longlong *)(lVar16 + 8),iVar6);
          }
          lVar16 = *(longlong *)(lVar16 + 8);
          *(longlong **)(lVar16 + (longlong)iVar6 * 0x10) = plVar8;
          *(longlong **)(lVar16 + 8 + (longlong)iVar6 * 0x10) = plVar3;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            LOCK();
            plVar8 = plVar3 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
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
          param_1 = local_a0;
          local_88 = 0;
          uStack_80 = 0;
          local_90 = *(longlong **)(local_a0 + 0x50);
          if (local_90 == (longlong *)0x0) {
            local_90 = (longlong *)0x0;
            local_98 = 0;
          }
          else {
            iVar6 = (int)local_90[1];
            do {
              if (iVar6 == 0) {
                local_90 = (longlong *)0x0;
                local_98 = 0;
                goto LAB_140ec4900;
              }
              LOCK();
              iVar7 = (int)local_90[1];
              bVar18 = iVar6 == iVar7;
              if (bVar18) {
                *(int *)(local_90 + 1) = iVar6 + 1;
                iVar7 = iVar6;
              }
              iVar6 = iVar7;
              UNLOCK();
            } while (!bVar18);
            local_98 = *(undefined8 *)(local_a0 + 0x48);
          }
LAB_140ec4900:
          FUN_141168cd6(local_70,puVar10,&local_98,&local_88);
          plVar8 = local_90;
          if (local_90 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_90 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_90)(local_90);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          FUN_1403d9f56(local_88,uStack_80 & 0xffffffff);
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          FUN_140ec4f1c(local_70,param_2);
        }
        plVar8 = (longlong *)CONCAT44(uStack_64,local_68);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar8 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      puVar10 = puVar10 + 2;
    } while (puVar10 != puVar17);
  }
  FUN_1400da9ba(param_1 + 0x18,param_2);
LAB_140ec498b:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ec4eb0 FUN_140ec4eb0 body=108 status=ok
// SIG undefined FUN_140ec4eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140ec4eb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x10) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return _DAT_00000018;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
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
  return uVar6;
}



// FUNCTION 140ec4f1c FUN_140ec4f1c body=297 status=ok
// SIG undefined FUN_140ec4f1c(void)

void FUN_140ec4f1c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  
  if ((longlong)*(int *)(param_1 + 8) != 0) {
    lVar6 = param_1[7];
    lVar7 = (longlong)*(int *)(param_1 + 8) << 3;
    do {
      cVar2 = FUN_14069eaf4(lVar6,param_2);
      if (cVar2 != '\0') {
        return;
      }
      lVar6 = lVar6 + 8;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  if (param_2 == 0) {
    uVar8 = 0;
    uVar4 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar9 = uVar3 == 0;
      if (bVar9) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar3 = uVar5;
      }
      uVar4 = (ulonglong)uVar3;
    }
  }
  iVar1 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x44) < iVar1 + 1U) {
    FUN_140155462(param_1 + 7,iVar1);
  }
  *(ulonglong *)(param_1[7] + (longlong)iVar1 * 8) = (ulonglong)uVar8 | uVar4 << 0x20;
                    /* WARNING: Could not recover jumptable at 0x000140ec4fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,param_2);
  return;
}



// FUNCTION 140ec5046 FUN_140ec5046 body=269 status=ok
// SIG undefined FUN_140ec5046(void)

void FUN_140ec5046(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140ec5154 FUN_140ec5154 body=250 status=ok
// SIG undefined FUN_140ec5154(void)

void FUN_140ec5154(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    bVar1 = *(byte *)(param_2 + 1);
    bVar3 = bVar1 & 1 | 0x4a;
    if ((bVar1 & 4) != 0) {
      bVar3 = bVar1 & 1 | 0x4e;
    }
    bVar2 = bVar3 & 0x47;
    if ((bVar1 & 8) != 0) {
      bVar2 = bVar3;
    }
    bVar3 = bVar1 & 0x30 | bVar2 & 0x3f;
    if ((bVar1 & 0x40) != 0) {
      bVar3 = bVar1 & 0x30 | bVar2 | 0x40;
    }
    bVar2 = *(byte *)((longlong)param_2 + 9);
    local_20 = param_2[5];
    local_28 = *(undefined1 *)((longlong)param_2 + 0x24);
    local_30 = *(undefined4 *)(param_2 + 4);
    local_18 = *(undefined4 *)(param_2 + 2);
    uStack_14 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_10 = *(undefined4 *)(param_2 + 3);
    uStack_c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_38 = &local_18;
    FUN_140ec5250(*(longlong *)(param_1 + 0x110),*param_2,
                  (bVar2 & 0xc) << 6 |
                  (bVar2 & 2) << 6 | (bVar2 & 1) << 0xb | (uint)bVar3 + (bVar1 & 0xffffff80) * 8,
                  param_3);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec5250 FUN_140ec5250 body=225 status=ok
// SIG undefined FUN_140ec5250(void)

void FUN_140ec5250(longlong *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined2 local_78;
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_80 = param_2;
  local_78 = param_3;
  FUN_14065c7a4(local_70,param_4);
  local_60 = *param_5;
  uStack_5c = param_5[1];
  uStack_58 = param_5[2];
  uStack_54 = param_5[3];
  local_50 = param_6;
  local_4c = param_7;
  local_48 = param_8;
  uVar1 = FUN_14477b072(param_1,DAT_14cb6f250);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_80);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec5332 FUN_140ec5332 body=93 status=ok
// SIG undefined FUN_140ec5332(void)

undefined8 * FUN_140ec5332(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140b4032f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140ec53bc(param_1,iVar1);
      FUN_140ec538f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140ec538f FUN_140ec538f body=45 status=ok
// SIG undefined FUN_140ec538f(void)

void FUN_140ec538f(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140ec53bc FUN_140ec53bc body=228 status=ok
// SIG undefined FUN_140ec53bc(void)

void FUN_140ec53bc(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140ec54a0 FUN_140ec54a0 body=111 status=ok
// SIG undefined FUN_140ec54a0(void)

void FUN_140ec54a0(longlong *param_1)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_21;
  local_20 = &LAB_14333d9d2;
  FUN_140ec5510(param_1[0x4d]);
  (**(code **)(*param_1 + 0x340))(param_1);
  (**(code **)(*param_1 + 0x348))(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec5510 FUN_140ec5510 body=400 status=ok
// SIG undefined FUN_140ec5510(void)

void FUN_140ec5510(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_90 = (longlong *)*(longlong *)(param_1 + 0x30);
    (*(code *)*param_2)(param_2[1]);
    local_68 = *param_2;
    local_60 = param_2[1];
    FUN_140ec56a2(*(undefined8 *)(param_1 + 0x30));
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  lVar2 = param_1 + 0x48;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar4 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x60);
  }
  local_78 = local_48;
  iStack_74 = iStack_44;
  local_70 = local_40;
  local_6c = local_3c;
  local_88 = local_58;
  local_80 = local_50;
  local_90 = plVar1;
  if ((iStack_44 != iVar4) || (local_50 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      if (lVar3 != 0) {
        local_58 = lVar3;
        (*(code *)*param_2)(param_2[1]);
        local_a0 = *param_2;
        local_98 = param_2[1];
        FUN_140ec56a2(lVar3);
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar4) || (local_80 != lVar2)) || (local_90 != plVar1));
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ec56a2 FUN_140ec56a2 body=401 status=ok
// SIG undefined FUN_140ec56a2(void)

void FUN_140ec56a2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    uVar2 = FUN_140ec591a();
    plVar3 = (longlong *)FUN_144718840(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      local_68 = 0;
      uStack_60 = 0;
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_68);
      lVar4 = local_68;
      lVar6 = (longlong)(int)uStack_60;
      if (lVar6 != 0) {
        lVar7 = 0;
        do {
          lVar5 = (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)(lVar4 + lVar7));
          if (lVar5 != 0) {
            local_50 = lVar5;
            (*(code *)*param_2)(param_2[1],&local_50);
            local_78 = *param_2;
            local_70 = param_2[1];
            FUN_140ec56a2(lVar5,&local_78);
          }
          lVar7 = lVar7 + 8;
        } while (lVar6 * 8 != lVar7);
      }
      if (local_68 != 0) {
        FUN_1400020a8(local_68);
      }
    }
    lVar4 = FUN_140ec5834();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
       (iVar1 = *(int *)(param_1 + 0x170), 0 < iVar1)) {
      lVar4 = 0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x168) + lVar4 * 8);
        if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0)) {
          local_68 = lVar6;
          (*(code *)*param_2)(param_2[1],&local_68);
          local_88 = *param_2;
          local_80 = param_2[1];
          FUN_140ec56a2(lVar6,&local_88);
          iVar1 = *(int *)(param_1 + 0x170);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ec5834 FUN_140ec5834 body=228 status=ok
// SIG undefined FUN_140ec5834(void)

longlong FUN_140ec5834(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab8118 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a9566;
    local_38 = &LAB_1477439b7;
    local_40 = FUN_146355e22;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x180;
    FUN_14081cfa3(L"/Script/UMG",L"PanelWidget",&DAT_14cab8118,FUN_146355e00);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8118;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec591a FUN_140ec591a body=228 status=ok
// SIG undefined FUN_140ec591a(void)

longlong FUN_140ec591a(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab8020 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14774281b;
    local_40 = FUN_146355919;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/UMG",L"NamedSlotInterface",&DAT_14cab8020,&DAT_14774281a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8020;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec5a00 FUN_140ec5a00 body=175 status=ok
// SIG undefined FUN_140ec5a00(void)

void FUN_140ec5a00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined1 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar2 = FUN_140e64c66();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_28 = 0;
      local_30 = param_1;
      FUN_14333ca1c(lVar1);
    }
  }
  FUN_14333cad2((longlong)param_1 + 0x28c,param_1[0x4d]);
  local_19 = 0;
  uVar3 = FUN_14477b072(param_1,DAT_14cab99f8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_19);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec5ab0 FUN_140ec5ab0 body=364 status=ok
// SIG undefined FUN_140ec5ab0(void)

void FUN_140ec5ab0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_168 [40];
  undefined1 local_140 [256];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  for (lVar6 = param_1[2]; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x40)) {
    lVar3 = FUN_140e64c66();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) break;
    iVar1 = *(int *)(lVar6 + 0x3c0);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(lVar6 + 0x3b8);
      lVar7 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + lVar7);
        (**(code **)(*plVar2 + 0x2b0))(plVar2,param_1);
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
  }
  *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) | 8;
  if (0 < (int)param_1[0x4c]) {
    local_40 = (undefined1 *)0x0;
    local_38 = 0x2000000000;
    FUN_14779d098(local_140,param_1 + 0x4b);
    puVar5 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      puVar5 = local_140;
    }
    lVar6 = (longlong)(int)local_38;
    if (lVar6 != 0) {
      lVar3 = 0;
      do {
        (**(code **)(**(longlong **)(puVar5 + lVar3) + 0x2a8))();
        lVar3 = lVar3 + 8;
      } while (lVar6 * 8 != lVar3);
    }
    if (local_40 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar4 = FUN_14477b072(param_1,DAT_14cab9700);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,0);
  FUN_1417aaa18(param_1);
  if ((local_30 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ec5c26 FUN_140ec5c26 body=112 status=ok
// SIG undefined FUN_140ec5c26(void)

undefined8 * FUN_140ec5c26(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14077009c(param_1,uVar1);
  *param_1 = &PTR_FUN_14ac3ced0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 10) = 4;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb) = 3;
  *(char *)(param_1 + 0xc) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_140440628(param_1 + 0xd,&DAT_14cb24670,0);
  *(undefined1 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 140ec5c96 FUN_140ec5c96 body=285 status=ok
// SIG undefined FUN_140ec5c96(void)

undefined8 FUN_140ec5c96(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140ec5dac;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140ec5dac;
    }
    FUN_1400841de(param_1 + 0x18,&local_38);
  }
  else {
LAB_140ec5dac:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140ec5d60;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140ec5d60;
    }
  }
  uVar6 = 0;
LAB_140ec5d60:
  if (local_38 != 0) {
    FUN_140113f3a(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec5db4 FUN_140ec5db4 body=127 status=ok
// SIG undefined FUN_140ec5db4(void)

void FUN_140ec5db4(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x140);
    lVar2 = (longlong)*(int *)(param_1 + 0x148) * 0x48;
    do {
      if (puVar1[7] == param_2) {
        if (puVar1 != (undefined8 *)0x0) {
          local_18 = *puVar1;
          local_10 = *(undefined8 *)(param_3 + 8);
          FUN_1447cd2ec(param_1 + 0x120);
        }
        break;
      }
      puVar1 = puVar1 + 9;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ec5e34 FUN_140ec5e34 body=206 status=ok
// SIG undefined FUN_140ec5e34(void)

void FUN_140ec5e34(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar3 < 8) {
    FUN_146dad8ef(param_2,param_1 + 0x10);
  }
  else {
    FUN_140ec5f04(param_1 + 0x10,param_2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec5f04 FUN_140ec5f04 body=578 status=ok
// SIG undefined FUN_140ec5f04(void)

void FUN_140ec5f04(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 4;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((param_3 != '\0') ||
     ((((*(byte *)(param_2 + 5) & 4) != 0 &&
       ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
      ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)))) {
    FUN_146db24e8(param_2,param_1);
    goto LAB_140ec600c;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) << 2,
             (longlong)*(int *)((longlong)param_1 + 0xc) << 2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_140ec600c;
    local_28 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_140ec5ff9:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28 << 2);
  }
  else {
    if (local_24 == 4) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0x20000000) {
        *(undefined4 *)(param_1 + 1) = 0;
        if (*(uint *)((longlong)param_1 + 0xc) == local_28) {
          iVar4 = 0;
          uVar5 = local_28;
        }
        else {
          FUN_14482f6fa(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_14475e4ac(param_1,iVar4);
        }
        goto LAB_140ec5ff9;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_140ec600c:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ec6148 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ec614e FUN_140ec614e body=198 status=ok
// SIG undefined FUN_140ec614e(void)

void FUN_140ec614e(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  if (*(char *)((longlong)param_1 + 0x4dfa) == '\x01') {
    cVar1 = (**(code **)(*param_1 + 0x40))();
    if (cVar1 != '\0') {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
      if (plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*param_1 + 0x48))(param_1,0);
        if (cVar1 == '\0') {
          cVar1 = (**(code **)(*param_1 + 0x48))(param_1,1);
          if (cVar1 == '\0') {
            uVar5 = *(undefined4 *)((longlong)param_1 + 0x4e04);
            fVar3 = (float)(**(code **)(*plVar2 + 0x10))(plVar2,0);
            fVar4 = (float)(**(code **)(*plVar2 + 0x58))(plVar2);
            uVar5 = FUN_14114c86e(param_1,fVar3 * fVar4,uVar5);
            *(undefined4 *)((longlong)param_1 + 0x4e04) = uVar5;
          }
          FUN_140efe504(param_1 + -0x76c,1,0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140ec6214 FUN_140ec6214 body=45 status=ok
// SIG undefined FUN_140ec6214(void)

byte FUN_140ec6214(longlong *param_1,byte param_2)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(**(code **)(*param_1 + 0x18))();
  bVar1 = 1;
  if ((*pcVar2 != '\x02') && (pcVar2[1] == '\0')) {
    bVar1 = *pcVar2 == '\x01' & param_2;
  }
  return bVar1;
}



// FUNCTION 140ec6242 FUN_140ec6242 body=158 status=ok
// SIG undefined FUN_140ec6242(void)

ulonglong FUN_140ec6242(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + -0x130);
  uVar3 = (**(code **)(*(longlong *)(param_1 + -0x130) + 0x10))(plVar1);
  plVar5 = (longlong *)0x0;
  cVar2 = FUN_1403ae2fa(uVar3,1,0);
  if (cVar2 == '\0') goto LAB_140ec62b5;
  lVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (*(int *)(lVar4 + 0xa8) < 1) {
LAB_140ec62bf:
    if ((*(int *)(param_1 + 0x3a14) != 0) || (*(char *)(param_1 + 0x21d0) != '\x01')) {
      plVar5 = (longlong *)CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
      goto LAB_140ec62b5;
    }
  }
  else {
    plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0xa0) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (plVar5 != (longlong *)0x0)) {
      FUN_1456cec3c(plVar5);
    }
    else if (plVar5 == (longlong *)0x0) goto LAB_140ec62bf;
    cVar2 = (**(code **)(*plVar5 + 0x840))(plVar5);
    if (cVar2 != '\0') goto LAB_140ec62bf;
  }
  plVar5 = (longlong *)0x0;
LAB_140ec62b5:
  return (ulonglong)plVar5 & 0xffffffff;
}



// FUNCTION 140ec62e0 FUN_140ec62e0 body=418 status=ok
// SIG undefined FUN_140ec62e0(void)

void FUN_140ec62e0(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  code *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_28 = FUN_1446ddbd2();
      local_20 = FUN_1468d96f0;
      local_30 = 0;
      local_38 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140ec6484(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec6484 FUN_140ec6484 body=187 status=ok
// SIG undefined FUN_140ec6484(void)

void FUN_140ec6484(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((param_1 != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
     (FUN_140ec668c(&local_28,lVar5), local_20 != (longlong *)0x0)) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_140ec6540(local_28,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ec6540 FUN_140ec6540 body=174 status=ok
// SIG undefined FUN_140ec6540(void)

void FUN_140ec6540(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return;
  }
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x38) * 0x48 + -0x40;
  iVar3 = *(uint *)(param_1 + 0x38) + 1;
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 < 1) goto LAB_140ec659f;
    cVar1 = FUN_14069eaf4(*(longlong *)(param_1 + 0x30) + lVar4,param_2);
    lVar4 = lVar4 + -0x48;
  } while (cVar1 == '\0');
  iVar2 = *(int *)(param_1 + 0x38) - iVar3;
  if (iVar2 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x30) + lVar4 + 0x40),
            (void *)(*(longlong *)(param_1 + 0x30) + lVar4 + 0x88),(longlong)iVar2 * 0x48);
    iVar3 = *(int *)(param_1 + 0x38);
  }
  *(int *)(param_1 + 0x38) = iVar3 + -1;
  FUN_140ec65ee((longlong *)(param_1 + 0x30));
LAB_140ec659f:
  FUN_14079d9e4(param_1);
  FUN_14079d9bc(param_1);
  return;
}



// FUNCTION 140ec65ee FUN_140ec65ee body=158 status=ok
// SIG undefined FUN_140ec65ee(void)

void FUN_140ec65ee(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x48)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x48,8);
      uVar3 = uVar3 / 0x48;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x48,8);
    }
  }
  return;
}



// FUNCTION 140ec668c FUN_140ec668c body=310 status=ok
// SIG undefined FUN_140ec668c(void)

longlong * FUN_140ec668c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb77ce0;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec67c4 FUN_140ec67c4 body=370 status=ok
// SIG undefined FUN_140ec67c4(void)

undefined8 * FUN_140ec67c4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140ec6960 FUN_140ec6960 body=207 status=ok
// SIG undefined FUN_140ec6960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140ec6960(void)

{
  if ((DAT_14ca9eebf & 2) == 0) {
    DAT_14ca9eebf = DAT_14ca9eebf | 2;
    _DAT_14ca9ee60 = L"FShaderParameter";
    _DAT_14ca9ee78 = FUN_146826540;
    _DAT_14ca9ee80 = FUN_146825d77;
    _DAT_14ca9ee88 = FUN_146825fd6;
    _DAT_14ca9ee90 = FUN_1407e02ea;
    _DAT_14ca9ee98 = FUN_146826273;
    _DAT_14ca9ee70 = &LAB_147440988;
    _DAT_14ca9eeb0 = 0xffffffff00000006;
    _DAT_14ca9eeb8 = 2;
    DAT_14ca9eebc = 0;
    _DAT_14ca9eea0 = &LAB_147440996;
    FUN_1457c1de6();
    FUN_1407e00cc(&DAT_14ca9ee58);
  }
  return &DAT_14ca9ee58;
}



// FUNCTION 140ec6a48 FUN_140ec6a48 body=66 status=ok
// SIG undefined FUN_140ec6a48(void)

void FUN_140ec6a48(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14002e560(FUN_14470f476,&local_9,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec6b16 FUN_140ec6b16 body=122 status=ok
// SIG undefined FUN_140ec6b16(void)

undefined8 FUN_140ec6b16(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x40) == lVar2) {
          FUN_140ec6b90();
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140ec6b90 FUN_140ec6b90 body=95 status=ok
// SIG undefined FUN_140ec6b90(void)

void FUN_140ec6b90(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x40 + 0x38);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_140ec6bf0(param_1,param_2,1);
  return;
}



// FUNCTION 140ec6bf0 FUN_140ec6bf0 body=138 status=ok
// SIG undefined FUN_140ec6bf0(void)

void FUN_140ec6bf0(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x40 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140ec6c7a FUN_140ec6c7a body=1 status=ok
// SIG undefined FUN_140ec6c7a(void)

void FUN_140ec6c7a(void)

{
  return;
}



// FUNCTION 140ec6c7c FUN_140ec6c7c body=440 status=ok
// SIG undefined FUN_140ec6c7c(void)

void FUN_140ec6c7c(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 != 1) goto LAB_140ec6cc7;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 != DVar7) goto LAB_140ec6cc7;
    }
  }
  FUN_1457c256e(param_1,&local_40);
  if (local_38 == 0) {
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar5 = FUN_144729dda((undefined8 *)(param_1 + 600));
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (cVar5 != '\0') {
      uVar3 = *(undefined8 *)(param_1 + 600);
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      local_38 = 3;
      *local_40 = &PTR_LAB_14bb760a0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_40[2] = lVar8;
      *local_40 = &PTR_FUN_14bb76030;
      local_40[3] = param_2;
      local_40[4] = uVar3;
      local_40[5] = param_1;
      FUN_144a450dc(param_2 + 0x7b8,&local_40);
      FUN_1449db362(&local_40);
      goto LAB_140ec6cc7;
    }
  }
  if (*(int *)(param_2 + 0x7c0) != 0) {
    puVar2 = *(undefined8 **)(param_2 + 0x7b8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72((longlong *)(param_2 + 0x7b8),0,0,0x10);
      *(undefined4 *)(param_2 + 0x7c0) = 0;
    }
  }
LAB_140ec6cc7:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec6e36 FUN_140ec6e36 body=286 status=ok
// SIG undefined FUN_140ec6e36(void)

undefined8 FUN_140ec6e36(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x5a0) + 0x20) == param_1) goto LAB_140ec6e51;
    *(undefined8 *)(param_1 + 0x5a0) = 0;
  }
  lVar3 = FUN_1457c26c4(param_1);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_1 + 0x5a0) = lVar3;
  cVar2 = FUN_144a61b4f();
  if (cVar2 == '\0') {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x5a0) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    FUN_14482b126(lVar3);
  }
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x19 & 1) != 0) {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x5a0) + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      FUN_1447f71cc(lVar3,0x40000000);
    }
  }
LAB_140ec6e51:
  return *(undefined8 *)(param_1 + 0x5a0);
}



// FUNCTION 140ec6f54 FUN_140ec6f54 body=38 status=ok
// SIG undefined FUN_140ec6f54(void)

undefined8 FUN_140ec6f54(undefined8 param_1,int param_2)

{
  FUN_140ec6f7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ec6f7a FUN_140ec6f7a body=134 status=ok
// SIG undefined FUN_140ec6f7a(void)

void FUN_140ec6f7a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *(longlong *)(param_1 + 0x198);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    local_18 = lVar2;
    FUN_140f13fea(DAT_14ca77418);
    puVar3 = *(undefined8 **)(param_1 + 0x198);
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
  FUN_1410f840c(param_1 + 0x150);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140f7d48c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec7002 FUN_140ec7002 body=238 status=ok
// SIG undefined FUN_140ec7002(void)

undefined8
FUN_140ec7002(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined1 param_5,undefined8 *param_6,undefined8 param_7)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x10))();
  uVar4 = 0;
  if ((((param_2 != 0) && (lVar3 != 0)) && (param_3 != 0)) && (uVar4 = 0, param_4 != 0)) {
    if ((param_6[2] != 0) && (lVar1 = param_1[1], lVar1 != 0)) {
      *(undefined8 *)(lVar1 + 0x40) = *param_6;
      *(undefined8 *)(lVar1 + 0x48) = param_6[1];
      *(undefined8 *)(lVar1 + 0x50) = param_6[2];
    }
    uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
    cVar2 = FUN_140ec70f0(lVar3,param_2,param_3,param_4,uVar4,param_5,param_7);
    uVar4 = 1;
    if (cVar2 == '\0') {
      lVar3 = param_1[1];
      uVar4 = 0;
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x40) = 0;
        *(undefined8 *)(lVar3 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(lVar3 + 0x50) = 0;
        uVar4 = 0;
      }
    }
  }
  *param_6 = 0;
  param_6[1] = 0xffffffffffffffff;
  return uVar4;
}



// FUNCTION 140ec70f0 FUN_140ec70f0 body=179 status=ok
// SIG undefined FUN_140ec70f0(void)

undefined8
FUN_140ec70f0(ulonglong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined1 param_6)

{
  byte bVar1;
  ulonglong uVar2;
  undefined7 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_5 == 0) {
    if (0 < *(int *)(param_1 + 0x148)) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x38);
      if ((lVar5 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar5);
      }
      else {
LAB_140ec7143:
        if (lVar5 == 0) goto LAB_140ec7195;
      }
      uVar2 = FUN_1438b539c(lVar5,param_2,param_3,param_4,param_6);
      param_1 = uVar2 & 0xffffffff;
      uVar3 = (undefined7)(uVar2 >> 8);
      bVar1 = 1;
      goto LAB_140ec7197;
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x140);
    lVar5 = (longlong)*(int *)(param_1 + 0x148) * 0x48;
    bVar1 = 0;
    uVar3 = 0;
    do {
      if (*plVar4 == param_5) {
        if (plVar4 == (longlong *)0x0) goto LAB_140ec7195;
        lVar5 = plVar4[7];
        goto LAB_140ec7143;
      }
      plVar4 = plVar4 + 9;
      lVar5 = lVar5 + -0x48;
    } while (lVar5 != 0);
    goto LAB_140ec7197;
  }
LAB_140ec7195:
  bVar1 = 0;
  uVar3 = 0;
LAB_140ec7197:
  return CONCAT71(uVar3,bVar1 & (byte)param_1);
}



// FUNCTION 140ec71a4 FUN_140ec71a4 body=284 status=ok
// SIG undefined FUN_140ec71a4(void)

undefined8 FUN_140ec71a4(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140ec72ba;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140ec72ba;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140ec72ba:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140ec7267;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140ec7267;
    }
  }
  uVar6 = 0;
LAB_140ec7267:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec72c2 FUN_140ec72c2 body=755 status=ok
// SIG undefined FUN_140ec72c2(void)

void FUN_140ec72c2(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  longlong **local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((char)param_1[0x2f] == '\x03') &&
     ((lVar5 = FUN_1405faa04(param_1 + 0x1cc), param_2 != '\0' || (lVar5 == 0)))) {
    uVar6 = FUN_140a30ee2(param_1 + 0x2dc);
    (**(code **)(param_1[0x79] + 0x28))(param_1 + 0x79,uVar6);
  }
  plVar2 = param_1 + 0x2e8;
  param_1[0x2e8] = 0;
  param_1[0x2e9] = 0;
  param_1[0x2ea] = 0;
  lVar5 = (**(code **)(param_1[0x79] + 0x18))(param_1 + 0x79);
  if (lVar5 != 0) {
    puVar8 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(lVar5 + 8);
    }
    local_50 = param_1;
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,&local_58,puVar8,1);
    local_48 = local_58;
    local_40 = 0x3002;
    local_38 = 0;
    plVar7 = (longlong *)FUN_1449e3f1e();
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x2b8))(plVar7,&local_70,&local_50);
      if (*plVar2 != local_70) {
        param_1[0x2ea] = 0;
      }
      param_1[0x2e8] = local_70;
      if (param_1[0x2e9] != local_68) {
        param_1[0x2ea] = 0;
      }
      uVar6 = FUN_14477b664();
      lVar5 = FUN_14477b664(uVar6);
      param_1[0x2e9] = lVar5;
      param_1[0x2ea] = local_60;
    }
  }
  lVar5 = param_1[0x2e9];
  if (lVar5 == 0) {
    uVar6 = FUN_1405b1a32();
    lVar5 = FUN_14477b664(uVar6);
    param_1[0x2e9] = lVar5;
  }
  lVar3 = param_1[0x2ea];
  if (param_1[0x2ea] == 0) {
    if ((*plVar2 == 0) || (lVar5 == 0)) goto LAB_140ec74f6;
    plVar7 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
      param_1[0x2ea] = 0;
      goto LAB_140ec74f6;
    }
    uVar6 = (**(code **)(*plVar7 + 0x110))(plVar7);
    local_70 = FUN_144aff482(uVar6,plVar2);
    param_1[0x2ea] = local_70;
    lVar3 = local_70;
    if (local_70 == 0) goto LAB_140ec74f6;
  }
  local_70 = lVar3;
  (**(code **)(param_1[0x7b] + 0x10))(param_1 + 0x7b,&local_50);
  if (local_50 != (longlong *)0x0) {
    local_58 = &local_70;
    local_78 = &local_58;
    local_80 = &LAB_1440c4aa6;
    (**(code **)(*local_50 + 0x40))();
  }
  plVar2 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_48 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_140ec74f6:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ec75b6 FUN_140ec75b6 body=287 status=ok
// SIG undefined FUN_140ec75b6(void)

void FUN_140ec75b6(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  int local_68;
  int local_5c;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_5c = 0;
  puVar2 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_5c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_5c);
    }
  }
  else {
    local_5c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (0 < local_5c) {
    iVar4 = 0;
    do {
      lVar3 = FUN_140ec76d6(param_2);
      if (lVar3 == 0) {
        local_68 = local_5c;
        FUN_140033559(".\\Runtime/RenderCore/Private/GlobalShader.cpp",0x323,
                      L"Could not load section %d (of %d) of the global shadermap.",iVar4);
      }
      else {
        local_50 = *(longlong *)(lVar3 + 0x28) + 0x60;
        local_58 = lVar3;
        local_48 = &local_58;
        FUN_140ec77b8(param_1,local_3c,&local_50,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_5c);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ec76d6 FUN_140ec76d6 body=225 status=ok
// SIG undefined FUN_140ec76d6(void)

undefined8 * FUN_140ec76d6(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_7c;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar2 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar2[7] = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
  *puVar2 = &PTR_FUN_14a386a20;
  local_98 = &PTR_FUN_14a388320;
  local_80 = 0;
  local_7c = 0;
  local_68 = 0;
  local_58 = (longlong *)0x0;
  local_88 = param_1;
  cVar1 = FUN_1407b7eb8(puVar2);
  if (cVar1 == '\0') {
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    puVar2 = (undefined8 *)0x0;
  }
  local_98 = &PTR_FUN_14a388320;
  if (local_68 != 0) {
    plVar3 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar3 = local_48;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec77b8 FUN_140ec77b8 body=826 status=ok
// SIG undefined FUN_140ec77b8(void)

int * FUN_140ec77b8(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar12) {
      FUN_14482b872(param_1,iVar12);
    }
    iVar14 = (int)param_1[5];
    if (iVar14 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar4 = iVar14 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar9 = iVar14 + 1;
    iVar15 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar15 = iVar14;
    }
    if (iVar15 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar14) {
        if (iVar14 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar4 = iVar14;
        }
        else {
          uVar16 = iVar14 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar16) {
              uVar5 = uVar16;
            }
          }
          else {
            uVar5 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar5 << 2,0);
          iVar4 = (int)(uVar11 >> 2);
          iVar9 = -0x20;
          if ((int)uVar16 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar13,iVar4);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar13;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar12;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar14 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar12 = (int)param_1[6];
    lVar6 = (longlong)iVar12;
    iVar14 = *(int *)(*param_1 + 4 + lVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar14;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x18) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar14 = iVar12 + 0x1f;
  if (-1 < iVar12) {
    iVar14 = iVar12;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar14 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar12 & 0x1f);
  plVar13 = (longlong *)(*param_1 + lVar6 * 0x18);
  plVar10 = (longlong *)param_3[1];
  lVar6 = *(longlong *)*param_3;
  *plVar13 = lVar6;
  plVar13[1] = *plVar10;
  *(undefined4 *)(plVar13 + 2) = 0xffffffff;
  uVar16 = (int)((ulonglong)lVar6 >> 0x20) * 0x17 + (int)lVar6;
  cVar7 = '\0';
  iVar14 = iVar12;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar16) * 4);
    if (iVar14 != -1) {
      do {
        plVar10 = (longlong *)(*param_1 + (longlong)iVar14 * 0x18);
        if (*plVar10 == lVar6) {
          uVar2 = *(undefined4 *)((longlong)plVar13 + 4);
          lVar6 = plVar13[1];
          uVar3 = *(undefined4 *)((longlong)plVar13 + 0xc);
          *(int *)plVar10 = (int)*plVar13;
          *(undefined4 *)((longlong)plVar10 + 4) = uVar2;
          *(int *)(plVar10 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar10 + 0xc) = uVar3;
          FUN_147427d3a(param_1,iVar12);
          cVar7 = '\x01';
          goto LAB_140ec790e;
        }
        iVar14 = (int)plVar10[2];
      } while (iVar14 != -1);
    }
    cVar7 = '\0';
    iVar14 = iVar12;
  }
LAB_140ec790e:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar7;
  }
  if (cVar7 == '\0') {
    uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar5 < 4) {
      iVar12 = 1;
    }
    else {
      uVar11 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar12 <= (int)param_1[9])) {
      uVar16 = (int)param_1[9] - 1U & uVar16;
      *(uint *)((longlong)plVar13 + 0x14) = uVar16;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      *(undefined4 *)(plVar13 + 2) =
           *(undefined4 *)
            ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = param_1 + 7;
      }
      *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
           iVar14;
    }
    else {
      *(int *)(param_1 + 9) = iVar12;
      FUN_140ec7af2(param_1);
    }
  }
  *param_2 = iVar14;
  return param_2;
}



// FUNCTION 140ec7af2 FUN_140ec7af2 body=564 status=ok
// SIG undefined FUN_140ec7af2(void)

void FUN_140ec7af2(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar9 = local_58 >> 0x20;
    }
    iVar5 = (int)local_58;
    uVar6 = (uint)local_48;
    iVar7 = local_48._4_4_;
    iVar10 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar12 = *param_1;
        lVar11 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar12 + lVar11 * 0x18);
        uVar14 = (longlong)((int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar12 + 0x14 + lVar11 * 0x18) = iVar13;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x10 + lVar11 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar8 = local_50;
        }
        iVar13 = (int)local_50[3];
        lVar12 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar7 = iVar13 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar11 * 4 + lVar12 * 4 + 4);
            if (uVar4 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar3 - lVar12 == lVar11) goto LAB_140ec7cdd;
          }
          iVar5 = iVar5 + (int)lVar11 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar14 = uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar13);
    }
  }
LAB_140ec7cdd:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec7d28 FUN_140ec7d28 body=588 status=ok
// SIG undefined FUN_140ec7d28(void)

void FUN_140ec7d28(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = param_1 + 0x1110;
  if (*(longlong *)(param_1 + 0x1140) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1140);
  }
  if ((longlong)*(int *)(param_1 + 0x1148) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x1148) * 0xc;
    do {
      if (*(longlong *)(lVar2 + 4) == DAT_14cbc5e38) {
        if (lVar2 != 0) {
          return;
        }
        break;
      }
      lVar2 = lVar2 + 0xc;
      lVar4 = lVar4 + -0xc;
    } while (lVar4 != 0);
  }
  if (*(longlong *)(param_1 + 0x43d8) == 0) goto LAB_140ec7d79;
  lVar4 = *(longlong *)(param_1 + 0x43d8) + 0x20;
  lVar2 = FUN_14485c28e(lVar4);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_14485c28e(lVar4);
  }
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') goto LAB_140ec7d79;
    lVar4 = param_1 + 0x3210;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar3 = FUN_140153468(lVar4);
  if (((lVar3 == 0) || ((*(byte *)(lVar4 + 0x298) & 2) != 0)) ||
     (*(longlong *)(param_1 + 0x110) == 0)) goto LAB_140ec7d79;
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') goto LAB_140ec7d79;
    lVar4 = param_1 + 0x3210;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar4 = FUN_140153468(lVar4);
  if ((lVar2 == 0) || (lVar4 == 0)) goto LAB_140ec7d79;
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) == '\x01') {
      lVar4 = param_1 + 0x3210;
      goto LAB_140ec7f45;
    }
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x3170) + 0xd8;
LAB_140ec7f45:
    lVar4 = FUN_140153468(lVar4);
  }
  if (lVar4 == lVar2) {
    FUN_145aa9ba2(param_1,0);
  }
LAB_140ec7d79:
  *(undefined1 *)(param_1 + 0x4228) = 0;
  lVar2 = *(longlong *)(param_1 + 0x4208);
  if (lVar2 != 0) {
    uVar1 = (**(code **)(*(longlong *)(lVar2 + 0x3b38) + 0x18))(lVar2 + 0x3b38);
    FUN_140ec7f74(uVar1);
    uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4208) + 0x3b38) + 0x18))
                      (*(longlong *)(param_1 + 0x4208) + 0x3b38);
    FUN_1409c9c98(uVar1,0);
    lVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4208) + 0x3c20) + 0x18))
                      (*(longlong *)(param_1 + 0x4208) + 0x3c20);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x50) = 0xbf800000;
    }
  }
  if (*(char *)(param_1 + 0x4235) != '\0') {
    *(undefined1 *)(param_1 + 0x4235) = 0;
    FUN_145bec7b4(param_1,0);
  }
  FUN_140ec7fac(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140ec7f74 FUN_140ec7f74 body=56 status=ok
// SIG undefined FUN_140ec7f74(void)

void FUN_140ec7f74(longlong *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  if (((param_1[0x56] != 0) && (*param_1 != 0)) && (*(longlong *)(&DAT_00006850 + *param_1) != 0)) {
    FUN_1412c2f4c(*(longlong *)(&DAT_00006850 + *param_1),param_1 + 0x56);
    return;
  }
  return;
}



// FUNCTION 140ec7fac FUN_140ec7fac body=460 status=ok
// SIG undefined FUN_140ec7fac(void)

void FUN_140ec7fac(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x62e] == 0) {
    if ((char)param_1[0x696] != '\x01') goto LAB_140ec7fee;
    plVar3 = param_1 + 0x642;
  }
  else {
    plVar3 = (longlong *)(param_1[0x62e] + 0xd8);
  }
  lVar2 = FUN_140153468(plVar3);
  if (((lVar2 != 0) && ((*(byte *)(plVar3 + 0x53) & 2) == 0)) && (param_1[0x22] != 0)) {
    cVar1 = (**(code **)(*param_1 + 0x600))(param_1);
    if (cVar1 != '\0') {
      if (param_1[0x62e] == 0) {
        if ((char)param_1[0x696] != '\x01') goto LAB_140ec7fee;
        plVar3 = param_1 + 0x642;
      }
      else {
        plVar3 = (longlong *)(param_1[0x62e] + 0xd8);
      }
      FUN_140ec82b2(plVar3,param_2);
      lVar2 = FUN_140153468(plVar3);
      if ((*(byte *)(lVar2 + 0xf8) & 4) != 0) {
        local_48 = param_1[0x27];
        local_58 = (undefined4)param_1[0x25];
        uStack_54 = *(undefined4 *)((longlong)param_1 + 300);
        uStack_50 = (undefined4)param_1[0x26];
        uStack_4c = *(undefined4 *)((longlong)param_1 + 0x134);
        FUN_1457c2e1c(local_60);
        FUN_1409df526(param_1,local_60);
        param_1[0x27] = local_48;
        *(undefined4 *)(param_1 + 0x25) = local_58;
        *(undefined4 *)((longlong)param_1 + 300) = uStack_54;
        *(undefined4 *)(param_1 + 0x26) = uStack_50;
        *(undefined4 *)((longlong)param_1 + 0x134) = uStack_4c;
      }
    }
  }
LAB_140ec7fee:
  FUN_140ec817a(param_1,param_2,param_3,param_4);
  if ((*(byte *)((longlong)param_1 + 0x5b5) & 8) != 0) {
    cVar1 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
    if (cVar1 != '\0') {
      *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) & 0xf7;
      (**(code **)(*param_1 + 0x6d8))(param_1);
    }
  }
  if ((int)param_1[0x576] != 0) {
    *(undefined4 *)(param_1 + 0x576) = 0;
    FUN_144a62f0c(param_1,param_1[7],10);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec817a FUN_140ec817a body=310 status=ok
// SIG undefined FUN_140ec817a(void)

void FUN_140ec817a(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)param_1[0x3e];
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x890))(plVar2,param_2);
    if (cVar1 != '\0') {
      (**(code **)(*(longlong *)param_1[0x3e] + 0x848))((longlong *)param_1[0x3e],param_2);
    }
  }
  plVar2 = param_1 + 0x2f;
  cVar1 = (**(code **)(param_1[0x2f] + 0xd8))(plVar2);
  if (cVar1 != '\0') {
    if (*(char *)((longlong)param_1 + 0x5aa) == '\x02') {
      (**(code **)(*param_1 + 0x578))(param_1,local_58);
      local_68 = DAT_14c8464f0;
      local_78 = (undefined4)DAT_14c8464e0;
      uStack_74 = DAT_14c8464e0._4_4_;
      uStack_70 = (undefined4)DAT_14c8464e8;
      uStack_6c = DAT_14c8464e8._4_4_;
      local_60 = 0;
      cVar1 = (**(code **)(*param_1 + 0x9c0))(param_1,local_58);
      if ((cVar1 == '\0') || (local_60 == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x5aa) = 1;
      }
    }
    (**(code **)(*param_1 + 0x7b0))(param_1,param_2);
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))(plVar2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  (**(code **)(*param_1 + 0x668))(param_1,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec82b2 FUN_140ec82b2 body=189 status=ok
// SIG undefined FUN_140ec82b2(void)

void FUN_140ec82b2(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(byte *)(param_1 + 0x298) & 1) == 0) {
    lVar2 = FUN_140153468();
    if (((*(byte *)(lVar2 + 0xf8) & 0x20) != 0) && ((*(byte *)(param_1 + 0x298) & 0x40) == 0)) {
      lVar2 = FUN_14485cccc(param_2 + 0xb8);
      if ((*(int *)(param_1 + 0xec) != 0) &&
         ((uVar1 = *(uint *)(param_1 + 0xe8), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
        plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar4 != (longlong *)0x0) &&
           (((int)plVar4[2] == *(int *)(param_1 + 0xec) &&
            ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
            lVar3 = *plVar4;
          }
          else {
            lVar3 = 0;
          }
          if (lVar2 == lVar3) {
            FUN_140ae50e2(param_1,lVar2,param_2 + 0x58);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ec8370 FUN_140ec8370 body=63 status=ok
// SIG undefined FUN_140ec8370(void)

longlong FUN_140ec8370(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140ec83d4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x48 + *param_1;
  FUN_140ec83af(lVar2);
  return lVar2;
}



// FUNCTION 140ec83af FUN_140ec83af body=36 status=ok
// SIG undefined FUN_140ec83af(void)

void FUN_140ec83af(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 140ec83d4 FUN_140ec83d4 body=370 status=ok
// SIG undefined FUN_140ec83d4(void)

void FUN_140ec83d4(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ec845d;
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
LAB_140ec845d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 140ec8554 FUN_140ec8554 body=158 status=ok
// SIG undefined FUN_140ec8554(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140ec8554(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ab7cdf0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ec85f2 FUN_140ec85f2 body=816 status=ok
// SIG undefined FUN_140ec85f2(void)

void FUN_140ec85f2(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((int)param_1[0x34c] != *param_2) || (*(int *)((longlong)param_1 + 0x1a64) != param_2[1])) &&
     ((lVar12 = param_1[0x16], lVar12 != 0 || (lVar12 = FUN_1448abda6(param_1), lVar12 != 0)))) {
    uVar3 = DAT_14cb1c840;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_58,uVar3,lVar12);
    plVar11 = local_50;
    lVar12 = local_58;
    if ((local_58 == 0) || (local_50 == (longlong *)0x0)) {
      plVar11 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar10 = local_50 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_50 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      iVar6 = (int)plVar11[1];
      do {
        plVar10 = (longlong *)0x0;
        if (iVar6 == 0) break;
        LOCK();
        iVar4 = (int)plVar11[1];
        bVar13 = iVar6 == iVar4;
        if (bVar13) {
          *(int *)(plVar11 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar10 = plVar11;
      } while (!bVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      if (plVar10 != (longlong *)0x0) {
        if (lVar12 != 0) {
          lVar12 = lVar12 + 0x200;
          lVar7 = FUN_140ec8924(lVar12,param_1 + 0x34c);
          if (lVar7 != 0) {
            lVar2 = *(longlong *)(lVar7 + 0xa8);
            if (lVar2 != 0) {
              lVar8 = param_1[0x29d];
              lVar9 = FUN_140ec8a0a();
              if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
                local_58 = lVar8;
                FUN_1447cd2ec(lVar2 + 0x3a0);
              }
            }
            if (*(longlong *)(lVar7 + 0x6d0) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined1 *)(*(longlong *)(lVar7 + 0x6d0) + 0x3c);
            }
            local_58 = CONCAT71(local_58._1_7_,uVar5);
            FUN_1447cd2ec(param_1[0x29d] + 0x848);
          }
          (**(code **)(*param_1 + 0xc48))(param_1,param_1 + 0x34c,param_2);
          lVar12 = FUN_140ec8924(lVar12,param_2);
          if (lVar12 != 0) {
            lVar7 = *(longlong *)(lVar12 + 0xa8);
            if (lVar7 != 0) {
              lVar2 = param_1[0x29d];
              lVar8 = FUN_140ec8a0a();
              if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
                local_58 = lVar2;
                FUN_1447cd2ec(lVar7 + 0x390);
              }
            }
            if (*(longlong *)(lVar12 + 0x6d0) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined1 *)(*(longlong *)(lVar12 + 0x6d0) + 0x3c);
            }
            local_58 = CONCAT71(local_58._1_7_,uVar5);
            FUN_1447cd2ec(param_1[0x29d] + 0x838);
          }
        }
        LOCK();
        plVar11 = plVar10 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ec8924 FUN_140ec8924 body=230 status=ok
// SIG undefined FUN_140ec8924(void)

undefined8 FUN_140ec8924(longlong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  if (uVar2 == 0xffffffff || *param_2 == -1) {
    return 0;
  }
  iVar1 = param_2[2];
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x10))) {
    uVar2 = uVar2 >> 6 & 0x7fffff;
    lVar5 = (longlong)iVar1 * 0x10;
    if (((int)uVar2 < *(int *)(*(longlong *)(param_1 + 8) + 8 + lVar5)) &&
       (((lVar5 = (longlong)
                  *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + lVar5) + 0x48 +
                          (ulonglong)(uVar2 * 0x50)), lVar5 != -1 &&
         (puVar3 = (uint *)(lVar5 * 0x60 + *(longlong *)(param_1 + 0x18)), puVar3 != (uint *)0x0))
        && (puVar3[1] != 0)))) {
      uVar2 = *puVar3;
      uVar6 = 0;
      if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140ec896e;
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar4 != (undefined8 *)0x0) &&
         ((*(uint *)(puVar4 + 2) == puVar3[1] && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
        uVar6 = *puVar4;
        goto LAB_140ec896e;
      }
    }
  }
  uVar6 = 0;
LAB_140ec896e:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  return uVar6;
}



// FUNCTION 140ec8a0a FUN_140ec8a0a body=228 status=ok
// SIG undefined FUN_140ec8a0a(void)

longlong FUN_140ec8a0a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1bc70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147e31ed3;
    local_40 = &LAB_140c064f7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x420;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavLinkActor",&DAT_14cb1bc70,FUN_14641db6c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1bc70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ec8af0 FUN_140ec8af0 body=5721 status=ok
// SIG undefined FUN_140ec8af0(void)

undefined8 FUN_140ec8af0(longlong param_1,longlong param_2,longlong *param_3,float *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  double *pdVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  code **ppcVar20;
  undefined8 *puVar21;
  code **ppcVar22;
  uint uVar23;
  int iVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  bool bVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  double dVar31;
  undefined1 auStack_1f8 [32];
  undefined2 *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  code **local_1a0;
  code *local_198;
  code *local_190;
  longlong local_180;
  undefined8 *local_178;
  longlong *local_170;
  ulonglong local_168;
  void *local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  undefined8 *local_140;
  int local_138;
  undefined2 local_130 [2];
  undefined4 local_12c;
  code *local_128 [6];
  code **local_f8;
  undefined8 local_f0;
  ulonglong uStack_e8;
  undefined **local_e0;
  undefined *local_d8;
  longlong local_d0;
  ulonglong uStack_c8;
  float local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*(int *)(param_1 + 0xc1c) == 0) {
LAB_140ec91fc:
    uVar9 = 0;
    goto LAB_140ec9108;
  }
  uVar23 = *(uint *)(param_1 + 0xc18);
  uVar9 = 0;
  if (((int)uVar23 < 0) || (DAT_14c9647dc <= (int)uVar23)) goto LAB_140ec9108;
  lVar7 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
  if ((lVar7 == 0) ||
     ((*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0xc1c) ||
      ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))) goto LAB_140ec91fc;
  local_158 = FUN_1407e8892();
  if (*(int *)(param_1 + 0xc1c) == 0) {
LAB_140ec924c:
    local_150 = 0;
  }
  else {
    uVar23 = *(uint *)(param_1 + 0xc18);
    local_150 = 0;
    if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
      plVar19 = (longlong *)
                ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
      if ((plVar19 == (longlong *)0x0) ||
         (((int)plVar19[2] != *(int *)(param_1 + 0xc1c) ||
          ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)))) goto LAB_140ec924c;
      local_150 = *plVar19;
    }
  }
  ppcVar22 = (code **)(param_2 + 0x58);
  local_180 = param_1;
  if (ppcVar22 != (code **)(param_4 + 8)) {
    ppcVar20 = (code **)(param_4 + 8);
    if (*(code ***)(param_4 + 0x14) != (code **)0x0) {
      ppcVar20 = *(code ***)(param_4 + 0x14);
    }
    FUN_1400709d4(ppcVar22,ppcVar20,param_4[0x16],*(undefined4 *)(param_2 + 0x94));
  }
  (**(code **)(*(longlong *)(param_2 + 0x98) + 0x20))(param_2 + 0x98,0);
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_4 + 0x42);
  FUN_1406022fe(param_2 + 0xa8,param_4 + 0x44);
  *(uint *)(param_2 + 0x30c) = (uint)*(byte *)((longlong)param_4 + 0x123);
  if ((*(longlong *)(param_4 + 2) != 0) && ((int)param_4[4] - 1U < 0xfffffffe)) {
    *(longlong *)(param_2 + 0x104) = *(longlong *)(param_4 + 2);
    plVar19 = (longlong *)FUN_1405faa04(param_4 + 2);
    if (plVar19 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar19 + 8))(plVar19);
      lVar8 = FUN_14018fb44();
      if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30)) {
        *(undefined1 *)(param_2 + 0x310) = *(undefined1 *)((longlong)plVar19 + 0x121);
      }
    }
  }
  if (param_3 != (longlong *)0x0) {
    if (DAT_14cba8288 == 0) {
      local_1a0 = local_128;
      local_128[0] = FUN_141864c34;
      local_190 = FUN_14081d0ea;
      local_198 = (code *)&LAB_1464cee30;
      local_1a8 = &LAB_148bfac22;
      local_1b0 = (code *)&LAB_140f21842;
      local_1b8 = L"Game";
      local_1c0 = 0;
      local_1c8 = 0x10000004;
      local_1d0 = 0x10;
      local_1d8 = (undefined2 *)CONCAT44(local_1d8._4_4_,0x9cd0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
        DAT_14cba8288 + 0x30)) {
      lVar7 = (**(code **)(param_3[0x216] + 0x28))(param_3 + 0x216);
      FUN_1403de7ba((longlong *)(param_2 + 0x38),lVar7 + 0x78);
      if ((longlong)*(int *)(param_2 + 0x40) != 0) {
        plVar12 = *(longlong **)(param_2 + 0x38);
        plVar19 = plVar12 + *(int *)(param_2 + 0x40);
        do {
          if (*(int *)(local_158 + 0x140) != 0) {
            lVar7 = 0;
            do {
              if (*(longlong *)(*(longlong *)(local_158 + 0x138) + lVar7) == *plVar12)
              goto LAB_140ec91fc;
              lVar7 = lVar7 + 8;
            } while ((longlong)*(int *)(local_158 + 0x140) << 3 != lVar7);
          }
          if (*(int *)(local_158 + 0x150) != 0) {
            lVar7 = 0;
            do {
              if (*(longlong *)(*(longlong *)(local_158 + 0x148) + lVar7) == *plVar12)
              goto LAB_140ec91fc;
              lVar7 = lVar7 + 8;
            } while ((longlong)*(int *)(local_158 + 0x150) << 3 != lVar7);
          }
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar19);
      }
      if (param_3[0x7ee] != 0) {
        puVar26 = *(undefined4 **)(param_3[0x7ee] + 8);
        puVar25 = &DAT_14c9485f0;
        if (puVar26 != (undefined4 *)0x0) {
          puVar25 = puVar26;
        }
        if (DAT_14c947fe0 == 0) {
          lVar7 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar7);
          DAT_14c947fe0 = lVar7;
        }
        FUN_140045924(DAT_14c947fe0,local_128,puVar25,1);
        *(code **)(param_2 + 0x2d8) = local_128[0];
      }
      if ((*(char *)((longlong)param_4 + 0x122) == '\x01') &&
         (lVar7 = FUN_1447210f0(local_150), lVar7 != 0)) {
        uVar23 = *(uint *)((longlong)param_3 + 0xc);
        puVar21 = (undefined8 *)(ulonglong)uVar23;
        if ((int)uVar23 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        local_170 = (longlong *)(local_180 + 0xd18);
        uVar23 = *(uint *)(lVar8 + 0x10);
        if (*(uint *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          uVar6 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar27) {
            local_178 = puVar21;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar6);
            puVar21 = local_178;
          }
          LOCK();
          uVar23 = *(uint *)(lVar8 + 0x10);
          bVar27 = uVar23 == 0;
          if (bVar27) {
            *(uint *)(lVar8 + 0x10) = uVar6;
            uVar23 = 0;
          }
          UNLOCK();
          if (bVar27) {
            uVar23 = uVar6;
          }
        }
        local_128[0] = (code *)((ulonglong)uVar23 << 0x20 | (ulonglong)puVar21);
        iVar5 = FUN_140eca2c6(local_170,(uint)puVar21 ^ uVar23,local_128);
        if (iVar5 == -1) {
          local_f8 = (code **)0x0;
          local_f0 = 0x200000000;
          uStack_e8 = 0;
          FUN_1405c5fa2();
          local_d8 = &DAT_14cb769e8;
          local_d0 = 0;
          uStack_c8 = 0;
          local_e0 = &PTR_FUN_14b0394b0;
          local_c0 = 0.0;
          if (local_128 != ppcVar22) {
            if (*(code ***)(param_2 + 0x88) != (code **)0x0) {
              ppcVar22 = *(code ***)(param_2 + 0x88);
            }
            FUN_1400709d4(local_128,ppcVar22,*(undefined4 *)(param_2 + 0x90),local_f0._4_4_);
          }
          uStack_e8 = *(ulonglong *)(param_2 + 0x104);
          lVar8 = 0;
          (*(code *)local_e0[4])(&local_e0,0);
          local_d8 = *(undefined **)(param_2 + 0xa0);
          FUN_1406022fe(&local_d0,param_2 + 0xa8);
          local_c0 = (float)*(double *)(lVar7 + 0x6d0);
          uVar23 = *(uint *)((longlong)param_3 + 0xc);
          uVar17 = (ulonglong)uVar23;
          if ((int)uVar23 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
          }
          uVar23 = *(uint *)(lVar8 + 0x10);
          if (*(uint *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            uVar6 = DAT_14c964868 + 1;
            bVar27 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar27) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar6);
            }
            LOCK();
            uVar23 = *(uint *)(lVar8 + 0x10);
            bVar27 = uVar23 == 0;
            if (bVar27) {
              *(uint *)(lVar8 + 0x10) = uVar6;
              uVar23 = 0;
            }
            UNLOCK();
            if (bVar27) {
              uVar23 = uVar6;
            }
          }
          lVar8 = local_180;
          uVar11 = (ulonglong)uVar23;
          local_148 = lVar7;
          if (*(int *)(local_180 + 0xd4c) == 0) {
            uVar23 = *(uint *)(local_180 + 0xd20);
            puVar21 = (undefined8 *)(ulonglong)uVar23;
            *(uint *)(local_180 + 0xd20) = uVar23 + 1;
            if (*(uint *)(local_180 + 0xd24) == uVar23) {
              FUN_140eca382(local_170,uVar23);
            }
            iVar5 = *(int *)(lVar8 + 0xd40);
            if (iVar5 == 0) {
              iVar18 = -1;
            }
            else {
              iVar18 = iVar5 + 0x1e;
              if (-1 < iVar5 + -1) {
                iVar18 = iVar5 + -1;
              }
              iVar18 = iVar18 >> 5;
            }
            lVar14 = lVar8 + 0xd28;
            iVar16 = iVar5 + 1;
            iVar24 = iVar5 + 0x1f;
            if (-1 < iVar5) {
              iVar24 = iVar5;
            }
            local_178 = puVar21;
            local_160 = (void *)uVar17;
            if (iVar24 >> 5 == iVar18) {
              *(int *)(lVar8 + 0xd40) = iVar16;
            }
            else {
              if (*(int *)(lVar8 + 0xd44) <= iVar5) {
                local_168 = uVar11;
                if (iVar5 + 0x20U < 0xa0) {
                  iVar16 = 0x80;
                  iVar18 = iVar5;
                }
                else {
                  uVar23 = iVar5 + 0x20U >> 5;
                  if (*(int *)(lVar8 + 0xd44) + 0x1fU < 0xa0) {
                    uVar6 = 4;
                    if (4 < uVar23) {
                      uVar6 = uVar23;
                    }
                  }
                  else {
                    uVar6 = (uVar23 * 3 >> 3) + uVar23 + 0x10;
                  }
                  uVar17 = FUN_144a3809e(uVar6 << 2,0);
                  iVar18 = (int)(uVar17 >> 2);
                  iVar16 = -0x20;
                  if ((int)uVar23 <= iVar18) {
                    iVar16 = iVar18 << 5;
                  }
                  iVar18 = *(int *)(local_180 + 0xd40);
                }
                lVar8 = local_180;
                *(int *)(local_180 + 0xd44) = iVar16;
                FUN_1446efbd8(lVar14,iVar18);
                iVar16 = *(int *)(lVar8 + 0xd40) + 1;
                uVar11 = local_168;
              }
              iVar18 = iVar16 + 0x1f;
              if (-1 < iVar16) {
                iVar18 = iVar16;
              }
              *(int *)(lVar8 + 0xd40) = iVar16;
              if (iVar16 % 0x20 != 0) {
                lVar7 = *(longlong *)(lVar8 + 0xd38);
                if (*(longlong *)(lVar8 + 0xd38) == 0) {
                  lVar7 = lVar14;
                }
                bVar15 = -(char)(iVar16 % 0x20);
                *(uint *)(lVar7 + (longlong)(iVar18 >> 5) * 4) =
                     (uint)(*(int *)(lVar7 + (longlong)(iVar18 >> 5) * 4) << (bVar15 & 0x1f)) >>
                     (bVar15 & 0x1f);
              }
            }
            lVar7 = (longlong)(int)local_178;
            if (*(longlong *)(lVar8 + 0xd38) != 0) {
              lVar14 = *(longlong *)(lVar8 + 0xd38);
            }
            bVar15 = (byte)iVar5 & 0x1f;
            puVar2 = (uint *)(lVar14 + (longlong)(iVar24 >> 5) * 4);
            *puVar2 = *puVar2 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
            uVar17 = (ulonglong)local_160;
          }
          else {
            local_178 = (undefined8 *)(ulonglong)*(uint *)(local_180 + 0xd48);
            lVar7 = (longlong)(int)*(uint *)(local_180 + 0xd48);
            iVar5 = *(int *)(*(longlong *)(local_180 + 0xd18) + 4 + lVar7 * 0x80);
            *(int *)(local_180 + 0xd48) = iVar5;
            iVar18 = *(int *)(local_180 + 0xd4c) + -1;
            *(int *)(local_180 + 0xd4c) = iVar18;
            if (iVar18 != 0) {
              *(undefined4 *)(*(longlong *)(local_180 + 0xd18) + (longlong)iVar5 * 0x80) =
                   0xffffffff;
            }
          }
          iVar5 = (int)local_178;
          lVar14 = lVar8 + 0xd28;
          if (*(longlong *)(lVar8 + 0xd38) != 0) {
            lVar14 = *(longlong *)(lVar8 + 0xd38);
          }
          iVar18 = iVar5 + 0x1f;
          if (-1 < iVar5) {
            iVar18 = iVar5;
          }
          puVar2 = (uint *)(lVar14 + (longlong)(iVar18 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)local_178 & 0x1f);
          local_168 = CONCAT44(local_168._4_4_,1);
          lVar14 = *(longlong *)(lVar8 + 0xd18);
          lVar7 = lVar7 * 0x80;
          local_160 = (void *)(lVar7 + lVar14);
          puVar1 = (ulonglong *)(lVar7 + lVar14);
          *puVar1 = uVar11 << 0x20 | uVar17;
          puVar1[7] = 0;
          ppcVar22 = local_128;
          if (local_f8 != (code **)0x0) {
            ppcVar22 = local_f8;
          }
          FUN_1400709d4(puVar1 + 1,ppcVar22,local_f0 & 0xffffffff,0);
          puVar1[9] = uStack_e8;
          puVar1[10] = (ulonglong)&DAT_14a171d50;
          puVar21 = (undefined8 *)(lVar14 + 0x60 + lVar7);
          puVar21[-1] = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          puVar21[-1] = local_d8;
          FUN_1406022fe(puVar21,&local_d0);
          plVar19 = local_170;
          puVar21[-2] = &PTR_FUN_14b0394b0;
          *(float *)(puVar21 + 2) = local_c0;
          *(undefined4 *)(puVar21 + 3) = 0xffffffff;
          uVar9 = puVar21[-0xc];
          uVar23 = (uint)((ulonglong)uVar9 >> 0x20) ^ (uint)uVar9;
          if (*(int *)(lVar8 + 0xd20) - *(int *)(lVar8 + 0xd4c) == 1) {
            uVar6 = 1;
LAB_140ec95f3:
            lVar7 = local_180;
            if (((int)uVar6 < 1) || ((int)local_168 <= *(int *)(local_180 + 0xd60))) {
              uVar23 = *(int *)(local_180 + 0xd60) - 1U & uVar23;
              *(uint *)((longlong)local_160 + 0x7c) = uVar23;
              lVar8 = *(longlong *)(local_180 + 0xd58);
              if (*(longlong *)(local_180 + 0xd58) == 0) {
                lVar8 = local_180 + 0xd50;
              }
              *(undefined4 *)((longlong)local_160 + 0x78) =
                   *(undefined4 *)
                    (lVar8 + ((longlong)*(int *)(local_180 + 0xd60) - 1U & (longlong)(int)uVar23) *
                             4);
              lVar8 = *(longlong *)(local_180 + 0xd58);
              if (*(longlong *)(local_180 + 0xd58) == 0) {
                lVar8 = local_180 + 0xd50;
              }
              *(int *)(lVar8 + ((longlong)*(int *)(local_180 + 0xd60) - 1U & (longlong)(int)uVar23)
                               * 4) = (int)local_178;
            }
            else {
              *(int *)(local_180 + 0xd60) = (int)local_168;
              FUN_1457c2e2a(plVar19);
            }
          }
          else {
            local_b8 = uVar9;
            iVar5 = FUN_140eca2c6(local_170,uVar23);
            if (iVar5 == -1) {
              uVar6 = *(int *)(local_180 + 0xd20) - *(int *)(local_180 + 0xd4c);
              if (3 < uVar6) {
                uVar17 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
                lVar7 = 0x3f;
                if (uVar17 != 0) {
                  for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                  }
                }
                local_168 = CONCAT44(local_168._4_4_,1 << ((byte)lVar7 & 0x1f));
              }
              goto LAB_140ec95f3;
            }
            lVar7 = *plVar19;
            FUN_146625df0(lVar7 + (longlong)iVar5 * 0x80 + 8);
            memmove((void *)(lVar7 + (longlong)iVar5 * 0x80),local_160,0x78);
            FUN_148d250c2(plVar19,local_178);
            lVar7 = local_180;
          }
          if (((((*(int *)(lVar7 + 0xc1c) != 0) &&
                (uVar23 = *(uint *)(lVar7 + 0xc18), -1 < (int)uVar23)) &&
               ((int)uVar23 < DAT_14c9647dc)) &&
              ((plVar19 = (longlong *)
                          ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
               plVar19 != (longlong *)0x0 && ((int)plVar19[2] == *(int *)(lVar7 + 0xc1c))))) &&
             ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)) {
            uVar23 = 0;
            if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
              uVar23 = 0;
              iVar5 = 0;
              if (*plVar19 != 0) {
                uVar23 = *(uint *)(*plVar19 + 0xc);
                if ((int)uVar23 < DAT_14c9647dc) {
                  lVar8 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
                }
                else {
                  lVar8 = 0;
                }
                iVar5 = *(int *)(lVar8 + 0x10);
                if (*(int *)(lVar8 + 0x10) == 0) {
                  LOCK();
                  iVar5 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar18 = DAT_14c964868 + 1;
                  bVar27 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar5;
                  if (bVar27) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar18);
                  }
                  LOCK();
                  iVar5 = *(int *)(lVar8 + 0x10);
                  bVar27 = iVar5 == 0;
                  if (bVar27) {
                    *(int *)(lVar8 + 0x10) = iVar18;
                    iVar5 = 0;
                  }
                  UNLOCK();
                  lVar7 = local_180;
                  if (bVar27) {
                    iVar5 = iVar18;
                  }
                }
              }
            }
            else {
              iVar5 = 0;
            }
            if (*(longlong *)(local_148 + 0x1f0) == 0) {
              plVar19 = (longlong *)(local_148 + 0x458);
            }
            else {
              plVar19 = (longlong *)(*(longlong *)(local_148 + 0x1f0) + 0xf0);
            }
            plVar19 = (longlong *)*plVar19;
            lVar8 = *(longlong *)(lVar7 + 0xd68);
            if (lVar8 != 0) {
              uVar6 = (uint)lVar8;
              if ((int)(uVar6 & 0xffffff) < (int)plVar19[2]) {
                plVar12 = plVar19 + 3;
                if ((longlong *)plVar19[5] != (longlong *)0x0) {
                  plVar12 = (longlong *)plVar19[5];
                }
                if ((*(uint *)((longlong)plVar12 + (ulonglong)((uVar6 & 0xffffff) >> 5) * 4) >>
                     (uVar6 & 0x1f) & 1) != 0) {
                  lVar14 = plVar19[1];
                  lVar13 = (ulonglong)(uVar6 & 0xffffff) * 0x70;
                  if (((lVar14 + lVar13 != 0) && (*(longlong *)(lVar14 + 0x60 + lVar13) == lVar8))
                     && (*(char *)(lVar14 + 1 + lVar13) != '\x04')) {
                    FUN_1405a424c(plVar19);
                  }
                }
              }
              *(undefined8 *)(lVar7 + 0xd68) = 0;
            }
            if (iVar5 == 0) {
LAB_140ec9b20:
              lVar8 = 0;
            }
            else {
              lVar8 = 0;
              if ((-1 < (int)uVar23) && ((int)uVar23 < DAT_14c9647dc)) {
                plVar12 = (longlong *)
                          ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8));
                if ((plVar12 == (longlong *)0x0) ||
                   (((int)plVar12[2] != iVar5 || ((*(uint *)(plVar12 + 1) & 0x10200000) != 0))))
                goto LAB_140ec9b20;
                lVar8 = *plVar12;
              }
            }
            local_140 = (undefined8 *)0x0;
            local_138 = 0;
            local_178 = (undefined8 *)(lVar7 + 0xd68);
            local_170 = plVar19;
            FUN_1446efa72(&local_140,0,3,0x10);
            puVar21 = local_140;
            local_138 = 3;
            *local_140 = &PTR_LAB_14a1c8830;
            LOCK();
            UNLOCK();
            lVar14 = DAT_14c758608 + 1;
            lVar7 = DAT_14c758608 + 1;
            if (lVar14 == 0) {
              LOCK();
              UNLOCK();
              lVar14 = DAT_14c758608 + 2;
              lVar7 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar7;
            local_140[2] = lVar14;
            *local_140 = &PTR_FUN_14b96d520;
            local_140[3] = 0;
            iVar18 = 0;
            if (lVar8 != 0) {
              uVar6 = *(uint *)(lVar8 + 0xc);
              *(uint *)(local_140 + 3) = uVar6;
              if ((int)uVar6 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              iVar18 = *(int *)(lVar7 + 0x10);
              if (*(int *)(lVar7 + 0x10) == 0) {
                LOCK();
                iVar18 = DAT_14c964868 + 1;
                UNLOCK();
                iVar24 = DAT_14c964868 + 1;
                bVar27 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar18;
                if (bVar27) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar24);
                }
                LOCK();
                iVar18 = *(int *)(lVar7 + 0x10);
                bVar27 = iVar18 == 0;
                if (bVar27) {
                  *(int *)(lVar7 + 0x10) = iVar24;
                  iVar18 = 0;
                }
                UNLOCK();
                if (bVar27) {
                  iVar18 = iVar24;
                }
              }
            }
            *(int *)((longlong)puVar21 + 0x1c) = iVar18;
            puVar21[4] = CONCAT44(iVar5,uVar23);
            local_b8 = 0;
            local_b0 = 0;
            FUN_14487d8d8(&local_b8,&local_140);
            local_78 = 1;
            local_1d8 = local_130;
            local_130[0] = 0;
            local_12c = 0xbf800000;
            FUN_1406f4044(local_170,local_178,&local_b8,0x3f800000);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
            if (local_138 != 0) {
              if (local_140 == (undefined8 *)0x0) goto LAB_140ec996d;
              (**(code **)*local_140)(local_140,0);
              FUN_1446efa72(&local_140,0,0,0x10);
              local_138 = 0;
            }
            if (local_140 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
LAB_140ec996d:
          local_e0 = (undefined **)&DAT_14a171d50;
          uVar17 = uStack_c8 >> 0x20;
          uStack_c8 = uStack_c8 & 0xffffffff00000000;
          if ((int)uVar17 != 0) {
            FUN_140115c12(&local_d0,0);
          }
          local_d8 = (undefined *)0x0;
          if (local_d0 != 0) {
            FUN_1400020a8();
          }
          if (local_f8 != (code **)0x0) {
            FUN_1400020a8();
          }
        }
      }
    }
    if (DAT_14caf64b8 == 0) {
      local_1a0 = local_128;
      local_128[0] = FUN_141030f22;
      local_190 = FUN_14081d0ea;
      local_198 = FUN_142b4754c;
      local_1a8 = &LAB_147c45ce0;
      local_1b0 = (code *)&LAB_1463f1ff4;
      local_1b8 = L"Game";
      local_1c0 = 0x4000000000;
      local_1c8 = 0x10000004;
      local_1d0 = 8;
      local_1d8 = (undefined2 *)CONCAT44(local_1d8._4_4_,0x428);
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
        DAT_14caf64b8 + 0x30)) {
      pcVar3 = *(code **)(*param_3 + 0x5e8);
      if (pcVar3 == FUN_140972dde) {
        if (param_3[0x76] == 0) {
          pcVar3 = *(code **)(*param_3 + 0x5f8);
          if (pcVar3 == FUN_144784df4) {
            if (*(code **)(param_3[0x784] + 0x18) == (code *)&LAB_144904684) {
              if ((((*(int *)((longlong)param_3 + 0x75b4) == 0) ||
                   (uVar23 = *(uint *)(param_3 + 0xeb6), (int)uVar23 < 0)) ||
                  (DAT_14c9647dc <= (int)uVar23)) ||
                 (((plVar19 = (longlong *)
                              ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
                   plVar19 == (longlong *)0x0 ||
                   ((int)plVar19[2] != *(int *)((longlong)param_3 + 0x75b4))) ||
                  ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)))) goto LAB_140ec8ef5;
              if ((*(uint *)(plVar19 + 1) & 0x10200000) == 0) {
                lVar7 = *plVar19;
              }
              else {
                lVar7 = 0;
              }
              lVar7 = lVar7 + 0x110;
            }
            else {
              lVar7 = (**(code **)(param_3[0x784] + 0x18))(param_3 + 0x784);
            }
            if (lVar7 == 0) goto LAB_140ec8ef5;
            lVar7 = *(longlong *)(lVar7 + 0x20);
          }
          else {
            lVar7 = (*pcVar3)(param_3);
          }
          if (lVar7 == 0) goto LAB_140ec8ef5;
          lVar7 = *(longlong *)(lVar7 + 0x3b0);
          goto LAB_140ec9237;
        }
      }
      else {
        lVar7 = (*pcVar3)(param_3);
LAB_140ec9237:
        if (lVar7 == 0) goto LAB_140ec8ef5;
      }
      *(undefined1 *)(param_2 + 0x240) = 1;
    }
LAB_140ec8ef5:
    if (*(int *)(param_2 + 0x30c) == 2) {
      if (DAT_14cb223d8 == 0) {
        local_1a0 = local_128;
        local_128[0] = FUN_1449e2820;
        local_190 = FUN_14081d0ea;
        local_198 = FUN_1427b09ee;
        local_1a8 = &LAB_147f29feb;
        local_1b0 = FUN_1464384fe;
        local_1b8 = L"Engine";
        local_1c0 = 0;
        local_1c8 = 0x10004001;
        local_1d0 = 8;
        local_1d8 = (undefined2 *)CONCAT44(local_1d8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar19 = (longlong *)FUN_144718840(param_3,DAT_14cb223d8);
      if (plVar19 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar19 + 0x10))(plVar19);
        if ((longlong)*(int *)(local_158 + 0x188) != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20);
          plVar19 = *(longlong **)(local_158 + 0x180);
          lVar8 = (longlong)*(int *)(local_158 + 0x188) * 0x18;
          do {
            lVar14 = plVar19[1];
            if (lVar14 == 0) {
              uVar9 = FUN_1405a25e0();
              lVar14 = FUN_14477b664(uVar9);
              plVar19[1] = lVar14;
            }
            lVar13 = plVar19[2];
            if (((lVar13 == 0) && (lVar13 = 0, lVar14 != 0)) && (*plVar19 != 0)) {
              plVar12 = *(longlong **)(lVar14 + 0xb8);
              if ((plVar12 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar4 == '\0')) {
                lVar13 = 0;
              }
              else {
                uVar9 = (**(code **)(*plVar12 + 0x110))(plVar12);
                lVar13 = FUN_144aff482(uVar9,plVar19);
              }
              plVar19[2] = lVar13;
            }
            if (lVar13 == lVar7) {
              *(undefined4 *)(param_2 + 0x30c) = 1;
              break;
            }
            plVar19 = plVar19 + 3;
            lVar8 = lVar8 + -0x18;
          } while (lVar8 != 0);
        }
      }
    }
    uVar9 = FUN_140eca14a();
    plVar19 = (longlong *)FUN_144718840(param_3,uVar9);
    if ((plVar19 != (longlong *)0x0) &&
       (lVar7 = (**(code **)(*plVar19 + 0x10))(plVar19), lVar7 != 0)) {
      FUN_140eca230(lVar7,param_2 + 0xe0);
    }
  }
  lVar14 = local_150;
  lVar8 = local_180;
  lVar7 = *(longlong *)(local_150 + 0x1c8);
  if (lVar7 == 0) {
    pdVar10 = (double *)&DAT_14c8464e0;
    uVar28 = (undefined4)DAT_14c8464f0;
    uVar30 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar28 = (undefined4)*(undefined8 *)(lVar7 + 0x270);
    uVar30 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x270) >> 0x20);
    pdVar10 = (double *)(lVar7 + 0x260);
  }
  dVar31 = *(double *)(param_4 + 0x22) - (double)CONCAT44(uVar30,uVar28);
  *(float *)(param_2 + 0x23c) =
       (float)(dVar31 * dVar31 +
              (*(double *)(param_4 + 0x20) - pdVar10[1]) *
              (*(double *)(param_4 + 0x20) - pdVar10[1]) +
              (*(double *)(param_4 + 0x1e) - *pdVar10) * (*(double *)(param_4 + 0x1e) - *pdVar10));
  lVar7 = *(longlong *)(param_4 + 0x1a);
  if (lVar7 != 0) {
    uVar9 = FUN_140840456();
    plVar19 = (longlong *)FUN_144718840(lVar7,uVar9);
    if (plVar19 != (longlong *)0x0) {
      plVar19 = (longlong *)(**(code **)(*plVar19 + 0x10))(plVar19);
      if ((*plVar19 != 0) && (lVar7 = FUN_140a2d0dc(), lVar7 != 0)) {
        puVar26 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
          puVar26 = *(undefined4 **)(lVar7 + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar7 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar7);
          DAT_14c947fe0 = lVar7;
        }
        FUN_140045924(DAT_14c947fe0,local_128,puVar26,1);
        *(code **)(param_2 + 0x114) = local_128[0];
      }
      lVar7 = FUN_14087dee0(plVar19);
      if (lVar7 != 0) {
        puVar26 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
          puVar26 = *(undefined4 **)(lVar7 + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar7 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar7);
          DAT_14c947fe0 = lVar7;
        }
        FUN_140045924(DAT_14c947fe0,local_128,puVar26,1);
        *(code **)(param_2 + 0x10c) = local_128[0];
      }
    }
  }
  if ((0.0 < *(float *)(lVar8 + 0xcc0)) && (lVar7 = FUN_1447210f0(lVar14), lVar7 != 0)) {
    fVar29 = (float)(*(double *)(lVar7 + 0x6d0) - (double)*(float *)(lVar8 + 0xcc0));
    *(byte *)(param_2 + 0xbd) = -(fVar29 <= *(float *)(local_158 + 0xf0)) & -(0.0 < fVar29) & 1;
  }
  *(undefined1 *)(param_2 + 0xb8) = *(undefined1 *)(param_4 + 1);
  *(byte *)(param_2 + 0xbb) = ~*(byte *)(param_4 + 0x48) & 0.0 < param_4[0x3c];
  *(undefined1 *)(param_2 + 0xbc) = *(undefined1 *)(param_4 + 0x48);
  iVar5 = (int)ROUND(ABS(*param_4) + ABS(*param_4) + 0.5);
  *(int *)(param_2 + 0xc0) = iVar5 >> 1;
  uVar9 = CONCAT71((uint7)(uint3)(iVar5 >> 9),1);
LAB_140ec9108:
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140eca14a FUN_140eca14a body=228 status=ok
// SIG undefined FUN_140eca14a(void)

longlong FUN_140eca14a(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb66e08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14872e14b;
    local_40 = FUN_1465126f4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectOwner",&DAT_14cb66e08,&DAT_14872e14a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb66e08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eca230 FUN_140eca230 body=150 status=ok
// SIG undefined FUN_140eca230(void)

void FUN_140eca230(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar6);
      if ((((*(char *)(lVar4 + 0x148) == '\x01') && (*(int *)(lVar4 + 0x74) != 0)) &&
          (uVar2 = *(uint *)(lVar4 + 0x70), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(lVar4 + 0x74))) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))) {
          FUN_14094f414(param_2,*plVar5 + 0x160);
        }
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar6);
  }
  return;
}



// FUNCTION 140eca2c6 FUN_140eca2c6 body=186 status=ok
// SIG undefined FUN_140eca2c6(void)

int FUN_140eca2c6(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x80);
        cVar1 = FUN_140b865d4(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_140eca2ef;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x78 + (longlong)iVar4 * 0x80);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_140eca2ef:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 140eca382 FUN_140eca382 body=255 status=ok
// SIG undefined FUN_140eca382(void)

void FUN_140eca382(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x1ffffffffffffff) * 8]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 7)) {
      uVar3 = uVar4 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140eca482 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eca496 FUN_140eca496 body=31 status=ok
// SIG undefined FUN_140eca496(void)

undefined8 FUN_140eca496(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140eca4c4 FUN_140eca4c4 body=31 status=ok
// SIG undefined FUN_140eca4c4(void)

undefined8 FUN_140eca4c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140eca4f2 FUN_140eca4f2 body=61 status=ok
// SIG undefined FUN_140eca4f2(void)

undefined8 * FUN_140eca4f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140eca536 FUN_140eca536 body=221 status=ok
// SIG undefined FUN_140eca536(void)

longlong FUN_140eca536(void)

{
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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c967aa0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14692dce1;
    local_40 = FUN_1462784a3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/DeveloperSettings",L"DeveloperSettings",&DAT_14c967aa0,&DAT_14692dce0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c967aa0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eca614 FUN_140eca614 body=37 status=ok
// SIG undefined FUN_140eca614(void)

void FUN_140eca614(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x550);
  FUN_140eca63a(param_2);
  return;
}


