// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145c5b3bf FUN_145c5b3bf body=61 status=ok
// SIG undefined FUN_145c5b3bf(void)

void FUN_145c5b3bf(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      FUN_1417113bc(param_1);
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 200;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c5b3fc FUN_145c5b3fc body=55 status=ok
// SIG undefined FUN_145c5b3fc(void)

void FUN_145c5b3fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb126c0 == 0) {
    uVar1 = FUN_145c5b433();
    DAT_14cb126c0 = FUN_140002ddd(FUN_146414695,uVar1,L"OverlayItem");
  }
  return;
}



// FUNCTION 145c5b433 FUN_145c5b433 body=49 status=ok
// SIG undefined FUN_145c5b433(void)

longlong FUN_145c5b433(void)

{
  if (DAT_14cb126a8 == 0) {
    FUN_140f50038(&DAT_14cb126a8,&PTR_s__Script_Overlay_14ab3352f_1_14ab33510);
  }
  return DAT_14cb126a8;
}



// FUNCTION 145c5b464 FUN_145c5b464 body=55 status=ok
// SIG undefined FUN_145c5b464(void)

void FUN_145c5b464(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb129d8 == 0) {
    uVar1 = FUN_145c5b49b();
    DAT_14cb129d8 = FUN_140002ddd(FUN_14641541f,uVar1,L"ClothConstraintSetupNv");
  }
  return;
}



// FUNCTION 145c5b49b FUN_145c5b49b body=49 status=ok
// SIG undefined FUN_145c5b49b(void)

longlong FUN_145c5b49b(void)

{
  if (DAT_14cb129c0 == 0) {
    FUN_140f50038(&DAT_14cb129c0,&PTR_s__Script_ClothingSystemRuntimeNv_14ab38e80);
  }
  return DAT_14cb129c0;
}



// FUNCTION 145c5b4cc FUN_145c5b4cc body=55 status=ok
// SIG undefined FUN_145c5b4cc(void)

void FUN_145c5b4cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1de08 == 0) {
    uVar1 = FUN_141506482();
    DAT_14cb1de08 = FUN_140002ddd(FUN_14642538d,uVar1,L"GameplayResourceSet");
  }
  return;
}



// FUNCTION 145c5b504 FUN_145c5b504 body=55 status=ok
// SIG undefined FUN_145c5b504(void)

void FUN_145c5b504(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb444f8 == 0) {
    uVar1 = FUN_145c5b53b();
    DAT_14cb444f8 = FUN_140002ddd(FUN_14647c7d0,uVar1,L"CurveParameterPair");
  }
  return;
}



// FUNCTION 145c5b53b FUN_145c5b53b body=49 status=ok
// SIG undefined FUN_145c5b53b(void)

longlong FUN_145c5b53b(void)

{
  if (DAT_14cb444b0 == 0) {
    FUN_140f50038(&DAT_14cb444b0,&PTR_s__Script_NiagaraAnimNotifies_14ae30228);
  }
  return DAT_14cb444b0;
}



// FUNCTION 145c5b56c FUN_145c5b56c body=55 status=ok
// SIG undefined FUN_145c5b56c(void)

void FUN_145c5b56c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb4c210 == 0) {
    uVar1 = FUN_1415064b3();
    DAT_14cb4c210 = FUN_140002ddd(FUN_146491f54,uVar1,L"DynamicMeshChangeInfo");
  }
  return;
}



// FUNCTION 145c5b5a4 FUN_145c5b5a4 body=55 status=ok
// SIG undefined FUN_145c5b5a4(void)

void FUN_145c5b5a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53a20 == 0) {
    uVar1 = FUN_145c5b5db();
    DAT_14cb53a20 = FUN_140002ddd(FUN_1464aaff5,uVar1,L"FaceFXLocalizationSettings");
  }
  return;
}



// FUNCTION 145c5b5db FUN_145c5b5db body=49 status=ok
// SIG undefined FUN_145c5b5db(void)

longlong FUN_145c5b5db(void)

{
  if (DAT_14cb53a60 == 0) {
    FUN_140f50038(&DAT_14cb53a60,&PTR_s__Script_GbxFaceFX_14afd0032_6_14afd0018);
  }
  return DAT_14cb53a60;
}



// FUNCTION 145c5b60c FUN_145c5b60c body=55 status=ok
// SIG undefined FUN_145c5b60c(void)

void FUN_145c5b60c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb53b10 == 0) {
    uVar1 = FUN_145c5b643();
    DAT_14cb53b10 = FUN_140002ddd(FUN_1464ab3ca,uVar1,L"GbxNiagaraCloudscapeLayer");
  }
  return;
}



// FUNCTION 145c5b643 FUN_145c5b643 body=49 status=ok
// SIG undefined FUN_145c5b643(void)

longlong FUN_145c5b643(void)

{
  if (DAT_14cb53ac0 == 0) {
    FUN_140f50038(&DAT_14cb53ac0,&PTR_s__Script_GbxCloudscape_14afd077e_2_14afd0760);
  }
  return DAT_14cb53ac0;
}



// FUNCTION 145c5b67c FUN_145c5b67c body=103 status=ok
// SIG undefined FUN_145c5b67c(void)

undefined8 * FUN_145c5b67c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_140bf9282();
  FUN_1409e1656(param_1 + 6);
  *param_1 = &PTR_FUN_14b30ea60;
  param_1[6] = &PTR_FUN_14b30ed20;
  puVar1 = (undefined8 *)FUN_14001cc68(0x270,0x10);
  *puVar1 = 0;
  FUN_1415064e4(puVar1 + 2);
  param_1[9] = puVar1;
  param_1[8] = puVar1;
  *(undefined4 *)(param_1 + 10) = 1;
  return param_1;
}



// FUNCTION 145c5b6e4 FUN_145c5b6e4 body=69 status=ok
// SIG undefined FUN_145c5b6e4(void)

void FUN_145c5b6e4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_141506615(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c5b725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145c5b72a FUN_145c5b72a body=55 status=ok
// SIG undefined FUN_145c5b72a(void)

void FUN_145c5b72a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb98c98 == 0) {
    uVar1 = FUN_145c5b761();
    DAT_14cb98c98 = FUN_140002ddd(FUN_14658ab31,uVar1,L"GbxWorldPainterOption");
  }
  return;
}



// FUNCTION 145c5b761 FUN_145c5b761 body=49 status=ok
// SIG undefined FUN_145c5b761(void)

longlong FUN_145c5b761(void)

{
  if (DAT_14cb98c68 == 0) {
    FUN_140f50038(&DAT_14cb98c68,&PTR_s__Script_GbxWorldPainter_14b50a207_1_14b50a1e8);
  }
  return DAT_14cb98c68;
}



// FUNCTION 145c5b79a FUN_145c5b79a body=200 status=ok
// SIG undefined FUN_145c5b79a(void)

undefined8 * FUN_145c5b79a(undefined8 *param_1)

{
  FUN_140bf9282();
  FUN_1409e1656(param_1 + 6);
  *param_1 = &PTR_FUN_14b5249b0;
  param_1[6] = &PTR_FUN_14b524c70;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0xffffffff;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  return param_1;
}



// FUNCTION 145c5b862 FUN_145c5b862 body=72 status=ok
// SIG undefined FUN_145c5b862(void)

void FUN_145c5b862(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c5b8aa(puVar1);
  *puVar1 = &PTR_FUN_14b557210;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  memset(puVar1 + 5,0,0xb0);
  *(undefined4 *)((longlong)puVar1 + 0xe4) = 0x10101;
  return;
}



// FUNCTION 145c5b8aa FUN_145c5b8aa body=32 status=ok
// SIG undefined FUN_145c5b8aa(void)

undefined8 * FUN_145c5b8aa(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a4ee8e0;
  return param_1;
}



// FUNCTION 145c5b8ca FUN_145c5b8ca body=38 status=ok
// SIG undefined FUN_145c5b8ca(void)

undefined8 FUN_145c5b8ca(undefined8 param_1,int param_2)

{
  FUN_145c5b8f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5b8f0 FUN_145c5b8f0 body=66 status=ok
// SIG undefined FUN_145c5b8f0(void)

void FUN_145c5b8f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b89fa10;
  FUN_145742812(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145c5b932 FUN_145c5b932 body=38 status=ok
// SIG undefined FUN_145c5b932(void)

undefined8 FUN_145c5b932(undefined8 param_1,int param_2)

{
  FUN_145c5b958();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5b958 FUN_145c5b958 body=66 status=ok
// SIG undefined FUN_145c5b958(void)

void FUN_145c5b958(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8a1f10;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145c5b99a FUN_145c5b99a body=38 status=ok
// SIG undefined FUN_145c5b99a(void)

undefined8 FUN_145c5b99a(undefined8 param_1,int param_2)

{
  FUN_145c5b9c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5b9c0 FUN_145c5b9c0 body=66 status=ok
// SIG undefined FUN_145c5b9c0(void)

void FUN_145c5b9c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8cd370;
  FUN_140e1e029(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145c5ba02 FUN_145c5ba02 body=38 status=ok
// SIG undefined FUN_145c5ba02(void)

undefined8 FUN_145c5ba02(undefined8 param_1,int param_2)

{
  FUN_145c5ba28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5ba28 FUN_145c5ba28 body=66 status=ok
// SIG undefined FUN_145c5ba28(void)

void FUN_145c5ba28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8d6d90;
  FUN_14592696e(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145c5ba70 FUN_145c5ba70 body=150 status=ok
// SIG undefined FUN_145c5ba70(void)

void FUN_145c5ba70(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 auStack_48 [3];
  undefined2 local_30;
  undefined1 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14479d2ce(*param_1);
  if (lVar1 != 0) {
    local_50 = 0;
    auStack_48[0] = 0;
    local_30 = 8;
    FUN_14485c47a(auStack_48,lVar1);
    local_28 = 7;
    local_20 = 7;
    if ((DAT_14c9a8cf4 & 0x20) != 0) {
      local_20 = 0;
    }
    FUN_141109e26(param_2,&DAT_14cbd2d08,&local_50);
    FUN_144a2da94(&local_50);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5bb0e FUN_145c5bb0e body=124 status=ok
// SIG undefined FUN_145c5bb0e(void)

void FUN_145c5bb0e(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_28;
  undefined1 local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(undefined4 *)*param_1;
  local_48 = 0;
  local_28 = 4;
  local_20 = 2;
  local_18 = (byte)~DAT_14c9a8754 >> 4 & 2;
  FUN_141109e26(param_2,&DAT_14cbd2d18,&local_48);
  FUN_144a2da94(&local_48);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5bb8c FUN_145c5bb8c body=195 status=ok
// SIG undefined FUN_145c5bb8c(void)

void FUN_145c5bb8c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [16];
  code *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1410c2f26();
  lVar1 = FUN_140391552(param_1);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x2c0) == 0)) {
    local_38 = FUN_148e90922;
    local_30 = 0;
    FUN_145c5bc50(local_48,param_1);
    FUN_1446ddc76(&local_50,"RefreshOptions",1);
    FUN_140391af6(lVar1,&local_38,local_50,local_48);
    *(code **)(param_1 + 0x2c0) = local_38;
    FUN_1449db362(local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5bc50 FUN_145c5bc50 body=428 status=ok
// SIG undefined FUN_145c5bc50(void)

longlong * FUN_145c5bc50(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145c5bd30:
    *puVar5 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c62c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c5bd30;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b4665f0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b9c62c0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145c5bdfc FUN_145c5bdfc body=38 status=ok
// SIG undefined FUN_145c5bdfc(void)

undefined8 FUN_145c5bdfc(undefined8 param_1,int param_2)

{
  FUN_145c5be22();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5be22 FUN_145c5be22 body=66 status=ok
// SIG undefined FUN_145c5be22(void)

void FUN_145c5be22(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x368);
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
  FUN_1458711dc(param_1);
  return;
}



// FUNCTION 145c5be64 FUN_145c5be64 body=55 status=ok
// SIG undefined FUN_145c5be64(void)

void FUN_145c5be64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf2a50 == 0) {
    uVar1 = FUN_14150666c();
    DAT_14cbf2a50 = FUN_140002ddd(FUN_141904933,uVar1,L"SequencerScriptingRange");
  }
  return;
}



// FUNCTION 145c5be9c FUN_145c5be9c body=55 status=ok
// SIG undefined FUN_145c5be9c(void)

void FUN_145c5be9c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf6080 == 0) {
    uVar1 = FUN_145c5bed3();
    DAT_14cbf6080 = FUN_140002ddd(FUN_146672c16,uVar1,L"UpdateContextDefinition");
  }
  return;
}



// FUNCTION 145c5bed3 FUN_145c5bed3 body=49 status=ok
// SIG undefined FUN_145c5bed3(void)

longlong FUN_145c5bed3(void)

{
  if (DAT_14cbf5f78 == 0) {
    FUN_140f50038(&DAT_14cbf5f78,&PTR_s__Script_Hotfix_14ba6601f_1_14ba66000);
  }
  return DAT_14cbf5f78;
}



// FUNCTION 145c5bf04 FUN_145c5bf04 body=55 status=ok
// SIG undefined FUN_145c5bf04(void)

void FUN_145c5bf04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b920 == 0) {
    uVar1 = FUN_145c5bf3b();
    DAT_14cc0b920 = FUN_140002ddd(FUN_14671bcac,uVar1,L"LiveLinkTransformControllerData");
  }
  return;
}



// FUNCTION 145c5bf3b FUN_145c5bf3b body=49 status=ok
// SIG undefined FUN_145c5bf3b(void)

longlong FUN_145c5bf3b(void)

{
  if (DAT_14cc0b8d8 == 0) {
    FUN_140f50038(&DAT_14cc0b8d8,&PTR_s__Script_LiveLinkComponents_14bc1cf60);
  }
  return DAT_14cc0b8d8;
}



// FUNCTION 145c5bf6c FUN_145c5bf6c body=40 status=ok
// SIG undefined FUN_145c5bf6c(void)

undefined8 FUN_145c5bf6c(undefined8 param_1,int param_2)

{
  FUN_145c5bf94();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5bf94 FUN_145c5bf94 body=105 status=ok
// SIG undefined FUN_145c5bf94(void)

void FUN_145c5bf94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc5c130;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  FUN_145c5bffd(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c5bffd FUN_145c5bffd body=63 status=ok
// SIG undefined FUN_145c5bffd(void)

void FUN_145c5bffd(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c5c044 FUN_145c5c044 body=96 status=ok
// SIG undefined FUN_145c5c044(void)

undefined8 * FUN_145c5c044(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14007ca06();
  FUN_145894f8e(param_1,uVar1);
  *param_1 = &PTR_FUN_14bc5e000;
  param_1[10] = &PTR_FUN_14bc5e2e0;
  lVar2 = FUN_14117aa32();
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0xb] = lVar2;
  *(byte *)((longlong)param_1 + 0x61) = *(byte *)((longlong)param_1 + 0x61) | 1;
  return param_1;
}



// FUNCTION 145c5c0a4 FUN_145c5c0a4 body=40 status=ok
// SIG undefined FUN_145c5c0a4(void)

undefined8 FUN_145c5c0a4(undefined8 param_1,int param_2)

{
  FUN_145c5c0cc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5c0cc FUN_145c5c0cc body=64 status=ok
// SIG undefined FUN_145c5c0cc(void)

void FUN_145c5c0cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcbcaf0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140ba05b6(param_1 + 7);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c5c10c FUN_145c5c10c body=55 status=ok
// SIG undefined FUN_145c5c10c(void)

void FUN_145c5c10c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc241b8 == 0) {
    uVar1 = FUN_145c5c143();
    DAT_14cc241b8 = FUN_140002ddd(FUN_141908362,uVar1,L"CollectionAttributeKey");
  }
  return;
}



// FUNCTION 145c5c143 FUN_145c5c143 body=49 status=ok
// SIG undefined FUN_145c5c143(void)

longlong FUN_145c5c143(void)

{
  if (DAT_14cc241d0 == 0) {
    FUN_140f50038(&DAT_14cc241d0,&PTR_s__Script_DataflowEnginePlugin_14be10628);
  }
  return DAT_14cc241d0;
}



// FUNCTION 145c5c174 FUN_145c5c174 body=55 status=ok
// SIG undefined FUN_145c5c174(void)

void FUN_145c5c174(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26f18 == 0) {
    uVar1 = FUN_145c5c1ab();
    DAT_14cc26f18 = FUN_140002ddd(FUN_14190aec7,uVar1,L"ChaosClothWeightedValue");
  }
  return;
}



// FUNCTION 145c5c1ab FUN_145c5c1ab body=49 status=ok
// SIG undefined FUN_145c5c1ab(void)

longlong FUN_145c5c1ab(void)

{
  if (DAT_14cc26ed8 == 0) {
    FUN_140f50038(&DAT_14cc26ed8,&PTR_s__Script_ChaosCloth_14be80b6f_1_14be80b50);
  }
  return DAT_14cc26ed8;
}



// FUNCTION 145c5c1dc FUN_145c5c1dc body=55 status=ok
// SIG undefined FUN_145c5c1dc(void)

void FUN_145c5c1dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc27420 == 0) {
    uVar1 = FUN_145c5c213();
    DAT_14cc27420 = FUN_140002ddd(FUN_14675e96f,uVar1,L"ExportedCSVStatGroup");
  }
  return;
}



// FUNCTION 145c5c213 FUN_145c5c213 body=49 status=ok
// SIG undefined FUN_145c5c213(void)

longlong FUN_145c5c213(void)

{
  if (DAT_14cc273c0 == 0) {
    FUN_140f50038(&DAT_14cc273c0,&PTR_s__Script_GbxTelemetry_14be87828);
  }
  return DAT_14cc273c0;
}



// FUNCTION 145c5c244 FUN_145c5c244 body=55 status=ok
// SIG undefined FUN_145c5c244(void)

void FUN_145c5c244(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc2d158 == 0) {
    uVar1 = FUN_145c5c27b();
    DAT_14cc2d158 = FUN_140002ddd(FUN_146763997,uVar1,L"WyvrnSDKAppInfoType");
  }
  return;
}



// FUNCTION 145c5c27b FUN_145c5c27b body=49 status=ok
// SIG undefined FUN_145c5c27b(void)

longlong FUN_145c5c27b(void)

{
  if (DAT_14cc2d108 == 0) {
    FUN_140f50038(&DAT_14cc2d108,&PTR_s__Script_WyvrnSDKPlugin_14beae3c8);
  }
  return DAT_14cc2d108;
}



// FUNCTION 145c5c2ac FUN_145c5c2ac body=55 status=ok
// SIG undefined FUN_145c5c2ac(void)

void FUN_145c5c2ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc30bb8 == 0) {
    uVar1 = FUN_14150669d();
    DAT_14cc30bb8 = FUN_140002ddd(FUN_14676e809,uVar1,L"ChaosDestructionEvent");
  }
  return;
}



// FUNCTION 145c5c2e4 FUN_145c5c2e4 body=55 status=ok
// SIG undefined FUN_145c5c2e4(void)

void FUN_145c5c2e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc322e8 == 0) {
    uVar1 = FUN_145c5c31b();
    DAT_14cc322e8 = FUN_140002ddd(FUN_146771859,uVar1,L"UdpMockMessage");
  }
  return;
}



// FUNCTION 145c5c31b FUN_145c5c31b body=49 status=ok
// SIG undefined FUN_145c5c31b(void)

longlong FUN_145c5c31b(void)

{
  if (DAT_14cc322a0 == 0) {
    FUN_140f50038(&DAT_14cc322a0,&PTR_s__Script_UdpMessaging_14befb060);
  }
  return DAT_14cc322a0;
}



// FUNCTION 145c5c34c FUN_145c5c34c body=55 status=ok
// SIG undefined FUN_145c5c34c(void)

void FUN_145c5c34c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc327d8 == 0) {
    uVar1 = FUN_145c5c383();
    DAT_14cc327d8 = FUN_140002ddd(FUN_146772449,uVar1,L"AppleImageUtilsImageConversionResult");
  }
  return;
}



// FUNCTION 145c5c383 FUN_145c5c383 body=49 status=ok
// SIG undefined FUN_145c5c383(void)

longlong FUN_145c5c383(void)

{
  if (DAT_14cc32778 == 0) {
    FUN_140f50038(&DAT_14cc32778,&PTR_s__Script_AppleImageUtils_14bf03ef8);
  }
  return DAT_14cc32778;
}



// FUNCTION 145c5c3b4 FUN_145c5c3b4 body=40 status=ok
// SIG undefined FUN_145c5c3b4(void)

undefined8 FUN_145c5c3b4(undefined8 param_1,int param_2)

{
  FUN_145c5c3dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5c3dc FUN_145c5c3dc body=130 status=ok
// SIG undefined FUN_145c5c3dc(void)

void FUN_145c5c3dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac1f0c0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145c5c45e(param_1 + 0x12);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac1cb30;
  FUN_1449db362(param_1 + 0xd);
  FUN_1449db362(param_1 + 0xb);
  FUN_1449db362(param_1 + 9);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c5c45e FUN_145c5c45e body=53 status=ok
// SIG undefined FUN_145c5c45e(void)

void FUN_145c5c45e(longlong *param_1)

{
  FUN_145c5c494();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c5c494 FUN_145c5c494 body=90 status=ok
// SIG undefined FUN_145c5c494(void)

void FUN_145c5c494(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c5c4ee FUN_145c5c4ee body=40 status=ok
// SIG undefined FUN_145c5c4ee(void)

undefined8 FUN_145c5c4ee(undefined8 param_1,int param_2)

{
  FUN_145c5c516();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5c516 FUN_145c5c516 body=130 status=ok
// SIG undefined FUN_145c5c516(void)

void FUN_145c5c516(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac20dc0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_145c5c598(param_1 + 0x11);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ac1cb30;
  FUN_1449db362(param_1 + 0xd);
  FUN_1449db362(param_1 + 0xb);
  FUN_1449db362(param_1 + 9);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c5c598 FUN_145c5c598 body=53 status=ok
// SIG undefined FUN_145c5c598(void)

void FUN_145c5c598(longlong *param_1)

{
  FUN_145c5c5ce();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c5c5ce FUN_145c5c5ce body=90 status=ok
// SIG undefined FUN_145c5c5ce(void)

void FUN_145c5c5ce(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c5c628 FUN_145c5c628 body=40 status=ok
// SIG undefined FUN_145c5c628(void)

undefined8 FUN_145c5c628(undefined8 param_1,int param_2)

{
  FUN_145c5c650();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5c650 FUN_145c5c650 body=130 status=ok
// SIG undefined FUN_145c5c650(void)

void FUN_145c5c650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bec68f0;
  FUN_145c362a8(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145c5c6d2(param_1 + 0x10);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145afd044(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c5c6d2 FUN_145c5c6d2 body=53 status=ok
// SIG undefined FUN_145c5c6d2(void)

void FUN_145c5c6d2(longlong *param_1)

{
  FUN_145c5c708();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c5c708 FUN_145c5c708 body=90 status=ok
// SIG undefined FUN_145c5c708(void)

void FUN_145c5c708(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145c5c762 FUN_145c5c762 body=113 status=ok
// SIG undefined FUN_145c5c762(void)

ulonglong FUN_145c5c762(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145c5c7b6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c5c7b6;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145c5c7d4 FUN_145c5c7d4 body=179 status=ok
// SIG undefined FUN_145c5c7d4(void)

void FUN_145c5c7d4(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_3 != 0) && (param_4 <= param_5)) {
    puVar1 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_3 + 8);
    }
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_1400b2348(puVar1,local_38,1);
    local_40 = 0;
    local_48 = 0;
    FUN_145c5cda5(L"experience_level_up",local_38,param_2,param_3);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    FUN_145c5c888(param_2,param_3,param_5);
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5c888 FUN_145c5c888 body=990 status=ok
// SIG undefined FUN_145c5c888(void)

void FUN_145c5c888(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_358 [32];
  undefined8 *local_338;
  undefined8 *local_330;
  undefined8 local_328;
  longlong local_320 [2];
  longlong local_310 [2];
  longlong local_300 [2];
  undefined8 local_2f0;
  undefined1 local_2e4 [12];
  undefined8 local_2d8;
  longlong local_2d0 [2];
  undefined8 local_2c0;
  undefined8 local_2b8 [4];
  undefined1 local_298;
  undefined1 local_290 [16];
  longlong local_280;
  undefined1 local_270 [32];
  byte local_250;
  undefined1 local_248 [32];
  undefined1 local_228;
  undefined1 local_220 [16];
  longlong local_210;
  undefined1 local_200 [32];
  byte local_1e0;
  undefined1 local_1d8 [32];
  undefined1 local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  undefined1 local_190 [32];
  byte local_170;
  undefined1 local_168 [144];
  char local_d8 [8];
  undefined1 local_d0 [144];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_2c0 = param_3;
  lVar2 = FUN_1401b2ade();
  if (lVar2 != 0) {
    lVar3 = FUN_144a5dd5e();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) && (lVar2 = *(longlong *)(lVar2 + 0x3db8), lVar2 != 0)) &&
       ((lVar3 = FUN_140e447e6(lVar2,param_2), lVar3 != 0 &&
        (lVar3 = FUN_140e44844(lVar3), lVar3 != 0)))) {
      lVar4 = FUN_14144d9c6(lVar3);
      lVar3 = FUN_1457b1050(lVar3);
      if (((((*(uint *)(lVar2 + 8) & 0x10) == 0) &&
           ((*(longlong *)(lVar2 + 0x20) != 0 && (lVar2 = FUN_145ca578a(), lVar4 != 0)))) &&
          (lVar3 != 0)) && (lVar2 != 0)) {
        FUN_1410a642a(local_2d0,param_2);
        local_1b8 = 0;
        FUN_140c379ae(local_1d8,local_2d0);
        local_338 = (undefined8 *)local_1d8;
        FUN_140d767d6(&local_1b0,&DAT_14cbc3930,3,L"Level Up");
        if ((*(longlong *)(local_1b0 + 0x3c) == 0) || (*(char *)(local_1b0 + 0x38) < local_1a8)) {
          FUN_1410a642a(local_320,param_2);
          local_298 = 0;
          FUN_140c379ae(local_2b8,local_320);
          local_338 = local_2b8;
          FUN_140d767d6(local_290,&DAT_14cbc3930,3,L"Level Up");
          FUN_140d76846(local_168,local_290);
          bVar1 = false;
        }
        else {
          puVar5 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar3 + 8) != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(lVar3 + 8);
          }
          FUN_144a7660c(puVar5,local_2e4,1);
          local_2d8 = FUN_140b4e694(lVar2,local_2e4);
          if (param_2 == 0) {
            local_2f0 = 0;
          }
          else {
            lVar2 = FUN_1409e484c(param_1,param_2);
            local_2f0 = *(undefined8 *)(lVar2 + 8);
          }
          FUN_1400021e4(lVar4 + 0x38,local_300);
          FUN_1410a642a(local_310,param_2);
          local_228 = 0;
          FUN_140c379ae(local_248,local_310);
          local_338 = (undefined8 *)local_248;
          FUN_140d767d6(local_220,&DAT_14cbc3930,3,L"Level Up");
          local_330 = &local_2d8;
          local_338 = &local_2f0;
          FUN_145c5cc67(local_168,local_220,local_300,&local_2c0);
          bVar1 = true;
        }
        FUN_14027c224(local_d8,local_168);
        local_328 = 0;
        FUN_14485c47a(&local_328,param_1);
        if (local_d8[0] == '\x01') {
          FUN_1404eedce(local_d0,&DAT_14c9a3c28,local_328);
        }
        FUN_14027c198(local_d8);
        FUN_1404eeb8e(local_168);
        if (bVar1) {
          (*(code *)(&PTR_FUN_14a1842f0)[local_1e0])(local_200);
          if (local_210 != 0) {
            FUN_1400020a8();
          }
          local_320[0] = local_300[0];
          if (local_310[0] != 0) {
            FUN_1400020a8();
            local_320[0] = local_300[0];
          }
        }
        else {
          (*(code *)(&PTR_FUN_14a1842f0)[local_250])(local_270);
          if (local_280 != 0) {
            FUN_1400020a8();
          }
        }
        if (local_320[0] != 0) {
          FUN_1400020a8();
        }
        (*(code *)(&PTR_FUN_14a1842f0)[local_170])(local_190);
        if (local_1a0 != 0) {
          FUN_1400020a8();
        }
        if (local_2d0[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c5cc67 FUN_145c5cc67 body=79 status=ok
// SIG undefined FUN_145c5cc67(void)

longlong *
FUN_145c5cc67(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  FUN_14027c0e6();
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    FUN_145c5ccb6(param_1,param_3,param_4,param_5,param_6);
  }
  return param_1;
}



// FUNCTION 145c5ccb6 FUN_145c5ccb6 body=118 status=ok
// SIG undefined FUN_145c5ccb6(void)

undefined8
FUN_145c5ccb6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_140d76916(param_1,4);
  FUN_1411b30c0(param_1,&DAT_14cbc3ae8,param_2);
  FUN_145c5cd2c(param_1,param_3);
  FUN_145c5d5ce(param_1,&DAT_14cbc3b08,param_4);
  FUN_145c5d5ce(param_1,&DAT_14cbc3b18,param_5);
  return param_1;
}



// FUNCTION 145c5cd2c FUN_145c5cd2c body=121 status=ok
// SIG undefined FUN_145c5cd2c(void)

longlong * FUN_145c5cd2c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar3 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3,iVar1);
    }
    lVar2 = *plVar3;
    lVar4 = (longlong)iVar1 * 0x30;
    *(undefined8 *)(lVar2 + lVar4) = *param_2;
    *(undefined1 *)(lVar2 + 0x20 + lVar4) = 2;
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = DAT_14cbc3af8;
  }
  return param_1;
}



// FUNCTION 145c5cda5 FUN_145c5cda5 body=1457 status=ok
// SIG undefined FUN_145c5cda5(void)

void FUN_145c5cda5(undefined8 param_1,undefined8 *param_2,undefined *param_3,longlong param_4,
                  int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_2d8 [32];
  undefined8 *local_2b8;
  undefined *local_2b0;
  int *local_2a8;
  undefined *local_2a0;
  int *local_298;
  undefined *local_290;
  undefined4 *local_288;
  int local_274;
  undefined8 *local_270;
  int local_264;
  undefined *local_260;
  int *local_258;
  undefined8 local_250;
  int local_244;
  undefined4 local_240;
  undefined4 local_23c;
  longlong local_238 [5];
  undefined8 local_210;
  int local_204;
  longlong local_200;
  undefined8 local_1f8 [4];
  undefined1 auStack_1d8 [8];
  undefined8 local_1d0 [5];
  undefined1 local_1a8 [16];
  longlong local_198;
  undefined1 local_188 [32];
  byte local_168;
  undefined1 local_160 [32];
  undefined1 local_140;
  longlong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined1 local_118 [32];
  byte local_f8;
  longlong local_f0;
  char local_e8;
  ulonglong local_60;
  
  iVar1 = param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_200 = 0;
  piVar2 = (int *)FUN_145c5d3ac(param_3);
  if ((piVar2 == (int *)0x0) || (local_200 == 0)) goto LAB_145c5d1fe;
  puVar3 = (undefined *)FUN_145c5d436(local_200,param_4);
  if (puVar3 == (undefined *)0x0) goto LAB_145c5d1fe;
  local_274 = iVar1;
  local_264 = FUN_140a4890a(piVar2,puVar3);
  local_260 = puVar3;
  local_258 = piVar2;
  local_204 = local_264;
  iVar1 = FUN_140fcdece(piVar2 + 0x3c,puVar3);
  local_140 = 0;
  FUN_140c379ae(local_160,param_2);
  local_2b8 = (undefined8 *)local_160;
  FUN_140d767d6(&local_138,&DAT_14cbc3450,3,param_1);
  if ((*(longlong *)(local_138 + 0x3c) == 0) || (*(char *)(local_138 + 0x38) < (char)uStack_130)) {
    puVar7 = local_1f8;
  }
  else {
    puVar7 = (undefined8 *)(auStack_1d8 + 8);
  }
  *(undefined1 *)(puVar7 + 4) = 0;
  FUN_140c379ae(puVar7,param_2);
  local_2b8 = puVar7;
  FUN_140d767d6(local_1a8,&DAT_14cbc3450,3,param_1);
  FUN_140d76846(&local_f0,local_1a8);
  (*(code *)(&PTR_FUN_14a1842f0)[local_168])(local_188);
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  local_270 = param_2;
  (*(code *)(&PTR_FUN_14a1842f0)[local_f8])(local_118);
  if (CONCAT44(uStack_124,uStack_128) != 0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(local_f0 + 0x3c) != 0) && (local_e8 <= *(char *)(local_f0 + 0x38))) {
    FUN_1412e3d1e(local_1a8);
    uVar4 = FUN_14497e828(param_3);
    uVar4 = FUN_140f3f840(&local_f0,uVar4);
    local_210 = 0;
    FUN_14485c47a(&local_210,param_3);
    FUN_145c5d6ca(uVar4,local_210);
    local_238[2] = 0;
    local_238[3] = 0;
    FUN_1407c869a(local_1a8,local_238 + 2,0);
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    uStack_12c = 0;
    puVar5 = &DAT_14c9485f0;
    if (*(undefined4 **)(local_260 + 8) != (undefined4 *)0x0) {
      puVar5 = *(undefined4 **)(local_260 + 8);
    }
    FUN_1447325ac(puVar5,local_238,1);
    FUN_145c5d358(local_258,local_238,&local_138);
    local_238[0] = 0;
    local_238[1] = 0;
    FUN_1407c869a(&uStack_130,local_238,0);
    FUN_140d76916(&local_f0,2);
    FUN_141507978(&local_f0,&DAT_14cbc3608,local_238 + 2);
    FUN_141507978(&local_f0,&DAT_14cbc3618,local_238);
    puVar5 = (undefined4 *)FUN_1409e484c(param_3,param_4);
    local_23c = *puVar5;
    lVar6 = FUN_1401e6c61();
    if (lVar6 == param_4) {
      local_240 = uStack_120;
      local_244 = iVar1 - local_264;
      if (param_4 == 0) {
        local_250 = 0;
      }
      else {
        lVar6 = FUN_1409e484c(param_3,param_4);
        local_250 = *(undefined8 *)(lVar6 + 8);
      }
      puVar7 = local_270;
      iVar1 = local_274;
      iVar8 = param_6;
      local_2b8 = &local_250;
      local_288 = &local_240;
      local_290 = &DAT_14cbc3668;
      local_298 = &local_244;
      local_2a0 = &DAT_14cbc3658;
      local_2a8 = &local_204;
      local_2b0 = &DAT_14cbc3648;
      FUN_145c5d504(&local_f0,&DAT_14cbc3628,&local_23c,&DAT_14cbc3638);
      if (iVar1 != 0) {
        puVar3 = &DAT_14cbc3678;
LAB_145c5d2e1:
        FUN_145c35992(&local_f0,puVar3,&param_5);
      }
    }
    else {
      lVar6 = FUN_140fcc5c6();
      puVar7 = local_270;
      iVar8 = param_6;
      if (lVar6 == param_4) {
        local_240 = uStack_120;
        local_244 = iVar1 - local_204;
        if (param_4 == 0) {
          local_250 = 0;
        }
        else {
          lVar6 = FUN_1409e484c(param_3,param_4);
          local_250 = *(undefined8 *)(lVar6 + 8);
        }
        iVar1 = local_274;
        local_2b8 = &local_250;
        local_288 = &local_240;
        local_290 = &DAT_14cbc36c8;
        local_298 = &local_244;
        local_2a0 = &DAT_14cbc36b8;
        local_2a8 = &local_204;
        local_2b0 = &DAT_14cbc36a8;
        FUN_145c5d504(&local_f0,&DAT_14cbc3688,&local_23c,&DAT_14cbc3698);
        if (iVar1 != 0) {
          puVar3 = &DAT_14cbc36d8;
          goto LAB_145c5d2e1;
        }
      }
    }
    FUN_14027c70a(&local_f0);
    if (iVar8 == 1) {
      local_2a0 = local_260;
      local_2a8 = local_258;
      local_2b8 = puVar7;
      local_2b0 = param_3;
      FUN_14150750f(local_238 + 2,local_238,local_23c,param_1);
    }
    if (local_238[0] != 0) {
      FUN_1400020a8();
    }
    if (local_238[2] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1404eeb8e(&local_f0);
LAB_145c5d1fe:
  if ((local_60 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5d358 FUN_145c5d358 body=84 status=ok
// SIG undefined FUN_145c5d358(void)

undefined8 FUN_145c5d358(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x138);
  if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x40) != 0)) {
    plVar3 = *(longlong **)(lVar4 + 0x38);
    lVar4 = (longlong)*(int *)(lVar4 + 0x40) * 0x1c;
    do {
      if (*plVar3 == *param_2) {
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
        lVar4 = *plVar3;
        lVar1 = plVar3[1];
        uVar2 = *(undefined8 *)((longlong)plVar3 + 0x14);
        *(undefined8 *)((longlong)param_3 + 0xc) = *(undefined8 *)((longlong)plVar3 + 0xc);
        *(undefined8 *)((longlong)param_3 + 0x14) = uVar2;
        *param_3 = lVar4;
        param_3[1] = lVar1;
        return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
      }
      plVar3 = (longlong *)((longlong)plVar3 + 0x1c);
      lVar4 = lVar4 + -0x1c;
    } while (lVar4 != 0);
  }
  return 0;
}



// FUNCTION 145c5d3ac FUN_145c5d3ac body=138 status=ok
// SIG undefined FUN_145c5d3ac(void)

undefined8 FUN_145c5d3ac(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)FUN_14129b2e6();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_140f5697c();
    plVar3 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140f5697c();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        if (plVar1[0x7ee] == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_14034f110();
        }
        *param_2 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000145c5d422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 145c5d436 FUN_145c5d436 body=206 status=ok
// SIG undefined FUN_145c5d436(void)

longlong FUN_145c5d436(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x20) != 0)) {
    plVar6 = *(longlong **)(param_1 + 0x18);
    lVar7 = (longlong)*(int *)(param_1 + 0x20) * 0x18;
    do {
      lVar3 = plVar6[1];
      if (lVar3 == 0) {
        uVar4 = FUN_145764ed6();
        lVar3 = FUN_14477b664(uVar4);
        plVar6[1] = lVar3;
      }
      lVar5 = plVar6[2];
      if (lVar5 == 0) {
        if ((lVar3 != 0) && (*plVar6 != 0)) {
          plVar1 = *(longlong **)(lVar3 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            plVar6[2] = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar5 = FUN_144aff482(uVar4,plVar6);
            plVar6[2] = lVar5;
            if (lVar5 != 0) goto LAB_145c5d46e;
          }
        }
      }
      else {
LAB_145c5d46e:
        lVar3 = FUN_140fcc63a(lVar5);
        if (lVar3 == param_2) {
          return lVar5;
        }
      }
      plVar6 = plVar6 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  return 0;
}



// FUNCTION 145c5d504 FUN_145c5d504 body=201 status=ok
// SIG undefined FUN_145c5d504(void)

void FUN_145c5d504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  FUN_140d76916(param_1,5);
  FUN_145c5d916(param_1,param_2,param_3);
  FUN_145c5d5ce(param_1,param_4,param_5);
  FUN_145c5d916(param_1,param_6,param_7);
  FUN_1414aa52e(param_1,param_8,param_9);
  FUN_145c5d64c(param_1,param_10,param_11);
  return;
}



// FUNCTION 145c5d5ce FUN_145c5d5ce body=126 status=ok
// SIG undefined FUN_145c5d5ce(void)

longlong * FUN_145c5d5ce(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar3 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3,iVar1);
    }
    lVar2 = *plVar3;
    lVar4 = (longlong)iVar1 * 0x30;
    *(undefined8 *)(lVar2 + lVar4) = *param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar4) = 2;
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
  }
  return param_1;
}



// FUNCTION 145c5d64c FUN_145c5d64c body=125 status=ok
// SIG undefined FUN_145c5d64c(void)

longlong * FUN_145c5d64c(longlong *param_1,undefined8 *param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar3 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3,iVar1);
    }
    lVar2 = *plVar3;
    lVar4 = (longlong)iVar1 * 0x30;
    *(ulonglong *)(lVar2 + lVar4) = (ulonglong)*param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar4) = 2;
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
  }
  return param_1;
}



// FUNCTION 145c5d6ca FUN_145c5d6ca body=314 status=ok
// SIG undefined FUN_145c5d6ca(void)

longlong * FUN_145c5d6ca(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    FUN_1446ddc76(&local_68,"player",1);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    lVar4 = param_1[0xe];
    uVar3 = (int)lVar4 + 1;
    *(uint *)(param_1 + 0xe) = uVar3;
    uStack_60 = param_2;
    if (*(uint *)((longlong)param_1 + 0x74) < uVar3) {
      FUN_141225836(param_1 + 0xd);
    }
    lVar2 = param_1[0xd];
    lVar4 = (longlong)(int)lVar4 * 0x40;
    puVar1 = (undefined4 *)(lVar2 + lVar4);
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = (undefined4)uStack_60;
    puVar1[3] = uStack_60._4_4_;
    *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
    *(undefined8 *)(lVar2 + 0x10 + lVar4) = local_58;
    local_58 = 0;
    *(undefined4 *)(lVar2 + 0x18 + lVar4) = (undefined4)uStack_50;
    *(undefined4 *)(lVar2 + 0x1c + lVar4) = uStack_50._4_4_;
    uStack_50 = 0;
    *(undefined8 *)(lVar2 + 0x20 + lVar4) = 0;
    *(undefined8 *)(lVar2 + 0x20 + lVar4) = local_48;
    local_48 = 0;
    *(undefined4 *)(lVar2 + 0x28 + lVar4) = (undefined4)uStack_40;
    *(undefined4 *)(lVar2 + 0x2c + lVar4) = uStack_40._4_4_;
    uStack_40 = 0;
    *(undefined8 *)(lVar2 + 0x30 + lVar4) = 0;
    *(undefined8 *)(lVar2 + 0x30 + lVar4) = local_38;
    local_38 = 0;
    *(undefined4 *)(lVar2 + 0x38 + lVar4) = (undefined4)uStack_30;
    *(undefined4 *)(lVar2 + 0x3c + lVar4) = uStack_30._4_4_;
    uStack_30 = 0;
    FUN_1412ca22e();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5d806 FUN_145c5d806 body=27 status=ok
// SIG undefined FUN_145c5d806(void)

void FUN_145c5d806(longlong param_1,undefined8 *param_2)

{
  if (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0) {
    *param_2 = **(undefined8 **)(param_1 + 0x50);
    return;
  }
  *param_2 = 0;
  return;
}



// FUNCTION 145c5d822 FUN_145c5d822 body=4 status=ok
// SIG undefined FUN_145c5d822(void)

undefined4 FUN_145c5d822(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// FUNCTION 145c5d826 FUN_145c5d826 body=239 status=ok
// SIG undefined FUN_145c5d826(void)

undefined8
FUN_145c5d826(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  FUN_140d76916(param_1,8);
  FUN_141507978(param_1,&DAT_14cbc38a0,param_2);
  FUN_141507978(param_1,&DAT_14cbc38b0,param_3);
  FUN_145c35992(param_1,&DAT_14cbc38c0,param_4);
  FUN_1411b30c0(param_1,&DAT_14cbc38e0,param_5);
  FUN_1411b2fb0(param_1,&DAT_14cbc38f0,param_6);
  FUN_145c5d994(param_1,&DAT_14cbc3900,param_7);
  FUN_145c5d916(param_1,&DAT_14cbc3910,param_8);
  FUN_145c5d916(param_1,&DAT_14cbc3920,param_9);
  return param_1;
}



// FUNCTION 145c5d916 FUN_145c5d916 body=126 status=ok
// SIG undefined FUN_145c5d916(void)

longlong * FUN_145c5d916(longlong *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar3 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar3,iVar1);
    }
    lVar2 = *plVar3;
    lVar4 = (longlong)iVar1 * 0x30;
    *(longlong *)(lVar2 + lVar4) = (longlong)*param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar4) = 2;
    *(undefined8 *)(lVar2 + 0x28 + lVar4) = *param_2;
  }
  return param_1;
}



// FUNCTION 145c5d994 FUN_145c5d994 body=132 status=ok
// SIG undefined FUN_145c5d994(void)

longlong * FUN_145c5d994(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar4 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar4,iVar1);
    }
    lVar2 = *plVar4;
    lVar5 = (longlong)iVar1 * 0x30;
    uVar3 = *param_3;
    *(undefined1 *)(lVar2 + 0x20 + lVar5) = 0;
    FUN_140aec01a(lVar2 + lVar5,uVar3);
    *(undefined8 *)(lVar2 + 0x28 + lVar5) = *param_2;
  }
  return param_1;
}



// FUNCTION 145c5da18 FUN_145c5da18 body=40 status=ok
// SIG undefined FUN_145c5da18(void)

undefined8 FUN_145c5da18(undefined8 param_1,int param_2)

{
  FUN_145c5da40();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5da40 FUN_145c5da40 body=169 status=ok
// SIG undefined FUN_145c5da40(void)

void FUN_145c5da40(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae60c10;
  param_1[5] = &PTR_FUN_14ae60f40;
  FUN_1404578a2(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x36];
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
  plVar3 = (longlong *)param_1[0x34];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_14110c0da(param_1);
  return;
}



// FUNCTION 145c5daf2 FUN_145c5daf2 body=201 status=ok
// SIG undefined FUN_145c5daf2(void)

undefined8 * FUN_145c5daf2(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b18f750;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xf00000d0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_140265f12();
  param_1[0x17] = &DAT_14cb83310;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = &PTR_FUN_14b1828b0;
  FUN_140265f12();
  param_1[0x1b] = &DAT_14cb83310;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = &PTR_FUN_14b1828b0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  return param_1;
}



// FUNCTION 145c5dbbc FUN_145c5dbbc body=52 status=ok
// SIG undefined FUN_145c5dbbc(void)

void FUN_145c5dbbc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(1000);
  memset(_Dst,0,1000);
  FUN_145c5dbf0(_Dst);
  return;
}



// FUNCTION 145c5dbf0 FUN_145c5dbf0 body=157 status=ok
// SIG undefined FUN_145c5dbf0(void)

undefined8 * FUN_145c5dbf0(undefined8 *param_1)

{
  FUN_140e8cfb8();
  *(undefined4 *)(param_1 + 0x56) = 0xffffffff;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *param_1 = &PTR_FUN_14b9c4600;
  *(undefined4 *)(param_1 + 0x59) = 0x1000000;
  *(undefined1 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  return param_1;
}



// FUNCTION 145c5dc8e FUN_145c5dc8e body=144 status=ok
// SIG undefined FUN_145c5dc8e(void)

code * FUN_145c5dc8e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c5dd1e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"AttributeNames";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FStrings::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x50000002e8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14667b630;
}



// FUNCTION 145c5dd1e FUN_145c5dd1e body=265 status=ok
// SIG undefined FUN_145c5dd1e(void)

undefined * FUN_145c5dd1e(void)

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
              0x110) < DAT_14cbf92e8) {
    FUN_144b3d300(&DAT_14cbf92e8);
    if (DAT_14cbf92e8 == -1) {
      FUN_145c5de28(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xb9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbf9268,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444275e2);
      _Init_thread_footer(&DAT_14cbf92e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cbf9268;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5de28 FUN_145c5de28 body=226 status=ok
// SIG undefined FUN_145c5de28(void)

longlong * FUN_145c5de28(longlong *param_1)

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
  pcVar13 = FUN_14667b6be;
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



// FUNCTION 145c5df0c FUN_145c5df0c body=132 status=ok
// SIG undefined FUN_145c5df0c(void)

undefined1 * FUN_145c5df0c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InfoCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_149087344;
}



// FUNCTION 145c5df90 FUN_145c5df90 body=138 status=ok
// SIG undefined FUN_145c5df90(void)

code * FUN_145c5df90(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CharCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c5df0c;
}



// FUNCTION 145c5e01a FUN_145c5e01a body=138 status=ok
// SIG undefined FUN_145c5e01a(void)

code * FUN_145c5e01a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InfoBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c5df90;
}



// FUNCTION 145c5e0a4 FUN_145c5e0a4 body=102 status=ok
// SIG undefined FUN_145c5e0a4(void)

void FUN_145c5e0a4(undefined4 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  undefined8 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_1;
  local_38 = param_2;
  FUN_141507a88();
  local_30 = &local_3c;
  local_28 = &local_38;
  FUN_145c5e10c(&DAT_14cc28fc0,local_1c,&local_30,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5e10c FUN_145c5e10c body=298 status=ok
// SIG undefined FUN_145c5e10c(void)

undefined4 *
FUN_145c5e10c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_145c5e2ca(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_48 = uVar5;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar3 = FUN_145c5e238(param_1,uVar5,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_48[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145c5e3b2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5e238 FUN_145c5e238 body=145 status=ok
// SIG undefined FUN_145c5e238(void)

void FUN_145c5e238(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1498184e2(iVar2,*param_4);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = piVar1[4];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_145c5e2a0;
    }
  }
  uVar6 = 0;
LAB_145c5e2a0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 145c5e2ca FUN_145c5e2ca body=231 status=ok
// SIG undefined FUN_145c5e2ca(void)

int * FUN_145c5e2ca(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145c5e3b2 FUN_145c5e3b2 body=428 status=ok
// SIG undefined FUN_145c5e3b2(void)

void FUN_145c5e3b2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c5e56a FUN_145c5e56a body=564 status=ok
// SIG undefined FUN_145c5e56a(void)

undefined8 * FUN_145c5e56a(undefined8 *param_1)

{
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b6a97d0;
  param_1[0x72] = &PTR_FUN_14b6a9e40;
  param_1[0x73] = &PTR_FUN_14b6a9e60;
  param_1[0x74] = &PTR_FUN_14b6a9e90;
  param_1[0x75] = &PTR_FUN_14b6a9ea0;
  param_1[0x76] = &PTR_FUN_14b6a9f10;
  param_1[0x77] = &PTR_FUN_14b6a9f40;
  param_1[0x78] = &PTR_FUN_14b6a9f70;
  param_1[0x7f] = &PTR_FUN_14b6aa020;
  param_1[0x80] = &PTR_FUN_14b6aa090;
  param_1[0x81] = &PTR_FUN_14b6aa100;
  param_1[0x82] = &PTR_FUN_14b6aa130;
  param_1[0x83] = &PTR_FUN_14b6aa170;
  param_1[0x84] = &PTR_FUN_14b6aa210;
  param_1[0x85] = &PTR_FUN_14b6aa230;
  param_1[0x89] = &PTR_FUN_14b6aa250;
  param_1[0x8a] = &PTR_FUN_14b6aa310;
  param_1[0x8b] = &PTR_FUN_14b6aa390;
  param_1[0x8c] = &PTR_FUN_14b6aa3e0;
  param_1[0x8d] = &PTR_FUN_14b6aa420;
  param_1[0x8e] = &PTR_FUN_14b6aa440;
  param_1[0x8f] = &PTR_FUN_14b6aa460;
  param_1[0x90] = &PTR_FUN_14b6aa480;
  param_1[0x91] = &PTR_FUN_14b6aa4a0;
  param_1[0x92] = &PTR_FUN_14b6aa4c0;
  param_1[0x93] = &PTR_FUN_14b6aa4e0;
  param_1[0x94] = &PTR_FUN_14b6aa500;
  param_1[0x95] = &PTR_FUN_14b6aa520;
  param_1[0x96] = &PTR_FUN_14b6aa540;
  param_1[0x34b] = &PTR_FUN_14b6aa560;
  param_1[0x352] = &PTR_FUN_14b6aa570;
  param_1[0x353] = &PTR_FUN_14b6aa5b0;
  param_1[0x354] = &PTR_FUN_14b6aa5f0;
  param_1[0x355] = &PTR_FUN_14b6aa640;
  param_1[0x356] = &PTR_FUN_14b6aa670;
  param_1[0x359] = &PTR_FUN_14b6aa6b0;
  param_1[0x35a] = &PTR_FUN_14b6aa6c0;
  param_1[0x35b] = &PTR_FUN_14b6aa6f0;
  param_1[0x35c] = &PTR_FUN_14b6aa790;
  return param_1;
}



// FUNCTION 145c5e79e FUN_145c5e79e body=103 status=ok
// SIG undefined FUN_145c5e79e(void)

ulonglong FUN_145c5e79e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145c5e7e8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145c5e7e8;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145c5e806 FUN_145c5e806 body=58 status=ok
// SIG undefined FUN_145c5e806(void)

void FUN_145c5e806(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  if (param_3 == '\0') {
LAB_145c5e813:
    FUN_145c5e840(param_1,param_2);
    return;
  }
  if (param_3 == '\x01') {
    cVar1 = FUN_145c5e916(param_1 + 0x50);
    if (cVar1 != '\0') {
      param_2 = 0;
      goto LAB_145c5e813;
    }
  }
  return;
}



// FUNCTION 145c5e840 FUN_145c5e840 body=213 status=ok
// SIG undefined FUN_145c5e840(void)

void FUN_145c5e840(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = param_1 + 0x50;
  cVar1 = FUN_145c5e916(lVar5);
  if (cVar1 != '\0') {
    return;
  }
  lVar2 = FUN_14479d2ce(lVar5);
  if (lVar2 != 0) {
    FUN_1412b41aa(lVar2 + 0x48,*(undefined8 *)(param_1 + 0x38),param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  FUN_14485c47a(lVar5,param_2);
  FUN_145c5e990(param_1,param_2);
  uVar4 = 0;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    if ((longlong)*(int *)(param_2 + 0x50) != 0) {
      plVar3 = *(longlong **)(param_2 + 0x48);
      lVar5 = (longlong)*(int *)(param_2 + 0x50) * 0x90;
      do {
        if (*plVar3 == *(longlong *)(param_1 + 0x38)) {
          if (plVar3 != (longlong *)0x0) {
            uVar4 = CONCAT71((int7)((ulonglong)plVar3 >> 8),(char)plVar3[0x11]) & 0xffffffffffffff01
            ;
            goto LAB_145c5e8d7;
          }
          break;
        }
        plVar3 = plVar3 + 0x12;
        lVar5 = lVar5 + -0x90;
      } while (lVar5 != 0);
    }
    uVar4 = 0;
LAB_145c5e8d7:
    uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 ^ *(byte *)(param_1 + 0x30)) ^ 1;
  }
  FUN_1402a7054(param_1,uVar4);
  return;
}



// FUNCTION 145c5e916 FUN_145c5e916 body=120 status=ok
// SIG undefined FUN_145c5e916(void)

ulonglong FUN_145c5e916(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if (*param_1 == (int)local_20) {
    uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
    if (param_1[1] == local_20._4_4_) goto LAB_145c5e960;
  }
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(&local_20);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
LAB_145c5e960:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 145c5e990 FUN_145c5e990 body=148 status=ok
// SIG undefined FUN_145c5e990(void)

void FUN_145c5e990(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_48 = &LAB_140fa5874;
    local_40 = 0;
    FUN_145c5ea26(local_38,param_1);
    FUN_1413d7f08(param_2 + 0x48,&local_48,*(undefined8 *)(param_1 + 0x38),local_38);
    *(undefined1 **)(param_1 + 0x48) = local_48;
    FUN_1449db362(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5ea26 FUN_145c5ea26 body=428 status=ok
// SIG undefined FUN_145c5ea26(void)

longlong * FUN_145c5ea26(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145c5eb06:
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4278c0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145c5eb06;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4278c0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145c5ebde FUN_145c5ebde body=454 status=ok
// SIG undefined FUN_145c5ebde(void)

undefined8 * FUN_145c5ebde(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b16a420;
  *(undefined4 *)(param_1 + 0x16) = 0xa40000;
  param_1[0x17] = "gamemode_phase";
  lVar4 = FUN_145c5eda6();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145c5ecb5;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145c5ecb5:
  FUN_1400b22c2(local_58,"GameModes.GameMode Phase");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5eda6 FUN_145c5eda6 body=57 status=ok
// SIG undefined FUN_145c5eda6(void)

void FUN_145c5eda6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5eb00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5eb00 = FUN_140002ddd(FUN_1464e3333,uVar1,L"GbxGameModePhaseDef");
  }
  return;
}



// FUNCTION 145c5ede0 FUN_145c5ede0 body=292 status=ok
// SIG undefined FUN_145c5ede0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145c5ede0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2f9d0) {
    FUN_144b3d300(&DAT_14ca2f9d0);
    if (DAT_14ca2f9d0 == -1) {
      FUN_145c5f04e();
      FUN_145c5ef04();
      FUN_140db5666(&DAT_14ca2f928,0,&DAT_14ca2f8c0,L"FSubsurfaceVisualizePS",
                    L"/Engine/Private/PostProcessSubsurface.usf",L"VisualizePS",3,1,FUN_147299458,
                    FUN_1472993f8,&LAB_1472993e0,&LAB_1472993dc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca33810);
      _DAT_14ca2f928 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f06034);
      _Init_thread_footer(&DAT_14ca2f9d0);
    }
  }
  return &DAT_14ca2f928;
}



// FUNCTION 145c5ef04 FUN_145c5ef04 body=205 status=ok
// SIG undefined FUN_145c5ef04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c5ef04(void)

{
  if ((DAT_14ca2f927 & 2) == 0) {
    DAT_14ca2f927 = DAT_14ca2f927 | 2;
    _DAT_14ca2f8c8 = L"FSubsurfaceVisualizePS";
    _DAT_14ca2f8e0 = FUN_146826540;
    _DAT_14ca2f8e8 = FUN_146825d77;
    _DAT_14ca2f8f0 = FUN_146825fd6;
    _DAT_14ca2f8f8 = FUN_1407e02ea;
    _DAT_14ca2f900 = FUN_146826273;
    _DAT_14ca2f8d8 = FUN_1472993ac;
    _DAT_14ca2f918 = 0xffffffff000000e0;
    _DAT_14ca2f920 = 8;
    DAT_14ca2f924 = 0;
    _DAT_14ca2f908 = &LAB_1472993d8;
    FUN_145c5efd2();
    FUN_1407e00cc(&DAT_14ca2f8c0);
    return;
  }
  return;
}



// FUNCTION 145c5efd2 FUN_145c5efd2 body=123 status=ok
// SIG undefined FUN_145c5efd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c5efd2(void)

{
  _DAT_14ca34b60 = L"BASE";
  DAT_14ca34b8a = 4;
  _DAT_14ca34b68 = FUN_140b35ae4();
  _DAT_14ca34b70 = DAT_14ca2f8d0;
  _DAT_14ca34b78 = &LAB_14682652b;
  DAT_14ca2f8d0 = &DAT_14ca34b60;
  DAT_14ca2f925 = DAT_14ca2f925 + '\x01';
  _DAT_14ca34b80 = 0x100000000;
  if (*(char *)(_DAT_14ca34b68 + 100) != '\0') {
    DAT_14ca2f926 = DAT_14ca2f926 + '\x01';
  }
  return;
}



// FUNCTION 145c5f04e FUN_145c5f04e body=261 status=ok
// SIG undefined FUN_145c5f04e(void)

void FUN_145c5f04e(void)

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
              0x110) < DAT_14ca33890) {
    FUN_144b3d300(&DAT_14ca33890);
    if (DAT_14ca33890 == -1) {
      FUN_145c5f154(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0x182;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33810,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f1405d);
      _Init_thread_footer(&DAT_14ca33890);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5f154 FUN_145c5f154 body=226 status=ok
// SIG undefined FUN_145c5f154(void)

longlong * FUN_145c5f154(longlong *param_1)

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
  pcVar13 = FUN_1462fdbfa;
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



// FUNCTION 145c5f238 FUN_145c5f238 body=138 status=ok
// SIG undefined FUN_145c5f238(void)

undefined1 * FUN_145c5f238(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a2c9be();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Substrate";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstrateGlobalUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x183;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472a0452;
}



// FUNCTION 145c5f2c2 FUN_145c5f2c2 body=144 status=ok
// SIG undefined FUN_145c5f2c2(void)

code * FUN_145c5f2c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c5f352();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Subsurface";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSubsurfaceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000184;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca33920;
  return FUN_145c5f238;
}



// FUNCTION 145c5f352 FUN_145c5f352 body=258 status=ok
// SIG undefined FUN_145c5f352(void)

void FUN_145c5f352(void)

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
              0x110) < DAT_14ca339a0) {
    FUN_144b3d300(&DAT_14ca339a0);
    if (DAT_14ca339a0 == -1) {
      FUN_145c5f75e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSubsurfaceParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xf6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33920,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14075);
      _Init_thread_footer(&DAT_14ca339a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5f456 FUN_145c5f456 body=146 status=ok
// SIG undefined FUN_145c5f456(void)

code * FUN_145c5f456(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c5f4e8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SubsurfaceInput0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSubsurfaceInput";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000185;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca33898;
  return FUN_145c5f2c2;
}



// FUNCTION 145c5f4e8 FUN_145c5f4e8 body=258 status=ok
// SIG undefined FUN_145c5f4e8(void)

void FUN_145c5f4e8(void)

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
              0x110) < DAT_14ca33918) {
    FUN_144b3d300(&DAT_14ca33918);
    if (DAT_14ca33918 == -1) {
      FUN_145c5f5ec(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSubsurfaceInput";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0xeb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33898,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14069);
      _Init_thread_footer(&DAT_14ca33918);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c5f5ec FUN_145c5f5ec body=226 status=ok
// SIG undefined FUN_145c5f5ec(void)

longlong * FUN_145c5f5ec(longlong *param_1)

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
  pcVar13 = FUN_1462fdc82;
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



// FUNCTION 145c5f6d4 FUN_145c5f6d4 body=138 status=ok
// SIG undefined FUN_145c5f6d4(void)

undefined1 * FUN_145c5f6d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Viewport";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xec;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145c5f6d0;
}



// FUNCTION 145c5f75e FUN_145c5f75e body=226 status=ok
// SIG undefined FUN_145c5f75e(void)

longlong * FUN_145c5f75e(longlong *param_1)

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
  pcVar13 = FUN_1462fdd0a;
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



// FUNCTION 145c5f846 FUN_145c5f846 body=132 status=ok
// SIG undefined FUN_145c5f846(void)

undefined1 * FUN_145c5f846(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubsurfaceParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145c5f842;
}



// FUNCTION 145c5f8ca FUN_145c5f8ca body=144 status=ok
// SIG undefined FUN_145c5f8ca(void)

code * FUN_145c5f8ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14482e3b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145c5f846;
}



// FUNCTION 145c5f95a FUN_145c5f95a body=205 status=ok
// SIG undefined FUN_145c5f95a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c5f95a(void)

{
  if ((DAT_14ca702bf & 2) == 0) {
    DAT_14ca702bf = DAT_14ca702bf | 2;
    _DAT_14ca70260 = L"TPageTableUpdatePS<PF_R16_UINT>";
    _DAT_14ca70278 = FUN_146826540;
    _DAT_14ca70280 = FUN_146825d77;
    _DAT_14ca70288 = FUN_146825fd6;
    _DAT_14ca70290 = FUN_1407e02ea;
    _DAT_14ca70298 = FUN_146826273;
    _DAT_14ca70270 = FUN_1473410ec;
    _DAT_14ca702b0 = 0xffffffff000000e0;
    _DAT_14ca702b8 = 8;
    DAT_14ca702bc = 0;
    _DAT_14ca702a0 = &LAB_147341116;
    FUN_145c5fa28();
    FUN_1407e00cc(&DAT_14ca70258);
    return;
  }
  return;
}



// FUNCTION 145c5fa28 FUN_145c5fa28 body=133 status=ok
// SIG undefined FUN_145c5fa28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c5fa28(void)

{
  _DAT_14ca720f0 = L"BASE";
  DAT_14ca7211a = 4;
  FUN_145c5faae();
  _DAT_14ca72100 = DAT_14ca70268;
  _DAT_14ca720f8 = &DAT_14ca72120;
  _DAT_14ca72108 = &LAB_14682652b;
  DAT_14ca70268 = &DAT_14ca720f0;
  DAT_14ca702bd = DAT_14ca702bd + '\x01';
  _DAT_14ca72110 = 0x100000000;
  if (DAT_14ca72184 != '\0') {
    DAT_14ca702be = DAT_14ca702be + '\x01';
  }
  return;
}



// FUNCTION 145c5faae FUN_145c5faae body=200 status=ok
// SIG undefined FUN_145c5faae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c5faae(void)

{
  if ((DAT_14ca72187 & 2) != 0) {
    return;
  }
  DAT_14ca72187 = DAT_14ca72187 | 2;
  _DAT_14ca72128 = L"FPageTableUpdatePS";
  _DAT_14ca72140 = FUN_146826540;
  _DAT_14ca72148 = FUN_146825d77;
  _DAT_14ca72150 = FUN_146825fd6;
  _DAT_14ca72158 = FUN_1407e02ea;
  _DAT_14ca72160 = FUN_146826273;
  _DAT_14ca72138 = FUN_147347124;
  _DAT_14ca72178 = 0xffffffff000000e0;
  _DAT_14ca72180 = 8;
  DAT_14ca72184 = 0;
  _DAT_14ca72168 = &LAB_14734714e;
  FUN_145c5fb76();
  FUN_1407e00cc(&DAT_14ca72120);
  return;
}



// FUNCTION 145c5fb76 FUN_145c5fb76 body=123 status=ok
// SIG undefined FUN_145c5fb76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c5fb76(void)

{
  _DAT_14ca72188 = L"BASE";
  DAT_14ca721b2 = 4;
  _DAT_14ca72190 = FUN_140b35ae4();
  _DAT_14ca72198 = DAT_14ca72130;
  _DAT_14ca721a0 = &LAB_14682652b;
  DAT_14ca72130 = &DAT_14ca72188;
  DAT_14ca72185 = DAT_14ca72185 + '\x01';
  _DAT_14ca721a8 = 0x100000000;
  if (*(char *)(_DAT_14ca72190 + 100) != '\0') {
    DAT_14ca72186 = DAT_14ca72186 + '\x01';
  }
  return;
}



// FUNCTION 145c5fbf2 FUN_145c5fbf2 body=61 status=ok
// SIG undefined FUN_145c5fbf2(void)

void FUN_145c5fbf2(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_145c5fc30(param_1);
    return;
  }
  FUN_141507c39(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 145c5fc30 FUN_145c5fc30 body=58 status=ok
// SIG undefined FUN_145c5fc30(void)

void FUN_145c5fc30(undefined8 *param_1,int param_2)

{
  FUN_141507c39(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145c5fc6a(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145c5fc6a FUN_145c5fc6a body=108 status=ok
// SIG undefined FUN_145c5fc6a(void)

void FUN_145c5fc6a(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x70,8);
  }
  return;
}



// FUNCTION 145c5fcd6 FUN_145c5fcd6 body=43 status=ok
// SIG undefined FUN_145c5fcd6(void)

undefined8 FUN_145c5fcd6(undefined8 param_1,int param_2)

{
  FUN_145c5fd02();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 145c5fd02 FUN_145c5fd02 body=181 status=ok
// SIG undefined FUN_145c5fd02(void)

void FUN_145c5fd02(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8aca10;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_145c5fe38(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145c5fdf7(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145c5fdb7(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145c5fdb7 FUN_145c5fdb7 body=64 status=ok
// SIG undefined FUN_145c5fdb7(void)

void FUN_145c5fdb7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c5fdf7 FUN_145c5fdf7 body=65 status=ok
// SIG undefined FUN_145c5fdf7(void)

void FUN_145c5fdf7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if ((longlong *)plVar1[-4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-4] + 0x10))();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c5fe38 FUN_145c5fe38 body=66 status=ok
// SIG undefined FUN_145c5fe38(void)

void FUN_145c5fe38(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c5fe7a FUN_145c5fe7a body=38 status=ok
// SIG undefined FUN_145c5fe7a(void)

undefined8 FUN_145c5fe7a(undefined8 param_1,int param_2)

{
  FUN_145c5fea0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c5fea0 FUN_145c5fea0 body=126 status=ok
// SIG undefined FUN_145c5fea0(void)

void FUN_145c5fea0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb86ac0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (param_1[0x127] != 0) {
    FUN_1400020a8();
  }
  FUN_145c5ff1e(param_1 + 0x11f);
  FUN_145c5ff55(param_1[0x11d],*(undefined4 *)(param_1 + 0x11e));
  if (param_1[0x11d] != 0) {
    FUN_1400020a8();
  }
  FUN_144a659aa(param_1 + 0x115);
  FUN_14064e066(param_1);
  return;
}



// FUNCTION 145c5ff1e FUN_145c5ff1e body=55 status=ok
// SIG undefined FUN_145c5ff1e(void)

void FUN_145c5ff1e(longlong *param_1)

{
  FUN_145c5ffa2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c5ff55 FUN_145c5ff55 body=77 status=ok
// SIG undefined FUN_145c5ff55(void)

void FUN_145c5ff55(longlong param_1,int param_2)

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



// FUNCTION 145c5ffa2 FUN_145c5ffa2 body=123 status=ok
// SIG undefined FUN_145c5ffa2(void)

void FUN_145c5ffa2(longlong param_1,int param_2)

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



// FUNCTION 145c6001e FUN_145c6001e body=244 status=ok
// SIG undefined FUN_145c6001e(void)

void FUN_145c6001e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141507db0();
  lVar1 = *(longlong *)(param_2 + 0x3d0);
  if (lVar1 != 0) {
    local_38 = *param_3;
    uStack_30 = param_3[1];
    local_28 = param_3[2];
    uStack_20 = param_3[3];
    local_58 = param_3[4];
    uStack_50 = param_3[5];
    local_48 = param_3[6];
    local_60 = 0;
    local_68 = 0;
    FUN_141507c90(lVar1,&local_58,&local_38,0);
    lVar4 = FUN_144a78b9e();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && (plVar2 = *(longlong **)(lVar1 + 0x32b8), plVar2 != (longlong *)0x0))
    {
      cVar3 = (**(code **)(*plVar2 + 0x480))(plVar2,DAT_14c9abbf0);
      if (cVar3 != '\0') {
        local_38 = param_3[4];
        uStack_30 = param_3[5];
        local_28 = param_3[6];
        FUN_143ce4e66(plVar2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c60114 FUN_145c60114 body=45 status=ok
// SIG undefined FUN_145c60114(void)

undefined8 FUN_145c60114(undefined8 param_1,int param_2)

{
  FUN_145c60142();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 145c60142 FUN_145c60142 body=86 status=ok
// SIG undefined FUN_145c60142(void)

void FUN_145c60142(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2a5af0;
  plVar3 = (longlong *)param_1[7];
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
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c601a2 FUN_145c601a2 body=122 status=ok
// SIG undefined FUN_145c601a2(void)

void FUN_145c601a2(longlong *param_1)

{
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  FUN_1458b9ef6(param_1 + 3);
  FUN_1412de13c(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145c6021c FUN_145c6021c body=599 status=ok
// SIG undefined FUN_145c6021c(void)

void FUN_145c6021c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_64 = 0x100;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_65 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_65);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_65);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_66 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_66);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_66);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  local_67 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_67);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_67);
  }
  puVar6 = *(undefined1 **)(param_2 + 0x38);
  local_68 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar7 = &local_67;
  if (puVar6 != (undefined1 *)0x0) {
    puVar7 = puVar6;
  }
  puVar6 = &local_66;
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5 = &local_65;
  if (puVar3 != (undefined1 *)0x0) {
    puVar5 = puVar3;
  }
  puVar4 = &local_64;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  local_78 = &local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_78 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c60474(puVar4,puVar5,puVar6,puVar7);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c60474 FUN_145c60474 body=29 status=ok
// SIG undefined FUN_145c60474(void)

void FUN_145c60474(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  *param_2 = *param_1;
  *param_3 = param_1[1];
  *param_4 = param_1[2];
  *param_5 = param_1[3];
  return;
}



// FUNCTION 145c60492 FUN_145c60492 body=284 status=ok
// SIG undefined FUN_145c60492(void)

void FUN_145c60492(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  DAT_14ca4cb10 = FUN_141508108();
  uVar2 = FUN_14001cc68(0x330,0x10);
  FUN_14150836e(uVar2);
  DAT_14ca964f8 = uVar2;
  FUN_14150817c();
  FUN_145c605b0();
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14a2e79c0;
  local_38[3] = param_1;
  FUN_145c60680(&local_28,&local_38);
  *(undefined8 *)(param_1 + 0xa0) = local_28;
  FUN_1449db362(&local_38);
  FUN_145c606ee();
  FUN_145c60630();
  FUN_145c605e6();
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c605b0 FUN_145c605b0 body=54 status=ok
// SIG undefined FUN_145c605b0(void)

void FUN_145c605b0(void)

{
  longlong lVar1;
  
  if (DAT_14ca712d8 == 0) {
    lVar1 = FUN_14001cc68(0x450,0x10);
    FUN_14150858e(lVar1);
    DAT_14ca712d8 = lVar1;
  }
  return;
}



// FUNCTION 145c605e6 FUN_145c605e6 body=73 status=ok
// SIG undefined FUN_145c605e6(void)

void FUN_145c605e6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140755bfc();
  if (DAT_14ca44d70 == (undefined4 *)0x0) {
    DAT_14ca44d70 = (undefined4 *)FUN_14001cc68(0x10,0x10);
  }
  *DAT_14ca44d70 = 0;
  FUN_1447fd100(&DAT_14ca44d50,uVar1);
  return;
}



// FUNCTION 145c60630 FUN_145c60630 body=80 status=ok
// SIG undefined FUN_145c60630(void)

void FUN_145c60630(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140755bfc();
  if (DAT_14ca44d48 == (undefined8 *)0x0) {
    DAT_14ca44d48 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  }
  *DAT_14ca44d48 = 0x3f80000000000000;
  FUN_1447fd100(&DAT_14ca44d28,uVar1);
  return;
}



// FUNCTION 145c60680 FUN_145c60680 body=109 status=ok
// SIG undefined FUN_145c60680(void)

undefined8 FUN_145c60680(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0;
  FUN_14009d848(&local_28);
  FUN_1448b6402(&DAT_14ca965b0,param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c606ee FUN_145c606ee body=146 status=ok
// SIG undefined FUN_145c606ee(void)

void FUN_145c606ee(void)

{
  undefined8 uVar1;
  undefined1 auStack_398 [32];
  undefined1 local_378 [872];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_398;
  FUN_145c60944(local_378);
  uVar1 = FUN_140755bfc();
  if (DAT_14cb055b8 == (void *)0x0) {
    DAT_14cb055b8 = (void *)FUN_14001cc68(0x360,0x10);
  }
  memcpy(DAT_14cb055b8,local_378,0x360);
  FUN_1447fd100(&DAT_14cb05598,uVar1);
  if ((local_10 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c60782 FUN_145c60782 body=232 status=ok
// SIG undefined FUN_145c60782(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c60782(void)

{
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca44430);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca44430,4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca44458);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca44458,4000);
  _DAT_14ca44480 = 0;
  uRam000000014ca44488 = 0;
  _DAT_14ca44490 = 2;
  _DAT_14ca444c0 = 0;
  _DAT_14ca444c8 = 0;
  _DAT_14ca44494 = 0;
  _DAT_14ca44498 = 0;
  uRam000000014ca4449c = 0;
  _DAT_14ca444a0 = 0;
  uRam000000014ca444a4 = 0;
  uRam000000014ca444a8 = 0;
  _DAT_14ca444cc = 0xffffffff00000080;
  _DAT_14ca444d4 = 0;
  _DAT_14ca444e0 = 0;
  _DAT_14ca444e8 = 0;
  local_38 = &DAT_14ca44430;
  FUN_145c6086c(local_30);
  _DAT_14ca44498 = local_30._0_4_;
  uRam000000014ca4449c = local_30._4_4_;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6086c FUN_145c6086c body=215 status=ok
// SIG undefined FUN_145c6086c(void)

undefined8 FUN_145c6086c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14a2e9780;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14a2e6900;
  local_30[3] = *param_2;
  FUN_1415081ea(&DAT_14c867c10,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c60944 FUN_145c60944 body=454 status=ok
// SIG undefined FUN_145c60944(void)

void * FUN_145c60944(void *param_1)

{
  void *_Src;
  undefined1 auStack_518 [32];
  undefined1 local_4f8 [4];
  undefined8 local_4f4;
  undefined4 local_4ec;
  undefined4 local_4dc;
  undefined4 local_38c;
  undefined4 local_36c;
  undefined4 local_35c;
  undefined4 local_34c;
  undefined4 local_33c;
  undefined4 local_31c;
  undefined4 local_30c;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2dc;
  undefined8 local_2cc;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_278 [224];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined8 local_5c;
  undefined2 local_54;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_518;
  memset(local_4f8,0,0x4d0);
  FUN_144a8b74e(local_4f8);
  local_60 = local_60 & 0xfffff800;
  local_36c = 0;
  local_35c = 0;
  local_2c0 = 0xffffff00ffffff00;
  local_33c = 0;
  local_34c = 0xffffffff;
  local_4ec = 0xffffffff;
  local_4dc = 0xffffffff;
  local_31c = 0xffffffff;
  local_30c = 0xffffffff;
  local_2b8 = 0xffffffff00ffffff;
  local_290 = 0xffffffff;
  local_4f4 = 0xffffffff;
  local_2dc = 0xffffffff;
  local_2cc = 0;
  local_298 = 0;
  memset(local_278,0,0x90);
  local_5c = 0;
  local_54 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_64 = 0xfc0701;
  local_198 = 0x3ff0000000000000;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0x3ff0000000000000;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0x3ff0000000000000;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0x3ff0000000000000;
  local_38c = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  _Src = (void *)FUN_144788782(local_4f8);
  memcpy(param_1,_Src,0x360);
  if ((local_28 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c60b16 FUN_145c60b16 body=205 status=ok
// SIG undefined FUN_145c60b16(void)

undefined8 * FUN_145c60b16(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_145c60be4();
  *param_1 = &PTR_FUN_14a3b78f0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa5f38) {
    FUN_144b3d300(&DAT_14caa5f38);
    if (DAT_14caa5f38 == -1) {
      FUN_141508b7c();
      atexit((_func_5014 *)&LAB_14324f55a);
      _Init_thread_footer(&DAT_14caa5f38);
    }
  }
  iVar2 = *(int *)(param_1 + 0x17);
  *(uint *)(param_1 + 0x17) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xbc) < iVar2 + 1U) {
    FUN_145c60c2a(param_1 + 0x16,iVar2);
  }
  lVar3 = param_1[0x16];
  lVar4 = (longlong)iVar2 * 0x38;
  *(undefined8 *)(lVar3 + lVar4) = DAT_14caa5f30;
  puVar1 = (undefined8 *)(lVar3 + 8 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x18 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 145c60be4 FUN_145c60be4 body=69 status=ok
// SIG undefined FUN_145c60be4(void)

undefined8 * FUN_145c60be4(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65a810;
  return param_1;
}



// FUNCTION 145c60c2a FUN_145c60c2a body=143 status=ok
// SIG undefined FUN_145c60c2a(void)

void FUN_145c60c2a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
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



// FUNCTION 145c60cbe FUN_145c60cbe body=100 status=ok
// SIG undefined FUN_145c60cbe(void)

void FUN_145c60cbe(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  puVar1[0x10] = 0;
  *puVar1 = &PTR_FUN_14a5966c0;
  puVar1[5] = &PTR_LAB_14a596970;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return;
}



// FUNCTION 145c60d2e FUN_145c60d2e body=94 status=ok
// SIG undefined FUN_145c60d2e(void)

undefined8 * FUN_145c60d2e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a64d690;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c60d98 FUN_145c60d98 body=94 status=ok
// SIG undefined FUN_145c60d98(void)

undefined8 * FUN_145c60d98(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a651c60;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c60e02 FUN_145c60e02 body=94 status=ok
// SIG undefined FUN_145c60e02(void)

undefined8 * FUN_145c60e02(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65b5c0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c60e6c FUN_145c60e6c body=94 status=ok
// SIG undefined FUN_145c60e6c(void)

undefined8 * FUN_145c60e6c(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65b9c0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c60ed6 FUN_145c60ed6 body=94 status=ok
// SIG undefined FUN_145c60ed6(void)

undefined8 * FUN_145c60ed6(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65bda0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c60f40 FUN_145c60f40 body=94 status=ok
// SIG undefined FUN_145c60f40(void)

undefined8 * FUN_145c60f40(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a65db20;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}



// FUNCTION 145c60faa FUN_145c60faa body=94 status=ok
// SIG undefined FUN_145c60faa(void)

undefined8 * FUN_145c60faa(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a67fdd0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c61014 FUN_145c61014 body=94 status=ok
// SIG undefined FUN_145c61014(void)

undefined8 * FUN_145c61014(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a67be90;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c6107e FUN_145c6107e body=94 status=ok
// SIG undefined FUN_145c6107e(void)

undefined8 * FUN_145c6107e(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a67db50;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c610e8 FUN_145c610e8 body=94 status=ok
// SIG undefined FUN_145c610e8(void)

undefined8 * FUN_145c610e8(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a67de30;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c61152 FUN_145c61152 body=94 status=ok
// SIG undefined FUN_145c61152(void)

undefined8 * FUN_145c61152(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a67e110;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c611bc FUN_145c611bc body=94 status=ok
// SIG undefined FUN_145c611bc(void)

undefined8 * FUN_145c611bc(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a691640;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c61226 FUN_145c61226 body=94 status=ok
// SIG undefined FUN_145c61226(void)

undefined8 * FUN_145c61226(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6abc90;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c61290 FUN_145c61290 body=94 status=ok
// SIG undefined FUN_145c61290(void)

undefined8 * FUN_145c61290(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6a8110;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return param_1;
}



// FUNCTION 145c612ee FUN_145c612ee body=40 status=ok
// SIG undefined FUN_145c612ee(void)

undefined8 FUN_145c612ee(undefined8 param_1,int param_2)

{
  FUN_145c61316();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c61316 FUN_145c61316 body=65 status=ok
// SIG undefined FUN_145c61316(void)

void FUN_145c61316(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6a9810;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140bc97f4(param_1);
  return;
}



// FUNCTION 145c61357 FUN_145c61357 body=35 status=ok
// SIG undefined FUN_145c61357(void)

void FUN_145c61357(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c6137a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a74f770;
  return;
}



// FUNCTION 145c6137a FUN_145c6137a body=70 status=ok
// SIG undefined FUN_145c6137a(void)

undefined8 * FUN_145c6137a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a758a80;
  param_1[5] = 0;
  param_1[6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  *(undefined1 *)(param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 145c613c0 FUN_145c613c0 body=100 status=ok
// SIG undefined FUN_145c613c0(void)

undefined8 * FUN_145c613c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a80bda0;
  param_1[0x19] = &PTR_LAB_14a80c180;
  param_1[0x1a] = &PTR_LAB_14a80c1c0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_140216160(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c61424 thunk_FUN_140216160 body=5 status=ok
// SIG undefined thunk_FUN_140216160(void)

void thunk_FUN_140216160(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aad1940;
  param_1[0x19] = &PTR_FUN_14aad1ce0;
  param_1[0x1a] = &PTR_FUN_14aad1d20;
  puVar2 = (undefined8 *)param_1[0x25];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[0x26];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1402161e2(param_1);
  return;
}



// FUNCTION 145c6142a FUN_145c6142a body=40 status=ok
// SIG undefined FUN_145c6142a(void)

undefined8 FUN_145c6142a(undefined8 param_1,int param_2)

{
  FUN_145c61452();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c61452 FUN_145c61452 body=65 status=ok
// SIG undefined FUN_145c61452(void)

void FUN_145c61452(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8c0030;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_145a2b536(param_1);
  return;
}



// FUNCTION 145c61494 FUN_145c61494 body=40 status=ok
// SIG undefined FUN_145c61494(void)

undefined8 FUN_145c61494(undefined8 param_1,int param_2)

{
  FUN_145c614bc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c614bc FUN_145c614bc body=170 status=ok
// SIG undefined FUN_145c614bc(void)

void FUN_145c614bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a8cb710;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145c61572 FUN_145c61572 body=94 status=ok
// SIG undefined FUN_145c61572(void)

undefined8 * FUN_145c61572(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ab37550;
  param_1[5] = 0;
  FUN_140ddf4ee(param_1 + 6);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  return param_1;
}



// FUNCTION 145c615d0 FUN_145c615d0 body=52 status=ok
// SIG undefined FUN_145c615d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c615d0(void)

{
  FUN_145c61604();
  _DAT_14cb293f8 = 0;
  if (DAT_14cb293f0 != 0) {
    FUN_1400020a8();
  }
  FUN_1410baed6(&DAT_14cb293b0);
  return;
}



// FUNCTION 145c61604 FUN_145c61604 body=54 status=ok
// SIG undefined FUN_145c61604(void)

void FUN_145c61604(void)

{
  FUN_145c6163a();
  if (DAT_14cb29420 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb29400 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c6163a FUN_145c6163a body=104 status=ok
// SIG undefined FUN_145c6163a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145c6163a(void)

{
  _DAT_14cb29408 = 0;
  if (DAT_14cb2940c != 0) {
    FUN_1446f4a44(&DAT_14cb29400,0);
  }
  _DAT_14cb29430 = 0xffffffff;
  _DAT_14cb29428 = 0;
  if (DAT_14cb2942c < 0x81) {
    return;
  }
  DAT_14cb2942c = 0x80;
  FUN_1446efbd8(&DAT_14cb29410,0);
  return;
}



// FUNCTION 145c616ae FUN_145c616ae body=94 status=ok
// SIG undefined FUN_145c616ae(void)

undefined8 * FUN_145c616ae(undefined8 *param_1)

{
  FUN_140312256();
  *param_1 = &PTR_FUN_14b445cd0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return param_1;
}



// FUNCTION 145c61718 FUN_145c61718 body=94 status=ok
// SIG undefined FUN_145c61718(void)

undefined8 * FUN_145c61718(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = IModuleInterface::vftable;
  FUN_1409e1656(puVar1 + 1);
  *puVar1 = &PTR_FUN_14b5a8bf0;
  puVar1[1] = &PTR_FUN_14b5a8c30;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return puVar1;
}



// FUNCTION 145c61776 FUN_145c61776 body=46 status=ok
// SIG undefined FUN_145c61776(void)

void FUN_145c61776(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145c617a4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b763eb0;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 145c617a4 FUN_145c617a4 body=59 status=ok
// SIG undefined FUN_145c617a4(void)

undefined8 * FUN_145c617a4(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14b178ec0;
  param_1[5] = 0;
  param_1[6] = 0;
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
  return param_1;
}



// FUNCTION 145c617ea FUN_145c617ea body=198 status=ok
// SIG undefined FUN_145c617ea(void)

undefined8 * FUN_145c617ea(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined8 local_40 [3];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b782660;
  FUN_14480757c(local_40,&DAT_14cbcb558);
  FUN_1404e49fa(param_1 + 5,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbcb570);
  FUN_1446ddc76(local_40,"inputprefs",1);
  param_1[0x10] = local_40[0];
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c618b2 FUN_145c618b2 body=38 status=ok
// SIG undefined FUN_145c618b2(void)

undefined8 FUN_145c618b2(undefined8 param_1,int param_2)

{
  FUN_145c618d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c618d8 FUN_145c618d8 body=67 status=ok
// SIG undefined FUN_145c618d8(void)

void FUN_145c618d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8cbf80;
  if ((longlong *)param_1[0x18] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x18] + 0x10))();
  }
  if ((longlong *)param_1[0x16] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x16] + 0x10))();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145c6191c FUN_145c6191c body=9 status=ok
// SIG undefined FUN_145c6191c(void)

void FUN_145c6191c(longlong param_1)

{
  FUN_145c61926(param_1 + 0x10);
  return;
}



// FUNCTION 145c61926 FUN_145c61926 body=138 status=ok
// SIG undefined FUN_145c61926(void)

void FUN_145c61926(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b97db70;
  param_1[0x15] = &PTR_FUN_14b97dba0;
  FUN_145c619b0(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bccca(param_1 + 0x19);
  FUN_140af926c(param_1 + 0x15);
  FUN_145c619f2(param_1);
  return;
}



// FUNCTION 145c619b0 FUN_145c619b0 body=65 status=ok
// SIG undefined FUN_145c619b0(void)

void FUN_145c619b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-7] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145c619f2 FUN_145c619f2 body=153 status=ok
// SIG undefined FUN_145c619f2(void)

void FUN_145c619f2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b41dfb0;
  plVar2 = (longlong *)param_1[0x13];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[0x11];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_145c61a8c(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145c61a87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145c61a8c FUN_145c61a8c body=55 status=ok
// SIG undefined FUN_145c61a8c(void)

void FUN_145c61a8c(longlong *param_1)

{
  FUN_1410afdaa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145c61acc FUN_145c61acc body=97 status=ok
// SIG undefined FUN_145c61acc(void)

undefined8 * FUN_145c61acc(undefined8 *param_1)

{
  FUN_14597f288();
  *param_1 = &PTR_FUN_14bc43e00;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_14020fad6(param_1 + 0x24,L"InnerConeAngle");
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_14020fad6(param_1 + 0x26,L"OuterConeAngle");
  return param_1;
}



// FUNCTION 145c61b36 FUN_145c61b36 body=97 status=ok
// SIG undefined FUN_145c61b36(void)

undefined8 * FUN_145c61b36(undefined8 *param_1)

{
  FUN_14597f2ea();
  *param_1 = &PTR_FUN_14bc44590;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_14020fad6(param_1 + 0x20,L"SourceWidth");
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_14020fad6(param_1 + 0x22,L"SourceHeight");
  return param_1;
}



// FUNCTION 145c61b98 FUN_145c61b98 body=40 status=ok
// SIG undefined FUN_145c61b98(void)

undefined8 FUN_145c61b98(undefined8 param_1,int param_2)

{
  FUN_145c61bc0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c61bc0 FUN_145c61bc0 body=65 status=ok
// SIG undefined FUN_145c61bc0(void)

void FUN_145c61bc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc44590;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_14592ebfc(param_1);
  return;
}



// FUNCTION 145c61c0a FUN_145c61c0a body=97 status=ok
// SIG undefined FUN_145c61c0a(void)

undefined8 * FUN_145c61c0a(undefined8 *param_1)

{
  FUN_1457edf72();
  *param_1 = 0x14bc6ea50;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_14020fad6(param_1 + 0x3a,L"ParentLevel");
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  FUN_14020fad6(param_1 + 0x3c,L"LevelReference");
  return param_1;
}



// FUNCTION 145c61c74 FUN_145c61c74 body=97 status=ok
// SIG undefined FUN_145c61c74(void)

undefined8 * FUN_145c61c74(undefined8 *param_1)

{
  FUN_1457ede12();
  *param_1 = &PTR_FUN_14bc71e40;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  FUN_14020fad6(param_1 + 0x4e,L"SourceWidth");
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  FUN_14020fad6(param_1 + 0x50,L"SourceHeight");
  return param_1;
}



// FUNCTION 145c61cde FUN_145c61cde body=97 status=ok
// SIG undefined FUN_145c61cde(void)

undefined8 * FUN_145c61cde(undefined8 *param_1)

{
  FUN_1457eddb0();
  *param_1 = &PTR_FUN_14bc72e80;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  FUN_14020fad6(param_1 + 0x52,L"InnerConeAngle");
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  FUN_14020fad6(param_1 + 0x54,L"OuterConeAngle");
  return param_1;
}



// FUNCTION 145c61d40 FUN_145c61d40 body=40 status=ok
// SIG undefined FUN_145c61d40(void)

undefined8 FUN_145c61d40(undefined8 param_1,int param_2)

{
  FUN_145c61d68();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c61d68 FUN_145c61d68 body=65 status=ok
// SIG undefined FUN_145c61d68(void)

void FUN_145c61d68(undefined8 *param_1)

{
  *param_1 = 0x14bc6ea50;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_1457df34e(param_1);
  return;
}



// FUNCTION 145c61daa FUN_145c61daa body=40 status=ok
// SIG undefined FUN_145c61daa(void)

undefined8 FUN_145c61daa(undefined8 param_1,int param_2)

{
  FUN_145c61dd2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c61dd2 FUN_145c61dd2 body=65 status=ok
// SIG undefined FUN_145c61dd2(void)

void FUN_145c61dd2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc71e40;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  FUN_1457df264(param_1);
  return;
}



// FUNCTION 145c61e1c FUN_145c61e1c body=97 status=ok
// SIG undefined FUN_145c61e1c(void)

undefined8 * FUN_145c61e1c(undefined8 *param_1)

{
  FUN_145a9b650();
  *param_1 = &PTR_FUN_14bc778a0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  FUN_14020fad6(param_1 + 0x91,L"Brightness");
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  FUN_14020fad6(param_1 + 0x93,L"TextureMultiplier");
  return param_1;
}



// FUNCTION 145c61e7e FUN_145c61e7e body=40 status=ok
// SIG undefined FUN_145c61e7e(void)

undefined8 FUN_145c61e7e(undefined8 param_1,int param_2)

{
  FUN_145c61ea6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c61ea6 FUN_145c61ea6 body=65 status=ok
// SIG undefined FUN_145c61ea6(void)

void FUN_145c61ea6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc73a20;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed55c(param_1);
  return;
}



// FUNCTION 145c61ef2 FUN_145c61ef2 body=101 status=ok
// SIG undefined FUN_145c61ef2(void)

undefined8 * FUN_145c61ef2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_140d2f8ee();
  *param_1 = &PTR_FUN_14bd850a0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 4;
  FUN_145c61f58(param_1 + 0x15,4,0);
  puVar1 = (undefined8 *)param_1[0x15];
  *puVar1 = 0x3f8000003d4ccccd;
  puVar1[1] = 0x3f0000003e800000;
  puVar1[2] = 0x3e4ccccd3f000000;
  puVar1[3] = 0x3dcccccd3f800000;
  return param_1;
}



// FUNCTION 145c61f58 FUN_145c61f58 body=98 status=ok
// SIG undefined FUN_145c61f58(void)

void FUN_145c61f58(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145c61fc2 FUN_145c61fc2 body=97 status=ok
// SIG undefined FUN_145c61fc2(void)

undefined8 * FUN_145c61fc2(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1400841f8();
  *(undefined1 *)(param_1 + 5) = 1;
  *param_1 = &PTR_FUN_14bedfd70;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_1446f8bcc(param_1 + 0x10,0);
  lVar1 = FUN_145a9830c();
  if (*(longlong *)(lVar1 + 0x110) == 0) {
    FUN_140aa6c08(lVar1);
  }
  return param_1;
}



// FUNCTION 145c62024 FUN_145c62024 body=156 status=ok
// SIG undefined FUN_145c62024(void)

bool FUN_145c62024(longlong param_1,undefined4 param_2)

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
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c620ce FUN_145c620ce body=148 status=ok
// SIG undefined FUN_145c620ce(void)

void FUN_145c620ce(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_145c62162();
  if (lVar2 != 0) {
    lVar2 = FUN_145c6216a();
    if (*(longlong *)(param_1 + 0x28) == 0) {
      uVar3 = FUN_145c272be();
      uVar3 = FUN_14477b664(uVar3);
      *(undefined8 *)(param_1 + 0x28) = uVar3;
    }
    lVar4 = *(longlong *)(lVar2 + 0x28);
    if (lVar4 == 0) {
      lVar4 = FUN_145a2ed00();
    }
    lVar1 = *(longlong *)(lVar2 + 0x20);
    lVar4 = FUN_14477b664(lVar4);
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    if (*(longlong *)(param_1 + 0x20) != lVar1) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    *(longlong *)(param_1 + 0x20) = lVar1;
    if (*(longlong *)(param_1 + 0x28) != lVar4) {
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    uVar5 = FUN_14477b664(lVar4);
    uVar5 = FUN_14477b664(uVar5);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    *(undefined8 *)(param_1 + 0x30) = uVar3;
  }
  return;
}



// FUNCTION 145c62162 FUN_145c62162 body=8 status=ok
// SIG undefined FUN_145c62162(void)

undefined8 FUN_145c62162(void)

{
  return DAT_14cb8d0a8;
}



// FUNCTION 145c6216a FUN_145c6216a body=316 status=ok
// SIG undefined FUN_145c6216a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_145c6216a(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb80e20 == (longlong *)0x0) {
    _DAT_14cb80e60 = 0;
    _DAT_14cb80e68 = 0;
    _DAT_14cb80e50 = 0;
    _DAT_14cb80e58 = 0;
    _DAT_14cb80e40 = 0;
    _DAT_14cb80e48 = 0;
    _DAT_14cb80e30 = 0;
    uRam000000014cb80e38 = 0;
    _DAT_14cb80e70 = 0;
    DAT_14cb80e28 = &PTR_FUN_14a171dc0;
    FUN_144a319ae(&DAT_14cb80e30);
    _DAT_14cb80e40 = CONCAT44(DAT_14cb80e40_4,0xffffffff);
    DAT_14cb80e28 = &PTR_FUN_14b27fc60;
    _DAT_14cb80e48 = 0;
    _DAT_14cb80e50 = 0;
    _DAT_14cb80e58 = 0;
    _DAT_14cb80e60 = 0;
    _DAT_14cb80e68 = 0;
    _DAT_14cb80e70 = 0;
    DAT_14cb80e20 = (longlong *)&DAT_14cb80e28;
  }
  plVar1 = DAT_14cb80e20;
  lVar3 = FUN_144a7b9b0(DAT_14cb80e20 + 1);
  if (lVar3 == 0) {
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_145c6226c;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    FUN_1446ddda2(&local_58,"def_globals_gbx_stand_in",0);
    FUN_140024ada(&local_58,plVar1);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar2 = FUN_1449e3c20(plVar1);
    if (cVar2 == '\0') goto LAB_145c6226c;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_145c6226c:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 145c622a8 FUN_145c622a8 body=26 status=ok
// SIG undefined FUN_145c622a8(void)

void FUN_145c622a8(undefined8 param_1)

{
  FUN_144a63f30();
  FUN_141509056(param_1);
  return;
}



// FUNCTION 145c622c2 FUN_145c622c2 body=8 status=ok
// SIG undefined FUN_145c622c2(void)

undefined8 * FUN_145c622c2(void)

{
  return &DAT_14cb90c70;
}



// FUNCTION 145c622ca FUN_145c622ca body=473 status=ok
// SIG undefined FUN_145c622ca(void)

undefined1 * FUN_145c622ca(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x18,iVar1,0);
    memcpy(*(void **)(param_1 + 0x18),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  pvVar2 = *(void **)(param_2 + 0x28);
  *(int *)(param_1 + 0x30) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x28,iVar1,0);
    memcpy(*(void **)(param_1 + 0x28),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  pvVar2 = *(void **)(param_2 + 0x38);
  *(int *)(param_1 + 0x40) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x38,iVar1,0);
    memcpy(*(void **)(param_1 + 0x38),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  pvVar2 = *(void **)(param_2 + 0x48);
  *(int *)(param_1 + 0x50) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x48,iVar1,0);
    memcpy(*(void **)(param_1 + 0x48),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  pvVar2 = *(void **)(param_2 + 0x58);
  *(int *)(param_1 + 0x60) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x58,iVar1,0);
    memcpy(*(void **)(param_1 + 0x58),pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 145c624a4 FUN_145c624a4 body=143 status=ok
// SIG undefined FUN_145c624a4(void)

void FUN_145c624a4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145c62534 FUN_145c62534 body=692 status=ok
// SIG undefined FUN_145c62534(void)

void FUN_145c62534(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  bool bVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  double *pdVar11;
  longlong lVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined1 auStack_78 [32];
  int local_58;
  undefined4 uStack_54;
  uint *local_48;
  undefined8 uStack_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0xdc) = 1;
  plVar1 = (longlong *)(param_1 + 0x108);
  uVar2 = *(uint *)(param_1 + 0xd0);
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    lVar12 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x148);
    }
    iVar13 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x150) - 1U & uVar2) * 4);
    if (iVar13 != -1) {
      do {
        lVar12 = *plVar1 + (longlong)iVar13 * 0x58;
        if (*(uint *)(*plVar1 + (longlong)iVar13 * 0x58) == uVar2) {
          if (lVar12 != 0) {
            bVar6 = false;
            goto LAB_145c625c7;
          }
          break;
        }
        iVar13 = *(int *)(lVar12 + 0x50);
      } while (iVar13 != -1);
    }
  }
  local_48 = &local_34;
  local_34 = uVar2;
  FUN_14887ee7e(plVar1,&local_58);
  lVar12 = *plVar1 + (longlong)local_58 * 0x58;
  bVar6 = true;
LAB_145c625c7:
  lVar9 = FUN_14479d2ce(lVar12 + 0x10);
  if (lVar9 == 0) {
    cVar8 = FUN_144729dda(param_1 + 0xe0);
    if (cVar8 != '\0') {
      uVar10 = FUN_14479d2ce(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      FUN_14485c47a(lVar12 + 0x10,uVar10);
    }
  }
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  if (bVar6) {
    *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(param_1 + 0x100);
    uVar10 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(lVar12 + 0x40) = uVar10;
    uVar7 = DAT_14c8464e8._4_4_;
    uVar15 = (undefined4)DAT_14c8464e8;
    uVar14 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0xf0) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(param_1 + 0xf4) = uVar14;
    *(undefined4 *)(param_1 + 0xf8) = uVar15;
    *(undefined4 *)(param_1 + 0xfc) = uVar7;
    *(undefined8 *)(param_1 + 0x100) = DAT_14c8464f0;
  }
  lVar9 = FUN_14479d2ce(lVar12 + 0x30);
  if (lVar9 == 0) {
    dVar16 = *(double *)(lVar12 + 0x38);
  }
  else {
    lVar9 = *(longlong *)(lVar9 + 0x1c8);
    if (lVar9 == 0) {
      pdVar11 = (double *)&DAT_14c8464e0;
      uVar14 = (undefined4)DAT_14c8464f0;
      uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar14 = (undefined4)*(undefined8 *)(lVar9 + 0x270);
      uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x270) >> 0x20);
      pdVar11 = (double *)(lVar9 + 0x260);
    }
    dVar16 = *pdVar11;
    dVar5 = pdVar11[1];
    *(double *)(lVar12 + 0x38) = dVar16;
    *(double *)(lVar12 + 0x40) = dVar5;
    *(ulonglong *)(lVar12 + 0x48) = CONCAT44(uVar15,uVar14);
  }
  if ((dVar16 == 0.0) && (!NAN(dVar16))) {
    if ((*(double *)(lVar12 + 0x40) == 0.0) && (!NAN(*(double *)(lVar12 + 0x40)))) {
      if ((*(double *)(lVar12 + 0x48) == 0.0) && (!NAN(*(double *)(lVar12 + 0x48))))
      goto LAB_145c6264b;
    }
  }
  uStack_40 = CONCAT44(uStack_40._4_4_,1);
  FUN_1403e3958(&local_48,0);
  *(undefined8 *)(local_48 + 4) = *(undefined8 *)(lVar12 + 0x48);
  uVar2 = *(uint *)(lVar12 + 0x3c);
  uVar3 = *(uint *)(lVar12 + 0x40);
  uVar4 = *(uint *)(lVar12 + 0x44);
  *local_48 = *(uint *)(lVar12 + 0x38);
  local_48[1] = uVar2;
  local_48[2] = uVar3;
  local_48[3] = uVar4;
LAB_145c6264b:
  FUN_145c62b0a(param_1,&local_58);
  uVar10 = FUN_145c62938(&local_58,&local_48);
  FUN_145c627ea(lVar12 + 8,uVar10);
  if (CONCAT44(uStack_54,local_58) != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c627ea FUN_145c627ea body=174 status=ok
// SIG undefined FUN_145c627ea(void)

void FUN_145c627ea(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14485c47a(param_1 + 8);
  lVar1 = FUN_145c6289a(param_1);
  if (lVar1 != 0) {
    local_38 = *(undefined8 *)(lVar1 + 0x148);
    uVar2 = FUN_14477b664(*(undefined8 *)(lVar1 + 0x150));
    local_30 = FUN_14477b664(uVar2);
    local_28 = *(undefined8 *)(lVar1 + 0x158);
    FUN_140e7795e(param_1 + 0x10,&local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c6289a FUN_145c6289a body=74 status=ok
// SIG undefined FUN_145c6289a(void)

undefined8 FUN_145c6289a(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_145c628e4();
  plVar2 = (longlong *)FUN_14017698e(uVar1);
  if (plVar2 == (longlong *)0x0) {
    uVar1 = FUN_14479d2ce(param_1 + 8);
    plVar2 = (longlong *)FUN_14017698e(uVar1);
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145c628bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  return uVar1;
}



// FUNCTION 145c628e4 FUN_145c628e4 body=83 status=ok
// SIG undefined FUN_145c628e4(void)

undefined8 FUN_145c628e4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x3e0);
    lVar2 = FUN_1449f3324();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = *(undefined8 *)(lVar1 + 0xa08);
    }
  }
  return uVar3;
}



// FUNCTION 145c62938 FUN_145c62938 body=466 status=ok
// SIG undefined FUN_145c62938(void)

longlong * FUN_145c62938(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  double *pdVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  
  lVar10 = (longlong)(int)param_1[1];
  if (lVar10 == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = (longlong *)*param_1;
    if ((longlong)(int)param_2[1] != 0) {
      lVar15 = *param_2;
      fVar17 = 0.0;
      plVar12 = (longlong *)0x0;
      plVar13 = plVar11;
      do {
        plVar2 = (longlong *)*plVar13;
        if ((plVar2 != (longlong *)0x0) && (plVar2[0x7c] != 0)) {
          lVar14 = *(longlong *)(plVar2[0x7c] + 0x1c8);
          pdVar16 = (double *)&DAT_14c8464e0;
          dVar18 = DAT_14c8464f0;
          if (lVar14 != 0) {
            dVar18 = *(double *)(lVar14 + 0x270);
            pdVar16 = (double *)(lVar14 + 0x260);
          }
          lVar14 = 0;
          do {
            dVar20 = *(double *)(lVar15 + 0x10 + lVar14) - dVar18;
            dVar3 = *(double *)(lVar15 + lVar14) - *pdVar16;
            dVar4 = *(double *)(lVar15 + 8 + lVar14) - pdVar16[1];
            fVar19 = (float)(dVar20 * dVar20 + dVar3 * dVar3 + dVar4 * dVar4);
            plVar5 = plVar2;
            if (fVar17 <= fVar19 && plVar12 != (longlong *)0x0) {
              fVar19 = fVar17;
              plVar5 = plVar12;
            }
            plVar12 = plVar5;
            fVar17 = fVar19;
            lVar14 = lVar14 + 0x18;
          } while ((longlong)(int)param_2[1] * 0x18 != lVar14);
        }
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar11 + lVar10);
      if (plVar12 != (longlong *)0x0) {
        return plVar12;
      }
    }
    lVar15 = 0;
    do {
      plVar12 = *(longlong **)((longlong)plVar11 + lVar15);
      if ((plVar12 != (longlong *)0x0) &&
         (cVar6 = (**(code **)(*plVar12 + 0x6c8))(plVar12), cVar6 != '\0')) {
        return plVar12;
      }
      lVar15 = lVar15 + 8;
    } while (lVar10 * 8 != lVar15);
    iVar1 = (int)param_1[1];
    if (iVar1 < 1) {
      lVar10 = 0;
    }
    else {
      uVar7 = rand();
      iVar8 = (int)((float)iVar1 * ((float)(uVar7 & 0x7fff) / 32767.0));
      iVar9 = iVar1 + -1;
      if (iVar8 < iVar1 + -1) {
        iVar9 = iVar8;
      }
      lVar10 = (longlong)iVar9;
    }
    plVar11 = *(longlong **)(*param_1 + lVar10 * 8);
  }
  return plVar11;
}



// FUNCTION 145c62b0a FUN_145c62b0a body=473 status=ok
// SIG undefined FUN_145c62b0a(void)

undefined8 * FUN_145c62b0a(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  void *pvVar10;
  int iVar11;
  void *_Src;
  void **ppvVar12;
  undefined1 auStack_88 [32];
  longlong *local_68;
  uint local_60;
  void *local_58;
  undefined8 uStack_50;
  void *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  uVar6 = FUN_14479d2ce(param_1 + 0x1a8);
  FUN_144a7d35a(uVar6,&local_68);
  if ((int)local_60 < 0) {
    _Src = (void *)0x0;
    pvVar10 = (void *)0x0;
    iVar11 = 0;
    iVar5 = 0;
  }
  else {
    do {
      if ((int)local_68[1] <= (int)local_60) break;
      plVar7 = (longlong *)FUN_14479d2ce((ulonglong)local_60 * 8 + *local_68);
      if (plVar7 == (longlong *)0x0) {
LAB_145c62bcc:
        uVar3 = uStack_40;
        iVar5 = (int)uStack_40;
        uVar1 = (int)uStack_40 + 1;
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar1);
        ppvVar12 = &local_48;
        if (uStack_40._4_4_ < uVar1) {
          FUN_140cba038(&local_48,uVar3 & 0xffffffff);
        }
      }
      else {
        uVar6 = FUN_144a7b040();
        plVar8 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
        if (plVar8 == (longlong *)0x0) goto LAB_145c62bcc;
        uVar6 = FUN_144a7b040();
        plVar9 = (longlong *)FUN_144718840(plVar8,uVar6);
        if (((plVar8 == plVar9) || (plVar9 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar9 + 0x40))(plVar9), uVar3 = uStack_50, cVar4 == '\0'))
        goto LAB_145c62bcc;
        iVar5 = (int)uStack_50;
        uVar1 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar1);
        if (uStack_50._4_4_ < uVar1) {
          FUN_140cba038(&local_58,uVar3 & 0xffffffff);
          ppvVar12 = &local_58;
        }
        else {
          ppvVar12 = &local_58;
        }
      }
      *(longlong **)((longlong)*ppvVar12 + (longlong)iVar5 * 8) = plVar7;
      uVar1 = local_60 + 1;
      bVar2 = -2 < (int)local_60;
      local_60 = uVar1;
    } while (bVar2);
    pvVar10 = local_58;
    _Src = local_48;
    iVar5 = (int)uStack_40;
    iVar11 = (int)uStack_50;
  }
  *param_2 = 0;
  if (iVar5 != 0) {
    iVar11 = iVar5;
  }
  *(int *)(param_2 + 1) = iVar11;
  if (iVar11 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    if (iVar5 == 0) {
      _Src = pvVar10;
    }
    FUN_145c62ce4(param_2,iVar11);
    memcpy((void *)*param_2,_Src,(longlong)iVar11 << 3);
    pvVar10 = local_58;
  }
  if (pvVar10 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145c62ce4 FUN_145c62ce4 body=89 status=ok
// SIG undefined FUN_145c62ce4(void)

void FUN_145c62ce4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 145c62d3e FUN_145c62d3e body=40 status=ok
// SIG undefined FUN_145c62d3e(void)

undefined8 FUN_145c62d3e(undefined8 param_1,int param_2)

{
  FUN_145c62d66();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c62d66 FUN_145c62d66 body=118 status=ok
// SIG undefined FUN_145c62d66(void)

void FUN_145c62d66(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bdbbd70;
  param_1[5] = &PTR_FUN_14bdbc110;
  param_1[0x13] = &PTR_FUN_14bdbc130;
  param_1[0x17] = &PTR_FUN_14bdbc160;
  puVar1 = (undefined8 *)param_1[0x22];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x21];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_145c62ddc(param_1);
  return;
}



// FUNCTION 145c62ddc FUN_145c62ddc body=158 status=ok
// SIG undefined FUN_145c62ddc(void)

void FUN_145c62ddc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bdbd980;
  param_1[5] = &PTR_FUN_14bdbdd20;
  param_1[0x13] = &PTR_FUN_14bdbdd40;
  param_1[0x17] = &PTR_FUN_14bdbdd70;
  plVar3 = (longlong *)param_1[0x1f];
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
  plVar3 = (longlong *)param_1[0x1d];
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
  thunk_FUN_1411412a8(param_1);
  return;
}



// FUNCTION 145c62e7a FUN_145c62e7a body=731 status=ok
// SIG undefined FUN_145c62e7a(void)

void FUN_145c62e7a(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_198 [40];
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined **local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((param_2 != (longlong *)0x0) &&
      (lVar3 = *(longlong *)(param_1 + 0x238), *(char *)(lVar3 + 0x178) == '\x03')) &&
     ((longlong)*(int *)(lVar3 + 0x5530) != 0)) {
    lVar6 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x5528) + 8 + lVar6) != 0) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x5528) + lVar6) != 0)) {
        uVar2 = 0;
        local_168 = 0;
        local_164 = 0;
        local_160 = 0;
        local_158 = 0x3002;
        local_150 = 0;
        local_118 = 0;
        local_110 = 0x200000000;
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        local_f0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_e8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_e0 = DAT_14c8464f0;
        local_c8 = DAT_14c8464f0;
        local_c0 = 0;
        local_b8 = 0x3006;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_90 = (undefined4)DAT_14c8464e0;
        uStack_8c = DAT_14c8464e0._4_4_;
        uStack_88 = (undefined4)DAT_14c8464e8;
        uStack_84 = DAT_14c8464e8._4_4_;
        local_80 = DAT_14c8464f0;
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        local_6c = 0;
        local_d8 = local_f0;
        uStack_d0 = uStack_e8;
        FUN_1405c5fa2();
        local_60 = &DAT_14cb769e8;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = &PTR_FUN_14b0394b0;
        local_48 = 0x1000000;
        lVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
        if (lVar3 != 0) {
          uVar4 = FUN_144a7b040();
          plVar5 = (longlong *)FUN_144718840(lVar3,uVar4);
          if (plVar5 == (longlong *)0x0) {
            uVar2 = 0;
          }
          else {
            uVar2 = (**(code **)(*plVar5 + 0x40))(plVar5);
          }
        }
        lVar6 = 0;
        uVar8 = (**(code **)(*param_2 + 0x140))(param_2,0);
        FUN_14095f044(&local_168,uVar8,uVar2,param_2);
        lVar3 = *(longlong *)(param_1 + 0x238);
        if (*(longlong *)(param_1 + 0x350) != 0) {
          cVar1 = FUN_144729dda(param_1 + 0x348);
          if (((cVar1 != '\0') && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0)) &&
             (lVar6 = (**(code **)(**(longlong **)(param_1 + 0x350) + 8))(), lVar6 != 0)) {
            lVar7 = FUN_144a6c4d8();
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) goto LAB_145c630cb;
          }
          lVar6 = 0;
        }
LAB_145c630cb:
        local_170 = 0;
        FUN_14485c47a(&local_170,lVar6);
        FUN_1415097ba(lVar3 + 0x5528,local_170,&local_168);
        *(byte *)(param_1 + 0x241) = *(byte *)(param_1 + 0x241) | 0x10;
        FUN_14142720e(&local_168);
        break;
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)*(int *)(lVar3 + 0x5530) * 0x10 != lVar6);
  }
  FUN_141509760(param_1);
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145c63162 FUN_145c63162 body=199 status=ok
// SIG undefined FUN_145c63162(void)

undefined8 * FUN_145c63162(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140fabcfe();
  *param_1 = &PTR_FUN_14b38a1a0;
  *(undefined4 *)(param_1 + 0x16) = 0xbf2279c9;
  param_1[0x17] = &DAT_14a60a6d8;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,"parent",0);
  FUN_1404e49fa(param_1 + 0x5f,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(local_58,"GbxGame.MissionTask");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c6322a FUN_145c6322a body=48 status=ok
// SIG undefined FUN_145c6322a(void)

undefined8 * FUN_145c6322a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b407860;
  FUN_145c6325a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145c6325a FUN_145c6325a body=99 status=ok
// SIG undefined FUN_145c6325a(void)

void FUN_145c6325a(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = DAT_14cb7fa38;
  lVar4 = (longlong)DAT_14cb7fa40;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar2 + lVar3);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  DAT_14cb7fa40 = 0;
  if (DAT_14cb7fa44 == 0) {
    return;
  }
  FUN_145c632be();
  return;
}



// FUNCTION 145c632be FUN_145c632be body=64 status=ok
// SIG undefined FUN_145c632be(void)

void FUN_145c632be(void)

{
  if (DAT_14cb7fa44 != 0) {
    DAT_14cb7fa44 = 0;
    FUN_1446f8d3c(&DAT_14cb7fa38,DAT_14cb7fa40,0,8,8);
  }
  return;
}



// FUNCTION 145c632fe FUN_145c632fe body=172 status=ok
// SIG undefined FUN_145c632fe(void)

void FUN_145c632fe(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_144a52528();
  FUN_1446ddc76(&local_20,"TypedElementFramework",1);
  FUN_14493e38c(uVar1,local_20);
  uVar1 = FUN_144a52528();
  FUN_1446ddc76(&local_28,"TypedElementRuntime",1);
  FUN_14493e38c(uVar1,local_28);
  FUN_145c633ab();
  FUN_145c647fd();
  FUN_145c64147();
  FUN_145c63ad5();
  FUN_1447f69b6(&DAT_14cad7d28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c633ab FUN_145c633ab body=568 status=ok
// SIG undefined FUN_145c633ab(void)

void FUN_145c633ab(void)

{
  undefined8 uVar1;
  undefined8 *_Dst;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145c635e4();
  FUN_1401a700c(&local_30,100);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  _Dst = (undefined8 *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_145c639b2(_Dst);
  local_30 = _Dst;
  FUN_145c63660(uVar1,uVar3,&local_30);
  if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,1);
  }
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c63755(uVar2);
  FUN_1401a700c(&local_30,100);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458d3cae();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c637ec(uVar2);
  FUN_1401a700c(&local_30,100);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458d3e86();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c63883(uVar2);
  FUN_1401a700c(&local_30,100);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458f058c();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  uVar2 = FUN_1409ffe1d();
  uVar2 = FUN_145c6391a(uVar2);
  FUN_1401a700c(&local_30,100);
  uVar3 = (ulonglong)local_30 & 0xffffffff;
  local_30 = (undefined8 *)FUN_1458987e8();
  if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_30);
  }
  local_38 = 0;
  FUN_1415098da(uVar1,uVar3,uVar2,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145c635e4 FUN_145c635e4 body=21 status=ok
// SIG undefined FUN_145c635e4(void)

undefined8 FUN_145c635e4(void)

{
  FUN_145c635f9();
  return DAT_14c99f510;
}



// FUNCTION 145c635f9 FUN_145c635f9 body=102 status=ok
// SIG undefined FUN_145c635f9(void)

void FUN_145c635f9(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99f518) {
    FUN_144b3d300(&DAT_14c99f518);
    if (DAT_14c99f518 == -1) {
      DAT_14c99f510 = 0;
      atexit(FUN_142af9037);
      _Init_thread_footer(&DAT_14c99f518);
      return;
    }
  }
  return;
}



// FUNCTION 145c63660 FUN_145c63660 body=245 status=ok
// SIG undefined FUN_145c63660(void)

void FUN_145c63660(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  undefined *unaff_R14;
  ulonglong uVar2;
  
  uVar1 = (**(code **)(*(longlong *)*param_3 + 0x38))();
  if ((char)uVar1 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c99f548) {
      FUN_144b3d300(&DAT_14c99f548);
      if (DAT_14c99f548 == -1) {
        unaff_R14 = &DAT_14c99f520;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c99f520);
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c99f520,4000);
        atexit((_func_5014 *)&LAB_142af9065);
        _Init_thread_footer(&DAT_14c99f548);
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c99f520);
    uVar2 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),DAT_14c75f5c4);
    DAT_14c75f5c4 = DAT_14c75f5c4 + '\x01';
    (**(code **)(*(longlong *)*param_3 + 0x30))((longlong *)*param_3,uVar2 & 0xffffffff);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c99f520);
  }
  else {
    uVar2 = (ulonglong)uVar1;
  }
  *(char *)(*param_3 + 8) = (char)uVar2;
  *(undefined8 *)(*param_3 + 0xc) = param_2;
  FUN_141509868(param_1,param_3);
  return;
}


