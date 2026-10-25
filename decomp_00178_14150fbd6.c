// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14150fbd6 FUN_14150fbd6 body=184 status=ok
// SIG undefined FUN_14150fbd6(void)

void FUN_14150fbd6(ulonglong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined *puVar5;
  
  if (DAT_14cad4a10 != DAT_14cad4a3c) {
    uVar2 = *param_1;
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar5 = &DAT_14cad4a40;
    if (DAT_14cad4a48 != (undefined *)0x0) {
      puVar5 = DAT_14cad4a48;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)(DAT_14cad4a50 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    while (iVar1 != -1) {
      puVar4 = (ulonglong *)(DAT_14cad4a08 + (longlong)iVar1 * 0x18);
      if (*puVar4 == uVar2) goto LAB_14150fc60;
      iVar1 = (int)puVar4[2];
    }
  }
  puVar4 = (ulonglong *)0x0;
LAB_14150fc60:
  puVar4 = puVar4 + 1;
  *(int *)puVar4 = (int)*puVar4 + -1;
  if ((int)*puVar4 == 0) {
    FUN_1447f69b6(*param_1 + 0x80);
    FUN_145c0f66e(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014150fc71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad4a58);
  return;
}



// FUNCTION 14150fc8e FUN_14150fc8e body=226 status=ok
// SIG undefined FUN_14150fc8e(void)

longlong * FUN_14150fc8e(longlong *param_1)

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
  pcVar13 = FUN_14630b4de;
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



// FUNCTION 14150fd72 FUN_14150fd72 body=419 status=ok
// SIG undefined FUN_14150fd72(void)

void FUN_14150fd72(longlong *param_1)

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



// FUNCTION 14150ff16 FUN_14150ff16 body=99 status=ok
// SIG undefined FUN_14150ff16(void)

undefined8 * FUN_14150ff16(undefined8 *param_1)

{
  FUN_14061ea1a();
  *param_1 = &PTR_FUN_14a5bcf40;
  param_1[5] = &PTR_FUN_14a5bd330;
  param_1[6] = &PTR_FUN_14a5bd370;
  param_1[7] = &PTR_FUN_14a5bd3a0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  return param_1;
}



// FUNCTION 14150ff7a FUN_14150ff7a body=70 status=ok
// SIG undefined FUN_14150ff7a(void)

void FUN_14150ff7a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abc6820;
  param_1[5] = &PTR_FUN_14abc6b30;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14150ffc0 FUN_14150ffc0 body=70 status=ok
// SIG undefined FUN_14150ffc0(void)

void FUN_14150ffc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abc6d70;
  param_1[5] = &PTR_FUN_14abc7070;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141510006 FUN_141510006 body=180 status=ok
// SIG undefined FUN_141510006(void)

void FUN_141510006(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae561e0;
  param_1[5] = &PTR_FUN_14ae566c0;
  param_1[0x2d] = &PTR_FUN_14ae56700;
  FUN_14122e0b2(param_1 + 0x7b);
  *(undefined4 *)(param_1 + 0x7a) = 0;
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  FUN_145c0d55c(param_1 + 0x71);
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  FUN_14117c118(param_1);
  return;
}



// FUNCTION 1415100ba FUN_1415100ba body=332 status=ok
// SIG undefined FUN_1415100ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1415100ba(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_14485cccc(param_1 + 0xb8);
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x62) & 4) != 0)) {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar4 = (longlong *)FUN_144718840(lVar3,DAT_14cb56270);
    if (plVar4 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar4 + 0x38))(plVar4);
      if (cVar1 == '\0') {
        bVar2 = 0;
        goto LAB_141510141;
      }
    }
  }
  bVar2 = 1;
  if (*(double *)(param_1 + 0x50) < (double)_DAT_14c763a28) {
    bVar2 = (double)_DAT_14c763a2c < *(double *)(param_1 + 0x50) | 2;
  }
LAB_141510141:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141510208 FUN_141510208 body=215 status=ok
// SIG undefined FUN_141510208(void)

void FUN_141510208(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  
  if (*(char *)(param_1 + 0x188) == '\0') {
    *(undefined1 *)(param_1 + 0x188) = 1;
    FUN_145c7a522(param_1 + 0x1a0,*(longlong *)(param_1 + 0x30) + 0x88);
  }
  if (0 < *(int *)(param_1 + 0x1a8)) {
    plVar1 = (longlong *)(param_1 + 0x1a0);
    uVar7 = 0;
    do {
      lVar2 = *plVar1;
      iVar6 = (int)uVar7;
      plVar3 = *(longlong **)(lVar2 + uVar7 * 0x18);
      if (plVar3 == (longlong *)0x0) {
LAB_1415102bb:
        FUN_145c7a698(plVar1,uVar7);
        FUN_145c7a496(plVar1);
        iVar6 = iVar6 + -1;
      }
      else {
        uVar5 = FUN_14479d2ce(param_1 + 8);
        cVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,uVar5);
        if (cVar4 != '\0') {
          uVar5 = FUN_145c7a4d4(param_1 + 400);
          FUN_14029d0b6(uVar5,uVar7 * 0x18 + lVar2);
          goto LAB_1415102bb;
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1U);
    } while ((int)(iVar6 + 1U) < *(int *)(param_1 + 0x1a8));
  }
  return;
}



// FUNCTION 1415102e0 FUN_1415102e0 body=487 status=ok
// SIG undefined FUN_1415102e0(void)

/* WARNING: Removing unreachable block (ram,0x00014151040c) */
/* WARNING: Removing unreachable block (ram,0x00014151037d) */
/* WARNING: Removing unreachable block (ram,0x000141510496) */

void FUN_1415102e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1410f2562(&local_38);
  puVar5 = local_38;
  if (local_30 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_28,L"%sPaks/",puVar5);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined8 *)(lVar2 + lVar4) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar4) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)FUN_14047ac8c();
  if (*(int *)(puVar3 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*puVar3;
  }
  FUN_140002266(&local_28,L"%sPaks/",puVar5);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined8 *)(lVar2 + lVar4) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar4) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  FUN_1414927bc(&local_38);
  puVar5 = local_38;
  if (local_30 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_28,L"%sPaks/",puVar5);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined8 *)(lVar2 + lVar4) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar4) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415104c8 FUN_1415104c8 body=86 status=ok
// SIG undefined FUN_1415104c8(void)

void FUN_1415104c8(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x44) < 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      FUN_148937e48(param_1 + 0x38,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    cVar2 = FUN_145c7b170(param_1,param_2);
    if ((cVar2 != '\0') || (iVar1 != 0)) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
  }
  return;
}



// FUNCTION 14151051e FUN_14151051e body=239 status=ok
// SIG undefined FUN_14151051e(void)

void FUN_14151051e(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(param_2 + 0x38);
  do {
    *param_1 = 0;
    iVar1 = (int)plVar4[-6];
    pvVar2 = (void *)plVar4[-7];
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
    }
    param_1[2] = 0;
    iVar1 = (int)plVar4[-4];
    pvVar2 = (void *)plVar4[-5];
    *(int *)(param_1 + 3) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 2,iVar1,0);
      memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
    }
    *(int *)(param_1 + 5) = (int)plVar4[-2];
    param_1[4] = plVar4[-3];
    param_1[6] = plVar4[-1];
    lVar3 = *plVar4;
    param_1[7] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    param_1 = param_1 + 8;
    plVar4 = plVar4 + 8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14151060e FUN_14151060e body=71 status=ok
// SIG undefined FUN_14151060e(void)

void FUN_14151060e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b57e360;
  plVar3 = (longlong *)param_1[10];
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
  FUN_145c85ad8(param_1);
  return;
}



// FUNCTION 141510656 FUN_141510656 body=189 status=ok
// SIG undefined FUN_141510656(void)

void FUN_141510656(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar2 != (longlong *)0x0) {
    if (param_1[0x24] != 0) {
      lVar3 = FUN_14061d010();
      if (lVar3 != 0) {
        FUN_145893eaa(lVar3,plVar2);
      }
    }
    lVar3 = FUN_1412308c8();
    iVar1 = *(int *)(lVar3 + 0x38);
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) == lVar3 + 0x30)) {
      (**(code **)(*plVar2 + 0x6e8))
                (plVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),(char)param_1[0x25]));
      FUN_1400bc8c2(plVar2 + 0x2e7,&DAT_14cbc1c88);
      *(char *)(plVar2 + 0x2ec) = (char)plVar2[0x2e7];
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x129) = 6;
  param_1[0x24] = 0;
  FUN_1447cd2ec(param_1 + 0x1c,0);
  return;
}



// FUNCTION 141510714 FUN_141510714 body=1261 status=ok
// SIG undefined FUN_141510714(void)

void FUN_141510714(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0x20);
  puVar5 = *(undefined8 **)(param_1 + 0x28);
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
  }
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar6 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_14151075f;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_141510764;
      goto LAB_1415107d2;
    }
  }
  else {
LAB_14151075f:
    if (iVar8 != 0x10) {
LAB_1415107d2:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar6 + 0xc60), iVar8 == 2))
        goto LAB_141510764;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_141510764;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_141510932;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143bf63d9);
          }
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar6 + 0x310);
          *(undefined8 *)(lVar6 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_141510932:
          puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x17);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_1415109b2;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_1415109b2:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14afab508;
        puVar18[0x15] = lVar4;
        puVar18[0x16] = puVar5;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar7 = 1;
          if ((char)uVar17 != '\x06') {
            uVar7 = uVar17;
          }
          uVar17 = uVar7;
          uVar13 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar18[0xf] = uVar13;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar8;
        if (puVar18 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14afab4b0;
        local_68[0] = &LAB_143bf68b4;
        local_40 = lVar4;
        local_38 = puVar5;
        FUN_14005a792(&DAT_14ca9a440,L"DisableWindInViewExtension",&DAT_14cb51000);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar15 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar15 = &local_48;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_141510871;
    }
  }
LAB_141510764:
  *(undefined8 *)(lVar4 + 0xd0) = 0;
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
      }
    }
  }
LAB_141510871:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141510c16 FUN_141510c16 body=436 status=ok
// SIG undefined FUN_141510c16(void)

void FUN_141510c16(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar5 = local_58;
  iVar14 = (int)local_60;
  uVar12 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < (int)local_58[3]) {
    do {
      FUN_140a31b96((longlong)iVar7 * 0x100 + *param_1 + 8);
      uVar12 = ~(uint)uVar13 & uVar12;
      plVar8 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar8 = plVar5;
      }
      iVar3 = (int)plVar5[3];
      lVar11 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar4 = iVar7;
        if (iVar7 < iVar14) {
          iVar4 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar4 - lVar11 == lVar9) goto LAB_141510d51;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_141510d51:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1458130c8(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141510dcc FUN_141510dcc body=438 status=ok
// SIG undefined FUN_141510dcc(void)

void FUN_141510dcc(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar14 = (int)local_60;
  uVar11 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar7 * 0x30) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
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
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_141510f0b;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_141510f0b:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141510f84 FUN_141510f84 body=439 status=ok
// SIG undefined FUN_141510f84(void)

void FUN_141510f84(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar5 = local_58;
  iVar14 = (int)local_60;
  uVar12 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < (int)local_58[3]) {
    do {
      FUN_140a3194c((longlong)iVar7 * 0x170 + *param_1 + 8);
      uVar12 = ~(uint)uVar13 & uVar12;
      plVar8 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar8 = plVar5;
      }
      iVar3 = (int)plVar5[3];
      lVar11 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar4 = iVar7;
        if (iVar7 < iVar14) {
          iVar4 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar4 - lVar11 == lVar9) goto LAB_1415110c2;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_1415110c2:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_145c7d096(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14151113c FUN_14151113c body=503 status=ok
// SIG undefined FUN_14151113c(void)

void FUN_14151113c(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar9 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar8 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x40;
      FUN_140a318c3(*(undefined8 *)(lVar11 + 0x28 + lVar10),*(undefined4 *)(lVar11 + 0x30 + lVar10))
      ;
      if (*(longlong *)(lVar11 + 0x28 + lVar10) != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + lVar11;
      FUN_140a31900(*(undefined8 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 0x20));
      if (*(longlong *)(lVar10 + 0x18) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar10 + 8) != 0) {
        FUN_1400020a8();
      }
      uVar9 = uVar9 & ~(uint)uVar12;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar9;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar10 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar3 - lVar11 == lVar10) goto LAB_1415112b6;
        }
        iVar13 = iVar13 + (int)lVar10 + 1;
        uVar9 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1415112b6:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141511334 FUN_141511334 body=116 status=ok
// SIG undefined FUN_141511334(void)

void FUN_141511334(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_1414e62ca();
  if (cVar1 != '\0') {
    if (1 < *(int *)(param_2 + 8)) {
      local_38 = param_2;
      local_30 = param_3;
      FUN_140ac5c08(param_1 + 0x80,local_24,&local_38,0);
    }
    FUN_143f3905a(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415113aa FUN_1415113aa body=2679 status=ok
// SIG undefined FUN_1415113aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415113aa(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined ***_Src_00;
  undefined1 auStack_158 [32];
  undefined ***local_138;
  undefined8 local_130;
  undefined8 local_128;
  code *local_120;
  undefined **local_110;
  undefined8 *local_108;
  undefined1 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined **local_c0;
  undefined8 *local_b8;
  char local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_128 = FUN_1446ddbd2();
      local_120 = FUN_1468d96f0;
      local_130 = 0;
      local_138 = (undefined ***)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_1415114a6;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_130 = CONCAT44(local_130._4_4_,(int)plVar1[6]);
        local_138 = (undefined ***)((ulonglong)local_138 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_1415114a6:
  local_68[0] = 0;
  local_64 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_128 = FUN_1446ddbd2();
      local_120 = FUN_1403a682c;
      local_130 = 0;
      local_138 = (undefined ***)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_68);
            goto LAB_141511597;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != local_68) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_68,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(local_68,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_130 = CONCAT44(local_130._4_4_,(int)plVar1[6]);
        local_138 = (undefined ***)((ulonglong)local_138 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,local_68,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_68,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
LAB_141511597:
  local_70 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_128 = FUN_1446ddbd2();
      local_120 = FUN_1409e12a0;
      local_130 = 0;
      local_138 = (undefined ***)0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_70);
            goto LAB_14151166d;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_70) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_70,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_70,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_130 = CONCAT44(local_130._4_4_,(int)plVar1[6]);
        local_138 = (undefined ***)((ulonglong)local_138 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_70,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_70,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
LAB_14151166d:
  local_b8 = (undefined8 *)0x0;
  local_b0 = '\0';
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_c0 = &PTR_FUN_14acb7da0;
  local_80 = 0;
  local_78 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_128 = FUN_1446ddbd2();
      local_120 = FUN_1403a682c;
      local_130 = 0;
      local_138 = (undefined ***)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_c0);
            goto LAB_141511781;
          }
        }
        _Src_00 = (undefined ***)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_c0) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_c0,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_c0,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_130 = CONCAT44(local_130._4_4_,(int)plVar1[6]);
        local_138 = (undefined ***)((ulonglong)local_138 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_c0,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_c0,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
LAB_141511781:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108 = (undefined8 *)0x0;
  local_100 = 0;
  if (local_b0 == '\0') {
    local_108 = local_b8;
  }
  local_138 = &local_110;
  local_d8 = local_88;
  local_e8 = (undefined4)local_98;
  uStack_e4 = local_98._4_4_;
  uStack_e0 = (undefined4)uStack_90;
  uStack_dc = uStack_90._4_4_;
  local_f8 = (undefined4)local_a8;
  uStack_f4 = local_a8._4_4_;
  uStack_f0 = (undefined4)uStack_a0;
  uStack_ec = uStack_a0._4_4_;
  local_110 = &PTR_FUN_14acb7da0;
  local_d0 = local_80;
  local_c8 = local_78;
  (**(code **)(*param_1 + 0x758))(param_1,local_38,local_68,local_70);
  puVar6 = local_b8;
  local_c0 = &PTR_FUN_14a171dc0;
  if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
    if (local_b8[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar6 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar6;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if ((lStack_40 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lStack_40 + 0x50));
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141511e22 FUN_141511e22 body=182 status=ok
// SIG undefined FUN_141511e22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141511e22(void)

{
  longlong *plVar1;
  undefined8 *in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = in_stack_00000028;
  FUN_140b32deb(&local_30);
  local_30 = 0;
  local_28 = 0xffffffffffffffff;
  *in_stack_00000028 = &PTR_FUN_14a171dc0;
  if ((*(char *)(in_stack_00000028 + 2) != '\0') &&
     (plVar1 = (longlong *)in_stack_00000028[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141511eda FUN_141511eda body=30 status=ok
// SIG undefined FUN_141511eda(void)

void FUN_141511eda(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  param_1[1] = -1;
  if (plVar1 != (longlong *)0x0) {
    param_1[1] = *plVar1;
  }
  return;
}



// FUNCTION 141511ef8 FUN_141511ef8 body=269 status=ok
// SIG undefined FUN_141511ef8(void)

void FUN_141511ef8(longlong param_1,int param_2)

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



// FUNCTION 141512006 FUN_141512006 body=591 status=ok
// SIG undefined FUN_141512006(void)

void FUN_141512006(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_1 + 0x288;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_88 = param_3;
  local_80 = param_2;
  local_60 = local_70;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    uVar8 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar7 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = local_68 >> 0x20;
    iVar7 = *(int *)(param_1 + 0x2a0);
  }
  lVar4 = local_60;
  plVar5 = local_88;
  lVar15 = local_80;
  iVar13 = (int)local_68;
  uVar16 = (uint)local_58;
  iVar12 = local_58._4_4_;
  iVar14 = local_50;
  lVar9 = param_1;
  if (local_58._4_4_ != iVar7 || local_60 != local_70) {
    do {
      local_78 = lVar9;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x10 + (longlong)iVar12 * 0x20);
      if (lVar9 != 0) {
        for (lVar9 = *(longlong *)(lVar9 + 0x58); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x28)) {
          if (*(longlong *)(lVar9 + 8) == lVar15) {
            iVar12 = (int)plVar5[1];
            *(uint *)(plVar5 + 1) = iVar12 + 1U;
            if (*(uint *)((longlong)plVar5 + 0xc) < iVar12 + 1U) {
              FUN_145c7ee18(plVar5,iVar12);
              plVar5 = local_88;
              param_1 = local_78;
            }
            *(longlong *)(*plVar5 + (longlong)iVar12 * 8) = lVar9;
            lVar15 = local_80;
            break;
          }
        }
      }
      uVar16 = uVar16 & ~(uint)uVar8;
      lVar9 = *(longlong *)(lVar4 + 0x10);
      if (*(longlong *)(lVar4 + 0x10) == 0) {
        lVar9 = lVar4;
      }
      iVar2 = *(int *)(lVar4 + 0x18);
      lVar10 = (longlong)iVar13;
      uVar6 = *(uint *)(lVar9 + lVar10 * 4) & uVar16;
      if (uVar6 == 0) {
        iVar12 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar12 = iVar2 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar3 = iVar12;
        if (iVar12 < iVar13) {
          iVar3 = iVar13;
        }
        param_1 = local_78;
        if (iVar13 < iVar12) {
          lVar11 = 0;
          do {
            uVar6 = *(uint *)(lVar9 + lVar10 * 4 + 4 + lVar11 * 4);
            if (uVar6 != 0) {
              iVar13 = iVar13 + (int)lVar11 + 1;
              uVar16 = 0xffffffff;
              goto LAB_141512188;
            }
            iVar14 = iVar14 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar3 - lVar10 != lVar11);
          uVar16 = 0xffffffff;
          iVar13 = iVar3;
        }
        iVar13 = iVar13 + 1;
        plVar5 = local_88;
        lVar15 = local_80;
        iVar12 = iVar2;
      }
      else {
LAB_141512188:
        uVar8 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar8 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar12 = (iVar14 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar12) {
          iVar12 = iVar2;
        }
      }
      lVar9 = local_78;
    } while (iVar12 != iVar7 || lVar4 != local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141512256 FUN_141512256 body=227 status=ok
// SIG undefined FUN_141512256(void)

void FUN_141512256(longlong *param_1)

{
  uint *_Dst;
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar4 = 0;
    bVar3 = false;
    do {
      while( true ) {
        _Dst = (uint *)(*param_1 + lVar4 * 8);
        if ((((_Dst[1] != 0) && (uVar1 = *_Dst, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
           && (((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0
                && (*(uint *)(lVar6 + 0x10) == _Dst[1])) &&
               ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) break;
        iVar5 = iVar2 + ~(uint)lVar4;
        if (iVar5 != 0) {
          if (0 < iVar5) {
            iVar5 = 1;
          }
          memmove(_Dst,(void *)(*param_1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 1) = iVar2;
        bVar3 = true;
        if (iVar2 <= lVar4) goto LAB_141512327;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
    if (bVar3) {
LAB_141512327:
      FUN_14586797c(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14151233a FUN_14151233a body=315 status=ok
// SIG undefined FUN_14151233a(void)

longlong FUN_14151233a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464cee30;
      local_38 = &LAB_148bfac22;
      local_40 = &LAB_140f21842;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) goto LAB_141512398;
    lVar1 = FUN_1402095ca();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
  }
  param_2 = 0;
LAB_141512398:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141512486 FUN_141512486 body=1070 status=ok
// SIG undefined FUN_141512486(void)

void FUN_141512486(longlong param_1,undefined8 param_2,undefined4 param_3,double *param_4,
                  undefined1 param_5,char param_6,undefined4 param_7,undefined1 param_8)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  longlong *plVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 unaff_RBP;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  code *local_d0;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  double local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *plStack_98;
  double dStack_90;
  undefined8 local_88;
  undefined4 local_80 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_1 == 0) goto LAB_141512500;
  if (DAT_14cba8288 == 0) {
    local_e0 = &local_a8;
    local_a8 = FUN_141864c34;
    local_d0 = FUN_14081d0ea;
    local_d8 = &LAB_1464cee30;
    local_e8 = &LAB_148bfac22;
    local_f0 = &LAB_140f21842;
    local_f8 = &DAT_149e063b2;
    local_100 = 0;
    local_108 = 0x10000004;
    local_110 = 0x10;
    local_118 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38))
  goto LAB_141512500;
  dVar9 = (double)(DAT_14cba8288 + 0x30);
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30);
  if (*(double *)(lVar12 + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != dVar9)
  goto LAB_141512500;
  lVar2 = *(longlong *)(param_1 + 0x1c8);
  if (lVar2 == 0) {
    uVar13 = SUB84(DAT_14c846500,0);
    uVar15 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
    uVar14 = (undefined4)DAT_14c8464e0;
    uVar16 = DAT_14c8464e0._4_4_;
    uVar18 = (undefined4)DAT_14c8464e8;
    uVar19 = DAT_14c8464e8._4_4_;
  }
  else {
    uVar14 = *(undefined4 *)(lVar2 + 0x260);
    uVar16 = *(undefined4 *)(lVar2 + 0x264);
    uVar18 = *(undefined4 *)(lVar2 + 0x268);
    uVar19 = *(undefined4 *)(lVar2 + 0x26c);
    pcVar5 = *(code **)(lVar2 + 0x240);
    dVar17 = *(double *)(lVar2 + 0x248);
    plVar6 = *(longlong **)(lVar2 + 0x250);
    dVar7 = *(double *)(lVar2 + 600);
    pdVar10 = *(double **)(lVar2 + 0x228);
    local_a8 = pcVar5;
    uStack_a0 = dVar17;
    plStack_98 = plVar6;
    dStack_90 = dVar7;
    if (pdVar10 == (double *)0x0) {
      lVar12 = 0x40;
      pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
      dVar9 = DAT_14c8463d8;
      *pdVar10 = DAT_14c8463d0;
      pdVar10[1] = dVar9;
      dVar9 = DAT_14c8463e8;
      pdVar10[2] = DAT_14c8463e0;
      pdVar10[3] = dVar9;
      dVar9 = DAT_14c846500;
      pdVar10[4] = DAT_14c8464f8;
      pdVar10[5] = dVar9;
      dVar9 = DAT_14c846508;
      pdVar10[6] = DAT_14c846508;
      *(double **)(lVar2 + 0x228) = pdVar10;
    }
    auVar3._8_4_ = (int)-(ulonglong)(dVar17 != pdVar10[1]);
    auVar3._0_8_ = -(ulonglong)((double)pcVar5 != *pdVar10);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar17 != pdVar10[1]) >> 0x20);
    iVar8 = movmskpd(SUB84(dVar9,0),auVar3);
    auVar4._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
    auVar4._0_8_ = -(ulonglong)((double)plVar6 != pdVar10[2]);
    auVar4._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
    uVar11 = movmskpd((int)lVar12,auVar4);
    if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
      pdVar10[2] = (double)plStack_98;
      pdVar10[3] = dStack_90;
      *(undefined4 *)pdVar10 = (undefined4)local_a8;
      *(undefined4 *)((longlong)pdVar10 + 4) = local_a8._4_4_;
      *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_a0._4_4_;
      FUN_1448052ee(&local_a8,&local_c0);
      pdVar10[6] = local_b0;
      pdVar10[4] = (double)CONCAT44(uStack_bc,local_c0);
      pdVar10[5] = (double)CONCAT44(uStack_b4,uStack_b8);
    }
    uVar13 = SUB84(pdVar10[5],0);
    uVar15 = (undefined4)((ulonglong)pdVar10[5] >> 0x20);
  }
  if (param_6 == '\0') {
    dVar17 = (double)CONCAT44(uVar19,uVar18) - param_4[1];
    dVar9 = (double)CONCAT44(uVar16,uVar14) - *param_4;
    if (((dVar17 == 0.0) && (!NAN(dVar17))) && (dVar9 == 0.0)) goto joined_r0x000141512686;
LAB_141512690:
    dVar9 = atan2(dVar17,dVar9);
    uVar14 = SUB84(dVar9,0);
    uVar16 = (undefined4)((ulonglong)dVar9 >> 0x20);
  }
  else {
    dVar9 = *param_4 - (double)CONCAT44(uVar16,uVar14);
    dVar17 = param_4[1] - (double)CONCAT44(uVar19,uVar18);
    if (((dVar17 != 0.0) || (NAN(dVar17))) || (dVar9 != 0.0)) goto LAB_141512690;
joined_r0x000141512686:
    uVar16 = 0;
    uVar14 = 0;
    if (NAN(dVar9)) goto LAB_141512690;
  }
  dVar9 = (double)FUN_144719204(SUB84((double)((float)((double)CONCAT44(uVar16,uVar14) *
                                                      57.29577951308232) -
                                              (float)(double)CONCAT44(uVar15,uVar13)),0));
  dVar9 = (double)(~-(ulonglong)(dVar9 < 0.0) & (ulonglong)dVar9 |
                  (ulonglong)(dVar9 + 360.0) & -(ulonglong)(dVar9 < 0.0));
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffffffffff00);
  local_80[0] = 0;
  FUN_1456bb102(&local_a8,param_1);
  FUN_140a8b8c6(param_2,&local_a8);
  local_110 = CONCAT31(local_110._1_3_,param_8);
  local_118 = param_7;
  FUN_1418e8158(&local_c0,param_1);
  FUN_1448173f8(local_80);
  if (((char)local_a8 == '\x03') && (plStack_98 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_98 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_98 + 0x10))();
    }
  }
  local_a8 = (code *)CONCAT44(local_a8._4_4_,
                              (float)(double)(~-(ulonglong)(180.0 < dVar9) & (ulonglong)dVar9 |
                                             (ulonglong)(dVar9 + -360.0) &
                                             -(ulonglong)(180.0 < dVar9)));
  dStack_90 = local_b0;
  local_88 = 0;
  FUN_140e26dfa(param_1 + 0x7c78,param_3,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
LAB_141512500:
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415128b6 FUN_1415128b6 body=249 status=ok
// SIG undefined FUN_1415128b6(void)

longlong * FUN_1415128b6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1458e2d20(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          *(longlong *)(lVar4 + lVar7) = lVar3;
          if ((lVar3 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(undefined4 *)(lVar4 + 8 + lVar7) = *(undefined4 *)(lVar2 + 8 + lVar7);
          *(undefined8 *)(lVar4 + 0x10 + lVar7) = *(undefined8 *)(lVar2 + 0x10 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 1415129b0 FUN_1415129b0 body=1360 status=ok
// SIG undefined FUN_1415129b0(void)

longlong FUN_1415129b0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  code *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0x400000000;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0xa00000000;
  *(undefined4 *)(param_1 + 0x250) = 0x3f19999a;
  *(undefined8 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 0x25c) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x27c) = 0x3ff00000;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0x3ff00000;
  *(undefined8 *)(param_1 + 0x2b0) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  lVar4 = FUN_1449e3f1e();
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x2e0) != 0)) {
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(*(longlong *)(lVar4 + 0x2e0) + 0x88);
  }
  iVar6 = 4;
  do {
    lVar4 = FUN_1449e3f1e();
    uVar7 = 0x41200000;
    uVar8 = 0x3f666666;
    uVar9 = 0x3f666666;
    uVar10 = 0x3f666666;
    uVar11 = 0x3f666666;
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x2e0);
      uVar7 = 0x41200000;
      uVar8 = 0x3f666666;
      uVar9 = 0x3f666666;
      uVar10 = 0x3f666666;
      uVar11 = 0x3f666666;
      if (lVar4 != 0) {
        uVar7 = *(undefined4 *)(lVar4 + 0x8c);
        uVar8 = *(undefined4 *)(lVar4 + 0x140);
        uVar9 = *(undefined4 *)(lVar4 + 0x144);
        uVar10 = *(undefined4 *)(lVar4 + 0x148);
        uVar11 = *(undefined4 *)(lVar4 + 0x14c);
      }
    }
    iVar2 = *(int *)(param_1 + 0xa8);
    lVar4 = (longlong)iVar2;
    *(uint *)(param_1 + 0xa8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xac) < iVar2 + 1U) {
      FUN_1487e0794(param_1,iVar2);
    }
    lVar5 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar5 = param_1;
    }
    puVar1 = (undefined8 *)(lVar5 + lVar4 * 0x28);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x28) = 0;
    *(undefined4 *)(lVar5 + 0x14 + lVar4 * 0x28) = uVar7;
    *(undefined4 *)(lVar5 + 0x18 + lVar4 * 0x28) = uVar8;
    *(undefined4 *)(lVar5 + 0x1c + lVar4 * 0x28) = uVar9;
    *(undefined4 *)(lVar5 + 0x20 + lVar4 * 0x28) = uVar10;
    *(undefined4 *)(lVar5 + 0x24 + lVar4 * 0x28) = uVar11;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = 10;
  do {
    if (DAT_14cb253f8 == (longlong *)0x0) {
      local_d0 = &local_b8;
      local_b8 = FUN_1449e2820;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_14081d0ea;
      local_d8 = &LAB_147f6f09d;
      local_e0 = &LAB_146201c25;
      local_e8 = L"Game";
      local_f0 = 0;
      local_f8 = 0x10000006;
      local_100 = 8;
      local_108 = 0x480;
      FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
    }
    plVar3 = DAT_14cb253f8;
    if (DAT_14cb253f8[0x22] == 0) {
      (**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8);
      uVar11 = 0x3f666666;
      uVar10 = 0x3f666666;
      uVar9 = 0x3f666666;
      uVar8 = 0x3f666666;
      uVar7 = 0x41200000;
      if (plVar3[0x22] != 0) goto LAB_141512be6;
    }
    else {
LAB_141512be6:
      lVar4 = DAT_14cb25be0;
      uVar11 = 0x3f666666;
      uVar10 = 0x3f666666;
      uVar9 = 0x3f666666;
      uVar8 = 0x3f666666;
      uVar7 = 0x41200000;
      if (DAT_14cb25be0 != 0) {
        if (DAT_14cb5e220 == 0) {
          local_d0 = &local_b8;
          local_b8 = FUN_1449e2820;
          local_c0 = FUN_14081d0ea;
          local_c8 = (code *)&LAB_1459ebe90;
          local_d8 = &LAB_1486a1487;
          local_e0 = &LAB_1464e0171;
          local_e8 = L"Engine";
          local_f0 = 0;
          local_f8 = 0x10000000;
          local_100 = 8;
          local_108 = 0x440;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameAudioGlobals",&DAT_14cb5e220,&DAT_1486a1486);
        }
        lVar5 = *(longlong *)(lVar4 + 0x10);
        uVar11 = 0x3f666666;
        uVar10 = 0x3f666666;
        uVar9 = 0x3f666666;
        uVar8 = 0x3f666666;
        uVar7 = 0x41200000;
        if (*(int *)(DAT_14cb5e220 + 0x38) <= *(int *)(lVar5 + 0x38)) {
          uVar11 = 0x3f666666;
          uVar10 = 0x3f666666;
          uVar9 = 0x3f666666;
          uVar8 = 0x3f666666;
          uVar7 = 0x41200000;
          if (*(longlong *)
               (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cb5e220 + 0x38) * 8) ==
              DAT_14cb5e220 + 0x30) {
            lVar4 = *(longlong *)(lVar4 + 0x2e0);
            uVar11 = 0x3f666666;
            uVar10 = 0x3f666666;
            uVar9 = 0x3f666666;
            uVar8 = 0x3f666666;
            uVar7 = 0x41200000;
            if (lVar4 != 0) {
              uVar7 = *(undefined4 *)(lVar4 + 0x8c);
              uVar8 = *(undefined4 *)(lVar4 + 0x140);
              uVar9 = *(undefined4 *)(lVar4 + 0x144);
              uVar10 = *(undefined4 *)(lVar4 + 0x148);
              uVar11 = *(undefined4 *)(lVar4 + 0x14c);
            }
          }
        }
      }
    }
    iVar2 = *(int *)(param_1 + 0x248);
    lVar4 = (longlong)iVar2;
    *(uint *)(param_1 + 0x248) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x24c) < iVar2 + 1U) {
      FUN_1487e08b4(param_1 + 0xb0,iVar2);
    }
    lVar5 = *(longlong *)(param_1 + 0x240);
    if (*(longlong *)(param_1 + 0x240) == 0) {
      lVar5 = param_1 + 0xb0;
    }
    puVar1 = (undefined8 *)(lVar5 + lVar4 * 0x28);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x28) = 0;
    *(undefined4 *)(lVar5 + 0x14 + lVar4 * 0x28) = uVar7;
    *(undefined4 *)(lVar5 + 0x18 + lVar4 * 0x28) = uVar8;
    *(undefined4 *)(lVar5 + 0x1c + lVar4 * 0x28) = uVar9;
    *(undefined4 *)(lVar5 + 0x20 + lVar4 * 0x28) = uVar10;
    *(undefined4 *)(lVar5 + 0x24 + lVar4 * 0x28) = uVar11;
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) {
      if ((local_b0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  } while( true );
}



// FUNCTION 141512f02 FUN_141512f02 body=1427 status=ok
// SIG undefined FUN_141512f02(void)

void FUN_141512f02(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined8 local_360;
  longlong local_358;
  undefined8 uStack_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_358 = 0;
  uStack_350 = 0;
  uVar3 = FUN_140a1dfd8();
  local_368 = 0;
  FUN_14123d74c(uVar3,&local_358,1,0x10);
  lVar1 = local_358;
  iVar13 = (int)uStack_350;
  lVar8 = (longlong)(int)uStack_350;
  if (1 < lVar8) {
    memset(local_338,0,0x2f0);
    local_348 = lVar1;
    local_340 = lVar1 + lVar8 * 8 + -8;
    fVar22 = logf((float)iVar13);
    local_338[0] = (int)(longlong)(fVar22 + fVar22);
    plVar4 = &local_348;
    do {
      plVar10 = (longlong *)*plVar4;
      plVar19 = (longlong *)plVar4[1];
      iVar13 = (int)plVar4[2];
      iVar15 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar10) >> 3);
      uVar5 = iVar15 + 1;
      plVar11 = plVar10;
      if (iVar13 != 0) {
LAB_141513036:
        if (8 < (int)uVar5) {
          lVar1 = plVar11[uVar5 >> 1];
          plVar11[uVar5 >> 1] = *plVar11;
          *plVar11 = lVar1;
          plVar6 = plVar19 + 1;
          plVar10 = plVar11;
LAB_141513056:
          plVar10 = plVar10 + 1;
          if (plVar10 <= plVar19) goto code_r0x00014151305f;
          goto LAB_1415130ad;
        }
        for (; plVar6 = plVar11, plVar10 = plVar11, plVar11 < plVar19; plVar19 = plVar19 + -1) {
          while (plVar10 = plVar10 + 1, plVar10 <= plVar19) {
            plVar16 = &DAT_14caea080;
            uVar17 = 0;
            do {
              lVar1 = *plVar16;
              if (5 < uVar17) break;
              uVar17 = uVar17 + 1;
              plVar16 = plVar16 + 1;
            } while (lVar1 != *plVar6);
            plVar16 = &DAT_14caea080;
            uVar17 = 0;
            do {
              lVar8 = *plVar16;
              if (5 < uVar17) break;
              uVar17 = uVar17 + 1;
              plVar16 = plVar16 + 1;
            } while (lVar8 != *plVar10);
            plVar16 = plVar10;
            if (lVar8 == *plVar10) {
              plVar16 = plVar6;
            }
            if (lVar1 == *plVar6) {
              plVar6 = plVar16;
            }
          }
          lVar1 = *plVar6;
          *plVar6 = *plVar19;
          *plVar19 = lVar1;
        }
        goto LAB_14151314f;
      }
LAB_14151324f:
      if (uVar5 != 0) {
        iVar13 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
        iVar15 = iVar13;
joined_r0x000141513280:
        do {
          iVar14 = iVar13 * 2 + 1;
          if (iVar14 < (int)uVar5) {
            iVar7 = iVar13 * 2 + 2;
            if (iVar7 < (int)uVar5) {
              plVar19 = &DAT_14caea080;
              uVar17 = 0;
              do {
                lVar1 = *plVar19;
                if (5 < uVar17) break;
                uVar17 = uVar17 + 1;
                plVar19 = plVar19 + 1;
              } while (lVar1 != plVar10[iVar7]);
              plVar19 = &DAT_14caea080;
              uVar17 = 0;
              do {
                lVar8 = *plVar19;
                if (5 < uVar17) break;
                uVar17 = uVar17 + 1;
                plVar19 = plVar19 + 1;
              } while (lVar8 != plVar10[iVar14]);
              if (lVar8 == plVar10[iVar14]) {
                iVar14 = iVar7;
              }
              if (lVar1 != plVar10[iVar7]) {
                iVar14 = iVar7;
              }
            }
            lVar1 = plVar10[iVar14];
            lVar8 = plVar10[iVar13];
            plVar19 = &DAT_14caea080;
            uVar17 = 0;
            do {
              lVar9 = *plVar19;
              if (5 < uVar17) break;
              uVar17 = uVar17 + 1;
              plVar19 = plVar19 + 1;
            } while (lVar9 != lVar8);
            plVar19 = &DAT_14caea080;
            uVar17 = 0;
            do {
              lVar2 = *plVar19;
              if (5 < uVar17) break;
              uVar17 = uVar17 + 1;
              plVar19 = plVar19 + 1;
            } while (lVar2 != lVar1);
            if ((lVar9 == lVar8) && (lVar2 != lVar1)) {
              plVar10[iVar13] = lVar1;
              plVar10[iVar14] = lVar8;
              iVar13 = iVar14;
              goto joined_r0x000141513280;
            }
          }
          bVar21 = iVar15 != 0;
          iVar13 = iVar15 + -1;
          iVar15 = iVar13;
        } while (bVar21);
        local_360 = 0xffffffff;
        if (1 < (int)uVar5) {
          uVar17 = (ulonglong)uVar5;
          lVar1 = *plVar10;
          *plVar10 = plVar10[uVar17 - 1];
          plVar10[uVar17 - 1] = lVar1;
          if (uVar5 != 2) {
            do {
              uVar12 = uVar17 - 1;
              iVar15 = 0;
              iVar13 = 1;
              iVar14 = 0;
              do {
                iVar15 = iVar15 + 2;
                iVar7 = iVar13;
                if ((longlong)iVar15 < (longlong)uVar12) {
                  plVar19 = &DAT_14caea080;
                  uVar20 = 0;
                  do {
                    lVar1 = *plVar19;
                    if (5 < uVar20) break;
                    uVar20 = uVar20 + 1;
                    plVar19 = plVar19 + 1;
                  } while (lVar1 != plVar10[iVar15]);
                  plVar19 = &DAT_14caea080;
                  uVar20 = 0;
                  do {
                    lVar8 = *plVar19;
                    if (5 < uVar20) break;
                    uVar20 = uVar20 + 1;
                    plVar19 = plVar19 + 1;
                  } while (lVar8 != plVar10[iVar13]);
                  if (lVar8 == plVar10[iVar13]) {
                    iVar13 = iVar15;
                  }
                  iVar7 = iVar13;
                  if (lVar1 != plVar10[iVar15]) {
                    iVar7 = iVar15;
                  }
                }
                lVar1 = plVar10[iVar7];
                lVar8 = plVar10[iVar14];
                plVar19 = &DAT_14caea080;
                uVar20 = 0;
                do {
                  lVar9 = *plVar19;
                  if (5 < uVar20) break;
                  uVar20 = uVar20 + 1;
                  plVar19 = plVar19 + 1;
                } while (lVar9 != lVar8);
                plVar19 = &DAT_14caea080;
                uVar20 = 0;
                do {
                  lVar2 = *plVar19;
                  if (5 < uVar20) break;
                  uVar20 = uVar20 + 1;
                  plVar19 = plVar19 + 1;
                } while (lVar2 != lVar1);
                if ((lVar9 != lVar8) || (lVar2 == lVar1)) break;
                plVar10[iVar14] = lVar1;
                plVar10[iVar7] = lVar8;
                iVar15 = iVar7 * 2;
                iVar13 = iVar7 * 2 + 1;
                iVar14 = iVar7;
              } while ((longlong)iVar13 < (longlong)uVar12);
              lVar1 = *plVar10;
              *plVar10 = plVar10[uVar17 - 2];
              plVar10[uVar17 - 2] = lVar1;
              uVar17 = uVar12;
            } while (2 < uVar12);
          }
        }
      }
LAB_14151314f:
      plVar4 = plVar4 + -3;
    } while (&local_348 <= plVar4);
  }
  lVar1 = local_358;
  if ((int)uStack_350 != 0) {
    lVar9 = (longlong)(int)uStack_350;
    lVar8 = 0;
    do {
      FUN_141513496(*(undefined8 *)(lVar1 + lVar8));
      lVar8 = lVar8 + 8;
    } while (lVar9 * 8 != lVar8);
  }
  if (local_358 != 0) {
    FUN_1400020a8(local_358);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014151305f:
  plVar16 = &DAT_14caea080;
  uVar17 = 0;
  do {
    lVar1 = *plVar16;
    if (5 < uVar17) break;
    uVar17 = uVar17 + 1;
    plVar16 = plVar16 + 1;
  } while (lVar1 != *plVar11);
  plVar16 = &DAT_14caea080;
  uVar17 = 0;
  do {
    lVar8 = *plVar16;
    if (5 < uVar17) break;
    uVar17 = uVar17 + 1;
    plVar16 = plVar16 + 1;
  } while (lVar8 != *plVar10);
  if (lVar1 != *plVar11 || lVar8 == *plVar10) goto LAB_141513056;
LAB_1415130ad:
  do {
    plVar16 = plVar6;
    plVar6 = plVar16 + -1;
    if (plVar6 <= plVar11) break;
    plVar18 = &DAT_14caea080;
    uVar17 = 0;
    do {
      lVar1 = *plVar18;
      if (5 < uVar17) break;
      uVar17 = uVar17 + 1;
      plVar18 = plVar18 + 1;
    } while (lVar1 != *plVar6);
    plVar18 = &DAT_14caea080;
    uVar17 = 0;
    do {
      lVar8 = *plVar18;
      if (5 < uVar17) break;
      uVar17 = uVar17 + 1;
      plVar18 = plVar18 + 1;
    } while (lVar8 != *plVar11);
  } while ((lVar1 != *plVar6) || (lVar8 == *plVar11));
  if (plVar10 <= plVar6) {
    lVar1 = *plVar10;
    *plVar10 = *plVar6;
    *plVar6 = lVar1;
    goto LAB_141513056;
  }
  lVar1 = *plVar11;
  *plVar11 = *plVar6;
  plVar16[-1] = lVar1;
  iVar13 = iVar13 + -1;
  plVar16 = plVar16 + -2;
  if ((longlong)plVar16 - (longlong)plVar11 < (longlong)plVar19 - (longlong)plVar10) {
    if (plVar10 < plVar19) {
      *plVar4 = (longlong)plVar10;
      plVar4[1] = (longlong)plVar19;
      *(int *)(plVar4 + 2) = iVar13;
      plVar4 = plVar4 + 3;
    }
    plVar19 = plVar16;
    plVar10 = plVar11;
    if (plVar6 <= plVar11 + 1) goto LAB_14151314f;
  }
  else {
    if (plVar11 + 1 < plVar6) {
      *plVar4 = (longlong)plVar11;
      plVar4[1] = (longlong)plVar16;
      *(int *)(plVar4 + 2) = iVar13;
      plVar4 = plVar4 + 3;
    }
    if (plVar19 <= plVar10) goto LAB_14151314f;
  }
  iVar15 = (int)((ulonglong)((longlong)plVar19 - (longlong)plVar10) >> 3);
  uVar5 = iVar15 + 1;
  plVar11 = plVar10;
  if (iVar13 == 0) goto LAB_14151324f;
  goto LAB_141513036;
}



// FUNCTION 141513496 FUN_141513496 body=1013 status=ok
// SIG undefined FUN_141513496(void)

void FUN_141513496(longlong *param_1)

{
  ushort uVar1;
  longlong *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  wchar_t *pwVar10;
  int iVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_e1;
  uint local_e0;
  uint local_dc;
  int *local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98 [2];
  longlong local_88 [2];
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar4 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1415137f0;
    bVar4 = DAT_14c8442b8 & 1;
  }
  if (bVar4 == 0) {
    local_e1 = DAT_14cb0cc00;
    uVar9 = DAT_14caec4b4 | *(uint *)(param_1 + 0x17) | 1 << ((byte)DAT_14c760db4 & 0x1f);
    local_c8 = 0;
    uStack_c0 = 0;
    local_d0 = param_1 + 0x4a;
    local_d8 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    do {
      local_e0 = -uVar9 & uVar9;
      uVar3 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      if (local_e0 == 0) {
        uVar3 = 0;
      }
      uVar1 = *(ushort *)(&DAT_14ca85070 + (ulonglong)uVar3 * 2);
      local_f8 = local_e1;
      local_dc = uVar9;
      uVar6 = FUN_1403bc388(local_d0,param_1,0);
      uVar9 = uStack_c0._4_4_;
      iVar11 = 0;
      if (uStack_c0 < 0) {
        uStack_c0 = (ulonglong)uStack_c0._4_4_ << 0x20;
        FUN_14063db1c(&local_c8,0);
        uVar9 = uStack_c0._4_4_;
        iVar11 = (int)uStack_c0;
      }
      uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar11 + 1U);
      if (uVar9 < iVar11 + 1U) {
        FUN_1403bc9ae(&local_c8,iVar11);
      }
      *(undefined8 *)(local_c8 + (longlong)iVar11 * 8) = uVar6;
      if (0 < (int)uStack_c0) {
        lVar13 = 0;
        do {
          plVar7 = *(longlong **)(local_c8 + lVar13 * 8);
          local_78 = 0;
          local_88[0] = 0;
          local_88[1] = 0;
          local_74 = 1;
          local_70 = 0xffffffff00000003;
          local_68 = 0;
          (**(code **)(*plVar7 + 0x28))(plVar7,(ulonglong)uVar1,0,local_88);
          cVar5 = FUN_1409ee962();
          if (cVar5 == '\0') {
            plVar7 = &DAT_14caea080;
            uVar8 = 0;
            do {
              plVar2 = (longlong *)*plVar7;
              if (5 < uVar8) break;
              uVar8 = uVar8 + 1;
              plVar7 = plVar7 + 1;
            } while (plVar2 != param_1);
            local_88[0] = 0;
            local_88[1] = 0;
            if (plVar2 == param_1) {
              local_b0 = *(undefined8 *)(&DAT_14ca814bc + (ulonglong)uVar1 * 0x3c);
              FUN_1400021e4(&local_b0,&local_a8);
              puVar12 = &DAT_149dfb77a;
              if (local_a0 != 0) {
                puVar12 = local_a8;
              }
              pwVar10 = L"Failed to compile Default Material for platform %s!\n";
            }
            else {
              local_b0 = *(undefined8 *)(&DAT_14ca814bc + (ulonglong)uVar1 * 0x3c);
              FUN_1400021e4(&local_b0,&local_a8);
              puVar12 = &DAT_149dfb77a;
              if (local_a0 != 0) {
                puVar12 = local_a8;
              }
              pwVar10 = 
              L"Failed to compile Material for platform %s, Default Material will be used in game.\n"
              ;
            }
            FUN_140002266(local_98,pwVar10,puVar12);
            FUN_1400020e8(local_88,local_98[0]);
            if (local_98[0] != 0) {
              FUN_1400020a8();
            }
            if (local_a8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (((*local_d8 != 0x40000002) && (*local_d8 == 1)) && (DAT_14c86a9f8 != '\0')) {
              FUN_140ad26c0();
              GetCurrentThreadId();
            }
            if (local_88[0] != 0) {
              FUN_1400020a8();
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)uStack_c0);
      }
      uVar9 = local_e0 ^ local_dc;
    } while (local_e0 != local_dc);
    (**(code **)(*param_1 + 0x568))(param_1,CONCAT71((uint7)(uint3)(uVar9 >> 8),1));
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1415137f0:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14151388c FUN_14151388c body=61 status=ok
// SIG undefined FUN_14151388c(void)

undefined4 FUN_14151388c(void)

{
  undefined4 uVar1;
  LPWSTR pWVar2;
  
  pWVar2 = GetCommandLineW();
  uVar1 = FUN_14054d46e(pWVar2,L"ExpectLowIntegrityLevel");
  if ((char)uVar1 == '\0') {
    pWVar2 = GetCommandLineW();
    FUN_14054d46e(pWVar2,L"ExpectMediumIntegrityLevel");
  }
  return uVar1;
}



// FUNCTION 1415138ca FUN_1415138ca body=3277 status=ok
// SIG undefined FUN_1415138ca(void)

void FUN_1415138ca(longlong param_1,byte param_2)

{
  int *piVar1;
  double dVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined *puVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 *local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar10 = *(longlong **)(param_1 + 8);
  if (((plVar10 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x30) == 0)) ||
     (*(char *)(param_1 + 0x38) != '\0')) goto LAB_1415141d0;
  uVar9 = FUN_140d929b2();
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,uVar9);
  if (plVar10 != (longlong *)0x0) {
    uVar9 = FUN_140d929b2();
    plVar11 = (longlong *)FUN_144718840(plVar10,uVar9);
    if ((plVar11 != (longlong *)0x0 && plVar10 != plVar11) &&
       (cVar3 = (**(code **)(*plVar11 + 0x30))(plVar11), cVar3 != '\0')) goto LAB_1415141d0;
  }
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) goto LAB_1415141d0;
  lVar13 = *(longlong *)(param_1 + 0x10);
  if (((lVar13 != 0) &&
      (plVar10 = (longlong *)(**(code **)(*(longlong *)(lVar13 + 0x10a8) + 0x18))(lVar13 + 0x10a8),
      DAT_14cbd3688 != 0)) && ((longlong)(int)plVar10[1] != 0)) {
    uVar12 = 0;
    do {
      if (*(longlong *)(*plVar10 + 0x68 + uVar12) == DAT_14cbd3688) {
        if ((int)(uVar12 >> 3) * -0xf0f0f0f != -1) {
          uVar9 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10a8) + 0x18))
                            (*(longlong *)(param_1 + 0x10) + 0x10a8);
          local_78 = DAT_14cbd3688;
          uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
          FUN_140c823b2(uVar9,&local_58);
          if (local_58 == DAT_14cbd3680) goto LAB_1415141d0;
        }
        break;
      }
      uVar12 = uVar12 + 0x88;
    } while ((longlong)(int)plVar10[1] * 0x88 != uVar12);
  }
  uVar6 = rand();
  uVar7 = rand();
  uVar8 = rand();
  *(uint *)(param_1 + 0xd0) = uVar8 & 1 | (uVar6 & 0x7fff) * 0x10000 + (uVar7 & 0x7fff) * 2;
  *(byte *)(param_1 + 0x28) = (*(byte *)(param_1 + 0x28) & 0xfc | param_2 * '\x02') + 1;
  if ((*(longlong *)(param_1 + 8) == 0) || (*(char *)(*(longlong *)(param_1 + 8) + 0x178) != '\x03')
     ) {
LAB_141513abc:
    if (((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 8) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 8) + 0x178) == '\x03')) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x9b58) = 1;
      uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x28);
      if (uVar12 < 0xffffffff00000000) {
        plVar10 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar10 = (longlong *)0x0;
        }
        (**(code **)(*plVar10 + 0x58))(plVar10,*(longlong *)(param_1 + 0x10),uVar12,0x71);
      }
      else {
        uVar6 = (uint)uVar12;
        if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
          puVar16 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar16 = DAT_14c998080;
          }
          if ((*(uint *)(puVar16 + ((uint)(uVar12 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
            lVar15 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
            lVar13 = *(longlong *)(lVar15 + 0x18);
            if (*(longlong *)(lVar15 + 0x18) == 0) {
              lVar13 = lVar15 + 8;
            }
            *(uint *)(lVar13 + 0xc) = *(uint *)(lVar13 + 0xc) | 0x20000;
            *(byte *)(lVar15 + 0x60) = *(byte *)(lVar15 + 0x60) | 1;
          }
        }
      }
    }
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) {
    *(byte *)(*(longlong *)(param_1 + 0x10) + 0x9b59) = param_2 & 0x7f;
    uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x28);
    if (uVar12 < 0xffffffff00000000) {
      plVar10 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar10 = (longlong *)0x0;
      }
      (**(code **)(*plVar10 + 0x58))(plVar10,*(longlong *)(param_1 + 0x10),uVar12,0x71);
    }
    else {
      uVar6 = (uint)uVar12;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
        puVar16 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar16 = DAT_14c998080;
        }
        if ((*(uint *)(puVar16 + ((uint)(uVar12 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
          lVar15 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
          lVar13 = *(longlong *)(lVar15 + 0x18);
          if (*(longlong *)(lVar15 + 0x18) == 0) {
            lVar13 = lVar15 + 8;
          }
          *(uint *)(lVar13 + 0xc) = *(uint *)(lVar13 + 0xc) | 0x20000;
          *(byte *)(lVar15 + 0x60) = *(byte *)(lVar15 + 0x60) | 1;
        }
      }
    }
    goto LAB_141513abc;
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (plVar10 = (longlong *)FUN_1403cba6c(*(undefined8 *)(param_1 + 8)), plVar10 != (longlong *)0x0)
     ) {
    if (*(longlong *)(param_1 + 0x68) == 0) {
      local_108 = &local_78;
      local_68 = DAT_14c846508;
      local_78 = DAT_14c8464f8;
      uStack_70 = DAT_14c846500;
      local_88 = DAT_14c8464f0;
      local_98 = (undefined4)DAT_14c8464e0;
      uStack_94 = DAT_14c8464e0._4_4_;
      uStack_90 = (undefined4)DAT_14c8464e8;
      uStack_8c = DAT_14c8464e8._4_4_;
      local_100 = &local_58;
      local_58 = (code *)0x3ff0000000000000;
      uStack_50 = (longlong *)&DAT_3ff0000000000000;
      local_48 = 0x3ff0000000000000;
      local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
      local_e8 = (undefined2 *)((ulonglong)local_e8 & 0xffffffffffffff00);
      local_f0 = local_f0 & 0xffffffffffffff00;
      local_d8 = (undefined1 *)CONCAT71(local_d8._1_7_,1);
      local_f8 = 0;
      lVar13 = FUN_140e3e448(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x38),plVar10);
      if ((lVar13 == 0) || (DAT_14c950c29 == 0)) {
        *(longlong *)(param_1 + 0x68) = lVar13;
        if (lVar13 == 0) goto LAB_141513c3b;
      }
      else {
        FUN_1456cec3c(lVar13);
        *(longlong *)(param_1 + 0x68) = lVar13;
      }
      *(byte *)(lVar13 + 0x8c8) = *(byte *)(lVar13 + 0x8c8) & 0xfd;
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x9f8))
                (*(longlong **)(param_1 + 0x68),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xc0),0);
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0xa00))
                (*(longlong **)(param_1 + 0x68),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x90));
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2a8))(*(longlong **)(param_1 + 0x68),1);
    }
LAB_141513c3b:
    if (*(longlong *)(param_1 + 0x70) == 0) {
      local_108 = &local_78;
      local_68 = DAT_14c846508;
      local_78 = DAT_14c8464f8;
      uStack_70 = DAT_14c846500;
      local_88 = DAT_14c8464f0;
      local_98 = (undefined4)DAT_14c8464e0;
      uStack_94 = DAT_14c8464e0._4_4_;
      uStack_90 = (undefined4)DAT_14c8464e8;
      uStack_8c = DAT_14c8464e8._4_4_;
      local_100 = &local_58;
      local_58 = (code *)0x3ff0000000000000;
      uStack_50 = (longlong *)&DAT_3ff0000000000000;
      local_48 = 0x3ff0000000000000;
      local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffffffffff00);
      local_e8 = (undefined2 *)((ulonglong)local_e8 & 0xffffffffffffff00);
      local_f0 = local_f0 & 0xffffffffffffff00;
      local_d8 = (undefined1 *)CONCAT71(local_d8._1_7_,1);
      local_f8 = 0;
      lVar13 = FUN_140e3e448(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xa0),plVar10,0);
      if ((lVar13 == 0) || (DAT_14c950c29 == 0)) {
        *(longlong *)(param_1 + 0x70) = lVar13;
        if (lVar13 == 0) goto LAB_141513d96;
      }
      else {
        FUN_1456cec3c(lVar13);
        *(longlong *)(param_1 + 0x70) = lVar13;
      }
      *(byte *)(lVar13 + 0x8c8) = *(byte *)(lVar13 + 0x8c8) & 0xfd;
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c8);
      if (lVar13 == 0) {
        local_48 = DAT_14c8464f0;
        local_58 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_50 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_58 = *(code **)(lVar13 + 0x260);
        uStack_50 = *(longlong **)(lVar13 + 0x268);
        local_48 = *(undefined8 *)(lVar13 + 0x270);
      }
      FUN_1404e0f62(*(undefined8 *)(param_1 + 0x70),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x68),&local_58);
      FUN_140219d5e(*(undefined8 *)(param_1 + 0x70),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x70),
                    (float)(double)plVar10[0x32]);
      local_68 = DAT_14c8462d0;
      local_78 = CONCAT44(DAT_14c8462c0._4_4_,(undefined4)DAT_14c8462c0);
      uStack_70 = CONCAT44(DAT_14c8462c8._4_4_,(undefined4)DAT_14c8462c8);
      FUN_1404e0f62(*(undefined8 *)(param_1 + 0x70),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78));
    }
LAB_141513d96:
    (**(code **)(*plVar10 + 0x968))(plVar10,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x58));
  }
  if (param_2 != 0) {
    FUN_140ecf6fe(param_1);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      if ((*(char *)(*(longlong *)(param_1 + 8) + 0x178) == '\x03') &&
         (*(char *)(*(longlong *)(param_1 + 0x10) + 0x5d30) != '\x02')) {
        lVar13 = FUN_1418769fa();
        if (lVar13 == 0) {
LAB_141513e28:
          bVar4 = 0;
        }
        else {
          plVar10 = (longlong *)(lVar13 + 0x178);
          cVar3 = (**(code **)(*(longlong *)(lVar13 + 0x178) + 0xd8))(plVar10);
          if ((cVar3 == '\0') && (cVar3 = (**(code **)(*plVar10 + 0xf0))(plVar10), cVar3 == '\0'))
          goto LAB_141513e28;
          bVar4 = 1;
        }
        plVar10 = *(longlong **)(param_1 + 8);
        if (plVar10 != (longlong *)0x0) {
          uVar9 = FUN_1407ca880();
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,uVar9);
          if (plVar10 != (longlong *)0x0) {
            uVar9 = FUN_1407ca880();
            plVar11 = (longlong *)FUN_144718840(plVar10,uVar9);
            if (plVar11 != (longlong *)0x0 && plVar10 != plVar11) {
              uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11);
              uVar14 = FUN_140d92b04();
              FUN_140d92a98(uVar9,&local_58,uVar14);
              if (local_58 != (code *)0x0) {
                bVar5 = FUN_1489a6fa6(*(undefined8 *)(param_1 + 8),local_58[0x40]);
                bVar4 = bVar4 | bVar5;
              }
              plVar10 = uStack_50;
              if (uStack_50 != (longlong *)0x0) {
                LOCK();
                plVar11 = uStack_50 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (**(code **)*uStack_50)(uStack_50);
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
        }
        if (bVar4 != 0) {
          lVar13 = *(longlong *)(param_1 + 0x10);
          FUN_146635cca(&local_78);
          lVar15 = *(longlong *)(param_1 + 0x10);
          if ((lVar15 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(lVar15);
          }
          FUN_1466366b4(lVar13 + 0x588,lVar15,local_78);
        }
      }
      if (*(longlong *)(param_1 + 8) == 0) goto LAB_14151404a;
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar13 = FUN_1447210f0();
      if (*(longlong *)(lVar13 + 0x1f0) == 0) {
        plVar10 = (longlong *)(lVar13 + 0x458);
      }
      else {
        plVar10 = (longlong *)(*(longlong *)(lVar13 + 0x1f0) + 0xf0);
      }
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (lVar13 != 0) {
        lVar15 = *plVar10;
        uVar6 = (uint)lVar13;
        if ((int)(uVar6 & 0xffffff) < *(int *)(lVar15 + 0x10)) {
          lVar18 = lVar15 + 0x18;
          if (*(longlong *)(lVar15 + 0x28) != 0) {
            lVar18 = *(longlong *)(lVar15 + 0x28);
          }
          if ((*(uint *)(lVar18 + (ulonglong)((uVar6 & 0xffffff) >> 5) * 4) >> (uVar6 & 0x1f) & 1)
              != 0) {
            lVar15 = *(longlong *)(lVar15 + 8);
            lVar18 = (ulonglong)(uVar6 & 0xffffff) * 0x70;
            if (((lVar15 + lVar18 != 0) && (*(longlong *)(lVar15 + 0x60 + lVar18) == lVar13)) &&
               (*(char *)(lVar15 + 1 + lVar18) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    if (((*(byte *)(param_1 + 0x60) & 1) == 0) && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      lVar13 = FUN_1418769fa(*(undefined8 *)(param_1 + 8));
      FUN_1446f470e(&local_98,L"FullBody",1);
      if (lVar13 == 0) {
        bVar4 = 0;
      }
      else {
        bVar4 = (**(code **)(*(longlong *)(lVar13 + 0x178) + 0xd8))(lVar13 + 0x178);
      }
      plVar10 = *(longlong **)(param_1 + 8);
      if (plVar10 != (longlong *)0x0) {
        uVar9 = FUN_1407ca880();
        plVar10 = (longlong *)(**(code **)(*plVar10 + 0x288))(plVar10,uVar9);
        if (plVar10 != (longlong *)0x0) {
          uVar9 = FUN_1407ca880();
          plVar11 = (longlong *)FUN_144718840(plVar10,uVar9);
          if ((plVar10 != plVar11) && (plVar11 != (longlong *)0x0)) {
            uVar9 = (**(code **)(*plVar11 + 0x50))(plVar11);
            uVar14 = FUN_140d92b04();
            FUN_140d92a98(uVar9,&local_58,uVar14);
            if (local_58 != (code *)0x0) {
              bVar5 = FUN_1489a6fa6(*(undefined8 *)(param_1 + 8),local_58[0x40]);
              bVar4 = bVar4 | bVar5;
            }
            plVar10 = uStack_50;
            if (uStack_50 != (longlong *)0x0) {
              LOCK();
              plVar11 = uStack_50 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*uStack_50)(uStack_50);
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
      }
      if (bVar4 != 0) {
        FUN_140d933e6(param_1,&local_58,local_7c,&local_78);
      }
      FUN_1415b3d3e(param_1,1);
      if ((lVar13 != 0) &&
         (cVar3 = (**(code **)(*(longlong *)(lVar13 + 0x178) + 0xf0))(lVar13 + 0x178), cVar3 != '\0'
         )) {
        FUN_140d735ec(lVar13);
        dVar2 = *(double *)(lVar13 + 0x138);
        if ((dVar2 == 0.0) && (!NAN(dVar2))) {
          *(double *)(lVar13 + 0x138) = dVar2 + -1.0;
        }
      }
      lVar13 = *(longlong *)(param_1 + 0x10);
      if ((lVar13 != 0) &&
         (lVar13 = (**(code **)(*(longlong *)(lVar13 + 0x1118) + 0x20))(lVar13 + 0x1118),
         lVar13 != 0)) {
        FUN_140ba2cd0(lVar13,&DAT_14cbd4078,1);
      }
      if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
        FUN_140d91b8a(param_1,0);
      }
    }
  }
LAB_14151404a:
  lVar13 = *(longlong *)(param_1 + 0x10);
  if ((lVar13 != 0) && (0 < *(int *)(lVar13 + 0x6190))) {
    iVar17 = 0;
    do {
      local_108 = (undefined8 *)((ulonglong)local_108 & 0xffffffffffffff00);
      FUN_140d78d10(lVar13 + 0x60e8,iVar17,0xff,0);
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(lVar13 + 0x6190));
  }
  lVar13 = FUN_1447210f0(*(undefined8 *)(param_1 + 8));
  *(float *)(param_1 + 0x3c) = (float)*(double *)(lVar13 + 0x6d0);
  local_108 = (undefined8 *)0x0;
  FUN_140b32deb(&local_b0,*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x30) + 0x3b0,0);
  local_b0 = 0;
  local_a8 = 0xffffffffffffffff;
  lVar13 = *(longlong *)(param_1 + 0x10);
  if (lVar13 != 0) {
    lVar13 = (**(code **)(*(longlong *)(lVar13 + 0x3c08) + 0x10))(lVar13 + 0x3c08);
    local_58 = (code *)DAT_14cbd4078;
    FUN_1400bc96c(lVar13 + 0x310,&local_58);
    local_58 = *(code **)(param_1 + 0x10);
    FUN_1447cd2ec(local_58 + 0x4d68,&local_58);
    if (((((*(int *)(param_1 + 0x5c) != 0) && (uVar6 = *(uint *)(param_1 + 0x58), -1 < (int)uVar6))
         && ((int)uVar6 < DAT_14c9647dc)) &&
        ((plVar10 = (longlong *)
                    ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
         plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x5c))))) &&
       (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar13 = *plVar10, lVar13 != 0)))) {
      if (DAT_14cba8288 == 0) {
        local_58 = FUN_141864c34;
        local_c0 = FUN_14081d0ea;
        local_c8 = &LAB_1464cee30;
        local_d8 = &LAB_148bfac22;
        local_e0 = &LAB_140f21842;
        local_e8 = &DAT_149e063b2;
        local_f0 = 0;
        local_f8 = 0x10000004;
        local_100 = (undefined8 *)CONCAT44(local_100._4_4_,0x10);
        local_108 = (undefined8 *)CONCAT44(local_108._4_4_,0x9cd0);
        local_d0 = &local_58;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      iVar17 = *(int *)(DAT_14cba8288 + 0x38);
      if (((iVar17 <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
          (*(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar17 * 8)
           == DAT_14cba8288 + 0x30)) ||
         ((lVar13 = *(longlong *)(lVar13 + 0x1b0), lVar13 != 0 &&
          ((iVar17 <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) &&
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar17 * 8)
            == DAT_14cba8288 + 0x30)))))) {
        FUN_140fbbfc8(lVar13 + 0x4d88,*(undefined8 *)(param_1 + 0x10));
        goto LAB_1415141d0;
      }
    }
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 4;
  }
LAB_1415141d0:
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141514598 FUN_141514598 body=325 status=ok
// SIG undefined FUN_141514598(void)

void FUN_141514598(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1415146de FUN_1415146de body=61 status=ok
// SIG undefined FUN_1415146de(void)

void FUN_1415146de(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1404112b2(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 14151471c FUN_14151471c body=2434 status=ok
// SIG undefined FUN_14151471c(void)

ulonglong FUN_14151471c(undefined8 *param_1,undefined1 (*param_2) [16],ushort param_3,
                       undefined1 (*param_4) [16])

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined1 (*pauVar12) [16];
  size_t sVar13;
  undefined1 (*pauVar14) [16];
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  undefined2 *puVar25;
  uint uVar26;
  undefined *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined2 *puVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined1 (*local_220) [16];
  undefined1 (*local_210) [16];
  undefined8 *local_208;
  undefined1 (*local_200) [16];
  undefined1 (*local_1f8) [16];
  undefined1 (*local_1f0) [16];
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined2 *local_1b8;
  int local_1b0;
  undefined4 *local_1a8;
  int local_1a0;
  longlong local_198;
  int local_190;
  int local_18c;
  undefined1 local_188 [256];
  longlong local_88;
  undefined1 *local_80;
  undefined4 local_78;
  ulonglong local_70;
  undefined8 extraout_XMM0_Qb;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *param_4 = (undefined1  [16])0x0;
  uVar29 = 0;
  cVar6 = FUN_1403966e6();
  if (cVar6 == '\0') goto LAB_141514828;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
  iVar7 = *(int *)(param_1 + 1);
  iVar15 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar15 = 0;
  }
  if (0 < iVar15) {
    if (iVar7 == 0) {
      puVar30 = &DAT_149dfb77a;
    }
    else {
      puVar30 = (undefined2 *)*param_1;
    }
    lVar18 = 0;
    uVar29 = 0;
    do {
      uVar19 = ((uint)(0x19 < (ushort)puVar30[lVar18] - 0x61) * 0x20 + (uint)(ushort)puVar30[lVar18]
               ) - 0x20;
      uVar26 = (uint)(uVar29 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar29 ^ uVar19) & 0xff) * 4);
      uVar29 = (ulonglong)
               (uVar26 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar26 & 0xff ^ uVar19 >> 8 & 0xff) * 4));
      lVar18 = lVar18 + 1;
    } while (iVar15 != (int)lVar18);
  }
  iVar7 = FUN_140f05964(&DAT_14ca80418,uVar29,param_1);
  uVar29 = 0;
  if (iVar7 != -1) goto LAB_14151481b;
  local_208 = param_1;
  pauVar12 = (undefined1 (*) [16])FUN_14001cc68(200,0x10);
  *(undefined8 *)(pauVar12[1] + 4) = 0;
  *(undefined8 *)pauVar12[2] = 0;
  *pauVar12 = (undefined1  [16])0x0;
  local_1f8 = pauVar12 + 3;
  *(undefined8 *)pauVar12[5] = 0;
  *(undefined4 *)(pauVar12[5] + 8) = 0;
  pauVar12[3] = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar12[5] + 0xc) = 0xffffffff00000080;
  *(undefined4 *)(pauVar12[6] + 4) = 0;
  *(undefined8 *)pauVar12[7] = 0;
  *(undefined4 *)(pauVar12[7] + 8) = 0;
  pauVar12[8] = (undefined1  [16])0x0;
  pauVar12[9] = (undefined1  [16])0x0;
  pauVar12[10] = (undefined1  [16])0x0;
  pauVar12[0xb] = (undefined1  [16])0x0;
  pauVar12[0xc][0] = 0;
  *param_4 = (undefined1  [16])0x0;
  *(undefined4 *)(pauVar12[2] + 8) = 0;
  local_1f0 = pauVar12;
  FUN_1459af010();
  if (pauVar12 != param_2) {
    iVar7 = *(int *)(*param_2 + 8);
    _Src = *(void **)*param_2;
    *(int *)(*pauVar12 + 8) = iVar7;
    if (iVar7 == 0 && *(int *)(*pauVar12 + 0xc) == 0) {
      *(undefined4 *)(*pauVar12 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(pauVar12,iVar7);
      if (iVar7 != 0) {
        memcpy(*(void **)*pauVar12,_Src,(longlong)iVar7 * 2);
      }
    }
  }
  puVar30 = &DAT_149dfb77a;
  *(ushort *)pauVar12[1] = param_3;
  *(undefined8 *)(pauVar12[1] + 4) = *(undefined8 *)(&DAT_14ca814bc + (ulonglong)param_3 * 0x3c);
  FUN_1400021e4(pauVar12[1] + 4,&local_1b8);
  puVar25 = &DAT_149dfb77a;
  if (local_1b0 != 0) {
    puVar25 = local_1b8;
  }
  if (*(int *)(*pauVar12 + 8) != 0) {
    puVar30 = *(undefined2 **)*pauVar12;
  }
  auVar32._0_8_ = FUN_140002266(&local_1a8,L"%s_%s.stable.upipelinecache",puVar30,puVar25);
  auVar32._8_8_ = extraout_XMM0_Qb;
  local_80 = local_188;
  local_88 = 0;
  local_78 = 7;
  local_188._0_16_ = pmovsxbw(auVar32,(char  [8])0x73776f646e6957);
  FUN_1410f2562(&local_1e8);
  iVar7 = (int)local_1e0;
  iVar8 = ((int)local_1e0 == 0) + 0xf;
  local_1d8 = local_1e8;
  local_1e8 = 0;
  iVar15 = local_1e0._4_4_;
  local_1d0 = local_1e0;
  local_1e0 = 0;
  iVar17 = iVar8 + iVar7;
  if (iVar17 < iVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar17 < 0) {
LAB_141515056:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar17);
  }
  if (iVar15 < iVar17) {
    FUN_1446f8c06(&local_1d8);
  }
  FUN_1401aebe8(&local_1d8,L"PipelineCaches",0xe);
  sVar13 = wcslen((wchar_t *)local_188);
  iVar7 = (int)local_1d0;
  iVar8 = (uint)((int)sVar13 != -1 && (int)local_1d0 == 0) + (int)sVar13 + 1;
  local_1c8 = local_1d8;
  local_1d8 = 0;
  iVar15 = local_1d0._4_4_;
  local_1c0 = local_1d0;
  local_1d0 = 0;
  iVar17 = iVar8 + iVar7;
  if (iVar17 < iVar7) {
LAB_14151505d:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((longlong)iVar8);
  }
  if (iVar17 < 0) goto LAB_141515056;
  if (iVar15 < iVar17) {
    FUN_1446f8c06(&local_1c8);
  }
  FUN_1401aebe8(&local_1c8,local_188,sVar13 & 0xffffffff);
  iVar7 = local_1a0 + -1;
  if (local_1a0 == 0) {
    iVar7 = 0;
  }
  iVar15 = (int)local_1c0;
  iVar8 = iVar7 + 1 + (uint)((int)local_1c0 == 0);
  local_198 = local_1c8;
  local_1c8 = 0;
  local_190 = (int)local_1c0;
  iVar9 = local_1c0._4_4_;
  local_18c = local_1c0._4_4_;
  local_1c0 = 0;
  iVar17 = iVar8 + iVar15;
  if (iVar17 < iVar15) goto LAB_14151505d;
  if (iVar17 < 0) goto LAB_141515056;
  if (iVar9 < iVar17) {
    FUN_1446f8c06(&local_198);
  }
  FUN_1401aebe8(&local_198,local_1a8,iVar7);
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if (local_1e8 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_210 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca81394) && (FUN_144b3d300(&DAT_14ca81394), DAT_14ca81394 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14ca81390 = FUN_14054d46e(&DAT_14c846b20,L"nostablepipelinecache");
    _Init_thread_footer(&DAT_14ca81394);
  }
  if ((DAT_14ca81390 == '\x01') && (local_190 = 0, local_18c != 0)) {
    FUN_1446f8c06(&local_198,0);
  }
  local_228 = pauVar12[2] + 8;
  local_220 = pauVar12 + 2;
  uVar19 = FUN_1431e5f4c(&local_198,*(undefined2 *)pauVar12[1],pauVar12 + 8,pauVar12 + 10);
  pauVar14 = local_210;
  uVar29 = (ulonglong)uVar19;
  if ((char)uVar19 != '\0') {
    FUN_1402980a2(pauVar12 + 9,local_198);
    uVar4 = *(undefined8 *)(pauVar12[8] + 8);
    *(undefined8 *)*pauVar14 = *(undefined8 *)pauVar12[8];
    *(undefined8 *)(*pauVar14 + 8) = uVar4;
    pauVar12[0xc][0] = 1;
    lVar18 = DAT_14ca803d8;
    if (DAT_14ca84e35 == '\x01') {
      iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
        uVar20 = 0;
      }
      else if (iVar7 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        uVar20 = (ulonglong)(DVar10 != DVar11);
      }
      else {
        uVar20 = 1;
      }
      if (*(int *)(lVar18 + uVar20 * 4) != 0) {
        DAT_14ca84e34 = 1;
      }
    }
  }
  local_200 = pauVar12 + 4;
  iVar7 = *(int *)(pauVar12[5] + 8);
  if (iVar7 == 0) {
    uVar31 = 1;
    uVar20 = 0;
    iVar8 = 0;
    iVar15 = 0;
  }
  else {
    pauVar14 = *(undefined1 (**) [16])pauVar12[5];
    if (*(undefined1 (**) [16])pauVar12[5] == (undefined1 (*) [16])0x0) {
      pauVar14 = local_200;
    }
    uVar26 = *(uint *)*pauVar14;
    if (uVar26 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar20 = 0;
      uVar31 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar31 = uVar20;
      }
      iVar8 = 0;
      do {
        if (uVar31 == uVar20) goto LAB_141514d85;
        iVar8 = iVar8 + 0x20;
        uVar26 = *(uint *)(*pauVar14 + uVar20 * 4 + 4);
        uVar20 = uVar20 + 1;
      } while (uVar26 == 0);
    }
    else {
      uVar20 = 0;
      iVar8 = 0;
    }
    uVar31 = (ulonglong)(-uVar26 & uVar26);
    uVar2 = uVar31 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar15 = (iVar8 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 != iVar7) {
    uVar26 = 0xffffffff;
    iVar9 = DAT_14ca80560;
    iVar16 = DAT_14ca8058c;
    iVar17 = iVar7;
    do {
      if (iVar9 != iVar16) {
        uVar22 = *(uint *)(*(longlong *)*local_1f8 + (longlong)iVar15 * 0xc0);
        puVar27 = DAT_14ca80598;
        if (DAT_14ca80598 == (undefined *)0x0) {
          puVar27 = &DAT_14ca80590;
        }
        uVar3 = *(uint *)(puVar27 + (ulonglong)(DAT_14ca805a0 - 1U & uVar22) * 4);
        while (uVar3 != 0xffffffff) {
          puVar1 = (uint *)(DAT_14ca80558 + (longlong)(int)uVar3 * 0x18);
          if (*puVar1 == uVar22) {
            if ((puVar1 != (uint *)0x0) && (*(longlong *)(puVar1 + 2) != 0)) goto LAB_141514ecb;
            break;
          }
          uVar3 = puVar1[4];
        }
      }
      puVar21 = (undefined4 *)(*(longlong *)*local_1f8 + (longlong)iVar15 * 0xc0);
      local_1a8 = (undefined4 *)FUN_14001cc68(0x28,0x10);
      *local_1a8 = 0xffffffff;
      local_1a8[1] = 0xffffffff;
      local_1a8[2] = 0xffffffff;
      local_1a8[3] = 0xffffffff;
      *(undefined8 *)(local_1a8 + 4) = 0;
      *(undefined8 *)(local_1a8 + 6) = 0;
      local_1a8[8] = 0;
      local_1a8[8] = *puVar21;
      *(undefined8 *)(local_1a8 + 6) = 0xffffffffffffffff;
      local_188._8_8_ = &local_1a8;
      local_188._0_8_ = puVar21;
      FUN_14151e2ce(&local_1b8,local_188);
      iVar17 = *(int *)(pauVar12[5] + 8);
      iVar9 = DAT_14ca80560;
      iVar16 = DAT_14ca8058c;
LAB_141514ecb:
      uVar26 = uVar26 & ~(uint)uVar31;
      pauVar14 = *(undefined1 (**) [16])pauVar12[5];
      if (*(undefined1 (**) [16])pauVar12[5] == (undefined1 (*) [16])0x0) {
        pauVar14 = local_200;
      }
      iVar15 = (int)uVar20;
      lVar18 = (longlong)iVar15;
      uVar22 = *(uint *)(*pauVar14 + lVar18 * 4) & uVar26;
      if (uVar22 == 0) {
        iVar23 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar23 = iVar17 + -1;
        }
        iVar23 = iVar23 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar24 = iVar23;
        if (iVar23 < iVar15) {
          iVar24 = iVar15;
        }
        if (iVar15 < iVar23) {
          lVar28 = 0;
          do {
            uVar22 = *(uint *)(*pauVar14 + lVar28 * 4 + lVar18 * 4 + 4);
            if (uVar22 != 0) {
              uVar20 = (ulonglong)(iVar15 + (int)lVar28 + 1);
              uVar26 = 0xffffffff;
              goto LAB_141514f4a;
            }
            iVar8 = iVar8 + 0x20;
            lVar28 = lVar28 + 1;
          } while (iVar24 - lVar18 != lVar28);
          uVar26 = 0xffffffff;
          lVar18 = (longlong)iVar24;
        }
        uVar20 = lVar18 + 1U & 0xffffffff;
        iVar15 = iVar17;
      }
      else {
LAB_141514f4a:
        uVar31 = (ulonglong)(-uVar22 & uVar22);
        uVar2 = uVar31 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar15 = (iVar8 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar17 <= iVar15) {
          iVar15 = iVar17;
        }
      }
    } while (iVar15 != iVar7);
  }
LAB_141514d85:
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  puVar5 = local_208;
  pauVar14 = local_210;
  if ((char)uVar19 == '\0') {
    if (pauVar12 != (undefined1 (*) [16])0x0) {
      FUN_14153869a(pauVar12);
LAB_141514dbe:
      FUN_1400020a8(pauVar12);
    }
  }
  else {
    local_188._8_8_ = &local_1f0;
    local_188._0_8_ = local_208;
    FUN_14610fba4(&local_198,local_188);
    local_188._8_8_ = puVar5;
    local_188._0_8_ = pauVar14;
    FUN_146160452(&local_198,local_188);
    pauVar12 = local_1f0;
    if (local_1f0 != (undefined1 (*) [16])0x0) {
      FUN_14153869a(local_1f0);
      goto LAB_141514dbe;
    }
  }
LAB_14151481b:
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
LAB_141514828:
  if ((local_70 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return uVar29;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141515cba FUN_141515cba body=129 status=ok
// SIG undefined FUN_141515cba(void)

void FUN_141515cba(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x70) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_141515cd5;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_141515cd5:
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141515d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141515d3c FUN_141515d3c body=71 status=ok
// SIG undefined FUN_141515d3c(void)

void FUN_141515d3c(undefined8 *param_1)

{
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf) = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f80000000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x41c00000;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 2;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  return;
}



// FUNCTION 141515d84 FUN_141515d84 body=460 status=ok
// SIG undefined FUN_141515d84(void)

undefined8 * FUN_141515d84(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14adcb940;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 2;
  puVar2 = param_1 + 4;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = puVar2;
  if (*(int *)(param_1 + 7) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 3)) {
    do {
      FUN_14816cb44(*local_78 + (longlong)iStack_5c * 0xd0 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 3));
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_145c8a91a(plVar1,0);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141515f52 FUN_141515f52 body=71 status=ok
// SIG undefined FUN_141515f52(void)

undefined8 * FUN_141515f52(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 141515f9a FUN_141515f9a body=1592 status=ok
// SIG undefined FUN_141515f9a(void)

void FUN_141515f9a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x2c8))();
  if ((((*(int *)((longlong)param_1 + 0x2c) == 0) ||
       (uVar2 = *(uint *)(param_1 + 5), (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) ||
     (((lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar9 == 0 ||
       (*(int *)(lVar9 + 0x10) != *(int *)((longlong)param_1 + 0x2c))) ||
      ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)))) goto LAB_1415160a1;
  lVar9 = param_2[1];
  if (lVar9 == 0) {
    uVar5 = FUN_145cd7d3c();
    lVar9 = FUN_14477b664(uVar5);
    param_2[1] = lVar9;
  }
  if (param_2[2] == 0) {
    if ((lVar9 == 0) || (*param_2 == 0)) goto LAB_1415160a1;
    plVar10 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
      param_2[2] = 0;
      goto LAB_1415160a1;
    }
    uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
    lVar9 = FUN_144aff482(uVar5,param_2);
    param_2[2] = lVar9;
    if (lVar9 == 0) goto LAB_1415160a1;
  }
  if ((((((*(int *)((longlong)param_1 + 0x2c) != 0) &&
         (uVar2 = *(uint *)(param_1 + 5), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
       ((plVar10 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)((longlong)param_1 + 0x2c))))) &&
      ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) &&
     ((*plVar10 != 0 && (iVar4 = FUN_14490d72a(), iVar4 == 1)))) goto LAB_1415160a1;
  lVar9 = param_2[1];
  if (lVar9 == 0) {
    uVar5 = FUN_145cd7d3c();
    lVar9 = FUN_14477b664(uVar5);
    param_2[1] = lVar9;
  }
  lVar6 = param_2[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar9 != 0)) && (*param_2 != 0)) {
    plVar10 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar10 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar10 + 0x108))(), cVar3 == '\0'))
    {
      lVar6 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
      lVar6 = FUN_144aff482(uVar5,param_2);
    }
    param_2[2] = lVar6;
  }
  FUN_146559e76(lVar6,&local_48);
  plVar10 = local_40;
  if ((longlong **)(param_1 + 10) != &local_48) {
    param_1[10] = (longlong)local_48;
    local_48 = (longlong *)0x0;
    plVar8 = (longlong *)param_1[0xb];
    if (local_40 != plVar8) {
      local_40 = (longlong *)0x0;
      param_1[0xb] = (longlong)plVar10;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar8 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
  }
  plVar10 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (*(int *)((longlong)param_1 + 0x2c) == 0) {
LAB_1415165a6:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 5);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)((longlong)param_1 + 0x2c) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1415165a6;
      uVar5 = *puVar11;
    }
  }
  lVar9 = param_2[1];
  if (lVar9 == 0) {
    uVar7 = FUN_145cd7d3c();
    lVar9 = FUN_14477b664(uVar7);
    param_2[1] = lVar9;
  }
  lVar6 = param_2[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar9 != 0)) && (*param_2 != 0)) {
    plVar10 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
      lVar6 = FUN_144aff482(uVar7,param_2);
    }
    param_2[2] = lVar6;
  }
  local_60 = *(undefined8 *)(lVar6 + 0x18);
  local_58 = *(undefined4 *)(lVar6 + 0x20);
  local_50 = 0;
  FUN_146559f24(&local_48,&local_60,param_1 + 7,uVar5);
  plVar8 = local_40;
  param_1[8] = (longlong)local_48;
  local_48 = (longlong *)0x0;
  plVar10 = (longlong *)param_1[9];
  if (local_40 == plVar10) {
LAB_14151635c:
    plVar10 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_40)(local_40);
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
  else {
    local_40 = (longlong *)0x0;
    param_1[9] = (longlong)plVar8;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      goto LAB_14151635c;
    }
  }
  lVar9 = param_2[1];
  if (lVar9 == 0) {
    uVar5 = FUN_145cd7d3c();
    lVar9 = FUN_14477b664(uVar5);
    param_2[1] = lVar9;
  }
  lVar6 = param_2[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar9 != 0)) && (*param_2 != 0)) {
    plVar10 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
      lVar6 = FUN_144aff482(uVar5,param_2);
    }
    param_2[2] = lVar6;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x78,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b41f310;
  plVar10 = plVar8 + 2;
  FUN_14655aa7a(plVar10,lVar6 + 0x30);
  local_48 = plVar10;
  local_40 = plVar8;
  FUN_14892f934(&local_48,plVar10);
  if (plVar8 == (longlong *)0x0) {
    param_1[0xc] = 0x10;
    plVar10 = (longlong *)param_1[0xd];
    if (plVar10 != (longlong *)0x0) {
      param_1[0xd] = 0;
LAB_1415164a9:
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
joined_r0x00014151649c:
        if (iVar4 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[0xc] = (longlong)plVar10;
    plVar10 = (longlong *)param_1[0xd];
    if (plVar8 == plVar10) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        plVar10 = plVar8;
        goto joined_r0x00014151649c;
      }
    }
    else {
      param_1[0xd] = (longlong)plVar8;
      if (plVar10 != (longlong *)0x0) goto LAB_1415164a9;
    }
  }
  plVar10 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  lVar9 = param_2[1];
  if (lVar9 == 0) {
    uVar5 = FUN_145cd7d3c();
    lVar9 = FUN_14477b664(uVar5);
    param_2[1] = lVar9;
  }
  lVar6 = param_2[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar9 != 0)) && (*param_2 != 0)) {
    plVar10 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
      lVar6 = FUN_144aff482(uVar5,param_2);
    }
    param_2[2] = lVar6;
  }
  FUN_145eff776(param_1 + 0xe,lVar6 + 0x98);
  lVar9 = param_1[0xc];
  if (lVar9 != 0) {
    local_70 = param_1[8];
    local_68 = param_1[9];
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    FUN_140a26a1e(lVar9,&local_70);
  }
LAB_1415160a1:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415165d4 FUN_1415165d4 body=221 status=ok
// SIG undefined FUN_1415165d4(void)

longlong FUN_1415165d4(void)

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
  if (DAT_14cab2770 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1475472e1;
    local_40 = &LAB_14633c0b5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntitySystem",&DAT_14cab2770,&DAT_1475472e0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2770;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415166b2 FUN_1415166b2 body=652 status=ok
// SIG undefined FUN_1415166b2(void)

void FUN_1415166b2(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0 < (longlong)*(int *)(param_1 + 0x188)) {
    uVar8 = (longlong)*(int *)(param_1 + 0x188);
    do {
      uVar9 = uVar8 - 1;
      lVar5 = *(longlong *)(param_1 + 0x180);
      iVar1 = *(int *)(lVar5 + 4 + uVar9 * 0x70);
      if (((((iVar1 != 0) && (uVar2 = *(uint *)(lVar5 + uVar9 * 0x70), -1 < (int)uVar2)) &&
           ((int)uVar2 < DAT_14c9647dc)) &&
          ((plVar6 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)))) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar5 = *plVar6, lVar5 != 0)))) {
        if (DAT_14cac9ca8 == 0) {
          local_50 = FUN_141030f22;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_14081d0ea;
          local_70 = &local_50;
          local_78 = &LAB_1478c0a72;
          local_80 = (code *)&LAB_1417b2375;
          local_88 = L"Engine";
          local_90 = 0x1000000000;
          local_98 = 0x10000004;
          local_a0 = 8;
          local_a8 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        lVar4 = DAT_14cac9ca8;
        if (DAT_14c951858 == 0) {
          local_50 = FUN_1449e2820;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_14081d0ea;
          local_70 = &local_50;
          local_78 = &LAB_1468c5283;
          local_80 = FUN_142809da0;
          local_88 = L"Engine";
          local_90 = 0x400000000;
          local_98 = 0x10000000;
          local_a0 = 8;
          local_a8 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar5 = *(longlong *)(lVar5 + 0x20);
        if (lVar5 == 0) {
          lVar7 = 0;
        }
        else {
          iVar1 = *(int *)(lVar4 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar1) ||
               (lVar7 = lVar5,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
               lVar4 + 0x30)) {
              lVar7 = 0;
            }
          } while ((lVar7 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
        }
        if (lVar7 == param_2) {
          FUN_1463ba576((longlong *)(param_1 + 0x180),uVar9 & 0xffffffff);
        }
      }
      bVar3 = 1 < uVar8;
      uVar8 = uVar9;
    } while (bVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141516940 FUN_141516940 body=135 status=ok
// SIG undefined FUN_141516940(void)

undefined8 FUN_141516940(longlong param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar3 = (longlong)*(int *)(param_1 + 0x88) * 0x38;
    do {
      cVar1 = FUN_140d6591c(lVar2,param_2);
      if (cVar1 != '\0') {
        if (lVar2 == 0) {
          return 0;
        }
        lVar3 = 0x20;
        if (param_4 != '\x02') {
          if (param_4 != '\x01') {
            return 0;
          }
          lVar3 = 8;
        }
        if (lVar2 + lVar3 == 0) {
          return 0;
        }
        if (*param_3 == 0) {
          return 0;
        }
        FUN_14480f766(lVar2 + lVar3);
        return 0;
      }
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 1415169c8 FUN_1415169c8 body=1537 status=ok
// SIG undefined FUN_1415169c8(void)

void FUN_1415169c8(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  int local_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined8 local_88;
  int local_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined1 local_60 [16];
  undefined1 *local_50;
  int local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  local_78 = 0;
  uStack_70 = 0;
  FUN_144a8c360();
  local_50 = (undefined1 *)0x0;
  local_44 = 0x80;
  local_48 = *(int *)(param_1 + 0xc0);
  uVar9 = *(int *)(param_1 + 0xc0) + 0x1f;
  if (uVar9 < 0x20) goto LAB_141516a90;
  if (uVar9 < 0xa0) {
    puVar7 = local_60;
LAB_141516a48:
    uVar9 = uVar9 >> 3 & 0xfffffffc;
  }
  else {
    FUN_14499171c(local_60,0,uVar9 >> 5,4);
    local_44 = uVar9 & 0xffffffe0;
    puVar7 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar7 = local_60;
    }
    if (uVar9 < 0x120) goto LAB_141516a48;
    uVar9 = (uVar9 >> 5) << 2;
  }
  memset(puVar7,0,(ulonglong)uVar9);
  iVar8 = local_48 + 0x1f;
  if (-1 < local_48) {
    iVar8 = local_48;
  }
  if (local_48 % 0x20 != 0) {
    puVar7 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar7 = local_60;
    }
    bVar5 = -(char)(local_48 % 0x20);
    *(uint *)(puVar7 + (longlong)(iVar8 >> 5) * 4) =
         (uint)(*(int *)(puVar7 + (longlong)(iVar8 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  }
LAB_141516a90:
  if (0 < *(int *)(param_1 + 0xc0)) {
    uVar6 = 0;
    do {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + uVar6 * 8);
      if (lVar11 != 0) {
        bVar5 = *(byte *)(lVar11 + 0x10);
        if (bVar5 == 1) {
LAB_141516abe:
          if (*(longlong *)(lVar11 + 0x108) != 0) {
            piVar3 = (int *)(local_78 + (longlong)*(int *)(*(longlong *)(lVar11 + 0x108) + 0x1c) * 4
                            );
            *piVar3 = *piVar3 + 1;
            puVar7 = local_50;
            if (local_50 == (undefined1 *)0x0) {
              puVar7 = local_60;
            }
            *(uint *)(puVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) =
                 *(uint *)(puVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) | 1 << ((byte)uVar6 & 0x1f);
          }
        }
        else if (bVar5 < 0x10) {
          if ((bVar5 == 2) || (bVar5 == 4)) {
            lVar14 = lVar11 + 0x110;
            if (*(longlong *)(lVar11 + 0x1a0) != 0) {
              lVar14 = *(longlong *)(lVar11 + 0x1a0);
            }
            iVar8 = *(int *)(lVar11 + 0x1b0);
            if ((longlong)iVar8 != 0) {
              lVar11 = 0;
              do {
                if (*(longlong *)(lVar14 + lVar11) != 0) {
                  piVar3 = (int *)(local_78 +
                                  (longlong)*(int *)(*(longlong *)(lVar14 + lVar11) + 0x1c) * 4);
                  *piVar3 = *piVar3 + 1;
                  puVar7 = local_50;
                  if (local_50 == (undefined1 *)0x0) {
                    puVar7 = local_60;
                  }
                  *(uint *)(puVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) =
                       *(uint *)(puVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) | 1 << ((byte)uVar6 & 0x1f);
                }
                lVar11 = lVar11 + 0x90;
              } while ((longlong)iVar8 * 0x90 != lVar11);
            }
          }
        }
        else if (((bVar5 == 0x10) || (bVar5 == 0x80)) || (bVar5 == 0x20)) goto LAB_141516abe;
      }
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0xc0));
  }
  uVar6 = 0;
  iVar8 = 0;
  if ((longlong)(int)uStack_70 != 0) {
    lVar11 = 0;
    iVar8 = 0;
    do {
      iVar8 = iVar8 + (uint)(0 < *(int *)(local_78 + lVar11));
      lVar11 = lVar11 + 4;
    } while ((longlong)(int)uStack_70 * 4 != lVar11);
  }
  plVar1 = (longlong *)(param_1 + 0x288);
  FUN_145c8ec70(plVar1,iVar8);
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar14 = 0;
    uVar6 = 0;
    lVar11 = local_78;
    do {
      if (*(int *)(lVar11 + lVar14 * 4) == 0) {
        *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar14 * 8) + 0x30) =
             0xffffffff;
      }
      else {
        iVar8 = *(int *)(param_1 + 0x290);
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar14 * 8) + 0x30) = iVar8;
        uVar9 = *(uint *)(lVar11 + lVar14 * 4);
        *(uint *)(param_1 + 0x290) = iVar8 + 1U;
        if (*(uint *)(param_1 + 0x294) < iVar8 + 1U) {
          FUN_14920d94a(plVar1,iVar8);
        }
        *(ulonglong *)(*plVar1 + (longlong)iVar8 * 8) = uVar6 | (ulonglong)uVar9 << 0x20;
        uVar6 = (ulonglong)(uint)((int)uVar6 + *(int *)(local_78 + lVar14 * 4));
        lVar11 = local_78;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_1 + 0xc0));
  }
  plVar2 = (longlong *)(param_1 + 0x298);
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  if (*(int *)(param_1 + 0x2a4) < 0) {
    FUN_1466d195e(plVar2,0);
  }
  FUN_145c8ecfa(plVar2,uVar6);
  bVar15 = (longlong)uStack_70 < 0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  if (bVar15) {
    FUN_14481578e(&local_78,0);
  }
  FUN_144a8c360(&local_78,*(undefined4 *)(param_1 + 0xc0));
  local_98 = 0;
  uStack_94 = 1;
  local_90 = local_60;
  local_88 = 0xffffffff;
  local_80 = 0;
  if (local_48 != 0) {
    FUN_1449c0562(&local_98);
    iVar8 = local_88._4_4_;
    while (iVar8 < *(int *)(local_90 + 0x18)) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar8 * 8);
      if (lVar11 != 0) {
        bVar5 = *(byte *)(lVar11 + 0x10);
        if (bVar5 == 1) {
LAB_141516d1b:
          lVar14 = *(longlong *)(lVar11 + 0x108);
          if (lVar14 != 0) {
            iVar8 = *(int *)(lVar14 + 0x1c);
            *(longlong *)
             (*plVar2 +
             ((longlong)*(int *)(local_78 + (longlong)iVar8 * 4) +
             (longlong)*(int *)(*plVar1 + (longlong)*(int *)(lVar14 + 0x30) * 8)) * 8) = lVar11;
            piVar3 = (int *)(local_78 + (longlong)iVar8 * 4);
            *piVar3 = *piVar3 + 1;
          }
        }
        else if (bVar5 < 0x10) {
          if ((bVar5 == 2) || (bVar5 == 4)) {
            lVar14 = lVar11 + 0x110;
            if (*(longlong *)(lVar11 + 0x1a0) != 0) {
              lVar14 = *(longlong *)(lVar11 + 0x1a0);
            }
            iVar8 = *(int *)(lVar11 + 0x1b0);
            if ((longlong)iVar8 != 0) {
              lVar12 = 0;
              do {
                lVar4 = *(longlong *)(lVar14 + lVar12);
                if (lVar4 != 0) {
                  iVar13 = *(int *)(lVar4 + 0x1c);
                  *(longlong *)
                   (*plVar2 +
                   ((longlong)*(int *)(local_78 + (longlong)iVar13 * 4) +
                   (longlong)*(int *)(*plVar1 + (longlong)*(int *)(lVar4 + 0x30) * 8)) * 8) = lVar11
                  ;
                  piVar3 = (int *)(local_78 + (longlong)iVar13 * 4);
                  *piVar3 = *piVar3 + 1;
                }
                lVar12 = lVar12 + 0x90;
              } while ((longlong)iVar8 * 0x90 != lVar12);
            }
          }
        }
        else if (((bVar5 == 0x10) || (bVar5 == 0x80)) || (bVar5 == 0x20)) goto LAB_141516d1b;
      }
      local_88._0_4_ = ~uStack_94 & (uint)local_88;
      puVar7 = *(undefined1 **)(local_90 + 0x10);
      if (*(undefined1 **)(local_90 + 0x10) == (undefined1 *)0x0) {
        puVar7 = local_90;
      }
      iVar8 = *(int *)(local_90 + 0x18);
      lVar11 = (longlong)local_98;
      uVar9 = (uint)local_88 & *(uint *)(puVar7 + lVar11 * 4);
      if (uVar9 == 0) {
        iVar13 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar13 = iVar8 + -1;
        }
        iVar10 = iVar13 >> 5;
        if (iVar13 >> 5 < local_98) {
          iVar10 = local_98;
        }
        iVar13 = local_98 + 1;
        lVar14 = 0;
        do {
          local_98 = iVar13 + (int)lVar14;
          local_80 = local_80 + 0x20;
          if (iVar10 - lVar11 == lVar14) goto LAB_141516e07;
          uVar9 = *(uint *)(puVar7 + lVar14 * 4 + lVar11 * 4 + 4);
          local_88._0_4_ = 0xffffffff;
          lVar14 = lVar14 + 1;
        } while (uVar9 == 0);
      }
      uStack_94 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_94 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar13 = (local_80 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if (iVar13 < iVar8) {
        iVar8 = iVar13;
      }
LAB_141516e07:
      local_88 = CONCAT44(iVar8,(uint)local_88);
    }
  }
  *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_1 + 0xa8);
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141516fca FUN_141516fca body=3733 status=ok
// SIG undefined FUN_141516fca(void)

void FUN_141516fca(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined8 local_2d0;
  ulonglong *local_2c8;
  code *local_2c0;
  ulonglong *local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298 [12];
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  ulonglong local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  ulonglong local_1e0 [3];
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined2 local_1c0;
  undefined2 uStack_1be;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined2 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined **local_60;
  undefined *local_58;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_128 = 0;
  local_120 = 0x4000;
  local_118 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947e70) {
    FUN_144b3d300(&DAT_14c947e70);
    if (DAT_14c947e70 == -1) {
      local_2c8 = (ulonglong *)FUN_1446ddbd2();
      local_2c0 = FUN_14170fd90;
      local_2d0 = 0x8000000000000000;
      local_2d8 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_128);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_128);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_128 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_128);
    }
  }
  local_130 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_2c8 = (ulonglong *)FUN_1446ddbd2();
      local_2c0 = FUN_1468d96f0;
      local_2d0 = 0;
      local_2d8 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_130);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_130);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_130);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_130 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_130);
    }
  }
  local_190 = local_190 & 0xffffff00;
  uStack_18c = 0;
  uStack_188 = 0;
  local_180 = 0;
  local_178 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  uStack_170 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  local_168 = DAT_14c846508;
  local_160 = 0;
  local_15c = 0;
  local_150 = 0;
  local_148 = (undefined4)DAT_14c8464e0;
  uStack_144 = DAT_14c8464e0._4_4_;
  uStack_140 = (undefined4)DAT_14c8464e8;
  uStack_13c = DAT_14c8464e8._4_4_;
  local_138 = DAT_14c8464f0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_2c8 = (ulonglong *)FUN_1446ddbd2();
      local_2c0 = FUN_1403a682c;
      local_2d0 = 0;
      local_2d8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_190);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_190);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_190);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
      local_190 = (uint)uVar1;
      uStack_18c = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_190);
    }
  }
  local_1c0 = 0;
  uStack_1b8 = (undefined4)DAT_14c8464f8;
  uStack_1b4 = DAT_14c8464f8._4_4_;
  uStack_1b0 = (undefined4)DAT_14c846500;
  uStack_1ac = DAT_14c846500._4_4_;
  uStack_1a8 = DAT_14c846508;
  local_1a0 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_2c8 = (ulonglong *)FUN_1446ddbd2();
      local_2c0 = FUN_1403a682c;
      local_2d0 = 0;
      local_2d8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c0);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_1c0);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_1c0);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
      local_1c0 = (undefined2)uVar1;
      uStack_1be = (undefined2)((ulonglong)uVar1 >> 0x10);
      uStack_1bc = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_1c0);
    }
  }
  uStack_1c4 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_2c0 = FUN_1408a629c;
      local_2c8 = (ulonglong *)&DAT_14c9520b8;
      local_2d0 = 0;
      local_2d8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_1c4);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_1c4);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_1c4);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
      uStack_1c4 = (undefined4)uVar1;
      local_1c0 = (undefined2)((ulonglong)uVar1 >> 0x20);
      uStack_1be = (undefined2)((ulonglong)uVar1 >> 0x30);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_1c4);
    }
  }
  local_1c8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_2c0 = FUN_1408a629c;
      local_2c8 = (ulonglong *)&DAT_14c9520b8;
      local_2d0 = 0;
      local_2d8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c8);
LAB_14151746f:
    pbVar7 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_1c8);
      goto LAB_14151746f;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_1c8);
      goto LAB_14151746f;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_1c8);
      goto LAB_14151746f;
    }
    uVar1 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    local_1c8 = (undefined4)uVar1;
    uStack_1c4 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  local_1e0[0] = local_1e0[0] & 0xffffffffffffff00;
  local_1e0[1] = 0;
  local_1e0[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1e0);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_1e0);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_1e0);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_1e0[0] = *(ulonglong *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_1e0);
    }
  }
  puVar3 = *(ulonglong **)(param_2 + 0x38);
  local_110 = (ulonglong)local_110._4_4_ << 0x20;
  local_108 = 0;
  local_100 = 0x3002;
  local_f8 = 0;
  local_c0 = 0;
  local_b8 = 0x200000000;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0xf00000d0;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_1405c5fa2();
  local_58 = &DAT_14cb769e8;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = &PTR_FUN_14b0394b0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_110);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_110);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        local_110 = *(longlong *)(pbVar7 + 1);
        pbVar7 = pbVar7 + 9;
        *(byte **)(param_2 + 0x20) = pbVar7;
        puVar10 = (undefined8 *)0x0;
        goto LAB_14151763a;
      }
      (*pcVar2)(uVar1,param_2,&local_110);
    }
  }
  pbVar7 = *(byte **)(param_2 + 0x20);
  puVar10 = *(undefined8 **)(param_2 + 0x38);
LAB_14151763a:
  local_200 = local_200 & 0xffffffffffffff00;
  local_1f8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_1f0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_1e8 = DAT_14c8464f0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_200);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_200);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_200);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_200 = *(ulonglong *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_200);
    }
  }
  uVar6 = uStack_1c4;
  uVar5 = local_1c8;
  local_2c0 = (code *)puVar10;
  if (puVar10 == (undefined8 *)0x0) {
    local_2c0 = (code *)&local_110;
  }
  local_2c8 = local_1e0;
  if (puVar3 != (ulonglong *)0x0) {
    local_2c8 = puVar3;
  }
  local_2b8 = &local_200;
  if (*(ulonglong **)(param_2 + 0x38) != (ulonglong *)0x0) {
    local_2b8 = *(ulonglong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_238 = CONCAT22(uStack_1be,local_1c0);
  local_218 = CONCAT44(uStack_19c,local_1a0);
  uStack_210 = CONCAT44(uStack_194,uStack_198);
  uStack_234 = uStack_1bc;
  uStack_230 = uStack_1b8;
  uStack_22c = uStack_1b4;
  local_228 = uStack_1b0;
  uStack_224 = uStack_1ac;
  uStack_220 = (undefined4)uStack_1a8;
  uStack_21c = uStack_1a8._4_4_;
  puVar9 = &local_190;
  puVar10 = local_298;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *(undefined8 *)puVar9;
    puVar9 = puVar9 + 2;
    puVar10 = puVar10 + 1;
  }
  local_2b0 = local_128;
  local_2a8 = local_120;
  local_2a0 = 0;
  local_2d0 = CONCAT44(local_2d0._4_4_,uVar5);
  local_2d8 = CONCAT44(local_2d8._4_4_,uVar6);
  FUN_141517e60(&local_2b0,local_130);
  local_60 = (undefined **)&DAT_14a171d50;
  uVar4 = uStack_48 >> 0x20;
  uStack_48 = uStack_48 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    FUN_140115c12(&local_50,0);
  }
  local_58 = (undefined *)0x0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141517e60 FUN_141517e60 body=271 status=ok
// SIG undefined FUN_141517e60(void)

void FUN_141517e60(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined4 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [12];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_58 = *param_4;
  uStack_54 = param_4[1];
  uStack_50 = param_4[2];
  uStack_4c = param_4[3];
  local_48 = *(undefined8 *)(param_4 + 4);
  uStack_40 = *(undefined8 *)(param_4 + 6);
  local_38 = *(undefined8 *)(param_4 + 8);
  uStack_30 = *(undefined8 *)(param_4 + 10);
  local_100 = &local_58;
  local_108 = local_b8;
  puVar4 = local_108;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_d0 = *param_1;
  local_c8 = *(undefined4 *)(param_1 + 1);
  local_c0 = 0;
  local_e0 = param_7;
  uStack_d8 = param_8;
  local_e8 = param_6;
  local_f0 = param_5;
  local_f8 = param_9;
  FUN_141485505(local_28,param_6,&local_d0,param_2);
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
  if ((local_18 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141517f70 FUN_141517f70 body=79 status=ok
// SIG undefined FUN_141517f70(void)

void FUN_141517f70(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (ulonglong *)(param_1 + 0x38);
    do {
      if (*puVar1 != 0 && (*puVar1 & 1) == 0) {
        FUN_1400020a8();
      }
      if (puVar1[-4] != 0 && (puVar1[-4] & 1) == 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141517fc0 FUN_141517fc0 body=366 status=ok
// SIG undefined FUN_141517fc0(void)

undefined4 *
FUN_141517fc0(undefined4 *param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = param_2;
  local_88 = (undefined8 *)(param_1 + 1);
  local_78 = (longlong *)(param_1 + 3);
  local_80 = (longlong *)(param_1 + 5);
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  local_70 = *param_3;
  local_68 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    local_68 = 0;
  }
  FUN_1448405cc(&local_70);
  plVar1 = (longlong *)(param_1 + 9);
  plVar2 = (longlong *)(param_1 + 0xb);
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  local_70 = *param_4;
  local_68 = (int)param_4[1] + -1;
  if ((int)param_4[1] == 0) {
    local_68 = 0;
  }
  FUN_1448405cc(&local_70,param_1 + 7,plVar1,plVar2);
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0xd) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0xffffffff00000080;
  param_1[0x21] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  if (*(longlong *)(param_1 + 7) == 0) {
    *(undefined8 *)(param_1 + 7) = *local_88;
  }
  if (*plVar1 == 0) {
    *plVar1 = *local_78;
  }
  if (*plVar2 == 0) {
    *plVar2 = *local_80;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141518130 FUN_141518130 body=275 status=ok
// SIG undefined FUN_141518130(void)

void FUN_141518130(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xa0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141518244 FUN_141518244 body=82 status=ok
// SIG undefined FUN_141518244(void)

undefined8 * FUN_141518244(undefined8 *param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  param_1[2] = 0;
  if (param_2 != 0) {
    plVar3 = (longlong *)FUN_141817c28(param_2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      uVar1 = *(undefined2 *)(lVar4 + 0x28);
      uVar2 = *(undefined8 *)(lVar4 + 0x30);
      *param_1 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined2 *)(param_1 + 1) = uVar1;
      param_1[2] = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 141518296 FUN_141518296 body=106 status=ok
// SIG undefined FUN_141518296(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141518296(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb05a08) {
    FUN_144b3d300(&DAT_14cb05a08);
    if (DAT_14cb05a08 == -1) {
      DAT_14cb059f8 = 0;
      _DAT_14cb05a00 = 0;
      atexit(FUN_1436af53a);
      _Init_thread_footer(&DAT_14cb05a08);
    }
  }
  return &DAT_14cb059f8;
}



// FUNCTION 141518300 FUN_141518300 body=341 status=ok
// SIG undefined FUN_141518300(void)

void FUN_141518300(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b433870;
  param_1[4] = &PTR_FUN_14b433890;
  param_1[6] = &PTR_FUN_14b4338b0;
  if (param_1[0x480] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x47a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x379) = 0;
  if (param_1[0x378] != 0) {
    FUN_1400020a8();
  }
  FUN_145afbe9a(param_1 + 0x365);
  if (param_1[0x363] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35d] != 0) {
    FUN_1400020a8();
  }
  lVar2 = param_1[0x358];
  if (lVar2 != 0) {
    FUN_1409c1d1e(lVar2);
    FUN_1400020a8(lVar2);
  }
  *(undefined4 *)(param_1 + 0x356) = 0;
  if (param_1[0x355] != 0) {
    FUN_1400020a8();
  }
  FUN_1457da450(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14114f6be(param_1 + 6);
  param_1[4] = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 0x29) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 4);
    *(undefined1 *)((longlong)param_1 + 0x29) = 0;
  }
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141518448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141518456 FUN_141518456 body=1786 status=ok
// SIG undefined FUN_141518456(void)

undefined8 * FUN_141518456(longlong param_1,undefined8 *param_2,longlong param_3,DWORD *param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  LARGE_INTEGER *pLVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined1 local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [8];
  code *local_d0;
  LARGE_INTEGER *local_c8;
  LARGE_INTEGER local_c0;
  longlong *local_b8;
  ushort local_a8;
  byte local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_3 == 0) {
    if ((*(longlong *)(param_1 + 0x698) == 0) ||
       (plVar7 = *(longlong **)(param_1 + 0x6a0), plVar7 == (longlong *)0x0)) goto LAB_141518500;
  }
  else {
    if ((*(longlong *)(param_1 + 0x698) == 0) ||
       (plVar7 = *(longlong **)(param_1 + 0x6a0), plVar7 == (longlong *)0x0)) goto LAB_141518500;
    if (((*(longlong *)(param_1 + 0x690) != 0) && (*(longlong *)(param_1 + 0x690) == param_3)) &&
       (*(char *)(param_1 + 0x6b0) == '\0')) {
      lVar4 = FUN_140bb4cf4(param_1,param_3);
      if (lVar4 == 0) goto LAB_141518500;
      if ((*(char *)(param_1 + 0x675) == '\x01') || (*(longlong *)(param_1 + 0x638) == 0)) {
        lVar12 = param_1 + 0x678;
      }
      else {
        lVar12 = *(longlong *)(param_1 + 0x638) + 0x80;
      }
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      local_a8 = 8;
      local_c0.s.HighPart = 0;
      if (param_1 == 0) {
        local_c0.s.LowPart = 0;
        iVar3 = 0;
      }
      else {
        local_c0.s.LowPart = *(uint *)(param_1 + 0xc);
        if ((int)local_c0.s.LowPart < DAT_14c9647dc) {
          lVar10 = (ulonglong)((local_c0.s.LowPart & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_c0.s.LowPart >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar3 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar3 = *(int *)(lVar10 + 0x10);
          bVar13 = iVar3 == 0;
          if (bVar13) {
            *(int *)(lVar10 + 0x10) = iVar9;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar13) {
            iVar3 = iVar9;
          }
        }
      }
      pLVar11 = &local_c0;
      local_a0 = 0xe;
      local_d0 = (code *)&DAT_14cb88c40;
      local_c8 = pLVar11;
      local_c0.s.HighPart = iVar3;
      FUN_140881f5a(&local_98,local_d8,&local_d0,0);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_a8) {
          pLVar11 = (LARGE_INTEGER *)CONCAT44(local_c0.s.HighPart,local_c0.s.LowPart);
        }
        (*pcVar2)(pLVar11);
      }
      if (0x18 < local_a8) {
        FUN_1400020a8(CONCAT44(local_c0.s.HighPart,local_c0.s.LowPart));
      }
      if ((*(char *)(param_1 + 0x66a) == '\0') && (*(longlong *)(param_1 + 0x638) != 0)) {
        pbVar5 = (byte *)(*(longlong *)(param_1 + 0x638) + 0x91);
      }
      else {
        pbVar5 = (byte *)(param_1 + 0x669);
      }
      pLVar11 = &local_c0;
      local_a8 = 4;
      local_c0.s.LowPart = (DWORD)*pbVar5;
      local_a0 = 1;
      local_d0 = (code *)&DAT_14cb88c48;
      local_c8 = pLVar11;
      FUN_140881f5a(&local_98,local_d8,&local_d0,0);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_a8) {
          pLVar11 = (LARGE_INTEGER *)CONCAT44(local_c0.s.HighPart,local_c0.s.LowPart);
        }
        (*pcVar2)(pLVar11);
      }
      if (0x18 < local_a8) {
        FUN_1400020a8(CONCAT44(local_c0.s.HighPart,local_c0.s.LowPart));
      }
      if ((char)param_4[1] == '\x01') {
        local_c0.s.LowPart = *param_4;
      }
      else {
        if (*(char *)(param_1 + 0x675) == '\x02') {
          local_c0.s.LowPart = 1;
          local_a0 = 1;
          local_d0 = (code *)&DAT_14cb88c50;
          goto LAB_141518743;
        }
        local_c0.s.LowPart = FUN_14085b07e(lVar12);
      }
      local_a0 = 3;
      local_d0 = (code *)&DAT_14cb88c58;
LAB_141518743:
      local_a8 = 4;
      pLVar11 = &local_c0;
      local_c8 = pLVar11;
      FUN_140881f5a(&local_98,local_d8,&local_d0,0);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_a8) {
          pLVar11 = (LARGE_INTEGER *)CONCAT44(local_c0.s.HighPart,local_c0.s.LowPart);
        }
        (*pcVar2)(pLVar11);
      }
      if (0x18 < local_a8) {
        FUN_1400020a8(CONCAT44(local_c0.s.HighPart,local_c0.s.LowPart));
      }
      QueryPerformanceCounter(&local_c0);
      local_a8 = 4;
      local_a0 = 2;
      local_d0 = (code *)&DAT_14cb88c28;
      local_c8 = &local_c0;
      FUN_140881f5a(&local_98,local_d8,&local_d0,0);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
      if (0x18 < local_a8) {
        FUN_1400020a8();
      }
      if ((char)param_4[2] == '\x01') {
        local_c8 = &local_c0;
        local_a8 = 4;
        local_c0.s.LowPart = 1;
        local_a0 = 1;
        local_d0 = (code *)&DAT_14cb88c30;
        FUN_140881f5a(&local_98,local_d8,&local_d0,0);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)();
        }
        if (0x18 < local_a8) {
          FUN_1400020a8();
        }
      }
      if (*(char *)((longlong)param_4 + 9) == '\x01') {
        local_c8 = &local_c0;
        local_a8 = 4;
        local_c0.s.LowPart = 1;
        local_a0 = 1;
        local_d0 = (code *)&DAT_14cb88c38;
        FUN_140881f5a(&local_98,local_d8,&local_d0,0);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)();
        }
        if (0x18 < local_a8) {
          FUN_1400020a8();
        }
      }
      if (*(longlong *)(param_1 + 0x698) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x6a0);
      }
      uVar6 = (**(code **)(*plVar7 + 0x50))();
      local_f0 = 1;
      local_f8 = &local_98;
      FUN_14096dfee(uVar6,&local_c0,lVar4,0);
      lVar4 = CONCAT44(local_c0.s.HighPart,local_c0.s.LowPart);
      if (lVar4 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_b8 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar1 = (int *)((longlong)local_b8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_b8 + 0x10))(local_b8);
            }
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x6b0) = *(undefined1 *)(lVar4 + 0x40);
        local_d0 = FUN_145a3b482;
        local_c8 = (LARGE_INTEGER *)((ulonglong)local_c8 & 0xffffffff00000000);
        FUN_14655a2fc(lVar4 + 0x18,local_d8,param_1);
        if ((*(longlong *)(param_1 + 0x640) != 0) &&
           (plVar7 = *(longlong **)(param_1 + 0xa8), plVar7 != (longlong *)0x0)) {
          uVar6 = FUN_1407ca880();
          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
          if (plVar7 != (longlong *)0x0) {
            uVar6 = FUN_1407ca880();
            plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
            if (plVar8 != (longlong *)0x0 && plVar7 != plVar8) {
              uVar6 = (**(code **)(*plVar8 + 0x50))(plVar8);
              local_f0 = 1;
              local_f8 = &local_98;
              FUN_14096dfee(uVar6,local_e8,*(undefined8 *)(param_1 + 0x640),0);
              if (local_e0 != (longlong *)0x0) {
                LOCK();
                plVar7 = local_e0 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*local_e0)(local_e0);
                  LOCK();
                  piVar1 = (int *)((longlong)local_e0 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_e0 + 0x10))(local_e0);
                  }
                }
              }
            }
          }
        }
        *param_2 = CONCAT44(local_c0.s.HighPart,local_c0.s.LowPart);
        param_2[1] = local_b8;
      }
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_98);
      if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  }
  (**(code **)(*plVar7 + 0x50))();
LAB_141518500:
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
}



// FUNCTION 141518b52 FUN_141518b52 body=57 status=ok
// SIG undefined FUN_141518b52(void)

void FUN_141518b52(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacd18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacd18 = FUN_140002ddd(FUN_1465e4386,uVar1,L"OakMigrationEventDef");
  }
  return;
}



// FUNCTION 141518b8c FUN_141518b8c body=330 status=ok
// SIG undefined FUN_141518b8c(void)

void FUN_141518b8c(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    if (param_1[0x76] != 0) goto LAB_141518c66;
    pcVar2 = *(code **)(*param_1 + 0x5f8);
    if (pcVar2 == FUN_144784df4) {
      if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
        if (*(int *)((longlong)param_1 + 0x75b4) == 0) {
          return;
        }
        uVar1 = *(uint *)(param_1 + 0xeb6);
        if ((int)uVar1 < 0) {
          return;
        }
        if (DAT_14c9647dc <= (int)uVar1) {
          return;
        }
        plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        if ((int)plVar6[2] != *(int *)((longlong)param_1 + 0x75b4)) {
          return;
        }
        if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
          return;
        }
        if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar6;
        }
        else {
          lVar4 = 0;
        }
        lVar4 = lVar4 + 0x110;
      }
      else {
        lVar4 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
      }
      if (lVar4 == 0) {
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x20);
    }
    else {
      lVar4 = (*pcVar2)(param_1);
    }
    if (lVar4 == 0) {
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 0x3b0);
  }
  else {
    lVar4 = (*pcVar2)(param_1);
  }
  if (lVar4 == 0) {
    return;
  }
LAB_141518c66:
  cVar3 = FUN_145932e54(param_1 + 0x1076);
  if (cVar3 == '\0') {
    uVar5 = FUN_14477b072(param_1,DAT_14cba7c40);
                    /* WARNING: Could not recover jumptable at 0x000141518cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x248))(param_1,uVar5,0,*(code **)(*param_1 + 0x248));
    return;
  }
  if (param_1[0xd0a] == 0) {
    return;
  }
  FUN_14662205c();
  return;
}



// FUNCTION 141518cd6 FUN_141518cd6 body=1104 status=ok
// SIG undefined FUN_141518cd6(void)

void FUN_141518cd6(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  int local_bc;
  int local_b8;
  int local_b4;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  int local_98;
  longlong local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x28) + 0x16))
      goto LAB_141518d2c;
      plVar9 = plVar9 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_141518d2c:
  uVar1 = *(ushort *)(param_2 + 0xe);
  local_a8 = *(ulonglong *)(param_1 + 0x40);
  local_b4 = *(int *)(param_2 + 0x14);
  if (local_b4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0x4a))
      goto LAB_141518d7e;
      plVar10 = plVar10 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_141518d7e:
  lVar4 = *plVar9;
  local_b8 = *(int *)(param_2 + 0x14);
  if (local_b8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == **(short **)(*(longlong *)(param_1 + 0x28) + 0x18))
      goto LAB_141518dc7;
      plVar7 = plVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_141518dc7:
  local_c8 = *plVar10;
  local_bc = *(int *)(param_2 + 0x14);
  if (local_bc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  local_d0 = *plVar7;
  FUN_140b325e4(param_2,&local_60,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x104));
  if (local_50 == 0) {
    FUN_1410bd96e(param_2,&local_88,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x106));
    if (local_78 == 0) {
      FUN_1410bd9c4(param_2,&local_a0,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0x108));
      if ((local_90 != 0) && (uVar1 != 0)) {
        uVar8 = 0;
        do {
          uVar6 = *(undefined8 *)(local_90 + uVar8 * 2);
          if ((DAT_14c950c29 == '\x01') && (*(longlong *)(local_d0 + uVar8 * 2) != 0)) {
            FUN_1456cec3c();
          }
          uVar6 = FUN_145c97f3e(uVar6,*(undefined8 *)(local_c8 + uVar8));
          FUN_145c97ee8(uVar6,lVar4);
          uVar8 = uVar8 + 8;
          lVar4 = lVar4 + 0x10;
        } while ((uint)uVar1 * 8 != uVar8);
      }
      if (local_a0 != 0) {
        LOCK();
        *(int *)(local_a0 + 0x18) = *(int *)(local_a0 + 0x18) + -1;
        UNLOCK();
        if (local_98 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(local_a0 + 8));
        }
      }
    }
    else if (uVar1 != 0) {
      uVar8 = 0;
      do {
        uVar2 = *(ushort *)(local_78 + uVar8);
        if ((DAT_14c950c29 == '\x01') && (*(longlong *)(local_d0 + uVar8 * 8) != 0)) {
          FUN_1456cec3c();
        }
        FUN_145c97ee8(*(undefined8 *)(*(longlong *)(local_c8 + uVar8 * 4) + (ulonglong)uVar2),lVar4)
        ;
        uVar8 = uVar8 + 2;
        lVar4 = lVar4 + 0x10;
      } while ((uint)uVar1 * 2 != uVar8);
    }
    if (local_88 != 0) {
      LOCK();
      *(int *)(local_88 + 0x18) = *(int *)(local_88 + 0x18) + -1;
      UNLOCK();
      if (local_80 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(local_88 + 8));
      }
    }
  }
  else if (uVar1 != 0) {
    local_b0 = (ulonglong)((uint)uVar1 * 2);
    uVar8 = 0;
    do {
      uVar1 = *(ushort *)(local_50 + uVar8);
      iVar3 = *(int *)(param_1 + 0x3c);
      lVar5 = *(longlong *)(param_1 + 0x30);
      local_70 = *(longlong *)(local_d0 + uVar8 * 8);
      if ((DAT_14c950c29 == '\x01') && (local_70 != 0)) {
        FUN_1456cec3c();
      }
      local_68 = *(undefined1 *)(local_d0 + 8 + uVar8 * 8);
      FUN_1475e54da(*(undefined8 *)(local_c8 + uVar8 * 4),&local_70,
                    (longlong)iVar3 * (ulonglong)uVar1 + lVar5,lVar4);
      uVar8 = uVar8 + 2;
      lVar4 = lVar4 + 0x10;
    } while (local_b0 != uVar8);
  }
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
    UNLOCK();
    if (local_58 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (local_bc == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_b8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    uVar8 = plVar9[2];
    if ((ulonglong)plVar9[2] < local_a8) {
      uVar8 = local_a8;
    }
    plVar9[2] = uVar8;
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_b4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141519128 FUN_141519128 body=52 status=ok
// SIG undefined FUN_141519128(void)

void FUN_141519128(PSRWLOCK param_1)

{
  int *piVar1;
  DWORD DVar2;
  DWORD DVar3;
  
  DVar2 = *(DWORD *)&param_1[1].Ptr;
  if (DVar2 != 0) {
    DVar3 = GetCurrentThreadId();
    if (DVar2 == DVar3) {
      piVar1 = (int *)((longlong)&param_1[1].Ptr + 4);
      *piVar1 = *piVar1 + 1;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141519141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  AcquireSRWLockShared(param_1);
  return;
}



// FUNCTION 14151915c FUN_14151915c body=177 status=ok
// SIG undefined FUN_14151915c(void)

void FUN_14151915c(void)

{
  longlong lVar1;
  
  FUN_14151920e(&DAT_14cb0c050);
  FUN_14588b8d6(&DAT_14cb0c9e8);
  lVar1 = 0x988;
  do {
    if (*(longlong *)((longlong)&DAT_14cb0c050 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x588);
  lVar1 = 0x588;
  do {
    if (*(longlong *)((longlong)&DAT_14cb0c050 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x188);
  lVar1 = 0x168;
  do {
    FUN_14588b8d6((longlong)&DAT_14cb0c050 + lVar1);
    lVar1 = lVar1 + -0x30;
  } while (lVar1 != -0x18);
  FUN_145c996f1(DAT_14cb0c050,DAT_14cb0c058);
  if (DAT_14cb0c050 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14151920e FUN_14151920e body=127 status=ok
// SIG undefined FUN_14151920e(void)

void FUN_14151920e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x9c0)) {
    lVar1 = param_1 + 0x998;
    (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,lVar1,1);
    iVar2 = *(int *)(param_1 + 0x9c4);
    lVar3 = *(longlong *)(param_1 + 0x9b8);
    if (*(longlong *)(param_1 + 0x9b8) == 0) {
      lVar3 = lVar1;
    }
    FUN_144717c65(lVar3,*(undefined4 *)(param_1 + 0x9c0));
    *(undefined4 *)(param_1 + 0x9c0) = 0;
    if ((iVar2 < 0) && (*(int *)(param_1 + 0x9c4) != 0)) {
      FUN_14473dbc4(lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14151928e FUN_14151928e body=201 status=ok
// SIG undefined FUN_14151928e(void)

void FUN_14151928e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141519358 FUN_141519358 body=519 status=ok
// SIG undefined FUN_141519358(void)

ulonglong FUN_141519358(longlong *param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  undefined1 auStack_288 [32];
  ulonglong local_268;
  undefined4 local_260;
  ulonglong local_250;
  undefined1 *local_248;
  longlong **local_240;
  longlong *local_190;
  longlong local_188;
  ulonglong *local_180;
  longlong *local_68;
  undefined4 local_60;
  longlong *local_48;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (param_3 == 0) {
    bVar6 = NAN(*(float *)(param_2 + 0x6c));
    bVar7 = *(float *)(param_2 + 0x6c) == 0.0;
LAB_1415193b4:
    if ((bVar7) && (!bVar6)) {
      uVar5 = 0;
      goto LAB_14151951d;
    }
  }
  else if (*(char *)(param_3 + 0x65) != '\x05') {
    if ((*(float *)(param_3 + 0x68) == (float)DAT_14c84635c) &&
       (!NAN(*(float *)(param_3 + 0x68)) && !NAN((float)DAT_14c84635c))) {
      bVar6 = NAN(*(float *)(param_3 + 0x6c)) || NAN(DAT_14c84635c._4_4_);
      bVar7 = *(float *)(param_3 + 0x6c) == DAT_14c84635c._4_4_;
      goto LAB_1415193b4;
    }
  }
  dVar8 = (double)(**(code **)(*param_1 + 0x60))(param_1);
  if (((double)param_1[0x6e] != dVar8) || (NAN((double)param_1[0x6e]) || NAN(dVar8))) {
    param_1[0x6e] = (longlong)dVar8;
    FUN_1402c1cc6(param_1 + 0x70,dVar8);
  }
  local_180 = &local_250;
  local_240 = &local_190;
  local_248 = &LAB_1428f5dec;
  local_250 = param_3;
  local_190 = param_1;
  local_188 = param_2;
  cVar3 = FUN_1402c4aee(param_1 + 0xc9);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (cVar3 == '\0') {
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    FUN_1401b43e8(param_1,&local_248);
    local_268 = local_268 & 0xffffffffffffff00;
    local_260 = uVar2;
    (**(code **)(*param_1 + 0x108))(param_1,&local_190,*(undefined8 *)(param_2 + 0x20),&local_248);
    FUN_1401b439d(local_248,(ulonglong)local_240 & 0xffffffff);
    if (local_248 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    local_268 = param_3;
    FUN_1456cda32(param_1,&local_248,&local_190,param_2);
    uVar5 = (ulonglong)CONCAT31((int3)((uint)uVar2 >> 8),local_248._0_1_);
    FUN_14493db24(&local_248);
    FUN_1447fa2ac(local_40,local_38);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_48 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    plVar4 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar4 = &local_188;
    }
    FUN_1447157bd(plVar4,local_60);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14151951d:
  if ((local_30 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141519560 FUN_141519560 body=57 status=ok
// SIG undefined FUN_141519560(void)

void FUN_141519560(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb625e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb625e8 = FUN_140002ddd(FUN_1464f83f2,uVar1,L"GbxRadioScriptDef");
  }
  return;
}



// FUNCTION 141519599 FUN_141519599 body=139 status=ok
// SIG undefined FUN_141519599(void)

bool FUN_141519599(byte param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (DAT_14cb53048 == 0) {
    uVar3 = FUN_1464a9e44();
    DAT_14cb53048 = FUN_14171c317(FUN_1464a9e73,uVar3);
  }
  uVar2 = (ulonglong)*(int *)(DAT_14cb53048 + 0x48);
  if ((longlong)uVar2 < 1) {
LAB_1415195f4:
    bVar7 = false;
  }
  else {
    uVar5 = (ulonglong)param_1;
    if (*(ulonglong *)(*(longlong *)(DAT_14cb53048 + 0x40) + 8) != uVar5) {
      uVar6 = 0;
      puVar4 = (ulonglong *)(*(longlong *)(DAT_14cb53048 + 0x40) + 0x18);
      do {
        if (uVar2 - 1 == uVar6) goto LAB_1415195f4;
        uVar6 = uVar6 + 1;
        uVar1 = *puVar4;
        puVar4 = puVar4 + 2;
      } while (uVar1 != uVar5);
      if (uVar2 <= uVar6) goto LAB_1415195f4;
    }
    uVar2 = FUN_1404d8156();
    bVar7 = uVar2 != uVar5;
  }
  return bVar7;
}



// FUNCTION 141519624 FUN_141519624 body=51 status=ok
// SIG undefined FUN_141519624(void)

void FUN_141519624(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_14058d6d4();
  lVar2 = plVar3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *plVar3;
    lVar4 = 0;
    do {
      (**(code **)(lVar1 + 8 + lVar4))();
      lVar4 = lVar4 + 0x20;
    } while ((longlong)(int)lVar2 * 0x20 != lVar4);
  }
  return;
}



// FUNCTION 141519658 FUN_141519658 body=165 status=ok
// SIG undefined FUN_141519658(void)

void FUN_141519658(void)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"MaterialAttributes";
  local_28 = 0x12;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"MaterialExpression";
  local_28 = 0x12;
  FUN_1446e940c(local_38,&local_30);
  local_30 = L"Material Attributes";
  local_28 = 0x13;
  FUN_140208c1e(&DAT_14caeb060,local_38,local_34,&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415196fe FUN_1415196fe body=1225 status=ok
// SIG undefined FUN_1415196fe(void)

void FUN_1415196fe(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined ***pppuVar12;
  uint *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = *(longlong **)(param_1 + 0x78);
  if (plVar2 == (longlong *)0x0) goto LAB_14151982d;
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar10 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar4 != 2) {
      if (iVar4 != 1) goto LAB_141519749;
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_14151974e;
      goto LAB_14151978e;
    }
LAB_14151974e:
    (**(code **)(*plVar2 + 0x20))(plVar2);
    LOCK();
    plVar14 = plVar2 + 0xc;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      puVar7 = (undefined8 *)*plVar2;
      plVar14 = plVar2;
LAB_141519767:
      (*(code *)*puVar7)(plVar14,1);
    }
  }
  else {
LAB_141519749:
    if (iVar4 == 0x10) goto LAB_14151974e;
LAB_14151978e:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar4 = *(int *)(lVar10 + 0xc60), iVar4 == 2))
      goto LAB_14151974e;
      if (iVar4 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_14151974e;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar7 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar9 = (uint *)*puVar7;
      if (puVar9 != (uint *)0x0) goto LAB_1415198ee;
      while( true ) {
        uVar11 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar11 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar11 | 1;
          __tlregdtor(&LAB_14377a02f);
        }
        lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar8 = *(undefined4 **)(lVar10 + 0x310);
        *(undefined8 *)(lVar10 + 0x310) = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar8 = 0xffffffff;
        *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
        puVar8[0x12] = 0;
        *puVar7 = puVar8;
        FUN_140217a48(puVar7);
        puVar9 = (uint *)*puVar7;
LAB_1415198ee:
        plVar14 = (longlong *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar13 = (uint *)(plVar14 + 0x16);
        uVar11 = puVar9[0x12];
        if (puVar13 <= puVar9 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
          LOCK();
          uVar1 = *puVar9;
          *puVar9 = *puVar9 + uVar11 + 1;
          UNLOCK();
          if ((uVar1 ^ uVar11) != 0xffffffff) break;
          puVar9 = (uint *)*puVar7;
          *puVar9 = 0xffffffff;
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar7 = puVar9;
          plVar14 = (longlong *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
          puVar13 = (uint *)(plVar14 + 0x16);
          uVar11 = 0;
          if (puVar13 <= puVar9 + 0x4000) {
            uVar11 = 1;
            goto LAB_14151996e;
          }
        }
      }
      uVar11 = uVar11 + 1;
LAB_14151996e:
      *(uint **)(puVar9 + 0x10) = puVar13;
      puVar9[0x12] = uVar11;
      iVar4 = 0;
      FUN_1447247dc(plVar14,0);
      *plVar14 = (longlong)&PTR_FUN_14aaf9898;
      plVar14[0x15] = (longlong)plVar2;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar11 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
          iVar4 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar4 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(plVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar14[0xe] + 0x18))(plVar14 + 0xe,plVar14 + 9);
      }
      plVar14[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar14[9] = (longlong)plVar14;
      plVar14[10] = (longlong)plVar14;
      lVar10 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar10 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        lVar10 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
        }
        lVar10 = *(longlong *)(lVar10 + 0x30);
      }
      plVar14[0xf] = lVar10;
      plVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)plVar14 + 0x1c) = iVar4;
      if (plVar14 == (longlong *)0x0) {
        local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
        goto LAB_141519825;
      }
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(plVar14);
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) goto LAB_141519825;
      puVar7 = (undefined8 *)*plVar14;
      goto LAB_141519767;
    }
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14aaf9840;
    local_68[0] = FUN_14377d8d4;
    local_40 = plVar2;
    FUN_14005a792(&DAT_14ca9a440,L"ReleaseVectorFieldCommand",&DAT_14cb0f080);
    if (local_68[0] != (code *)0x0) {
      pppuVar12 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar12 = &local_48;
      }
      (*(code *)(*pppuVar12)[2])();
    }
  }
LAB_141519825:
  *(undefined8 *)(param_1 + 0x78) = 0;
LAB_14151982d:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141519bc8 FUN_141519bc8 body=148 status=ok
// SIG undefined FUN_141519bc8(void)

void FUN_141519bc8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(param_1 + 0x28);
  if (*(char *)(param_1 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000141519c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141519c5c FUN_141519c5c body=135 status=ok
// SIG undefined FUN_141519c5c(void)

void FUN_141519c5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5aefb0;
  FUN_144760e21(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141519ce4 FUN_141519ce4 body=567 status=ok
// SIG undefined FUN_141519ce4(void)

void FUN_141519ce4(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._4_4_ = 0;
    uVar11 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
    uVar11 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar12 = *param_1;
      if (*(longlong *)(lVar12 + 0x2e8 + (longlong)iVar6 * 0x300) != 0) {
        FUN_1400020a8();
      }
      lVar12 = lVar12 + (longlong)iVar6 * 0x300;
      FUN_140368b56(lVar12 + 400);
      if (*(char *)(lVar12 + 0xf0) == '\x01') {
        *(undefined1 *)(lVar12 + 0xf0) = 0;
      }
      if (*(char *)(lVar12 + 0x20) == '\x01') {
        *(undefined1 *)(lVar12 + 0x20) = 0;
      }
      uVar11 = uVar11 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar12 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar11;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar12 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar12 == lVar8) goto LAB_141519e35;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar11 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_141519e35:
  iVar13 = local_74;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_141519f1c(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar11 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar11 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar11) {
      uVar5 = uVar11;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141519f1c FUN_141519f1c body=223 status=ok
// SIG undefined FUN_141519f1c(void)

void FUN_141519f1c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x300;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x2b) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x300)) {
      uVar2 = uVar1 / 0x300 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x300,0x10);
  }
  return;
}



// FUNCTION 141519ffc FUN_141519ffc body=226 status=ok
// SIG undefined FUN_141519ffc(void)

longlong * FUN_141519ffc(longlong *param_1)

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
  pcVar13 = FUN_14676329a;
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



// FUNCTION 14151a0ec FUN_14151a0ec body=784 status=ok
// SIG undefined FUN_14151a0ec(void)

void FUN_14151a0ec(longlong param_1,longlong *param_2,char param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) | 1;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar3 = FUN_14001cc68(0x180,0x10);
    FUN_140d50c94(uVar3,param_2);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  lVar4 = (**(code **)(*param_2 + 8))();
  if (lVar4 == 0) {
LAB_14151a3ba:
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (param_4 == (longlong *)0x0) {
LAB_14151a3cb:
      lVar4 = 0;
LAB_14151a21e:
      param_4 = *(longlong **)(lVar4 + 0x1c8);
      if (param_4 == (longlong *)0x0) goto LAB_14151a288;
      lVar4 = FUN_14081cebe();
      if ((*(int *)(param_4[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_4[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) goto LAB_14151a288;
    }
  }
  else {
    if (DAT_14cac9ca8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1478c0a72;
      local_70 = &LAB_1417b2375;
      local_78 = L"Engine";
      local_80 = 0x1000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) goto LAB_14151a3ba;
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(param_1 + 0x20) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(lVar4 + 0x10) = iVar6;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar2 = iVar6;
      }
    }
    *(int *)(param_1 + 0x24) = iVar2;
    if (param_4 == (longlong *)0x0) {
      if (iVar2 == 0) goto LAB_14151a3cb;
      uVar1 = *(uint *)(param_1 + 0x20);
      lVar4 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar5 == (longlong *)0x0) ||
           (((int)plVar5[2] != iVar2 || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0))))
        goto LAB_14151a3cb;
        lVar4 = *plVar5;
      }
      goto LAB_14151a21e;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_4);
  }
  *(longlong **)(lVar4 + 0x48) = param_4;
  (**(code **)(*param_4 + 0x3b0))(param_4,0);
  if (*(longlong *)(lVar4 + 0x48) == 0) {
    fVar8 = 1.0;
  }
  else {
    fVar8 = (float)*(double *)(*(longlong *)(lVar4 + 0x48) + 0x1c8);
  }
  *(float *)(lVar4 + 0x60) = fVar8;
LAB_14151a288:
  if ((param_3 != '\0') && (lVar4 = *(longlong *)(param_1 + 0x10), lVar4 != 0)) {
    *(byte *)(lVar4 + 0x78) = *(byte *)(lVar4 + 0x78) & 0xf7;
    FUN_140cf5864(lVar4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14151a414 FUN_14151a414 body=547 status=ok
// SIG undefined FUN_14151a414(void)

void FUN_14151a414(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
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
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar11 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar6 * 0x68;
        uVar10 = (longlong)
                 (int)(*(uint *)(lVar13 + 0x50 + lVar12) >> 0x14 ^ *(uint *)(lVar13 + lVar12)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar13 + 100 + lVar12) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar13 + 0x60 + lVar12) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar9 = (int)local_50[3];
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar6 = iVar9 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_14151a5f2;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar10 = uVar8 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar9);
    }
  }
LAB_14151a5f2:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14151a638 FUN_14151a638 body=49 status=ok
// SIG undefined FUN_14151a638(void)

void FUN_14151a638(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14151a66a FUN_14151a66a body=2142 status=ok
// SIG undefined FUN_14151a66a(void)

undefined8 * FUN_14151a66a(undefined8 *param_1)

{
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b01f7f0;
  param_1[6] = &PTR_FUN_14b01faf0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x44fa0000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xf00000d0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0x3f800000447a0000;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xf00000d0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xf00000d0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x22c) = 0x404;
  param_1[0x38] = &DAT_14a176f00;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xf00000d0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0x3f800000;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x30c) = 0x404;
  param_1[0x54] = &DAT_14a176f00;
  param_1[100] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x394) = 0x404;
  param_1[0x65] = &DAT_14a176f00;
  param_1[0x75] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x41c) = 0x404;
  param_1[0x76] = &DAT_14a176f00;
  param_1[0x86] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x4ac) = 0x404;
  param_1[0x88] = &DAT_14a176f00;
  param_1[0x98] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x53c) = 0x404;
  param_1[0x9a] = &DAT_14a176f00;
  param_1[0xaa] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0xf00000d0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0xf00000d0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x64c) = 0;
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x67c) = 0x404;
  param_1[0xc2] = &DAT_14a176f00;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x68c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x694) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  *(undefined4 *)(param_1 + 0xda) = 0xf00000d0;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0xf00000d0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0x3f800000;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0xf00000d0;
  param_1[0xf2] = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0x3f800000;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xfb) = 0xf00000d0;
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0x3f800000;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  *(undefined4 *)(param_1 + 0x105) = 0xf00000d0;
  param_1[0x106] = 0;
  *(undefined4 *)(param_1 + 0x107) = 0x3f800000;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0xf00000d0;
  param_1[0x110] = 0;
  *(undefined4 *)(param_1 + 0x111) = 0x3f800000;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  *(undefined4 *)(param_1 + 0x119) = 0xf00000d0;
  param_1[0x11a] = 0;
  *(undefined4 *)(param_1 + 0x11b) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  *(undefined4 *)(param_1 + 0x123) = 0xf00000d0;
  param_1[0x124] = 0;
  *(undefined4 *)(param_1 + 0x125) = 0x3f800000;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  *(undefined4 *)(param_1 + 0x12d) = 0xf00000d0;
  param_1[0x12e] = 0;
  *(undefined4 *)(param_1 + 0x12f) = 0x3f800000;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  *(undefined4 *)(param_1 + 0x137) = 0xf00000d0;
  param_1[0x138] = 0;
  *(undefined4 *)(param_1 + 0x139) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x13a) = 0;
  *(undefined4 *)(param_1 + 0x13b) = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  *(undefined4 *)(param_1 + 0x142) = 0xf00000d0;
  param_1[0x143] = 0;
  *(undefined4 *)(param_1 + 0x144) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x149) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa31) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa39) = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  *(undefined4 *)(param_1 + 0x150) = 0xf00000d0;
  param_1[0x151] = 0;
  *(undefined4 *)(param_1 + 0x152) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xaa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xaac) = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  *(undefined4 *)(param_1 + 0x15d) = 0xf00000d0;
  param_1[0x15e] = 0;
  *(undefined4 *)(param_1 + 0x15f) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x162) = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  *(undefined4 *)(param_1 + 0x169) = 0xf00000d0;
  param_1[0x16a] = 0;
  *(undefined4 *)(param_1 + 0x16b) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x173) = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  *(undefined4 *)(param_1 + 0x17a) = 0xf00000d0;
  param_1[0x17b] = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0x3f800000;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  *(undefined4 *)(param_1 + 0x184) = 0xf00000d0;
  param_1[0x185] = 0;
  *(undefined4 *)(param_1 + 0x186) = 0x3f800000;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  *(undefined4 *)(param_1 + 0x18e) = 0xf00000d0;
  param_1[399] = 0;
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 4;
  *(uint *)(param_1 + 0x14) = (*(uint *)(param_1 + 0x14) & 0xfffffffc) + 1;
  *(uint *)(param_1 + 0x1f) = *(uint *)(param_1 + 0x1f) | 0x80002;
  *(uint *)((longlong)param_1 + 0x114) = *(uint *)((longlong)param_1 + 0x114) & 0xfffffffe;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffd7fd | 0x802;
  *(byte *)((longlong)param_1 + 0x104) = *(byte *)((longlong)param_1 + 0x104) & 0xfe;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0x42c80000;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xdd) = 1;
  *(undefined4 *)(param_1 + 0xd3) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe0) = 0xc1f00000;
  *(undefined4 *)(param_1 + 0xea) = 0x41f00000;
  *(undefined4 *)(param_1 + 0xf4) = 0x425c0000;
  *(undefined4 *)(param_1 + 0xfe) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x112) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x126) = 0x42700000;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x17d) = 0x43dc0000;
  *(undefined4 *)(param_1 + 0x187) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x171) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x191) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x49) = 0x41200000;
  if (param_1[0x4a] != 0) {
    param_1[0x4c] = 0;
  }
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  if ((param_1[0x4f] != 0) || (*(int *)(param_1 + 0x50) != -0xfffff30)) {
    param_1[0x4f] = 0;
    *(undefined4 *)(param_1 + 0x50) = 0xf00000d0;
    param_1[0x51] = 0;
  }
  *(undefined4 *)(param_1 + 0x52) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x172) = 3;
  return param_1;
}



// FUNCTION 14151aed0 FUN_14151aed0 body=345 status=ok
// SIG undefined FUN_14151aed0(void)

undefined8 * FUN_14151aed0(longlong param_1,undefined8 *param_2,ushort *param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar2 = *param_3;
  if ((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 0x10))) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar2 * 8);
    if ((lVar5 != 0) && (*(uint *)(lVar5 + 8) == (uint)param_3[1])) {
      if (-1 < *(short *)(lVar5 + 4)) {
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar5 + 2) * 8);
        } while (-1 < *(short *)(lVar5 + 4));
        if (lVar5 == 0) goto LAB_14151b00a;
      }
      lVar3 = *(longlong *)(lVar5 + 0x58);
      if ((lVar3 != 0) && (*(int *)(lVar5 + 0x68) != *(int *)(lVar5 + 0x94))) {
        uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar8 = (uint)lVar3 & 0xffff;
        lVar7 = lVar5 + 0x98;
        if (*(longlong *)(lVar5 + 0xa0) != 0) {
          lVar7 = *(longlong *)(lVar5 + 0xa0);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)
                                 (*(int *)(lVar5 + 0xa8) - 1U &
                                 (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            lVar7 = *(longlong *)(lVar5 + 0x60) + (longlong)iVar6 * 0x30;
            if (*(longlong *)(*(longlong *)(lVar5 + 0x60) + (longlong)iVar6 * 0x30) == lVar3) {
              if ((lVar7 != 0) && (lVar7 != -8)) {
                *param_2 = &PTR_FUN_14a184370;
                bVar1 = *(byte *)(lVar7 + 0x20);
                *(byte *)(param_2 + 3) = bVar1;
                (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar1])
                          (param_2 + 1,lVar7 + 0x10);
                return param_2;
              }
              break;
            }
            iVar6 = *(int *)(lVar7 + 0x28);
          } while (iVar6 != -1);
        }
      }
    }
  }
LAB_14151b00a:
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14a184370;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  return param_2;
}



// FUNCTION 14151b02a FUN_14151b02a body=116 status=ok
// SIG undefined FUN_14151b02a(void)

longlong FUN_14151b02a(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x10;
  do {
    *(undefined8 *)(param_1 + -0x10 + lVar2) = 0;
    *(undefined2 *)(param_1 + -8 + lVar2) = 0;
    *(undefined8 *)(param_1 + lVar2) = 0;
    ((undefined8 *)(param_1 + lVar2))[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x10 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + 0x20 + lVar2) = 0;
    lVar2 = lVar2 + 0x38;
  } while (lVar2 != 0x128);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x140));
  *(undefined8 *)(param_1 + 0x148) = 0;
  return param_1;
}



// FUNCTION 14151b09e FUN_14151b09e body=549 status=ok
// SIG undefined FUN_14151b09e(void)

void FUN_14151b09e(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  undefined1 local_e8 [16];
  wchar_t *local_d8;
  undefined4 local_d0;
  code *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  code *local_a0;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar1 = (undefined8 *)*param_1;
  FUN_140312256(puVar1,param_1);
  *puVar1 = &PTR_FUN_14be90770;
  puVar1[0x76] = 0;
  *(undefined4 *)(puVar1 + 0x77) = 0;
  puVar1[0x72] = 0;
  puVar1[0x73] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x3c4) = 0;
  puVar1[0x7a] = 0;
  *(undefined4 *)(puVar1 + 0x7b) = 0;
  *(byte *)(puVar1 + 0x7c) = *(byte *)(puVar1 + 0x7c) & 0xfc;
  FUN_1403121a6(puVar1,0);
  *(byte *)((longlong)puVar1 + 99) = *(byte *)((longlong)puVar1 + 99) | 0x10;
  if (((*(uint *)(puVar1 + 1) & 0x10) != 0) && (puVar1 != (undefined8 *)0x0)) {
    lVar2 = puVar1[2];
    lVar3 = FUN_145a97e70();
    if (lVar2 == lVar3) {
      uVar4 = thunk_FUN_145ca3388();
      FUN_144a5dc74(local_e8);
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_149e01e20;
      local_60 = &DAT_14981040e;
      local_88[0] = FUN_140d11fbe;
      local_b8 = (undefined ***)0x0;
      local_a8 = &PTR_LAB_14be92de0;
      local_a0 = FUN_144647296;
      local_c8[0] = FUN_1498103d6;
      local_d8 = L"GbxPackedLevelStreaming";
      local_d0 = 0x17;
      FUN_1446e940c(local_ec,&local_d8);
      local_d8 = L"WorldPartition";
      local_d0 = 0xe;
      FUN_1446e940c(local_f0,&local_d8);
      FUN_140208bae(&local_d8,local_f0,local_ec,L"Packed Level Streaming");
      FUN_1446f470e(&local_f8,L"GbxPackedLevelStreaming",1);
      local_100 = local_e8;
      local_108 = local_88;
      FUN_145ca33f4(uVar4,local_f8,&local_d8,local_c8);
      if (local_c8[0] != (code *)0x0) {
        pppuVar5 = local_b8;
        if (local_b8 == (undefined ***)0x0) {
          pppuVar5 = &local_a8;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar5 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar5 = &local_68;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14151b2c4 FUN_14151b2c4 body=376 status=ok
// SIG undefined FUN_14151b2c4(void)

bool FUN_14151b2c4(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (void *)0x0;
  local_40 = (int)param_2[1];
  lVar5 = (longlong)local_40;
  pvVar1 = (void *)*param_2;
  if (lVar5 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar1,lVar5 * 2);
  }
  bVar2 = FUN_14626e496(&local_48);
  local_50 = 0;
  local_60 = (void *)0x0;
  local_58 = (int)param_1[1];
  lVar5 = (longlong)local_58;
  pvVar1 = (void *)*param_1;
  if (lVar5 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,pvVar1,lVar5 * 2);
  }
  bVar3 = FUN_14626e326(&local_60,&local_50);
  if ((bVar2 & bVar3) == 1) {
    local_68 = 0;
    bVar6 = false;
    FUN_14099d55c(DAT_14c8c2b68,local_78,0);
    cVar4 = FUN_14626e326(local_78,&local_68);
    if (cVar4 != '\0') {
      bVar6 = (local_68 - local_50) - 864000000000U < 0x622d22fc24000;
    }
  }
  else {
    bVar6 = false;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14151b43e FUN_14151b43e body=151 status=ok
// SIG undefined FUN_14151b43e(void)

void FUN_14151b43e(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_14151b471;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_14151b471:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined8 *)(param_1 + 4);
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014151b4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14151b4d6 FUN_14151b4d6 body=533 status=ok
// SIG undefined FUN_14151b4d6(void)

void FUN_14151b4d6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar14 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar14 = local_68 >> 0x20;
  }
  plVar6 = local_60;
  iVar15 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar9 = local_58._4_4_;
  iVar11 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar12 = *param_1;
      lVar7 = (longlong)iVar9;
      FUN_14133665b(*(undefined8 *)(lVar12 + 0x10 + lVar7 * 0x28),
                    *(undefined4 *)(lVar12 + 0x18 + lVar7 * 0x28));
      if (*(longlong *)(lVar12 + 0x10 + lVar7 * 0x28) != 0) {
        FUN_1400020a8();
      }
      plVar10 = *(longlong **)(lVar12 + lVar7 * 0x28 + 8);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar13 = uVar13 & ~(uint)uVar14;
      plVar10 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar10 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar12 = (longlong)iVar15;
      uVar8 = *(uint *)((longlong)plVar10 + lVar12 * 4) & uVar13;
      if (uVar8 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar5 = iVar9;
        if (iVar9 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar9 <= iVar15) break;
        lVar7 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar7 * 4 + lVar12 * 4 + 4);
          if (uVar8 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar5 - lVar12 == lVar7) goto LAB_14151b62b;
        }
        iVar15 = iVar15 + (int)lVar7 + 1;
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar8 & uVar8);
      uVar3 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar9 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_14151b62b:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14151b6ec FUN_14151b6ec body=2057 status=ok
// SIG undefined FUN_14151b6ec(void)

void FUN_14151b6ec(undefined8 *param_1,int param_2,undefined1 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStack_e8 [36];
  int local_c4;
  longlong *local_c0;
  uint *local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *plStack_90;
  undefined8 *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar5 = FUN_14142923a();
  if (cVar5 != '\0') {
    iVar7 = *(int *)(param_1 + 9);
    if (iVar7 == 0) {
      uVar24 = 1;
      uVar22 = 0;
      iVar18 = 0;
      iVar9 = 0;
    }
    else {
      puVar13 = (uint *)param_1[8];
      if ((uint *)param_1[8] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 6);
      }
      uVar20 = *puVar13;
      if (uVar20 == 0) {
        iVar18 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar18 = iVar7 + -1;
        }
        uVar22 = 0;
        uVar24 = (ulonglong)(uint)(iVar18 >> 5);
        if (iVar18 >> 5 < 1) {
          uVar24 = uVar22;
        }
        iVar18 = 0;
        do {
          if (uVar24 == uVar22) goto LAB_14151bd47;
          iVar18 = iVar18 + 0x20;
          uVar20 = puVar13[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar20 == 0);
      }
      else {
        uVar22 = 0;
        iVar18 = 0;
      }
      uVar24 = (ulonglong)(-uVar20 & uVar20);
      uVar17 = uVar24 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar9 = (iVar18 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      if (iVar7 <= iVar9) {
        iVar9 = iVar7;
      }
    }
    if (iVar9 < iVar7) {
      uVar20 = 0xffffffff;
      local_b8 = (uint *)(param_1 + 6);
      do {
        lVar23 = param_1[4];
        lVar8 = (longlong)iVar9;
        local_78 = (longlong *)0x0;
        iVar7 = *(int *)(lVar23 + 0x18 + lVar8 * 0x28);
        uVar3 = *(undefined8 *)(lVar23 + 0x10 + lVar8 * 0x28);
        plStack_70 = (longlong *)CONCAT44(plStack_70._4_4_,iVar7);
        local_c4 = iVar18;
        if (iVar7 == 0) {
          plStack_70 = (longlong *)0x0;
LAB_14151bbd1:
          uVar17 = 0;
        }
        else {
          FUN_148aafc4c(&local_78,iVar7);
          FUN_148aafca4(local_78,uVar3,iVar7);
          plVar14 = local_78;
          lVar19 = (longlong)(int)plStack_70;
          if (lVar19 == 0) goto LAB_14151bbd1;
          local_c0 = (longlong *)(lVar23 + lVar8 * 0x28);
          lVar23 = 0;
          do {
            local_88 = (undefined8 *)0x0;
            plStack_80 = (longlong *)0x0;
            if (((*(int *)((longlong)plVar14 + lVar23 + 8) != 0) &&
                (plVar4 = *(longlong **)((longlong)plVar14 + lVar23), plVar4 != (longlong *)0x0)) &&
               ((**(code **)(*plVar4 + 0x60))(plVar4,local_c0,&local_88), plVar4 = plStack_80,
               plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar15 = plStack_80 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*plStack_80)(plStack_80);
                LOCK();
                piVar2 = (int *)((longlong)plVar4 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar4 + 0x10))(plVar4);
                }
              }
            }
            lVar23 = lVar23 + 0x10;
          } while (lVar19 * 0x10 != lVar23);
          uVar17 = (ulonglong)plStack_70 & 0xffffffff;
        }
        FUN_14133665b(local_78,uVar17);
        if (local_78 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar20 = uVar20 & ~(uint)uVar24;
        puVar13 = (uint *)param_1[8];
        if ((uint *)param_1[8] == (uint *)0x0) {
          puVar13 = local_b8;
        }
        iVar7 = *(int *)(param_1 + 9);
        iVar9 = (int)uVar22;
        lVar23 = (longlong)iVar9;
        uVar10 = puVar13[lVar23] & uVar20;
        iVar18 = local_c4;
        if (uVar10 == 0) {
          iVar11 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar11 = iVar7 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar12 = iVar11;
          if (iVar11 < iVar9) {
            iVar12 = iVar9;
          }
          if (iVar11 <= iVar9) break;
          lVar8 = 0;
          while( true ) {
            iVar18 = iVar18 + 0x20;
            uVar10 = puVar13[lVar23 + lVar8 + 1];
            if (uVar10 != 0) break;
            lVar8 = lVar8 + 1;
            if (iVar12 - lVar23 == lVar8) goto LAB_14151bd47;
          }
          uVar22 = (ulonglong)(iVar9 + (int)lVar8 + 1);
          uVar20 = 0xffffffff;
        }
        uVar24 = (ulonglong)(-uVar10 & uVar10);
        uVar17 = uVar24 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar9 = (iVar18 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar7);
    }
LAB_14151bd47:
    plStack_70 = (longlong *)param_1[1];
    if (plStack_70 == (longlong *)0x0) {
      plStack_70 = (longlong *)0x0;
      local_78 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plStack_70[1];
      local_78 = (longlong *)0x0;
      do {
        if (iVar7 == 0) {
          plStack_70 = (longlong *)0x0;
          goto LAB_14151bd70;
        }
        LOCK();
        iVar18 = (int)plStack_70[1];
        bVar25 = iVar7 == iVar18;
        if (bVar25) {
          *(int *)(plStack_70 + 1) = iVar7 + 1;
          iVar18 = iVar7;
        }
        iVar7 = iVar18;
        UNLOCK();
      } while (!bVar25);
      local_78 = (longlong *)*param_1;
    }
LAB_14151bd70:
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (plVar14 = (longlong *)param_1[0xf], plVar14 != (longlong *)0x0)) {
      (**(code **)(*plVar14 + 0x60))(plVar14,&local_78);
    }
    plVar14 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_70 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    goto LAB_14151bea6;
  }
  cVar5 = FUN_14142923a();
  if (cVar5 != '\0') goto LAB_14151bea6;
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
LAB_14151bedc:
    lVar23 = 0;
  }
  else {
    uVar20 = *(uint *)(param_1 + 2);
    lVar23 = 0;
    if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c9647dc)) {
      plVar14 = (longlong *)
                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
      if ((plVar14 == (longlong *)0x0) ||
         (((int)plVar14[2] != *(int *)((longlong)param_1 + 0x14) ||
          ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_14151bedc;
      lVar23 = *plVar14;
    }
  }
  if (*(int *)(lVar23 + 0xe0) != param_2) goto LAB_14151bea6;
  local_b8 = (uint *)CONCAT44(local_b8._4_4_,param_2);
  local_c4 = CONCAT31(local_c4._1_3_,param_3);
  local_c0 = param_1 + 4;
  local_88 = (undefined8 *)0x0;
  plStack_80 = (longlong *)0x0;
  local_b0 = param_1;
  FUN_141429280(local_c0,&local_88);
  if ((longlong)(int)plStack_80 != 0) {
    puVar21 = local_88 + (longlong)(int)plStack_80 * 2;
    iVar7 = (int)param_4[1];
    puVar16 = local_88;
    do {
      if (iVar7 == 0) goto LAB_14151be89;
      lVar23 = *param_4;
      lVar8 = 0;
      iVar18 = 0;
      while (cVar5 = (**(code **)**(undefined8 **)(lVar23 + lVar8))
                               (*(undefined8 **)(lVar23 + lVar8),*puVar16), cVar5 == '\0') {
        iVar18 = iVar18 + 1;
        lVar8 = lVar8 + 0x10;
        if ((longlong)iVar7 * 0x10 == lVar8) goto LAB_14151be89;
      }
      if ((iVar18 < 0) || (iVar7 = (int)param_4[1], iVar7 <= iVar18)) goto LAB_14151be89;
      puVar16 = puVar16 + 2;
    } while (puVar16 != puVar21);
  }
  plVar4 = local_c0;
  plVar14 = (longlong *)local_b0[3];
  if (*(int *)((longlong)local_b0 + 0x14) == 0) {
LAB_14151bee5:
    plVar15 = (longlong *)0x0;
  }
  else {
    uVar20 = *(uint *)(param_1 + 2);
    plVar15 = (longlong *)0x0;
    if ((int)uVar20 < 0) goto LAB_14151bee5;
    if ((int)uVar20 < DAT_14c9647dc) {
      puVar16 = (undefined8 *)
                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
      if (((puVar16 == (undefined8 *)0x0) ||
          (*(int *)(puVar16 + 2) != *(int *)((longlong)local_b0 + 0x14))) ||
         ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)) {
        plVar15 = (longlong *)0x0;
      }
      else {
        plVar15 = (longlong *)*puVar16;
      }
    }
  }
  (**(code **)(*plVar15 + 0x180))();
  local_78 = plVar14;
  plVar14 = (longlong *)FUN_1401e3228();
  if (plVar14 == (longlong *)0x0) {
    local_98 = (longlong *)0x0;
    plStack_90 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar14 + 0xb8))(plVar14,&local_98);
    if (local_98 != (longlong *)0x0) {
      (**(code **)(*local_98 + 0x18))(local_98,(ulonglong)local_b8 & 0xffffffff,local_b0 + 0xe);
      if ((longlong)(int)plStack_80 != 0) {
        puVar21 = local_88 + (longlong)(int)plStack_80 * 2;
        puVar16 = local_88;
        do {
          local_78 = (longlong *)*puVar16;
          plVar14 = (longlong *)puVar16[1];
          if (plVar14 == (longlong *)0x0) {
            plStack_70 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
            plStack_70 = plVar14;
          }
          cVar5 = (char)local_c4;
          uVar6 = (**(code **)(*local_78 + 0x40))();
          iVar7 = FUN_1413366bc(plVar4,uVar6,&local_78);
          plVar15 = plStack_70;
          if (iVar7 == -1) {
            lVar23 = 0;
          }
          else {
            lVar23 = (longlong)iVar7 * 0x28 + *plVar4;
          }
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_70 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_70)();
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))();
              }
            }
          }
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar14 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar14)();
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar14 + 0x10))();
              }
            }
          }
          local_78 = (longlong *)0x0;
          plStack_70 = (longlong *)0x0;
          if (cVar5 != '\0') {
            (**(code **)(*local_98 + 0x38))
                      (local_98,&local_a8,(ulonglong)local_b8 & 0xffffffff,*puVar16);
            plVar15 = plStack_70;
            plVar14 = local_a0;
            local_78 = local_a8;
            local_a8 = (longlong *)0x0;
            if (local_a0 != plStack_70) {
              local_a0 = (longlong *)0x0;
              plStack_70 = plVar14;
              if (plVar15 == (longlong *)0x0) goto LAB_14151baff;
              LOCK();
              plVar14 = plVar15 + 1;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)*plVar14 == 0) {
                (**(code **)*plVar15)();
                LOCK();
                piVar2 = (int *)((longlong)plVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar15 + 0x10))();
                }
              }
            }
            plVar14 = local_a0;
            if (local_a0 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_a0 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*local_a0)();
                LOCK();
                piVar2 = (int *)((longlong)plVar14 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar14 + 0x10))();
                }
              }
            }
          }
LAB_14151baff:
          iVar7 = *(int *)(lVar23 + 0x18);
          if ((longlong)iVar7 != 0) {
            lVar23 = *(longlong *)(lVar23 + 0x10);
            lVar8 = 0;
            do {
              if ((*(int *)(lVar23 + 8 + lVar8) != 0) &&
                 (plVar14 = *(longlong **)(lVar23 + lVar8), plVar14 != (longlong *)0x0)) {
                (**(code **)(*plVar14 + 0x60))(plVar14,puVar16,&local_78);
              }
              lVar8 = lVar8 + 0x10;
            } while ((longlong)iVar7 * 0x10 != lVar8);
          }
          plVar14 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            plVar15 = plStack_70 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plStack_70)();
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar14 + 0x10))();
              }
            }
          }
          puVar16 = puVar16 + 2;
        } while (puVar16 != puVar21);
      }
    }
  }
  plStack_70 = (longlong *)local_b0[1];
  if (plStack_70 == (longlong *)0x0) {
    plStack_70 = (longlong *)0x0;
    local_78 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plStack_70[1];
    local_78 = (longlong *)0x0;
    do {
      if (iVar7 == 0) {
        plStack_70 = (longlong *)0x0;
        goto LAB_14151be11;
      }
      LOCK();
      iVar18 = (int)plStack_70[1];
      bVar25 = iVar7 == iVar18;
      if (bVar25) {
        *(int *)(plStack_70 + 1) = iVar7 + 1;
        iVar18 = iVar7;
      }
      iVar7 = iVar18;
      UNLOCK();
    } while (!bVar25);
    local_78 = (longlong *)*local_b0;
  }
LAB_14151be11:
  if ((*(int *)(local_b0 + 0x10) != 0) &&
     (plVar14 = (longlong *)local_b0[0xf], plVar14 != (longlong *)0x0)) {
    (**(code **)(*plVar14 + 0x60))(plVar14,&local_78);
  }
  plVar14 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  plVar14 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_90 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
LAB_14151be89:
  FUN_14127b1cd(local_88,(ulonglong)plStack_80 & 0xffffffff);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14151bea6:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14151bef6 FUN_14151bef6 body=134 status=ok
// SIG undefined FUN_14151bef6(void)

void FUN_14151bef6(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    plVar4 = *(longlong **)(param_2 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0x98);
    *(uint *)(param_1 + 0x98) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x9c) < iVar2 + 1U) {
      FUN_145ca3fe6((longlong *)(param_1 + 0x90),iVar2);
    }
    lVar5 = *(longlong *)(param_1 + 0x90);
    *(undefined8 *)(lVar5 + (longlong)iVar2 * 0x10) = uVar3;
    *(longlong **)(lVar5 + 8 + (longlong)iVar2 * 0x10) = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014151bf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14151bf7c FUN_14151bf7c body=71 status=ok
// SIG undefined FUN_14151bf7c(void)

undefined8 * FUN_14151bf7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14151bfc4 FUN_14151bfc4 body=60 status=ok
// SIG undefined FUN_14151bfc4(void)

void FUN_14151bfc4(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(char *)(param_1 + 0x30) == '\x01') &&
     (puVar1 = *(undefined8 **)(param_1 + 0x38), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  FUN_1401d9a90(param_1 + 8);
  return;
}



// FUNCTION 14151c000 FUN_14151c000 body=1898 status=ok
// SIG undefined FUN_14151c000(void)

void FUN_14151c000(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b01f7f0;
  param_1[6] = &PTR_FUN_14b01faf0;
  param_1[0xc2] = &DAT_14a176f00;
  if (param_1[0xd0] != 0) {
    FUN_1400020a8();
  }
  param_1[0xc2] = &PTR_FUN_14a177080;
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*(int *)((longlong)param_1 + 0x624) != 0) {
    FUN_14472eb64(param_1 + 0xc3,0);
  }
  param_1[0xc9] = 0xffffffff;
  *(undefined4 *)(param_1 + 200) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x644)) {
    *(undefined4 *)((longlong)param_1 + 0x644) = 0x80;
    FUN_1446efbd8(param_1 + 0xc5,0);
  }
  if (param_1[199] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc3] != 0) {
    FUN_1400020a8();
  }
  param_1[0x9a] = &DAT_14a176f00;
  if (param_1[0xa8] != 0) {
    FUN_1400020a8();
  }
  param_1[0x9a] = &PTR_FUN_14a177080;
  if (param_1[0xa5] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (*(int *)((longlong)param_1 + 0x4e4) != 0) {
    FUN_14472eb64(param_1 + 0x9b,0);
  }
  param_1[0xa1] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x504)) {
    *(undefined4 *)((longlong)param_1 + 0x504) = 0x80;
    FUN_1446efbd8(param_1 + 0x9d,0);
  }
  if (param_1[0x9f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x88] = &DAT_14a176f00;
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  param_1[0x88] = &PTR_FUN_14a177080;
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x92) = 0;
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (*(int *)((longlong)param_1 + 0x454) != 0) {
    FUN_14472eb64(param_1 + 0x89,0);
  }
  param_1[0x8f] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x474)) {
    *(undefined4 *)((longlong)param_1 + 0x474) = 0x80;
    FUN_1446efbd8(param_1 + 0x8b,0);
  }
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  param_1[0x76] = &DAT_14a176f00;
  if (param_1[0x84] != 0) {
    FUN_1400020a8();
  }
  param_1[0x76] = &PTR_FUN_14a177080;
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)((longlong)param_1 + 0x3c4) != 0) {
    FUN_14472eb64(param_1 + 0x77,0);
  }
  param_1[0x7d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3e4)) {
    *(undefined4 *)((longlong)param_1 + 0x3e4) = 0x80;
    FUN_1446efbd8(param_1 + 0x79,0);
  }
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  param_1[0x65] = &DAT_14a176f00;
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  param_1[0x65] = &PTR_FUN_14a177080;
  if (param_1[0x70] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x6f) = 0;
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x67) = 0;
  if (*(int *)((longlong)param_1 + 0x33c) != 0) {
    FUN_14472eb64(param_1 + 0x66,0);
  }
  param_1[0x6c] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x35c)) {
    *(undefined4 *)((longlong)param_1 + 0x35c) = 0x80;
    FUN_1446efbd8(param_1 + 0x68,0);
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  param_1[0x54] = &DAT_14a176f00;
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  param_1[0x54] = &PTR_FUN_14a177080;
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (*(int *)((longlong)param_1 + 0x2b4) != 0) {
    FUN_14472eb64(param_1 + 0x55,0);
  }
  param_1[0x5b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2d4)) {
    *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x80;
    FUN_1446efbd8(param_1 + 0x57,0);
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  param_1[0x38] = &DAT_14a176f00;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  param_1[0x38] = &PTR_FUN_14a177080;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (*(int *)((longlong)param_1 + 0x1d4) != 0) {
    FUN_14472eb64(param_1 + 0x39,0);
  }
  param_1[0x3f] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 500)) {
    *(undefined4 *)((longlong)param_1 + 500) = 0x80;
    FUN_1446efbd8(param_1 + 0x3b,0);
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ee338(param_1);
  return;
}



// FUNCTION 14151c76a FUN_14151c76a body=83 status=ok
// SIG undefined FUN_14151c76a(void)

void FUN_14151c76a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x18);
    do {
      if ((longlong *)*plVar3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar3 + 0x10))();
      }
      lVar2 = plVar3[-1];
      if (lVar2 != 0) {
        LOCK();
        piVar1 = (int *)(lVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          FUN_144716208(lVar2);
          FUN_1400020a8(lVar2);
        }
      }
      plVar3 = plVar3 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14151c7bd FUN_14151c7bd body=328 status=ok
// SIG undefined FUN_14151c7bd(void)

undefined8 * FUN_14151c7bd(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  uint local_40;
  undefined4 uStack_3c;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  local_48 = DAT_14cb896a0;
  local_50 = DAT_14cb89698;
  FUN_1448075d0(&local_40);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar3 = &DAT_14c9a1288;
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
      plVar6 = plVar3 + 8;
      if ((longlong *)plVar3[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar3[9];
      }
      iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar3[10] - 1U & local_40) * 4);
      if (iVar5 != -1) {
        do {
          lVar1 = *plVar3 + (longlong)iVar5 * 0x40;
          if (*(uint *)(*plVar3 + (longlong)iVar5 * 0x40) == local_40) {
            if ((((lVar1 != 0) &&
                 (puVar4 = (undefined8 *)(lVar1 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                ((byte *)*puVar4 != (byte *)0x0)) && ((*(byte *)*puVar4 & 0x40) == 0))
            goto LAB_14151c870;
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x38);
        } while (iVar5 != -1);
      }
    }
  }
  puVar4 = &DAT_14c9a1308;
LAB_14151c870:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  pbVar2 = (byte *)*puVar4;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x6b) == 1)) {
    FUN_1400b22c2(&local_40,*(undefined8 *)(pbVar2 + 8));
    FUN_140b10a34(&local_40,param_1);
    if (CONCAT44(uStack_3c,local_40) != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14151c906 FUN_14151c906 body=1275 status=ok
// SIG undefined FUN_14151c906(void)

void FUN_14151c906(undefined4 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = *param_1;
  *param_1 = 0;
  uStack_78 = *(undefined8 *)(param_1 + 4);
  local_70 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14151c96d;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14151cd62;
      goto LAB_14151c976;
    }
  }
  else {
LAB_14151c96d:
    if (iVar6 != 0x10) {
LAB_14151c976:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14151cd62;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14151cd62;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14151cae8;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14379017d);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_14151cae8:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x18);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x18);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14151cb68;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14151cb68:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14ab083d0;
        *(undefined4 *)(puVar16 + 0x15) = local_80;
        *(undefined4 *)((longlong)puVar16 + 0xac) = uStack_7c;
        *(undefined4 *)(puVar16 + 0x16) = (undefined4)uStack_78;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_78._4_4_;
        puVar16[0x17] = local_70;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14ab08350;
        local_40 = local_80;
        uStack_3c = uStack_7c;
        uStack_38 = (undefined4)uStack_78;
        uStack_34 = uStack_78._4_4_;
        local_30 = local_70;
        local_68[0] = &LAB_1458b3c3e;
        FUN_14005a792(&DAT_14ca9a440,L"FRuntimeVirtualTextureRenderResource_Release",&DAT_14cb10514)
        ;
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14151ca23;
    }
  }
LAB_14151cd62:
  FUN_1458b3c44(&local_80);
LAB_14151ca23:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14151ce02 FUN_14151ce02 body=226 status=ok
// SIG undefined FUN_14151ce02(void)

longlong * FUN_14151ce02(longlong *param_1)

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
  pcVar13 = FUN_1462ccf0a;
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



// FUNCTION 14151cee6 FUN_14151cee6 body=202 status=ok
// SIG undefined FUN_14151cee6(void)

void FUN_14151cee6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9ca4b0;
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xba) = 0;
  if (param_1[0xb9] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0xb1);
  if (param_1[0xa4] != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(param_1 + 0x87);
  *(undefined4 *)(param_1 + 0x86) = 0;
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  FUN_145cb86e2(param_1 + 0x7d);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  FUN_145cdc9ca(param_1 + 0x73);
  FUN_14575cc5c(param_1);
  return;
}



// FUNCTION 14151cfb0 FUN_14151cfb0 body=3325 status=ok
// SIG undefined FUN_14151cfb0(void)

void FUN_14151cfb0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  PSRWLOCK SRWLock;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  ushort *puVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined1 uVar13;
  longlong *plVar14;
  void **ppvVar15;
  longlong **pplVar16;
  longlong lVar17;
  undefined1 auStack_2c8 [32];
  longlong *local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  longlong *local_290;
  longlong *local_288 [2];
  undefined8 local_278;
  longlong *local_270;
  longlong *local_268 [2];
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_248;
  longlong *plStack_240;
  longlong *local_230 [2];
  longlong *local_220 [2];
  longlong *local_210;
  int local_208;
  int local_204;
  void *local_200;
  int local_1f8;
  int local_1f4;
  longlong local_1f0;
  longlong local_1e0;
  longlong local_1d0;
  longlong local_1c0;
  longlong *local_1b0 [2];
  longlong local_1a0;
  byte local_188;
  longlong *local_180;
  longlong *local_178;
  undefined1 local_170 [120];
  byte local_f8;
  longlong *local_f0 [2];
  longlong *local_e0 [2];
  longlong *local_d0 [2];
  longlong *local_c0 [2];
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 *local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_80 [4];
  longlong *local_70 [2];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar4 = param_1 + 0x208;
  FUN_1448d5e3c(&local_180,lVar4);
  lVar7 = local_180[0x7c];
  SRWLock = (PSRWLOCK)(lVar7 + 0xc0);
  AcquireSRWLockShared(SRWLock);
  plVar1 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_178 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  iVar5 = *(int *)(lVar7 + 0xb8);
  if (*(int *)(param_1 + 0x2b0) == iVar5) {
    ReleaseSRWLockShared(SRWLock);
  }
  else {
    *(int *)(param_1 + 0x2b0) = iVar5;
    ReleaseSRWLockShared(SRWLock);
    FUN_14151dcae(param_1);
    FUN_145cadaa4(param_1);
    FUN_145cad9be(param_1);
  }
  lVar7 = *(longlong *)(param_1 + 0x288);
  if (lVar7 != 0) {
    FUN_1448d5e3c(&local_180,lVar4);
    lVar8 = local_180[0x90];
    AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0xc0));
    plVar1 = local_178;
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_178 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (*(int *)(param_1 + 0x2b4) != *(int *)(lVar8 + 0xb8)) {
      *(int *)(param_1 + 0x2b4) = *(int *)(lVar8 + 0xb8);
      if (*(int *)(lVar7 + 0x304) != *(int *)(lVar8 + 0xac)) {
        *(undefined1 *)(lVar7 + 0x300) = *(undefined1 *)(lVar8 + 0xa8);
        *(undefined4 *)(lVar7 + 0x304) = *(undefined4 *)(lVar8 + 0xac);
        FUN_144a5dc74(&local_180);
        FUN_140ac6c96(&DAT_14cbdee28,&local_180);
        FUN_144a5dc74(&local_210);
        FUN_140ac6c96(&DAT_14cbdee50,&local_210);
        pplVar16 = &local_180;
        if (*(char *)(lVar7 + 0x300) != '\0') {
          pplVar16 = &local_210;
        }
        uVar11 = FUN_1447a1f4a(pplVar16);
        FUN_144a787a6(lVar7 + 0x288,uVar11);
        puVar10 = *(ushort **)(lVar7 + 0x80);
        if (puVar10 != (ushort *)0x0) {
          *puVar10 = *puVar10 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
        }
        if (local_210 != (longlong *)0x0) {
          (**(code **)(*local_210 + 0x10))();
        }
        if (local_180 != (longlong *)0x0) {
          (**(code **)(*local_180 + 0x10))();
        }
      }
      if ((*(int *)(param_1 + 0x330) == 0) || (*(int *)(param_1 + 0x330) != *(int *)(lVar8 + 0xa0)))
      {
        *(int *)(param_1 + 0x330) = *(int *)(lVar8 + 0xa0);
        FUN_1412821e8(param_1 + 800,lVar8 + 0x90);
        local_2a8 = (longlong *)(lVar7 + 0x2c8);
        iVar5 = *(int *)(lVar7 + 0x2d4);
        FUN_140d47191(*(undefined8 *)(lVar7 + 0x2c8),*(undefined4 *)(lVar7 + 0x2d0));
        *(undefined4 *)(lVar7 + 0x2d0) = 0;
        if ((iVar5 < 0) && (*(int *)(lVar7 + 0x2d4) != 0)) {
          FUN_148e6b6d0(local_2a8,0);
        }
        FUN_144a5dc74(local_c0);
        FUN_140ac6c96(&DAT_14cbdee28,local_c0);
        FUN_144a5dc74(local_d0);
        FUN_140ac6c96(&DAT_14cbdeea0,local_d0);
        FUN_144a5dc74(local_e0);
        FUN_140ac6c96(&DAT_14cbdeec8,local_e0);
        FUN_144a5dc74(local_f0);
        FUN_140ac6c96(&DAT_14cbdeef0,local_f0);
        FUN_1410d1d82(&local_180);
        FUN_144a787a6(&local_180,&DAT_14cbdf740);
        uVar11 = FUN_1447a1f4a(local_c0);
        FUN_144a787a6(local_170,uVar11);
        local_f8 = (local_f8 & 0x9f | *(char *)(lVar7 + 0x300) << 6) ^ 0x60;
        iVar5 = *(int *)(lVar7 + 0x2d0);
        *(uint *)(lVar7 + 0x2d0) = iVar5 + 1U;
        if (*(uint *)(lVar7 + 0x2d4) < iVar5 + 1U) {
          FUN_1410d2002(local_2a8,iVar5);
        }
        FUN_1410d0c56((longlong)iVar5 * 0x90 + *local_2a8,&local_180);
        ppvVar15 = *(void ***)(param_1 + 800);
        *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) + 2;
        if ((longlong)*(int *)(param_1 + 0x328) != 0) {
          lVar17 = (longlong)*(int *)(param_1 + 0x328) << 6;
          do {
            local_2a0 = lVar17;
            FUN_1410d1d82(&local_210);
            if (ppvVar15 + 3 != &local_210) {
              iVar5 = *(int *)(ppvVar15 + 4);
              pvVar9 = ppvVar15[3];
              local_208 = iVar5;
              if (iVar5 == 0 && local_204 == 0) {
                local_204 = 0;
              }
              else {
                FUN_1446dd670(&local_210,iVar5);
                if (iVar5 != 0) {
                  memcpy(local_210,pvVar9,(longlong)iVar5 * 2);
                }
              }
            }
            if (ppvVar15 != &local_200) {
              iVar5 = *(int *)(ppvVar15 + 1);
              pvVar9 = *ppvVar15;
              local_1f8 = iVar5;
              if (iVar5 == 0 && local_1f4 == 0) {
                local_1f4 = 0;
              }
              else {
                FUN_1446dd670(&local_200,iVar5);
                if (iVar5 != 0) {
                  memcpy(local_200,pvVar9,(longlong)iVar5 * 2);
                }
              }
            }
            local_188 = local_188 & 0x9d | *(char *)(ppvVar15 + 7) << 6 | 0x22;
            uVar6 = *(uint *)(ppvVar15 + 6);
            if ((int)uVar6 < 100) {
              local_248 = 0;
              plStack_240 = (longlong *)0x0;
              FUN_1413a454c(local_230,uVar6,0,&local_248);
              FUN_14023409e(&local_258,local_d0,1);
              local_80[0] = 4;
              FUN_14023423e(local_70,local_230);
              local_a0 = local_80;
              local_98 = local_60;
              FUN_14010d304(&local_90,&local_a0);
              local_b0 = local_258;
              local_a8 = local_250;
              if (local_250 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_250 + 1) = (int)local_250[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_220,&local_b0);
              FUN_14007f2db(local_90,local_88);
              lVar17 = local_2a0;
              if (local_90 != 0) {
                FUN_1400020a8();
              }
              if (local_70[0] != (longlong *)0x0) {
                (**(code **)(*local_70[0] + 0x10))();
              }
              plVar1 = local_250;
              plVar14 = local_230[0];
              if (local_250 != (longlong *)0x0) {
                LOCK();
                plVar2 = local_250 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*local_250)(local_250);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar1 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  plVar14 = local_230[0];
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                    plVar14 = local_230[0];
                  }
                }
              }
LAB_14151d57e:
              if (plVar14 != (longlong *)0x0) {
                (**(code **)(*plVar14 + 0x10))();
              }
              FUN_140008f88(local_1b0,local_220);
              if (local_220[0] != (longlong *)0x0) {
                (**(code **)(*local_220[0] + 0x10))();
              }
              plVar1 = plStack_240;
              if (plStack_240 != (longlong *)0x0) {
                LOCK();
                plVar14 = plStack_240 + 1;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)*plVar14 == 0) {
                  (**(code **)*plStack_240)(plStack_240);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar1 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                  }
                }
              }
            }
            else {
              if (uVar6 < 0x100) {
                local_248 = 0;
                plStack_240 = (longlong *)0x0;
                FUN_1413a454c(local_268,uVar6,0,&local_248);
                FUN_14023409e(&local_278,local_e0,1);
                local_80[0] = 4;
                FUN_14023423e(local_70,local_268);
                local_a0 = local_80;
                local_98 = local_60;
                FUN_14010d304(&local_90,&local_a0);
                lVar17 = local_2a0;
                local_b0 = local_278;
                local_a8 = local_270;
                if (local_270 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_270 + 1) = (int)local_270[1] + 1;
                  UNLOCK();
                }
                FUN_14010c016(local_220,&local_b0);
                FUN_14007f2db(local_90,local_88);
                if (local_90 != 0) {
                  FUN_1400020a8();
                }
                if (local_70[0] != (longlong *)0x0) {
                  (**(code **)(*local_70[0] + 0x10))();
                }
                plVar1 = local_270;
                plVar14 = local_268[0];
                if (local_270 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_270 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_270)(local_270);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar1 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    plVar14 = local_268[0];
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar1 + 0x10))(plVar1);
                      plVar14 = local_268[0];
                    }
                  }
                }
                goto LAB_14151d57e;
              }
              local_248 = 0;
              plStack_240 = (longlong *)0x0;
              FUN_1413a454c(local_288,uVar6,0);
              FUN_14023409e(&local_298,local_f0,1);
              local_80[0] = 4;
              FUN_14023423e(local_70,local_288);
              local_a0 = local_80;
              local_98 = local_60;
              FUN_14010d304(&local_90);
              local_b0 = local_298;
              local_a8 = local_290;
              if (local_290 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_290 + 1) = (int)local_290[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(local_220,&local_b0);
              FUN_14007f2db(local_90,local_88);
              if (local_90 != 0) {
                FUN_1400020a8();
              }
              if (local_70[0] != (longlong *)0x0) {
                (**(code **)(*local_70[0] + 0x10))();
              }
              plVar1 = local_290;
              if (local_290 != (longlong *)0x0) {
                LOCK();
                plVar14 = local_290 + 1;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)*plVar14 == 0) {
                  (**(code **)*local_290)(local_290);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar1 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                  }
                }
              }
              if (local_288[0] != (longlong *)0x0) {
                (**(code **)(*local_288[0] + 0x10))();
              }
              FUN_140008f88(local_1b0,local_220);
              if (local_220[0] != (longlong *)0x0) {
                (**(code **)(*local_220[0] + 0x10))();
              }
              plVar1 = plStack_240;
              lVar17 = local_2a0;
              if (plStack_240 != (longlong *)0x0) {
                LOCK();
                plVar14 = plStack_240 + 1;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)*plVar14 == 0) {
                  (**(code **)*plStack_240)(plStack_240);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar1 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  lVar17 = local_2a0;
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar1 + 0x10))(plVar1);
                    lVar17 = local_2a0;
                  }
                }
              }
            }
            iVar5 = *(int *)(lVar7 + 0x2d0);
            *(uint *)(lVar7 + 0x2d0) = iVar5 + 1U;
            if (*(uint *)(lVar7 + 0x2d4) < iVar5 + 1U) {
              FUN_1410d2002(local_2a8,iVar5);
            }
            FUN_1410d0c56((longlong)iVar5 * 0x90 + *local_2a8,&local_210);
            if (local_1a0 != 0) {
              FUN_1400020a8();
            }
            if (local_1b0[0] != (longlong *)0x0) {
              (**(code **)(*local_1b0[0] + 0x10))();
            }
            if (local_1c0 != 0) {
              FUN_1400020a8();
            }
            if (local_1d0 != 0) {
              FUN_1400020a8();
            }
            if (local_1e0 != 0) {
              FUN_1400020a8();
            }
            if (local_1f0 != 0) {
              FUN_1400020a8();
            }
            if (local_200 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_210 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            ppvVar15 = ppvVar15 + 8;
            lVar17 = lVar17 + -0x40;
          } while (lVar17 != 0);
        }
        puVar10 = *(ushort **)(lVar7 + 0x80);
        if (puVar10 != (ushort *)0x0) {
          *puVar10 = *puVar10 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
        }
        FUN_140d471ba(&local_180);
        if (local_f0[0] != (longlong *)0x0) {
          (**(code **)(*local_f0[0] + 0x10))();
        }
        if (local_e0[0] != (longlong *)0x0) {
          (**(code **)(*local_e0[0] + 0x10))();
        }
        if (local_d0[0] != (longlong *)0x0) {
          (**(code **)(*local_d0[0] + 0x10))();
        }
        if (local_c0[0] != (longlong *)0x0) {
          (**(code **)(*local_c0[0] + 0x10))();
        }
      }
      if (*(int *)(lVar7 + 0x30c) != *(int *)(lVar8 + 0xc)) {
        *(undefined1 *)(lVar7 + 0x308) = *(undefined1 *)(lVar8 + 8);
        *(undefined4 *)(lVar7 + 0x30c) = *(undefined4 *)(lVar8 + 0xc);
      }
      FUN_14151dcae(param_1);
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar8 + 0xc0));
  }
  FUN_1448d5e3c(&local_180,lVar4);
  lVar4 = local_180[0x70];
  AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x6e0));
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_178 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar3 = (int *)((longlong)local_178 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_178 + 0x10))(local_178);
      }
    }
  }
  if ((*(int *)(param_1 + 0x2b8) == *(int *)(lVar4 + 0x6d8)) ||
     (lVar7 = *(longlong *)(param_1 + 0x288), lVar7 == 0)) goto LAB_14151d0fc;
  *(int *)(param_1 + 0x2b8) = *(int *)(lVar4 + 0x6d8);
  if (*(int *)(param_1 + 0x340) == *(int *)(lVar4 + 0xc)) {
    if (*(int *)(param_1 + 0x348) == *(int *)(lVar4 + 100)) goto LAB_14151d0fc;
    bVar12 = *(byte *)(param_1 + 0x33c);
LAB_14151d180:
    *(undefined1 *)(param_1 + 0x344) = *(undefined1 *)(lVar4 + 0x60);
    *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(lVar4 + 100);
  }
  else {
    bVar12 = *(byte *)(lVar4 + 8);
    *(byte *)(param_1 + 0x33c) = bVar12;
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(lVar4 + 0xc);
    if (*(int *)(param_1 + 0x348) != *(int *)(lVar4 + 100)) goto LAB_14151d180;
  }
  if ((bVar12 & 1) == 0) {
    uVar13 = *(undefined1 *)(param_1 + 0x344);
  }
  else {
    uVar13 = 0;
  }
  *(undefined1 *)(lVar7 + 0x310) = uVar13;
  puVar10 = *(ushort **)(lVar7 + 0x80);
  if (puVar10 != (ushort *)0x0) {
    *puVar10 = *puVar10 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
  }
LAB_14151d0fc:
  ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x6e0));
  if ((local_60[0] ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14151dcae FUN_14151dcae body=510 status=ok
// SIG undefined FUN_14151dcae(void)

void FUN_14151dcae(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ushort *puVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1448d5e3c(&local_50,param_1 + 0x208);
  puVar6 = *(undefined4 **)(local_50 + 0x3e0);
  AcquireSRWLockShared((PSRWLOCK)(puVar6 + 0x30));
  plVar2 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_1448d5e3c(&local_50,param_1 + 0x208);
  lVar7 = *(longlong *)(local_50 + 0x480);
  AcquireSRWLockShared((PSRWLOCK)(lVar7 + 0xc0));
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)local_48 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x288);
  if (lVar8 == 0) goto LAB_14151ddd5;
  bVar10 = *(int *)(param_1 + 0x2d8) != puVar6[0x26] || *(int *)(param_1 + 0x2d8) == 0;
  if (bVar10) {
    *(undefined4 *)(param_1 + 0x2d8) = puVar6[0x26];
    FUN_140dd8e34(param_1 + 0x2c8,puVar6 + 0x22);
  }
  iVar4 = *(int *)(param_1 + 0x2e4);
  iVar5 = *(int *)(lVar7 + 0xb4);
  if (iVar4 != iVar5) {
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(lVar7 + 0xb0);
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(lVar7 + 0xb4);
  }
  if (*(int *)(param_1 + 0x2c4) == puVar6[1]) {
    if (!(bool)(~bVar10 & iVar4 == iVar5)) goto LAB_14151de3d;
  }
  else {
    *(undefined4 *)(param_1 + 0x2c0) = *puVar6;
    *(undefined4 *)(param_1 + 0x2c4) = puVar6[1];
LAB_14151de3d:
    FUN_14151deae(param_1);
  }
  puVar9 = *(ushort **)(lVar8 + 0x80);
  if (puVar9 != (ushort *)0x0) {
    *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar8 + 0x78) & 0x3f));
  }
LAB_14151ddd5:
  ReleaseSRWLockShared((PSRWLOCK)(lVar7 + 0xc0));
  ReleaseSRWLockShared((PSRWLOCK)(puVar6 + 0x30));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14151deae FUN_14151deae body=1054 status=ok
// SIG undefined FUN_14151deae(void)

void FUN_14151deae(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [64];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  byte local_f0;
  longlong *local_e8 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [120];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) goto LAB_14151e22c;
  bVar10 = *(int *)(param_1 + 0x2c0) != 0;
  if ((bool)*(char *)(lVar3 + 0xb0) == bVar10) {
    iVar5 = 1;
    if (*(int *)(lVar3 + 0xb4) == 0) goto LAB_14151df0f;
  }
  else {
    iVar5 = *(int *)(lVar3 + 0xb4) + 1;
LAB_14151df0f:
    *(bool *)(lVar3 + 0xb0) = bVar10;
    *(int *)(lVar3 + 0xb4) = iVar5;
  }
  plVar1 = (longlong *)(lVar3 + 0x1c8);
  iVar5 = *(int *)(lVar3 + 0x1d4);
  FUN_140d47191(*(undefined8 *)(lVar3 + 0x1c8),*(undefined4 *)(lVar3 + 0x1d0));
  *(undefined4 *)(lVar3 + 0x1d0) = 0;
  if ((iVar5 < 0) && (*(int *)(lVar3 + 0x1d4) != 0)) {
    FUN_148e6b6d0(plVar1,0);
  }
  FUN_1410d1d82(&local_d8);
  FUN_144a5dc74(local_e8);
  FUN_140ac6c96(&DAT_14cbdf9f0,local_e8);
  uVar4 = FUN_1447a1f4a(local_e8);
  FUN_144a787a6(local_c8,uVar4);
  FUN_1400b22c2(&local_178,&DAT_149e02088);
  if (CONCAT44(uStack_d4,local_d8) != 0) {
    FUN_1400020a8();
  }
  local_d8 = local_178;
  uStack_d4 = uStack_174;
  uStack_d0 = uStack_170;
  uStack_cc = uStack_16c;
  local_50 = local_50 | 0x20;
  iVar5 = *(int *)(lVar3 + 0x1d0);
  *(uint *)(lVar3 + 0x1d0) = iVar5 + 1U;
  if (*(uint *)(lVar3 + 0x1d4) < iVar5 + 1U) {
    FUN_1410d2002(plVar1,iVar5);
  }
  FUN_1410d0c56((longlong)iVar5 * 0x90 + *plVar1,&local_d8);
  if ((longlong)*(int *)(param_1 + 0x2d0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x2c8);
    lVar8 = (longlong)*(int *)(param_1 + 0x2d0) * 0x90;
    do {
      if (*(char *)(lVar6 + 0x88) == '\x01') {
        FUN_1410d1d82(&local_178);
        FUN_1400021e4(lVar6,&local_188);
        if (CONCAT44(uStack_174,local_178) != 0) {
          FUN_1400020a8();
        }
        local_178 = (undefined4)local_188;
        uStack_174 = local_188._4_4_;
        uStack_170 = (undefined4)uStack_180;
        uStack_16c = uStack_180._4_4_;
        uVar4 = FUN_1447a1f4a(lVar6 + 0x40);
        FUN_144a787a6(local_168,uVar4);
        if (((*(int *)(lVar6 + 0x10) == 0) || (*(int *)(lVar6 + 0x14) == 0)) ||
           (*(int *)(lVar6 + 0x10) == DAT_14c948000)) {
          FUN_140056680(&local_188,&DAT_149dfb77a);
        }
        else {
          local_188 = 0;
          uStack_180 = 0;
          FUN_1400b2348(lVar6 + 0x10,&local_188,1);
        }
        if (CONCAT44(uStack_124,local_128) != 0) {
          FUN_1400020a8();
        }
        local_128 = (undefined4)local_188;
        uStack_124 = local_188._4_4_;
        uStack_120 = (undefined4)uStack_180;
        uStack_11c = uStack_180._4_4_;
        local_f0 = local_f0 | 0x20;
        iVar5 = *(int *)(lVar3 + 0x1d0);
        *(uint *)(lVar3 + 0x1d0) = iVar5 + 1U;
        if (*(uint *)(lVar3 + 0x1d4) < iVar5 + 1U) {
          FUN_1410d2002(plVar1,iVar5);
        }
        FUN_1410d0c56((longlong)iVar5 * 0x90 + *plVar1,&local_178);
        FUN_140d471ba(&local_178);
      }
      lVar6 = lVar6 + 0x90;
      lVar8 = lVar8 + -0x90;
    } while (lVar8 != 0);
  }
  iVar5 = *(int *)(lVar3 + 0x1d0);
  if (0 < iVar5) {
    lVar6 = 0;
    uVar9 = 0;
    do {
      if (uVar9 == *(uint *)(param_1 + 0x2e0)) {
        *(int *)(param_1 + 700) = (int)uVar9;
        uVar2 = *(uint *)(lVar3 + 0x1d0);
        if ((int)uVar9 < (int)uVar2) {
          lVar8 = 0;
          do {
            *(byte *)(*plVar1 + 0x88 + lVar8) =
                 *(byte *)(*plVar1 + 0x88 + lVar8) & 0xbf | (lVar6 == lVar8) << 6;
            lVar8 = lVar8 + 0x90;
          } while ((ulonglong)uVar2 * 0x90 != lVar8);
        }
        iVar5 = *(int *)(*(longlong *)(lVar3 + 0x1c8) + 0x18 + uVar9 * 0x90);
        iVar7 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar7 = 0;
        }
        FUN_1402980a2(lVar3 + 0x188,
                      *(undefined8 *)(*(longlong *)(lVar3 + 0x1c8) + 0x10 + uVar9 * 0x90),iVar7);
        iVar5 = *(int *)(lVar3 + 0x1d0);
      }
      uVar9 = uVar9 + 1;
      lVar6 = lVar6 + 0x90;
    } while ((longlong)uVar9 < (longlong)iVar5);
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  FUN_140d471ba(&local_d8);
LAB_14151e22c:
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14151e2ce FUN_14151e2ce body=862 status=ok
// SIG undefined FUN_14151e2ce(void)

uint * FUN_14151e2ce(uint *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  
  uVar17 = DAT_14ca80588;
  uVar8 = DAT_14ca80560;
  if (DAT_14ca8058c == 0) {
    uVar17 = DAT_14ca80560 + 1;
    bVar18 = DAT_14ca80564 == DAT_14ca80560;
    DAT_14ca80560 = uVar17;
    if (bVar18) {
      FUN_14482b872(&DAT_14ca80558,uVar8);
    }
    iVar11 = DAT_14ca80580;
    if (DAT_14ca80580 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = DAT_14ca80580 + 0x1e;
      if (-1 < DAT_14ca80580 + -1) {
        iVar5 = DAT_14ca80580 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    iVar9 = DAT_14ca80580 + 1;
    iVar14 = DAT_14ca80580 + 0x1f;
    if (-1 < DAT_14ca80580) {
      iVar14 = DAT_14ca80580;
    }
    if (iVar14 >> 5 != iVar5) {
      if (DAT_14ca80584 <= DAT_14ca80580) {
        if (DAT_14ca80580 + 0x20U < 0xa0) {
          DAT_14ca80584 = 0x80;
        }
        else {
          uVar17 = DAT_14ca80580 + 0x20U >> 5;
          if (DAT_14ca80584 + 0x1fU < 0xa0) {
            uVar16 = 4;
            if (4 < uVar17) {
              uVar16 = uVar17;
            }
          }
          else {
            uVar16 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar16 << 2,0);
          iVar5 = (int)(uVar10 >> 2);
          DAT_14ca80584 = -0x20;
          if ((int)uVar17 <= iVar5) {
            DAT_14ca80584 = iVar5 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14ca80568,DAT_14ca80580);
        iVar9 = DAT_14ca80580 + 1;
      }
      iVar5 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar5 = iVar9;
      }
      if (iVar9 % 0x20 != 0) {
        puVar12 = &DAT_14ca80568;
        if (DAT_14ca80578 != (undefined4 *)0x0) {
          puVar12 = DAT_14ca80578;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        DAT_14ca80580 = iVar9;
        puVar12[iVar5 >> 5] = (uint)(puVar12[iVar5 >> 5] << (bVar7 & 0x1f)) >> (bVar7 & 0x1f);
        iVar9 = DAT_14ca80580;
      }
    }
    DAT_14ca80580 = iVar9;
    lVar6 = (longlong)(int)uVar8;
    puVar12 = &DAT_14ca80568;
    if (DAT_14ca80578 != (undefined4 *)0x0) {
      puVar12 = DAT_14ca80578;
    }
    bVar7 = (byte)iVar11 & 0x1f;
    puVar12[iVar14 >> 5] = puVar12[iVar14 >> 5] & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    uVar17 = uVar8;
  }
  else {
    lVar6 = (longlong)(int)DAT_14ca80588;
    DAT_14ca80588 = *(uint *)(DAT_14ca80558 + 4 + lVar6 * 0x18);
    DAT_14ca8058c = DAT_14ca8058c + -1;
    if (DAT_14ca8058c != 0) {
      *(undefined4 *)(DAT_14ca80558 + (longlong)(int)DAT_14ca80588 * 0x18) = 0xffffffff;
    }
  }
  iVar11 = 1;
  puVar12 = &DAT_14ca80568;
  if (DAT_14ca80578 != (undefined4 *)0x0) {
    puVar12 = DAT_14ca80578;
  }
  uVar8 = uVar17 + 0x1f;
  if (-1 < (int)uVar17) {
    uVar8 = uVar17;
  }
  puVar12[(int)uVar8 >> 5] = puVar12[(int)uVar8 >> 5] | 1 << ((byte)uVar17 & 0x1f);
  puVar1 = (uint *)(DAT_14ca80558 + lVar6 * 0x18);
  puVar3 = (undefined8 *)param_2[1];
  uVar8 = *(uint *)*param_2;
  *puVar1 = uVar8;
  *(undefined8 *)(puVar1 + 2) = *puVar3;
  puVar1[4] = 0xffffffff;
  uVar16 = DAT_14ca80560 - DAT_14ca8058c;
  if ((uVar16 != 0) && (uVar16 != 1)) {
    puVar13 = &DAT_14ca80590;
    if (DAT_14ca80598 != (undefined *)0x0) {
      puVar13 = DAT_14ca80598;
    }
    uVar15 = *(uint *)(puVar13 + (ulonglong)(DAT_14ca805a0 - 1U & uVar8) * 4);
    while (uVar15 != 0xffffffff) {
      puVar2 = (uint *)(DAT_14ca80558 + (longlong)(int)uVar15 * 0x18);
      if (*puVar2 == uVar8) {
        uVar8 = puVar1[1];
        uVar16 = puVar1[2];
        uVar4 = puVar1[3];
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        puVar2[2] = uVar16;
        puVar2[3] = uVar4;
        FUN_14740e198(uVar17);
        goto LAB_14151e4b8;
      }
      uVar15 = puVar2[4];
    }
  }
  if (3 < uVar16) {
    uVar10 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar11 = 1 << ((byte)lVar6 & 0x1f);
  }
  uVar15 = uVar17;
  if (((int)uVar16 < 1) || (iVar11 <= DAT_14ca805a0)) {
    uVar8 = DAT_14ca805a0 - 1U & uVar8;
    puVar1[5] = uVar8;
    puVar13 = DAT_14ca80598;
    if (DAT_14ca80598 == (undefined *)0x0) {
      puVar13 = &DAT_14ca80590;
    }
    puVar1[4] = *(uint *)(puVar13 + ((longlong)DAT_14ca805a0 - 1U & (longlong)(int)uVar8) * 4);
    puVar13 = DAT_14ca80598;
    if (DAT_14ca80598 == (undefined *)0x0) {
      puVar13 = &DAT_14ca80590;
    }
    *(uint *)(puVar13 + ((longlong)DAT_14ca805a0 - 1U & (longlong)(int)uVar8) * 4) = uVar17;
  }
  else {
    DAT_14ca805a0 = iVar11;
    FUN_14151e62c();
  }
LAB_14151e4b8:
  *param_1 = uVar15;
  return param_1;
}



// FUNCTION 14151e62c FUN_14151e62c body=578 status=ok
// SIG undefined FUN_14151e62c(void)

void FUN_14151e62c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  undefined4 *local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14ca80598 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca80598,0,0,4);
  }
  uVar4 = DAT_14ca805a0;
  if (DAT_14ca805a0 != 0) {
    FUN_144a1cbf0(&DAT_14ca80590,0,DAT_14ca805a0,4);
    if (0 < (int)uVar4) {
      uVar2 = 0;
      do {
        puVar6 = DAT_14ca80598;
        if (DAT_14ca80598 == (undefined *)0x0) {
          puVar6 = &DAT_14ca80590;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14ca805a0 + 0x7fffffff & uVar2) * 4) = 0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14ca80568;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14ca80580 == 0) {
      uVar7 = 1;
      local_40._0_4_ = 0xffffffff;
      local_40._4_4_ = 0;
      local_50._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      uVar7 = local_50 >> 0x20;
    }
    iVar3 = (int)local_50;
    uVar4 = (uint)local_40;
    iVar5 = local_40._4_4_;
    iVar8 = local_38;
    if (local_40._4_4_ < (int)local_48[6]) {
      do {
        lVar11 = DAT_14ca80558;
        lVar10 = (longlong)iVar5;
        uVar13 = (longlong)(int)DAT_14ca805a0 - 1U &
                 (longlong)*(int *)(DAT_14ca80558 + lVar10 * 0x18);
        iVar12 = (int)uVar13;
        *(int *)(DAT_14ca80558 + 0x14 + lVar10 * 0x18) = iVar12;
        puVar6 = DAT_14ca80598;
        if (DAT_14ca80598 == (undefined *)0x0) {
          puVar6 = &DAT_14ca80590;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14ca805a0 - 1U & uVar13) * 4);
        puVar6 = DAT_14ca80598;
        if (DAT_14ca80598 == (undefined *)0x0) {
          puVar6 = &DAT_14ca80590;
        }
        *(int *)(puVar6 + ((longlong)iVar12 & (longlong)(int)DAT_14ca805a0 - 1U) * 4) = iVar5;
        uVar4 = ~(uint)uVar7 & uVar4;
        puVar9 = *(undefined4 **)(local_48 + 4);
        if (*(undefined4 **)(local_48 + 4) == (undefined4 *)0x0) {
          puVar9 = local_48;
        }
        iVar12 = local_48[6];
        lVar11 = (longlong)iVar3;
        uVar2 = puVar9[lVar11] & uVar4;
        if (uVar2 == 0) {
          iVar5 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar5 = iVar12 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar1 = iVar5;
          if (iVar5 < iVar3) {
            iVar1 = iVar3;
          }
          if (iVar5 <= iVar3) break;
          lVar10 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar2 = puVar9[lVar11 + lVar10 + 1];
            if (uVar2 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar1 - lVar11 == lVar10) goto LAB_14151e826;
          }
          iVar3 = iVar3 + (int)lVar10 + 1;
          uVar4 = 0xffffffff;
        }
        uVar7 = (ulonglong)(-uVar2 & uVar2);
        uVar13 = uVar7 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar12);
    }
  }
LAB_14151e826:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14151e870 FUN_14151e870 body=199 status=ok
// SIG undefined FUN_14151e870(void)

void FUN_14151e870(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != (longlong *)0x0) &&
     ((((longlong *)param_1[0x7a] != param_2 || ((longlong *)param_2[0x78] != param_1)) ||
      ((longlong *)param_1[0x87] != param_2)))) {
    (**(code **)(*param_1 + 0x6b0))(param_1,param_2);
    if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    param_2[0x78] = (longlong)param_1;
    (**(code **)(*param_2 + 0x690))(param_2);
    local_20 = param_1[0x7a];
    uVar1 = FUN_14477b072(param_1,DAT_14caf9708);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14151e938 FUN_14151e938 body=34 status=ok
// SIG undefined FUN_14151e938(void)

void FUN_14151e938(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x510);
  lVar1 = *(longlong *)(param_1 + 0x518);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14151e95a FUN_14151e95a body=482 status=ok
// SIG undefined FUN_14151e95a(void)

void FUN_14151e95a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x58;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
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



// FUNCTION 14151eb3e FUN_14151eb3e body=579 status=ok
// SIG undefined FUN_14151eb3e(void)

void FUN_14151eb3e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_78 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar11 = 1;
    uVar13 = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 >> 0x20;
    uVar13 = local_58 & 0xffffffff;
  }
  plVar6 = local_60;
  iVar16 = (int)local_68;
  iVar8 = local_58._4_4_;
  iVar15 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar14 = *param_1;
      plVar9 = *(longlong **)(lVar14 + 0x30 + (longlong)iVar8 * 0x40);
      local_74 = iVar15;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (*(longlong *)(lVar14 + (longlong)iVar8 * 0x40 + 0x18) != 0) {
        FUN_1400020a8();
      }
      uVar12 = (uint)uVar13 & ~(uint)uVar11;
      uVar13 = (ulonglong)uVar12;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar14 = (longlong)iVar16;
      uVar12 = *(uint *)((longlong)plVar9 + lVar14 * 4) & uVar12;
      iVar15 = local_74;
      if (uVar12 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar16) {
          iVar5 = iVar16;
        }
        if (iVar8 <= iVar16) break;
        lVar10 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar12 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar14 * 4 + 4);
          if (uVar12 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar14 == lVar10) goto LAB_14151ecea;
        }
        iVar16 = iVar16 + (int)lVar10 + 1;
        uVar13 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar12 & uVar12);
      uVar3 = uVar11 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_14151ecea:
  iVar15 = local_78;
  if (local_78 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_78);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_78) {
    FUN_140b7ce44(param_1,local_78);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar15 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar12 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar7 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar7 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14151ed84 FUN_14151ed84 body=132 status=ok
// SIG undefined FUN_14151ed84(void)

longlong FUN_14151ed84(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x178), lVar4 != 0)) &&
     (iVar1 = *(int *)(lVar4 + 0x3b0), (longlong)iVar1 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x3a8);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar5);
      if ((lVar2 != 0) && (cVar3 = FUN_140ba41f1(lVar2 + 0x3a0,param_2), cVar3 != '\0')) {
        return lVar2;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 14151ee08 FUN_14151ee08 body=202 status=ok
// SIG undefined FUN_14151ee08(void)

void FUN_14151ee08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b831fc0;
  param_1[6] = &PTR_FUN_14b832280;
  param_1[7] = &PTR_LAB_14b832310;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_145852fa4(param_1 + 0x29);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14151eed2 FUN_14151eed2 body=204 status=ok
// SIG undefined FUN_14151eed2(void)

void FUN_14151eed2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b9c4600;
  plVar3 = (longlong *)param_1[0x7b];
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
  FUN_1456d172d(param_1[0x68],*(undefined4 *)(param_1 + 0x69));
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 14151ef9e FUN_14151ef9e body=190 status=ok
// SIG undefined FUN_14151ef9e(void)

void FUN_14151ef9e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14a9bdec0;
  param_1[0x72] = &PTR_FUN_14a9be580;
  uVar1 = FUN_145a1e508();
  FUN_145a1e3c6(uVar1,param_1);
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x82) = 0;
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  FUN_145af71f6(param_1 + 0x79);
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 14151f05c FUN_14151f05c body=327 status=ok
// SIG undefined FUN_14151f05c(void)

void FUN_14151f05c(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  byte bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  float fVar10;
  
  if ((((*(char *)(param_1 + -0xef0) == '\x03') && (0.0 < *(float *)(param_1 + 0x38))) &&
      (cVar5 = FUN_14662b40e(param_1 + -0x1068), cVar5 == '\0')) &&
     (fVar2 = *(float *)(param_1 + 0x38), 0.0 < fVar2)) {
    lVar1 = param_1 + 0x10;
    cVar5 = FUN_1403ae288(lVar1);
    if (cVar5 != '\0') {
      lVar8 = FUN_14008e0ae(lVar1);
      fVar10 = 1.0;
      *(float *)(lVar8 + 0x58) = 1.0 / fVar2;
      FUN_14020a6cc(lVar8 + 0x50,1);
      if (*(char *)(param_1 + 0x4d) == '\x01') {
        *(undefined1 *)(param_1 + 0x4d) = 0;
        fVar10 = 1.0;
      }
      else {
        bVar3 = *(byte *)(param_1 + -0x490);
        if (((int)(uint)bVar3 < *(int *)(param_1 + -0x478)) &&
           (plVar4 = *(longlong **)
                      (*(longlong *)(param_1 + -0x480) + 0x10 +
                      (ulonglong)bVar3 * 0x80 + (ulonglong)bVar3 * 8), plVar4 != (longlong *)0x0)) {
          iVar6 = (**(code **)(*plVar4 + 0x2c0))(plVar4);
          iVar7 = (**(code **)(*plVar4 + 0x2b8))(plVar4);
          fVar10 = (float)iVar6 / (float)iVar7;
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          fVar10 = 1.0 - fVar10;
        }
        lVar8 = FUN_14008e0ae(lVar1);
        if (fVar10 < *(float *)(lVar8 + 200) || fVar10 == *(float *)(lVar8 + 200)) {
          return;
        }
      }
      uVar9 = FUN_14008e0ae(lVar1);
      FUN_1409d461e(uVar9,fVar10,1);
      return;
    }
  }
  return;
}



// FUNCTION 14151f1a4 FUN_14151f1a4 body=144 status=ok
// SIG undefined FUN_14151f1a4(void)

void FUN_14151f1a4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba3c110;
  plVar3 = (longlong *)param_1[0x15];
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
  FUN_148f9bd2b(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_145d1d058(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145c0f28c(param_1);
  return;
}



// FUNCTION 14151f234 FUN_14151f234 body=1372 status=ok
// SIG undefined FUN_14151f234(void)

void FUN_14151f234(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  longlong local_1b0;
  code *local_1a8;
  longlong *local_1a0;
  ulonglong local_198;
  longlong *plStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [64];
  longlong local_138;
  undefined4 local_130;
  code *local_128;
  undefined8 local_120;
  longlong *plStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  longlong *local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8 [2];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98 [4];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  lVar9 = DAT_14c9a1ab0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((DAT_14c9a1ab0 == 0) || (*(char *)(param_1 + 0x30) != '\x01')) goto LAB_14151f666;
  FUN_145cb4a02(param_1 + 0x38);
  lVar4 = FUN_144a126be(param_1);
  if ((lVar4 == 0) || (lVar5 = FUN_14103c0a0(lVar4), lVar5 == 0)) goto LAB_14151f666;
  local_1b0 = FUN_144a8ca68(lVar4);
  local_1a8 = FUN_142b291ac;
  local_1a0 = local_98;
  local_98[0] = param_1;
  FUN_140bc66fe(lVar5);
  if (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x6c)) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    goto LAB_14151f666;
  }
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  plStack_118 = (longlong *)0x0;
  uStack_108 = &PTR_LAB_14a179210;
  local_100 = local_98;
  local_f8 = local_e8;
  local_f0 = param_1;
  local_128 = FUN_142b2960c;
  lVar4 = (longlong)*(int *)(lVar9 + 0x2d0);
  if (lVar4 == 0) {
LAB_14151f3f7:
    plVar8 = &uStack_108;
    if (plStack_118 != (longlong *)0x0) {
      plVar8 = plStack_118;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else {
    lVar9 = *(longlong *)(lVar9 + 0x2c8);
    lVar4 = lVar4 * 0x60;
    do {
      pcVar2 = local_128;
      lVar4 = lVar4 + -0x60;
      local_198 = local_198 & 0xffffffffffffff00;
      plVar8 = plStack_118;
      if (plStack_118 == (longlong *)0x0) {
        plVar8 = &uStack_108;
      }
      uVar6 = (**(code **)(*plVar8 + 8))();
      (*pcVar2)(uVar6,lVar9,&local_198);
    } while (((char)local_198 == '\0') && (lVar9 = lVar9 + 0x60, lVar4 != 0));
    if (local_128 != (code *)0x0) goto LAB_14151f3f7;
  }
  FUN_145cb4c84(local_e8,local_178,local_98);
  local_130 = 0;
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  FUN_145cb49ca(local_178);
  local_198 = 0x100000000;
  local_188._0_4_ = 0xffffffff;
  local_188._4_4_ = 0;
  uStack_180 = 0;
  plStack_190 = (longlong *)local_d8;
  if (local_c0 == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_198);
    iVar10 = local_c0;
  }
  local_110._0_4_ = (uint)local_188;
  local_110._4_4_ = local_188._4_4_;
  uStack_108 = (undefined **)CONCAT44(uStack_17c,uStack_180);
  local_120 = local_198;
  plStack_118 = plStack_190;
  local_128 = (code *)local_e8;
  if ((local_188._4_4_ != iVar10) || (plStack_190 != (longlong *)local_d8)) {
    do {
      if ((local_1b0 != 0) &&
         ((plVar8 = *(longlong **)(*(longlong *)local_128 + (longlong)local_110._4_4_ * 0x10),
          plVar8 != (longlong *)0x0 && (*(char *)(local_1b0 + 0x178) == '\x03')))) {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        uVar7 = (**(code **)(*plVar8 + 0x308))();
        local_1b8 = 0;
        FUN_1411ac4f8(lVar5,uVar7,0,uVar6);
      }
      local_110._0_4_ = (uint)local_110 & ~local_120._4_4_;
      FUN_1449c0562(&local_120);
    } while (((local_110._4_4_ != iVar10) || (plStack_118 != (longlong *)local_d8)) ||
            (local_128 != (code *)local_e8));
  }
  plVar8 = local_98 + 2;
  local_198 = 0x100000000;
  local_188 = 0xffffffff;
  uStack_180 = 0;
  iVar10 = 0;
  plStack_190 = plVar8;
  if (local_70 != 0) {
    FUN_1449c0562(&local_198);
    iVar10 = local_70;
  }
  local_110 = local_188;
  uVar6 = local_110;
  uStack_108 = (undefined **)CONCAT44(uStack_17c,uStack_180);
  local_120 = local_198;
  plStack_118 = plStack_190;
  local_128 = (code *)local_98;
  local_110._4_4_ = (int)((ulonglong)local_188 >> 0x20);
  if ((local_110._4_4_ != iVar10) || (plStack_190 != plVar8)) {
    iVar3 = local_110._4_4_;
    local_110 = uVar6;
    do {
      if (((local_1b0 != 0) &&
          (plVar1 = *(longlong **)(*(longlong *)local_128 + (longlong)iVar3 * 0x10),
          plVar1 != (longlong *)0x0)) && (*(char *)(local_1b0 + 0x178) == '\x03')) {
        uVar6 = *(undefined8 *)(param_1 + 0x18);
        uVar7 = (**(code **)(*plVar1 + 0x308))();
        local_1b8 = 0;
        FUN_1411ac4f8(lVar5,uVar7,2,uVar6);
      }
      local_110 = CONCAT44(local_110._4_4_,(uint)local_110 & ~local_120._4_4_);
      FUN_1449c0562(&local_120);
      iVar3 = local_110._4_4_;
    } while (((local_110._4_4_ != iVar10) || (plStack_118 != plVar8)) ||
            (uVar6 = local_110, local_128 != (code *)local_98));
  }
  local_110 = uVar6;
  FUN_145cb4a02(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x30) = 0;
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_145cb49ca(local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_145cb49ca(local_98);
LAB_14151f666:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14151f792 FUN_14151f792 body=598 status=ok
// SIG undefined FUN_14151f792(void)

void FUN_14151f792(longlong *param_1)

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
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_14151f99b;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_14151f99b:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14151f9ea FUN_14151f9ea body=1555 status=ok
// SIG undefined FUN_14151f9ea(void)

void FUN_14151f9ea(longlong param_1)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  ushort *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  void *local_88;
  longlong local_80;
  longlong local_78;
  void *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(param_1 + 0x208) != 0) && (lVar4 = *(longlong *)(param_1 + 0x288), lVar4 != 0)) {
    FUN_1448d5e3c(&local_70,param_1 + 0x208);
    lVar5 = *(longlong *)((longlong)local_70 + 0x1d0);
    AcquireSRWLockShared((PSRWLOCK)(lVar5 + 0x38));
    plVar8 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar6 = (int *)((longlong)plVar8 + 0xc);
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    FUN_1448d5e3c(&local_70,param_1 + 0x208);
    piVar6 = *(int **)((longlong)local_70 + 0x60);
    SRWLock = (PSRWLOCK)(piVar6 + 0x2c);
    AcquireSRWLockShared(SRWLock);
    plVar8 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar13 = (int *)((longlong)plVar8 + 0xc);
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (*piVar13 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (*(int *)(lVar5 + 0x30) != *(int *)(param_1 + 0x29c)) {
      *(int *)(param_1 + 0x29c) = *(int *)(lVar5 + 0x30);
      if (*(int *)(lVar4 + 0xbc) != *(int *)(lVar5 + 0x2c)) {
        *(undefined1 *)(lVar4 + 0xb8) = *(undefined1 *)(lVar5 + 0x28);
        *(undefined4 *)(lVar4 + 0xbc) = *(undefined4 *)(lVar5 + 0x2c);
      }
      if (*(int *)(lVar4 + 0xb4) != *(int *)(lVar5 + 0xc)) {
        *(undefined1 *)(lVar4 + 0xb0) = *(undefined1 *)(lVar5 + 8);
        *(undefined4 *)(lVar4 + 0xb4) = *(undefined4 *)(lVar5 + 0xc);
      }
      FUN_145cb523c((longlong *)(lVar4 + 0xc0),*(undefined4 *)(lVar5 + 0x18));
      iVar9 = *(int *)(lVar5 + 0x18);
      if (0 < iVar9) {
        local_90 = 0x38;
        local_a0 = 0;
        local_80 = 0;
        do {
          if (local_80 < *(int *)(lVar4 + 200)) {
            local_a8 = *(longlong *)(lVar4 + 0xc0);
            local_98 = *(longlong *)(lVar5 + 0x10);
            puVar10 = (undefined8 *)(local_98 + -0x38 + local_90);
            local_88 = (void *)(local_a8 + 0x10 + local_a0);
            *(undefined8 *)((longlong)local_88 + -0x10) = *puVar10;
            *(undefined1 *)((longlong)local_88 + -8) = 1;
            FUN_1442b652a(param_1,puVar10,local_80);
            local_78 = local_98 + local_90 + -0x28;
            FUN_144a787a6(local_88);
            FUN_1448f870c(&local_70,*(undefined4 *)(local_78 + 0x10));
            if ((void **)(local_a8 + local_a0 + 0x50) != &local_70) {
              if (*(longlong *)(local_a8 + 0x50 + local_a0) != 0) {
                FUN_1400020a8();
              }
              *(void **)(local_a8 + 0x50 + local_a0) = local_70;
              local_70 = (void *)0x0;
              *(int *)(local_a8 + 0x58 + local_a0) = (int)local_68;
              *(undefined4 *)(local_a8 + 0x5c + local_a0) = local_68._4_4_;
              local_68 = (longlong *)0x0;
            }
            if (local_70 != (void *)0x0) {
              FUN_1400020a8();
            }
            *(undefined1 *)(local_a8 + 0x78 + local_a0) =
                 *(undefined1 *)(local_98 + 0x31 + local_90);
            *(undefined1 *)(local_a8 + 0x79 + local_a0) =
                 *(undefined1 *)(local_98 + 0x32 + local_90);
            iVar11 = *(int *)(local_98 + -0x18 + local_90) - *piVar6;
            *(int *)(local_a8 + 0x30 + local_a0) = iVar11;
            iVar9 = *(int *)(param_1 + 0x298);
            *(bool *)(local_a8 + 0x48 + local_a0) = iVar9 <= iVar11;
            *(bool *)(local_a8 + 0x49 + local_a0) = iVar11 < iVar9;
            piVar13 = (int *)&DAT_14cbda740;
            puVar10 = &DAT_14cbda738;
            if (iVar11 < 1) {
              piVar13 = &DAT_14cbda750;
              puVar10 = &DAT_14cbda748;
            }
            if (2 < iVar11) {
              piVar13 = &DAT_14cbda730;
            }
            if (2 < iVar11) {
              puVar10 = &DAT_14cbda728;
            }
            iVar9 = 0;
            if (*piVar13 != 0) {
              iVar9 = *piVar13 + -1;
            }
            local_88 = (void *)(local_a0 + local_a8 + 0x38);
            FUN_1402980a2(local_88,*puVar10,iVar9);
            cVar2 = *(char *)(local_98 + 0x30 + local_90);
            *(char *)((longlong)local_88 + 0x84) = cVar2;
            if (cVar2 == '\x01') {
              local_70 = (void *)0x0;
              uVar3 = *(uint *)(local_98 + 0x28 + local_90);
              lVar14 = (longlong)(int)uVar3;
              local_88 = *(void **)(local_98 + 0x20 + local_90);
              local_68 = (longlong *)CONCAT44(local_68._4_4_,uVar3);
              if (lVar14 == 0) {
                local_68 = (longlong *)(ulonglong)uVar3;
              }
              else {
                local_78 = lVar14;
                FUN_1446dd670(&local_70,lVar14,0);
                memcpy(local_70,local_88,local_78 * 2);
              }
            }
            else {
              FUN_1400b22c2(&local_70,&DAT_149e02088);
            }
            iVar9 = (int)local_68 + -1;
            if ((int)local_68 == 0) {
              iVar9 = 0;
            }
            FUN_1402980a2(local_a8 + local_a0 + 0xc0,local_70,iVar9);
            if (local_70 != (void *)0x0) {
              FUN_1400020a8();
            }
            local_88 = (void *)(local_a0 + local_a8 + 0x98);
            *(undefined1 *)(local_a0 + local_a8 + 0x90) =
                 *(undefined1 *)(local_98 + 0x18 + local_90);
            FUN_144a787a6(local_88,local_98 + local_90);
            iVar9 = *(int *)(local_98 + 0x10 + local_90);
            *(bool *)((longlong)local_88 + -7) = 1 < iVar9;
            if (iVar9 < 2) {
              FUN_1400b22c2(&local_70,&DAT_149e02088);
            }
            else {
              FUN_1448f870c(&local_70,*(undefined4 *)(local_98 + 0x10 + local_90));
            }
            if ((void **)(local_a0 + local_a8 + 0xa8) != &local_70) {
              if (*(longlong *)(local_a8 + 0xa8 + local_a0) != 0) {
                FUN_1400020a8();
              }
              *(void **)(local_a8 + 0xa8 + local_a0) = local_70;
              local_70 = (void *)0x0;
              *(int *)(local_a8 + 0xb0 + local_a0) = (int)local_68;
              *(undefined4 *)(local_a8 + 0xb4 + local_a0) = local_68._4_4_;
              local_68 = (longlong *)0x0;
            }
            if (local_70 != (void *)0x0) {
              FUN_1400020a8();
            }
            lVar14 = local_98 + local_90;
            local_98 = lVar14 + -0x10;
            lVar12 = local_a8 + local_a0;
            local_a8 = lVar12 + 0x68;
            *(float *)(lVar12 + 0xb8) = *(float *)(lVar14 + 0x14) * 100.0;
            FUN_144a787a6();
            *(bool *)(local_a8 + -8) = 1 < *(int *)(local_98 + 8);
            iVar9 = *(int *)(lVar5 + 0x18);
          }
          local_80 = local_80 + 1;
          local_a0 = local_a0 + 0x208;
          local_90 = local_90 + 0x80;
        } while (local_80 < iVar9);
      }
      puVar7 = *(ushort **)(lVar4 + 0x80);
      if (puVar7 != (ushort *)0x0) {
        *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared(SRWLock);
    ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 0x38));
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14151fffe FUN_14151fffe body=140 status=ok
// SIG undefined FUN_14151fffe(void)

void FUN_14151fffe(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x60);
    do {
      LOCK();
      plVar2 = (longlong *)*puVar3;
      *puVar3 = 1;
      UNLOCK();
      if (&DAT_00000001 < plVar2) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
        (**(code **)*plVar2)(plVar2,1);
      }
      if ((*(int *)((longlong)puVar3 + -4) == 0) && (puVar3[-8] != 0)) {
        FUN_1400020a8();
        puVar3[-8] = 0;
      }
      plVar2 = (longlong *)puVar3[-2];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      puVar3 = puVar3 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14152008a FUN_14152008a body=130 status=ok
// SIG undefined FUN_14152008a(void)

undefined4
FUN_14152008a(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_145dead08(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152010e FUN_14152010e body=160 status=ok
// SIG undefined FUN_14152010e(void)

undefined4 FUN_14152010e(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_4[1];
  lVar2 = *param_4;
  local_48 = DAT_14cb92c28;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_14607c22e(param_1,lVar1,param_2,param_3);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415201b0 FUN_1415201b0 body=51 status=ok
// SIG undefined FUN_1415201b0(void)

void FUN_1415201b0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140ea1d39(*puVar1,*(undefined4 *)(puVar1 + 1));
  *(undefined4 *)(puVar1 + 1) = 0;
  if (*(int *)((longlong)puVar1 + 0xc) == 0) {
    return;
  }
  FUN_146273f6a(puVar1);
  return;
}



// FUNCTION 1415201e4 FUN_1415201e4 body=951 status=ok
// SIG undefined FUN_1415201e4(void)

ulonglong FUN_1415201e4(undefined8 *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
                       char param_5,byte param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 unaff_RBX;
  undefined7 uVar15;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  code *local_c8;
  longlong **local_c0;
  undefined8 *local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 uStack_78;
  int local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    uVar14 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    local_b8 = (undefined8 *)0x0;
    uStack_b0 = 1;
    FUN_1406d2ac8(&local_b8,0);
    puVar5 = local_b8;
    FUN_1406d2a2a(local_b8);
    *(undefined1 *)((longlong)puVar5 + 0x31) = 1;
    uVar10 = param_1[1];
    *puVar5 = *param_1;
    puVar5[1] = uVar10;
    puVar5[2] = param_1[2];
    puVar5[9] = *(undefined8 *)(param_2 + 4);
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *(undefined4 *)(puVar5 + 7) = *param_2;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = uVar2;
    *(undefined4 *)(puVar5 + 8) = uVar3;
    *(undefined4 *)((longlong)puVar5 + 0x44) = uVar4;
    *(undefined1 *)((longlong)puVar5 + 0x1c) = 0;
    *(undefined4 *)(puVar5 + 3) = 0x459c4000;
    *(undefined1 *)(puVar5 + 6) = 0;
    if (param_4 != 0) {
      uVar10 = FUN_140898eae(param_4);
      FUN_144aa2048(uVar10,&local_a8);
      if (puVar5 + 4 == &local_a8) {
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (puVar5[4] != 0) {
          FUN_1400020a8();
        }
        puVar5[4] = local_a8;
        *(int *)(puVar5 + 5) = (int)uStack_a0;
        *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_a0._4_4_;
      }
    }
    local_88 = 0;
    local_80 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_7c = 0x80;
    uStack_78 = 0xffffffff;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    if (param_5 != '\0') {
      local_d0 = &local_a8;
      local_c0 = &local_d0;
      local_c8 = FUN_143ca1dee;
      FUN_14054179e(param_3);
      if ((int)uStack_a0 != local_74) {
        FUN_144881636(puVar5 + 0xb,&local_a8);
        *(undefined1 *)(puVar5 + 10) = 1;
      }
    }
    uVar6 = FUN_1406d2c3e(param_3,2,&local_b8,0);
    lVar12 = DAT_14cb713a8;
    uVar14 = (ulonglong)uVar6;
    if ((param_6 & (byte)uVar6) == 1) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar7 = *(int *)(lVar1 + 0xc60);
      if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
        uVar13 = 0;
      }
      else if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        uVar13 = (ulonglong)(DVar8 != DVar9);
      }
      else {
        uVar13 = 1;
      }
      uVar14 = CONCAT71((uint7)(uint3)(uVar6 >> 8),1);
      if ((*(int *)(lVar12 + uVar13 * 4) != 0) && (DAT_14cadba60 == '\x01')) {
        lVar11 = FUN_1408ed0b0();
        lVar12 = DAT_14cb713c0;
        if (((*(byte *)(lVar11 + 0x45) & 1) != 0) || ((*(byte *)(lVar11 + 0x44) & 1) != 0)) {
          iVar7 = *(int *)(lVar1 + 0xc60);
          if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
            uVar14 = 0;
          }
          else if (iVar7 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            uVar14 = (ulonglong)(DVar8 != DVar9);
          }
          else {
            uVar14 = 1;
          }
          iVar7 = *(int *)(lVar12 + uVar14 * 4);
          local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
          uVar15 = (undefined7)((ulonglong)lVar12 >> 8);
          if (DAT_14cadba60 == '\x01') {
            lVar12 = FUN_1408ed0b0();
            iVar7 = FUN_140ae6264(lVar12 + 0x10,param_1,(float)iVar7,&local_d0);
            uVar14 = CONCAT71(uVar15,iVar7 < 1);
          }
          else {
            uVar14 = CONCAT71(uVar15,1);
          }
        }
      }
    }
    local_60 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    uVar13 = uStack_a0 >> 0x20;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    if ((int)uVar13 != 0) {
      FUN_14472eb64(&local_a8,0);
    }
    uStack_78 = 0xffffffff;
    local_74 = 0;
    local_80 = 0;
    if (0x80 < local_7c) {
      local_7c = 0x80;
      FUN_1446efbd8(local_98,0);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1406d33ae(local_b8,uStack_b0 & 0xffffffff);
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415205a0 FUN_1415205a0 body=226 status=ok
// SIG undefined FUN_1415205a0(void)

longlong * FUN_1415205a0(longlong *param_1)

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
  pcVar13 = FUN_1462b68f8;
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



// FUNCTION 141520684 FUN_141520684 body=53 status=ok
// SIG undefined FUN_141520684(void)

void FUN_141520684(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 6) & 0x80) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x310))(param_1,0);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001415206b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x330))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1415206ba FUN_1415206ba body=697 status=ok
// SIG undefined FUN_1415206ba(void)

void FUN_1415206ba(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  void *_Src;
  longlong lVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_1a8 [32];
  void *local_188;
  int local_180;
  undefined4 local_17c;
  int local_178;
  undefined4 local_174;
  undefined8 local_170;
  longlong local_168;
  ulonglong *local_160;
  byte local_13e;
  ulonglong local_c0;
  byte local_74;
  ulonglong local_30;
  int iVar9;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_170 = param_2;
  if (*(int *)(param_3 + 1) != 0) {
    FUN_1449daf8c(&local_168,param_1,0);
    local_74 = local_74 | 0x10;
    local_174 = 0xb;
    puVar1 = (undefined4 *)*local_160 + 1;
    if ((undefined4 *)local_160[1] < puVar1) {
      if ((local_13e & 2) == 0) {
        (**(code **)(local_168 + 0x170))(&local_168,&local_174,4);
      }
      else {
        FUN_14572512c(&local_168,&local_174);
      }
    }
    else {
      local_174 = *(undefined4 *)*local_160;
      *local_160 = (ulonglong)puVar1;
    }
    FUN_1403f2d54(&local_168,&local_170);
    lVar3 = DAT_14cb8dbc8;
    iVar9 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
      uVar7 = 0;
    }
    else if (iVar9 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar7 = 1;
    }
    local_178 = *(int *)(lVar3 + uVar7 * 4);
    if (local_178 < 1) {
      uVar7 = local_c0 + 7;
      if (-1 < (longlong)local_c0) {
        uVar7 = local_c0;
      }
      local_178 = (int)(uVar7 >> 3);
    }
    if (*(int *)(param_3 + 1) < local_178) {
      local_178 = *(int *)(param_3 + 1);
    }
    piVar2 = (int *)*local_160 + 1;
    if ((int *)local_160[1] < piVar2) {
      if ((local_13e & 2) == 0) {
        (**(code **)(local_168 + 0x170))(&local_168,&local_178,4);
      }
      else {
        FUN_14572512c(&local_168,&local_178);
      }
    }
    else {
      local_178 = *(int *)*local_160;
      *local_160 = (ulonglong)piVar2;
    }
    FUN_14011736e(&local_168,*param_3,(longlong)local_178);
    iVar9 = *(int *)(param_3 + 1);
    if (local_178 == iVar9) {
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) != 0) {
        FUN_144893a1c(param_3,0);
      }
    }
    else {
      local_188 = (void *)0x0;
      _Src = (void *)*param_3;
      local_180 = iVar9;
      if (iVar9 == 0) {
        local_17c = 0;
        iVar9 = 0;
      }
      else {
        FUN_1447a127e(&local_188,iVar9,0);
        memcpy(local_188,_Src,(longlong)iVar9);
        iVar9 = *(int *)(param_3 + 1);
      }
      uVar8 = iVar9 - local_178;
      FUN_1400ec3e6(param_3,uVar8);
      iVar9 = *(int *)(param_3 + 1);
      iVar4 = iVar9 + uVar8;
      *(int *)(param_3 + 1) = iVar4;
      if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar9) < uVar8) {
        FUN_1447403be(param_3);
        iVar4 = *(int *)(param_3 + 1);
      }
      memcpy((void *)*param_3,(void *)((longlong)local_178 + (longlong)local_188),(longlong)iVar4);
      if (local_188 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    (**(code **)(*param_1 + 0x308))(param_1,&local_188,&local_168,1);
    FUN_1449daebe(&local_168);
  }
  if ((local_30 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141520974 FUN_141520974 body=289 status=ok
// SIG undefined FUN_141520974(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141520974(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca13ba8) {
    FUN_144b3d300(&DAT_14ca13ba8);
    if (DAT_14ca13ba8 == -1) {
      FUN_141520a96();
      FUN_145cb9316();
      FUN_140db5666(&DAT_14ca13b00,0,&DAT_14ca13a98,L"FEmitSceneStencilPS",
                    L"/Engine/Private/Nanite/NaniteExportGBuffer.usf",L"EmitSceneStencilPS",3,1,
                    FUN_147251266,FUN_147251206,&LAB_1462eec9a,&LAB_147251202,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca173e0);
      _DAT_14ca13b00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e02c8c);
      _Init_thread_footer(&DAT_14ca13ba8);
    }
  }
  return &DAT_14ca13b00;
}



// FUNCTION 141520a96 FUN_141520a96 body=258 status=ok
// SIG undefined FUN_141520a96(void)

void FUN_141520a96(void)

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
              0x110) < DAT_14ca17460) {
    FUN_144b3d300(&DAT_14ca17460);
    if (DAT_14ca17460 == -1) {
      FUN_145cb945a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x82;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca173e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e275a3);
      _Init_thread_footer(&DAT_14ca17460);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141520b9a FUN_141520b9a body=185 status=ok
// SIG undefined FUN_141520b9a(void)

byte FUN_141520b9a(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  longlong *plVar4;
  byte bVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar3 = FUN_145e134b6(param_2,*(undefined4 *)(param_1 + 0x78));
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 2) {
    bVar5 = *(byte *)(param_2 + 0x10);
    if (bVar5 != 0) {
      *(undefined1 *)(param_2 + 0x10) = 0;
    }
  }
  else if (iVar2 == 1) {
    plVar4 = (longlong *)FUN_140a68038(1);
    if (plVar4 == (longlong *)0x0) {
      bVar6 = false;
    }
    else {
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_28);
      bVar6 = local_28 == DAT_14cb8e468;
    }
    cVar1 = *(char *)(param_2 + 0x10);
    if ((bool)cVar1 != bVar6) {
      *(bool *)(param_2 + 0x10) = bVar6;
    }
    bVar5 = (bool)cVar1 != bVar6;
  }
  else {
    if (iVar2 != 0) goto LAB_141520c33;
    cVar1 = *(char *)(param_2 + 0x10);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_2 + 0x10) = 1;
    }
    bVar5 = cVar1 == '\0';
  }
  bVar3 = bVar3 | bVar5;
LAB_141520c33:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141520c54 FUN_141520c54 body=1207 status=ok
// SIG undefined FUN_141520c54(void)

void FUN_141520c54(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 **ppuVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 **local_70;
  int local_68;
  longlong local_60;
  undefined1 local_51;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x2d8) == 0) goto LAB_141520c93;
  uVar4 = *(undefined4 *)(param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 0x18);
  uVar6 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  if (*(int *)(param_1 + 0x18) < 1) goto LAB_141520c93;
  cVar8 = *(char *)(param_1 + 0x40);
  local_50 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x2e8);
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = *(int *)(local_50 + 1) + 1;
    UNLOCK();
  }
  local_70 = &local_50;
  local_68 = 1;
  local_60 = param_1;
  if (cVar8 == '\0') {
    FUN_14014fe74(&local_70,0x7fffffffffffffff);
LAB_141520fc9:
    FUN_14152110c(&local_60);
LAB_141520fd3:
    puVar14 = (undefined8 *)0x0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 0x520);
    if ((bVar2 == 0) && ((local_50 == (undefined8 *)0x0 || ((*(byte *)(local_50 + 0x14) & 1) != 0)))
       ) goto LAB_141520fc9;
    puVar11 = TlsGetValue(DAT_14c896140);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar11 = 0;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar11);
    }
    puVar14 = (undefined8 *)puVar11[1];
    if (puVar14 == (undefined8 *)0x0) {
      puVar14 = (undefined8 *)*puVar11;
      if (puVar14 == (undefined8 *)0x0) {
        uVar10 = FUN_14470efbc(&DAT_14c896180);
        if (uVar10 == 0) {
          puVar11[1] = 0;
LAB_1415210cd:
          puVar14 = (undefined8 *)FUN_14001cc68(0x10000,0);
          puVar11[1] = puVar14;
          iVar9 = 0xff;
          puVar15 = puVar14;
          do {
            puVar13 = puVar15 + 0x20;
            *puVar15 = puVar13;
            iVar9 = iVar9 + -1;
            puVar15 = puVar13;
          } while (iVar9 != 0);
          goto LAB_141521037;
        }
        puVar14 = *(undefined8 **)
                   (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar10 >> 0xe) * 8) + 8 +
                   (ulonglong)(uVar10 & 0x3fff) * 0x18);
        FUN_1447d080c(uVar10);
        puVar11[1] = puVar14;
        if (puVar14 == (undefined8 *)0x0) goto LAB_1415210cd;
      }
      else {
        puVar11[1] = puVar14;
        puVar13 = puVar11;
LAB_141521037:
        *puVar13 = 0;
      }
      *(undefined4 *)(puVar11 + 2) = 0x100;
      iVar9 = 0xff;
    }
    else {
      iVar9 = *(int *)(puVar11 + 2) + -1;
    }
    puVar11[1] = *puVar14;
    *(int *)(puVar11 + 2) = iVar9;
    *puVar14 = UE::Tasks::Private::FTaskBase::vftable;
    puVar14[1] = &DAT_100000002;
    puVar14[2] = 0;
    *(undefined4 *)(puVar14 + 3) = 0;
    *(undefined4 *)(puVar14 + 4) = 0xffffffff;
    puVar14[6] = 0;
    puVar14[7] = 0x100000000;
    *(undefined1 *)(puVar14 + 8) = 1;
    puVar14[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    puVar14[0xf] = 0;
    puVar14[0x10] = 0xe800000000000020;
    puVar14[0x12] = 0;
    puVar14[0x13] = 0x100000000;
    *(undefined2 *)(puVar14 + 0x14) = 0;
    LOCK();
    bVar18 = *(char *)(puVar14 + 8) == '\x01';
    if (bVar18) {
      *(char *)(puVar14 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar18) {
      FUN_14008cdb0(puVar14 + 8);
    }
    *puVar14 = &PTR_FUN_14a2a1128;
    if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
    }
    ppuVar7 = local_70;
    puVar14[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar14[9] = puVar14;
    puVar14[10] = puVar14;
    lVar16 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    iVar9 = 0;
    if (lVar16 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(lVar16 + 0x30);
    }
    puVar14[0xf] = uVar12;
    puVar14[0x10] = 0xc8000052888b0000;
    *(uint *)((longlong)puVar14 + 0x1c) = bVar2 ^ 1;
    puVar14[0x15] = local_60;
    *puVar14 = &PTR_FUN_14a2a1118;
    LOCK();
    *(int *)((longlong)puVar14 + 0xc) = *(int *)((longlong)puVar14 + 0xc) + local_68;
    UNLOCK();
    lVar16 = (longlong)local_68;
    if (lVar16 != 0) {
      lVar17 = 0;
      local_78 = puVar14 + 5;
      iVar9 = 0;
      do {
        lVar3 = *(longlong *)((longlong)ppuVar7 + lVar17);
        if ((lVar3 == 0) || (cVar8 = FUN_1456bb142(lVar3 + 0x88,puVar14), cVar8 == '\0')) {
          iVar9 = iVar9 + 1;
        }
        else {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          FUN_1456bb1d4(local_78,lVar3);
        }
        lVar17 = lVar17 + 8;
      } while (lVar16 * 8 != lVar17);
    }
    LOCK();
    *(int *)((longlong)puVar14 + 0xc) = *(int *)((longlong)puVar14 + 0xc) - iVar9;
    UNLOCK();
    local_51 = 1;
    FUN_1447439e4(puVar14);
    if (puVar14 == (undefined8 *)0x0) goto LAB_141520fd3;
    iVar9 = *(int *)(param_2 + 0x508);
    *(uint *)(param_2 + 0x508) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x50c) < iVar9 + 1U) {
      FUN_1401d03aa((longlong *)(param_2 + 0x500),iVar9);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x500) + (longlong)iVar9 * 8) = puVar14;
    LOCK();
    *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
    UNLOCK();
  }
  puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x2f0);
  *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x2f0) = puVar14;
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar11 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar11)(puVar11,1);
    }
  }
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_50 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_50)(local_50,1);
    }
  }
LAB_141520c93:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152110c FUN_14152110c body=555 status=ok
// SIG undefined FUN_14152110c(void)

void FUN_14152110c(longlong *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  byte unaff_BPL;
  longlong *plVar13;
  undefined2 uVar14;
  undefined1 uVar15;
  longlong lVar16;
  undefined1 auStack_a8 [33];
  undefined1 local_87;
  undefined2 local_86;
  int local_84;
  longlong *local_80;
  int *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_84 = *piVar1;
  if (local_84 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_84 = *piVar1;
  }
  if ((local_84 == 0x60000000) || (local_84 == 0)) {
    *piVar1 = 0x40000010;
  }
  lVar6 = *param_1;
  iVar3 = *(int *)(lVar6 + 0x18);
  local_78 = piVar1;
  if ((longlong)iVar3 != 0) {
    lVar7 = *(longlong *)(lVar6 + 0x10);
    plVar13 = (longlong *)(lVar6 + 0x30);
    lVar16 = 0;
    local_80 = plVar13;
    do {
      lVar8 = *(longlong *)(lVar7 + lVar16);
      lVar9 = *(longlong *)(lVar8 + 8);
      if (((*(byte *)(lVar9 + 0x74) & 8) != 0) && ((*(byte *)(lVar9 + 0x77) & 4) != 0)) {
        uVar4 = *(uint *)(lVar8 + 0x15c);
        unaff_BPL = unaff_BPL & 0xfe | *(byte *)(lVar9 + 0x328);
        uVar2 = *(undefined1 *)(lVar9 + 0x304);
        lVar10 = *(longlong *)(lVar6 + 8);
        if (((int)uVar4 < 0) || (*(int *)(lVar10 + 0x2c8) <= (int)uVar4)) {
LAB_14152129b:
          local_87 = *(undefined1 *)(lVar9 + 0x302);
          local_86 = *(undefined2 *)(lVar9 + 0x300);
          FUN_14726d9f2((longlong *)(lVar10 + 0x2a0),local_70,uVar4);
          plVar12 = local_68;
          plVar13 = local_80;
          uVar15 = local_87;
          uVar14 = local_86;
        }
        else {
          lVar11 = lVar10 + 0x2b0;
          if (*(longlong *)(lVar10 + 0x2c0) != 0) {
            lVar11 = *(longlong *)(lVar10 + 0x2c0);
          }
          if ((*(uint *)(lVar11 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) == 0)
          goto LAB_14152129b;
          plVar12 = (longlong *)((ulonglong)uVar4 * 0x28 + *(longlong *)(lVar10 + 0x2a0));
          uVar15 = *(undefined1 *)(lVar9 + 0x302);
          uVar14 = *(undefined2 *)(lVar9 + 0x300);
        }
        *plVar12 = lVar8;
        plVar12[1] = 0xffffffff;
        plVar12[2] = 0xffffffff;
        plVar12[3] = 0xffffffff;
        *(undefined2 *)(plVar12 + 4) = uVar14;
        *(undefined1 *)((longlong)plVar12 + 0x22) = uVar15;
        *(undefined1 *)((longlong)plVar12 + 0x23) = uVar2;
        *(byte *)((longlong)plVar12 + 0x24) = unaff_BPL;
        if (*(char *)(lVar6 + 0x41) == '\0') {
          iVar5 = *(int *)(lVar6 + 0x38);
          *(uint *)(lVar6 + 0x38) = iVar5 + 1U;
          if (*(uint *)(lVar6 + 0x3c) < iVar5 + 1U) {
            FUN_144a78748(plVar13,iVar5);
            plVar13 = local_80;
          }
          *(uint *)(*plVar13 + (longlong)iVar5 * 4) = uVar4;
        }
      }
      lVar16 = lVar16 + 8;
    } while ((longlong)iVar3 * 8 != lVar16);
  }
  if ((local_84 == 0x60000000) || (local_84 == 0)) {
    *local_78 = local_84;
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141521338 FUN_141521338 body=164 status=ok
// SIG undefined FUN_141521338(void)

void FUN_141521338(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"VirtualTexture";
  local_38 = 0xe;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"VirtualTexture";
  local_38 = 0xe;
  FUN_140208c1e(&DAT_14caeaa58,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415213de FUN_1415213de body=84 status=ok
// SIG undefined FUN_1415213de(void)

void FUN_1415213de(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  LOCK();
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  UNLOCK();
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    (*(code *)(&PTR_LAB_149e349c0)[*(byte *)(puVar1 + 0xc)])(puVar1 + 1);
    piVar3 = (int *)((longlong)puVar1 + (-8 - (ulonglong)*(uint *)(puVar1 + -1)));
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    puVar1 = puVar2;
    if (*piVar3 == 0) {
      FUN_144705e74(piVar3,*(longlong *)(piVar3 + 0x10) - (longlong)piVar3);
    }
  }
  return;
}



// FUNCTION 141521432 FUN_141521432 body=143 status=ok
// SIG undefined FUN_141521432(void)

longlong * FUN_141521432(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  uVar2 = FUN_1403378ec(&DAT_14c874dc8);
  if (uVar2 == 0) {
    *param_1 = 0;
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
             (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
    *param_1 = lVar1;
    if (lVar1 != 0) {
      LOCK();
      DAT_14c874dd0 = DAT_14c874dd0 + -1;
      UNLOCK();
      return param_1;
    }
  }
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  FUN_145cbb9ce(puVar3);
  *param_1 = (longlong)puVar3;
  return param_1;
}



// FUNCTION 1415214c2 FUN_1415214c2 body=1265 status=ok
// SIG undefined FUN_1415214c2(void)

void FUN_1415214c2(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14a906bc0;
  param_1[5] = &PTR_FUN_14a906f70;
  param_1[7] = &PTR_FUN_14a907150;
  FUN_140457ffc(&DAT_14c868838,param_1);
  FUN_140457ffc(&DAT_14c868850,param_1);
  FUN_140457ffc(&DAT_14c868868,param_1);
  FUN_140457ffc(&DAT_14c868820,param_1);
  lVar2 = param_1[0x78];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar2);
    param_1[0x78] = 0;
  }
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
    param_1[0x77] = 0;
  }
  FUN_144760e21(param_1[0x74],*(undefined4 *)(param_1 + 0x75));
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x71],*(undefined4 *)(param_1 + 0x72));
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  plVar4 = param_1 + 0x6f;
  if (*(int *)(param_1 + 0x70) == 0) {
LAB_141521600:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x70) = 0;
      goto LAB_141521600;
    }
  }
  plVar4 = param_1 + 0x6d;
  if (*(int *)(param_1 + 0x6e) == 0) {
LAB_141521648:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x6e) = 0;
      goto LAB_141521648;
    }
  }
  plVar4 = param_1 + 0x6b;
  if (*(int *)(param_1 + 0x6c) == 0) {
LAB_141521690:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x6c) = 0;
      goto LAB_141521690;
    }
  }
  plVar4 = param_1 + 0x69;
  if (*(int *)(param_1 + 0x6a) == 0) {
LAB_1415216d8:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0x6a) = 0;
      goto LAB_1415216d8;
    }
  }
  FUN_144760e21(param_1[0x66],*(undefined4 *)(param_1 + 0x67));
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[99],*(undefined4 *)(param_1 + 100));
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x60],*(undefined4 *)(param_1 + 0x61));
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5d],*(undefined4 *)(param_1 + 0x5e));
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x5a],*(undefined4 *)(param_1 + 0x5b));
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x57],*(undefined4 *)(param_1 + 0x58));
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x54],*(undefined4 *)(param_1 + 0x55));
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  plVar4 = param_1 + 0x52;
  if (*(int *)(param_1 + 0x53) != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_141521821;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 0x53) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_141521821:
  FUN_144760e21(param_1[0x4f],*(undefined4 *)(param_1 + 0x50));
  if (param_1[0x4f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_1459c2708(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_1459133ae(param_1 + 0x3a);
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_140d129fc(param_1 + 0x30);
  plVar4 = (longlong *)param_1[0x2f];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_1[0x27];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_1[0x25];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_1[0x23];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_14051bf10(param_1 + 0x12);
  FUN_14146fa53(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14583465c(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1415219b4 FUN_1415219b4 body=135 status=ok
// SIG undefined FUN_1415219b4(void)

void FUN_1415219b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_146658c76();
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b9d3c80;
  local_58[0] = &LAB_144309a6a;
  local_30 = param_2;
  FUN_148e57a3a(*puVar1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar2 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar2 = &local_38;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141521a3c FUN_141521a3c body=193 status=ok
// SIG undefined FUN_141521a3c(void)

void FUN_141521a3c(longlong param_1,longlong param_2,byte param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x168) != '\0') {
    local_20 = param_2;
    if (param_3 < 3) {
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      FUN_1465945be(param_1 + 0x170,&local_20);
    }
    else {
      if (param_3 != 3) goto LAB_141521a6c;
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      FUN_148b02606(param_1 + 0x170,&local_20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
LAB_141521a6c:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141521b0c FUN_141521b0c body=128 status=ok
// SIG undefined FUN_141521b0c(void)

bool FUN_141521b0c(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0xa8))(param_2,&local_28);
  if (local_28 == *(longlong *)(param_1 + 0x20)) {
    uVar1 = (**(code **)(*param_2 + 0x108))(param_2);
    iVar2 = Ordinal_2(*(undefined8 *)(param_1 + 0x28),param_2 + 1,uVar1);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = false;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141521b8e FUN_141521b8e body=528 status=ok
// SIG undefined FUN_141521b8e(void)

void FUN_141521b8e(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      plVar7 = *(longlong **)(lVar11 + 0x10 + (longlong)iVar6 * 0x28);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar6 * 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar11 == lVar8) goto LAB_141521cd5;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_141521cd5:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_140549ad6(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar12 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141521da0 FUN_141521da0 body=296 status=ok
// SIG undefined FUN_141521da0(void)

void FUN_141521da0(longlong *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = DAT_14cb977f8;
  if (param_1[0xb3] != 0) {
    local_20 = *(longlong *)(param_1[0xb3] + 0x38);
  }
  if (((int)param_1[0xb5] != (int)local_20) ||
     (*(int *)((longlong)param_1 + 0x5ac) != (int)((ulonglong)local_20 >> 0x20))) {
    param_1[0xb5] = local_20;
    FUN_148da0a1a(param_1 + 0x97,&local_20);
    if (((int)local_20 == 2) &&
       (*(undefined4 *)(param_1 + 0x122) = 5, (char)param_1[0x11e] == '\x01')) {
      *(undefined1 *)(param_1 + 0x11e) = 0;
      FUN_1447f69b6(param_1 + 0x5a);
    }
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x178) != 0)) {
      lVar4 = FUN_14041aabe();
      plVar1 = *(longlong **)(lVar3 + 0x178);
      if (((plVar1 != (longlong *)0x0) &&
          (((lVar4 != 0 && (lVar3 = plVar1[2], lVar3 != 0)) &&
           (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        uVar2 = FUN_14133cdf6(param_1);
        (**(code **)(*plVar1 + 0x778))(plVar1,uVar2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141521eca FUN_141521eca body=464 status=ok
// SIG undefined FUN_141521eca(void)

ulonglong FUN_141521eca(longlong *param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x38), plVar1 != (longlong *)0x0)) {
    plVar5 = (longlong *)plVar1[0x1e];
    if (plVar5 == (longlong *)0x0) goto LAB_141521f76;
    (**(code **)(*plVar5 + 0x2f8))(plVar5,0);
    plVar5 = (longlong *)plVar1[0x1e];
    if ((char)plVar5[0x3bc] == '\x01') {
      *(undefined1 *)((longlong)plVar5 + 0x1de1) = 1;
      goto LAB_141521f76;
    }
    lVar4 = *plVar5;
    do {
      (**(code **)(lVar4 + 0x330))(plVar5);
LAB_141521f76:
      while( true ) {
        if ((int)plVar1[0x20] == 0) {
          (**(code **)(*plVar1 + 0x300))(plVar1);
          lVar4 = lVar3 + 0x5b8;
          FUN_14622b792(lVar4,L"bIsLanMatch",0,&DAT_14c872af8);
          if (param_2 == 0) {
            (**(code **)(*param_1 + 0x308))(param_1,local_58);
            if ((int)local_58[0] != 0) {
              (**(code **)(*param_1 + 0x308))(param_1,local_58);
              if ((int)local_58[0] == 1) {
                FUN_141556918(lVar4,L"bIsLanMatch");
              }
              (**(code **)(*plVar1 + 0x3d8))(plVar1,lVar3);
              local_58[0] = 0;
              local_58[1] = 0;
              local_68 = local_58;
              cVar2 = (**(code **)(*plVar1 + 0x2c0))(plVar1,lVar3 + 0x28,lVar4,0);
              if (cVar2 == '\0') {
                (**(code **)(*plVar1 + 0x3d8))(plVar1,0);
                if (local_58[0] != 0) {
                  FUN_1400020a8();
                }
                uVar6 = 0;
              }
              else if (local_58[0] != 0) {
                FUN_1400020a8();
              }
            }
          }
          goto LAB_141521f09;
        }
        plVar5 = *(longlong **)plVar1[0x1f];
        (**(code **)(*plVar5 + 0x2f8))(plVar5,0);
        if ((char)plVar5[0x3bc] != '\x01') break;
        *(undefined1 *)((longlong)plVar5 + 0x1de1) = 1;
      }
      lVar4 = *plVar5;
    } while( true );
  }
LAB_141521f09:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152209c FUN_14152209c body=104 status=ok
// SIG undefined FUN_14152209c(void)

void FUN_14152209c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(lVar2 + 0xfc) != 0) {
    uVar1 = *(uint *)(lVar2 + 0xf8);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(lVar2 + 0xfc))) {
        FUN_143f26ae2();
        return;
      }
    }
  }
  FUN_143f26ba0();
  FUN_148a79fd8(lVar2);
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  if (*(longlong *)(lVar2 + 0x100) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(lVar2 + 0x120) = 0;
  *(undefined4 *)(lVar2 + 0x130) = 0;
  *(undefined8 *)(lVar2 + 0x100) = 0;
  *(undefined8 *)(lVar2 + 0x108) = 0;
  if (*(int *)(lVar2 + 0x134) != 0) {
    FUN_14481578e(lVar2 + 0x128,0);
  }
  if (*(char *)(lVar2 + 0x188) == '\x01') {
    FUN_148a865c8(lVar2 + 0x138);
    *(undefined1 *)(lVar2 + 0x188) = 0;
  }
  *(undefined1 *)(lVar2 + 0x1a8) = 0;
  if (((*(int *)(lVar2 + 0x78) != 0) &&
      (*(undefined4 *)(lVar2 + 0x78) = 0, *(int *)(lVar2 + 0x18) != 0)) &&
     (plVar3 = *(longlong **)(lVar2 + 0x10), plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143f26b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x60))(plVar3,0);
    return;
  }
  return;
}



// FUNCTION 141522104 FUN_141522104 body=129 status=ok
// SIG undefined FUN_141522104(void)

undefined8
FUN_141522104(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar1 != 0) && (lVar1 = FUN_1400f6f32(lVar1), lVar1 != 0)) &&
      (*(longlong *)(lVar1 + 0x68) != 0)) &&
     (lVar1 = FUN_140bccd38(*(longlong *)(lVar1 + 0x68),param_2 + 0x18), lVar1 != 0)) {
    lVar2 = FUN_14030d4a0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_141522186(lVar1,param_4,param_5);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141522186 FUN_141522186 body=14104 status=ok
// SIG undefined FUN_141522186(void)

void FUN_141522186(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  size_t sVar4;
  longlong lVar5;
  char *pcVar6;
  wchar_t *pwVar7;
  undefined1 auStack_918 [32];
  undefined1 local_8f8;
  undefined8 local_8e8;
  undefined4 local_8e0;
  longlong local_8d8;
  longlong *plStack_8d0;
  undefined8 local_8c8;
  undefined4 local_8c0;
  longlong local_8b8;
  longlong *plStack_8b0;
  undefined8 local_8a8;
  undefined4 local_8a0;
  longlong local_898;
  longlong *plStack_890;
  undefined8 local_888;
  undefined4 local_880;
  longlong local_878;
  longlong *plStack_870;
  undefined8 local_868;
  undefined4 local_860;
  longlong local_858;
  longlong *plStack_850;
  undefined8 local_848;
  undefined4 local_840;
  longlong local_838;
  longlong *plStack_830;
  undefined8 local_828;
  undefined4 local_820;
  longlong local_818;
  longlong *plStack_810;
  undefined8 local_808;
  undefined4 local_800;
  longlong local_7f8;
  longlong *plStack_7f0;
  undefined8 local_7e8;
  undefined4 local_7e0;
  longlong local_7d8;
  longlong *plStack_7d0;
  undefined8 local_7c8;
  undefined4 local_7c0;
  longlong local_7b8;
  longlong *plStack_7b0;
  undefined8 local_7a8;
  undefined4 local_7a0;
  longlong local_798;
  longlong *plStack_790;
  undefined8 local_788;
  undefined4 local_780;
  longlong local_778;
  longlong *plStack_770;
  undefined8 local_768;
  undefined4 local_760;
  longlong local_758;
  longlong *plStack_750;
  undefined8 local_748;
  undefined4 local_740;
  longlong local_738;
  longlong *plStack_730;
  undefined8 local_728;
  undefined4 local_720;
  longlong local_718;
  longlong *plStack_710;
  undefined8 local_708;
  undefined4 local_700;
  longlong local_6f8;
  longlong *plStack_6f0;
  undefined8 local_6e8;
  undefined4 local_6e0;
  longlong local_6d8;
  longlong *plStack_6d0;
  undefined8 local_6c8;
  undefined4 local_6c0;
  longlong local_6b8;
  longlong *plStack_6b0;
  undefined8 local_6a8;
  undefined4 local_6a0;
  longlong local_698;
  longlong *plStack_690;
  undefined8 local_688;
  undefined4 local_680;
  longlong local_678;
  longlong *plStack_670;
  undefined8 local_668;
  undefined4 local_660;
  longlong local_658;
  longlong *plStack_650;
  undefined8 local_648;
  undefined4 local_640;
  longlong local_638;
  longlong *plStack_630;
  undefined8 local_628;
  undefined4 local_620;
  longlong local_618;
  longlong *plStack_610;
  undefined8 local_608;
  undefined4 local_600;
  longlong local_5f8;
  longlong *plStack_5f0;
  undefined8 local_5e8;
  undefined4 local_5e0;
  longlong local_5d8;
  longlong *plStack_5d0;
  undefined8 local_5c8;
  undefined4 local_5c0;
  longlong local_5b8;
  longlong *plStack_5b0;
  undefined8 local_5a8;
  undefined4 local_5a0;
  longlong local_598;
  longlong *plStack_590;
  undefined8 local_588;
  undefined4 local_580;
  longlong local_578;
  longlong *plStack_570;
  undefined8 local_568;
  undefined4 local_560;
  longlong local_558;
  longlong *plStack_550;
  undefined8 local_548;
  undefined4 local_540;
  longlong local_538;
  longlong *plStack_530;
  undefined8 local_528;
  undefined4 local_520;
  longlong local_518;
  longlong *plStack_510;
  undefined8 local_508;
  undefined4 local_500;
  longlong local_4f8;
  longlong *plStack_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  longlong local_4d8;
  longlong *plStack_4d0;
  undefined8 local_4c8;
  undefined4 local_4c0;
  longlong local_4b8;
  longlong *plStack_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  longlong local_498;
  longlong *plStack_490;
  undefined8 local_488;
  undefined4 local_480;
  longlong local_478;
  longlong *plStack_470;
  undefined8 local_468;
  undefined4 local_460;
  longlong local_458;
  longlong *plStack_450;
  undefined8 local_448;
  undefined4 local_440;
  longlong local_438;
  longlong *plStack_430;
  undefined8 local_428;
  undefined4 local_420;
  longlong local_418;
  longlong *plStack_410;
  undefined8 local_408;
  undefined4 local_400;
  longlong local_3f8;
  longlong *plStack_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  longlong local_3d8;
  longlong *plStack_3d0;
  undefined8 local_3c8;
  undefined4 local_3c0;
  longlong local_3b8;
  longlong *plStack_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  longlong local_398;
  longlong *plStack_390;
  undefined8 local_388;
  undefined4 local_380;
  longlong local_378;
  longlong *plStack_370;
  undefined8 local_368;
  undefined4 local_360;
  longlong local_358;
  longlong *plStack_350;
  undefined8 local_348;
  undefined4 local_340;
  longlong local_338;
  longlong *plStack_330;
  undefined8 local_328;
  undefined4 local_320;
  longlong local_318;
  longlong *plStack_310;
  undefined8 local_308;
  undefined4 local_300;
  longlong local_2f8;
  longlong *plStack_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  longlong local_2d8;
  longlong *plStack_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  longlong local_2b8;
  longlong *plStack_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  longlong local_298;
  longlong *plStack_290;
  undefined8 local_288;
  undefined4 local_280;
  longlong local_278;
  longlong *plStack_270;
  undefined8 local_268;
  undefined4 local_260;
  longlong local_258;
  longlong *plStack_250;
  undefined8 local_248;
  undefined4 local_240;
  longlong local_238;
  longlong *plStack_230;
  undefined8 local_228;
  undefined4 local_220;
  longlong local_218;
  longlong *plStack_210;
  undefined8 local_208;
  undefined4 local_200;
  longlong local_1f8;
  longlong *plStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  longlong local_1d8;
  longlong *plStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  longlong *plStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  longlong *plStack_190;
  undefined8 local_188;
  undefined4 local_180;
  longlong local_178;
  longlong *plStack_170;
  undefined8 local_168;
  undefined4 local_160;
  longlong local_158;
  longlong *plStack_150;
  undefined8 local_148;
  undefined4 local_140;
  longlong local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b0;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_918;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  FUN_14009b010(&local_c8,3,0);
  if (param_3 != &DAT_14c9a1308) {
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)param_3[1];
    *param_3 = local_c8;
    param_3[1] = (longlong)plStack_c0;
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
  }
  plVar3 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  local_d8 = 0;
  plStack_d0 = (longlong *)0x0;
  FUN_14009b010(&local_d8,1,0);
  if ((local_d8 != 0) && ((*(byte *)(local_d8 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x361) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_d8,pcVar6);
  }
  local_e8 = DAT_14cbcf0b8;
  local_e0 = DAT_14cbcf0c0;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_d8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  FUN_14009b010(&local_f8,1,0);
  if ((local_f8 != 0) && ((*(byte *)(local_f8 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x362) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_f8,pcVar6);
  }
  local_108 = DAT_14cbcf0c4;
  local_100 = DAT_14cbcf0cc;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_f8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  FUN_14009b010(&local_118,1,0);
  if ((local_118 != 0) && ((*(byte *)(local_118 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x363) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_118,pcVar6);
  }
  local_128 = DAT_14cbcf0d0;
  local_120 = DAT_14cbcf0d8;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_118,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  FUN_14009b010(&local_138,1,0);
  if ((local_138 != 0) && ((*(byte *)(local_138 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x364) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_138,pcVar6);
  }
  local_148 = DAT_14cbcf0dc;
  local_140 = DAT_14cbcf0e4;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_138,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_158 = 0;
  plStack_150 = (longlong *)0x0;
  FUN_14009b010(&local_158,1,0);
  if ((local_158 != 0) && ((*(byte *)(local_158 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x371) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_158,pcVar6);
  }
  local_168 = DAT_14cbcf130;
  local_160 = DAT_14cbcf138;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_158,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_178 = 0;
  plStack_170 = (longlong *)0x0;
  FUN_14009b010(&local_178,1,0);
  if ((local_178 != 0) && ((*(byte *)(local_178 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3df) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_178,pcVar6);
  }
  local_188 = DAT_14cbcf340;
  local_180 = DAT_14cbcf348;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_178,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_198 = 0;
  plStack_190 = (longlong *)0x0;
  FUN_14009b010(&local_198,1,0);
  if (local_198 != 0) {
    FUN_1406111c2(local_198,*(undefined4 *)(param_1 + 0x374));
  }
  local_1a8 = DAT_14cbcf13c;
  local_1a0 = DAT_14cbcf144;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_198,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_1b8 = 0;
  plStack_1b0 = (longlong *)0x0;
  FUN_14009b010(&local_1b8,1,0);
  if (local_1b8 != 0) {
    FUN_1406111c2(local_1b8,*(undefined4 *)(param_1 + 0x378));
  }
  local_1c8 = DAT_14cbcf148;
  local_1c0 = DAT_14cbcf150;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_1b8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_1d8 = 0;
  plStack_1d0 = (longlong *)0x0;
  FUN_14009b010(&local_1d8,1,0);
  if (local_1d8 != 0) {
    FUN_1406111c2(local_1d8,*(undefined4 *)(param_1 + 0x37c));
  }
  local_1e8 = DAT_14cbcf154;
  local_1e0 = DAT_14cbcf15c;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_1d8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_1f8 = 0;
  plStack_1f0 = (longlong *)0x0;
  FUN_14009b010(&local_1f8,1,0);
  if (local_1f8 != 0) {
    FUN_1406111c2(local_1f8,*(undefined4 *)(param_1 + 0x380));
  }
  local_208 = DAT_14cbcf160;
  local_200 = DAT_14cbcf168;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_1f8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_218 = 0;
  plStack_210 = (longlong *)0x0;
  FUN_14009b010(&local_218,1,0);
  if (local_218 != 0) {
    FUN_1406111c2(local_218,*(undefined4 *)(param_1 + 900));
  }
  local_228 = DAT_14cbcf16c;
  local_220 = DAT_14cbcf174;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_218,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_238 = 0;
  plStack_230 = (longlong *)0x0;
  FUN_14009b010(&local_238,1,0);
  if (local_238 != 0) {
    FUN_1406111c2(local_238,*(undefined4 *)(param_1 + 0x388));
  }
  local_248 = DAT_14cbcf178;
  local_240 = DAT_14cbcf180;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_238,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_258 = 0;
  plStack_250 = (longlong *)0x0;
  FUN_14009b010(&local_258,1,0);
  if (local_258 != 0) {
    FUN_1406111c2(local_258,*(undefined4 *)(param_1 + 0x38c));
  }
  local_268 = DAT_14cbcf184;
  local_260 = DAT_14cbcf18c;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_258,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_278 = 0;
  plStack_270 = (longlong *)0x0;
  FUN_14009b010(&local_278,1,0);
  if (local_278 != 0) {
    FUN_1406111c2(local_278,*(undefined4 *)(param_1 + 0x390));
  }
  local_288 = DAT_14cbcf190;
  local_280 = DAT_14cbcf198;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_278,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_298 = 0;
  plStack_290 = (longlong *)0x0;
  FUN_14009b010(&local_298,1,0);
  if (local_298 != 0) {
    FUN_1406111c2(local_298,*(undefined4 *)(param_1 + 0x394));
  }
  local_2a8 = DAT_14cbcf19c;
  local_2a0 = DAT_14cbcf1a4;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_298,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_2b8 = 0;
  plStack_2b0 = (longlong *)0x0;
  FUN_14009b010(&local_2b8,1,0);
  if (local_2b8 != 0) {
    FUN_1406111c2(local_2b8,*(undefined4 *)(param_1 + 0x398));
  }
  local_2c8 = DAT_14cbcf1a8;
  local_2c0 = DAT_14cbcf1b0;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_2b8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_2d8 = 0;
  plStack_2d0 = (longlong *)0x0;
  FUN_14009b010(&local_2d8,1,0);
  if (local_2d8 != 0) {
    FUN_1406114f4(local_2d8,*(undefined1 *)(param_1 + 0x39c));
  }
  local_2e8 = DAT_14cbcf1b4;
  local_2e0 = DAT_14cbcf1bc;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_2d8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_2f8 = 0;
  plStack_2f0 = (longlong *)0x0;
  FUN_14009b010(&local_2f8,1,0);
  if (local_2f8 != 0) {
    FUN_1406111c2(local_2f8,*(undefined4 *)(param_1 + 0x3a0));
  }
  local_308 = DAT_14cbcf1c0;
  local_300 = DAT_14cbcf1c8;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_2f8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_318 = 0;
  plStack_310 = (longlong *)0x0;
  FUN_14009b010(&local_318,1,0);
  if (local_318 != 0) {
    FUN_1406111c2(local_318,*(undefined4 *)(param_1 + 0x3a4));
  }
  local_328 = DAT_14cbcf1cc;
  local_320 = DAT_14cbcf1d4;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_318,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_338 = 0;
  plStack_330 = (longlong *)0x0;
  FUN_14009b010(&local_338,1,0);
  if (local_338 != 0) {
    FUN_1406111c2(local_338,*(undefined4 *)(param_1 + 0x3a8));
  }
  local_348 = DAT_14cbcf1d8;
  local_340 = DAT_14cbcf1e0;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_338,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_358 = 0;
  plStack_350 = (longlong *)0x0;
  FUN_14009b010(&local_358,1,0);
  if (local_358 != 0) {
    FUN_1406111c2(local_358,*(undefined4 *)(param_1 + 0x3ac));
  }
  local_368 = DAT_14cbcf1e4;
  local_360 = DAT_14cbcf1ec;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_358,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_378 = 0;
  plStack_370 = (longlong *)0x0;
  FUN_14009b010(&local_378,1,0);
  if (local_378 != 0) {
    FUN_1406114f4(local_378,*(undefined1 *)(param_1 + 0x3b0));
  }
  local_388 = DAT_14cbcf1f0;
  local_380 = DAT_14cbcf1f8;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_378,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_398 = 0;
  plStack_390 = (longlong *)0x0;
  FUN_14009b010(&local_398,1,0);
  if ((local_398 != 0) && ((*(byte *)(local_398 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x365) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_398,pcVar6);
  }
  local_3a8 = DAT_14cbcf0e8;
  local_3a0 = DAT_14cbcf0f0;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_398,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_3b8 = 0;
  plStack_3b0 = (longlong *)0x0;
  FUN_14009b010(&local_3b8,1,0);
  if ((local_3b8 != 0) && ((*(byte *)(local_3b8 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x366) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_3b8,pcVar6);
  }
  local_3c8 = DAT_14cbcf0f4;
  local_3c0 = DAT_14cbcf0fc;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_3b8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_3d8 = 0;
  plStack_3d0 = (longlong *)0x0;
  FUN_14009b010(&local_3d8,1,0);
  if ((local_3d8 != 0) && ((*(byte *)(local_3d8 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x367) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_3d8,pcVar6);
  }
  local_3e8 = DAT_14cbcf100;
  local_3e0 = DAT_14cbcf108;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_3d8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_3f8 = 0;
  plStack_3f0 = (longlong *)0x0;
  FUN_14009b010(&local_3f8,1,0);
  if ((local_3f8 != 0) && ((*(byte *)(local_3f8 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x368) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_3f8,pcVar6);
  }
  local_408 = DAT_14cbcf10c;
  local_400 = DAT_14cbcf114;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_3f8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_418 = 0;
  plStack_410 = (longlong *)0x0;
  FUN_14009b010(&local_418,1,0);
  if (local_418 != 0) {
    FUN_1406111c2(local_418,*(undefined4 *)(param_1 + 0x36c));
  }
  local_428 = DAT_14cbcf118;
  local_420 = DAT_14cbcf120;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_418,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_438 = 0;
  plStack_430 = (longlong *)0x0;
  FUN_14009b010(&local_438,1,0);
  if ((local_438 != 0) && ((*(byte *)(local_438 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x370) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_438,pcVar6);
  }
  local_448 = DAT_14cbcf124;
  local_440 = DAT_14cbcf12c;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_438,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_458 = 0;
  plStack_450 = (longlong *)0x0;
  FUN_14009b010(&local_458,1,0);
  if ((local_458 != 0) && ((*(byte *)(local_458 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3b1) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_458,pcVar6);
  }
  local_468 = DAT_14cbcf1fc;
  local_460 = DAT_14cbcf204;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_458,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_478 = 0;
  plStack_470 = (longlong *)0x0;
  FUN_14009b010(&local_478,1,0);
  if ((local_478 != 0) && ((*(byte *)(local_478 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3b2) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_478,pcVar6);
  }
  local_488 = DAT_14cbcf208;
  local_480 = DAT_14cbcf210;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_478,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_498 = 0;
  plStack_490 = (longlong *)0x0;
  FUN_14009b010(&local_498,1,0);
  if ((local_498 != 0) && ((*(byte *)(local_498 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3b3) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_498,pcVar6);
  }
  local_4a8 = DAT_14cbcf214;
  local_4a0 = DAT_14cbcf21c;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_498,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_4b8 = 0;
  plStack_4b0 = (longlong *)0x0;
  FUN_14009b010(&local_4b8,1,0);
  if ((local_4b8 != 0) && ((*(byte *)(local_4b8 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3b4) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_4b8,pcVar6);
  }
  local_4c8 = DAT_14cbcf220;
  local_4c0 = DAT_14cbcf228;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_4b8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_4d8 = 0;
  plStack_4d0 = (longlong *)0x0;
  FUN_14009b010(&local_4d8,1,0);
  if ((local_4d8 != 0) && ((*(byte *)(local_4d8 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3b5) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_4d8,pcVar6);
  }
  local_4e8 = DAT_14cbcf22c;
  local_4e0 = DAT_14cbcf234;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_4d8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_4f8 = 0;
  plStack_4f0 = (longlong *)0x0;
  FUN_14009b010(&local_4f8,1,0);
  if ((local_4f8 != 0) && ((*(byte *)(local_4f8 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3b6) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_4f8,pcVar6);
  }
  local_508 = DAT_14cbcf238;
  local_500 = DAT_14cbcf240;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_4f8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_518 = 0;
  plStack_510 = (longlong *)0x0;
  FUN_14009b010(&local_518,1,0);
  if ((local_518 != 0) && ((*(byte *)(local_518 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3b7) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_518,pcVar6);
  }
  local_528 = DAT_14cbcf244;
  local_520 = DAT_14cbcf24c;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_518,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_538 = 0;
  plStack_530 = (longlong *)0x0;
  FUN_14009b010(&local_538,1,0);
  if ((local_538 != 0) && ((*(byte *)(local_538 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3b8) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_538,pcVar6);
  }
  local_548 = DAT_14cbcf250;
  local_540 = DAT_14cbcf258;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_538,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_558 = 0;
  plStack_550 = (longlong *)0x0;
  FUN_14009b010(&local_558,1,0);
  if (local_558 != 0) {
    FUN_1406111c2(local_558,*(undefined4 *)(param_1 + 0x3bc));
  }
  local_568 = DAT_14cbcf25c;
  local_560 = DAT_14cbcf264;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_558,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_578 = 0;
  plStack_570 = (longlong *)0x0;
  FUN_14009b010(&local_578,1,0);
  if (local_578 != 0) {
    FUN_1406111c2(local_578,*(undefined4 *)(param_1 + 0x3c0));
  }
  local_588 = DAT_14cbcf268;
  local_580 = DAT_14cbcf270;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_578,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_598 = 0;
  plStack_590 = (longlong *)0x0;
  FUN_14009b010(&local_598,1,0);
  if (local_598 != 0) {
    FUN_1406111c2(local_598,*(undefined4 *)(param_1 + 0x3c4));
  }
  local_5a8 = DAT_14cbcf274;
  local_5a0 = DAT_14cbcf27c;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_598,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_5b8 = 0;
  plStack_5b0 = (longlong *)0x0;
  FUN_14009b010(&local_5b8,1,0);
  if (local_5b8 != 0) {
    FUN_1406111c2(local_5b8,*(undefined4 *)(param_1 + 0x3c8));
  }
  local_5c8 = DAT_14cbcf280;
  local_5c0 = DAT_14cbcf288;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_5b8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_5d8 = 0;
  plStack_5d0 = (longlong *)0x0;
  FUN_14009b010(&local_5d8,1,0);
  if (local_5d8 != 0) {
    FUN_1406111c2(local_5d8,*(undefined4 *)(param_1 + 0x3cc));
  }
  local_5e8 = DAT_14cbcf28c;
  local_5e0 = DAT_14cbcf294;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_5d8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_5f8 = 0;
  plStack_5f0 = (longlong *)0x0;
  FUN_14009b010(&local_5f8,1,0);
  if (local_5f8 != 0) {
    FUN_1406111c2(local_5f8,*(undefined4 *)(param_1 + 0x3d0));
  }
  local_608 = DAT_14cbcf298;
  local_600 = DAT_14cbcf2a0;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_5f8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_618 = 0;
  plStack_610 = (longlong *)0x0;
  FUN_14009b010(&local_618,1,0);
  if (local_618 != 0) {
    FUN_1406111c2(local_618,*(undefined4 *)(param_1 + 0x3d4));
  }
  local_628 = DAT_14cbcf2a4;
  local_620 = DAT_14cbcf2ac;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_618,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_638 = 0;
  plStack_630 = (longlong *)0x0;
  FUN_14009b010(&local_638,1,0);
  if (local_638 != 0) {
    FUN_1406111c2(local_638,*(undefined4 *)(param_1 + 0x3d8));
  }
  local_648 = DAT_14cbcf2b0;
  local_640 = DAT_14cbcf2b8;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_638,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_658 = 0;
  plStack_650 = (longlong *)0x0;
  FUN_14009b010(&local_658,1,0);
  if ((local_658 != 0) && ((*(byte *)(local_658 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3dc) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_658,pcVar6);
  }
  local_668 = DAT_14cbcf2bc;
  local_660 = DAT_14cbcf2c4;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_658,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_678 = 0;
  plStack_670 = (longlong *)0x0;
  FUN_14009b010(&local_678,1,0);
  if ((local_678 != 0) && ((*(byte *)(local_678 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3dd) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_678,pcVar6);
  }
  local_688 = DAT_14cbcf2c8;
  local_680 = DAT_14cbcf2d0;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_678,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_698 = 0;
  plStack_690 = (longlong *)0x0;
  FUN_14009b010(&local_698,1,0);
  if (local_698 != 0) {
    FUN_1404a8912(local_698,*(undefined4 *)(param_1 + 1000));
  }
  local_6a8 = DAT_14cbcf2d4;
  local_6a0 = DAT_14cbcf2dc;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_698,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_6b8 = 0;
  plStack_6b0 = (longlong *)0x0;
  FUN_14009b010(&local_6b8,1,0);
  if (local_6b8 != 0) {
    FUN_1404a8912(local_6b8,*(undefined4 *)(param_1 + 0x3ec));
  }
  local_6c8 = DAT_14cbcf37c;
  local_6c0 = DAT_14cbcf384;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_6b8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_6d8 = 0;
  plStack_6d0 = (longlong *)0x0;
  FUN_14009b010(&local_6d8,1,0);
  if (local_6d8 != 0) {
    FUN_1404a8912(local_6d8,*(undefined4 *)(param_1 + 0x3f0));
  }
  local_6e8 = DAT_14cbcf388;
  local_6e0 = DAT_14cbcf390;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_6d8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_6f8 = 0;
  plStack_6f0 = (longlong *)0x0;
  FUN_14009b010(&local_6f8,1,0);
  if (local_6f8 != 0) {
    FUN_1406111c2(local_6f8,*(undefined4 *)(param_1 + 0x3f4));
  }
  local_708 = DAT_14cbcf2e0;
  local_700 = DAT_14cbcf2e8;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_6f8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_718 = 0;
  plStack_710 = (longlong *)0x0;
  FUN_14009b010(&local_718,1,0);
  if (local_718 != 0) {
    FUN_1406111c2(local_718,*(undefined4 *)(param_1 + 0x3f8));
  }
  local_728 = DAT_14cbcf2ec;
  local_720 = DAT_14cbcf2f4;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_718,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_738 = 0;
  plStack_730 = (longlong *)0x0;
  FUN_14009b010(&local_738,1,0);
  if (local_738 != 0) {
    FUN_1406111c2(local_738,*(undefined4 *)(param_1 + 0x3e0));
  }
  local_748 = DAT_14cbcf2f8;
  local_740 = DAT_14cbcf300;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_738,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_758 = 0;
  plStack_750 = (longlong *)0x0;
  FUN_14009b010(&local_758,1,0);
  if ((local_758 != 0) && ((*(byte *)(local_758 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3e4) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_758,pcVar6);
  }
  local_768 = DAT_14cbcf304;
  local_760 = DAT_14cbcf30c;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_758,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_778 = 0;
  plStack_770 = (longlong *)0x0;
  FUN_14009b010(&local_778,1,0);
  if (*(int *)(param_1 + 0x468) == 0) {
    pwVar7 = L"";
LAB_1415242cc:
    local_48 = 0;
    sVar4 = wcslen(pwVar7);
    FUN_1449b853c(&local_c8,pwVar7,sVar4 & 0xffffffff,1);
  }
  else {
    pwVar7 = *(wchar_t **)(param_1 + 0x460);
    local_48 = 0;
    if (pwVar7 != (wchar_t *)0x0) goto LAB_1415242cc;
    local_40 = 0;
    local_38 = 0;
  }
  if ((local_778 != 0) && ((*(byte *)(local_778 + 1) & 2) == 0)) {
    FUN_140126aca(local_778,local_40);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_788 = DAT_14cbcf310;
  local_780 = DAT_14cbcf318;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_778,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_798 = 0;
  plStack_790 = (longlong *)0x0;
  FUN_14009b010(&local_798,1,0);
  if ((local_798 != 0) && ((*(byte *)(local_798 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x45a) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_798,pcVar6);
  }
  local_7a8 = DAT_14cbcf31c;
  local_7a0 = DAT_14cbcf324;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_798,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_7b8 = 0;
  plStack_7b0 = (longlong *)0x0;
  FUN_14009b010(&local_7b8,1,0);
  if (*(int *)(param_1 + 0x478) == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = *(wchar_t **)(param_1 + 0x470);
    local_48 = 0;
    if (pwVar7 == (wchar_t *)0x0) {
      local_40 = 0;
      local_38 = 0;
      goto LAB_1415244bf;
    }
  }
  local_48 = 0;
  sVar4 = wcslen(pwVar7);
  FUN_1449b853c(&local_c8,pwVar7,sVar4 & 0xffffffff,1);
LAB_1415244bf:
  if ((local_7b8 != 0) && ((*(byte *)(local_7b8 + 1) & 2) == 0)) {
    FUN_140126aca(local_7b8,local_40);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_7c8 = DAT_14cbcf328;
  local_7c0 = DAT_14cbcf330;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_7b8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_7d8 = 0;
  plStack_7d0 = (longlong *)0x0;
  FUN_14009b010(&local_7d8,1,0);
  if ((local_7d8 != 0) && ((*(byte *)(local_7d8 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x45b) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_7d8,pcVar6);
  }
  local_7e8 = DAT_14cbcf334;
  local_7e0 = DAT_14cbcf33c;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_7d8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_7f8 = 0;
  plStack_7f0 = (longlong *)0x0;
  FUN_14009b010(&local_7f8,1,0);
  if ((local_7f8 != 0) && ((*(byte *)(local_7f8 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x2d2) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_7f8,pcVar6);
  }
  local_808 = DAT_14cbcf34c;
  local_800 = DAT_14cbcf354;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_7f8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_818 = 0;
  plStack_810 = (longlong *)0x0;
  FUN_14009b010(&local_818,1,0);
  if (local_818 != 0) {
    FUN_1406111c2(local_818,*(undefined4 *)(param_1 + 0x2d4));
  }
  local_828 = DAT_14cbcf358;
  local_820 = DAT_14cbcf360;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_818,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_838 = 0;
  plStack_830 = (longlong *)0x0;
  FUN_14009b010(&local_838,1,0);
  if ((local_838 != 0) && ((*(byte *)(local_838 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x2d8) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_838,pcVar6);
  }
  local_848 = DAT_14cbcf364;
  local_840 = DAT_14cbcf36c;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_838,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_858 = 0;
  plStack_850 = (longlong *)0x0;
  FUN_14009b010(&local_858,1,0);
  if ((local_858 != 0) && ((*(byte *)(local_858 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x2d9) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_858,pcVar6);
  }
  local_868 = DAT_14cbcf370;
  local_860 = DAT_14cbcf378;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_858,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_878 = 0;
  plStack_870 = (longlong *)0x0;
  FUN_14009b010(&local_878,1,0);
  if ((local_878 != 0) && ((*(byte *)(local_878 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3e5) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_878,pcVar6);
  }
  local_888 = DAT_14cbcf394;
  local_880 = DAT_14cbcf39c;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_878,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_898 = 0;
  plStack_890 = (longlong *)0x0;
  FUN_14009b010(&local_898,1,0);
  if ((local_898 != 0) && ((*(byte *)(local_898 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x3e6) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_898,pcVar6);
  }
  local_8a8 = DAT_14cbcf3a0;
  local_8a0 = DAT_14cbcf3a8;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_898,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_8b8 = 0;
  plStack_8b0 = (longlong *)0x0;
  FUN_14009b010(&local_8b8,1,0);
  if ((local_8b8 != 0) && ((*(byte *)(local_8b8 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x458) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_8b8,pcVar6);
  }
  local_8c8 = DAT_14cbcf3ac;
  local_8c0 = DAT_14cbcf3b4;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_8b8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  local_8d8 = 0;
  plStack_8d0 = (longlong *)0x0;
  FUN_14009b010(&local_8d8,1,0);
  if ((local_8d8 != 0) && ((*(byte *)(local_8d8 + 1) & 2) == 0)) {
    pcVar6 = "false";
    if (*(char *)(param_1 + 0x459) != '\0') {
      pcVar6 = "true";
    }
    FUN_140126aca(local_8d8,pcVar6);
  }
  local_8e8 = DAT_14cbcf3b8;
  local_8e0 = DAT_14cbcf3c0;
  FUN_1448075d0(&local_c8);
  if (*param_3 != 0) {
    local_8f8 = 0;
    FUN_14014191c(*param_3,&local_c8,&local_8d8,0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_1410c4496(param_1);
  if (lVar5 != 0) {
    FUN_1418e3616(lVar5,param_2,param_3);
  }
  plVar3 = plStack_8d0;
  if (plStack_8d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_8d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_8d0)(plStack_8d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_8b0;
  if (plStack_8b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_8b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_8b0)(plStack_8b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_890;
  if (plStack_890 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_890 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_890)(plStack_890);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_870;
  if (plStack_870 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_870 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_870)(plStack_870);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_850;
  if (plStack_850 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_850 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_850)(plStack_850);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_830;
  if (plStack_830 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_830 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_830)(plStack_830);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_810;
  if (plStack_810 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_810 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_810)(plStack_810);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_7f0;
  if (plStack_7f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_7f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_7f0)(plStack_7f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_7d0;
  if (plStack_7d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_7d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_7d0)(plStack_7d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_7b0;
  if (plStack_7b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_7b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_7b0)(plStack_7b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_790;
  if (plStack_790 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_790 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_790)(plStack_790);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_770;
  if (plStack_770 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_770 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_770)(plStack_770);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_750;
  if (plStack_750 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_750 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_750)(plStack_750);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_730;
  if (plStack_730 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_730 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_730)(plStack_730);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_710;
  if (plStack_710 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_710 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_710)(plStack_710);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_6f0;
  if (plStack_6f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_6f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_6f0)(plStack_6f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_6d0;
  if (plStack_6d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_6d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_6d0)(plStack_6d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_6b0;
  if (plStack_6b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_6b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_6b0)(plStack_6b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_690;
  if (plStack_690 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_690 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_690)(plStack_690);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_670;
  if (plStack_670 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_670 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_670)(plStack_670);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_650;
  if (plStack_650 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_650 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_650)(plStack_650);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_630;
  if (plStack_630 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_630 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_630)(plStack_630);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_610;
  if (plStack_610 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_610 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_610)(plStack_610);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_5f0;
  if (plStack_5f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_5f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_5f0)(plStack_5f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_5d0;
  if (plStack_5d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_5d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_5d0)(plStack_5d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_5b0;
  if (plStack_5b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_5b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_5b0)(plStack_5b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_590;
  if (plStack_590 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_590 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_590)(plStack_590);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_570;
  if (plStack_570 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_570 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_570)(plStack_570);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_550;
  if (plStack_550 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_550 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_550)(plStack_550);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_530;
  if (plStack_530 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_530 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_530)(plStack_530);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_510;
  if (plStack_510 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_510 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_510)(plStack_510);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_4f0;
  if (plStack_4f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_4f0)(plStack_4f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_4d0;
  if (plStack_4d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_4d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_4d0)(plStack_4d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_4b0;
  if (plStack_4b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_4b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_4b0)(plStack_4b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_490;
  if (plStack_490 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_490 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_490)(plStack_490);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_470;
  if (plStack_470 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_470 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_470)(plStack_470);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_450;
  if (plStack_450 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_450 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_450)(plStack_450);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_430;
  if (plStack_430 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_430 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_430)(plStack_430);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_410;
  if (plStack_410 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_410 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_410)(plStack_410);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_3f0;
  if (plStack_3f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_3f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_3f0)(plStack_3f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_3d0;
  if (plStack_3d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_3d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_3d0)(plStack_3d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_3b0;
  if (plStack_3b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_3b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_3b0)(plStack_3b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_390;
  if (plStack_390 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_390 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_390)(plStack_390);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_370;
  if (plStack_370 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_370 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_370)(plStack_370);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_350;
  if (plStack_350 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_350 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_350)(plStack_350);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_330;
  if (plStack_330 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_330 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_330)(plStack_330);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_310;
  if (plStack_310 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_310 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_310)(plStack_310);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_2f0;
  if (plStack_2f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_2f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_2f0)(plStack_2f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_2d0;
  if (plStack_2d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_2d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_2d0)(plStack_2d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_2b0;
  if (plStack_2b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_2b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_2b0)(plStack_2b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_290;
  if (plStack_290 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_290 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_290)(plStack_290);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_270;
  if (plStack_270 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_270 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_270)(plStack_270);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_250;
  if (plStack_250 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_250 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_250)(plStack_250);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_230;
  if (plStack_230 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_230 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_230)(plStack_230);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_210;
  if (plStack_210 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_210 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_210)(plStack_210);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_1f0;
  if (plStack_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_1f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_1f0)(plStack_1f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_1d0;
  if (plStack_1d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_1d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_1d0)(plStack_1d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_1b0;
  if (plStack_1b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_1b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_1b0)(plStack_1b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_190;
  if (plStack_190 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_190 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_190)(plStack_190);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_170 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_170)(plStack_170);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_130 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_918) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415258a0 FUN_1415258a0 body=49 status=ok
// SIG undefined FUN_1415258a0(void)

void FUN_1415258a0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined2 *puVar2;
  
  plVar1 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_1 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001415258ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,puVar2,*(code **)(*plVar1 + 0x48));
  return;
}



// FUNCTION 1415258d2 FUN_1415258d2 body=371 status=ok
// SIG undefined FUN_1415258d2(void)

undefined8 FUN_1415258d2(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  undefined8 local_28;
  undefined2 *local_20;
  int local_18;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = (ulonglong)DAT_14c759078;
  if (DAT_14c759078 == 0xffffffff) {
    FUN_1401af3ae();
    FUN_140056680(&local_30);
    iVar1 = (int)local_28;
    iVar4 = ((int)local_28 == 0) + 0x27;
    local_20 = local_30;
    local_30 = (undefined2 *)0x0;
    local_18 = (int)local_28;
    iVar2 = local_28._4_4_;
    local_14 = local_28._4_4_;
    local_28 = 0;
    iVar7 = iVar4 + iVar1;
    if (iVar7 < iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (iVar2 < iVar7) {
      FUN_1446f8c06(&local_20);
    }
    FUN_1401aebe8(&local_20,L"Engine/Build/InstalledProjectBuild.txt",0x26);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1448097c4(&local_20,&DAT_149e01f64,&DAT_149e065c6,0);
    plVar6 = (longlong *)FUN_14054d1d4();
    puVar8 = local_20;
    if (local_18 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar6 + 0x48))(plVar6,puVar8);
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    bVar3 = FUN_14054d46e(&DAT_14c846b20,L"NotInstalled");
    uVar5 = (ulonglong)(bVar3 ^ 1);
    DAT_14c759078 = (uint)(bVar3 ^ 1);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
      uVar5 = (ulonglong)DAT_14c759078;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar5 >> 8),(int)uVar5 == 1);
}



// FUNCTION 141525a48 FUN_141525a48 body=54 status=ok
// SIG undefined FUN_141525a48(void)

void FUN_141525a48(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_143e9d64a();
  if (lVar1 != 0) {
    uVar2 = FUN_146567c8e(lVar1);
    *(undefined4 *)((longlong)param_1 + 0x264) = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000141525a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x250))(param_1);
  return;
}



// FUNCTION 141525a7e FUN_141525a7e body=40 status=ok
// SIG undefined FUN_141525a7e(void)

void FUN_141525a7e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1418b57ca(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 141525aa6 FUN_141525aa6 body=56 status=ok
// SIG undefined FUN_141525aa6(void)

void FUN_141525aa6(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141525ade FUN_141525ade body=537 status=ok
// SIG undefined FUN_141525ade(void)

void FUN_141525ade(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar8 = 1;
    local_58._4_4_ = 0;
    uVar11 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = local_68 >> 0x20;
    uVar11 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar10 = *param_1;
      if (*(longlong *)(lVar10 + 0x20 + (longlong)iVar6 * 0x50) != 0) {
        FUN_1400020a8();
      }
      plVar12 = (longlong *)(lVar10 + (longlong)iVar6 * 0x50);
      if (plVar12[2] != 0) {
        FUN_1400020a8();
      }
      if (*plVar12 != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar8;
      plVar12 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar12 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar10 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar12 + lVar10 * 4) & uVar11;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar7 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar12 + lVar7 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar3 - lVar10 == lVar7) goto LAB_141525c23;
        }
        iVar13 = iVar13 + (int)lVar7 + 1;
        uVar11 = 0xffffffff;
      }
      uVar8 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar8 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_141525c23:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_140e9549c(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar11 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar11 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar11) {
      uVar5 = uVar11;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141525cfa FUN_141525cfa body=779 status=ok
// SIG undefined FUN_141525cfa(void)

void FUN_141525cfa(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  char local_60 [8];
  char *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    if (*(char *)((longlong)param_1 + 0x2e1) == '\x01') {
      (**(code **)(*param_1 + 0x48))(param_1);
    }
    if (*(int *)((longlong)param_1 + 0x2c4) != 0) {
      if (0 < (longlong)*(int *)(param_2 + 0x70e0)) {
        plVar1 = (longlong *)(param_2 + 0x70d8);
        lVar9 = *plVar1;
        lVar7 = lVar9 + 0x90;
        lVar11 = 0x15a;
        uVar8 = 0;
LAB_141525d72:
        if (*(int *)(lVar9 + -10 + lVar11) != *(int *)((longlong)param_1 + 0x2c4))
        goto code_r0x000141525d79;
        if ((*(char *)(lVar9 + -2 + lVar11) != '\0') ||
           ((*(char *)(lVar9 + lVar11) == '\x01' && (0.0 <= *(float *)(lVar9 + -0x12 + lVar11))))) {
          FUN_1447f69b6(lVar7);
        }
        if (((0 < *(int *)(param_2 + 0x7154)) &&
            ((((lVar7 = *plVar1, *(char *)(lVar7 + -0x14a + lVar11) == '$' ||
               (*(char *)(lVar7 + -0x149 + lVar11) == '$')) ||
              (*(char *)(lVar7 + -0x148 + lVar11) == '$')) ||
             (*(char *)(lVar7 + -0x147 + lVar11) == '$')))) &&
           (iVar3 = *(int *)(param_2 + 0x7154) + -1, *(int *)(param_2 + 0x7154) = iVar3, iVar3 == 0)
           ) {
          FUN_146629c3c(param_2 + 0x70d0);
        }
        lVar7 = FUN_1400e8a68(param_2 + 0x70e8);
        if (lVar7 == 0) goto LAB_141525ff7;
        local_58 = (char *)0x0;
        local_50 = 0x400000000;
        lVar9 = *plVar1;
        cVar2 = *(char *)(lVar9 + -0x14a + lVar11);
        bVar12 = cVar2 != '\0';
        if (bVar12) {
          local_50 = 0x400000001;
          local_60[0] = cVar2;
          local_60[1] = 0;
        }
        uVar10 = (ulonglong)bVar12;
        cVar2 = *(char *)(lVar9 + -0x149 + lVar11);
        if (cVar2 != '\0') {
          local_50 = CONCAT44(local_50._4_4_,bVar12 + 1);
          local_60[uVar10 * 2] = cVar2;
          local_60[uVar10 * 2 + 1] = '\0';
          uVar10 = (ulonglong)(bVar12 + 1);
        }
        cVar2 = *(char *)(lVar9 + -0x148 + lVar11);
        if (cVar2 != '\0') {
          uVar6 = (int)uVar10 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          local_60[uVar10 * 2] = cVar2;
          local_60[uVar10 * 2 + 1] = '\0';
          uVar10 = (ulonglong)uVar6;
        }
        cVar2 = *(char *)(lVar9 + -0x147 + lVar11);
        if (cVar2 != '\0') {
          iVar3 = (int)uVar10;
          local_50 = CONCAT44(local_50._4_4_,iVar3 + 1U);
          if (local_50._4_4_ < iVar3 + 1U) {
            FUN_14416ff8e(local_60,uVar10);
            cVar2 = *(char *)(lVar9 + -0x147 + lVar11);
          }
          pcVar5 = local_58;
          if (local_58 == (char *)0x0) {
            pcVar5 = local_60;
          }
          pcVar5[(longlong)iVar3 * 2] = cVar2;
          pcVar5[(longlong)iVar3 * 2 + 1] = '\0';
          uVar10 = local_50 & 0xffffffff;
        }
        if ((int)uVar10 < 1) goto LAB_141525fe8;
        iVar3 = *(int *)(param_2 + 0x70e0);
        if (iVar3 < 1) goto LAB_141525fb4;
        uVar4 = 0;
        do {
          if ((uVar8 != uVar4) && (0 < (int)uVar10)) {
            lVar9 = 0;
            do {
              pcVar5 = local_58;
              if (local_58 == (char *)0x0) {
                pcVar5 = local_60;
              }
              cVar2 = pcVar5[lVar9 * 2];
              if (((cVar2 == *(char *)(*plVar1 + 0x10 + uVar4 * 0x160)) ||
                  (lVar11 = *plVar1 + uVar4 * 0x160, cVar2 == *(char *)(lVar11 + 0x11))) ||
                 ((cVar2 == *(char *)(lVar11 + 0x12) || (cVar2 == *(char *)(lVar11 + 0x13))))) {
                pcVar5[lVar9 * 2 + 1] = '\x01';
                uVar10 = local_50 & 0xffffffff;
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < (int)uVar10);
            iVar3 = *(int *)(param_2 + 0x70e0);
          }
          uVar4 = uVar4 + 1;
        } while ((longlong)uVar4 < (longlong)iVar3);
        if (0 < (int)uVar10) {
LAB_141525fb4:
          lVar9 = 0;
          do {
            pcVar5 = local_58;
            if (local_58 == (char *)0x0) {
              pcVar5 = local_60;
            }
            FUN_14625505a(lVar7 + 0x4f48,pcVar5[lVar9 * 2]);
            lVar9 = lVar9 + 1;
          } while (lVar9 < (int)local_50);
        }
LAB_141525fe8:
        if (local_58 != (char *)0x0) {
          FUN_1400020a8();
        }
LAB_141525ff7:
        FUN_1458c9274(plVar1,uVar8 & 0xffffffff);
      }
LAB_141525d87:
      *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
    }
    param_1[0x52] = 0;
    param_1[0x53] = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000141525d79:
  uVar8 = uVar8 + 1;
  lVar7 = lVar7 + 0x160;
  lVar11 = lVar11 + 0x160;
  if ((longlong)*(int *)(param_2 + 0x70e0) == uVar8) goto LAB_141525d87;
  goto LAB_141525d72;
}



// FUNCTION 141526006 FUN_141526006 body=218 status=ok
// SIG undefined FUN_141526006(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141526006(void)

{
  if ((DAT_14ca4cfff & 2) == 0) {
    DAT_14ca4cfff = DAT_14ca4cfff | 2;
    _DAT_14ca4cfa0 = L"FMaterialShader";
    _DAT_14ca4cfb8 = FUN_146826540;
    _DAT_14ca4cfc0 = FUN_146825d77;
    _DAT_14ca4cfc8 = FUN_146825fd6;
    _DAT_14ca4cfd0 = FUN_1407e02ea;
    _DAT_14ca4cfd8 = FUN_146826273;
    _DAT_14ca4cfb0 = FUN_1472ea196;
    _DAT_14ca4cff0 = 0xffffffff000000f8;
    _DAT_14ca4cff8 = 8;
    DAT_14ca4cffc = 0;
    _DAT_14ca4cfe0 = &LAB_1472ea1ce;
    FUN_145cc16ee(&DAT_14ca4cf98);
    FUN_145cc130e(&DAT_14ca4cf98);
    FUN_1407e00cc(&DAT_14ca4cf98);
  }
  return &DAT_14ca4cf98;
}



// FUNCTION 1415260e0 FUN_1415260e0 body=197 status=ok
// SIG undefined FUN_1415260e0(void)

longlong FUN_1415260e0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1460dd256();
  lVar3 = *param_1;
  if (DAT_14cbc53a0 != DAT_14cbc53cc) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbc53d0;
    if (DAT_14cbc53d8 != (undefined *)0x0) {
      puVar7 = DAT_14cbc53d8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbc53e0 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbc5398 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbc5390;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1415261a6 FUN_1415261a6 body=109 status=ok
// SIG undefined FUN_1415261a6(void)

undefined8 FUN_1415261a6(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_140d4a144();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140d4a144();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
                    /* WARNING: Could not recover jumptable at 0x000141526210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,param_1,*(code **)(*plVar3 + 0x10));
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 141526213 FUN_141526213 body=238 status=ok
// SIG undefined FUN_141526213(void)

uint FUN_141526213(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  lVar3 = FUN_14011c349();
  lVar4 = *(longlong *)(lVar3 + 0x28);
  if (lVar4 == 0) {
    uVar5 = FUN_145d8612a();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(lVar3 + 0x28) = lVar4;
  }
  lVar6 = *(longlong *)(lVar3 + 0x30);
  if (lVar6 == 0) {
    if (lVar4 == 0) {
      return 0xffffffff;
    }
    if (*(longlong *)(lVar3 + 0x20) == 0) {
      return 0xffffffff;
    }
    plVar7 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar1 == '\0')) {
      *(undefined8 *)(lVar3 + 0x30) = 0;
      return 0xffffffff;
    }
    uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar3 + 0x20));
    *(longlong *)(lVar3 + 0x30) = lVar6;
    if (lVar6 == 0) {
      return 0xffffffff;
    }
  }
  if ((longlong)*(int *)(lVar6 + 0x20) != 0) {
    plVar7 = *(longlong **)(lVar6 + 0x18);
    plVar8 = plVar7 + (longlong)*(int *)(lVar6 + 0x20) * 7;
    uVar2 = 0;
    do {
      if (*(longlong *)(lVar3 + 0x98) == *plVar7) {
        return -(uint)((int)plVar7[1] == 0) | uVar2;
      }
      uVar2 = uVar2 + (int)plVar7[1];
      plVar7 = plVar7 + 7;
    } while (plVar7 != plVar8);
  }
  return 0xffffffff;
}



// FUNCTION 141526302 FUN_141526302 body=325 status=ok
// SIG undefined FUN_141526302(void)

void FUN_141526302(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7390d0;
  FUN_140f68e5d(param_1[0xa1],*(undefined4 *)(param_1 + 0xa2));
  if (param_1[0xa1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x83] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x86) = 0;
  if (*(int *)((longlong)param_1 + 0x434) != 0) {
    FUN_140115c12(param_1 + 0x85,0);
  }
  param_1[0x84] = 0;
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x82) = 0;
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c69ea(param_1 + 0x79);
  *(undefined4 *)(param_1 + 0x75) = 0;
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c69ea(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c69ea(param_1 + 0x5f);
  *(undefined4 *)(param_1 + 0x5b) = 0;
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c69ea(param_1 + 0x52);
  FUN_1459a6540(param_1);
  return;
}



// FUNCTION 141526448 FUN_141526448 body=372 status=ok
// SIG undefined FUN_141526448(void)

undefined8 * FUN_141526448(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aac9170;
  FUN_1409e1656(param_1 + 6);
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_14b056c50;
  param_1[6] = &PTR_FUN_14b056f30;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = param_1;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  FUN_1405bceb4(param_1 + 0x2a);
  param_1[0x2a] = &PTR_FUN_14b057610;
  param_1[0x2c] = param_1;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  return param_1;
}



// FUNCTION 1415265bc FUN_1415265bc body=171 status=ok
// SIG undefined FUN_1415265bc(void)

void FUN_1415265bc(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar9 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x588);
  QueryPerformanceCounter(&local_38);
  puVar9[1] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  puVar9[2] = uVar1;
  *puVar9 = &PTR_FUN_14ba43bb0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(undefined4 *)(puVar9 + 3) = *param_2;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar2;
  *(undefined4 *)(puVar9 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar9 + 0x24) = uVar4;
  *(undefined4 *)(puVar9 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar6;
  *(undefined4 *)(puVar9 + 6) = uVar7;
  *(undefined4 *)((longlong)puVar9 + 0x34) = uVar8;
  FUN_143e6b0f2(param_1,puVar9);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141526668 FUN_141526668 body=151 status=ok
// SIG undefined FUN_141526668(void)

void FUN_141526668(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xe0);
  if (lVar4 == 0) {
    uVar3 = FUN_141221512();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0xe0) = lVar4;
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0xd8));
    }
    *(undefined8 *)(param_1 + 0xe8) = uVar3;
    return;
  }
  return;
}



// FUNCTION 141526700 FUN_141526700 body=48 status=ok
// SIG undefined FUN_141526700(void)

void FUN_141526700(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 141526730 FUN_141526730 body=158 status=ok
// SIG undefined FUN_141526730(void)

void FUN_141526730(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b049ca0;
  param_1[3] = &DAT_3f8000003f800000;
  param_1[4] = &DAT_3f8000003f800000;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f4ccccd3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f8000003e4ccccd;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xf00000d0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xf00000d0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x9bf48485;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}



// FUNCTION 1415267ce FUN_1415267ce body=35 status=ok
// SIG undefined FUN_1415267ce(void)

void FUN_1415267ce(void)

{
  if (DAT_14c950d80 == 0) {
    DAT_14c950d80 = FUN_145cc877a();
  }
  return;
}



// FUNCTION 1415267f2 FUN_1415267f2 body=43 status=ok
// SIG undefined FUN_1415267f2(void)

undefined8 FUN_1415267f2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FUN_144a8c772();
    if (lVar1 != 0) {
      uVar2 = FUN_145943b04(lVar1);
      return uVar2;
    }
  }
  return 0xffffffff;
}



// FUNCTION 14152681e FUN_14152681e body=157 status=ok
// SIG undefined FUN_14152681e(void)

void FUN_14152681e(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  FUN_14588cd9e();
  if (((*(int *)((longlong)param_1 + 0x34) != 0) &&
      (uVar1 = *(uint *)(param_1 + 6), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0x34))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar2 = FUN_140391a3c();
      if (lVar2 != 0) {
        puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *puVar3 = &PTR_FUN_14b9d17b0;
        *(undefined1 *)(puVar3 + 1) = 1;
        FUN_14039144e(lVar2,puVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001415268b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x170))(param_1);
  return;
}



// FUNCTION 1415268bc FUN_1415268bc body=2290 status=ok
// SIG undefined FUN_1415268bc(void)

void FUN_1415268bc(longlong *param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  ushort *puVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  void *_Src;
  byte bVar17;
  bool bVar18;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = param_1[0x51];
  if ((lVar4 == 0) ||
     (plVar10 = (longlong *)(**(code **)(*param_1 + 0xc0))(), plVar10 == (longlong *)0x0))
  goto LAB_141526ffd;
  lVar11 = FUN_1403ca142();
  if ((*(int *)(plVar10[2] + 0x38) < *(int *)(lVar11 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar10[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
      lVar11 + 0x30)) goto LAB_141526ffd;
  cVar6 = (**(code **)(*plVar10 + 0x498))(plVar10);
  bVar18 = true;
  if (cVar6 == '\b') {
    lVar11 = FUN_140d27a2a(plVar10);
    bVar18 = (byte)(*(char *)(lVar11 + 0xb0) - 1U) < 8;
  }
  iVar9 = *(int *)(lVar4 + 0x2fc);
  if (bVar18 == (bool)*(char *)(lVar4 + 0x2f8)) {
    if (iVar9 == 0) {
      iVar9 = 0;
      goto LAB_141526970;
    }
  }
  else {
LAB_141526970:
    *(bool *)(lVar4 + 0x2f8) = bVar18;
    *(int *)(lVar4 + 0x2fc) = iVar9 + 1;
    puVar5 = *(ushort **)(lVar4 + 0x80);
    if (puVar5 != (ushort *)0x0) {
      *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
    }
  }
  FUN_1448d5e3c(&local_58,param_1 + 0x41);
  lVar11 = *(longlong *)(local_58 + 0x100);
  AcquireSRWLockShared((PSRWLOCK)(lVar11 + 0x58));
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_50 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if (((((*(int *)((longlong)param_1 + 0x34) != 0) &&
        (uVar12 = *(uint *)(param_1 + 6), -1 < (int)uVar12)) && ((int)uVar12 < DAT_14c9647dc)) &&
      ((plVar13 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)((longlong)param_1 + 0x34))))) &&
     (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (*plVar13 != 0)))) {
    plVar13 = (longlong *)FUN_1407f492e();
    if (plVar13 == (longlong *)0x0) {
LAB_141526a91:
      bVar8 = 0;
    }
    else {
      if (DAT_14cb61cd0 == 0) {
        local_58 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_1463b31ae;
        local_78 = &LAB_1486dca4f;
        local_80 = &LAB_1464f50a6;
        local_88 = &DAT_149e063b2;
        local_90 = 0;
        local_98 = 0x10000004;
        local_a0 = 8;
        local_a8 = 0xd70;
        local_70 = &local_58;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      }
      if ((*(int *)(plVar13[2] + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) !=
          DAT_14cb61cd0 + 0x30)) goto LAB_141526a91;
      cVar6 = (**(code **)(*plVar13 + 0x740))(plVar13);
      bVar8 = 1;
      if (cVar6 == '\0') {
        bVar8 = (**(code **)(*plVar13 + 0x758))(plVar13);
      }
    }
    cVar6 = '\x01';
    if ((((int)plVar10[8] < 2) && (*(char *)(lVar11 + 8) == '\0')) &&
       (*(char *)(lVar4 + 0x2b9) == '\0' && bVar8 == 0)) {
      if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_1415270ff:
        lVar15 = 0;
      }
      else {
        uVar12 = *(uint *)(param_1 + 6);
        lVar15 = 0;
        if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
          plVar13 = (longlong *)
                    ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
          if ((plVar13 == (longlong *)0x0) ||
             (((int)plVar13[2] != *(int *)((longlong)param_1 + 0x34) ||
              ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1415270ff;
          lVar15 = *plVar13;
        }
      }
      cVar7 = FUN_140426394(lVar15 + 0x3c0,&DAT_14cbd9488);
      if (cVar7 == '\0') {
        if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_14152710d:
          lVar15 = 0;
        }
        else {
          uVar12 = *(uint *)(param_1 + 6);
          lVar15 = 0;
          if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
            plVar13 = (longlong *)
                      ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
            if ((plVar13 == (longlong *)0x0) ||
               (((int)plVar13[2] != *(int *)((longlong)param_1 + 0x34) ||
                ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_14152710d;
            lVar15 = *plVar13;
          }
        }
        cVar6 = FUN_140426394(lVar15 + 0x3c0,&DAT_14cbd9470);
      }
    }
    iVar9 = *(int *)(lVar4 + 0x304);
    if (cVar6 == *(char *)(lVar4 + 0x300)) {
      bVar17 = 1;
      if (iVar9 == 0) {
        iVar9 = 0;
        goto LAB_141526bac;
      }
    }
    else {
LAB_141526bac:
      *(char *)(lVar4 + 0x300) = cVar6;
      *(int *)(lVar4 + 0x304) = iVar9 + 1;
      bVar17 = 0;
    }
    if ((int)plVar10[8] < 2) {
      if (*(char *)(lVar11 + 8) == '\x01') {
        iVar9 = *(int *)(lVar4 + 0x2e0);
        if (iVar9 == DAT_14cbdfc28) {
          bVar18 = true;
          if (1 < iVar9) {
            lVar15 = 0;
            while( true ) {
              uVar2 = *(ushort *)(*(longlong *)(lVar4 + 0x2d8) + lVar15);
              uVar12 = (uint)uVar2;
              uVar3 = *(ushort *)((longlong)DAT_14cbdfc20 + lVar15);
              uVar16 = (uint)uVar3;
              if (uVar2 != uVar3) {
                if ((uVar3 | uVar2) < 0x80) {
                  uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                  if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_141526cae;
                }
                iVar9 = uVar12 - uVar16;
                goto LAB_141526f40;
              }
              if (uVar2 == 0) break;
LAB_141526cae:
              lVar15 = lVar15 + 2;
            }
            iVar9 = 0;
LAB_141526f40:
            bVar18 = iVar9 == 0;
          }
        }
        else {
          bVar18 = iVar9 + DAT_14cbdfc28 == 1;
        }
        if ((void **)(lVar4 + 0x2d8) != &DAT_14cbdfc20) {
          iVar9 = *(int *)(lVar4 + 0x2e4);
          _Src = DAT_14cbdfc20;
          iVar14 = DAT_14cbdfc28;
          goto LAB_141526f86;
        }
      }
      else {
        if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_1415270f8:
          lVar15 = 0;
        }
        else {
          uVar12 = *(uint *)(param_1 + 6);
          lVar15 = 0;
          if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
            plVar10 = (longlong *)
                      ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
            if ((plVar10 == (longlong *)0x0) ||
               (((int)plVar10[2] != *(int *)((longlong)param_1 + 0x34) ||
                ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_1415270f8;
            lVar15 = *plVar10;
          }
        }
        cVar6 = FUN_140426394(lVar15 + 0x3c0,&DAT_14cbd9488);
        if (cVar6 == '\0') {
          if (*(int *)((longlong)param_1 + 0x34) == 0) {
LAB_141527106:
            lVar15 = 0;
          }
          else {
            uVar12 = *(uint *)(param_1 + 6);
            lVar15 = 0;
            if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
              plVar10 = (longlong *)
                        ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
              if ((plVar10 == (longlong *)0x0) ||
                 (((int)plVar10[2] != *(int *)((longlong)param_1 + 0x34) ||
                  ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_141527106;
              lVar15 = *plVar10;
            }
          }
          cVar6 = FUN_140426394(lVar15 + 0x3c0,&DAT_14cbd9470);
          if (cVar6 != '\0') goto LAB_141526dbe;
          plVar10 = (longlong *)(lVar4 + 0x2d8);
          iVar9 = *(int *)(lVar4 + 0x2e0);
          if ((bVar8 | *(byte *)(lVar4 + 0x2b9)) == 1) {
            if (iVar9 == DAT_14cbdfc38) {
              bVar18 = true;
              if (1 < iVar9) {
                lVar15 = 0;
                while( true ) {
                  uVar2 = *(ushort *)(*plVar10 + lVar15);
                  uVar12 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)DAT_14cbdfc30 + lVar15);
                  uVar16 = (uint)uVar3;
                  if (uVar2 != uVar3) {
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_141526f12;
                    }
                    iVar9 = uVar12 - uVar16;
                    goto LAB_1415270a2;
                  }
                  if (uVar2 == 0) break;
LAB_141526f12:
                  lVar15 = lVar15 + 2;
                }
                iVar9 = 0;
LAB_1415270a2:
                bVar18 = iVar9 == 0;
              }
            }
            else {
              bVar18 = iVar9 + DAT_14cbdfc38 == 1;
            }
            if ((void **)plVar10 != &DAT_14cbdfc30) {
              iVar9 = *(int *)(lVar4 + 0x2e4);
              _Src = DAT_14cbdfc30;
              iVar14 = DAT_14cbdfc38;
              goto LAB_141526f86;
            }
            goto LAB_141526fc2;
          }
          if (iVar9 == DAT_14cbdfc08) {
            bVar18 = true;
            if (1 < iVar9) {
              lVar15 = 0;
              while( true ) {
                uVar2 = *(ushort *)(*plVar10 + lVar15);
                uVar12 = (uint)uVar2;
                uVar3 = *(ushort *)((longlong)DAT_14cbdfc00 + lVar15);
                uVar16 = (uint)uVar3;
                if (uVar2 != uVar3) {
                  if ((uVar3 | uVar2) < 0x80) {
                    uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_141527069;
                  }
                  iVar9 = uVar12 - uVar16;
                  goto LAB_1415270ce;
                }
                if (uVar2 == 0) break;
LAB_141527069:
                lVar15 = lVar15 + 2;
              }
              iVar9 = 0;
LAB_1415270ce:
              bVar18 = iVar9 == 0;
            }
          }
          else {
            bVar18 = iVar9 + DAT_14cbdfc08 == 1;
          }
          if ((void **)plVar10 == &DAT_14cbdfc00) goto LAB_141526fc2;
          iVar9 = *(int *)(lVar4 + 0x2e4);
          _Src = DAT_14cbdfc00;
          iVar14 = DAT_14cbdfc08;
        }
        else {
LAB_141526dbe:
          iVar9 = *(int *)(lVar4 + 0x2e0);
          if (iVar9 == DAT_14cbdfc48) {
            bVar18 = true;
            if (1 < iVar9) {
              lVar15 = 0;
              while( true ) {
                uVar2 = *(ushort *)(*(longlong *)(lVar4 + 0x2d8) + lVar15);
                uVar12 = (uint)uVar2;
                uVar3 = *(ushort *)((longlong)DAT_14cbdfc40 + lVar15);
                uVar16 = (uint)uVar3;
                if (uVar2 != uVar3) {
                  if ((uVar3 | uVar2) < 0x80) {
                    uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_141526e14;
                  }
                  iVar9 = uVar12 - uVar16;
                  goto LAB_141526f65;
                }
                if (uVar2 == 0) break;
LAB_141526e14:
                lVar15 = lVar15 + 2;
              }
              iVar9 = 0;
LAB_141526f65:
              bVar18 = iVar9 == 0;
            }
          }
          else {
            bVar18 = iVar9 + DAT_14cbdfc48 == 1;
          }
          if ((void **)(lVar4 + 0x2d8) == &DAT_14cbdfc40) goto LAB_141526fc2;
          iVar9 = *(int *)(lVar4 + 0x2e4);
          _Src = DAT_14cbdfc40;
          iVar14 = DAT_14cbdfc48;
        }
LAB_141526f86:
        *(int *)(lVar4 + 0x2e0) = iVar14;
        if (iVar9 == 0 && iVar14 == 0) {
          *(undefined4 *)(lVar4 + 0x2e4) = 0;
        }
        else {
          FUN_1446dd670((undefined8 *)(lVar4 + 0x2d8),iVar14);
          if (iVar14 != 0) {
            memcpy(*(void **)(lVar4 + 0x2d8),_Src,(longlong)iVar14 * 2);
          }
        }
      }
    }
    else {
      iVar9 = *(int *)(lVar4 + 0x2e0);
      if (iVar9 == DAT_14cbdfc18) {
        bVar18 = true;
        if (1 < iVar9) {
          lVar15 = 0;
          while( true ) {
            uVar2 = *(ushort *)(*(longlong *)(lVar4 + 0x2d8) + lVar15);
            uVar12 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)DAT_14cbdfc10 + lVar15);
            uVar16 = (uint)uVar3;
            if (uVar2 != uVar3) {
              if ((uVar3 | uVar2) < 0x80) {
                uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_141526c21;
              }
              iVar9 = uVar12 - uVar16;
              goto LAB_141526e4c;
            }
            if (uVar2 == 0) break;
LAB_141526c21:
            lVar15 = lVar15 + 2;
          }
          iVar9 = 0;
LAB_141526e4c:
          bVar18 = iVar9 == 0;
        }
      }
      else {
        bVar18 = iVar9 + DAT_14cbdfc18 == 1;
      }
      if ((void **)(lVar4 + 0x2d8) != &DAT_14cbdfc10) {
        iVar9 = *(int *)(lVar4 + 0x2e4);
        _Src = DAT_14cbdfc10;
        iVar14 = DAT_14cbdfc18;
        goto LAB_141526f86;
      }
    }
LAB_141526fc2:
    if (!(bool)(bVar17 & bVar18)) {
      *(undefined1 *)(lVar4 + 0x2d0) = *(undefined1 *)(lVar4 + 0x300);
      puVar5 = *(ushort **)(lVar4 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar11 + 0x58));
LAB_141526ffd:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415271b0 FUN_1415271b0 body=1611 status=ok
// SIG undefined FUN_1415271b0(void)

void FUN_1415271b0(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong *local_68;
  code *local_60;
  undefined1 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x318))();
  lVar11 = param_1[4];
  if (lVar11 == 0) goto LAB_14152721b;
  if (DAT_14cae9568 == 0) {
    local_80 = &local_60;
    local_60 = FUN_1417de738;
    local_70 = (code *)&LAB_145893408;
    local_78 = &LAB_1458cbbd2;
    local_88 = &LAB_147ba21f1;
    local_90 = &LAB_1463e9233;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x1000000c;
    local_b0 = 8;
    local_b8 = 0x2b8;
    FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
  }
  lVar11 = *(longlong *)(lVar11 + 0x10);
  iVar5 = *(int *)(DAT_14cae9568 + 0x38);
  if ((*(int *)(lVar11 + 0x38) < iVar5) ||
     (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar5 * 8) != DAT_14cae9568 + 0x30))
  goto LAB_14152721b;
  lVar11 = param_1[4];
  if ((lVar11 == 0) ||
     ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar5 ||
      (*(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar5 * 8) !=
       DAT_14cae9568 + 0x30)))) {
    lVar11 = 0;
  }
  if ((*(longlong *)(lVar11 + 0x78) == 0) ||
     (lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x78) + 0x80), lVar11 == 0)) goto LAB_14152721b;
  if (DAT_14cb5e538 == 0) {
    local_80 = &local_60;
    local_60 = (code *)&LAB_1417c5d06;
    local_70 = FUN_14081d0ea;
    local_78 = &LAB_1417ad04a;
    local_88 = &LAB_1486a7af7;
    local_90 = &LAB_1464e1631;
    local_98 = L"Game";
    local_a0 = 0;
    local_a8 = 0x1000000c;
    local_b0 = 8;
    local_b8 = 0x420;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
  }
  if (((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cb5e538 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) != DAT_14cb5e538 + 0x30)) ||
     (lVar9 = param_1[8], lVar11 != param_2 || lVar9 == 0)) goto LAB_14152721b;
  if ((((*(int *)((longlong)param_1 + 0x4c) != 0) &&
       (uVar1 = *(uint *)(param_1 + 9), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       ((plVar8 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)((longlong)param_1 + 0x4c))))))) &&
     ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
      lVar11 = *plVar8;
    }
    else {
      lVar11 = 0;
    }
    if (*(int *)(lVar11 + 0x48) < *(int *)(lVar11 + 0x40)) goto LAB_14152721b;
  }
  local_60 = (code *)0x0;
  local_58 = *param_4;
  lVar11 = param_1[4];
  if (lVar11 == 0) {
LAB_141527366:
    lVar11 = 0;
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_80 = &local_50;
      local_50 = FUN_1417de738;
      local_70 = (code *)&LAB_145893408;
      local_78 = &LAB_1458cbbd2;
      local_88 = &LAB_147ba21f1;
      local_90 = &LAB_1463e9233;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x1000000c;
      local_b0 = 8;
      local_b8 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) != DAT_14cae9568 + 0x30)) goto LAB_141527366;
  }
  if ((longlong)*(int *)(lVar9 + 0x30) != 0) {
    plVar8 = *(longlong **)(lVar9 + 0x28);
    local_68 = plVar8 + *(int *)(lVar9 + 0x30);
    do {
      lVar9 = *plVar8;
      iVar5 = *(int *)(lVar9 + 0x30);
      if ((longlong)iVar5 == 0) {
LAB_1415273d3:
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar9 + 0xc);
          *(uint *)(param_1 + 9) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          iVar5 = *(int *)(lVar11 + 0x10);
          if (iVar5 == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar10 = DAT_14c964868 + 1;
            bVar13 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar13) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar10);
            }
            lVar9 = 0;
            LOCK();
            iVar5 = *(int *)(lVar11 + 0x10);
            bVar13 = iVar5 == 0;
            if (bVar13) {
              *(int *)(lVar11 + 0x10) = iVar10;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar13) {
              iVar5 = iVar10;
            }
            *(int *)((longlong)param_1 + 0x4c) = iVar5;
            if (iVar5 != 0) goto LAB_141527418;
          }
          else {
            *(int *)((longlong)param_1 + 0x4c) = iVar5;
LAB_141527418:
            uVar1 = *(uint *)(param_1 + 9);
            lVar9 = 0;
            if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
              plVar8 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if ((plVar8 == (longlong *)0x0) ||
                 (((int)plVar8[2] != iVar5 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) {
                lVar9 = 0;
              }
              else {
                lVar9 = *plVar8;
              }
            }
          }
          lVar11 = param_1[4];
          if (lVar11 == 0) {
LAB_141527495:
            *(undefined4 *)(lVar9 + 0x48) = 0;
            lVar11 = 0;
          }
          else {
            if (DAT_14cae9568 == 0) {
              local_80 = &local_50;
              local_50 = FUN_1417de738;
              local_70 = (code *)&LAB_145893408;
              local_78 = &LAB_1458cbbd2;
              local_88 = &LAB_147ba21f1;
              local_90 = &LAB_1463e9233;
              local_98 = L"Engine";
              local_a0 = 0;
              local_a8 = 0x1000000c;
              local_b0 = 8;
              local_b8 = 0x2b8;
              FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
            }
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) != DAT_14cae9568 + 0x30))
            goto LAB_141527495;
            *(undefined4 *)(lVar9 + 0x48) = 0;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar11);
            }
          }
          *(longlong *)(lVar9 + 0x50) = lVar11;
          if (*(int *)((longlong)param_1 + 0x4c) == 0) {
LAB_14152750c:
            uVar6 = 0;
          }
          else {
            uVar1 = *(uint *)(param_1 + 9);
            uVar6 = 0;
            if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
              puVar7 = (undefined8 *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if ((puVar7 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar7 + 2) != *(int *)((longlong)param_1 + 0x4c) ||
                  ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_14152750c;
              uVar6 = *puVar7;
            }
          }
          FUN_143fd4122(uVar6,0);
        }
        break;
      }
      lVar2 = *(longlong *)(lVar9 + 0x28);
      lVar12 = 0;
      while (plVar3 = *(longlong **)(lVar2 + lVar12),
            cVar4 = (**(code **)(*plVar3 + 0x2a0))(plVar3,lVar11,&local_60), cVar4 != '\0') {
        lVar12 = lVar12 + 8;
        if ((longlong)iVar5 * 8 == lVar12) goto LAB_1415273d3;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != local_68);
  }
LAB_14152721b:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415277fc FUN_1415277fc body=1 status=ok
// SIG undefined FUN_1415277fc(void)

void FUN_1415277fc(void)

{
  return;
}



// FUNCTION 1415277fe FUN_1415277fe body=107 status=ok
// SIG undefined FUN_1415277fe(void)

void FUN_1415277fe(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    do {
      LOCK();
      plVar1 = (longlong *)param_1[6];
      if (plVar2 == plVar1) {
        param_1[6] = *plVar2;
        plVar1 = plVar2;
      }
      UNLOCK();
      if (plVar2 == plVar1) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
        *(undefined1 *)(plVar1 + 1) = 1;
        (**(code **)(*(longlong *)*param_1 + 0x10))();
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
      }
      plVar2 = (longlong *)param_1[6];
    } while (plVar2 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 141527869 FUN_141527869 body=157 status=ok
// SIG undefined FUN_141527869(void)

undefined8 * FUN_141527869(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  if ((param_2 == 0) || (DAT_14cabbac0 != 0)) goto LAB_1415278a7;
  if (*(longlong *)(param_2 + 0x1d8) == 0) {
    if (((DAT_14cb0d2b0 != 0) && (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0)) &&
       (*(longlong *)(DAT_14cb0d2b0 + 0xf60) != 0)) {
      param_2 = *(longlong *)(DAT_14cb0d2b0 + 0xf50) + 0x90;
      goto LAB_1415278cf;
    }
  }
  else {
    param_2 = param_2 + 0x1d0;
LAB_1415278cf:
    lVar1 = FUN_1479735a4(param_2);
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
      *puVar2 = (LPCRITICAL_SECTION)(lVar1 + 0xb00);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xb00));
      goto LAB_1415278a7;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_1415278a7:
  *param_1 = puVar2;
  return param_1;
}



// FUNCTION 141527906 FUN_141527906 body=181 status=ok
// SIG undefined FUN_141527906(void)

void FUN_141527906(longlong param_1,byte param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((int)(uint)param_2 < *(int *)(param_1 + 0x148)) && ((longlong)(int)param_3[1] != 0)) {
    lVar2 = *param_3;
    lVar3 = (longlong)(int)param_3[1] << 3;
    do {
      lVar1 = *(longlong *)(param_1 + 0x140);
      if (*(longlong *)(param_1 + 0x140) == 0) {
        lVar1 = param_1 + 0x60;
      }
      local_40 = lVar2;
      FUN_1408ff3be(lVar1 + (ulonglong)param_2 * 0x20,&local_40);
      lVar1 = *(longlong *)(param_1 + 0x140);
      if (*(longlong *)(param_1 + 0x140) == 0) {
        lVar1 = param_1 + 0x60;
      }
      local_40 = lVar2;
      FUN_1408ff3be(lVar1 + (ulonglong)param_2 * 0x20 + 0x10,&local_40);
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415279bc FUN_1415279bc body=123 status=ok
// SIG undefined FUN_1415279bc(void)

void FUN_1415279bc(longlong param_1)

{
  FUN_14575d472(param_1 + 0x288,param_1);
  FUN_1448a8284(param_1 + 0x288);
  FUN_1444872f6(param_1);
  *(undefined8 *)(param_1 + 0x150) = 0;
  FUN_1448a8284(param_1 + 0x5c0);
  FUN_1448a8284(param_1 + 0x5d8);
  FUN_1448a8284(param_1 + 0x5f0);
  FUN_1448a8284(param_1 + 0x608);
  FUN_1448a8284(param_1 + 0x620);
  return;
}



// FUNCTION 141527a38 FUN_141527a38 body=226 status=ok
// SIG undefined FUN_141527a38(void)

longlong * FUN_141527a38(longlong *param_1)

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
  pcVar13 = FUN_1462d1450;
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



// FUNCTION 141527b1c FUN_141527b1c body=112 status=ok
// SIG undefined FUN_141527b1c(void)

void FUN_141527b1c(longlong param_1)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = (ulonglong)*(int *)(param_1 + 0xe8);
  if (0 < (longlong)uVar3) {
    lVar4 = uVar3 << 4;
    do {
      lVar4 = lVar4 + -0x10;
      cVar2 = FUN_141081864(param_1,*(longlong *)(param_1 + 0xe0) + lVar4);
      if (cVar2 != '\0') {
        FUN_145ccd916(param_1 + 0xe0,(int)uVar3 + -1);
        FUN_145ccd87e(param_1 + 0xe0);
      }
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 141527b8c FUN_141527b8c body=622 status=ok
// SIG undefined FUN_141527b8c(void)

void FUN_141527b8c(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar10 = *(longlong *)(param_1 + 0x98);
  if (lVar10 == 0) {
    uVar7 = FUN_141518b52();
    lVar10 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x98) = lVar10;
  }
  lVar8 = *(longlong *)(param_1 + 0xa0);
  if (lVar8 == 0) {
    if ((lVar10 == 0) || (*(longlong *)(param_1 + 0x90) == 0)) goto LAB_141527d13;
    plVar4 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
      goto LAB_141527d13;
    }
    uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar8 = FUN_144aff482(uVar7,(longlong *)(param_1 + 0x90));
    *(longlong *)(param_1 + 0xa0) = lVar8;
    if (lVar8 == 0) goto LAB_141527d13;
  }
  local_c0 = FUN_14479d2ce(param_1 + 0xa8);
  if ((local_c0 != 0) && ((longlong)*(int *)(lVar8 + 0x20) != 0)) {
    puVar11 = *(undefined8 **)(lVar8 + 0x18);
    puVar12 = puVar11 + (longlong)*(int *)(lVar8 + 0x20) * 10;
    do {
      local_b8[0] = 0;
      local_90 = 0;
      FUN_1456bb102(local_b8,local_c0);
      FUN_1447c3578(puVar11 + 3,local_88,local_b8);
      iVar6 = FUN_1405d5f74(local_88);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppuVar9 = local_88;
        if (0x18 < local_70) {
          ppppuVar9 = (undefined8 ****)local_88[0];
        }
        (*pcVar3)(ppppuVar9);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(local_88[0]);
      }
      FUN_144a5ac3a(local_b8);
      if (0 < iVar6) {
        do {
          iVar2 = *(int *)(param_1 + 0x110);
          lVar10 = (longlong)iVar2;
          *(uint *)(param_1 + 0x110) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x114) < iVar2 + 1U) {
            FUN_145ccdad2((longlong *)(param_1 + 0x108),iVar2);
          }
          lVar8 = *(longlong *)(param_1 + 0x108);
          puVar1 = (undefined8 *)(lVar8 + lVar10 * 0x18);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar8 + 0x10 + lVar10 * 0x18) = 0;
          *(undefined8 *)(lVar8 + lVar10 * 0x18) = *puVar11;
          uVar7 = FUN_14477b664(puVar11[1]);
          uVar7 = FUN_14477b664(uVar7);
          *(undefined8 *)(lVar8 + 8 + lVar10 * 0x18) = uVar7;
          *(undefined8 *)(lVar8 + 0x10 + lVar10 * 0x18) = puVar11[2];
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      puVar11 = puVar11 + 10;
    } while (puVar11 != puVar12);
  }
LAB_141527d13:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141527dfc FUN_141527dfc body=700 status=ok
// SIG undefined FUN_141527dfc(void)

void FUN_141527dfc(code *param_1,longlong *param_2,char param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != '\0') {
    iVar2 = *(int *)(param_1 + 0x1f8);
    if (iVar2 == 0) {
      uVar11 = 1;
      uVar4 = 0;
      iVar5 = 0;
      iVar12 = 0;
    }
    else {
      pcVar10 = *(code **)(param_1 + 0x1f0);
      if (*(code **)(param_1 + 0x1f0) == (code *)0x0) {
        pcVar10 = param_1 + 0x1e0;
      }
      uVar7 = *(uint *)pcVar10;
      if (uVar7 == 0) {
        iVar12 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar12 = iVar2 + -1;
        }
        uVar4 = 0;
        uVar13 = iVar12 >> 5;
        if (iVar12 >> 5 < 1) {
          uVar13 = 0;
        }
        iVar5 = 0;
        do {
          if (uVar13 == uVar4) goto LAB_141527f95;
          iVar5 = iVar5 + 0x20;
          uVar7 = *(uint *)(pcVar10 + (uVar4 + 1) * 4);
          uVar4 = uVar4 + 1;
        } while (uVar7 == 0);
      }
      else {
        uVar4 = 0;
        iVar5 = 0;
      }
      uVar11 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar5 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar12) {
        iVar12 = iVar2;
      }
    }
    if (iVar12 < iVar2) {
      uVar7 = 0xffffffff;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8 + (longlong)iVar12 * 0x20) + 0x28) = 0x17
        ;
        uVar7 = ~(uint)uVar11 & uVar7;
        pcVar10 = *(code **)(param_1 + 0x1f0);
        if (*(code **)(param_1 + 0x1f0) == (code *)0x0) {
          pcVar10 = param_1 + 0x1e0;
        }
        iVar2 = *(int *)(param_1 + 0x1f8);
        iVar12 = (int)uVar4;
        lVar6 = (longlong)iVar12;
        uVar13 = *(uint *)(pcVar10 + lVar6 * 4) & uVar7;
        if (uVar13 == 0) {
          iVar8 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar8 = iVar2 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar12) {
            iVar9 = iVar12;
          }
          if (iVar8 <= iVar12) break;
          lVar14 = 0;
          while( true ) {
            iVar5 = iVar5 + 0x20;
            uVar13 = *(uint *)(pcVar10 + (lVar6 + lVar14 + 1) * 4);
            if (uVar13 != 0) break;
            lVar14 = lVar14 + 1;
            if (iVar9 - lVar6 == lVar14) goto LAB_141527f95;
          }
          uVar4 = (ulonglong)(iVar12 + (int)lVar14 + 1);
          uVar7 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar13 & uVar13);
        uVar1 = uVar11 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar12 = (iVar5 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar2);
    }
LAB_141527f95:
    FUN_1447f69b6(param_1 + 0xb8);
  }
  if (param_1[0x221] == (code)0x0) {
    param_1[0x221] = (code)0x1;
    local_50 = FUN_146062346;
    local_48 = 0;
    FUN_14658120a(&local_40,param_1,&local_50,param_2);
    local_50 = param_1;
    FUN_146073fc6(param_1 + 0x30,&local_50,&local_40);
    if (local_38 != 0) {
      if (local_40 == (undefined8 *)0x0) goto LAB_141527faa;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141527faa:
  if ((int)param_2[1] != 0) {
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_141527fe5;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
LAB_141527fe5:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415280ba FUN_1415280ba body=629 status=ok
// SIG undefined FUN_1415280ba(void)

void FUN_1415280ba(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  longlong local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = param_2;
  FUN_140cbbed7();
  lVar5 = local_48;
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(lVar4 + lVar9);
      iVar2 = *(int *)(lVar8 + 0x4c);
      if (((((iVar2 == 0) || (uVar3 = *(uint *)(lVar8 + 0x48), (int)uVar3 < 0)) ||
           (DAT_14c9647dc <= (int)uVar3)) ||
          ((plVar7 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar7 == (longlong *)0x0 || ((int)plVar7[2] != iVar2)))) ||
         (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar8 = *plVar7, lVar8 == 0)))) {
LAB_141528242:
        lVar8 = 0;
      }
      else {
        if (DAT_14cac9ca8 == 0) {
          local_60 = &local_40;
          local_40 = FUN_141030f22;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_14081d0ea;
          local_68 = &LAB_1478c0a72;
          local_70 = &LAB_1417b2375;
          local_78 = L"Engine";
          local_80 = 0x1000000000;
          local_88 = 0x10000004;
          local_90 = 8;
          local_98 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
        goto LAB_141528242;
      }
      if ((lVar8 == lVar5) && (lVar8 = *(longlong *)(lVar4 + lVar9), 0 < *(int *)(lVar8 + 0x880))) {
        lVar6 = *(longlong *)(lVar8 + 0x878);
        if (*(longlong *)(lVar8 + 0x878) == 0) {
          lVar6 = lVar8 + 0x4f8;
        }
        if (*(char *)(lVar6 + 0x20) == '\t') {
          *(undefined4 *)(lVar8 + 0x4f0) = 0xffffffff;
          FUN_1400ef524(lVar8 + 0x4f8,0);
          iVar2 = *(int *)(lVar8 + 0x894);
          FUN_1401b95a9(*(undefined8 *)(lVar8 + 0x888));
          *(undefined4 *)(lVar8 + 0x890) = 0;
          if ((iVar2 < 0) && (*(int *)(lVar8 + 0x894) != 0)) {
            FUN_140578c10(lVar8 + 0x888);
          }
          *(undefined4 *)(lVar8 + 0x89c) = 0xffffffff;
          FUN_1400ef524(lVar8 + 0x8a0,0);
        }
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar9);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141528330 FUN_141528330 body=35 status=ok
// SIG undefined FUN_141528330(void)

void FUN_141528330(void)

{
  if (DAT_14c9493c8 == 0) {
    DAT_14c9493c8 = FUN_145ccf9fc();
  }
  return;
}



// FUNCTION 141528353 FUN_141528353 body=7 status=ok
// SIG undefined FUN_141528353(void)

undefined1 FUN_141528353(void)

{
  return DAT_14c963ff1;
}



// FUNCTION 14152835a FUN_14152835a body=1091 status=ok
// SIG undefined FUN_14152835a(void)

void FUN_14152835a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x3f70) == 0) {
    if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if ((((*(char *)(param_1 + 0x178) != '\x03') || (lVar6 = FUN_1407afa82(param_1), lVar6 == 0)) ||
      ((*(byte *)(param_1 + 0x6498) & 1) != 0)) ||
     ((*(char *)(lVar6 + 0xaf0) != '\0' ||
      (((*(byte *)(lVar6 + 0x3e0) & 2) != 0 && ((*(byte *)(lVar6 + 0xa28) & 2) != 0))))))
  goto LAB_1415286cb;
  if ((*(char *)(*(longlong *)(param_1 + 0x3f70) + 0x724) == '\x01') &&
     (((uVar5 = FUN_1403ae46b(), -1 < (int)uVar5 && ((int)uVar5 < *(int *)(param_1 + 0x78f0))) &&
      ((lVar6 = (ulonglong)uVar5 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar6 != 0 &&
       ((*(longlong **)(lVar6 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar6 + 0x20) != 0 &&
        (lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x28) + 8))(), lVar6 != 0)))))))) {
    lVar7 = FUN_140227782();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         == lVar7 + 0x30 && (*(char *)(lVar6 + 0xccc) != '\0')))) goto LAB_1415286cb;
  }
  lVar6 = *(longlong *)(param_1 + 0x3c0);
  if (lVar6 == 0) {
    if (*(char *)(param_1 + 0x4958) != '\0') goto LAB_1415286cb;
    lVar7 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      lVar6 = *(longlong *)(param_1 + 0x3c0);
      if (lVar6 != 0) goto LAB_1415284a2;
      lVar6 = 0;
LAB_1415287bd:
      lVar7 = 0;
    }
    else {
LAB_1415284a2:
      lVar7 = 0;
      if ((DAT_14cbadd90 != 0) && (lVar2 = *(longlong *)(lVar6 + 0x10), lVar2 != 0)) {
        if (*(int *)(lVar2 + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) goto LAB_1415287bd;
        lVar7 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
            DAT_14cbadd90 + 0x30) {
          lVar7 = lVar6;
        }
      }
    }
    if ((*(char *)(param_1 + 0x4958) != '\0') &&
       ((lVar7 == 0 || (piVar1 = (int *)(lVar7 + 0x2740), lVar7 = lVar6, *piVar1 == 0))))
    goto LAB_1415286cb;
  }
  if (((*(int *)(param_1 + 0x4924) <= *(int *)(param_1 + 0x4918)) ||
      (cVar4 = (**(code **)(*(longlong *)(param_1 + 0x4780) + 0x10))(param_1 + 0x4780),
      cVar4 == '\0')) || (*(char *)(param_1 + 0x73eb) != '\0')) goto LAB_1415286cb;
  lVar6 = *(longlong *)(&DAT_00006850 + param_1);
  if (lVar6 == 0) goto LAB_1415285ad;
  if (((&DAT_00001100)[lVar6] == '\n') && (*(longlong *)(lVar6 + 0x110) != 0)) goto LAB_1415286cb;
  if ((*(longlong *)(&DAT_00001ce8 + lVar6) == 0) ||
     (*(byte *)(*(longlong *)(&DAT_00001ce8 + lVar6) + 0x178) < 2)) {
    cVar4 = *(char *)(lVar6 + 0x1ee0);
joined_r0x0001415287b0:
    if (cVar4 != '\0') goto LAB_1415286cb;
  }
  else {
    plVar3 = *(longlong **)(lVar6 + 0x1eb8);
    if (plVar3 != (longlong *)0x0) {
      if (*(code **)(*plVar3 + 0x40) != (code *)&LAB_1449cc0ea) {
        cVar4 = (**(code **)(*plVar3 + 0x40))();
        goto joined_r0x0001415287b0;
      }
      if (*(char *)((longlong)plVar3 + 0xb2) == '\0') {
        if (*(char *)((longlong)plVar3 + 0x79) != '\0') goto LAB_1415286cb;
        if (0 < (int)plVar3[4]) {
          cVar4 = (char)plVar3[0xf];
          goto joined_r0x0001415287b0;
        }
      }
    }
  }
LAB_1415285ad:
  if ((lVar7 != 0) && (plVar3 = *(longlong **)(lVar7 + 0xb10), plVar3 != (longlong *)0x0)) {
    lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
    lVar7 = FUN_140a1ada8();
    if ((lVar7 != 0) &&
       (((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30)) && (*(char *)((longlong)plVar3 + 0xa2) == '\x01')))) {
LAB_1415286cb:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
  FUN_1465ceb32(param_1,1);
  FUN_1407afa82(param_1);
  if ((((*(char *)(*(longlong *)(param_1 + 0x3f70) + 0x725) == '\x01') &&
       (uVar5 = FUN_1403ae46b(), -1 < (int)uVar5)) &&
      (((int)uVar5 < *(int *)(param_1 + 0x78f0) &&
       ((lVar6 = (ulonglong)uVar5 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar6 != 0 &&
        (*(longlong **)(lVar6 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar6 + 0x20) != 0))))))
     && (lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x28) + 8))(), lVar6 != 0)) {
    lVar7 = FUN_140227782();
    if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         == lVar7 + 0x30)) && (*(char *)(lVar6 + 0xccc) == '\x01')) {
      FUN_148d5792a(lVar6);
    }
  }
  if (*(longlong *)(&DAT_00006850 + param_1) != 0) {
    FUN_1440e9c9e();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 1415287c4 FUN_1415287c4 body=104 status=ok
// SIG undefined FUN_1415287c4(void)

void FUN_1415287c4(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 2) != (longlong *)0x0 && *param_1 != 0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 2) + 0x180))();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
      lVar2 = FUN_1458485da();
      if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x30), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141528822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x2b8))(plVar1,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14152882c FUN_14152882c body=334 status=ok
// SIG undefined FUN_14152882c(void)

void FUN_14152882c(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,6);
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *param_1) goto LAB_141528874;
      puVar1 = puVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_141528874:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
  }
  lVar3 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar3 + 1]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar2 + lVar7 * 4 + 4 + lVar3 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  uVar5 = *(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar5 != 0) {
    lVar2 = (ulonglong)uVar5 << 5;
    puVar6 = puVar1;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == param_1[4]) goto LAB_141528910;
      puVar6 = puVar6 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  puVar6 = (ulonglong *)0x0;
LAB_141528910:
  lVar2 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar6) {
    *(int *)(lVar2 + 0x10 + lVar7 * 4) = (int)*puVar6 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar2 = *param_3;
    uVar5 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar5 != 0) {
    lVar3 = (ulonglong)uVar5 << 5;
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[5]) goto LAB_141528958;
      puVar1 = puVar1 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_141528958:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar2 + 0x14 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 14152897a FUN_14152897a body=120 status=ok
// SIG undefined FUN_14152897a(void)

void FUN_14152897a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 / 0x18)) {
        uVar2 = uVar1 / 0x18 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = (int)uVar2;
    FUN_145cd58e2(param_1,*(undefined4 *)(param_1 + 0x38),uVar2,0x18);
    return;
  }
  return;
}



// FUNCTION 1415289f2 FUN_1415289f2 body=57 status=ok
// SIG undefined FUN_1415289f2(void)

void FUN_1415289f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9410 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9410 = FUN_140002ddd(FUN_1465d3a16,uVar1,L"OakCritterBiomeDef");
  }
  return;
}



// FUNCTION 141528a2c FUN_141528a2c body=12 status=ok
// SIG undefined FUN_141528a2c(void)

bool FUN_141528a2c(void)

{
  return DAT_14c844ed8 != 0;
}



// FUNCTION 141528a38 FUN_141528a38 body=8 status=ok
// SIG undefined FUN_141528a38(void)

undefined8 FUN_141528a38(void)

{
  return DAT_14c844ed8;
}



// FUNCTION 141528a40 FUN_141528a40 body=164 status=ok
// SIG undefined FUN_141528a40(void)

void FUN_141528a40(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Math";
  local_38 = 4;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Math";
  local_38 = 4;
  FUN_140208c1e(&DAT_14caebdd8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141528ae6 FUN_141528ae6 body=57 status=ok
// SIG undefined FUN_141528ae6(void)

void FUN_141528ae6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbae810 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbae810 = FUN_140002ddd(FUN_1465ebe18,uVar1,L"OakSequentialEchoLogCollectionDef");
  }
  return;
}



// FUNCTION 141528b20 FUN_141528b20 body=389 status=ok
// SIG undefined FUN_141528b20(void)

undefined8 FUN_141528b20(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong local_50;
  undefined1 local_48 [8];
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141289672(local_58);
  if ((longlong)*(int *)(param_1 + 0x300) != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x2f8) + 8 + lVar4) == local_50) {
        FUN_141289672(local_48,param_2);
        if ((longlong)*(int *)(param_1 + 0x300) == 0) goto LAB_141528bdc;
        iVar3 = 1;
        lVar4 = 0;
        lVar5 = 0;
        goto LAB_141528bc1;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x300) * 0x10 != lVar4);
  }
  uVar1 = 0;
  goto LAB_141528bde;
  while( true ) {
    lVar5 = lVar5 + 0x100000000;
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + 0x10;
    if ((longlong)*(int *)(param_1 + 0x300) * 0x10 == lVar4) break;
LAB_141528bc1:
    if (*(longlong *)(*(longlong *)(param_1 + 0x2f8) + 8 + lVar4) == local_40) {
      if (iVar3 != 0) {
        (**(code **)(*param_2 + 0x18))(param_2,0);
        iVar2 = *(int *)(param_1 + 0x300);
        if (iVar2 - iVar3 != 0) {
          lVar4 = (lVar5 >> 0x20) * 0x10;
          memmove((void *)(*(longlong *)(param_1 + 0x2f8) + lVar4),
                  (void *)(*(longlong *)(param_1 + 0x2f8) + lVar4 + 0x10),
                  (longlong)(iVar2 - iVar3) << 4);
          iVar2 = *(int *)(param_1 + 0x300);
        }
        *(int *)(param_1 + 0x300) = iVar2 + -1;
        FUN_1458757a4(param_1 + 0x2f8);
        if ((*(char *)(param_1 + 0x245) == '\x01') && (*(int *)(param_1 + 0x300) == 0)) {
          FUN_1440f9670(param_1,0);
        }
        FUN_1440f9cf4(param_1);
        local_34 = *(undefined4 *)(param_1 + 0x2f0);
        FUN_1447cd2ec(param_1 + 0xe0);
        FUN_1409b52ac(*(longlong *)(param_1 + 0x238) + 0x3a90);
      }
      break;
    }
  }
LAB_141528bdc:
  uVar1 = 1;
LAB_141528bde:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 141528ca6 FUN_141528ca6 body=66 status=ok
// SIG undefined FUN_141528ca6(void)

void FUN_141528ca6(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      FUN_1400daade(plVar3);
      puVar2 = (undefined8 *)*plVar3;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141528ce8 FUN_141528ce8 body=175 status=ok
// SIG undefined FUN_141528ce8(void)

void FUN_141528ce8(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = (**(code **)(*param_1 + 0x88))();
  if (lVar2 != 0) {
    cVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0xb0))(param_1);
      if (cVar1 == '\0') {
        local_58 = 0;
        local_48 = &PTR_LAB_14a7febf0;
        local_40 = &LAB_14341acce;
        local_68[0] = &LAB_147989f08;
        uVar3 = (**(code **)(*param_1 + 0x90))(param_1);
        FUN_147962214(lVar2,uVar3,local_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141528d98 FUN_141528d98 body=219 status=ok
// SIG undefined FUN_141528d98(void)

void FUN_141528d98(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_3 + 0x14) == 0 || *(float *)(param_1 + 8) != *(float *)(param_3 + 0x10)) {
    *(float *)(param_3 + 0x10) = *(float *)(param_1 + 8);
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  }
  lVar2 = FUN_140280ec4(param_2);
  if (*(int *)(param_3 + 0x1c) == 0 || *(float *)(lVar2 + 0x3c) != *(float *)(param_3 + 0x18)) {
    *(float *)(param_3 + 0x18) = *(float *)(lVar2 + 0x3c);
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  }
  local_21 = '\x04';
  uVar3 = FUN_140280ec4(param_2);
  cVar1 = FUN_140280f4a(uVar3,&local_21);
  if (cVar1 != '\0') {
    if (*(int *)(param_3 + 0x2c) == 0 || local_21 != *(char *)(param_3 + 0x28)) {
      *(char *)(param_3 + 0x28) = local_21;
      *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141528e74 FUN_141528e74 body=75 status=ok
// SIG undefined FUN_141528e74(void)

void FUN_141528e74(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  bVar2 = DAT_14c950c29;
  do {
    lVar1 = *(longlong *)(param_2 + lVar3 * 8);
    *(longlong *)(param_1 + lVar3 * 8) = lVar1;
    if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
      FUN_1456cec3c();
      bVar2 = DAT_14c950c29;
    }
    lVar3 = lVar3 + 1;
  } while (param_3 != (int)lVar3);
  return;
}



// FUNCTION 141528ec0 FUN_141528ec0 body=306 status=ok
// SIG undefined FUN_141528ec0(void)

void FUN_141528ec0(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_141528f22;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_141528f22:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 141528ff2 FUN_141528ff2 body=190 status=ok
// SIG undefined FUN_141528ff2(void)

longlong * FUN_141528ff2(longlong param_1,uint param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar3 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x210);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x1d0);
      iVar6 = iVar5;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar6 * 0x20) == param_2) goto LAB_14152906a;
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + lVar3 + 0x18);
      } while (iVar6 != -1);
    }
  }
  plVar2 = (longlong *)FUN_1400b465c();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_144a79464();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      return plVar2;
    }
  }
  return (longlong *)0x0;
  while (iVar5 = *(int *)(lVar4 + 0x18), iVar5 != -1) {
LAB_14152906a:
    lVar4 = lVar3 + (longlong)iVar5 * 0x20;
    if (*(uint *)(lVar3 + (longlong)iVar5 * 0x20) == param_2) goto LAB_14152907f;
  }
  lVar4 = 0;
LAB_14152907f:
  plVar2 = (longlong *)(*(longlong *)(lVar4 + 8) + 0x18);
  if (plVar2 != param_3) {
    puVar1 = (undefined8 *)*plVar2;
    *plVar2 = *param_3;
    *param_3 = 0;
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001415290ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar2 = (longlong *)(**(code **)*puVar1)(puVar1,1);
      return plVar2;
    }
  }
  return plVar2;
}



// FUNCTION 1415290b0 FUN_1415290b0 body=337 status=ok
// SIG undefined FUN_1415290b0(void)

void FUN_1415290b0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((((char)param_2 != '\0') && (*(char *)(param_1 + 0x21) == '\x01')) &&
       (*(longlong *)(param_1 + 0x38) != 0)) &&
      ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar3 != 0 &&
       (lVar3 = *(longlong *)(lVar3 + 0x360), lVar3 != 0)))) && (*(longlong *)(lVar3 + 0x1f0) != 0))
  {
    lVar3 = FUN_140cb14ac();
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) {
      FUN_148a99e22(*(longlong *)(lVar3 + 0x30),param_1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x540);
  local_30 = (longlong *)0x0;
  local_28 = 0;
  FUN_14114e6dc(&local_30,plVar1);
  if ((*(int *)(param_1 + 0x548) != 0) &&
     (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x548) = 0;
  }
  if (local_30 != (longlong *)0x0 && local_28 != 0) {
    (**(code **)(*local_30 + 0x60))(local_30,param_2);
  }
  if (local_28 != 0) {
    if (local_30 == (longlong *)0x0) goto LAB_1415291cf;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1415291cf:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141529202 FUN_141529202 body=1284 status=ok
// SIG undefined FUN_141529202(void)

longlong * FUN_141529202(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_388 [32];
  undefined8 *local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  longlong local_348;
  undefined8 uStack_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  FUN_141208f3a();
  local_348 = 0;
  uStack_340 = 0;
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar15 = 0;
    do {
      lVar6 = *(longlong *)(lVar1 + lVar15);
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x1e8) == '\x01')) {
        lVar9 = (longlong)(int)(uint)uStack_340;
        uVar17 = (uint)uStack_340 + 1;
        uStack_340 = CONCAT44(uStack_340._4_4_,uVar17);
        if (uStack_340._4_4_ < uVar17) {
          FUN_14585e824(&local_348);
          lVar6 = *(longlong *)(lVar1 + lVar15);
        }
        *(longlong *)(local_348 + lVar9 * 8) = lVar6;
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar15);
  }
  plVar10 = &local_348;
  if (plVar10 == param_1) {
    if (local_348 != 0) {
      FUN_1400020a8();
    }
    uVar17 = *(uint *)(param_1 + 1);
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_348;
    local_348 = 0;
    *(uint *)(param_1 + 1) = (uint)uStack_340;
    *(uint *)((longlong)param_1 + 0xc) = uStack_340._4_4_;
    uVar17 = (uint)uStack_340;
  }
  if (1 < (int)uVar17) {
    lVar3 = *param_1;
    memset(local_338,0,0x2f0);
    uStack_340 = lVar3 + (ulonglong)uVar17 * 8 + -8;
    local_348 = lVar3;
    fVar23 = logf((float)(int)uVar17);
    local_338[0] = (int)(longlong)(fVar23 + fVar23);
    do {
      puVar12 = (undefined8 *)*plVar10;
      puVar16 = (undefined8 *)plVar10[1];
      iVar11 = (int)plVar10[2];
      iVar5 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar12) >> 3);
      uVar17 = iVar5 + 1;
      puVar20 = puVar16;
      puVar21 = puVar12;
      if (iVar11 != 0) {
LAB_141529349:
        if (8 < (int)uVar17) {
          uVar2 = puVar21[uVar17 >> 1];
          puVar21[uVar17 >> 1] = *puVar21;
          *puVar21 = uVar2;
          local_360 = puVar16 + 1;
          local_368 = puVar21;
          do {
            puVar7 = local_368 + 1;
            puVar8 = puVar7;
            do {
              local_368 = puVar8;
              local_350 = puVar7;
              if (puVar16 < puVar8) break;
              cVar4 = FUN_141529708(*puVar21,*puVar8);
              puVar8 = puVar8 + 1;
              puVar7 = local_350 + 1;
            } while (cVar4 == '\0');
            puVar7 = local_360 + -2;
            puVar8 = local_360;
            do {
              puVar8 = puVar8 + -1;
              local_360 = puVar8;
              local_358 = puVar7;
              if (puVar8 <= puVar21) break;
              cVar4 = FUN_141529708(*puVar8,*puVar21);
              puVar7 = local_358 + -1;
            } while (cVar4 == '\0');
            if (local_360 < local_368) goto LAB_141529647;
            uVar2 = *local_368;
            *local_368 = *local_360;
            *local_360 = uVar2;
          } while( true );
        }
        for (; puVar20 = puVar21, puVar12 = puVar21, puVar21 < puVar16; puVar16 = puVar16 + -1) {
          while (puVar8 = puVar20, puVar12 = puVar12 + 1, puVar12 <= puVar16) {
            cVar4 = FUN_141529708(*puVar8,*puVar12);
            puVar20 = puVar12;
            if (cVar4 == '\0') {
              puVar20 = puVar8;
            }
          }
          uVar2 = *puVar8;
          *puVar8 = *puVar16;
          *puVar16 = uVar2;
        }
        goto LAB_1415293ad;
      }
LAB_141529406:
      local_368 = puVar21;
      if (uVar17 != 0) {
        iVar11 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
        iVar5 = iVar11;
joined_r0x000141529427:
        do {
          iVar19 = iVar11 * 2 + 1;
          if (iVar19 < (int)uVar17) {
            iVar18 = iVar11 * 2 + 2;
            if ((iVar18 < (int)uVar17) &&
               (cVar4 = FUN_141529708(local_368[iVar18],local_368[iVar19]), cVar4 == '\0')) {
              iVar19 = iVar18;
            }
            cVar4 = FUN_141529708(local_368[iVar11],local_368[iVar19]);
            if (cVar4 != '\0') {
              uVar2 = local_368[iVar11];
              local_368[iVar11] = local_368[iVar19];
              local_368[iVar19] = uVar2;
              iVar11 = iVar19;
              goto joined_r0x000141529427;
            }
          }
          bVar22 = iVar5 != 0;
          iVar11 = iVar5 + -1;
          iVar5 = iVar11;
        } while (bVar22);
        if (1 < (int)uVar17) {
          uVar13 = (ulonglong)uVar17;
          uVar2 = *local_368;
          *local_368 = local_368[uVar13 - 1];
          local_368[uVar13 - 1] = uVar2;
          if (uVar17 != 2) {
            do {
              uVar14 = uVar13 - 1;
              iVar11 = 0;
              iVar19 = 1;
              iVar5 = 0;
              do {
                iVar11 = iVar11 + 2;
                iVar18 = iVar19;
                if (((longlong)iVar11 < (longlong)uVar14) &&
                   (cVar4 = FUN_141529708(local_368[iVar11],local_368[iVar19]), cVar4 == '\0')) {
                  iVar18 = iVar11;
                }
                cVar4 = FUN_141529708(local_368[iVar5],local_368[iVar18]);
                if (cVar4 == '\0') break;
                uVar2 = local_368[iVar5];
                local_368[iVar5] = local_368[iVar18];
                local_368[iVar18] = uVar2;
                iVar11 = iVar18 * 2;
                iVar19 = iVar18 * 2 + 1;
                iVar5 = iVar18;
              } while ((longlong)iVar19 < (longlong)uVar14);
              uVar2 = *local_368;
              *local_368 = local_368[uVar13 - 2];
              local_368[uVar13 - 2] = uVar2;
              uVar13 = uVar14;
            } while (2 < uVar14);
          }
        }
      }
LAB_1415293ad:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_141529647:
  uVar2 = *puVar21;
  *puVar21 = *local_360;
  *local_360 = uVar2;
  iVar11 = iVar11 + -1;
  puVar8 = local_360 + -1;
  if ((longlong)local_358 - (longlong)puVar12 < (longlong)puVar20 - (longlong)local_350) {
    if (local_368 < puVar16) {
      *plVar10 = (longlong)local_368;
      plVar10[1] = (longlong)puVar16;
      *(int *)(plVar10 + 2) = iVar11;
      plVar10 = plVar10 + 3;
    }
    puVar16 = local_358;
    puVar12 = puVar21;
    if (local_360 <= puVar21 + 1) goto LAB_1415293ad;
  }
  else {
    if (puVar21 + 1 < local_360) {
      *plVar10 = (longlong)puVar21;
      plVar10[1] = (longlong)puVar8;
      *(int *)(plVar10 + 2) = iVar11;
      plVar10 = plVar10 + 3;
    }
    puVar8 = puVar16;
    puVar21 = local_368;
    puVar12 = local_350;
    if (puVar16 <= local_368) goto LAB_1415293ad;
  }
  local_350 = puVar12;
  local_358 = puVar16;
  local_368 = puVar21;
  iVar5 = (int)((ulonglong)((longlong)local_358 - (longlong)local_350) >> 3);
  uVar17 = iVar5 + 1;
  puVar12 = local_350;
  puVar16 = puVar8;
  puVar20 = local_358;
  puVar21 = local_368;
  if (iVar11 == 0) goto LAB_141529406;
  goto LAB_141529349;
}



// FUNCTION 141529708 FUN_141529708 body=319 status=ok
// SIG undefined FUN_141529708(void)

ulonglong FUN_141529708(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  wchar_t *_Str1;
  wchar_t *_Str2;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = 0;
  if (param_2 != 0 && param_1 != 0) {
    FUN_1400021e4(param_1 + 0x38,&local_38);
    iVar3 = local_30;
    pwVar1 = local_38;
    uVar2 = local_30 - 1;
    if (local_30 == 0) {
      uVar2 = 0;
    }
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        local_38[uVar4] = (ushort)((ushort)local_38[uVar4] - 0x41 < 0x1a) * 0x20 + local_38[uVar4];
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
    }
    FUN_1400021e4(param_2 + 0x38);
    uVar2 = local_30 - 1;
    if (local_30 == 0) {
      uVar2 = 0;
    }
    if (0 < (int)uVar2) {
      uVar4 = 0;
      do {
        local_38[uVar4] = (ushort)((ushort)local_38[uVar4] - 0x41 < 0x1a) * 0x20 + local_38[uVar4];
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
    }
    _Str2 = local_38;
    if (local_30 == 0) {
      _Str2 = L"";
    }
    _Str1 = L"";
    if (iVar3 != 0) {
      _Str1 = pwVar1;
    }
    iVar3 = wcscmp(_Str1,_Str2);
    uVar4 = CONCAT71((int7)((ulonglong)&local_38 >> 8),iVar3 < 1);
    if (local_38 != (wchar_t *)0x0) {
      FUN_1400020a8(local_38);
    }
    if (pwVar1 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 141529848 FUN_141529848 body=1350 status=ok
// SIG undefined FUN_141529848(void)

void FUN_141529848(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined2 *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  code **local_230;
  undefined1 *local_228;
  code *local_220;
  undefined1 local_214 [4];
  code *local_210;
  undefined **local_208;
  longlong *plStack_200;
  longlong *local_1f8;
  ulonglong auStack_1f0 [6];
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 uStack_198;
  undefined8 local_138;
  undefined4 local_130;
  float local_12c;
  float fStack_120;
  undefined1 local_118 [56];
  undefined1 local_e0;
  undefined8 local_dc;
  undefined1 local_c0 [112];
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_208 = (undefined **)0x0;
  local_1f8 = (longlong *)0x0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  auStack_1f0[3] = 0;
  auStack_1f0[4] = 0;
  plStack_200 = (longlong *)0x1;
  auStack_1f0[0] = 0;
  auStack_1f0[1] = 0;
  auStack_1f0[2] = 0;
  uStack_1c0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  auStack_1f0[5] = 0;
  *(undefined4 *)(param_1 + 0x6f8) = 0;
  *(undefined4 *)(param_1 + 0x6e8) = 0;
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  *(undefined4 *)(param_1 + 0x6f0) = 1;
  *(undefined4 *)(param_1 + 0x6f4) = 0;
  FUN_1404e49fa(param_1 + 0x700,auStack_1f0);
  *(ulonglong *)(param_1 + 0x728) = auStack_1f0[5];
  *(undefined4 *)(param_1 + 0x730) = (undefined4)uStack_1c0;
  FUN_1404e49fa(param_1 + 0x738,&local_1b8);
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  if (auStack_1f0[3] != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_1415299c2;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30);
  if (((lVar5 == 0) || (*(longlong *)(lVar5 + 0x360) == 0)) || (lVar5 = FUN_1400f6f32(), lVar5 == 0)
     ) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x68);
  }
  if (((*(longlong *)(param_1 + 0x38) == 0) ||
      (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar6 == 0)) ||
     ((*(longlong *)(lVar6 + 0x360) == 0 ||
      ((lVar6 = FUN_1400f6f32(), lVar6 == 0 || (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 == 0)))))
     ) goto LAB_1415299c2;
  lVar7 = FUN_14130c5c8();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
     ((lVar5 == 0 ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
       != lVar7 + 0x30)))) goto LAB_1415299c2;
  plStack_200 = (longlong *)*param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    local_208 = &PTR_FUN_14a184370;
    local_1f8 = (longlong *)0x0;
    auStack_1f0[0] = (ulonglong)auStack_1f0[0]._1_7_ << 8;
    FUN_140b6e764(lVar5,local_214,&local_208);
    local_208 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[auStack_1f0[0] & 0xff])(&plStack_200);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_208 = &PTR_FUN_14a184370;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    auStack_1f0[0] = (ulonglong)auStack_1f0[0]._1_7_ << 8;
    local_1f8 = plVar3;
    FUN_140b6e764(lVar5,local_214,&local_208);
    local_208 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[auStack_1f0[0] & 0xff])(&plStack_200);
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
  FUN_14596ffb6(lVar6,&local_208,local_214);
  if (local_50 == '\x01') {
    *(undefined8 *)(param_1 + 0x6e8) = local_138;
    *(undefined4 *)(param_1 + 0x6f0) = local_130;
    *(int *)(param_1 + 0x6f4) = (int)local_12c;
    *(int *)(param_1 + 0x6f8) = (int)(fStack_120 * 100.0);
    FUN_1447715ec(param_1 + 0x700,local_118);
    *(undefined1 *)(param_1 + 0x728) = local_e0;
    *(undefined8 *)(param_1 + 0x72c) = local_dc;
    FUN_1447715ec(param_1 + 0x738,local_c0);
    lVar5 = *(longlong *)(param_1 + 0x38);
    if (lVar5 != 0) {
      uVar4 = *param_2;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
        lVar5 = FUN_14127ae7a(lVar5,uVar4);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        lVar5 = FUN_14127ae7a(lVar5,uVar4);
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
      if ((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x30), lVar6 != 0)) {
        if (DAT_14cbadd90 == 0) {
          local_230 = &local_210;
          local_210 = FUN_141030f22;
          local_220 = FUN_14081d0ea;
          local_228 = &LAB_1459f2e4c;
          local_238 = &LAB_148c39de3;
          local_240 = &LAB_1457a9eb2;
          local_248 = &DAT_149e063b2;
          local_250 = 0;
          local_258 = 0x10000004;
          local_260 = 0x10;
          local_268 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          lVar6 = *(longlong *)(lVar5 + 0x30);
          if (lVar6 == 0) goto LAB_141529cbc;
        }
        if ((((DAT_14cbadd90 != 0) && (lVar5 = *(longlong *)(lVar6 + 0x10), lVar5 != 0)) &&
            (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
           (*(longlong *)
             (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
            DAT_14cbadd90 + 0x30)) {
          lVar5 = *(longlong *)(lVar6 + 0x23e8);
          if (lVar5 == 0) {
            local_210 = *(code **)(lVar6 + 0x23d8);
            lVar5 = FUN_14050aea0();
            *(longlong *)(lVar6 + 0x23e8) = lVar5;
            if (lVar5 != 0) goto LAB_141529ca2;
            lVar6 = 0;
          }
          else {
LAB_141529ca2:
            lVar6 = *(longlong *)(lVar5 + 0x50);
            if ((lVar6 == 0) || (0xfffffffd < *(int *)(lVar5 + 0x58) - 1U)) goto LAB_141529cbc;
          }
          *(longlong *)(param_1 + 0x72c) = lVar6;
        }
      }
    }
  }
LAB_141529cbc:
  if (local_50 == '\x01') {
    FUN_141072d6a(&local_208);
  }
LAB_1415299c2:
  local_208 = (undefined **)0x0;
  plStack_200 = (longlong *)0x0;
  FUN_145829116(param_1,&local_208);
  plVar3 = plStack_200;
  if (plStack_200 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_200 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_200)(plStack_200);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141529d90 FUN_141529d90 body=996 status=ok
// SIG undefined FUN_141529d90(void)

int * FUN_141529d90(longlong *param_1,int *param_2,longlong *param_3,char *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  char cVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar19) {
      FUN_1447711aa(param_1,iVar19);
    }
    iVar22 = (int)param_1[5];
    if (iVar22 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar12 = iVar22 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    plVar16 = param_1 + 2;
    iVar15 = iVar22 + 1;
    iVar23 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar23 = iVar22;
    }
    if (iVar23 >> 5 == iVar12) {
      *(int *)(param_1 + 5) = iVar15;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar22) {
        if (iVar22 + 0x20U < 0xa0) {
          iVar15 = 0x80;
          iVar12 = iVar22;
        }
        else {
          uVar13 = iVar22 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar27 = 4;
            if (4 < uVar13) {
              uVar27 = uVar13;
            }
          }
          else {
            uVar27 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar17 = FUN_144a3809e(uVar27 << 2,0);
          iVar12 = (int)(uVar17 >> 2);
          iVar15 = -0x20;
          if ((int)uVar13 <= iVar12) {
            iVar15 = iVar12 << 5;
          }
          iVar12 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar15;
        FUN_1446efbd8(plVar16,iVar12);
        iVar15 = (int)param_1[5] + 1;
      }
      iVar12 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar12 = iVar15;
      }
      *(int *)(param_1 + 5) = iVar15;
      if (iVar15 % 0x20 != 0) {
        plVar21 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar21 = plVar16;
        }
        bVar14 = -(char)(iVar15 % 0x20);
        *(uint *)((longlong)plVar21 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar12 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar20 = (longlong)iVar19;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[4];
    }
    bVar14 = (byte)iVar22 & 0x1f;
    puVar3 = (uint *)((longlong)plVar16 + (longlong)(iVar23 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar19 = (int)param_1[6];
    lVar20 = (longlong)iVar19;
    iVar22 = *(int *)(*param_1 + 4 + lVar20 * 0x20);
    *(int *)(param_1 + 6) = iVar22;
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar22 * 0x20) = 0xffffffff;
    }
  }
  plVar16 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar16 = (longlong *)param_1[4];
  }
  iVar22 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar22 = iVar19;
  }
  puVar3 = (uint *)((longlong)plVar16 + (longlong)(iVar22 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar19 & 0x1f);
  lVar4 = *param_1;
  lVar20 = lVar20 * 0x20;
  puVar1 = (undefined4 *)(lVar4 + lVar20);
  puVar5 = (undefined4 *)*param_3;
  puVar6 = (undefined8 *)param_3[1];
  uVar8 = puVar5[1];
  uVar9 = puVar5[2];
  uVar10 = puVar5[3];
  puVar2 = (undefined4 *)(lVar4 + lVar20);
  *puVar2 = *puVar5;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  *(undefined8 *)(lVar4 + 0x10 + lVar20) = *puVar6;
  *(undefined4 *)(lVar4 + 0x18 + lVar20) = 0xffffffff;
  lVar7 = *(longlong *)(lVar4 + lVar20);
  lVar20 = *(longlong *)(lVar4 + 8 + lVar20);
  uVar13 = (uint)((ulonglong)lVar20 >> 0x10);
  uVar26 = (uint)lVar20 & 0xffff;
  uVar27 = (uint)((ulonglong)lVar7 >> 0x10);
  uVar25 = (uint)lVar7 & 0xffff;
  uVar27 = ((uint)lVar7 << 0x10 | uVar25) + (int)((ulonglong)lVar7 >> 0x20) +
           (uVar27 << 0x13 | uVar27 & 0xffff) + (uVar25 >> 4);
  uVar27 = (uVar27 >> 2) +
           ((uint)lVar20 << 0x10 | uVar26) + (int)((ulonglong)lVar20 >> 0x20) +
           (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar26 >> 4) + uVar27 * 0x40 + 0x9e3779b9 ^ uVar27;
  cVar18 = '\0';
  iVar22 = iVar19;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar22 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & uVar27) * 4);
    if (iVar22 != -1) {
      lVar4 = *param_1;
      do {
        lVar24 = (longlong)iVar22 * 0x20;
        puVar2 = (undefined4 *)(lVar4 + lVar24);
        if ((*(longlong *)(lVar4 + lVar24) == lVar7) &&
           (*(longlong *)(lVar4 + 8 + lVar24) == lVar20)) {
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
          uVar10 = puVar1[2];
          uVar11 = puVar1[3];
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          puVar2[2] = uVar10;
          puVar2[3] = uVar11;
          FUN_145ce4148(param_1,iVar19);
          cVar18 = '\x01';
          goto LAB_141529f77;
        }
        iVar22 = puVar2[6];
      } while (iVar22 != -1);
    }
    cVar18 = '\0';
    iVar22 = iVar19;
  }
LAB_141529f77:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar18;
  }
  if (cVar18 == '\0') {
    uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar13 < 4) {
      iVar19 = 1;
    }
    else {
      uVar17 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
      lVar20 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar19 = 1 << ((byte)lVar20 & 0x1f);
    }
    if (((int)uVar13 < 1) || (iVar19 <= (int)param_1[9])) {
      uVar27 = (int)param_1[9] - 1U & uVar27;
      puVar1[7] = uVar27;
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = param_1 + 7;
      }
      puVar1[6] = *(undefined4 *)
                   ((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar27) * 4
                   );
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = param_1 + 7;
      }
      *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar27) * 4) =
           iVar22;
    }
    else {
      *(int *)(param_1 + 9) = iVar19;
      FUN_14152a174(param_1);
    }
  }
  *param_2 = iVar22;
  return param_2;
}



// FUNCTION 14152a174 FUN_14152a174 body=742 status=ok
// SIG undefined FUN_14152a174(void)

void FUN_14152a174(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_98 [36];
  int local_74;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar13,4);
    if (0 < (int)uVar13) {
      uVar5 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar13 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_70 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_70 = local_68 & 0xffffffff;
      uVar16 = local_68 >> 0x20;
    }
    uVar13 = (uint)local_58;
    iVar17 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_74 = iVar12;
        lVar11 = *param_1;
        lVar10 = (longlong)iVar17 * 0x20;
        uVar3 = *(undefined8 *)(lVar11 + lVar10);
        uVar4 = *(undefined8 *)(lVar11 + 8 + lVar10);
        uVar5 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar7 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar6 = (uint)uVar3 & 0xffff;
        uVar6 = ((uint)uVar3 << 0x10 | uVar6) + (int)((ulonglong)uVar3 >> 0x20) +
                (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4);
        uVar7 = (uint)uVar4 & 0xffff;
        uVar9 = (longlong)
                (int)((uVar6 >> 2) +
                      ((uint)uVar4 << 0x10 | uVar7) + (int)((ulonglong)uVar4 >> 0x20) +
                      (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4) + uVar6 * 0x40 + 0x9e3779b9 ^
                     uVar6) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar9;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        uVar13 = ~(uint)uVar16 & uVar13;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar2 = (int)local_60[3];
        iVar17 = (int)local_70;
        lVar11 = (longlong)iVar17;
        uVar5 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar13;
        iVar12 = local_74;
        if (uVar5 == 0) {
          iVar14 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar14 = iVar2 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar15 = iVar14;
          if (iVar14 < iVar17) {
            iVar15 = iVar17;
          }
          if (iVar14 <= iVar17) break;
          lVar10 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar5 = *(uint *)((longlong)plVar8 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar5 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar15 - lVar11 == lVar10) goto LAB_14152a416;
          }
          local_70 = (ulonglong)(iVar17 + (int)lVar10 + 1);
          uVar13 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar9 = uVar16 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar17 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar2);
    }
  }
LAB_14152a416:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152a45c FUN_14152a45c body=365 status=ok
// SIG undefined FUN_14152a45c(void)

void FUN_14152a45c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_143d63a56(param_1,&local_50,param_2);
  lVar5 = *(longlong *)(param_2 + 0x150);
  if (lVar5 == 0) {
    uVar4 = FUN_14043db3a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x150) = lVar5;
  }
  plVar1 = (longlong *)(param_2 + 0x148);
  if (*(longlong *)(param_2 + 0x158) != 0) {
LAB_14152a53a:
    if (local_50 == (longlong *)0x0) {
      FUN_145bdd4a2(param_1,&local_48,param_2);
      if (DAT_14c950c29 == '\x01') {
        if (local_48 == (longlong *)0x0) goto LAB_14152a517;
        FUN_1456cec3c(local_48);
        local_50 = local_48;
      }
      else {
        local_50 = local_48;
        if (local_48 == (longlong *)0x0) goto LAB_14152a517;
      }
    }
    local_48 = plVar1;
    local_40 = &local_50;
    FUN_1457eafec(param_1 + 0x3a8,local_34);
    goto LAB_14152a517;
  }
  if ((lVar5 != 0) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_2 + 0x158) = lVar5;
        if (lVar5 != 0) goto LAB_14152a53a;
        goto LAB_14152a50f;
      }
    }
    *(undefined8 *)(param_2 + 0x158) = 0;
  }
LAB_14152a50f:
  if (local_50 != (longlong *)0x0) {
    FUN_14887ea90(param_1 + 0x3f8,&local_50);
  }
LAB_14152a517:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152a5ca FUN_14152a5ca body=57 status=ok
// SIG undefined FUN_14152a5ca(void)

void FUN_14152a5ca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a040 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a040 = FUN_140002ddd(FUN_1465249e6,uVar1,L"InventoryNamingStrategyDef");
  }
  return;
}



// FUNCTION 14152a604 FUN_14152a604 body=130 status=ok
// SIG undefined FUN_14152a604(void)

undefined4
FUN_14152a604(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_145f8f432(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152a688 FUN_14152a688 body=164 status=ok
// SIG undefined FUN_14152a688(void)

undefined4
FUN_14152a688(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_5[1];
  lVar2 = *param_5;
  local_48 = *param_2;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_14607bf80(param_1,lVar1,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152a72e FUN_14152a72e body=41 status=ok
// SIG undefined FUN_14152a72e(void)

void FUN_14152a72e(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 0x100;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_149ec77d0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 14152a758 FUN_14152a758 body=422 status=ok
// SIG undefined FUN_14152a758(void)

void FUN_14152a758(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x40;
        uVar8 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar2 + lVar6);
        *(uint *)(lVar2 + 0x3c + lVar6) = uVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x38 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14152a900 FUN_14152a900 body=141 status=ok
// SIG undefined FUN_14152a900(void)

void FUN_14152a900(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 0x14) < 0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    FUN_148af2980(param_2 + 8);
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  iVar1 = *(int *)(param_2 + 0x24);
  FUN_1414c13d6(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20));
  *(undefined4 *)(param_2 + 0x20) = 0;
  if ((iVar1 < 0) && (*(int *)(param_2 + 0x24) != 0)) {
    FUN_148af29b0(param_2 + 0x18,0);
  }
  iVar1 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
    FUN_148af28fa((longlong *)(param_1 + 0x70),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 14152a98e FUN_14152a98e body=572 status=ok
// SIG undefined FUN_14152a98e(void)

void FUN_14152a98e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    plVar2 = (longlong *)(param_1 + 0x28);
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x238) + 8);
  }
  plVar2 = (longlong *)*plVar2;
  if (plVar2 != (longlong *)0x0) {
    if (DAT_14cb907b8 == (longlong *)0x0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1489c8acb;
      local_60 = &LAB_146027b0e;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000006;
      local_80 = 8;
      local_88 = 0x128;
      FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
    }
    plVar1 = DAT_14cb907b8;
    lVar3 = DAT_14cb907b8[0x22];
    if (lVar3 == 0) {
      (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
      lVar3 = plVar1[0x22];
    }
    (**(code **)(*plVar2 + 0x188))(plVar2,1,*(undefined4 *)(lVar3 + 0x108));
    (**(code **)(*plVar2 + 0x188))(plVar2,2,*(undefined4 *)(lVar3 + 0x10c));
    (**(code **)(*plVar2 + 0x188))(plVar2,4,*(undefined4 *)(lVar3 + 0x110));
    (**(code **)(*plVar2 + 400))(plVar2,4,*(undefined4 *)(lVar3 + 0x114));
    (**(code **)(*plVar2 + 400))(plVar2,8,DAT_14cb927e0 + *(int *)(lVar3 + 0x118));
    (**(code **)(*plVar2 + 400))(plVar2,0x10,DAT_14cb927f8 + *(int *)(lVar3 + 0x11c));
    (**(code **)(*plVar2 + 400))(plVar2,0x200,DAT_14cb92810 + *(int *)(lVar3 + 0x120));
  }
  if (*(char *)(param_1 + 0xc9) == '\x01') {
    *(undefined1 *)(param_1 + 0x3e2) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  *(undefined1 *)(param_1 + 0xc9) = 1;
  FUN_1457a6a38(param_1 + 1000);
  FUN_1405afc0c(param_1,1);
  FUN_1459c30be(param_1);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_145d4bb0e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152abda FUN_14152abda body=309 status=ok
// SIG undefined FUN_14152abda(void)

undefined4 FUN_14152abda(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x20) != 0) || (*(int *)(param_1 + 0x28) != 0)) ||
     (cVar2 = FUN_140dd11c8(param_1), cVar2 != '\0')) {
    FUN_140844034(param_1);
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    if (DAT_14cb85860 == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      lVar5 = FUN_144837462(DAT_14cb85860,param_2);
      *(longlong *)(param_1 + 0x20) = lVar5;
      if (lVar5 != 0) {
        if (param_3 == 0) {
          *(undefined4 *)(param_1 + 0xa8) = 0;
          iVar3 = 0;
        }
        else {
          uVar1 = *(uint *)(param_3 + 0xc);
          *(uint *)(param_1 + 0xa8) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar5 = 0;
          }
          iVar3 = *(int *)(lVar5 + 0x10);
          if (*(int *)(lVar5 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            iVar6 = DAT_14c964868 + 1;
            bVar7 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar7) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
            }
            LOCK();
            iVar3 = *(int *)(lVar5 + 0x10);
            bVar7 = iVar3 == 0;
            if (bVar7) {
              *(int *)(lVar5 + 0x10) = iVar6;
              iVar3 = 0;
            }
            UNLOCK();
            if (bVar7) {
              iVar3 = iVar6;
            }
          }
        }
        *(int *)(param_1 + 0xac) = iVar3;
        *(undefined1 *)(param_1 + 0x78) = param_4;
        uVar4 = FUN_143dd34d4(param_1);
        goto LAB_14152ac19;
      }
    }
  }
  uVar4 = 0;
LAB_14152ac19:
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar4;
}



// FUNCTION 14152ad0f FUN_14152ad0f body=49 status=ok
// SIG undefined FUN_14152ad0f(void)

void FUN_14152ad0f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14152ad40 FUN_14152ad40 body=492 status=ok
// SIG undefined FUN_14152ad40(void)

void FUN_14152ad40(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
  }
  plVar7 = local_60;
  iVar16 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x18 + (longlong)iVar9 * 0x28);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_14152ae70;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_14152ae70:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152af2e FUN_14152af2e body=190 status=ok
// SIG undefined FUN_14152af2e(void)

longlong * FUN_14152af2e(longlong param_1,uint param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar3 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x210);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x1d0);
      iVar6 = iVar5;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar6 * 0x20) == param_2) goto LAB_14152afa6;
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + lVar3 + 0x18);
      } while (iVar6 != -1);
    }
  }
  plVar2 = (longlong *)FUN_1400b465c();
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_144a79464();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      return plVar2;
    }
  }
  return (longlong *)0x0;
  while (iVar5 = *(int *)(lVar4 + 0x18), iVar5 != -1) {
LAB_14152afa6:
    lVar4 = lVar3 + (longlong)iVar5 * 0x20;
    if (*(uint *)(lVar3 + (longlong)iVar5 * 0x20) == param_2) goto LAB_14152afbb;
  }
  lVar4 = 0;
LAB_14152afbb:
  plVar2 = (longlong *)(*(longlong *)(lVar4 + 8) + 0x10);
  if (plVar2 != param_3) {
    puVar1 = (undefined8 *)*plVar2;
    *plVar2 = *param_3;
    *param_3 = 0;
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014152afe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar2 = (longlong *)(**(code **)*puVar1)(puVar1,1);
      return plVar2;
    }
  }
  return plVar2;
}



// FUNCTION 14152afec FUN_14152afec body=289 status=ok
// SIG undefined FUN_14152afec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14152afec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f2ba8) {
    FUN_144b3d300(&DAT_14c9f2ba8);
    if (DAT_14c9f2ba8 == -1) {
      FUN_14152b10e();
      FUN_145ced172();
      FUN_140db5666(&DAT_14c9f2b00,0,&DAT_14c9f2a98,L"FLumenRadiosityIndirectArgsCS",
                    L"/Engine/Private/Lumen/Radiosity/LumenRadiosity.usf",
                    L"LumenRadiosityIndirectArgsCS",5,1,FUN_1471ed1c8,FUN_1471ed168,&LAB_1462db3e8,
                    &LAB_1471ed164,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f60c8);
      _DAT_14c9f2b00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d36332);
      _Init_thread_footer(&DAT_14c9f2ba8);
    }
  }
  return &DAT_14c9f2b00;
}



// FUNCTION 14152b10e FUN_14152b10e body=258 status=ok
// SIG undefined FUN_14152b10e(void)

void FUN_14152b10e(void)

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
              0x110) < DAT_14c9f6148) {
    FUN_144b3d300(&DAT_14c9f6148);
    if (DAT_14c9f6148 == -1) {
      FUN_145ced2bc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x14c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f60c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d580e5);
      _Init_thread_footer(&DAT_14c9f6148);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152b212 FUN_14152b212 body=226 status=ok
// SIG undefined FUN_14152b212(void)

longlong * FUN_14152b212(longlong *param_1)

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
  pcVar13 = FUN_1462dc3d0;
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



// FUNCTION 14152b2f6 FUN_14152b2f6 body=130 status=ok
// SIG undefined FUN_14152b2f6(void)

void FUN_14152b2f6(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149e16880;
  FUN_141286922();
  FUN_14275db78(param_1 + 0x13);
  FUN_14275db78(param_1 + 0x11);
  puVar2 = param_1 + 2;
  if ((undefined8 *)param_1[0xe] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0xe];
  }
  FUN_141286b11(puVar2,*(undefined4 *)(param_1 + 0xf));
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x00014152b360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14152b378 FUN_14152b378 body=577 status=ok
// SIG undefined FUN_14152b378(void)

void FUN_14152b378(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14016a17c();
  iVar8 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x84);
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  local_78 = param_1;
  if (*(int *)((longlong)param_2 + 0xc) != iVar8) {
    FUN_145cee4cc(param_2);
  }
  lVar13 = local_78;
  local_70 = local_78 + 0x60;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if (*(int *)(local_78 + 0x78) == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar8 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    iVar8 = *(int *)(lVar13 + 0x78);
  }
  lVar5 = local_60;
  iVar7 = (int)local_68;
  uVar16 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar14 = local_50;
  iVar2 = iVar8;
  if (local_58._4_4_ != iVar8 || local_60 != local_70) {
    do {
      local_7c = iVar2;
      uVar3 = *(undefined8 *)(*(longlong *)(lVar13 + 0x50) + 8 + (longlong)iVar6 * 0x18);
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
        FUN_148cf9160(param_2,iVar6);
        lVar13 = local_78;
        iVar8 = local_7c;
      }
      *(undefined8 *)(*param_2 + (longlong)iVar6 * 8) = uVar3;
      uVar16 = uVar16 & ~(uint)uVar15;
      lVar12 = *(longlong *)(lVar5 + 0x10);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        lVar12 = lVar5;
      }
      iVar2 = *(int *)(lVar5 + 0x18);
      lVar10 = (longlong)iVar7;
      uVar9 = *(uint *)(lVar12 + lVar10 * 4) & uVar16;
      if (uVar9 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar4 = iVar6;
        if (iVar6 < iVar7) {
          iVar4 = iVar7;
        }
        iVar8 = local_7c;
        if (iVar7 < iVar6) {
          lVar11 = 0;
          do {
            uVar9 = *(uint *)(lVar12 + lVar10 * 4 + 4 + lVar11 * 4);
            if (uVar9 != 0) {
              iVar7 = iVar7 + (int)lVar11 + 1;
              uVar16 = 0xffffffff;
              goto LAB_14152b4e9;
            }
            iVar14 = iVar14 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar4 - lVar10 != lVar11);
          uVar16 = 0xffffffff;
          iVar7 = iVar4;
        }
        iVar7 = iVar7 + 1;
        lVar13 = local_78;
        iVar6 = iVar2;
      }
      else {
LAB_14152b4e9:
        uVar15 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar6) {
          iVar6 = iVar2;
        }
      }
      iVar2 = local_7c;
    } while (iVar6 != iVar8 || lVar5 != local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14152b5ba FUN_14152b5ba body=281 status=ok
// SIG undefined FUN_14152b5ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14152b5ba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca50808) {
    FUN_144b3d300(&DAT_14ca50808);
    if (DAT_14ca50808 == -1) {
      FUN_145cee52c();
      FUN_140db5666(&DAT_14ca50760,0,&DAT_14ca506f8,L"FShadowProjectionPS5falsefalsefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472eedda,
                    FUN_1472eedb2,&LAB_1472eed66,&LAB_1472eed62,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca50760 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b0e);
      _Init_thread_footer(&DAT_14ca50808);
    }
  }
  return &DAT_14ca50760;
}



// FUNCTION 14152b6d4 FUN_14152b6d4 body=256 status=ok
// SIG undefined FUN_14152b6d4(void)

void FUN_14152b6d4(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_1 + 0x498);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x490);
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar6);
      if (lVar5 != 0) {
        FUN_140af95c6(lVar5,param_2);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 * 8 != lVar6);
  }
  FUN_1447e6dee(param_1,&local_40);
  if ((local_40 != 0) && (*(char *)(local_40 + 0x20) == '\x01')) {
    FUN_140e05982();
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((*(char *)(param_1 + 0x431) == '\x01') && (*(char *)(param_1 + 0x409) != '\0')) {
    *(undefined1 *)(param_1 + 0x409) = 0;
    FUN_140af93c2(param_1,3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152b7ec FUN_14152b7ec body=995 status=ok
// SIG undefined FUN_14152b7ec(void)

undefined8 *
FUN_14152b7ec(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  int local_4c;
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148ae0ff2();
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14b525b20;
  param_1[0x1b] = param_2;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  FUN_1413ebcfe(param_1 + 0x28,param_4);
  param_1[0x34] = 0;
  iVar2 = *(int *)(param_3 + 1);
  pvVar4 = (void *)*param_3;
  *(int *)(param_1 + 0x35) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x34,iVar2,0);
    memcpy((void *)param_1[0x34],pvVar4,(longlong)iVar2 * 2);
  }
  *(undefined8 *)((longlong)param_1 + 0x1b9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c1) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_14163838c(param_1 + 0x28);
  local_50 = *(int *)(param_1 + 0x35);
  lVar9 = (longlong)local_50;
  local_58 = (undefined8 *)0x0;
  pvVar4 = (void *)param_1[0x34];
  FUN_1446dd670(&local_58,(uint)(lVar9 == 0) + local_50 + 1,0);
  if (lVar9 != 0) {
    memcpy(local_58,pvVar4,lVar9 * 2);
  }
  FUN_1400020e8(&local_58,&DAT_149e01f60,1);
  iVar6 = local_4c;
  iVar2 = local_50;
  if (local_50 < 2) {
    local_48 = (undefined8 *)0x0;
    uVar3 = *(uint *)(param_4 + 0x18);
    pvVar4 = *(void **)(param_4 + 0x10);
    local_40 = CONCAT44(local_40._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      local_40 = (ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&local_48,uVar3,0);
      memcpy(local_48,pvVar4,(longlong)(int)uVar3 * 2);
    }
  }
  else {
    iVar8 = *(int *)(param_4 + 0x18) + -1;
    if (*(int *)(param_4 + 0x18) == 0) {
      iVar8 = 0;
    }
    local_48 = local_58;
    local_58 = (undefined8 *)0x0;
    local_40 = CONCAT44(local_4c,local_50);
    local_50 = 0;
    local_4c = 0;
    iVar1 = iVar8 + iVar2;
    if (iVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar8);
    }
    if (iVar6 < iVar1) {
      FUN_1446f8c06(&local_48);
    }
    FUN_1400020e8(&local_48,*(undefined8 *)(param_4 + 0x10),iVar8);
  }
  if ((undefined8 **)(param_1 + 0x36) == &local_48) {
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((undefined8 *)param_1[0x36] != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    param_1[0x36] = local_48;
    local_48 = (undefined8 *)0x0;
    *(int *)(param_1 + 0x37) = (int)local_40;
    *(undefined4 *)((longlong)param_1 + 0x1bc) = local_40._4_4_;
    local_40 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14cb99c48 == (undefined8 *)0x0) {
    DAT_14cb99c48 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *DAT_14cb99c48 = 0;
    DAT_14cb99c48[1] = 0;
    DAT_14cb99c48[2] = 2;
  }
  puVar5 = DAT_14cb99c48;
  local_48 = (undefined8 *)0x0;
  local_40 = local_40 & 0xffffffff00000000;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40._0_4_ = 2;
  *local_48 = &PTR_LAB_14b526be0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_48[2] = lVar7;
  *local_48 = &PTR_FUN_14b526f70;
  local_48[3] = param_1;
  FUN_1458ca76a(puVar5,&local_58,&local_48);
  if ((int)local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_14152bb2a;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40._0_4_ = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14152bb2a:
  param_1[0x38] = local_58;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152bbd0 FUN_14152bbd0 body=140 status=ok
// SIG undefined FUN_14152bbd0(void)

longlong FUN_14152bbd0(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1408f471e(param_1,param_2,&DAT_14cbf4b18);
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x68;
    if (lVar3 + lVar2 != 0) goto LAB_14152bc10;
  }
  local_30 = &DAT_14cbf4b18;
  FUN_145cf02c2(param_1,&local_24,param_2 & 0xffffffff);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x68;
LAB_14152bc10:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152bc5d FUN_14152bc5d body=90 status=ok
// SIG undefined FUN_14152bc5d(void)

undefined8 FUN_14152bc5d(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (0 < (longlong)*(int *)(param_2 + 0x2b8)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + lVar3);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x200) == param_3)) goto LAB_14152bcaf;
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(param_2 + 0x2b8) * 0x10 != lVar3);
  }
  lVar3 = FUN_14375e0d4(param_1,param_2,param_4,param_3);
  uVar2 = 1;
  if (lVar3 == 0) {
LAB_14152bcaf:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14152bcb8 FUN_14152bcb8 body=112 status=ok
// SIG undefined FUN_14152bcb8(void)

undefined8 *
FUN_14152bcb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 0xb0))(DAT_14c8407a8,param_2,param_3,param_4,param_5);
  FUN_14078dc50(param_1,uVar1);
  *param_1 = &PTR_FUN_149e002c8;
  return param_1;
}



// FUNCTION 14152bd28 FUN_14152bd28 body=492 status=ok
// SIG undefined FUN_14152bd28(void)

undefined8 FUN_14152bd28(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cb1c498 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147e36893;
      local_50 = FUN_146420564;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
    }
    lVar1 = (**(code **)(*param_1 + 0x288))(param_1,DAT_14cb1c498);
    if (lVar1 != 0) {
      if (DAT_14cb1c498 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147e36893;
        local_50 = FUN_146420564;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
      }
      lVar2 = FUN_144718840(lVar1,DAT_14cb1c498);
      if ((lVar1 != lVar2) && (lVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152bf62 FUN_14152bf62 body=502 status=ok
// SIG undefined FUN_14152bf62(void)

void FUN_14152bf62(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b0fdd50;
  if (((param_1[0xb] != 0) && (param_1[0xc] != 0)) && (0 < *(int *)(param_1[0xc] + 8))) {
    FUN_1401cb356();
    local_20 = param_1[0xb];
    local_18 = param_1[0xc];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar4 = (longlong *)param_1[0xc];
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  if (((param_1[0xf] != 0) && (param_1[0x10] != 0)) && (0 < *(int *)(param_1[0x10] + 8))) {
    FUN_1401cb356();
    local_20 = param_1[0xf];
    local_18 = param_1[0x10];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar4 = (longlong *)param_1[0x10];
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  if (((param_1[6] != 0) && (*(int *)((longlong)param_1 + 0x4c) != 0)) &&
     ((uVar2 = *(uint *)(param_1 + 9), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)))) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0x4c))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      FUN_14480f766(lVar3 + 0x2b8);
    }
  }
  param_1[6] = 0;
  FUN_14881c5d3(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x10];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_140f80905(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0xc];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_144760e82(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152c15a FUN_14152c15a body=534 status=ok
// SIG undefined FUN_14152c15a(void)

undefined8 * FUN_14152c15a(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b5dc110;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x451c4000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xf00000d0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x4fc71eb4;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x4fc71eb4;
  param_1[0x1a] = 0;
  lVar1 = -0xcc0;
  do {
    FUN_140a03062((longlong)param_1 + lVar1 + 0xda0);
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xfb0) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xfb8) = 0;
    lVar1 = lVar1 + 0x220;
  } while (lVar1 != 0);
  puVar2 = param_1 + 0x1b4;
  lVar1 = 0xcc0;
  do {
    FUN_140a03062(puVar2);
    puVar2[0x42] = 0;
    puVar2[0x43] = 0;
    puVar2 = puVar2 + 0x44;
    lVar1 = lVar1 + -0x220;
  } while (lVar1 != 0);
  param_1[0x34c] = 0;
  param_1[0x34d] = 0;
  param_1[0x34e] = 0;
  *(undefined4 *)(param_1 + 0x34f) = 0x4fc71eb4;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x351) = 0x41200000;
  *(undefined2 *)(param_1 + 0x355) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1aaa) = 1;
  *(undefined2 *)(param_1 + 0x356) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ab4) = 0;
  param_1[0x358] = 0;
  param_1[0x359] = 0;
  *(undefined4 *)(param_1 + 0x35a) = 0;
  param_1[0x35b] = 0;
  param_1[0x35c] = 0;
  *(undefined1 *)(param_1 + 0x35d) = 0;
  FUN_1446f470e(&local_38,L"L_Foot",1);
  param_1[0x14] = local_38;
  FUN_1446f470e(&local_38,L"Root",1);
  param_1[0x34c] = local_38;
  FUN_1446f470e(&local_38,L"Speed",1);
  param_1[0x34d] = local_38;
  *(undefined8 *)((longlong)param_1 + 0x1a8c) = 0x40e00000432f0000;
  *(undefined8 *)((longlong)param_1 + 0x1a94) = 0xbf3504f342340000;
  *(undefined8 *)((longlong)param_1 + 0x1a9c) = 0x4334000042c80000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xc2b40000;
  *(undefined4 *)(param_1 + 0x13) = 0x43340000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x42b40000;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152c372 FUN_14152c372 body=226 status=ok
// SIG undefined FUN_14152c372(void)

longlong * FUN_14152c372(longlong *param_1)

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
  pcVar13 = FUN_145dd969c;
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



// FUNCTION 14152c456 FUN_14152c456 body=1024 status=ok
// SIG undefined FUN_14152c456(void)

void FUN_14152c456(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  void *_Src;
  bool bVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar17;
  longlong lVar18;
  float fVar19;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((char)param_3 != '\0') {
    FUN_140df9946(param_2,&local_80);
    plVar12 = local_78;
    if (local_78 == (longlong *)0x0) {
      local_a0 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
      local_a0 = local_78;
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
    }
    local_a8 = local_80;
    uVar8 = (**(code **)(*local_80 + 0x40))();
    iVar9 = FUN_14152c858(param_1 + 6,uVar8,&local_a8);
    plVar1 = local_a0;
    if (iVar9 == -1) {
      lVar18 = 0;
    }
    else {
      lVar18 = (longlong)iVar9 * 0x28 + param_1[6];
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_a0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    plVar1 = local_78;
    plVar12 = (longlong *)(lVar18 + 0x10);
    if (lVar18 == 0) {
      plVar12 = (longlong *)0x0;
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_78 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if ((plVar12 != (longlong *)0x0) && (lVar18 = *param_4, lVar18 != 0)) {
      uVar4 = *(uint *)(plVar12 + 1);
      local_78 = (longlong *)(lVar18 + 0x18);
      local_80 = (longlong *)&DAT_100000000;
      local_70 = 0xffffffff;
      local_68 = 0;
      if (*(int *)(lVar18 + 0x30) != 0) {
        FUN_1449c0562(&local_80);
      }
      local_90 = local_70;
      uVar7 = local_90;
      local_88 = local_68;
      local_84 = local_64;
      local_a0 = local_80;
      local_98 = local_78;
      local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
      bVar6 = local_90._4_4_ < (int)local_78[3];
      iVar9 = local_90._4_4_;
      local_a8 = (longlong *)(lVar18 + 8);
      local_90 = uVar7;
      if (bVar6) {
        do {
          local_80 = (longlong *)0x0;
          uVar5 = *(uint *)(*local_a8 + 8 + (longlong)iVar9 * 0x38);
          _Src = *(void **)(*local_a8 + (longlong)iVar9 * 0x38);
          local_78 = (longlong *)CONCAT44(local_78._4_4_,uVar5);
          if ((longlong)(int)uVar5 == 0) {
            local_78 = (longlong *)(ulonglong)uVar5;
          }
          else {
            FUN_1446dd670(&local_80,uVar5,0);
            memcpy(local_80,_Src,(longlong)(int)uVar5 * 2);
          }
          if (0 < (int)uVar4) {
            lVar18 = *plVar12;
            uVar10 = 0;
            do {
              lVar11 = uVar10 * 0x20;
              iVar9 = *(int *)(lVar18 + 8 + lVar11);
              if (iVar9 == (int)local_78) {
                if (1 < iVar9) {
                  lVar15 = 0;
                  while( true ) {
                    uVar13 = *(ushort *)(*(longlong *)(lVar18 + lVar11) + lVar15);
                    uVar14 = (ulonglong)uVar13;
                    uVar16 = *(ushort *)((longlong)local_80 + lVar15);
                    if (uVar13 != uVar16) break;
                    if (uVar13 == 0) goto LAB_14152c6b7;
LAB_14152c68a:
                    lVar15 = lVar15 + 2;
                  }
                  if ((uVar16 | uVar13) < 0x80) {
                    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                    uVar17 = (ulonglong)uVar16;
                    uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
                    if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar17]) goto LAB_14152c68a;
                  }
                  if (uVar13 != uVar16) goto LAB_14152c6fa;
                }
LAB_14152c6b7:
                if (*(char *)(*local_a8 + 0x10 + (longlong)local_90._4_4_ * 0x38) == '\a') {
                  fVar19 = *(float *)(*local_a8 + 0x18 + (longlong)local_90._4_4_ * 0x38);
                  if (0.0 < fVar19) {
                    *(double *)(lVar18 + 0x10 + lVar11) = (double)fVar19;
                    lVar18 = *plVar12;
                  }
                }
                else {
                  fVar19 = 0.0;
                }
                if (*(float *)(lVar18 + 0x1c + lVar11) <= fVar19) {
                  (**(code **)(*param_1 + 0x50))(param_1,param_2);
                  break;
                }
              }
              else if ((int)local_78 + iVar9 == 1) goto LAB_14152c6b7;
LAB_14152c6fa:
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar4);
          }
          if (local_80 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
          FUN_1449c0562(&local_a0);
          bVar6 = local_90._4_4_ < (int)local_98[3];
          iVar9 = local_90._4_4_;
        } while (bVar6);
      }
    }
  }
  if (((int)param_5[1] != 0) && (param_5 = (longlong *)*param_5, param_5 != (longlong *)0x0)) {
    (**(code **)(*param_5 + 0x60))(param_5,param_2,param_3);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14152c858 FUN_14152c858 body=187 status=ok
// SIG undefined FUN_14152c858(void)

int FUN_14152c858(longlong *param_1,uint param_2,longlong *param_3)

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



// FUNCTION 14152c913 FUN_14152c913 body=97 status=ok
// SIG undefined FUN_14152c913(void)

undefined8 * FUN_14152c913(undefined8 *param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  local_18 = &local_28;
  local_20 = FUN_143efd7ea;
  local_28 = param_1;
  bifrost::sessions::serviceName(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152c975 FUN_14152c975 body=414 status=ok
// SIG undefined FUN_14152c975(void)

longlong FUN_14152c975(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = (undefined2 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  lVar11 = (longlong)iVar2;
  if (lVar11 != 0) {
    uVar8 = 0;
    do {
      if (*(short *)((longlong)puVar3 + uVar8) == 0x2e) {
        if ((int)(~uVar8 >> 1) != 0) goto LAB_14152ca42;
        break;
      }
      uVar8 = uVar8 + 2;
    } while (lVar11 * 2 != uVar8);
  }
  uVar8 = lVar11 * 2;
  do {
    if (uVar8 == 0) goto LAB_14152ca42;
    uVar1 = uVar8 - 2;
    lVar11 = uVar8 - 2;
    uVar8 = uVar1;
  } while (*(short *)((longlong)puVar3 + lVar11) != 0x2f);
  iVar6 = (int)(uVar1 >> 1);
  if (iVar6 != -1) {
    uVar7 = iVar6 + 1;
    if (iVar2 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar10 = iVar2 - 1;
    if (iVar2 == 0) {
      uVar10 = 0;
    }
    if ((int)uVar10 <= (int)uVar7) {
      uVar7 = uVar10;
    }
    uVar8 = (ulonglong)uVar7;
    if ((int)uVar7 < 1) {
      uVar8 = 0;
    }
    FUN_14006620a(&local_30,puVar3 + uVar8,uVar10 - (int)uVar8);
    FUN_140002184(param_1,0x2e);
    iVar2 = local_28 + -1;
    if (local_28 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_1,local_30,iVar2);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
LAB_14152ca42:
  plVar4 = (longlong *)FUN_144a79692();
  if (plVar4[0x22] == 0) {
    (**(code **)(*plVar4 + 1000))();
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  uVar5 = FUN_144a79692();
  local_40 = 0;
  local_50 = 0;
  local_48 = 1;
  local_58 = 0;
  lVar11 = FUN_1412ecd05(uVar5,0,puVar3,0);
  if (lVar11 != 0) {
    uVar7 = *(uint *)(lVar11 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    FUN_1447f71cc(lVar9,0x40000000);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar11;
}



// FUNCTION 14152cb14 FUN_14152cb14 body=3309 status=ok
// SIG undefined FUN_14152cb14(void)

void FUN_14152cb14(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  int *_Src;
  undefined8 *puVar7;
  undefined4 *_Src_00;
  undefined1 *_Src_01;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined1 *local_168;
  code *local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_14152cc11;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_14152cc11:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_14152cce7;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_14152cce7:
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_50);
            goto LAB_14152cdbd;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
LAB_14152cdbd:
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_160 = FUN_1405ebbb2;
      local_168 = &DAT_14c9520b8;
      local_170 = 0;
      local_178 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_54);
            goto LAB_14152ce92;
          }
        }
        _Src_00 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_54) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_54,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_54,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_54,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_54,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
LAB_14152ce92:
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_14067a048;
      local_170 = 0;
      local_178 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_14152cf65;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_14152cf65:
  iVar5 = local_58;
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_158);
            goto LAB_14152d03c;
          }
        }
        _Src_01 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_01 != local_158) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_158,_Src_01,(int)plVar1[6]);
          }
          else {
            memcpy(local_158,_Src_01,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_158,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_158,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
LAB_14152d03c:
  local_168 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_168 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_170 = CONCAT71(local_170._1_7_,iVar5 != 0);
  local_178 = CONCAT44(local_178._4_4_,local_54);
  FUN_14152d802(param_1,local_40,local_48,local_50);
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152d802 FUN_14152d802 body=438 status=ok
// SIG undefined FUN_14152d802(void)

void FUN_14152d802(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x178) == '\x03') &&
     (cVar2 = FUN_1418dfc56(), param_3 != 0 && cVar2 == '\x01')) {
    lVar4 = FUN_140ebc504();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      cVar2 = FUN_145902652(param_1,param_3);
      if (cVar2 == '\0') {
        local_28 = param_3;
        FUN_1447cd2ec(param_1 + 0x2640);
      }
      else if ((((((*(int *)(param_1 + 0x27a4) == 0) ||
                  (uVar1 = *(uint *)(param_1 + 0x27a0), (int)uVar1 < 0)) ||
                 (DAT_14c9647dc <= (int)uVar1)) ||
                ((lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0
                 || (*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x27a4))))) ||
               ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)) &&
              ((lVar4 = *(longlong *)(param_1 + 0x27b0), lVar4 == 0 ||
               (((*(longlong *)(lVar4 + 0x330) == 0 || (cVar2 = FUN_14641b224(), cVar2 != '\0')) &&
                (*(char *)(lVar4 + 0x340) == '\0')))))) {
        *(undefined1 *)(param_1 + 0x27a8) = 0;
        uVar1 = *(uint *)(param_3 + 0xc);
        *(uint *)(param_1 + 0x27a0) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        iVar3 = *(int *)(lVar4 + 0x10);
        if (*(int *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar6 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar6) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar5);
          }
          LOCK();
          iVar3 = *(int *)(lVar4 + 0x10);
          bVar6 = iVar3 == 0;
          if (bVar6) {
            *(int *)(lVar4 + 0x10) = iVar5;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar6) {
            iVar3 = iVar5;
          }
        }
        *(int *)(param_1 + 0x27a4) = iVar3;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14152d9c8 FUN_14152d9c8 body=99 status=ok
// SIG undefined FUN_14152d9c8(void)

void FUN_14152d9c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0e7580;
  FUN_144801c4e(param_1[0x17c],*(undefined4 *)(param_1 + 0x17d));
  if (param_1[0x17c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x178] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x176) == '\x01') {
    *(undefined1 *)(param_1 + 0x176) = 0;
  }
  FUN_140998e52(param_1);
  return;
}



// FUNCTION 14152da2c FUN_14152da2c body=481 status=ok
// SIG undefined FUN_14152da2c(void)

void FUN_14152da2c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar15 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  lVar6 = local_60;
  iVar7 = *(int *)(local_60 + 0x18);
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < iVar7) {
    do {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 8 + (longlong)iVar9 * 0x18);
      if (lVar10 != 0) {
        if (*(undefined8 **)(lVar10 + 0x20) != (undefined8 *)0x0) {
          **(undefined8 **)(lVar10 + 0x20) = 0;
        }
        plVar4 = *(longlong **)(lVar10 + 0x28);
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
        FUN_1400020a8(lVar10);
        iVar7 = *(int *)(lVar6 + 0x18);
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      lVar10 = *(longlong *)(lVar6 + 0x10);
      if (*(longlong *)(lVar6 + 0x10) == 0) {
        lVar10 = lVar6;
      }
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)(lVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar9 = iVar7 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar5 = iVar9;
        if (iVar9 < iVar16) {
          iVar5 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)(lVar10 + lVar13 * 4 + 4 + lVar11 * 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar5 - lVar13 == lVar11) goto LAB_14152db6b;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar3 = uVar15 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar7);
  }
LAB_14152db6b:
  FUN_145cfc86e((longlong *)(param_1 + 8),0);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152dc0e FUN_14152dc0e body=598 status=ok
// SIG undefined FUN_14152dc0e(void)

void FUN_14152dc0e(longlong *param_1)

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
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_14152de17;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_14152de17:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152de66 FUN_14152de66 body=113 status=ok
// SIG undefined FUN_14152de66(void)

void FUN_14152de66(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,8);
  }
  return;
}



// FUNCTION 14152ded8 FUN_14152ded8 body=120 status=ok
// SIG undefined FUN_14152ded8(void)

void FUN_14152ded8(longlong param_1,longlong *param_2,char param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14581b97a(param_1,param_5);
  if (param_3 != '\0') {
    (**(code **)(*param_2 + 0x10))(param_2,&local_38);
    FUN_141074256(param_1 + 0x18,param_5,local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152df52 FUN_14152df52 body=120 status=ok
// SIG undefined FUN_14152df52(void)

void FUN_14152df52(longlong param_1,longlong *param_2,char param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14581b86c(param_1,param_5);
  if (param_3 != '\0') {
    (**(code **)(*param_2 + 0x10))(param_2,&local_38);
    FUN_141074256(param_1 + 0x18,param_5,local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152dfcc FUN_14152dfcc body=298 status=ok
// SIG undefined FUN_14152dfcc(void)

undefined8 FUN_14152dfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b968bc0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b97da70;
  local_38[3] = param_3;
  local_38[4] = FUN_1441a719c;
  FUN_145b00ea0(param_1,param_2,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_14152e0b8;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14152e0b8:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152e0f7 FUN_14152e0f7 body=208 status=ok
// SIG undefined FUN_14152e0f7(void)

undefined8 FUN_14152e0f7(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auStack_158 [40];
  undefined1 local_130 [256];
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = *param_2;
  local_30 = 0;
  if (lVar1 == 0) {
    local_28 = 0;
    local_20 = 0;
  }
  else {
    uVar2 = (int)param_2[1] - (int)lVar1;
    if ((int)uVar2 < 1) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)(lVar1 + (ulonglong)(uVar2 - 1)) == '\0';
      if (bVar3) {
        uVar2 = uVar2 - 1;
      }
    }
    FUN_1446e6fe8(local_130,lVar1,uVar2,bVar3);
  }
  FUN_1400089be(param_1,local_20,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152e1c8 FUN_14152e1c8 body=116 status=ok
// SIG undefined FUN_14152e1c8(void)

void FUN_14152e1c8(longlong *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    LOCK();
    plVar1 = param_1 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*param_1 + 0x10))(param_1);
      param_1[1] = 0;
      param_1[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(param_1 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if ((uVar4 & 0xfffffffc0000000) == 0x40000000) {
                    /* WARNING: Could not recover jumptable at 0x00014152e232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*param_1)(param_1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14152e23c FUN_14152e23c body=542 status=ok
// SIG undefined FUN_14152e23c(void)

void FUN_14152e23c(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined1 *local_c4;
  undefined1 *puStack_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_2 + 0x10) == '\0') {
    if ((longlong)*(int *)(param_1 + 0x50) != 0) {
      puVar1 = *(undefined8 **)(param_1 + 0x48);
      puVar2 = (undefined8 *)((longlong)puVar1 + (longlong)*(int *)(param_1 + 0x50) * 0x24);
      do {
        local_d8 = 0;
        uStack_d0 = 0;
        uStack_e0 = 0;
        local_c4 = &DAT_3f8000003f800000;
        puStack_bc = &DAT_3f8000003f800000;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        lStack_80 = 0;
        local_78 = 0;
        lStack_70 = 0;
        local_68 = 0;
        local_e8 = *puVar1;
        local_c8 = 2;
        local_b4 = *(undefined4 *)(puVar1 + 2);
        FUN_143dd273c(param_1,&local_e8);
        if (lStack_70 != 0) {
          FUN_1400020a8();
        }
        if (lStack_80 != 0) {
          FUN_1400020a8();
        }
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        puVar1 = (undefined8 *)((longlong)puVar1 + 0x24);
      } while (puVar1 != puVar2);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x54) != 0) {
      FUN_1417e0304(param_1 + 0x48,0);
    }
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x38);
      puVar1 = puVar2 + (longlong)*(int *)(param_1 + 0x40) * 6;
      do {
        local_d8 = 0;
        uStack_d0 = 0;
        uStack_e0 = 0;
        local_b4 = 0;
        local_88 = 0;
        lStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_78 = 0;
        local_e8 = *puVar2;
        lStack_70 = 0;
        local_68 = 0;
        local_c8 = 1;
        local_c4 = (undefined1 *)puVar2[2];
        puStack_bc = (undefined1 *)puVar2[3];
        FUN_143dd273c(param_1,&local_e8);
        if (lStack_70 != 0) {
          FUN_1400020a8();
        }
        if (lStack_80 != 0) {
          FUN_1400020a8();
        }
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        puVar2 = puVar2 + 6;
      } while (puVar2 != puVar1);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_1417e0376(param_1 + 0x38,0);
    }
  }
  FUN_143dd2aa6(param_1);
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152e45c FUN_14152e45c body=289 status=ok
// SIG undefined FUN_14152e45c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14152e45c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb50528) {
    FUN_144b3d300(&DAT_14cb50528);
    if (DAT_14cb50528 == -1) {
      FUN_14152e57e();
      FUN_145d035b6();
      FUN_140db5666(&DAT_14cb50480,0,&DAT_14cb50418,L"FAdvectVelocitysCS",
                    L"/GbxWindShaders/AdvectVelocity.usf",L"AdvectVelocity",5,1,FUN_1485ec530,
                    FUN_1485ec4d0,&LAB_1485ec4cc,&LAB_1485ec4c8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb50ba0);
      _DAT_14cb50480 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143beeba1);
      _Init_thread_footer(&DAT_14cb50528);
    }
  }
  return &DAT_14cb50480;
}



// FUNCTION 14152e57e FUN_14152e57e body=258 status=ok
// SIG undefined FUN_14152e57e(void)

void FUN_14152e57e(void)

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
              0x110) < DAT_14cb50c20) {
    FUN_144b3d300(&DAT_14cb50c20);
    if (DAT_14cb50c20 == -1) {
      FUN_145d03700(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x2f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb50ba0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143bf2df2);
      _Init_thread_footer(&DAT_14cb50c20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152e682 FUN_14152e682 body=1074 status=ok
// SIG undefined FUN_14152e682(void)

void FUN_14152e682(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  byte *pbVar3;
  char *_Str;
  void *_Src;
  char cVar4;
  uint uVar5;
  size_t sVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  char *pcVar19;
  undefined1 auStack_c8 [32];
  char *local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  char *local_90;
  byte *local_88;
  longlong *plStack_80;
  void *local_78;
  ulonglong uStack_70;
  ulonglong *local_68;
  char **local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = *param_2;
  if ((uVar7 == 0) || ((int)param_1[0x65] == *(int *)((longlong)param_1 + 0x354))) {
LAB_14152e764:
    pcVar19 = (char *)0x0;
  }
  else {
    uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar9 = param_1 + 0x6b;
    if ((longlong *)param_1[0x6c] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[0x6c];
    }
    iVar11 = *(int *)((longlong)plVar9 +
                     (ulonglong)((int)param_1[0x6d] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar11 == -1) goto LAB_14152e764;
    pcVar19 = (char *)0x0;
    do {
      puVar2 = (ulonglong *)(param_1[100] + (longlong)iVar11 * 0x28);
      if (*puVar2 == uVar7) {
        if (puVar2 + 1 == (ulonglong *)0x0 || puVar2 == (ulonglong *)0x0) goto LAB_14152e764;
        pcVar19 = (char *)puVar2[1];
        FUN_1470a4e30();
        break;
      }
      iVar11 = (int)puVar2[4];
    } while (iVar11 != -1);
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  cVar4 = (**(code **)(*param_1 + 0x418))(param_1,&local_78,param_3,param_3);
  if (cVar4 == '\0') goto LAB_14152e92a;
  local_88 = (byte *)0x0;
  plStack_80 = (longlong *)0x0;
  cVar4 = FUN_1446e9750(param_1,&local_88,&local_78,0);
  if (cVar4 != '\0') {
    if (local_88 != (byte *)0x0) {
      if ((*local_88 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(local_88 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar12 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar9[9];
        }
        iVar11 = *(int *)((longlong)plVar12 +
                         (ulonglong)((int)plVar9[10] - 1U & *(uint *)(param_1 + 0x5a)) * 4);
        if (iVar11 != -1) {
          do {
            lVar18 = *plVar9 + (longlong)iVar11 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar11 * 0x40) == *(uint *)(param_1 + 0x5a)) {
              if ((((lVar18 != 0) &&
                   (puVar10 = (undefined8 *)(lVar18 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
              goto LAB_14152e83a;
              break;
            }
            iVar11 = *(int *)(lVar18 + 0x38);
          } while (iVar11 != -1);
        }
      }
    }
    puVar10 = &DAT_14c9a1308;
LAB_14152e83a:
    pbVar3 = (byte *)*puVar10;
    if (((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) ||
       (_Str = *(char **)(pbVar3 + 8), _Str == (char *)0x0)) {
LAB_14152e842:
      uVar7 = 0;
      uVar15 = 0;
    }
    else {
      sVar6 = strlen(_Str);
      uVar5 = (uint)sVar6;
      if (uVar5 == 0) goto LAB_14152e842;
      lVar18 = (longlong)(int)uVar5;
      pcVar13 = _Str + lVar18 + -1;
      uVar8 = 0;
      if (pcVar13 < _Str) {
        lVar17 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar13 - 0x30U)) break;
          uVar8 = uVar8 + 1;
          pcVar13 = pcVar13 + -1;
        } while (_Str <= pcVar13);
        lVar17 = 0;
        if (((uVar8 != 0) && ((int)uVar8 < (int)uVar5)) &&
           ((lVar17 = 0, uVar8 < 0xb &&
            (lVar14 = -(ulonglong)uVar8, _Str[lVar14 + lVar18 + -1] == '_')))) {
          if ((uVar8 == 1) || (_Str[lVar14 + lVar18] != '0')) {
            lVar16 = 0;
            do {
              lVar17 = (longlong)_Str[lVar14 + lVar18] + lVar16 * 10;
              lVar16 = lVar17 + -0x30;
              lVar14 = lVar14 + 1;
            } while (lVar14 != 0);
            if (lVar16 < 0x7fffffff) {
              uVar5 = ~uVar8 + uVar5;
              lVar17 = lVar17 + -0x2f;
              goto LAB_14152e8a9;
            }
          }
          lVar17 = 0;
        }
LAB_14152e8a9:
        if (uVar5 == 0) goto LAB_14152e842;
      }
      local_a0._0_5_ = (uint5)uVar5;
      local_a8 = _Str;
      uVar5 = FUN_14001a6c0(&local_a8,1);
      uVar15 = lVar17 << 0x20;
      uVar7 = (ulonglong)uVar5;
    }
    local_90 = (char *)(uVar7 | uVar15);
    if ((*param_2 == 0) || (local_90 != pcVar19)) {
      uVar7 = (**(code **)(*param_1 + 0x428))(param_1,&local_90);
      *param_2 = uVar7;
      pcVar19 = local_90;
      if (uVar7 == 0) goto LAB_14152e903;
    }
    else {
      (**(code **)(*param_1 + 0x438))(param_1);
      if ((param_3 != 0) && (*(longlong *)(param_3 + 0x30) != 0)) {
        FUN_1407d81de(*(longlong *)(param_3 + 0x30) + 8,param_3);
      }
    }
    _Src = local_78;
    local_a0 = (void *)0x0;
    lVar18 = (longlong)(int)uStack_70;
    local_98 = (int)uStack_70;
    local_a8 = pcVar19;
    if (lVar18 == 0) {
      local_94 = 0;
    }
    else {
      FUN_14012afbc(&local_a0,uStack_70 & 0xffffffff,0);
      memcpy(local_a0,_Src,lVar18 << 3);
    }
    local_60 = &local_a8;
    local_68 = param_2;
    FUN_145972aec(param_1 + 100,local_54);
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*param_1 + 0x440))(param_1,*param_2,&local_88);
  }
LAB_14152e903:
  plVar9 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_80 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_14152e92a:
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14152eab6 FUN_14152eab6 body=286 status=ok
// SIG undefined FUN_14152eab6(void)

void FUN_14152eab6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if (*(uint *)(param_2 + 1) < 2) {
    FUN_140b7fa98(&DAT_14c83e158,param_1);
  }
  else {
    iVar1 = *(int *)(param_1 + 1);
    uVar5 = 0;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (0 < iVar4) {
      if (iVar1 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = (undefined2 *)*param_1;
      }
      lVar7 = 0;
      uVar5 = 0;
      do {
        uVar6 = ((uint)(0x19 < (ushort)puVar2[lVar7] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar7]) -
                0x20;
        uVar8 = (uint)(uVar5 >> 8) ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
        uVar5 = (ulonglong)
                (uVar8 >> 8 ^
                *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
        lVar7 = lVar7 + 1;
      } while (iVar4 != (int)lVar7);
    }
    puVar3 = (undefined8 *)FUN_140b80422(&DAT_14c83e158,uVar5,param_1);
    if (puVar3 != param_2) {
      iVar1 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)puVar3 + 0xc) == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar3,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*puVar3,_Src,(longlong)iVar1 * 2);
        }
      }
    }
  }
  FUN_140b9d292(&DAT_14c83bc78,param_1,param_2);
  return;
}



// FUNCTION 14152ebd4 FUN_14152ebd4 body=6590 status=ok
// SIG undefined FUN_14152ebd4(void)

void FUN_14152ebd4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  longlong *plVar10;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  undefined8 local_130;
  undefined *local_128;
  code *local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  ulonglong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  undefined2 uStack_b4;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  int local_b0;
  undefined2 uStack_ac;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  int local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [3];
  uint local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_1468d96f0;
      local_130 = 0;
      local_138 = (undefined4 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_50);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_50);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_50 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_50);
    }
  }
  uStack_58 = 0;
  uStack_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_1468d96f0;
      local_130 = 0;
      local_138 = (undefined4 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_58);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      uStack_58 = (undefined4)uVar1;
      uStack_54 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_58);
    }
  }
  local_5c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_14067a048;
      local_130 = 0;
      local_138 = (undefined4 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_5c);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_5c);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        local_d0 = *(ulonglong *)(pbVar9 + 1);
        pbVar9 = pbVar9 + 9;
        *(byte **)(param_2 + 0x20) = pbVar9;
        local_5c = (uint)local_d0;
        uStack_58 = (undefined4)(local_d0 >> 0x20);
        goto LAB_14152edfa;
      }
      (*pcVar2)(uVar1,param_2,&local_5c);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  local_d0 = (ulonglong)local_5c;
LAB_14152edfa:
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_78);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_78);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_78[0] = *(longlong *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_78);
    }
  }
  plVar10 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar10 = *(longlong **)(param_2 + 0x38);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_1403a682c;
      local_130 = 0;
      local_138 = (undefined4 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_88);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_88);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_88);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      uStack_88 = (undefined4)uVar1;
      uStack_84 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_88);
    }
  }
  uStack_8c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_120 = FUN_1408a629c;
      local_128 = &DAT_14c9520b8;
      local_130 = 0;
      local_138 = (undefined4 *)0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_8c);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_8c);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_8c);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      uStack_8c = (undefined4)uVar1;
      uStack_88 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_8c);
    }
  }
  uStack_90 = uStack_90 & 0xffffff;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_140a4831c;
      local_138 = (undefined4 *)0x1000000008001;
      local_130 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,(longlong)&uStack_90 + 3);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,(longlong)&uStack_90 + 3);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,(longlong)&uStack_90 + 3);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      uStack_90._3_1_ = (undefined1)uVar1;
      uStack_8c = (undefined4)((ulonglong)uVar1 >> 8);
      uStack_88._0_3_ = (undefined3)((ulonglong)uVar1 >> 0x28);
    }
    else {
      (*pcVar2)(uVar1,param_2,(longlong)&uStack_90 + 3);
    }
  }
  iStack_94 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_14067a048;
      local_130 = 0;
      local_138 = (undefined4 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_94);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&iStack_94);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&iStack_94);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      iStack_94 = (int)uVar1;
      uStack_90 = (uint)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&iStack_94);
    }
  }
  iVar8 = iStack_94;
  local_98 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_14067a048;
      local_130 = 0;
      local_138 = (undefined4 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_98);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_98);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      local_98 = (int)uVar1;
      iStack_94 = (int)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_98);
    }
  }
  iVar7 = local_98;
  local_a0 = 0;
  uStack_9c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_1409e12a0;
      local_130 = 0;
      local_138 = (undefined4 *)0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_a0);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_a0);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      local_a0 = (undefined4)uVar1;
      uStack_9c = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_a0);
    }
  }
  iStack_a4 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_14067a048;
      local_130 = 0;
      local_138 = (undefined4 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_a4);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&iStack_a4);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&iStack_a4);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      iStack_a4 = (int)uVar1;
      local_a0 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&iStack_a4);
    }
  }
  iVar6 = iStack_a4;
  local_a8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_14067a048;
      local_130 = 0;
      local_138 = (undefined4 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_a8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_a8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      local_a8 = (int)uVar1;
      iStack_a4 = (int)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_a8);
    }
  }
  iVar5 = local_a8;
  uStack_ac = 0;
  uStack_aa = 0;
  uStack_a9 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_14067a048;
      local_130 = 0;
      local_138 = (undefined4 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_ac);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_ac);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_ac);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      uStack_ac = (undefined2)uVar1;
      uStack_aa = (undefined1)((ulonglong)uVar1 >> 0x10);
      uStack_a9 = (undefined1)((ulonglong)uVar1 >> 0x18);
      local_a8 = (int)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_ac);
    }
  }
  iVar3 = CONCAT13(uStack_a9,CONCAT12(uStack_aa,uStack_ac));
  local_b0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_14067a048;
      local_130 = 0;
      local_138 = (undefined4 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_b0);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_b0);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      local_b0 = (int)uVar1;
      uStack_ac = (undefined2)((ulonglong)uVar1 >> 0x20);
      uStack_aa = (undefined1)((ulonglong)uVar1 >> 0x30);
      uStack_a9 = (undefined1)((ulonglong)uVar1 >> 0x38);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_b0);
    }
  }
  iVar4 = local_b0;
  uStack_b1 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_140a4831c;
      local_138 = (undefined4 *)0x1000000008001;
      local_130 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_b1);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_b1);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_b1);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      uStack_b1 = (undefined1)uVar1;
      local_b0 = (int)((ulonglong)uVar1 >> 8);
      uStack_ac = (undefined2)((ulonglong)uVar1 >> 0x28);
      uStack_aa = (undefined1)((ulonglong)uVar1 >> 0x38);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_b1);
    }
  }
  uStack_b2 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_140a4831c;
      local_138 = (undefined4 *)0x1000000008001;
      local_130 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_b2);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_b2);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_b2);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      uStack_b2 = (undefined1)uVar1;
      uStack_b1 = (undefined1)((ulonglong)uVar1 >> 8);
      local_b0 = (int)((ulonglong)uVar1 >> 0x10);
      uStack_ac = (undefined2)((ulonglong)uVar1 >> 0x30);
    }
    else {
      (*pcVar2)(uVar1,param_2,&uStack_b2);
    }
  }
  local_b8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_128 = (undefined *)FUN_1446ddbd2();
      local_120 = FUN_14067a048;
      local_130 = 0;
      local_138 = (undefined4 *)0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar9 = *(byte **)(param_2 + 0x20);
  if (pbVar9 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar9 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar9];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_b8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_b8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar9 + 1);
      *(byte **)(param_2 + 0x20) = pbVar9 + 9;
      local_b8 = (int)uVar1;
      uStack_b4 = (undefined2)((ulonglong)uVar1 >> 0x20);
      uStack_b2 = (undefined1)((ulonglong)uVar1 >> 0x30);
      uStack_b1 = (undefined1)((ulonglong)uVar1 >> 0x38);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_b8);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_110 = CONCAT44(uStack_9c,local_a0);
  local_138 = &local_c8;
  local_c8 = uStack_88;
  uStack_c4 = uStack_84;
  uStack_c0 = uStack_80;
  uStack_bc = uStack_7c;
  local_d8 = local_b8 != 0;
  local_108 = iVar6 != 0;
  local_100 = iVar5 != 0;
  local_118 = iVar7 != 0;
  local_f8 = iVar3 != 0;
  local_f0 = iVar4 != 0;
  local_e0 = uStack_b2;
  local_e8 = uStack_b1;
  local_120 = (code *)CONCAT71(local_120._1_7_,iVar8 != 0);
  local_128 = (undefined *)CONCAT71(local_128._1_7_,uStack_90._3_1_);
  local_130 = CONCAT44(local_130._4_4_,uStack_8c);
  FUN_141530594(local_50,CONCAT44(uStack_54,uStack_58),(int)local_d0 != 0,plVar10);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141530594 FUN_141530594 body=617 status=ok
// SIG undefined FUN_141530594(void)

void FUN_141530594(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 *param_10,undefined1 param_11,char param_12,
                  undefined1 param_13,undefined1 param_14,undefined1 param_15,undefined1 param_16,
                  undefined1 param_17)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_1 != (longlong *)0x0) &&
     (plVar2 = (longlong *)(**(code **)(*param_1 + 0x5d0))(), plVar2 != (longlong *)0x0)) {
    if (param_12 == '\0') {
      if (((*(byte *)(plVar2 + 0x84) & 2) == 0) ||
         (cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2), cVar1 == '\0')) goto LAB_141530723;
    }
    else if ((char)plVar2[0x2f] != '\x03') goto LAB_141530723;
    if (DAT_14cb61cd0 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_141030f22;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1463b31ae;
      local_a8 = &LAB_1486dca4f;
      local_b0 = &LAB_1464f50a6;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 8;
      local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,0xd70);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(param_1[2] + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) !=
        DAT_14cb61cd0 + 0x30)) {
      lVar3 = FUN_1410d92e0(plVar2);
    }
    else {
      lVar3 = param_1[0x14e];
    }
    if (lVar3 != 0) {
      local_68 = *param_5;
      uStack_64 = param_5[1];
      uStack_60 = param_5[2];
      uStack_5c = param_5[3];
      local_d8 = &local_68;
      local_78 = param_17;
      local_80 = param_16;
      local_88 = param_15;
      local_98 = (undefined1 *)CONCAT71(local_98._1_7_,param_14);
      local_a0 = (code **)CONCAT71(local_a0._1_7_,param_13);
      local_a8 = (undefined1 *)CONCAT71(local_a8._1_7_,param_11);
      local_b0 = param_10;
      local_b8 = (undefined2 *)CONCAT71(local_b8._1_7_,param_9);
      local_c0 = CONCAT71(local_c0._1_7_,param_8);
      local_c8 = CONCAT31(local_c8._1_3_,param_7);
      local_d0 = param_6;
      local_90 = (code *)((ulonglong)local_90 & 0xffffffffffffff00);
      FUN_14058481a(lVar3,param_2,param_3,param_4);
    }
  }
LAB_141530723:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415307fe FUN_1415307fe body=153 status=ok
// SIG undefined FUN_1415307fe(void)

void FUN_1415307fe(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caa7b40,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141530898 FUN_141530898 body=153 status=ok
// SIG undefined FUN_141530898(void)

void FUN_141530898(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Landscape";
  local_38 = 9;
  FUN_140208c1e(&DAT_14caa7c48,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141530932 FUN_141530932 body=97 status=ok
// SIG undefined FUN_141530932(void)

void FUN_141530932(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_14cb51b58 == '\x01') {
    FUN_143bfbf0e(param_1);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      NVSDK_NGX_D3D12_DestroyParameters();
    }
    cVar1 = FUN_1464a7342(param_1);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x528))
                        (*(longlong **)(param_1 + 0x110),0);
      NVSDK_NGX_D3D12_Shutdown1(uVar2);
    }
    DAT_14cb51b58 = '\0';
  }
  FUN_143bfb932(param_1);
  return;
}



// FUNCTION 141530994 FUN_141530994 body=809 status=ok
// SIG undefined FUN_141530994(void)

int * FUN_141530994(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar13) {
      FUN_14482b872(param_1,iVar13);
    }
    iVar10 = (int)param_1[5];
    if (iVar10 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar4 = iVar10 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar6 = param_1 + 2;
    iVar8 = iVar10 + 1;
    iVar12 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar12 = iVar10;
    }
    if (iVar12 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
        if (iVar10 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar4 = iVar10;
        }
        else {
          uVar14 = iVar10 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar14) {
              uVar15 = uVar14;
            }
          }
          else {
            uVar15 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
          }
          uVar9 = FUN_144a3809e(uVar15 << 2,0);
          iVar4 = (int)(uVar9 >> 2);
          iVar8 = -0x20;
          if ((int)uVar14 <= iVar4) {
            iVar8 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar6,iVar4);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar4 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar4 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar11 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar11 = plVar6;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar11 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar11 + (longlong)(iVar4 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar10 & 0x1f;
    puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar13 = (int)param_1[6];
    lVar5 = (longlong)iVar13;
    iVar10 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar10;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  iVar10 = 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar4 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar4 = iVar13;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  plVar6 = (longlong *)(*param_1 + lVar5 * 0x18);
  plVar11 = (longlong *)param_3[1];
  lVar5 = *(longlong *)*param_3;
  *plVar6 = lVar5;
  plVar6[1] = *plVar11;
  *(undefined4 *)(plVar6 + 2) = 0xffffffff;
  uVar14 = (uint)((ulonglong)lVar5 >> 0x10);
  uVar15 = (uint)lVar5 & 0xffff;
  uVar14 = ((uint)lVar5 << 0x10 | uVar15) + (int)((ulonglong)lVar5 >> 0x20) +
           (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar15 >> 4);
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar15 != 0) && (uVar15 != 1)) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar14) * 4);
    if (iVar4 != -1) {
      do {
        plVar11 = (longlong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*plVar11 == lVar5) {
          uVar2 = *(undefined4 *)((longlong)plVar6 + 4);
          lVar5 = plVar6[1];
          uVar3 = *(undefined4 *)((longlong)plVar6 + 0xc);
          *(int *)plVar11 = (int)*plVar6;
          *(undefined4 *)((longlong)plVar11 + 4) = uVar2;
          *(int *)(plVar11 + 1) = (int)lVar5;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uVar3;
          FUN_14860a86e(param_1,iVar13);
          goto LAB_141530b77;
        }
        iVar4 = (int)plVar11[2];
      } while (iVar4 != -1);
    }
  }
  if (3 < uVar15) {
    uVar9 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar5 & 0x1f);
  }
  iVar4 = iVar13;
  if (((int)uVar15 < 1) || (iVar10 <= (int)param_1[9])) {
    uVar14 = (int)param_1[9] - 1U & uVar14;
    *(uint *)((longlong)plVar6 + 0x14) = uVar14;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(plVar6 + 2) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    FUN_141530cbe(param_1);
  }
LAB_141530b77:
  *param_2 = iVar4;
  return param_2;
}



// FUNCTION 141530cbe FUN_141530cbe body=594 status=ok
// SIG undefined FUN_141530cbe(void)

void FUN_141530cbe(longlong *param_1)

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
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_141530ec7;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_141530ec7:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141530f12 FUN_141530f12 body=43 status=ok
// SIG undefined FUN_141530f12(void)

undefined8 * FUN_141530f12(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_144830b78(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 141530f3e FUN_141530f3e body=775 status=ok
// SIG undefined FUN_141530f3e(void)

void FUN_141530f3e(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_130;
  undefined1 local_128;
  DWORD local_114;
  LARGE_INTEGER local_110 [4];
  longlong local_f0;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 local_d7;
  longlong local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  longlong local_a0;
  undefined4 local_98;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_145d0c2fa();
  lVar8 = FUN_1411df190(param_1);
  lVar9 = param_1[0x6b];
  *(int *)(param_1 + 0x6b) = (int)lVar9 + 1;
  if ((int)lVar9 == 0) {
    (**(code **)(*param_1 + 0x2c0))(param_1);
  }
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x479);
  *(undefined1 *)((longlong)param_1 + 0x479) = 1;
  QueryPerformanceCounter(local_110);
  if ((longlong)*(int *)(lVar8 + 0x40) != 0) {
    lVar9 = *(longlong *)(lVar8 + 0x38);
    dVar5 = (double)local_110[0].QuadPart * DAT_14c83f420 + 16777216.0;
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar8 = (longlong)*(int *)(lVar8 + 0x40) * 0x88;
    do {
      FUN_145d54c92(local_110,lVar9);
      cVar6 = (**(code **)(*param_1 + 0x480))(param_1,local_110);
      if (cVar6 != '\0') {
        local_130 = local_d7;
        local_138 = local_d8;
        local_128 = 0;
        (**(code **)(*param_1 + 0x2a0))(param_1,local_110[0].QuadPart,&local_a0,local_e0);
        (**(code **)(*param_1 + 1000))(param_1,local_110[0].QuadPart,local_b0);
        QueryPerformanceCounter(&local_88);
        if (dVar5 + 0.032999999821186066 < (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) {
          bVar10 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar3 = *(int *)(lVar4 + 0xc60), iVar3 != 2)) {
            if (iVar3 == 1) {
              local_114 = FUN_140ad26c0(1);
              DVar7 = GetCurrentThreadId();
              bVar10 = local_114 == DVar7;
            }
            else {
              bVar10 = false;
            }
          }
          FUN_1400e427a(bVar10);
          QueryPerformanceCounter(&local_88);
          dVar5 = (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0;
        }
      }
      FUN_1447a1747(local_a0,local_98);
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      FUN_140861e20(local_c0,local_b8);
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      FUN_14111bf7d(local_d0,local_c8);
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
      if (local_f0 != 0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 0x88;
      lVar8 = lVar8 + -0x88;
    } while (lVar8 != 0);
  }
  plVar1 = param_1 + 0x6b;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 == 0) {
    (**(code **)(*param_1 + 0x2c8))(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x479) = uVar2;
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141531246 FUN_141531246 body=669 status=ok
// SIG undefined FUN_141531246(void)

undefined8 FUN_141531246(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte *pbVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    if ((*(int *)(param_1 + 0xf8) == -1) || (*(longlong *)(param_1 + 8) == 0)) {
LAB_1415312ac:
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
      if ((longlong)*(int *)(param_1 + 0x20) != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar7) == 0) goto LAB_1415312ac;
          lVar7 = lVar7 + 8;
        } while ((longlong)*(int *)(param_1 + 0x20) * 8 != lVar7);
      }
    }
    if ((*(int *)(param_1 + 0x1f8) == -1) || (*(longlong *)(param_1 + 0x108) == 0)) {
LAB_14153130d:
      bVar6 = 0;
    }
    else {
      bVar6 = 8;
      if ((longlong)*(int *)(param_1 + 0x120) != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x118) + lVar7) == 0) goto LAB_14153130d;
          lVar7 = lVar7 + 8;
        } while ((longlong)*(int *)(param_1 + 0x120) * 8 != lVar7);
      }
    }
    local_21 = (*(int *)(param_1 + 0x214) != -1) << 5 |
               (*(longlong *)(param_1 + 0x200) != 0) * '\x02' |
               (*(int *)(param_1 + 0x210) != -1) << 2 | bVar5 | bVar6 |
               (*(longlong *)(param_1 + 0x208) != 0) << 4;
  }
  puVar2 = (ulonglong *)param_2[1];
  pbVar1 = (byte *)*puVar2 + 1;
  if ((byte *)puVar2[1] < pbVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
  }
  else {
    local_21 = *(byte *)*puVar2;
    *puVar2 = (ulonglong)pbVar1;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x218),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x218) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  if ((local_21 & 1) != 0) {
    FUN_1458ba5e9(param_2,param_1);
  }
  if ((local_21 & 4) != 0) {
    puVar4 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x210),4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x210) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_21 & 2) != 0) {
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x200);
  }
  if ((local_21 & 8) != 0) {
    FUN_1458ba5e9(param_2,param_1 + 0x100);
  }
  if ((local_21 & 0x20) != 0) {
    puVar4 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x214),4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x214) = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  if ((local_21 & 0x10) != 0) {
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x208);
  }
  *param_4 = 1;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}


