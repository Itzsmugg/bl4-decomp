// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14764a4ee FUN_14764a4ee body=63 status=ok
// SIG undefined FUN_14764a4ee(void)

void FUN_14764a4ee(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14764a52e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x110,8);
  }
  return;
}



// FUNCTION 14764a52e FUN_14764a52e body=115 status=ok
// SIG undefined FUN_14764a52e(void)

ulonglong FUN_14764a52e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x110) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x110,8);
      uVar1 = uVar1 / 0x110;
    }
  }
  return uVar1;
}



// FUNCTION 14764a5a2 FUN_14764a5a2 body=267 status=ok
// SIG undefined FUN_14764a5a2(void)

void FUN_14764a5a2(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  void *_Dst;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = FUN_147526062();
  if (uVar5 != param_2) {
    plVar3 = *(longlong **)(param_1 + 0x18);
    lVar4 = *plVar3;
    lVar6 = (longlong)(int)param_2;
    local_38 = *(undefined8 *)(lVar4 + 0x20 + lVar6 * 0x28);
    puVar1 = (undefined4 *)(lVar4 + lVar6 * 0x28);
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar6 * 0x28);
    local_48 = *puVar2;
    uStack_40 = puVar2[1];
    iVar7 = (int)plVar3[1];
    if (~param_2 + iVar7 != 0) {
      _Dst = (void *)(lVar4 + lVar6 * 0x28);
      memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar7) * 0x28);
      iVar7 = (int)plVar3[1];
    }
    *(int *)(plVar3 + 1) = iVar7 + -1;
    plVar3 = *(longlong **)(param_1 + 0x18);
    iVar7 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar7 + 1U) {
      FUN_147609226(plVar3,iVar7);
    }
    lVar6 = (longlong)(int)uVar5 * 0x28;
    memmove((void *)(*plVar3 + lVar6 + 0x28),(void *)(*plVar3 + lVar6),
            (ulonglong)(iVar7 - uVar5) * 0x28);
    lVar4 = *plVar3;
    puVar1 = (undefined4 *)(lVar4 + lVar6);
    *puVar1 = local_58;
    puVar1[1] = uStack_54;
    puVar1[2] = uStack_50;
    puVar1[3] = uStack_4c;
    puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar6);
    *puVar2 = local_48;
    puVar2[1] = uStack_40;
    *(undefined8 *)(lVar4 + 0x20 + lVar6) = local_38;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764a6ae FUN_14764a6ae body=335 status=ok
// SIG undefined FUN_14764a6ae(void)

uint FUN_14764a6ae(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar12 = FUN_147525f8a();
  plVar3 = *(longlong **)(param_1 + 0x18);
  iVar2 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_147609226(plVar3,iVar2);
  }
  lVar13 = (longlong)(int)uVar12 * 0x28;
  memmove((void *)(*plVar3 + lVar13 + 0x28),(void *)(*plVar3 + lVar13),
          (ulonglong)(iVar2 - uVar12) * 0x28);
  lVar4 = *plVar3;
  *(undefined8 *)(lVar4 + 0x20 + lVar13) = *(undefined8 *)(param_3 + 8);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = param_3[5];
  uVar10 = param_3[6];
  uVar11 = param_3[7];
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar13);
  *puVar1 = param_3[4];
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar1 = (undefined4 *)(lVar4 + lVar13);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x10) != 0)) {
    lVar13 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 8) + 8 + lVar13) != 0) &&
         (*(longlong *)(*(longlong *)(lVar4 + 8) + lVar13) != 0)) {
        local_58 = (ulonglong *)0x0;
        uStack_50 = 1;
        FUN_14753e66a(&local_58,0);
        *local_58 = (ulonglong)uVar12 | param_2 << 0x20;
        FUN_14753e6f0(*(longlong *)(param_1 + 0x10) + 8,*(longlong *)(param_1 + 0x10),&local_58);
        if (local_58 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar13 = lVar13 + 0x10;
    } while ((longlong)*(int *)(lVar4 + 0x10) * 0x10 != lVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764a7fe FUN_14764a7fe body=350 status=ok
// SIG undefined FUN_14764a7fe(void)

void FUN_14764a7fe(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  iVar6 = iVar4 + ~param_2;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),(longlong)iVar6 << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  plVar3 = (longlong *)param_1[3];
  iVar4 = (int)plVar3[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 0x28),
            (void *)(*plVar3 + (longlong)(int)param_2 * 0x28 + 0x28),(longlong)iVar6 * 0x28);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764a95e FUN_14764a95e body=48 status=ok
// SIG undefined FUN_14764a95e(void)

void FUN_14764a95e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,4);
  }
  return;
}



// FUNCTION 14764a98e FUN_14764a98e body=369 status=ok
// SIG undefined FUN_14764a98e(void)

void FUN_14764a98e(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab4d20 == 0) {
    uVar7 = FUN_140d2a6db();
    DAT_14cab4d20 = FUN_140002ddd(FUN_1463471df,uVar7,L"MovieSceneActorReferenceData");
  }
  uVar3 = *(ulonglong *)(DAT_14cab4d20 + 0x18);
  uVar10 = *(uint *)(param_1 + 0x20);
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar8 = param_1;
  }
  if ((int)uVar10 < 1) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    local_68 = param_2;
    do {
      uVar1 = uVar11 + (uVar10 >> 1);
      uVar4 = *(ulonglong *)(lVar8 + (ulonglong)uVar1 * 0x18);
      if ((int)uVar4 == (int)uVar3) {
        iVar6 = (int)(uVar4 >> 0x20) - (int)(uVar3 >> 0x20);
      }
      else {
        iVar6 = FUN_14002c2bd(uVar4 & 0xffffffff,uVar3 & 0xffffffff);
      }
      if (iVar6 < 0) {
        uVar11 = uVar1 + (uVar10 & 1);
      }
      bVar5 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar5);
    uVar10 = *(uint *)(param_1 + 0x20);
    param_2 = local_68;
  }
  if ((int)uVar11 < (int)uVar10) {
    lVar8 = *(longlong *)(param_1 + 0x18);
    lVar9 = lVar8;
    if (lVar8 == 0) {
      lVar9 = param_1;
    }
    if (*(ulonglong *)(lVar9 + (ulonglong)uVar11 * 0x18) == uVar3) goto LAB_14764aaa1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_60 = uVar3;
  FUN_140f93936(param_1,&local_60,uVar11);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  lVar8 = *(longlong *)(param_1 + 0x18);
LAB_14764aaa1:
  if (lVar8 != 0) {
    param_1 = lVar8;
  }
  plVar2 = (longlong *)(param_1 + 8 + (ulonglong)uVar11 * 0x18);
  iVar6 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar6 + 1U) {
    FUN_140aec898(plVar2,iVar6);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar6 * 8) = param_2;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764ab00 FUN_14764ab00 body=486 status=ok
// SIG undefined FUN_14764ab00(void)

void FUN_14764ab00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  longlong *local_78 [2];
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = (code *)*param_2;
  local_78[0] = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)*plVar6)(plVar6,local_78);
  }
  plVar6 = (longlong *)(param_1 + 0x340);
  lVar1 = param_1 + 0x350;
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  uStack_90 = 0;
  local_d8 = param_2;
  uStack_a0 = lVar1;
  if (*(int *)(param_1 + 0x368) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    iVar7 = *(int *)(param_1 + 0x368);
  }
  uStack_b0 = CONCAT44(uStack_8c,uStack_90);
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_c8 = (undefined4)local_a8;
  uStack_c4 = local_a8._4_4_;
  uStack_c0 = (undefined4)uStack_a0;
  uStack_bc = uStack_a0._4_4_;
  local_d0 = plVar6;
  if ((iStack_94 != iVar7) || (uStack_a0 != lVar1)) {
    do {
      pcVar3 = local_88;
      puVar2 = (undefined8 *)(*local_d0 + (longlong)iStack_b4 * 0x120);
      local_a8 = *puVar2;
      plVar5 = local_78[0];
      if (local_78[0] == (longlong *)0x0) {
        plVar5 = local_68;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(uVar4,&local_a8,puVar2 + 1);
      local_b8 = local_b8 & ~uStack_c4;
      FUN_1449c0562(&local_c8);
    } while (local_d0 != plVar6 || (CONCAT44(uStack_bc,uStack_c0) != lVar1 || iStack_b4 != iVar7));
  }
  if (local_88 != (code *)0x0) {
    plVar6 = local_78[0];
    if (local_78[0] == (longlong *)0x0) {
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*local_d8 != 0) {
    plVar6 = local_d8 + 4;
    if ((longlong *)local_d8[2] != (longlong *)0x0) {
      plVar6 = (longlong *)local_d8[2];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764ad1e FUN_14764ad1e body=29 status=ok
// SIG undefined FUN_14764ad1e(void)

undefined8 FUN_14764ad1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764ad3c FUN_14764ad3c body=485 status=ok
// SIG undefined FUN_14764ad3c(void)

void FUN_14764ad3c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  longlong *local_78 [2];
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = (code *)*param_2;
  local_78[0] = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)*plVar6)(plVar6,local_78);
  }
  plVar6 = (longlong *)(param_1 + 0x3e0);
  lVar1 = param_1 + 0x3f0;
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  uStack_90 = 0;
  local_d8 = param_2;
  uStack_a0 = lVar1;
  if (*(int *)(param_1 + 0x408) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    iVar7 = *(int *)(param_1 + 0x408);
  }
  uStack_b0 = CONCAT44(uStack_8c,uStack_90);
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_c8 = (undefined4)local_a8;
  uStack_c4 = local_a8._4_4_;
  uStack_c0 = (undefined4)uStack_a0;
  uStack_bc = uStack_a0._4_4_;
  local_d0 = plVar6;
  if ((iStack_94 != iVar7) || (uStack_a0 != lVar1)) {
    do {
      pcVar3 = local_88;
      puVar2 = (undefined8 *)(*local_d0 + (longlong)iStack_b4 * 0x118);
      local_a8 = *puVar2;
      plVar5 = local_78[0];
      if (local_78[0] == (longlong *)0x0) {
        plVar5 = local_68;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(uVar4,&local_a8,puVar2 + 1);
      local_b8 = local_b8 & ~uStack_c4;
      FUN_1449c0562(&local_c8);
    } while (local_d0 != plVar6 || (CONCAT44(uStack_bc,uStack_c0) != lVar1 || iStack_b4 != iVar7));
  }
  if (local_88 != (code *)0x0) {
    plVar6 = local_78[0];
    if (local_78[0] == (longlong *)0x0) {
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*local_d8 != 0) {
    plVar6 = local_d8 + 4;
    if ((longlong *)local_d8[2] != (longlong *)0x0) {
      plVar6 = (longlong *)local_d8[2];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764af58 FUN_14764af58 body=29 status=ok
// SIG undefined FUN_14764af58(void)

undefined8 FUN_14764af58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764af76 FUN_14764af76 body=485 status=ok
// SIG undefined FUN_14764af76(void)

void FUN_14764af76(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  longlong *local_78 [2];
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = (code *)*param_2;
  local_78[0] = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)*plVar6)(plVar6,local_78);
  }
  plVar6 = (longlong *)(param_1 + 0x430);
  lVar1 = param_1 + 0x440;
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  uStack_90 = 0;
  local_d8 = param_2;
  uStack_a0 = lVar1;
  if (*(int *)(param_1 + 0x458) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    iVar7 = *(int *)(param_1 + 0x458);
  }
  uStack_b0 = CONCAT44(uStack_8c,uStack_90);
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_c8 = (undefined4)local_a8;
  uStack_c4 = local_a8._4_4_;
  uStack_c0 = (undefined4)uStack_a0;
  uStack_bc = uStack_a0._4_4_;
  local_d0 = plVar6;
  if ((iStack_94 != iVar7) || (uStack_a0 != lVar1)) {
    do {
      pcVar3 = local_88;
      puVar2 = (undefined8 *)(*local_d0 + (longlong)iStack_b4 * 0x118);
      local_a8 = *puVar2;
      plVar5 = local_78[0];
      if (local_78[0] == (longlong *)0x0) {
        plVar5 = local_68;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(uVar4,&local_a8,puVar2 + 1);
      local_b8 = local_b8 & ~uStack_c4;
      FUN_1449c0562(&local_c8);
    } while (local_d0 != plVar6 || (CONCAT44(uStack_bc,uStack_c0) != lVar1 || iStack_b4 != iVar7));
  }
  if (local_88 != (code *)0x0) {
    plVar6 = local_78[0];
    if (local_78[0] == (longlong *)0x0) {
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*local_d8 != 0) {
    plVar6 = local_d8 + 4;
    if ((longlong *)local_d8[2] != (longlong *)0x0) {
      plVar6 = (longlong *)local_d8[2];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764b192 FUN_14764b192 body=29 status=ok
// SIG undefined FUN_14764b192(void)

undefined8 FUN_14764b192(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764b1b0 FUN_14764b1b0 body=486 status=ok
// SIG undefined FUN_14764b1b0(void)

void FUN_14764b1b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  longlong *local_78 [2];
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = (code *)*param_2;
  local_78[0] = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)*plVar6)(plVar6,local_78);
  }
  plVar6 = (longlong *)(param_1 + 0x390);
  lVar1 = param_1 + 0x3a0;
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  uStack_90 = 0;
  local_d8 = param_2;
  uStack_a0 = lVar1;
  if (*(int *)(param_1 + 0x3b8) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    iVar7 = *(int *)(param_1 + 0x3b8);
  }
  uStack_b0 = CONCAT44(uStack_8c,uStack_90);
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_c8 = (undefined4)local_a8;
  uStack_c4 = local_a8._4_4_;
  uStack_c0 = (undefined4)uStack_a0;
  uStack_bc = uStack_a0._4_4_;
  local_d0 = plVar6;
  if ((iStack_94 != iVar7) || (uStack_a0 != lVar1)) {
    do {
      pcVar3 = local_88;
      puVar2 = (undefined8 *)(*local_d0 + (longlong)iStack_b4 * 0x120);
      local_a8 = *puVar2;
      plVar5 = local_78[0];
      if (local_78[0] == (longlong *)0x0) {
        plVar5 = local_68;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(uVar4,&local_a8,puVar2 + 1);
      local_b8 = local_b8 & ~uStack_c4;
      FUN_1449c0562(&local_c8);
    } while (local_d0 != plVar6 || (CONCAT44(uStack_bc,uStack_c0) != lVar1 || iStack_b4 != iVar7));
  }
  if (local_88 != (code *)0x0) {
    plVar6 = local_78[0];
    if (local_78[0] == (longlong *)0x0) {
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*local_d8 != 0) {
    plVar6 = local_d8 + 4;
    if ((longlong *)local_d8[2] != (longlong *)0x0) {
      plVar6 = (longlong *)local_d8[2];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764b3ce FUN_14764b3ce body=29 status=ok
// SIG undefined FUN_14764b3ce(void)

undefined8 FUN_14764b3ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764b3ec FUN_14764b3ec body=489 status=ok
// SIG undefined FUN_14764b3ec(void)

void FUN_14764b3ec(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88;
  longlong *local_78 [2];
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = (code *)*param_2;
  local_78[0] = (longlong *)0x0;
  if (local_88 != (code *)0x0) {
    plVar6 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[2];
    }
    (**(code **)*plVar6)(plVar6,local_78);
  }
  plVar6 = (longlong *)(param_1 + 0x480);
  lVar1 = param_1 + 0x490;
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  uStack_90 = 0;
  local_d8 = param_2;
  uStack_a0 = lVar1;
  if (*(int *)(param_1 + 0x4a8) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_a8);
    iVar7 = *(int *)(param_1 + 0x4a8);
  }
  uStack_b0 = CONCAT44(uStack_8c,uStack_90);
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_c8 = (undefined4)local_a8;
  uStack_c4 = local_a8._4_4_;
  uStack_c0 = (undefined4)uStack_a0;
  uStack_bc = uStack_a0._4_4_;
  local_d0 = plVar6;
  if ((iStack_94 != iVar7) || (uStack_a0 != lVar1)) {
    do {
      pcVar3 = local_88;
      puVar2 = (undefined8 *)(*local_d0 + (longlong)iStack_b4 * 0x108);
      local_a8 = *puVar2;
      plVar5 = local_78[0];
      if (local_78[0] == (longlong *)0x0) {
        plVar5 = local_68;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(uVar4,&local_a8,puVar2 + 1);
      local_b8 = local_b8 & ~uStack_c4;
      FUN_1449c0562(&local_c8);
    } while (local_d0 != plVar6 || (CONCAT44(uStack_bc,uStack_c0) != lVar1 || iStack_b4 != iVar7));
  }
  if (local_88 != (code *)0x0) {
    plVar6 = local_78[0];
    if (local_78[0] == (longlong *)0x0) {
      plVar6 = local_68;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*local_d8 != 0) {
    plVar6 = local_d8 + 4;
    if ((longlong *)local_d8[2] != (longlong *)0x0) {
      plVar6 = (longlong *)local_d8[2];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764b60c FUN_14764b60c body=29 status=ok
// SIG undefined FUN_14764b60c(void)

undefined8 FUN_14764b60c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764b62a FUN_14764b62a body=328 status=ok
// SIG undefined FUN_14764b62a(void)

void FUN_14764b62a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = FUN_14633afa8();
  uVar3 = *(ulonglong *)(lVar7 + 0x18);
  uVar9 = *(uint *)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar7 = param_1;
  }
  if ((int)uVar9 < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    local_68 = param_2;
    do {
      uVar1 = uVar10 + (uVar9 >> 1);
      uVar4 = *(ulonglong *)(lVar7 + (ulonglong)uVar1 * 0x18);
      if ((int)uVar4 == (int)uVar3) {
        iVar6 = (int)(uVar4 >> 0x20) - (int)(uVar3 >> 0x20);
      }
      else {
        iVar6 = FUN_14002c2bd(uVar4 & 0xffffffff,uVar3 & 0xffffffff);
      }
      if (iVar6 < 0) {
        uVar10 = uVar1 + (uVar9 & 1);
      }
      bVar5 = 1 < uVar9;
      uVar9 = uVar9 >> 1;
    } while (bVar5);
    uVar9 = *(uint *)(param_1 + 0x20);
    param_2 = local_68;
  }
  if ((int)uVar10 < (int)uVar9) {
    lVar7 = *(longlong *)(param_1 + 0x18);
    lVar8 = lVar7;
    if (lVar7 == 0) {
      lVar8 = param_1;
    }
    if (*(ulonglong *)(lVar8 + (ulonglong)uVar10 * 0x18) == uVar3) goto LAB_14764b714;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_60 = uVar3;
  FUN_140f93936(param_1,&local_60,uVar10);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  lVar7 = *(longlong *)(param_1 + 0x18);
LAB_14764b714:
  if (lVar7 != 0) {
    param_1 = lVar7;
  }
  plVar2 = (longlong *)(param_1 + 8 + (ulonglong)uVar10 * 0x18);
  iVar6 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar6 + 1U) {
    FUN_140aec898(plVar2,iVar6);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar6 * 8) = param_2;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764b774 FUN_14764b774 body=198 status=ok
// SIG undefined FUN_14764b774(void)

longlong FUN_14764b774(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x120;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x120) == *param_3) {
          if (lVar3 != 0) goto LAB_14764b81d;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x118);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_14764b83c(param_1,&local_1c,param_2,&local_30);
  lVar3 = (longlong)local_1c * 0x120 + *param_1;
LAB_14764b81d:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14764b83c FUN_14764b83c body=292 status=ok
// SIG undefined FUN_14764b83c(void)

undefined4 * FUN_14764b83c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14764b962(param_1,local_48);
  uVar1 = param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  FUN_147613664(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 0x23) = 0xffffffff;
  cVar2 = FUN_14764ba52(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x11c) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x23) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14764bb72(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764b962 FUN_14764b962 body=240 status=ok
// SIG undefined FUN_14764b962(void)

int * FUN_14764b962(longlong *param_1,int *param_2)

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
      FUN_147249674(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x120);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x120) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x120 + *param_1;
  return param_2;
}



// FUNCTION 14764ba52 FUN_14764ba52 body=165 status=ok
// SIG undefined FUN_14764ba52(void)

undefined8 FUN_14764ba52(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x120);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x120) == *param_3) {
          FUN_1404dbc70((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x118);
          FUN_14764baf8(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x118);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14764baf8 FUN_14764baf8 body=122 status=ok
// SIG undefined FUN_14764baf8(void)

void FUN_14764baf8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x120) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x120) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x120 + 4) = uVar4;
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



// FUNCTION 14764bb72 FUN_14764bb72 body=483 status=ok
// SIG undefined FUN_14764bb72(void)

void FUN_14764bb72(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x120;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x11c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x118 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14764bd56 FUN_14764bd56 body=171 status=ok
// SIG undefined FUN_14764bd56(void)

void FUN_14764bd56(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined8 local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x108;
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x108) == *param_3) {
          if (lVar1 != 0) goto LAB_14764bde5;
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x100);
      } while (iVar3 != -1);
    }
  }
  local_28 = param_3;
  local_20 = param_4;
  FUN_14764be02(param_1,local_14,param_2,&local_28);
LAB_14764bde5:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764be02 FUN_14764be02 body=292 status=ok
// SIG undefined FUN_14764be02(void)

undefined4 * FUN_14764be02(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14764bf28(param_1,local_48);
  uVar1 = param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  FUN_14764c0cc(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  cVar2 = FUN_14764c024(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x104) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14764c20c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764bf28 FUN_14764bf28 body=251 status=ok
// SIG undefined FUN_14764bf28(void)

int * FUN_14764bf28(longlong *param_1,int *param_2)

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
      FUN_1417a255a(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x108);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x108) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x108 + *param_1;
  return param_2;
}



// FUNCTION 14764c024 FUN_14764c024 body=168 status=ok
// SIG undefined FUN_14764c024(void)

undefined8 FUN_14764c024(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x108);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x108) == *param_3) {
          FUN_14753af42((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x100);
          FUN_14764c18c(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x100);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14764c0cc FUN_14764c0cc body=192 status=ok
// SIG undefined FUN_14764c0cc(void)

undefined8 * FUN_14764c0cc(undefined8 *param_1,longlong param_2)

{
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a46bc60;
  param_1[10] = 0;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_2 + 0x58) = 0;
  param_1[0xc] = 0;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 14764c18c FUN_14764c18c body=128 status=ok
// SIG undefined FUN_14764c18c(void)

void FUN_14764c18c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x108) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x108) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x108 + 4) = uVar4;
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



// FUNCTION 14764c20c FUN_14764c20c body=486 status=ok
// SIG undefined FUN_14764c20c(void)

void FUN_14764c20c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
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
      iVar6 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar5 = (longlong)iVar6 * 0x108;
        uVar4 = *(undefined8 *)(lVar3 + lVar5);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x104 + lVar5) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x100 + lVar5) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
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



// FUNCTION 14764c3f4 FUN_14764c3f4 body=196 status=ok
// SIG undefined FUN_14764c3f4(void)

longlong FUN_14764c3f4(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x118;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x118) == *param_3) {
          if (lVar3 != 0) goto LAB_14764c49b;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x110);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_14764c4ba(param_1,&local_1c,param_2,&local_30);
  lVar3 = (longlong)local_1c * 0x118 + *param_1;
LAB_14764c49b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14764c4ba FUN_14764c4ba body=292 status=ok
// SIG undefined FUN_14764c4ba(void)

undefined4 * FUN_14764c4ba(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14764c5e0(param_1,local_48);
  uVar1 = param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  FUN_14764a36a(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 0x22) = 0xffffffff;
  cVar2 = FUN_14764c6ce(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x114) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x22) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14764c880(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764c5e0 FUN_14764c5e0 body=237 status=ok
// SIG undefined FUN_14764c5e0(void)

int * FUN_14764c5e0(longlong *param_1,int *param_2)

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
      FUN_14764c772(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x118);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x118) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x118 + *param_1;
  return param_2;
}



// FUNCTION 14764c6ce FUN_14764c6ce body=164 status=ok
// SIG undefined FUN_14764c6ce(void)

undefined8 FUN_14764c6ce(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x118);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x118) == *param_3) {
          FUN_140bb7e7c((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x110);
          FUN_14764c806(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x110);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14764c772 FUN_14764c772 body=146 status=ok
// SIG undefined FUN_14764c772(void)

void FUN_14764c772(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x118,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x118)) {
      uVar5 = uVar4 / 0x118 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x118,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14764c806 FUN_14764c806 body=122 status=ok
// SIG undefined FUN_14764c806(void)

void FUN_14764c806(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x118) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x118) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x118 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14764c880 FUN_14764c880 body=482 status=ok
// SIG undefined FUN_14764c880(void)

void FUN_14764c880(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x118;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x114 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x110 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14764ca64 FUN_14764ca64 body=196 status=ok
// SIG undefined FUN_14764ca64(void)

longlong FUN_14764ca64(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x118;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x118) == *param_3) {
          if (lVar3 != 0) goto LAB_14764cb0b;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x110);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_14764cb2a(param_1,&local_1c,param_2,&local_30);
  lVar3 = (longlong)local_1c * 0x118 + *param_1;
LAB_14764cb0b:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14764cb2a FUN_14764cb2a body=292 status=ok
// SIG undefined FUN_14764cb2a(void)

undefined4 * FUN_14764cb2a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14764cc50(param_1,local_48);
  uVar1 = param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  FUN_14764cde2(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 0x22) = 0xffffffff;
  cVar2 = FUN_14764cd3e(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x114) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x22) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14764cf3a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764cc50 FUN_14764cc50 body=237 status=ok
// SIG undefined FUN_14764cc50(void)

int * FUN_14764cc50(longlong *param_1,int *param_2)

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
      FUN_14764c772(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x118);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x118) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x118 + *param_1;
  return param_2;
}



// FUNCTION 14764cd3e FUN_14764cd3e body=164 status=ok
// SIG undefined FUN_14764cd3e(void)

undefined8 FUN_14764cd3e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x118);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x118) == *param_3) {
          FUN_14581ef76((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x110);
          FUN_14764cec0(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x110);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14764cde2 FUN_14764cde2 body=221 status=ok
// SIG undefined FUN_14764cde2(void)

undefined8 * FUN_14764cde2(undefined8 *param_1,longlong param_2)

{
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a46eaf0;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)((longlong)param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
  param_1[0xb] = 0;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined1 *)((longlong)param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
  param_1[0xe] = 0;
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_2 + 0x78) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 14764cec0 FUN_14764cec0 body=122 status=ok
// SIG undefined FUN_14764cec0(void)

void FUN_14764cec0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x118) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x118) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x118 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14764cf3a FUN_14764cf3a body=482 status=ok
// SIG undefined FUN_14764cf3a(void)

void FUN_14764cf3a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x118;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x114 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x110 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14764d11e FUN_14764d11e body=198 status=ok
// SIG undefined FUN_14764d11e(void)

longlong FUN_14764d11e(longlong *param_1,uint param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x120;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x120) == *param_3) {
          if (lVar3 != 0) goto LAB_14764d1c7;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x118);
      } while (iVar1 != -1);
    }
  }
  local_30 = param_3;
  local_28 = param_4;
  FUN_14764d1e6(param_1,&local_1c,param_2,&local_30);
  lVar3 = (longlong)local_1c * 0x120 + *param_1;
LAB_14764d1c7:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14764d1e6 FUN_14764d1e6 body=292 status=ok
// SIG undefined FUN_14764d1e6(void)

undefined4 * FUN_14764d1e6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14764d30c(param_1,local_48);
  uVar1 = param_4[1];
  *local_40 = *(undefined8 *)*param_4;
  FUN_14764d4a2(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 0x23) = 0xffffffff;
  cVar2 = FUN_14764d3fc(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x11c) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x23) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14764d60c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764d30c FUN_14764d30c body=240 status=ok
// SIG undefined FUN_14764d30c(void)

int * FUN_14764d30c(longlong *param_1,int *param_2)

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
      FUN_147249674(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x120);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x120) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x120 + *param_1;
  return param_2;
}



// FUNCTION 14764d3fc FUN_14764d3fc body=165 status=ok
// SIG undefined FUN_14764d3fc(void)

undefined8 FUN_14764d3fc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x120);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x120) == *param_3) {
          FUN_14156b236((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x118);
          FUN_14764d592(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x118);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14764d4a2 FUN_14764d4a2 body=239 status=ok
// SIG undefined FUN_14764d4a2(void)

undefined8 * FUN_14764d4a2(undefined8 *param_1,longlong param_2)

{
  FUN_1475affea();
  *param_1 = &PTR_FUN_14a4ab3d0;
  param_1[10] = 0;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_2 + 0x58) = 0;
  param_1[0xc] = 0;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  param_1[0xe] = 0;
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x80);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  return param_1;
}



// FUNCTION 14764d592 FUN_14764d592 body=122 status=ok
// SIG undefined FUN_14764d592(void)

void FUN_14764d592(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x120) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x120) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x120 + 4) = uVar4;
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



// FUNCTION 14764d60c FUN_14764d60c body=483 status=ok
// SIG undefined FUN_14764d60c(void)

void FUN_14764d60c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x120;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x11c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x118 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14764d7f0 FUN_14764d7f0 body=139 status=ok
// SIG undefined FUN_14764d7f0(void)

void FUN_14764d7f0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x120) == param_2) {
          FUN_14764d87c(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x120 + *param_1 + 0x118);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14764d87c FUN_14764d87c body=140 status=ok
// SIG undefined FUN_14764d87c(void)

void FUN_14764d87c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x120;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x11c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x118 + lVar6 * 0x120);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x120 + 0x118);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x118);
  FUN_1404dbc70(*param_1 + lVar2 + 8);
  FUN_14764baf8(param_1,param_2);
  return;
}



// FUNCTION 14764d908 FUN_14764d908 body=142 status=ok
// SIG undefined FUN_14764d908(void)

void FUN_14764d908(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x108) == param_2) {
          FUN_14764d996(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x108 + *param_1 + 0x100);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14764d996 FUN_14764d996 body=146 status=ok
// SIG undefined FUN_14764d996(void)

void FUN_14764d996(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x108;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x104 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x100 + lVar6 * 0x108);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x108 + 0x100);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x100);
  FUN_14753af42(*param_1 + lVar2 + 8);
  FUN_14764c18c(param_1,param_2);
  return;
}



// FUNCTION 14764da28 FUN_14764da28 body=138 status=ok
// SIG undefined FUN_14764da28(void)

void FUN_14764da28(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x118) == param_2) {
          FUN_14764dab2(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x118 + *param_1 + 0x110);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14764dab2 FUN_14764dab2 body=138 status=ok
// SIG undefined FUN_14764dab2(void)

void FUN_14764dab2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x118;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x114 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x110 + lVar6 * 0x118);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x118 + 0x110);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x110);
  FUN_140bb7e7c(*param_1 + lVar2 + 8);
  FUN_14764c806(param_1,param_2);
  return;
}



// FUNCTION 14764db3c FUN_14764db3c body=138 status=ok
// SIG undefined FUN_14764db3c(void)

void FUN_14764db3c(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x118) == param_2) {
          FUN_14764dbc6(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x118 + *param_1 + 0x110);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14764dbc6 FUN_14764dbc6 body=138 status=ok
// SIG undefined FUN_14764dbc6(void)

void FUN_14764dbc6(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x118;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x114 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x110 + lVar6 * 0x118);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x118 + 0x110);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x110);
  FUN_14581ef76(*param_1 + lVar2 + 8);
  FUN_14764cec0(param_1,param_2);
  return;
}



// FUNCTION 14764dc50 FUN_14764dc50 body=139 status=ok
// SIG undefined FUN_14764dc50(void)

void FUN_14764dc50(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x120) == param_2) {
          FUN_14764dcdc(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x120 + *param_1 + 0x118);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14764dcdc FUN_14764dcdc body=140 status=ok
// SIG undefined FUN_14764dcdc(void)

void FUN_14764dcdc(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x120;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x11c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x118 + lVar6 * 0x120);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x120 + 0x118);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x118);
  FUN_14156b236(*param_1 + lVar2 + 8);
  FUN_14764d592(param_1,param_2);
  return;
}



// FUNCTION 14764dd68 FUN_14764dd68 body=59 status=ok
// SIG undefined FUN_14764dd68(void)

undefined8 * FUN_14764dd68(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c31a0;
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764dda4 FUN_14764dda4 body=79 status=ok
// SIG undefined FUN_14764dda4(void)

undefined8 * FUN_14764dda4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3180;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764ddf4 FUN_14764ddf4 body=98 status=ok
// SIG undefined FUN_14764ddf4(void)

void FUN_14764ddf4(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c3180;
  FUN_14764de56(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0x70);
  *param_1 = &PTR_FUN_14a4c71a0;
  return;
}



// FUNCTION 14764de56 FUN_14764de56 body=151 status=ok
// SIG undefined FUN_14764de56(void)

undefined4 * FUN_14764de56(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    param_1[1] = param_2[1];
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
  }
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_2 + 10);
    *(longlong *)(param_1 + 10) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  cVar1 = *(char *)(param_2 + 0x12);
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  }
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  }
  return param_1;
}



// FUNCTION 14764deee FUN_14764deee body=75 status=ok
// SIG undefined FUN_14764deee(void)

undefined8 * FUN_14764deee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c31c0;
  if (*(char *)((longlong)param_1 + 0xa4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764df3a FUN_14764df3a body=104 status=ok
// SIG undefined FUN_14764df3a(void)

void FUN_14764df3a(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0xb0,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c31c0;
  FUN_14764dfa2(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0xa8);
  *param_1 = &PTR_FUN_14a4c71c0;
  return;
}



// FUNCTION 14764dfa2 FUN_14764dfa2 body=140 status=ok
// SIG undefined FUN_14764dfa2(void)

undefined4 * FUN_14764dfa2(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uVar4 = param_2[4];
    param_1[1] = param_2[1];
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
  }
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    lVar5 = *(longlong *)(param_2 + 10);
    *(longlong *)(param_1 + 10) = lVar5;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  cVar1 = *(char *)(param_2 + 0x27);
  *(char *)(param_1 + 0x27) = cVar1;
  if (cVar1 == '\x01') {
    puVar6 = param_2 + 0xf;
    puVar7 = param_1 + 0xf;
    for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return param_1;
}



// FUNCTION 14764e02e FUN_14764e02e body=49 status=ok
// SIG undefined FUN_14764e02e(void)

undefined8 * FUN_14764e02e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c31e0;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764e060 FUN_14764e060 body=49 status=ok
// SIG undefined FUN_14764e060(void)

undefined8 * FUN_14764e060(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3200;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764e092 FUN_14764e092 body=49 status=ok
// SIG undefined FUN_14764e092(void)

undefined8 * FUN_14764e092(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3220;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764e0c4 FUN_14764e0c4 body=49 status=ok
// SIG undefined FUN_14764e0c4(void)

undefined8 * FUN_14764e0c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3240;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764e0f6 FUN_14764e0f6 body=74 status=ok
// SIG undefined FUN_14764e0f6(void)

undefined8 * FUN_14764e0f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3260;
  if (*(int *)((longlong)param_1 + 0x44) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764e140 FUN_14764e140 body=130 status=ok
// SIG undefined FUN_14764e140(void)

undefined4 *
FUN_14764e140(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined2 *param_4,
             undefined2 *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    param_1[1] = param_2[1];
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
  }
  param_1[6] = *param_3;
  *(undefined2 *)(param_1 + 8) = *param_4;
  cVar1 = *(char *)(param_4 + 8);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_4 + 4);
    *(longlong *)(param_1 + 10) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  *(undefined2 *)(param_1 + 0xe) = *param_5;
  if (*(int *)(param_5 + 2) == -1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined8 *)(param_5 + 2);
  }
  *(undefined8 *)(param_1 + 0xf) = uVar6;
  return param_1;
}



// FUNCTION 14764e1c2 FUN_14764e1c2 body=98 status=ok
// SIG undefined FUN_14764e1c2(void)

void FUN_14764e1c2(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c3260;
  FUN_14764e224(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x50);
  *param_1 = &PTR_FUN_14a4c7260;
  return;
}



// FUNCTION 14764e224 FUN_14764e224 body=128 status=ok
// SIG undefined FUN_14764e224(void)

undefined4 * FUN_14764e224(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    param_1[1] = param_2[1];
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
  }
  param_1[6] = param_2[6];
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_2 + 10);
    *(longlong *)(param_1 + 10) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  if (param_2[0xf] == -1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0xf);
  }
  *(undefined8 *)(param_1 + 0xf) = uVar6;
  return param_1;
}



// FUNCTION 14764e2a4 FUN_14764e2a4 body=49 status=ok
// SIG undefined FUN_14764e2a4(void)

undefined8 * FUN_14764e2a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3400;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764e2d6 FUN_14764e2d6 body=59 status=ok
// SIG undefined FUN_14764e2d6(void)

undefined8 * FUN_14764e2d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c33e0;
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764e312 FUN_14764e312 body=257 status=ok
// SIG undefined FUN_14764e312(void)

void FUN_14764e312(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_14764e5ea(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764e414 FUN_14764e414 body=78 status=ok
// SIG undefined FUN_14764e414(void)

undefined8 FUN_14764e414(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14764e4b4();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764e464 FUN_14764e464 body=79 status=ok
// SIG undefined FUN_14764e464(void)

undefined8 * FUN_14764e464(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c72e0;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764e4b4 FUN_14764e4b4 body=309 status=ok
// SIG undefined FUN_14764e4b4(void)

undefined2 * FUN_14764e4b4(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_14116268c(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x78) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_140e3851c(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764e5ea FUN_14764e5ea body=98 status=ok
// SIG undefined FUN_14764e5ea(void)

void FUN_14764e5ea(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c7320;
  FUN_14764e7d2(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *param_1 = &PTR_FUN_14a4c7300;
  return;
}



// FUNCTION 14764e64c FUN_14764e64c body=69 status=ok
// SIG undefined FUN_14764e64c(void)

undefined8 * FUN_14764e64c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7320;
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764e692 FUN_14764e692 body=78 status=ok
// SIG undefined FUN_14764e692(void)

undefined8 FUN_14764e692(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14764e852();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764e6e2 FUN_14764e6e2 body=82 status=ok
// SIG undefined FUN_14764e6e2(void)

void FUN_14764e6e2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14764e95e(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764e736 FUN_14764e736 body=86 status=ok
// SIG undefined FUN_14764e736(void)

void FUN_14764e736(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    uVar1 = (undefined4)param_3[1];
    FUN_140e38572(param_1 + 0x10,lVar2,uVar1);
    FUN_140e3860a(param_1 + 0x28,lVar2,uVar1);
    FUN_140659abc(param_1 + 0x40,lVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 14764e78c FUN_14764e78c body=69 status=ok
// SIG undefined FUN_14764e78c(void)

undefined8 * FUN_14764e78c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7320;
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764e7d2 FUN_14764e7d2 body=127 status=ok
// SIG undefined FUN_14764e7d2(void)

undefined2 * FUN_14764e7d2(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[4] = param_2[4];
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  param_1[0x10] = param_2[0x10];
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_2 + 0x14);
    *(longlong *)(param_1 + 0x14) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  cVar1 = *(char *)(param_2 + 0x26);
  *(char *)(param_1 + 0x26) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x22) = uVar3;
  }
  return param_1;
}



// FUNCTION 14764e852 FUN_14764e852 body=266 status=ok
// SIG undefined FUN_14764e852(void)

undefined2 * FUN_14764e852(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_14764e95e(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x58) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_14764e736(param_1);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764e95e FUN_14764e95e body=79 status=ok
// SIG undefined FUN_14764e95e(void)

void FUN_14764e95e(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
    return;
  }
  return;
}



// FUNCTION 14764e9ae FUN_14764e9ae body=53 status=ok
// SIG undefined FUN_14764e9ae(void)

undefined8 * FUN_14764e9ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3420;
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764e9e4 FUN_14764e9e4 body=59 status=ok
// SIG undefined FUN_14764e9e4(void)

undefined8 * FUN_14764e9e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c35a0;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764ea20 FUN_14764ea20 body=98 status=ok
// SIG undefined FUN_14764ea20(void)

void FUN_14764ea20(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c35a0;
  FUN_14764ea82(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0x70);
  *param_1 = &PTR_FUN_14a4c7360;
  return;
}



// FUNCTION 14764ea82 FUN_14764ea82 body=125 status=ok
// SIG undefined FUN_14764ea82(void)

undefined4 * FUN_14764ea82(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    param_1[1] = param_2[1];
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    lVar2 = *(longlong *)(param_2 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uVar6 = *(undefined8 *)(param_2 + 10);
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *(undefined8 *)(param_1 + 10) = uVar6;
    *(undefined8 *)(param_1 + 0xc) = uVar7;
    uVar6 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x14) = uVar6;
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  }
  return param_1;
}



// FUNCTION 14764eb00 FUN_14764eb00 body=119 status=ok
// SIG undefined FUN_14764eb00(void)

undefined8 FUN_14764eb00(undefined8 param_1,undefined8 *param_2)

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
  FUN_14764a098(param_1,&local_28);
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



// FUNCTION 14764eb78 FUN_14764eb78 body=195 status=ok
// SIG undefined FUN_14764eb78(void)

undefined8 * FUN_14764eb78(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    local_50 = param_2 + 0x80;
    local_40 = param_2 + 0x68;
    local_58 = (longlong *)(param_2 + 0x58);
    lVar3 = param_3[1];
    local_48 = param_2;
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *param_3;
      lVar5 = 0;
      do {
        uVar1 = *(undefined4 *)(lVar2 + lVar5);
        iVar4 = FUN_14752433e(&local_58,uVar1);
        if (iVar4 != -1) {
          *param_1 = CONCAT44(*(undefined4 *)(*local_58 + (longlong)iVar4 * 4),uVar1);
          *(undefined1 *)(param_1 + 1) = 1;
          goto LAB_14764ebf7;
        }
        lVar5 = lVar5 + 4;
      } while ((longlong)(int)lVar3 * 4 != lVar5);
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
LAB_14764ebf7:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764ec3c FUN_14764ec3c body=84 status=ok
// SIG undefined FUN_14764ec3c(void)

undefined8 * FUN_14764ec3c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a4c7c40;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_14a4c7c60;
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764ec90 FUN_14764ec90 body=53 status=ok
// SIG undefined FUN_14764ec90(void)

void FUN_14764ec90(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147526316(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_1400f01f6(lVar1,param_2,*(undefined8 *)(param_1 + 0x38));
    return;
  }
  return;
}



// FUNCTION 14764ecc6 FUN_14764ecc6 body=88 status=ok
// SIG undefined FUN_14764ecc6(void)

void FUN_14764ecc6(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_147526316(param_1 + 0x18);
  if ((lVar2 != 0) && (*(char *)(param_1 + 0x10) == '\x01')) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    FUN_14752e2eb(lVar2,uVar1,**(undefined4 **)(param_1 + 0x38));
    FUN_147525d6e(lVar2,uVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14764ed1e FUN_14764ed1e body=49 status=ok
// SIG undefined FUN_14764ed1e(void)

undefined8 * FUN_14764ed1e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3740;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764ed50 FUN_14764ed50 body=79 status=ok
// SIG undefined FUN_14764ed50(void)

undefined8 * FUN_14764ed50(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7be0;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764eda0 FUN_14764eda0 body=125 status=ok
// SIG undefined FUN_14764eda0(void)

undefined8 * FUN_14764eda0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7cc0;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764ee1e FUN_14764ee1e body=78 status=ok
// SIG undefined FUN_14764ee1e(void)

undefined8 FUN_14764ee1e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14764eede();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764ee6e FUN_14764ee6e body=111 status=ok
// SIG undefined FUN_14764ee6e(void)

undefined8 * FUN_14764ee6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7cc0;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764eede FUN_14764eede body=311 status=ok
// SIG undefined FUN_14764eede(void)

undefined2 * FUN_14764eede(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_14593e24c(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xa8) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1458ff106(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764f016 FUN_14764f016 body=95 status=ok
// SIG undefined FUN_14764f016(void)

undefined8 * FUN_14764f016(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7d00;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764f076 FUN_14764f076 body=78 status=ok
// SIG undefined FUN_14764f076(void)

undefined8 FUN_14764f076(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14764f1d4();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764f0c6 FUN_14764f0c6 body=85 status=ok
// SIG undefined FUN_14764f0c6(void)

void FUN_14764f0c6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14764f30c(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764f11c FUN_14764f11c body=86 status=ok
// SIG undefined FUN_14764f11c(void)

void FUN_14764f11c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_14764f37e(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764f174 FUN_14764f174 body=95 status=ok
// SIG undefined FUN_14764f174(void)

undefined8 * FUN_14764f174(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7d00;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764f1d4 FUN_14764f1d4 body=311 status=ok
// SIG undefined FUN_14764f1d4(void)

undefined2 * FUN_14764f1d4(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_14764f30c(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x90) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14764f37e(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764f30c FUN_14764f30c body=113 status=ok
// SIG undefined FUN_14764f30c(void)

void FUN_14764f30c(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  FUN_140dba9e6(*param_1,param_2[0x34]);
  return;
}



// FUNCTION 14764f37e FUN_14764f37e body=101 status=ok
// SIG undefined FUN_14764f37e(void)

void FUN_14764f37e(undefined8 *param_1,longlong param_2)

{
  FUN_140659b5e(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659bfa(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14764f3e4 FUN_14764f3e4 body=78 status=ok
// SIG undefined FUN_14764f3e4(void)

undefined8 FUN_14764f3e4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14764f494();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764f434 FUN_14764f434 body=95 status=ok
// SIG undefined FUN_14764f434(void)

undefined8 * FUN_14764f434(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7d40;
  if (*(char *)((longlong)param_1 + 0x84) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764f494 FUN_14764f494 body=312 status=ok
// SIG undefined FUN_14764f494(void)

undefined2 * FUN_14764f494(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_14127300e(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x88) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_140f4be70(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764f5ce FUN_14764f5ce body=147 status=ok
// SIG undefined FUN_14764f5ce(void)

void FUN_14764f5ce(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x120,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14764f662 FUN_14764f662 body=95 status=ok
// SIG undefined FUN_14764f662(void)

undefined4 * FUN_14764f662(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_147613664(param_1 + 4,param_2 + 4);
  FUN_147613664(param_1 + 0x48,param_2 + 0x48);
  FUN_147613664(param_1 + 0x8c,param_2 + 0x8c);
  FUN_147613664(param_1 + 0xd0,param_2 + 0xd0);
  return param_1;
}



// FUNCTION 14764f6c2 FUN_14764f6c2 body=146 status=ok
// SIG undefined FUN_14764f6c2(void)

void FUN_14764f6c2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x450,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x450)) {
      uVar5 = uVar4 / 0x450 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x450,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14764f756 FUN_14764f756 body=62 status=ok
// SIG undefined FUN_14764f756(void)

void FUN_14764f756(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14764f794(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x120,8);
  }
  return;
}



// FUNCTION 14764f794 FUN_14764f794 body=112 status=ok
// SIG undefined FUN_14764f794(void)

ulonglong FUN_14764f794(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x120) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14764f7ce;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x120,8);
      param_2 = param_2 / 0x120;
    }
  }
LAB_14764f7ce:
  return param_2 & 0xffffffff;
}



// FUNCTION 14764f804 FUN_14764f804 body=141 status=ok
// SIG undefined FUN_14764f804(void)

void FUN_14764f804(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x450;
  FUN_1404dbc70(lVar1 + lVar3 + 0x340);
  FUN_1404dbc70(lVar1 + lVar3 + 0x230);
  FUN_1404dbc70(lVar1 + lVar3 + 0x120);
  FUN_1404dbc70(lVar1 + lVar3 + 0x10);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(lVar1 + lVar3),(void *)(lVar1 + lVar3 + 0x450),
            (longlong)(int)(~param_2 + iVar2) * 0x450);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14764f892 FUN_14764f892 body=62 status=ok
// SIG undefined FUN_14764f892(void)

void FUN_14764f892(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14764f8d0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x450,8);
  }
  return;
}



// FUNCTION 14764f8d0 FUN_14764f8d0 body=110 status=ok
// SIG undefined FUN_14764f8d0(void)

ulonglong FUN_14764f8d0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x450) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14764f909;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x450,8);
      param_2 = param_2 / 0x450;
    }
  }
LAB_14764f909:
  return param_2 & 0xffffffff;
}



// FUNCTION 14764f93e FUN_14764f93e body=79 status=ok
// SIG undefined FUN_14764f93e(void)

undefined8 * FUN_14764f93e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3ac0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764f98e FUN_14764f98e body=89 status=ok
// SIG undefined FUN_14764f98e(void)

undefined8 * FUN_14764f98e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3aa0;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764f9e8 FUN_14764f9e8 body=105 status=ok
// SIG undefined FUN_14764f9e8(void)

undefined8 * FUN_14764f9e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3a80;
  if (*(char *)(param_1 + 0x12) == '\x01') {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764fa52 FUN_14764fa52 body=38 status=ok
// SIG undefined FUN_14764fa52(void)

undefined8 FUN_14764fa52(undefined8 param_1,int param_2)

{
  FUN_1475c6792();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764fa78 FUN_14764fa78 body=74 status=ok
// SIG undefined FUN_14764fa78(void)

undefined8 * FUN_14764fa78(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3ae0;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764fac2 FUN_14764fac2 body=101 status=ok
// SIG undefined FUN_14764fac2(void)

void FUN_14764fac2(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a4c3ae0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0x1c);
  *(char *)((longlong)param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = uVar2;
  }
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x20);
  if (*(int *)(param_2 + 0x24) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x24);
  }
  *(undefined8 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 0x30);
  cVar1 = *(char *)(param_2 + 0x40);
  *(char *)(param_1 + 8) = cVar1;
  if (cVar1 == '\x01') {
    param_1[7] = *(undefined8 *)(param_2 + 0x38);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x48);
  return;
}



// FUNCTION 14764fb28 FUN_14764fb28 body=74 status=ok
// SIG undefined FUN_14764fb28(void)

undefined8 * FUN_14764fb28(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3b00;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764fb72 FUN_14764fb72 body=99 status=ok
// SIG undefined FUN_14764fb72(void)

void FUN_14764fb72(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a4c3b00;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0x1c);
  *(char *)((longlong)param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = uVar2;
  }
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x20);
  if (*(int *)(param_2 + 0x24) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x24);
  }
  *(undefined8 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  cVar1 = *(char *)(param_2 + 0x40);
  *(char *)(param_1 + 8) = cVar1;
  if (cVar1 == '\x01') {
    param_1[7] = *(undefined8 *)(param_2 + 0x38);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x48);
  return;
}



// FUNCTION 14764fbd6 FUN_14764fbd6 body=74 status=ok
// SIG undefined FUN_14764fbd6(void)

undefined8 * FUN_14764fbd6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3b20;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764fc20 FUN_14764fc20 body=98 status=ok
// SIG undefined FUN_14764fc20(void)

void FUN_14764fc20(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c3b20;
  FUN_14764fc82(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x48);
  *param_1 = &PTR_FUN_14a4c74a0;
  return;
}



// FUNCTION 14764fc82 FUN_14764fc82 body=89 status=ok
// SIG undefined FUN_14764fc82(void)

void FUN_14764fc82(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  if (param_2[7] == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 7);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  param_1[10] = param_2[10];
  cVar1 = *(char *)(param_2 + 0xe);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  }
  return;
}



// FUNCTION 14764fcdc FUN_14764fcdc body=98 status=ok
// SIG undefined FUN_14764fcdc(void)

void FUN_14764fcdc(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14764fd3e FUN_14764fd3e body=49 status=ok
// SIG undefined FUN_14764fd3e(void)

undefined8 * FUN_14764fd3e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3e10;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764fd70 FUN_14764fd70 body=197 status=ok
// SIG undefined FUN_14764fd70(void)

undefined8 * FUN_14764fd70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  puVar1 = param_1 + 5;
  param_1[8] = 0;
  param_1[9] = 0x100000000;
  lVar4 = FUN_145b24df8();
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  iVar2 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1457d67de(puVar1,iVar2);
  }
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  puVar5[(longlong)iVar2 * 3] = uVar3;
  puVar5[(longlong)iVar2 * 3 + 1] = 0;
  (puVar5 + (longlong)iVar2 * 3 + 1)[1] = 0;
  puVar5 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  iVar2 = *(int *)(puVar5 + 2);
  *(uint *)(puVar5 + 2) = iVar2 + 1U;
  if (*(uint *)((longlong)puVar5 + 0x14) < iVar2 + 1U) {
    FUN_140aec898(puVar5 + 1,iVar2);
  }
  *(undefined8 *)(puVar5[1] + (longlong)iVar2 * 8) = param_2;
  return param_1;
}



// FUNCTION 14764fe36 FUN_14764fe36 body=49 status=ok
// SIG undefined FUN_14764fe36(void)

undefined8 * FUN_14764fe36(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3e30;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14764fe68 FUN_14764fe68 body=208 status=ok
// SIG undefined FUN_14764fe68(void)

void FUN_14764fe68(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,8);
  FUN_147650030(puVar3,param_2);
  *puVar3 = &PTR_FUN_14a4c7500;
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
  *puVar1 = puVar3;
  *(undefined4 *)(puVar1 + 1) = local_60;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_5c;
  *(undefined4 *)(puVar1 + 2) = uStack_58;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_54;
  *(undefined4 *)(puVar1 + 3) = local_50;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_4c;
  *(undefined4 *)(puVar1 + 4) = uStack_48;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_44;
  *(undefined4 *)(puVar1 + 5) = local_40;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_3c;
  *(undefined4 *)(puVar1 + 6) = uStack_38;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_34;
  puVar1[7] = local_30;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14764ff3a FUN_14764ff3a body=245 status=ok
// SIG undefined FUN_14764ff3a(void)

void FUN_14764ff3a(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar5 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_147650384(puVar5);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  bVar3 = local_28;
  if ((local_28 & 1) != 0) {
    bVar3 = local_28 & 0xfe;
    *(byte *)(puVar1 + 0x10) = (*(byte *)(puVar1 + 0x10) & 0xfc | local_28 & 2) + 1;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
  }
  if ((bVar3 & 1) != 0) {
    if ((bVar3 & 2) == 0) {
      puVar5 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = bVar3 & 0xfe;
    (**(code **)*puVar5)(puVar5,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147650030 FUN_147650030 body=113 status=ok
// SIG undefined FUN_147650030(void)

void FUN_147650030(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a4c7520;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x40);
  *(char *)(param_1 + 8) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    uVar2 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((longlong)param_1 + 0x34) = uVar2;
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  cVar1 = *(char *)(param_2 + 0x58);
  *(char *)(param_1 + 0xb) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    param_1[9] = *(undefined8 *)(param_2 + 0x48);
    param_1[10] = uVar2;
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  return;
}



// FUNCTION 1476500a2 FUN_1476500a2 body=69 status=ok
// SIG undefined FUN_1476500a2(void)

undefined8 * FUN_1476500a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7520;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476500e8 FUN_1476500e8 body=78 status=ok
// SIG undefined FUN_1476500e8(void)

undefined8 FUN_1476500e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147650228();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147650138 FUN_147650138 body=82 status=ok
// SIG undefined FUN_147650138(void)

void FUN_147650138(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147650334(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765018c FUN_14765018c body=86 status=ok
// SIG undefined FUN_14765018c(void)

void FUN_14765018c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    uVar1 = (undefined4)param_3[1];
    FUN_14151b43e(param_1 + 0x10,lVar2,uVar1);
    FUN_140659bfa(param_1 + 0x28,lVar2,uVar1);
    FUN_140659abc(param_1 + 0x44,lVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1476501e2 FUN_1476501e2 body=69 status=ok
// SIG undefined FUN_1476501e2(void)

undefined8 * FUN_1476501e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7520;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147650228 FUN_147650228 body=266 status=ok
// SIG undefined FUN_147650228(void)

undefined2 * FUN_147650228(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_147650334(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x60) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_14765018c(param_1);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147650334 FUN_147650334 body=79 status=ok
// SIG undefined FUN_147650334(void)

void FUN_147650334(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1e]);
    return;
  }
  return;
}



// FUNCTION 147650384 FUN_147650384 body=143 status=ok
// SIG undefined FUN_147650384(void)

void FUN_147650384(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_1 = puVar4;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar4;
  }
  *param_1 = &PTR_FUN_14a4c7560;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x10);
  cVar2 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 4) = cVar2;
  if (cVar2 == '\x01') {
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  cVar2 = *(char *)(param_2 + 0x3c);
  *(char *)((longlong)param_1 + 0x3c) = cVar2;
  if (cVar2 == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((longlong)param_1 + 0x34) = uVar3;
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *param_1 = &PTR_FUN_14a4c7540;
  return;
}



// FUNCTION 147650414 FUN_147650414 body=59 status=ok
// SIG undefined FUN_147650414(void)

undefined8 * FUN_147650414(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7560;
  if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147650450 FUN_147650450 body=78 status=ok
// SIG undefined FUN_147650450(void)

undefined8 FUN_147650450(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147650578();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476504a0 FUN_1476504a0 body=82 status=ok
// SIG undefined FUN_1476504a0(void)

void FUN_1476504a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476506a2(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476504f4 FUN_1476504f4 body=71 status=ok
// SIG undefined FUN_1476504f4(void)

void FUN_1476504f4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    lVar2 = param_3[1];
    FUN_14151b43e(param_1 + 0x10,lVar1,(int)lVar2);
    FUN_140659abc(param_1 + 0x28,lVar1,(int)lVar2);
    return;
  }
  return;
}



// FUNCTION 14765053c FUN_14765053c body=59 status=ok
// SIG undefined FUN_14765053c(void)

undefined8 * FUN_14765053c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7560;
  if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147650578 FUN_147650578 body=297 status=ok
// SIG undefined FUN_147650578(void)

undefined2 * FUN_147650578(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[0] = param_4;
  FUN_1476506a2(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x40) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_78,param_4);
  uVar2 = local_70;
  lVar1 = local_78;
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_14151b43e(param_1 + 0x10,local_78,local_70);
    FUN_140659abc(param_1 + 0x28,lVar1,uVar2);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_58,&local_88,&local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476506a2 FUN_1476506a2 body=67 status=ok
// SIG undefined FUN_1476506a2(void)

void FUN_1476506a2(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
    return;
  }
  return;
}



// FUNCTION 1476506e6 FUN_1476506e6 body=170 status=ok
// SIG undefined FUN_1476506e6(void)

void FUN_1476506e6(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68 [3];
  longlong local_50;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = FUN_147526062();
  if (iVar1 != param_2) {
    local_68[0] = *(undefined8 *)(**(longlong **)(param_1 + 0x18) + (longlong)param_2 * 0x48);
    FUN_1475b0e08();
    FUN_14765081a(*(undefined8 *)(param_1 + 0x18),param_2);
    FUN_147650792(*(undefined8 *)(param_1 + 0x18),local_68,iVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147650792 FUN_147650792 body=136 status=ok
// SIG undefined FUN_147650792(void)

int FUN_147650792(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147650880(param_1,iVar1);
  }
  lVar3 = (longlong)param_3 * 0x48;
  memmove((void *)(*param_1 + lVar3 + 0x48),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_3) * 0x48);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  FUN_1475b0e08((undefined8 *)(lVar2 + lVar3) + 1,param_2 + 1);
  return param_3;
}



// FUNCTION 14765081a FUN_14765081a body=102 status=ok
// SIG undefined FUN_14765081a(void)

void FUN_14765081a(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x48);
  if (*(longlong *)((longlong)_Dst + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x48),(longlong)(int)(~param_2 + iVar1) * 0x48);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 147650880 FUN_147650880 body=147 status=ok
// SIG undefined FUN_147650880(void)

void FUN_147650880(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147650914 FUN_147650914 body=298 status=ok
// SIG undefined FUN_147650914(void)

void FUN_147650914(longlong *param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x28) != 0)) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar2 + 0x20) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar5) != 0)) {
        uVar1 = *(undefined4 *)(*(longlong *)*param_1 + (longlong)(int)param_2 * 4);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 1;
        FUN_14753e66a(&local_48,0);
        *local_48 = CONCAT44(uVar1,param_2);
        FUN_14753e6f0(param_1[2] + 0x20,param_1[2],&local_48);
        if (local_48 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(lVar2 + 0x28) * 0x10 != lVar5);
  }
  plVar3 = (longlong *)*param_1;
  iVar4 = (int)plVar3[1];
  if (~param_2 + iVar4 != 0) {
    memmove((void *)(*plVar3 + (longlong)(int)param_2 * 4),
            (void *)(*plVar3 + (longlong)(int)param_2 * 4 + 4),
            (longlong)(int)(~param_2 + iVar4) << 2);
    iVar4 = (int)plVar3[1];
  }
  *(int *)(plVar3 + 1) = iVar4 + -1;
  FUN_14765081a(param_1[3],param_2);
  if (param_1[1] != 0) {
    FUN_147a40876(param_1[1],param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147650a40 FUN_147650a40 body=48 status=ok
// SIG undefined FUN_147650a40(void)

void FUN_147650a40(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 147650a70 FUN_147650a70 body=65 status=ok
// SIG undefined FUN_147650a70(void)

undefined8 * FUN_147650a70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4550;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147650ab2 FUN_147650ab2 body=147 status=ok
// SIG undefined FUN_147650ab2(void)

void FUN_147650ab2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147650b46 FUN_147650b46 body=106 status=ok
// SIG undefined FUN_147650b46(void)

undefined8 FUN_147650b46(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0xc,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0xc)) {
    uVar5 = uVar2 / 0xc & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0xc,4);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 147650bb0 FUN_147650bb0 body=245 status=ok
// SIG undefined FUN_147650bb0(void)

void FUN_147650bb0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar5 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_147651170(puVar5);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  bVar3 = local_28;
  if ((local_28 & 1) != 0) {
    bVar3 = local_28 & 0xfe;
    *(byte *)(puVar1 + 0x10) = (*(byte *)(puVar1 + 0x10) & 0xfc | local_28 & 2) + 1;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
  }
  if ((bVar3 & 1) != 0) {
    if ((bVar3 & 2) == 0) {
      puVar5 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = bVar3 & 0xfe;
    (**(code **)*puVar5)(puVar5,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147650ca6 FUN_147650ca6 body=77 status=ok
// SIG undefined FUN_147650ca6(void)

undefined8 * FUN_147650ca6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c75c0;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147650cf4 FUN_147650cf4 body=78 status=ok
// SIG undefined FUN_147650cf4(void)

undefined8 FUN_147650cf4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147650d8a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147650d44 FUN_147650d44 body=69 status=ok
// SIG undefined FUN_147650d44(void)

undefined8 * FUN_147650d44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c75c0;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147650d8a FUN_147650d8a body=266 status=ok
// SIG undefined FUN_147650d8a(void)

undefined2 * FUN_147650d8a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_14583975c(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x60) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_14634a028(param_1);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147650e96 FUN_147650e96 body=59 status=ok
// SIG undefined FUN_147650e96(void)

undefined8 * FUN_147650e96(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7600;
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147650ed2 FUN_147650ed2 body=78 status=ok
// SIG undefined FUN_147650ed2(void)

undefined8 FUN_147650ed2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147650ffa();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147650f22 FUN_147650f22 body=82 status=ok
// SIG undefined FUN_147650f22(void)

void FUN_147650f22(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147651134(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147650f76 FUN_147650f76 body=71 status=ok
// SIG undefined FUN_147650f76(void)

void FUN_147650f76(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    lVar2 = param_3[1];
    FUN_140659bfa(param_1 + 8,lVar1,(int)lVar2);
    FUN_140659abc(param_1 + 0x24,lVar1,(int)lVar2);
    return;
  }
  return;
}



// FUNCTION 147650fbe FUN_147650fbe body=59 status=ok
// SIG undefined FUN_147650fbe(void)

undefined8 * FUN_147650fbe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7600;
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147650ffa FUN_147650ffa body=313 status=ok
// SIG undefined FUN_147650ffa(void)

undefined2 * FUN_147650ffa(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_147651134(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x40) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  uVar2 = local_78;
  lVar1 = local_80;
  if (local_80 == 0) {
    local_80 = 0;
  }
  else {
    FUN_140659bfa(param_1 + 8,local_80,local_78);
    FUN_140659abc(param_1 + 0x24,lVar1,uVar2);
  }
  local_88 = local_78;
  local_84 = 1;
  local_90 = local_80;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147651134 FUN_147651134 body=59 status=ok
// SIG undefined FUN_147651134(void)

void FUN_147651134(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 0xf) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xe]);
  }
  FUN_140dba9e6(*param_1,param_2[0x1a]);
  return;
}



// FUNCTION 147651170 FUN_147651170 body=149 status=ok
// SIG undefined FUN_147651170(void)

void FUN_147651170(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_1 = puVar4;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar4;
  }
  *param_1 = &PTR_FUN_14a4c7600;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  cVar2 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 4) = cVar2;
  if (cVar2 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    uVar3 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = uVar3;
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  cVar2 = *(char *)(param_2 + 0x38);
  *(char *)(param_1 + 7) = cVar2;
  if (cVar2 == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[6] = uVar3;
  }
  *(undefined2 *)((longlong)param_1 + 0x3c) = *(undefined2 *)(param_2 + 0x3c);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *param_1 = &PTR_FUN_14a4c75e0;
  return;
}



// FUNCTION 147651206 FUN_147651206 body=78 status=ok
// SIG undefined FUN_147651206(void)

undefined8 FUN_147651206(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147651292();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147651256 FUN_147651256 body=59 status=ok
// SIG undefined FUN_147651256(void)

undefined8 * FUN_147651256(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7640;
  if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147651292 FUN_147651292 body=297 status=ok
// SIG undefined FUN_147651292(void)

undefined2 * FUN_147651292(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[0] = param_4;
  FUN_140d90c34(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x40) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_78,param_4);
  uVar2 = local_70;
  lVar1 = local_78;
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_140659b5e(param_1 + 0x10,local_78,local_70);
    FUN_140659abc(param_1 + 0x28,lVar1,uVar2);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_58,&local_88,&local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476513bc FUN_1476513bc body=29 status=ok
// SIG undefined FUN_1476513bc(void)

undefined8 FUN_1476513bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476513da FUN_1476513da body=29 status=ok
// SIG undefined FUN_1476513da(void)

undefined8 * FUN_1476513da(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140f938fc();
  *param_2 = *(undefined8 *)(lVar1 + 0x18);
  return param_2;
}



// FUNCTION 14765140a FUN_14765140a body=49 status=ok
// SIG undefined FUN_14765140a(void)

undefined8 * FUN_14765140a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4590;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14765143c FUN_14765143c body=59 status=ok
// SIG undefined FUN_14765143c(void)

undefined8 * FUN_14765143c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4570;
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147651478 FUN_147651478 body=89 status=ok
// SIG undefined FUN_147651478(void)

undefined8 * FUN_147651478(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c76e0;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476514d2 FUN_1476514d2 body=78 status=ok
// SIG undefined FUN_1476514d2(void)

undefined8 FUN_1476514d2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147651572();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147651522 FUN_147651522 body=79 status=ok
// SIG undefined FUN_147651522(void)

undefined8 * FUN_147651522(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c76e0;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147651572 FUN_147651572 body=308 status=ok
// SIG undefined FUN_147651572(void)

undefined2 * FUN_147651572(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_145fda434(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x78) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_145f9b226(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476516a8 FUN_1476516a8 body=69 status=ok
// SIG undefined FUN_1476516a8(void)

undefined8 * FUN_1476516a8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7720;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476516ee FUN_1476516ee body=78 status=ok
// SIG undefined FUN_1476516ee(void)

undefined8 FUN_1476516ee(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14765182e();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765173e FUN_14765173e body=82 status=ok
// SIG undefined FUN_14765173e(void)

void FUN_14765173e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14765193a(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147651792 FUN_147651792 body=86 status=ok
// SIG undefined FUN_147651792(void)

void FUN_147651792(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    uVar1 = (undefined4)param_3[1];
    FUN_141286b5e(param_1 + 0x10,lVar2,uVar1);
    FUN_140e3860a(param_1 + 0x28,lVar2,uVar1);
    FUN_140659bfa(param_1 + 0x40,lVar2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1476517e8 FUN_1476517e8 body=69 status=ok
// SIG undefined FUN_1476517e8(void)

undefined8 * FUN_1476517e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7720;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14765182e FUN_14765182e body=266 status=ok
// SIG undefined FUN_14765182e(void)

undefined2 * FUN_14765182e(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_14765193a(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x60) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_147651792(param_1);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765193a FUN_14765193a body=65 status=ok
// SIG undefined FUN_14765193a(void)

void FUN_14765193a(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  FUN_140dba9e6(*param_1,param_2[0x1c]);
  return;
}



// FUNCTION 14765197c FUN_14765197c body=77 status=ok
// SIG undefined FUN_14765197c(void)

undefined8 * FUN_14765197c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7760;
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476519ca FUN_1476519ca body=78 status=ok
// SIG undefined FUN_1476519ca(void)

undefined8 FUN_1476519ca(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147651a60();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147651a1a FUN_147651a1a body=69 status=ok
// SIG undefined FUN_147651a1a(void)

undefined8 * FUN_147651a1a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7760;
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147651a60 FUN_147651a60 body=266 status=ok
// SIG undefined FUN_147651a60(void)

undefined2 * FUN_147651a60(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_145840dbc(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x58) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_14587854e(param_1);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147651b6c FUN_147651b6c body=49 status=ok
// SIG undefined FUN_147651b6c(void)

undefined8 * FUN_147651b6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4610;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147651b9e FUN_147651b9e body=49 status=ok
// SIG undefined FUN_147651b9e(void)

undefined8 * FUN_147651b9e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4630;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147651bd0 FUN_147651bd0 body=245 status=ok
// SIG undefined FUN_147651bd0(void)

void FUN_147651bd0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar5 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_147651eb6(puVar5);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  bVar3 = local_28;
  if ((local_28 & 1) != 0) {
    bVar3 = local_28 & 0xfe;
    *(byte *)(puVar1 + 0x10) = (*(byte *)(puVar1 + 0x10) & 0xfc | local_28 & 2) + 1;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
  }
  if ((bVar3 & 1) != 0) {
    if ((bVar3 & 2) == 0) {
      puVar5 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = bVar3 & 0xfe;
    (**(code **)*puVar5)(puVar5,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147651cc6 FUN_147651cc6 body=77 status=ok
// SIG undefined FUN_147651cc6(void)

undefined8 * FUN_147651cc6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c77e0;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147651d14 FUN_147651d14 body=78 status=ok
// SIG undefined FUN_147651d14(void)

undefined8 FUN_147651d14(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147651daa();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147651d64 FUN_147651d64 body=69 status=ok
// SIG undefined FUN_147651d64(void)

undefined8 * FUN_147651d64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c77e0;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147651daa FUN_147651daa body=266 status=ok
// SIG undefined FUN_147651daa(void)

undefined2 * FUN_147651daa(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_145a1c15a(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x60) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_145afecb8(param_1);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147651eb6 FUN_147651eb6 body=143 status=ok
// SIG undefined FUN_147651eb6(void)

void FUN_147651eb6(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_1 = puVar4;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar4;
  }
  *param_1 = &PTR_FUN_14a4c7820;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x10);
  cVar2 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 4) = cVar2;
  if (cVar2 == '\x01') {
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  cVar2 = *(char *)(param_2 + 0x3c);
  *(char *)((longlong)param_1 + 0x3c) = cVar2;
  if (cVar2 == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((longlong)param_1 + 0x34) = uVar3;
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *param_1 = &PTR_FUN_14a4c7800;
  return;
}



// FUNCTION 147651f46 FUN_147651f46 body=59 status=ok
// SIG undefined FUN_147651f46(void)

undefined8 * FUN_147651f46(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7820;
  if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147651f82 FUN_147651f82 body=78 status=ok
// SIG undefined FUN_147651f82(void)

undefined8 FUN_147651f82(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476520a8();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147651fd2 FUN_147651fd2 body=82 status=ok
// SIG undefined FUN_147651fd2(void)

void FUN_147651fd2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476521d2(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147652026 FUN_147652026 body=70 status=ok
// SIG undefined FUN_147652026(void)

void FUN_147652026(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    return;
  }
  lVar2 = param_3[1];
  FUN_145afed0e(param_1 + 0x10,lVar1,(int)lVar2);
  FUN_140659abc(param_1 + 0x28,lVar1,(int)lVar2);
  return;
}



// FUNCTION 14765206c FUN_14765206c body=59 status=ok
// SIG undefined FUN_14765206c(void)

undefined8 * FUN_14765206c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7820;
  if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476520a8 FUN_1476520a8 body=296 status=ok
// SIG undefined FUN_1476520a8(void)

undefined2 * FUN_1476520a8(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[0] = param_4;
  FUN_1476521d2(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x40) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_78,param_4);
  uVar2 = local_70;
  lVar1 = local_78;
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_145afed0e(param_1 + 0x10,local_78,local_70);
    FUN_140659abc(param_1 + 0x28,lVar1,uVar2);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_58,&local_88,&local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476521d2 FUN_1476521d2 body=67 status=ok
// SIG undefined FUN_1476521d2(void)

void FUN_1476521d2(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
    return;
  }
  return;
}



// FUNCTION 147652216 FUN_147652216 body=332 status=ok
// SIG undefined FUN_147652216(void)

uint FUN_147652216(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = FUN_140aec85e();
  uVar3 = *(ulonglong *)(lVar7 + 0x18);
  uVar10 = *(uint *)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar7 = param_1;
  }
  if ((int)uVar10 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    local_68 = param_2;
    do {
      uVar1 = uVar9 + (uVar10 >> 1);
      uVar4 = *(ulonglong *)(lVar7 + (ulonglong)uVar1 * 0x18);
      if ((int)uVar4 == (int)uVar3) {
        iVar6 = (int)(uVar4 >> 0x20) - (int)(uVar3 >> 0x20);
      }
      else {
        iVar6 = FUN_14002c2bd(uVar4 & 0xffffffff,uVar3 & 0xffffffff);
      }
      if (iVar6 < 0) {
        uVar9 = uVar1 + (uVar10 & 1);
      }
      bVar5 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar5);
    uVar10 = *(uint *)(param_1 + 0x20);
    param_2 = local_68;
  }
  if ((int)uVar9 < (int)uVar10) {
    lVar7 = *(longlong *)(param_1 + 0x18);
    lVar8 = lVar7;
    if (lVar7 == 0) {
      lVar8 = param_1;
    }
    if (*(ulonglong *)(lVar8 + (ulonglong)uVar9 * 0x18) == uVar3) goto LAB_147652300;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_60 = uVar3;
  FUN_140f93936(param_1,&local_60,uVar9);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  lVar7 = *(longlong *)(param_1 + 0x18);
LAB_147652300:
  if (lVar7 != 0) {
    param_1 = lVar7;
  }
  plVar2 = (longlong *)(param_1 + 8 + (ulonglong)uVar9 * 0x18);
  iVar6 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar6 + 1U) {
    FUN_140aec898(plVar2,iVar6);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar6 * 8) = param_2;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147652364 FUN_147652364 body=146 status=ok
// SIG undefined FUN_147652364(void)

void FUN_147652364(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x118,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x118)) {
      uVar5 = uVar4 / 0x118 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x118,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476523f8 FUN_1476523f8 body=146 status=ok
// SIG undefined FUN_1476523f8(void)

void FUN_1476523f8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x110,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x110)) {
      uVar5 = uVar4 / 0x110 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x110,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14765248c FUN_14765248c body=146 status=ok
// SIG undefined FUN_14765248c(void)

void FUN_14765248c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x228,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x228)) {
      uVar5 = uVar4 / 0x228 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x228,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147652520 FUN_147652520 body=150 status=ok
// SIG undefined FUN_147652520(void)

void FUN_147652520(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x338,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x338)) {
      uVar5 = uVar4 / 0x338 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x338,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1476525b8 FUN_1476525b8 body=150 status=ok
// SIG undefined FUN_1476525b8(void)

void FUN_1476525b8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x448,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x448)) {
      uVar5 = uVar4 / 0x448 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x448,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147652650 FUN_147652650 body=132 status=ok
// SIG undefined FUN_147652650(void)

undefined8 * FUN_147652650(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = 8;
  do {
    FUN_147613664((longlong)param_1 + lVar1,(longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x338);
  lVar1 = 0x338;
  do {
    FUN_147613664((longlong)param_1 + lVar1,(longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x668);
  lVar1 = 0x668;
  do {
    FUN_147613664((longlong)param_1 + lVar1,(longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x998);
  return param_1;
}



// FUNCTION 1476526d4 FUN_1476526d4 body=146 status=ok
// SIG undefined FUN_1476526d4(void)

void FUN_1476526d4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x998,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x998)) {
      uVar5 = uVar4 / 0x998 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x998,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147652768 FUN_147652768 body=63 status=ok
// SIG undefined FUN_147652768(void)

void FUN_147652768(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1476527a8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x118,8);
  }
  return;
}



// FUNCTION 1476527a8 FUN_1476527a8 body=115 status=ok
// SIG undefined FUN_1476527a8(void)

ulonglong FUN_1476527a8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x118) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x118,8);
      uVar1 = uVar1 / 0x118;
    }
  }
  return uVar1;
}



// FUNCTION 14765281c FUN_14765281c body=63 status=ok
// SIG undefined FUN_14765281c(void)

void FUN_14765281c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14765285c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x110,8);
  }
  return;
}



// FUNCTION 14765285c FUN_14765285c body=115 status=ok
// SIG undefined FUN_14765285c(void)

ulonglong FUN_14765285c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x110) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x110,8);
      uVar1 = uVar1 / 0x110;
    }
  }
  return uVar1;
}



// FUNCTION 1476528d0 FUN_1476528d0 body=109 status=ok
// SIG undefined FUN_1476528d0(void)

void FUN_1476528d0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x228;
  FUN_1404dbc70(lVar1 + lVar3 + 0x118);
  FUN_1404dbc70(lVar1 + lVar3 + 8);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(lVar1 + lVar3),(void *)(lVar1 + lVar3 + 0x228),
            (longlong)(int)(~param_2 + iVar2) * 0x228);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 14765293e FUN_14765293e body=63 status=ok
// SIG undefined FUN_14765293e(void)

void FUN_14765293e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14765297e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x228,8);
  }
  return;
}



// FUNCTION 14765297e FUN_14765297e body=115 status=ok
// SIG undefined FUN_14765297e(void)

ulonglong FUN_14765297e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x228) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x228,8);
      uVar1 = uVar1 / 0x228;
    }
  }
  return uVar1;
}



// FUNCTION 1476529f2 FUN_1476529f2 body=125 status=ok
// SIG undefined FUN_1476529f2(void)

void FUN_1476529f2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x338;
  FUN_1404dbc70(lVar1 + lVar3 + 0x228);
  FUN_1404dbc70(lVar1 + lVar3 + 0x118);
  FUN_1404dbc70(lVar1 + lVar3 + 8);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(lVar1 + lVar3),(void *)(lVar1 + lVar3 + 0x338),
            (longlong)(int)(~param_2 + iVar2) * 0x338);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147652a70 FUN_147652a70 body=63 status=ok
// SIG undefined FUN_147652a70(void)

void FUN_147652a70(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147652ab0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x338,8);
  }
  return;
}



// FUNCTION 147652ab0 FUN_147652ab0 body=119 status=ok
// SIG undefined FUN_147652ab0(void)

ulonglong FUN_147652ab0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x338) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x338,8);
      uVar1 = uVar1 / 0x338;
    }
  }
  return uVar1;
}



// FUNCTION 147652b28 FUN_147652b28 body=141 status=ok
// SIG undefined FUN_147652b28(void)

void FUN_147652b28(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_2 * 0x448;
  FUN_1404dbc70(lVar1 + lVar3 + 0x338);
  FUN_1404dbc70(lVar1 + lVar3 + 0x228);
  FUN_1404dbc70(lVar1 + lVar3 + 0x118);
  FUN_1404dbc70(lVar1 + lVar3 + 8);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(lVar1 + lVar3),(void *)(lVar1 + lVar3 + 0x448),
            (longlong)(int)(~param_2 + iVar2) * 0x448);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147652bb6 FUN_147652bb6 body=63 status=ok
// SIG undefined FUN_147652bb6(void)

void FUN_147652bb6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147652bf6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x448,8);
  }
  return;
}



// FUNCTION 147652bf6 FUN_147652bf6 body=119 status=ok
// SIG undefined FUN_147652bf6(void)

ulonglong FUN_147652bf6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x448) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x448,8);
      uVar1 = uVar1 / 0x448;
    }
  }
  return uVar1;
}



// FUNCTION 147652c6e FUN_147652c6e body=63 status=ok
// SIG undefined FUN_147652c6e(void)

void FUN_147652c6e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147652cae(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x998,8);
  }
  return;
}



// FUNCTION 147652cae FUN_147652cae body=115 status=ok
// SIG undefined FUN_147652cae(void)

ulonglong FUN_147652cae(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x998) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x998,8);
      uVar1 = uVar1 / 0x998;
    }
  }
  return uVar1;
}



// FUNCTION 147652d22 FUN_147652d22 body=74 status=ok
// SIG undefined FUN_147652d22(void)

undefined8 * FUN_147652d22(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4e90;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147652d6c FUN_147652d6c body=101 status=ok
// SIG undefined FUN_147652d6c(void)

void FUN_147652d6c(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a4c4e90;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0x1c);
  *(char *)((longlong)param_1 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)((longlong)param_1 + 0x14) = uVar2;
  }
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 0x20);
  if (*(int *)(param_2 + 0x24) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x24);
  }
  *(undefined8 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 0x30);
  cVar1 = *(char *)(param_2 + 0x40);
  *(char *)(param_1 + 8) = cVar1;
  if (cVar1 == '\x01') {
    param_1[7] = *(undefined8 *)(param_2 + 0x38);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x48);
  return;
}



// FUNCTION 147652dd2 FUN_147652dd2 body=84 status=ok
// SIG undefined FUN_147652dd2(void)

undefined8 * FUN_147652dd2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4eb0;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147652e26 FUN_147652e26 body=98 status=ok
// SIG undefined FUN_147652e26(void)

void FUN_147652e26(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x68,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c4eb0;
  FUN_147652e88(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  *param_1 = &PTR_FUN_14a4c7860;
  return;
}



// FUNCTION 147652e88 FUN_147652e88 body=106 status=ok
// SIG undefined FUN_147652e88(void)

void FUN_147652e88(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  if (param_2[7] == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 7);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  param_1[10] = param_2[10];
  cVar1 = *(char *)(param_2 + 0xe);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  }
  param_1[0x10] = param_2[0x10];
  cVar1 = *(char *)(param_2 + 0x14);
  *(char *)(param_1 + 0x14) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  }
  return;
}



// FUNCTION 147652ef2 FUN_147652ef2 body=94 status=ok
// SIG undefined FUN_147652ef2(void)

undefined8 * FUN_147652ef2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4ed0;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147652f50 FUN_147652f50 body=146 status=ok
// SIG undefined FUN_147652f50(void)

void FUN_147652f50(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  if (*(int *)(param_3 + 2) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 2);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  param_1[10] = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_4 + 2);
  }
  param_1[0x10] = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x14) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_5 + 2);
  }
  param_1[0x16] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x1a) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_6 + 2);
  }
  return;
}



// FUNCTION 147652fe2 FUN_147652fe2 body=98 status=ok
// SIG undefined FUN_147652fe2(void)

void FUN_147652fe2(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x80,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c4ed0;
  FUN_147653044(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x78);
  *param_1 = &PTR_FUN_14a4c7880;
  return;
}



// FUNCTION 147653044 FUN_147653044 body=131 status=ok
// SIG undefined FUN_147653044(void)

void FUN_147653044(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  if (param_2[7] == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 7);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  param_1[10] = param_2[10];
  cVar1 = *(char *)(param_2 + 0xe);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  }
  param_1[0x10] = param_2[0x10];
  cVar1 = *(char *)(param_2 + 0x14);
  *(char *)(param_1 + 0x14) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  }
  param_1[0x16] = param_2[0x16];
  cVar1 = *(char *)(param_2 + 0x1a);
  *(char *)(param_1 + 0x1a) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  return;
}


