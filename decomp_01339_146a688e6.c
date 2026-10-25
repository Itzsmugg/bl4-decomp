// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146a688e6 FUN_146a688e6 body=19 status=ok
// SIG undefined FUN_146a688e6(void)

void FUN_146a688e6(longlong param_1)

{
  FUN_146adc2f4(*(undefined8 *)(*(longlong *)(param_1 + 0x2b8) + 0x1f8));
  return;
}



// FUNCTION 146a688fa FUN_146a688fa body=145 status=ok
// SIG undefined FUN_146a688fa(void)

void FUN_146a688fa(longlong param_1,undefined2 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined2 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  local_38 = *param_2;
  local_30 = 0;
  local_28 = 0;
  FUN_14096c7c0(&local_30,param_2 + 4);
  *(undefined2 *)(lVar1 + 0x2c0) = local_38;
  FUN_14096c7c0(lVar1 + 0x2c8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(param_2 + 4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6898c FUN_146a6898c body=169 status=ok
// SIG undefined FUN_146a6898c(void)

void FUN_146a6898c(longlong param_1,undefined2 *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined2 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  local_40 = *param_2;
  local_38 = 0;
  local_30 = 0;
  FUN_14096c7c0(&local_38,param_2 + 4);
  *(undefined2 *)(lVar1 + 0x2d8) = local_40;
  FUN_14096c7c0(lVar1 + 0x2e0,&local_38);
  FUN_146a207fc(*(undefined8 *)(lVar1 + 0x1e8),lVar1 + 0x2d8);
  FUN_1449db362(&local_38);
  FUN_1449db362(param_2 + 4);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a68a36 FUN_146a68a36 body=40 status=ok
// SIG undefined FUN_146a68a36(void)

void FUN_146a68a36(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  *(undefined1 *)(lVar1 + 0x3dc) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(lVar1 + 0x3d8) = *param_2;
  FUN_140a52b3c(lVar1 + 0x3e0,param_2 + 2);
  return;
}



// FUNCTION 146a68a5e FUN_146a68a5e body=33 status=ok
// SIG undefined FUN_146a68a5e(void)

void FUN_146a68a5e(longlong param_1,undefined2 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  *(undefined2 *)(lVar1 + 0x2f0) = *param_2;
  FUN_14096c7c0(lVar1 + 0x2f8,param_2 + 4);
  return;
}



// FUNCTION 146a68a80 FUN_146a68a80 body=33 status=ok
// SIG undefined FUN_146a68a80(void)

void FUN_146a68a80(longlong param_1,undefined2 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  *(undefined2 *)(lVar1 + 0x308) = *param_2;
  FUN_14096c7c0(lVar1 + 0x310,param_2 + 4);
  return;
}



// FUNCTION 146a68aa2 FUN_146a68aa2 body=33 status=ok
// SIG undefined FUN_146a68aa2(void)

void FUN_146a68aa2(longlong param_1,undefined2 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  *(undefined2 *)(lVar1 + 800) = *param_2;
  FUN_14096c7c0(lVar1 + 0x328,param_2 + 4);
  return;
}



// FUNCTION 146a68ac4 FUN_146a68ac4 body=33 status=ok
// SIG undefined FUN_146a68ac4(void)

void FUN_146a68ac4(longlong param_1,undefined2 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  *(undefined2 *)(lVar1 + 0x338) = *param_2;
  FUN_14096c7c0(lVar1 + 0x340,param_2 + 4);
  return;
}



// FUNCTION 146a68ae6 FUN_146a68ae6 body=33 status=ok
// SIG undefined FUN_146a68ae6(void)

void FUN_146a68ae6(longlong param_1,undefined2 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  *(undefined2 *)(lVar1 + 0x350) = *param_2;
  FUN_14096c7c0(lVar1 + 0x358,param_2 + 4);
  return;
}



// FUNCTION 146a68b08 FUN_146a68b08 body=19 status=ok
// SIG undefined FUN_146a68b08(void)

void FUN_146a68b08(longlong param_1)

{
  FUN_146add9b6(*(undefined8 *)(*(longlong *)(param_1 + 0x2b8) + 0x1f8));
  return;
}



// FUNCTION 146a68b1c FUN_146a68b1c body=54 status=ok
// SIG undefined FUN_146a68b1c(void)

void FUN_146a68b1c(longlong param_1,undefined2 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  *(undefined2 *)(lVar1 + 0x380) = *param_2;
  FUN_14096c7c0(lVar1 + 0x388,param_2 + 4);
  FUN_1449db362(param_2 + 4);
  return;
}



// FUNCTION 146a68b52 FUN_146a68b52 body=145 status=ok
// SIG undefined FUN_146a68b52(void)

void FUN_146a68b52(longlong param_1,undefined2 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined2 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x2b8);
  local_38 = *param_2;
  local_30 = 0;
  local_28 = 0;
  FUN_146a74d60(&local_30,param_2 + 4);
  *(undefined2 *)(lVar1 + 0x478) = local_38;
  FUN_146a74d60(lVar1 + 0x480,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(param_2 + 4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a68be4 FUN_146a68be4 body=19 status=ok
// SIG undefined FUN_146a68be4(void)

void FUN_146a68be4(longlong param_1)

{
  FUN_146addeb4(*(undefined8 *)(*(longlong *)(param_1 + 0x2b8) + 0x1f8));
  return;
}



// FUNCTION 146a68bf8 FUN_146a68bf8 body=461 status=ok
// SIG undefined FUN_146a68bf8(void)

longlong * FUN_146a68bf8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14001cc68(0x78,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_146a68c36:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_146a68c36;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar3;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_146a68dc8(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_146a68d72;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_146a68d72;
LAB_146a68cd5:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_146a68d72;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar6 + 8) = lVar6;
    if (*(longlong **)(lVar6 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_146a68cd5;
      *(longlong **)(lVar6 + 0x10) = plVar7;
    }
  }
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_146a68d72:
  if (!bVar9) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a68dc8 FUN_146a68dc8 body=154 status=ok
// SIG undefined FUN_146a68dc8(void)

undefined8 * FUN_146a68dc8(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28,10);
  *param_1 = &PTR_FUN_149f11520;
  param_1[0xd] = &PTR_FUN_149f11610;
  param_1[0xe] = &PTR_FUN_149f11620;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a68e64 FUN_146a68e64 body=129 status=ok
// SIG undefined FUN_146a68e64(void)

undefined8 * FUN_146a68e64(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
    FUN_146adc578(*(undefined8 *)(*(longlong *)(param_1 + 0x2b8) + 0x1f8),local_28);
    FUN_14023423e(param_2,local_28);
    if (local_28[0] != (longlong *)0x0) {
      (**(code **)(*local_28[0] + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a68ee6 FUN_146a68ee6 body=309 status=ok
// SIG undefined FUN_146a68ee6(void)

void FUN_146a68ee6(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_c8 [40];
  undefined1 local_a0;
  undefined1 local_9f;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong **)(param_1 + 0x2a8) != (longlong *)0x0) {
    puVar1 = &DAT_14c96b1e1;
    if (*(char *)(param_1 + 0x2a0) != '\0') {
      puVar1 = &DAT_14c96b238;
    }
    local_58 = *puVar1;
    local_57 = 1;
    local_50 = 0;
    uStack_48 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x1c0))();
  }
  puVar2 = &DAT_14c96b1e1;
  puVar1 = &DAT_14c96b238;
  if (*(char *)(param_1 + 0x2a0) != '\0') {
    puVar1 = &DAT_14c96b1e1;
  }
  local_70 = *puVar1;
  local_6f = 1;
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x2b8) + 0x1c0))();
  puVar1 = &DAT_14c96b1e1;
  if (*(char *)(param_1 + 0x2a0) != '\0') {
    puVar1 = &DAT_14c96b238;
  }
  local_88 = *puVar1;
  local_87 = 1;
  local_80 = 0;
  uStack_78 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x2c8) + 0x1c0))();
  if (*(char *)(param_1 + 0x2a0) != '\0') {
    puVar2 = &DAT_14c96b238;
  }
  local_a0 = *puVar2;
  local_9f = 1;
  local_98 = 0;
  uStack_90 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x1c0))();
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6901c FUN_146a6901c body=1407 status=ok
// SIG undefined FUN_146a6901c(void)

void FUN_146a6901c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_8e8 [32];
  undefined1 *local_8c8;
  undefined1 local_8b9;
  undefined8 local_8b8;
  longlong *local_8b0;
  undefined1 local_899;
  code *local_898;
  undefined4 local_890;
  undefined4 uStack_88c;
  undefined4 local_880;
  undefined1 local_87c;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined4 local_868;
  undefined4 uStack_864;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined1 local_858;
  undefined8 local_850;
  undefined4 local_848;
  undefined8 local_840;
  longlong *local_838;
  undefined8 local_830;
  longlong *local_828;
  undefined8 local_820;
  longlong *local_818;
  undefined1 local_810 [464];
  undefined8 local_640;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined1 local_448;
  undefined1 local_440 [64];
  undefined4 local_400;
  undefined1 local_3fc;
  undefined1 local_3f8 [88];
  undefined1 local_3a0 [424];
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined1 local_180 [256];
  undefined1 local_80;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_8e8;
  FUN_1413a517a(param_1 + 0x270,param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x288) = *(undefined1 *)(param_2 + 0x1c0);
  *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)(param_2 + 0x1c8);
  FUN_146a74e48(param_1 + 0x298,param_2 + 0x1d0);
  plVar3 = *(longlong **)(param_2 + 0x290);
  plVar4 = *(longlong **)(param_1 + 0x2d0);
  if (plVar4 != plVar3) {
    *(longlong **)(param_1 + 0x2d0) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x298);
  plVar3 = *(longlong **)(param_2 + 0x2a0);
  plVar4 = *(longlong **)(param_1 + 0x2e0);
  if (plVar4 != plVar3) {
    *(longlong **)(param_1 + 0x2e0) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2a8);
  FUN_146a7e8ca(param_1 + 0x308,param_2 + 0x2c8);
  FUN_14009d848(param_1 + 0x318,param_2 + 0x2d8);
  *(undefined1 *)(param_1 + 0x2f0) = *(undefined1 *)(param_2 + 0x2b0);
  *(undefined1 *)(param_1 + 0x2f1) = *(undefined1 *)(param_2 + 0x2b1);
  *(undefined1 *)(param_1 + 0x2f2) = *(undefined1 *)(param_2 + 0x2b2);
  FUN_146a6959c(param_1 + 0x2f8,param_2 + 0x2b8);
  *(undefined1 *)(param_1 + 0x348) = *(undefined1 *)(param_2 + 0x2e8);
  *(undefined1 *)(param_1 + 0x268) = 0;
  FUN_145ab3d24(local_3a0);
  local_1e8 = *(undefined8 *)(param_2 + 0x280);
  local_80 = *(undefined1 *)(param_1 + 0x348);
  local_898 = FUN_146a695fa;
  local_890 = 0;
  FUN_146a7e94e(local_810,param_1,&local_898);
  FUN_144a450dc(local_180,local_810);
  FUN_1449db362(local_810);
  FUN_140a570d8(local_810);
  local_898 = FUN_146a6984c;
  local_890 = 0;
  FUN_146a69774(local_810,param_1,&local_898);
  local_640 = *(undefined8 *)(param_2 + 0x288);
  local_868 = *(undefined4 *)(param_1 + 0x2a8);
  uStack_864 = *(undefined4 *)(param_1 + 0x2ac);
  uStack_860 = *(undefined4 *)(param_1 + 0x2b0);
  uStack_85c = *(undefined4 *)(param_1 + 0x2b4);
  local_858 = *(undefined1 *)(param_1 + 0x2b8);
  local_850 = 0;
  local_848 = 0;
  FUN_140a58be0(&local_850,param_1 + 0x2c0);
  local_448 = local_858;
  local_458 = local_868;
  uStack_454 = uStack_864;
  uStack_450 = uStack_860;
  uStack_44c = uStack_85c;
  FUN_144a450dc(local_440,&local_850);
  FUN_1449db362(&local_850);
  local_880 = 1;
  local_87c = 1;
  local_878 = 0;
  uStack_870 = 0;
  local_400 = 1;
  local_3fc = 1;
  FUN_144a450dc(local_3f8,&local_878);
  FUN_1449db362(&local_878);
  local_8c8 = &local_899;
  FUN_140a54526(&local_898,"STextBlock",
                ".\\Runtime/Slate/Private/Widgets/Input/SInputKeySelector.cpp",0x1e);
  lVar5 = CONCAT44(uStack_88c,local_890);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x340);
  *(code **)(param_1 + 0x338) = local_898;
  *(longlong *)(param_1 + 0x340) = lVar5;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  FUN_140a52852(&local_898,&local_840,local_810);
  plVar4 = local_1f0;
  plVar3 = local_838;
  if (local_838 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_838 + 1) = (int)local_838[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_838 + 1) = (int)local_838[1] + 1;
    UNLOCK();
  }
  local_1f8 = local_840;
  local_1f0 = local_838;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_8c8 = &local_8b9;
  FUN_145ab3730(&local_8b8,"SButton",".\\Runtime/Slate/Private/Widgets/Input/SInputKeySelector.cpp",
                0x19);
  if (local_8b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_8b0 + 1) = (int)local_8b0[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x328) = local_8b8;
  *(longlong **)(param_1 + 0x330) = local_8b0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_145ab34ca(&local_8b8,&local_830,local_3a0);
  local_820 = local_830;
  local_818 = local_828;
  if (local_828 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_828 + 1) = (int)local_828[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_820);
  plVar4 = local_818;
  if (local_818 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_818 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_818)(local_818);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_828 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_828 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_828)(local_828);
      LOCK();
      piVar1 = (int *)((longlong)local_828 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_828 + 0x10))(local_828);
      }
    }
  }
  if (local_8b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_8b0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_8b0)(local_8b0);
      LOCK();
      piVar1 = (int *)((longlong)local_8b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_8b0 + 0x10))(local_8b0);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (local_838 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_838 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_838)(local_838);
      LOCK();
      piVar1 = (int *)((longlong)local_838 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_838 + 0x10))(local_838);
      }
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_88c,local_890);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  FUN_140a59ae6(local_810);
  FUN_145ab35f4(local_3a0);
  if ((local_30 ^ (ulonglong)auStack_8e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6959c FUN_146a6959c body=93 status=ok
// SIG undefined FUN_146a6959c(void)

undefined8 * FUN_146a6959c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144a65a1e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145732088(param_1,iVar1);
      FUN_14573204f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146a695fa FUN_146a695fa body=376 status=ok
// SIG undefined FUN_146a695fa(void)

undefined1 * FUN_146a695fa(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *plStack_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0x268) == '\0') {
    bVar4 = true;
    FUN_146a69cf2();
    local_f8[0] = 1;
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    memset(local_d0,0,0x88);
    local_48 = 0x20702;
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_146a6971b:
      local_108 = 0;
      plStack_100 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_146a6971b;
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
      uVar7 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar4 = false;
      local_108 = uVar7;
      plStack_100 = plVar3;
    }
    plVar3 = plStack_100;
    uVar7 = FUN_140592b68(local_f8,&local_108,2,0);
    FUN_1403d4c6e(param_2,uVar7);
    if (!bVar4) {
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
    FUN_14493db24(local_f8);
  }
  else {
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a69774 FUN_146a69774 body=215 status=ok
// SIG undefined FUN_146a69774(void)

longlong FUN_146a69774(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_146a7ee36(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6984c FUN_146a6984c body=182 status=ok
// SIG undefined FUN_146a6984c(void)

longlong * FUN_146a6984c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x268) == '\x01') {
    plVar2 = *(longlong **)(param_1 + 0x2d0);
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    uVar4 = *(undefined4 *)(param_1 + 0x2d8);
  }
  else {
    if (*(char *)(param_1 + 0x290) == '\x01') {
      lVar1 = param_1 + 0x270;
      FUN_146a69902(lVar1);
      cVar3 = FUN_1403e7f2a(lVar1);
      if (cVar3 != '\0') {
        FUN_146a69902(lVar1);
        cVar3 = FUN_14171cb38(lVar1);
        FUN_146a69902(lVar1);
        if (cVar3 != '\0') {
          FUN_1459c4454();
          return param_2;
        }
        FUN_1469b9dd4(lVar1,param_2,1);
        return param_2;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x2e0);
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    uVar4 = *(undefined4 *)(param_1 + 0x2e8);
  }
  *(undefined4 *)(param_2 + 1) = uVar4;
  return param_2;
}



// FUNCTION 146a69902 FUN_146a69902 body=164 status=ok
// SIG undefined FUN_146a69902(void)

longlong FUN_146a69902(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong *local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x30) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x28);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,local_38);
      FUN_1413a4742(param_1,local_38);
      *(undefined1 *)(param_1 + 0x18) = local_20;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_28 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)local_28 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a699a8 FUN_146a699a8 body=426 status=ok
// SIG undefined FUN_146a699a8(void)

void FUN_146a699a8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_1 + 0x270;
  cVar5 = FUN_146a69b54(lVar3);
  if (cVar5 == '\0') {
    FUN_1413a517a(lVar3,param_2);
    *(undefined1 *)(param_1 + 0x288) = *(undefined1 *)(param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)(param_2 + 0x20);
    FUN_146a74e48(param_1 + 0x298,param_2 + 0x28);
    plVar4 = DAT_14c966e90;
    local_38 = DAT_14c966e88;
    local_40 = DAT_14c966e80;
    if (*(char *)(param_1 + 0x290) == '\x01') {
      FUN_146a69902(lVar3);
      local_40 = *(undefined8 *)(param_1 + 0x270);
      local_38 = *(undefined8 *)(param_1 + 0x278);
      local_30 = *(longlong **)(param_1 + 0x280);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      local_28 = CONCAT31(local_28._1_3_,*(undefined1 *)(param_1 + 0x288));
    }
    else if (DAT_14c966e90 == (longlong *)0x0) {
      local_30 = (longlong *)0x0;
      local_28 = 0;
    }
    else {
      LOCK();
      *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
      UNLOCK();
      local_30 = plVar4;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_28 = local_28 & 0xfffffff0;
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
    }
    if ((*(int *)(param_1 + 0x310) != 0) &&
       (plVar4 = *(longlong **)(param_1 + 0x308), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x60))(plVar4,&local_40);
    }
    plVar4 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
  FUN_146a69c52(param_2);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a69b54 FUN_146a69b54 body=253 status=ok
// SIG undefined FUN_146a69b54(void)

bool FUN_146a69b54(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[6] == 0) || ((longlong *)param_1[5] == (longlong *)0x0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*(longlong *)param_1[5] + 0x30))();
  }
  if ((longlong *)param_2[5] == (longlong *)0x0 || (int)param_2[6] == 0) {
    if (cVar2 == '\0') {
LAB_146a69bf4:
      if ((((char)param_1[4] == (char)param_2[4]) && (*param_1 == *param_2)) &&
         (((*(uint *)(param_2 + 3) ^ *(uint *)(param_1 + 3)) & 7) == 0)) {
        bVar4 = ((*(uint *)(param_2 + 3) ^ *(uint *)(param_1 + 3)) & 8) == 0;
        goto LAB_146a69bb5;
      }
    }
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_2[5] + 0x30))();
    if (cVar2 == cVar3) {
      if (cVar2 != '\0') {
        if (((int)param_1[6] == 0) || (plVar1 = (longlong *)param_1[5], plVar1 == (longlong *)0x0))
        {
          local_28 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        }
        plVar1 = (longlong *)param_2[5];
        if (plVar1 == (longlong *)0x0 || (int)param_2[6] == 0) {
          local_30 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_30);
        }
        bVar4 = local_28 == local_30;
        goto LAB_146a69bb5;
      }
      goto LAB_146a69bf4;
    }
  }
  bVar4 = false;
LAB_146a69bb5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a69c52 FUN_146a69c52 body=68 status=ok
// SIG undefined FUN_146a69c52(void)

void FUN_146a69c52(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x28);
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000146a69c8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a69c96 FUN_146a69c96 body=56 status=ok
// SIG undefined FUN_146a69c96(void)

void FUN_146a69c96(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x2a8) = *param_2;
  *(undefined4 *)(param_1 + 0x2ac) = uVar1;
  *(undefined4 *)(param_1 + 0x2b0) = uVar2;
  *(undefined4 *)(param_1 + 0x2b4) = uVar3;
  *(undefined1 *)(param_1 + 0x2b8) = *(undefined1 *)(param_2 + 4);
  FUN_140a58be0(param_1 + 0x2c0,param_2 + 6);
  FUN_1449db362(param_2 + 6);
  return;
}



// FUNCTION 146a69cce FUN_146a69cce body=17 status=ok
// SIG undefined FUN_146a69cce(void)

void FUN_146a69cce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  lVar1 = *(longlong *)(param_1 + 0x328);
  if (lVar1 == 0) {
    return;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    *(longlong *)(lVar1 + 0x2b0) = param_2;
    lVar3 = *(longlong *)(param_2 + 0x358);
    lVar4 = param_2;
    if (DAT_14c950c29 == 1) {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar3 = *(longlong *)(param_2 + 0x358);
        lVar4 = *(longlong *)(lVar1 + 0x2b0);
      }
    }
    bVar2 = DAT_14c950c29;
    *(longlong *)(lVar1 + 0x308) = lVar3;
    *(undefined8 *)(lVar1 + 0x310) = *(undefined8 *)(param_2 + 0x360);
    *(undefined8 *)(lVar1 + 0x318) = *(undefined8 *)(param_2 + 0x368);
    lVar3 = *(longlong *)(lVar4 + 0x340);
    if ((bVar2 & 1) != 0) {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar3 = *(longlong *)(lVar4 + 0x340);
      }
    }
    *(longlong *)(lVar1 + 800) = lVar3;
    *(undefined8 *)(lVar1 + 0x328) = *(undefined8 *)(lVar4 + 0x348);
    *(undefined8 *)(lVar1 + 0x330) = *(undefined8 *)(lVar4 + 0x350);
    FUN_145ab4b0e(lVar1,&uStack_58);
    uStack_48 = CONCAT71(uStack_48._1_7_,1);
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_145ab4ba4(lVar1,&uStack_58);
    uStack_58 = *(char *)(*(longlong *)(lVar1 + 0x2b0) + 0x23c) == '\0';
    uStack_57 = 1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_145ab4ae2(lVar1,&uStack_58);
    FUN_145ab4c3e(lVar1);
    FUN_145ab4d7a(lVar1);
    FUN_140163244(lVar1,2);
  }
  if ((uStack_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a69ce0 FUN_146a69ce0 body=17 status=ok
// SIG undefined FUN_146a69ce0(void)

void FUN_146a69ce0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_4a8 [32];
  undefined1 auStack_488 [464];
  undefined8 uStack_2b8;
  ulonglong uStack_18;
  
  lVar1 = *(longlong *)(param_1 + 0x338);
  if (lVar1 == 0) {
    return;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  if (param_2 == 0) {
    FUN_140a570d8(auStack_488);
    FUN_140a5e6b8(lVar1 + 0x200,uStack_2b8);
    FUN_140a59ae6(auStack_488);
  }
  else {
    FUN_140a5e6b8(lVar1 + 0x200);
  }
  if ((*(char *)(lVar1 + 0x5de) == '\x01') && (*(char *)(lVar1 + 0x5d8) == '\x01')) {
    *(undefined1 *)(lVar1 + 0x5d8) = 0;
  }
  FUN_140163244(lVar1,1);
  if ((uStack_18 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a69cf2 FUN_146a69cf2 body=154 status=ok
// SIG undefined FUN_146a69cf2(void)

void FUN_146a69cf2(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  byte local_30 [8];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(byte *)(param_1 + 0x268) != param_2) {
    *(byte *)(param_1 + 0x268) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x328);
    if (lVar1 != 0) {
      local_30[0] = param_2 ^ 1;
      local_30[1] = 1;
      local_28 = 0;
      uStack_20 = 0;
      FUN_140a52028(lVar1 + 0x3a,lVar1,local_30);
      FUN_1449db362(&local_28);
    }
    if ((*(int *)(param_1 + 800) != 0) && (*(longlong **)(param_1 + 0x318) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(param_1 + 0x318) + 0x60))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a69d8e FUN_146a69d8e body=421 status=ok
// SIG undefined FUN_146a69d8e(void)

void FUN_146a69d8e(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *param_2;
  if (*(char *)(param_1 + 0x2f0) == '\x01') {
    local_50 = param_2[1];
    local_48 = param_2[2];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    local_60 = param_6;
    local_68 = param_5;
    local_58 = uVar3;
    FUN_146a69f34(&local_40,&local_58);
  }
  else {
    local_38 = param_2[1];
    plVar4 = (longlong *)param_2[2];
    local_40 = uVar3;
    if (plVar4 == (longlong *)0x0) {
      local_30 = (longlong *)0x0;
      local_28 = 0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_28 = local_28 & 0xfffffff0;
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_30 = plVar4;
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
    }
  }
  if ((*(int *)(param_1 + 0x2a0) != 0) && (*(longlong **)(param_1 + 0x298) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0x30))();
    if (cVar5 != '\0') goto LAB_146a69e48;
  }
  FUN_146a69fbc(param_1 + 0x270,&local_40);
LAB_146a69e48:
  if ((*(int *)(param_1 + 0x310) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x308), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_40);
  }
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a69f34 FUN_146a69f34 body=136 status=ok
// SIG undefined FUN_146a69f34(void)

undefined8 *
FUN_146a69f34(undefined8 *param_1,undefined8 *param_2,byte param_3,byte param_4,byte param_5,
             byte param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar3 = param_2[2];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(uint *)(param_1 + 3) =
       (uint)param_3 + (uint)param_4 * 2 + (uint)param_5 * 4 + (uint)param_6 * 8 |
       *(uint *)(param_1 + 3) & 0xfffffff0;
  plVar4 = (longlong *)param_2[2];
  if (plVar4 != (longlong *)0x0) {
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
  }
  return param_1;
}



// FUNCTION 146a69fbc FUN_146a69fbc body=93 status=ok
// SIG undefined FUN_146a69fbc(void)

void FUN_146a69fbc(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x28),0,0,0x10);
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  FUN_1413a517a(param_1,param_2);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 146a6a01a FUN_146a6a01a body=269 status=ok
// SIG undefined FUN_146a6a01a(void)

undefined1 * FUN_146a6a01a(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x268) == '\x01') {
    if (*(char *)(param_1 + 0x2f1) == '\0') {
      local_50 = *(undefined8 *)(param_4 + 0x20);
      local_48 = *(undefined8 *)(param_4 + 0x28);
      local_40 = *(longlong **)(param_4 + 0x30);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      cVar4 = FUN_140230656(&local_50);
      plVar3 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (cVar4 != '\0') goto LAB_146a6a0f0;
    }
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
LAB_146a6a0f0:
    FUN_14287b2c8(param_1,param_2,param_3,param_4);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6a128 FUN_146a6a128 body=454 status=ok
// SIG undefined FUN_146a6a128(void)

undefined1 * FUN_146a6a128(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x268) == '\0') {
    if (*(char *)(param_1 + 0x290) == '\x01') {
      FUN_146a69902(param_1 + 0x270);
      cVar6 = FUN_1403e7f2a(param_1 + 0x270);
      if ((cVar6 != '\0') && (*(char *)(param_1 + 0x2f1) == '\x01')) {
        lVar4 = *(longlong *)(param_4 + 0x20);
        plVar3 = *(longlong **)(param_4 + 0x30);
        lVar5 = DAT_14c9658d8;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          lVar5 = DAT_14c9658d8;
          UNLOCK();
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
        if (lVar4 == lVar5) {
          FUN_146075062(&local_a8);
          local_88 = local_a8;
          local_80 = (undefined4)local_a0;
          uStack_7c = local_a0._4_4_;
          uStack_78 = (undefined4)uStack_98;
          uStack_74 = uStack_98._4_4_;
          local_a0 = 0;
          uStack_98 = (longlong *)0x0;
          local_70 = local_90;
          local_68 = 1;
          local_60 = 0;
          uStack_58 = 0;
          FUN_146a699a8(param_1);
          plVar3 = uStack_98;
          if (uStack_98 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_98 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*uStack_98)(uStack_98);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          *param_2 = 1;
          param_2[0x20] = 0;
          *(undefined8 *)(param_2 + 8) = 0;
          *(undefined8 *)(param_2 + 0x10) = 0;
          memset(param_2 + 0x28,0,0x88);
          *(undefined4 *)(param_2 + 0xb0) = 0x20702;
          param_2[0xb4] = 0;
          goto LAB_146a6a1ca;
        }
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x328);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3,param_4);
LAB_146a6a1ca:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
    }
  }
  FUN_14171f816(param_1,param_2,param_3,param_4);
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a6a2f2 FUN_146a6a2f2 body=700 status=ok
// SIG undefined FUN_146a6a2f2(void)

undefined1 * FUN_146a6a2f2(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *(longlong *)(param_4 + 0x20);
  local_40 = *(undefined8 *)(param_4 + 0x28);
  local_38 = *(longlong **)(param_4 + 0x30);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  uVar3 = *(ushort *)(param_4 + 8);
  if (((uVar3 & 0xc0) == 0) || (local_48 == DAT_14c9654a8)) {
    bVar9 = false;
  }
  else {
    bVar9 = local_48 != DAT_14c9654c0;
  }
  if (((uVar3 & 3) == 0) || (local_48 == DAT_14c965418)) {
    bVar10 = false;
  }
  else {
    bVar10 = local_48 != DAT_14c965430;
  }
  if (((uVar3 & 0x30) == 0) || (local_48 == DAT_14c965478)) {
    bVar11 = false;
  }
  else {
    bVar11 = local_48 != DAT_14c965490;
  }
  if (((uVar3 & 0xc) == 0) || (local_48 == DAT_14c965448)) {
    bVar12 = false;
  }
  else {
    bVar12 = local_48 != DAT_14c965460;
  }
  bVar7 = bVar12 | 2;
  if (!bVar11) {
    bVar7 = bVar12;
  }
  bVar5 = bVar7 + 4;
  if (!bVar10) {
    bVar5 = bVar7;
  }
  bVar7 = bVar5 | 8;
  if (!bVar9) {
    bVar7 = bVar5;
  }
  if (((*(char *)(param_1 + 0x268) != '\x01') ||
      ((*(char *)(param_1 + 0x2f1) == '\0' && (cVar6 = FUN_140230656(&local_48), cVar6 != '\0'))))
     || ((cVar6 = FUN_14171cb38(&local_48), bVar7 != 0 && (cVar6 != '\0')))) {
    if ((*(char *)(param_1 + 0x268) == '\0') &&
       (plVar4 = *(longlong **)(param_1 + 0x328), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x48))(plVar4,param_2,param_3,param_4);
    }
    else {
      FUN_14287b30e(param_1,param_2,param_3,param_4);
    }
    goto LAB_146a6a427;
  }
  FUN_146a69cf2(param_1);
  if (*(char *)(param_1 + 0x2f2) == '\0') {
LAB_146a6a559:
    local_60 = local_48;
    local_58 = local_40;
    local_50 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    local_70 = bVar7 == 8;
    local_78 = bVar7 == 2;
    FUN_146a69d8e(param_1,&local_60,bVar7 == 4,bVar7 == 1);
  }
  else if (local_48 != DAT_14c964dd0) {
    if ((longlong)*(int *)(param_1 + 0x300) != 0) {
      lVar8 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x2f8) + lVar8) == local_48) goto LAB_146a6a4ee;
        lVar8 = lVar8 + 0x18;
      } while ((longlong)*(int *)(param_1 + 0x300) * 0x18 != lVar8);
    }
    goto LAB_146a6a559;
  }
LAB_146a6a4ee:
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146a6a427:
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a6a5b0 FUN_146a6a5b0 body=221 status=ok
// SIG undefined FUN_146a6a5b0(void)

undefined1 * FUN_146a6a5b0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x268) == '\x01') {
    FUN_146a69cf2(param_1,0);
    local_38 = *(undefined8 *)(param_4 + 0x40);
    local_30 = *(undefined8 *)(param_4 + 0x48);
    local_28 = *(longlong *)(param_4 + 0x50);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    local_40 = 0;
    local_48 = 0;
    FUN_146a69d8e(param_1,&local_38,0,0);
    *param_2 = 1;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  FUN_1411d4ccc(param_1,param_2,param_3,param_4);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6a694 FUN_146a6a694 body=379 status=ok
// SIG undefined FUN_146a6a694(void)

undefined1 *
FUN_146a6a694(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(char *)(param_1 + 0x268) == '\0') && (*(char *)(param_1 + 0x290) == '\x01')) {
    FUN_146a69902(param_1 + 0x270);
    cVar4 = FUN_1403e7f2a(param_1 + 0x270);
    if (cVar4 != '\0') {
      local_58 = (undefined4)DAT_14c966fa0;
      uStack_54 = DAT_14c966fa0._4_4_;
      uStack_50 = (undefined4)DAT_14c966fa8;
      uStack_4c = DAT_14c966fa8._4_4_;
      local_48 = DAT_14c966fb0;
      if (DAT_14c966fb0 != 0) {
        LOCK();
        *(int *)(DAT_14c966fb0 + 8) = *(int *)(DAT_14c966fb0 + 8) + 1;
        UNLOCK();
      }
      cVar4 = FUN_1407c9dec(param_4,&local_58);
      if (cVar4 != '\0') {
        FUN_146075062(&local_b0);
        local_90 = local_b0;
        local_88 = (undefined4)local_a8;
        uStack_84 = local_a8._4_4_;
        uStack_80 = (undefined4)uStack_a0;
        uStack_7c = uStack_a0._4_4_;
        local_a8 = 0;
        uStack_a0 = (longlong *)0x0;
        local_78 = local_98;
        local_70 = 1;
        local_68 = 0;
        uStack_60 = 0;
        FUN_146a699a8(param_1);
        plVar3 = uStack_a0;
        if (uStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_a0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*uStack_a0)(uStack_a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        goto LAB_146a6a6eb;
      }
    }
  }
  FUN_14697d5da(param_1,param_2,param_3,param_4);
LAB_146a6a6eb:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6a810 FUN_146a6a810 body=55 status=ok
// SIG undefined FUN_146a6a810(void)

undefined8 FUN_146a6a810(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x328);
  if (plVar1 == (longlong *)0x0) {
    FUN_145bff8f6(param_1,param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x140))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 146a6a85a FUN_146a6a85a body=89 status=ok
// SIG undefined FUN_146a6a85a(void)

void FUN_146a6a85a(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x338);
  if (plVar1 != (longlong *)0x0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    (**(code **)(*plVar1 + 0x1c0))(plVar1,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6a8b4 FUN_146a6a8b4 body=547 status=ok
// SIG undefined FUN_146a6a8b4(void)

void FUN_146a6a8b4(double *param_1,float *param_2,double *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined4 uVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  param_1[4] = -0.007812505573383532;
  param_1[5] = -0.007812505573383532;
  dVar3 = *param_3;
  dVar8 = dVar3;
  if ((param_4 - 3U < 2) && (dVar8 = (double)*param_2, (double)*param_2 <= dVar3)) {
    dVar8 = dVar3;
  }
  dVar3 = param_3[1];
  *param_1 = dVar8;
  param_1[1] = dVar3;
  dVar10 = DAT_14c8463f0;
  dVar9 = DAT_14c8463f8;
  switch(param_4) {
  case 0:
  case 3:
    dVar9 = (double)param_2[1];
    goto LAB_146a6a915;
  case 1:
    dVar10 = -((double)(*param_2 * -0.5) + dVar8 * 0.5);
    dVar9 = (double)param_2[1];
    break;
  case 2:
  case 4:
    dVar10 = (double)*param_2 - dVar8;
    dVar9 = (double)param_2[1];
    break;
  case 5:
    dVar10 = (double)*param_2;
    dVar9 = 0.0;
    break;
  case 6:
    dVar9 = -dVar3;
LAB_146a6a915:
    dVar10 = 0.0;
    break;
  case 7:
    dVar10 = -((double)(*param_2 * -0.5) + dVar8 * 0.5);
    dVar9 = -dVar3;
    break;
  case 8:
    uVar6 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
    uVar4 = SUB84(dVar3,0);
    dVar10 = -dVar8 - (double)*param_2;
    goto LAB_146a6aa7a;
  case 9:
    dVar10 = -dVar8;
    uVar4 = 0;
    uVar6 = 0;
    goto LAB_146a6aa7a;
  case 10:
    dVar3 = dVar3 * 0.5 - (double)(param_2[1] * 0.5);
    uVar6 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
    uVar4 = SUB84(dVar3,0);
    dVar10 = -(dVar8 * 0.5 - (double)(*param_2 * 0.5));
LAB_146a6aa7a:
    dVar9 = (double)CONCAT44(uVar6,uVar4);
    break;
  case 0xb:
    dVar9 = -((double)(param_2[1] * -0.5) + dVar3 * 0.5);
    dVar10 = (double)*param_2;
    break;
  case 0xc:
    dVar9 = (double)param_2[1] - dVar3;
    dVar10 = 0.0;
  }
  param_1[2] = dVar10;
  param_1[3] = dVar9;
  fVar5 = (float)DAT_14c8463f8;
  fVar7 = (float)DAT_14c8463f0;
  fVar1 = param_2[1];
  fVar2 = *param_2;
  *(float *)(param_1 + 4) = fVar7;
  *(float *)((longlong)param_1 + 0x24) = fVar5;
  *(float *)(param_1 + 5) = fVar2 + fVar7;
  *(float *)((longlong)param_1 + 0x2c) = fVar1 + fVar5;
  *(uint *)(param_1 + 6) = (uint)((param_4 - 5U & 0xfffffffb) != 0);
  return;
}



// FUNCTION 146a6aad8 FUN_146a6aad8 body=90 status=ok
// SIG undefined FUN_146a6aad8(void)

int FUN_146a6aad8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146a7f3ac(param_1 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
  FUN_146a7f350(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8),param_1,param_2
               );
  return iVar1;
}



// FUNCTION 146a6ab32 FUN_146a6ab32 body=136 status=ok
// SIG undefined FUN_146a6ab32(void)

longlong FUN_146a6ab32(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000146a6ab8b;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000146a6ab8b:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 146a6abba FUN_146a6abba body=498 status=ok
// SIG undefined FUN_146a6abba(void)

undefined8 FUN_146a6abba(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  float *local_b0;
  undefined4 local_a8;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined8 local_8c;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_146a6a8b4(&local_70);
  fVar2 = *(float *)(param_2 + 8);
  fVar1 = *(float *)(param_2 + 0xc);
  fVar4 = *(float *)(param_2 + 0x10);
  local_74 = (float)local_58 * fVar2 + fVar4;
  local_78 = (float)local_60 * fVar2 + fVar1;
  local_b0 = &local_78;
  local_7c = (float)local_68 * fVar2;
  local_80 = (float)local_70 * fVar2;
  local_84 = local_4c * fVar2 + fVar4;
  fVar3 = local_50 * fVar2 + fVar1;
  fVar4 = local_44 * fVar2 + fVar4;
  fVar1 = fVar2 * local_48 + fVar1;
  local_90 = fVar1;
  if (fVar3 <= fVar1) {
    local_90 = fVar3;
    fVar3 = fVar1;
  }
  fVar2 = fVar4;
  if (local_84 <= fVar4) {
    fVar2 = local_84;
    local_84 = fVar4;
  }
  local_8c = CONCAT44(fVar3,fVar2);
  local_a8 = local_40;
  local_b8 = local_b8 & 0xffffffffffffff00;
  (**(code **)(*DAT_14c98e618 + 0x1d0))(DAT_14c98e618,&local_9c,&local_90);
  local_90 = *(float *)(param_2 + 8);
  fVar2 = 1.0 / local_90;
  local_94 = local_98 * fVar2 - *(float *)(param_2 + 0x10) * fVar2;
  local_98 = local_9c * fVar2 - fVar2 * *(float *)(param_2 + 0xc);
  local_9c = 1.0;
  local_74 = (float)local_68;
  local_78 = (float)local_70;
  local_8c = *(undefined8 *)(param_2 + 0xc);
  local_b8 = param_2 + 0x1c;
  local_b0 = (float *)(CONCAT71(local_b0._1_7_,*(undefined1 *)(param_2 + 0x34)) & 0xffffffffffffff01
                      );
  FUN_1401272be(param_1,&local_78,&local_9c,&local_90);
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146a6adae FUN_146a6adae body=1360 status=ok
// SIG undefined FUN_146a6adae(void)

void FUN_146a6adae(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  float *pfVar11;
  bool bVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined4 uStack_cc;
  double local_c8;
  undefined4 local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar3 = *(longlong **)(param_1 + 0x1f8);
  if (plVar3 == (longlong *)0x0) {
LAB_146a6ae7a:
    *(undefined1 *)(param_1 + 0x279) = 0;
  }
  else {
    iVar9 = (int)plVar3[1];
    do {
      if (iVar9 == 0) goto LAB_146a6ae7a;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar12 = iVar9 == iVar6;
      if (bVar12) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      UNLOCK();
    } while (!bVar12);
    lVar4 = *(longlong *)(param_1 + 0x1f0);
    if ((lVar4 != 0) && (*(char *)(param_1 + 0x280) == '\x01')) {
      if (*(char *)(param_1 + 0x298) == '\x01') {
        if (((*(int *)(param_1 + 0x270) != 0) &&
            (*(longlong **)(param_1 + 0x268) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x30))(), cVar7 != '\0')) {
          if (*(int *)(param_1 + 0x270) == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)(param_1 + 0x268);
          }
          uVar8 = (**(code **)(*plVar10 + 0x58))();
          *(undefined4 *)(param_1 + 0x260) = uVar8;
        }
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x2e0) + 8) + 0x10);
        pfVar11 = (float *)&DAT_14c84635c;
        if ((*(byte *)(lVar5 + 0x31) & 0x20) != 0) {
          pfVar11 = (float *)(lVar5 + 0x168);
        }
        local_f0 = (double)pfVar11[1];
        local_f8 = (double)*pfVar11;
        FUN_146a6a8b4(&local_d8,param_2,&local_f8,*(undefined4 *)(param_1 + 0x260));
        if (*(char *)(param_1 + 0x278) == '\x01') {
          FUN_140c2d2b0(lVar4,&local_108);
          fVar16 = 1.0 / *(float *)(param_2 + 8);
          fVar15 = -*(float *)(param_2 + 0x10) * fVar16;
          fVar17 = -*(float *)(param_2 + 0xc) * fVar16;
          fVar13 = local_108._4_4_ * fVar16 + fVar15;
          fVar18 = (float)local_108 * fVar16 + fVar17;
          fVar15 = local_100._4_4_ * fVar16 + fVar15;
          fVar17 = fVar16 * (float)local_100 + fVar17;
          fVar16 = fVar17;
          if (fVar18 <= fVar17) {
            fVar16 = fVar18;
            fVar18 = fVar17;
          }
          fVar17 = fVar15;
          if (fVar13 <= fVar15) {
            fVar17 = fVar13;
            fVar13 = fVar15;
          }
          local_f8 = (double)CONCAT44(fVar17,fVar16);
          local_f0 = (double)CONCAT44(fVar13,fVar18);
          local_108 = (double)CONCAT44((float)(double)CONCAT44(fStack_bc,local_c0),(float)local_c8);
          local_100 = (double)CONCAT44((float)((double)CONCAT44(uStack_cc,local_d0) +
                                              (double)CONCAT44(fStack_bc,local_c0)),
                                       (float)(local_c8 + (double)CONCAT44(fStack_d4,local_d8)));
          local_118 = &local_f8;
          FUN_140398c85(&local_110,&local_b8,&local_108);
          dVar14 = (double)local_10c;
          local_c8 = (double)local_110;
        }
        else {
          dVar14 = (double)CONCAT44(fStack_bc,local_c0);
        }
        *(double *)(param_1 + 0x2a8) = local_c8;
        *(double *)(param_1 + 0x2b0) = dVar14;
        fVar18 = *(float *)(param_2 + 8);
        fVar13 = *(float *)(param_2 + 0x10);
        *(double *)(param_1 + 0x2b8) =
             (double)((float)local_c8 * fVar18 + *(float *)(param_2 + 0xc));
        *(double *)(param_1 + 0x2c0) = (double)((float)dVar14 * fVar18 + fVar13);
      }
      else if (*(char *)(param_1 + 0x298) == '\0') {
        FUN_14287c18a(lVar4,&local_d8);
        pfVar11 = (float *)&DAT_14c84635c;
        if ((*(byte *)(CONCAT44(fStack_d4,local_d8) + 0x31) & 0x20) != 0) {
          pfVar11 = (float *)(CONCAT44(fStack_d4,local_d8) + 0x168);
        }
        local_100 = (double)pfVar11[1];
        local_108 = (double)*pfVar11;
        plVar10 = (longlong *)CONCAT44(uStack_cc,local_d0);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar10 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        if (((*(int *)(param_1 + 0x270) != 0) &&
            (*(longlong **)(param_1 + 0x268) != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x30))(), cVar7 != '\0')) {
          if (*(int *)(param_1 + 0x270) == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)(param_1 + 0x268);
          }
          uVar8 = (**(code **)(*plVar10 + 0x58))();
          *(undefined4 *)(param_1 + 0x260) = uVar8;
        }
        FUN_146a6abba(&local_d8,param_2,&local_108,*(undefined4 *)(param_1 + 0x260));
        fVar13 = (float)DAT_14c8463f8;
        fVar16 = (float)DAT_14c8463f0;
        fVar18 = *(float *)(param_2 + 8);
        FUN_1469808fc(lVar4,&local_f8);
        fVar18 = 1.0 / (fVar18 / (float)local_f8);
        if (((*(int *)(param_1 + 0x270) == 0) ||
            (*(longlong **)(param_1 + 0x268) == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x30))(), cVar7 == '\0')) {
          iVar9 = *(int *)(param_1 + 0x260);
        }
        else {
          if (*(int *)(param_1 + 0x270) == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = *(longlong **)(param_1 + 0x268);
          }
          iVar9 = (**(code **)(*plVar10 + 0x58))();
          *(int *)(param_1 + 0x260) = iVar9;
        }
        fVar17 = local_d0 * local_d8 * fVar18;
        if (iVar9 == 3) {
          FUN_145da7a9a(lVar4,&local_f8);
          local_f8._0_5_ = CONCAT14(1,fVar17);
          FUN_14698071a(lVar4,&local_f8);
        }
        FUN_146980ab8(lVar4,CONCAT44(local_b8 * fVar16 + local_b0 * fVar13 + local_a8,
                                     fVar16 * fStack_bc + fVar13 * local_b4 + local_ac),
                      CONCAT44(fStack_d4 * local_d0 * fVar18,fVar17));
      }
    }
    *(undefined1 *)(param_1 + 0x279) = 0;
    LOCK();
    plVar10 = plVar3 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_a0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6b32c FUN_146a6b32c body=3706 status=ok
// SIG undefined FUN_146a6b32c(void)

void FUN_146a6b32c(longlong param_1,float *param_2,byte *param_3)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  undefined1 uVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong *plVar12;
  float *pfVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  byte *pbVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_268 [32];
  float *local_248;
  undefined2 *local_240;
  float *local_238;
  float local_224;
  byte *local_220;
  float local_214;
  undefined8 local_210;
  undefined8 local_208;
  float local_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined8 local_1e8;
  undefined2 local_1e0;
  byte bStack_1de;
  undefined1 uStack_1dd;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined2 local_1a8;
  byte bStack_1a6;
  undefined1 uStack_1a5;
  float fStack_1a4;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  longlong local_170;
  longlong *local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulonglong local_128;
  undefined4 local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  char local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar16 = **(longlong **)(param_1 + 0x2e0);
  lVar17 = *(longlong *)(lVar16 + 0x10);
  bVar3 = *(byte *)(lVar17 + 0x39);
  if ((*param_3 & bVar3) != 0) {
    fVar27 = *(float *)(lVar16 + 0x28);
    fVar23 = *(float *)(lVar16 + 0x30);
    fVar21 = fVar27;
    fStack_114 = fVar23;
    if (DAT_14c96b1e0 != '\x01') {
      fVar21 = fVar23;
      fStack_114 = fVar27;
    }
    fStack_110 = *(float *)(lVar16 + 0x2c);
    fVar25 = (float)DAT_14c846320;
    fVar22 = *(float *)(lVar16 + 0x34);
    fVar24 = *param_2;
    fVar27 = fVar27 + fVar23;
    iVar9 = *(int *)(lVar16 + 0x38);
    if (DAT_14c96b1e0 != '\x01') {
      if (iVar9 == 0) goto LAB_146a6b4cf;
LAB_146a6b471:
      pfVar13 = (float *)&DAT_14c84635c;
      if ((*(byte *)(lVar17 + 0x31) & 0x20) != 0) {
        pfVar13 = (float *)(lVar17 + 0x168);
      }
      fVar27 = fVar24 - fVar27;
      fVar26 = *pfVar13 * fVar25;
      if (fVar27 <= *pfVar13 * fVar25) {
        fVar26 = fVar27;
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (iVar9 != 1) {
        if (iVar9 == 3) goto LAB_146a6b460;
        if (iVar9 == 2) {
          fStack_114 = (fStack_114 + (fVar24 - fVar26) * 0.5) - fVar21;
        }
        else {
          fVar26 = fVar27 * fVar25;
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
        }
      }
    }
    else if (iVar9 == 0) {
LAB_146a6b4cf:
      fVar26 = (fVar24 - fVar27) * fVar25;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
    }
    else if (iVar9 == 3) {
      pfVar13 = (float *)&DAT_14c84635c;
      if ((*(byte *)(lVar17 + 0x31) & 0x20) != 0) {
        pfVar13 = (float *)(lVar17 + 0x168);
      }
      fVar26 = fVar25 * *pfVar13;
      if (fVar24 - fVar27 <= fVar25 * *pfVar13) {
        fVar26 = fVar24 - fVar27;
      }
      fStack_114 = fVar23;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
    }
    else {
      if (iVar9 != 1) goto LAB_146a6b471;
      pfVar13 = (float *)&DAT_14c84635c;
      if ((*(byte *)(lVar17 + 0x31) & 0x20) != 0) {
        pfVar13 = (float *)(lVar17 + 0x168);
      }
      fVar26 = fVar25 * *pfVar13;
      if (fVar24 - fVar27 <= fVar25 * *pfVar13) {
        fVar26 = fVar24 - fVar27;
      }
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
LAB_146a6b460:
      fStack_114 = (fVar24 - fVar26) - fVar21;
    }
    fVar27 = param_2[1];
    iVar9 = *(int *)(lVar16 + 0x3c);
    fVar23 = fVar27 - (fStack_110 + fVar22);
    if (iVar9 == 0) {
LAB_146a6b55c:
      fVar21 = fVar23 * (float)DAT_14c846328;
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
    }
    else {
      puVar15 = &DAT_14c84635c;
      if ((*(byte *)(lVar17 + 0x31) & 0x20) != 0) {
        puVar15 = (undefined8 *)(lVar17 + 0x168);
      }
      fVar21 = *(float *)((longlong)puVar15 + 4) * (float)DAT_14c846328;
      if (fVar23 <= fVar21) {
        fVar21 = fVar23;
      }
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      if (iVar9 != 1) {
        if (iVar9 == 3) {
          fStack_110 = (fVar27 - fVar21) - fVar22;
        }
        else {
          if (iVar9 != 2) goto LAB_146a6b55c;
          fStack_110 = (fStack_110 + (fVar27 - fVar21) * 0.5) - fVar22;
        }
      }
    }
    local_118 = 0x3f800000;
    uVar14 = CONCAT44(fStack_110,fStack_114);
    local_1e8 = CONCAT44(fVar21,fVar26);
    cVar8 = *(char *)(lVar17 + 0x198);
    fStack_140 = (float)CONCAT31(fStack_140._1_3_,cVar8);
    if (DAT_14c96b1e0 == '\0') {
      if (cVar8 == '\0') goto LAB_146a6b5bd;
      local_148 = *(ulonglong *)(lVar17 + 400);
      local_158 = *(undefined8 *)(lVar17 + 0x180);
      uStack_150 = *(undefined8 *)(lVar17 + 0x188);
LAB_146a6ba54:
      local_1f8 = (float)*(double *)(lVar17 + 0x170);
      fStack_1f4 = (float)*(double *)(lVar17 + 0x178);
      if (DAT_14c96b1e0 != '\0') {
        local_1f8 = (0.5 - local_1f8) + 0.5;
      }
      local_248 = &local_1f8;
      local_238 = param_2 + 7;
      fVar27 = param_2[2];
      local_240 = &local_1e0;
      local_1e0 = SUB42(fVar27,0);
      bStack_1de = (byte)((uint)fVar27 >> 0x10);
      uStack_1dd = (undefined1)((uint)fVar27 >> 0x18);
      uStack_1dc = (undefined4)*(undefined8 *)(param_2 + 3);
      local_1d8 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
      FUN_146978c22(&local_1a8,&local_1e8,&local_118,&local_158);
      fVar25 = fStack_18c;
      fVar24 = fStack_190;
      fVar22 = fStack_194;
      fVar27 = (float)uStack_1a0;
      lVar17 = *(longlong *)(lVar16 + 0x10);
      plVar18 = *(longlong **)(lVar16 + 0x18);
      fVar21 = (float)local_188;
      fVar23 = local_188._4_4_;
      fVar29 = (float)uStack_180;
      fVar26 = uStack_180._4_4_;
      fVar28 = (float)local_178;
      if (plVar18 == (longlong *)0x0) {
        local_210 = CONCAT44(fStack_1a4,CONCAT13(uStack_1a5,CONCAT12(bStack_1a6,local_1a8)));
LAB_146a6bc8f:
        bStack_1de = local_178._7_1_;
        local_1e0 = local_178._5_2_;
        local_214 = uStack_1a0._4_4_;
        local_220 = (byte *)CONCAT44(local_220._4_4_,local_198);
        bVar11 = local_178._4_1_;
      }
      else {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        local_210 = CONCAT44(fStack_1a4,CONCAT13(uStack_1a5,CONCAT12(bStack_1a6,local_1a8)));
        local_220 = (byte *)CONCAT44(local_220._4_4_,local_198);
        local_1e0 = local_178._5_2_;
        bStack_1de = local_178._7_1_;
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        LOCK();
        plVar12 = plVar18 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        local_214 = uStack_1a0._4_4_;
        if ((int)*plVar12 != 0) goto LAB_146a6bc8f;
        local_224 = (float)CONCAT31(local_224._1_3_,local_178._4_1_);
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
        bVar11 = local_224._0_1_;
      }
      uVar14 = CONCAT44(fVar24,fVar22);
    }
    else {
      if (cVar8 != '\0') {
        local_158 = *(undefined8 *)(lVar17 + 0x180);
        uStack_150 = *(undefined8 *)(lVar17 + 0x188);
        local_148 = *(ulonglong *)(lVar17 + 400) ^ 0x80000000;
        goto LAB_146a6ba54;
      }
LAB_146a6b5bd:
      bVar11 = *(byte *)(param_2 + 0xd);
      fVar27 = param_2[2];
      fVar23 = param_2[7];
      local_210 = local_1e8;
      fVar21 = param_2[8];
      fVar22 = param_2[10];
      fVar24 = param_2[9];
      fVar28 = fStack_114 * fVar21 + fStack_110 * fVar22 + param_2[0xc];
      fVar26 = fStack_114 * fVar23 + fStack_110 * fVar24 + param_2[0xb];
      local_220 = (byte *)CONCAT44(local_220._4_4_,fStack_110 * fVar27 + param_2[4]);
      local_214 = fStack_114 * fVar27 + param_2[3];
      plVar18 = *(longlong **)(lVar16 + 0x18);
      fVar25 = fVar23;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        bStack_1de = bStack_1a6;
        local_1e0 = local_1a8;
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        LOCK();
        plVar12 = plVar18 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          local_224 = fVar23;
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          fVar25 = local_224;
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
            fVar25 = local_224;
          }
        }
      }
      bVar11 = bVar11 & 1;
      fVar29 = fVar21 * 0.0 + fVar22;
      fVar23 = fVar23 * 0.0 + fVar24;
      fVar21 = fVar21 + fVar22 * 0.0;
      fVar25 = fVar25 + fVar24 * 0.0;
    }
    if ((*param_3 & bVar3) == 0) {
      if (plVar18 != (longlong *)0x0) goto LAB_146a6b817;
    }
    else {
      iVar9 = *(int *)(param_3 + 0x130);
      lVar16 = (longlong)iVar9;
      *(uint *)(param_3 + 0x130) = iVar9 + 1U;
      if (*(uint *)(param_3 + 0x134) < iVar9 + 1U) {
        local_224 = (float)CONCAT31(local_224._1_3_,bVar11);
        local_208 = uVar14;
        FUN_14022ed06(param_3 + 8,iVar9);
        uVar14 = local_208;
        bVar11 = local_224._0_1_;
      }
      pbVar19 = param_3 + 8;
      if (*(byte **)(param_3 + 0x128) != (byte *)0x0) {
        pbVar19 = *(byte **)(param_3 + 0x128);
      }
      *(undefined8 *)(pbVar19 + lVar16 * 0x48) = local_210;
      *(float *)(pbVar19 + lVar16 * 0x48 + 8) = fVar27;
      *(float *)(pbVar19 + lVar16 * 0x48 + 0xc) = local_214;
      *(undefined4 *)(pbVar19 + lVar16 * 0x48 + 0x10) = local_220._0_4_;
      *(undefined8 *)(pbVar19 + lVar16 * 0x48 + 0x14) = uVar14;
      *(float *)(pbVar19 + lVar16 * 0x48 + 0x1c) = fVar25;
      *(float *)(pbVar19 + lVar16 * 0x48 + 0x20) = fVar21;
      *(float *)(pbVar19 + lVar16 * 0x48 + 0x24) = fVar23;
      *(float *)(pbVar19 + lVar16 * 0x48 + 0x28) = fVar29;
      *(float *)(pbVar19 + lVar16 * 0x48 + 0x2c) = fVar26;
      *(float *)(pbVar19 + lVar16 * 0x48 + 0x30) = fVar28;
      pbVar19[lVar16 * 0x48 + 0x34] = bVar11;
      *(undefined2 *)(pbVar19 + lVar16 * 0x48 + 0x35) = local_1e0;
      pbVar19[lVar16 * 0x48 + 0x37] = bStack_1de;
      *(longlong *)(pbVar19 + lVar16 * 0x48 + 0x38) = lVar17;
      *(longlong **)(pbVar19 + lVar16 * 0x48 + 0x40) = plVar18;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
LAB_146a6b817:
        LOCK();
        plVar12 = plVar18 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar18)();
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))();
          }
        }
      }
    }
  }
  plVar18 = *(longlong **)(param_1 + 0x1f8);
  bVar6 = true;
  if (plVar18 == (longlong *)0x0) {
    plVar18 = (longlong *)0x0;
    lVar16 = 0;
  }
  else {
    iVar9 = (int)plVar18[1];
    lVar16 = 0;
    do {
      if (iVar9 == 0) {
        plVar18 = (longlong *)0x0;
        goto LAB_146a6b877;
      }
      LOCK();
      iVar7 = (int)plVar18[1];
      bVar20 = iVar9 == iVar7;
      if (bVar20) {
        *(int *)(plVar18 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar20);
    lVar16 = *(longlong *)(param_1 + 0x1f0);
    bVar6 = false;
  }
LAB_146a6b877:
  if (((*(char *)(param_1 + 0x280) != '\x01') || (*(char *)(param_1 + 0x298) != '\x01')) ||
     (lVar16 == 0)) goto LAB_146a6b892;
  local_220 = param_3;
  if (((*(int *)(param_1 + 0x270) != 0) && (*(longlong **)(param_1 + 0x268) != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x30))(), cVar8 != '\0')) {
    if (*(int *)(param_1 + 0x270) == 0) {
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = *(longlong **)(param_1 + 0x268);
    }
    uVar10 = (**(code **)(*plVar12 + 0x58))();
    *(undefined4 *)(param_1 + 0x260) = uVar10;
  }
  lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x2e0) + 8);
  lVar17 = *(longlong *)(lVar16 + 0x10);
  pfVar13 = (float *)&DAT_14c84635c;
  if ((*(byte *)(lVar17 + 0x31) & 0x20) != 0) {
    pfVar13 = (float *)(lVar17 + 0x168);
  }
  uStack_1a0 = (double)pfVar13[1];
  dVar5 = (double)*pfVar13;
  local_1a8 = SUB82(dVar5,0);
  bStack_1a6 = (byte)((ulonglong)dVar5 >> 0x10);
  uStack_1a5 = (undefined1)((ulonglong)dVar5 >> 0x18);
  fStack_1a4 = (float)((ulonglong)dVar5 >> 0x20);
  FUN_146a6a8b4(&local_1e0,param_2,&local_1a8,*(undefined4 *)(param_1 + 0x260));
  fStack_1f0 = (float)*(double *)(param_1 + 0x2b0);
  fStack_1f4 = (float)*(double *)(param_1 + 0x2a8);
  fStack_1fc = (float)(double)CONCAT44(uStack_1d4,local_1d8);
  local_1f8 = 1.0;
  local_200 = (float)(double)CONCAT44(uStack_1dc,CONCAT13(uStack_1dd,CONCAT12(bStack_1de,local_1e0))
                                     );
  local_100 = *(char *)(lVar17 + 0x198);
  if (DAT_14c96b1e0 == '\0') {
    if (local_100 == '\0') goto LAB_146a6bd84;
    local_108 = *(ulonglong *)(lVar17 + 400);
    local_118 = (undefined4)*(undefined8 *)(lVar17 + 0x180);
    fStack_114 = (float)((ulonglong)*(undefined8 *)(lVar17 + 0x180) >> 0x20);
    fStack_110 = (float)*(undefined8 *)(lVar17 + 0x188);
    uStack_10c = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x188) >> 0x20);
LAB_146a6c030:
    fVar27 = (float)*(double *)(lVar17 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar27 = (0.5 - fVar27) + 0.5;
    }
    local_1e8 = CONCAT44((float)*(double *)(lVar17 + 0x178),fVar27);
    local_248 = (float *)&local_1e8;
    local_238 = param_2 + 7;
    fVar27 = param_2[2];
    local_1a8 = SUB42(fVar27,0);
    bStack_1a6 = (byte)((uint)fVar27 >> 0x10);
    uStack_1a5 = (undefined1)((uint)fVar27 >> 0x18);
    fStack_1a4 = (float)*(undefined8 *)(param_2 + 3);
    uStack_1a0._0_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
    local_240 = &local_1a8;
    FUN_146978c22(&local_158,&local_200,&local_1f8,&local_118);
    local_170 = *(longlong *)(lVar16 + 0x10);
    plVar12 = *(longlong **)(lVar16 + 0x18);
    bStack_1a6 = (byte)((ulonglong)local_158 >> 0x10);
    uStack_1a5 = (undefined1)((ulonglong)local_158 >> 0x18);
    local_1a8 = (undefined2)local_158;
    fStack_194 = local_148._4_4_;
    if (plVar12 == (longlong *)0x0) {
      local_178 = local_128;
      local_188 = CONCAT44(uStack_134,local_138);
      uStack_180 = CONCAT44(uStack_12c,uStack_130);
      fStack_190 = fStack_140;
      fStack_18c = fStack_13c;
      fStack_1a4 = local_158._4_4_;
      uStack_1a0._0_4_ = (float)uStack_150;
      uStack_1a0._4_4_ = uStack_150._4_4_;
      local_168 = (longlong *)0x0;
      local_198 = (float)local_148;
    }
    else {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      local_178 = local_128;
      fStack_1a4 = local_158._4_4_;
      uStack_1a0._0_4_ = (float)uStack_150;
      uStack_1a0._4_4_ = uStack_150._4_4_;
      local_198 = (float)local_148;
      fStack_190 = fStack_140;
      fStack_18c = fStack_13c;
      local_188 = CONCAT44(uStack_134,local_138);
      uStack_180 = CONCAT44(uStack_12c,uStack_130);
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar12 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      local_168 = plVar12;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) goto LAB_146a6bef0;
      }
    }
  }
  else {
    if (local_100 != '\0') {
      local_118 = (undefined4)*(undefined8 *)(lVar17 + 0x180);
      fStack_114 = (float)((ulonglong)*(undefined8 *)(lVar17 + 0x180) >> 0x20);
      fStack_110 = (float)*(undefined8 *)(lVar17 + 0x188);
      uStack_10c = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x188) >> 0x20);
      local_108 = *(ulonglong *)(lVar17 + 400) ^ 0x80000000;
      goto LAB_146a6c030;
    }
LAB_146a6bd84:
    uVar4 = *(undefined1 *)(param_2 + 0xd);
    uStack_1a0._0_4_ = param_2[2];
    fStack_18c = param_2[7];
    fVar27 = param_2[8];
    fVar23 = param_2[10];
    fVar21 = param_2[9];
    fVar22 = fStack_1f4 * fVar27 + fVar23 * fStack_1f0 + param_2[0xc];
    fVar24 = fStack_1f4 * fStack_18c + fVar21 * fStack_1f0 + param_2[0xb];
    fVar25 = fVar27 * 0.0 + fVar23;
    fVar26 = fStack_18c * 0.0 + fVar21;
    fVar27 = fVar23 * 0.0 + fVar27;
    local_198 = fStack_1f0 * (float)uStack_1a0 + param_2[4];
    uStack_1a0._4_4_ = fStack_1f4 * (float)uStack_1a0 + param_2[3];
    fStack_18c = fVar21 * 0.0 + fStack_18c;
    plVar12 = *(longlong **)(lVar16 + 0x18);
    bStack_1a6 = (byte)((uint)local_200 >> 0x10);
    uStack_1a5 = (undefined1)((uint)local_200 >> 0x18);
    local_1a8 = SUB42(local_200,0);
    fStack_1a4 = fStack_1fc;
    fStack_194 = fStack_1f4;
    fStack_190 = fStack_1f0;
    local_170 = lVar17;
    if (plVar12 == (longlong *)0x0) {
      local_188 = CONCAT44(fVar26,fVar27);
      uStack_180 = CONCAT44(fVar24,fVar25);
      local_178 = CONCAT35(local_178._5_3_,CONCAT14(uVar4,fVar22)) & 0xffffff01ffffffff;
      local_168 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      local_188 = CONCAT44(fVar26,fVar27);
      uStack_180 = CONCAT44(fVar24,fVar25);
      local_178 = CONCAT17(local_158._2_1_,CONCAT25((undefined2)local_158,CONCAT14(uVar4,fVar22))) &
                  0xffffff01ffffffff;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar12 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      local_168 = plVar12;
      if ((int)*plVar2 != 0) goto LAB_146a6bfb1;
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_146a6bfb1;
LAB_146a6bef0:
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_146a6bfb1:
  FUN_1402018be(local_220,&local_1a8);
  plVar12 = local_168;
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_168 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
LAB_146a6b892:
  if (!bVar6) {
    LOCK();
    plVar12 = plVar18 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a6c1fa FUN_146a6c1fa body=1140 status=ok
// SIG undefined FUN_146a6c1fa(void)

int FUN_146a6c1fa(undefined1 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 **param_5,int param_6,undefined1 **param_7,char param_8)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined1 auStack_308 [32];
  undefined1 **local_2e8;
  int local_2e0;
  undefined1 **local_2d8;
  undefined1 local_2d0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  longlong *local_2b0;
  undefined1 *local_2a8;
  undefined1 *puStack_2a0;
  undefined1 *local_298;
  undefined1 *puStack_290;
  undefined1 *local_288;
  undefined1 *puStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined1 *local_238;
  longlong *plStack_230;
  undefined1 *local_228;
  undefined1 *puStack_220;
  undefined1 *local_218;
  undefined1 *puStack_210;
  undefined1 local_188 [8];
  undefined4 local_180 [14];
  longlong local_148 [2];
  undefined4 local_138 [54];
  undefined4 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_188[0] = DAT_14c96b238;
  local_60 = (undefined4 *)0x0;
  local_58 = 0x400000000;
  local_50 = 0;
  FUN_144911a0c(param_1,param_3,local_188,0);
  if (0 < (int)local_58) {
    puVar10 = local_60;
    if (local_60 == (undefined4 *)0x0) {
      puVar10 = local_180;
    }
    plVar9 = local_148;
    if (local_60 != (undefined4 *)0x0) {
      plVar9 = (longlong *)(local_60 + 0xe);
    }
    lVar8 = *plVar9;
    lVar4 = *(longlong *)(**(longlong **)(param_1 + 0x2e0) + 0x10);
    if (lVar8 == lVar4) {
      if (param_8 == '\0') {
        local_2d0 = 0;
      }
      else {
        local_2d0 = param_1[0x3a];
      }
      local_2e0 = param_6 + 1;
      local_238 = (undefined1 *)*param_2;
      plStack_230 = (longlong *)param_2[1];
      local_228 = (undefined1 *)param_2[2];
      local_218 = (undefined1 *)param_2[4];
      puStack_210 = (undefined1 *)param_2[5];
      local_2d8 = param_7;
      local_2e8 = param_5;
      puStack_220 = param_1;
      param_6 = FUN_14016eaf2(lVar8,&local_238,puVar10,param_4);
    }
    if ((((param_1[0x280] == '\x01') && (*(longlong *)(param_1 + 0x200) != 0)) &&
        (*(longlong *)(param_1 + 0x208) != 0)) && (0 < *(int *)(*(longlong *)(param_1 + 0x208) + 8))
       ) {
      if (lVar8 == lVar4) {
        if ((int)local_58 < 2) goto LAB_146a6c541;
        puVar10 = local_60 + 0x12;
        if (local_60 == (undefined4 *)0x0) {
          puVar10 = local_138;
        }
      }
      else {
        if ((int)local_58 != 1) goto LAB_146a6c541;
        puVar10 = local_180;
        if (local_60 != (undefined4 *)0x0) {
          puVar10 = local_60;
        }
      }
      if (puVar10 != (undefined4 *)0x0) {
        if (param_1[0x2a0] == '\x01') {
          if (param_1[0x2a2] == '\x01') {
            local_2a8 = *param_7;
            puStack_2a0 = param_7[1];
            local_298 = param_7[2];
            puStack_290 = param_7[3];
            local_288 = param_7[4];
            puStack_280 = param_7[5];
          }
          else {
            local_2a8 = &DAT_3f8000003f800000;
            puStack_2a0 = &DAT_3f8000003f800000;
            local_298 = &DAT_3f8000003f800000;
            puStack_290 = &DAT_3f8000003f800000;
            local_288 = (undefined1 *)0x3f19999a3f19999a;
            puStack_280 = (undefined1 *)0x3f19999a3f19999a;
          }
          local_248 = *(undefined8 *)(puVar10 + 0xc);
          local_278 = *puVar10;
          uStack_274 = puVar10[1];
          uStack_270 = puVar10[2];
          uStack_26c = puVar10[3];
          local_268 = puVar10[4];
          uStack_264 = puVar10[5];
          uStack_260 = puVar10[6];
          uStack_25c = puVar10[7];
          local_258 = puVar10[8];
          uStack_254 = puVar10[9];
          uStack_250 = puVar10[10];
          uStack_24c = puVar10[0xb];
          local_2b8 = *(undefined8 *)(puVar10 + 0xe);
          local_2b0 = *(longlong **)(puVar10 + 0x10);
          if (local_2b0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_2b0 + 1) = (int)local_2b0[1] + 1;
            UNLOCK();
          }
          local_2e0 = CONCAT31(local_2e0._1_3_,param_8);
          local_2e8 = &local_2a8;
          FUN_142869280(&local_238,&local_2b8,param_2,&local_278);
          FUN_140579244(param_5,&local_238);
          if (plStack_230 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plStack_230 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plStack_230 + 0x10))();
            }
          }
          plVar9 = local_2b0;
          if (local_2b0 == (longlong *)0x0) goto LAB_146a6c541;
          LOCK();
          plVar2 = local_2b0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 != 0) goto LAB_146a6c541;
          (**(code **)*local_2b0)(local_2b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 != 0) goto LAB_146a6c541;
          lVar8 = *plVar9;
        }
        else {
          plVar9 = *(longlong **)(param_1 + 0x1f8);
          if (plVar9 == (longlong *)0x0) goto LAB_146a6c541;
          uVar7 = (ulonglong)*(uint *)(plVar9 + 1);
          do {
            uVar6 = (uint)uVar7;
            if (uVar6 == 0) goto LAB_146a6c541;
            LOCK();
            uVar3 = *(uint *)(plVar9 + 1);
            if (uVar6 == uVar3) {
              *(uint *)(plVar9 + 1) = uVar6 + 1;
            }
            else {
              uVar7 = (ulonglong)uVar3;
            }
            UNLOCK();
          } while (uVar6 != uVar3);
          if (*(longlong *)(param_1 + 0x1f0) != 0) {
            if (param_8 == '\0') {
              local_2bc = 0;
            }
            else {
              local_2bc = (undefined4)CONCAT71((int7)(uVar7 >> 8),param_1[0x3a]);
            }
            uVar5 = *(undefined8 *)(puVar10 + 0xe);
            if (param_1[0x2a2] == '\x01') {
              local_238 = *param_7;
              plStack_230 = (longlong *)param_7[1];
              local_228 = param_7[2];
              puStack_220 = param_7[3];
              local_218 = param_7[4];
              puStack_210 = param_7[5];
            }
            else {
              local_238 = &DAT_3f8000003f800000;
              plStack_230 = (longlong *)&DAT_3f8000003f800000;
              local_228 = &DAT_3f8000003f800000;
              puStack_220 = &DAT_3f8000003f800000;
              local_218 = (undefined1 *)0x3f19999a3f19999a;
              puStack_210 = (undefined1 *)0x3f19999a3f19999a;
            }
            FUN_146980a5e(*(longlong *)(param_1 + 0x1f0),&local_2b8);
            local_2a8 = (undefined1 *)*param_2;
            puStack_2a0 = (undefined1 *)param_2[1];
            local_298 = (undefined1 *)param_2[2];
            local_288 = (undefined1 *)param_2[4];
            puStack_280 = (undefined1 *)param_2[5];
            local_2d0 = (undefined1)local_2bc;
            local_2d8 = &local_238;
            local_2e8 = param_5;
            local_2e0 = param_6 + 1;
            puStack_290 = param_1;
            FUN_14016eaf2(uVar5,&local_2a8,puVar10,&local_2b8);
          }
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 != 0) goto LAB_146a6c541;
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 != 0) goto LAB_146a6c541;
          lVar8 = *plVar9;
        }
        (**(code **)(lVar8 + 0x10))(plVar9);
      }
    }
  }
LAB_146a6c541:
  FUN_144715780(local_180);
  if ((local_48 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 146a6c670 FUN_146a6c670 body=239 status=ok
// SIG undefined FUN_146a6c670(void)

void FUN_146a6c670(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  uStack_28 = 0;
  FUN_140a55872(**(longlong **)(param_1 + 0x2e0) + 0x28,**(longlong **)(param_1 + 0x2e0) + 0x20,
                &local_48);
  FUN_1449db362(&local_30);
  lVar3 = **(longlong **)(param_1 + 0x2e0);
  FUN_14149270a(lVar3);
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  *(longlong *)(lVar3 + 0x18) = lVar5;
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
  FUN_140a5503c(lVar3);
  plVar6 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6c760 FUN_146a6c760 body=346 status=ok
// SIG undefined FUN_146a6c760(void)

void FUN_146a6c760(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x220) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x228);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x228) = 0;
LAB_146a6c7bf:
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000146a6c7ec:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x220) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x228);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar4;
        goto joined_r0x000146a6c7ec;
      }
    }
    else {
      *(longlong **)(param_1 + 0x228) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_146a6c7bf;
    }
  }
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x230) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x238);
    if (plVar5 == (longlong *)0x0) goto LAB_146a6c87f;
    *(undefined8 *)(param_1 + 0x238) = 0;
LAB_146a6c847:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a6c87f;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x230) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x238);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x238) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_146a6c87f;
      goto LAB_146a6c847;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146a6c87f;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_146a6c87f:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146a6c8ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a6c8ba FUN_146a6c8ba body=169 status=ok
// SIG undefined FUN_146a6c8ba(void)

char * FUN_146a6c8ba(char *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = (longlong)*(int *)(param_2 + 0x130);
  if (0 < lVar5) {
    uVar6 = lVar5 + 1;
    lVar5 = lVar5 * 0x48 + -0x10;
    do {
      lVar4 = *(longlong *)(param_2 + 0x128);
      if (*(longlong *)(param_2 + 0x128) == 0) {
        lVar4 = param_2 + 8;
      }
      (**(code **)(**(longlong **)(lVar4 + lVar5) + 0x120))(*(longlong **)(lVar4 + lVar5),param_1);
      if (*param_1 != '\0') {
        return param_1;
      }
      plVar3 = *(longlong **)(param_1 + 0x10);
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
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + -0x48;
    } while (1 < uVar6);
  }
  *param_1 = '\x01';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\x01';
  return param_1;
}



// FUNCTION 146a6c964 FUN_146a6c964 body=121 status=ok
// SIG undefined FUN_146a6c964(void)

undefined8
FUN_146a6c964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = *param_4;
  FUN_146a7f5bc(local_30,param_3);
  FUN_1469b1686(param_1,param_2,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6c9de FUN_146a6c9de body=253 status=ok
// SIG undefined FUN_146a6c9de(void)

void FUN_146a6c9de(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)((longlong)param_1 + 0x279) = 1;
  FUN_146a6cadc();
  if (((int)param_1[0x4b] != 0) && ((longlong *)param_1[0x4a] != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_1[0x4a] + 0x30))();
    if (cVar3 != '\0') {
      if ((int)param_1[0x4b] == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[0x4a];
      }
      (**(code **)(*plVar4 + 0x58))(plVar4,0);
    }
  }
  if (((int)param_1[0x49] != 0) && ((longlong *)param_1[0x48] != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_1[0x48] + 0x30))();
    if (cVar3 != '\0') {
      local_28 = DAT_14c98dec8;
      local_20 = DAT_14c98ded0;
      if (DAT_14c98ded0 != 0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*param_1 + 0x240))(param_1,&local_28);
    }
  }
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 != (longlong *)0x0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6cadc FUN_146a6cadc body=309 status=ok
// SIG undefined FUN_146a6cadc(void)

void FUN_146a6cadc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  longlong *plStack_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50[0] = 0;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  local_38 = 0x100;
  FUN_1428f57d4(param_1 + 0x280,local_50);
  plVar3 = plStack_40;
  *(undefined2 *)(param_1 + 0x298) = local_38;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x208);
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  plVar3 = *(longlong **)(param_1 + 0x218);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x218) = 0;
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
  plVar3 = *(longlong **)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_146a6cc12(*(undefined8 *)(*(longlong *)(param_1 + 0x2e0) + 8),&DAT_14c98dec8);
  FUN_140163244(param_1,0xc);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6cc12 FUN_146a6cc12 body=97 status=ok
// SIG undefined FUN_146a6cc12(void)

longlong FUN_146a6cc12(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_14149270a();
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(longlong *)(param_1 + 0x18) = lVar4;
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
  FUN_140a5503c(param_1);
  return param_1;
}



// FUNCTION 146a6cc74 FUN_146a6cc74 body=321 status=ok
// SIG undefined FUN_146a6cc74(void)

double * FUN_146a6cc74(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  if (*(char *)(param_1 + 0x280) == '\x01') {
    if (*(char *)(param_1 + 0x298) == '\x01') {
      if (((*(longlong *)(param_1 + 0x200) != 0) && (*(longlong *)(param_1 + 0x208) != 0)) &&
         (0 < *(int *)(*(longlong *)(param_1 + 0x208) + 8))) {
        uVar4 = *(undefined4 *)(param_1 + 700);
        uVar5 = *(undefined4 *)(param_1 + 0x2c0);
        uVar6 = *(undefined4 *)(param_1 + 0x2c4);
        *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x2b8);
        *(undefined4 *)((longlong)param_2 + 4) = uVar4;
        *(undefined4 *)(param_2 + 1) = uVar5;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
    }
    else if (((*(char *)(param_1 + 0x298) == '\0') && (*(longlong *)(param_1 + 0x1f0) != 0)) &&
            ((plVar3 = *(longlong **)(param_1 + 0x1f8), plVar3 != (longlong *)0x0 &&
             (0 < (int)plVar3[1])))) {
      iVar8 = (int)plVar3[1];
      do {
        if (iVar8 == 0) {
          FUN_144b016b8(0,&local_28);
          *param_2 = (double)local_28;
          param_2[1] = (double)local_24;
          goto LAB_146a6cd96;
        }
        LOCK();
        iVar7 = (int)plVar3[1];
        bVar9 = iVar8 == iVar7;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
      } while (!bVar9);
      FUN_144b016b8(*(undefined8 *)(param_1 + 0x1f0),&local_28);
      *param_2 = (double)local_28;
      param_2[1] = (double)local_24;
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
  }
LAB_146a6cd96:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a6cdb8 FUN_146a6cdb8 body=99 status=ok
// SIG undefined FUN_146a6cdb8(void)

void FUN_146a6cdb8(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x264) == '\x01') {
    cVar1 = FUN_146a6ce1c((undefined4 *)(param_1 + 0x260),param_2);
    if (cVar1 != '\0') goto LAB_146a6ce08;
  }
  *(undefined1 *)(param_1 + 0x264) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 0x260) = *param_2;
  FUN_146a74bd4(param_1 + 0x268,param_2 + 2);
  FUN_140163244(param_1,1);
LAB_146a6ce08:
  FUN_1449db362(param_2 + 2);
  return;
}



// FUNCTION 146a6ce1c FUN_146a6ce1c body=234 status=ok
// SIG undefined FUN_146a6ce1c(void)

bool FUN_146a6ce1c(int *param_1,int *param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1[4] == 0) || (*(longlong **)(param_1 + 2) == (longlong *)0x0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 2) + 0x30))();
  }
  if (*(longlong **)(param_2 + 2) == (longlong *)0x0 || param_2[4] == 0) {
    if (cVar2 == '\0') {
LAB_146a6cebc:
      if ((char)param_1[1] == (char)param_2[1]) {
        bVar4 = *param_1 == *param_2;
        goto LAB_146a6ce7d;
      }
    }
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_2 + 2) + 0x30))();
    if (cVar2 == cVar3) {
      if (cVar2 != '\0') {
        if ((param_1[4] == 0) || (plVar1 = *(longlong **)(param_1 + 2), plVar1 == (longlong *)0x0))
        {
          local_28 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        }
        plVar1 = *(longlong **)(param_2 + 2);
        if (plVar1 == (longlong *)0x0 || param_2[4] == 0) {
          local_30 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_30);
        }
        bVar4 = local_28 == local_30;
        goto LAB_146a6ce7d;
      }
      goto LAB_146a6cebc;
    }
  }
  bVar4 = false;
LAB_146a6ce7d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6cf08 FUN_146a6cf08 body=22 status=ok
// SIG undefined FUN_146a6cf08(void)

void FUN_146a6cf08(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x278) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x278) = param_2;
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146a6cf1e FUN_146a6cf1e body=162 status=ok
// SIG undefined FUN_146a6cf1e(void)

undefined8 FUN_146a6cf1e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  uVar4 = DAT_14c98e618;
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(longlong *)(param_1 + 0x200) == 0) || (lVar2 = *(longlong *)(param_1 + 0x208), lVar2 == 0)
      ) || (*(int *)(lVar2 + 8) < 1)) {
    uVar4 = 0;
  }
  else {
    local_18 = 0;
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) {
        local_10 = 0;
        goto LAB_146a6cfb2;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar5 = iVar3 == iVar1;
      if (bVar5) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar5);
    local_10 = lVar2;
    if (lVar2 != 0) {
      local_18 = *(undefined8 *)(param_1 + 0x200);
    }
LAB_146a6cfb2:
    uVar4 = FUN_1469aa192(uVar4,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 146a6d02e FUN_146a6d02e body=129 status=ok
// SIG undefined FUN_146a6d02e(void)

void FUN_146a6d02e(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(longlong *)(param_1 + 0x20) != 0) && (lVar3 = *(longlong *)(param_1 + 0x28), lVar3 != 0))
     && (0 < *(int *)(lVar3 + 8))) {
    iVar2 = *(int *)(lVar3 + 8);
    local_18 = 0;
    do {
      if (iVar2 == 0) {
        lVar3 = 0;
        goto LAB_146a6d09a;
      }
      LOCK();
      iVar1 = *(int *)(lVar3 + 8);
      bVar4 = iVar2 == iVar1;
      if (bVar4) {
        *(int *)(lVar3 + 8) = iVar2 + 1;
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      UNLOCK();
    } while (!bVar4);
    local_18 = *(undefined8 *)(param_1 + 0x20);
LAB_146a6d09a:
    local_10 = lVar3;
    FUN_146a6c9de(param_1 + -0x1e0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a6d0b8 FUN_146a6d0b8 body=353 status=ok
// SIG undefined FUN_146a6d0b8(void)

undefined8 * FUN_146a6d0b8(undefined8 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  FUN_140a560dc();
  *(undefined1 *)(param_1 + 0x3d) = 1;
  *param_1 = &PTR_FUN_149f10d00;
  param_1[0x3c] = &PTR_LAB_149f10f50;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  uVar5 = DAT_14c98dec8;
  param_1[0x44] = DAT_14c98dec8;
  lVar6 = DAT_14c98ded0;
  param_1[0x45] = DAT_14c98ded0;
  if (lVar6 == 0) {
    param_1[0x46] = uVar5;
    param_1[0x47] = 0;
  }
  else {
    LOCK();
    piVar1 = (int *)(lVar6 + 8);
    *piVar1 = *piVar1 + 1;
    lVar6 = DAT_14c98ded0;
    UNLOCK();
    param_1[0x46] = DAT_14c98dec8;
    param_1[0x47] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
  }
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x264) = 0;
  *(undefined1 *)((longlong)param_1 + 0x279) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined2 *)(param_1 + 0x53) = 0x100;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x55) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = uVar2;
  *(undefined4 *)(param_1 + 0x56) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar4;
  param_1[0x59] = &PTR__purecall_149ef0700;
  param_1[0x5a] = param_1;
  FUN_1446ddc76(param_1 + 0x5b,"Children",1);
  param_1[0x59] = &PTR_LAB_149f133b0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  return param_1;
}



// FUNCTION 146a6d21a FUN_146a6d21a body=7167 status=ok
// SIG undefined FUN_146a6d21a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_146a6d21a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  code **ppcVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 auStack_18b8 [32];
  code **local_1898;
  undefined8 local_1890;
  undefined8 local_1888;
  longlong *local_1880;
  undefined1 local_1871;
  undefined8 local_1870;
  longlong *local_1868;
  undefined1 local_1851;
  code *local_1850;
  undefined4 local_1848;
  undefined4 uStack_1844;
  undefined8 local_1838;
  longlong *local_1830;
  undefined8 local_1828;
  longlong *local_1820;
  undefined1 local_1811;
  undefined1 local_1810 [8];
  longlong *local_1808;
  undefined1 local_17f1;
  undefined8 local_17f0;
  longlong *local_17e8;
  undefined8 local_17d8;
  longlong *local_17d0;
  undefined8 local_17c8;
  longlong *local_17c0;
  undefined1 local_17b1;
  undefined8 local_17b0;
  longlong *local_17a8;
  undefined2 local_1798;
  undefined8 local_1790;
  undefined4 local_1788;
  undefined2 local_1780;
  undefined8 local_1778;
  undefined4 local_1770;
  undefined2 local_1768;
  undefined8 local_1760;
  undefined4 local_1758;
  undefined8 local_1750;
  longlong local_1748;
  undefined8 local_1740;
  longlong local_1738;
  undefined2 local_1730;
  undefined8 local_1728;
  undefined4 local_1720;
  undefined2 local_1718;
  undefined8 local_1710;
  undefined4 local_1708;
  undefined4 local_1700;
  undefined1 local_16fc;
  undefined8 local_16f8;
  undefined4 local_16f0;
  undefined4 local_16e8;
  undefined4 uStack_16e4;
  undefined4 uStack_16e0;
  undefined4 uStack_16dc;
  undefined1 local_16d8;
  undefined8 local_16d0;
  undefined4 local_16c8;
  undefined4 local_16b8;
  undefined1 local_16b4;
  undefined8 local_16b0;
  undefined4 local_16a8;
  undefined2 local_16a0;
  undefined8 local_1698;
  undefined4 local_1690;
  undefined2 local_1688;
  undefined8 local_1680;
  undefined4 local_1678;
  undefined2 local_1670;
  undefined8 local_1668;
  undefined4 local_1660;
  undefined2 local_1658;
  undefined8 local_1650;
  undefined4 local_1648;
  undefined2 local_1640;
  undefined8 local_1638;
  undefined4 local_1630;
  undefined4 local_1628;
  undefined1 local_1624;
  undefined8 local_1620;
  undefined4 local_1618;
  undefined2 local_1610;
  undefined8 local_1608;
  undefined4 local_1600;
  undefined2 local_15f8;
  undefined8 local_15f0;
  undefined4 local_15e8;
  undefined8 local_15e0;
  longlong local_15d8;
  longlong *local_15d0;
  undefined4 local_15c8;
  undefined1 local_15c0;
  undefined8 local_15b8;
  undefined4 local_15b0;
  longlong *local_15a8;
  undefined4 local_15a0;
  undefined1 local_1598;
  undefined8 local_1590;
  undefined4 local_1588;
  longlong *local_1580;
  undefined4 local_1578;
  undefined1 local_1570;
  undefined8 local_1568;
  undefined4 local_1560;
  undefined8 local_1558;
  longlong *local_1550;
  undefined8 local_1548;
  longlong *local_1540;
  undefined4 local_1538;
  undefined1 local_1534;
  undefined8 local_1530;
  undefined8 uStack_1528;
  undefined8 local_1520;
  longlong *local_1518;
  undefined8 local_1510;
  longlong *local_1508;
  undefined4 local_1500;
  undefined1 local_14fc;
  undefined8 local_14f8;
  undefined8 uStack_14f0;
  undefined8 local_14e8;
  longlong *local_14e0;
  undefined8 local_14d8;
  undefined8 local_14d0;
  undefined1 local_14c8;
  undefined8 local_14c0;
  undefined8 uStack_14b8;
  undefined8 local_14b0;
  undefined8 local_14a8;
  undefined1 local_14a0;
  undefined8 local_1498;
  undefined8 uStack_1490;
  code *local_1488;
  undefined4 local_1480;
  longlong local_12b0;
  longlong *local_12a8;
  undefined1 local_11e0 [192];
  code *local_1120;
  undefined4 local_1118;
  undefined4 uStack_1114;
  longlong local_f48;
  longlong *local_f40;
  undefined1 local_e78 [192];
  code *local_db8;
  undefined4 local_db0 [104];
  longlong local_c10;
  undefined1 local_be8;
  undefined4 local_be4;
  undefined8 local_bd8;
  undefined8 local_bd0;
  undefined1 local_bc8;
  undefined1 local_bc0 [56];
  undefined4 local_b88;
  undefined1 local_b84;
  undefined1 local_b80 [16];
  undefined2 local_b70;
  undefined1 local_b68 [16];
  undefined2 local_b58;
  undefined1 local_b50 [16];
  longlong local_b40;
  undefined4 local_ac0;
  undefined4 uStack_abc;
  undefined4 uStack_ab8;
  undefined4 uStack_ab4;
  undefined1 local_ab0;
  undefined1 local_aa8 [16];
  undefined4 local_a98;
  undefined1 local_a94;
  undefined1 local_a90 [40];
  undefined4 local_a68;
  undefined1 local_a64;
  undefined1 local_a60 [16];
  undefined2 local_a50;
  undefined1 local_a48 [48];
  undefined1 local_a18 [16];
  undefined1 local_a08 [16];
  undefined1 local_9f8 [16];
  undefined2 local_9e8;
  undefined1 local_9e0 [16];
  undefined2 local_9d0;
  undefined1 local_9c8 [16];
  undefined2 local_9b8;
  undefined1 local_9b0 [16];
  undefined2 local_9a0;
  undefined1 local_998 [16];
  undefined2 local_988;
  undefined1 local_980 [16];
  undefined2 local_970;
  undefined1 local_968 [16];
  undefined2 local_958;
  undefined1 local_950 [16];
  undefined1 local_940 [16];
  undefined1 local_930 [16];
  undefined1 local_920 [16];
  undefined1 auStack_910 [16];
  undefined1 local_900 [16];
  undefined1 local_8f0 [16];
  undefined1 local_8e0 [16];
  undefined1 local_8d0 [16];
  undefined1 local_8c0;
  undefined1 local_8bf;
  undefined2 local_8b8;
  undefined1 local_8b0 [16];
  undefined2 local_8a0;
  undefined1 local_898 [16];
  undefined1 local_888;
  char local_887;
  undefined1 local_886;
  char local_885;
  undefined1 local_884;
  char local_883;
  undefined1 local_880 [64];
  undefined4 local_840;
  undefined1 local_83c;
  undefined4 local_838;
  undefined1 local_834;
  undefined1 local_7c0 [440];
  undefined1 local_608 [64];
  undefined4 local_5c8;
  undefined1 local_5c4;
  undefined4 local_5c0;
  undefined1 local_5bc;
  undefined1 local_548 [440];
  undefined8 local_390;
  longlong *plStack_388;
  undefined1 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_1e8;
  longlong *local_1e0;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x146a6d230;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_18b8;
  FUN_146a6ee1a(param_1,*(undefined8 *)(param_2 + 0x1a8));
  uVar8 = *(undefined4 *)(param_2 + 0x5fc);
  uVar9 = *(undefined4 *)(param_2 + 0x600);
  uVar10 = *(undefined4 *)(param_2 + 0x604);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x5f8);
  *(undefined4 *)(param_1 + 0x2b4) = uVar8;
  *(undefined4 *)(param_1 + 0x2b8) = uVar9;
  *(undefined4 *)(param_1 + 700) = uVar10;
  *(undefined1 *)(param_1 + 0x2c0) = *(undefined1 *)(param_2 + 0x608);
  FUN_140a58be0(param_1 + 0x2c8,param_2 + 0x610);
  uVar8 = *(undefined4 *)(param_2 + 0x44c);
  uVar9 = *(undefined4 *)(param_2 + 0x450);
  uVar10 = *(undefined4 *)(param_2 + 0x454);
  *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x448);
  *(undefined4 *)(param_1 + 0x2dc) = uVar8;
  *(undefined4 *)(param_1 + 0x2e0) = uVar9;
  *(undefined4 *)(param_1 + 0x2e4) = uVar10;
  *(undefined1 *)(param_1 + 0x2e8) = *(undefined1 *)(param_2 + 0x458);
  FUN_140a58be0(param_1 + 0x2f0,param_2 + 0x460);
  uVar8 = *(undefined4 *)(param_2 + 0x474);
  uVar9 = *(undefined4 *)(param_2 + 0x478);
  uVar10 = *(undefined4 *)(param_2 + 0x47c);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x470);
  *(undefined4 *)(param_1 + 0x304) = uVar8;
  *(undefined4 *)(param_1 + 0x308) = uVar9;
  *(undefined4 *)(param_1 + 0x30c) = uVar10;
  *(undefined1 *)(param_1 + 0x310) = *(undefined1 *)(param_2 + 0x480);
  FUN_140a58be0(param_1 + 0x318,param_2 + 0x488);
  FUN_1412cc59c(param_1 + 0x328,param_2 + 0x240);
  *(undefined1 *)(param_1 + 0x388) = *(undefined1 *)(param_2 + 0x2a0);
  FUN_140a5d470(param_1 + 0x390,param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 0x2c8);
  uVar8 = *(undefined4 *)(param_2 + 700);
  uVar9 = *(undefined4 *)(param_2 + 0x2c0);
  uVar10 = *(undefined4 *)(param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(param_2 + 0x2b8);
  *(undefined4 *)(param_1 + 0x3a4) = uVar8;
  *(undefined4 *)(param_1 + 0x3a8) = uVar9;
  *(undefined4 *)(param_1 + 0x3ac) = uVar10;
  *(undefined1 *)(param_1 + 0x3b4) = *(undefined1 *)(param_2 + 0x2cc);
  FUN_140a5aaa0(param_1 + 0x3b8,param_2 + 0x2d0);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x5e0);
  uVar8 = *(undefined4 *)(param_2 + 0x5d4);
  uVar9 = *(undefined4 *)(param_2 + 0x5d8);
  uVar10 = *(undefined4 *)(param_2 + 0x5dc);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x5d0);
  *(undefined4 *)(param_1 + 0x3cc) = uVar8;
  *(undefined4 *)(param_1 + 0x3d0) = uVar9;
  *(undefined4 *)(param_1 + 0x3d4) = uVar10;
  *(undefined1 *)(param_1 + 0x3dc) = *(undefined1 *)(param_2 + 0x5e4);
  FUN_140a5aaa0(param_1 + 0x3e0,param_2 + 0x5e8);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_2 + 0x2f0);
  uVar8 = *(undefined4 *)(param_2 + 0x2e4);
  uVar9 = *(undefined4 *)(param_2 + 0x2e8);
  uVar10 = *(undefined4 *)(param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_2 + 0x2e0);
  *(undefined4 *)(param_1 + 0x3f4) = uVar8;
  *(undefined4 *)(param_1 + 0x3f8) = uVar9;
  *(undefined4 *)(param_1 + 0x3fc) = uVar10;
  *(undefined1 *)(param_1 + 0x404) = *(undefined1 *)(param_2 + 0x2f4);
  FUN_140a5aaa0(param_1 + 0x408,param_2 + 0x2f8);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x318);
  uVar8 = *(undefined4 *)(param_2 + 0x30c);
  uVar9 = *(undefined4 *)(param_2 + 0x310);
  uVar10 = *(undefined4 *)(param_2 + 0x314);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_2 + 0x308);
  *(undefined4 *)(param_1 + 0x41c) = uVar8;
  *(undefined4 *)(param_1 + 0x420) = uVar9;
  *(undefined4 *)(param_1 + 0x424) = uVar10;
  *(undefined1 *)(param_1 + 0x42c) = *(undefined1 *)(param_2 + 0x31c);
  FUN_140a5aaa0(param_1 + 0x430,param_2 + 800);
  *(undefined2 *)(param_1 + 0x458) = *(undefined2 *)(param_2 + 0x5b8);
  local_1880 = (longlong *)(param_2 + 0x5c0);
  FUN_14096c7c0(param_1 + 0x460);
  FUN_14628081e(param_1 + 0x4e0,param_2 + 0x4b8);
  FUN_146a24ff4(param_1 + 0x500,param_2 + 0x4d8);
  FUN_146a25078(param_1 + 0x4f0,param_2 + 0x4c8);
  *(bool *)(param_1 + 0x480) = *(longlong *)(param_2 + 0x428) != 0;
  lVar14 = *(longlong *)(param_2 + 0x428);
  lVar4 = *(longlong *)(param_2 + 0x430);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x490);
  *(longlong *)(param_1 + 0x488) = lVar14;
  *(longlong *)(param_1 + 0x490) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar5 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    lVar14 = *(longlong *)(param_1 + 0x488);
  }
  if (lVar14 == 0) {
    FUN_146a6ef34(&local_db8);
    local_c10 = *(longlong *)(param_2 + 0x1a8) + 0x630;
    local_be4 = 0;
    local_be8 = *(undefined1 *)(param_2 + 0x420);
    local_14b0 = 0x4022000000000000;
    local_14a8 = 0x4022000000000000;
    local_14a0 = 1;
    local_1498 = 0;
    uStack_1490 = 0;
    local_bc8 = 1;
    local_bd8 = 0x4022000000000000;
    local_bd0 = 0x4022000000000000;
    FUN_144a450dc(local_bc0,&local_1498);
    FUN_1449db362(&local_1498);
    local_1898 = &local_1488;
    FUN_146a7fc04(&local_390,"SScrollBar",
                  ".\\Runtime/Slate/Private/Widgets/Input/SMultiLineEditableTextBox.cpp",0x39);
    FUN_146a6f02a(&local_390,&local_1120,&local_db8);
    plVar5 = (longlong *)CONCAT44(uStack_1114,local_1118);
    if (plVar5 == (longlong *)0x0) {
      *(code **)(param_1 + 0x488) = local_1120;
      plVar16 = *(longlong **)(param_1 + 0x490);
      if (plVar16 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x490) = 0;
LAB_146a6ecd5:
        LOCK();
        plVar5 = plVar16 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar3 = *piVar1;
          UNLOCK();
joined_r0x000146a6ec83:
          if (iVar3 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(code **)(param_1 + 0x488) = local_1120;
      plVar16 = *(longlong **)(param_1 + 0x490);
      if (plVar5 == plVar16) {
        LOCK();
        plVar16 = plVar5 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar3 = *piVar1;
          UNLOCK();
          plVar16 = plVar5;
          goto joined_r0x000146a6ec83;
        }
      }
      else {
        *(longlong **)(param_1 + 0x490) = plVar5;
        if (plVar16 != (longlong *)0x0) goto LAB_146a6ecd5;
      }
    }
    plVar5 = (longlong *)CONCAT44(uStack_1114,local_1118);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar5 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    plVar5 = plStack_388;
    if (plStack_388 != (longlong *)0x0) {
      LOCK();
      plVar16 = plStack_388 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plStack_388)(plStack_388);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    FUN_146a6f09e(&local_db8);
  }
  *(bool *)(param_1 + 0x4a8) = *(longlong *)(param_2 + 0x438) != 0;
  lVar14 = *(longlong *)(param_2 + 0x438);
  lVar4 = *(longlong *)(param_2 + 0x440);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x4b8);
  *(longlong *)(param_1 + 0x4b0) = lVar14;
  *(longlong *)(param_1 + 0x4b8) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar5 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    lVar14 = *(longlong *)(param_1 + 0x4b0);
  }
  if (lVar14 == 0) {
    FUN_146a6ef34(&local_db8);
    local_c10 = *(longlong *)(param_2 + 0x1a8) + 0x630;
    local_be4 = 1;
    local_be8 = *(undefined1 *)(param_2 + 0x420);
    local_14d8 = 0x4022000000000000;
    local_14d0 = 0x4022000000000000;
    local_14c8 = 1;
    local_14c0 = 0;
    uStack_14b8 = 0;
    local_bc8 = 1;
    local_bd8 = 0x4022000000000000;
    local_bd0 = 0x4022000000000000;
    FUN_144a450dc(local_bc0,&local_14c0);
    FUN_1449db362(&local_14c0);
    local_1898 = &local_1488;
    FUN_146a7fc04(&local_390,"SScrollBar",
                  ".\\Runtime/Slate/Private/Widgets/Input/SMultiLineEditableTextBox.cpp",0x45);
    FUN_146a6f02a(&local_390,&local_1120,&local_db8);
    plVar5 = (longlong *)CONCAT44(uStack_1114,local_1118);
    if (plVar5 == (longlong *)0x0) {
      *(code **)(param_1 + 0x4b0) = local_1120;
      plVar16 = *(longlong **)(param_1 + 0x4b8);
      if (plVar16 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x4b8) = 0;
LAB_146a6ed0a:
        LOCK();
        plVar5 = plVar16 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar3 = *piVar1;
          UNLOCK();
joined_r0x000146a6ecc2:
          if (iVar3 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(code **)(param_1 + 0x4b0) = local_1120;
      plVar16 = *(longlong **)(param_1 + 0x4b8);
      if (plVar5 == plVar16) {
        LOCK();
        plVar16 = plVar5 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar3 = *piVar1;
          UNLOCK();
          plVar16 = plVar5;
          goto joined_r0x000146a6ecc2;
        }
      }
      else {
        *(longlong **)(param_1 + 0x4b8) = plVar5;
        if (plVar16 != (longlong *)0x0) goto LAB_146a6ed0a;
      }
    }
    plVar5 = (longlong *)CONCAT44(uStack_1114,local_1118);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar5 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    plVar5 = plStack_388;
    if (plStack_388 != (longlong *)0x0) {
      LOCK();
      plVar16 = plStack_388 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plStack_388)(plStack_388);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    FUN_146a6f09e(&local_db8);
  }
  FUN_140a562d0(&local_390);
  local_db8 = FUN_146a6f198;
  local_db0[0] = 0;
  FUN_146a6f0e4(&local_390,param_1,&local_db8);
  local_db8 = FUN_146a6f2c0;
  local_db0[0] = 0;
  FUN_146a6f1f6(&local_390,param_1,&local_db8);
  local_db8 = FUN_146a6f3ca;
  local_db0[0] = 0;
  FUN_146a6f300(&local_390,param_1,&local_db8);
  local_db8 = FUN_146a6f71e;
  local_db0[0] = 0;
  FUN_146a6f666(&local_390,param_1,&local_db8);
  FUN_140a5296a(local_548);
  FUN_140a50426(local_608);
  local_5c0 = 0;
  local_5bc = 1;
  local_5c8 = 0;
  local_5c4 = 1;
  local_1500 = 0x3f800000;
  local_14fc = 1;
  local_14f8 = 0;
  uStack_14f0 = 0;
  local_1888 = FUN_140a5475a(local_608);
  FUN_1407679b0(local_7c0);
  FUN_145aafb3e(local_880);
  local_838 = 0;
  local_834 = 1;
  local_840 = 0;
  local_83c = 1;
  local_1538 = 0x3f800000;
  local_1534 = 1;
  local_1530 = 0;
  uStack_1528 = 0;
  local_1890 = FUN_140767d84(local_880);
  FUN_146a6f758(&local_db8);
  local_1580 = *(longlong **)(param_2 + 0x1c8);
  if (local_1580 != (longlong *)0x0) {
    (**(code **)(*local_1580 + 8))();
  }
  local_1578 = *(undefined4 *)(param_2 + 0x1d0);
  local_1570 = *(undefined1 *)(param_2 + 0x1d8);
  local_1568 = 0;
  local_1560 = 0;
  FUN_1413a4324(&local_1568,param_2 + 0x1e0);
  FUN_146a6fa7e(&local_db8,&local_1580);
  local_15a8 = *(longlong **)(param_2 + 0x1f0);
  if (local_15a8 != (longlong *)0x0) {
    (**(code **)(*local_15a8 + 8))();
  }
  local_15a0 = *(undefined4 *)(param_2 + 0x1f8);
  local_1598 = *(undefined1 *)(param_2 + 0x200);
  local_1590 = 0;
  local_1588 = 0;
  FUN_1413a4324(&local_1590,param_2 + 0x208);
  FUN_146a6fad4(&local_db8,&local_15a8);
  local_15d0 = *(longlong **)(param_2 + 0x218);
  if (local_15d0 != (longlong *)0x0) {
    (**(code **)(*local_15d0 + 8))();
  }
  local_15c8 = *(undefined4 *)(param_2 + 0x220);
  local_15c0 = *(undefined1 *)(param_2 + 0x228);
  local_15b8 = 0;
  local_15b0 = 0;
  FUN_1413a4324(&local_15b8,param_2 + 0x230);
  FUN_146a6fb2a(&local_db8,&local_15d0);
  local_b40 = *(longlong *)(param_2 + 0x1a8) + 0x2e0;
  local_15e0 = *(undefined8 *)(param_2 + 0x1b8);
  local_15d8 = *(longlong *)(param_2 + 0x1c0);
  if (local_15d8 != 0) {
    LOCK();
    *(int *)(local_15d8 + 8) = *(int *)(local_15d8 + 8) + 1;
    UNLOCK();
  }
  FUN_146a6fb80(&local_db8,&local_15e0);
  local_1120 = FUN_146a6fd0c;
  local_1118 = 0;
  FUN_146a6fc06(&local_db8,param_1);
  local_15f8 = *(undefined2 *)(param_2 + 0x360);
  local_15f0 = 0;
  local_15e8 = 0;
  FUN_14096c7c0(&local_15f0,param_2 + 0x368);
  local_a50 = local_15f8;
  FUN_144a450dc(local_a48,&local_15f0);
  FUN_1449db362(&local_15f0);
  local_1610 = *(undefined2 *)(param_2 + 0x378);
  local_1608 = 0;
  local_1600 = 0;
  FUN_14096c7c0(&local_1608,param_2 + 0x380);
  local_9e8 = local_1610;
  FUN_144a450dc(local_9e0,&local_1608);
  FUN_1449db362(&local_1608);
  FUN_146a3c65e(local_940,param_2 + 0x498);
  FUN_146a75c8e(local_a18,param_2 + 0x4a8);
  local_1488 = FUN_146a6fd4c;
  local_1480 = 0;
  FUN_146a81516(&local_1120,param_1,&local_1488);
  FUN_144a450dc(local_a08,&local_1120);
  FUN_1449db362(&local_1120);
  local_1488 = FUN_146a6fe24;
  local_1480 = 0;
  FUN_146a819b8(&local_1120,param_1,&local_1488);
  FUN_144a450dc(local_9f8,&local_1120);
  FUN_1449db362(&local_1120);
  FUN_146a74ff4(auStack_910,param_2 + 0x508);
  FUN_146a26a60(local_8e0,param_2 + 0x538);
  FUN_146a75078(local_8d0,param_2 + 0x548);
  local_1624 = *(undefined1 *)(param_2 + 0x334);
  local_1628 = *(undefined4 *)(param_2 + 0x330);
  local_1620 = 0;
  local_1618 = 0;
  FUN_140a5d648(&local_1620,param_2 + 0x338);
  local_a64 = local_1624;
  local_a68 = local_1628;
  FUN_144a450dc(local_a60,&local_1620);
  FUN_1449db362(&local_1620);
  local_1640 = *(undefined2 *)(param_2 + 0x3d8);
  local_1638 = 0;
  local_1630 = 0;
  FUN_14096c7c0(&local_1638,param_2 + 0x3e0);
  local_988 = local_1640;
  FUN_144a450dc(local_980,&local_1638);
  FUN_1449db362(&local_1638);
  local_1658 = *(undefined2 *)(param_2 + 0x3a8);
  local_1650 = 0;
  local_1648 = 0;
  FUN_14096c7c0(&local_1650,param_2 + 0x3b0);
  local_9d0 = local_1658;
  FUN_144a450dc(local_9c8,&local_1650);
  FUN_1449db362(&local_1650);
  local_1670 = *(undefined2 *)(param_2 + 0x5b8);
  local_1668 = 0;
  local_1660 = 0;
  FUN_14096c7c0(&local_1668,local_1880);
  local_9b8 = local_1670;
  FUN_144a450dc(local_9b0,&local_1668);
  FUN_1449db362(&local_1668);
  local_1688 = *(undefined2 *)(param_2 + 0x3c0);
  local_1680 = 0;
  local_1678 = 0;
  FUN_14096c7c0(&local_1680,param_2 + 0x3c8);
  local_9a0 = local_1688;
  FUN_144a450dc(local_998,&local_1680);
  FUN_1449db362(&local_1680);
  local_16a0 = *(undefined2 *)(param_2 + 0x3f0);
  local_1698 = 0;
  local_1690 = 0;
  FUN_14096c7c0(&local_1698,param_2 + 0x3f8);
  local_970 = local_16a0;
  FUN_144a450dc(local_968,&local_1698);
  FUN_1449db362(&local_1698);
  local_16b4 = *(undefined1 *)(param_2 + 0x34c);
  local_16b8 = *(undefined4 *)(param_2 + 0x348);
  local_16b0 = 0;
  local_16a8 = 0;
  FUN_140a52b3c(&local_16b0,param_2 + 0x350);
  local_a94 = local_16b4;
  local_a98 = local_16b8;
  FUN_144a450dc(local_a90,&local_16b0);
  FUN_1449db362(&local_16b0);
  local_16d8 = *(undefined1 *)(param_2 + 0x630);
  local_16e8 = *(undefined4 *)(param_2 + 0x620);
  uStack_16e4 = *(undefined4 *)(param_2 + 0x624);
  uStack_16e0 = *(undefined4 *)(param_2 + 0x628);
  uStack_16dc = *(undefined4 *)(param_2 + 0x62c);
  local_16d0 = 0;
  local_16c8 = 0;
  FUN_140a58be0(&local_16d0,param_2 + 0x638);
  local_ab0 = local_16d8;
  local_ac0 = local_16e8;
  uStack_abc = uStack_16e4;
  uStack_ab8 = uStack_16e0;
  uStack_ab4 = uStack_16dc;
  FUN_144a450dc(local_aa8,&local_16d0);
  FUN_1449db362(&local_16d0);
  local_16fc = *(undefined1 *)(param_2 + 0x55c);
  local_1700 = *(undefined4 *)(param_2 + 0x558);
  local_16f8 = 0;
  local_16f0 = 0;
  FUN_140a52b3c(&local_16f8,param_2 + 0x560);
  local_b84 = local_16fc;
  local_b88 = local_1700;
  FUN_144a450dc(local_b80,&local_16f8);
  FUN_1449db362(&local_16f8);
  local_1718 = *(undefined2 *)(param_2 + 0x570);
  local_1710 = 0;
  local_1708 = 0;
  FUN_14096c7c0(&local_1710,param_2 + 0x578);
  local_b70 = local_1718;
  FUN_144a450dc(local_b68,&local_1710);
  FUN_1449db362(&local_1710);
  local_1730 = *(undefined2 *)(param_2 + 0x588);
  local_1728 = 0;
  local_1720 = 0;
  FUN_140a5d77c(&local_1728,param_2 + 0x590);
  local_b58 = local_1730;
  FUN_144a450dc(local_b50,&local_1728);
  FUN_1449db362(&local_1728);
  local_1740 = *(undefined8 *)(param_1 + 0x488);
  local_1738 = *(longlong *)(param_1 + 0x490);
  if (local_1738 != 0) {
    LOCK();
    *(int *)(local_1738 + 8) = *(int *)(local_1738 + 8) + 1;
    UNLOCK();
  }
  FUN_146a6ff1e(&local_db8,&local_1740);
  local_1750 = *(undefined8 *)(param_1 + 0x4b0);
  local_1748 = *(longlong *)(param_1 + 0x4b8);
  if (local_1748 != 0) {
    LOCK();
    *(int *)(local_1748 + 8) = *(int *)(local_1748 + 8) + 1;
    UNLOCK();
  }
  FUN_146a6ffa4(&local_db8,&local_1750);
  FUN_140328a42(local_930,param_2 + 0x4e8);
  FUN_140328a42(local_920,param_2 + 0x4f8);
  FUN_146a75d12(local_900,param_2 + 0x518);
  FUN_14603678a(local_8f0,param_2 + 0x528);
  local_8c0 = *(undefined1 *)(param_2 + 0x658);
  local_8bf = *(undefined1 *)(param_2 + 0x659);
  local_1768 = *(undefined2 *)(param_2 + 0x660);
  local_1760 = 0;
  local_1758 = 0;
  FUN_146a74cdc(&local_1760,param_2 + 0x668);
  local_8b8 = local_1768;
  FUN_144a450dc(local_8b0,&local_1760);
  FUN_1449db362(&local_1760);
  local_1780 = *(undefined2 *)(param_2 + 0x678);
  local_1778 = 0;
  local_1770 = 0;
  FUN_146a74d60(&local_1778,param_2 + 0x680);
  local_8a0 = local_1780;
  FUN_144a450dc(local_898,&local_1778);
  FUN_1449db362(&local_1778);
  if (*(char *)(param_2 + 0x691) == '\0') {
    if (local_887 == '\x01') {
      local_887 = '\0';
    }
  }
  else {
    local_888 = *(undefined1 *)(param_2 + 0x690);
    local_887 = '\x01';
  }
  if (*(char *)(param_2 + 0x693) == '\0') {
    if (local_885 == '\x01') {
      local_885 = '\0';
    }
  }
  else {
    local_886 = *(undefined1 *)(param_2 + 0x692);
    local_885 = '\x01';
  }
  local_1798 = *(undefined2 *)(param_2 + 0x408);
  local_1790 = 0;
  local_1788 = 0;
  FUN_14096c7c0(&local_1790,param_2 + 0x410);
  local_958 = local_1798;
  FUN_144a450dc(local_950,&local_1790);
  FUN_1449db362(&local_1790);
  if (*(char *)(param_2 + 0x695) == '\0') {
    if (local_883 == '\x01') {
      local_883 = '\0';
    }
  }
  else {
    local_884 = *(undefined1 *)(param_2 + 0x694);
    local_883 = '\x01';
  }
  local_1898 = (code **)&local_17b1;
  FUN_146a80dce(&local_17b0,"SMultiLineEditableText",
                ".\\Runtime/Slate/Private/Widgets/Input/SMultiLineEditableTextBox.cpp",0x5f);
  if (local_17a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_17a8 + 1) = (int)local_17a8[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2a0) = local_17b0;
  *(longlong **)(param_1 + 0x2a8) = local_17a8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar5 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
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
  FUN_146a7002a(&local_17b0,&local_1558,&local_db8);
  local_1548 = local_1558;
  local_1540 = local_1550;
  if (local_1550 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1550 + 1) = (int)local_1550[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_145aaf878(local_1890,&local_1548);
  uVar12 = FUN_145aaf822(local_7c0,uVar12);
  FUN_145aafb3e(local_e78);
  uVar13 = FUN_145aaf900(local_e78);
  ppcVar15 = &local_1120;
  FUN_140a53a96(ppcVar15);
  local_1488 = FUN_146a70156;
  local_1480 = 0;
  FUN_146a7009e(ppcVar15,param_1);
  plVar5 = local_f40;
  local_f48 = *(longlong *)(param_1 + 0x488);
  local_1880 = *(longlong **)(param_1 + 0x490);
  if (local_1880 == (longlong *)0x0) {
    if (local_f48 == 0) {
LAB_146a6e3bb:
      local_f48 = DAT_14c98dec8;
      plVar16 = DAT_14c98ded0;
      if (DAT_14c98ded0 != (longlong *)0x0) goto LAB_146a6e3d9;
    }
    local_1890 = CONCAT44(local_1890._4_4_,(int)CONCAT71((int7)((ulonglong)ppcVar15 >> 8),1));
    plVar16 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_1880 + 1) = (int)local_1880[1] + 1;
    UNLOCK();
    plVar16 = local_1880;
    if (local_f48 == 0) goto LAB_146a6e3bb;
LAB_146a6e3d9:
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    local_1890 = (ulonglong)local_1890._4_4_ << 0x20;
  }
  plVar7 = plVar16;
  if (local_f40 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_f40 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      puVar6 = (undefined8 *)*local_f40;
      local_f40 = plVar16;
      (*(code *)*puVar6)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_f40;
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar7 = local_f40;
      }
    }
  }
  local_f40 = plVar7;
  local_1898 = (code **)&local_17f1;
  FUN_140a53d66(&local_17f0,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Widgets/Input/SMultiLineEditableTextBox.cpp",0x8d);
  if (local_17e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_17e8 + 1) = (int)local_17e8[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x4a0);
  *(undefined8 *)(param_1 + 0x498) = local_17f0;
  *(longlong **)(param_1 + 0x4a0) = local_17e8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  FUN_140a50bf4(&local_17f0,&local_17d8,&local_1120);
  local_17c8 = local_17d8;
  local_17c0 = local_17d0;
  if (local_17d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_17d0 + 1) = (int)local_17d0[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_145aaf878(uVar13,&local_17c8);
  uVar12 = FUN_145aaf822(uVar12,uVar13);
  local_1898 = (code **)&local_1811;
  FUN_14076837c(local_1810,"SVerticalBox",
                ".\\Runtime/Slate/Private/Widgets/Input/SMultiLineEditableTextBox.cpp",0x58);
  FUN_14076784c(local_1810,&local_1520,uVar12);
  local_1510 = local_1520;
  local_1508 = local_1518;
  if (local_1518 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1518 + 1) = (int)local_1518[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fe8e(local_1888,&local_1510);
  uVar12 = FUN_140a52392(local_548,uVar12);
  FUN_140a50426(local_11e0);
  uVar13 = FUN_140a52578(local_11e0);
  ppcVar15 = &local_1488;
  FUN_140a53a96(ppcVar15);
  local_1850 = FUN_146a70190;
  local_1848 = 0;
  FUN_146a7009e(ppcVar15,param_1);
  plVar7 = local_12a8;
  local_12b0 = *(longlong *)(param_1 + 0x4b0);
  plVar5 = *(longlong **)(param_1 + 0x4b8);
  if (plVar5 == (longlong *)0x0) {
    if (local_12b0 == 0) {
LAB_146a6e5fc:
      local_12b0 = DAT_14c98dec8;
      plVar17 = DAT_14c98ded0;
      if (DAT_14c98ded0 != (longlong *)0x0) goto LAB_146a6e61a;
    }
    local_1888 = CONCAT44(local_1888._4_4_,(int)CONCAT71((int7)((ulonglong)ppcVar15 >> 8),1));
    plVar17 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar17 = plVar5;
    if (local_12b0 == 0) goto LAB_146a6e5fc;
LAB_146a6e61a:
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    local_1888 = (ulonglong)local_1888._4_4_ << 0x20;
  }
  plVar11 = plVar17;
  if (local_12a8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_12a8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      puVar6 = (undefined8 *)*local_12a8;
      local_12a8 = plVar17;
      (*(code *)*puVar6)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar11 = local_12a8;
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        plVar11 = local_12a8;
      }
    }
  }
  local_12a8 = plVar11;
  local_1898 = (code **)&local_1851;
  FUN_140a53d66(&local_1850,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Widgets/Input/SMultiLineEditableTextBox.cpp",0x98);
  lVar14 = CONCAT44(uStack_1844,local_1848);
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(param_1 + 0x4c8);
  *(code **)(param_1 + 0x4c0) = local_1850;
  *(longlong *)(param_1 + 0x4c8) = lVar14;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar7 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140a50bf4(&local_1850,&local_1838,&local_1488);
  local_1828 = local_1838;
  local_1820 = local_1830;
  if (local_1830 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1830 + 1) = (int)local_1830[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fe8e(uVar13,&local_1828);
  uVar12 = FUN_140a52392(uVar12,uVar13);
  local_1898 = (code **)&local_1871;
  FUN_140a541dc(&local_1870,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Widgets/Input/SMultiLineEditableTextBox.cpp",0x52);
  if (local_1868 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1868 + 1) = (int)local_1868[1] + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(param_1 + 0x478);
  *(undefined8 *)(param_1 + 0x470) = local_1870;
  *(longlong **)(param_1 + 0x478) = local_1868;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar7 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140a50ec6(&local_1870,&local_14e8,uVar12);
  plVar11 = local_1e0;
  plVar7 = local_14e0;
  if (local_14e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_14e0 + 1) = (int)local_14e0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_14e0 + 1) = (int)local_14e0[1] + 1;
    UNLOCK();
  }
  local_1e8 = local_14e8;
  local_1e0 = local_14e0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_140a5a2ee(param_1,&local_390);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar7 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_14e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_14e0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_14e0)(local_14e0);
      LOCK();
      piVar1 = (int *)((longlong)local_14e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_14e0 + 0x10))(local_14e0);
      }
    }
  }
  if (local_1868 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1868 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1868)(local_1868);
      LOCK();
      piVar1 = (int *)((longlong)local_1868 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1868 + 0x10))(local_1868);
      }
    }
  }
  plVar7 = local_1820;
  if (local_1820 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_1820 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_1820)(local_1820);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_1830 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1830 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1830)(local_1830);
      LOCK();
      piVar1 = (int *)((longlong)local_1830 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1830 + 0x10))(local_1830);
      }
    }
  }
  plVar7 = (longlong *)CONCAT44(uStack_1844,local_1848);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar7 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((char)local_1888 == '\0') {
    LOCK();
    plVar7 = plVar17 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  FUN_140a5660c(&local_1488);
  FUN_140a509a6(local_11e0);
  plVar5 = local_1508;
  if (local_1508 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1508 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1508)(local_1508);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_1518 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1518 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1518)(local_1518);
      LOCK();
      piVar1 = (int *)((longlong)local_1518 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1518 + 0x10))(local_1518);
      }
    }
  }
  if (local_1808 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1808 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1808)(local_1808);
      LOCK();
      piVar1 = (int *)((longlong)local_1808 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1808 + 0x10))(local_1808);
      }
    }
  }
  plVar5 = local_17c0;
  if (local_17c0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_17c0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_17c0)(local_17c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_17d0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_17d0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_17d0)(local_17d0);
      LOCK();
      piVar1 = (int *)((longlong)local_17d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_17d0 + 0x10))(local_17d0);
      }
    }
  }
  if (local_17e8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_17e8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_17e8)(local_17e8);
      LOCK();
      piVar1 = (int *)((longlong)local_17e8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_17e8 + 0x10))(local_17e8);
      }
    }
  }
  if ((char)local_1890 == '\0') {
    LOCK();
    plVar5 = plVar16 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  plVar5 = local_1880;
  if (local_1880 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_1880 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_1880)(local_1880);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_140a5660c(&local_1120);
  FUN_140767f30(local_e78);
  plVar5 = local_1540;
  if (local_1540 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_1540 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_1540)(local_1540);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_1550 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1550 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1550)(local_1550);
      LOCK();
      piVar1 = (int *)((longlong)local_1550 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1550 + 0x10))(local_1550);
      }
    }
  }
  if (local_17a8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_17a8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_17a8)(local_17a8);
      LOCK();
      piVar1 = (int *)((longlong)local_17a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_17a8 + 0x10))(local_17a8);
      }
    }
  }
  FUN_146a701ca(&local_db8);
  FUN_140767f30(local_880);
  FUN_14149255e(local_7c0);
  FUN_140a509a6(local_608);
  FUN_145ab33da(local_548);
  FUN_140a59028(&local_390);
  lVar14 = *(longlong *)(param_2 + 0x648);
  lVar4 = *(longlong *)(param_2 + 0x650);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x4d8);
  *(longlong *)(param_1 + 0x4d0) = lVar14;
  *(longlong *)(param_1 + 0x4d8) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar5 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    lVar14 = *(longlong *)(param_1 + 0x4d0);
  }
  if (lVar14 != 0) {
    FUN_146a24608(*(undefined8 *)(param_1 + 0x470),&local_db8,0xffffffff);
    lVar14 = FUN_140a52578(local_db0);
    local_390 = 0x40400000;
    plStack_388 = (longlong *)0x40400000;
    local_380 = 1;
    local_378 = 0;
    uStack_370 = 0;
    *(undefined1 *)(lVar14 + 0x28) = 1;
    *(undefined4 *)(lVar14 + 0x18) = 0x40400000;
    *(undefined4 *)(lVar14 + 0x1c) = 0;
    *(undefined4 *)(lVar14 + 0x20) = 0x40400000;
    *(undefined4 *)(lVar14 + 0x24) = 0;
    FUN_144a450dc(lVar14 + 0x30,&local_378);
    FUN_1449db362(&local_378);
    (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0x18))
              (*(longlong **)(param_1 + 0x4d0),&local_390);
    FUN_140a4fe8e(lVar14,&local_390);
    plVar5 = plStack_388;
    if (plStack_388 != (longlong *)0x0) {
      LOCK();
      plVar16 = plStack_388 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plStack_388)(plStack_388);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    FUN_146a071ac(&local_db8);
  }
  if ((local_60 ^ (ulonglong)auStack_18b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6ee1a FUN_146a6ee1a body=281 status=ok
// SIG undefined FUN_146a6ee1a(void)

void FUN_146a6ee1a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_6d8 [40];
  undefined1 local_6b0 [424];
  undefined8 local_508;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  if (param_2 == 0) {
    FUN_146a70442(local_6b0);
    *(undefined8 *)(param_1 + 0x510) = local_508;
    FUN_146a7083a(local_6b0);
  }
  else {
    *(longlong *)(param_1 + 0x510) = param_2;
  }
  if ((*(char *)(param_1 + 0x480) == '\0') && (*(longlong *)(param_1 + 0x488) != 0)) {
    FUN_146a91b6c(*(longlong *)(param_1 + 0x488),*(longlong *)(param_1 + 0x510) + 0x630);
  }
  if ((*(char *)(param_1 + 0x4a8) == '\0') && (*(longlong *)(param_1 + 0x4b0) != 0)) {
    FUN_146a91b6c(*(longlong *)(param_1 + 0x4b0),*(longlong *)(param_1 + 0x510) + 0x630);
  }
  lVar1 = *(longlong *)(param_1 + 0x510);
  *(longlong *)(param_1 + 0x518) = lVar1 + 0x10;
  *(longlong *)(param_1 + 0x520) = lVar1 + 0xc0;
  *(longlong *)(param_1 + 0x528) = lVar1 + 0x170;
  *(longlong *)(param_1 + 0x530) = lVar1 + 0x220;
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FUN_146ae7ff6(*(longlong *)(param_1 + 0x2a0),lVar1 + 0x2e0);
  }
  if ((local_18 ^ (ulonglong)auStack_6d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6ef34 FUN_146a6ef34 body=244 status=ok
// SIG undefined FUN_146a6ef34(void)

longlong FUN_146a6ef34(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a5071c();
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_28,"Scrollbar",1);
  uVar2 = FUN_145817968(lVar1,local_28,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1bc) = 0;
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined2 *)(param_1 + 0x1d1) = 1;
  *(undefined1 *)(param_1 + 0x1d3) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 1;
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0x40000000;
  *(undefined4 *)(param_1 + 0x20c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x210) = 0x40000000;
  *(undefined4 *)(param_1 + 0x214) = 0x40000000;
  *(undefined1 *)(param_1 + 0x218) = 1;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6f02a FUN_146a6f02a body=115 status=ok
// SIG undefined FUN_146a6f02a(void)

longlong * FUN_146a6f02a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a90974(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a6f09e FUN_146a6f09e body=69 status=ok
// SIG undefined FUN_146a6f09e(void)

void FUN_146a6f09e(longlong param_1)

{
  FUN_1449db362(param_1 + 0x220);
  FUN_1449db362(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1c0);
  FUN_1449db362(param_1 + 0x1b0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a6f0e4 FUN_146a6f0e4 body=178 status=ok
// SIG undefined FUN_146a6f0e4(void)

longlong FUN_146a6f0e4(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_146a7ff94(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x230) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x228) = local_40;
  FUN_144a450dc(param_1 + 0x238,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6f198 FUN_146a6f198 body=94 status=ok
// SIG undefined FUN_146a6f198(void)

undefined8 FUN_146a6f198(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x2a0) + 0x1e0))
                    (*(longlong *)(param_1 + 0x2a0) + 0x1e0);
  lVar2 = 0x530;
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x198))();
    lVar2 = 0x528;
    if (cVar1 == '\0') {
      lVar2 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x2a0) + 0x3b) * 8 + 0x518;
    }
  }
  return *(undefined8 *)(param_1 + lVar2);
}



// FUNCTION 146a6f1f6 FUN_146a6f1f6 body=200 status=ok
// SIG undefined FUN_146a6f1f6(void)

longlong FUN_146a6f1f6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_146a80432(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x2d0) = local_38;
  *(undefined4 *)(param_1 + 0x2c0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x2c4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x2c8) = uStack_40;
  *(undefined4 *)(param_1 + 0x2cc) = uStack_3c;
  *(undefined1 *)(param_1 + 0x2d4) = local_34;
  FUN_144a450dc(param_1 + 0x2d8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6f2c0 FUN_146a6f2c0 body=64 status=ok
// SIG undefined FUN_146a6f2c0(void)

undefined8 * FUN_146a6f2c0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x3dc) == '\x01') {
    puVar2 = (undefined8 *)FUN_1400c0682(param_1 + 0x3c8);
  }
  else {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x510) + 0x5d4);
  }
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar2 + 2);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 146a6f300 FUN_146a6f300 body=200 status=ok
// SIG undefined FUN_146a6f300(void)

longlong FUN_146a6f300(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_146a80432(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x2f8) = local_38;
  *(undefined4 *)(param_1 + 0x2e8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x2ec) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x2f0) = uStack_40;
  *(undefined4 *)(param_1 + 0x2f4) = uStack_3c;
  *(undefined1 *)(param_1 + 0x2fc) = local_34;
  FUN_144a450dc(param_1 + 0x300,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6f3ca FUN_146a6f3ca body=668 status=ok
// SIG undefined FUN_146a6f3ca(void)

float * FUN_146a6f3ca(longlong *param_1,float *param_2)

{
  undefined2 uVar1;
  float *pfVar2;
  char cVar3;
  longlong lVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = (*(code *)**(undefined8 **)(param_1[0x54] + 0x1e0))(param_1[0x54] + 0x1e0);
  if ((char)uVar1 == '\0') {
    uVar1 = (**(code **)(*param_1 + 0x198))(param_1);
    if ((char)uVar1 == '\0') {
      if (*(char *)((longlong)param_1 + 0x3b4) == '\x01') {
        pfVar2 = (float *)FUN_1400c0682(param_1 + 0x74);
        fVar7 = *pfVar2;
        fVar6 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        cVar3 = *(char *)(pfVar2 + 4);
        uVar5 = *(undefined1 *)((longlong)pfVar2 + 0x11);
        uVar1 = *(undefined2 *)((longlong)pfVar2 + 0x12);
      }
      else {
        cVar3 = '\x04';
        fVar6 = 0.0;
        fVar7 = 1.0;
        uVar5 = 0;
        fVar8 = 1.0;
        fVar9 = 1.0;
      }
      if ((((((fVar7 != 1.0) || (NAN(fVar7))) || (fVar6 != 0.0)) || ((NAN(fVar6) || (fVar8 != 1.0)))
           ) || (NAN(fVar8))) || (((fVar9 != 1.0 || (NAN(fVar9))) || (cVar3 != '\x04'))))
      goto LAB_146a6f625;
      lVar4 = param_1[0xa2];
      param_2[4] = *(float *)(lVar4 + 0x5d0);
      fVar7 = *(float *)(lVar4 + 0x5c0);
      fVar6 = *(float *)(lVar4 + 0x5c4);
      fVar8 = *(float *)(lVar4 + 0x5c8);
      fVar9 = *(float *)(lVar4 + 0x5cc);
    }
    else {
      lVar4 = 0x418;
      if ((*(char *)((longlong)param_1 + 0x42c) == '\0') &&
         (lVar4 = 0x3a0, *(char *)((longlong)param_1 + 0x3b4) != '\x01')) {
        cVar3 = '\x04';
        fVar6 = 0.0;
        fVar7 = 1.0;
        uVar5 = 0;
        fVar8 = 1.0;
        fVar9 = 1.0;
      }
      else {
        pfVar2 = (float *)FUN_1400c0682(lVar4 + (longlong)param_1);
        fVar7 = *pfVar2;
        fVar6 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        cVar3 = *(char *)(pfVar2 + 4);
        uVar5 = *(undefined1 *)((longlong)pfVar2 + 0x11);
        uVar1 = *(undefined2 *)((longlong)pfVar2 + 0x12);
      }
      if ((((fVar7 != 1.0) || (NAN(fVar7))) || (fVar6 != 0.0)) ||
         (((NAN(fVar6) || (fVar8 != 1.0)) ||
          (((NAN(fVar8) || ((fVar9 != 1.0 || (NAN(fVar9))))) || (cVar3 != '\x04')))))) {
LAB_146a6f625:
        *param_2 = fVar7;
        param_2[1] = fVar6;
        param_2[2] = fVar8;
        param_2[3] = fVar9;
        *(char *)(param_2 + 4) = cVar3;
        *(undefined1 *)((longlong)param_2 + 0x11) = uVar5;
        *(undefined2 *)((longlong)param_2 + 0x12) = uVar1;
        return param_2;
      }
      lVar4 = param_1[0xa2];
      param_2[4] = *(float *)(lVar4 + 0x60c);
      fVar7 = *(float *)(lVar4 + 0x5fc);
      fVar6 = *(float *)(lVar4 + 0x600);
      fVar8 = *(float *)(lVar4 + 0x604);
      fVar9 = *(float *)(lVar4 + 0x608);
    }
  }
  else {
    lVar4 = 0x3f0;
    if ((*(char *)((longlong)param_1 + 0x404) == '\0') &&
       (lVar4 = 0x3a0, *(char *)((longlong)param_1 + 0x3b4) != '\x01')) {
      cVar3 = '\x04';
      fVar6 = 0.0;
      fVar7 = 1.0;
      uVar5 = 0;
      fVar8 = 1.0;
      fVar9 = 1.0;
    }
    else {
      pfVar2 = (float *)FUN_1400c0682(lVar4 + (longlong)param_1);
      fVar7 = *pfVar2;
      fVar6 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      cVar3 = *(char *)(pfVar2 + 4);
      uVar5 = *(undefined1 *)((longlong)pfVar2 + 0x11);
      uVar1 = *(undefined2 *)((longlong)pfVar2 + 0x12);
    }
    if (((((fVar7 != 1.0) || (NAN(fVar7))) || (fVar6 != 0.0)) ||
        (((NAN(fVar6) || (fVar8 != 1.0)) || ((NAN(fVar8) || ((fVar9 != 1.0 || (NAN(fVar9))))))))) ||
       (cVar3 != '\x04')) goto LAB_146a6f625;
    lVar4 = param_1[0xa2];
    param_2[4] = *(float *)(lVar4 + 0x5f8);
    fVar7 = *(float *)(lVar4 + 0x5e8);
    fVar6 = *(float *)(lVar4 + 0x5ec);
    fVar8 = *(float *)(lVar4 + 0x5f0);
    fVar9 = *(float *)(lVar4 + 0x5f4);
  }
  *param_2 = fVar7;
  param_2[1] = fVar6;
  param_2[2] = fVar8;
  param_2[3] = fVar9;
  return param_2;
}



// FUNCTION 146a6f666 FUN_146a6f666 body=183 status=ok
// SIG undefined FUN_146a6f666(void)

longlong FUN_146a6f666(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146a80900(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a58be0(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x1d0) = local_38;
  *(undefined4 *)(param_1 + 0x1c0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1c4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1c8) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x1cc) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x1d8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6f71e FUN_146a6f71e body=58 status=ok
// SIG undefined FUN_146a6f71e(void)

undefined8 * FUN_146a6f71e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x2c0) == '\x01') {
    puVar2 = (undefined8 *)FUN_140133f88(param_1 + 0x2b0);
  }
  else {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x510) + 0x2d0);
  }
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 146a6f758 FUN_146a6f758 body=804 status=ok
// SIG undefined FUN_146a6f758(void)

longlong FUN_146a6f758(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140a5071c();
  FUN_144a5dc74(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  FUN_144a5dc74(param_1 + 0x1d0);
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  FUN_144a5dc74(param_1 + 0x1f8);
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x234) = 1;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined2 *)(param_1 + 0x248) = 0x100;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined2 *)(param_1 + 0x260) = 0x100;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_58,"NormalText",1);
  uVar2 = FUN_140a57516(lVar1,local_58,0,0);
  *(undefined8 *)(param_1 + 0x278) = uVar2;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x28f) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0x41c00000;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined2 *)(param_1 + 0x2d4) = 2;
  *(undefined1 *)(param_1 + 0x2d6) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined1 *)(param_1 + 0x308) = 1;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 800) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x324) = 1;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined2 *)(param_1 + 0x338) = 0x101;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined1 *)(param_1 + 0x354) = 1;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined2 *)(param_1 + 0x368) = 0x100;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x39c) = 0;
  *(undefined8 *)(param_1 + 0x3a4) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined2 *)(param_1 + 0x3d0) = 0x101;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined2 *)(param_1 + 1000) = 0x100;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined2 *)(param_1 + 0x400) = 0x101;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined2 *)(param_1 + 0x418) = 0x101;
  *(undefined2 *)(param_1 + 0x430) = 0x100;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined2 *)(param_1 + 0x448) = 0x101;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined2 *)(param_1 + 0x460) = 0x101;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined8 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined2 *)(param_1 + 0x4f8) = 0;
  *(undefined1 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x474) = 0;
  *(undefined8 *)(param_1 + 0x47c) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x4b4) = 0;
  *(undefined8 *)(param_1 + 0x4bc) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4e4) = 0;
  *(undefined8 *)(param_1 + 0x4ec) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined1 *)(param_1 + 0x501) = 1;
  *(undefined1 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined1 *)(param_1 + 0x519) = 1;
  *(undefined1 *)(param_1 + 0x531) = 0;
  *(undefined1 *)(param_1 + 0x533) = 0;
  *(undefined1 *)(param_1 + 0x535) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6fa7e FUN_146a6fa7e body=86 status=ok
// SIG undefined FUN_146a6fa7e(void)

longlong FUN_146a6fa7e(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x1a8);
  *(char *)(param_1 + 0x1b8) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x1c0,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a6fad4 FUN_146a6fad4 body=86 status=ok
// SIG undefined FUN_146a6fad4(void)

longlong FUN_146a6fad4(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x1d0);
  *(char *)(param_1 + 0x1e0) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x1e8,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a6fb2a FUN_146a6fb2a body=86 status=ok
// SIG undefined FUN_146a6fb2a(void)

longlong FUN_146a6fb2a(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x1f8);
  *(char *)(param_1 + 0x208) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x210,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a6fb80 FUN_146a6fb80 body=133 status=ok
// SIG undefined FUN_146a6fb80(void)

longlong FUN_146a6fb80(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x220) = uVar3;
  *(longlong *)(param_1 + 0x228) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 146a6fc06 FUN_146a6fc06 body=261 status=ok
// SIG undefined FUN_146a6fc06(void)

longlong FUN_146a6fc06(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined7 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uStack_a0 = *(undefined4 *)(param_3 + 1);
  local_a8 = *param_3;
  FUN_146a81010(local_b8,param_2,&local_a8);
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3f800000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0x41c00000;
  local_58 = 0;
  local_54 = 2;
  local_52 = 0;
  local_50 = 0x3f800000;
  local_48 = 1;
  local_40 = 0;
  local_38 = 0;
  FUN_140a5d470(&local_40,local_b8);
  FUN_1412cc59c(param_1 + 0x280,&local_a8);
  *(undefined1 *)(param_1 + 0x2e0) = local_48;
  FUN_144a450dc(param_1 + 0x2e8,&local_40);
  FUN_141515cba(&local_a8);
  FUN_1449db362(local_b8);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6fd0c FUN_146a6fd0c body=63 status=ok
// SIG undefined FUN_146a6fd0c(void)

undefined8 FUN_146a6fd0c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x388) == '\x01') {
    lVar1 = FUN_146a64b32(param_1 + 0x328);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x510) + 0x2e8;
  }
  FUN_144a87366(param_2,lVar1);
  return param_2;
}



// FUNCTION 146a6fd4c FUN_146a6fd4c body=214 status=ok
// SIG undefined FUN_146a6fd4c(void)

void FUN_146a6fd4c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x4e8) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x4e0), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x60))(plVar4,param_2);
  }
  if ((*(int *)(param_1 + 0x508) != 0) && (*(longlong **)(param_1 + 0x500) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x500) + 0x30))();
    if (cVar1 != '\0') {
      FUN_144a5dc74();
      if (*(int *)(param_1 + 0x508) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x500);
      }
      cVar1 = (**(code **)(*plVar4 + 0x58))(plVar4,param_2,local_28);
      if (cVar1 == '\0') {
        pplVar2 = local_28;
      }
      else {
        pplVar2 = (longlong **)FUN_140e82300();
      }
      uVar3 = FUN_1447a1f4a(pplVar2);
      FUN_146a70c8c(param_1,uVar3);
      if (local_28[0] != (longlong *)0x0) {
        (**(code **)(*local_28[0] + 0x10))();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6fe24 FUN_146a6fe24 body=248 status=ok
// SIG undefined FUN_146a6fe24(void)

void FUN_146a6fe24(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  longlong **pplVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x508) != 0) && (*(longlong **)(param_1 + 0x500) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x500) + 0x30))();
    if (cVar1 != '\0') {
      FUN_144a5dc74();
      if (*(int *)(param_1 + 0x508) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x500);
      }
      cVar1 = (**(code **)(*plVar4 + 0x58))(plVar4,param_2,local_38);
      if (cVar1 == '\0') {
        if (param_3 == 1) {
          pplVar2 = local_38;
          goto LAB_146a6ff0b;
        }
      }
      else if (param_3 == 1) {
        pplVar2 = (longlong **)FUN_140e82300();
LAB_146a6ff0b:
        uVar3 = FUN_1447a1f4a(pplVar2);
        FUN_146a70c8c(param_1,uVar3);
      }
      if (local_38[0] != (longlong *)0x0) {
        (**(code **)(*local_38[0] + 0x10))();
      }
      if (cVar1 == '\0') goto LAB_146a6fedf;
    }
  }
  if ((*(int *)(param_1 + 0x4f8) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x4f0), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x60))(plVar4,param_2,param_3);
  }
LAB_146a6fedf:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a6ff1e FUN_146a6ff1e body=133 status=ok
// SIG undefined FUN_146a6ff1e(void)

longlong FUN_146a6ff1e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x380) = uVar3;
  *(longlong *)(param_1 + 0x388) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 146a6ffa4 FUN_146a6ffa4 body=133 status=ok
// SIG undefined FUN_146a6ffa4(void)

longlong FUN_146a6ffa4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x398);
  *(undefined8 *)(param_1 + 0x390) = uVar3;
  *(longlong *)(param_1 + 0x398) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 146a7002a FUN_146a7002a body=115 status=ok
// SIG undefined FUN_146a7002a(void)

longlong * FUN_146a7002a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146ae724a(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a7009e FUN_146a7009e body=183 status=ok
// SIG undefined FUN_146a7009e(void)

longlong FUN_146a7009e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146a80900(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a58be0(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x1c0) = local_38;
  *(undefined4 *)(param_1 + 0x1b0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1b4) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1b8) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x1bc) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x1c8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a70156 FUN_146a70156 body=58 status=ok
// SIG undefined FUN_146a70156(void)

undefined8 * FUN_146a70156(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x2e8) == '\x01') {
    puVar2 = (undefined8 *)FUN_140133f88(param_1 + 0x2d8);
  }
  else {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x510) + 0x610);
  }
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 146a70190 FUN_146a70190 body=58 status=ok
// SIG undefined FUN_146a70190(void)

undefined8 * FUN_146a70190(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x310) == '\x01') {
    puVar2 = (undefined8 *)FUN_140133f88(param_1 + 0x300);
  }
  else {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x510) + 0x620);
  }
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 146a701ca FUN_146a701ca body=632 status=ok
// SIG undefined FUN_146a701ca(void)

void FUN_146a701ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x535) == '\x01') {
    *(undefined1 *)(param_1 + 0x535) = 0;
  }
  if (*(char *)(param_1 + 0x533) == '\x01') {
    *(undefined1 *)(param_1 + 0x533) = 0;
  }
  if (*(char *)(param_1 + 0x531) == '\x01') {
    *(undefined1 *)(param_1 + 0x531) = 0;
  }
  FUN_1449db362(param_1 + 0x520);
  FUN_1449db362(param_1 + 0x508);
  FUN_1449db362(param_1 + 0x4e8);
  FUN_1449db362(param_1 + 0x4d8);
  FUN_1449db362(param_1 + 0x4c8);
  FUN_1449db362(param_1 + 0x4b8);
  FUN_1449db362(param_1 + 0x4a8);
  FUN_1449db362(param_1 + 0x498);
  FUN_1449db362(param_1 + 0x488);
  FUN_1449db362(param_1 + 0x478);
  FUN_1449db362(param_1 + 0x468);
  FUN_1449db362(param_1 + 0x450);
  FUN_1449db362(param_1 + 0x438);
  FUN_1449db362(param_1 + 0x420);
  FUN_1449db362(param_1 + 0x408);
  FUN_1449db362(param_1 + 0x3f0);
  FUN_1449db362(param_1 + 0x3d8);
  FUN_1449db362(param_1 + 0x3c0);
  FUN_1449db362(param_1 + 0x3b0);
  FUN_1449db362(param_1 + 0x3a0);
  plVar3 = *(longlong **)(param_1 + 0x398);
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
  plVar3 = *(longlong **)(param_1 + 0x388);
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
  FUN_1449db362(param_1 + 0x370);
  FUN_1449db362(param_1 + 0x358);
  FUN_1449db362(param_1 + 0x340);
  FUN_1449db362(param_1 + 0x328);
  FUN_1449db362(param_1 + 0x310);
  FUN_141515cba(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x268);
  FUN_1449db362(param_1 + 0x250);
  FUN_1449db362(param_1 + 0x238);
  plVar3 = *(longlong **)(param_1 + 0x228);
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
  FUN_1449db362(param_1 + 0x210);
  if (*(longlong **)(param_1 + 0x1f8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1f8) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x1e8);
  if (*(longlong **)(param_1 + 0x1d0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x1c0);
  if (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a70442 FUN_146a70442 body=1015 status=ok
// SIG undefined FUN_146a70442(void)

longlong FUN_146a70442(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_38,"NormalEditableTextBox",1);
  uVar2 = FUN_145817874(lVar1,local_38,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  FUN_144a5dc74(param_1 + 0x1c8);
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_144a5dc74(param_1 + 0x1f0);
  *(undefined1 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  FUN_144a5dc74(param_1 + 0x218);
  *(undefined1 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x24f) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0x41c00000;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined2 *)(param_1 + 0x294) = 2;
  *(undefined1 *)(param_1 + 0x296) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0x3f800000;
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  *(undefined1 *)(param_1 + 0x2cc) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2ec) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x2f4) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x314) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x318) = 0;
  *(undefined1 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined1 *)(param_1 + 0x334) = 1;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x34c) = 1;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined2 *)(param_1 + 0x360) = 0x100;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined2 *)(param_1 + 0x378) = 0x101;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined2 *)(param_1 + 0x390) = 0x101;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined2 *)(param_1 + 0x3a8) = 0x100;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined2 *)(param_1 + 0x3c0) = 0x101;
  *(undefined1 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined1 *)(param_1 + 0x3d9) = 1;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined2 *)(param_1 + 0x3f0) = 0x101;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined2 *)(param_1 + 0x408) = 0x101;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined4 *)(param_1 + 0x510) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined4 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined1 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined1 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined1 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined8 *)(param_1 + 0x494) = 0;
  *(undefined8 *)(param_1 + 0x49c) = 0;
  *(undefined1 *)(param_1 + 0x55c) = 1;
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined2 *)(param_1 + 0x570) = 0x100;
  *(undefined8 *)(param_1 + 0x578) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  *(undefined2 *)(param_1 + 0x588) = 0x100;
  *(undefined1 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined1 *)(param_1 + 0x5a1) = 1;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  *(undefined2 *)(param_1 + 0x5b8) = 0x101;
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  *(undefined4 *)(param_1 + 0x5d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5d4) = 0;
  *(undefined4 *)(param_1 + 0x5d8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5dc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5e0) = 0;
  *(undefined1 *)(param_1 + 0x5e4) = 0;
  *(undefined2 *)(param_1 + 0x660) = 0x100;
  *(undefined8 *)(param_1 + 0x5e8) = 0;
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  *(undefined8 *)(param_1 + 0x5f8) = 0;
  *(undefined8 *)(param_1 + 0x600) = 0;
  *(undefined1 *)(param_1 + 0x608) = 0;
  *(undefined1 *)(param_1 + 0x630) = 0;
  *(undefined8 *)(param_1 + 0x620) = 0;
  *(undefined8 *)(param_1 + 0x628) = 0;
  *(undefined8 *)(param_1 + 0x610) = 0;
  *(undefined8 *)(param_1 + 0x618) = 0;
  *(undefined8 *)(param_1 + 0x648) = 0;
  *(undefined8 *)(param_1 + 0x650) = 0;
  *(undefined8 *)(param_1 + 0x638) = 0;
  *(undefined8 *)(param_1 + 0x640) = 0;
  *(undefined2 *)(param_1 + 0x658) = 0;
  *(undefined8 *)(param_1 + 0x668) = 0;
  *(undefined8 *)(param_1 + 0x670) = 0;
  *(undefined1 *)(param_1 + 0x678) = 0;
  *(undefined1 *)(param_1 + 0x679) = 1;
  *(undefined1 *)(param_1 + 0x691) = 0;
  *(undefined1 *)(param_1 + 0x693) = 0;
  *(undefined1 *)(param_1 + 0x695) = 0;
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined8 *)(param_1 + 0x688) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a7083a FUN_146a7083a body=781 status=ok
// SIG undefined FUN_146a7083a(void)

void FUN_146a7083a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x695) == '\x01') {
    *(undefined1 *)(param_1 + 0x695) = 0;
  }
  if (*(char *)(param_1 + 0x693) == '\x01') {
    *(undefined1 *)(param_1 + 0x693) = 0;
  }
  if (*(char *)(param_1 + 0x691) == '\x01') {
    *(undefined1 *)(param_1 + 0x691) = 0;
  }
  FUN_1449db362(param_1 + 0x680);
  FUN_1449db362(param_1 + 0x668);
  plVar3 = *(longlong **)(param_1 + 0x650);
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
  FUN_1449db362(param_1 + 0x638);
  FUN_1449db362(param_1 + 0x610);
  FUN_1449db362(param_1 + 0x5e8);
  FUN_1449db362(param_1 + 0x5c0);
  FUN_1449db362(param_1 + 0x5a8);
  FUN_1449db362(param_1 + 0x590);
  FUN_1449db362(param_1 + 0x578);
  FUN_1449db362(param_1 + 0x560);
  FUN_1449db362(param_1 + 0x548);
  FUN_1449db362(param_1 + 0x538);
  FUN_1449db362(param_1 + 0x528);
  FUN_1449db362(param_1 + 0x518);
  FUN_1449db362(param_1 + 0x508);
  FUN_1449db362(param_1 + 0x4f8);
  FUN_1449db362(param_1 + 0x4e8);
  FUN_1449db362(param_1 + 0x4d8);
  FUN_1449db362(param_1 + 0x4c8);
  FUN_1449db362(param_1 + 0x4b8);
  FUN_1449db362(param_1 + 0x4a8);
  FUN_1449db362(param_1 + 0x498);
  FUN_1449db362(param_1 + 0x488);
  FUN_1449db362(param_1 + 0x460);
  plVar3 = *(longlong **)(param_1 + 0x440);
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
  plVar3 = *(longlong **)(param_1 + 0x430);
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
  FUN_1449db362(param_1 + 0x410);
  FUN_1449db362(param_1 + 0x3f8);
  FUN_1449db362(param_1 + 0x3e0);
  FUN_1449db362(param_1 + 0x3c8);
  FUN_1449db362(param_1 + 0x3b0);
  FUN_1449db362(param_1 + 0x398);
  FUN_1449db362(param_1 + 0x380);
  FUN_1449db362(param_1 + 0x368);
  FUN_1449db362(param_1 + 0x350);
  FUN_1449db362(param_1 + 0x338);
  FUN_1449db362(param_1 + 800);
  FUN_1449db362(param_1 + 0x2f8);
  FUN_1449db362(param_1 + 0x2d0);
  FUN_141515cba(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x230);
  if (*(longlong **)(param_1 + 0x218) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x218) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x208);
  if (*(longlong **)(param_1 + 0x1f0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x1e0);
  if (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0x1c0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a70b48 FUN_146a70b48 body=17 status=ok
// SIG undefined FUN_146a70b48(void)

void FUN_146a70b48(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_578 [40];
  undefined1 auStack_550 [632];
  undefined8 uStack_2d8;
  ulonglong uStack_18;
  
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  if (lVar1 == 0) {
    return;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_578;
  if (param_2 == 0) {
    FUN_146a6f758(auStack_550);
    FUN_146adc734(*(undefined8 *)(lVar1 + 0x1e8),uStack_2d8);
    FUN_146a701ca(auStack_550);
    if ((uStack_18 ^ (ulonglong)auStack_578) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_578);
}



// FUNCTION 146a70b5a FUN_146a70b5a body=12 status=ok
// SIG undefined FUN_146a70b5a(void)

void FUN_146a70b5a(longlong param_1)

{
  FUN_146ae7fa2(*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 146a70b66 FUN_146a70b66 body=12 status=ok
// SIG undefined FUN_146a70b66(void)

void FUN_146a70b66(longlong param_1)

{
  FUN_146ae7fcc(*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 146a70b72 FUN_146a70b72 body=12 status=ok
// SIG undefined FUN_146a70b72(void)

void FUN_146a70b72(longlong param_1)

{
  FUN_146ae8094(*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 146a70b7e FUN_146a70b7e body=12 status=ok
// SIG undefined FUN_146a70b7e(void)

void FUN_146a70b7e(longlong param_1)

{
  FUN_146ae80d4(*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 146a70b8a FUN_146a70b8a body=12 status=ok
// SIG undefined FUN_146a70b8a(void)

void FUN_146a70b8a(longlong param_1)

{
  FUN_146ae8114(*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 146a70b96 FUN_146a70b96 body=12 status=ok
// SIG undefined FUN_146a70b96(void)

void FUN_146a70b96(longlong param_1)

{
  FUN_146ae8120(*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 146a70ba2 FUN_146a70ba2 body=12 status=ok
// SIG undefined FUN_146a70ba2(void)

void FUN_146a70ba2(longlong param_1)

{
  FUN_146ae812c(*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 146a70bae FUN_146a70bae body=12 status=ok
// SIG undefined FUN_146a70bae(void)

void FUN_146a70bae(longlong param_1)

{
  FUN_146ae8138(*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 146a70bba FUN_146a70bba body=12 status=ok
// SIG undefined FUN_146a70bba(void)

void FUN_146a70bba(longlong param_1)

{
  FUN_146ae8144(*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 146a70bc6 FUN_146a70bc6 body=12 status=ok
// SIG undefined FUN_146a70bc6(void)

void FUN_146a70bc6(longlong param_1)

{
  FUN_146ae8150(*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 146a70bd2 FUN_146a70bd2 body=12 status=ok
// SIG undefined FUN_146a70bd2(void)

void FUN_146a70bd2(longlong param_1)

{
  FUN_146ae815c(*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 146a70bde FUN_146a70bde body=12 status=ok
// SIG undefined FUN_146a70bde(void)

void FUN_146a70bde(longlong param_1)

{
  FUN_146ae8168(*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 146a70bea FUN_146a70bea body=116 status=ok
// SIG undefined FUN_146a70bea(void)

void FUN_146a70bea(longlong param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined2 local_30 [4];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x2a0);
  local_30[0] = *param_2;
  local_28 = 0;
  local_20 = 0;
  FUN_146a74d60(&local_28,param_2 + 4);
  FUN_146ae8182(uVar1,local_30);
  FUN_1449db362(param_2 + 4);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a70c60 FUN_146a70c60 body=12 status=ok
// SIG undefined FUN_146a70c60(void)

void FUN_146a70c60(longlong param_1)

{
  FUN_146ae81b2(*(undefined8 *)(param_1 + 0x2a0));
  return;
}



// FUNCTION 146a70c6c FUN_146a70c6c body=32 status=ok
// SIG undefined FUN_146a70c6c(void)

void FUN_146a70c6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1447a1f4a(param_2);
  FUN_146a70c8c(param_1,uVar1);
  return;
}



// FUNCTION 146a70c8c FUN_146a70c8c body=698 status=ok
// SIG undefined FUN_146a70c8c(void)

void FUN_146a70c8c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_398 [39];
  undefined1 local_371;
  longlong local_370;
  longlong *local_368;
  undefined8 local_358;
  longlong *local_350;
  undefined8 local_348;
  longlong *local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined1 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined1 local_188 [120];
  undefined1 local_110 [8];
  undefined1 local_108 [208];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (*(longlong *)(param_1 + 0x4d0) != 0) goto LAB_146a70cbe;
  FUN_146a24608(*(undefined8 *)(param_1 + 0x470),local_110,0xffffffff);
  lVar4 = FUN_140a52578(local_108);
  local_338 = 0x40400000;
  uStack_330 = 0x40400000;
  local_328 = 1;
  local_320 = 0;
  uStack_318 = 0;
  *(undefined1 *)(lVar4 + 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x18) = 0x40400000;
  *(undefined4 *)(lVar4 + 0x1c) = 0;
  *(undefined4 *)(lVar4 + 0x20) = 0x40400000;
  *(undefined4 *)(lVar4 + 0x24) = 0;
  FUN_144a450dc(lVar4 + 0x30,&local_320);
  FUN_1449db362(&local_320);
  FUN_146a683da(&local_338);
  FUN_146a7e54c(&local_370,".\\Runtime/Slate/Private/Widgets/Input/SMultiLineEditableTextBox.cpp",
                0x1b5,&local_371);
  plVar3 = local_368;
  if (local_368 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_368 + 1) = (int)local_368[1] + 1;
    UNLOCK();
  }
  FUN_146a68468(&local_370,&local_358,&local_338);
  local_348 = local_358;
  local_340 = local_350;
  if (local_350 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_350 + 1) = (int)local_350[1] + 1;
    UNLOCK();
  }
  FUN_140a4fe8e(lVar4,&local_348);
  plVar5 = local_340;
  if (local_340 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_340 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_340)(local_340);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_350 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_350 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_350)(local_350);
      LOCK();
      piVar2 = (int *)((longlong)local_350 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_350 + 0x10))(local_350);
      }
    }
  }
  if (local_368 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_368 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_368)(local_368);
      LOCK();
      piVar2 = (int *)((longlong)local_368 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_368 + 0x10))(local_368);
      }
    }
  }
  FUN_141515cba(local_188);
  FUN_140a4ff8c(&local_338);
  FUN_146a071ac(local_110);
  lVar4 = local_370 + 0x390;
  if (local_370 == 0) {
    lVar4 = 0;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x4d0) = lVar4;
    plVar5 = *(longlong **)(param_1 + 0x4d8);
    if (plVar5 == (longlong *)0x0) goto LAB_146a70cbe;
    *(undefined8 *)(param_1 + 0x4d8) = 0;
LAB_146a70eb2:
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
    if (plVar3 == (longlong *)0x0) goto LAB_146a70cbe;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x4d0) = lVar4;
    plVar5 = *(longlong **)(param_1 + 0x4d8);
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x4d8) = plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_146a70eb2;
    }
  }
  LOCK();
  plVar5 = plVar3 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_146a70cbe:
  (**(code **)(**(longlong **)(param_1 + 0x4d0) + 8))(*(longlong **)(param_1 + 0x4d0),param_2);
  if ((local_38 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a70f48 FUN_146a70f48 body=97 status=ok
// SIG undefined FUN_146a70f48(void)

ulonglong FUN_146a70f48(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x2a0);
  plVar3 = *(longlong **)(param_1 + 0x2a8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar4 = (**(code **)(*plVar2 + 400))();
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    return (ulonglong)uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000146a70fa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar2 + 400))();
  return uVar5;
}



// FUNCTION 146a70faa FUN_146a70faa body=47 status=ok
// SIG undefined FUN_146a70faa(void)

undefined8 FUN_146a70faa(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14697dddc();
  if (cVar1 != '\0') {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000146a70fd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x198))();
  return uVar2;
}



// FUNCTION 146a70fda FUN_146a70fda body=238 status=ok
// SIG undefined FUN_146a70fda(void)

undefined1 * FUN_146a70fda(longlong param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  cVar3 = *param_4;
  if (cVar3 != '\x03') {
    local_38 = *(undefined8 *)(param_1 + 0x2a0);
    plVar4 = *(longlong **)(param_1 + 0x2a8);
    if (plVar4 == (longlong *)0x0) {
      local_30 = (longlong *)0x0;
      FUN_140592b68(param_2,&local_38,cVar3,0);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_30 = plVar4;
      FUN_140592b68(param_2,&local_38,cVar3,0);
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a710ca FUN_146a710ca body=468 status=ok
// SIG undefined FUN_146a710ca(void)

undefined1 * FUN_146a710ca(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *plStack_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = *(longlong *)(param_4 + 0x20);
  plVar4 = *(longlong **)(param_4 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((lVar3 == DAT_14c964dd0) &&
     (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x198))(), cVar7 != '\0')) {
    local_f8[0] = 1;
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    memset(local_d0,0,0x88);
    local_48 = 0x20702;
    local_44 = 0;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
LAB_146a71244:
      local_108 = 0;
      plStack_100 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar8 = (int)plVar5[1];
      do {
        if (iVar8 == 0) goto LAB_146a71244;
        LOCK();
        iVar6 = (int)plVar5[1];
        bVar10 = iVar8 == iVar6;
        if (bVar10) {
          *(int *)(plVar5 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar10);
      uVar9 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_108 = uVar9;
      plStack_100 = plVar5;
    }
    plVar5 = plStack_100;
    uVar9 = FUN_140592b68(local_f8,&local_108,3,0);
    FUN_1403d4c6e(param_2,uVar9);
    if (!bVar10) {
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
    FUN_14493db24(local_f8);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a712a0 FUN_146a712a0 body=7712 status=ok
// SIG undefined FUN_146a712a0(void)

void FUN_146a712a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 auStack_e38 [32];
  longlong **local_e18;
  longlong *local_e08;
  ulonglong local_e00;
  undefined8 local_df8;
  undefined8 local_df0;
  undefined1 local_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined1 *puStack_dc8;
  undefined4 local_dc0;
  undefined1 local_dbc;
  undefined8 local_db8;
  undefined8 uStack_db0;
  longlong local_da8;
  undefined1 local_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined1 local_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined1 *puStack_d58;
  undefined4 local_d50;
  undefined1 local_d4c;
  undefined8 local_d48;
  undefined8 uStack_d40;
  longlong local_d38;
  undefined1 local_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined1 local_d08;
  undefined8 local_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined1 *puStack_ce8;
  undefined4 local_ce0;
  undefined1 local_cdc;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  longlong local_cc8;
  undefined1 local_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined1 *puStack_ca0;
  undefined4 local_c98;
  undefined1 local_c94;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined1 *local_c80;
  undefined1 *puStack_c78;
  undefined1 local_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined1 local_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined1 local_c21 [9];
  longlong *local_c18;
  undefined1 local_c01;
  code *local_c00;
  longlong *local_bf8;
  undefined8 local_be8;
  undefined1 *puStack_be0;
  undefined4 local_bd8;
  undefined1 local_bd4;
  undefined8 local_bd0;
  undefined8 uStack_bc8;
  longlong local_bc0;
  undefined1 local_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  longlong local_ba0;
  longlong *local_b98;
  undefined8 local_b90;
  undefined1 *puStack_b88;
  undefined4 local_b80;
  undefined1 local_b7c;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined1 *local_b68;
  undefined1 *puStack_b60;
  undefined1 local_b58;
  undefined8 local_b50;
  undefined8 uStack_b48;
  undefined8 local_b40;
  longlong *local_b38;
  longlong *local_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined1 local_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined8 local_af8;
  undefined1 *puStack_af0;
  undefined4 local_ae8;
  undefined1 local_ae4;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined4 local_ad0;
  undefined8 local_acc;
  undefined4 local_ac4;
  undefined1 local_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined1 *puStack_aa0;
  undefined4 local_a98;
  undefined1 local_a94;
  undefined8 local_a90;
  undefined8 uStack_a88;
  longlong *local_a80;
  longlong *local_a78;
  undefined1 local_a70 [16];
  undefined1 local_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined4 local_a48;
  undefined1 local_a44;
  undefined8 local_a40;
  undefined4 local_a38;
  undefined2 local_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined2 local_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined2 local_a00;
  undefined8 local_9f8;
  undefined4 local_9f0;
  longlong *local_9e8;
  undefined4 local_9e0;
  undefined1 local_9d8;
  undefined8 local_9d0;
  undefined4 local_9c8;
  longlong *local_9c0;
  undefined4 local_9b8;
  undefined1 local_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined4 local_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 uStack_98c;
  char local_988;
  undefined1 local_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined4 local_968;
  undefined4 uStack_964;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  char local_958;
  undefined1 local_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  char local_928;
  undefined1 local_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  char local_8f8;
  undefined1 local_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  code *local_8d8;
  undefined4 local_8d0 [104];
  longlong local_730;
  undefined1 local_728;
  undefined1 local_720 [16];
  undefined4 local_710;
  undefined4 uStack_70c;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined4 local_700;
  undefined1 local_6fc;
  undefined1 local_6f8 [88];
  code *local_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined1 local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  longlong local_420;
  longlong *local_418;
  undefined8 local_410;
  undefined1 local_408 [8];
  undefined1 *local_400;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 local_3e8 [8];
  undefined1 local_3e0 [56];
  undefined1 local_3a8 [80];
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined1 local_344;
  undefined1 local_340 [112];
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 local_2c0;
  undefined1 local_2bc;
  undefined1 local_2b8 [16];
  undefined1 local_2a8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e38;
  if ((undefined8 *)(param_2 + 0x200) != (undefined8 *)(param_1 + 0x5a8)) {
    if (*(char *)(param_2 + 0x208) == '\x01') {
      *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_2 + 0x200);
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x5b0) != '\x01') goto LAB_146a712fb;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x5b0) = uVar6;
  }
LAB_146a712fb:
  *(undefined1 *)(param_1 + 0x5b4) = *(undefined1 *)(param_2 + 0x20c);
  FUN_146a750fc(param_1 + 0x5b8,param_2 + 0x210);
  *(undefined2 *)(param_1 + 0x5c8) = *(undefined2 *)(param_2 + 0x220);
  FUN_14096c7c0(param_1 + 0x5d0,param_2 + 0x228);
  local_e08 = (longlong *)(param_1 + 0x488);
  FUN_146a81e5a(local_e08,param_2 + 0x268);
  FUN_14628081e(param_1 + 0x498,param_2 + 0x238);
  FUN_146a25078(param_1 + 0x4a8,param_2 + 0x248);
  *(undefined2 *)(param_1 + 0x4b8) = *(undefined2 *)(param_2 + 0x2a8);
  FUN_14096c7c0(param_1 + 0x4c0,param_2 + 0x2b0);
  *(undefined1 *)(param_1 + 0x4d4) = *(undefined1 *)(param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x2c0);
  FUN_140a52b3c(param_1 + 0x4d8,param_2 + 0x2c8);
  FUN_1412cc59c(param_1 + 0x548,*(longlong *)(param_2 + 0x1a8) + 0x2f8);
  FUN_1412cc59c(param_1 + 0x4e8,*(longlong *)(param_2 + 0x1a8) + 0xc90);
  FUN_146a10de6(&local_5c8);
  local_420 = *(longlong *)(param_2 + 0x1a8) + 0x10;
  local_8d8 = FUN_146a731c8;
  local_8d0[0] = 0;
  FUN_146a730c2(&local_5c8,param_1);
  plVar7 = (longlong *)FUN_14142e2d2(param_2 + 0x1d8);
  local_9c0 = (longlong *)*plVar7;
  if (local_9c0 != (longlong *)0x0) {
    (**(code **)(*local_9c0 + 8))();
  }
  local_9b8 = (undefined4)plVar7[1];
  local_9b0 = 1;
  local_9a8 = 0;
  uStack_9a0 = 0;
  uVar8 = FUN_146a11108(&local_5c8);
  local_9e8 = *(longlong **)(param_2 + 0x1b0);
  if (local_9e8 != (longlong *)0x0) {
    (**(code **)(*local_9e8 + 8))();
  }
  local_9e0 = *(undefined4 *)(param_2 + 0x1b8);
  local_9d8 = *(undefined1 *)(param_2 + 0x1c0);
  uVar12 = 0;
  local_9d0 = 0;
  local_9c8 = 0;
  FUN_1413a4324(&local_9d0,param_2 + 0x1c8);
  lVar9 = FUN_146a73256(uVar8,&local_9e8);
  local_a00 = *(undefined2 *)(param_2 + 0x278);
  local_9f8 = 0;
  local_9f0 = 0;
  FUN_14096c7c0(&local_9f8,param_2 + 0x280);
  *(undefined2 *)(lVar9 + 0x360) = local_a00;
  FUN_144a450dc(lVar9 + 0x368,&local_9f8);
  FUN_1449db362(&local_9f8);
  local_a18 = 0x101;
  local_a10 = 0;
  uStack_a08 = 0;
  *(undefined2 *)(lVar9 + 0x378) = 0x101;
  FUN_144a450dc(lVar9 + 0x380,&local_a10);
  FUN_1449db362(&local_a10);
  local_a30 = 0x100;
  local_a28 = 0;
  uStack_a20 = 0;
  *(undefined2 *)(lVar9 + 0x390) = 0x100;
  FUN_144a450dc(lVar9 + 0x398,&local_a28);
  FUN_1449db362(&local_a28);
  local_6a0 = FUN_146a732ac;
  local_698 = 0;
  FUN_146a823e4(&local_8d8,param_1,&local_6a0);
  FUN_144a450dc(lVar9 + 0x3f8,&local_8d8);
  FUN_1449db362(&local_8d8);
  local_6a0 = FUN_146a734dc;
  local_698 = 0;
  FUN_146a82886(&local_8d8,param_1,&local_6a0);
  FUN_144a450dc(lVar9 + 0x408,&local_8d8);
  FUN_1449db362(&local_8d8);
  FUN_146a24ff4(lVar9 + 0x418,param_2 + 600);
  local_a44 = *(undefined1 *)(param_2 + 0x294);
  local_a48 = *(undefined4 *)(param_2 + 0x290);
  local_a40 = 0;
  local_a38 = 0;
  FUN_140a52b3c(&local_a40,param_2 + 0x298);
  *(undefined1 *)(lVar9 + 0x42c) = local_a44;
  *(undefined4 *)(lVar9 + 0x428) = local_a48;
  FUN_144a450dc(lVar9 + 0x430,&local_a40);
  FUN_1449db362(&local_a40);
  FUN_14603678a(lVar9 + 0x480,param_2 + 0x2d8);
  FUN_146a6673e(param_1,lVar9);
  FUN_146a111d2(&local_5c8);
  if (*(char *)(*(longlong *)(param_2 + 0x1a8) + 0xfd9) == '\0') {
    uVar12 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x408) + 0x200);
  }
  local_e00 = uVar12;
  FUN_146a24608(*(longlong *)(param_1 + 0x408),&local_8d8,uVar12);
  lVar9 = FUN_140a52578(local_8d0);
  local_5c8 = 0;
  uStack_5c0 = 0x40000000;
  local_5b8 = 1;
  local_5b0 = 0;
  uStack_5a8 = 0;
  *(undefined1 *)(lVar9 + 0x28) = 1;
  *(undefined4 *)(lVar9 + 0x18) = 0;
  *(undefined4 *)(lVar9 + 0x1c) = 0;
  *(undefined4 *)(lVar9 + 0x20) = 0x40000000;
  *(undefined4 *)(lVar9 + 0x24) = 0;
  FUN_144a450dc(lVar9 + 0x30,&local_5b0);
  FUN_1449db362(&local_5b0);
  *(undefined4 *)(lVar9 + 0x40) = 2;
  *(undefined1 *)(lVar9 + 0x44) = 1;
  *(undefined4 *)(lVar9 + 0x48) = 2;
  *(undefined1 *)(lVar9 + 0x4c) = 1;
  FUN_146a735e0(&local_5c8);
  local_410 = CONCAT44(local_410._4_4_,0x41100000);
  local_6a0 = FUN_146a73754;
  local_698 = 0;
  FUN_146a736b0(&local_5c8,param_1,&local_6a0);
  local_6a0 = (code *)0x149f10fde;
  local_698 = 9;
  FUN_1446e940c(&local_b38,&local_6a0);
  local_6a0 = (code *)0x149f10ff2;
  local_698 = 9;
  FUN_1446e940c(&local_ba0,&local_6a0);
  FUN_140208bae(&local_a80,&local_ba0,&local_b38,L"Searching...");
  FUN_14023423e(local_a70,&local_a80);
  local_a60 = 1;
  local_a58 = 0;
  uStack_a50 = 0;
  lVar10 = FUN_146a737c6(&local_5c8,local_a70);
  local_aa8 = 0x3f800000;
  puStack_aa0 = &DAT_3f8000003f800000;
  local_a98 = CONCAT22(local_a98._2_2_,2);
  local_a94 = 1;
  local_a90 = 0;
  uStack_a88 = 0;
  *(undefined4 *)(lVar10 + 0x1c0) = 0x3f800000;
  *(undefined4 *)(lVar10 + 0x1c4) = 0;
  *(undefined4 *)(lVar10 + 0x1c8) = 0x3f800000;
  *(undefined4 *)(lVar10 + 0x1cc) = 0x3f800000;
  *(undefined4 *)(lVar10 + 0x1d0) = local_a98;
  *(undefined1 *)(lVar10 + 0x1d4) = 1;
  FUN_144a450dc(lVar10 + 0x1d8,&local_a90);
  FUN_1449db362(&local_a90);
  local_e18 = (longlong **)&local_b40;
  FUN_146a82d28(&local_6a0,"SCircularThrobber",
                ".\\Runtime/Slate/Private/Widgets/Input/SSearchBox.cpp",0x33);
  FUN_146a73810(&local_6a0,local_c21 + 1,lVar10);
  local_c00 = (code *)CONCAT44(local_c21._5_4_,local_c21._1_4_);
  local_bf8 = local_c18;
  if (local_c18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c18 + 1) = (int)local_c18[1] + 1;
    UNLOCK();
  }
  FUN_140a4fe8e(lVar9,&local_c00);
  plVar7 = local_bf8;
  if (local_bf8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_bf8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_bf8)(local_bf8);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = local_c18;
  uVar12 = local_e00;
  if (local_c18 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c18 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_c18)(local_c18);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = (longlong *)CONCAT44(uStack_694,local_698);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_a80 != (longlong *)0x0) {
    (**(code **)(*local_a80 + 0x10))();
  }
  iVar13 = (int)uVar12 + 1;
  FUN_1449db362(&uStack_3f0);
  FUN_140a4ff8c(&local_5c8);
  FUN_146a071ac(&local_8d8);
  if ((*(int *)(param_1 + 0x490) != 0) && ((longlong *)*local_e08 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*(longlong *)*local_e08 + 0x30))();
    if (cVar5 != '\0') {
      if (*(char *)(*(longlong *)(param_2 + 0x1a8) + 0xfd9) == '\0') {
        uVar14 = 0x40000000;
      }
      else {
        uVar14 = 0x40a00000;
      }
      FUN_146a24608(*(undefined8 *)(param_1 + 0x408),&local_8d8,iVar13);
      lVar9 = FUN_140a52578(local_8d0);
      local_acc = 0x4000000000000000;
      local_ac4 = 0;
      local_ac0 = 1;
      local_ab8 = 0;
      uStack_ab0 = 0;
      *(undefined1 *)(lVar9 + 0x28) = 1;
      *(undefined4 *)(lVar9 + 0x18) = uVar14;
      *(undefined8 *)(lVar9 + 0x1c) = 0x4000000000000000;
      *(undefined4 *)(lVar9 + 0x24) = 0;
      local_ad0 = uVar14;
      FUN_144a450dc(lVar9 + 0x30,&local_ab8);
      FUN_1449db362(&local_ab8);
      *(undefined4 *)(lVar9 + 0x40) = 2;
      *(undefined1 *)(lVar9 + 0x44) = 1;
      *(undefined4 *)(lVar9 + 0x48) = 2;
      *(undefined1 *)(lVar9 + 0x4c) = 1;
      FUN_140a570d8(&local_5c8);
      local_6a0 = FUN_146a7398e;
      local_698 = 0;
      FUN_146a738ea(&local_5c8,param_1,&local_6a0);
      local_6a0 = FUN_146a73aa6;
      local_698 = 0;
      FUN_146a739ce(&local_5c8,param_1,&local_6a0);
      local_af8 = 0x3f800000;
      puStack_af0 = &DAT_3f8000003f800000;
      local_ae8 = CONCAT22(local_ae8._2_2_,3);
      local_ae4 = 1;
      local_ae0 = 0;
      uStack_ad8 = 0;
      local_358 = 0x3f800000;
      uStack_354 = 0;
      uStack_350 = 0x3f800000;
      uStack_34c = 0x3f800000;
      local_348 = local_ae8;
      local_344 = 1;
      FUN_144a450dc(local_340,&local_ae0);
      FUN_1449db362(&local_ae0);
      local_e18 = &local_a80;
      FUN_140a54526(&local_6a0,"STextBlock",".\\Runtime/Slate/Private/Widgets/Input/SSearchBox.cpp",
                    0x46);
      FUN_140a52852(&local_6a0,local_c21 + 1,&local_5c8);
      local_bf8 = local_c18;
      if (local_c18 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c18 + 1) = (int)local_c18[1] + 1;
        UNLOCK();
      }
      FUN_140a4fe8e(lVar9,&local_c00);
      plVar7 = local_bf8;
      uVar12 = local_e00;
      if (local_bf8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_bf8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_bf8)(local_bf8);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      plVar7 = local_c18;
      if (local_c18 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_c18 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_c18)(local_c18);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      plVar7 = (longlong *)CONCAT44(uStack_694,local_698);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      FUN_140a59ae6(&local_5c8);
      FUN_146a071ac(&local_8d8);
      FUN_146a24608(*(undefined8 *)(param_1 + 0x408),&local_6a0,(int)uVar12 + 2);
      lVar9 = FUN_140a52578(&local_698);
      uVar8 = *(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0xfb0);
      uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0xfb8);
      local_b18 = 1;
      local_b10 = 0;
      uStack_b08 = 0;
      *(undefined1 *)(lVar9 + 0x28) = 1;
      local_b28._0_4_ = (undefined4)uVar8;
      local_b28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_b20._0_4_ = (undefined4)uVar4;
      uStack_b20._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      *(undefined4 *)(lVar9 + 0x18) = (undefined4)local_b28;
      *(undefined4 *)(lVar9 + 0x1c) = local_b28._4_4_;
      *(undefined4 *)(lVar9 + 0x20) = (undefined4)uStack_b20;
      *(undefined4 *)(lVar9 + 0x24) = uStack_b20._4_4_;
      local_b28 = uVar8;
      uStack_b20 = uVar4;
      FUN_144a450dc(lVar9 + 0x30,&local_b10);
      FUN_1449db362(&local_b10);
      *(undefined4 *)(lVar9 + 0x40) = 2;
      *(undefined1 *)(lVar9 + 0x44) = 1;
      *(undefined4 *)(lVar9 + 0x48) = 0;
      *(undefined1 *)(lVar9 + 0x4c) = 1;
      local_e08 = (longlong *)lVar9;
      FUN_145ab3d24(&local_5c8);
      FUN_1446ddc76(&local_b40,"NoBorder",1);
      lVar9 = FUN_140a2b044(&DAT_14c96b348);
      if (lVar9 == 0) {
        lVar9 = DAT_14c96b350;
      }
      local_410 = FUN_141492734(lVar9,local_b40,0,0);
      local_b68 = &DAT_40a00000;
      puStack_b60 = &DAT_40a00000;
      local_b58 = 1;
      local_b50 = 0;
      uStack_b48 = 0;
      local_3e8[0] = 1;
      uStack_3f8 = 0x40a00000;
      uStack_3f4 = 0;
      uStack_3f0 = 0x40a00000;
      uStack_3ec = 0;
      FUN_144a450dc(local_3e0,&local_b50);
      FUN_1449db362(&local_b50);
      local_400 = &DAT_200000002;
      local_c21._1_4_ = 0;
      local_c00 = FUN_146a73cae;
      local_bf8 = (longlong *)((ulonglong)local_bf8 & 0xffffffff00000000);
      FUN_146a8393e(&local_8d8,param_1);
      FUN_144a450dc(local_3a8,&local_8d8);
      FUN_1449db362(&local_8d8);
      local_b90 = 0x3f800000;
      puStack_b88 = &DAT_3f8000003f800000;
      local_b80 = CONCAT22(local_b80._2_2_,2);
      local_b7c = 1;
      local_b78 = 0;
      uStack_b70 = 0;
      local_2d0 = 0x3f800000;
      uStack_2cc = 0;
      uStack_2c8 = 0x3f800000;
      uStack_2c4 = 0x3f800000;
      local_2c0 = local_b80;
      local_2bc = 1;
      FUN_144a450dc(local_2b8,&local_b78);
      FUN_1449db362(&local_b78);
      local_2a8 = 0;
      local_8d8 = FUN_146a73db6;
      local_8d0[0] = 0;
      FUN_146a73d12(&local_5c8,param_1,&local_8d8);
      FUN_140a53334(&local_8d8);
      local_bc0 = *(longlong *)(param_2 + 0x1a8) + 0xcf0;
      local_bb8 = 1;
      local_bb0 = 0;
      uStack_ba8 = 0;
      local_728 = 1;
      local_730 = local_bc0;
      FUN_144a450dc(local_720,&local_bb0);
      FUN_1449db362(&local_bb0);
      local_be8 = 0x3f800000;
      puStack_be0 = &DAT_3f8000003f800000;
      local_bd8 = CONCAT22(local_bd8._2_2_,2);
      local_bd4 = 1;
      local_bd0 = 0;
      uStack_bc8 = 0;
      local_710 = 0x3f800000;
      uStack_70c = 0;
      uStack_708 = 0x3f800000;
      uStack_704 = 0x3f800000;
      local_700 = local_bd8;
      local_6fc = 1;
      FUN_144a450dc(local_6f8,&local_bd0);
      FUN_1449db362(&local_bd0);
      lVar9 = *(longlong *)(param_2 + 0x1a8);
      local_8f8 = *(char *)(lVar9 + 0xfd0);
      if (local_8f8 == '\x01') {
        local_908 = *(undefined8 *)(lVar9 + 0xfc0);
        uStack_900 = *(undefined8 *)(lVar9 + 0xfc8);
      }
      local_8f0 = 1;
      local_8e8 = 0;
      uStack_8e0 = 0;
      uVar8 = FUN_1469f8fd4(&local_8d8);
      local_e18 = (longlong **)&local_c01;
      FUN_140a554b8(&local_c00,"SImage",".\\Runtime/Slate/Private/Widgets/Input/SSearchBox.cpp",0x5d
                   );
      FUN_140a52c70(&local_c00,&local_ba0,uVar8);
      plVar2 = local_418;
      plVar7 = local_b98;
      uVar12 = local_e00;
      if (local_b98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b98 + 1) = (int)local_b98[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_b98 + 1) = (int)local_b98[1] + 1;
        UNLOCK();
      }
      local_420 = local_ba0;
      local_418 = local_b98;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      local_e18 = (longlong **)local_c21;
      FUN_145ab3730(local_c21 + 1,"SButton",".\\Runtime/Slate/Private/Widgets/Input/SSearchBox.cpp",
                    0x53);
      FUN_145ab34ca(local_c21 + 1,&local_b38,&local_5c8);
      local_a80 = local_b38;
      local_a78 = local_b30;
      if (local_b30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b30 + 1) = (int)local_b30[1] + 1;
        UNLOCK();
      }
      FUN_140a4fe8e(local_e08,&local_a80);
      plVar2 = local_a78;
      if (local_a78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a78 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_a78)(local_a78);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar2 = local_b30;
      if (local_b30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_b30)(local_b30);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar2 = local_c18;
      if (local_c18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c18 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_c18)(local_c18);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      plVar7 = local_b98;
      if (local_b98 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_b98 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_b98)(local_b98);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      plVar7 = local_bf8;
      if (local_bf8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_bf8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_bf8)(local_bf8);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      FUN_140a55a86(&local_8d8);
      FUN_145ab35f4(&local_5c8);
      FUN_146a071ac(&local_6a0);
      FUN_146a24608(*(undefined8 *)(param_1 + 0x408),&local_6a0,(int)uVar12 + 3);
      plVar7 = (longlong *)FUN_140a52578(&local_698);
      uVar8 = *(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0xfb0);
      uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0xfb8);
      local_c48 = 1;
      local_c40 = 0;
      uStack_c38 = 0;
      *(undefined1 *)(plVar7 + 5) = 1;
      local_c58._0_4_ = (undefined4)uVar8;
      local_c58._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_c50._0_4_ = (undefined4)uVar4;
      uStack_c50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      *(undefined4 *)(plVar7 + 3) = (undefined4)local_c58;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = local_c58._4_4_;
      *(undefined4 *)(plVar7 + 4) = (undefined4)uStack_c50;
      *(undefined4 *)((longlong)plVar7 + 0x24) = uStack_c50._4_4_;
      local_c58 = uVar8;
      uStack_c50 = uVar4;
      FUN_144a450dc(plVar7 + 6,&local_c40);
      FUN_1449db362(&local_c40);
      *(undefined4 *)(plVar7 + 8) = 2;
      *(undefined1 *)((longlong)plVar7 + 0x44) = 1;
      *(undefined4 *)(plVar7 + 9) = 0;
      *(undefined1 *)((longlong)plVar7 + 0x4c) = 1;
      local_e08 = plVar7;
      FUN_145ab3d24(&local_5c8);
      FUN_1446ddc76(&local_b40,"NoBorder",1);
      lVar9 = FUN_140a2b044(&DAT_14c96b348);
      if (lVar9 == 0) {
        lVar9 = DAT_14c96b350;
      }
      local_410 = FUN_141492734(lVar9,local_b40,0,0);
      local_c80 = &DAT_40a00000;
      puStack_c78 = &DAT_40a00000;
      local_c70 = 1;
      local_c68 = 0;
      uStack_c60 = 0;
      local_3e8[0] = 1;
      uStack_3f8 = 0x40a00000;
      uStack_3f4 = 0;
      uStack_3f0 = 0x40a00000;
      uStack_3ec = 0;
      FUN_144a450dc(local_3e0,&local_c68);
      FUN_1449db362(&local_c68);
      local_400 = &DAT_200000002;
      local_c21._1_4_ = 1;
      local_c00 = FUN_146a73cae;
      local_bf8 = (longlong *)((ulonglong)local_bf8 & 0xffffffff00000000);
      FUN_146a8393e(&local_8d8,param_1);
      FUN_144a450dc(local_3a8,&local_8d8);
      FUN_1449db362(&local_8d8);
      local_ca8 = 0x3f800000;
      puStack_ca0 = &DAT_3f8000003f800000;
      local_c98 = CONCAT22(local_c98._2_2_,2);
      local_c94 = 1;
      local_c90 = 0;
      uStack_c88 = 0;
      local_2d0 = 0x3f800000;
      uStack_2cc = 0;
      uStack_2c8 = 0x3f800000;
      uStack_2c4 = 0x3f800000;
      local_2c0 = local_c98;
      local_2bc = 1;
      FUN_144a450dc(local_2b8,&local_c90);
      FUN_1449db362(&local_c90);
      local_2a8 = 0;
      local_8d8 = FUN_146a73db6;
      local_8d0[0] = 0;
      FUN_146a73d12(&local_5c8,param_1,&local_8d8);
      FUN_140a53334(&local_8d8);
      local_cc8 = *(longlong *)(param_2 + 0x1a8) + 0xda0;
      local_cc0 = 1;
      local_cb8 = 0;
      uStack_cb0 = 0;
      local_728 = 1;
      local_730 = local_cc8;
      FUN_144a450dc(local_720,&local_cb8);
      FUN_1449db362(&local_cb8);
      local_cf0 = 0x3f800000;
      puStack_ce8 = &DAT_3f8000003f800000;
      local_ce0 = CONCAT22(local_ce0._2_2_,2);
      local_cdc = 1;
      local_cd8 = 0;
      uStack_cd0 = 0;
      local_710 = 0x3f800000;
      uStack_70c = 0;
      uStack_708 = 0x3f800000;
      uStack_704 = 0x3f800000;
      local_700 = local_ce0;
      local_6fc = 1;
      FUN_144a450dc(local_6f8,&local_cd8);
      FUN_1449db362(&local_cd8);
      lVar9 = *(longlong *)(param_2 + 0x1a8);
      local_928 = *(char *)(lVar9 + 0xfd0);
      if (local_928 == '\x01') {
        local_938 = *(undefined8 *)(lVar9 + 0xfc0);
        uStack_930 = *(undefined8 *)(lVar9 + 0xfc8);
      }
      local_920 = 1;
      local_918 = 0;
      uStack_910 = 0;
      uVar8 = FUN_1469f8fd4(&local_8d8);
      local_e18 = (longlong **)&local_c01;
      FUN_140a554b8(&local_c00,"SImage",".\\Runtime/Slate/Private/Widgets/Input/SSearchBox.cpp",0x74
                   );
      FUN_140a52c70(&local_c00,&local_ba0,uVar8);
      plVar2 = local_418;
      plVar7 = local_b98;
      uVar12 = local_e00;
      if (local_b98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b98 + 1) = (int)local_b98[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(local_b98 + 1) = (int)local_b98[1] + 1;
        UNLOCK();
      }
      local_420 = local_ba0;
      local_418 = local_b98;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      local_e18 = (longlong **)local_c21;
      FUN_145ab3730(local_c21 + 1,"SButton",".\\Runtime/Slate/Private/Widgets/Input/SSearchBox.cpp",
                    0x6a);
      FUN_145ab34ca(local_c21 + 1,&local_b38,&local_5c8);
      local_a80 = local_b38;
      local_a78 = local_b30;
      if (local_b30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b30 + 1) = (int)local_b30[1] + 1;
        UNLOCK();
      }
      FUN_140a4fe8e(local_e08,&local_a80);
      plVar2 = local_a78;
      if (local_a78 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_a78 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_a78)(local_a78);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar2 = local_b30;
      if (local_b30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_b30)(local_b30);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      plVar2 = local_c18;
      if (local_c18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c18 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_c18)(local_c18);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      plVar7 = local_b98;
      if (local_b98 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_b98 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_b98)(local_b98);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      plVar7 = local_bf8;
      if (local_bf8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_bf8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_bf8)(local_bf8);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      iVar13 = (int)uVar12 + 4;
      FUN_140a55a86(&local_8d8);
      FUN_145ab35f4(&local_5c8);
      FUN_146a071ac(&local_6a0);
    }
  }
  cVar5 = *(char *)(*(longlong *)(param_2 + 0x1a8) + 0xfda);
  iVar11 = 0;
  if (cVar5 == '\0') {
    iVar11 = *(int *)(*(longlong *)(param_1 + 0x408) + 0x200);
  }
  if (*(char *)(*(longlong *)(param_2 + 0x1a8) + 0xfd9) == cVar5) {
    iVar11 = iVar13;
  }
  FUN_146a24608(*(longlong *)(param_1 + 0x408),&local_8d8,iVar11);
  lVar10 = FUN_140a52578(local_8d0);
  uVar8 = *(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0xfb0);
  uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0xfb8);
  local_d08 = 1;
  local_d00 = 0;
  uStack_cf8 = 0;
  *(undefined1 *)(lVar10 + 0x28) = 1;
  local_d18._0_4_ = (undefined4)uVar8;
  local_d18._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_d10._0_4_ = (undefined4)uVar4;
  uStack_d10._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  *(undefined4 *)(lVar10 + 0x18) = (undefined4)local_d18;
  *(undefined4 *)(lVar10 + 0x1c) = local_d18._4_4_;
  *(undefined4 *)(lVar10 + 0x20) = (undefined4)uStack_d10;
  *(undefined4 *)(lVar10 + 0x24) = uStack_d10._4_4_;
  local_d18 = uVar8;
  uStack_d10 = uVar4;
  FUN_144a450dc(lVar10 + 0x30,&local_d00);
  FUN_1449db362(&local_d00);
  *(undefined4 *)(lVar10 + 0x40) = 2;
  *(undefined1 *)(lVar10 + 0x44) = 1;
  *(undefined4 *)(lVar10 + 0x48) = 2;
  *(undefined1 *)(lVar10 + 0x4c) = 1;
  FUN_140a53334(&local_5c8);
  local_6a0 = FUN_146a73ec0;
  local_698 = 0;
  FUN_146a73e1c(&local_5c8,param_1);
  local_d38 = *(longlong *)(param_2 + 0x1a8) + 0xe50;
  local_d30 = 1;
  local_d28 = 0;
  uStack_d20 = 0;
  local_418 = (longlong *)CONCAT71(local_418._1_7_,1);
  local_420 = local_d38;
  FUN_144a450dc(&local_410,&local_d28);
  FUN_1449db362(&local_d28);
  local_d60 = 0x3f800000;
  puStack_d58 = &DAT_3f8000003f800000;
  local_d50 = CONCAT22(local_d50._2_2_,2);
  local_d4c = 1;
  local_d48 = 0;
  uStack_d40 = 0;
  local_400 = (undefined1 *)0x3f800000;
  uStack_3f8 = 0x3f800000;
  uStack_3f4 = 0x3f800000;
  uStack_3f0 = local_d50;
  uStack_3ec = CONCAT31(uStack_3ec._1_3_,1);
  FUN_144a450dc(local_3e8,&local_d48);
  FUN_1449db362(&local_d48);
  lVar9 = *(longlong *)(param_2 + 0x1a8);
  local_958 = *(char *)(lVar9 + 0xfd0);
  if (local_958 == '\x01') {
    local_968 = *(undefined4 *)(lVar9 + 0xfc0);
    uStack_964 = *(undefined4 *)(lVar9 + 0xfc4);
    uStack_960 = *(undefined4 *)(lVar9 + 0xfc8);
    uStack_95c = *(undefined4 *)(lVar9 + 0xfcc);
  }
  local_950 = 1;
  local_948 = 0;
  uStack_940 = 0;
  uVar8 = FUN_1469f8fd4(&local_5c8);
  local_e18 = &local_a80;
  FUN_140a554b8(&local_6a0,"SImage",".\\Runtime/Slate/Private/Widgets/Input/SSearchBox.cpp",0x8d);
  FUN_140a52c70(&local_6a0,local_c21 + 1,uVar8);
  local_c00 = (code *)CONCAT44(local_c21._5_4_,local_c21._1_4_);
  local_bf8 = local_c18;
  if (local_c18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c18 + 1) = (int)local_c18[1] + 1;
    UNLOCK();
  }
  FUN_140a4fe8e(lVar10,&local_c00);
  plVar7 = local_bf8;
  if (local_bf8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_bf8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_bf8)(local_bf8);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = local_c18;
  if (local_c18 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c18 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_c18)(local_c18);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = (longlong *)CONCAT44(uStack_694,local_698);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140a55a86(&local_5c8);
  FUN_146a071ac(&local_8d8);
  FUN_146a24608(*(undefined8 *)(param_1 + 0x408),&local_6a0,iVar11 + 1);
  lVar10 = FUN_140a52578(&local_698);
  *(undefined4 *)(lVar10 + 0x40) = 2;
  *(undefined1 *)(lVar10 + 0x44) = 1;
  *(undefined4 *)(lVar10 + 0x48) = 2;
  *(undefined1 *)(lVar10 + 0x4c) = 1;
  FUN_145ab3d24(&local_5c8);
  local_8d8 = FUN_146a73f42;
  local_8d0[0] = 0;
  FUN_146a73d12(&local_5c8,param_1,&local_8d8);
  FUN_1446ddc76(&local_b40,"ThinHoverOnlyButton",1);
  lVar9 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar9 == 0) {
    lVar9 = DAT_14c96b350;
  }
  local_410 = FUN_141492734(lVar9,local_b40,0,0);
  uVar8 = *(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0xfb0);
  uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0xfb8);
  local_d78 = 1;
  local_d70 = 0;
  uStack_d68 = 0;
  local_3e8[0] = 1;
  local_d88._0_4_ = (undefined4)uVar8;
  local_d88._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_d80._0_4_ = (undefined4)uVar4;
  uStack_d80._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_3f8 = (undefined4)local_d88;
  uStack_3f4 = local_d88._4_4_;
  uStack_3f0 = (undefined4)uStack_d80;
  uStack_3ec = uStack_d80._4_4_;
  local_d88 = uVar8;
  uStack_d80 = uVar4;
  FUN_144a450dc(local_3e0,&local_d70);
  FUN_1449db362(&local_d70);
  local_400 = &DAT_200000002;
  local_c00 = FUN_146a73fc4;
  local_bf8 = (longlong *)((ulonglong)local_bf8 & 0xffffffff00000000);
  FUN_146a83e4e(&local_8d8,param_1);
  FUN_144a450dc(local_3a8,&local_8d8);
  FUN_1449db362(&local_8d8);
  local_2a8 = 1;
  FUN_140a53334(&local_8d8);
  local_da8 = *(longlong *)(param_2 + 0x1a8) + 0xf00;
  local_da0 = 1;
  local_d98 = 0;
  uStack_d90 = 0;
  local_728 = 1;
  local_730 = local_da8;
  FUN_144a450dc(local_720,&local_d98);
  FUN_1449db362(&local_d98);
  local_dd0 = 0x3f800000;
  puStack_dc8 = &DAT_3f8000003f800000;
  local_dc0 = CONCAT22(local_dc0._2_2_,2);
  local_dbc = 1;
  local_db8 = 0;
  uStack_db0 = 0;
  local_710 = 0x3f800000;
  uStack_70c = 0;
  uStack_708 = 0x3f800000;
  uStack_704 = 0x3f800000;
  local_700 = local_dc0;
  local_6fc = 1;
  FUN_144a450dc(local_6f8,&local_db8);
  FUN_1449db362(&local_db8);
  lVar9 = *(longlong *)(param_2 + 0x1a8);
  local_988 = *(char *)(lVar9 + 0xfd0);
  if (local_988 == '\x01') {
    local_998 = *(undefined4 *)(lVar9 + 0xfc0);
    uStack_994 = *(undefined4 *)(lVar9 + 0xfc4);
    uStack_990 = *(undefined4 *)(lVar9 + 0xfc8);
    uStack_98c = *(undefined4 *)(lVar9 + 0xfcc);
  }
  local_980 = 1;
  local_978 = 0;
  uStack_970 = 0;
  uVar8 = FUN_1469f8fd4(&local_8d8);
  local_e18 = (longlong **)&local_c01;
  FUN_140a554b8(&local_c00,"SImage",".\\Runtime/Slate/Private/Widgets/Input/SSearchBox.cpp",0xa5);
  FUN_140a52c70(&local_c00,&local_ba0,uVar8);
  plVar2 = local_418;
  plVar7 = local_b98;
  if (local_b98 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b98 + 1) = (int)local_b98[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_b98 + 1) = (int)local_b98[1] + 1;
    UNLOCK();
  }
  local_420 = local_ba0;
  local_418 = local_b98;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_e18 = (longlong **)local_c21;
  FUN_145ab3730(local_c21 + 1,"SButton",".\\Runtime/Slate/Private/Widgets/Input/SSearchBox.cpp",0x9a
               );
  FUN_145ab34ca(local_c21 + 1,&local_b38,&local_5c8);
  local_a80 = local_b38;
  local_a78 = local_b30;
  if (local_b30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b30 + 1) = (int)local_b30[1] + 1;
    UNLOCK();
  }
  FUN_140a4fe8e(lVar10,&local_a80);
  plVar2 = local_a78;
  if (local_a78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a78)(local_a78);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_b30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_b30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_b30)(local_b30);
      LOCK();
      piVar3 = (int *)((longlong)local_b30 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_b30 + 0x10))(local_b30);
      }
    }
  }
  plVar2 = local_c18;
  if (local_c18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c18)(local_c18);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_b98 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_b98 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_b98)(local_b98);
      LOCK();
      piVar3 = (int *)((longlong)local_b98 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_b98 + 0x10))(local_b98);
      }
    }
  }
  plVar7 = local_bf8;
  if (local_bf8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_bf8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_bf8)(local_bf8);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140a55a86(&local_8d8);
  FUN_145ab35f4(&local_5c8);
  FUN_146a071ac(&local_6a0);
  FUN_146a24608(*(undefined8 *)(param_1 + 0x408),&local_8d8,0xffffffff);
  uVar8 = FUN_140a52578(local_8d0);
  FUN_140a50678(&local_5c8);
  local_df8 = 0x401c000000000000;
  local_df0 = 0;
  local_de8 = 1;
  local_de0 = 0;
  uStack_dd8 = 0;
  local_410 = CONCAT71(local_410._1_7_,1);
  local_420 = 0x401c000000000000;
  local_418 = (longlong *)0x0;
  FUN_144a450dc(local_408,&local_de0);
  FUN_1449db362(&local_de0);
  local_e18 = &local_a80;
  FUN_140a52ce6(&local_6a0,"SSpacer",".\\Runtime/Slate/Private/Widgets/Input/SSearchBox.cpp",0xb1);
  FUN_140a50c6a(&local_6a0,local_c21 + 1,&local_5c8);
  local_c00 = (code *)CONCAT44(local_c21._5_4_,local_c21._1_4_);
  local_bf8 = local_c18;
  if (local_c18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c18 + 1) = (int)local_c18[1] + 1;
    UNLOCK();
  }
  FUN_140a4fe8e(uVar8,&local_c00);
  plVar7 = local_bf8;
  if (local_bf8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_bf8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_bf8)(local_bf8);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_c18 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_c18 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_c18)(local_c18);
      LOCK();
      piVar3 = (int *)((longlong)local_c18 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_c18 + 0x10))(local_c18);
      }
    }
  }
  plVar7 = (longlong *)CONCAT44(uStack_694,local_698);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_1449db362(local_408);
  FUN_140a4ff8c(&local_5c8);
  FUN_146a071ac(&local_8d8);
  if ((local_80 ^ (ulonglong)auStack_e38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a730c2 FUN_146a730c2 body=261 status=ok
// SIG undefined FUN_146a730c2(void)

longlong FUN_146a730c2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined7 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uStack_a0 = *(undefined4 *)(param_3 + 1);
  local_a8 = *param_3;
  FUN_146a81ede(local_b8,param_2,&local_a8);
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3f800000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0x41c00000;
  local_58 = 0;
  local_54 = 2;
  local_52 = 0;
  local_50 = 0x3f800000;
  local_48 = 1;
  local_40 = 0;
  local_38 = 0;
  FUN_140a5d470(&local_40,local_b8);
  FUN_1412cc59c(param_1 + 0x228,&local_a8);
  *(undefined1 *)(param_1 + 0x288) = local_48;
  FUN_144a450dc(param_1 + 0x290,&local_40);
  FUN_141515cba(&local_a8);
  FUN_1449db362(local_b8);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a731c8 FUN_146a731c8 body=141 status=ok
// SIG undefined FUN_146a731c8(void)

undefined8 FUN_146a731c8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146adc2a4(*(undefined8 *)(*(longlong *)(param_1 + 0x2b8) + 0x1f8),local_30);
  cVar1 = FUN_144a7c5f6(local_30);
  lVar2 = param_1 + 0x548;
  if (cVar1 == '\0') {
    lVar2 = param_1 + 0x4e8;
  }
  FUN_144a87366(param_2,lVar2);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a73256 FUN_146a73256 body=86 status=ok
// SIG undefined FUN_146a73256(void)

longlong FUN_146a73256(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x1d8);
  *(char *)(param_1 + 0x1e8) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x1f0,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a732ac FUN_146a732ac body=559 status=ok
// SIG undefined FUN_146a732ac(void)

void FUN_146a732ac(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_1[0x8f] != 0) && (plVar7 = (longlong *)param_1[0x90], plVar7 != (longlong *)0x0)) &&
     (0 < (int)plVar7[1])) {
    iVar6 = (int)plVar7[1];
    local_30 = (code *)0x0;
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_146a73304;
      }
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar6 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar8);
    local_30 = (code *)param_1[0x8f];
LAB_146a73304:
    local_28 = plVar7;
    FUN_14697f106(param_1,&local_30);
    plVar7 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if ((((int)param_1[0x99] != 0) && ((longlong *)param_1[0x98] != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)param_1[0x98] + 0x30))(), cVar4 != '\0')) {
    if ((int)param_1[0x99] == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)param_1[0x98];
    }
    uVar5 = (**(code **)(*plVar7 + 0x58))();
    *(undefined1 *)(param_1 + 0x97) = uVar5;
  }
  if (((char)param_1[0x97] == '\x01') &&
     (cVar4 = (**(code **)(*param_1 + 0x198))(param_1), cVar4 != '\0')) {
    local_30 = FUN_146a74138;
    local_28 = (longlong *)((ulonglong)local_28 & 0xffffffff00000000);
    FUN_146a7419c(local_40,param_1,&local_30,param_2);
    if (((int)param_1[0x9c] != 0) &&
       (((longlong *)param_1[0x9b] != (longlong *)0x0 &&
        (cVar4 = (**(code **)(*(longlong *)param_1[0x9b] + 0x30))(), cVar4 != '\0')))) {
      if ((int)param_1[0x9c] == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)param_1[0x9b];
      }
      uVar9 = (**(code **)(*plVar7 + 0x58))();
      *(undefined4 *)(param_1 + 0x9a) = uVar9;
    }
    FUN_14697ef1e(param_1,&local_30,(int)param_1[0x9a],local_40);
    plVar1 = local_28;
    param_1[0x8f] = (longlong)local_30;
    plVar7 = (longlong *)param_1[0x90];
    if (plVar7 != local_28) {
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
        UNLOCK();
        plVar7 = (longlong *)param_1[0x90];
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      param_1[0x90] = (longlong)plVar1;
    }
    plVar7 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else if (((int)param_1[0x94] != 0) &&
          (plVar7 = (longlong *)param_1[0x93], plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x60))(plVar7,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a734dc FUN_146a734dc body=259 status=ok
// SIG undefined FUN_146a734dc(void)

void FUN_146a734dc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x478) != 0) &&
      (plVar5 = *(longlong **)(param_1 + 0x480), plVar5 != (longlong *)0x0)) && (0 < (int)plVar5[1])
     ) {
    iVar4 = (int)plVar5[1];
    local_38 = 0;
    do {
      if (iVar4 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_146a73541;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar6 = iVar4 == iVar3;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar6);
    local_38 = *(undefined8 *)(param_1 + 0x478);
LAB_146a73541:
    local_30 = plVar5;
    FUN_14697f106(param_1,&local_38);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if ((*(int *)(param_1 + 0x4a0) != 0) &&
       (plVar5 = *(longlong **)(param_1 + 0x498), plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x60))(plVar5,param_2);
    }
  }
  if ((*(int *)(param_1 + 0x4b0) != 0) &&
     (plVar5 = *(longlong **)(param_1 + 0x4a8), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x60))(plVar5,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a735e0 FUN_146a735e0 body=206 status=ok
// SIG undefined FUN_146a735e0(void)

longlong FUN_146a735e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a5071c();
  plVar1 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_28,"Throbber.CircleChunk",1);
  uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,local_28,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  *(undefined4 *)(param_1 + 0x1b0) = 6;
  *(undefined8 *)(param_1 + 0x1b4) = 0x418000003f400000;
  *(undefined8 *)(param_1 + 0x1c0) = 0x3f800000;
  *(undefined1 **)(param_1 + 0x1c8) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a736b0 FUN_146a736b0 body=163 status=ok
// SIG undefined FUN_146a736b0(void)

longlong FUN_146a736b0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146a82f8e(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a73754 FUN_146a73754 body=114 status=ok
// SIG undefined FUN_146a73754(void)

undefined1 * FUN_146a73754(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  
  if ((*(int *)(param_1 + 0x5d8) != 0) && (*(longlong **)(param_1 + 0x5d0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x5d0) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x5d8) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x5d0);
      }
      uVar2 = (**(code **)(*plVar4 + 0x58))();
      *(undefined1 *)(param_1 + 0x5c8) = uVar2;
    }
  }
  puVar3 = &DAT_14c96b1e1;
  if (*(char *)(param_1 + 0x5c8) != '\0') {
    puVar3 = &DAT_14c96b238;
  }
  *param_2 = *puVar3;
  return param_2;
}



// FUNCTION 146a737c6 FUN_146a737c6 body=73 status=ok
// SIG undefined FUN_146a737c6(void)

longlong FUN_146a737c6(longlong param_1,longlong *param_2)

{
  FUN_140008f88();
  *(char *)(param_1 + 0x10) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x18,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a73810 FUN_146a73810 body=218 status=ok
// SIG undefined FUN_146a73810(void)

longlong * FUN_146a73810(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  
  FUN_140a515e6(*param_1,param_3);
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x260) = *(undefined8 *)(param_3 + 0x1a8);
  *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(param_3 + 0x1b0);
  *(undefined4 *)(lVar1 + 0x26c) = *(undefined4 *)(param_3 + 0x1b4);
  *(undefined4 *)(lVar1 + 0x270) = *(undefined4 *)(param_3 + 0x1b8);
  *(undefined1 *)(lVar1 + 0x288) = *(undefined1 *)(param_3 + 0x1d4);
  FUN_140a5abdc(lVar1 + 0x274,lVar1,param_3 + 0x1c0);
  FUN_146a5d7ee(lVar1);
  plVar2 = (longlong *)*param_1;
  bVar5 = *(byte *)(plVar2 + 6);
  bVar4 = 0x20;
  if ((bVar5 & 0x10) == 0) {
    cVar3 = (**(code **)(*plVar2 + 0x220))(plVar2);
    bVar4 = cVar3 << 5;
    bVar5 = *(byte *)(plVar2 + 6);
  }
  *(byte *)(plVar2 + 6) = bVar5 & 0xdf | bVar4;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a738ea FUN_146a738ea body=163 status=ok
// SIG undefined FUN_146a738ea(void)

longlong FUN_146a738ea(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146a82f8e(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a7398e FUN_146a7398e body=63 status=ok
// SIG undefined FUN_146a7398e(void)

undefined1 * FUN_146a7398e(longlong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  FUN_146a74302(param_1 + 0x5a8);
  puVar1 = &DAT_14c96b1e1;
  if (*(char *)(param_1 + 0x5b0) != '\0') {
    puVar1 = &DAT_14c96b238;
  }
  *param_2 = *puVar1;
  return param_2;
}



// FUNCTION 146a739ce FUN_146a739ce body=215 status=ok
// SIG undefined FUN_146a739ce(void)

longlong FUN_146a739ce(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_146a8345c(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x1a8,&local_50);
  *(undefined1 *)(param_1 + 0x1b8) = local_40;
  FUN_144a450dc(param_1 + 0x1c0,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a73aa6 FUN_146a73aa6 body=519 status=ok
// SIG undefined FUN_146a73aa6(void)

undefined8 FUN_146a73aa6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  wchar_t **local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  wchar_t *local_78;
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_146a74302((longlong *)(param_1 + 0x5a8));
  if (*(char *)(param_1 + 0x5b0) == '\x01') {
    lVar3 = *(longlong *)(param_1 + 0x5a8);
    local_78 = L"SearchResultFormat";
    local_70[0]._0_4_ = 0x12;
    FUN_1446e940c(local_cc,&local_78);
    local_78 = L"SearchBox";
    local_70[0] = CONCAT44(local_70[0]._4_4_,9);
    FUN_1446e940c(local_d0,&local_78);
    FUN_140208bae(local_c8,local_d0,local_cc,L"{0} / {1}");
    FUN_14023409e(&local_b8,local_c8,1);
    local_78 = (wchar_t *)((ulonglong)local_78 & 0xffffffff00000000);
    local_70[1] = 0;
    local_60 = 0;
    local_70[0] = lVar3 >> 0x20;
    local_58 = 0;
    local_48 = 0;
    local_40 = 0;
    local_50 = (longlong)(int)lVar3;
    local_90 = &local_38;
    local_98 = &local_78;
    FUN_14010d304(&local_88);
    local_a8 = local_b8;
    local_a0 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_2,&local_a8,&local_88);
    FUN_14007f2db(local_88,local_80);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_78 + lVar3) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_78 + lVar3) + 0x10))();
        *(undefined8 *)((longlong)&local_78 + lVar3) = 0;
        *(undefined4 *)((longlong)local_70 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_f8);
  }
  FUN_144a5dc74(param_2);
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a73cae FUN_146a73cae body=99 status=ok
// SIG undefined FUN_146a73cae(void)

undefined1 * FUN_146a73cae(longlong param_1,undefined1 *param_2)

{
  if ((*(int *)(param_1 + 0x490) != 0) && (*(longlong **)(param_1 + 0x488) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x488) + 0x60))();
  }
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a73d12 FUN_146a73d12 body=163 status=ok
// SIG undefined FUN_146a73d12(void)

longlong FUN_146a73d12(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146a82f8e(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a73db6 FUN_146a73db6 body=102 status=ok
// SIG undefined FUN_146a73db6(void)

undefined1 * FUN_146a73db6(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  
  uVar2 = DAT_14c96b238;
  if (((*(int *)(param_1 + 0x5c0) != 0) && (*(longlong **)(param_1 + 0x5b8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x5b8) + 0x30))(), uVar2 = DAT_14c96b238,
     cVar1 != '\0')) {
    FUN_146a74302(param_1 + 0x5a8);
    puVar3 = &DAT_14c96b1e1;
    if (*(char *)(param_1 + 0x5b0) != '\0') {
      puVar3 = &DAT_14c96b238;
    }
    uVar2 = *puVar3;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 146a73e1c FUN_146a73e1c body=163 status=ok
// SIG undefined FUN_146a73e1c(void)

longlong FUN_146a73e1c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146a82f8e(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a73ec0 FUN_146a73ec0 body=129 status=ok
// SIG undefined FUN_146a73ec0(void)

undefined1 * FUN_146a73ec0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146adc2a4(*(undefined8 *)(*(longlong *)(param_1 + 0x2b8) + 0x1f8),local_28);
  cVar1 = FUN_144a7c5f6(local_28);
  puVar2 = &DAT_14c96b1e1;
  if (cVar1 != '\0') {
    puVar2 = &DAT_14c96b238;
  }
  *param_2 = *puVar2;
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a73f42 FUN_146a73f42 body=129 status=ok
// SIG undefined FUN_146a73f42(void)

undefined1 * FUN_146a73f42(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146adc2a4(*(undefined8 *)(*(longlong *)(param_1 + 0x2b8) + 0x1f8),local_28);
  cVar1 = FUN_144a7c5f6(local_28);
  puVar2 = &DAT_14c96b238;
  if (cVar1 != '\0') {
    puVar2 = &DAT_14c96b1e1;
  }
  *param_2 = *puVar2;
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a73fc4 FUN_146a73fc4 body=370 status=ok
// SIG undefined FUN_146a73fc4(void)

undefined8 FUN_146a73fc4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar3 = (longlong *)FUN_140e82300();
  local_f8 = (longlong *)*plVar3;
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  local_f0 = CONCAT44(local_f0._4_4_,(int)plVar3[1]);
  uStack_e8 = CONCAT71(uStack_e8._1_7_,1);
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_146adb44a(*(undefined8 *)(*(longlong *)(param_1 + 0x2b8) + 0x1f8));
  FUN_1449db362(&local_e0);
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x10))();
  }
  local_f8 = (longlong *)CONCAT71(local_f8._1_7_,1);
  uStack_d8 = uStack_d8 & 0xffffffffffffff00;
  local_f0 = 0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  local_108 = *(undefined8 *)(param_1 + 0x2b8);
  plVar3 = *(longlong **)(param_1 + 0x2c0);
  if (plVar3 == (longlong *)0x0) {
    local_100 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_100 = plVar3;
  }
  uVar4 = FUN_140592b68(&local_f8,&local_108,2,0);
  FUN_1403d4c6e(param_2,uVar4);
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
  FUN_14493db24(&local_f8);
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a74138 FUN_146a74138 body=99 status=ok
// SIG undefined FUN_146a74138(void)

undefined8 FUN_146a74138(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x480);
  *(undefined8 *)(param_1 + 0x478) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((*(int *)(param_1 + 0x4a0) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x498), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,param_4);
  }
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x10))();
  }
  return 0;
}



// FUNCTION 146a7419c FUN_146a7419c body=351 status=ok
// SIG undefined FUN_146a7419c(void)

undefined8 *
FUN_146a7419c(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar5 = *param_3;
  uVar4 = *(undefined4 *)(param_3 + 1);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  uVar6 = *param_1;
  plStack_50 = *(longlong **)(param_2 + 0x10);
  if (plStack_50 == (longlong *)0x0) {
LAB_146a741fd:
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar10 = true;
  }
  else {
    iVar9 = (int)plStack_50[1];
    do {
      if (iVar9 == 0) goto LAB_146a741fd;
      LOCK();
      iVar8 = (int)plStack_50[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plStack_50 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    local_58 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
    bVar10 = false;
  }
  plVar7 = plStack_50;
  local_68 = uVar5;
  local_60 = uVar4;
  FUN_146a84336(uVar6,&local_58,&local_68,param_4);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar10) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146a74302 FUN_146a74302 body=144 status=ok
// SIG undefined FUN_146a74302(void)

undefined8 * FUN_146a74302(undefined8 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 3) != 0) && ((longlong *)param_1[2] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[2] + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 3) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[2];
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_28);
      if (&local_28 != param_1) {
        if ((local_20 & 1) == 0) {
          if (*(char *)(param_1 + 1) != '\x01') goto LAB_146a74364;
          uVar2 = 0;
        }
        else {
          *param_1 = local_28;
          uVar2 = 1;
        }
        *(undefined1 *)(param_1 + 1) = uVar2;
      }
    }
  }
LAB_146a74364:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a74394 FUN_146a74394 body=38 status=ok
// SIG undefined FUN_146a74394(void)

undefined8 FUN_146a74394(undefined8 param_1,int param_2)

{
  FUN_1410f0f04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a743bc FUN_146a743bc body=38 status=ok
// SIG undefined FUN_146a743bc(void)

undefined8 FUN_146a743bc(undefined8 param_1,int param_2)

{
  FUN_146a8480c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a743e2 FUN_146a743e2 body=38 status=ok
// SIG undefined FUN_146a743e2(void)

undefined8 FUN_146a743e2(undefined8 param_1,int param_2)

{
  FUN_146a8480c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a74408 FUN_146a74408 body=38 status=ok
// SIG undefined FUN_146a74408(void)

undefined8 FUN_146a74408(undefined8 param_1,int param_2)

{
  FUN_146a8488c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a74434 FUN_146a74434 body=63 status=ok
// SIG undefined FUN_146a74434(void)

undefined8 * FUN_146a74434(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f0f900;
  FUN_1449db362(param_1 + 0x46);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a74474 FUN_146a74474 body=21 status=ok
// SIG undefined FUN_146a74474(void)

undefined8 * FUN_146a74474(void)

{
  FUN_146280e72();
  return &DAT_14c98ef70;
}



// FUNCTION 146a7448a FUN_146a7448a body=106 status=ok
// SIG undefined FUN_146a7448a(void)

undefined8 * FUN_146a7448a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f0fb80;
  if (*(char *)(param_1 + 0x51) == '\x01') {
    *(undefined1 *)(param_1 + 0x51) = 0;
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a744f4 FUN_146a744f4 body=63 status=ok
// SIG undefined FUN_146a744f4(void)

undefined8 * FUN_146a744f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f0ff40;
  FUN_1402bc42a(param_1 + 0x3c);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a74534 FUN_146a74534 body=21 status=ok
// SIG undefined FUN_146a74534(void)

undefined8 * FUN_146a74534(void)

{
  FUN_146280fd2();
  return &DAT_14c98eff0;
}



// FUNCTION 146a7454a FUN_146a7454a body=38 status=ok
// SIG undefined FUN_146a7454a(void)

undefined8 FUN_146a7454a(undefined8 param_1,int param_2)

{
  FUN_146a5ddd4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a74570 FUN_146a74570 body=38 status=ok
// SIG undefined FUN_146a74570(void)

undefined8 FUN_146a74570(undefined8 param_1,int param_2)

{
  FUN_146a5efec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a74596 FUN_146a74596 body=38 status=ok
// SIG undefined FUN_146a74596(void)

undefined8 FUN_146a74596(undefined8 param_1,int param_2)

{
  FUN_146a63de2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a745bc FUN_146a745bc body=38 status=ok
// SIG undefined FUN_146a745bc(void)

undefined8 FUN_146a745bc(undefined8 param_1,int param_2)

{
  FUN_146a665f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a745e2 FUN_146a745e2 body=38 status=ok
// SIG undefined FUN_146a745e2(void)

undefined8 FUN_146a745e2(undefined8 param_1,int param_2)

{
  FUN_142900b4e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a74608 FUN_146a74608 body=147 status=ok
// SIG undefined FUN_146a74608(void)

void FUN_146a74608(longlong param_1,int param_2)

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



// FUNCTION 146a7469c FUN_146a7469c body=93 status=ok
// SIG undefined FUN_146a7469c(void)

undefined8 * FUN_146a7469c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410f0e5b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1410f15ac(param_1,iVar1);
      FUN_1410f14d5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146a746fa FUN_146a746fa body=89 status=ok
// SIG undefined FUN_146a746fa(void)

undefined8 * FUN_146a746fa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146a7486a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 146a74754 FUN_146a74754 body=93 status=ok
// SIG undefined FUN_146a74754(void)

undefined8 * FUN_146a74754(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410f0e0e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146a748de(param_1,iVar1);
      FUN_146a74940(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146a747b2 FUN_146a747b2 body=93 status=ok
// SIG undefined FUN_146a747b2(void)

undefined8 * FUN_146a747b2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1410f0dc1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146a74982(param_1,iVar1);
      FUN_146a749e4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146a74810 FUN_146a74810 body=89 status=ok
// SIG undefined FUN_146a74810(void)

void FUN_146a74810(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 146a7486a FUN_146a7486a body=115 status=ok
// SIG undefined FUN_146a7486a(void)

void FUN_146a7486a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146a748de FUN_146a748de body=98 status=ok
// SIG undefined FUN_146a748de(void)

void FUN_146a748de(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146a74940 FUN_146a74940 body=65 status=ok
// SIG undefined FUN_146a74940(void)

void FUN_146a74940(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + 8 + lVar2) = *(undefined4 *)(param_2 + 8 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      lVar1 = *(longlong *)(param_2 + 0x18 + lVar2);
      *(longlong *)(param_1 + 0x18 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146a74982 FUN_146a74982 body=98 status=ok
// SIG undefined FUN_146a74982(void)

void FUN_146a74982(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146a749e4 FUN_146a749e4 body=55 status=ok
// SIG undefined FUN_146a749e4(void)

void FUN_146a749e4(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      uVar2 = ((undefined8 *)(param_2 + lVar3))[1];
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      ((undefined8 *)(param_1 + lVar3))[1] = uVar2;
      *(undefined8 *)(param_1 + 0x10 + lVar3) = *(undefined8 *)(param_2 + 0x10 + lVar3);
      lVar1 = *(longlong *)(param_2 + 0x18 + lVar3);
      *(longlong *)(param_1 + 0x18 + lVar3) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar3 = lVar3 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146a74a1c FUN_146a74a1c body=187 status=ok
// SIG undefined FUN_146a74a1c(void)

void FUN_146a74a1c(undefined8 param_1)

{
  undefined1 auStack_b8 [40];
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140a529f8(local_90);
  local_58 = local_90[0];
  local_50 = local_88;
  local_4c = local_84;
  local_48 = local_80;
  local_80 = 0;
  local_40 = local_78;
  local_78 = 0;
  local_38 = local_70;
  local_34 = local_6c;
  local_30 = local_68;
  local_68 = 0;
  local_28 = local_60;
  local_60 = 0;
  FUN_146a74ad8(param_1);
  FUN_1449db362(&local_68);
  FUN_1449db362(&local_80);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a74ad8 FUN_146a74ad8 body=178 status=ok
// SIG undefined FUN_146a74ad8(void)

void FUN_146a74ad8(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = *param_2;
  *(int *)(param_1 + 0x40) = iVar2;
  lVar1 = param_1 + 0x20;
  if (iVar2 == 2) {
    if ((char)param_2[9] == '\x01') {
      FUN_140a513ea(param_1 + 0x48,lVar1,param_2 + 8);
    }
    else {
      FUN_14697cee2(param_1 + 0x48,lVar1,param_2 + 2);
    }
  }
  else {
    local_24 = 0x3f800000;
    FUN_140a51568(param_1 + 0x48,lVar1);
  }
  FUN_140a513ea(param_1 + 0x44,lVar1,param_2 + 2);
  FUN_1449db362(param_2 + 10);
  FUN_1449db362(param_2 + 4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a74b8c FUN_146a74b8c body=38 status=ok
// SIG undefined FUN_146a74b8c(void)

undefined8 FUN_146a74b8c(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a74bd4 FUN_146a74bd4 body=130 status=ok
// SIG undefined FUN_146a74bd4(void)

void FUN_146a74bd4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a74c58 FUN_146a74c58 body=130 status=ok
// SIG undefined FUN_146a74c58(void)

void FUN_146a74c58(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a74cdc FUN_146a74cdc body=130 status=ok
// SIG undefined FUN_146a74cdc(void)

void FUN_146a74cdc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a74d60 FUN_146a74d60 body=130 status=ok
// SIG undefined FUN_146a74d60(void)

void FUN_146a74d60(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a74de4 FUN_146a74de4 body=38 status=ok
// SIG undefined FUN_146a74de4(void)

undefined8 FUN_146a74de4(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a74e16 FUN_146a74e16 body=38 status=ok
// SIG undefined FUN_146a74e16(void)

undefined8 FUN_146a74e16(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a74e48 FUN_146a74e48 body=130 status=ok
// SIG undefined FUN_146a74e48(void)

void FUN_146a74e48(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a74ecc FUN_146a74ecc body=83 status=ok
// SIG undefined FUN_146a74ecc(void)

void FUN_146a74ecc(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (longlong *)param_1[2];
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
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a74f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 146a74fbf FUN_146a74fbf body=52 status=ok
// SIG undefined FUN_146a74fbf(void)

void FUN_146a74fbf(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 146a74ff4 FUN_146a74ff4 body=130 status=ok
// SIG undefined FUN_146a74ff4(void)

void FUN_146a74ff4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a75078 FUN_146a75078 body=130 status=ok
// SIG undefined FUN_146a75078(void)

void FUN_146a75078(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a750fc FUN_146a750fc body=130 status=ok
// SIG undefined FUN_146a750fc(void)

void FUN_146a750fc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a75180 FUN_146a75180 body=24 status=ok
// SIG undefined FUN_146a75180(void)

void FUN_146a75180(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a75194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146a75198 FUN_146a75198 body=29 status=ok
// SIG undefined FUN_146a75198(void)

undefined8 FUN_146a75198(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a7520e FUN_146a7520e body=158 status=ok
// SIG undefined FUN_146a7520e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146a7520e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98f090) {
    FUN_144b3d300(&DAT_14c98f090);
    if (DAT_14c98f090 == -1) {
      _DAT_14c98f070 = &PTR_FUN_149edb640;
      _DAT_14c98f078 = 0;
      _DAT_14c98f080 = DAT_14c98dec8;
      _DAT_14c98f088 = DAT_14c98ded0;
      if (DAT_14c98ded0 != 0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
        UNLOCK();
      }
      atexit((_func_5014 *)&LAB_1429010a1);
      _Init_thread_footer(&DAT_14c98f090);
    }
  }
  return &DAT_14c98f070;
}



// FUNCTION 146a75300 FUN_146a75300 body=29 status=ok
// SIG undefined FUN_146a75300(void)

undefined8 FUN_146a75300(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a75336 FUN_146a75336 body=29 status=ok
// SIG undefined FUN_146a75336(void)

undefined8 FUN_146a75336(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a75354 FUN_146a75354 body=24 status=ok
// SIG undefined FUN_146a75354(void)

void FUN_146a75354(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a75368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146a7536c FUN_146a7536c body=29 status=ok
// SIG undefined FUN_146a7536c(void)

undefined8 FUN_146a7536c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a7538a FUN_146a7538a body=95 status=ok
// SIG undefined FUN_146a7538a(void)

void FUN_146a7538a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146a753ea FUN_146a753ea body=106 status=ok
// SIG undefined FUN_146a753ea(void)

undefined8 FUN_146a753ea(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 146a75454 FUN_146a75454 body=50 status=ok
// SIG undefined FUN_146a75454(void)

void FUN_146a75454(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    *(undefined8 *)(param_1 + 8 + lVar2) = *(undefined8 *)(param_2 + 8 + lVar2);
    lVar1 = *(longlong *)(param_2 + 0x10 + lVar2);
    *(longlong *)(param_1 + 0x10 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 146a75486 FUN_146a75486 body=48 status=ok
// SIG undefined FUN_146a75486(void)

void FUN_146a75486(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 146a754b6 FUN_146a754b6 body=96 status=ok
// SIG undefined FUN_146a754b6(void)

void FUN_146a754b6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 146a75516 FUN_146a75516 body=132 status=ok
// SIG undefined FUN_146a75516(void)

void FUN_146a75516(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146a7559c FUN_146a7559c body=96 status=ok
// SIG undefined FUN_146a7559c(void)

void FUN_146a7559c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 146a755fc FUN_146a755fc body=118 status=ok
// SIG undefined FUN_146a755fc(void)

void FUN_146a755fc(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x18 + (longlong)(int)param_2 * 0x20);
  if (plVar4 != (longlong *)0x0) {
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
  }
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x20);
    memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)(int)(~param_2 + iVar5) << 5);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 146a75672 FUN_146a75672 body=101 status=ok
// SIG undefined FUN_146a75672(void)

void FUN_146a75672(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  return;
}



// FUNCTION 146a756d8 FUN_146a756d8 body=147 status=ok
// SIG undefined FUN_146a756d8(void)

void FUN_146a756d8(longlong param_1,int param_2)

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



// FUNCTION 146a7576c FUN_146a7576c body=62 status=ok
// SIG undefined FUN_146a7576c(void)

void FUN_146a7576c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146a757aa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 146a757aa FUN_146a757aa body=112 status=ok
// SIG undefined FUN_146a757aa(void)

ulonglong FUN_146a757aa(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146a757e4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_146a757e4:
  return param_2 & 0xffffffff;
}



// FUNCTION 146a7581a FUN_146a7581a body=62 status=ok
// SIG undefined FUN_146a7581a(void)

void FUN_146a7581a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146a75858(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 146a75858 FUN_146a75858 body=104 status=ok
// SIG undefined FUN_146a75858(void)

ulonglong FUN_146a75858(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x70) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146a7588e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x70,8);
      param_2 = param_2 / 0x70;
    }
  }
LAB_146a7588e:
  return param_2 & 0xffffffff;
}



// FUNCTION 146a758c0 FUN_146a758c0 body=143 status=ok
// SIG undefined FUN_146a758c0(void)

void FUN_146a758c0(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146a75950 FUN_146a75950 body=62 status=ok
// SIG undefined FUN_146a75950(void)

void FUN_146a75950(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146a7598e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x68,8);
  }
  return;
}



// FUNCTION 146a7598e FUN_146a7598e body=104 status=ok
// SIG undefined FUN_146a7598e(void)

ulonglong FUN_146a7598e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x68) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146a759c4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x68,8);
      param_2 = param_2 / 0x68;
    }
  }
LAB_146a759c4:
  return param_2 & 0xffffffff;
}



// FUNCTION 146a759f6 FUN_146a759f6 body=95 status=ok
// SIG undefined FUN_146a759f6(void)

void FUN_146a759f6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 146a75a56 FUN_146a75a56 body=132 status=ok
// SIG undefined FUN_146a75a56(void)

void FUN_146a75a56(longlong param_1,int param_2)

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



// FUNCTION 146a75adc FUN_146a75adc body=31 status=ok
// SIG undefined FUN_146a75adc(void)

undefined8 FUN_146a75adc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a75b18 FUN_146a75b18 body=93 status=ok
// SIG undefined FUN_146a75b18(void)

void FUN_146a75b18(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f117b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146a75b76 FUN_146a75b76 body=126 status=ok
// SIG undefined FUN_146a75b76(void)

void FUN_146a75b76(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149f117b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a75be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146a75bf4 FUN_146a75bf4 body=21 status=ok
// SIG undefined FUN_146a75bf4(void)

undefined8 FUN_146a75bf4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146a75c0a FUN_146a75c0a body=130 status=ok
// SIG undefined FUN_146a75c0a(void)

void FUN_146a75c0a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a75c8e FUN_146a75c8e body=130 status=ok
// SIG undefined FUN_146a75c8e(void)

void FUN_146a75c8e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a75d12 FUN_146a75d12 body=130 status=ok
// SIG undefined FUN_146a75d12(void)

void FUN_146a75d12(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a75d96 FUN_146a75d96 body=156 status=ok
// SIG undefined FUN_146a75d96(void)

bool FUN_146a75d96(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_146a75ea6(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a75e34 FUN_146a75e34 body=114 status=ok
// SIG undefined FUN_146a75e34(void)

undefined8 FUN_146a75e34(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  FUN_1400b73c8(param_2,param_1);
  if (((((*param_1 != *param_3) || (NAN(*param_1) || NAN(*param_3))) || (param_1[1] != param_3[1]))
      || ((NAN(param_1[1]) || NAN(param_3[1]) || (param_1[2] != param_3[2])))) ||
     ((NAN(param_1[2]) || NAN(param_3[2]) ||
      ((param_1[3] != param_3[3] || (NAN(param_1[3]) || NAN(param_3[3]))))))) {
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    param_1[3] = fVar3;
    FUN_14094e0ca(param_2,param_1,0,0);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 146a75ea6 FUN_146a75ea6 body=169 status=ok
// SIG undefined FUN_146a75ea6(void)

void FUN_146a75ea6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149f051b0;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_140a5c51c(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_140eee99e(param_2,param_1,0,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a75f50 FUN_146a75f50 body=156 status=ok
// SIG undefined FUN_146a75f50(void)

bool FUN_146a75f50(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_146a7616a(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a75fee FUN_146a75fee body=128 status=ok
// SIG undefined FUN_146a75fee(void)

undefined8 FUN_146a75fee(double *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  FUN_1400b73c8(param_2,param_1);
  if (((((*param_1 != *param_3) || (NAN(*param_1) || NAN(*param_3))) || (param_1[1] != param_3[1]))
      || ((NAN(param_1[1]) || NAN(param_3[1]) || (param_1[2] != param_3[2])))) ||
     ((NAN(param_1[2]) || NAN(param_3[2]) ||
      ((param_1[3] != param_3[3] || (NAN(param_1[3]) || NAN(param_3[3]))))))) {
    dVar1 = *param_3;
    dVar2 = param_3[1];
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar4 = *(undefined4 *)(param_3 + 3);
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
    *param_1 = dVar1;
    param_1[1] = dVar2;
    FUN_14094e0ca(param_2,param_1,0,0);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 146a7606e FUN_146a7606e body=123 status=ok
// SIG undefined FUN_146a7606e(void)

undefined4 * FUN_146a7606e(undefined4 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1[0xc] != 0) && (*(longlong **)(param_1 + 10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 10) + 0x30))();
    if (cVar1 != '\0') {
      if (param_1[0xc] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 10);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,&local_38);
      *(undefined8 *)(param_1 + 4) = local_28;
      *(undefined8 *)(param_1 + 6) = uStack_20;
      *param_1 = local_38;
      param_1[1] = uStack_34;
      param_1[2] = uStack_30;
      param_1[3] = uStack_2c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a760ea FUN_146a760ea body=128 status=ok
// SIG undefined FUN_146a760ea(void)

undefined8 FUN_146a760ea(double *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  FUN_1400b73c8(param_2,param_1);
  if (((((*param_1 != *param_3) || (NAN(*param_1) || NAN(*param_3))) || (param_1[1] != param_3[1]))
      || ((NAN(param_1[1]) || NAN(param_3[1]) || (param_1[2] != param_3[2])))) ||
     ((NAN(param_1[2]) || NAN(param_3[2]) ||
      ((param_1[3] != param_3[3] || (NAN(param_1[3]) || NAN(param_3[3]))))))) {
    dVar1 = *param_3;
    dVar2 = param_3[1];
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar4 = *(undefined4 *)(param_3 + 3);
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
    *param_1 = dVar1;
    param_1[1] = dVar2;
    FUN_14094e0ca(param_2,param_1,0,0);
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 146a7616a FUN_146a7616a body=169 status=ok
// SIG undefined FUN_146a7616a(void)

void FUN_146a7616a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149f13400;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_146a76352(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_140eee99e(param_2,param_1,0,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a76214 FUN_146a76214 body=213 status=ok
// SIG undefined FUN_146a76214(void)

undefined2 * FUN_146a76214(longlong param_1,undefined2 *param_2)

{
  double *pdVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_48);
      pdVar1 = *(double **)(param_1 + 0x18);
      if (((((*pdVar1 == local_48) && (!NAN(*pdVar1) && !NAN(local_48))) && (pdVar1[1] == dStack_40)
           ) && ((!NAN(pdVar1[1]) && !NAN(dStack_40) && (pdVar1[2] == local_38)))) &&
         (!NAN(pdVar1[2]) && !NAN(local_38))) {
        if ((pdVar1[3] == dStack_30) && (!NAN(pdVar1[3]) && !NAN(dStack_30))) goto LAB_146a762a2;
      }
      pdVar1[2] = local_38;
      pdVar1[3] = dStack_30;
      *pdVar1 = local_48;
      pdVar1[1] = dStack_40;
      *param_2 = 0x100;
      goto LAB_146a762a7;
    }
  }
LAB_146a762a2:
  *param_2 = 0;
LAB_146a762a7:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a762f6 FUN_146a762f6 body=50 status=ok
// SIG undefined FUN_146a762f6(void)

undefined8 * FUN_146a762f6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 146a76328 FUN_146a76328 body=42 status=ok
// SIG undefined FUN_146a76328(void)

longlong FUN_146a76328(longlong param_1,int param_2)

{
  FUN_1449db362(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a76352 FUN_146a76352 body=130 status=ok
// SIG undefined FUN_146a76352(void)

void FUN_146a76352(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a763d6 FUN_146a763d6 body=156 status=ok
// SIG undefined FUN_146a763d6(void)

bool FUN_146a763d6(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_146a76474(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a76474 FUN_146a76474 body=169 status=ok
// SIG undefined FUN_146a76474(void)

void FUN_146a76474(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149ef1b90;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_140a51be2(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_140eee99e(param_2,param_1,0,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a7651e FUN_146a7651e body=156 status=ok
// SIG undefined FUN_146a7651e(void)

bool FUN_146a7651e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_146a76604(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a765bc FUN_146a765bc body=72 status=ok
// SIG undefined FUN_146a765bc(void)

bool FUN_146a765bc(char *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  
  FUN_1400b73c8(param_2,param_1);
  cVar1 = *param_1;
  cVar2 = *param_3;
  if (cVar1 != cVar2) {
    *param_1 = cVar2;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return cVar1 != cVar2;
}



// FUNCTION 146a76604 FUN_146a76604 body=169 status=ok
// SIG undefined FUN_146a76604(void)

void FUN_146a76604(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149f11860;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_146a76770(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_140eee99e(param_2,param_1,0,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a766ae FUN_146a766ae body=89 status=ok
// SIG undefined FUN_146a766ae(void)

undefined1 * FUN_146a766ae(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 8);
      }
      cVar1 = (**(code **)(*plVar3 + 0x58))();
      if (**(char **)(param_1 + 0x18) != cVar1) {
        **(char **)(param_1 + 0x18) = cVar1;
        uVar2 = 1;
        goto LAB_146a766ed;
      }
    }
  }
  uVar2 = 0;
LAB_146a766ed:
  *param_2 = 0;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 146a76714 FUN_146a76714 body=50 status=ok
// SIG undefined FUN_146a76714(void)

undefined8 * FUN_146a76714(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 146a76746 FUN_146a76746 body=42 status=ok
// SIG undefined FUN_146a76746(void)

longlong FUN_146a76746(longlong param_1,int param_2)

{
  FUN_1449db362(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a76770 FUN_146a76770 body=130 status=ok
// SIG undefined FUN_146a76770(void)

void FUN_146a76770(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a767f4 FUN_146a767f4 body=156 status=ok
// SIG undefined FUN_146a767f4(void)

bool FUN_146a767f4(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_146a76892(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a76892 FUN_146a76892 body=169 status=ok
// SIG undefined FUN_146a76892(void)

void FUN_146a76892(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149ef1c10;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_14096c7c0(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_140eee99e(param_2,param_1,0,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a7693c FUN_146a7693c body=89 status=ok
// SIG undefined FUN_146a7693c(void)

undefined1 * FUN_146a7693c(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 8);
      }
      iVar3 = (**(code **)(*plVar4 + 0x58))();
      if (**(int **)(param_1 + 0x18) != iVar3) {
        **(int **)(param_1 + 0x18) = iVar3;
        uVar2 = 1;
        goto LAB_146a7697b;
      }
    }
  }
  uVar2 = 0;
LAB_146a7697b:
  *param_2 = 0;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 146a769a2 FUN_146a769a2 body=50 status=ok
// SIG undefined FUN_146a769a2(void)

undefined8 * FUN_146a769a2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 146a769d4 FUN_146a769d4 body=42 status=ok
// SIG undefined FUN_146a769d4(void)

longlong FUN_146a769d4(longlong param_1,int param_2)

{
  FUN_1449db362(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a769fe FUN_146a769fe body=103 status=ok
// SIG undefined FUN_146a769fe(void)

byte FUN_146a769fe(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  FUN_1400b73c8(param_2,param_1);
  fVar1 = *param_1;
  fVar2 = *param_3;
  if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
    *param_1 = fVar2;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  return -(fVar1 != fVar2) & 1;
}



// FUNCTION 146a76a72 FUN_146a76a72 body=50 status=ok
// SIG undefined FUN_146a76a72(void)

undefined8 * FUN_146a76a72(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 146a76aa4 FUN_146a76aa4 body=130 status=ok
// SIG undefined FUN_146a76aa4(void)

void FUN_146a76aa4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a76b28 FUN_146a76b28 body=156 status=ok
// SIG undefined FUN_146a76b28(void)

bool FUN_146a76b28(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_146a76c50(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a76bc6 FUN_146a76bc6 body=138 status=ok
// SIG undefined FUN_146a76bc6(void)

ulonglong FUN_146a76bc6(double *param_1,undefined8 param_2,double *param_3)

{
  byte bVar1;
  byte bVar2;
  double dVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  FUN_1400b73c8(param_2,param_1);
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_3 + 2);
  if ((bVar1 == bVar2 & bVar1) == 1) {
    if ((*param_1 == *param_3) && (!NAN(*param_1) && !NAN(*param_3))) {
      if ((param_1[1] == param_3[1]) && (!NAN(param_1[1]) && !NAN(param_3[1]))) goto LAB_146a76c0d;
    }
  }
  else if (bVar1 == bVar2) {
LAB_146a76c0d:
    uVar5 = 0;
    goto LAB_146a76c3e;
  }
  if (param_3 != param_1) {
    if (bVar2 == 0) {
      if ((bVar1 & 1) == 0) goto LAB_146a76c2b;
      uVar4 = 0;
    }
    else {
      dVar3 = param_3[1];
      *param_1 = *param_3;
      param_1[1] = dVar3;
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar4;
  }
LAB_146a76c2b:
  uVar5 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  FUN_14094e0ca(param_2,param_1,0,1);
LAB_146a76c3e:
  return uVar5 & 0xffffffff;
}



// FUNCTION 146a76c50 FUN_146a76c50 body=169 status=ok
// SIG undefined FUN_146a76c50(void)

void FUN_146a76c50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149f11890;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_14697c70c(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_140eee99e(param_2,param_1,0,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a76cfa FUN_146a76cfa body=224 status=ok
// SIG undefined FUN_146a76cfa(void)

undefined2 * FUN_146a76cfa(longlong param_1,undefined2 *param_2)

{
  byte bVar1;
  double *pdVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,&local_38);
      pdVar2 = *(double **)(param_1 + 0x18);
      bVar1 = *(byte *)(pdVar2 + 2);
      if ((bVar1 == local_28 & bVar1) == 1) {
        if ((*pdVar2 == local_38) && (!NAN(*pdVar2) && !NAN(local_38))) {
          if ((pdVar2[1] == dStack_30) && (!NAN(pdVar2[1]) && !NAN(dStack_30))) goto LAB_146a76d81;
        }
      }
      else if (bVar1 == local_28) goto LAB_146a76d81;
      if (&local_38 != pdVar2) {
        if (local_28 == 0) {
          if ((bVar1 & 1) == 0) goto LAB_146a76dc4;
          uVar4 = 0;
        }
        else {
          *pdVar2 = local_38;
          pdVar2[1] = dStack_30;
          uVar4 = 1;
        }
        *(undefined1 *)(pdVar2 + 2) = uVar4;
      }
LAB_146a76dc4:
      *param_2 = 0x101;
      goto LAB_146a76d86;
    }
  }
LAB_146a76d81:
  *param_2 = 0;
LAB_146a76d86:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a76de8 FUN_146a76de8 body=50 status=ok
// SIG undefined FUN_146a76de8(void)

undefined8 * FUN_146a76de8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 146a76e1a FUN_146a76e1a body=42 status=ok
// SIG undefined FUN_146a76e1a(void)

longlong FUN_146a76e1a(longlong param_1,int param_2)

{
  FUN_1449db362(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a76e44 FUN_146a76e44 body=156 status=ok
// SIG undefined FUN_146a76e44(void)

bool FUN_146a76e44(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_146a76fe8(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a76ee2 FUN_146a76ee2 body=94 status=ok
// SIG undefined FUN_146a76ee2(void)

undefined8 FUN_146a76ee2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  
  FUN_1400b73c8(param_2,param_1);
  if ((*(int *)(param_1 + 1) == *(int *)(param_3 + 1)) &&
     (cVar1 = FUN_146a7728b(*param_1,*param_3), cVar1 != '\0')) {
    return 0;
  }
  FUN_14479f9aa(param_1,param_3);
  FUN_14094e0ca(param_2,param_1,0,2);
  return 1;
}



// FUNCTION 146a76f40 FUN_146a76f40 body=166 status=ok
// SIG undefined FUN_146a76f40(void)

longlong * FUN_146a76f40(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[4] != 0) && ((longlong *)param_1[3] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[3] + 0x30))();
    if (cVar1 != '\0') {
      if ((int)param_1[4] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)param_1[3];
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,&local_28);
      if (&local_28 == param_1) {
        if (local_28 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = local_28;
        *(undefined4 *)(param_1 + 1) = local_20;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a76fe8 FUN_146a76fe8 body=169 status=ok
// SIG undefined FUN_146a76fe8(void)

void FUN_146a76fe8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149f118c0;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_146a77208(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_140eee99e(param_2,param_1,0,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


